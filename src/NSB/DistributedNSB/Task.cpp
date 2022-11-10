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

namespace NSB
{
  //! Distributed NSB algorithm
  //!
  //! This task implements the distributed NSB algorithm.
  //! @author Josef Matous
  namespace DistributedNSB
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! Required control loops
      static const uint32_t c_required = IMC::CL_VELOCITY | IMC::CL_DEPTH;      

      Ellipse m_path;
      LineOfSight m_los;
      FormationKeeping m_form;
      double m_path_parameter;
      Delta m_last_step;
      struct
      {
        double x, y, z;
      } m_barycenter_estimate;   

      struct
      {
        //! Stop time
        double m_T_stop;
        //! Stop parameter
        double m_param_stop;
        //! Consensus gain
        double k_consensus;
      } m_nsb_parameters;  

      std::vector<double> m_formation_shape;

      IMC::DesiredLinearState m_linstate;
      IMC::DesiredZ m_z;
      IMC::ControlLoops m_cloops;
      IMC::CurvedPathReference m_path_ref;
      IMC::NSBMsg m_nsb_msg;
      IMC::Reference m_final_ref;

      //! Control loops last reference
      uint32_t m_scope_ref;
      //! Active loops
      uint32_t m_aloops;    

      //! Timestamp of experiment start
      double m_T_start;
      //! Vehicle is in maneuver mode
      bool m_is_maneuvering;  
      //! Vehicle is executing "follow_nsb" plan
      bool m_is_executing;
      //! True if the task already sent a termination message
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
        bind<IMC::NSBMsg>(this);

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

        param("Experiment Stop Time", m_nsb_parameters.m_T_stop)
          .defaultValue("-1")
          .description("The task is stopped after the given time. Enter negative value to ignore this.");
        param("Experiment Stop Parameter", m_nsb_parameters.m_param_stop)
          .defaultValue("-1")
          .description("The task is stop when path parameter exceeds the given value. Enter negative value to ignore this.");

        param("Consensus Gain", m_nsb_parameters.k_consensus)
          .defaultValue("0.3");

        param("Formation Keeping -- Shape", m_formation_shape)
          .defaultValue("0., 0., 0.")
          .size(3)
          .description("Position of the vehicle within the formation");
        param("Formation Keeping -- Gain", m_form.k_form)
          .defaultValue("0.3")
          .minimumValue("0.")
          .description("Formation keeping task gain");
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
        if (m_nsb_parameters.m_T_stop < 0. && m_nsb_parameters.m_param_stop < 0.)
          war("Both time and parameter stop conditions are inactive. The experiment will run until stopped externally.");

        if (paramChanged(m_formation_shape))
        {
          m_form.p_form.x = m_formation_shape[0];
          m_form.p_form.y = m_formation_shape[1];
          m_form.p_form.z = m_formation_shape[2];
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
        m_path_parameter = 0.;
        m_is_maneuvering = false;
        m_is_executing = false;
        m_T_start = -1.;
        m_sent_termination = false;

        m_barycenter_estimate.x = NAN;
        m_barycenter_estimate.y = NAN;
        m_barycenter_estimate.z = NAN;
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

      inline bool
      isBarycenterNaN(void)
      {
        return isNaN(m_barycenter_estimate.x) && isNaN(m_barycenter_estimate.y) && isNaN(m_barycenter_estimate.z);
      }

      void
      consume(const IMC::NSBMsg* msg)
      {
        //debug("Received NSB message from %u", msg->getSource());
        if (!isBarycenterNaN() && (msg->getSource() != getSystemId()))
        {
          //debug("Performing consensus with %s", resolveSystemId(msg->getSource()));
          m_path_parameter += m_nsb_parameters.k_consensus * (msg->path_param - m_path_parameter);

          m_barycenter_estimate.x += m_nsb_parameters.k_consensus * (msg->x - m_barycenter_estimate.x);
          m_barycenter_estimate.y += m_nsb_parameters.k_consensus * (msg->y - m_barycenter_estimate.y);
          m_barycenter_estimate.z += m_nsb_parameters.k_consensus * (msg->z - m_barycenter_estimate.z);
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (isActive())
        {
          if (isBarycenterNaN())
          {
            m_barycenter_estimate.x = msg->x;
            m_barycenter_estimate.y = msg->y;
            m_barycenter_estimate.z = msg->depth;
          }

          GeometricPath::PathReference path_ref = m_path.getPathReference(m_path_parameter);
          debug("kappa %f, iota %f", path_ref.kappa, path_ref.iota);

          // Dispatch path reference
          m_path_ref.param = m_path_parameter;
          m_path_ref.lat = path_ref.lat;
          m_path_ref.lon = path_ref.lon;
          m_path_ref.z = path_ref.z;
          m_path_ref.theta = path_ref.theta;
          m_path_ref.psi = path_ref.psi;
          dispatch(m_path_ref);

          // Path-following task
          double lat_barycenter = msg->lat;
          double lon_barycenter = msg->lon;
          WGS84::displace(m_barycenter_estimate.x, m_barycenter_estimate.y, &lat_barycenter, &lon_barycenter);
          Vector3D path_err =  GeometricPath::getPathFollowingError(path_ref, lat_barycenter, lon_barycenter, m_barycenter_estimate.z);
          LineOfSight::LineOfSightOutput los_out = m_los.step(path_ref, path_err);

          m_linstate.vx = los_out.velocity.x;
          m_linstate.vy = los_out.velocity.y;
          m_linstate.vz = los_out.velocity.z;

          // Formation-keeping task
          // formation-keeping variable
          // definition: sigma = vehicle_position - barycenter_position
          Vector3D sigma;
          sigma.x = msg->x - m_barycenter_estimate.x;
          sigma.y = msg->y - m_barycenter_estimate.y;
          sigma.z = msg->depth - m_barycenter_estimate.z;

          Vector3D form_out = m_form.step(path_ref, sigma, los_out.path_parameter_derivative);

          // Dispatch the velocity reference
          m_linstate.vx += form_out.x;
          m_linstate.vy += form_out.y;
          m_linstate.vz += form_out.z;
          dispatch(m_linstate);

          // Update NSB variables
          double delta_t = m_last_step.getDelta();
          if (delta_t > 0.)
          {
            m_path_parameter += delta_t * los_out.path_parameter_derivative;
            double speed_ratio = std::sqrt((square(msg->u) + square(msg->v) + square(msg->w))
                    / (square(m_linstate.vx) + square(m_linstate.vy) + square(m_linstate.vz)));
            m_barycenter_estimate.x += delta_t * los_out.velocity.x * speed_ratio;
            m_barycenter_estimate.y += delta_t * los_out.velocity.y * speed_ratio;
            m_barycenter_estimate.z += delta_t * los_out.velocity.z * speed_ratio;
          }

          m_nsb_msg.path_param = m_path_parameter;
          m_nsb_msg.x = m_barycenter_estimate.x;
          m_nsb_msg.y = m_barycenter_estimate.y;
          m_nsb_msg.z = m_barycenter_estimate.z;
          m_nsb_msg.setDestination(getSystemId());
          m_nsb_msg.setDestinationEntity(resolveEntity("NSB Message Transport"));
          dispatch(m_nsb_msg);

          if (m_nsb_parameters.m_T_stop > 0.) // check for time-based termination
          {
            if (m_T_start < 0.) // first-time step -- get current timestamp
              m_T_start = Time::Clock::get();
            else if ((Time::Clock::get() - m_T_start >= m_nsb_parameters.m_T_stop) && !m_sent_termination)
            {
              debug("Reached experiment termination time.");
              terminateExperiment(path_ref.lat, path_ref.lon);
            }            
          }
          if (m_nsb_parameters.m_param_stop > 0.) // check for parameter-based termination
          {
            if ((m_path_parameter > m_nsb_parameters.m_param_stop) && !m_sent_termination)
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
