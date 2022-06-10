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

namespace NSB
{
  //! Bundles state estimates from up to three vehicles.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Josef Matous
  namespace FeedthroughEstimator
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      std::string m_vehicle_names[3];
      uint16_t m_vehicle_ids[3];
      bool m_is_used[3];
      bool m_is_valid[3];

      IMC::GroupEstimatedState m_group_state;
      IMC::EstimatedState m_states[3];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Vehicle 1 -- Name", m_vehicle_names[0])
          .defaultValue("lauv-noptilus-1")
          .description("Name of the first vehicle");
        param("Vehicle 2 -- Name", m_vehicle_names[1])
          .defaultValue("lauv-noptilus-2")
          .description("Name of the second vehicle");
        param("Vehicle 3 -- Name", m_vehicle_names[2])
          .defaultValue("lauv-noptilus-3")
          .description("Name of the third vehicle");

        param("Vehicle 1 -- Used", m_is_used[0])
          .defaultValue("true")
          .description("Is the first vehicle in the formation");
        param("Vehicle 2 -- Used", m_is_used[1])
          .defaultValue("true")
          .description("Is the second vehicle in the formation");
        param("Vehicle 3 -- Used", m_is_used[2])
          .defaultValue("true")
          .description("Is the third vehicle in the formation");   

        bind<IMC::EstimatedState>(this);     
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        for (int i = 0; i < 3; i++)
        {
          m_is_valid[i] = false;
          if (m_is_used[i])
          {
            m_vehicle_ids[i] = m_ctx.resolver.resolve(m_vehicle_names[i]);
            inf("Vehicle number %d has ID %u", i+1, m_vehicle_ids[i]);
          }
        }
        m_group_state.clear();
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        m_group_state.clear();
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        uint16_t m_sender_id = msg->getSource();
        bool is_match = false;
        int i;
        for (i = 0; i < 3; i++)
        {
          if (m_is_used[i] && (m_sender_id == m_vehicle_ids[i]))
          {
            is_match = true;
            break;
          }
        }
        
        if (is_match)
        {
          m_states[i] = *msg;
          m_is_valid[i] = true;
        }

        if ((m_is_valid[0] || !m_is_used[0]) && (m_is_valid[1] || !m_is_used[1]) && (m_is_valid[2] || !m_is_used[2]))
        {
          dispatchStates();
        }
      }

      inline void
      dispatchStates(void)
      {
        m_group_state.clear();
        // Temporarily reset parent to stop header synchronization
        m_group_state.estate_list.setParent(NULL);
        for (int i = 0; i < 3; i++)
        {
          if (m_is_used[i])
          {
            m_group_state.estate_list.push_back(&m_states[i]);
          }
        }
        m_group_state.estate_list.setParent(&m_group_state);
        dispatch(m_group_state);
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
