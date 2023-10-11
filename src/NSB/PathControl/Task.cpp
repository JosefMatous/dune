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

#include "CollisionEllipse.hpp"
#include "../Utilities.hpp"

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

      struct 
      {
        //! Use monitor
        bool use;
        //! Collision ellipse origin.
        std::vector<float> x0, y0;
        //! Collision ellipse orientation.
        std::vector<float> angle;
        //! Collision ellipse axes.
        std::vector<float> a, b;
        //! True if the vehicle should remain inside the collision ellipse.
        std::vector<bool> inside;
        //! True if the operation limits are an intersection of ellipses, false for union
        bool intersection;
      } m_monitor_params;

      DiscretePID m_horizontal_pid;
      float m_vertical_integrator;
      float m_last_z;

      double m_lat0, m_lon0;
      bool has_estate;

      struct
      {
        float x, y, z;
      } m_desired_velocity;
      
      bool m_active; // External activation
      double m_timeout, m_last_timestamp;

      std::vector<CollisionEllipse<float>> m_ellipses;

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
          .defaultValue("1, 0.2, 0")
          .size(3);
        param("Vertical PID Integral Limit", m_params.vertical_limit)
          .defaultValue("1");
        param("Maximum Pitch Reference", m_params.theta_max)
          .defaultValue("20");
        param("Vertical Control Feedforward Offset", m_params.vertical_ff_offset)
          .defaultValue("-1");
        param("Minimum Surge Speed", m_params.u_min)
          .defaultValue("0.5");
        param("Activation Timetout", m_timeout)
          .defaultValue("0.5")
          .minimumValue("0");

        param("Collision Ellipse -- Monitor", m_monitor_params.use)
          .defaultValue("false");
        param("Collision Ellipse -- Semimajor axes", m_monitor_params.a)
          .defaultValue("50");
        param("Collision Ellipse -- Semiminor axes", m_monitor_params.b)
          .defaultValue("30");
        param("Collision Ellipse -- Orientations", m_monitor_params.angle)
          .defaultValue("0");
        param("Collision Ellipse -- Origin Latitude", m_monitor_params.x0)
          .defaultValue("0.71881387");
        param("Collision Ellipse -- Origin Longitude", m_monitor_params.y0)
          .defaultValue("-0.15195186");
        param("Collision Ellipse -- Inside", m_monitor_params.inside)
          .defaultValue("true");   
        param("Collision Ellipse -- Intersection", m_monitor_params.intersection)
          .defaultValue("true");   

        m_speed.speed_units = IMC::SUNITS_METERS_PS;
        m_active = false;
        m_last_timestamp = 0;

        reset();
      }

      inline void
      updateEllipses(void)
      {
        if (has_estate)
        {
          size_t n_ellipses = m_monitor_params.a.size();
          if ((m_monitor_params.b.size() != n_ellipses) || (m_monitor_params.angle.size() != n_ellipses) || (m_monitor_params.x0.size() != n_ellipses) || (m_monitor_params.y0.size() != n_ellipses))
          {
            war("Incompatible size of parameter vectors");
            return;
          }
          if (m_ellipses.size() != n_ellipses)
            m_ellipses.resize(n_ellipses);

          double x0, y0;
          for (size_t i = 0; i < n_ellipses; i++)
          {
            WGS84::displacement(m_lat0, m_lon0, 0., m_monitor_params.x0[i], m_monitor_params.y0[i], 0., &x0, &y0);
            m_ellipses[i] = CollisionEllipse<float>(m_monitor_params.a[i], m_monitor_params.b[i], m_monitor_params.angle[i], x0, y0);
          }   
        }
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
          m_horizontal_pid.setOutputLimits(-Angles::radians(m_params.horizontal_max), Angles::radians(m_params.horizontal_max));
        if (paramChanged(m_params.vertical_gains))
          vertical_reset();
        if (paramChanged(m_params.vertical_limit))
          vertical_reset();
        if (paramChanged(m_params.theta_max))
          m_params.theta_max = Angles::radians(m_params.theta_max);
        if (paramChanged(m_params.vertical_ff_offset))
          m_params.vertical_ff_offset = Angles::radians(m_params.vertical_ff_offset);

        if (paramChanged(m_monitor_params.a) || paramChanged(m_monitor_params.b) || paramChanged(m_monitor_params.angle) || paramChanged(m_monitor_params.x0) || paramChanged(m_monitor_params.y0))
        {
          updateEllipses();       
        }
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
      vertical_reset(void)
      {
        m_vertical_integrator = 0.;
        m_last_z = -100.;
      }

      inline void
      reset(void)
      {
        m_horizontal_pid.reset();
        vertical_reset();
      }

      void
      consume(const IMC::DesiredLinearState* msg)
      {
          m_active = true;
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
          m_last_timestamp = Clock::get();
      }

      inline void
      collision_ellipse_monitor(const IMC::EstimatedState& state)
      {
        bool is_in_limits;
        if (m_monitor_params.intersection)
        {
          is_in_limits = true;
          for (size_t i = 0; i < m_ellipses.size(); i++)
            is_in_limits &= (m_monitor_params.inside[i]) ? m_ellipses[i].isInside(state.x, state.y) : m_ellipses[i].isOutside(state.x, state.y);
        }
        else
        {
          is_in_limits = false;
          for (size_t i = 0; i < m_ellipses.size(); i++)
            is_in_limits |= (m_monitor_params.inside[i]) ? m_ellipses[i].isInside(state.x, state.y) : m_ellipses[i].isOutside(state.x, state.y);
        }

        if (!is_in_limits)
        {
          signalError(DTR("Vehicle outside of operating limits"));
        }
      }

      void
      step(const IMC::EstimatedState& state, const TrackingState& ts)
      {
        double time_since_last = Clock::get() - m_last_timestamp;
        if (m_active && (time_since_last > m_timeout))
        {          
          m_active = false;
        }
        if (!has_estate)
        {
          m_lat0 = state.lat;
          m_lon0 = state.lon;
          has_estate = true;
          updateEllipses();
        }
        if (!m_active) // behave as a path controller
        {
          m_desired_velocity.x = ts.end.x - state.x;
          m_desired_velocity.y = ts.end.y - state.y;
          m_desired_velocity.z = ts.end.z - state.depth;
        }

        // Course controller
        float chi_ref = std::atan2(m_desired_velocity.y, m_desired_velocity.x); // desired course
        float chi_err = Angles::normalizeRadian(chi_ref - std::atan2(state.vy, state.vx));
        float h_pid = 0;
        if (std::abs(chi_err) < M_PI_2)
          h_pid = m_horizontal_pid.step(ts.delta, chi_err, 0.);        
        else
          m_horizontal_pid.reset();
        m_yaw.value = Angles::normalizeRadian(chi_ref + h_pid);
        dispatch(m_yaw);

        // Vertical controller
        float v_pid = m_params.vertical_gains[0] * (m_desired_velocity.z - state.vz) + m_params.vertical_gains[1] * m_vertical_integrator;
        float U = std::sqrt(square(m_desired_velocity.x) + square(m_desired_velocity.y) + square(m_desired_velocity.z));
        float theta_ref = m_params.vertical_ff_offset - std::asin(m_desired_velocity.z / U) - v_pid; // PID output is subtracted, as positive pitch angle results in negative vertical speed and vice versa
        m_pitch.value = trimValue(theta_ref, -m_params.theta_max, m_params.theta_max);
        dispatch(m_pitch);

        /* Vertical integrator */
        if (m_last_z > -1.)
        {
          m_vertical_integrator += m_desired_velocity.z * ts.delta - (state.depth - m_last_z);
          m_vertical_integrator = trimValue(m_vertical_integrator, -m_params.vertical_limit, m_params.vertical_limit);
          m_last_z = state.depth;
        }

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

          // Monitor
          if (m_monitor_params.use)
            collision_ellipse_monitor(state);
        }
      }
    };    
  }
}

DUNE_TASK
