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

namespace Control
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Josef Matous
  namespace Path
  {
    namespace PurePursuitLin
    {
      using DUNE_NAMESPACES;

      struct Task: public DUNE::Control::PathController
      {
        IMC::DesiredLinearState m_linstate;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          m_linstate.flags = IMC::DesiredLinearState::FL_VX | IMC::DesiredLinearState::FL_VY | IMC::DesiredLinearState::FL_VZ;
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();
        }

        void
        onPathActivation(void)
        {
          // Activate heading controller.
          enableControlLoops(IMC::CL_VELOCITY | IMC::CL_SPEED | IMC::CL_YAW | IMC::CL_PITCH);
        }

        void
        onPathDeactivation(void)
        {
          // Deactivate heading controller.
          disableControlLoops(IMC::CL_VELOCITY | IMC::CL_SPEED | IMC::CL_YAW | IMC::CL_PITCH);
        }

        bool
        hasSpecificZControl(void) const
        {
          return true;
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Head straight to target
          double speed = 1.;
          double x_rel = ts.end.x - state.x;
          double y_rel = ts.end.y - state.y;
          double z_rel = ts.end.z - state.z;
          double inv_norm = 1. / std::sqrt(x_rel*x_rel + y_rel*y_rel + z_rel*z_rel);

          m_linstate.vx = speed * x_rel * inv_norm;
          m_linstate.vy = speed * y_rel * inv_norm;
          m_linstate.vz = speed * z_rel * inv_norm;

          dispatch(m_linstate);
        }
      };
    }
  }
}

DUNE_TASK
