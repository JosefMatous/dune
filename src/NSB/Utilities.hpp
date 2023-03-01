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

#ifndef NSB_UTILITIES_HPP_
#define NSB_UTILITIES_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace NSB
{
    using DUNE_NAMESPACES;

    template <typename T>
    inline T square(T x)
    {
      return x*x;
    }

    struct Vector3D
    {
      double x, y, z;

      //! Initializes the vector with given values.
      Vector3D(double xx, double yy, double zz):
        x(xx), y(yy), z(zz) {}

      //! Creates a vector of zeros.
      Vector3D(void):
        Vector3D(0., 0., 0.) {}
    };

    struct Vector2D
    {
      double x, y;
    };

    struct ObstacleState
    {
      double timestamp, x, y, vx, vy;
    };
    
    inline double
    dot(Vector2D a, Vector2D b)
    {
      return a.x*b.x + a.y*b.y;
    }

    inline double
    dot(Vector3D a, Vector3D b)
    {
      return a.x*b.x + a.y*b.y + a.z*b.z;
    }

    inline double
    norm(Vector3D a)
    {
      return std::sqrt(square(a.x) + square(a.y) + square(a.z));
    }

    inline double
    norm(Vector2D a)
    {
      return std::sqrt(square(a.x) + square(a.y));
    }

    inline double
    cross(Vector2D a, Vector2D b)
    {
      return a.x*b.y - b.x*a.y;
    }

    inline float
    sign(double x)
    {
      return (x >= 0.) ? 1. : -1;
    }
}

#endif