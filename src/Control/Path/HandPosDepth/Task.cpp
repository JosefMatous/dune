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
  //! 3D hand position controller.
  //!
  //! This task implements a path controller using the hand position transform.
  //! The z-coordinate is controlled via the Diving controller.
  //! @author JosefMatous
  namespace Path
  {
    namespace HandPosDepth
    {
      using DUNE_NAMESPACES;

      struct Task: public DUNE::Control::PathController
      {
        IMC::DesiredHeading m_heading;
        IMC::DesiredZ m_zref;
        Time::Counter<float> m_realpos;
        Delta m_last_step;
        double ey_int = 0;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
        }

        void
        onPathActivation(void)
        {
          // path control activated
          m_realpos.reset();
          enableControlLoops(IMC::CL_DEPTH);
        }

        void
        onPathDeactivation(void)
        {
          // path control deactivated
          inf("Not updating anymore.");
          disableControlLoops(IMC::CL_DEPTH);
        }

        bool
        hasSpecificZControl(void) const
        {
          return true;
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // This section is copy-pasted from Claudio's hand controller
          double a = 100;
          double ref; double k = .2; double d = 1.0; double ey = ts.track_pos.y + d*std::sin(state.psi - ts.track_bearing);
          double k_int = 1/a;
          double time_step = m_last_step.getDelta();

          // Euler integration
          ey_int += ey*time_step ;

          ref = ts.track_bearing - (k*ey*std::cos(state.psi - ts.track_bearing)/d) - k_int*ey_int*std::cos(state.psi- ts.track_bearing)/d;
          m_heading.value =  Angles::normalizeRadian(ref);
          //debug("Actual psi = %f, bearing = %f,  ey = %f, ey_int = %f" ,Angles::degrees(state.psi), Angles::degrees(ts.track_bearing), ey, ey_int );
          dispatch(m_heading);

          //! Depth control
          // Find the closest point on the path from the vehicle's hand position
          double x_end_start = ts.end.x - ts.start.x;
          double y_end_start = ts.end.y - ts.start.y;
          double z_end_start = ts.end.z - ts.start.z;
          double x_hand_start = state.x + d*std::cos(state.theta)*std::cos(state.psi) - ts.start.x;
          double y_hand_start = state.y + d*std::cos(state.theta)*std::sin(state.psi) - ts.start.y;
          double z_hand_start = state.z - d*std::sin(state.theta) - ts.start.z;
          double s = (x_end_start*x_hand_start + y_end_start*y_hand_start + z_end_start*z_hand_start)
                    / (x_end_start*x_end_start + y_end_start*y_end_start + z_end_start*z_end_start);
          // Sanity check
          debug("Start z = %f, end z = %f, vehicle z = %f, s = %f", ts.start.z, ts.end.z, state.z, s);
          s = (s > 1.) ? 1. : s;
          s = (s < 0.) ? 0. : s; // limit s to [0, 1]

          m_zref.value = ts.start.z + s*z_end_start + d*std::sin(state.theta);
          m_zref.z_units = IMC::Z_DEPTH;
          dispatch(m_zref);
        }        
      };
    }
  }
}

DUNE_TASK
