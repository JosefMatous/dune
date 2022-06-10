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

#ifndef UTILITIES_HPP_
#define UTILITIES_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace NSB
{
  //! Miscellaneous utility functions and structures.
  //!
  //! Utilities for NSB algorithm.
  //! @author Josef Matous
  namespace NSBAlgorithm
  {
    using DUNE_NAMESPACES;

    template <typename T>
    inline T square(T x)
    {
      return x*x;
    }

    struct Vector3D
    {
      double x, y, z;

      Vector3D()
      {
        x = 0.;
        y = 0.;
        z = 0.;
      }

      Vector3D(double xval, double yval, double zval)
      {
        x = xval;
        y = yval;
        z = zval;
      }
    };
    
    Vector3D
    calculateBarycenter(const IMC::GroupEstimatedState* msg)
    {
      Vector3D barycenter;
      barycenter.x = 0.;
      barycenter.y = 0.;
      barycenter.z = 0.;

      size_t length = msg->estate_list.size();
      IMC::MessageList<IMC::EstimatedState>::const_iterator itr = msg->estate_list.begin();
      for (; itr != msg->estate_list.end(); ++itr)
      {
        IMC::EstimatedState* estate = *itr;
        barycenter.x += estate->x / length;
        barycenter.y += estate->y / length;
        barycenter.z += estate->z / length;
      }

      return barycenter;
    }

    inline void
    followTheCarrotReference(IMC::Reference* ref, const IMC::EstimatedState* estate, Vector3D velocity, double T)
    {
      IMC::DesiredSpeed spd;
      spd.value = std::sqrt(square(velocity.x) + square(velocity.y) + square(velocity.z));
      spd.speed_units = IMC::SUNITS_METERS_PS;
      ref->speed.set(&spd);

      double x_carrot = estate->x + T * velocity.x;
      double y_carrot = estate->y + T * velocity.y;
      double z_carrot = estate->z + T * velocity.z;

      IMC::DesiredZ z_ref;
      z_ref.value = z_carrot;
      z_ref.z_units = IMC::Z_DEPTH;
      ref->z.set(&z_ref);

      ref->lat = estate->lat;
      ref->lon = estate->lon;
      WGS84::displace(x_carrot, y_carrot, &(ref->lat), &(ref->lon));

      ref->flags = IMC::Reference::FLAG_LOCATION | IMC::Reference::FLAG_SPEED | IMC::Reference::FLAG_Z;
      ref->setDestination(estate->getSource());
    }
  }
}

#endif
