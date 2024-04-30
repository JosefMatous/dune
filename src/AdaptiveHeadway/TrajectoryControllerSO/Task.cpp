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

#include <AdaptiveHeadway/Utility.hpp>
#include <AdaptiveHeadway/HandTransform.hpp>

namespace AdaptiveHeadway
{
  //! Second-order trajectory-tracking controller.
  //!
  //! A trajectory-tracking PD controller based on the hand position concept.
  //! @author Josef Matous
  namespace TrajectoryControllerSO
  {
    using DUNE_NAMESPACES;

    const uint32_t c_control_loops = CL_YAW | CL_PITCH | CL_SPEED;

    struct Task: public DUNE::Control::PathController
    {
      IMC::HandPosIn m_control_input;

      // External activation
      bool m_active;
      bool m_has_trajectory;

      double m_T_start, m_T_stop;
      IMC::ExperimentControl m_stop_experiment;

      struct{
        double k_p_horz, k_p_vert, k_d_horz, k_d_vert, e0, k_e;
      } m_params;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx)
      {
        bind<IMC::TrajectoryReference>(this);
        bind<IMC::ExperimentControl>(this);

        m_stop_experiment.start = IMC::BOOL_FALSE;
        m_stop_experiment.delay = 0.;
        m_control_input.type = IMC::INPUT_ACCELERATION;

        param("Experiment Stop Time", m_T_stop)
          .defaultValue("400.")
          .description("The task is stopped after the given time. Enter negative value to ignore this.");

        param("Proportional Gain -- Horizontal", m_params.k_p_horz)
        .minimumValue("0.0")
        .defaultValue("0.1");

        param("Proportional Gain -- Vertical", m_params.k_p_vert)
        .minimumValue("0.0")
        .defaultValue("0.25");

        param("Derivative Gain -- Horizontal", m_params.k_d_horz)
        .minimumValue("0.0")
        .defaultValue("0.6324555320336759"); // 2*sqrt(0.1)

        param("Derivative Gain -- Vertical", m_params.k_d_vert)
        .minimumValue("0.0")
        .defaultValue("0.6324555320336759");

        param("Minimum Hand Length", m_params.e0)
        .units(Units::Meter)
        .minimumValue("0.0")
        .defaultValue("1.0");

        param("Headway Gain", m_params.k_e)
        .minimumValue("0.0")
        .maximumValue("1.0")
        .defaultValue("0.5");

        reset();
      }

      inline void
      reset(void)
      {
        m_T_start = -1.;
        m_active = false;
        m_has_trajectory = false;
      }

      void
      consume(const IMC::ExperimentControl* msg)
      {
        if (msg->delay <= 0.)
        {
          bool new_active = (msg->start == IMC::BOOL_TRUE);
          if (new_active != m_active)
          {
            m_active = new_active;
            if (m_active)
              m_T_start = Clock::get();
            else
              reset();
          }
        }
      }

      void
      consume(const IMC::TrajectoryReference* msg)
      {
        m_control_input.reference.set(*msg);
        m_has_trajectory = true;
      }

      inline bool
      hasSpecificZControl(void)
      {
        return true;
      }

      void
      onPathActivation(void)
      {
        // Activate cotrollers.
        enableControlLoops(c_control_loops);
        reset();
      }

      void
      onPathDeactivation(void)
      {
        // Activate cotrollers.
        disableControlLoops(c_control_loops);
        reset();
      }

      //! Execute a path control step
      //! From base class PathController
      void
      step(const IMC::EstimatedState& state, const TrackingState& ts)
      {
        Vector3D<double> x_ref, v_ref, a_ref, x_hand, v_hand;
        const IMC::TrajectoryReference* traj;
        if (m_has_trajectory)
        {
          traj = m_control_input.reference.get();

          x_ref.x = traj->r_x;
          x_ref.y = traj->r_y;
          x_ref.z = traj->r_z;

          v_ref.x = traj->v_x;
          v_ref.y = traj->v_y;
          v_ref.z = traj->v_z;

          a_ref.x = traj->a_x;
          a_ref.y = traj->a_y;
          a_ref.z = traj->a_z;

          spew("Trajectory control");
        }
        else
        {
          x_ref.x = ts.end.x;
          x_ref.y = ts.end.y;
          x_ref.z = ts.end.z;

          v_ref.x = ts.end.x - state.x;
          v_ref.y = ts.end.y - state.y;
          v_ref.z = ts.end.z - state.depth;
          double U = std::pow(dot(v_ref, v_ref), -0.5); // U = 1 / norm(x - x_ref)
          v_ref *= U;

          zeros(a_ref);

          spew("Waypoint control");
        }

        hand_transform(x_hand, v_hand, state, x_ref, v_ref, m_params.k_e, m_params.e0);

        m_control_input.u_x = m_params.k_p_horz*(x_ref.x - x_hand.x) + m_params.k_d_horz*(v_ref.x - v_hand.x) + a_ref.x;
        m_control_input.u_y = m_params.k_p_horz*(x_ref.y - x_hand.y) + m_params.k_d_horz*(v_ref.y - v_hand.y) + a_ref.y;
        m_control_input.u_z = m_params.k_p_horz*(x_ref.z - x_hand.z) + m_params.k_d_horz*(v_ref.z - v_hand.z) + a_ref.z;
        dispatch(m_control_input);
      }
    };
  }
}

DUNE_TASK
