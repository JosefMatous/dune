//***************************************************************************
// Author: Josef Matous                                                     *
//***************************************************************************

#ifndef NSB_CONSENSUS_UTILITIES_HPP_
#define NSB_CONSENSUS_UTILITIES_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "../Utilities.hpp"
#include "../LineOfSight.hpp"
#include "../GeometricPath.hpp"

namespace NSB
{
  namespace Consensus
  {
    using DUNE_NAMESPACES;

    struct StateEstimate
    {
      //! Barycenter estimate
      Vector3D p_b;
      //! Path parameter
      double path_param;
      //! Formation radius
      double r_f;
      //! Estimate covariance
      double P;
    }; 

    struct EstimatorParameters
    {
      LineOfSight* los;
      GeometricPath* path;
      ObstacleAvoidance* oa;
      double r_f_steady_state;
      double k_r_f;
      double delta_t;
      double covariance_threshold;
      double Q;
    };

    inline void
    convert(const IMC::NSBMsg* src, StateEstimate& dest)
    {
      dest.p_b.x = src->x;
      dest.p_b.y = src->y;
      dest.p_b.z = src->z;
      dest.path_param = src->path_param;
      dest.r_f = src->r_f;
      dest.P = src->p;
    }

    inline void
    convert(const IMC::NSBMsg& src, StateEstimate& dest)
    {
      dest.p_b.x = src.x;
      dest.p_b.y = src.y;
      dest.p_b.z = src.z;
      dest.path_param = src.path_param;
      dest.r_f = src.r_f;
      dest.P = src.p;
    }

    inline void
    convert(StateEstimate& src, IMC::NSBMsg& dest)
    {
      dest.x = src.p_b.x;
      dest.y = src.p_b.y;
      dest.z = src.p_b.z;
      dest.path_param = src.path_param;
      dest.r_f = src.r_f;
      dest.p = src.P;
    }
       
    inline void
    convert(StateEstimate& src, IMC::NSBState& dest)
    {
      dest.x = src.p_b.x;
      dest.y = src.p_b.y;
      dest.z = src.p_b.z;
      dest.path_param = src.path_param;
      dest.r_f = src.r_f;
      dest.p = src.P;
    }
  }
}

#endif
