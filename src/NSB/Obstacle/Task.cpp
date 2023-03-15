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
#include "../Utilities.hpp"

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
        //! Initial latitude.
        double lat0;
        //! Initial longitude.
        double lon0;
        //! Velocity x.
        float v_x;
        //! Velocity y.
        float v_y;
      } m_params;

      IMC::Target m_message;

      bool m_active;
      float m_x, m_y;
      Delta m_delta;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        param("Initial Latitude", m_params.lat0)
          .defaultValue("0.7188139"); 
        param("Initial Longitude", m_params.lon0)
          .defaultValue("-0.1519519");
        param("Velocity -- x", m_params.v_x)
          .defaultValue("0");
        param("Velocity -- y", m_params.v_y)
          .defaultValue("0");
        param("Active", m_active)
          .defaultValue("false");

        m_message.label = "obstacle";
        
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

      inline void
      reset(void)
      {
        m_x = 0.;
        m_y = 0.;
        m_delta.reset();
        debug("Obstacle reset");
      }

      //! Main loop.
      void
      task(void)
      {
        if (m_active)
        {
          double delta_t = m_delta.getDelta();
          
          m_x += m_params.v_x * delta_t;
          m_y += m_params.v_y * delta_t;

          m_message.lat = m_params.lat0;
          m_message.lon = m_params.lon0;
          WGS84::displace(m_x, m_y, &m_message.lat, &m_message.lon);
          m_message.sog = std::sqrt(square(m_params.v_x) + square(m_params.v_y));
          m_message.cog = std::atan2(m_params.v_y, m_params.v_x);
          debug("Obstacle at (%f, %f)", m_x, m_y);
          dispatch(m_message);
        }
      }
    };    
  }
}

DUNE_TASK