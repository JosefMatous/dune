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

#include "../GeometricPath.hpp"
#include "../LineOfSight.hpp"
#include "../FormationKeeping.hpp"
#include "../Utilities.hpp"
#include "../ObstacleAvoidance.hpp"
#include "../ObstacleEstimator.hpp"
#include "../Parameters.hpp"

namespace NSB
{
  //! Distributed NSB.
  //!
  //! Combines line-of-sight guidance with formation keeping.
  //! @author Josef Matous
  namespace PlanGenerator
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Periodic
    {
      Ellipse m_ellipse_path;
      Waypoints m_waypoint_path;
      LineOfSight m_los;
      FormationKeepingSaturated m_form;

      struct 
      {
        double path_param, x, y, z, r_f;
      } m_nsb_state;

      struct
      {
        double x, y, z;
      } m_vehicle_state;

      std::map<uint16_t, ObstacleState> m_obstacle_states;
      std::vector<double> m_obstacle_x0, m_obstacle_y0;

      struct
      {
        std::vector<double> p_vehicle;
        std::vector<double> p_barycenter;
        bool use_obstacle, use_ellipse;
        double delta_t;
        std::vector<double> waypoint_param;
        std::string plan_name;
        std::string start_plan_name;
        double start_offset, start_distance, start_radius;
      } m_params;

      // Obstacle avoidance
      ObstacleAvoidance m_obs_avoid;

      double m_lat0, m_lon0;
      double m_lat_obs, m_lon_obs;
      bool is_plan_set, is_start_plan_set;

      uint16_t request_id, start_request_id;

      IMC::PlanControl m_pc, m_start_pc;
      IMC::PlanSpecification m_spec, m_start_spec;

      IMC::NSBParametersRequest m_nsb_request;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_ellipse_path(0, 0, 0., 50., 30., 0., 0, 0., false, M_PI_2, 0.),
        m_los(15., false, 1.3, 0.5),
        m_form(0., 0., 0., 0.25, 0.5)
      {
        //bind<IMC::PlanControl>(this);
        bind<IMC::NSBParameters>(this);

        is_plan_set = false;
        is_start_plan_set = false;

        param("Simulator Step Size", m_params.delta_t)
          .defaultValue("0.1")
          .minimumValue("0.01");
        param("Waypoint Parameters", m_params.waypoint_param)
          .defaultValue("0.0000, 0.7854, 1.5708, 2.3562, 3.1416, 3.9270, 4.7124, 5.4978, 6.2832, 7.0686")
          .description("Create waypoints when the path parameter reaches the given values");
        param("Plan Name", m_params.plan_name)
          .defaultValue("plan");

        param("Goto Start -- Offset", m_params.start_offset)
          .defaultValue("20");
        param("Goto Start -- Distance", m_params.start_distance)
          .defaultValue("30");
        param("Station Keeping -- Radius", m_params.start_radius)
          .defaultValue("5");

        param("Use Ellipse", m_params.use_ellipse)
          .defaultValue("true");          

        param("Vehicle -- Initial Position", m_params.p_vehicle)
          .defaultValue("0.7188233, -0.1519519, 0")
          .size(3)
          .description("Initial position of the vehicle (latitude, longitude, depth).");
        param("Barycenter -- Initial Position", m_params.p_barycenter)
          .defaultValue("0.7188233, -0.1519519, 0")
          .size(3)
          .description("Initial position of the barycenter (latitude, longitude, depth).");
        param("Use Obstacle", m_params.use_obstacle)
          .defaultValue("false")
          .description("Set to true if the experiment includes obstacle avoidance");

        request_id = 0x0800U;
        start_request_id = 0x0900U;
      }

      inline void
      debugExternalParameters(void)
      {
        debug("Ellipse -- Origin [%.2f, %.2f, %.2f]", m_ellipse_path.m_x_center, m_ellipse_path.m_y_center, m_ellipse_path.m_z_center);
        debug("Ellipse -- Axes   [%.2f, %.2f, %.2f]", m_ellipse_path.m_a, m_ellipse_path.m_b, m_ellipse_path.m_c);
        debug("Ellipse -- Clockwise %u", m_ellipse_path.m_clockwise);
        debug("Ellipse -- Orientation %.3f", m_ellipse_path.m_psi);
        debug("Ellipse -- Frequency %.1f", m_ellipse_path.m_z_freq);
        debug("Ellipse -- Initial Phases [%.3f, %.3f]", m_ellipse_path.m_phi0, m_ellipse_path.m_z_phi0);

        debug("LOS -- Lookahead Distance %f", m_los.m_lookahead);
        debug("LOS -- Speed %f", m_los.m_speed);
        debug("LOS -- Adaptive %u", m_los.m_adaptive);
        debug("LOS -- Gain %f", m_los.m_parameter_gain);

        debug("Formation Keeping -- Shape [%.2f, %.2f, %.2f]", m_form.p_form.x, m_form.p_form.y, m_form.p_form.z);

        debug("Obstacle Avoidance -- Minimum Cone Angle %.1f", Angles::degrees(m_obs_avoid.m_cone_min));
        debug("Obstacle Avoidance -- Radius %.1f", m_obs_avoid.m_obstacle_radius);
        debug("Obstacle Avoidance -- Hysteresis %.1f", Angles::degrees(m_obs_avoid.m_hysteresis));
      }

      inline void
      updateFormationRadius(void)
      {
        m_nsb_state.r_f = std::sqrt(square(m_vehicle_state.x - m_nsb_state.x) + square(m_vehicle_state.y - m_nsb_state.y));
      }

      void
      reset_state(void)
      {
        WGS84::displacement(m_lat0, m_lon0, 0., m_params.p_vehicle[0], m_params.p_vehicle[1], 0., &m_vehicle_state.x, &m_vehicle_state.y);
        m_vehicle_state.z = m_params.p_vehicle[2];
        m_nsb_state.path_param = 0.;
        WGS84::displacement(m_lat0, m_lon0, 0., m_params.p_barycenter[0], m_params.p_barycenter[1], 0., &m_nsb_state.x, &m_nsb_state.y);
        m_nsb_state.z = m_params.p_barycenter[2];
        double obstacle_x0, obstacle_y0;
        WGS84::displacement(m_lat0, m_lon0, 0., m_lat_obs, m_lon_obs, 0., &obstacle_x0, &obstacle_y0);
        for (size_t i = 0; i < m_obstacle_states.size(); i++)
        {
          m_obstacle_states[i].x = obstacle_x0 + m_obstacle_x0[i];
          m_obstacle_states[i].y = obstacle_y0 + m_obstacle_y0[i];
          m_obstacle_states[i].timestamp = 0.;
        }
        updateFormationRadius();
      }

      inline void
      reset(void)
      {
        reset_state();

        is_plan_set = false;
        is_start_plan_set = false;
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_params.plan_name))
        {
          m_params.start_plan_name = m_params.plan_name;
          m_params.start_plan_name.append("_start");
        }
        reset();
      }

      void
      onResourceRelease(void)
      {
        m_spec.clear();
        m_pc.clear();
        m_start_spec.clear();
        m_start_pc.clear();
      }

      void
      consume(const IMC::NSBParameters* msg)
      {
        // Set the latitude and longitude of the desired path as the origin of the NED frame.
        m_lat0 = msg->ellipse_path_lat;
        m_lon0 = msg->ellipse_path_lon;
        updateEllipsePathParameters(msg, m_ellipse_path, m_lat0, m_lon0);
        updateWaypointPathParameters(msg, m_waypoint_path, m_lat0, m_lon0);

        updateLosParameters(msg, m_los);
        updateFormationKeeping(msg, m_form);
        updateObstacleAvoidance(msg, m_obs_avoid);
        // Update obstacle
        m_lat_obs = msg->obs_lat;
        m_lon_obs = msg->obs_lon;
        castLexical(msg->obs_x, m_obstacle_x0);
        castLexical(msg->obs_y, m_obstacle_y0);
        std::vector<double> obs_vx, obs_vy;
        castLexical(msg->obs_vx, obs_vx);
        castLexical(msg->obs_vy, obs_vy);
        size_t N = obs_vx.size();
        for (size_t i = 0; i < N; i++)
        {
          m_obstacle_states[i].vx = obs_vx[i];
          m_obstacle_states[i].vy = obs_vy[i];
        }
      
        //debugExternalParameters();
        reset();        
      }

/*      void
      consume(const IMC::PlanControl* msg)
      {
        bool is_relevant = (msg->getSource() == m_ctx.resolver.id())
                          & (msg->request_id == (request_id-1))
                          & (msg->type != PlanControl::PC_LOAD);
        if (is_relevant)
        {
          if (msg->type == PlanControl::PC_SUCCESS)
          {
            debug("Plan %s sucessfully sent", msg->plan_id.c_str());
            is_plan_set = true;
          }
          else if (msg->type == PlanControl::PC_FAILURE)
          {
            war("Plan %s failed", msg->plan_id.c_str());
            is_plan_set = false;
          }
        }

        is_relevant = (msg->getSource() == m_ctx.resolver.id())
                          & (msg->request_id == (start_request_id-1))
                          & (msg->type != PlanControl::PC_LOAD);
        if (is_relevant)
        {
          if (msg->type == PlanControl::PC_SUCCESS)
          {
            debug("Plan %s sucessfully sent", msg->plan_id.c_str());
            is_start_plan_set = true;
          }
          else if (msg->type == PlanControl::PC_FAILURE)
          {
            war("Plan %s failed", msg->plan_id.c_str());
            is_start_plan_set = false;
          }
        }
      }*/

      inline void
      simulator_step(double& t)
      {
        GeometricPath::PathPoint path_point;
        GeometricPath::PathReference path_ref;
        if (m_params.use_ellipse)
        {
          m_ellipse_path.evaluatePathFunction(m_nsb_state.path_param, path_point);
          m_ellipse_path.getPathReference(path_point, path_ref);
        }
        else
        {
          m_waypoint_path.evaluatePathFunction(m_nsb_state.path_param, path_point);
          m_waypoint_path.getPathReference(path_point, path_ref);
        }
        //debug("Path at [%.2f, %.2f, %.2f]", path_ref.x, path_ref.y, path_ref.z);
        //debug("Barycenter at [%.2f, %.2f, %.2f]", m_nsb_state.x, m_nsb_state.y, m_nsb_state.z);

        Vector3D path_err;
        GeometricPath::getPathFollowingError(path_ref, m_nsb_state.x, m_nsb_state.y, m_nsb_state.z, path_err);
        //debug("Path-following error: x = %.2f, y = %.2f, z = %.2f", path_err.x, path_err.y, path_err.z);
        LineOfSight::LineOfSightOutput los_out;
        m_los.step(path_ref, path_err, los_out);
        //debug("LOS vector: x = %.2f, y = %.2f, z = %.2f", los_out.velocity.x, los_out.velocity.y, los_out.velocity.z);

        if (m_params.use_obstacle)
        {
          m_obs_avoid.step(m_nsb_state.x, m_nsb_state.y, m_obstacle_states, m_nsb_state.r_f, path_point, los_out);
          //debug("LOS vector after OA: x = %.2f, y = %.2f, z = %.2f", los_out.velocity.x, los_out.velocity.y, los_out.velocity.z);
        }

        Vector3D sigma;
        sigma.x = m_vehicle_state.x - m_nsb_state.x;
        sigma.y = m_vehicle_state.y - m_nsb_state.y;
        sigma.z = m_vehicle_state.z - m_nsb_state.z;
        Vector3D form_velocity;
        m_form.step(path_ref, sigma, los_out.path_parameter_derivative, form_velocity);

        //debug("Formation error: x = %.2f, y = %.2f", sigma.x, sigma.y);
        //debug("Formation velocity: x = %.2f, y = %.2f", form_velocity.x, form_velocity.y);

        /* Euler integration */        
        t += m_params.delta_t;
        if (m_params.use_obstacle)
        {
          for (size_t i = 0; i < m_obstacle_x0.size(); i++)
          {
            m_obstacle_states[i].x += m_obstacle_states[i].vx * m_params.delta_t;
            m_obstacle_states[i].y += m_obstacle_states[i].vy * m_params.delta_t;
          }
        }
        m_nsb_state.path_param += los_out.path_parameter_derivative * m_params.delta_t;
        m_nsb_state.x += los_out.velocity.x * m_params.delta_t;
        m_nsb_state.y += los_out.velocity.y * m_params.delta_t;
        m_nsb_state.z += los_out.velocity.z * m_params.delta_t;
        m_vehicle_state.x += (los_out.velocity.x + form_velocity.x) * m_params.delta_t;
        m_vehicle_state.y += (los_out.velocity.y + form_velocity.y) * m_params.delta_t;
        m_vehicle_state.z += (los_out.velocity.z + form_velocity.z) * m_params.delta_t;
        if (m_vehicle_state.z < 0.)
          m_vehicle_state.z = 0.;

        updateFormationRadius();
      }

      inline void
      add_waypoint(unsigned i)
      {
        IMC::Goto wp;
        wp.lat = m_lat0;
        wp.lon = m_lon0;
        WGS84::displace(m_vehicle_state.x, m_vehicle_state.y, &wp.lat, &wp.lon);
        wp.z = m_vehicle_state.z;
        wp.z_units = IMC::Z_DEPTH;
        wp.speed = m_los.m_speed;
        wp.speed_units = IMC::SUNITS_METERS_PS;

        IMC::PlanManeuver pman;
        pman.data.set(wp);
        char buffer[15];
        std::sprintf(buffer, "Goto%u", i);
        pman.maneuver_id = buffer;

        m_spec.maneuvers.push_back(pman);

        if (i > 0)
        {
          IMC::PlanTransition tran;
          tran.dest_man = buffer;
          std::sprintf(buffer, "Goto%u", i-1);
          tran.source_man = buffer;
          tran.conditions = "ManeuverIsDone";

          m_spec.transitions.push_back(tran);
        }
      }

      inline void
      add_station_keeping(unsigned i)
      {
        IMC::StationKeeping wp;
        wp.lat = m_lat0;
        wp.lon = m_lon0;
        WGS84::displace(m_vehicle_state.x, m_vehicle_state.y, &wp.lat, &wp.lon);
        wp.z = 0.;
        wp.z_units = IMC::Z_DEPTH;
        wp.speed = m_los.m_speed;
        wp.speed_units = IMC::SUNITS_METERS_PS;
        wp.radius = m_params.start_radius;

        IMC::PlanManeuver pman;
        pman.data.set(wp);
        char buffer[15];
        std::sprintf(buffer, "Goto%u", i);
        pman.maneuver_id = buffer;

        m_spec.maneuvers.push_back(pman);

        if (i > 0)
        {
          IMC::PlanTransition tran;
          tran.dest_man = buffer;
          std::sprintf(buffer, "Goto%u", i-1);
          tran.source_man = buffer;
          tran.conditions = "ManeuverIsDone";

          m_spec.transitions.push_back(tran);
        }
      }

      inline void
      generate_plan(void)
      {
        m_spec.maneuvers.clear();
        m_spec.transitions.clear();
        reset_state();

        double t = 0.;
        for (unsigned i = 0; i < m_params.waypoint_param.size(); i++)
        {
          while (m_nsb_state.path_param < m_params.waypoint_param[i])
            simulator_step(t);

          if (i < m_params.waypoint_param.size() - 1)
            add_waypoint(i);
          else
            add_station_keeping(i);
        } 
        m_pc.type = IMC::PlanControl::PC_REQUEST;
        m_pc.op = IMC::PlanControl::PC_LOAD;
        m_pc.flags = IMC::PlanControl::FLG_CALIBRATE;
        m_pc.setDestination(m_ctx.resolver.id());
        m_pc.plan_id = m_params.plan_name;
        m_pc.request_id = request_id++;

        m_spec.start_man_id = "Goto0";
        m_spec.description = "autogenerated waypoints";
        m_spec.plan_id = m_params.plan_name;

        m_pc.arg.set(m_spec);
        dispatch(m_pc);
        is_plan_set = true;
      }

      inline void
      generate_start_plan(void)
      {
        GeometricPath::PathReference path_ref;
        if (m_params.use_ellipse)
          m_ellipse_path.getPathReference(0., path_ref);
        else
          m_waypoint_path.getPathReference(0., path_ref);
        double c_psi = std::cos(path_ref.psi);
        double s_psi = std::sin(path_ref.psi);

        double wp_x = - (m_params.start_offset + 2*m_params.start_distance)*c_psi;
        double wp_y = - (m_params.start_offset + 2*m_params.start_distance)*s_psi;
        IMC::Goto wp;
        wp.lat = m_params.p_vehicle[0];
        wp.lon = m_params.p_vehicle[1];
        WGS84::displace(wp_x, wp_y, &wp.lat, &wp.lon);
        wp.z = 0.;
        wp.z_units = IMC::Z_DEPTH;
        wp.speed = m_los.m_speed;
        wp.speed_units = IMC::SUNITS_METERS_PS;
        IMC::PlanManeuver pman;
        pman.data.set(wp);
        pman.maneuver_id = "Goto0";
        m_start_spec.maneuvers.push_back(pman);

        wp_x += m_params.start_distance*c_psi;
        wp_y += m_params.start_distance*s_psi;
        wp.lat = m_params.p_vehicle[0];
        wp.lon = m_params.p_vehicle[1];
        WGS84::displace(wp_x, wp_y, &wp.lat, &wp.lon);
        wp.z = 0.;
        wp.z_units = IMC::Z_DEPTH;
        wp.speed = m_los.m_speed;
        wp.speed_units = IMC::SUNITS_METERS_PS;
        pman.data.set(wp);
        pman.maneuver_id = "Goto1";
        m_start_spec.maneuvers.push_back(pman);

        wp_x += m_params.start_distance*c_psi;
        wp_y += m_params.start_distance*s_psi;
        IMC::StationKeeping sk;
        sk.lat = m_params.p_vehicle[0];
        sk.lon = m_params.p_vehicle[1];
        WGS84::displace(wp_x, wp_y, &sk.lat, &sk.lon);
        sk.z = 0.;
        sk.z_units = IMC::Z_DEPTH;
        sk.speed = m_los.m_speed;
        sk.speed_units = IMC::SUNITS_METERS_PS;
        sk.radius = m_params.start_radius;
        pman.data.set(sk);
        pman.maneuver_id = "StationKeeping";
        m_start_spec.maneuvers.push_back(pman);

        IMC::PlanTransition tran;
        tran.source_man = "Goto0";
        tran.dest_man = "Goto1";
        tran.conditions = "ManeuverIsDone";
        m_start_spec.transitions.push_back(tran);

        tran.source_man = "Goto1";
        tran.dest_man = "StationKeeping";
        tran.conditions = "ManeuverIsDone";
        m_start_spec.transitions.push_back(tran);

        m_start_pc.type = IMC::PlanControl::PC_REQUEST;
        m_start_pc.op = IMC::PlanControl::PC_LOAD;
        m_start_pc.flags = IMC::PlanControl::FLG_CALIBRATE;
        m_start_pc.setDestination(m_ctx.resolver.id());
        m_start_pc.plan_id = m_params.start_plan_name;
        m_start_pc.request_id = start_request_id++;

        m_start_spec.start_man_id = "Goto0";
        m_start_spec.description = "autogenerated waypoints";
        m_start_spec.plan_id = m_params.start_plan_name;

        m_start_pc.arg.set(m_start_spec);
        dispatch(m_start_pc);
        is_start_plan_set = true;
      }

      //! Main loop.
      void
      task(void)
      {
        if (!is_plan_set)
        {
          debug("Generating plan");
          generate_plan();
        }
        if (!is_start_plan_set)
        {
          debug("Generating goto_start plan");
          generate_start_plan();
        }
      }
    };
  }
}

DUNE_TASK
