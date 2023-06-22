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

#ifndef CONSENSUS_HAND_POSITION_HPP
#define CONSENSUS_HAND_POSITION_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utility.hpp"

namespace Consensus
{
  using DUNE_NAMESPACES;

  struct HandPosition
  {
    float x, y, z, x_dot, y_dot, z_dot;
  };
  
  //! Calculates hand position from estimated state
  inline void 
  get_hand_position(const IMC::EstimatedState* estate, float h, HandPosition* destination)
  {
    float c_phi = std::cos(estate->phi);
    float s_phi = std::sin(estate->phi);
    float c_theta = std::cos(estate->theta);
    float s_theta = std::sin(estate->theta);
    float c_psi = std::cos(estate->psi);
    float s_psi = std::sin(estate->psi);
    destination->x = estate->x + h*c_theta*c_psi;
    destination->y = estate->y + h*c_theta*s_psi;
    destination->z = estate->z - h*s_theta;
    destination->x_dot = estate->vx + h * (estate->r*(c_psi*c_phi*s_theta - c_phi*s_psi) - estate->q*(c_phi*c_psi*s_theta + s_phi*s_psi));
    destination->y_dot = estate->vy + h * (estate->r*(s_psi*s_phi*s_theta + c_phi*c_psi) + estate->q*(c_psi*s_phi - c_phi*s_psi*s_theta));
    destination->z_dot = estate->vz + h * (c_theta * (estate->r*s_phi - estate->q*c_phi));
  }

  class HandPositionController
  {
  private:
    float last_direction;
  public:
    float U_min, U_max, r_max, h;

    HandPositionController(float U_min_, float U_max_, float r_max_, float h_)
    {
      U_min = U_min_;
      U_max = U_max_;
      r_max = r_max_;
      h = h_;
      last_direction = 1.; // prefer forward motion
    }

    HandPositionController(void):
      HandPositionController(0.4, 2., 1., 1.) {}

    inline void
    get_references(const Vector2D* v_d, const IMC::EstimatedState* estate, IMC::DesiredSpeed* u_ref, IMC::DesiredHeadingRate* r_ref)
    {
      float c_psi = std::cos(estate->psi);
      float s_psi = std::sin(estate->psi);

      float u_d = trimValue(v_d->x*c_psi + v_d->y*s_psi, -U_max, U_max);
      if (std::abs(u_d) < U_min) // hysteresis
      {
        u_d = last_direction * U_min;
      }
      else
      {
        last_direction = (u_d > 0.) ? 1. : -1.;
      }
      u_ref->value = u_d;
      u_ref->speed_units = IMC::SUNITS_METERS_PS;

      r_ref->value = trimValue((v_d->y*c_psi - v_d->x*s_psi - estate->v) / h, -r_max, r_max);
    }
  };  
}

#endif
