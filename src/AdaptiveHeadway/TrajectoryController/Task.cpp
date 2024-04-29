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

namespace AdaptiveHeadway
{
  //! Trajectory-tracking controller.
  //!
  //! A trajectory-tracking PD controller based on the hand position concept.
  //! @author Josef Matous
  namespace TrajectoryController
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      IMC::HandPosIn m_control_input;

      // External activation
      bool m_active;
      bool is_initialized;

      double m_T_start, m_T_stop;
      IMC::ExperimentControl m_stop_experiment;

      double k_p_horz, k_p_vert, e0, k_e;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::TrajectoryReference>(this);
        bind<IMC::ExperimentControl>(this);

        m_stop_experiment.start = IMC::BOOL_FALSE;
        m_stop_experiment.delay = 0.;
        m_control_input.type = IMC::INPUT_VELOCITY;

        param("Experiment Stop Time", m_T_stop)
          .defaultValue("400.")
          .description("The task is stopped after the given time. Enter negative value to ignore this.");

        param("Proportional Gain -- Horizontal", k_p_horz)
        .minimumValue("0.0")
        .defaultValue("0.1");

        param("Proportional Gain -- Vertical", k_p_vert)
        .minimumValue("0.0")
        .defaultValue("0.25");

        param("Minimum Hand Length", e0)
        .units(Units::Meter)
        .minimumValue("0.0")
        .defaultValue("1.0");

        param("Headway Gain", k_e)
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
        is_initialized = false;
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
        is_initialized = true;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (m_active && is_initialized)
        {
          // Get vehicle's orientation
          Vector3D<float> gamma; // Forward direction
          direction_vector(gamma, *msg);

          // Get hand position
          Vector3D<double> x_err; // position error
          Vector3D<double> x_hand; // hand position
          IMC::TrajectoryReference *m_ref = m_control_input.reference.get();
          x_err.x = msg->x - m_ref->r_x;
          x_err.y = msg->y - m_ref->r_y;
          x_err.z = msg->depth - m_ref->r_z;
          double e = std::sqrt(std::pow(e0, 2.0) + std::pow(k_e, 2.0)*dot(x_err, x_err)); // hand length
          
          x_hand.x = msg->x + gamma.x*e;
          x_hand.y = msg->y + gamma.y*e;
          x_hand.z = msg->depth + gamma.z*e;

          // Trajectory control
          m_control_input.u_x = k_p_horz * (m_ref->r_x - x_hand.x) + m_ref->v_x;
          m_control_input.u_y = k_p_horz * (m_ref->r_y - x_hand.y) + m_ref->v_y;
          m_control_input.u_z = k_p_vert * (m_ref->r_z - x_hand.z) + m_ref->v_z;
          spew("Control input: %.2f, %.2f, %.2f", m_control_input.u_x, m_control_input.u_y, m_control_input.u_z);
          dispatch(m_control_input);

          // Check for termination
          if (m_T_stop > 0.)
          {
            double t = Clock::get() - m_T_start;
            if (t >= m_T_stop)
            {
              debug("Reached experiment stop time, terminating ...");
              dispatch(m_stop_experiment);
              reset();
            }
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
