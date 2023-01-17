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

namespace NSB
{
  //! NSB path controller
  //!
  //! Acts as a path controller and handles NSB commands.
  //! @author Josef Matous
  namespace PathControl
  {
    using DUNE_NAMESPACES;

    //! Required control loops
    static const uint32_t c_required = IMC::CL_SPEED | IMC::CL_YAW | IMC::CL_PITCH;    

    struct Task: public DUNE::Control::PathController
    {
      struct 
      {
        std::vector<float> horizontal_gains; // gains of the horizontal PID controller
        float horizontal_limit; // integrator limit
        float horizontal_max; // saturation
        std::vector<float> vertical_gains; // gains of the vertical PID controller
        float vertical_limit;
        float theta_max; // maximum pitch angle
        float vertical_ff_offset;  // feedforward gain
        float u_min; // minimum commanded speed
      } m_params;

      DiscretePID m_horizontal_pid;
      DiscretePID m_vertical_pid;

      struct
      {
        float x, y, z;
      } m_desired_velocity;
      

      bool m_active; // External activation

      IMC::DesiredHeading m_yaw;
      IMC::DesiredPitch m_pitch;
      IMC::DesiredSpeed m_speed;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx)
      {
        bind<IMC::DesiredLinearState>(this);

        param("Horizontal PID Gains", m_params.horizontal_gains)
          .defaultValue("0.35, 0.02, 0")
          .size(3);
        param("Horizontal PID Integral Limit", m_params.horizontal_limit)
          .defaultValue("1");
        param("Horizontal PID Maximum Value", m_params.horizontal_max)
          .defaultValue("15");
        param("Vertical PID Gains", m_params.vertical_gains)
          .defaultValue("10, 1, 0")
          .size(3);
        param("Vertical PID Integral Limit", m_params.vertical_limit)
          .defaultValue("0.1");
        param("Maximum Pitch Reference", m_params.theta_max)
          .defaultValue("20");
        param("Vertical Control Feedforward Offset", m_params.vertical_ff_offset)
          .defaultValue("-1");
        param("Minimum Surge Speed", m_params.u_min)
          .defaultValue("0.5");
        param("Active", m_active)
          .defaultValue("false");

        m_speed.speed_units = IMC::SUNITS_METERS_PS;

        reset();
      }

      void
      onUpdateParameters(void)
      {
        PathController::onUpdateParameters();

        if (paramChanged(m_params.horizontal_gains))
        {
          m_horizontal_pid.setGains(m_params.horizontal_gains);
          m_horizontal_pid.reset();
        }
        if (paramChanged(m_params.horizontal_limit))
        {
          m_horizontal_pid.setIntegralLimits(m_params.horizontal_limit);
          m_horizontal_pid.reset();
        }
        if (paramChanged(m_params.horizontal_max))
        {
          m_horizontal_pid.setOutputLimits(-Angles::radians(m_params.horizontal_max), Angles::radians(m_params.horizontal_max));
        }
        if (paramChanged(m_params.vertical_gains))
        {
          m_vertical_pid.setGains(m_params.vertical_gains);
          m_vertical_pid.reset();
        }
        if (paramChanged(m_params.vertical_limit))
        {
          m_vertical_pid.setIntegralLimits(m_params.vertical_limit);
          m_vertical_pid.reset();
        }
        if (paramChanged(m_params.theta_max))
          m_params.theta_max = Angles::radians(m_params.theta_max);
        if (paramChanged(m_params.vertical_ff_offset))
          m_params.vertical_ff_offset = Angles::radians(m_params.vertical_ff_offset);
      }

      void
      onEntityReservation(void)
      {
        PathController::onEntityReservation();
      }

      void
      onPathActivation(void)
      {
        enableControlLoops(c_required);
      }

      void
      onPathDeactivation(void)
      {
        disableControlLoops(c_required);
      }

      void
      onActivation(void)
      {
        enableControlLoops(c_required);
        reset();
      }

      void
      onDeactivation(void)
      {
        disableControlLoops(c_required);
        reset();
      }

      bool
      hasSpecificZControl(void) const
      {
        return true;
      }

      inline void
      reset(void)
      {
        m_horizontal_pid.reset();
        m_vertical_pid.reset();
      }

      inline float
      square(float x)
      {
        return x*x;
      }

        void
        consume(const IMC::DesiredLinearState* msg)
        {
          if (isActive())
          {
            if (!(msg->flags & (IMC::DesiredLinearState::FL_VX | IMC::DesiredLinearState::FL_VY)))
            {
              war("DesiredLinearState velocities are invalid");
              return;
            }

            m_desired_velocity.x = msg->vx;
            m_desired_velocity.y = msg->vy;
            if (msg->flags & IMC::DesiredLinearState::FL_VZ)
            {
              m_desired_velocity.z = msg->vz;
            }
            else
            {
              m_desired_velocity.z = 0.;
            }
          }
        }

      void
      step(const IMC::EstimatedState& state, const TrackingState& ts)
      {
        if (!m_active) // behave as a path controller
        {
          m_desired_velocity.x = ts.end.x - state.x;
          m_desired_velocity.y = ts.end.y - state.y;
          m_desired_velocity.z = ts.end.z - state.depth;
        }

        // Course controller
        float chi_ref = std::atan2(m_desired_velocity.y, m_desired_velocity.x); // desired course
        float chi_err = Angles::normalizeRadian(chi_ref - std::atan2(state.vy, state.vx));
        float h_pid = m_horizontal_pid.step(ts.delta, chi_err, 0.);        
        m_yaw.value = Angles::normalizeRadian(chi_ref + h_pid);
        dispatch(m_yaw);

        // Vertical controller
        float v_pid = m_vertical_pid.step(ts.delta, m_desired_velocity.z - state.vz, 0.); // PID output
        float U = std::sqrt(square(m_desired_velocity.x) + square(m_desired_velocity.y) + square(m_desired_velocity.z));
        float theta_ref = m_params.vertical_ff_offset - std::asin(m_desired_velocity.z / U) - v_pid; // PID output is subtracted, as positive pitch angle results in negative vertical speed and vice versa
        m_pitch.value = trimValue(theta_ref, -m_params.theta_max, m_params.theta_max);
        dispatch(m_pitch);

        // Speed controller
        if (m_active)
        {
          float u_ref_squared = square(U) - square(state.v) - square(state.w);
          if (u_ref_squared >= square(m_params.u_min))
          {
            m_speed.value = std::sqrt(u_ref_squared);
          }
          else
          {
            war("Desired speed too low");
            m_speed.value = m_params.u_min;
          }
          dispatch(m_speed);
        }
      }
    };    
  }
}

DUNE_TASK
