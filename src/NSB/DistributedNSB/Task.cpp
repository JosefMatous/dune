//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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

#include "../GeometricPath.hpp"
#include "../LineOfSight.hpp"
#include "../FormationKeeping.hpp"
#include "../Utilities.hpp"
#include "NSBSimulator.hpp"

namespace NSB
{
  //! Distributed NSB.
  //!
  //! Combines line-of-sight guidance with formation keeping.
  //! @author Josef Matous
  namespace DistributedNSB
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      Ellipse m_path;
      LineOfSight m_los;
      FormationKeepingSaturated m_form;
      Delta m_last_step;
      std::vector<double> m_form_shape;

      struct
      {
        float k_position, k_param;
        float r_ss, k_r;
        float T_min, T_max;
        float a_position, a_param;
        int trans_limit;
      } m_consensus_param;

      // Current communications period
      float m_comm_period;
      int m_transmission_couner;
      double m_last_transmission;

      IMC::DesiredLinearState m_linstate;
      IMC::NSBMsg m_nsb_msg;
      IMC::NSBState m_nsb_state;
      IMC::CurvedPathReference m_path_ref;

      // External activation
      bool m_active;
      bool is_initialized;

      double m_T_start, m_T_stop, m_param_stop;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_path(0, 0, 0., 50., 30., 0., 0, 0., false, M_PI_2, 0.),
        m_los(15., false, 1.3, 0.5),
        m_form(0., 0., 0., 0.25, 0.5)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::NSBMsg>(this);

        m_linstate.flags = IMC::DesiredLinearState::FL_VX | IMC::DesiredLinearState::FL_VY | IMC::DesiredLinearState::FL_VZ;

        m_T_start = -1.;
        is_initialized = false;

        param("Ellipse -- Origin x", m_path.m_x_center)
          .defaultValue("0")
          .description("x-coordinate of the center of the ellipse");
        param("Ellipse -- Origin y", m_path.m_y_center)
          .defaultValue("0")
          .description("y-coordinate of the center of the ellipse");
        param("Ellipse -- Depth", m_path.m_z_center)
          .defaultValue("0.")
          .description("Depth of the center of the ellipse");
        param("Ellipse -- Semimajor Axis", m_path.m_a)
          .defaultValue("50.")
          .minimumValue("10.")
          .maximumValue("100.")
          .description("Semimajor axis of the ellipse");
        param("Ellipse -- Semiminor Axis", m_path.m_b)
          .defaultValue("30.")
          .minimumValue("10.")
          .maximumValue("100.")
          .description("Semiminor axis of the ellipse");
        param("Ellipse -- Z Amplitude", m_path.m_c)
          .defaultValue("0.")
          .minimumValue("0.")
          .maximumValue("10.")
          .description("Amplitude of oscillations in the z-axis");
        param("Ellipse -- Clockwise", m_path.m_clockwise)
          .defaultValue("true")
          .description("True if the path goes clockwise; false if anticlockwise");
        param("Ellipse -- Orientation", m_path.m_psi)
          .defaultValue("0")
          .description("Orientation (yaw angle) of the ellipse. Zero means semimajor axis facing north");
        param("Ellipse -- Z Frequency", m_path.m_z_freq)
          .defaultValue("0.")
          .description("Frequency of oscillations in the z-axis");
        param("Ellipse -- Initial Phase", m_path.m_phi0)
          .defaultValue("0.")
          .description("Initial phase of the ellipse");
        param("Ellipse -- Z Initial Phase", m_path.m_z_phi0)
          .defaultValue("0.")
          .description("Initial phase of oscillations in the z-axis");

        param("LOS -- Lookahead Distance", m_los.m_lookahead)
          .defaultValue("15.")
          .minimumValue("1.")
          .maximumValue("100.")
          .description("Lookahead distance of the LOS algorithm");
        param("LOS -- Adaptive", m_los.m_adaptive)
          .defaultValue("true")
          .description("True if using adaptive lookahead distance");
        param("LOS -- Speed", m_los.m_speed)
          .defaultValue("1.3")
          .minimumValue("0.5")
          .maximumValue("2.")
          .description("Path following speed");
        param("LOS -- Gain", m_los.m_parameter_gain)
          .defaultValue("0.5")
          .minimumValue("0.1")
          .maximumValue("2.")
          .description("Path parameter update gain");

        param("Formation Keeping -- Shape", m_form_shape)
          .defaultValue("0., 0., 0.")
          .size(3)
          .description("Position of the vehicle within the formation");
        param("Formation Keeping -- Gain", m_form.k_form)
          .defaultValue("0.25")
          .minimumValue("0.")
          .description("Formation keeping task gain");
        param("Formation Keeping -- Maximum Velocity", m_form.v_max)
          .defaultValue("0.5")
          .minimumValue("0.")
          .description("Formation keeping velocity limit");

        param("Consensus -- Position Gain", m_consensus_param.k_position)
          .defaultValue("0.3")
          .minimumValue("0.")
          .maximumValue("1.");
        param("Consensus -- Parameter Gain", m_consensus_param.k_param)
          .defaultValue("0.3")
          .minimumValue("0.")
          .maximumValue("1.");
        param("Consensus -- Maximum Communication Period", m_consensus_param.T_max)
          .defaultValue("80")
          .minimumValue("5")
          .maximumValue("1000");
        param("Consensus -- Minimum Communication Period", m_consensus_param.T_min)
          .defaultValue("1")
          .minimumValue("0.05")
          .maximumValue("10");
        param("Consensus -- Position Time Constant", m_consensus_param.a_position)
          .defaultValue("1")
          .minimumValue("0.")
          .maximumValue("10.");
        param("Consensus -- Parameter Time Constant", m_consensus_param.a_param)
          .defaultValue("50")
          .minimumValue("0.")
          .maximumValue("1000.");
        param("Consensus -- Transmission Limit", m_consensus_param.trans_limit)
          .defaultValue("2")
          .minimumValue("1")
          .maximumValue("10");

        param("Steady-state Formation Radius", m_consensus_param.r_ss)
          .defaultValue("10");
        param("Formation Radius Time Constant", m_consensus_param.k_r)
          .defaultValue("0.05");

        param("Active", m_active)
          .defaultValue("false");

        param("Experiment Stop Time", m_T_stop)
          .defaultValue("-1")
          .description("The task is stopped after the given time. Enter negative value to ignore this.");
        param("Experiment Stop Parameter", m_param_stop)
          .defaultValue("-1")
          .description("The task is stop when path parameter exceeds the given value. Enter negative value to ignore this.");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        reset();
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        reset();
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_T_stop) || paramChanged(m_param_stop))
        {
          if (m_T_stop < 0. && m_param_stop < 0.)
            war("Both time and parameter stop conditions are inactive. The experiment will run until stopped externally.");
        }
        if (paramChanged(m_active))
        {
          if (m_active)
            requestActivation();
          else
            requestDeactivation();
        }
        if (paramChanged(m_form_shape))
        {
          m_form.p_form.x = m_form_shape[0];
          m_form.p_form.y = m_form_shape[1];
          m_form.p_form.z = m_form_shape[2];
        }
        if (m_consensus_param.T_min > m_consensus_param.T_max)
        {
          war("Minimum communications period is greater than maximum communications period");
          m_consensus_param.T_min = m_consensus_param.T_max;
        }
      }

      void
      onResourceInitialization(void)
      {
        requestDeactivation();

        reset();
      }

      void
      reset(void)
      {
        m_T_start = -1.;
        is_initialized = false;
        m_comm_period = m_consensus_param.T_min;
        m_transmission_couner = 0;
      }

      void
      consume(const IMC::NSBMsg* msg)
      {
        if (isActive() && is_initialized && (msg->getSource() != getSystemId()))
        {
          debug("Received consensus message from %s", resolveSystemId(msg->getSource()));

          /* Update communications period */
          float consensus_error = std::sqrt(square(m_consensus_param.a_position*(msg->x - m_nsb_state.x))
                                        + square(m_consensus_param.a_position*(msg->y - m_nsb_state.y))
                                        + square(m_consensus_param.a_position*(msg->z - m_nsb_state.z))
                                        + square(m_consensus_param.a_param*(msg->path_param - m_nsb_state.path_param)));
          m_comm_period = m_consensus_param.T_min + (m_consensus_param.T_max - m_consensus_param.T_min) * std::exp(-consensus_error);
          debug("Communications period set to %.1f seconds", m_comm_period);

          m_transmission_couner = 0;

          m_nsb_state.path_param = m_consensus_param.k_param * msg->path_param + (1. - m_consensus_param.k_param) * m_nsb_state.path_param;
          m_nsb_state.x = m_consensus_param.k_position * msg->x + (1. - m_consensus_param.k_position) * m_nsb_state.x;
          m_nsb_state.y = m_consensus_param.k_position * msg->y + (1. - m_consensus_param.k_position) * m_nsb_state.y;
          m_nsb_state.z = m_consensus_param.k_position * msg->z + (1. - m_consensus_param.k_position) * m_nsb_state.z;
          if (msg->r_f > m_nsb_state.r_f)
            m_nsb_state.r_f = msg->r_f;
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (isActive())
        {
          double delta_t;
          double time_now = Clock::get();
          if (!is_initialized)
          {
            // initialized the NSB state with current position
            m_nsb_state.path_param = 0.;
            m_nsb_state.x = msg->x;
            m_nsb_state.y = msg->y;
            m_nsb_state.z = msg->depth;
            m_nsb_state.r_f = 0.;

            m_last_step.reset();
            m_T_start = time_now;
            delta_t = 0.05;
            m_last_transmission = time_now;

            is_initialized = true;
          }
          else
          {
            delta_t = m_last_step.getDelta();
            // update estimate of formation radius
            float r_f = std::sqrt(square(msg->x - m_nsb_state.x) + square(msg->y - m_nsb_state.y));
            if (r_f > m_nsb_state.r_f)
              m_nsb_state.r_f = r_f;
          }

          GeometricPath::PathReference path_ref;
          m_path.getPathReference(m_nsb_state.path_param, path_ref);

          //debug("Vehicle at x = %.2f, y = %.2f", msg->x, msg->y);

          // Log NSB state
          dispatch(m_nsb_state);

          // Dispatch NSB message
          if ((time_now - m_last_transmission >= m_comm_period) && (m_transmission_couner < m_consensus_param.trans_limit))
          {
            m_nsb_msg.path_param = m_nsb_state.path_param;
            m_nsb_msg.x = m_nsb_state.x;
            m_nsb_msg.y = m_nsb_state.y;
            m_nsb_msg.z = m_nsb_state.z;
            m_nsb_msg.r_f = m_nsb_state.r_f;
            dispatch(m_nsb_msg);
            m_last_transmission = time_now;
            m_transmission_couner++;
          }

          // Dispatch path reference
          m_path_ref.param = m_nsb_state.path_param;
          m_path_ref.lat = msg->lat;
          m_path_ref.lon = msg->lon;
          WGS84::displace(path_ref.x, path_ref.y, &m_path_ref.lat, &m_path_ref.lon);
          m_path_ref.z = path_ref.z;
          m_path_ref.theta = path_ref.theta;
          m_path_ref.psi = path_ref.psi;
          dispatch(m_path_ref);

          //debug("Path reference: x = %.2f, y = %.2f, z = %.2f", path_ref.x, path_ref.y, path_ref.z);
          //debug("Path parameter %.3f", m_nsb_state.path_param);

          Vector3D path_err;
          GeometricPath::getPathFollowingError(path_ref, m_nsb_state.x, m_nsb_state.y, m_nsb_state.z, path_err);
          LineOfSight::LineOfSightOutput los_out;
          m_los.step(path_ref, path_err, los_out);

          //debug("Path error: x = %.2f, y = %.2f", path_err.x, path_err.y);
          //debug("LOS vector: x = %.2f, y = %.2f, z = %.2f", los_out.velocity.x, los_out.velocity.y, los_out.velocity.z);

          Vector3D sigma;
          sigma.x = msg->x - m_nsb_state.x;
          sigma.y = msg->y - m_nsb_state.y;
          sigma.z = msg->depth - m_nsb_state.z;
          Vector3D form_velocity;
          m_form.step(path_ref, sigma, los_out.path_parameter_derivative, form_velocity);

          //debug("Formation error: x = %.2f, y = %.2f", sigma.x, sigma.y);
          //debug("Formation velocity: x = %.2f, y = %.2f", form_velocity.x, form_velocity.y);

          m_linstate.vx = los_out.velocity.x + form_velocity.x;
          m_linstate.vy = los_out.velocity.y + form_velocity.y;
          m_linstate.vz = los_out.velocity.z + form_velocity.z;
          dispatch(m_linstate);

          nsb_simulator_step(los_out, m_consensus_param.r_ss, m_consensus_param.k_r, delta_t, m_nsb_state);

          if (m_T_stop > 0.) // check for time-based termination
          {
            if (m_T_start < 0.) // first-time step -- get current timestamp
              m_T_start = Time::Clock::get();
            else if ((Time::Clock::get() - m_T_start >= m_T_stop))
            {
              debug("Reached experiment termination time.");
              m_active = false;
              requestDeactivation();
            }            
          }
          if (m_param_stop > 0.) // check for parameter-based termination
          {
            if ((m_nsb_state.path_param > m_param_stop))
            {
              debug("Reached experiment termination parameter.");
              m_active = false;
              requestDeactivation();
            }
          }
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
