//***************************************************************************
// Author: Josef Matous                                                     *
//***************************************************************************

#ifndef NSB_DISTRIBUTEDNSB_NSBSIMULATOR_HPP
#define NSB_DISTRIBUTEDNSB_NSBSIMULATOR_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "../GeometricPath.hpp"
#include "../LineOfSight.hpp"
#include "../Utilities.hpp"

namespace NSB
{
  namespace DistributedNSB
  {
    using DUNE_NAMESPACES;

    struct NSBState
    {
      float path_param, x, y, z, r_f;
    };

    inline void
    convert(NSBState& src, IMC::NSBMsg& dst) 
    {
      dst.x = src.x;
      dst.y = src.y;
      dst.z = src.z;
      dst.path_param = src.path_param;
      dst.r_f = src.r_f;
    }

    inline void
    convert(IMC::NSBMsg& src, NSBState& dst) 
    {
      dst.x = src.x;
      dst.y = src.y;
      dst.z = src.z;
      dst.path_param = src.path_param;
      dst.r_f = src.r_f;
    }

    inline void
    convert(const IMC::NSBMsg* src, NSBState& dst) 
    {
      dst.x = src->x;
      dst.y = src->y;
      dst.z = src->z;
      dst.path_param = src->path_param;
      dst.r_f = src->r_f;
    }

    inline void
    convert(NSBState& src, IMC::NSBState& dst)
    {
      dst.x = src.x;
      dst.y = src.y;
      dst.z = src.z;
      dst.path_param = src.path_param;
      dst.r_f = src.r_f;
    }
    
    //! One step of forward Euler integration.
    //! @param out Output of the line-of-sight guidance algorithm. Used as a reference in the integration scheme.
    //! @param r_f_steady_state Steady-state formation radius. The formation radius is assumed to evolve according to `dr_f/dt = k_r_f * (r_f_steady_state - r_f)`
    //! @param k_r_f Formation radius time constant. See `r_f_steady_state`
    //! @param delta_t Step size (in seconds)
    //! @param nsb_state Initial condition/output.
    inline void
    nsb_simulator_step(LineOfSight::LineOfSightOutput out, float r_f_steady_state, float k_r_f, double delta_t, NSBState& nsb_state)
    {
      // Euler integration
      nsb_state.x += out.velocity.x * delta_t;
      nsb_state.y += out.velocity.y * delta_t;
      nsb_state.z += out.velocity.z * delta_t;
      nsb_state.path_param += out.path_parameter_derivative * delta_t;
      nsb_state.r_f += k_r_f * (r_f_steady_state - nsb_state.r_f) * delta_t;
    } 

    inline void
    nsb_simulator_step(LineOfSight::LineOfSightOutput out, float r_f_steady_state, float k_r_f, double delta_t, IMC::NSBState& nsb_state)
    {
      // Euler integration
      nsb_state.x += out.velocity.x * delta_t;
      nsb_state.y += out.velocity.y * delta_t;
      nsb_state.z += out.velocity.z * delta_t;
      nsb_state.path_param += out.path_parameter_derivative * delta_t;
      nsb_state.r_f += k_r_f * (r_f_steady_state - nsb_state.r_f) * delta_t;
    }

    //! Updates the given NSB state by performing N integration steps with step size delta_t.
    //! See also `nsb_simulator_step`.
    inline void
    nsb_simulator_run(LineOfSight& los, GeometricPath& path, float r_f_steady_state, float k_r_f, int N_steps, double delta_t, NSBState& nsb_state)
    {
      LineOfSight::LineOfSightOutput out;
      GeometricPath::PathReference path_ref;
      Vector3D path_err;
      for (int i = 0; i < N_steps; i++)
      {
        path.getPathReference(nsb_state.path_param, path_ref);
        path.getPathFollowingError(path_ref, nsb_state.x, nsb_state.y, nsb_state.z, path_err);
        los.step(path_ref, path_err, out);
        nsb_simulator_step(out, r_f_steady_state, k_r_f, delta_t, nsb_state);
      }      
    }
  }
}

#endif
