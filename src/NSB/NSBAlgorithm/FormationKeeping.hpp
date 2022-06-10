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

#ifndef FORMATION_KEEPING_HPP_
#define FORMATION_KEEPING_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utilities.hpp"
#include "GeometricPath.hpp"

namespace NSB
{
  //! Formation keeping task.
  //!
  //! Utilities for calculating desired formation keeping velocitites.
  //! @author Josef Matous
  namespace NSBAlgorithm
  {
    using DUNE_NAMESPACES;

    class FormationKeeping
    {
      public:

        //! Desired formation shape
        Vector3D m_shape[3];
        //! Formation keeping gain
        double m_gain;

        Vector3D m_output[3];

        //! Initialize with default parameters
        FormationKeeping()
        {
            m_gain = 0.05;

            m_shape[0] = Vector3D(6., 0., 0.);
            m_shape[1] = Vector3D(-3., 15., 0.);
            m_shape[2] = Vector3D(-3., -15., 0.);
        }

        //! Initialize with custom parameters
        FormationKeeping(const Vector3D shape[3], double gain)
        {
            memccpy(m_shape, shape, 3, sizeof(Vector3D));
            m_gain = gain;
        }

        Vector3D*
        getOutput(GeometricPath::PathReference path, 
                    const IMC::GroupEstimatedState* msg,
                    double path_parameter_derivative)
        {
            size_t n = msg->estate_list.size();
            Vector3D barycenter = calculateBarycenter(msg);

            // Path-tangential rotation matrix and its derivative
            double c_theta = std::cos(path.pitch);
            double s_theta = std::sin(path.pitch);
            double c_psi = std::cos(path.yaw);
            double s_psi = std::sin(path.yaw);
            double theta_dot = path.curvature_pitch * path_parameter_derivative;
            double psi_dot = path.curvature_yaw * path_parameter_derivative;

            double R[9] = {c_theta*c_psi, c_theta*s_psi, -s_theta, -s_psi, c_psi, 0., c_psi*s_theta, s_psi*s_theta, c_theta};
            double R_dot[9] = {-c_theta*psi_dot*s_psi - c_psi*s_theta*theta_dot,
                            c_psi*c_theta*psi_dot - s_psi*s_theta*theta_dot,
                            -c_theta*theta_dot,
                            -c_psi*psi_dot, 
                            -psi_dot*s_psi, 
                            0.,
                            c_psi*c_theta*theta_dot - psi_dot*s_psi*s_theta,
                            c_psi*psi_dot*s_theta + c_theta*s_psi*theta_dot,
                            -s_theta*theta_dot};
            // Get desired (relative) formation shape and its derivative, and calculate the path following velocities
            Vector3D rotated_shape[3];
            Vector3D rotated_shape_derivative[3];
            IMC::MessageList<IMC::EstimatedState>::const_iterator itr = msg->estate_list.begin();
            for (size_t i = 0; i < n; i++)
            {
            matrixTimesVector3D(&rotated_shape[i], R, m_shape[i]);
            matrixTimesVector3D(&rotated_shape_derivative[i], R_dot, m_shape[i]);

            IMC::EstimatedState* estate = *itr;
            m_output[i].x = rotated_shape_derivative[i].x + m_gain*(rotated_shape[i].x - estate->x + barycenter.x);
            m_output[i].y = rotated_shape_derivative[i].y + m_gain*(rotated_shape[i].y - estate->y + barycenter.y);
            m_output[i].z = rotated_shape_derivative[i].z + m_gain*(rotated_shape[i].z - estate->z + barycenter.z);

            ++itr;
            }

            return m_output;        
        }

      private:
        inline void 
        matrixTimesVector3D(Vector3D* dst, double matrix[9], Vector3D vector)
        {
          dst->x = matrix[0]*vector.x + matrix[3]*vector.y + matrix[6]*vector.z;
          dst->y = matrix[1]*vector.x + matrix[4]*vector.y + matrix[7]*vector.z;
          dst->z = matrix[2]*vector.x + matrix[5]*vector.y + matrix[8]*vector.z;
        }
    };
  }
}

#endif
