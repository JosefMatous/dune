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

#ifndef NSB_TRANSMISSION_CONTROL_HPP
#define NSB_TRANSMISSION_CONTROL_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace NSB
{
  using DUNE_NAMESPACES;

  //! NSB transmission control
  //!
  //! This class checks if it is necessary to send a consensus packet.
  //! The class currently supports time-based and sample-based triggering.
  class TransmissionControl
  {
    private:
      double m_last_message_time;
      int m_sample_counter;

    public:
      //! Send packet every x seconds. Set to -1 to disable.
      double m_time_period;
      //! Send packet evey n-th control period. Set to -1 to disable.
      int m_sample_period;

      TransmissionControl(double time_period, int sample_period)
      {
        m_time_period = time_period;
        m_sample_period = sample_period;

        reset();
      }

      inline void
      reset(void)
      {
        m_last_message_time = -1;
        m_sample_counter = 0;
      }

      bool
      canTransmit(void)
      {
        ++m_sample_counter;
        double current_time = Time::Clock::get();
        double delta_t = current_time - m_last_message_time;
        if (delta_t >= m_time_period && m_sample_counter >= m_sample_period)
        {
          m_last_message_time = current_time;
          m_sample_counter = 0;

          return true;
        }
        else
          return false;
      }
  }
}
#endif