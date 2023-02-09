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
#include "../ObstacleAvoidance.hpp"
#include "../ObstacleEstimator.hpp"
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
    convert(const IMC::NSBMsg& src, NSBStateTimestamp& dst) 
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
      double delay, packet_loss;
    };

    //! Returns the index of the first element in `log` whose timestamp is larger than the timstamp of `x`.
    //! Returns the size of the log if no such value exists.
    unsigned int
    get_closest_index(CircularBuffer<NSBStateTimestamp>& log, NSBStateTimestamp& x)
    {
      unsigned int i = log.getSize();
      while (i > 1)
      {
        if (log(i-1).timestamp < x.timestamp)
          return i;
        --i;
      }
      return 0;
    }

    inline void
    consensus_algorithm(ConsensusParameters& params, NSBStateTimestamp& own_state, NSBStateTimestamp& received)
    {
      /* Update communications period */
      float consensus_error = std::sqrt(square(params.a_position*(received.nsb_state.x - own_state.nsb_state.x))
                                    + square(params.a_position*(received.nsb_state.y - own_state.nsb_state.y))
                                    + square(params.a_position*(received.nsb_state.z - own_state.nsb_state.z))
                                    + square(params.a_param*(received.nsb_state.path_param - own_state.nsb_state.path_param)));
      params.comm_period = params.T_min + (params.T_max - params.T_min) * std::exp(-consensus_error);
      /* Consensus algorithm */
      own_state.nsb_state.path_param = params.k_param * received.nsb_state.path_param + (1. - params.k_param) * own_state.nsb_state.path_param;
      own_state.nsb_state.x = params.k_position * received.nsb_state.x + (1. - params.k_position) * own_state.nsb_state.x;
      own_state.nsb_state.y = params.k_position * received.nsb_state.y + (1. - params.k_position) * own_state.nsb_state.y;
      own_state.nsb_state.z = params.k_position * received.nsb_state.z + (1. - params.k_position) * own_state.nsb_state.z;
      if (received.nsb_state.r_f > own_state.nsb_state.r_f)
        own_state.nsb_state.r_f = received.nsb_state.r_f;
    }

    inline void
    nsb_consensus_update(NSBStateTimestamp& s_recv, NSBStateTimestamp& s_current, CircularBuffer<NSBStateTimestamp>& s_log, 
                          LineOfSight& los, GeometricPath& path, ConsensusParameters& params)
    {
      // Check it there is a need to forward-estimate
      bool do_simulations = (s_recv.timestamp < s_current.timestamp);
      unsigned int i;
      NSBStateTimestamp s_closest;

      if (do_simulations)
      {
        // Find the next closest NSB state in the log
        i = get_closest_index(s_log, s_recv);
        if (i < s_log.getSize())        
          s_closest = s_log(i);
        else
          s_closest = s_current;

        // Update the received NSB message
        int N_steps = (int) std::ceil((s_closest.timestamp - s_recv.timestamp) / params.delta_t);
        double delta_t = (s_closest.timestamp - s_recv.timestamp) / N_steps;
        nsb_simulator_run(los, path, params.r_ss, params.k_r, N_steps, delta_t, s_recv.nsb_state);
        s_recv.timestamp = s_closest.timestamp;
      }
      else
      {
        s_closest = s_current;
      }

      // Perform consensus
      consensus_algorithm(params, s_closest, s_recv);
      /* Write the results back to the log */
      if (do_simulations && i < s_log.getSize())
        s_log(i).nsb_state = s_closest.nsb_state;
      else
        s_current.nsb_state = s_closest.nsb_state;

      // Update the log
      if (do_simulations && i < s_log.getSize())
      {
        while (++i < s_log.getSize())
        {
          int N_steps = (int) std::ceil((s_log(i).timestamp - s_log(i-1).timestamp) / params.delta_t);
          double delta_t = (s_log(i).timestamp - s_log(i-1).timestamp) / N_steps;
          s_log(i).nsb_state = s_log(i-1).nsb_state;
          nsb_simulator_run(los, path, params.r_ss, params.k_r, N_steps, delta_t, s_log(i).nsb_state);
        }
        --i;
        s_current.nsb_state = s_log(i).nsb_state;
        if (s_current.timestamp > s_log(i).timestamp)
        {
          int N_steps = (int) std::ceil((s_current.timestamp - s_log(i).timestamp) / params.delta_t);
          double delta_t = (s_current.timestamp - s_log(i).timestamp) / N_steps;
          nsb_simulator_run(los, path, params.r_ss, params.k_r, N_steps, delta_t, s_current.nsb_state);
        }
      }
    }

    inline void
    nsb_consensus_update(NSBStateTimestamp& s_recv, NSBStateTimestamp& s_current, CircularBuffer<NSBStateTimestamp>& s_log, 
                          ObstacleAvoidance& oa, ObstacleEstimator& estimator,  
                          LineOfSight& los, GeometricPath& path, ConsensusParameters& params)
    {
      // Check it there is a need to forward-estimate
      bool do_simulations = (s_recv.timestamp < s_current.timestamp);
      unsigned int i;
      NSBStateTimestamp s_closest;

      if (do_simulations)
      {
        // Find the next closest NSB state in the log
        i = get_closest_index(s_log, s_recv);
        if (i < s_log.getSize())        
          s_closest = s_log(i);
        else
          s_closest = s_current;

        // Update the received NSB message
        int N_steps = (int) std::ceil((s_closest.timestamp - s_recv.timestamp) / params.delta_t);
        double delta_t = (s_closest.timestamp - s_recv.timestamp) / N_steps;
        nsb_simulator_run(los, path, oa, estimator, s_recv.timestamp, params.r_ss, params.k_r, N_steps, delta_t, s_recv.nsb_state);
        s_recv.timestamp = s_closest.timestamp;
      }
      else
      {
        s_closest = s_current;
      }

      // Perform consensus
      consensus_algorithm(params, s_closest, s_recv);
      /* Write the results back to the log */
      if (do_simulations && i < s_log.getSize())
        s_log(i).nsb_state = s_closest.nsb_state;
      else
        s_current.nsb_state = s_closest.nsb_state;

      // Update the log
      if (do_simulations && i < s_log.getSize())
      {
        while (++i < s_log.getSize())
        {
          int N_steps = (int) std::ceil((s_log(i).timestamp - s_log(i-1).timestamp) / params.delta_t);
          double delta_t = (s_log(i).timestamp - s_log(i-1).timestamp) / N_steps;
          s_log(i).nsb_state = s_log(i-1).nsb_state;
          nsb_simulator_run(los, path, oa, estimator, s_log(i-1).timestamp, params.r_ss, params.k_r, N_steps, delta_t, s_log(i).nsb_state);
        }
        --i;
        s_current.nsb_state = s_log(i).nsb_state;
        if (s_current.timestamp > s_log(i).timestamp)
        {
          int N_steps = (int) std::ceil((s_current.timestamp - s_log(i).timestamp) / params.delta_t);
          double delta_t = (s_current.timestamp - s_log(i).timestamp) / N_steps;
          nsb_simulator_run(los, path, oa, estimator, s_log(i).timestamp, params.r_ss, params.k_r, N_steps, delta_t, s_current.nsb_state);
        }
      }
    }
  }
}

#endif
