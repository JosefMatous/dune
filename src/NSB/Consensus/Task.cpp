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
#include "../Utilities.hpp"
#include "NSBSimulator.hpp"

namespace NSB
{
  //! NSB consensus.
  //!
  //! Consensus on barycenter position and formation radius.
  //! @author Josef Matous
  namespace Consensus
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      Ellipse m_path;
      LineOfSight m_los;
      float m_r_ss, m_k_r;
      float k_position, k_param;
      double m_path_parameter;
      Delta m_last_step;

      IMC::NSBMsg m_nsb_msg;
      NSBState m_nsb_state;

      bool is_initialized, m_active;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_path(0, 0, 0., 50., 30., 0., 0., 0., false, M_PI_2, 0.),
        m_los(15., false, 1.3, 0.5)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::NSBMsg>(this);

        param("Ellipse -- Origin x", m_path.m_x_center)
          .defaultValue("0")
          .description("x-coordinate of the center of the ellipse");
        param("Ellipse -- Origin y", m_path.m_y_center)
          .defaultValue("0")
          .description("y-coordinate of the center of the ellipse");
        param("Ellipse -- Depth", m_path.m_z_center)
          .defaultValue("0.")
          .description("Depth of the center of the ellipse");
        param("Ellipse -- Semimajor Axis", m_path.m_a)
          .defaultValue("60.")
          .minimumValue("10.")
          .maximumValue("100.")
          .description("Semimajor axis of the ellipse");
        param("Ellipse -- Semiminor Axis", m_path.m_b)
          .defaultValue("40.")
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

        param("Consensus -- Position Gain", k_position)
          .defaultValue("0.3")
          .minimumValue("0.")
          .maximumValue("1.");

        param("Consensus -- Parameter Gain", k_param)
          .defaultValue("0.3")
          .minimumValue("0.")
          .maximumValue("1.");

        param("Steady-state Formation Radius", m_r_ss)
          .defaultValue("10");
        param("Formation Radius Time Constant", m_k_r)
          .defaultValue("0.05");

        param("Active", m_active)
          .defaultValue("false");

        reset();
      }

      inline void
      reset(void)
      {
        is_initialized = false;
        m_last_step.reset();
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_active))
          reset();
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (m_active)
        {
          if (is_initialized)
          {
            nsb_simulator_step(m_los, m_path, m_r_ss, m_k_r, m_last_step.getDelta(), m_nsb_state);
            float r_f = std::sqrt(square(m_nsb_state.x-msg->x) + square(m_nsb_state.y-msg->y));
            if (r_f > m_nsb_state.r_f)
            {
              m_nsb_state.r_f = r_f;
            }
          }
          else
          {
            m_nsb_state.path_param = 0.;
            m_nsb_state.x = msg->x;
            m_nsb_state.y = msg->y;
            m_nsb_state.z = msg->depth;
            m_nsb_state.r_f = 0.;
            m_last_step.reset();
            is_initialized = true;
          }

          m_nsb_msg.path_param = m_nsb_state.path_param;
          m_nsb_msg.x = m_nsb_state.x;
          m_nsb_msg.y = m_nsb_state.y;
          m_nsb_msg.z = m_nsb_state.z;
          m_nsb_msg.r_f = m_nsb_state.r_f;
          dispatch(m_nsb_msg);
        }
      }

      void
      consume(const IMC::NSBMsg* msg)
      {
        if (m_active && is_initialized && (msg->getSource() != getSystemId()))
        {
          debug("Received consensus message from %s", resolveSystemId(msg->getSource()));

          m_nsb_state.path_param = k_param * msg->path_param + (1. - k_param) * m_nsb_state.path_param;
          m_nsb_state.x = k_position * msg->x + (1. - k_position) * m_nsb_state.x;
          m_nsb_state.y = k_position * msg->y + (1. - k_position) * m_nsb_state.y;
          m_nsb_state.z = k_position * msg->z + (1. - k_position) * m_nsb_state.z;
          if (msg->r_f > m_nsb_state.r_f)
            m_nsb_state.r_f = msg->r_f;
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
