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

#include "CollisionEllipse.hpp"

namespace NSB
{
  //! NSB Monitor
  //!
  //! Monitors the operating limits of the NSB task.
  //! @author Josef Matous
  namespace Monitor
  {
    using DUNE_NAMESPACES;


    struct Task: public DUNE::Tasks::Task
    {
      struct 
      {
        //! Collision ellipse origin.
        std::vector<float> x0, y0;
        //! Collision ellipse orientation.
        std::vector<float> angle;
        //! Collision ellipse axes.
        std::vector<float> a, b;
        //! True if the vehicle should remain inside the collision ellipse.
        std::vector<bool> inside;
        //! True if the operation limits are an intersection of ellipses, false for union
        bool intersection;
        //! Timeout for task deactivation.
        double timeout;
      } m_params;

      std::vector<CollisionEllipse<float>> m_ellipses;
      double m_last_msg_time;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Semimajor axes", m_params.a)
          .defaultValue("50");
        param("Semiminor axes", m_params.b)
          .defaultValue("30");
        param("Orientations", m_params.angle)
          .defaultValue("0");
        param("Origin x", m_params.x0)
          .defaultValue("0");
        param("Origin y", m_params.y0)
          .defaultValue("0");
        param("Inside", m_params.inside)
          .defaultValue("true");   
        param("Intersection", m_params.intersection)
          .defaultValue("true");   
        param("Timeout", m_params.timeout)
          .defaultValue("1");

        m_last_msg_time = -1.;

        bind<IMC::EstimatedState>(this);
        bind<IMC::DesiredLinearState>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_params.a) || paramChanged(m_params.b) || paramChanged(m_params.angle) || paramChanged(m_params.x0) || paramChanged(m_params.y0))
        {
          size_t n_ellipses = m_params.a.size();
          if ((m_params.b.size() != n_ellipses) || (m_params.angle.size() != n_ellipses) || (m_params.x0.size() != n_ellipses) || (m_params.y0.size() != n_ellipses))
          {
            war("Incompatible size of parameter vectors");
            return;
          }
          if (m_ellipses.size() != n_ellipses)
            m_ellipses.resize(n_ellipses);

          for (size_t i = 0; i < n_ellipses; i++)
          {
            m_ellipses[i] = CollisionEllipse<float>(m_params.a[i], m_params.b[i], m_params.angle[i], m_params.x0[i], m_params.y0[i]);
          }          
        }
      }

      void
      consume(const IMC::DesiredLinearState* msg)
      {
        if (msg->getSourceEntity() == resolveEntity("Distributed NSB"))
        {
          m_last_msg_time = Clock::get();
          if (!isActive())
          {
            debug("Distributed NSB task is running -- activating monitor");
            requestActivation();
          }
        }
      }

      void 
      consume(const IMC::EstimatedState* msg)
      {
        if (isActive())
        {
          if (Clock::get() - m_last_msg_time > m_params.timeout)
          {
            debug("Timeout -- deactivating monitor");
            requestDeactivation();
            return;
          }

          bool is_in_limits;
          if (m_params.intersection)
          {
            is_in_limits = true;
            for (size_t i = 0; i < m_ellipses.size(); i++)
              is_in_limits &= (m_params.inside[i]) ? m_ellipses[i].isInside(msg->x, msg->y) : m_ellipses[i].isOutside(msg->x, msg->y);
          }
          else
          {
            is_in_limits = false;
            for (size_t i = 0; i < m_ellipses.size(); i++)
              is_in_limits |= (m_params.inside[i]) ? m_ellipses[i].isInside(msg->x, msg->y) : m_ellipses[i].isOutside(msg->x, msg->y);
          }

          if (!is_in_limits)
          {
            err("Vehicle outside of operating limits");
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