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

#ifndef NSB_OBSTACLE_AVOIDANCE_HPP_
#define NSB_OBSTACLE_AVOIDANCE_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utilities.hpp"
#include "LineOfSight.hpp"

namespace NSB
{
    using DUNE_NAMESPACES;

    class ObstacleAvoidance
    {
      private:
        //! Direction of obstacle avoidance from previous time-step (1=starboard, -1=port, 0=inactive)
        float m_last_direction;

        //! Returns true if the obstacle avoidance scheme was active in the previous step
        inline bool
        was_active(void)
        {
          return (m_last_direction == 0.);
        }

      public:

        //! Minimum cone angle
        double m_cone_min;
        //! Obstacle radius
        float m_obstacle_radius; 
        //! Hysteresis of collision detection
        double m_hysteresis;

        //! Initialize with default parameters
        ObstacleAvoidance():
          m_last_direction(0.),
          m_cone_min(Angles::radians(5.))
        {        
        }

        //! Initialize with custom parameters
        ObstacleAvoidance(double cone_min):
          m_last_direction(0.)
        {
          m_cone_min = cone_min;
          m_hysteresis = 0.;
        }    

        //! Initialize with custom parameters
        ObstacleAvoidance(double cone_min, double hysteresis):
          m_last_direction(0.)
        {
          m_cone_min = cone_min;
          m_hysteresis = hysteresis;
        }    

        //! Performs the obstacle avoidance algorithm.
        //! The new desired velocity vector is written into the LOS output.
        inline void
        step(float own_x, float own_y, ObstacleState& obs, float extra_avoidance_radius, LineOfSight::LineOfSightOutput& out)
        {
          Vector2D relative_position, relative_velocity;
          relative_position.x = obs.x - own_x;
          relative_position.y = obs.y - own_y;
          relative_velocity.x = out.velocity.x - obs.vx;
          relative_velocity.y = out.velocity.y - obs.vy;

          double distance = norm(relative_position);
          double cone_angle;
          float avoidance_radius = m_obstacle_radius + extra_avoidance_radius;
          if (avoidance_radius < distance)
            cone_angle = std::asin(avoidance_radius / distance);
          else
            cone_angle = M_PI_2;

          if (cone_angle < m_cone_min)
          {
            m_last_direction = 0.;
            return;
          }
          
          double speed = norm(relative_velocity);

          bool hysteresis = false;
          if (m_last_direction != 0. && m_hysteresis > 0.) // check for hysteresis
          {
            hysteresis = dot(relative_position, relative_velocity) >= std::cos(cone_angle + m_hysteresis) * speed * distance;
          }

          bool is_in_cone = dot(relative_position, relative_velocity) >= std::cos(cone_angle) * speed * distance;

          if (!(hysteresis | is_in_cone))
          {
            m_last_direction = 0.;
            return;
          }

          if (m_last_direction == 0.)
          {
            //m_last_direction = sign(cross(relative_position, relative_velocity));
            m_last_direction = sign(obs.vx*relative_position.y - obs.vy*relative_position.x);
          }

          double desired_course = std::atan2(relative_position.y, relative_position.x) + m_last_direction*cone_angle;
          out.velocity.x = speed*std::cos(desired_course) + obs.vx;
          out.velocity.y = speed*std::sin(desired_course) + obs.vy;
        }
    };    
}

#endif
