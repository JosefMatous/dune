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
  //! Simulates a target (a virtual leader).
  //! Currently configured to move on a circular trajectory.
  //! @author Josef Matous
  namespace Target
  {
    using DUNE_NAMESPACES;


    struct Task: public DUNE::Tasks::Periodic
    {
      struct 
      {
        //! Speed.
        double U;
        //! Radius.
        double r;
        //! Latitude of the origin.
        double lat;
        //! Longitude of the origin.
        double lon;
        //! Initial phase.
        double phi0;
        //! True for counter-clockwise, false for clockwise.
        bool direction;
      } m_params;

      double m_phi;

      IMC::Target m_message;

      bool m_active;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        param("Speed", m_params.U)
          .defaultValue("0.8");
        param("Radiues", m_params.r)
          .defaultValue("50");
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
        m_phi = m_params.phi0;
      }

      //! Main loop.
      void
      task(void)
      {
        if (isActive())
        {
          double dir = m_params.direction ? 1. : -1;
          double c_phi = std::cos(m_phi);
          double s_phi = std::sin(m_phi);
          double x = m_params.r * c_phi;
          double y = m_params.r * s_phi;
          double heading = Angles::normalizeRadian(m_phi + dir*M_PI_2);

          m_message.label = "virtual_leader";
          m_message.sog = m_params.U;
          m_message.cog = heading;

          m_message.lat = m_params.lat;
          m_message.lon = m_params.lon;
          WGS84::displace(x, y, &m_message.lat, &m_message.lon);
          debug("Target at %f, %f", m_message.lat, m_message.lon);

          dispatch(m_message);

          m_phi += dir * m_params.U / (m_params.r * getFrequency());
        }
      }
    };    
  }
}

DUNE_TASK
