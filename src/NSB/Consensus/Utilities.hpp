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
      double k_self;
      int n_self;
      double a_s;
      double a_p;
      double T_min, T_min_uw;
      double T_max;
      double Q;
      Vector3D p_form;
      double P0;
    };

    inline void
    convert(const IMC::NSBMsg* src, StateEstimate& dest, double lat0, double lon0)
    {
      WGS84::displacement(lat0, lon0, 0., src->lat, src->lon, 0., &dest.p_b.x, &dest.p_b.y);  
      dest.p_b.z = src->z;
      dest.path_param = src->path_param;
      dest.r_f = src->r_f;
      dest.P = src->p;
    }

    inline void
    convert(const IMC::NSBMsg& src, StateEstimate& dest, double lat0, double lon0)
    {
      WGS84::displacement(lat0, lon0, 0., src.lat, src.lon, 0., &dest.p_b.x, &dest.p_b.y);  
      dest.p_b.z = src.z;
      dest.path_param = src.path_param;
      dest.r_f = src.r_f;
      dest.P = src.p;
    }

    inline void
    convert(const StateEstimate& src, IMC::NSBMsg& dest, double lat0, double lon0)
    {
      dest.lat = lat0;
      dest.lon = lon0;
      WGS84::displace(src.p_b.x, src.p_b.y, &dest.lat, &dest.lon);
      dest.z = src.p_b.z;
      dest.path_param = src.path_param;
      dest.r_f = src.r_f;
      dest.p = src.P;
    }
       
    inline void
    convert(const StateEstimate& src, IMC::NSBState& dest)
    {
      dest.x = src.p_b.x;
      dest.y = src.p_b.y;
      dest.z = src.p_b.z;
      dest.path_param = src.path_param;
      dest.r_f = src.r_f;
      dest.p = src.P;
    }

    //! Mutltiplies a given vector by a path rotation matrix
    inline void
    mult_path_rotation_matrix(const GeometricPath::PathReference& path_ref, const Vector3D& x, Vector3D& result)
    {
      double c_theta = std::cos(path_ref.theta);
      double s_theta = std::sin(path_ref.theta);
      double c_psi = std::cos(path_ref.psi);
      double s_psi = std::sin(path_ref.psi);

      /*double R[3][3] = {{c_psi*c_theta, -s_psi, c_psi*s_theta},
                        {c_theta*s_psi,  c_psi, s_psi*s_theta},
                        {     -s_theta,      0,       c_theta}};*/

      // Calculate the desired values of sigma
      result.x = c_psi*c_theta*x.x - s_psi*x.y + c_psi*s_theta*x.z;
      result.y = s_psi*c_theta*x.x + c_psi*x.y + s_psi*s_theta*x.z;
      result.z = -s_theta*x.x + c_theta*x.z;
    }
  }
}

#endif
