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

      struct Task: public DUNE::Tasks::Task
      {
        double v, w;
        double vx, vy, vz;
        IMC::DesiredHeading m_heading;
        IMC::DesiredPitch m_pitch;
        IMC::DesiredSpeed m_speed;
        bool has_valid_reference;
        double theta_prev;
        //! Control loops last reference
        uint32_t m_scope_ref;

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
          theta_prev = NAN;
        }

        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          reset();
        }

        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          reset();
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
          theta_prev = NAN;
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (isActive())
          {
            v = msg->v;
            w = -msg->w;
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

            vx = msg->vx;
            vy = msg->vy;
            vz = msg->vz;
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

          debug("Received desired velocity: vx = %f, vy = %f, vz = %f", vx, vy, vz);
          debug("Lateral velocities: v = %f, w = %f", v, w);

          double k_theta_filter = 0.9;

          // Find desired surge velocity
          double lateral_velocity_squared = v*v + w*w;
          double desired_velocity_squared = vx*vx + vy*vy + vz*vz;
          double u_ref = 0.;
          if (desired_velocity_squared > lateral_velocity_squared)
            u_ref = std::sqrt(desired_velocity_squared - lateral_velocity_squared);
          else
          {
            war("Desired linear velocity is too small");
            return;
          }

          // Find the desired pitch
          double a = std::sqrt(u_ref*u_ref + w*w);
          if (a < std::abs(vz))
          {
            war("The z-component of the desired linear velocity is too large. Cannot find corresponding pitch angle.");
            return;
          }
          double theta_ref = -std::asin(vz / a) + std::atan2(w, u_ref);

          // Find the desired yaw
          double b = u_ref*std::cos(theta_ref) + w*std::sin(theta_ref);
          double psi_ref = std::atan2(vy, vx) - std::atan2(v, b);

          // Filter the desired pitch
          if (!isnan(theta_prev))
          {
            theta_ref = k_theta_filter*theta_ref + (1. - k_theta_filter)*theta_prev;
            theta_prev = theta_ref;
          }

          debug("Setpoints: u = %f, theta = %f, psi = %f", u_ref, Angles::degrees(theta_ref), Angles::degrees(psi_ref));

          // Dispatch messages
          m_speed.value = u_ref;
          m_speed.speed_units = IMC::SUNITS_METERS_PS;
          dispatch(m_speed);
          
          m_pitch.value = theta_ref;
          dispatch(m_pitch);

          m_heading.value = psi_ref;
          dispatch(m_heading);
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
