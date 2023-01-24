//***************************************************************************
// Author: Josef Matous                                                     *
//***************************************************************************

#ifndef NSB_DISTRIBUTEDNSB_NSBCONSENSUS_HPP
#define NSB_DISTRIBUTEDNSB_NSBCONSENSUS_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "../GeometricPath.hpp"
#include "../LineOfSight.hpp"
#include "../Utilities.hpp"
#include "NSBSimulator.hpp"

namespace NSB
{
  namespace DistributedNSB
  {
    using DUNE_NAMESPACES;

    struct NSBStateTimestamp
    {
      NSBState nsb_state;
      double timestamp;
    };

    inline void
    convert(IMC::NSBMsg& src, NSBStateTimestamp& dst) 
    {
      convert(src, dst.nsb_state);
      dst.timestamp = src.getTimeStamp();
    }

    inline void
    convert(const IMC::NSBMsg* src, NSBStateTimestamp& dst) 
    {
      convert(src, dst.nsb_state);
      dst.timestamp = src->getTimeStamp();
    }

    inline void
    convert(NSBStateTimestamp& src, IMC::NSBMsg& dst)
    {
      convert(src.nsb_state, dst);
    }

    inline void
    convert(NSBStateTimestamp& src, IMC::NSBState& dst)
    {
      convert(src.nsb_state, dst);
    }

    struct ConsensusParameters
    {
      float k_position, k_param;
      float r_ss, k_r;
      float T_min, T_max;
      float a_position, a_param;
      int trans_limit;
      double delta_t;
      float comm_period;
      unsigned int buffer_size, decimation;
    };

    inline void
    nsb_consensus_update(NSBStateTimestamp& s_recv, NSBStateTimestamp& s_current, CircularBuffer<NSBStateTimestamp>& s_log, 
                          LineOfSight& los, GeometricPath& path, ConsensusParameters& params)
    {
      // Sanity check
      if (s_recv.timestamp > s_current.timestamp)
        throw std::runtime_error("Timestamp of the recieved state is larger than the timestamp of the current state.");

      // Find the next closest NSB state in the log
      unsigned int i = s_log.getSize();
      while (i > 0)
      {
        if (s_log(i-1).timestamp < s_recv.timestamp)
          break;
        --i;
      }
      NSBStateTimestamp s_closest;
      if (i < s_log.getSize())        
        s_closest = s_log(i);
      else
        s_closest = s_current;

      // Update the received NSB message
      int N_steps = (int) std::ceil((s_closest.timestamp - s_recv.timestamp) / params.delta_t);
      double delta_t = (s_closest.timestamp - s_recv.timestamp) / N_steps;
      nsb_simulator_run(los, path, params.r_ss, params.k_r, N_steps, delta_t, s_recv.nsb_state);
      s_recv.timestamp = s_closest.timestamp;

      // Perform consensus
      /* Update communications period */
      float consensus_error = std::sqrt(square(params.a_position*(s_recv.nsb_state.x - s_closest.nsb_state.x))
                                    + square(params.a_position*(s_recv.nsb_state.y - s_closest.nsb_state.y))
                                    + square(params.a_position*(s_recv.nsb_state.z - s_closest.nsb_state.z))
                                    + square(params.a_param*(s_recv.nsb_state.path_param - s_closest.nsb_state.path_param)));
      params.comm_period = params.T_min + (params.T_max - params.T_min) * std::exp(-consensus_error);
      /* Consensus algorithm */
      s_closest.nsb_state.path_param = params.k_param * s_recv.nsb_state.path_param + (1. - params.k_param) * s_closest.nsb_state.path_param;
      s_closest.nsb_state.x = params.k_position * s_recv.nsb_state.x + (1. - params.k_position) * s_closest.nsb_state.x;
      s_closest.nsb_state.y = params.k_position * s_recv.nsb_state.y + (1. - params.k_position) * s_closest.nsb_state.y;
      s_closest.nsb_state.z = params.k_position * s_recv.nsb_state.z + (1. - params.k_position) * s_closest.nsb_state.z;
      if (s_recv.nsb_state.r_f > s_closest.nsb_state.r_f)
        s_closest.nsb_state.r_f = s_recv.nsb_state.r_f;
      /* Write the results back to the log */
      if (i < s_log.getSize())
        s_log(i).nsb_state = s_closest.nsb_state;
      else
        s_current.nsb_state = s_closest.nsb_state;

      // Update the log
      if (i < s_log.getSize())
      {
        while (++i < s_log.getSize())
        {
          N_steps = (int) std::ceil((s_log(i).timestamp - s_log(i-1).timestamp) / params.delta_t);
          delta_t = (s_log(i).timestamp - s_log(i-1).timestamp) / N_steps;
          s_log(i).nsb_state = s_log(i-1).nsb_state;
          nsb_simulator_run(los, path, params.r_ss, params.k_r, N_steps, delta_t, s_log(i).nsb_state);
        }
        --i;
        s_current.nsb_state = s_log(i).nsb_state;
        if (s_current.timestamp > s_log(i).timestamp)
        {
          N_steps = (int) std::ceil((s_current.timestamp - s_log(i).timestamp) / params.delta_t);
          delta_t = (s_current.timestamp - s_log(i).timestamp) / N_steps;
          nsb_simulator_run(los, path, params.r_ss, params.k_r, N_steps, delta_t, s_current.nsb_state);
        }
      }
    }
  }
}

#endif
