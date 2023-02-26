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
#include "../Utility.hpp"
#include "../EdgeConsensus.hpp"
#include "../HandPosition.hpp"
#include "../SpeedBarrier.hpp"

namespace Consensus
{
  //! Consensus for vehicles with virtual leader
  //!
  //! Implements the edge-based consensus algorithm for nodes that have access to the virtual leader.
  //! @author Josef Matous
  namespace ConsensusLeader
  {
    using DUNE_NAMESPACES;

    //! Required control loops
    static const uint32_t c_required = IMC::CL_SPEED | IMC::CL_YAW_RATE | IMC::CL_DEPTH;    

    struct Task: public DUNE::Control::PathController
    {
      struct 
      {
        //! Hand length
        float h;
        //! Formation-keeping proportional gain
        float c;
        //! Formation offset
        Vector2D offset;
        //! Maximum velocity reference
        float U_max;
        //! Minimum velocity reference
        float U_min;
        //! Maximum yaw rate reference
        float r_max;
        //! Dummy reference lookahead
        float dummy_h;
        //! Dummy reference frequency
        int dummy_freq;
        //! Use speed barrier function
        bool use_barrier;
      } m_params;

      SpeedBarrier m_speed_barrier;
      HandPositionController m_controller;

      Vector2D m_hand_velocity_reference;
      IMC::DesiredHeadingRate m_yaw_rate;
      IMC::DesiredSpeed m_speed;
      IMC::DesiredZ m_z_ref;

      HandPosition m_own_hand;
      //IMC::EstimatedState m_estate;
      double m_lat, m_lon;
      HandPosition m_target_hand;

      IMC::Reference m_dummy_reference;
      int m_dummy_counter;

      bool is_initialized; // task has received EstimatedState
      bool m_active; // External activation

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::Target>(this);

        param("Hand Length", m_controller.h)
          .defaultValue("1");
        param("Formation Keeping Gain", m_params.c)
          .defaultValue("0.1");
        param("Formation Offset x", m_params.offset.x)
          .defaultValue("0");
        param("Formation Offset y", m_params.offset.y)
          .defaultValue("0");
        param("Maximum Speed Reference", m_controller.U_max)
          .defaultValue("2");
        param("Minimum Speed Reference", m_controller.U_min)
          .defaultValue("0.4");
        param("Maximum Yaw Rate", m_controller.r_max)
          .defaultValue("1");
        param("Active", m_active)
          .defaultValue("false");
        param("Dummy Reference -- Lookahead Distance", m_params.dummy_h)
          .defaultValue("50");
        param("Dummy Reference -- Decimation", m_params.dummy_freq)
          .defaultValue("10");
        param("Use Speed Barrier", m_params.use_barrier)
          .defaultValue("false");
        param("Speed Barrier -- Gain", m_speed_barrier.m_k_u)
          .defaultValue("0.01");
        param("Speed Barrier -- Time Constant", m_speed_barrier.m_k_rho)
          .defaultValue("4");
        param("Speed Barrier -- Offset", m_speed_barrier.m_sigma)
          .defaultValue("0.3");

        is_initialized = false;
        m_z_ref.value = 0;
        m_z_ref.z_units = IMC::Z_DEPTH;

        m_dummy_reference.flags = IMC::Reference::FLAG_LOCATION | IMC::Reference::FLAG_Z;
        m_dummy_reference.setSource(0x40ca);
        m_dummy_reference.setSourceEntity(0xff);
        m_dummy_counter = m_params.dummy_freq;
      }

      void
      onUpdateParameters(void)
      {
        PathController::onUpdateParameters();

        m_dummy_counter = m_params.dummy_freq;

        if (paramChanged(m_active))
        {
          m_speed_barrier.reset();
        }

        /*if (m_active != isActive())
        {
          m_active ? requestActivation() : requestDeactivation();
        }*/
      }

      void
      onEntityReservation(void)
      {
        PathController::onEntityReservation();
      }

      void
      onPathActivation(void)
      {
        enableControlLoops(c_required);
      }

      void
      onPathDeactivation(void)
      {
        disableControlLoops(c_required);
      }

      void
      onActivation(void)
      {
        enableControlLoops(c_required);
      }

      void
      onDeactivation(void)
      {
        disableControlLoops(c_required);
      }

      bool
      hasSpecificZControl(void) const
      {
        return true;
      }

      void
      step(const IMC::EstimatedState& state, const TrackingState& ts)
      {
        if (is_initialized)
        {
          if (!m_active) // consensus inactive -- behave as a path controller
          {
            // Head straight to target
            double x_rel = ts.end.x - m_own_hand.x;
            double y_rel = ts.end.y - m_own_hand.y;
            double xy_norm_inv = 1. / std::sqrt(x_rel*x_rel + y_rel*y_rel);
            m_hand_velocity_reference.x = x_rel * xy_norm_inv;
            m_hand_velocity_reference.y = y_rel * xy_norm_inv;
          } else
          {
            //debug("Performing consensus");
            edge_consensus(&m_own_hand, &m_target_hand, &m_params.offset, m_params.c, &m_hand_velocity_reference);
            if (m_params.use_barrier)
              m_speed_barrier.step(&m_hand_velocity_reference, state.u, state.psi);
          }
          m_controller.get_references(&m_hand_velocity_reference, &state, &m_speed, &m_yaw_rate);
          dispatch(m_speed); 
          dispatch(m_yaw_rate);
          dispatch(m_z_ref);
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      { 
        PathController::consume(msg);

        get_hand_position(msg, m_controller.h, &m_own_hand);
        m_lat = msg->lat;
        m_lon = msg->lon;
        is_initialized = true;
      }

      void
      consume(const IMC::Target* msg)
      {
        if (m_active && is_initialized)
        {
          float z_dummy;
          WGS84::displacement(m_lat, m_lon, 0., msg->lat, msg->lon, 0., &m_target_hand.x, &m_target_hand.y, &z_dummy);
          m_target_hand.x_dot = msg->sog * std::cos(msg->cog);
          m_target_hand.y_dot = msg->sog * std::sin(msg->cog);

          if (++m_dummy_counter >= m_params.dummy_freq)
          {
            m_dummy_counter = 0;

            float hand_velocity_norm_inv = 1. / std::sqrt(m_hand_velocity_reference.x*m_hand_velocity_reference.x 
                                                        + m_hand_velocity_reference.y*m_hand_velocity_reference.y);
            m_dummy_reference.lat = m_lat;
            m_dummy_reference.lon = m_lon;
            WGS84::displace(m_own_hand.x + m_hand_velocity_reference.x*m_params.dummy_h*hand_velocity_norm_inv, 
                            m_own_hand.y + m_hand_velocity_reference.y*m_params.dummy_h*hand_velocity_norm_inv,
                            &m_dummy_reference.lat, &m_dummy_reference.lon);
            dispatch(m_dummy_reference, DF_KEEP_SRC_EID);
            debug("Dispatching dummy");
          }

          /*edge_consensus(&m_own_hand, &m_target_hand, &m_params.offset, m_params.c, &m_hand_velocity_reference);
          hand_velocity_controller(&m_hand_velocity_reference, &m_estate, m_controller.h, m_params.U_max, m_params.r_max, &m_speed, &m_yaw_rate);

          dispatch(m_speed);
          dispatch(m_yaw_rate);
          dispatch(m_z_ref);
          debug("Dispatching references");*/
        }
      }
    };    
  }
}

DUNE_TASK
