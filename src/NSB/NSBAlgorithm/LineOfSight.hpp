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

#ifndef LINE_OF_SIGHT_HPP_
#define LINE_OF_SIGHT_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utilities.hpp"
#include "GeometricPath.hpp"

namespace NSB
{
  //! Line-of-sight guidance task.
  //!
  //! Returns desired LOS velocity and updates the path parameter.
  //! @author Josef Matous
  namespace NSBAlgorithm
  {
    using DUNE_NAMESPACES;

    class LineOfSight
    {
      public:

        //! Lookahead distance
        double m_lookahead;
        //! Use adaptive lookahead distance
        bool m_adaptive;
        //! Path following speed
        double m_speed;
        //! Path parameter update gain (note: must be less than one)
        double m_parameter_gain;

        //! Initialize with default parameters
        LineOfSight():
          m_lookahead(15.),
          m_adaptive(false),
          m_speed(1.),
          m_parameter_gain(0.2)
        {        
        }

        //! Initialize with custom parameters
        LineOfSight(double lookahead, bool adaptive, double speed, double parameter_gain)
        {
          m_lookahead = lookahead;
          m_adaptive = adaptive;
          m_speed = speed;
          m_parameter_gain = parameter_gain;
        }

        struct LineOfSightOutput
        {
          Vector3D velocity_reference;
          double path_parameter_derivative;
        };      

        LineOfSightOutput
        step(GeometricPath::PathReference path_ref, Vector3D path_error)
        {
          double lookahead;
          if (m_adaptive)
          {
            lookahead = std::sqrt(square(m_lookahead) + square(path_error.x) + square(path_error.y) + square(path_error.z));
          }
          else
          {
            lookahead = m_lookahead;
          }

          // Error pitch and yaw
          double D = std::sqrt(square(lookahead) + square(path_error.y) + square(path_error.z));
          //double pitch_D = std::asin(path_error.z / D);         // we don't need these angles
          //double yaw_D = - std::atan2(path_error.y, lookahead); // -> we calculate the cosines and sines directly
          double D_horz = std::sqrt(square(lookahead) + square(path_error.y));
          double c_theta_D = D_horz / D;
          double s_theta_D = path_error.z / D;
          double c_psi_D = lookahead / D_horz;
          double s_psi_D = - path_error.y / D_horz;

          // Path-tangential vector
          double s_theta = std::sin(path_ref.pitch);
          double c_theta = std::cos(path_ref.pitch);
          double s_psi = std::sin(path_ref.yaw);
          double c_psi = std::cos(path_ref.yaw);
          double x_path = c_theta * c_psi;
          double y_path = c_theta * s_psi;
          double z_path = - s_theta;

          // Rotate the path-tangential vector by the path-following error
          LineOfSightOutput output;
          output.velocity_reference.x = m_speed * (x_path*c_psi_D*c_theta_D - y_path*s_psi_D + z_path*c_psi_D*s_theta_D);
          output.velocity_reference.y = m_speed * (y_path*c_psi_D + x_path*c_theta_D*s_psi_D + z_path*s_psi_D*s_theta_D);
          output.velocity_reference.z = m_speed * (z_path*c_theta_D - x_path*s_theta_D);

          // Path parameter update law
          output.path_parameter_derivative = m_speed * (lookahead/D + m_parameter_gain*path_error.x/std::sqrt(square(path_error.x) + 1)) / path_ref.gradient;

          return output;
        }
    };    
  }
}

#endif
