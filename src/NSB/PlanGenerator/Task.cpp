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
      Ellipse m_path;
      LineOfSight m_los;
      FormationKeepingSaturated m_form;
      std::vector<double> m_form_shape;

      struct 
      {
        double path_param, x, y, z, r_f;
      } m_nsb_state;

      struct
      {
        double x, y, z;
      } m_vehicle_state;

      ObstacleState m_obstacle_state;

      struct
      {
        std::vector<double> p_vehicle;
        std::vector<double> p_barycenter;
        bool use_obstacle;
        std::vector<double> p_obstacle;
        double psi_obs, u_obs;
        double delta_t;
        std::vector<double> waypoint_param;
        std::string plan_name;
        std::string start_plan_name;
        double start_offset, start_distance, start_radius;
      } m_params;

      // Obstacle avoidance
      ObstacleAvoidance m_obs_avoid;

      double m_lat0, m_lon0;
      bool is_plan_set, is_start_plan_set;

      uint16_t request_id, start_request_id;

      IMC::PlanControl m_pc, m_start_pc;
      IMC::PlanSpecification m_spec, m_start_spec;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_path(0, 0, 0., 50., 30., 0., 0, 0., false, M_PI_2, 0.),
        m_los(15., false, 1.3, 0.5),
        m_form(0., 0., 0., 0.25, 0.5)
      {
        bind<IMC::PlanControl>(this);

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

        param("Vehicle -- Initial Position", m_params.p_vehicle)
          .defaultValue("0.7188233, -0.1519519, 0")
          .size(3)
          .description("Initial position of the vehicle (latitude, longitude, depth).");
        param("Barycenter -- Initial Position", m_params.p_barycenter)
          .defaultValue("0.7188233, -0.1519519, 0")
          .size(3)
          .description("Initial position of the barycenter (latitude, longitude, depth).");
        param("Obstacle -- Active", m_params.use_obstacle)
          .defaultValue("false");
        param("Obstacle -- Initial Position", m_params.p_obstacle)
          .defaultValue("0.71881387, -0.15195186");
        param("Obstacle -- Speed", m_params.u_obs)
          .defaultValue("0.6667");
        param("Obstacle -- Course", m_params.psi_obs)
          .defaultValue("1.57079632");

        param("Ellipse -- Origin Latitude", m_lat0)
          .defaultValue("0.71881387");
        param("Ellipse -- Origin Longitude", m_lon0)
          .defaultValue("-0.15195186");
        param("Ellipse -- Depth", m_path.m_z_center)
          .defaultValue("0.")
          .description("Depth of the center of the ellipse");
        param("Ellipse -- Semimajor Axis", m_path.m_a)
          .defaultValue("60.")
          .minimumValue("10.")
          .maximumValue("1000.")
          .description("Semimajor axis of the ellipse");
        param("Ellipse -- Semiminor Axis", m_path.m_b)
          .defaultValue("40.")
          .minimumValue("10.")
          .maximumValue("1000.")
          .description("Semiminor axis of the ellipse");
        param("Ellipse -- Z Amplitude", m_path.m_c)
          .defaultValue("0.")
          .minimumValue("0.")
          .maximumValue("100.")
          .description("Amplitude of oscillations in the z-axis");
        param("Ellipse -- Clockwise", m_path.m_clockwise)
          .defaultValue("true")
          .description("True if the path goes clockwise; false if anticlockwise");
        param("Ellipse -- Orientation", m_path.m_psi)
          .defaultValue("0")
          .description("Orientation (yaw angle) of the ellipse. Zero means semimajor axis facing north");
        param("Ellipse -- Z Frequency", m_path.m_z_freq)
          .defaultValue("0.")
          .description("Frequency of oscillations in the z-axis");
        param("Ellipse -- Initial Phase", m_path.m_phi0)
          .defaultValue("0.")
          .description("Initial phase of the ellipse");
        param("Ellipse -- Z Initial Phase", m_path.m_z_phi0)
          .defaultValue("0.")
          .description("Initial phase of oscillations in the z-axis");

        param("LOS -- Lookahead Distance", m_los.m_lookahead)
          .defaultValue("15.")
          .minimumValue("1.")
          .maximumValue("100.")
          .description("Lookahead distance of the LOS algorithm");
        param("LOS -- Adaptive", m_los.m_adaptive)
          .defaultValue("true")
          .description("True if using adaptive lookahead distance");
        param("LOS -- Speed", m_los.m_speed)
          .defaultValue("1.3")
          .minimumValue("0.5")
          .maximumValue("2.")
          .description("Path following speed");
        param("LOS -- Gain", m_los.m_parameter_gain)
          .defaultValue("0.5")
          .minimumValue("0.1")
          .maximumValue("2.")
          .description("Path parameter update gain");

        param("Formation Keeping -- Shape", m_form_shape)
          .defaultValue("0., 0., 0.")
          .size(3)
          .description("Position of the vehicle within the formation");
        param("Formation Keeping -- Gain", m_form.k_form)
          .defaultValue("0.25")
          .minimumValue("0.")
          .description("Formation keeping task gain");
        param("Formation Keeping -- Maximum Velocity", m_form.v_max)
          .defaultValue("0.5")
          .minimumValue("0.")
          .description("Formation keeping velocity limit");

        param("Obstacle Avoidance -- Minimum Cone Angle", m_obs_avoid.m_cone_min)
          .defaultValue("5")
          .minimumValue("1")
          .maximumValue("30");
        param("Obstacle Avoidance -- Radius", m_obs_avoid.m_obstacle_radius)
          .defaultValue("5")
          .minimumValue("1")
          .maximumValue("30");
        param("Obstacle Avoidance -- Hysteresis", m_obs_avoid.m_hysteresis)
          .defaultValue("3")
          .minimumValue("0")
          .maximumValue("10");

        request_id = 0x0800U;
        start_request_id = 0x0900U;
      }

      inline void
      updateFormationRadius(void)
      {
        m_nsb_state.r_f = std::sqrt(square(m_vehicle_state.x - m_nsb_state.x) + square(m_vehicle_state.y - m_nsb_state.y));
      }

      inline void
      reset_state(void)
      {
        WGS84::displacement(m_lat0, m_lon0, 0., m_params.p_vehicle[0], m_params.p_vehicle[1], 0., &m_vehicle_state.x, &m_vehicle_state.y);
        m_vehicle_state.z = m_params.p_vehicle[2];
        m_nsb_state.path_param = 0.;
        WGS84::displacement(m_lat0, m_lon0, 0., m_params.p_barycenter[0], m_params.p_barycenter[1], 0., &m_nsb_state.x, &m_nsb_state.y);
        m_nsb_state.z = m_params.p_barycenter[2];
        WGS84::displacement(m_lat0, m_lon0, 0., m_params.p_obstacle[0], m_params.p_obstacle[1], 0., &m_obstacle_state.x, &m_obstacle_state.y);
        m_obstacle_state.timestamp = 0.;
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
        if (paramChanged(m_form_shape))
        {
          m_form.p_form.x = m_form_shape[0];
          m_form.p_form.y = m_form_shape[1];
          m_form.p_form.z = m_form_shape[2];
        }
        if (paramChanged(m_obs_avoid.m_cone_min))
        {
          m_obs_avoid.m_cone_min = Angles::radians(m_obs_avoid.m_cone_min);
        }
        if (paramChanged(m_obs_avoid.m_hysteresis))
        {
          m_obs_avoid.m_hysteresis = Angles::radians(m_obs_avoid.m_hysteresis);
        }
        if (paramChanged(m_params.u_obs) || paramChanged(m_params.psi_obs))
        {
          m_obstacle_state.vx = m_params.u_obs * std::cos(m_params.psi_obs);
          m_obstacle_state.vy = m_params.u_obs * std::sin(m_params.psi_obs);
        }
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
      }

      inline void
      simulator_step(double& t)
      {
        GeometricPath::PathReference path_ref;
        m_path.getPathReference(m_nsb_state.path_param, path_ref);

        Vector3D path_err;
        GeometricPath::getPathFollowingError(path_ref, m_nsb_state.x, m_nsb_state.y, m_nsb_state.z, path_err);
        LineOfSight::LineOfSightOutput los_out;
        m_los.step(path_ref, path_err, los_out);

        if (m_params.use_obstacle)
        {
          m_obs_avoid.step(m_nsb_state.x, m_nsb_state.y, m_obstacle_state, m_nsb_state.r_f, los_out);
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
          m_obstacle_state.x += m_obstacle_state.vx * m_params.delta_t;
          m_obstacle_state.y += m_obstacle_state.vy * m_params.delta_t;
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

          add_waypoint(i);
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
      }

      inline void
      generate_start_plan(void)
      {
        GeometricPath::PathReference path_ref;
        m_path.getPathReference(0., path_ref);
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
