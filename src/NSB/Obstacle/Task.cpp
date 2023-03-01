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
  //! Obstacle
  //!
  //! Simulates an obstacle moving in a straight line.
  //! Periodically publishes its location using the `Target` IMC message.
  //! @author Josef Matous
  namespace Obstacle
  {
    using DUNE_NAMESPACES;


    struct Task: public DUNE::Tasks::Periodic
    {
      struct 
      {
        //! Speed.
        float U;
        //! Latitude of the origin.
        double lat;
        //! Longitude of the origin.
        double lon;
        //! Course.
        float psi;
        //! Depth.
        float z;
      } m_params;

      IMC::Target m_message;

      bool m_active;
      float m_x, m_y;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        param("Speed", m_params.U)
          .defaultValue("0.8");
        param("Origin Latitude", m_params.lat)
          .defaultValue("0.7188178");
        param("Origin Longitude", m_params.lon)
          .defaultValue("-0.15193965");
        param("Course", m_params.psi)
          .defaultValue("0");
        param("Depth", m_params.z)
          .defaultValue("0");
        param("Active", m_active)
          .defaultValue("false");
        
        reset();
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_active))
          reset();
      }

      void
      onResourceInitialization(void)
      {
        reset();
      }

      void
      reset(void)
      {
        m_x = 0.;
        m_y = 0.;
        debug("Obstacle reset");
      }

      //! Main loop.
      void
      task(void)
      {
        if (m_active)
        {
          float dU = m_params.U / getFrequency();
          
          m_x += dU * std::cos(m_params.psi);
          m_y += dU * std::sin(m_params.psi);

          m_message.label = "obstacle";
          m_message.sog = m_params.U;
          m_message.cog = m_params.psi;

          m_message.lat = m_params.lat;
          m_message.lon = m_params.lon;
          WGS84::displace(m_x, m_y, &m_message.lat, &m_message.lon);
          debug("Obstacle at (%f, %f)", m_x, m_y);

          dispatch(m_message);
        }
      }
    };    
  }
}

DUNE_TASK