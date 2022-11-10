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
  //! NSB message transport
  //!
  //! This task re-dispatches NSB messages to avoid frequent communications in low-bandwidth networks.
  //! The task can be time-based or sample-based (i.e., transmit every x seconds or transmit every n-th packet).
  //! If both modes are active, then both conditions have to apply.
  //! @author Josef Matous
  namespace MessageTransport
  {
    using DUNE_NAMESPACES;


    struct Task: public DUNE::Tasks::Task
    {
      struct 
      {
        //! Transmit every x seconds. Set to -1 to deactivate.
        double time_period;
        //! Transmit every n-th packet. Set to -1 to deactivate.
        int sample_period;
      } m_params;

      //! Time of the last packet transmission
      double m_last_timestep;
      //! Samples since the last packet transmission
      int m_sample_counter;

      IMC::NSBMsg m_message;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::NSBMsg>(this);

        param("Time Period", m_params.time_period)
          .defaultValue("0.25");
        param("Sample Period", m_params.sample_period)
          .defaultValue("-1");
        reset();
      }

      void
      onActivation(void)
      {
        reset();
      }

      void
      onDeactivation(void)
      {
        reset();
      }

      void
      onUpdateParameters(void)
      {
        reset();
      }

      void
      reset(void)
      {
        m_last_timestep = -1;
        m_sample_counter = 0;
      }

      void
      consume(const IMC::NSBMsg* msg)
      {
        if (msg->getSource() == getSystemId() && msg->getSourceEntity() != getEntityId())
        {
          //debug("Consuming NSB message");
          m_sample_counter += 1;
          if (m_last_timestep < 0)
          {
            debug("Dispatching first message");
            redispatch(msg);
          }
          else
          {
            double delta_t = msg->getTimeStamp() - m_last_timestep;
            if (delta_t > m_params.time_period && m_sample_counter >= m_params.sample_period)
            {
              debug("Dispatch condition triggered");
              redispatch(msg);              
            }
          }
          
        }
      }

      inline void
      redispatch(const IMC::NSBMsg* msg)
      {
        memccpy(&m_message, msg, 1, sizeof(IMC::NSBMsg));
        m_message.setSourceEntity(getEntityId());

        m_last_timestep = msg->getTimeStamp();
        m_sample_counter = 0;

        m_message.setDestination(0xFFFF);
        m_message.setDestinationEntity(0xFF);
        dispatch(m_message, DF_KEEP_TIME);
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
