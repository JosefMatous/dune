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
          Vector2D relative_position;
          double cone_angle;
          bool is_in_cone, hysteresis;
        };       

        //! Returns the information about the obstacle
        ObstacleInfo
        getObstacleInfo(float own_x, float own_y, double own_vx, double own_vy, const ObstacleState& obs, float extra_avoidance_radius)
        {
          ObstacleInfo info;
          info.relative_position.x = obs.x - own_x;
          info.relative_position.y = obs.y - own_y;
          Vector2D relative_velocity;
          relative_velocity.x = own_vx - obs.vx;
          relative_velocity.y = own_vy - obs.vy;

          double distance = norm(info.relative_position);
          float avoidance_radius = m_obstacle_radius + extra_avoidance_radius;
          if (avoidance_radius < distance)
            info.cone_angle = std::asin(avoidance_radius / distance);
          else
            info.cone_angle = M_PI_2 + m_recovery * (avoidance_radius - distance) / avoidance_radius;

          double speed = norm(relative_velocity);

          if (info.cone_angle >= m_cone_min)
            info.is_in_cone = dot(info.relative_position, relative_velocity) >= std::cos(info.cone_angle) * speed * distance;
          else
            info.is_in_cone = false;            

          if ((m_last_direction != OA_DIRECTION_NONE) && (m_hysteresis > 0.))
            info.hysteresis = dot(info.relative_position, relative_velocity) >= std::cos(info.cone_angle + m_hysteresis) * speed * distance;
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

        Vector2D
        generateAvoidanceManeuver(ObstacleInfo& oinf, uint8_t direction, double own_vx, double own_vy, const ObstacleState& obs)
        {
          Vector2D man;
          double desired_course = std::atan2(oinf.relative_position.y, oinf.relative_position.x) + getDirection(direction)*oinf.cone_angle;
          double own_speed = std::sqrt(square(own_vx) + square(own_vy));
          // Solve for U such that
          //   man = U*[cos(desired_course), sin(desired)course] + obstacle_velocity
          //   norm(man) = speed
          double a = 2 * (std::cos(desired_course)*obs.vx + std::sin(desired_course)*obs.vy);
          double b = square(own_speed) - square(obs.vx) - square(obs.vy);
          double U = (std::sqrt(square(a) + 4*b)) * 0.5;
          man.x = U*std::cos(desired_course) + obs.vx;
          man.y = U*std::sin(desired_course) + obs.vy;

          return man;
        }

      public:

        //! Minimum cone angle
        double m_cone_min;
        //! Obstacle radius
        float m_obstacle_radius; 
        //! Hysteresis of collision detection
        double m_hysteresis;
        //! Recovery angle
        double m_recovery;

        //! Initialize with default parameters
        ObstacleAvoidance():
          m_last_direction(OA_DIRECTION_NONE),
          m_last_obstacle(0U),
          m_cone_min(Angles::radians(5.))
        {        
        }   

        //! Initialize with custom parameters
        ObstacleAvoidance(double cone_min, double hysteresis, double obstacle_radius, double recovery):
          m_last_direction(OA_DIRECTION_NONE),
          m_last_obstacle(0U)
        {
          m_cone_min = cone_min;
          m_hysteresis = hysteresis;
          m_obstacle_radius = obstacle_radius;
          m_recovery = recovery;
        }   

        //! Performs the obstacle avoidance algorithm.
        //! The new desired velocity vector is written into own velocities.
        inline void
        step(float own_x, float own_y, std::map<uint16_t, ObstacleState>& obs, float extra_avoidance_radius, double vx_ref, double vy_ref, double& own_vx, double& own_vy, DUNE::Tasks::Task* task = nullptr)
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
            if ((task != nullptr) && (m_last_direction != OA_DIRECTION_NONE))
              task->debug("Exited avoidance maneuver");
            m_last_direction = OA_DIRECTION_NONE;
            return;
          }

          Vector2D reference;
          if ((m_last_direction != OA_DIRECTION_NONE) && contains(active_obstacles, m_last_obstacle))
          {
            reference = generateAvoidanceManeuver(active_obstacles[m_last_obstacle], m_last_direction, own_vx, own_vy, obs[m_last_obstacle]);
          }
          else
          {
            reference.x = vx_ref;
            reference.y = vy_ref;
          }

          // Find the closest obstacle
          uint16_t closest_obstacle;
          double d_min = 1e9;
          for (auto pair: active_obstacles)
          {
            double d_i = norm(pair.second.relative_position);
            if (d_i < d_min)
            {
              d_min = d_i;
              closest_obstacle = pair.first;
            }
          }

          // Check if we can use the previous maneuver
          if ((m_last_direction != OA_DIRECTION_NONE) && (closest_obstacle == m_last_obstacle))
          {
            own_vx = reference.x;
            own_vy = reference.y;
            return;
          }

          // If not, minimize deviation
          m_last_obstacle = closest_obstacle;
          Vector2D man_starboard = generateAvoidanceManeuver(active_obstacles[closest_obstacle], OA_DIRECTION_STARBOARD, own_vx, own_vy, obs[closest_obstacle]);
          Vector2D man_port = generateAvoidanceManeuver(active_obstacles[closest_obstacle], OA_DIRECTION_PORT, own_vx, own_vy, obs[closest_obstacle]);
          double man_starboard_deviation = dot(man_starboard, reference) / (norm(man_starboard)*norm(reference));
          double man_port_deviation = dot(man_port, reference) / (norm(man_port)*norm(reference));
          if ((man_starboard_deviation + 0.1) > man_port_deviation) // slightly bias the maneuvers towards starboard side
          {
            own_vx = man_starboard.x;
            own_vy = man_starboard.y;
            m_last_direction = OA_DIRECTION_STARBOARD;
          }
          else
          {
            own_vx = man_port.x;
            own_vy = man_port.y;
            m_last_direction = OA_DIRECTION_PORT;
          }

          if (task != nullptr)
          {
            task->debug("Avoidance maneuver changed to: obstacle %u, direction %u", m_last_obstacle, (uint16_t)m_last_direction);
            std::ostringstream debug_msg;
            debug_msg << "Active obstacles: ";
            for (auto pair: active_obstacles)
            {
              debug_msg << pair.first << " ";
            }
            task->debug(debug_msg.str().c_str());
          }
        }

        inline void
        step(float own_x, float own_y, std::map<uint16_t, ObstacleState>& obs, float extra_avoidance_radius, const GeometricPath::PathPoint& path_point, LineOfSight::LineOfSightOutput& out, DUNE::Tasks::Task* task = nullptr)
        {
          // Project the initial LOS vector onto the path
          double projection_initial = dot(out.velocity, path_point.p_diff);
          // Perform obstacle avoidance
          step(own_x, own_y, obs, extra_avoidance_radius, path_point.p_diff.x, path_point.p_diff.y, out.velocity.x, out.velocity.y, task);
          // Calculate the LOS vector projection after obstacle avoidance
          double projection_final = dot(out.velocity, path_point.p_diff);
          // Adjust the path parameter update law
          double progress_difference = out.path_progress * (projection_final / projection_initial - 1.);
          out.path_progress += progress_difference;
          out.path_parameter_derivative += progress_difference;
        }
    };    
}

#endif
