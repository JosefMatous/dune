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

#ifndef GEOMETRIC_PATH_HPP_
#define GEOMETRIC_PATH_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utilities.hpp"

#ifndef M_PI
# define M_PI   3.141592653589793238462643383279502884
#endif

namespace NSB
{
  //! Geometric path utilities.
  //!
  //! Utilities for evaluation of geometric paths.
  //! @author Josef Matous
  namespace NSBAlgorithm
  {
    using DUNE_NAMESPACES;

    class GeometricPath
    {
      public:

        struct PathReference
        {
          //! Path x-coordinate
          double x;
          //! Path y-coordinate
          double y;
          //! Path z-coordinate
          double z;
          //! Path elevation (pitch angle)
          double pitch;
          //! Path direction (yaw angle)
          double yaw;
          //! Curvature in the vertical plane
          double curvature_pitch;
          //! Curvature in the horizontal plane
          double curvature_yaw;
          //! Path gradient (norm of partial derivative of path coordinates w.r.t. path parameter)
          double gradient;
        };

        virtual PathReference
        getPathReference(double path_parameter) {}

        static Vector3D
        getPathFollowingError(PathReference path_ref, Vector3D vehicle_position)
        {
          double s_theta = std::sin(path_ref.pitch);
          double c_theta = std::cos(path_ref.pitch);
          double s_psi = std::sin(path_ref.yaw);
          double c_psi = std::cos(path_ref.yaw);

          // Error in inertial coordinates
          double x_e = vehicle_position.x - path_ref.x;
          double y_e = vehicle_position.y - path_ref.y;
          double z_e = vehicle_position.z - path_ref.z;

          // Transformaion to path-tangential coordinates
          Vector3D path_err;
          path_err.x = x_e*c_psi*c_theta - z_e*s_theta + y_e*c_theta*s_psi;
          path_err.y = y_e*c_psi - x_e*s_psi;
          path_err.z = z_e*c_theta + x_e*c_psi*s_theta + y_e*s_psi*s_theta;

          return path_err;
        }            
    };

    class PlanarSineWave:
      public GeometricPath
    {
      public:

        //! Initial position
        Vector3D p0;
        //! Wave amplitude
        double m_amplitude;
        //! Wavenumber
        double m_wavenumber;
        //! Wave direction (yaw angle)
        double m_yaw;

        //! Initialize with default parameters
        PlanarSineWave():
          m_amplitude(15.),
          m_wavenumber(M_PI / 75.),
          m_yaw(0.)
        {
          p0.x = 0.;
          p0.y = 0.;
          p0.z = 0.;
        }

        //! Initialize with custom parameters
        PlanarSineWave(double x0, double y0, double z0, double amplitude, double wavenumber, double yaw)
        {
          p0.x = x0;
          p0.y = y0;
          p0.z = z0;
          m_amplitude = amplitude;
          m_wavenumber = wavenumber;
          m_yaw = yaw;
        }

        PathReference
        getPathReference(double s)
        {
          PathReference path_ref;
          double c_yaw = std::cos(m_yaw);
          double s_yaw = std::sin(m_yaw);

          double xn = s;
          double arg = m_wavenumber * s;
          double yn = m_amplitude * std::sin(arg);
          path_ref.x = p0.x + (xn * c_yaw - yn * s_yaw);
          path_ref.y = p0.y + (yn * c_yaw + xn * s_yaw);
          path_ref.z = p0.z;

          double yn_diff = m_amplitude * m_wavenumber * std::cos(arg);
          path_ref.pitch = 0.;
          path_ref.yaw = m_yaw + std::atan(yn_diff);
          path_ref.gradient = std::sqrt(1 + square(yn_diff));

          double yn_diff2 = - square(m_wavenumber) * yn;
          path_ref.curvature_pitch = 0.;
          path_ref.curvature_yaw = yn_diff2 / (square(yn_diff) + 1.);

          return path_ref;
        }
    };
    
  }
}
    
#endif
