//***************************************************************************
// Author: Josef Matous                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "../GeometricPath.hpp"
#include "../LineOfSight.hpp"
#include "../Utilities.hpp"

namespace NSB
{
  namespace Consensus
  {
    using DUNE_NAMESPACES;

    struct NSBState
    {
      float path_param, x, y, z, r_f;
    };
    
    /* One step of forward Euler */
    inline void
    nsb_simulator_step(LineOfSight& los, GeometricPath& path, float r_f_steady_state, float k_r_f, double delta_t, NSBState& nsb_state)
    {
      GeometricPath::PathReference path_ref;
      path.getPathReference(nsb_state.path_param, path_ref);

      Vector3D path_err;
      path.getPathFollowingError(path_ref, nsb_state.x, nsb_state.y, nsb_state.z, path_err);

      LineOfSight::LineOfSightOutput out;
      los.step(path_ref, path_err, out);

      // Euler integration
      nsb_state.x += out.velocity.x * delta_t;
      nsb_state.y += out.velocity.y * delta_t;
      nsb_state.z += out.velocity.z * delta_t;
      nsb_state.path_param += out.path_parameter_derivative * delta_t;
      nsb_state.r_f += k_r_f * (r_f_steady_state - nsb_state.r_f) * delta_t;
    } 
  }
}
