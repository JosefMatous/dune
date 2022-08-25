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
  //! Linear velocity AUV controller.
  //!
  //! Intermediate controller. Consumes the DesiredLinearState message and 
  //! sends surge, pitch, and yaw references.
  //! @author JosefMatous
  namespace AUV
  {
    namespace LinearVelocity
    {
      using DUNE_NAMESPACES;

      //! Required control loops
      static const uint32_t c_required = IMC::CL_SPEED | IMC::CL_YAW_RATE | IMC::CL_PITCH;      

      struct Task: public DUNE::Tasks::Task
      {
        double v, w;
        double vx, vy, vz;
        double vx_ref, vy_ref, vz_ref;
        IMC::DesiredHeadingRate m_hrate;
        IMC::DesiredPitch m_pitch;
        IMC::DesiredSpeed m_speed;
        IMC::ControlLoops m_cloops;
        bool has_valid_reference;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Active loops
        uint32_t m_aloops;

        Delta m_last_step;

        DiscretePID m_course_pid;
        std::vector<float> m_course_gains;
        float m_course_limit;
        DiscretePID m_z_rate_pid;
        std::vector<float> m_z_rate_gains;
        float m_z_rate_limit;
        float m_theta_max;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_scope_ref(0)
        {
          // Initialize main entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredLinearState>(this);
          bind<IMC::ControlLoops>(this);
          has_valid_reference = false;

          param("Course PID Gains", m_course_gains)
            .defaultValue("15, 0, 0")
            .size(3);
          param("Course PID Integral Limit", m_course_limit)
            .defaultValue("-1");
          param("Vertical PID Gains", m_z_rate_gains)
            .defaultValue("1, 0.05, 0")
            .size(3);
          param("Vertical PID Integral Limit", m_z_rate_limit)
            .defaultValue("5");
          param("Maximum Pitch Reference", m_theta_max)
            .defaultValue("20");
        }

        //! Update internal parameters.
        void
        onUpdateParameters(void)
        {
          reset();

          if (paramChanged(m_course_gains))
            m_course_pid.setGains(m_course_gains);
          if (paramChanged(m_course_limit))
            m_course_pid.setIntegralLimits(m_course_limit);
          if (paramChanged(m_z_rate_gains))
            m_z_rate_pid.setGains(m_z_rate_gains);
          if (paramChanged(m_z_rate_limit))
            m_z_rate_pid.setIntegralLimits(m_z_rate_limit);
          if (paramChanged(m_theta_max))
            m_z_rate_pid.setOutputLimits(-Angles::radians(m_theta_max), Angles::radians(m_theta_max));          
        }

        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          reset();

          // Activate control loops
          if ((c_required & m_aloops) == c_required)
            return;

          m_aloops |= c_required;
          m_cloops.enable = IMC::ControlLoops::CL_ENABLE;
          m_cloops.mask = c_required;
          m_cloops.scope_ref = m_scope_ref;
          dispatch(m_cloops);
        }

        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          reset();

          // Deactivate control loops
          if ((c_required & ~m_aloops) == c_required)
            return;

          m_aloops &= ~c_required;
          m_cloops.enable = IMC::ControlLoops::CL_DISABLE;
          m_cloops.mask = c_required;
          m_cloops.scope_ref = m_scope_ref;
          dispatch(m_cloops);
        }

        void
        onResourceInitialization(void)
        {
          requestDeactivation();

          reset();
        }

        void
        reset(void)
        {
          has_valid_reference = false;

          m_course_pid.reset();
          m_z_rate_pid.reset();
          m_last_step.reset();
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (isActive())
          {
            v = msg->v;
            w = -msg->w;
            vx = msg->vx;
            vy = msg->vy;
            vz = msg->vz;
            dispatch_references();
          }
        }

        void
        consume(const IMC::DesiredLinearState* msg)
        {
          if (isActive())
          {
            if (!(msg->flags & (IMC::DesiredLinearState::FL_VX | IMC::DesiredLinearState::FL_VY | IMC::DesiredLinearState::FL_VZ)))
            {
              war("DesiredLinearState velocities are invalid");
              return;
            }

            vx_ref = msg->vx;
            vy_ref = msg->vy;
            vz_ref = msg->vz;
            has_valid_reference = true;
          }
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & IMC::CL_VELOCITY))
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;
          if (msg->enable)
            m_aloops |= msg->mask;
          else
            m_aloops &= ~msg->mask;

          if (isActive() == msg->enable)
            return;

          if (!msg->enable)
            requestDeactivation();
          else
            requestActivation();
        }

        void
        dispatch_references(void)
        {
          if (!has_valid_reference)
            return;

          //debug("Received desired velocity: vx = %f, vy = %f, vz = %f", vx, vy, vz);
          //debug("Lateral velocities: v = %f, w = %f", v, w);

          double delta_t = m_last_step.getDelta();

          // Find desired surge velocity
          double lateral_velocity_squared = v*v + w*w;
          double desired_velocity_squared = vx_ref*vx_ref + vy_ref*vy_ref + vz_ref*vz_ref;
          double u_ref = 0.;
          if (desired_velocity_squared > lateral_velocity_squared)
            u_ref = std::sqrt(desired_velocity_squared - lateral_velocity_squared);
          else
          {
            war("Desired linear velocity is too small");
            return;
          }
          m_speed.value = u_ref;
          m_speed.speed_units = IMC::SUNITS_METERS_PS;
          dispatch(m_speed);

          // Course control
          double chi_err = Angles::normalizeRadian(std::atan2(vy_ref, vx_ref) - std::atan2(vy, vx));
          m_hrate.value = m_course_pid.step(delta_t, chi_err, 0.);
          dispatch(m_hrate);

          // Vertical rate control
          double z_err = vz - vz_ref;
          m_pitch.value = m_z_rate_pid.step(delta_t, z_err, 0.);
          dispatch(m_pitch);
        }

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
}

DUNE_TASK
