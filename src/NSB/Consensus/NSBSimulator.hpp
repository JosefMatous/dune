//***************************************************************************
// Author: Josef Matous                                                     *
//***************************************************************************

#ifndef NSB_CONSENSUS_NSBSIMULATOR_HPP
#define NSB_CONSENSUS_NSBSIMULATOR_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "../GeometricPath.hpp"
#include "../LineOfSight.hpp"
#include "../Utilities.hpp"
#include "../ObstacleAvoidance.hpp"
#include "../ObstacleEstimator.hpp"
#include "Utilities.hpp"

namespace NSB
{
  namespace Consensus
  {
    using DUNE_NAMESPACES;
    
    //! One step of forward Euler integration.
    inline void
    nsb_simulator_step(EstimatorParameters& params, StateEstimate& nsb_state)
    {
      GeometricPath::PathReference ref;
      params.path->getPathReference(nsb_state.path_param, ref);
      Vector3D err;
      params.path->getPathFollowingError(ref, nsb_state.p_b.x, nsb_state.p_b.y, nsb_state.p_b.z, err);
      LineOfSight::LineOfSightOutput out;
      params.los->step(ref, err, out);

      // Euler integration
      nsb_state.p_b.x += out.velocity.x * params.delta_t;
      nsb_state.p_b.y += out.velocity.y * params.delta_t;
      nsb_state.p_b.z += out.velocity.z * params.delta_t;
      nsb_state.path_param += out.path_parameter_derivative * params.delta_t;
      nsb_state.r_f += params.k_r_f * (params.r_f_steady_state - nsb_state.r_f) * params.delta_t;
      nsb_state.P += params.Q * params.delta_t;
    } 

    inline void
    nsb_simulator_step(EstimatorParameters& params, std::map<uint16_t, ObstacleState>& obs, StateEstimate& nsb_state)
    {
      GeometricPath::PathPoint point;
      GeometricPath::PathReference ref;
      params.path->evaluatePathFunction(nsb_state.path_param, point);
      params.path->getPathReference(point, ref);
      Vector3D err;
      params.path->getPathFollowingError(ref, nsb_state.p_b.x, nsb_state.p_b.y, nsb_state.p_b.z, err);
      LineOfSight::LineOfSightOutput out;
      params.los->step(ref, err, out);
      params.oa->step(nsb_state.p_b.x, nsb_state.p_b.y, obs, nsb_state.r_f, point, out);

      // Euler integration
      nsb_state.p_b.x += out.velocity.x * params.delta_t;
      nsb_state.p_b.y += out.velocity.y * params.delta_t;
      nsb_state.p_b.z += out.velocity.z * params.delta_t;
      nsb_state.path_param += out.path_parameter_derivative * params.delta_t;
      nsb_state.r_f += params.k_r_f * (params.r_f_steady_state - nsb_state.r_f) * params.delta_t;
      nsb_state.P += params.Q * params.delta_t;
    } 

    //! Calculates the number of steps and the largest-possible step size.
    inline void
    get_step_size(double t_start, double t_end, double delta_t_max, double& step_size, int& n_steps)
    {
      double T = t_end - t_start;
      n_steps = (int) std::ceil(T / delta_t_max);
      step_size = T / n_steps;
    }

    //! Updates the given NSB state. Automatically chooses the number of steps and step size based on `delta_t_max`.
    //! See also `nsb_simulator_step`.
    inline void
    nsb_simulator_run(EstimatorParameters& params, StateEstimate& nsb_state, double t_start, double t_end, double delta_t_max)
    {
      int N_steps;
      get_step_size(t_start, t_end, delta_t_max, params.delta_t, N_steps);
      for (int i = 0; i < N_steps; i++)
      {
        nsb_simulator_step(params, nsb_state);
      }      
    }

    void
    nsb_simulator_run(EstimatorParameters& params, ObstacleEstimator& obs_est, StateEstimate& nsb_state, double t_start, double t_end, double delta_t_max)
    {
      int N_steps;
      get_step_size(t_start, t_end, delta_t_max, params.delta_t, N_steps);
      double time = t_start;
      std::map<uint16_t, ObstacleState> obs;
      for (int i = 0; i < N_steps; i++)
      {
        obs_est.get_obstacle_state(time, obs);
        nsb_simulator_step(params, obs, nsb_state);
        time += params.delta_t;
      }       
    }
  }
}

#endif
