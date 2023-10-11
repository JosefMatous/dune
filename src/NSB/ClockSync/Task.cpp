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
  //! ClockSync
  //!
  //! Handles synchronization between system clocks.
  //! @author Josef Matous
  namespace ClockSync
  {
    using DUNE_NAMESPACES;


    struct Task: public DUNE::Tasks::Task
    {
      //! Measured clock difference
      std::map<uint16_t, double> m_clock_diff;
      //! Intermediate measurements
      std::map<uint16_t, std::vector<double>> m_measurements;

      struct
      {
        //! Perform and average N measurements before sending the clock diff.
        uint16_t N_measurements;
        //! Initial period.
        uint16_t init_decimation;
        //! Final period.
        uint16_t final_decimation;
        //! Threshold for outlier rejection.
        double outlier_thres;
      } m_params;

      IMC::ClockSync m_clock_sync;
      IMC::ClockOffset m_clock_offset;  

      uint16_t m_current_request, m_decimation_counter, m_transmission_counter;
      double m_current_timestamp;  
      double m_k_update; // Moving average update constant  

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::ClockSync>(this);
        bind<IMC::EstimatedState>(this);

        param("Number of Measurements", m_params.N_measurements)
          .defaultValue("20")
          .description("Number of measurements before calculating the clock difference.")
          .minimumValue("1"); 
        param("Initial Decimation", m_params.init_decimation)
          .defaultValue("10")
          .minimumValue("1")
          .description("Reduces the frequency of the task by a given factor.");
        param("Final Decimation", m_params.final_decimation)
          .defaultValue("100")
          .minimumValue("1")
          .description("Reduces the frequency of the task by a given factor.");
        param("Outlier Threshold", m_params.outlier_thres)
          .defaultValue("0.1")
          .minimumValue("0")
          .description("Reject measurement that differ from the mean by the given value.");

        m_current_request = 0U;
        m_decimation_counter = 0U;
        m_transmission_counter = 0U;
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_params.N_measurements))
          m_k_update = 1. / m_params.N_measurements;
      }

      inline void
      dispatchClockOffset(uint16_t sys_id)
      {
        m_clock_offset.system = sys_id;
        m_clock_offset.offset = m_clock_diff[sys_id];
        dispatch(m_clock_offset);
      }

      void
      consume(const IMC::ClockSync* msg)
      {
        if (msg->getSource() != getSystemId())
        {
          if (msg->op == IMC::ClockSync::OP_REQUEST)
          {
            m_clock_sync.op = IMC::ClockSync::OP_REPLY;
            m_clock_sync.id = msg->id;
            m_clock_sync.setDestination(msg->getSource());
            dispatch(m_clock_sync);
            //debug("Received clock sync request from %s", m_ctx.resolver.resolve(msg->getSource()));
          }
          else if (msg->getDestination() == getSystemId() && msg->id == m_current_request)
          {
            double ping = Clock::getSinceEpoch() - m_current_timestamp;
            //debug("Ping: %.3f seconds", ping);
            double clock_diff = m_current_timestamp - msg->getTimeStamp() - 0.5*ping;
            //debug("Estimated clock difference: %.3f seconds", clock_diff);
            ++m_transmission_counter;

            // Decide what to do with the measurement
            // Check if entry exists in m_clock_diff
            std::map<uint16_t, double>::iterator search_clock_diff = m_clock_diff.find(msg->getSource());
            if (search_clock_diff != m_clock_diff.end())
            {
              double measurement_error = clock_diff - search_clock_diff->second;
              if (std::fabs(measurement_error) <= m_params.outlier_thres) // outlier rejection
              {
                search_clock_diff->second += m_k_update * measurement_error;
                dispatchClockOffset(msg->getSource());
              }
              return;
            }
            // Check if entry exists in m_measurements
            std::map<uint16_t, std::vector<double>>::iterator search_measurement = m_measurements.find(msg->getSource());
            if (search_measurement != m_measurements.end())
            {
              search_measurement->second.push_back(clock_diff); // add the measurement to the list
              if (search_measurement->second.size() >= m_params.N_measurements) // check if we have enough measurements
              {
                double clock_diff_median = Math::median(search_measurement->second.data(), search_measurement->second.size());
                m_clock_diff.insert({msg->getSource(), clock_diff_median});
                dispatchClockOffset(msg->getSource());
              }
              return;
            }
            // Create an entry in m_measurements
            //debug("Creating measurement list for %s", m_ctx.resolver.resolve(msg->getSource()));
            std::vector<double> measurement_vector;
            measurement_vector.push_back(clock_diff);
            m_measurements.insert({msg->getSource(), measurement_vector});
          }
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
          
        uint16_t current_decimation = (m_transmission_counter < m_params.N_measurements) ? m_params.init_decimation : m_params.final_decimation;
        if ((++m_decimation_counter % current_decimation) > 0)
          return;
        ++m_current_request;
        m_current_timestamp = Clock::getSinceEpoch();
        m_clock_sync.op = IMC::ClockSync::OP_REQUEST;
        m_clock_sync.id = m_current_request;
        dispatch(m_clock_sync);
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