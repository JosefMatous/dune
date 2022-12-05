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

namespace Consensus
{
  using DUNE_NAMESPACES;

  struct HandPosition
  {
    float x, y, x_dot, y_dot;
  };
  
  //! Calculates hand position from estimated state
  inline void 
  get_hand_position(const IMC::EstimatedState* estate, float h, HandPosition* destination)
  {
    float c_psi = std::cos(estate->psi);
    float s_psi = std::sin(estate->psi);
    destination->x = estate->x + h*c_psi;
    destination->y = estate->y + h*s_psi;
    destination->x_dot = estate->u*c_psi - estate->v*s_psi - h*s_psi*estate->r;
    destination->y_dot = estate->u*s_psi + estate->v*c_psi + h*c_psi*estate->r;
  }
}

#endif
