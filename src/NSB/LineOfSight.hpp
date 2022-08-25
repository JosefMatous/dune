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
          Vector3D velocity;
          double path_parameter_derivative;
        };      

        LineOfSightOutput
        step(GeometricPath::PathReference path_ref, Vector3D path_error)
        {
          LineOfSightOutput out;
          double lookahead;
          if (m_adaptive)
          {
            lookahead = std::sqrt(square(m_lookahead) + square(path_error.x) + square(path_error.y) + square(path_error.z));
          }
          else
          {
            lookahead = m_lookahead;
          }

          // Pre-calculate the sines and cosines of path angles
          double c_theta = std::cos(path_ref.theta);
          double s_theta = std::sin(path_ref.theta);
          double c_psi = std::cos(path_ref.psi);
          double s_psi = std::sin(path_ref.psi);

          // Additional line-of-sight angle
          // definition: theta_los = asin(path_error.z / D)
          //               psi_los = -atan(path_error.y / lookahead)
          double D = std::sqrt(square(lookahead) + square(path_error.y) + square(path_error.z));
          double c_theta_los = std::sqrt(square(D) - square(path_error.z)) / D;
          double s_theta_los = path_error.z / D;
          double psi_denominator = std::sqrt(square(lookahead) + square(path_error.y));
          double c_psi_los = lookahead / psi_denominator;
          double s_psi_los = -path_error.y / psi_denominator;

          // LOS velocities
          out.velocity.x = m_speed * (c_psi*c_psi_los*c_theta*c_theta_los - c_theta*s_psi*s_psi_los - c_psi_los*s_theta*s_theta_los);
          out.velocity.y = m_speed * (c_psi_los*c_theta*s_psi - s_psi_los*s_theta*s_theta_los + c_psi*c_theta*c_theta_los*s_psi_los);
          out.velocity.z = m_speed * (- c_theta_los*s_theta - c_psi*c_theta*s_theta_los);

          // Path parameter update law
          out.path_parameter_derivative = m_speed * (lookahead/D + m_parameter_gain*path_error.x/std::sqrt(square(path_error.x) + 1)) / path_ref.gradient;

          return out;
        }
    };    
}

#endif
