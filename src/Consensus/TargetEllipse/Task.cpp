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
  //! TargetEllipse
  //!
  //! Simulates a target (a virtual leader).
  //! Currently configured to move on an ellipse with oscillating depth.
  //! @author Josef Matous
  namespace TargetEllipse
  {
    using DUNE_NAMESPACES;


    struct Task: public DUNE::Tasks::Periodic
    {
      struct 
      {
        //! Wavenumber.
        double k;
        //! Semimajor axis.
        double a;
        //! Semiminor axis.
        double b;
        //! Z amplitude.
        double c;
        //! Latitude of the origin.
        double lat;
        //! Longitude of the origin.
        double lon;
        //! Origin depth.
        double z;
        //! Initial phase.
        double phi0;
        //! True for counter-clockwise, false for clockwise.
        bool direction;
      } m_params;

      IMC::VirtualTarget m_target;
      IMC::ConsensusPacket m_message;

      bool m_active;
      double m_t;
      double m_dir;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        param("Wavenumber", m_params.k)
          .defaultValue("0.020943951023931952");
        param("Semimajor axis", m_params.a)
          .defaultValue("50");
        param("Semiminor axis", m_params.b)
          .defaultValue("30");
        param("Z amplitude", m_params.c)
          .defaultValue("5");
        param("Origin Latitude", m_params.lat)
          .defaultValue("0.71882959");
        param("Origin Longitude", m_params.lon)
          .defaultValue("-0.15195186");
        param("Origin Depth", m_params.z)
          .defaultValue("5");
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

        if (paramChanged(m_params.direction))
          m_dir = m_params.direction ? 1. : -1;
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
        m_t = 0.;
      }

      //! Main loop.
      void
      task(void)
      {
        if (isActive())
        {
          double k_dir = m_dir*m_params.k;
          double phi = m_params.phi0 + k_dir*m_t;
          double c_phi = std::cos(phi);
          double s_phi = std::sin(phi);
          

          double x = m_params.a * c_phi;
          double y = m_params.b * s_phi;
          m_target.msg->z = m_params.z + m_params.c * s_phi * s_phi;

          m_target.msg->v_x = - m_params.a * k_dir * s_phi;
          m_target.msg->v_y = m_params.b * k_dir * c_phi;
          m_target.msg->v_z = 2 * m_params.c * k_dir * c_phi * s_phi;

          m_target.msg->lat = m_params.lat;
          m_target.msg->lon = m_params.lon;
          WGS84::displace(x, y, &m_target.msg->lat, &m_target.msg->lon);
          debug("Target at %f, %f, %f", m_target.msg->lat, m_target.msg->lon, m_target.msg->z);

          dispatch(m_target);

          m_t += std::pow(getFrequency(), -1.);
        }
      }
    };    
  }
}

DUNE_TASK
