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
  //! Agent (node) in the consensus algorithm
  //!
  //! Implements the edge-based consensus algorithm for both leaders and followers.
  //! @author Josef Matous
  namespace ConsensusNode
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
        float c_leader;
        //! Target tracking gain
        float c_target;
        //! Vertical proportional gain
        float c_pz;
        //! Vertical feedforward gain
        float c_vz;
        //! Constraint gain
        float rho;
        //! Formation offset x
        std::vector<float> offset_x;
        //! Formation offset y
        std::vector<float> offset_y;
        //! Formation offset z
        std::vector<float> offset_z;
        //! Has access to virtual target
        bool has_target;
        //! Minimum safety distance
        float d_min;
        //! Maximum distance
        float d_max;
        //! Maximum velocity reference
        float U_max;
        //! Minimum velocity reference
        float U_min;
        //! Maximum yaw rate reference
        float r_max;
        //! Number of connected nodes
        int n_nodes;
        //! Leader(s) name
        std::vector<std::string> leader_name;
        //! Leader(s) ID
        std::vector<uint16_t> leader_id;
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
      std::vector<HandPosition> m_leader_hand;

      bool is_initialized; // task has received EstimatedState
      bool m_active; // External activation

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::VirtualTarget>(this);
        bind<IMC::ConsensusPacket>(this);

        param("Hand Length", m_controller.h)
          .defaultValue("1");
        param("Formation Keeping Gain", m_params.c_leader)
          .defaultValue("0.1");
        param("Target Following Gain", m_params.c_target)
          .defaultValue("0.1");
        param("Vertical Proportional Gain", m_params.c_pz)
          .defaultValue("0.5");
        param("Vertical Feedforward Gain", m_params.c_vz)
          .defaultValue("1");
        param("Constraint Gain", m_params.rho)
          .defaultValue("5");
        param("Formation Offset x", m_params.offset_x)
          .defaultValue("0");
        param("Formation Offset y", m_params.offset_y)
          .defaultValue("0");
        param("Formation Offset z", m_params.offset_z)
          .defaultValue("0");
        param("Minimum Distance", m_params.d_min)
          .defaultValue("5");
        param("Maximum Distance", m_params.d_max)
          .defaultValue("50");
        param("Access to Target", m_params.has_target)
          .defaultValue("false");
        param("Maximum Speed Reference", m_controller.U_max)
          .defaultValue("2");
        param("Minimum Speed Reference", m_controller.U_min)
          .defaultValue("0.4");
        param("Maximum Yaw Rate", m_controller.r_max)
          .defaultValue("1");
        param("Active", m_active)
          .defaultValue("false");
        param("Leaders", m_params.leader_name)
          .defaultValue("");
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
      }

      void
      onUpdateParameters(void)
      {
        PathController::onUpdateParameters();

        if (paramChanged(m_active))
        {
          m_speed_barrier.reset();
        }

        if (paramChanged(m_params.leader_name))
        {
          m_params.leader_id.resize(m_params.leader_name.size());
          m_leader_hand.resize(m_params.leader_name.size());
          m_params.n_nodes = m_params.leader_name.size();

          for (size_t i = 0; i < m_params.leader_name.size(); i++)
          {
             m_params.leader_id[i] = resolveSystemName(m_params.leader_name[i]);
             debug("Leader %s resolved as %u", m_params.leader_name[i].c_str(), m_params.leader_id[i]);
          }          
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
            m_z_ref.value = ts.end.z;
            m_z_ref.z_units = IMC::Z_DEPTH;
          } else
          {
            // Clear
            m_hand_velocity_reference.x = 0.;
            m_hand_velocity_reference.y = 0.;

            // Leader following
            float c_v = (m_params.has_target ? 0. : 1.);
            for (size_t i = 0; i < m_params.leader_id.size(); i++)
            {
              edge_consensus(m_own_hand, m_leader_hand[i], m_params.offset_x[i], m_params.offset_y[i], m_params.c_leader, c_v, m_params.rho, m_params.d_min, m_params.d_max, m_hand_velocity_reference);
              vertical_control(state, m_own_hand, m_target_hand, m_params.offset_z[i], m_params.c_pz, m_params.c_vz, m_z_ref);
            }
            // Normalize by the number of connected nodes
            if (m_params.n_nodes > 1)
            {
              m_hand_velocity_reference.x /= m_params.n_nodes;
              m_hand_velocity_reference.y /= m_params.n_nodes;            
            }
            
            // Target following
            if (m_params.has_target)
            {
              edge_consensus(m_own_hand, m_target_hand, 0., 0., m_params.c_target, m_hand_velocity_reference);
              vertical_control(state, m_own_hand, m_target_hand, 0., m_params.c_pz, m_params.c_vz, m_z_ref);
            }

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
      consume(const IMC::VirtualTarget* msg)
      {
        if (m_params.has_target)
        {
          float z_dummy;
          WGS84::displacement(m_lat, m_lon, 0., msg->msg->lat, msg->msg->lon, 0., &m_target_hand.x, &m_target_hand.y, &z_dummy);
          m_target_hand.z = msg->msg->z;
          m_target_hand.x_dot = msg->msg->v_x;
          m_target_hand.y_dot = msg->msg->v_y;
          m_target_hand.z_dot = msg->msg->v_z;
        }
      }

      inline int
      find(const std::vector<uint16_t> &vector, const uint16_t &value)
      {
        int position = -1;
        for (size_t i = 0; i < vector.size(); i++)
        {
          if (vector[i] == value)
          {
            position = i;
            break;
          }
        }
        return position;
      }

      void
      consume(const IMC::ConsensusPacket* msg)
      {
        int leader_index = find(m_params.leader_id, msg->getSource());
        if (m_active && is_initialized && leader_index >= 0)
        {
          debug("Received consensus packet from %s", m_params.leader_name[leader_index].c_str());
          float z_dummy;
          WGS84::displacement(m_lat, m_lon, 0., msg->lat, msg->lon, 0., 
                              &m_leader_hand[leader_index].x, &m_leader_hand[leader_index].y, &z_dummy);
          m_leader_hand[leader_index].z = msg->z;
          m_leader_hand[leader_index].x_dot = msg->v_x;
          m_leader_hand[leader_index].y_dot = msg->v_y;
          m_leader_hand[leader_index].z_dot = msg->v_z;
        }
      }
    };    
  }
}

DUNE_TASK
