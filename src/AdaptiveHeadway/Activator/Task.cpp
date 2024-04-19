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

namespace AdaptiveHeadway
{
  //! Activator
  //!
  //! Handles delayed activation via the ExperimentControl message.
  //! @author Josef Matous
  namespace Activator
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Periodic
    {
      IMC::ExperimentControl m_experiment_control;
      bool m_is_waiting;
      double m_transmission_time;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        bind<IMC::ExperimentControl>(this);

        m_is_waiting = false;
        m_transmission_time = 0.;
      }

      void
      consume(const IMC::ExperimentControl* msg)
      {
        if (msg->delay > 0.)
        {
          if (m_is_waiting)
          {
            war("An ExperimentControl message is already waiting. Ignoring ...");
            return;
          }
          m_experiment_control.start = msg->start;
          m_experiment_control.delay = 0.;
          m_is_waiting = true;
          m_transmission_time = Clock::get() + msg->delay;
          debug("Waiting for %g seconds", msg->delay);
        }
      }

      //! Main loop.
      void
      task(void)
      {
        if (m_is_waiting && (Clock::get() >= m_transmission_time))
        {
          dispatch(m_experiment_control);
          m_is_waiting = false;
          debug("Re-sending the ExperimentControl message");
        }
      }
    };    
  }
}

DUNE_TASK