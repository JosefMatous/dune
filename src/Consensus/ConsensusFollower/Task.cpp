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

namespace Consensus
{
  //! Consensus for vehicles without access to virtual leader
  //!
  //! Implements the edge-based consensus algorithm for nodes that do not have access to the virtual leader.
  //! @author Josef Matous
  namespace ConsensusFollower
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
        //! Constraint gain
        float rho;
        //! Formation offset
        Vector2D offset;
        //! Minimum safety distance
        float d_min;
        //! Maximum distance
        float d_max;
        //! Maximum velocity reference
        float U_max;
        //! Leader name
        std::string leader_name;
        //! Leader node ID
        uint16_t leader_id;
      } m_params;

      Vector2D m_hand_velocity_reference;
      IMC::DesiredHeadingRate m_yaw_rate;
      IMC::DesiredSpeed m_speed;
      IMC::DesiredZ m_z_ref;

      HandPosition m_own_hand;
      IMC::EstimatedState m_estate;
      HandPosition m_target_hand;

      bool is_initialized; // task has received EstimatedState
      bool m_active; // External activation

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::ConsensusPacket>(this);

        param("Hand Length", m_params.h)
          .defaultValue("1");
        param("Formation Keeping Gain", m_params.c)
          .defaultValue("0.5");
        param("Constraint Gain", m_params.rho)
          .defaultValue("0.5");
        param("Formation Offset x", m_params.offset.x)
          .defaultValue("0");
        param("Formation Offset y", m_params.offset.y)
          .defaultValue("0");
        param("Minimum Distance", m_params.d_min)
          .defaultValue("5");
        param("Maximum Distance", m_params.d_max)
          .defaultValue("50");
        param("Maximum Speed Reference", m_params.U_max)
          .defaultValue("2");
        param("Active", m_active)
          .defaultValue("false");
        param("Leader", m_params.leader_name)
          .defaultValue("lauv-simulator-1");

        is_initialized = false;
        m_z_ref.value = 0;
        m_z_ref.z_units = IMC::Z_DEPTH;
      }

      void
      onUpdateParameters(void)
      {
        PathController::onUpdateParameters();

        m_params.leader_id = resolveSystemName(m_params.leader_name);
        debug("Leader %s resolved as %u", m_params.leader_name.c_str(), m_params.leader_id);

        if (m_active != isActive())
        {
          m_active ? requestActivation() : requestDeactivation();
        }
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
          // Head straight to target
          double x_rel = ts.end.x - m_own_hand.x;
          double y_rel = ts.end.y - m_own_hand.y;
          double xy_norm_inv = 1. / std::sqrt(x_rel*x_rel + y_rel*y_rel);
          m_hand_velocity_reference.x = x_rel * xy_norm_inv;
          m_hand_velocity_reference.y = y_rel * xy_norm_inv;

          hand_velocity_controller(&m_hand_velocity_reference, &state, m_params.h, m_params.U_max, &m_speed, &m_yaw_rate);
          //dispatch(m_speed); // speed is handled by the PathController class by default -- no need to dispatch
          dispatch(m_yaw_rate);
          dispatch(m_z_ref);
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      { 
        PathController::consume(msg);

        if (isActive())
        {
          get_hand_position(msg, m_params.h, &m_own_hand);
          m_estate = *msg;
          is_initialized = true;
          //debug("Processing estate");
        }
      }

      void
      consume(const IMC::ConsensusPacket* msg)
      {
        debug("Received consensus packet from %u", msg->getSource());
        if (isActive() && is_initialized && msg->getSource() == m_params.leader_id)
        {
          float z_dummy;
          WGS84::displacement(m_estate.lat, m_estate.lon, 0., msg->lat, msg->lon, 0., &m_target_hand.x, &m_target_hand.y, &z_dummy);
          m_target_hand.x_dot = msg->v_x;
          m_target_hand.y_dot = msg->v_y;

          edge_consensus(&m_own_hand, &m_target_hand, &m_params.offset, m_params.c, m_params.rho, m_params.d_min, m_params.d_max, &m_hand_velocity_reference);
          hand_velocity_controller(&m_hand_velocity_reference, &m_estate, m_params.h, m_params.U_max, &m_speed, &m_yaw_rate);

          dispatch(m_speed);
          dispatch(m_yaw_rate);
          dispatch(m_z_ref);
          debug("Dispatching references");
        }
      }
    };    
  }
}

DUNE_TASK
