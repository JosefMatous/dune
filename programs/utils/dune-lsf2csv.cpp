//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Utility to extract compressed images from LSF files.                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

inline void
write_common_header(std::ofstream& out)
{
  out << "timestamp (seconds since 01/01/1970), system, entity, ";
}

inline void
write_estate_header(std::ofstream& out)
{
  write_common_header(out);
  out << "lat (rad), lon (rad), height (m), x (m), y (m), z (m), phi (rad), theta (rad), psi (rad), u (m/s), v (m/s), w (m/s), vx (m/s), vy (m/s), vz (m/s), p (rad/s), q (rad/s), r (rad/s), depth (m), alt (m)" << std::endl;
}

inline void
write_target_header(std::ofstream& out)
{
  write_common_header(out);
  out << "label, lat (rad), lon (rad), z (m), z_units (enumerated), cog (rad), sog (m/s)" << std::endl;
}

inline void
write_nsb_header(std::ofstream& out)
{
  write_common_header(out);
  out << "path_param, x (m), y (m), z (m), r_f (m), P" << std::endl;
}

inline void
write_header(std::string message_name, std::ofstream& out)
{
  if (message_name == "EstimatedState")
  {
    write_estate_header(out);
    return;
  }

  if (message_name == "Target")
  {
    write_target_header(out);
    return;
  }

  if (message_name == "NSBMsg")
  {
    write_nsb_header(out);
    return;
  }

  if (message_name == "NSBState")
  {
    write_nsb_header(out);
    return;
  }

  throw std::runtime_error("Unrecognized message name");
}

inline void
write_timestamp_and_source(const DUNE::IMC::Message* msg, std::ofstream& out)
{
  out.precision(6);
  out << msg->getTimeStamp() << ", ";
  out << msg->getSource() << ", ";
  out << (int)msg->getSourceEntity() << ", ";
}

inline void
write_message(const DUNE::IMC::EstimatedState* msg, std::ofstream& out)
{
  write_timestamp_and_source(msg, out);

  out.precision(8);
  out << msg->lat << ", " << msg->lon << ", ";

  out.precision(6);
  out << msg->height << ", " <<
        msg->x << ", " <<
        msg->y << ", " <<
        msg->z << ", " <<
        msg->phi << ", " <<
        msg->theta << ", " <<
        msg->psi << ", " <<
        msg->u << ", " <<
        msg->v << ", " <<
        msg->w << ", " <<
        msg->vx << ", " <<
        msg->vy << ", " <<
        msg->vz << ", " <<
        msg->p << ", " <<
        msg->q << ", " <<
        msg->r << ", " <<
        msg->depth << ", " <<
        msg->alt << std::endl;
}

inline void
write_message(const DUNE::IMC::Target* msg, std::ofstream& out)
{
  write_timestamp_and_source(msg, out);

  out << msg->label << ", ";
  out.precision(8);
  out << msg->lat << ", " << msg->lon << ", ";

  out.precision(6);
  out << msg->z << ", ";
  switch (msg->z_units)
  {
  case IMC::Z_ALTITUDE:
    out << "ALTITUDE, ";
    break;
  case IMC::Z_DEPTH:
    out << "DEPTH, ";
    break;
  case IMC::Z_HEIGHT:
    out << "HEIGHT, ";
    break;
  default:
    out << "NONE, ";
    break;
  }
  out << msg->cog << ", " << msg->sog << std::endl;
}

inline void
write_message(const DUNE::IMC::NSBMsg* msg, std::ofstream& out)
{
  write_timestamp_and_source(msg, out);

  out.precision(6);
  out << msg->path_param << ", " <<
        msg->x << ", " <<
        msg->y << ", " <<
        msg->z << ", " <<
        msg->r_f << ", " <<
        msg->p << std::endl;
}

inline void
write_message(const DUNE::IMC::NSBState* msg, std::ofstream& out)
{
  write_timestamp_and_source(msg, out);

  out.precision(6);
  out << msg->path_param << ", " <<
        msg->x << ", " <<
        msg->y << ", " <<
        msg->z << ", " <<
        msg->r_f << ", " <<
        msg->p << std::endl;
}

inline void
write_message(const DUNE::IMC::Message* msg, std::ofstream& out)
{
  if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
  {
    write_message((const IMC::EstimatedState*) msg, out);
    return;
  }

  if (msg->getId() == DUNE_IMC_TARGET)
  {
    write_message((const IMC::Target*) msg, out);
    return;
  }

  if (msg->getId() == DUNE_IMC_NSBMSG)
  {
    write_message((const IMC::NSBMsg*) msg, out);
    return;
  }

  if (msg->getId() == DUNE_IMC_NSBSTATE)
  {
    write_message((const IMC::NSBState*) msg, out);
    return;
  }
}

const char*
get_message_name(const DUNE::IMC::Message* msg)
{
  if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
  {
    return "EstimatedState";
  }

  if (msg->getId() == DUNE_IMC_TARGET)
  {
    return "Target";
  }

  if (msg->getId() == DUNE_IMC_NSBMSG)
  {
    return "NSBMsg";
  }

  if (msg->getId() == DUNE_IMC_NSBSTATE)
  {
    return "NSBState";
  }
  return "";
}

int
find_message_index(const DUNE::IMC::Message* msg, std::vector<std::string> msg_names)
{
  std::string msg_name(get_message_name(msg));
  for (unsigned i = 0; i < msg_names.size(); i++)
  {
    if (msg_names[i] == msg_name)
      return (int)i;
  }
  return -1;  
}

int
main(int argc, char** argv)
{
  if (argc <= 2)
  {
    std::cerr << "Usage: " << argv[0] << " Data.lsf[.gz] msg1 ... msgn -s id" << std::endl;
    std::cerr << "Optional argument: -s id: exports messages with the given source id" << std::endl;
    return 1;
  }

  int n_msg;
  bool filter;
  uint16_t filter_id = 0;
  if (std::string(argv[argc-2]) == "-s")
  {
    filter = true;
    filter_id = std::atoi(argv[argc-1]);
    n_msg = argc - 4;
  }
  else
  {
    filter = false;
    n_msg = argc - 2;
  }

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(argv[1]);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(argv[1], std::ios::binary);
  else
    is = new Compression::FileInput(argv[1], method);

  DUNE::IMC::Message* msg = NULL;

  Path folder = Path(argv[1]).dirname();

  std::vector<std::string> msg_names;
  std::vector<std::ofstream> msg_streams; 
  Path fname;

  try
  {
    for (int i = 0; i < n_msg; i++)
    {
      msg_names.push_back(argv[i+2]);
      fname = folder / String::str("%s.csv", argv[i+2]);
      msg_streams.push_back(std::ofstream(fname.c_str()));
      msg_streams[i].setf(std::ios::fixed, std::ios::floatfield);

      write_header(msg_names[i], msg_streams[i]);
    }

    while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
    {
      int i = find_message_index(msg, msg_names);
      if (i >= 0) 
      {
        if (!filter || msg->getSource()==filter_id)
          write_message(msg, msg_streams[i]);
      }

      delete msg;
    }

    for (int i = 0; i < n_msg; i++)
    {
      msg_streams[i].close();
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  delete is;
  msg_names.clear();
  msg_streams.clear();

  return 0;
}
