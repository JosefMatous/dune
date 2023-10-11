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
#include "../Utilities.hpp"

namespace NSB
{
  //! Obstacle
  //!
  //! Simulates an obstacle moving in a straight line.
  //! Periodically publishes its location using the `Target` IMC message.
  //! @author Josef Matous
  namespace Obstacle
  {
    using DUNE_NAMESPACES;


    struct Task: public DUNE::Tasks::Periodic
    {
      struct 
      {
        //! Initial latitude.
        double lat0;
        //! Initial longitude.
        double lon0;
        //! Initial x-offset
        std::vector<float> x0;
        //! Initial y-offset
        std::vector<float> y0;
        //! Velocity x.
        std::vector<float> v_x;
        //! Velocity y.
        std::vector<float> v_y;
        //! Broadcast obstacles to Neptus via IMC::EstimatedState message
        bool broadcast_estate;
        //! List of system names for the obstacles
        std::vector<std::string> system_names;
        //! System names converted to system IDs
        std::vector<uint16_t> system_ids;
      } m_params;

      IMC::Target m_message;
      IMC::EstimatedState m_estate;
      IMC::NSBParametersRequest m_nsb_request;

      bool m_active;
      bool m_is_initialized;

      //! Current x-offset
      std::vector<float> m_x;
      //! Current y-offset
      std::vector<float> m_y;

      Delta m_delta;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        bind<IMC::ExperimentControl>(this);
        bind<IMC::NSBParameters>(this);

        param("Active", m_active)
          .defaultValue("false");
        param("Broadcast as EstimatedState", m_params.broadcast_estate)
          .defaultValue("false");
        param("System Names", m_params.system_names)
          .defaultValue("");

        m_is_initialized = false;
        m_delta.reset();

        m_estate.depth = 0.;
        m_estate.height = 0.;
        m_estate.z = 0.;
        m_estate.alt = 0.;
        m_estate.theta = 0.;
        m_estate.phi = 0.;
        m_estate.p = 0.;
        m_estate.q = 0.;
        m_estate.r = 0.;
        m_estate.v = 0.;
        m_estate.w = 0.;
        m_estate.vz = 0.;
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_active))
          reset();

        if (paramChanged(m_params.system_names))
        {
          m_params.system_ids.resize(m_params.system_names.size());
          for (size_t i = 0; i < m_params.system_names.size(); i++)
            m_params.system_ids[i] = m_ctx.resolver.resolve(m_params.system_names[i]);          
        }
      }

      void
      onResourceInitialization(void)
      {
        reset();
        dispatch(m_nsb_request);
      }

      inline void
      reset(void)
      {
        if (m_is_initialized)
        {
          for (size_t i = 0; i < m_x.size(); i++)
          {
            m_x[i] = m_params.x0[i];
            m_y[i] = m_params.y0[i]; 
          }
        }
        
        m_delta.reset();
        debug("Obstacle reset");
      }

      void
      consume(const IMC::NSBParameters* msg)
      {
        m_params.lat0 = msg->obs_lat;
        m_params.lon0 = msg->obs_lon;

        m_estate.lat = msg->obs_lat;
        m_estate.lon = msg->obs_lon;

        if (!castLexical(msg->obs_x, m_params.x0))
        {
          err("Could not resolve the x-position of the obstacles");
          return;
        }
        if (!castLexical(msg->obs_y, m_params.y0))
        {
          err("Could not resolve the y-position of the obstacles");
          return;
        }
        if (!castLexical(msg->obs_vx, m_params.v_x))
        {
          err("Could not resolve the x-velocity of the obstacles");
          return;
        }
        if (!castLexical(msg->obs_vy, m_params.v_y))
        {
          err("Could not resolve the y-velocity of the obstacles");
          return;
        }
        size_t N = m_params.x0.size();
        if ((m_params.y0.size() != N) || (m_params.v_x.size() != N) || (m_params.v_y.size() != N))
        {
          err("Vector sizes do not match.");
          return;
        }

        m_x.resize(N);
        m_y.resize(N);

        m_is_initialized = true;
        reset();
      }

      void
      consume(const IMC::ExperimentControl* msg)
      {
        if (msg->delay <= 0.)
        {
          bool new_active = (msg->op == ExperimentControl::OP_START && msg->obstacle == IMC::BOOL_TRUE);
          if (new_active != m_active)
          {
            m_active = new_active;
            reset();
          }
        }
      }

      //! Main loop.
      void
      task(void)
      {
        if (m_active)
        {
          double delta_t = m_delta.getDelta();

          for (size_t i = 0; i < m_x.size(); i++)
          {
            m_x[i] += m_params.v_x[i] * delta_t;
            m_y[i] += m_params.v_y[i] * delta_t;

            // Set obstacle label
            std::ostringstream formatter(std::ostringstream::ate);
            formatter << i;
            m_message.label = formatter.str();
            // Displace obstacle latitude
            m_message.lat = m_params.lat0;
            m_message.lon = m_params.lon0;
            WGS84::displace(m_x[i], m_y[i], &m_message.lat, &m_message.lon);
            // Calculate speed and course
            m_message.sog = std::sqrt(square(m_params.v_x[i]) + square(m_params.v_y[i]));
            m_message.cog = std::atan2(m_params.v_y[i], m_params.v_x[i]);
            debug("Obstacle at (%g, %g)", m_x[i], m_y[i]);
            dispatch(m_message);

            if (m_params.broadcast_estate && (m_params.system_ids.size() >= m_x.size()))
            {
              m_estate.x = m_x[i];
              m_estate.y = m_y[i];
              m_estate.vx = m_params.v_x[i];
              m_estate.vy = m_params.v_y[i];
              m_estate.u = m_message.sog;
              m_estate.psi = m_message.cog;
              m_estate.setSource(m_params.system_ids[i]);
              debug("Obstacle source set to %u", m_params.system_ids[i]);
              dispatch(m_estate, DF_KEEP_SRC_EID);
            }
          }
        }
      }
    };    
  }
}

DUNE_TASK