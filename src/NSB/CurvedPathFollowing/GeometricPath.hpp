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

namespace NSB
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Josef Matous
  namespace CurvedPathFollowing
  {
    using DUNE_NAMESPACES;

    class GeometricPath {
      public:
        struct PathReference {
          double lat, lon, z;
          double theta, psi;
          double gradient;
        };

        virtual PathReference
        getPathReference(double path_parameter) { return PathReference(); }

        static void
        getPathFollowingError(PathReference ref, const IMC::EstimatedState* estate, double* x, double* y)
        {
          // Get vehicle's latitude and longitude
          double lat_vehicle = estate->lat;
          double lon_vehicle = estate->lon;
          WGS84::displace(estate->x, estate->y, &lat_vehicle, &lon_vehicle);

          // Get displacement in NED frame
          double x_ned, y_ned, z_ned;
          WGS84::displacement(ref.lat, ref.lon, 0., lat_vehicle, lon_vehicle, 0., &x_ned, &y_ned, &z_ned);
          
          // Transform displacement to path-tangential frame
          double c_psi = std::cos(ref.psi);
          double s_psi = std::sin(ref.psi);
          *x = x_ned*c_psi + y_ned*s_psi;
          *y = y_ned*c_psi - x_ned*s_psi;
        }
    };

    class Ellipse: public GeometricPath {
      public:
        double m_lat_center, m_lon_center, m_z_center;
        double m_a, m_b, m_c;
        double m_psi;
        double m_z_freq;
        bool m_clockwise;
        double m_phi0, m_z_phi0;

        Ellipse(double lat_center, double lon_center, double z_center, 
          double a, double b, double c, double psi, double z_freq, bool clockwise, double phi0, double z_phi0) 
        {
          m_lat_center = lat_center;
          m_lon_center = lon_center;
          m_z_center = z_center;
          m_a = a;
          m_b = b;
          m_c = c;
          m_psi = psi;
          m_z_freq = z_freq;
          m_clockwise = clockwise;
          m_phi0 = phi0;
          m_z_phi0 = z_phi0;
        }

        Ellipse()
        {
          m_lat_center = 0.71881387;
          m_lon_center = -0.15195186;
          m_z_center = 0.;
          m_a = 50.;
          m_b = 30.;
          m_c = 0.;
          m_psi = 0.;
          m_z_freq = 0.;
          m_clockwise = true;
          m_phi0 = M_PI_2;
          m_z_phi0 = 0.;
        }

        PathReference
        getPathReference(double s)
        {
          PathReference ref;

          // Calculate path argument
          double direction = m_clockwise ? 1. : -1;
          double arg = m_phi0 + direction*s;
          double z_arg = m_z_phi0 + s*m_z_freq;

          // Get nominal position
          double c_arg = std::cos(arg);
          double s_arg = std::sin(arg);
          double x0 = m_a*c_arg;
          double y0 = m_b*s_arg;
          double z0 = m_c*std::sin(z_arg);

          // Rotate by ellipse orientation
          double c_psi = std::cos(m_psi);
          double s_psi = std::sin(m_psi);
          double x_ned = x0*c_psi - y0*s_psi;
          double y_ned = y0*c_psi + x0*s_psi;
          double z_ned = m_z_center + z0;

          // Calculate lat/lon
          ref.lat = m_lat_center;
          ref.lon = m_lon_center;
          WGS84::displace(x_ned, y_ned, &(ref.lat), &(ref.lon));          

          // Calculate derivatives
          double x0_dot = -direction*m_a*s_arg;
          double y0_dot =  direction*m_b*c_arg;
          // Gradient and pitch angle
          if (z_ned > 0)
          {
            ref.z = z_ned;
            double z0_dot = m_z_freq*m_c*std::cos(z_arg);
            ref.gradient = std::sqrt(square(x0_dot) + square(y0_dot) + square(z0_dot));
            ref.theta = -std::asin(z0_dot / ref.gradient);
          }
          else
          { // saturate to zero if the reference depth is negative
            ref.z = 0.;
            ref.gradient = std::sqrt(square(x0_dot) + square(y0_dot));
            ref.theta = 0.;
          }
          // Path yaw angle
          ref.psi = m_psi + std::atan2(y0_dot, x0_dot);

          return ref;
        }
    };
  }
}

#endif
