#ifndef ADAPTIVE_HEADWAY_DYNAMICCONTROLLER_ODE_HPP_
#define ADAPTIVE_HEADWAY_DYNAMICCONTROLLER_ODE_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace AdaptiveHeadway
{
  namespace DynamicController
  {
    class ODE
    {
    protected:
      double volume[3];
      double buoyancy[3];
      double addedmass[6];
      double bodylift[8];
      double mass;
      double imatrix[6];
      double ldrag[10];
      double qdrag[10];

      double eng_max_force;
      double eng_params[3];
      double eng_pos[3];
      double eng_ori[2];

      float m_position[3], m_orientation[3], m_linear_velocity[3], m_angular_velocity[3]; // Vehicle state

      inline double
      getSubmergedVolume(void)
      {
        float depth = m_position[2];
        double height = volume[2];
        double z;

        if (depth < (-height / 2))
          z = (depth - (height / 2));
        else
          z = (depth + (height / 2));

        trimValueMod(z, 0.0, height);

        return (volume[0] * volume[1] * z);
      }

      void
      applyRestoringForces(double f[6])
      {            
        double B = DUNE::Math::c_gravity * DUNE::Math::c_water_density * getSubmergedVolume();
        double W = mass * DUNE::Math::c_gravity;

        //f[0] += 0.0; // We will consider the AUV is neutrally buoyant in the x-axis.
        f[1] += (W - B) * std::cos(m_orientation[1]) * std::sin(m_orientation[0]);
        f[2] += (W - B) * std::cos(m_orientation[1]) * std::cos(m_orientation[0]);
        f[3] += buoyancy[2] * W * std::cos(m_orientation[1]) * std::sin(m_orientation[0]);
        f[4] += buoyancy[2] * W * std::sin(m_orientation[1]);
        f[5] += 0;
      }

      void
      applyCoriolisForce(double f[6])
      {
        // Vehicle center of gravity relative to center of buoyancy.
        double zg = -buoyancy[2];
        double m = mass;

        f[0] += (-m * zg * m_angular_velocity[2] * m_angular_velocity[0] +
                  -(m - addedmass[2]) * m_linear_velocity[2] * m_angular_velocity[1] +
                  +(m - addedmass[1]) * m_linear_velocity[1] * m_angular_velocity[2]);

        f[1] += ((m - addedmass[2]) * m_linear_velocity[2] * m_angular_velocity[0] +
                  -m * zg * m_angular_velocity[2] * m_angular_velocity[1] +
                  -(m - addedmass[0]) * m_linear_velocity[0] * m_angular_velocity[2]);

        f[2] += (m * zg * (m_angular_velocity[0] * m_angular_velocity[0] + m_angular_velocity[1] * m_angular_velocity[1]) +
                  -(m - addedmass[1]) * m_linear_velocity[1] * m_angular_velocity[0] +
                  +(m - addedmass[0]) * m_linear_velocity[0] * m_angular_velocity[1]);

        f[3] += (m * zg * m_angular_velocity[2] * m_linear_velocity[0] +
                  -(m - addedmass[2]) * m_linear_velocity[2] * m_linear_velocity[1] +
                  -(m * zg * m_angular_velocity[0] - (m - addedmass[1])
                    * m_linear_velocity[1]) * m_linear_velocity[2] +
                  -(imatrix[2] - addedmass[5]) * m_angular_velocity[2] * m_angular_velocity[1] +
                  +(imatrix[1] - addedmass[4]) * m_angular_velocity[1] * m_angular_velocity[2]);

        f[4] += ((m - addedmass[2]) * m_linear_velocity[2] * m_linear_velocity[0] +
                  +m * zg * m_angular_velocity[2] * m_linear_velocity[1] +
                  -(m * zg * m_angular_velocity[1] + (m - addedmass[0])
                    * m_linear_velocity[0]) * m_linear_velocity[2] +
                  +(imatrix[2] - addedmass[5]) * m_angular_velocity[2] * m_angular_velocity[0] +
                  -(imatrix[0] - addedmass[3]) * m_angular_velocity[0] * m_angular_velocity[2]);

        f[5] += (-(m - addedmass[1]) * m_linear_velocity[1] * m_linear_velocity[0] +
                  +(m - addedmass[0]) * m_linear_velocity[0] * m_linear_velocity[1] +
                  -(imatrix[1] - addedmass[4]) * m_angular_velocity[1] * m_angular_velocity[0] +
                  +(imatrix[0] - addedmass[3]) * m_angular_velocity[0] * m_angular_velocity[1]);

        //f[0] += 0;
        f[1] += (bodylift[0] * m_linear_velocity[1] +
                bodylift[1] * m_angular_velocity[2]) * m_linear_velocity[0];
        f[2] += (bodylift[2] * m_linear_velocity[2] +
                bodylift[3] * m_angular_velocity[1]) * m_linear_velocity[0];

        //f[3] += 0;
        f[4] += (bodylift[4] * m_linear_velocity[2] +
                bodylift[5] * m_angular_velocity[1]) * m_linear_velocity[0];
        f[5] += (bodylift[6] * m_linear_velocity[1] +
                bodylift[7] * m_angular_velocity[2]) * m_linear_velocity[0];
      }

      void
      applyDragForces(double f[6])
      {
        f[0] += ldrag[0] * m_linear_velocity[0];
        f[1] += (ldrag[1] * m_linear_velocity[1] +
                    ldrag[6] * m_angular_velocity[2]);
        f[2] += (ldrag[2] * m_linear_velocity[2] +
                    ldrag[7] * m_angular_velocity[1]);

        f[3] += ldrag[3] * m_angular_velocity[0];
        f[4] += (ldrag[4] * m_angular_velocity[1] +
                    ldrag[8] * m_linear_velocity[2]);
        f[5] += (ldrag[5] * m_angular_velocity[2] +
                    ldrag[9] * m_linear_velocity[1]);


        f[0] += qdrag[0] * m_linear_velocity[0] * std::fabs(m_linear_velocity[0]);
        f[1] += (qdrag[1] * m_linear_velocity[1] * std::fabs(m_linear_velocity[1]) +
              qdrag[6] * m_angular_velocity[2] * std::fabs(m_angular_velocity[2]));
        f[2] += (qdrag[2] * m_linear_velocity[2] * std::fabs(m_linear_velocity[2]) +
              qdrag[7] * m_angular_velocity[1] * std::fabs(m_angular_velocity[1]));

        f[3] += qdrag[3] * m_angular_velocity[0] * std::fabs(m_angular_velocity[0]);
        f[4] += (qdrag[4] * m_angular_velocity[1] * std::fabs(m_angular_velocity[1]) +
              qdrag[8] * m_linear_velocity[2] * std::fabs(m_linear_velocity[2]));
        f[5] += (qdrag[5] * m_angular_velocity[2] * std::fabs(m_angular_velocity[2]) +
              qdrag[9] * m_linear_velocity[1] * std::fabs(m_linear_velocity[1]));
      }

    public:
      ODE(Parsers::Config& cfg)
      {
        // To allow different types of vehicles.
        std::string model;
        cfg.get("General", "Vehicle Type", "lauv", model);

        // Build model's complete section name.
        std::string section = "VSIM/Model/" + model;

        // Retrieve vehicle's volume.        
        if (!cfg.getList(section, "Volume", volume, 3))
          throw std::runtime_error("Error loading configuration");

        // Retrieve vehicle's buoyancy.
        if (!cfg.getList(section, "Buoyancy", buoyancy, 3))
          throw std::runtime_error("Error loading configuration");

        // Retrieve added mass coefficient.        
        if (!cfg.getList(section, "Added Mass Coefficients", addedmass, 6))
          throw std::runtime_error("Error loading configuration");

        // Retrieve lift coefficient.
        
        if (!cfg.getList(section, "Body Lift Coefficients", bodylift, 8))
          throw std::runtime_error("Error loading configuration");

        // Retrieve mass.
        cfg.get(section, "Mass", "0.0", mass);

        // Retrieve mass prop.      
        if (!cfg.getList(section, "Inertial Matrix", imatrix, 6))
          throw std::runtime_error("Error loading configuration");

        // Retrieve linear drag coefficient.      
        if (!cfg.getList(section, "Linear Drag Coefficients", ldrag, 10))
          throw std::runtime_error("Error loading configuration");

        // Retrieve quadratic drag coefficient.
        if (!cfg.getList(section, "Quadratic Drag Coefficients", qdrag, 10))
          throw std::runtime_error("Error loading configuration");

        // Retrieve engine configuration.
        cfg.get(section, "Engine Max Force", "12", eng_max_force);
        if (!cfg.getList(section, "Engine Parameters 0", eng_params, 3)
            || !cfg.getList(section, "Engine Position 0", eng_pos, 3)
            || !cfg.getList(section, "Engine Orientation 0", eng_ori, 2))
          throw std::runtime_error("Error loading configuration");
      }

      inline void
      setState(const IMC::EstimatedState& estate)
      {
        this->m_position[0] = estate.x;
        this->m_position[1] = estate.y;
        this->m_position[2] = estate.depth;

        this->m_orientation[0] = estate.phi;
        this->m_orientation[1] = estate.theta;
        this->m_orientation[2] = estate.psi;

        this->m_linear_velocity[0] = estate.u;
        this->m_linear_velocity[1] = estate.v;
        this->m_linear_velocity[2] = estate.w;

        this->m_angular_velocity[0] = estate.p;
        this->m_angular_velocity[1] = estate.q;
        this->m_angular_velocity[2] = estate.r;
      }

      //! Vehicle zero-input ODEs 
      void
      vehicleODE(Vector3D<double> &v_dot, Vector3D<double> &w_dot)
      {
        double f[6];
        std::memset(f, 0, 6*sizeof(double));
        applyRestoringForces(f);
        applyCoriolisForce(f);
        applyDragForces(f);

        v_dot.x = f[0] / imatrix[0];
        v_dot.y = f[1] / imatrix[1];
        v_dot.z = f[2] / imatrix[2];

        w_dot.x = f[3] / imatrix[3];
        w_dot.y = f[4] / imatrix[4];
        w_dot.z = f[5] / imatrix[5];
      }

      //! Finds engine actuation that produces the desired surge acceleration as closely as possible
      double
      findEngineActuation(double f_u)
      {
        // Solve quadratic equation
        //    a*rpm^2 - b*rpm = c,
        // where
        //    a = eng_params[0] / 60^2
        //    b = eng_params[1] * speed / 60
        //    c = f_u * mass
        // subject to rpm > 0
        
        double a = eng_params[0] * 2.77777777777777777777777777777777777777778e-04; // 1/3600 = 2.77777...e-4
        double b = eng_params[1] * std::fabs(m_linear_velocity[0]) * 0.016666666666666666666666666666666666666666666666667; // 1/60 = 0.01666...
        double c = f_u * imatrix[0];
        if (c < 0.)
          c = 0.;

        double det = std::sqrt(std::pow(b, 2.0) + 4*a*c);
        return (b + det) / (2*a);
      }

      //! Calculates the roll, pitch, and yaw torques that produce the desired accelerations
      inline void
      findTorques(IMC::DesiredControl &torque, double f_p, double f_q, double f_r)
      {
        torque.k = f_p * imatrix[3];
        torque.m = f_q * imatrix[4];
        torque.n = f_r * imatrix[5];
      }
    };  
  }
}

#endif
