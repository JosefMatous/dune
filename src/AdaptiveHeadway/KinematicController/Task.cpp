//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Josef Matous                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <AdaptiveHeadway/Utility.hpp>

using DUNE_NAMESPACES;

namespace AdaptiveHeadway
{
  namespace KinematicController
  {
    struct Arguments
    {
      double e0, k_e, k_pitch, pitch_offset, max_pitch, wn;
      double k_ff_horz, k_ff_vert;
      double min_speed, max_speed;
    };

    const uint32_t c_control_loops = CL_YAW_RATE | CL_PITCH | CL_SPEED;

    struct Task: public DUNE::Control::PathController
    {
      //! Outgoing desired heading message
      IMC::DesiredHeadingRate m_hrate;
      //! Outgoing desired pitch message
      IMC::DesiredPitch m_pitch;
      //! Outgoing desired speed
      IMC::DesiredSpeed m_speed;
      //! Task arguments.
      Arguments m_args;

      //! Logging
      IMC::HandLog m_log;

      bool m_active, m_has_input;
      IMC::HandPosIn m_input;

      //! Disturbance observer
      struct ObserverState
      {
        //! Hand position estimate
        Vector3D<double> x_hat;
        //! Disturbance estimate
        Vector3D<double> d_hat;
      };
      ObserverState m_observer_state;
      bool m_observer_initialized;

      //! Timer
      Delta m_delta_t;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx)
      {
        bind<IMC::HandPosIn>(this);
        bind<IMC::ExperimentControl>(this);

        param("Minimum Hand Length", m_args.e0)
        .units(Units::Meter)
        .minimumValue("0.0")
        .defaultValue("1.0");

        param("Headway Gain", m_args.k_e)
        .minimumValue("0.0")
        .maximumValue("1.0")
        .defaultValue("0.5");

        param("Pitch Angle Gain", m_args.k_pitch)
        .minimumValue("0.0")
        .defaultValue("1.0");

        param("Pitch Angle Offset", m_args.pitch_offset)
        .units(Units::Degree)
        .defaultValue("-3.0");

        param("Maximum Pitch Angle", m_args.max_pitch)
        .units(Units::Degree)
        .minimumValue("5.0")
        .defaultValue("15.0");

        param("Minimum Speed", m_args.min_speed)
        .units(Units::MeterPerSecond)
        .defaultValue("0.5");

        param("Maximum Speed", m_args.max_speed)
        .units(Units::MeterPerSecond)
        .defaultValue("3.0");

        param("Disturbance Observer Bandwidth", m_args.wn)
        .minimumValue("0.0")
        .defaultValue("5.0");

        param("Feedforward Gain -- Horizontal", m_args.k_ff_horz)
        .minimumValue("0.0")
        .defaultValue("0.1");

        param("Feedforward Gain -- Vertical", m_args.k_ff_vert)
        .minimumValue("0.0")
        .defaultValue("0.5");

        // Set unused log entries to NaN
        m_log.a_x = NAN;
        m_log.a_y = NAN;
        m_log.a_z = NAN;
      }

      inline void
      reset()
      {
        m_has_input = false;
        m_observer_initialized = false;
        m_delta_t.clear();
      }

      inline bool
      hasSpecificZControl(void)
      {
        return true;
      }

      void
      onUpdateParameters(void)
      {
        PathController::onUpdateParameters();
      }

      void
      onEntityReservation(void)
      {
        PathController::onEntityReservation();
      }

      void
      onPathActivation(void)
      {
        // Activate cotrollers.
        enableControlLoops(c_control_loops);
        reset();
      }

      void
      onPathDeactivation(void)
      {
        // Activate cotrollers.
        disableControlLoops(c_control_loops);
        reset();
      }

      void
      consume(const IMC::ExperimentControl *msg)
      {
        if (msg->delay <= 0.)
          {
            m_active = (msg->start == IMC::BOOL_TRUE);
            debug("Changing active state");
          }
      }

      void
      consume(const IMC::HandPosIn *msg)
      {
        m_input = *msg;
        m_has_input = true;
        m_log.input.set(*msg);
      }

      //! Execute a path control step
      //! From base class PathController
      void
      step(const IMC::EstimatedState& state, const TrackingState& ts)
      {
        // Switch between waypoint tracking and HandPosIn
        bool use_input = (m_active && m_has_input && m_input.type == IMC::INPUT_VELOCITY);

        // Get vehicle's orientation
        float R[9];
        rotation_matrix(R, state);
        Vector3D<float> gamma; // Forward direction
        gamma.x = R[0];
        gamma.y = R[1];
        gamma.z = R[2];

        // Get hand position
        Vector3D<double> x_err; // position error
        Vector3D<double> x_hand; // hand position
        IMC::TrajectoryReference *m_ref;
        if (use_input)
        {
          m_ref = m_input.reference.get();
          x_err.x = state.x - m_ref->r_x;
          x_err.y = state.y - m_ref->r_y;
          x_err.z = state.depth - m_ref->r_z;
          spew("Trajectory control");
        }
        else
        {
          x_err.x = state.x - ts.end.x;
          x_err.y = state.y - ts.end.y;
          x_err.z = state.depth - ts.end.z;
          spew("Waypoint control");
        }
        double k_e2 = std::pow(m_args.k_e, 2.0); // k_e^2
        double e = std::sqrt(std::pow(m_args.e0, 2.0) + k_e2*dot(x_err, x_err)); // hand length

        x_hand.x = state.x + gamma.x*e;
        x_hand.y = state.y + gamma.y*e;
        x_hand.z = state.depth + gamma.z*e;

        m_log.p_x = x_hand.x;
        m_log.p_y = x_hand.y;
        m_log.p_z = x_hand.z;

        // Get reference velocity
        Vector3D<double> v_ref; // reference velocity
        Vector3D<double> v_traj; // trajectory velocity
        if (use_input)
        {
          v_ref.x = m_input.u_x;
          v_ref.y = m_input.u_y;
          v_ref.z = m_input.u_z;

          v_traj.x = m_ref->v_x;
          v_traj.y = m_ref->v_y;
          v_traj.z = m_ref->v_z;
        }
        else
        {
          v_ref.x = ts.end.x - x_hand.x;
          v_ref.y = ts.end.y - x_hand.y;
          v_ref.z = ts.end.z - x_hand.z;

          double U = 1.0 / norm(v_ref);
          v_ref.x *= U;
          v_ref.y *= U;
          v_ref.z *= U;

          v_traj.x = 0.;
          v_traj.y = 0.;
          v_traj.z = 0.;
        }

        // Hand velocity
        Vector3D<double> x_err_dot, omega_e1, gamma_dot, v_hand;
        x_err_dot.x = state.vx - v_traj.x;
        x_err_dot.y = state.vy - v_traj.y;
        x_err_dot.z = state.vz - v_traj.z;
        omega_e1.x = 0.0;
        omega_e1.y = state.r;
        omega_e1.z = -state.q;
        timesR(gamma_dot, R, omega_e1); // gamma_dot = R * (omega x [1;0;0])

        double e_dot = k_e2*dot(x_err_dot, x_err) / e;

        v_hand.x = state.vx + gamma_dot.x*e + gamma.x*e_dot;
        v_hand.y = state.vy + gamma_dot.y*e + gamma.y*e_dot;
        v_hand.z = state.vz + gamma_dot.z*e + gamma.z*e_dot;

        m_log.v_x = v_hand.x;
        m_log.v_y = v_hand.y;
        m_log.v_z = v_hand.z;

        m_log.v_hat_x = v_ref.x;
        m_log.v_hat_y = v_ref.y;
        m_log.v_hat_z = v_ref.z;

        // Disturbance observer
        if (!m_observer_initialized)
        {
          // Initialize
          initialize_observer(x_hand);
        }
        else
        {
          disturbance_observer_zoh(state, x_hand, v_hand, R);
        }

        m_log.p_hat_x = m_observer_state.x_hat.x;
        m_log.p_hat_y = m_observer_state.x_hat.y;
        m_log.p_hat_z = m_observer_state.x_hat.z;
        m_log.d_x = m_observer_state.d_hat.x;
        m_log.d_y = m_observer_state.d_hat.y;
        m_log.d_z = m_observer_state.d_hat.z;

        // Disturbance compensation
        v_ref.x -= m_observer_state.d_hat.x; 
        v_ref.y -= m_observer_state.d_hat.y;
        v_ref.z -= m_observer_state.d_hat.z;

        // Feedforward
        if (use_input)
        {
          v_ref.x += m_args.k_ff_horz * m_ref->a_x;
          v_ref.y += m_args.k_ff_horz * m_ref->a_y;
          v_ref.z += m_args.k_ff_vert * m_ref->a_z;
        }

        /* Feedback linearization */
        Vector3D<double> v_lat, Rv_lat; // lateral velocities
        v_lat.x = 0.;
        v_lat.y = state.v;
        v_lat.z = state.w;
        timesR(Rv_lat, R, v_lat);

        Vector3D<double> control_input; // mu = R'*v_ref - v_lat - (k_e^2*dot(Rv_lat - v_traj, x_err)/e)*[1;0;0]
        timesRinv(control_input, R, v_ref); // R'*v_ref
        control_input.y -= state.v;
        control_input.z -= state.w; // - v_lat
        Rv_lat.x -= v_traj.x;
        Rv_lat.y -= v_traj.y;
        Rv_lat.z -= v_traj.z; // Rv_lat - v_traj
        control_input.x -= k_e2 * dot(Rv_lat, x_err) / e; // -(k_e^2*dot(Rv_lat - v_traj, x_err)/e)*[1;0;0]

        m_speed.value = control_input.x / (1.0 + k_e2 * dot(x_err, gamma) / e);
        trimValueMod(m_speed.value, m_args.min_speed, m_args.max_speed);
        m_hrate.value = control_input.y / e;
        m_pitch.value = Angles::radians(m_args.pitch_offset) - m_args.k_pitch * std::asin(control_input.z / norm(control_input));
        trimValueMod(m_pitch.value, -Angles::radians(m_args.max_pitch), Angles::radians(m_args.max_pitch));

        dispatch(m_speed);
        dispatch(m_hrate);
        dispatch(m_pitch);

        dispatch(m_log);
      }

      /* Disturbance observer */
      inline void
      initialize_observer(const Vector3D<double>& x_hand)
      {
        m_observer_state.x_hat = x_hand;
        m_observer_state.d_hat.x = 0.0;
        m_observer_state.d_hat.y = 0.0;
        m_observer_state.d_hat.z = 0.0;

        m_observer_initialized = true;

        m_delta_t.reset();
      }

      void
      disturbance_observer_zoh(const IMC::EstimatedState& vehicle_state, const Vector3D<double>& x_hand, const Vector3D<double>& v_hand, const float* R)
      {
        //***************************************************************************
        // Disturbance observer ODE:
        //   (d/dt) x_hat = v_hand + d_hat + l1*(x_hand - x_hat),
        //   (d/dt) d_hat = cross(R*[p;q;r], d_hat) + l2*(x_hand - x_hat),
        // where
        //   l1 = 2*m_args.wn, l2 = m_args.wn^2
        //
        // In matrix-vector form:
        //   (d/dt) [x_hat; d_hat] = A*[x_hat; d_hat] + B*[x_hand; v_hand],
        // where
        //   A = [-l1*I, I; -l2*I, skew(R*[p;q;r])]
        //   B = [-l1*I, I; -l2*I, 0]
        //
        // We perform ZOH discretization, but because the exact matrix exponential
        // of A (and its integral) is impossible to find analytically, we use an
        // approximation. The transition matrix of the discretized system is 
        // calculated as:
        //   A_d = A_d1 + [0, 0; 0, skew(R*[p;q;r])*Ts],
        //   B_d = int_0^Ts expm([-l1*I, I; -l2*I, 0] * t) * B dt,
        // where 
        //   A_d1 = expm([-l1*I, I; -l2*I, 0] * Ts),
        // and Ts is the sampling time.
        
        // Transition matrix coefficients
        double Ts = m_delta_t.getDelta();
        double wn_d = Ts*m_args.wn;
        double e = std::exp(-wn_d);
        // A_d1 = [1-Ts*wn, Ts; -Ts*wn^2, Ts*wn+1] * exp(-Ts*wn)
        double a_11 = (1.0 - wn_d) * e;
        double a_12 = Ts * e;
        double a_21 = -a_12 * std::pow(m_args.wn, 2.0);
        double a_22 = (1.0 + wn_d) * e;
        // B_d = [Ts*wn*exp(-Ts*wn) - exp(-Ts*wn) + 1, Ts*exp(-Ts*wn); Ts*wn^2*exp(-Ts*wn), exp(-Ts*wn) + Ts*wn*exp(-Ts*wn) - 1]
        double b_11 = 1.0 - a_11;
        //double b_12 = a_12;
        //double b_21 = -a_21;
        double b_22 = a_22 - 1.0;

        // First, we calculate A_d1*[x_hat; d_hat] + B_d*[x_hand; v_hand]
        Vector3D<double> x_hat_new = a_11*m_observer_state.x_hat + a_12*(m_observer_state.d_hat + v_hand) + b_11*x_hand;
        Vector3D<double> d_hat_new = a_21*(m_observer_state.x_hat - x_hand) + a_22*m_observer_state.d_hat + b_22*v_hand;

        // Next, we perform `d_hat += Ts*skew(R*[p;q;r])*d_hat`, which is equivalent to `d_hat += cross(R * [p; q; r] * Ts, d_hat)`
        Vector3D<double> tmp, R_omega;
        tmp.x = vehicle_state.p * Ts; // tmp = [p; q; r] * Ts
        tmp.y = vehicle_state.q * Ts;
        tmp.z = vehicle_state.r * Ts;
        timesR(R_omega, R, tmp); // R_omega = R * [p; q; r] * Ts
        cross(tmp, R_omega, m_observer_state.d_hat); // tmp = cross(R * [p; q; r] * Ts, d_hat)
        d_hat_new += tmp;
        
        m_observer_state.x_hat = x_hat_new;
        m_observer_state.d_hat = d_hat_new;
      }
    };
  }
}

DUNE_TASK
