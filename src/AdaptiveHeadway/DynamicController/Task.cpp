//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
#include "HandInput.hpp"

using DUNE_NAMESPACES;

namespace AdaptiveHeadway
{
  namespace DynamicController
  {
    static const uint32_t c_controllable_loops = IMC::CL_YAW | IMC::CL_PITCH | IMC::CL_ROLL;    
    static const uint32_t c_required = IMC::CL_TORQUE | IMC::CL_SPEED;

    struct Task: public DUNE::Tasks::Task
    {
      //! Thruster command
      IMC::DesiredSpeed m_thrust;
      //! Torques
      IMC::DesiredControl m_torque;
      //! To activate required control loops
      IMC::ControlLoops m_requiredcl;

      HandInputTransform m_hand;

      //! Control loops
      uint32_t m_aloops, m_cloops, m_scope_ref;

      float m_min_thrust;

      //! Logging
      IMC::HandLog m_log;

      IMC::EstimatedState m_estate;
      IMC::HandPosIn m_input;
      bool m_has_input, m_has_estate;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_hand(ctx.config)
      {
        bind<IMC::ControlLoops>(this);
        bind<IMC::HandPosIn>(this);
        bind<IMC::EstimatedState>(this);

        m_aloops = 0;
        m_cloops = 0;
        m_scope_ref = 0;

        m_requiredcl.mask = c_required;

        m_thrust.speed_units = IMC::SUNITS_RPM;
        m_torque.flags = IMC::DesiredControl::FL_K | IMC::DesiredControl::FL_M | IMC::DesiredControl::FL_N;

        param("Minimum Hand Length", m_hand.e0)
        .units(Units::Meter)
        .minimumValue("0.0")
        .defaultValue("1.0");

        param("Headway Gain", m_hand.k_e)
        .minimumValue("0.0")
        .maximumValue("1.0")
        .defaultValue("0.5");

        param("Disturbance Observer Bandwidth", m_hand.wn)
        .minimumValue("0.0")
        .defaultValue("1.0");

        param("Roll Controller P Gain", m_hand.k_p_roll)
        .minimumValue("0.0")
        .defaultValue("0.1");

        param("Roll Controller D Gain", m_hand.k_d_roll)
        .minimumValue("0.0")
        .defaultValue("0.6324555320336759"); // 2*sqrt(0.1)

        param("Minimum Thruster RPM", m_min_thrust)
        .minimumValue("0.0")
        .defaultValue("600");

        reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      inline void
      reset(void)
      {
        m_has_input = false;
        m_has_estate = false;
      }

      void
      onRequestActivation(void)
      {
        DUNE::Tasks::Task::onRequestActivation();
        reset();
      }

      void
      onRequestDeactivation(void)
      {
        DUNE::Tasks::Task::onRequestDeactivation();
        reset();
      }

      void
      consume(const IMC::HandPosIn* msg)
      {
        if (isActive())
        {
          m_input = *msg;
          m_has_input = true;  
          /*
          if (m_has_estate)
          {
            m_hand.step(m_thrust, m_torque, m_log, m_input, m_estate);
          }*/ // dispatch control inputs only on EstimatedState
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (isActive())
        {
          m_estate = *msg;
          m_has_estate = true;  

          if (m_has_input)
          {
            m_hand.step(m_thrust, m_torque, m_log, m_input, m_estate);
            trimValueMod(m_thrust.value, m_min_thrust, 2500.);
            spew("Thrust: %g; Torque: %g %g %g", m_thrust.value, m_torque.k, m_torque.m, m_torque.n);
            dispatch(m_thrust);
            dispatch(m_torque);
            dispatch(m_log);
          }
        }
      }

      void
      consume(const IMC::ControlLoops* msg)
      {
        uint32_t loops = msg->mask & c_controllable_loops;

        if (!loops)
          return;

        // If this scope is obsolete, ignore message
        if (msg->scope_ref < m_scope_ref)
          return;

        m_scope_ref = msg->scope_ref;

        bool was_active = isActive();

        if (msg->enable)
        {
          if (!isActive())
          {
            requestActivation();
            m_aloops = 0;
          }
          m_aloops |= loops;
        }
        else
        {
          m_aloops &= ~loops;

          if (!m_aloops)
            requestDeactivation();
        }

        if (was_active != isActive())
        {
          debug("%s", isActive() ? "enabling" : "disabling");

          if (msg->enable)
          {
            requestActivation();

            m_requiredcl.enable = IMC::ControlLoops::CL_ENABLE;
            m_requiredcl.scope_ref = m_scope_ref;
            dispatch(m_requiredcl);
          }
          else
          {
            requestDeactivation();

            m_requiredcl.enable = IMC::ControlLoops::CL_DISABLE;
            m_requiredcl.scope_ref = m_scope_ref;
            dispatch(m_requiredcl);
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
