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

#ifndef NSB_PARAMETERS_HPP_
#define NSB_PARAMETERS_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Utilities.hpp"
#include "GeometricPath.hpp"
#include "LineOfSight.hpp"
#include "FormationKeeping.hpp"
#include "ObstacleAvoidance.hpp"

namespace NSB
{
    using DUNE_NAMESPACES;

    inline void
    updatePathParameters(const IMC::NSBParameters* param, Ellipse& path, double lat0, double lon0)
    {
      WGS84::displacement(lat0, lon0, 0., param->path_lat, param->path_lon, 0., &(path.m_x_center), &(path.m_y_center)); 
      path.m_z_center = param->path_z;

      path.m_a = param->path_a;
      path.m_b = param->path_b;
      path.m_c = param->path_c;

      path.m_clockwise = param->path_clockwise;
      path.m_psi = param->path_psi;
      path.m_z_freq = param->path_z_freq;
      path.m_phi0 = param->path_phi0;
      path.m_z_phi0 = param->path_z_phi0;
    }

    inline void
    updateLosParameters(const IMC::NSBParameters* param, LineOfSight& los)
    {
      los.m_lookahead = param->los_lookahead;
      los.m_adaptive = (param->los_adaptive == IMC::BOOL_TRUE);
      los.m_speed = param->los_speed;
      los.m_parameter_gain = param->los_gain;
    }

    inline void
    updateFormationShape(const IMC::NSBParameters* param, Vector3D& p_form)
    {
      p_form.x = param->form_x;
      p_form.y = param->form_y;
      p_form.z = param->form_z;
    }

    inline void
    updateFormationKeeping(const IMC::NSBParameters* param, FormationKeepingSaturated& form)
    {
      updateFormationShape(param, form.p_form);
      form.k_form = param->form_gain;
      form.v_max = param->form_max_speed;
    }

    inline void
    updateObstacleAvoidance(const IMC::NSBParameters* param, ObstacleAvoidance& oa)
    {
      oa.m_cone_min = param->oa_cone;
      oa.m_obstacle_radius = param->oa_radius;
      oa.m_hysteresis = param->oa_hysteresis;
    }
}

#endif