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
#include "../ObstacleAvoidance.hpp"
#include "../ObstacleEstimator.hpp"
#include "../Utilities.hpp"

namespace NSB
{
  //! Curved path following.
  //!
  //! This task uses a line-of-sight guidance algorithm to steer the vehicle along a given curved path.
  //! @author Josef Matous
  namespace CurvedPathFollowing
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      Ellipse m_path;
      LineOfSight m_los;
      ObstacleEstimator m_obs_est;
      ObstacleAvoidance m_obs_avoid;
      double m_path_parameter, m_path_lat, m_path_lon;
      Delta m_last_step;

      IMC::DesiredLinearState m_linstate;

      // External activation
      bool m_active;
      bool m_has_obstacle, is_initialized;
      double m_lat0, m_lon0;

      double m_T_start, m_T_stop, m_param_stop;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::Target>(this);

        m_path = Ellipse(0, 0, 0., 50., 30., 0., -0.6585325752983525, 0., false, M_PI_2, 0.);
        m_los = LineOfSight(15., false, 1.3, 0.5);

        m_linstate.flags = IMC::DesiredLinearState::FL_VX | IMC::DesiredLinearState::FL_VY | IMC::DesiredLinearState::FL_VZ;

        m_T_start = -1.;

        param("Ellipse -- Origin Latitude", m_path_lat)
          .defaultValue("0.71881387");
        param("Ellipse -- Origin Longitude", m_path_lon)
          .defaultValue("-0.15195186");
        param("Ellipse -- Depth", m_path.m_z_center)
          .defaultValue("0.")
          .description("Depth of the center of the ellipse");
        param("Ellipse -- Semimajor Axis", m_path.m_a)
          .defaultValue("50.")
          .minimumValue("10.")
          .maximumValue("100.")
          .description("Semimajor axis of the ellipse");
        param("Ellipse -- Semiminor Axis", m_path.m_b)
          .defaultValue("30.")
          .minimumValue("10.")
          .maximumValue("100.")
          .description("Semiminor axis of the ellipse");
        param("Ellipse -- Z Amplitude", m_path.m_c)
          .defaultValue("0.")
          .minimumValue("0.")
          .maximumValue("10.")
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

        param("Active", m_active)
          .defaultValue("false");

        param("Experiment Stop Time", m_T_stop)
          .defaultValue("-1")
          .description("The task is stopped after the given time. Enter negative value to ignore this.");
        param("Experiment Stop Parameter", m_param_stop)
          .defaultValue("-1")
          .description("The task is stop when path parameter exceeds the given value. Enter negative value to ignore this.");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        is_initialized = false;
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        reset();
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        reset();
      }

      inline void
      updatePathOrigin(void)
      {
        if (is_initialized)
        {
          WGS84::displacement(m_lat0, m_lon0, 0., m_path_lat, m_path_lon, 0., &m_path.m_x_center, &m_path.m_y_center);       
        }
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_T_stop) || paramChanged(m_param_stop))
        {
          if (m_T_stop < 0. && m_param_stop < 0.)
            war("Both time and parameter stop conditions are inactive. The experiment will run until stopped externally.");
        }
        if (paramChanged(m_active))
        {
          if (m_active)
            requestActivation();
          else
            requestDeactivation();
        }
        if (paramChanged(m_obs_avoid.m_cone_min))
        {
          m_obs_avoid.m_cone_min = Angles::radians(m_obs_avoid.m_cone_min);
        }
        if (paramChanged(m_obs_avoid.m_hysteresis))
        {
          m_obs_avoid.m_hysteresis = Angles::radians(m_obs_avoid.m_hysteresis);
        }
        if (paramChanged(m_path_lat) || paramChanged(m_path_lon))
        {
          updatePathOrigin();
        }
      }

      void
      onResourceInitialization(void)
      {
        requestDeactivation();

        reset();
      }

      void
      reset(void)
      {
        m_path_parameter = 0.;
        m_T_start = -1.;
        m_last_step.reset();
      }

      void
      consume(const IMC::Target* msg)
      {
        m_obs_est.update(msg, m_lat0, m_lon0);
        m_obs_est.simulate(Clock::getSinceEpoch());
        m_has_obstacle = true;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_lat0 = msg->lat;
        m_lon0 = msg->lon;
        if (!is_initialized)
        {
          is_initialized = true;
          updatePathOrigin();
        }
        if (isActive())
        {
          GeometricPath::PathReference path_ref;
          m_path.getPathReference(m_path_parameter, path_ref);

          //debug("Vehicle at x = %.2f, y = %.2f", msg->x, msg->y);
          //debug("Path reference: x = %.2f, y = %.2f, z = %.2f", path_ref.x, path_ref.y, path_ref.z);
          //debug("Path parameter %.3f", m_path_parameter);

          Vector3D path_err;
          GeometricPath::getPathFollowingError(path_ref, msg, path_err);
          LineOfSight::LineOfSightOutput out;
          m_los.step(path_ref, path_err, out);
          double delta_t = m_last_step.getDelta();
          if (delta_t > 0.)
            m_path_parameter += delta_t * out.path_parameter_derivative;

          //debug("Path error: x = %.2f, y = %.2f", path_err.x, path_err.y);
          //debug("LOS vector: x = %.2f, y = %.2f", out.velocity.x, out.velocity.y);

          if (m_has_obstacle)
          {
            m_obs_est.simulate(Clock::getSinceEpoch());
            m_obs_avoid.step(msg->x, msg->y, m_obs_est.m_obstacle_state, 0., out);
            //debug("LOS vector after OA: x = %.2f, y = %.2f, z = %.2f", out.velocity.x, out.velocity.y, out.velocity.z);
          }

          m_linstate.vx = out.velocity.x;
          m_linstate.vy = out.velocity.y;
          m_linstate.vz = out.velocity.z;
          dispatch(m_linstate);

          if (m_T_stop > 0.) // check for time-based termination
          {
            if (m_T_start < 0.) // first-time step -- get current timestamp
              m_T_start = Time::Clock::get();
            else if ((Time::Clock::get() - m_T_start >= m_T_stop))
            {
              debug("Reached experiment termination time.");
              m_active = false;
              requestDeactivation();
            }            
          }
          if (m_param_stop > 0.) // check for parameter-based termination
          {
            if ((m_path_parameter > m_param_stop))
            {
              debug("Reached experiment termination parameter.");
              m_active = false;
              requestDeactivation();
            }
          }
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
