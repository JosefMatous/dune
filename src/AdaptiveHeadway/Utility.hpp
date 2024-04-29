#ifndef ADAPTIVEHEADWAY_UTILITY_HPP_
#define ADAPTIVEHEADWAY_UTILITY_HPP_

#include <DUNE/DUNE.hpp>

namespace AdaptiveHeadway
{
  using DUNE_NAMESPACES;

  template<typename T>
  struct Vector3D
  {
    T x, y, z;

    Vector3D<T>&
    operator+=(const Vector3D<T> &a)
    {
      this->x += a.x;
      this->y += a.y;
      this->z += a.z;

      return *this;
    }

    Vector3D<T>&
    operator-=(const Vector3D<T> &a)
    {
      this->x -= a.x;
      this->y -= a.y;
      this->z -= a.z;

      return *this;
    }

    Vector3D<T>&
    operator*=(T a)
    {
      this->x *= a;
      this->y *= a;
      this->z *= a;

      return *this;
    }
  };

  template<typename T>
  inline void
  zeros(Vector3D<T> &a)
  {
    a.x = 0;
    a.y = 0;
    a.z = 0;
  }

  template<typename T>
  Vector3D<T>
  operator+(const Vector3D<T> &a, const Vector3D<T> &b)
  {
    Vector3D<T> result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;

    return result;
  }

  template<typename T>
  Vector3D<T>
  operator-(const Vector3D<T> &a, const Vector3D<T> &b)
  {
    Vector3D<T> result;

    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;

    return result;
  }

  template<typename A, typename B>
  Vector3D<A>
  operator*(A a, const Vector3D<B> &x)
  {
    Vector3D<A> result;

    result.x = a * x.x;
    result.y = a * x.y;
    result.z = a * x.z;

    return result;
  }
  
  template<typename A, typename B>
  A dot(const Vector3D<A> &a, const Vector3D<B> &b)
  {
    return a.x*b.x + a.y*b.y + a.z*b.z;
  }

  template<typename T>
  inline T 
  norm(const Vector3D<T> &x)
  {
    return std::sqrt(dot(x, x));
  }

  template<typename T>
  void cross(Vector3D<T> &output, const Vector3D<T> &a, const Vector3D<T> &b)
  {
    output.x = a.y*b.z - a.z*b.y;
    output.y = a.z*b.x - a.x*b.z;
    output.z = a.x*b.y - a.y*b.x;
  }

  //! Generate rotation matrix in a column-major format
  inline void
  rotation_matrix(float* R, float phi, float theta, float psi)
  {
    float c_phi = std::cos(phi);
    float s_phi = std::sin(phi);
    float c_theta = std::cos(theta);
    float s_theta = std::sin(theta);
    float c_psi = std::cos(psi);
    float s_psi = std::sin(psi);

    R[0] = c_psi*c_theta;
    R[1] = c_theta*s_psi;
    R[2] = -s_theta;
    R[3] = c_psi*s_phi*s_theta - c_phi*s_psi;
    R[4] = c_phi*c_psi + s_phi*s_psi*s_theta;
    R[5] = c_theta*s_phi;
    R[6] = s_phi*s_psi + c_phi*c_psi*s_theta;
    R[7] = c_phi*s_psi*s_theta - c_psi*s_phi;
    R[8] = c_phi*c_theta;
  }

  inline void
  rotation_matrix(float* R, const EstimatedState &est)
  {
    rotation_matrix(R, est.phi, est.theta, est.psi);
  }

  //! Calculates the direction vector of the vehicle (R*[1;0;0])
  inline void
  direction_vector(Vector3D<float> &output, const EstimatedState &est)
  {
    float c_theta = std::cos(est.theta);
    float s_theta = std::sin(est.theta);
    float c_psi = std::cos(est.psi);
    float s_psi = std::sin(est.psi);

    output.x = c_psi*c_theta;
    output.y = c_theta*s_psi;
    output.z = -s_theta;
  }

  template<typename T>
  inline void
  timesR(Vector3D<T> &output, const float* R, const Vector3D<T> &a)
  {
    output.x = a.x*R[0] + a.y*R[3] + a.z*R[6];
    output.y = a.x*R[1] + a.y*R[4] + a.z*R[7];
    output.z = a.x*R[2] + a.y*R[5] + a.z*R[8];
  }

  template<typename T>
  inline void
  timesRinv(Vector3D<T> &output, const float* R, const Vector3D<T> &a)
  {
    output.x = a.x*R[0] + a.y*R[1] + a.z*R[2];
    output.y = a.x*R[3] + a.y*R[4] + a.z*R[5];
    output.z = a.x*R[6] + a.y*R[7] + a.z*R[8];
  }
}


#endif
