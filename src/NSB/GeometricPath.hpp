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

#ifndef NSB_GEOMETRIC_PATH_HPP_
#define NSB_GEOMETRIC_PATH_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utilities.hpp"

namespace NSB
{
    using DUNE_NAMESPACES;

    class GeometricPath {
      public:
        struct PathReference {
          double x, y, z;
          double theta, psi;
          double gradient;
          double kappa, iota;
        };

        inline virtual void
        getPathReference(double path_parameter, PathReference& ref);

        inline static void
        getPathFollowingError(PathReference ref, double x_vehicle, double y_vehicle, double z_vehicle, Vector3D& path_err)
        {
          // Get displacement in NED frame
          double x_ned, y_ned, z_ned;
          x_ned = x_vehicle - ref.x;
          y_ned = y_vehicle - ref.y;
          z_ned = z_vehicle - ref.z;
          
          // Transform displacement to path-tangential frame
          double c_theta = std::cos(ref.theta);
          double s_theta = std::sin(ref.theta);
          double c_psi = std::cos(ref.psi);
          double s_psi = std::sin(ref.psi);

          path_err.x = x_ned*c_psi*c_theta - z_ned*s_theta + y_ned*c_theta*s_psi;
          path_err.y = y_ned*c_psi - x_ned*s_psi;
          path_err.z = z_ned*c_theta + x_ned*c_psi*s_theta + y_ned*s_psi*s_theta;
        }

        inline static void
        getPathFollowingError(PathReference ref, const IMC::EstimatedState* estate, Vector3D& path_err)
        {
          getPathFollowingError(ref, estate->x, estate->y, estate->depth, path_err);
        }
    };

    class Ellipse: public GeometricPath {
      public:
        double m_x_center, m_y_center, m_z_center;
        double m_a, m_b, m_c;
        double m_psi;
        double m_z_freq;
        bool m_clockwise;
        double m_phi0, m_z_phi0;

        Ellipse(double x_center, double y_center, double z_center, 
          double a, double b, double c, double psi, double z_freq, bool clockwise, double phi0, double z_phi0) 
        {
          m_x_center = x_center;
          m_y_center = y_center;
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
          m_x_center = 0;
          m_y_center = 0;
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

        inline void
        getPathReference(double s, PathReference& ref)
        {
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
          ref.x = x0*c_psi - y0*s_psi;
          ref.y = y0*c_psi + x0*s_psi;
          double z_ned = m_z_center + z0;    

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
        }
    };
}

#endif
