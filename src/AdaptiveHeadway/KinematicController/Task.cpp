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
      double e0, k_e, k_pitch, pitch_offset, max_pitch, l1, l2;
      //! Number of integration steps in the disturbance observer
      int N_steps;
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
      ObserverState m_last_state;
      Vector3D<double> m_last_x_hand, m_last_v_hand;
      Vector3D<float> m_last_angles, m_last_omega;
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

        param("Disturbance Observer Proportional Gain", m_args.l1)
        .minimumValue("0.0")
        .defaultValue("10.0");

        param("Disturbance Observer Derivative Gain", m_args.l2)
        .minimumValue("0.0")
        .defaultValue("25.0");

        param("Disturbance Observer Integrator Steps", m_args.N_steps)
        .minimumValue("1")
        .defaultValue("4");

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
        double e = std::sqrt(m_args.e0*m_args.e0 + m_args.k_e*m_args.k_e*dot(x_err, x_err)); // hand length

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

        double e_dot = m_args.k_e*m_args.k_e*dot(x_err_dot, x_err) / e;

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
          m_last_state.x_hat.x = x_hand.x;
          m_last_state.x_hat.y = x_hand.y;
          m_last_state.x_hat.z = x_hand.z;

          m_last_state.d_hat.x = 0.;
          m_last_state.d_hat.y = 0.;
          m_last_state.d_hat.z = 0.;

          m_observer_initialized = true;

          m_delta_t.reset();
        }
        else
        {
          disturbance_observer_rk4(m_last_state, m_delta_t.getDelta(), m_args.N_steps, state, x_hand, v_hand);
        }

        m_log.p_hat_x = m_last_state.x_hat.x;
        m_log.p_hat_y = m_last_state.x_hat.y;
        m_log.p_hat_z = m_last_state.x_hat.z;
        m_log.d_x = m_last_state.d_hat.x;
        m_log.d_y = m_last_state.d_hat.y;
        m_log.d_z = m_last_state.d_hat.z;

        // Disturbance compensation
        //v_ref.x -= m_last_state.d_hat.x; 
        //v_ref.y -= m_last_state.d_hat.y;
        //v_ref.z -= m_last_state.d_hat.z;

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
        control_input.x -= m_args.k_e*m_args.k_e * dot(Rv_lat, x_err) / e; // -(k_e^2*dot(Rv_lat - v_traj, x_err)/e)*[1;0;0]

        m_speed.value = control_input.x / (1.0 + m_args.k_e*m_args.k_e * dot(x_err, gamma) / e);
        trimValueMod(m_speed.value, m_args.min_speed, m_args.max_speed);
        m_hrate.value = control_input.y / e;
        m_pitch.value = Angles::radians(m_args.pitch_offset) - m_args.k_pitch * std::asin(control_input.z / norm(control_input));
        trimValueMod(m_pitch.value, -Angles::radians(m_args.max_pitch), Angles::radians(m_args.max_pitch));

        dispatch(m_speed);
        dispatch(m_hrate);
        dispatch(m_pitch);

        dispatch(m_log);

        m_last_x_hand = x_hand;
        m_last_v_hand = v_hand;
        m_last_omega.x = state.p;
        m_last_omega.y = state.q;
        m_last_omega.z = state.r;
        m_last_angles.x = state.phi;
        m_last_angles.y = state.theta;
        m_last_angles.z = state.psi;
      }

      /* Disturbance observer */
      inline float
      interpolate_angle(float a1, float a2, double t_rel)
      {
        float delta_a = Angles::normalizeRadian(a2 - a1);
        return Angles::normalizeRadian(a1 + t_rel*delta_a);
      }

      void
      disturbance_observer_ode(ObserverState& output, double t_rel, const ObserverState& observer_state, const IMC::EstimatedState& vehicle_state, const Vector3D<double>& x_hand_current, const Vector3D<double>& v_hand_current)
      {
        float phi = interpolate_angle(m_last_angles.x, vehicle_state.phi, t_rel);
        float theta = interpolate_angle(m_last_angles.y, vehicle_state.theta, t_rel);
        float psi = interpolate_angle(m_last_angles.z, vehicle_state.psi, t_rel);
        float R[9];
        rotation_matrix(R, phi, theta, psi);
        Vector3D<double> x_hand_err;
        double t_rel_i = 1.0 - t_rel;
        x_hand_err.x = t_rel_i*m_last_x_hand.x + t_rel*x_hand_current.x - observer_state.x_hat.x;
        x_hand_err.y = t_rel_i*m_last_x_hand.y + t_rel*x_hand_current.y - observer_state.x_hat.y;
        x_hand_err.z = t_rel_i*m_last_x_hand.z + t_rel*x_hand_current.z - observer_state.x_hat.z;

        // Position estimate ODE: (d/dt)x_hat = v_hand + d_hat + l1*(x_hand - x_hat)
        output.x_hat.x = t_rel_i*m_last_v_hand.x + t_rel*v_hand_current.x + observer_state.d_hat.x + m_args.l1*x_hand_err.x;
        output.x_hat.y = t_rel_i*m_last_v_hand.y + t_rel*v_hand_current.y + observer_state.d_hat.y + m_args.l1*x_hand_err.y;
        output.x_hat.z = t_rel_i*m_last_v_hand.z + t_rel*v_hand_current.z + observer_state.d_hat.z + m_args.l1*x_hand_err.z;

        // Disturbance estimate ODE: (d/dt)d_hat = cross(R*omega, d_hat) + l2*(x_hand - x_hat)
        Vector3D<double> omega, Romega;
        omega.x = t_rel_i*m_last_omega.x + t_rel*vehicle_state.p;
        omega.y = t_rel_i*m_last_omega.y + t_rel*vehicle_state.q;
        omega.z = t_rel_i*m_last_omega.z + t_rel*vehicle_state.r;
        timesR(Romega, R, omega);

        cross(output.d_hat, Romega, observer_state.d_hat);
        output.d_hat.x += m_args.l2*x_hand_err.x;
        output.d_hat.y += m_args.l2*x_hand_err.y;
        output.d_hat.z += m_args.l2*x_hand_err.z;
      }

      void
      disturbance_observer_rk4(ObserverState& observer_state, double Ts, int N_steps, const IMC::EstimatedState& vehicle_state, const Vector3D<double>& x_hand_current, const Vector3D<double>& v_hand_current)
      {
        double delta_t_rel = 1.0 / N_steps;
        double h = Ts / N_steps;
        double h2 = 0.5 * h;
        double h3 = 0.33333333333333333333333333333333333333333333333333333 * h;
        double h6 = 0.16666666666666666666666666666666666666666666666666667 * h;

        ObserverState k1, k2, k3, k4, y1, y2, y3;
        for (int i = 0; i < N_steps; i++)
        {
          // k1 = f(t, x)
          disturbance_observer_ode(k1, delta_t_rel*i, observer_state, vehicle_state, x_hand_current, v_hand_current);
          // k2 = f(t+h/2, x + h/2*k1)
          y1.x_hat.x = observer_state.x_hat.x + h2*k1.x_hat.x;
          y1.x_hat.y = observer_state.x_hat.y + h2*k1.x_hat.y;
          y1.x_hat.z = observer_state.x_hat.z + h2*k1.x_hat.z;
          y1.d_hat.x = observer_state.d_hat.x + h2*k1.d_hat.x;
          y1.d_hat.y = observer_state.d_hat.y + h2*k1.d_hat.y;
          y1.d_hat.z = observer_state.d_hat.z + h2*k1.d_hat.z;
          disturbance_observer_ode(k2, delta_t_rel*(0.5 + i), y1, vehicle_state, x_hand_current, v_hand_current);
          // k3 = f(t+h/2, x + h/2*k2)
          y2.x_hat.x = observer_state.x_hat.x + h2*k2.x_hat.x;
          y2.x_hat.y = observer_state.x_hat.y + h2*k2.x_hat.y;
          y2.x_hat.z = observer_state.x_hat.z + h2*k2.x_hat.z;
          y2.d_hat.x = observer_state.d_hat.x + h2*k2.d_hat.x;
          y2.d_hat.y = observer_state.d_hat.y + h2*k2.d_hat.y;
          y2.d_hat.z = observer_state.d_hat.z + h2*k2.d_hat.z;
          disturbance_observer_ode(k3, delta_t_rel*(0.5 + i), y2, vehicle_state, x_hand_current, v_hand_current);
          // k4 = f(t+h, x + h*k3)
          y3.x_hat.x = observer_state.x_hat.x + h*k3.x_hat.x;
          y3.x_hat.y = observer_state.x_hat.y + h*k3.x_hat.y;
          y3.x_hat.z = observer_state.x_hat.z + h*k3.x_hat.z;
          y3.d_hat.x = observer_state.d_hat.x + h*k3.d_hat.x;
          y3.d_hat.y = observer_state.d_hat.y + h*k3.d_hat.y;
          y3.d_hat.z = observer_state.d_hat.z + h*k3.d_hat.z;
          disturbance_observer_ode(k4, delta_t_rel*(1 + i), y3, vehicle_state, x_hand_current, v_hand_current);

          // x += h/6 * (k1 + 2*k2 + 2*k3 + k4)
          observer_state.x_hat.x += h6*k1.x_hat.x + h3*k2.x_hat.x + h6*k4.x_hat.x;
          observer_state.x_hat.y += h6*k1.x_hat.y + h3*k2.x_hat.y + h6*k4.x_hat.y;
          observer_state.x_hat.z += h6*k1.x_hat.z + h3*k2.x_hat.z + h6*k4.x_hat.z;
          observer_state.d_hat.x += h6*k1.d_hat.x + h3*k2.d_hat.x + h6*k4.d_hat.x;
          observer_state.d_hat.y += h6*k1.d_hat.y + h3*k2.d_hat.y + h6*k4.d_hat.y;
          observer_state.d_hat.z += h6*k1.d_hat.z + h3*k2.d_hat.z + h6*k4.d_hat.z;
        } 
      }
    };
  }
}

DUNE_TASK
