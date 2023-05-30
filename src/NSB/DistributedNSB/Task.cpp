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
#include "../FormationKeeping.hpp"
#include "../Utilities.hpp"
#include "../ObstacleAvoidance.hpp"
#include "../ObstacleEstimator.hpp"
#include "../Parameters.hpp"

namespace NSB
{
  //! Distributed NSB.
  //!
  //! Combines line-of-sight guidance with formation keeping.
  //! @author Josef Matous
  namespace DistributedNSB
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      Ellipse m_path;
      LineOfSight m_los;
      FormationKeepingSaturated m_form;
      Delta m_last_step;

      IMC::DesiredLinearState m_linstate;
      struct 
      {
        float path_param, x, y, z, r_f;
      } m_nsb_state;
      IMC::NSBParametersRequest m_nsb_request;

      // Obstacle avoidance
      ObstacleAvoidance m_obs_avoid;
      ObstacleEstimator m_obs_est;
      double m_lat0, m_lon0;
      double m_path_lat, m_path_lon;
      bool m_has_obstacle;

      // External activation
      bool m_active;
      bool is_initialized, has_estate;

      double m_T_start, m_T_stop, m_param_stop;
      IMC::ExperimentControl m_stop_experiment;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_path(0, 0, 0., 50., 30., 0., 0, 0., false, M_PI_2, 0.),
        m_los(15., false, 1.3, 0.5),
        m_form(0., 0., 0., 0.25, 0.5)
      {
        bind<IMC::EstimatedState>(this);
        bind<IMC::NSBState>(this);
        bind<IMC::Target>(this);
        bind<IMC::ExperimentControl>(this);
        bind<IMC::NSBParameters>(this);

        m_linstate.flags = IMC::DesiredLinearState::FL_VX | IMC::DesiredLinearState::FL_VY | IMC::DesiredLinearState::FL_VZ;

        m_T_start = -1.;
        is_initialized = false;
        has_estate = false;

        m_stop_experiment.op = ExperimentControl::OP_STOP;
        m_stop_experiment.experiment = ExperimentControl::EX_NSB;
        m_stop_experiment.obstacle = IMC::BOOL_TRUE;
        m_stop_experiment.delay = 0.;

        param("Active", m_active)
          .defaultValue("false");

        param("Experiment Stop Time", m_T_stop)
          .defaultValue("-1")
          .description("The task is stopped after the given time. Enter negative value to ignore this.");
        param("Experiment Stop Parameter", m_param_stop)
          .defaultValue("-1")
          .description("The task is stop when path parameter exceeds the given value. Enter negative value to ignore this.");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
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

      inline void
      onActiveChanged(void)
      {
        if (m_active)
          requestActivation();
        else
          requestDeactivation();
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_T_stop) || paramChanged(m_param_stop))
        {
          if (m_T_stop < 0. && m_param_stop < 0.)
            war("Both time and parameter stop conditions are inactive. The experiment will run until stopped externally.");
        }
        if (paramChanged(m_active))
        {
          onActiveChanged();
        }
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
        m_T_start = -1.;
        is_initialized = false;
        m_has_obstacle = false;
      }

      void
      consume(const IMC::ExperimentControl* msg)
      {
        if (msg->delay <= 0.)
        {
          bool new_active = (msg->op == ExperimentControl::OP_START && msg->experiment == ExperimentControl::EX_NSB);
          if (new_active != m_active)
          {
            m_active = new_active;
            onActiveChanged();
          }
        }
      }

      void
      consume(const IMC::NSBParameters* msg)
      {
        if (has_estate)
          updatePathParameters(msg, m_path, m_lat0, m_lon0);
        updateLosParameters(msg, m_los);
        updateFormationKeeping(msg, m_form);
        updateObstacleAvoidance(msg, m_obs_avoid);      
      }

      void
      consume(const IMC::NSBState* msg)
      {
        m_nsb_state.path_param = msg->path_param;
        m_nsb_state.x = msg->x;
        m_nsb_state.y = msg->y;
        m_nsb_state.z = msg->z;
        m_nsb_state.r_f = msg->r_f;

        is_initialized = true;
      }

      void
      consume(const IMC::Target* msg)
      {
        m_obs_est.update(msg, m_lat0, m_lon0);
        m_obs_est.simulate(Clock::getSinceEpoch());
        m_has_obstacle = true;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_lat0 = msg->lat;
        m_lon0 = msg->lon;
        if (!has_estate)
        {
          has_estate = true;
          dispatch(m_nsb_request);
        }
        if (isActive() && is_initialized)
        {
          GeometricPath::PathReference path_ref;
          m_path.getPathReference(m_nsb_state.path_param, path_ref);

          //debug("Vehicle at x = %.2f, y = %.2f", msg->x, msg->y);
          //debug("Path reference: x = %.2f, y = %.2f, z = %.2f", path_ref.x, path_ref.y, path_ref.z);
          //debug("Path parameter %.3f", m_current_state.nsb_state.path_param);

          Vector3D path_err;
          GeometricPath::getPathFollowingError(path_ref, m_nsb_state.x, m_nsb_state.y, m_nsb_state.z, path_err);
          LineOfSight::LineOfSightOutput los_out;
          m_los.step(path_ref, path_err, los_out);

          //debug("Path error: x = %.2f, y = %.2f", path_err.x, path_err.y);
          //debug("LOS vector: x = %.2f, y = %.2f, z = %.2f", los_out.velocity.x, los_out.velocity.y, los_out.velocity.z);

          if (m_has_obstacle)
          {
            m_obs_est.simulate(Clock::getSinceEpoch());
            //debug("Obstacle at x = %.2f, y = %.2f. Speed v_x = %.2f, v_y = %.2f", m_obs_est.m_obstacle_state.x, m_obs_est.m_obstacle_state.y, m_obs_est.m_obstacle_state.vx, m_obs_est.m_obstacle_state.vy);
            m_obs_avoid.step(m_nsb_state.x, m_nsb_state.y, 
                            m_obs_est.m_obstacle_state, m_nsb_state.r_f, los_out);
            //debug("LOS vector after OA: x = %.2f, y = %.2f, z = %.2f", los_out.velocity.x, los_out.velocity.y, los_out.velocity.z);
          }

          Vector3D sigma;
          sigma.x = msg->x - m_nsb_state.x;
          sigma.y = msg->y - m_nsb_state.y;
          sigma.z = msg->depth - m_nsb_state.z;
          Vector3D form_velocity;
          m_form.step(path_ref, sigma, los_out.path_parameter_derivative, form_velocity);

          //debug("Formation error: x = %.2f, y = %.2f", sigma.x, sigma.y);
          //debug("Formation velocity: x = %.2f, y = %.2f", form_velocity.x, form_velocity.y);

          m_linstate.vx = los_out.velocity.x + form_velocity.x;
          m_linstate.vy = los_out.velocity.y + form_velocity.y;
          m_linstate.vz = los_out.velocity.z + form_velocity.z;
          dispatch(m_linstate);

          if (m_T_stop > 0.) // check for time-based termination
          {
            if (m_T_start < 0.) // first-time step -- get current timestamp
              m_T_start = Time::Clock::get();
            else if ((Time::Clock::get() - m_T_start >= m_T_stop))
            {
              debug("Reached experiment termination time.");
              m_active = false;
              requestDeactivation();
              dispatch(m_stop_experiment);
            }            
          }
          if (m_param_stop > 0.) // check for parameter-based termination
          {
            if ((m_nsb_state.path_param > m_param_stop))
            {
              debug("Reached experiment termination parameter.");
              m_active = false;
              requestDeactivation();
              dispatch(m_stop_experiment);
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
