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

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Utilities.hpp"
#include "GeometricPath.hpp"
#include "LineOfSight.hpp"
#include "FormationKeeping.hpp"

namespace NSB
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Josef Matous
  namespace NSBAlgorithm
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //const uint16_t m_vehicle_id = 26;
      const double T_carrot = 25.;
      const int m_decimation = 100;

      const double m_path_speed = 1.;
      const double m_path_gain = 0.2;
      const double m_lookahead_distance = 10.;
      const double m_amplitude = 15.;
      const double m_wavenumber = 3.14 / 75.;

      double m_path_parameter;
      IMC::Reference m_reference; 
      Delta m_last_step;

      PlanarSineWave m_path;
      LineOfSight m_los;
      FormationKeeping m_form;

      int m_state_counter;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_path(0., 0., 0., m_amplitude, m_wavenumber, 0.),
        m_los(m_lookahead_distance, false, m_path_speed, m_path_gain),
        m_form()
      {
        bind<IMC::GroupEstimatedState>(this);
        ctx.resolver.id(101);

        m_state_counter = 0;
        m_path_parameter = 0.;

        m_form.m_shape[0].x = 0.;
        m_form.m_shape[0].y = 0.;
        m_form.m_shape[0].z = 0.;
      }

      void
      consume(const IMC::GroupEstimatedState* msg)
      {
        // Get path reference and perform line of sight
        GeometricPath::PathReference path_ref = m_path.getPathReference(m_path_parameter);
        Vector3D barycenter = calculateBarycenter(msg);
        Vector3D path_err = m_path.getPathFollowingError(path_ref, barycenter);
        LineOfSight::LineOfSightOutput los_out = m_los.step(path_ref, path_err);

        // Update path parameter
        double time_step = m_last_step.getDelta();
        m_path_parameter += los_out.path_parameter_derivative * time_step;

        // Send the references every Nth step
        if (m_state_counter++ % m_decimation == 0)
        {
          Vector3D* formation_out = m_form.getOutput(path_ref, msg, los_out.path_parameter_derivative);
          IMC::MessageList<IMC::EstimatedState>::const_iterator itr = msg->estate_list.begin();
          size_t n = msg->estate_list.size();
          for (size_t i = 0; i < n; i++)
          {
            Vector3D nsb_velocity;
            nsb_velocity.x = los_out.velocity_reference.x + formation_out[i].x;
            nsb_velocity.y = los_out.velocity_reference.y + formation_out[i].y;
            nsb_velocity.z = los_out.velocity_reference.z + formation_out[i].z;

            IMC::EstimatedState* estate = *itr;
            followTheCarrotReference(&m_reference, estate, nsb_velocity, T_carrot);
            dispatch(m_reference);

            ++itr;
          }
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
