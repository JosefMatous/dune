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
        float x0, y0;
        //! Collision ellipse orientation.
        float angle;
        //! Collision ellipse axes.
        float a, b;
        //! True if the vehicle should remain inside the collision ellipse.
        bool inside;
        //! Timeout for task deactivation.
        double timeout;
      } m_params;

      CollisionEllipse<float> m_ellipse;
      double m_last_msg_time;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_ellipse(50., 30., 0., 0., 0.)
      {
        param("Semimajor axis", m_params.a)
          .defaultValue("50");
        param("Semiminor axis", m_params.b)
          .defaultValue("30");
        param("Orientation", m_params.angle)
          .defaultValue("0");
        param("Origin x", m_params.x0)
          .defaultValue("0");
        param("Origin y", m_params.y0)
          .defaultValue("0");
        param("Inside", m_params.inside)
          .defaultValue("true");   
        param("Timeout", m_params.timeout)
          .defaultValue("10");

        m_last_msg_time = -1.;

        bind<IMC::EstimatedState>(this);
        bind<IMC::DesiredLinearState>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_ellipse.setParameters(m_params.a, m_params.b, m_params.angle, m_params.x0, m_params.y0);
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
          if (m_params.inside)
            is_in_limits = m_ellipse.isInside(msg->x, msg->y);
          else
            is_in_limits = m_ellipse.isOutside(msg->x, msg->y);

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