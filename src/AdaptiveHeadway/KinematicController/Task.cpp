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

      bool m_active, m_has_input;
      IMC::HandPosIn m_input;

      //! Disturbance observer states
      Vector3D<double> m_x_hat;
      Vector3D<double> m_d_hat;
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

        param("Disturbance Observer Proportional Gain", m_args.l1)
        .minimumValue("0.0")
        .defaultValue("25.0");

        param("Disturbance Observer Derivative Gain", m_args.l2)
        .minimumValue("0.0")
        .defaultValue("10.0");
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
      }

      //! Execute a path control step
      //! From base class PathController
      void
      step(const IMC::EstimatedState& state, const TrackingState& ts)
      {
        // Switch between waypoint tracking and HandPosIn
        bool use_input = (m_active && m_has_input && m_input.type == IMC::HandPosIn::HAND_INPUT_VELOCITY);

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

          double U = ts.speed / norm(v_ref);
          v_ref.x /= U;
          v_ref.y /= U;
          v_ref.z /= U;

          v_traj.x = 0.;
          v_traj.y = 0.;
          v_traj.z = 0.;
        }

        // Disturbance observer
        if (!m_observer_initialized)
        {
          // Initialize
          m_x_hat.x = x_hand.x;
          m_x_hat.y = x_hand.y;
          m_x_hat.z = x_hand.z;

          m_d_hat.x = 0.;
          m_d_hat.y = 0.;
          m_d_hat.z = 0.;

          m_delta_t.reset();
        }
        else
        {
          // Disturbance observer ODEs
          Vector3D<double> x_hat_err;
          x_hat_err.x = x_hand.x - m_x_hat.x;
          x_hat_err.y = x_hand.y - m_x_hat.y;
          x_hat_err.z = x_hand.y - m_x_hat.y;

          double dt = m_delta_t.getDelta();

          m_x_hat.x += (v_ref.x + m_args.l1 * x_hat_err.x) * dt; //   d/dt x_hat = v_ref + l1 * (x_hand - x_hat)
          m_x_hat.y += (v_ref.y + m_args.l1 * x_hat_err.y) * dt; // 
          m_x_hat.z += (v_ref.z + m_args.l1 * x_hat_err.z) * dt;

          Vector3D<double> d_hat_dot;
          timesRinv(d_hat_dot, R, x_hat_err);
          d_hat_dot.x *= m_args.l2;  // d/dt d_hat = l2 * R' * (x_hand - x_hat)
          d_hat_dot.y *= m_args.l2;
          d_hat_dot.z *= m_args.l2;

          m_d_hat.x += d_hat_dot.x * dt;
          m_d_hat.y += d_hat_dot.y * dt;
          m_d_hat.z += d_hat_dot.z * dt;
        }

        // Disturbance compensation
        v_ref.x -= m_d_hat.x;
        v_ref.y -= m_d_hat.y;
        v_ref.z -= m_d_hat.z;

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
        m_hrate.value = control_input.y / e;
        m_pitch.value = Angles::radians(m_args.pitch_offset) - m_args.k_pitch * std::asin(control_input.z / norm(control_input));
        trimValueMod(m_pitch.value, -Angles::radians(m_args.max_pitch), Angles::radians(m_args.max_pitch));

        dispatch(m_speed);
        dispatch(m_hrate);
        dispatch(m_pitch);
      }
    };
  }
}

DUNE_TASK
