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

namespace Consensus
{
  //! Target
  //!
  //! Simulates a target (a virtual leader) moving on a figure-eight trajectory.
  //! @author Josef Matous
  namespace TargetEight
  {
    using DUNE_NAMESPACES;


    struct Task: public DUNE::Tasks::Periodic
    {
      struct 
      {
        //! Angular frequency.
        double k;
        //! Semimajor axis.
        double a;
        //! Semiminor axis.
        double b;
        //! Deoth
        double z;
        //! Orientation.
        double psi;
        //! Latitude of the origin.
        double lat;
        //! Longitude of the origin.
        double lon;
        //! Initial phase.
        double phi0;
        //! True for counter-clockwise, false for clockwise.
        bool direction;
      } m_params;

      double m_time;

      IMC::VirtualTarget m_target;
      IMC::ConsensusPacket m_message;

      bool m_active;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        param("Angular Frequency", m_params.k)
          .defaultValue("0.01");
        param("Semimajor Axis", m_params.a)
          .defaultValue("50");
        param("Semiminor Axis", m_params.b)
          .defaultValue("30");
        param("Orientation", m_params.psi)
          .defaultValue("0");
        param("Depth", m_params.z)
          .defaultValue("0");
        param("Origin Latitude", m_params.lat)
          .defaultValue("0.71882959");
        param("Origin Longitude", m_params.lon)
          .defaultValue("-0.15195186");
        param("Initial Phase", m_params.phi0)
          .defaultValue("0");
        param("Direction", m_params.direction)
          .defaultValue("true");
        param("Active", m_active)
          .defaultValue("false");

        m_target.msg.set(m_message);
        reset();
      }

      //! Update internal parameters.
      void
      onUpdateParameters(void)
      {
        if (m_active)
        {
          requestActivation();
        } else
        {
          requestDeactivation();
        }
      }

      void
      onActivation(void)
      {
        reset();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        reset();
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
        debug("Target reset");
        m_time = 0.;
      }

      //! Main loop.
      void
      task(void)
      {
        if (isActive())
        {
          double dir = m_params.direction ? 1. : -1;
          double arg = dir * m_params.k * m_time + m_params.phi0;
          
          double x0 = m_params.a * std::cos(arg);
          double y0 = m_params.b * std::sin(2*arg);
          double v_x0 = -m_params.a * dir * m_params.k * std::sin(arg);
          double v_y0 = 2 * m_params.b * dir * m_params.k * std::cos(2*arg);

          double c_psi = std::cos(m_params.psi);
          double s_psi = std::sin(m_params.psi);

          double x = x0 * c_psi - y0 * s_psi;
          double y = y0 * c_psi + x0 * s_psi;

          m_target.msg->v_x = v_x0 * c_psi - v_y0 * s_psi;
          m_target.msg->v_y = v_y0 * c_psi + v_x0 * s_psi;

          m_target.msg->lat = m_params.lat;
          m_target.msg->lon = m_params.lon;
          WGS84::displace(x, y, &m_target.msg->lat, &m_target.msg->lon);
          debug("Target at %f, %f", m_target.msg->lat, m_target.msg->lon);

          m_target.msg->z = m_params.z;
          m_target.msg->v_z = 0.;

          dispatch(m_target);

          m_time += 1. / getFrequency();
        }
      }
    };    
  }
}

DUNE_TASK
