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
#include "../Parameters.hpp"
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
      EstimatorParameters m_params;
      Delta m_last_step, m_last_linstate;
      std::map<uint16_t, double> m_clock_offset;

      IMC::NSBMsg m_nsb_msg;   // consensus message (sent to others)
      IMC::NSBState m_nsb_est; // state message (sent to self)
      StateEstimate m_nsb_state, m_received_nsb_state;

      IMC::AcousticOperation m_ac_op; // for sending the consensus messages via acoustics
      std::string m_ac_dest_name;
      uint16_t m_ac_dest_id;

      IMC::NSBParametersRequest m_nsb_request;

      double m_lat0, m_lon0;

      int m_transmission_limit, m_transmission_counter;

      int m_linstate_counter;
      Vector3D m_p_hat;

      double m_current_timestamp;
      double m_next_transmission, m_next_period;
      double m_next_transmission_uw, m_next_period_uw;
      float m_z, m_z_uw_threshold;

      double m_delay, m_loss;
      CircularBuffer<IMC::NSBMsg> m_msg_buffer;
      CircularBuffer<bool> m_msg_processed;
      Math::Random::MT19937 m_rng;

      bool is_initialized, m_active, m_has_obstacle, has_estate;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_path(0, 0, 0., 50., 30., 0., 0., 0., false, M_PI_2, 0.),
        m_los(15., false, 1.3, 0.5),
        m_msg_buffer(8),
        m_msg_processed(8)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::DesiredLinearState>(this);
        bind<IMC::NSBMsg>(this);
        bind<IMC::Target>(this);
        bind<IMC::ExperimentControl>(this);
        bind<IMC::NSBParameters>(this);
        bind<IMC::ClockOffset>(this);

        m_params.los = &m_los;
        m_params.path = &m_path;
        m_params.oa = &m_obs_avoid;

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
        param("Minimum Comm Period Underwater", m_params.T_min_uw)
          .defaultValue("30")
          .minimumValue("1");
        param("Maximum Comm Period", m_params.T_max)
          .defaultValue("90")
          .minimumValue("10");
        param("Underwater Depth Threshold", m_z_uw_threshold)
          .defaultValue("0.5")
          .minimumValue("0")
          .description("Switch to underwater communication mode if vehicle depth exceeds the given threshold.");
        param("Acoustic Operation System", m_ac_dest_name)
          .defaultValue("lauv-thor")
          .description("Name of the system that is connected to the acoustic modem.");
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

        has_estate = false;
        reset();
      }

      inline void
      debugExternalParameters(void)
      {
        debug("Ellipse -- Origin [%.2f, %.2f, %.2f]", m_path.m_x_center, m_path.m_y_center, m_path.m_z_center);
        debug("Ellipse -- Axes   [%.2f, %.2f, %.2f]", m_path.m_a, m_path.m_b, m_path.m_c);
        debug("Ellipse -- Clockwise %u", m_path.m_clockwise);
        debug("Ellipse -- Orientation %.3f", m_path.m_psi);
        debug("Ellipse -- Frequency %.1f", m_path.m_z_freq);
        debug("Ellipse -- Initial Phases [%.3f, %.3f]", m_path.m_phi0, m_path.m_z_phi0);

        debug("LOS -- Lookahead Distance %f", m_los.m_lookahead);
        debug("LOS -- Speed %f", m_los.m_speed);
        debug("LOS -- Adaptive %u", m_los.m_adaptive);
        debug("LOS -- Gain %f", m_los.m_parameter_gain);

        debug("Formation Keeping -- Shape [%.2f, %.2f, %.2f]", m_params.p_form.x, m_params.p_form.y, m_params.p_form.z);

        debug("Obstacle Avoidance -- Minimum Cone Angle %.1f", Angles::degrees(m_obs_avoid.m_cone_min));
        debug("Obstacle Avoidance -- Radius %.1f", m_obs_avoid.m_obstacle_radius);
        debug("Obstacle Avoidance -- Hysteresis %.1f", Angles::degrees(m_obs_avoid.m_hysteresis));
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
        m_next_transmission_uw = 0.;
        m_next_period_uw = m_params.T_min_uw;

        m_msg_buffer.clear();
        m_msg_processed.clear();
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_ac_dest_name))
          m_ac_dest_id = m_ctx.resolver.resolve(m_ac_dest_name);
      }

      //! Check if the conditions hold, and dispatch an NSB message if necessary
      inline void
      dispatch_nsb_message(void)
      {
        double time_now = Clock::get();
        bool underwater = (m_z >= m_z_uw_threshold);
        double next_transmission = underwater ? m_next_transmission_uw : m_next_transmission;
        if ((m_transmission_counter < m_transmission_limit) && (time_now >= next_transmission))
        {
          m_transmission_counter++;
          m_next_transmission = time_now + m_next_period;
          m_next_transmission_uw = time_now + m_next_period_uw;
          convert(m_nsb_state, m_nsb_msg, m_lat0, m_lon0);
          dispatch(m_nsb_msg);
          if (underwater)
          {
            debug("Transmitting over acoustics");
            m_ac_op.op = AcousticOperation::AOP_MSG;
            m_ac_op.setDestination(m_ac_dest_id);
            m_ac_op.msg.set(m_nsb_msg);
            m_ac_op.system = "broadcast";
            dispatch(m_ac_op);
          }
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
      consume(const IMC::NSBParameters* msg)
      {
        if (has_estate)
          updatePathParameters(msg, m_path, m_lat0, m_lon0);
        updateLosParameters(msg, m_los);
        updateFormationShape(msg, m_params.p_form);
        updateObstacleAvoidance(msg, m_obs_avoid);

        //debugExternalParameters();        
      }

      void
      consume(const IMC::ClockOffset* msg)
      {
        std::map<uint16_t, double>::iterator search = m_clock_offset.find(msg->system);
        if (search != m_clock_offset.end())
        {
          //debug("Updating clock offset entry for %s", m_ctx.resolver.resolve(msg->system));
          search->second = msg->offset;
        }
        else
        {
          //debug("Creating clock offset entry for %s", m_ctx.resolver.resolve(msg->system));
          m_clock_offset.insert({msg->system, msg->offset});
        }
        //debug("Clock offset is %g seconds", msg->offset);
      }

      void
      consume(const IMC::ExperimentControl* msg)
      {
        if (msg->delay <= 0.)
        {
          bool new_active = (msg->op == ExperimentControl::OP_START && msg->experiment == ExperimentControl::EX_NSB);
          if (new_active != m_active)
          {
            m_active = new_active;
            reset();
          }
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_lat0 = msg->lat;
        m_lon0 = msg->lon;
        m_z = msg->depth;
        if (!has_estate)
        {
          has_estate = true;
          dispatch(m_nsb_request);
        }
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

            convert(msg, m_received_nsb_state, m_lat0, m_lon0);
            std::map<uint16_t, double>::iterator search = m_clock_offset.find(msg.getSource());
            if (search != m_clock_offset.end())
            {
              double adjusted_timestamp = msg.getTimeStamp() + search->second;
              if (adjusted_timestamp < m_current_timestamp) // check if we need to forward-simulate the estimate
              {
                if (m_has_obstacle)
                {
                  ObstacleAvoidance obs_avoid_copy(m_obs_avoid); // use a copy of the obstacle avoidance class
                  m_params.oa = &obs_avoid_copy;
                  nsb_simulator_run(m_params, m_obs_est, m_received_nsb_state, adjusted_timestamp, m_current_timestamp, 0.1);
                  m_params.oa = &m_obs_avoid;
                }
                else
                {
                  nsb_simulator_run(m_params, m_received_nsb_state, adjusted_timestamp, m_current_timestamp, 0.1);
                }
              }
            }
            else
            {
              war("Could not find clock shift for %s", m_ctx.resolver.resolve(msg.getSource()));
            }
            update_comm_period(m_nsb_state, m_received_nsb_state, m_params, m_next_period, m_next_period_uw);
            debug("Comm period set to %.1f seconds on the surface, %.1f seconds underwater", m_next_period, m_next_period_uw);
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
      consume(const IMC::Target* msg)
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
