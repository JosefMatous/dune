//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Josef Matous                                                     *
//***************************************************************************

#ifndef NSB_GEOMETRIC_PATH_HPP_
#define NSB_GEOMETRIC_PATH_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utilities.hpp"

namespace NSB
{
    using DUNE_NAMESPACES;

    class GeometricPath {
      public:
        //! Path function and its first and seconds partial derivatives, evaluated at a given point
        struct PathPoint{
          Vector3D p, p_diff, p_ddiff;
        };

        struct PathReference {
          double x, y, z;
          double theta, psi;
          double gradient;
          double kappa, iota;
        };

        inline virtual void
        evaluatePathFunction(double path_parameter, PathPoint& output) = 0;

        inline void
        getPathReference(double path_parameter, PathReference& ref)
        {
          PathPoint point;
          evaluatePathFunction(path_parameter, point);
          getPathReference(point, ref);
        }

        inline static void
        getPathReference(const PathPoint& point, PathReference& ref)
        {
          ref.x = point.p.x;
          ref.y = point.p.y;
          ref.z = point.p.z;

          // Path-tangential angles
          ref.gradient = norm(point.p_diff);
          ref.theta = -std::asin(point.p_diff.z / ref.gradient);
          ref.psi = std::atan2(point.p_diff.y, point.p_diff.x);

          // Curvature == partial of path-tangential angles
          double gradient_diff = dot(point.p_diff, point.p_ddiff) / ref.gradient;
          double denominator = 1. / std::sqrt(square(ref.gradient) - square(point.p_diff.z));
          ref.kappa = -point.p_ddiff.z*denominator + gradient_diff*denominator/ref.gradient; // diff(ref.theta)

          denominator = 1. / (square(point.p_diff.x) + square(point.p_diff.y));
          ref.iota = (point.p_diff.x*point.p_ddiff.y - point.p_diff.y*point.p_ddiff.x) * denominator; // diff(ref.psi)
        }

        inline static void
        getPathFollowingError(const PathReference& ref, double x_vehicle, double y_vehicle, double z_vehicle, Vector3D& path_err)
        {
          // Get displacement in NED frame
          double x_ned, y_ned, z_ned;
          x_ned = x_vehicle - ref.x;
          y_ned = y_vehicle - ref.y;
          z_ned = z_vehicle - ref.z;
          
          // Transform displacement to path-tangential frame
          double c_theta = std::cos(ref.theta);
          double s_theta = std::sin(ref.theta);
          double c_psi = std::cos(ref.psi);
          double s_psi = std::sin(ref.psi);

          path_err.x = x_ned*c_psi*c_theta - z_ned*s_theta + y_ned*c_theta*s_psi;
          path_err.y = y_ned*c_psi - x_ned*s_psi;
          path_err.z = z_ned*c_theta + x_ned*c_psi*s_theta + y_ned*s_psi*s_theta;
        }

        inline static void
        getPathFollowingError(const PathReference& ref, const IMC::EstimatedState* estate, Vector3D& path_err)
        {
          getPathFollowingError(ref, estate->x, estate->y, estate->depth, path_err);
        }
    };

    class Ellipse: public GeometricPath {
      public:
        double m_x_center, m_y_center, m_z_center;
        double m_a, m_b, m_c;
        double m_psi;
        double m_z_freq;
        bool m_clockwise;
        double m_phi0, m_z_phi0;

        Ellipse(double x_center, double y_center, double z_center, 
          double a, double b, double c, double psi, double z_freq, bool clockwise, double phi0, double z_phi0) 
        {
          m_x_center = x_center;
          m_y_center = y_center;
          m_z_center = z_center;
          m_a = a;
          m_b = b;
          m_c = c;
          m_psi = psi;
          m_z_freq = z_freq;
          m_clockwise = clockwise;
          m_phi0 = phi0;
          m_z_phi0 = z_phi0;
        }

        Ellipse()
        {
          m_x_center = 0;
          m_y_center = 0;
          m_z_center = 0.;
          m_a = 50.;
          m_b = 30.;
          m_c = 0.;
          m_psi = 0.;
          m_z_freq = 0.;
          m_clockwise = true;
          m_phi0 = M_PI_2;
          m_z_phi0 = 0.;
        }

        inline void
        evaluatePathFunction(double s, PathPoint& p)
        {
          // Calculate path argument
          double direction = m_clockwise ? 1. : -1;
          double arg = m_phi0 + direction*s;
          double z_arg = m_z_phi0 + s*m_z_freq;

          // Get nominal position
          double c_arg = std::cos(arg);
          double s_arg = std::sin(arg);
          double x0 = m_a*c_arg;
          double y0 = m_b*s_arg;
          double z0 = m_c*std::sin(z_arg);

          // Rotate by ellipse orientation
          double c_psi = std::cos(m_psi);
          double s_psi = std::sin(m_psi);
          p.p.x = m_x_center + x0*c_psi - y0*s_psi;
          p.p.y = m_y_center + y0*c_psi + x0*s_psi;
          double z_ned = m_z_center + z0;    

          // Calculate derivatives in x and y
          double x0_dot = -direction*m_a*s_arg;
          double y0_dot =  direction*m_b*c_arg;
          p.p_diff.x = x0_dot*c_psi - y0_dot*s_psi;
          p.p_diff.y = y0_dot*c_psi + x0_dot*s_psi;

          //double x0_ddot = -x0;
          //double y0_ddot = -y0;
          p.p_ddiff.x = -x0*c_psi + y0*s_psi;
          p.p_ddiff.y = -y0*c_psi - x0*s_psi;

          // Derivatives in z
          if (z_ned > 0)
          {
            p.p.z = z_ned;
            p.p_diff.z = m_z_freq*m_c*std::cos(z_arg);
            p.p_ddiff.z = -m_z_freq*m_z_freq*m_c*std::sin(z_arg);
          }
          else
          { // saturate to zero if the reference depth is negative
            p.p.z = 0.;
            p.p_diff.z = 0.;
            p.p_ddiff.z = 0.;
          }
        }
    };

    class Waypoints: public GeometricPath
    {
    protected:
      //! Waypoint x-coordinates
      std::vector<double> wp_x;
      //! Waypoint y-coordinates
      std::vector<double> wp_y;
      //! Waypoint z-coordinates
      std::vector<double> wp_z;
      //! Distances between waypoints
      std::vector<double> distance;
      //! Cumulative sum of distances between waypoints
      std::vector<double> distance_cumsum;

      //! Radius of the Dubins segments
      double R_dub;

      struct DubinsSegment
      {
        //! Origin of the circle
        Vector3D p0;
        //! Unit vectors that define the circle
        Vector3D e1, e2;
        //! Angle of the arc
        double alpha;
        //! Length of the Dubins segment
        double L;
      };

      //! List of DubinsSegment that define the arcs between the waypoints
      std::vector<DubinsSegment> segments;
      //! Updates the list of Dubins path segments. Returns true if successful
      void
      updateDubinsSegments(void)
      {
        if (getNumberOfWaypoints() < 3) // There are no circular segments; exit
        {
          segments.clear();
          return;
        }

        segments.resize(getNumberOfWaypoints() - 2);
        for (size_t i = 0; i < segments.size(); i++)
        {
          // Normalized relative vectors between the three waypoints that form the segment
          Vector3D p_21, p_32;
          p_21.x = (wp_x[i+1] - wp_x[i]) / distance[i];
          p_21.y = (wp_y[i+1] - wp_y[i]) / distance[i];
          p_21.z = (wp_z[i+1] - wp_z[i]) / distance[i];
          p_32.x = (wp_x[i+2] - wp_x[i+1]) / distance[i+1];
          p_32.y = (wp_y[i+2] - wp_y[i+1]) / distance[i+1];
          p_32.z = (wp_z[i+2] - wp_z[i+1]) / distance[i+1];

          // Angle of the arc = arccos(dot(p_21, p_32))
          double temp = dot(p_21, p_32);
          segments[i].alpha = std::acos(temp);
          // Length of the Dubins segment = R * tan(alpha / 2)
          segments[i].L = R_dub * std::tan(segments[i].alpha * 0.5);
          // Non-normalized e_1 = p_21 .* dot(p_21, p_32) - p_32
          segments[i].e1.x = p_21.x * temp - p_32.x;
          segments[i].e1.y = p_21.y * temp - p_32.y;
          segments[i].e1.z = p_21.z * temp - p_32.z;
          temp = norm(segments[i].e1);
          segments[i].e1.x /= temp;
          segments[i].e1.y /= temp;
          segments[i].e1.z /= temp;
          // e_2 = p_21
          segments[i].e2.x = p_21.x;
          segments[i].e2.y = p_21.y;
          segments[i].e2.z = p_21.z;
          // Origin of the circle: p0 = waypoint[i+1] - R*e_1 - L*e_2
          segments[i].p0.x = wp_x[i+1] - R_dub*segments[i].e1.x - segments[i].L*segments[i].e2.x;
          segments[i].p0.y = wp_y[i+1] - R_dub*segments[i].e1.y - segments[i].L*segments[i].e2.y;
          segments[i].p0.z = wp_z[i+1] - R_dub*segments[i].e1.z - segments[i].L*segments[i].e2.z;
        }
      }

      void
      evaluateArc(double s_rel, size_t index, PathPoint& p)
      {
        double s_multiplier = segments[index].alpha / (2*segments[index].L);
        double c = std::cos(s_rel * s_multiplier);
        double s = std::sin(s_rel * s_multiplier);
        p.p.x = segments[index].p0.x + R_dub * (segments[index].e1.x*c + segments[index].e2.x*s);
        p.p.y = segments[index].p0.y + R_dub * (segments[index].e1.y*c + segments[index].e2.y*s);
        p.p.z = segments[index].p0.z + R_dub * (segments[index].e1.z*c + segments[index].e2.z*s);
        p.p_diff.x = R_dub * s_multiplier * (-segments[index].e1.x*s + segments[index].e2.x*c);
        p.p_diff.y = R_dub * s_multiplier * (-segments[index].e1.y*s + segments[index].e2.y*c);
        p.p_diff.z = R_dub * s_multiplier * (-segments[index].e1.z*s + segments[index].e2.z*c);
        p.p_ddiff.x = -R_dub * square(s_multiplier) * (segments[index].e1.x*c + segments[index].e2.x*s);
        p.p_ddiff.y = -R_dub * square(s_multiplier) * (segments[index].e1.y*c + segments[index].e2.y*s);
        p.p_ddiff.z = -R_dub * square(s_multiplier) * (segments[index].e1.z*c + segments[index].e2.z*s);
      }
      
    public:
      //! Creates an empty Waypoints class
      Waypoints(void) {}

      //! Initialize with a given set of waypoints
      Waypoints(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& z, double R) 
      { 
        R_dub = R;
        setWaypoints(x, y, z); 
      }

      void
      setDubinsRadius(double R)
      {
        R_dub = R;
        updateDubinsSegments();
      }
      
      bool
      setWaypoints(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& z)
      {
        if (x.size() == 0) // waypoints are empty
        {
          wp_x.clear();
          wp_y.clear();
          wp_z.clear();
          distance_cumsum.clear();
          return true;
        }
        if ((x.size() != y.size()) || (x.size() != z.size())) // Size of x, y and z must match
          return false; 

        // Assign new values
        wp_x = x;
        wp_y = y;
        wp_z = z;

        // Calculate the cumulative sum of distances
        double delta_x, delta_y, delta_z, dist, cumsum(0.);
        size_t N = wp_x.size() - 1;
        distance.clear();
        distance.resize(N);
        distance_cumsum.clear();
        distance_cumsum.resize(N);
        for (size_t i = 0; i < N; i++)
        {
          delta_x = wp_x[i+1] - wp_x[i];
          delta_y = wp_y[i+1] - wp_y[i];
          delta_z = wp_z[i+1] - wp_z[i];
          dist = std::sqrt(square(delta_x) + square(delta_y) + square(delta_z));
          cumsum += dist;

          distance[i] = dist;
          distance_cumsum[i] = cumsum;
        }

        updateDubinsSegments();

        return true;
      }

      double
      getPathLength(void)
      {
        if (distance_cumsum.size() > 0)
          return distance_cumsum[distance_cumsum.size() - 1];
        else
          return 0;
      }

      inline size_t
      getNumberOfWaypoints(void)
      {
        return wp_x.size();
      }

      inline size_t
      findWaypointIndex(double s)
      {
        size_t index;
        if (s >= distance_cumsum[distance_cumsum.size()-1]) // Path parameter out of bounds
        {
          index = distance_cumsum.size() - 1;
        }
        else // Find the closest smallest value in distance_cumsum
        {
          index = 0;
          while ((s >= distance_cumsum[index])) // This loop finds the first index where distance_cumsum is greater than s
          {
            index++;
          }
        }
        return index;
      }
        
      inline void
      evaluatePathFunction(double s, PathPoint& p)
      {
        // Empty waypoint list
        if (distance_cumsum.size() == 0)
          return;

        // Find the waypoint segment
        size_t index = findWaypointIndex(s);

        // Evaluate the path
        double s_rel = s;
        double distance_inverse = std::pow(distance[index], -1.);

        // First, check if we are on the arcs
        if (getNumberOfWaypoints() > 2)
        {
          if (index > 0)
          {
            s_rel -= distance_cumsum[index-1];
            // Arc at the beginning of a segment
            if (s_rel < segments[index-1].L)
            {
              s_rel += segments[index-1].L;
              evaluateArc(s_rel, index-1, p);
              return;
            }
          }
          // Arc at the end of a segment
          if (index < getNumberOfWaypoints() - 2)
          {
            if (s_rel > (distance[index] - segments[index].L))
            {
              s_rel -= (distance[index] - segments[index].L);
              evaluateArc(s_rel, index, p);
              return;
            }
          }
        }

        // If the execution falls through here, we are evaluating the straight-line segment
        s_rel *= distance_inverse;

        // Calculate the path point
        p.p.x = (1 - s_rel) * wp_x[index] + s_rel * wp_x[index + 1];
        p.p.y = (1 - s_rel) * wp_y[index] + s_rel * wp_y[index + 1];
        p.p.z = (1 - s_rel) * wp_z[index] + s_rel * wp_z[index + 1];
        // Calculate the partial derivative
        p.p_diff.x = (wp_x[index + 1] - wp_x[index]) * distance_inverse;
        p.p_diff.y = (wp_y[index + 1] - wp_y[index]) * distance_inverse;
        p.p_diff.z = (wp_z[index + 1] - wp_z[index]) * distance_inverse;
        // The second partial is zero
        p.p_ddiff.x = 0.;
        p.p_ddiff.y = 0.;
        p.p_ddiff.z = 0.;
      }
    };
}

#endif
