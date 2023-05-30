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
      IMC::NSBParameters m_msg;

      struct {
        //! Path Latitude.
        fp64_t path_lat;
        //! Path Longitude.
        fp64_t path_lon;
        //! Path Depth.
        fp64_t path_z;
        //! Path Semimajor Axis.
        fp64_t path_a;
        //! Path Semiminor Axis.
        fp64_t path_b;
        //! Path Z Amplitude.
        fp64_t path_c;
        //! Path Clockwise.
        bool path_clockwise;
        //! Path Orientation.
        fp64_t path_psi;
        //! Path Z Frequency.
        fp64_t path_z_freq;
        //! Path Initial Phase.
        fp64_t path_phi0;
        //! Path Z Initial Phase.
        fp64_t path_z_phi0;
        //! LOS Lookahead Distance.
        fp64_t los_lookahead;
        //! LOS Speed.
        fp64_t los_speed;
        //! LOS Update Gain.
        fp64_t los_gain;
        //! LOS Adaptive.
        bool los_adaptive;
        //! Formation x.
        fp64_t form_x;
        //! Formation y.
        fp64_t form_y;
        //! Formation z.
        fp64_t form_z;
        //! Formation Maximum Speed.
        fp64_t form_max_speed;
        //! Formation Keeping Gain.
        fp64_t form_gain;
        //! Obstacle Avoidance Radius.
        fp64_t oa_radius;
        //! Collision Cone Angle.
        fp64_t oa_cone;
        //! Obstacle Avoidance Hysteresis.
        fp64_t oa_hysteresis;
        //! Obstacle Latitude.
        fp64_t obs_lat;
        //! Obstacle Longitude.
        fp64_t obs_lon;
        //! Obstacle Velocity x.
        fp64_t obs_vx;
        //! Obstacle Velocity y.
        fp64_t obs_vy;
      } m_params;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::NSBParametersRequest>(this);

        param("Ellipse -- Origin Latitude", m_params.path_lat)
          .defaultValue("0.71881387");
        param("Ellipse -- Origin Longitude", m_params.path_lon)
          .defaultValue("-0.15195186");
        param("Ellipse -- Depth", m_params.path_z)
          .defaultValue("0.")
          .description("Depth of the center of the ellipse");
        param("Ellipse -- Semimajor Axis", m_params.path_a)
          .defaultValue("60.")
          .minimumValue("10.")
          .maximumValue("1000.")
          .description("Semimajor axis of the ellipse");
        param("Ellipse -- Semiminor Axis", m_params.path_b)
          .defaultValue("40.")
          .minimumValue("10.")
          .maximumValue("1000.")
          .description("Semiminor axis of the ellipse");
        param("Ellipse -- Z Amplitude", m_params.path_c)
          .defaultValue("0.")
          .minimumValue("0.")
          .maximumValue("100.")
          .description("Amplitude of oscillations in the z-axis");
        param("Ellipse -- Clockwise", m_params.path_clockwise)
          .defaultValue("true")
          .description("True if the path goes clockwise; false if anticlockwise");
        param("Ellipse -- Orientation", m_params.path_psi)
          .defaultValue("0")
          .description("Orientation (yaw angle) of the ellipse. Zero means semimajor axis facing north");
        param("Ellipse -- Z Frequency", m_params.path_z_freq)
          .defaultValue("0.")
          .description("Frequency of oscillations in the z-axis");
        param("Ellipse -- Initial Phase", m_params.path_phi0)
          .defaultValue("0.")
          .description("Initial phase of the ellipse");
        param("Ellipse -- Z Initial Phase", m_params.path_z_phi0)
          .defaultValue("0.")
          .description("Initial phase of oscillations in the z-axis");

        param("LOS -- Lookahead Distance", m_params.los_lookahead)
          .defaultValue("15.")
          .minimumValue("1.")
          .maximumValue("100.")
          .description("Lookahead distance of the LOS algorithm");
        param("LOS -- Adaptive", m_params.los_adaptive)
          .defaultValue("true")
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
          .defaultValue("5")
          .minimumValue("1")
          .maximumValue("30");
        param("Obstacle Avoidance -- Hysteresis", m_params.oa_hysteresis)
          .defaultValue("3")
          .minimumValue("0")
          .maximumValue("10");

        param("Obstacle -- Initial Latitude", m_params.obs_lat)
          .defaultValue("0.7188139"); 
        param("Obstacle -- Initial Longitude", m_params.obs_lon)
          .defaultValue("-0.1519519");
        param("Obstacle -- Velocity x", m_params.obs_vx)
          .defaultValue("0");
        param("Obstacle -- Velocity y", m_params.obs_vy)
          .defaultValue("0");
      }

      inline void
      convertParamsToMessage(void)
      {
        m_msg.path_lat = m_params.path_lat;        
        m_msg.path_lon = m_params.path_lon;        
        m_msg.path_z = m_params.path_z;        
        m_msg.path_a = m_params.path_a;        
        m_msg.path_b = m_params.path_b;        
        m_msg.path_c = m_params.path_c;        
        m_msg.path_clockwise = m_params.path_clockwise ? IMC::BOOL_TRUE : IMC::BOOL_FALSE;        
        m_msg.path_psi = m_params.path_psi;        
        m_msg.path_z_freq = m_params.path_z_freq;        
        m_msg.path_phi0 = m_params.path_phi0;        
        m_msg.path_z_phi0 = m_params.path_z_phi0;        
        m_msg.los_lookahead = m_params.los_lookahead;        
        m_msg.los_speed = m_params.los_speed;        
        m_msg.los_gain = m_params.los_gain;        
        m_msg.los_adaptive = m_params.los_adaptive ? IMC::BOOL_TRUE : IMC::BOOL_FALSE;;        
        m_msg.form_x = m_params.form_x;        
        m_msg.form_y = m_params.form_y;        
        m_msg.form_z = m_params.form_z;        
        m_msg.form_max_speed = m_params.form_max_speed;        
        m_msg.form_gain = m_params.form_gain;        
        m_msg.oa_radius = m_params.oa_radius;        
        m_msg.oa_cone = Angles::radians(m_params.oa_cone);        
        m_msg.oa_hysteresis = Angles::radians(m_params.oa_hysteresis);        
        m_msg.obs_lat = m_params.obs_lat;        
        m_msg.obs_lon = m_params.obs_lon;        
        m_msg.obs_vx = m_params.obs_vx;        
        m_msg.obs_vy = m_params.obs_vy;
      }

      void
      onUpdateParameters(void)
      {
        convertParamsToMessage();
        dispatch(m_msg);
      }

      void
      consume(const IMC::NSBParametersRequest* msg)
      {
        debug("Entity %u requested NSB parameters", msg->getSourceEntity());
        convertParamsToMessage();
        dispatch(m_msg);
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