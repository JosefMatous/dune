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
  //! NSB Parameters.
  //!
  //! Contains parameter definitions that are share among tasks, and send notifications when parameters change.
  //! @author Josef Matous
  namespace Parameters
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      IMC::NSBParameters m_params;

      bool m_ellipse_path_clockwise, m_los_adaptive;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::NSBParametersRequest>(this);

        param("Ellipse -- Origin Latitude", m_params.ellipse_path_lat)
          .defaultValue("0.71881387");
        param("Ellipse -- Origin Longitude", m_params.ellipse_path_lon)
          .defaultValue("-0.15195186");
        param("Ellipse -- Depth", m_params.ellipse_path_z)
          .defaultValue("0.")
          .description("Depth of the center of the ellipse");
        param("Ellipse -- Semimajor Axis", m_params.ellipse_path_a)
          .defaultValue("60.")
          .minimumValue("10.")
          .maximumValue("1000.")
          .description("Semimajor axis of the ellipse");
        param("Ellipse -- Semiminor Axis", m_params.ellipse_path_b)
          .defaultValue("40.")
          .minimumValue("10.")
          .maximumValue("1000.")
          .description("Semiminor axis of the ellipse");
        param("Ellipse -- Z Amplitude", m_params.ellipse_path_c)
          .defaultValue("0.")
          .minimumValue("0.")
          .maximumValue("100.")
          .description("Amplitude of oscillations in the z-axis");
        param("Ellipse -- Clockwise", m_ellipse_path_clockwise)
          .defaultValue("true")
          .description("True if the path goes clockwise; false if anticlockwise");
        param("Ellipse -- Orientation", m_params.ellipse_path_psi)
          .defaultValue("0")
          .description("Orientation (yaw angle) of the ellipse. Zero means semimajor axis facing north");
        param("Ellipse -- Z Frequency", m_params.ellipse_path_z_freq)
          .defaultValue("0.")
          .description("Frequency of oscillations in the z-axis");
        param("Ellipse -- Initial Phase", m_params.ellipse_path_phi0)
          .defaultValue("0.")
          .description("Initial phase of the ellipse");
        param("Ellipse -- Z Initial Phase", m_params.ellipse_path_z_phi0)
          .defaultValue("0.")
          .description("Initial phase of oscillations in the z-axis");

        param("Waypoints -- Origin Latitude", m_params.waypoint_path_lat)
          .defaultValue("0.71881387");
        param("Waypoints -- Origin Longitude", m_params.waypoint_path_lon)
          .defaultValue("-0.15195186");
        param("Waypoints -- x-offset", m_params.waypoint_path_x)
          .defaultValue("50,50,-50,-50,50");
        param("Waypoints -- y-offset", m_params.waypoint_path_y)
          .defaultValue("-30,30,30,-30,-30");
        param("Waypoints -- Depth", m_params.waypoint_path_z)
          .defaultValue("0,0,0,0,0");
        param("Waypoints -- Dubins Radius", m_params.waypoint_radius)
          .defaultValue("35")
          .minimumValue("10")
          .maximumValue("100");

        param("LOS -- Lookahead Distance", m_params.los_lookahead)
          .defaultValue("15.")
          .minimumValue("1.")
          .maximumValue("100.")
          .description("Lookahead distance of the LOS algorithm");
        param("LOS -- Adaptive", m_los_adaptive)
          .defaultValue("false")
          .description("True if using adaptive lookahead distance");
        param("LOS -- Speed", m_params.los_speed)
          .defaultValue("1.3")
          .minimumValue("0.5")
          .maximumValue("2.")
          .description("Path following speed");
        param("LOS -- Gain", m_params.los_gain)
          .defaultValue("0.5")
          .minimumValue("0.1")
          .maximumValue("2.")
          .description("Path parameter update gain");

        param("Formation Keeping -- Formation x", m_params.form_x)
          .defaultValue("0.")
          .description("Position of the vehicle within the formation");
        param("Formation Keeping -- Formation y", m_params.form_y)
          .defaultValue("0.")
          .description("Position of the vehicle within the formation");
        param("Formation Keeping -- Formation z", m_params.form_z)
          .defaultValue("0.")
          .description("Position of the vehicle within the formation");
        param("Formation Keeping -- Gain", m_params.form_gain)
          .defaultValue("0.25")
          .minimumValue("0.")
          .description("Formation keeping task gain");
        param("Formation Keeping -- Maximum Velocity", m_params.form_max_speed)
          .defaultValue("0.5")
          .minimumValue("0.")
          .description("Formation keeping velocity limit");

        param("Obstacle Avoidance -- Minimum Cone Angle", m_params.oa_cone)
          .defaultValue("5")
          .minimumValue("1")
          .maximumValue("30");
        param("Obstacle Avoidance -- Radius", m_params.oa_radius)
          .defaultValue("15")
          .minimumValue("1")
          .maximumValue("30");
        param("Obstacle Avoidance -- Hysteresis", m_params.oa_hysteresis)
          .defaultValue("3")
          .minimumValue("0")
          .maximumValue("10");

        param("Obstacle -- Origin Latitude", m_params.obs_lat)
          .defaultValue("0.7188139"); 
        param("Obstacle -- Origin Longitude", m_params.obs_lon)
          .defaultValue("-0.1519519");
        param("Obstacle -- Offset x", m_params.obs_x)
          .defaultValue("0");
        param("Obstacle -- Offset y", m_params.obs_y)
          .defaultValue("0");
        param("Obstacle -- Velocity x", m_params.obs_vx)
          .defaultValue("0");
        param("Obstacle -- Velocity y", m_params.obs_vy)
          .defaultValue("0");
      }

      inline void
      convertParamsToMessage(void)
      {
        m_params.ellipse_path_clockwise = m_ellipse_path_clockwise ? IMC::BOOL_TRUE : IMC::BOOL_FALSE;
        m_params.los_adaptive = m_los_adaptive ? IMC::BOOL_TRUE : IMC::BOOL_FALSE;
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_params.oa_cone))
          m_params.oa_cone = Angles::radians(m_params.oa_cone);
        if (paramChanged(m_params.oa_hysteresis))
          m_params.oa_hysteresis = Angles::radians(m_params.oa_hysteresis);
        convertParamsToMessage();
        dispatch(m_params);
      }

      void
      consume(const IMC::NSBParametersRequest* msg)
      {
        debug("Entity %u requested NSB parameters", msg->getSourceEntity());
        convertParamsToMessage();
        dispatch(m_params);
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