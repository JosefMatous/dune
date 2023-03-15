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

#ifndef NSB_OBSTACLE_ESTIMATOR_HPP_
#define NSB_OBSTACLE_ESTIMATOR_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Utilities.hpp"

namespace NSB
{
    using DUNE_NAMESPACES;

    class ObstacleEstimator
    {
      public:
        ObstacleState m_obstacle_state;

        ObstacleEstimator()
        {        
        }

        //! Simulates the obstacle up to the given timestamp
        inline void
        simulate(double timestamp)
        {
          double delta_t = timestamp - m_obstacle_state.timestamp;
          m_obstacle_state.timestamp = timestamp;
          m_obstacle_state.x += m_obstacle_state.vx * delta_t;
          m_obstacle_state.y += m_obstacle_state.vy * delta_t;
        }

        //! Updates the obstacle state (including the timestamp)
        inline void
        update(const IMC::Target* msg, double lat0, double lon0)
        {
          m_obstacle_state.timestamp = msg->getTimeStamp();
          m_obstacle_state.vx = msg->sog * std::cos(msg->cog);
          m_obstacle_state.vy = msg->sog * std::sin(msg->cog);   
          WGS84::displacement(lat0, lon0, 0., msg->lat, msg->lon, 0., &m_obstacle_state.x, &m_obstacle_state.y);       
        }

        //! Get obstacle state at a given timestamp
        inline void
        get_obstacle_state(double timestamp, ObstacleState& output)
        {
          output.timestamp = timestamp;
          output.vx = m_obstacle_state.vx;
          output.vy = m_obstacle_state.vy;
          
          double delta_t = timestamp - m_obstacle_state.timestamp;
          output.x = m_obstacle_state.x + delta_t*m_obstacle_state.vx;
          output.y = m_obstacle_state.y + delta_t*m_obstacle_state.vy;
        }
    };    
}

#endif
