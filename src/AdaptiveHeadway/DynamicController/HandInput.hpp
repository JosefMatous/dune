#ifndef ADAPTIVE_HEADWAY_DYNAMICCONTROLLER_HANDINPUT_HPP_
#define ADAPTIVE_HEADWAY_DYNAMICCONTROLLER_HANDINPUT_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "ODE.hpp"
#include "ZOH.hpp"
#include <AdaptiveHeadway/Utility.hpp>

namespace AdaptiveHeadway
{
  namespace DynamicController
  {
    class HandInputTransform
    {
      public:
        //! Hand transform parameters
        double k_e, e0; 

        //! Disturbance observer bandwidth
        double wn;

        //! Roll controller gains
        double k_p_roll, k_d_roll;

        HandInputTransform(Parsers::Config& cfg):
          m_ode(cfg)
        {
          k_e = 0.5;
          e0 = 1.0;
          wn = 1.0;
          m_disturbance_observer.is_initialized = false;
        }

        //! Performs the inverse input transformation and updates the disturbance observer
        void
        step(IMC::DesiredSpeed &thrust, IMC::DesiredControl &torque, IMC::HandLog &log, const IMC::HandPosIn &input, const IMC::EstimatedState &est)
        {
          if (input.type != IMC::INPUT_ACCELERATION)
            return;

          log.input.set(input);
          m_ode.setState(est);

          // Get vehicle's orientation
          float R[9];
          rotation_matrix(R, est);
          Vector3D<float> gamma, e1;
          e1.x = 1.0; // e1 = [1;0;0]
          e1.y = 0.0;
          e1.z = 0.0;
          timesR(gamma, R, e1); // gamma = R * [1;0;0]

          // Hand transform
          Vector3D<double> x_err; // position error
          x_err.x = est.x;
          x_err.y = est.y;
          x_err.z = est.depth;

          const IMC::TrajectoryReference *traj = (input.reference.isNull()) ? input.reference.get() : nullptr;
          if (traj)
          {
            x_err.x -= traj->r_x;
            x_err.y -= traj->r_y;
            x_err.z -= traj->r_z;
          }
          double k_e2 = std::pow(k_e, 2.0); // k_e^2
          double e = std::sqrt(std::pow(e0, 2.0) + k_e2*dot(x_err, x_err)); // hand length

          log.p_x = est.x + e*gamma.x; // Hand position x_hand = x + e*gamma
          log.p_y = est.y + e*gamma.y;
          log.p_z = est.depth + e*gamma.z;

          // Hand transform -- first derivative
          Vector3D<double> x_err_dot, omega_e1, gamma_dot;
          x_err_dot.x = est.vx;
          x_err_dot.y = est.vy;
          x_err_dot.z = est.vz;
          if (traj)
          {
            x_err_dot.x -= traj->v_x;
            x_err_dot.y -= traj->v_y;
            x_err_dot.z -= traj->v_z;
          }
          omega_e1.x = 0.0;
          omega_e1.y = est.r;
          omega_e1.z = -est.q;
          timesR(gamma_dot, R, omega_e1); // gamma_dot = R * (omega x [1;0;0])
          double e_dot = k_e2*dot(x_err_dot, x_err) / e;

          log.v_x = est.vx + e_dot*gamma.x + e*gamma_dot.x; // Hand velocity x_hand_dot = x_dot + e_dot*gamma + e*gamma_dot
          log.v_y = est.vy + e_dot*gamma.y + e*gamma_dot.y;
          log.v_z = est.vz + e_dot*gamma.z + e*gamma_dot.z;

          // Disturbance observer
          if (m_disturbance_observer.is_initialized)
          {
            disturbance_observer_zoh(log, R);
          }
          else // initialize
          {
            m_delta_t.reset();
            m_disturbance_observer.x_hat.x = log.p_x;
            m_disturbance_observer.x_hat.y = log.p_y;
            m_disturbance_observer.x_hat.z = log.p_z;
            m_disturbance_observer.v_hat.x = log.v_x;
            m_disturbance_observer.v_hat.y = log.v_y;
            m_disturbance_observer.v_hat.z = log.v_z;
            zeros(m_disturbance_observer.d_hat);
            m_disturbance_observer.is_initialized = true;
          }

          log.p_hat_x = m_disturbance_observer.x_hat.x;
          log.p_hat_y = m_disturbance_observer.x_hat.y;
          log.p_hat_z = m_disturbance_observer.x_hat.z;
          log.v_hat_x = m_disturbance_observer.v_hat.x;
          log.v_hat_y = m_disturbance_observer.v_hat.y;
          log.v_hat_z = m_disturbance_observer.v_hat.z;
          log.d_x = m_disturbance_observer.d_hat.x;
          log.d_y = m_disturbance_observer.d_hat.y;
          log.d_z = m_disturbance_observer.d_hat.z;

          // Hand transform -- zero-input second derivative
          Vector3D<double> v, w;
          v.x = est.u;
          v.y = est.v;
          v.z = est.w;
          w.x = est.p;
          w.y = est.q;
          w.z = est.r;
          Vector3D<double> v_dot0, w_dot0;
          m_ode.vehicleODE(v_dot0, w_dot0);
          Vector3D<double> x_ddot0, x_err_ddot0, tmp;
          cross(tmp, w, v);
          tmp += v_dot0;
          timesR(x_ddot0, R, tmp); // x_ddot0 = R*(cross(w, v) + v_dot0)
          x_err_ddot0 = x_ddot0; // x_err_ddot0 = x_ddot0 - traj.a
          if (traj)
          {
            x_err_ddot0.x -= traj->a_x;
            x_err_ddot0.y -= traj->a_y;
            x_err_ddot0.z -= traj->a_z;
          }
          double einv = std::pow(e, -1);
          double e_ddot0 = k_e2*(dot(x_err_ddot0, x_err) + dot(x_err_dot, x_err_dot))*einv - std::pow(e_dot, 2)*einv;
          Vector3D<double> gamma_ddot0;
          cross(tmp, w, omega_e1);
          tmp.y += w_dot0.z;
          tmp.z -= w_dot0.y;
          timesR(gamma_ddot0, R, tmp); // gamma_ddot0 = R*(w x (w x e1)) + R*(w_dot0 x e1)
          Vector3D<double> x_e_ddot0 = x_ddot0 + e_ddot0*gamma + (2*e_dot)*gamma_dot + e*gamma_ddot0;

          log.a_x = x_e_ddot0.x;
          log.a_y = x_e_ddot0.y;
          log.a_z = x_e_ddot0.z;

          // Inverse input transform
          double c_u = std::pow(1.0 + k_e2*dot(gamma, x_err)*einv, -1);
          Vector3D<double> mu;
          mu.x = input.u_x;
          mu.y = input.u_y;
          mu.z = input.u_z;
          //mu -= x_e_ddot0; //  output linearization
          Vector3D<double> RTmu;
          timesRinv(RTmu, R, mu);
          RTmu -= m_disturbance_observer.d_hat; // disturbance compensation

          RTmu.x *= c_u;
          RTmu.y *= einv;
          RTmu.z *= -einv;

          // Roll control
          double f_p = -k_p_roll*std::sin(est.phi) - k_d_roll*est.p;

          // Control allocation
          thrust.value = m_ode.findEngineActuation(RTmu.x);
          m_ode.findTorques(torque, f_p, RTmu.z, RTmu.y);
        }

      protected:
        //! Vehicle ODEs
        ODE m_ode;

        //! Disturbance observer state
        struct
        {
          Vector3D<double> x_hat, v_hat, d_hat;
          bool is_initialized;
        } m_disturbance_observer;

        Delta m_delta_t;

        //! Updates the disturbance observer state using ZOH
        void
        disturbance_observer_zoh(IMC::HandLog &log, const float* R)
        {
          //***************************************************************************
          // Disturbance observer ODE:
          //   (d/dt) x_hat = v_hand + l1*(x_hand - x_hat),
          //   (d/dt) v_hat = mu + R*d_hat + l2*(x_hand - x_hat),
          //   (d/dt) d_hat = l3*R'*(x_hand - x_hat)
          // where
          //   l1 = 3*wn, l2 = 3*wn^2, l3 = wn^3
          //
          // Here, we discretize the system using zero-order hold
          //***************************************************************************

          // Transition matrix coefficients
          double A[9], B[9];
          double Ts = m_delta_t.getDelta();
          zoh_func(Ts, wn, A, B);

          Vector3D<double> x_hand, v_hand, mu;
          x_hand.x = log.p_x;
          x_hand.y = log.p_y;
          x_hand.z = log.p_z;
          v_hand.x = log.v_x;
          v_hand.y = log.v_y;
          v_hand.z = log.v_z;
          const IMC::HandPosIn *input = log.input.get();
          mu.x = input->u_x;
          mu.y = input->u_y;
          mu.z = input->u_z;

          Vector3D<double> x_hat_new, v_hat_new, tmp;
          timesR(tmp, R, m_disturbance_observer.d_hat);
          x_hat_new = A[0]*m_disturbance_observer.x_hat + A[3]*m_disturbance_observer.v_hat + A[6]*tmp + B[0]*x_hand + B[3]*v_hand + B[6]*mu;
          v_hat_new = A[1]*m_disturbance_observer.x_hat + A[4]*m_disturbance_observer.v_hat + A[7]*tmp + B[1]*x_hand + B[4]*v_hand + B[7]*mu;

          // d_hat = A[2]*R'*x_hat + A[5]*R'*v_hat + A[8]*d_hat + B[2]*R'*x_hand + B[5]*R'*x_hand + B[8]*R'*x_hand
          m_disturbance_observer.d_hat *= A[8];
          timesRinv(tmp, R, m_disturbance_observer.x_hat);
          m_disturbance_observer.d_hat += A[2]*tmp;
          timesRinv(tmp, R, m_disturbance_observer.v_hat);
          m_disturbance_observer.d_hat += A[5]*tmp;
          timesRinv(tmp, R, x_hand);
          m_disturbance_observer.d_hat += B[2]*tmp;
          timesRinv(tmp, R, v_hand);
          m_disturbance_observer.d_hat += B[5]*tmp;
          timesRinv(tmp, R, mu);
          m_disturbance_observer.d_hat += B[8]*tmp;

          // Write back
          m_disturbance_observer.x_hat = x_hat_new;
          m_disturbance_observer.v_hat = v_hat_new;
        }
      };  
  }
}

#endif
