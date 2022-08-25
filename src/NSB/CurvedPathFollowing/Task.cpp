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

#include "../GeometricPath.hpp"
#include "../LineOfSight.hpp"
#include "../Utilities.hpp"

namespace NSB
{
  //! Curved path following.
  //!
  //! This task uses a line-of-sight guidance algorithm to steer the vehicle along a given curved path.
  //! @author Josef Matous
  namespace CurvedPathFollowing
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! Required control loops
      static const uint32_t c_required = IMC::CL_VELOCITY;      

      Ellipse m_path;
      LineOfSight m_los;
      double m_path_parameter;
      Delta m_last_step;

      IMC::DesiredLinearState m_linstate;
      IMC::DesiredZ m_z;
      IMC::ControlLoops m_cloops;
      IMC::CurvedPathReference m_path_ref;
      IMC::Reference m_final_ref;

      //! Control loops last reference
      uint32_t m_scope_ref;
      //! Active loops
      uint32_t m_aloops;    

      //! Vehicle is in maneuver mode
      bool m_is_maneuvering;  
      //! Vehicle is executing "follow_nsb" plan
      bool m_is_executing;

      //! Stop time
      double m_T_stop;
      //! Timestamp of experiment start
      double m_T_start;
      //! Stop parameter
      double m_param_stop;
      bool m_sent_termination;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_scope_ref(0)
      {
        bind<IMC::VehicleState>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::EstimatedState>(this);

        m_path = Ellipse(0.71881387, -0.15195186, 0., 50., 30., 0., -0.6585325752983525, 0., false, M_PI_2, 0.);
        m_los = LineOfSight(15., false, 1.3, 0.5);

        m_linstate.flags = IMC::DesiredLinearState::FL_VX | IMC::DesiredLinearState::FL_VY | IMC::DesiredLinearState::FL_VZ;

        m_is_maneuvering = false;
        m_is_executing = false;
        m_T_start = -1.;
        m_sent_termination = false;

        m_final_ref.flags = IMC::Reference::FLAG_LOCATION | IMC::Reference::FLAG_MANDONE;

        param("Ellipse -- Latitude", m_path.m_lat_center)
          .defaultValue("0.71881387")
          .description("Latitude of the center of the ellipse");
        param("Ellipse -- Longitude", m_path.m_lon_center)
          .defaultValue("-0.15195186")
          .description("Longitude of the center of the ellipse");
        param("Ellipse -- Depth", m_path.m_z_center)
          .defaultValue("0.")
          .description("Depth of the center of the ellipse");
        param("Ellipse -- Semimajor Axis", m_path.m_a)
          .defaultValue("50.")
          .minimumValue("10.")
          .maximumValue("100.")
          .description("Semimajor axis of the ellipse");
        param("Ellipse -- Semiminor Axis", m_path.m_b)
          .defaultValue("30.")
          .minimumValue("10.")
          .maximumValue("100.")
          .description("Semiminor axis of the ellipse");
        param("Ellipse -- Z Amplitude", m_path.m_c)
          .defaultValue("0.")
          .minimumValue("0.")
          .maximumValue("10.")
          .description("Amplitude of oscillations in the z-axis");
        param("Ellipse -- Clockwise", m_path.m_clockwise)
          .defaultValue("false")
          .description("True if the path goes clockwise; false if anticlockwise");
        param("Ellipse -- Orientation", m_path.m_psi)
          .defaultValue("-0.6585325752983525")
          .description("Orientation (yaw angle) of the ellipse. Zero means semimajor axis facing north");
        param("Ellipse -- Z Frequency", m_path.m_z_freq)
          .defaultValue("0.")
          .description("Frequency of oscillations in the z-axis");
        param("Ellipse -- Initial Phase", m_path.m_phi0)
          .defaultValue("0.")
          .description("Initial phase of the ellipse");
        param("Ellipse -- Z Initial Phase", m_path.m_z_phi0)
          .defaultValue("0.")
          .description("Initial phase of oscillations in the z-axis");

        param("LOS -- Lookahead Distance", m_los.m_lookahead)
          .defaultValue("15.")
          .minimumValue("1.")
          .maximumValue("100.")
          .description("Lookahead distance of the LOS algorithm");
        param("LOS -- Adaptive", m_los.m_adaptive)
          .defaultValue("true")
          .description("True if using adaptive lookahead distance");
        param("LOS -- Speed", m_los.m_speed)
          .defaultValue("1.3")
          .minimumValue("0.5")
          .maximumValue("2.")
          .description("Path following speed");
        param("LOS -- Gain", m_los.m_parameter_gain)
          .defaultValue("0.5")
          .minimumValue("0.1")
          .maximumValue("2.")
          .description("Path parameter update gain");

        param("Experiment Stop Time", m_T_stop)
          .defaultValue("-1")
          .description("The task is stopped after the given time. Enter negative value to ignore this.");
        param("Experiment Stop Parameter", m_param_stop)
          .defaultValue("-1")
          .description("The task is stop when path parameter exceeds the given value. Enter negative value to ignore this.");
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

        reset();
      }

      void
      onUpdateParameters(void)
      {
        if (m_T_stop < 0. && m_param_stop < 0.)
          war("Both time and parameter stop conditions are inactive. The experiment will run until stopped externally.");
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
        m_path_parameter = 0.;
        m_is_maneuvering = false;
        m_is_executing = false;
        m_T_start = -1.;
        m_sent_termination = false;
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if (msg->op_mode == IMC::VehicleState::OperationModeEnum::VS_MANEUVER)
        {
          m_is_maneuvering = true;
          if (m_is_executing && !isActive())
            requestActivation();
        }
        else
        {
          m_is_maneuvering = false;
          if (isActive())
          {
            debug("Vehicle exited maneuver mode. Deactivating task ...");
            requestDeactivation();
          }
        }
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (msg->plan_id.compare("follow_nsb") == 0)
        {
          if (msg->state == IMC::PlanControlState::PCS_EXECUTING) 
          {
            m_is_executing = true;
            if (m_is_maneuvering && !isActive())
              requestActivation();
          }
          else
          {
            m_is_executing = false;
            if (isActive())
            {
              debug("Vehicle stopped executing \"follow_nsb\" plan. Deactivating task ...");
              requestDeactivation();
            }
          }
        }
        else
        {
          if (msg->state == IMC::PlanControlState::PCS_EXECUTING) 
          {
            m_is_executing = false;
            if (isActive())
            {
              debug("Vehicle is executing a different plan. Deactivating task ...");
              requestDeactivation();
            }
          }
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (isActive())
        {
          GeometricPath::PathReference path_ref = m_path.getPathReference(m_path_parameter);

          // Dispatch path reference
          m_path_ref.param = m_path_parameter;
          m_path_ref.lat = path_ref.lat;
          m_path_ref.lon = path_ref.lon;
          m_path_ref.z = path_ref.z;
          m_path_ref.theta = path_ref.theta;
          m_path_ref.psi = path_ref.psi;
          dispatch(m_path_ref);

          Vector3D path_err =  GeometricPath::getPathFollowingError(path_ref, msg);
          LineOfSight::LineOfSightOutput out = m_los.step(path_ref, path_err);
          double delta_t = m_last_step.getDelta();
          m_path_parameter += delta_t * out.path_parameter_derivative;

          m_linstate.vx = out.velocity.x;
          m_linstate.vy = out.velocity.y;
          m_linstate.vz = out.velocity.z;
          dispatch(m_linstate);

          if (m_T_stop > 0.) // check for time-based termination
          {
            if (m_T_start < 0.) // first-time step -- get current timestamp
              m_T_start = Time::Clock::get();
            else if ((Time::Clock::get() - m_T_start >= m_T_stop) && !m_sent_termination)
            {
              debug("Reached experiment termination time.");
              terminateExperiment(path_ref.lat, path_ref.lon);
            }            
          }
          if (m_param_stop > 0.) // check for parameter-based termination
          {
            if ((m_path_parameter > m_param_stop) && !m_sent_termination)
            {
              debug("Reached experiment termination parameter.");
              terminateExperiment(path_ref.lat, path_ref.lon);
            }
          }
        }
      }

      inline void
      terminateExperiment(double lat, double lon)
      {
        debug("Terminating experiment");
        m_final_ref.lat = lat;
        m_final_ref.lon = lon;
        dispatch(m_final_ref);
        m_sent_termination = true;
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
