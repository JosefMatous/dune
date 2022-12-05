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
  //! Consensus for vehicles with virtual leader
  //!
  //! Implements the edge-based consensus algorithm for nodes that have access to the virtual leader.
  //! @author Josef Matous
  namespace ConsensusLeader
  {
    using DUNE_NAMESPACES;

    //! Required control loops
    static const uint32_t c_required = IMC::CL_SPEED | IMC::CL_YAW_RATE;    

    struct Task: public DUNE::Tasks::Task
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
      } m_params;

      Vector2D m_hand_velocity_reference;
      IMC::DesiredHeadingRate m_yaw_rate;
      IMC::DesiredSpeed m_speed;

      //! Control loops last reference
      uint32_t m_scope_ref;
      //! Active loops
      uint32_t m_aloops;
      IMC::ControlLoops m_cloops;

      HandPosition m_own_hand;
      IMC::EstimatedState m_estate;
      HandPosition m_target_hand;

      bool is_initialized; // task has received EstimatedState

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        // Initialize main entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        bind<IMC::EstimatedState>(this);
        bind<IMC::Target>(this);

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

        is_initialized = false;
      }

      //! Update internal parameters.
      void
      onUpdateParameters(void)
      {
        reset();
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        reset();

        // Activate control loops
        if ((c_required & m_aloops) == c_required)
          return;

        m_aloops |= c_required;
        m_cloops.enable = IMC::ControlLoops::CL_ENABLE;
        m_cloops.mask = c_required;
        m_cloops.scope_ref = m_scope_ref;
        dispatch(m_cloops);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        reset();

        // Deactivate control loops
        if ((c_required & ~m_aloops) == c_required)
          return;

        m_aloops &= ~c_required;
        m_cloops.enable = IMC::ControlLoops::CL_DISABLE;
        m_cloops.mask = c_required;
        m_cloops.scope_ref = m_scope_ref;
        dispatch(m_cloops);
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
        is_initialized = false;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (isActive())
        {
          get_hand_position(msg, m_params.h, &m_own_hand);
          m_estate.lat = msg->lat;
          m_estate.lon = msg->lon;
          m_estate.psi = msg->psi;
          m_estate.v = msg->v;
          is_initialized = true;
          debug("Processing estate");
        }
      }

      void
      consume(const IMC::Target* msg)
      {
        if (isActive() && is_initialized)
        {
          float z_dummy;
          WGS84::displacement(m_estate.lat, m_estate.lon, 0., msg->lat, msg->lon, 0., &m_target_hand.x, &m_target_hand.y, &z_dummy);
          m_target_hand.x_dot = msg->sog * std::cos(msg->cog);
          m_target_hand.y_dot = msg->sog * std::sin(msg->cog);

          edge_consensus(&m_own_hand, &m_target_hand, &m_params.offset, m_params.c, m_params.rho, m_params.d_min, m_params.d_max, &m_hand_velocity_reference);
          hand_velocity_controller(&m_hand_velocity_reference, &m_estate, m_params.h, m_params.U_max, &m_speed, &m_yaw_rate);

          dispatch(m_speed);
          dispatch(m_yaw_rate);
          debug("Dispatching references");
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
