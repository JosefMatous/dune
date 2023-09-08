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

#ifndef CONSENSUS_EDGECONSENSUS_HPP
#define CONSENSUS_EDGECONSENSUS_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utility.hpp"
#include "HandPosition.hpp"

namespace Consensus
{
  using DUNE_NAMESPACES;

  // Distance tolerance for checking if the vehicles are in the feasible region
  static const float c_distance_check_tol = 2.; 

  static float
  constraint_gradient(const Vector2D* z, const Vector2D* z_d, float d_min, float d_max)
  {
    float z_norm_sq = z->x*z->x + z->y*z->y;
    float z_d_norm_sq = z_d->x*z_d->x + z_d->y*z_d->y;

    float d_min_sq = d_min*d_min;
    float d_max_sq = d_max*d_max;

    if (z_norm_sq + c_distance_check_tol > d_max_sq || z_norm_sq - c_distance_check_tol < d_min_sq) // vehicle is in the infeasible region
      return 0.;

    float k1 = d_min_sq * z_d_norm_sq / (z_d_norm_sq - d_min_sq);
    float k2 = 1. / (d_max_sq - z_d_norm_sq);

    return k1/(d_max_sq - z_norm_sq) - k2*d_min_sq*z_norm_sq/(z_norm_sq - d_min_sq);
  }
  
  //! Consensus algorithm with connectivity and collision constraints
  inline void
  edge_consensus(const HandPosition& h_self, const HandPosition& h_target, float x_offset, float y_offset, float c_p, float c_v, float rho, float d_min, float d_max, Vector2D& u)
  {
    Vector2D z, z_d; // relative position
    z.x = h_self.x - h_target.x;
    z.y = h_self.y - h_target.y;
    z_d.x = x_offset;
    z_d.y = y_offset;

    float dW = constraint_gradient(&z, &z_d, d_min, d_max);

    u.x += c_p*(z_d.x - z.x) - c_p*rho*dW*z.x + c_v*h_target.x_dot;
    u.y += c_p*(z_d.y - z.y) - c_p*rho*dW*z.y + c_v*h_target.y_dot;
  }

  //! Consensus algorithm without connectivity and collision constraints
  inline void
  edge_consensus(const HandPosition& h_self, const HandPosition& h_target, float x_offset, float y_offset, float c, Vector2D& u)
  {
    Vector2D z, z_d; // relative position
    z.x = h_self.x - h_target.x;
    z.y = h_self.y - h_target.y;
    z_d.x = x_offset;
    z_d.y = y_offset;

    u.x += c*(z_d.x - z.x) + h_target.x_dot;
    u.y += c*(z_d.y - z.y) + h_target.y_dot;
  }

  //! Vertical controller
  inline void
  vertical_control(const IMC::EstimatedState& state, const HandPosition& h_self, const HandPosition& h_target, float z_d, float c_pz, float c_vz, IMC::DesiredZ& z_ref)
  {
    float z = h_target.z + z_d + c_pz*(h_target.z - h_self.z) + c_vz*h_target.z_dot + (state.z - h_self.z);
    z_ref.z_units = IMC::Z_DEPTH;
    z_ref.value = trimValue(z, 0., 20.);
  }
}

#endif
