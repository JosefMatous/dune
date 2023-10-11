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

#define OA_DIRECTION_NONE 0b00U
#define OA_DIRECTION_STARBOARD 0b01U
#define OA_DIRECTION_PORT 0b10U

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utilities.hpp"
#include "LineOfSight.hpp"

namespace NSB
{
    using DUNE_NAMESPACES;

    template <typename T>
    inline bool
    contains(std::vector<T>& v, T x)
    {
      return (std::find(v.begin(), v.end(), x) != v.end());
    }

    template <typename A, typename B>
    inline bool
    contains(std::map<A,B>& m, A k)
    {
      return (m.find(k) != m.end());
    }

    class ObstacleAvoidance
    {
      private:
        //! Direction of obstacle avoidance from previous time-step (0b01=starboard, 0b10=port, 0b00=inactive)
        uint8_t m_last_direction;
        //! ID of the last avoided obstacle
        uint16_t m_last_obstacle;

        struct ObstacleInfo
        {
          Vector2D relative_position, relative_velocity, obstacle_velocity;
          double cone_angle;
          bool is_in_cone, hysteresis;
        };  

        struct AvoidanceManeuver
        {
          uint16_t obstacle_id;
          uint8_t direction;
          float v_x, v_y;
        };      

        //! Returns the information about the obstacle
        ObstacleInfo
        getObstacleInfo(float own_x, float own_y, double own_vx, double own_vy, const ObstacleState& obs, float extra_avoidance_radius)
        {
          ObstacleInfo info;
          info.relative_position.x = obs.x - own_x;
          info.relative_position.y = obs.y - own_y;
          info.relative_velocity.x = own_vx - obs.vx;
          info.relative_velocity.y = own_vy - obs.vy;
          info.obstacle_velocity.x = obs.vx;
          info.obstacle_velocity.y = obs.vy;

          double distance = norm(info.relative_position);
          float avoidance_radius = m_obstacle_radius + extra_avoidance_radius;
          if (avoidance_radius < distance)
            info.cone_angle = std::asin(avoidance_radius / distance);
          else
            info.cone_angle = M_PI_2;

          double speed = norm(info.relative_velocity);

          if (info.cone_angle >= m_cone_min)
            info.is_in_cone = dot(info.relative_position, info.relative_velocity) >= std::cos(info.cone_angle) * speed * distance;
          else
            info.is_in_cone = false;            

          if ((m_last_direction != OA_DIRECTION_NONE) && (m_hysteresis > 0.))
            info.hysteresis = dot(info.relative_position, info.relative_velocity) >= std::cos(info.cone_angle + m_hysteresis) * speed * distance;
          else
            info.hysteresis = false;

          return info;
        }

        //! Cast enum direction to float
        inline float
        getDirection(uint8_t dir_code)
        {
          switch (dir_code)
          {
          case OA_DIRECTION_STARBOARD:
            return 1.;
          case OA_DIRECTION_PORT:
            return -1.;
          default:
            return 0.;
          }
        }

        //! Cast float direction to enum
        inline uint8_t
        getDirection(float dir)
        {
          if (dir > 0.)
            return OA_DIRECTION_STARBOARD;
          if (dir < 0.)
            return OA_DIRECTION_PORT;
          else
            return OA_DIRECTION_NONE;
        }

        AvoidanceManeuver
        generateAvoidanceManeuver(ObstacleInfo& oinf, uint16_t oid, uint8_t direction)
        {
          AvoidanceManeuver man;
          double desired_course = std::atan2(oinf.relative_position.y, oinf.relative_position.x) + getDirection(direction)*oinf.cone_angle;
          double speed = norm(oinf.relative_velocity);
          man.v_x = speed*std::cos(desired_course) + oinf.obstacle_velocity.x;
          man.v_y = speed*std::sin(desired_course) + oinf.obstacle_velocity.y;
          man.direction = direction;
          man.obstacle_id = oid;

          return man;
        }

        bool
        validateAvoidanceManeuver(float own_x, float own_y, std::map<uint16_t, ObstacleInfo>& active_obstacles, 
          std::map<uint16_t, ObstacleState>& obstacles, const AvoidanceManeuver& man, float extra_avoidance_radius)
        {
          if (!contains(active_obstacles, man.obstacle_id))
            return false;

          bool is_feasible = true;
          for (auto pair: active_obstacles)
          {
            if (pair.first != man.obstacle_id)
            {
              ObstacleInfo oinf = getObstacleInfo(own_x, own_y, man.v_x, man.v_y, obstacles[pair.first], extra_avoidance_radius);
              if (oinf.is_in_cone)
              {
                is_feasible = false;
                break;
              }
            }
          }
          return is_feasible;
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
          m_last_direction(OA_DIRECTION_NONE),
          m_last_obstacle(0U),
          m_cone_min(Angles::radians(5.))
        {        
        }

        //! Initialize with custom parameters
        ObstacleAvoidance(double cone_min):
          m_last_direction(OA_DIRECTION_NONE),
          m_last_obstacle(0U)
        {
          m_cone_min = cone_min;
          m_hysteresis = 0.;
        }    

        //! Initialize with custom parameters
        ObstacleAvoidance(double cone_min, double hysteresis):
          m_last_direction(OA_DIRECTION_NONE),
          m_last_obstacle(0U)
        {
          m_cone_min = cone_min;
          m_hysteresis = hysteresis;
        }    

        //! Initialize with custom parameters
        ObstacleAvoidance(double cone_min, double hysteresis, double obstacle_radius):
          m_last_direction(OA_DIRECTION_NONE),
          m_last_obstacle(0U)
        {
          m_cone_min = cone_min;
          m_hysteresis = hysteresis;
          m_obstacle_radius = obstacle_radius;
        }   

        //! Performs the obstacle avoidance algorithm.
        //! The new desired velocity vector is written into own velocities.
        inline void
        step(float own_x, float own_y, std::map<uint16_t, ObstacleState>& obs, float extra_avoidance_radius, double& own_vx, double& own_vy, DUNE::Tasks::Task* task = nullptr)
        {
          std::map<uint16_t, ObstacleInfo> active_obstacles;
          for (auto pair: obs)
          {
            ObstacleInfo oinf = getObstacleInfo(own_x, own_y, own_vx, own_vy, pair.second, extra_avoidance_radius);
            if (oinf.is_in_cone || (oinf.hysteresis && m_last_obstacle == pair.first))
            {
              active_obstacles.emplace(pair.first, oinf);
            }
          }

          if (active_obstacles.size() == 0) // No active obstacles; exit
          {
            m_last_direction = OA_DIRECTION_NONE;
            return;
          }

          // Find feasible avoidance maneuvers  
          std::vector<AvoidanceManeuver> feasible_maneuvers;
          for (auto pair: active_obstacles)
          {
            // Generate and check a starboard avoidance maneuver
            AvoidanceManeuver man = generateAvoidanceManeuver(pair.second, pair.first, OA_DIRECTION_STARBOARD);
            if (validateAvoidanceManeuver(own_x, own_y, active_obstacles, obs, man, extra_avoidance_radius))
              feasible_maneuvers.push_back(man);

            // Generate and check a port avoidance maneuver
            man = generateAvoidanceManeuver(pair.second, pair.first, OA_DIRECTION_PORT);
            if (validateAvoidanceManeuver(own_x, own_y, active_obstacles, obs, man, extra_avoidance_radius))
              feasible_maneuvers.push_back(man);
          }

          // Check if we can use the maneuver from the previous step
          bool can_use_previous = false;
          size_t i = 0;
          for (; i < feasible_maneuvers.size(); i++)
          {
            if ((feasible_maneuvers[i].direction == m_last_direction) && (feasible_maneuvers[i].obstacle_id == m_last_obstacle))
            {
              can_use_previous = true;
              break;
            }
          }
          if (can_use_previous)
          {
            own_vx = feasible_maneuvers[i].v_x;
            own_vy = feasible_maneuvers[i].v_y;

            return;
          }

          // If we cannot use the previous maneuver, try to minimize deviation
          double best_velocity_product(-1e9), velocity_product_i;
          Vector2D v_d;
          v_d.x = own_vx;
          v_d.y = own_vy;
          for (i = 0; i < feasible_maneuvers.size(); i++)
          {
            velocity_product_i = feasible_maneuvers[i].v_x * own_vx + feasible_maneuvers[i].v_y * own_vy;
            if (velocity_product_i > best_velocity_product)
            {
              best_velocity_product = velocity_product_i;
              v_d.x = feasible_maneuvers[i].v_x;
              v_d.y = feasible_maneuvers[i].v_y;
              m_last_obstacle = feasible_maneuvers[i].obstacle_id;
              m_last_direction = feasible_maneuvers[i].direction;
            }
          }
          own_vx = v_d.x;
          own_vy = v_d.y;
        }

        inline void
        step(float own_x, float own_y, std::map<uint16_t, ObstacleState>& obs, float extra_avoidance_radius, LineOfSight::LineOfSightOutput& out, DUNE::Tasks::Task* task = nullptr)
        {
          Vector2D v_LOS_initial, v_LOS_final;
          double inv_norm;
          // Calculate the normalized horizontal LOS vector
          inv_norm = std::pow(square(out.velocity.x) + square(out.velocity.y), -0.5);
          v_LOS_initial.x = out.velocity.x * inv_norm;
          v_LOS_initial.y = out.velocity.y * inv_norm;
          // Perform obstacle avoidance
          step(own_x, own_y, obs, extra_avoidance_radius, out.velocity.x, out.velocity.y, task);
          // Calculate the normalized LOS vector after obstacle avoidance
          inv_norm = std::pow(square(out.velocity.x) + square(out.velocity.y), -0.5);
          v_LOS_final.x = out.velocity.x * inv_norm;
          v_LOS_final.y = out.velocity.y * inv_norm;
          // Adjust the path parameter update law
          out.path_parameter_derivative *= dot(v_LOS_initial, v_LOS_final);
        }
    };    
}

#endif
