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
#include "../ObstacleAvoidance.hpp"
#include "../ObstacleEstimator.hpp"
#include "../FormationKeeping.hpp"
#include "../Utilities.hpp"
#include "NSBSimulator.hpp"
#include "NSBConsensus.hpp"
#include "Utilities.hpp"

namespace NSB
{
  //! NSB consensus.
  //!
  //! Consensus on barycenter position and formation radius.
  //! @author Josef Matous
  namespace Consensus
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      Ellipse m_path;
      LineOfSight m_los;
      ObstacleAvoidance m_obs_avoid;
      ObstacleEstimator m_obs_est;
      FormationKeepingSaturated m_form;
      EstimatorParameters m_params;
      Delta m_last_step, m_last_linstate;
      std::vector<double> m_form_shape;

      IMC::NSBMsg m_nsb_msg;   // consensus message (sent to others)
      IMC::NSBState m_nsb_est; // state message (sent to self)
      StateEstimate m_nsb_state, m_received_nsb_state;

      double m_lat0, m_lon0;

      int m_transmission_limit, m_transmission_counter;

      int m_linstate_counter;
      Vector3D m_p_hat;

      double m_current_timestamp;
      double m_next_transmission, m_next_period;

      double m_delay, m_loss;
      CircularBuffer<IMC::NSBMsg> m_msg_buffer;
      CircularBuffer<bool> m_msg_processed;
      Math::Random::MT19937 m_rng;

      bool is_initialized, m_active, m_has_obstacle;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_path(0, 0, 0., 50., 30., 0., 0., 0., false, M_PI_2, 0.),
        m_los(15., false, 1.3, 0.5),
        m_form(0., 0., 0., 0.25, 0.5),
        m_msg_buffer(8),
        m_msg_processed(8)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::DesiredLinearState>(this);
        bind<IMC::NSBMsg>(this);
        bind<IMC::Obstacle>(this);

        m_params.los = &m_los;
        m_params.path = &m_path;
        m_params.oa = &m_obs_avoid;

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
          .defaultValue("60.")
          .minimumValue("10.")
          .maximumValue("1000.")
          .description("Semimajor axis of the ellipse");
        param("Ellipse -- Semiminor Axis", m_path.m_b)
          .defaultValue("40.")
          .minimumValue("10.")
          .maximumValue("1000.")
          .description("Semiminor axis of the ellipse");
        param("Ellipse -- Z Amplitude", m_path.m_c)
          .defaultValue("0.")
          .minimumValue("0.")
          .maximumValue("100.")
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

        param("Obstacle Avoidance -- Minimum Cone Angle", m_obs_avoid.m_cone_min)
          .defaultValue("5")
          .minimumValue("1")
          .maximumValue("30");
        param("Obstacle Avoidance -- Radius", m_obs_avoid.m_obstacle_radius)
          .defaultValue("5")
          .minimumValue("1")
          .maximumValue("30");
        param("Obstacle Avoidance -- Hysteresis", m_obs_avoid.m_hysteresis)
          .defaultValue("3")
          .minimumValue("0")
          .maximumValue("10");

        param("Initial Covariance", m_params.P0)
          .minimumValue("0.000001")
          .defaultValue("1");
        param("Process Noise", m_params.Q)
          .minimumValue("0.000001")
          .defaultValue("0.01");
        param("Steady-state Formation Radius", m_params.r_f_steady_state)
          .defaultValue("10");
        param("Formation Radius Time Constant", m_params.k_r_f)
          .defaultValue("0.05");
        param("Minimum Comm Period", m_params.T_min)
          .defaultValue("5")
          .minimumValue("1");
        param("Maximum Comm Period", m_params.T_max)
          .defaultValue("90")
          .minimumValue("10");
        param("Maximum Number of Consecutive Transmissions", m_transmission_limit)
          .defaultValue("2");
        param("Position Update -- Gain", m_params.k_self)
          .defaultValue("0.2");
        param("Position Update -- Decimation", m_params.n_self)
          .defaultValue("20")
          .minimumValue("1");
        param("Event Trigger -- Parameter Penalty", m_params.a_s)
          .defaultValue("100")
          .minimumValue("0.01");
        param("Event Trigger -- Position Penalty", m_params.a_p)
          .defaultValue("1")
          .minimumValue("0.01");

        param("Artificial Delay", m_delay)
          .defaultValue("0");
        param("Artificial Packet Loss", m_loss)
          .defaultValue("0");

        param("Active", m_active)
          .defaultValue("false");

        reset();
      }

      void
      reset(void)
      {
        is_initialized = false;
        m_last_step.reset();
        m_last_linstate.reset();
        m_transmission_counter = 0;
        m_linstate_counter = 0;
        m_has_obstacle = false;
        m_next_transmission = 0.;
        m_next_period = m_params.T_min;

        m_msg_buffer.clear();
        m_msg_processed.clear();
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_active))
          reset();

        if (paramChanged(m_obs_avoid.m_cone_min))
        {
          m_obs_avoid.m_cone_min = Angles::radians(m_obs_avoid.m_cone_min);
        }
        if (paramChanged(m_obs_avoid.m_hysteresis))
        {
          m_obs_avoid.m_hysteresis = Angles::radians(m_obs_avoid.m_hysteresis);
        }
        if (paramChanged(m_form_shape))
        {
          m_params.p_form.x = m_form_shape[0];
          m_params.p_form.y = m_form_shape[1];
          m_params.p_form.z = m_form_shape[2];
        }
      }

      //! Check if the conditions hold, and dispatch an NSB message if necessary
      inline void
      dispatch_nsb_message(void)
      {
        double time_now = Clock::get();
        if ((m_transmission_counter < m_transmission_limit) && (time_now >= m_next_transmission))
        {
          m_transmission_counter++;
          m_next_transmission = time_now + m_next_period;
          convert(m_nsb_state, m_nsb_msg);
          dispatch(m_nsb_msg);
        }
      }

      inline void
      reset_position_estimate(const IMC::EstimatedState* msg)
      {
        m_p_hat.x = msg->x;
        m_p_hat.y = msg->y;
        m_p_hat.z = msg->depth;
        m_last_linstate.reset();
        m_linstate_counter = 0;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_lat0 = msg->lat;
        m_lon0 = msg->lon;
        m_current_timestamp = Clock::getSinceEpoch();

        if (m_active)
        {
          if (is_initialized)
          {
            m_params.delta_t = m_last_step.getDelta();
            if (m_has_obstacle)
            {
              m_obs_est.simulate(m_current_timestamp);
              nsb_simulator_step(m_params, m_obs_est.m_obstacle_state, m_nsb_state);
            }
            else
            {
              nsb_simulator_step(m_params, m_nsb_state);
            }
          }
          else
          {
            debug("Initializing");
            initial_guess(m_nsb_state, m_params, msg);
            reset_position_estimate(msg);
            m_last_step.reset();
            is_initialized = true;
          }
          // Update radius
          double r = std::sqrt(square(m_nsb_state.p_b.x - msg->x) + square(m_nsb_state.p_b.y - msg->y));
          if (r > m_nsb_state.r_f)
            m_nsb_state.r_f = r;

          // Self-update
          if (m_linstate_counter >= m_params.n_self)
          {
            self_update(m_nsb_state, m_params, msg, m_p_hat);
            reset_position_estimate(msg);
          }

          // Process the NSB messages here if there is artificial delay
          if (m_delay > 0.)
            process_msg_buffer();

          // Check if we need to communicate
          dispatch_nsb_message();

          // Dispatch NSB state estimate
          convert(m_nsb_state, m_nsb_est);
          dispatch(m_nsb_est);
        }
      }

      inline void
      process_nsb_message(const IMC::NSBMsg& msg)
      {
        if (m_active && is_initialized && (msg.getSource() != getSystemId()))
        {
          if (m_rng.uniform() > m_loss)
          {
            debug("Received consensus message from %s", resolveSystemId(msg.getSource()));

            m_transmission_counter = 0;

            convert(msg, m_received_nsb_state);
            if (msg.getTimeStamp() < m_current_timestamp) // check if we need to forward-simulate the estimate
            {
              if (m_has_obstacle)
              {
                ObstacleAvoidance obs_avoid_copy(m_obs_avoid); // use a copy of the obstacle avoidance class
                m_params.oa = &obs_avoid_copy;
                nsb_simulator_run(m_params, m_obs_est, m_received_nsb_state, msg.getTimeStamp(), m_current_timestamp, 0.1);
                m_params.oa = &m_obs_avoid;
              }
              else
              {
                nsb_simulator_run(m_params, m_received_nsb_state, msg.getTimeStamp(), m_current_timestamp, 0.1);
              }
            }
            m_next_period = update_comm_period(m_nsb_state, m_received_nsb_state, m_params);
            debug("Comm period set to %.1f seconds", m_next_period);
            consensus_algorithm(m_nsb_state, m_received_nsb_state);
          }
          else
          {
            debug("Message dropped");
          }
        }
      }

      inline void
      process_msg_buffer(void)
      {
        for (unsigned i = 0; i < m_msg_buffer.getSize(); i++)
        {
          if (!m_msg_processed(i) && (m_current_timestamp - m_msg_buffer(i).getTimeStamp() >= m_delay))
          {
            process_nsb_message(m_msg_buffer(i));
            m_msg_processed(i) = true;
          }
        }
        
      }

      void
      consume(const IMC::NSBMsg* msg)
      {
        if (m_delay <= 0.)
        {
          process_nsb_message(*msg);
        }
        else
        {
          m_msg_buffer.add(*msg);
          m_msg_processed.add(false);
        }
      }

      void
      consume(const IMC::Obstacle* msg)
      {
        m_obs_est.update(msg, m_lat0, m_lon0);
        m_has_obstacle = true;
      }

      void
      consume(const IMC::DesiredLinearState* msg)
      {
        if (is_initialized)
        {
          double delta_t = m_last_linstate.getDelta();
          m_p_hat.x += msg->vx * delta_t;
          m_p_hat.y += msg->vy * delta_t;
          m_p_hat.z += msg->vz * delta_t;
          m_linstate_counter++;
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
