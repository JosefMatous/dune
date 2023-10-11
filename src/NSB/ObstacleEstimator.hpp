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
        std::map<uint16_t, ObstacleState> m_obstacle_states;

        ObstacleEstimator()
        {        
        }

        //! Simulates the obstacle up to the given timestamp
        inline void
        simulate(double timestamp)
        {
          for (auto pair: m_obstacle_states)
          {
            double delta_t = timestamp - pair.second.timestamp;
            pair.second.timestamp = timestamp;
            pair.second.x += pair.second.vx * delta_t;
            pair.second.y += pair.second.vy * delta_t;
          }
        }

        //! Updates the obstacle state (including the timestamp)
        inline void
        update(const IMC::Target* msg, double lat0, double lon0)
        {
          uint16_t obstacle_id;
          if (castLexical(msg->label, obstacle_id))
          {
            m_obstacle_states[obstacle_id].timestamp = msg->getTimeStamp();
            m_obstacle_states[obstacle_id].vx = msg->sog * std::cos(msg->cog);
            m_obstacle_states[obstacle_id].vy = msg->sog * std::sin(msg->cog);   
            WGS84::displacement(lat0, lon0, 0., msg->lat, msg->lon, 0., &m_obstacle_states[obstacle_id].x, &m_obstacle_states[obstacle_id].y);       
          }
        }

        //! Get obstacle state at a given timestamp
        inline void
        get_obstacle_state(double timestamp, std::map<uint16_t, ObstacleState>& output)
        {
          for (auto pair: m_obstacle_states)
          {
            uint16_t id = pair.first;
            output[id].timestamp = pair.second.timestamp;
            output[id].vx = pair.second.vx;
            output[id].vy = pair.second.vy;
            
            double delta_t = timestamp - pair.second.timestamp;
            output[id].x = pair.second.x + delta_t*pair.second.vx;
            output[id].y = pair.second.y + delta_t*pair.second.vy;
          }
        }
    };    
}

#endif
