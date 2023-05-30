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
    update_comm_period(const StateEstimate& own_state, const StateEstimate& recv_state, const EstimatorParameters& param, double& period, double& period_uw)
    {
      double e = param.a_s * square(own_state.path_param - recv_state.path_param)
              + param.a_p * square(own_state.p_b.x - recv_state.p_b.x)
              + param.a_p * square(own_state.p_b.y - recv_state.p_b.y)
              + param.a_p * square(own_state.p_b.z - recv_state.p_b.z);
      e = std::exp(-std::sqrt(e));
      period = param.T_min + (param.T_max - param.T_min) * e;
      period_uw = param.T_min_uw + (param.T_max - param.T_min_uw) * e;
    }

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

    inline void
    self_update(StateEstimate& state, const EstimatorParameters& param, const IMC::EstimatedState* estate, const Vector3D& p_hat)
    {
      /* Error between expected and actual position */
      Vector3D delta_p(estate->x - p_hat.x, estate->y - p_hat.y, estate->depth - p_hat.z);
      /* Remove the component that is tangential to the path */
      GeometricPath::PathReference path_ref;
      param.path->getPathReference(state.path_param, path_ref);
      double c_theta = std::cos(path_ref.theta);
      double s_theta = std::sin(path_ref.theta);
      double c_psi = std::cos(path_ref.psi);
      double s_psi = std::sin(path_ref.psi);
      Vector3D path_tangent(c_theta*c_psi, c_theta*s_psi, -s_theta);
      double k = -dot(delta_p, path_tangent);
      delta_p.x += k*path_tangent.x;
      delta_p.y += k*path_tangent.y;
      delta_p.z += k*path_tangent.z;
      // Mixing
      state.p_b.x += param.k_self * delta_p.x;
      state.p_b.y += param.k_self * delta_p.y;
      state.p_b.z += param.k_self * delta_p.z;
    }

    inline void
    initial_guess(StateEstimate& state, const EstimatorParameters& param, const IMC::EstimatedState* estate)
    {
      state.path_param = 0.;
      state.P = param.P0;

      GeometricPath::PathReference path_ref;
      param.path->getPathReference(state.path_param, path_ref);
      Vector3D formation_offset;
      mult_path_rotation_matrix(path_ref, param.p_form, formation_offset);
      state.p_b.x = estate->x - formation_offset.x;
      state.p_b.y = estate->y - formation_offset.y;
      state.p_b.z = estate->depth - formation_offset.z;
    }
  }
}

#endif
