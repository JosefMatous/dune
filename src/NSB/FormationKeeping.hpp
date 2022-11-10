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

#ifndef FORMATION_KEEPING_HPP
#define FORMATION_KEEPING_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "GeometricPath.hpp"
#include "Utilities.hpp"

namespace NSB
{
  using DUNE_NAMESPACES;

  class FormationKeeping
  {
  public:
    //! Vehicle's position in the formation
    Vector3D p_form;
    //! Formation keeping gain
    double k_form;

    FormationKeeping(void)
    {
      FormationKeeping(0., 0., 0., 1);
    }

    FormationKeeping(double x, double y, double z, double k)
    {
      p_form.x = x;
      p_form.y = y;
      p_form.z = z;
      k_form = k;
    }

    Vector3D
    step(GeometricPath::PathReference path_ref, Vector3D sigma, double path_parameter_derivative)
    {
      // Calculate the path rotation matrix and its derivative
      double c_theta = std::cos(path_ref.theta);
      double s_theta = std::sin(path_ref.theta);
      double c_psi = std::cos(path_ref.psi);
      double s_psi = std::sin(path_ref.psi);
      double R[3][3] = {{c_psi*c_theta, -s_psi, c_psi*s_theta},
                        {c_theta*s_psi,  c_psi, s_psi*s_theta},
                        {     -s_theta,      0,       c_theta}};
      double kappa = path_ref.kappa * path_parameter_derivative;
      double iota = path_ref.iota * path_parameter_derivative;
      double R_dot[3][3] = {{- iota*c_theta*s_psi - kappa*c_psi*s_theta, - iota*c_psi, kappa*c_psi*c_theta - iota*s_psi*s_theta},
                            {  iota*c_psi*c_theta - kappa*s_psi*s_theta, - iota*s_psi, iota*c_psi*s_theta + kappa*c_theta*s_psi},
                            {                            -kappa*c_theta,            0,                           -kappa*s_theta}};

      // Calculate the desired values of sigma
      Vector3D sigma_d;
      sigma_d.x = R[0][0] * p_form.x + R[0][1] * p_form.y + R[0][2] * p_form.z;
      sigma_d.y = R[1][0] * p_form.x + R[1][1] * p_form.y + R[1][2] * p_form.z;
      sigma_d.z = R[2][0] * p_form.x + R[2][1] * p_form.y + R[2][2] * p_form.z;

      Vector3D sigma_d_dot;   
      sigma_d_dot.x = R_dot[0][0] * p_form.x + R_dot[0][1] * p_form.y + R_dot[0][2] * p_form.z;
      sigma_d_dot.y = R_dot[1][0] * p_form.x + R_dot[1][1] * p_form.y + R_dot[1][2] * p_form.z;
      sigma_d_dot.z = R_dot[2][0] * p_form.x + R_dot[2][1] * p_form.y + R_dot[2][2] * p_form.z;

      // Calculate the formation-keeping velocities
      Vector3D out;
      out.x = k_form * (sigma_d.x - sigma.x) + sigma_d_dot.x;
      out.y = k_form * (sigma_d.y - sigma.y) + sigma_d_dot.y;
      out.z = k_form * (sigma_d.z - sigma.z) + sigma_d_dot.z;
      return out;
    }
  };  
}

#endif
