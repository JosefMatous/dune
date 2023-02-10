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

#ifndef NSB_COLLISIONELLIPSE_HPP_
#define NSB_COLLISIONELLIPSE_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "../Utilities.hpp"

namespace NSB
{
  namespace Monitor
  {
    using DUNE_NAMESPACES;

    //! Class for detecting if a point is inside or outside of a given ellipse.
    template<typename T>
    class CollisionEllipse
    {
    private:
        T m_xx, m_yy, m_xy, m_c;
        T m_x0, m_y0;
    public:
        CollisionEllipse(T a, T b, T angle, T x0, T y0)
        {
          setParameters(a, b, angle, x0, y0);
        }

        //! Default constructor
        CollisionEllipse(void)
        {
          setParameters(T(), T(), T(), T(), T());
        }

        inline void
        setParameters(T a, T b, T angle, T x0, T y0)
        {
          T a2 = square(a);
          T b2 = square(b);
          T s  = std::sin(angle);
          T c  = std::cos(angle);
          T s2 = square(s);
          T c2 = square(c);

          m_xx = a2*s2 + b2*c2;
          m_yy = b2*s2 + a2*c2;
          m_xy = 2 * (b2 - a2) * s * c;
          m_c = a2 * b2;

          m_x0 = x0;
          m_y0 = y0;
        }

        inline bool
        isInside(T x, T y)
        {
          T x_rel = x - m_x0;
          T y_rel = y - m_y0;

          return m_xx*square(x_rel) + m_yy*square(y_rel) + m_xy*x_rel*y_rel < m_c;
        }

        inline bool
        isOutside(T x, T y)
        {
          T x_rel = x - m_x0;
          T y_rel = y - m_y0;

          return m_xx*square(x_rel) + m_yy*square(y_rel) + m_xy*x_rel*y_rel > m_c;
        }
    };      
  }
}

#endif
