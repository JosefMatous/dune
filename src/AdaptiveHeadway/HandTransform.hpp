#ifndef ADAPTIVEHEADWAY_HANDTRANSFORM_HPP_
#define ADAPTIVEHEADWAY_HANDTRANSFORM_HPP_

#include <DUNE/DUNE.hpp>
#include "Utility.hpp"

namespace AdaptiveHeadway
{
  using DUNE_NAMESPACES;

  void
  hand_transform(Vector3D<double> &x_hand, Vector3D<double> &v_hand, const IMC::EstimatedState &state, const Vector3D<double> &x_ref, const Vector3D<double> &v_ref, double k_e, double e0)
  {
    // Get vehicle's orientation
    float R[9];
    rotation_matrix(R, state);
    Vector3D<float> gamma; // Forward direction
    gamma.x = R[0];
    gamma.y = R[1];
    gamma.z = R[2];

    // Hand position
    Vector3D<double> x_err;
    x_err.x = state.x - x_ref.x;
    x_err.y = state.y - x_ref.y;
    x_err.z = state.depth - x_ref.z;

    double k_e2 = std::pow(k_e, 2.0); // k_e^2
    double e = std::sqrt(std::pow(e0, 2.0) + k_e2*dot(x_err, x_err)); // hand length

    x_hand.x = state.x + gamma.x*e;
    x_hand.y = state.y + gamma.y*e;
    x_hand.z = state.depth + gamma.z*e;

    // Hand velocity
    Vector3D<double> x_err_dot, omega_e1, gamma_dot;
    x_err_dot.x = state.vx - v_ref.x;
    x_err_dot.y = state.vy - v_ref.y;
    x_err_dot.z = state.vz - v_ref.z;

    omega_e1.x = 0.0;
    omega_e1.y = state.r;
    omega_e1.z = -state.q;
    timesR(gamma_dot, R, omega_e1); // gamma_dot = R * (omega x [1;0;0])

    double e_dot = k_e2*dot(x_err_dot, x_err) / e;

    v_hand.x = state.vx + gamma_dot.x*e + gamma.x*e_dot;
    v_hand.y = state.vy + gamma_dot.y*e + gamma.y*e_dot;
    v_hand.z = state.vz + gamma_dot.z*e + gamma.z*e_dot;
  }
}

#endif
