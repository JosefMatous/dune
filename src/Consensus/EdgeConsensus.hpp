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

  inline void
  constraint_gradient(const Vector2D* z, const Vector2D* z_d, float d_min, float d_max, Vector2D* g)
  {
    Vector2D z_e;
    z_e.x = z->x - z_d->x;
    z_e.y = z->y - z_d->y;

    float z_norm_sq = z->x*z->x + z->y*z->y;
    float z_d_norm_sq = z_d->x*z_d->x + z_d->y*z_d->y;

    float d_min_sq = d_min*d_min;
    float d_max_sq = d_max*d_max;

    float k1 = d_min_sq / (z_d_norm_sq * (z_d_norm_sq - d_min_sq));
    float k2 = 1 / (d_max_sq - z_d_norm_sq);

    float denominator_max = d_max_sq - z_norm_sq;
    float denominator_min = z_norm_sq - d_min_sq;

    g->x = z_e.x + k1*z->x/denominator_max - k2*z->x*d_min_sq/(denominator_min*z_norm_sq);
    g->y = z_e.y + k1*z->y/denominator_max - k2*z->y*d_min_sq/(denominator_min*z_norm_sq);
  }
  
  inline void
  edge_consensus(const HandPosition* h_self, const HandPosition* h_target, const Vector2D* z_d, float c, float rho, float d_min, float d_max, Vector2D* u)
  {
    Vector2D z; // relative position
    z.x = h_self->x - h_target->x;
    z.y = h_self->y - h_target->y;

    Vector2D dW; // constraint gradient
    constraint_gradient(&z, z_d, d_min, d_max, &dW);

    u->x = c*(z_d->x - z.x) - c*rho*dW.x + h_target->x_dot;
    u->y = c*(z_d->y - z.y) - c*rho*dW.y + h_target->y_dot;
    //u->x = c*(z_d->x - z.x) + h_target->x_dot;
    //u->y = c*(z_d->y - z.y) + h_target->y_dot;
  }
}

#endif
