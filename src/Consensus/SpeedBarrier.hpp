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

#ifndef CONSENSUS_SPEED_BARRIER_HPP
#define CONSENSUS_SPEED_BARRIER_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utility.hpp"

namespace Consensus
{
  using DUNE_NAMESPACES;

  class SpeedBarrier
  {
  private:
    //! Previous measured surge velocity
    float u_prev;
    //! Extra surge velocity
    float u_add;
    //! Integral state
    float rho;
    //! Time delta
    Time::Delta m_delta;
  public:
    //! Speed gain
    float m_k_u;
    //! Time-constant
    float m_k_rho;
    //! Offset
    float m_sigma;
    //! Max. tau
    float m_tau_max;

    SpeedBarrier(float k_u, float k_rho, float sigma, float tau_max)
    {
      m_k_u = k_u;
      m_k_rho = k_rho;
      m_sigma = sigma;
      m_tau_max = tau_max;
      rho = 0.; 
    }

    //! Initialize with default parameters
    SpeedBarrier(void):
      SpeedBarrier(0.1, 4., 0.3, 1.) {}

    //! One step of the algorithm
    void
    step(Vector2D* mu, float u, float psi)
    {
      float s_psi = std::sin(psi);
      float c_psi = std::cos(psi);
      float u_ref = mu->x*c_psi + mu->y*s_psi;

      double delta_t = m_delta.getDelta();
      if (delta_t > 0.)
      {
        float tau = std::abs(u_ref - u_prev) / delta_t;
        float rho_dot = -m_k_rho*rho + 0.5*(1 - std::tanh(m_sigma - tau))*tau;
        rho += rho_dot * delta_t;
      }

      float d = rho + u + 1.;
      float tau_add = m_k_u * std::pow(d*d - d, -1.);
      if (tau_add >= 0.)
        tau_add = trimValue(std::abs(tau_add), 0.F, m_tau_max);
      else // we are in the infeasible region
        tau_add = m_tau_max;

      mu->x += tau_add*c_psi;
      mu->y -= tau_add*s_psi;

      u_prev = u_ref;
    }

    inline void
    reset(void)
    {
      rho = 0.;
      u_add = 0.;
      m_delta.clear();
    }
  };  
}

#endif
