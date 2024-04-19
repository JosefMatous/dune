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

namespace AdaptiveHeadway
{
  namespace Trajectory
  {
    //! FigureEight
    //!
    //! Reference trajectory shaped like the figure eight.
    //! The reference position for a given time is:
    //!   r(t) = r_o + [a*cos(k*t), b*sin(2*k*t), c*cos(2*k*t)],
    //! where r_o is the origin, a, b, c are the dimensions, and k is a positive gain.
    //! @author Josef Matous
    namespace FigureEight
    {
      using DUNE_NAMESPACES;


      struct Task: public DUNE::Tasks::Periodic
      {
        IMC::TrajectoryReference m_ref;
        int m_sample;
        bool m_active;

        double m_x0, m_y0, m_z0, m_a, m_b, m_c, m_k;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx)
        {
          bind<IMC::ExperimentControl>(this);

          reset();
          m_active = false;

          param("Origin x", m_x0)
          .units(Units::Meter)
          .defaultValue("0.0");
          param("Origin y", m_y0)
          .units(Units::Meter)
          .defaultValue("0.0");
          param("Origin z", m_z0)
          .units(Units::Meter)
          .defaultValue("7.5");

          param("Length", m_a)
          .units(Units::Meter)
          .minimumValue("1.0")
          .defaultValue("70.0");
          param("Width", m_b)
          .units(Units::Meter)
          .minimumValue("1.0")
          .defaultValue("35.0");
          param("Depth", m_c)
          .units(Units::Meter)
          .minimumValue("0.0")
          .defaultValue("5.0");

          param("Wavenumber", m_k)
          .units(Units::RadianPerSecond)
          .minimumValue("0.0")
          .defaultValue("0.015707963267948967"); // pi/200
        }

        inline void
        reset()
        {
          m_sample = 0;
        }

        void
        consume(const IMC::ExperimentControl* msg)
        {
          if (msg->delay <= 0.)
          {
            m_active = (msg->start == IMC::BOOL_TRUE);
          }
        }

        //! Main loop.
        void
        task(void)
        {
          if (m_active)
          {
            double arg = m_k * m_sample / getFrequency();
            double c = std::cos(arg);
            double s = std::sin(arg);
            double c2 = std::cos(2*arg);
            double s2 = std::sin(2*arg);

            m_ref.r_x = m_x0 + m_a*c;
            m_ref.r_y = m_y0 + m_b*s2;
            m_ref.r_z = m_z0 + m_c*c2;

            m_ref.v_x = -m_k*m_a*s;
            m_ref.v_y = 2.0*m_k*m_b*c2;
            m_ref.v_z = -2.0*m_k*m_c*s2;

            m_ref.a_x = -m_k*m_k*m_a*c;
            m_ref.a_y = -4.0*m_k*m_k*m_b*s2;
            m_ref.a_z = -4.0*m_k*m_k*m_c*c2;

            spew("Trajectory reference: %.1f, %.1f, %.1f", m_ref.r_x, m_ref.r_y, m_ref.r_z);

            dispatch(m_ref);

            ++m_sample;
          }
        }
      };    
    }
  }
}

DUNE_TASK