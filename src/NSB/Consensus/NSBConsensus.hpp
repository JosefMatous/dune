//***************************************************************************
// Author: Josef Matous                                                     *
//***************************************************************************

#ifndef NSB_CONSENSUS_NSBCONSENSUS_HPP
#define NSB_CONSENSUS_NSBCONSENSUS_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "NSBSimulator.hpp"
#include "Utilities.hpp"


namespace NSB
{
  namespace Consensus
  {
    using DUNE_NAMESPACES;

    inline void
    consensus_algorithm(StateEstimate& own_state, const StateEstimate& recv_state)
    {
      /* Kalman gain */
      float k = own_state.P / (own_state.P + recv_state.P);

      /* Measurement update */
      own_state.path_param += k * (recv_state.path_param - own_state.path_param);
      own_state.p_b.x += k * (recv_state.p_b.x - own_state.p_b.x);
      own_state.p_b.y += k * (recv_state.p_b.y - own_state.p_b.y);
      own_state.p_b.z += k * (recv_state.p_b.z - own_state.p_b.z);
      own_state.P -= k * own_state.P;
      if (recv_state.r_f > own_state.r_f)
        own_state.r_f = recv_state.r_f;
    }
  }
}

#endif
