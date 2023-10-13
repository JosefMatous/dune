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
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 58825b3e2a70188420fab006d9d22775                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.021276204962428658);
    msg.setSource(29417U);
    msg.setSourceEntity(165U);
    msg.setDestination(45960U);
    msg.setDestinationEntity(124U);
    msg.state = 76U;
    msg.flags = 254U;
    msg.description.assign("NFDCEOEBMNOMBCGCHOPYNZTRGAZNSJKXWZGTYKXOXJWHBGGAQAFMVDECOLXXQPFJPHGKEISHDWFDKVDWGQHSRNCKBZFTWKNMMBSRRVYBYHEIUXQPTFNPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.6536991254636373);
    msg.setSource(45997U);
    msg.setSourceEntity(225U);
    msg.setDestination(56128U);
    msg.setDestinationEntity(157U);
    msg.state = 23U;
    msg.flags = 179U;
    msg.description.assign("MAJHPRGCHDQVJGLPHJDZNROQNSVVWNKTCNTOYDMYPLYGPLHEHLEYXETDIVWAMGDVXQZCQYFVPFYZKXOQMISBFXUDGKFWKJXIUUSBZMWWAOXHCGOPNLWFERYJLDWYZPZQSSBJTIGPAMDZTYQXVKASBURANUFBSOIBEVQATKCSKRHQOIXXYGACZBUNRSHHCMUCUMAFMABODEERFQCPZLJSIEUJKOKNCXHRDVNFGWFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.3882332251130898);
    msg.setSource(12537U);
    msg.setSourceEntity(110U);
    msg.setDestination(45799U);
    msg.setDestinationEntity(174U);
    msg.state = 218U;
    msg.flags = 41U;
    msg.description.assign("NVUCMMKLPCBILTBQNBOUTCZTMRGXVEZNZWPRPLXLYVAKZXHMOKUAVSUICXFTVNWTRFOJRVKLCXSZTHHWSBUSHPJYNJLMTJIEGCUUQDNUDZQPDYAVIGRDBGQDWQYJDMAKGSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.39490099531404);
    msg.setSource(49906U);
    msg.setSourceEntity(235U);
    msg.setDestination(65474U);
    msg.setDestinationEntity(239U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.3761876014277026);
    msg.setSource(629U);
    msg.setSourceEntity(57U);
    msg.setDestination(13376U);
    msg.setDestinationEntity(171U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.9418777981251127);
    msg.setSource(43180U);
    msg.setSourceEntity(152U);
    msg.setDestination(33303U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.2892962213718965);
    msg.setSource(36302U);
    msg.setSourceEntity(180U);
    msg.setDestination(56292U);
    msg.setDestinationEntity(134U);
    msg.id = 61U;
    msg.label.assign("RHOBDCTTQSQDOSXWNVIWFHCRUNOYOZUQKVZKPGYIVSNJVXGBJCREYWHBWJIPXVJLDLWTUQTFMPDOTEUZJC");
    msg.component.assign("ZCSHGAUHNKZDXRFRYLGCVPQBWHNZREQRTHIQWOVTAIJDBCVSRGUDSMJGMYWIYPAHMOLOBFAPSAJGCLXCQJDABPHFQNJUNXQSPMPYFJPEXSDCVZEWLMGXKKXYEVTGBBEBNETAHMYPSRXLPJQYOSYEWTBFRSNZUCTANOZHIKCWEONXZYOBLTZQSUWRWFMPTNLFTDUNJWKEDGZFYMVAZI");
    msg.act_time = 34698U;
    msg.deact_time = 41825U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.16897512418411365);
    msg.setSource(17881U);
    msg.setSourceEntity(40U);
    msg.setDestination(6934U);
    msg.setDestinationEntity(54U);
    msg.id = 28U;
    msg.label.assign("NZSIEHWEMP");
    msg.component.assign("XPWYBITPYFDHBZWTXTDWNDAEWYAMGKTYQFISLBPGORHRKRLQECGHJVORKPWYVIJHBHWXGYCHJERDLRFSAONDUPSGFJDIDQZGSTFOOZEVCDWPQMMEVAOTULEBOIKNADMZAUKSQJXUBNGZZYNWJNFCXNJEJBUPLFPZBUNXSCMHHVRKQLRAUCUUEAXHZCLLLOKGNJMAITSIGMXKMVIBQSPX");
    msg.act_time = 55424U;
    msg.deact_time = 15299U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.2139609170991159);
    msg.setSource(6540U);
    msg.setSourceEntity(171U);
    msg.setDestination(19360U);
    msg.setDestinationEntity(38U);
    msg.id = 130U;
    msg.label.assign("UNSQVLNSBONMFWKSFTJWRGMQISGBJKJNQGTUGBAVUFAGMBDYTYCOFJIKTDFDVYHCCJWDVNZTTOXSVMRXLAKHTJPMNRSGAHIMPDKQPQONYZYJLKAEMWRJQBSUELZJZUBIKVXPIPXEHQRCHCEWFLODUISRVZB");
    msg.component.assign("PCQIPBYKKBKUUDYHKVVQTUVRDYOWZDXTYTTOAZUVLUIJZNTRPQZJSWTIOAGLBQEVEDSRMSWTEPDNSIKFMFXKHSNSQAFJGCSLDXAHLPCVNFGRYRORCJDOAOXNWBMAWPYEBNXSOAHJCHEXFNGZQFGLCPBOLGOTWLTDJVNWAJXHMCCAVDJRYRUQCURMUWGKBHGNGEBMEZFIKQKXEZMKABIFNZIFCPWLJETHIXYUR");
    msg.act_time = 48681U;
    msg.deact_time = 50294U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.044274129638070536);
    msg.setSource(60568U);
    msg.setSourceEntity(205U);
    msg.setDestination(36726U);
    msg.setDestinationEntity(227U);
    msg.id = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.7854453103420037);
    msg.setSource(13932U);
    msg.setSourceEntity(208U);
    msg.setDestination(50232U);
    msg.setDestinationEntity(142U);
    msg.id = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.6169212274398835);
    msg.setSource(62289U);
    msg.setSourceEntity(60U);
    msg.setDestination(53170U);
    msg.setDestinationEntity(177U);
    msg.id = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.6101706730637122);
    msg.setSource(35280U);
    msg.setSourceEntity(168U);
    msg.setDestination(36448U);
    msg.setDestinationEntity(4U);
    msg.op = 205U;
    msg.list.assign("UFAQUINQMALOSCHGLMYREOTYISWSANZWMKXLCBKFDNCRFQRFVEZQBBZPUHPVWMTUYTVWIIKLWCJTFXNUOJYNMQXSGUHHVJJRIFPGIAZXKBDPCIUXLNWZEBLZOXENKVS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.26730896459804887);
    msg.setSource(3094U);
    msg.setSourceEntity(26U);
    msg.setDestination(22862U);
    msg.setDestinationEntity(116U);
    msg.op = 187U;
    msg.list.assign("HHGPNKZYBMUQDJGXNRLPVLKSDFZUMGSEQPJQXGLCUIRCBCNBMEWLXUSCBTFMHPEGWABAOISGGBFSZVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.074031293474485);
    msg.setSource(60225U);
    msg.setSourceEntity(233U);
    msg.setDestination(57811U);
    msg.setDestinationEntity(248U);
    msg.op = 57U;
    msg.list.assign("OLFXIYEITWRILAYUHVGZBTDDPBHIDRNNYMHIKATVHXDYWSYSGCZQUKRXJAGTJFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.32921388249047634);
    msg.setSource(26738U);
    msg.setSourceEntity(30U);
    msg.setDestination(27192U);
    msg.setDestinationEntity(201U);
    msg.value = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.6845412142915377);
    msg.setSource(32006U);
    msg.setSourceEntity(95U);
    msg.setDestination(3234U);
    msg.setDestinationEntity(149U);
    msg.value = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.02947081146296071);
    msg.setSource(11801U);
    msg.setSourceEntity(7U);
    msg.setDestination(8910U);
    msg.setDestinationEntity(72U);
    msg.value = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.6076878563797006);
    msg.setSource(59610U);
    msg.setSourceEntity(2U);
    msg.setDestination(45307U);
    msg.setDestinationEntity(43U);
    msg.consumer.assign("FKYZXRQEXBZNDVTSYSYWTEXOBRUJGQXRMKGLLBWJVBSKGPQHRBUGIXVMWQKMJRIMCYWBEZLPDJITEMJSDVOPEYGLCVGAHFHCWQXCYAMDLFPGTWPLPRVMSVWTOYPJOPZ");
    msg.message_id = 13382U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.11937827434480242);
    msg.setSource(45491U);
    msg.setSourceEntity(158U);
    msg.setDestination(56678U);
    msg.setDestinationEntity(199U);
    msg.consumer.assign("QPCPVMOWCCZADOQUTLTINBSBTCOIHZNWRKQJJUWYVMEPEYNLSIKKFKUZREADTD");
    msg.message_id = 23958U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.20877698458981853);
    msg.setSource(51257U);
    msg.setSourceEntity(195U);
    msg.setDestination(55425U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("NHORIQKCKDXSFLIESZXDTMTTRWQCUGFYROPBPITSPPIBRULACJHOJQMKSNEZQBZJUCMNSJLTRCSTKBPHXUITUNSJXEFHPAXVYJGZUIASZUWGEABONLODW");
    msg.message_id = 20143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.14291952055143042);
    msg.setSource(53011U);
    msg.setSourceEntity(198U);
    msg.setDestination(36445U);
    msg.setDestinationEntity(81U);
    msg.type = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.9560623821231873);
    msg.setSource(42438U);
    msg.setSourceEntity(93U);
    msg.setDestination(8222U);
    msg.setDestinationEntity(174U);
    msg.type = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.4423718278215003);
    msg.setSource(5410U);
    msg.setSourceEntity(246U);
    msg.setDestination(14558U);
    msg.setDestinationEntity(137U);
    msg.type = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.21016962803861927);
    msg.setSource(17416U);
    msg.setSourceEntity(21U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(119U);
    msg.op = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.11488013511541018);
    msg.setSource(50600U);
    msg.setSourceEntity(45U);
    msg.setDestination(46890U);
    msg.setDestinationEntity(167U);
    msg.op = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.7630147900820413);
    msg.setSource(281U);
    msg.setSourceEntity(5U);
    msg.setDestination(47419U);
    msg.setDestinationEntity(206U);
    msg.op = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.9317103403256058);
    msg.setSource(41929U);
    msg.setSourceEntity(113U);
    msg.setDestination(43597U);
    msg.setDestinationEntity(245U);
    msg.total_steps = 241U;
    msg.step_number = 65U;
    msg.step.assign("FQSXNMINLOHRVCKWHBQCHJSUKFTYXPYJYPTAXRMFPASYCVGQAWOSISDWCKBETNUSDAAFDCBJIPZHHKVOVLAUNGCDEQBGGNMWPZLXTRROKSJDOIVLBUHXZWAXYULCLWIAFTMPRSGPIIZWJEGCQDYPJSKQGYEKIJYFLKUBCWEELATDETQOYWZPFGEVFBUOXBWQBCMOEQDV");
    msg.flags = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.451435484586583);
    msg.setSource(20876U);
    msg.setSourceEntity(203U);
    msg.setDestination(50598U);
    msg.setDestinationEntity(247U);
    msg.total_steps = 173U;
    msg.step_number = 160U;
    msg.step.assign("HQJGDUSOFDTNEIROKWNHLOIHBFSZMHSNMBCAYMMXHDRAGKNALVPHFIAXDFWCKNFNZFCVQXPRCYXSYNJUQJSZEPOMENXIQCSGTTBPAWKAMBRIECWGUFCYOXHYKCAPPFKRCODAZQHPGOINGUVETTQXHZIPERLRPWDOJWJGWTINILOVSVRQGEGXSLUDCKDTRGZLTMKWVYBBYQKKUJQJHVYMBDJFVZASEWXZEEJTOBULTSVVXZUPBLZYAQ");
    msg.flags = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.990365939727759);
    msg.setSource(22059U);
    msg.setSourceEntity(68U);
    msg.setDestination(51123U);
    msg.setDestinationEntity(163U);
    msg.total_steps = 169U;
    msg.step_number = 93U;
    msg.step.assign("PAARDFEKKNBSSGEUVNWGDMJIHMDBZXCHBAQPRXUOYQPEBOCRFOLOGEWEWRIMZYGVCRJTCXTKCTPYQWVYZRVNSJMPXIBGYPOJPWTJWBPUNVUNJZHIOFCOJAUOSYAHLFOHSFLOEBMXRWADZNFGYTISHLKITWMPZUBVEWRXDVGNATZRCQIKDAASVNVBTSKLEHZMSBDCHZUUVCLLQKUQJDELRPIQIGKWLQGYSJYFCGMXDXQXDMFTXLJAIZUQYFNE");
    msg.flags = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.5782270451005473);
    msg.setSource(31898U);
    msg.setSourceEntity(106U);
    msg.setDestination(21420U);
    msg.setDestinationEntity(188U);
    msg.state = 129U;
    msg.error.assign("VFNTXOFQKPXQHJQJYZZEYCZTRFEOSHYNUGWLLGFAAVINQOGXUODPTEQMGHYPDSMOVZBWLFGXWSLAIZFXWAFHTRVMKTVQEXNVMBPCCDXHGGWGZCEXLMDKYUUTOBKYJEGCDPABETDWGZNMPVUUDLVKIXAWSVFKAJUJRLCMEAHBDQBJTYIIRH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.030625157811863146);
    msg.setSource(5179U);
    msg.setSourceEntity(188U);
    msg.setDestination(15806U);
    msg.setDestinationEntity(83U);
    msg.state = 181U;
    msg.error.assign("EZNNQDESMSSAQRMMNBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.25230913053074344);
    msg.setSource(17751U);
    msg.setSourceEntity(147U);
    msg.setDestination(58329U);
    msg.setDestinationEntity(4U);
    msg.state = 143U;
    msg.error.assign("XRMATGCSIGTXCYUOUPGGUPNXMKAVRNQTEIBQPWLYSDKZCFKPROLSVABOMKHDHRLRHIGRYJFWVRFIDUSGAZYBGEWUXQMGDCLUGJEUWEIDLAFCJLJBRCJNHQQEEWTXOPEEAXHLSIUYJJBPIFNLIICZFNWUPLZYIHMKNDYJVOKNZDXTEZRZWTFEODTTPNZAOXYVVWKBBPFAQOVYSBSMDNWZKONXHDPRXFMAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.12071010962305717);
    msg.setSource(8622U);
    msg.setSourceEntity(5U);
    msg.setDestination(63580U);
    msg.setDestinationEntity(48U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.3350559809688626);
    msg.setSource(20498U);
    msg.setSourceEntity(167U);
    msg.setDestination(32454U);
    msg.setDestinationEntity(134U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.9444422798931138);
    msg.setSource(52035U);
    msg.setSourceEntity(140U);
    msg.setDestination(56876U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.36837169531084657);
    msg.setSource(57645U);
    msg.setSourceEntity(22U);
    msg.setDestination(22648U);
    msg.setDestinationEntity(237U);
    msg.op = 167U;
    msg.speed_min = 0.2921068551389361;
    msg.speed_max = 0.06449675056313786;
    msg.long_accel = 0.6806445327349538;
    msg.alt_max_msl = 0.9891883837037961;
    msg.dive_fraction_max = 0.8897407371352826;
    msg.climb_fraction_max = 0.8911567692906405;
    msg.bank_max = 0.19786755149354085;
    msg.p_max = 0.9762369649539359;
    msg.pitch_min = 0.663227251872794;
    msg.pitch_max = 0.33694501973215296;
    msg.q_max = 0.3277128506103192;
    msg.g_min = 0.8411972560381328;
    msg.g_max = 0.5289674868019874;
    msg.g_lat_max = 0.3690208342332105;
    msg.rpm_min = 0.7452921187905752;
    msg.rpm_max = 0.5295416829864422;
    msg.rpm_rate_max = 0.21154613079232543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.4200137617662978);
    msg.setSource(4094U);
    msg.setSourceEntity(62U);
    msg.setDestination(272U);
    msg.setDestinationEntity(196U);
    msg.op = 105U;
    msg.speed_min = 0.1689758543424763;
    msg.speed_max = 0.902030998865274;
    msg.long_accel = 0.2625161873406837;
    msg.alt_max_msl = 0.7704790544958203;
    msg.dive_fraction_max = 0.7613658180351839;
    msg.climb_fraction_max = 0.45369438115493343;
    msg.bank_max = 0.5773830381760601;
    msg.p_max = 0.6664169144250036;
    msg.pitch_min = 0.9625715643100653;
    msg.pitch_max = 0.8465945618119624;
    msg.q_max = 0.39413490939605567;
    msg.g_min = 0.9143806782418479;
    msg.g_max = 0.09789666166405309;
    msg.g_lat_max = 0.8106412103033165;
    msg.rpm_min = 0.20662883264815646;
    msg.rpm_max = 0.4956200017803307;
    msg.rpm_rate_max = 0.7446313246834669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.010157370962923573);
    msg.setSource(20306U);
    msg.setSourceEntity(60U);
    msg.setDestination(56144U);
    msg.setDestinationEntity(241U);
    msg.op = 249U;
    msg.speed_min = 0.1815880623353836;
    msg.speed_max = 0.9140549701489452;
    msg.long_accel = 0.3737986956203867;
    msg.alt_max_msl = 0.9296289095325544;
    msg.dive_fraction_max = 0.9006922871678256;
    msg.climb_fraction_max = 0.936483758093425;
    msg.bank_max = 0.7968494402084527;
    msg.p_max = 0.2375140897501229;
    msg.pitch_min = 0.4829681357612249;
    msg.pitch_max = 0.4143875653692871;
    msg.q_max = 0.4344520249240398;
    msg.g_min = 0.9919140655083634;
    msg.g_max = 0.9324425804250855;
    msg.g_lat_max = 0.7410757098079213;
    msg.rpm_min = 0.7224483447271915;
    msg.rpm_max = 0.0999191031536717;
    msg.rpm_rate_max = 0.09468591944304361;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.9662406093727379);
    msg.setSource(32242U);
    msg.setSourceEntity(12U);
    msg.setDestination(37231U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.6077343622334905);
    msg.setSource(29105U);
    msg.setSourceEntity(16U);
    msg.setDestination(63161U);
    msg.setDestinationEntity(155U);
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.5426662750941498;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.034512118655184665);
    msg.setSource(30152U);
    msg.setSourceEntity(221U);
    msg.setDestination(39173U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.839648470959329);
    msg.setSource(58251U);
    msg.setSourceEntity(179U);
    msg.setDestination(21361U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.32214916363309376;
    msg.lon = 0.9645176760967145;
    msg.height = 0.7401092880427254;
    msg.x = 0.9408588798517236;
    msg.y = 0.8381809875099628;
    msg.z = 0.35272330053421874;
    msg.phi = 0.2697576206308945;
    msg.theta = 0.4786619898040153;
    msg.psi = 0.9985140759149576;
    msg.u = 0.19739951808638467;
    msg.v = 0.9147143791505326;
    msg.w = 0.23995226312692508;
    msg.p = 0.24683785569423944;
    msg.q = 0.16907069786930706;
    msg.r = 0.5882540323515993;
    msg.svx = 0.8107339784365561;
    msg.svy = 0.5249356950596138;
    msg.svz = 0.5906401718895654;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.5776573523733282);
    msg.setSource(48584U);
    msg.setSourceEntity(244U);
    msg.setDestination(38976U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.9903737005762377;
    msg.lon = 0.8965881741839546;
    msg.height = 0.21636496081284828;
    msg.x = 0.5153213395013194;
    msg.y = 0.7310322686853886;
    msg.z = 0.039764693925715244;
    msg.phi = 0.5293909228541688;
    msg.theta = 0.4355556995874822;
    msg.psi = 0.6145390832463092;
    msg.u = 0.7377406240022154;
    msg.v = 0.41287179093625137;
    msg.w = 0.8409135156940201;
    msg.p = 0.22573133841029736;
    msg.q = 0.18723118674963624;
    msg.r = 0.7587849021296854;
    msg.svx = 0.38867944593611603;
    msg.svy = 0.2535061412542736;
    msg.svz = 0.942635870781178;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.7525347703128281);
    msg.setSource(33272U);
    msg.setSourceEntity(67U);
    msg.setDestination(28009U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.2567263373959172;
    msg.lon = 0.4913169999943916;
    msg.height = 0.2238942364985137;
    msg.x = 0.5004280636227786;
    msg.y = 0.3626040890446841;
    msg.z = 0.7350564647842138;
    msg.phi = 0.17255634274431664;
    msg.theta = 0.07008010586415703;
    msg.psi = 0.7805394193096569;
    msg.u = 0.375434608949458;
    msg.v = 0.2930520932836741;
    msg.w = 0.3994341146441617;
    msg.p = 0.5560516577180304;
    msg.q = 0.8231439608084753;
    msg.r = 0.7332382000505147;
    msg.svx = 0.005500044129346793;
    msg.svy = 0.3720385058446706;
    msg.svz = 0.5770141934535459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.06919086924644502);
    msg.setSource(37739U);
    msg.setSourceEntity(94U);
    msg.setDestination(46634U);
    msg.setDestinationEntity(66U);
    msg.op = 181U;
    msg.entities.assign("QFWFWHSKIOLEATHITKGUCPYWORUBSHFNIPVHPIXYTNDHKZGEXBMAPGXLVUDVZESECHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.08651968196307636);
    msg.setSource(16839U);
    msg.setSourceEntity(188U);
    msg.setDestination(4581U);
    msg.setDestinationEntity(53U);
    msg.op = 102U;
    msg.entities.assign("VCGKLIPGMWZXUHJUSBKOFLDLYRYPWEYNANDIREDVDHYQVFBLGYQJWNCQDUCAQDOGCETSCSUVLKQYTJRVTVRZNHHMXLTOCPZONZOUTSBYOFGJETRFOBBTAZGJNXERDBSADQSJMXXEZYITHNMZXPGZRJGAHIIVJMNWABLFBPGKXXFCFNUEUTHVKSASPCLCQPAKRTWZFAIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.8013640087450055);
    msg.setSource(46600U);
    msg.setSourceEntity(189U);
    msg.setDestination(59925U);
    msg.setDestinationEntity(113U);
    msg.op = 56U;
    msg.entities.assign("DMXXOJEKQFMYUQMFSWCDEQVAYBRIXLGGZHVHQSYHKDDLPAQFPUBFKYREFDVZPIJHJELWANSXVDTTTSCATAEUKNNYISXZBMGCUDEGSKXAIDIQOAICXRKUJWSKUBLCTNOWTXSQNVLGSTPZLPHGPEWVRJPRTOEGNHAZKNBWOUPFBVOIGXYOCQZICDYGMRAMHVJQJHRCVUCJLVKWICFFTURGWYLXYMRWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.3926701086143889);
    msg.setSource(54868U);
    msg.setSourceEntity(18U);
    msg.setDestination(20726U);
    msg.setDestinationEntity(109U);
    msg.type = 227U;
    msg.speed = 51442U;
    const char tmp_msg_0[] = {30, -25, -87, -96, -27, -3, 75, -71, -71, -103, 125, 16, -11, -11, 41, -114, -123, 113, 7, 26, -115, -85, -5, -76, 63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.6025882635243971);
    msg.setSource(9701U);
    msg.setSourceEntity(132U);
    msg.setDestination(40742U);
    msg.setDestinationEntity(87U);
    msg.type = 186U;
    msg.speed = 52795U;
    const char tmp_msg_0[] = {-118, 105, -62, -121, 22, -94, 70, -44, 75, -27, 48, 122, -119, -79, -35, -35, -5, -45, 41, -25, 70, 53, 70, -15, -7, 100, -26, 75, 17, -98, 89, 6, -6, 46, 9, 51, -59, 61, 23, -23, 1, 79, -40, 54, -124, -87, -106, -66, -72, 120, -81, -119, -88, 61, -95, 53, 71, 46, 97, 25, 64, 39, 122, -112, -71, 122, -90, 110, 10, 59, -76, 27, -27, 108, 15, -46, 21, 42, 39, 79, 27, -71, 25, 125, 21, 38, -62, 62, -27, 38, 33, -55, -9, -27, -67, 76, -127, 120, 107, -39, 32, -6, -106, 7, -31, -127, -60, -4, -114, -42, 50, 64, 68, -9, 104, 37, -56, -65, -59, -43, 5, -121, 75, 97, -110, 29, -22, 29, 61, -126, 26, 106, 67, 65, -60, -70, -93, -22, -29, 33, 118, 60, 3, -106, 28, 121, 90, -115, 99, -111, -48, 35, 47, 63, 107, 75, -65, -107, -28, -97, -57, 75, -113, 46, 70, -1, -7, -19, -85, -49, 93, -119, 94, -87, 18, -89, 43, 95, 8, 64, 5, -2, -34, 19, 100, 31, -108, -23, -119, -109, 125, 37, 59, 56, -52, 52, -40, -74, -77, -5, -118, 78, 115, 22, -83, -23, -32, 2, -30, -31, 42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.995586073074239);
    msg.setSource(7491U);
    msg.setSourceEntity(48U);
    msg.setDestination(63834U);
    msg.setDestinationEntity(4U);
    msg.type = 74U;
    msg.speed = 51232U;
    const char tmp_msg_0[] = {113, 103, -87, 98, -96, 7, -101, -119, 122, 43, 78, 56, -63, 11, 125, 96, -71, -107, -59, 106, 29, 62, -42, -2, -83, -14, 124, 117, 94, 80, 95, -25, 118, -54, 112, 63, 80, -104, -33, -45, 3, -6, -25, 49, -31, 51, -99, 32, 11, 112, 13, -9, -85, -100, 26, -53, -120, -35, -34, 87, -42, 7, 69, -92, 35, 126, 98, -50, 112, 22, -99, 66, -18, -30, 77, -73, 69, -78, 14, 20, -45, -53, 31, -27, -49, 47, 28, -45, 109, 44, -101, -90, -108, 113, -111, -74, 6, 84, -83, -74, -93, -67, -119, 107, 32, 99, 100, 94, -72, -53, -72, 37, -8, 4, 30, -112, -125, 74, -33, 62, 49, 49, -107, 112, -96, -40, -23, 22, 11, 64, -9, -88, -82, -122, -113, -37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.3380359654090832);
    msg.setSource(37906U);
    msg.setSourceEntity(157U);
    msg.setDestination(36183U);
    msg.setDestinationEntity(109U);
    msg.op = 189U;
    msg.tas2acc_pgain = 0.2639331412331044;
    msg.bank2p_pgain = 0.7605472525293455;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.02497617002509145);
    msg.setSource(24385U);
    msg.setSourceEntity(45U);
    msg.setDestination(9716U);
    msg.setDestinationEntity(42U);
    msg.op = 21U;
    msg.tas2acc_pgain = 0.8609494509739495;
    msg.bank2p_pgain = 0.07484279108785996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.4935633387469327);
    msg.setSource(26986U);
    msg.setSourceEntity(236U);
    msg.setDestination(51041U);
    msg.setDestinationEntity(139U);
    msg.op = 183U;
    msg.tas2acc_pgain = 0.12697453382695323;
    msg.bank2p_pgain = 0.42067226697495497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.232461289912272);
    msg.setSource(50421U);
    msg.setSourceEntity(103U);
    msg.setDestination(23058U);
    msg.setDestinationEntity(235U);
    msg.available = 285186177U;
    msg.value = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.586257684935011);
    msg.setSource(33007U);
    msg.setSourceEntity(46U);
    msg.setDestination(14325U);
    msg.setDestinationEntity(239U);
    msg.available = 3551227242U;
    msg.value = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.4184726014864387);
    msg.setSource(22406U);
    msg.setSourceEntity(207U);
    msg.setDestination(49422U);
    msg.setDestinationEntity(39U);
    msg.available = 3935074253U;
    msg.value = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.34725361710619773);
    msg.setSource(43090U);
    msg.setSourceEntity(216U);
    msg.setDestination(48430U);
    msg.setDestinationEntity(234U);
    msg.op = 177U;
    msg.snapshot.assign("IJXPDNQCHQVTYFHHBUDTRKHIZUI");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 14741U;
    tmp_msg_0.name.assign("EWJACQJVBEQEFEYJHNHHZMUGPTLLBBMVDVFHALKZOWUIZXWOLAGRNPBELSGIURJWSVEXYNZQWBNXVPIRBHTCVLEUICAFXLOOWVJNTYWXNCSDCRDIJ");
    tmp_msg_0.custom.assign("QUUBYWENUQGCXFJIGOVYTG");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.5644625565847077);
    msg.setSource(35987U);
    msg.setSourceEntity(225U);
    msg.setDestination(25817U);
    msg.setDestinationEntity(7U);
    msg.op = 218U;
    msg.snapshot.assign("THPUDMMEKCENOIAQKBZSONJNTXXROJYHXJLCBEFKSYNSAHATMLIRMIMHLTVYYUDPDZFWVYDLVFHYYWQICCPPSZDGNMXXWQERORAUQKIGINGCIVRTVIFRZDTVVFNBQDSZUOELKWMZEZOREPEGEXKDJZQZUJDHVQRAEMWWTFJVCQPTLKOLVUUKYTOTCPAAW");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.591891532981607;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.41438707169243805);
    msg.setSource(41889U);
    msg.setSourceEntity(190U);
    msg.setDestination(53099U);
    msg.setDestinationEntity(75U);
    msg.op = 77U;
    msg.snapshot.assign("JAUFQLZTXFIRRFOUJSAWXZAMJPTXMBEHUSDKBDVPCSOEXUFDIPZMKMEQWUEMSMVJABBISQKQGOGPRPMSHRMSWECYBIWYKEBLWFCELDOGOOYCMYKLYEYIGXIRXFCLVBKAKDPNTWKZFCWVVNKZAGGVG");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 102U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.033636915118277266);
    msg.setSource(9894U);
    msg.setSourceEntity(101U);
    msg.setDestination(36403U);
    msg.setDestinationEntity(240U);
    msg.op = 40U;
    msg.name.assign("YYAGMXSNXRQRABQJENSZVFUKVICBQBPNVEVDIPJKNHWOGTANSAFUIDPJWYLEYODJNWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.6797182124841515);
    msg.setSource(55094U);
    msg.setSourceEntity(67U);
    msg.setDestination(54162U);
    msg.setDestinationEntity(221U);
    msg.op = 126U;
    msg.name.assign("YCEJWFWAEBUXDFCPISQJO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.6683042891762075);
    msg.setSource(27584U);
    msg.setSourceEntity(83U);
    msg.setDestination(47267U);
    msg.setDestinationEntity(152U);
    msg.op = 18U;
    msg.name.assign("ZMDICAPZCZIMQVLFBWQPPHHPXCCGEXQKSKKVNJFHQUWTZRJAPBUVVMJUUEEIONZUDSINWRACBRWIQSYMKWOYUHFFEYXMNILXFYAIYEOPNTGGVHEKRCRFSIUELRMRVASJXLBFXSTMLLDDDTVHROLLCNQOWMHGDWKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.7562056286028015);
    msg.setSource(55685U);
    msg.setSourceEntity(228U);
    msg.setDestination(29114U);
    msg.setDestinationEntity(212U);
    msg.type = 254U;
    msg.htime = 0.15309684706381232;
    msg.context.assign("KGHQXQDQVFUAFCUIGWOMSCEHAYOWFBJJSWOXEOLDAQYQXQTQSTZEBCKZVYEZUKEHBTIUJLFVRCADYGWLCTBJWXLWESDPRYLYPONXOJFTBCENLPLRROSAKZMLVZRQBVJFKLFPBROUINCPFGCIPIYGDUHIVXRKQNKKAFJPHPJXSMKVVNMDEUSJBXPMRMHGWCWVYNGIKDNPGHWINMTOZIUEM");
    msg.text.assign("AABLUDRLMBWSTCPXJTQKCIEMWLAWFJWKVXXLINGDEXFCSENQOAQTNGRFJUMFDBHSKYWYUGIMICRETOFEEIIEJUKRVUFYIPLOSUHNOZDDMLMEXTYGMZKDOGOVTGAXIOHPPHBVJMVVPNYFUSPOCPNXZFWZBZFVTARLALRXSCAYDYKJQUSBYGCQBYNDMBLNQHAPHTLZQCSEZRGQKWJTQUZOHIVGTWGARWBSPXSXDKRIPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.43930859679557555);
    msg.setSource(33046U);
    msg.setSourceEntity(158U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(110U);
    msg.type = 55U;
    msg.htime = 0.7381298268868524;
    msg.context.assign("FCEPCEJAJLTIJEIRKHFSOQOVDTMWLJSBWZRWBVFWCHXHRFJGYKBZHXOTGFRCDZUTHXVXPCAIVLDAVDUKSKUAYRXOIZBQSYZTZLIKYYNMNEOLNSWXJHXBYAPCQEPKXAMGCFUZGWPBTEIQWAEHPHKRLNBWRQUKRIWMDUGCSSVAJQJKLMNHFJDOEZOGYAIILDGUBUVHTZMBCGRPTGQWDBKIOYSOPFSN");
    msg.text.assign("WCAHQJCPVTNOKEISROSCJCKYWSXDOPKFJGADZQOUDYGMIUGUNJWMTHGSJLUXEYLYLBFBYHIDJELCKJHPRMAEYETHDBFJOQTGPFNWSCUXWZOAXPAGMMANBGXRGJVQIBQZVWIHNTLROSPDLVYZMCZVLEGEYKVZXQINMGQDZLFWEUHIYVRQFSDDWNBBPORBQWUFXBSKVWRLTCXXCUKVAHTRIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.4880819514338959);
    msg.setSource(9394U);
    msg.setSourceEntity(251U);
    msg.setDestination(34465U);
    msg.setDestinationEntity(133U);
    msg.type = 13U;
    msg.htime = 0.11636507048936984;
    msg.context.assign("XQDWCSECJWUAETWHVYPR");
    msg.text.assign("UKMBEFARUOGZOIGIMNPUZFKGTRCNKXHVDLBUYPVVIQQAHSCAMMZANIHSGCRVFPZLHZABXSUCDHOALZKCJOYYGMWDTYFKHQBBFFPPRTEIHVSFWFJXVXNPNHJUJZGJQJDXVEWTYTLNMQEEZQNODYUXRGSMARQTOJCFEFITWWELMPWRJWVHPJBMULETCLDOEKPJSYYANZYTIZSGVIXSDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.6678569334398023);
    msg.setSource(8404U);
    msg.setSourceEntity(150U);
    msg.setDestination(35146U);
    msg.setDestinationEntity(40U);
    msg.command = 248U;
    msg.htime = 0.4936584733870826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.5076292815744391);
    msg.setSource(43273U);
    msg.setSourceEntity(101U);
    msg.setDestination(8677U);
    msg.setDestinationEntity(104U);
    msg.command = 142U;
    msg.htime = 0.013212367125827407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.271941484814441);
    msg.setSource(64180U);
    msg.setSourceEntity(164U);
    msg.setDestination(47167U);
    msg.setDestinationEntity(2U);
    msg.command = 123U;
    msg.htime = 0.38220785586052464;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 229U;
    tmp_msg_0.htime = 0.136089795294021;
    tmp_msg_0.context.assign("JPBMHYPRLMKRVYPZAIQSLNWCYYYCOHUNALUCJEVFELYA");
    tmp_msg_0.text.assign("VWRKINUMMXCDCTHLQGCRTSDMYOIHNEKKIUWTQCNWAVBYPARQXQELEJYOTJQBCBGLSZPWGGBJFIOZEIHROUHQCOKRKFSMBNNAKJXLSVWPWEDUULPDHJRGVUXLZZNOGMCHDGGDVOOAKTNEYPVRTBAYBVUJAXJYDJKPXFBUQZXUITSAFZAMEHIYLPUTFFEMFJMLRMFZPODONHZCSACLQQLVHWGWFS");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.16912048602314012);
    msg.setSource(12773U);
    msg.setSourceEntity(105U);
    msg.setDestination(854U);
    msg.setDestinationEntity(97U);
    msg.op = 133U;
    msg.file.assign("DGLIDEGBZGQSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.5429102808524368);
    msg.setSource(47251U);
    msg.setSourceEntity(214U);
    msg.setDestination(3667U);
    msg.setDestinationEntity(21U);
    msg.op = 61U;
    msg.file.assign("HKGFWFOGJCBPCAUSJQNANHORMTLIIGTIKPPXVHUDAWUNTHMYULUGLLIBTBIPJKITSLGMJJNBMTALDGVQXSSUXCJQFWZRZYTERECLADPJMNOMUZPAGBFZNFUBVOWEEDDIRDNRWZQFNKKPVZXKEWSMJQIRCCYYYLHBVABCLENBHUORYXVJQOFHKYYNMXIZEHSQRZZRGVOQQAWLHZOCDMQSOCWXDETKXAVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.47718047658866913);
    msg.setSource(2769U);
    msg.setSourceEntity(62U);
    msg.setDestination(9881U);
    msg.setDestinationEntity(48U);
    msg.op = 146U;
    msg.file.assign("IRCQFANSGVHGULPWAVNEREQFOERWSBYKZZCWTTNIWCOILDGJMKJASQQBGDNRVOPODINTTYVVFBQOHRXSKZXUOAWINCHOFMZATJSVJBQYUCEWWRPNTYWZKDULDGFYSAHTTUBYTUZUBMGYOPHAQEXKFPOIHPFHTVBNPBLFCMFRFMKQBIXRXPDOSJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.40880811445579934);
    msg.setSource(37697U);
    msg.setSourceEntity(214U);
    msg.setDestination(27489U);
    msg.setDestinationEntity(78U);
    msg.op = 160U;
    msg.clock = 0.1350642429911182;
    msg.tz = -84;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.7974433197293705);
    msg.setSource(24462U);
    msg.setSourceEntity(118U);
    msg.setDestination(65324U);
    msg.setDestinationEntity(11U);
    msg.op = 238U;
    msg.clock = 0.48349929644299106;
    msg.tz = 43;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.9051278553179369);
    msg.setSource(8918U);
    msg.setSourceEntity(21U);
    msg.setDestination(60909U);
    msg.setDestinationEntity(98U);
    msg.op = 242U;
    msg.clock = 0.9251710400613539;
    msg.tz = 75;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.011259138131194835);
    msg.setSource(10963U);
    msg.setSourceEntity(243U);
    msg.setDestination(19754U);
    msg.setDestinationEntity(70U);
    msg.conductivity = 0.34592116031001785;
    msg.temperature = 0.02379595752175645;
    msg.depth = 0.29285571142362643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.10696278761577527);
    msg.setSource(23609U);
    msg.setSourceEntity(201U);
    msg.setDestination(21660U);
    msg.setDestinationEntity(134U);
    msg.conductivity = 0.1316203126914416;
    msg.temperature = 0.8065275676487297;
    msg.depth = 0.17207165402247349;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.6693388998248065);
    msg.setSource(60240U);
    msg.setSourceEntity(174U);
    msg.setDestination(5604U);
    msg.setDestinationEntity(123U);
    msg.conductivity = 0.3129472193374816;
    msg.temperature = 0.7720826493981018;
    msg.depth = 0.21682200790447403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.526853397736934);
    msg.setSource(18943U);
    msg.setSourceEntity(143U);
    msg.setDestination(46791U);
    msg.setDestinationEntity(111U);
    msg.altitude = 0.05331919245038452;
    msg.roll = 24069U;
    msg.pitch = 27723U;
    msg.yaw = 38582U;
    msg.speed = 32200;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.9676862700686442);
    msg.setSource(54182U);
    msg.setSourceEntity(197U);
    msg.setDestination(30209U);
    msg.setDestinationEntity(62U);
    msg.altitude = 0.19439210594080858;
    msg.roll = 13760U;
    msg.pitch = 2176U;
    msg.yaw = 10333U;
    msg.speed = -18805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.008166248101104223);
    msg.setSource(44278U);
    msg.setSourceEntity(93U);
    msg.setDestination(19591U);
    msg.setDestinationEntity(60U);
    msg.altitude = 0.07043460462496753;
    msg.roll = 20289U;
    msg.pitch = 12497U;
    msg.yaw = 31940U;
    msg.speed = -16535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.20960234734108107);
    msg.setSource(12103U);
    msg.setSourceEntity(124U);
    msg.setDestination(16853U);
    msg.setDestinationEntity(5U);
    msg.altitude = 0.5234463536601747;
    msg.width = 0.5993132873785957;
    msg.length = 0.14671543684720323;
    msg.bearing = 0.10072167550943056;
    msg.pxl = -9366;
    msg.encoding = 174U;
    const char tmp_msg_0[] = {98, 78, -85, 86, -24, -33, 70, -55, -117, -37, 67, -60, 114, -42, -40, -112, -106, -101, 62, 49, -104, -31, -34, 91, -71, -117, -34, 74, 43, -20, -32, 45, 71, -83, -42, -110, -59, 18, -111, 2, 2, 119, 81, -55, -96, -128, -92, 26, 97, 122, 46, 120, 24, 11, 32, -32, -3, 93, -124, 5, 101, -39, 69, -102, -9, -90, 27, -11, 10, -66, -99, 99, 71, 62, -46, 2, 117, -91, 60, -8, 84, -67, 16, 23, -92, 34, -123, 124, 0, -32, -59, 4, 93, -49, 18, 20, -83, -127, -62, -2, 99, 45, -98, 58, -33, 39, -59, 10, 17, 109, 59, -65, -117, 86, -21, 0, -111, -114, 63, 81, 12, -103, -87, -45, -64, 22, 26, 35, 87, -111, 60, -55, 83, 31, -106, 18, -25, -36, -46, 103, 11, -8, 88, 83, 113, 30, -77, 104, 21, 71, 120, -77, 56, 60, 10, -113, -106, 66, 68, 54, -69, -91, -61, 19, -92, -41, 113, 120, 52, -3, -123, 6, 46, -123, 79, 50, 34, -37};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.39608655713476415);
    msg.setSource(17758U);
    msg.setSourceEntity(205U);
    msg.setDestination(16773U);
    msg.setDestinationEntity(125U);
    msg.altitude = 0.555029506080288;
    msg.width = 0.45195372750969076;
    msg.length = 0.1781166812275865;
    msg.bearing = 0.7532702998748316;
    msg.pxl = 25504;
    msg.encoding = 145U;
    const char tmp_msg_0[] = {73, 3, 36, -123, 40, 76, 66, 29, -128, -108, -58, 72, -16, 63, 20, 0, 23, -14, -67, 46, -46, 97, 46, 15, -95, 124, -120, 31, -97, 122, -121, 108, -100, 48, -1, -85, -51, 31, -93, -107, 16, -104, -66, 83, 45, 90, 89, 54, -24, -111, -110, -52, -8, -1, 88, 48, 82, 119, 2, -104, 0, 102, 41, 34, -99, -65, -37, -125, 124, 22, -75, 12};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.6372523794459121);
    msg.setSource(8793U);
    msg.setSourceEntity(67U);
    msg.setDestination(54459U);
    msg.setDestinationEntity(27U);
    msg.altitude = 0.7757914319597254;
    msg.width = 0.8953565818982752;
    msg.length = 0.838818442521003;
    msg.bearing = 0.4428250332825492;
    msg.pxl = 30466;
    msg.encoding = 143U;
    const char tmp_msg_0[] = {-81, -90, -83, -25, -39, 67, -96, -106, 119, 6, -63, 26, 64, 108, 7, 22, -111, 19, -96, 79, -77, 97, 121, 62, 37, 17, 41, 30, 63, 7, 103, -62, 52, -43, -24, -78, -11, -64, -102, -14, -37, 67, 7, 61, 25, 115, -112, -36, -125, -86, 119, 48, -73, -100, -78, 61, 49, 114, -50, 55, 28, 36, 67, 93, -113, 117, -31, 2, -7, -28, -30, -11, 48, -4, -45, -109, 50, -31, 88, -105, 124, -64, -32, 78, -85, 30, -21, 22, -101, -101, 18, -96, 99, 8, -27, -6, 91, 76, 48, 29, 68, -75, 65, 114, 40, 65, -37, -14, 41, -26, -35, 51, -98, -16, -118, 117, -16, 53, 84, 31, -15, -10, -30, 30, 69, 13, -54, 104, 59, 30, 112, 114, 32, 76, 55, -1, 110, 29, 73, -113, 37, 2, 17, 24, -1, 22, 64, 100, -29, 98, -113, 71, 113, -115, -63};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.11281579385900276);
    msg.setSource(18021U);
    msg.setSourceEntity(181U);
    msg.setDestination(42642U);
    msg.setDestinationEntity(76U);
    msg.text.assign("NEDLDQPLPXJJGQZHKYHDWWQVYPZZETRVWLXCAIJFXLFDSKOQZJRUFNMUVDADQSMKTKHNIOTRFVQSLJGPAYMWNBZGQFGWBSOYRAHENCTLIZAJNXARGMRRGNCJDSASPLGKEWQXFTYUEOGMHRDBHIXUIAJOCCFABZJPFHBBKMIYOMGULTSSWYO");
    msg.type = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.9793013602669681);
    msg.setSource(12924U);
    msg.setSourceEntity(91U);
    msg.setDestination(39084U);
    msg.setDestinationEntity(134U);
    msg.text.assign("BXIMLGZIRNWSEQXDYOULPXMSBVTSSKFZOLUNNVGJYYGOAUZNBBTJPQCHQSLVCAVDUHYZCFGDSDMMJAPEKTIOURRHNWPNOUKB");
    msg.type = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.18425512728814042);
    msg.setSource(1094U);
    msg.setSourceEntity(224U);
    msg.setDestination(56033U);
    msg.setDestinationEntity(120U);
    msg.text.assign("YSJWLJVJVPCCQTEDEVVJQAAZHCKKKLDQFGKGDLBMOHRQQKFZNRFULGOPRBNHWAWPPFQEFSVSODIYOVATMFIJTTBYUIEBUPXLCMDGCXJCWOMECIJBGXROHFFXAEGOPH");
    msg.type = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.8137206439190043);
    msg.setSource(4823U);
    msg.setSourceEntity(63U);
    msg.setDestination(33616U);
    msg.setDestinationEntity(202U);
    msg.parameter = 114U;
    msg.numsamples = 116U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 44699U;
    tmp_msg_0.avg = 0.560420898165689;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.35438803967780663;
    msg.lon = 0.13659162096301525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.086428868695958);
    msg.setSource(38592U);
    msg.setSourceEntity(191U);
    msg.setDestination(6632U);
    msg.setDestinationEntity(25U);
    msg.parameter = 91U;
    msg.numsamples = 39U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 42233U;
    tmp_msg_0.avg = 0.7637631078123341;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6702585308302729;
    msg.lon = 0.7791526294610746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.9925090379464057);
    msg.setSource(56664U);
    msg.setSourceEntity(250U);
    msg.setDestination(7929U);
    msg.setDestinationEntity(222U);
    msg.parameter = 235U;
    msg.numsamples = 10U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 34452U;
    tmp_msg_0.avg = 0.10118347755324042;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.29409808712359276;
    msg.lon = 0.416563724880749;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.5596511399180023);
    msg.setSource(10420U);
    msg.setSourceEntity(20U);
    msg.setDestination(14857U);
    msg.setDestinationEntity(48U);
    msg.depth = 27691U;
    msg.avg = 0.6539412826552886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.6917057147799228);
    msg.setSource(47356U);
    msg.setSourceEntity(133U);
    msg.setDestination(15318U);
    msg.setDestinationEntity(157U);
    msg.depth = 18161U;
    msg.avg = 0.2463841851205778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.9828860298122266);
    msg.setSource(23549U);
    msg.setSourceEntity(119U);
    msg.setDestination(46520U);
    msg.setDestinationEntity(114U);
    msg.depth = 48655U;
    msg.avg = 0.27528197228034645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.6959679996299031);
    msg.setSource(21248U);
    msg.setSourceEntity(164U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(76U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.587039450975372);
    msg.setSource(1033U);
    msg.setSourceEntity(108U);
    msg.setDestination(8462U);
    msg.setDestinationEntity(242U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.24037005741260542);
    msg.setSource(55407U);
    msg.setSourceEntity(246U);
    msg.setDestination(34293U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.9581896648478031);
    msg.setSource(16580U);
    msg.setSourceEntity(4U);
    msg.setDestination(3080U);
    msg.setDestinationEntity(210U);
    msg.sys_name.assign("WZJWKYWUXIMCUQNNHNQAGXVBLKAUANJOBCIM");
    msg.sys_type = 142U;
    msg.owner = 46456U;
    msg.lat = 0.2579727909332269;
    msg.lon = 0.09030880349814085;
    msg.height = 0.8725055611890206;
    msg.services.assign("CZXZTLKHFIIYDLWFNEYGBPQGWRTMVZUOENTLYCGCMUCBJANQMWYQJCEZPQOHHDFSYKRRHQXIKIWGEMPPFGWLTFVPRYCJPIVTINNMRWOHUSSYOUJJOTWSEREWAFFIFDTNMALLDITKRXCEOCULJUZPJRHGVAAVPARSABBXJFNDDBLKXBHTKHGXZDOSITKXYCKQFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.5282479517275557);
    msg.setSource(37060U);
    msg.setSourceEntity(93U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(253U);
    msg.sys_name.assign("SIJOQCWMEJMQSLBSUCOFGFHKLNEHWNPXYZHWPX");
    msg.sys_type = 3U;
    msg.owner = 49734U;
    msg.lat = 0.354866518544945;
    msg.lon = 0.18276560215405613;
    msg.height = 0.37294587588100403;
    msg.services.assign("NKBCJZGQGMOQYUANOEWGZXFVKMLYAYEBSRASYCZERQTYHUYESNZJSQPORPVTRLCRWINDFUBQRHNOOLYFXLQKSKGBFJDCXWHDNVBIGOWKJLFQINJAJPSUPGFSUOFYFQTKUMCSJWMGPIDTQEDBLBADLVEIMZMEATIXKDECDDANDJMOXICEBAEKZZGCZFWPCAUOLHWCROVVPLRFHNJSXKIPHXVVYHXMLHYUGPUMHSZBUTTWIMZJQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.917948308515805);
    msg.setSource(51275U);
    msg.setSourceEntity(141U);
    msg.setDestination(43222U);
    msg.setDestinationEntity(162U);
    msg.sys_name.assign("TKJIREVIMTXNEJWWOZNWSHLDNHIGNKRSIFNMXMQCZRLAFNXXPMTYUXWFHGTHPLFQVLDWRCQYUMFDKAS");
    msg.sys_type = 48U;
    msg.owner = 28092U;
    msg.lat = 0.9374831271985914;
    msg.lon = 0.32558732367538556;
    msg.height = 0.5902380787164346;
    msg.services.assign("BJTNOJIGRYHTYSMIDGLN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.4804626858009169);
    msg.setSource(8815U);
    msg.setSourceEntity(21U);
    msg.setDestination(7202U);
    msg.setDestinationEntity(240U);
    msg.service.assign("LETQXPBNJHJMRQNSIMVITNSESQKCWWDPUEEITFWVIGEOPJWTISKAEHE");
    msg.service_type = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.08464481699777504);
    msg.setSource(33423U);
    msg.setSourceEntity(173U);
    msg.setDestination(31480U);
    msg.setDestinationEntity(156U);
    msg.service.assign("APGQKTMLHTSDYJOSWHCXELJXLVNWODRQVPWAYXHJBQEHJPUPFNUKVNYIOQSZYFAEFKKVFUFQEJELXVZRVJPCLSOAFAOGBNAMVGWBDVSYGPMIOWDRIXWKBQMVTRFUTGTDQDTOANKBPQTHBXSZGCCXZDLMNOIDKLSFY");
    msg.service_type = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.09676654968839182);
    msg.setSource(47458U);
    msg.setSourceEntity(158U);
    msg.setDestination(52755U);
    msg.setDestinationEntity(42U);
    msg.service.assign("AJKBNBRWTTUZIFYDUCOQTKPDZVVSYOIRSCEGIGBLBMIKTADHFMHRAGYNFYNCHMQRZPMOISCLUKXCXJTM");
    msg.service_type = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.7992655447884417);
    msg.setSource(63800U);
    msg.setSourceEntity(42U);
    msg.setDestination(39603U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7374993011489782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.6803511369557661);
    msg.setSource(16132U);
    msg.setSourceEntity(105U);
    msg.setDestination(31348U);
    msg.setDestinationEntity(210U);
    msg.value = 0.3342548662543239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.40935868346283);
    msg.setSource(52970U);
    msg.setSourceEntity(131U);
    msg.setDestination(53479U);
    msg.setDestinationEntity(77U);
    msg.value = 0.7861582572720968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.5742828276305736);
    msg.setSource(49410U);
    msg.setSourceEntity(98U);
    msg.setDestination(54969U);
    msg.setDestinationEntity(1U);
    msg.value = 0.4380380845710451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.9434498852723463);
    msg.setSource(16721U);
    msg.setSourceEntity(53U);
    msg.setDestination(32011U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8181448490741732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.6131849747451191);
    msg.setSource(50361U);
    msg.setSourceEntity(207U);
    msg.setDestination(22058U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8854368345324872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.5529855066132171);
    msg.setSource(63189U);
    msg.setSourceEntity(192U);
    msg.setDestination(33031U);
    msg.setDestinationEntity(62U);
    msg.value = 0.5403890804633364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.4151928506177709);
    msg.setSource(8827U);
    msg.setSourceEntity(197U);
    msg.setDestination(43924U);
    msg.setDestinationEntity(67U);
    msg.value = 0.761122544144132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.14336702126235767);
    msg.setSource(35575U);
    msg.setSourceEntity(91U);
    msg.setDestination(61973U);
    msg.setDestinationEntity(51U);
    msg.value = 0.3137654756867462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.7011582986507289);
    msg.setSource(39452U);
    msg.setSourceEntity(2U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(81U);
    msg.number.assign("WXYRTWMYNWLVQCLTFESVFTYBELGFBDXTORXIZOLIQUXGSQDXCZEWPPVQJIJDCSSONACZEQRKFCAUHAAVZRPRVBWEGLFDHKSWVPBRMFKYHDIJBGZYZDLANGNJCRYMEVPMFSHBFKXDXCUDWJQTGEPLQXHARIYSKYWHTZFKCRNFCOOILNVGIQWOLSDONOHJPHGAEVMJYTPUKUWNIMZADLYBOUIBUTABRMTHEUNJJM");
    msg.timeout = 58779U;
    msg.contents.assign("UJTCIVGNETVYXPSVQDNOJOOXWNDMEDZSBMZWBWBFOKZCRWKDTWGMUNZJCYABBYFEHSFYJXICPVTLLPAWQLUBTJHSNATXMZKEGCKQJDQYXEHOTMGFHIPFUWQFFIQUVMKOBEMGIPTVURJPVYIHAAURXHGEITZAEKBWZKGADDHOGNRCIQVDIAFYCZBSAUFLCHOYVZLMXJUKBRZJSRRKNYTLEXPSRPMCHIQWSULNYGXQSJAXKPLSHNGOWPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.5957059471922638);
    msg.setSource(26999U);
    msg.setSourceEntity(28U);
    msg.setDestination(23364U);
    msg.setDestinationEntity(123U);
    msg.number.assign("CFIESQMDPEUBXWFVASLLPGHRXMMHFVVWPRIPEGOOYYIYJXGZRDEHSVDUJZWFWWCTNWBXVSTRTJKNOMUZAFGYMRIFJASUQNLULYBCBOJDAVSMASMVGKKKFUZIWHGHHGNBJKIOZJSLFVOYTEDRCMBKPARCQNKONPXEQQH");
    msg.timeout = 15583U;
    msg.contents.assign("DCRUCFJPLZGUAZDRSVIQSTBTUBQVWPZIBVEFNJTYEKDAANHKSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.6054292870050505);
    msg.setSource(23490U);
    msg.setSourceEntity(211U);
    msg.setDestination(3171U);
    msg.setDestinationEntity(100U);
    msg.number.assign("HJCOYMBOGJXPWFDOFMBFNFSTSDWYBJZZSXRBGIEXAGYKYNWYHSNYNBYXKMVKLZQSHVSDIFZSZUULRODDXVEJVQIUYELJPADEUFF");
    msg.timeout = 37772U;
    msg.contents.assign("IFQQXSQFEOMKYABOQYLMAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.5559069949323873);
    msg.setSource(61325U);
    msg.setSourceEntity(229U);
    msg.setDestination(35596U);
    msg.setDestinationEntity(139U);
    msg.seq = 3546283637U;
    msg.destination.assign("TPQWFNIEUJBQHQTHLIAXYXYVFWJAOZHEDJJNZTPZGRQOQTFFIVZHRHCIKSJNLZXIMVCLSEVYCUUIMKOZRBNBGWMTPCESFRJMDLLCMPBGICXCVJGWOAFWVDVLEFLGHSGZGYUTEXQLAJPSGPYOKU");
    msg.timeout = 38045U;
    const char tmp_msg_0[] = {-59, -34, 95, 117, 34, 24, -5, -127, 77, 2, 37, -44, -98, -79, -9, 109, 109, 72, -126, 74, -39, -92, -66, 22, 11, 80, -63, -15, -122, 18, 98, -47, 56, -113, -20, 108, -68, 38, -81, -31, 22, 68, -46, 67, -3, -36, 81, -46, -126, -126, 64, -7, 26, -3, 98, -127, 105, 20, -102, -26, -55, 81, -20, -71, -122, 17, 57, -45, -60, 44, 110, -71, -29, 48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.16008707921220455);
    msg.setSource(1810U);
    msg.setSourceEntity(196U);
    msg.setDestination(64283U);
    msg.setDestinationEntity(242U);
    msg.seq = 1850519887U;
    msg.destination.assign("CNPWPLUPDFIUZSFJEOTMVVWKRIETAJPYSRWQRPQDUFWJXKDJPCULHIFXEQCGBVSHJKCFEODNWMDIRURMXXUBJWOCXOXONOVIFITXAZBBKWNYNSRYIUDWTRFBSUVIBQKYHHPTZIAKCDGMHXCFRTNOGGYAHLVSAOZEKVKPXFDGVOHEYYXEZRTMLVCABEUGZJQJRVQCYSNIGAHMOLHMFPYLGZGKGMANHYJSBTSWWTZNDTBQLQEKNLDQSCE");
    msg.timeout = 41571U;
    const char tmp_msg_0[] = {87, -23, -92, -29, 59, 35, -114, -77, 94, 99, 6, -107, 10, 39, -56, -78, -115, -87, 42, -110, 13, 38, 68, 6, -7, 20, -101, -127, -41, -21, 36, -104, -29, 55, -84, -23, 126, -79, -77, -10, 7, -33, 124, 55, -119, 7, -69, 55, -70, -3, -71, 33, -120, -69, 86, 50, 100, -100, -91, -54, 88, -123, -80, 18, -77, 32, -119, -10, -57, -96, 37, 103, 66, 91, -67, -29, -44, -9, -36, -11, -120, -72, 95, 86, 40, 85, 92, -102, -113, 94, 2, -23, 66, -105, 97, 100, -75, -36, -82, -54, -113, 38, -5, 98, -71, -120, 120, -112, 109, 75, -15, -36, 6, -103, 111, 92, -55, -19, -59, 100, 24, 29, -9, -16, -1, -23, 53, -43, -7, -54, 32, -105, -55, 103, 1, -93, 94, 113, 62, -9, 12, 47, -33, 28, 46, 16, 16, -112, 121, -5, -86, -52, -108, -50, -71, 98, -67, -64, -45, -78, 3, 122, 23, -105, 32, -120, -46, -55, 116, 9, 122, 124, -16, -38, -54, -73, -47, 53, 50, 18, -58, 90, -54, 59, 105, 120, -117, 96, 45, 126, 75, -103, 74, -57, -62, 96, 73, -70, -19, -119, 27, 80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.09268595841964566);
    msg.setSource(51968U);
    msg.setSourceEntity(13U);
    msg.setDestination(41810U);
    msg.setDestinationEntity(252U);
    msg.seq = 3884218491U;
    msg.destination.assign("GUEQQIGXNZWOVOAQDRJDVPREZPFEVOIWKKUUXDWCPJXIXHGIAVFOKNRSQCHEBGSDTUGITXTSHALPXHJCCTYVFBVMDOYUSHKYTPFRSUZKRXNMELFXOWNZHHLSIJWEZB");
    msg.timeout = 49318U;
    const char tmp_msg_0[] = {-83, 124, 39, 49, -34, -22, 29, 105, 42, -18, -27, -39, 109, -45, 112, -23, -86, -119, -103, 115, 1, -64, 4, -125, 77, -28, 28, 24, -69, 11, -78, -32, -91, -125, 15, -23, -31, -108, 98, -41, 90, -12, 86, 61, 30, -72, 121, -85, 122, 55, 86, 111, 10, -88, -121, -49, -79, -45, 44, -83, 20, -43, 80, -21, -119, 9, 86, -51, 21, -85, 2, 97, -66, 62, 105, 110, 46, 41, -43, -51, 67, 88, -52, 64, 14, -63, -81, -86, -82, -103, -99, -117, -62, 114, 31, 34, 39, -63, -20, -17, 6, 123, 13, -10, 73, -104, -128, -14, -55, 57, -111, -27, 103, 58, -74, -113, -128, 69, -66, 107, 45, 45, 80, 105, -64, 84, 78, -71, -2, -71, 5, 63, 51, -116, -60, -109, -57, -85, -14, 40, -40, 124, 30, 5, -84, 11, 24, 81, 53, 112, -96, 25, 85, 103, 14, -102, -99, 54, 13, 96, 96, -89, -41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.4254139617324749);
    msg.setSource(46341U);
    msg.setSourceEntity(149U);
    msg.setDestination(27792U);
    msg.setDestinationEntity(233U);
    msg.source.assign("PUQIMZERLTOCDKLQCGEJGGNSXBMYDGXDW");
    const char tmp_msg_0[] = {-85, -64, 46, 124, -84, 55, 87, -107, 53, -34, -12, 38, 92, 100, 26, 115, 66, -52, 45, 48, -74, -96, -65, 71, 89, -59, -8, -27, 126, -12, 112, -101, 12, -74, 28, 111, 80, -50, 79, -39, 60, 29, -128, 126, 16, -70, 7, 107, 0, -85, -3, 64, 99, 4, -80, -124, 27, 94, -104, -20, 117, -114, 18, 54, 7, -93, 28, 61, -115, -9, -100, 42, -22, 75, -39, -46, -57, -47, 12, -97, -39, -1, 86, 78, -20, -119, 98, -96, 12, -52, 86, -68, 24, -122, -57, -80, 50, -32, -80, 21, 47, 104, 119, -82, 74, 82, 103, -55, -47, -58, 37, -101, -75, 62, 126, 102, -18, 98, 47, 3, -53, -30, -28, -44, -120, -115, 98, 20, 111, -76, -64, -35, -43, 49, 46, -34, -1, 110, -110, -109, -82, -44, 14, -38, -2, -56, 114, 86, 75, 34, 101, 61, -70, -56, 5, 89, 124, -113, -89, -91, 52, -46, 80, -19, 48, -128, -69, 32, 104, -117, -89, 0, -15, 124, -85, -11, 64, 120, -106, -93, 119, -18, 81, -67, 20, -55, -40, -45, 76, 58, 50, -53, -5, 123, 84, -107, -62, -6, 88, -102, 85, 51, -33, -66, 62, 17, -32, -36, 10, -122, 34, 70, 117, 22, 42, 75, 70, -85, 18, 59, -74, 6, -72, -48, 21, 24, -10, -79, 71, -111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.07763364201561918);
    msg.setSource(40599U);
    msg.setSourceEntity(108U);
    msg.setDestination(31789U);
    msg.setDestinationEntity(206U);
    msg.source.assign("BZPHZQCNXKBRDLVGRTDFOWCDFRMFLQWRRYGKVQJRVWOFXQBEDYGOSKVBIJAMFJMPTLNWPREANEKSXKOUPQLDNDSCUIQIZWVJUPYZUYBRJOXBEIWVDHTENLJCMYLXPGYHQKMIUGKOFHGZOAUBICPABIRXGTEEZYHXOTHAAUIMUDFVCZUHTIHTCNALHVJVSGSNWLMGYQRBQWEYBDEPGCSNFCLNFJCQAOSMTLZTIDXK");
    const char tmp_msg_0[] = {8, 106, -126, 43, -1, 104, 79, -61, -77, -28, 82, 40, -115, -45, 55, -55, 19, 103, -74, -55, 114, 84, -42, -125, -68, -44, 87, 33, 125, -30, -120, 101, -115, -83, -108, -127, 84, -19, 17, 75, -96, -49, 116, 98, -14, 14, -97, 94, -97, 45, 122, -46, -8, 3, -97, 117, 81, -122, 27, 56, 113, 108, -67, 104, 26, -90, -23, 82, -43, -92, 54, 50, 20, -125, -42, 120, -77, 97, -64, -112, 87, -107, 13, -8, -59, -71, -32, 74, -94, -61, -39, 107, -32, 122, 60, 83, 57, 82, 119, -69, 104, -39, -120, -46, -54, 61, -16, -58, 51, 43, -24, -96, 81, 117, -46, 60, -117, 37, 52, -5, -85, -47, 33, -21, 96, -69, -127, -15, 51, -30, -100, 76, -20, -46, -8, 123, 106, 4, -59, -23, -125, 121, 73, -89, 89, -119, -24, -62, -60, 84, -105, 87, 4, 33, -67, -121, -54, 83, -87, 16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.22816093553144579);
    msg.setSource(25269U);
    msg.setSourceEntity(19U);
    msg.setDestination(54532U);
    msg.setDestinationEntity(182U);
    msg.source.assign("CJPXBGFAOWLEABZISLNMVSIHDNDUEJXXLYOLRJIKIWUENCQAOBHJZVBZUAAIXPACRLVRVYVDANIDWEMQSNNKDISRRTAKRZCQQMUJCNFFWDOIITBYYVYXHPLROCXEWSLKXSTMCGKCOVFYAWZTZFCAPZBQWIEOMHHNNYMDGWVGETZJJNMVBOYXTPEDLUDKFHXPUBGFUDOQQSHGGBWHVEHBJSRKZFFYUZYPKTTPOKMQSRPJLGLQMFXTQ");
    const char tmp_msg_0[] = {-38, -16, -31, 65, -127, -101, 125, 70, 55, -7, -17, 76, -91, -81, -98, -44, 10, 28, -29, -48, -21, 115, -128, 105, 19, -39, 107, -56, -21, -80, 39, 119, 77, 10, 36, 25, -109, -85, -1, 50, 1, -36, -120, 103, 103, -23, -122, -18, 57, -18, 123, 44, 35, 82, -71, 40, 84, 93, -9, -8, -45, 61, -103, 79, -88, -80, 67, -66, 115, 5, -124, -94, -30, -125, 15, -128, -98, 51, 34, -24, 66, -103, -126, 38, -121, -4, 26, 71, -13, 2, -103, -86, -49, 86, 34, 53, -109, -107, -117, 71, -74, -56, 103, -13, 37, 125, -95, -36, 39, -76, 1, -116, -28, -108, -71, -112, 84, -45, -128, 14, -59, 116, -125, 9, 47, -87, 120, -121, -112, 94, -46, -59, -126, 32, 62, -71, 120, 87, -119, 22, 75, 125, 28, 16, 88, -98, -72, -10, 8, -55, -55, 101, -104, -88, 46, 99, 34, -103, 87, 46, 86, -60, 54, 39, -10, -116, -93, 20, 93, -100, -45, 86, -92, -56, -85, 68, 19, 58, -125, 105, -108, 9, -16, 101, 55, 104, 97, 62, -41, -20, -121, 76, 80, -75, -42, -50, 13, -111, -86, -121, 36, 47, -67, -21, 118, 121, 3, -63, 115, -76, -111, -36, 43, 114};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.3606798459959102);
    msg.setSource(28808U);
    msg.setSourceEntity(250U);
    msg.setDestination(21094U);
    msg.setDestinationEntity(245U);
    msg.seq = 1877896883U;
    msg.state = 75U;
    msg.error.assign("PGAHXIIUNGGAZVATFWMKBZQCHCITPNKTVARMNWSXNTFZRAGUBVPRJQVFBQAWQBUENEFISOLGWLKQZLLSHMYSHJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.25145962118165177);
    msg.setSource(50171U);
    msg.setSourceEntity(0U);
    msg.setDestination(38067U);
    msg.setDestinationEntity(178U);
    msg.seq = 1188181327U;
    msg.state = 139U;
    msg.error.assign("HOESEKQXSOFDXNFKRFKUAUEJFFDVYICSFHVFSCQZTZPTGTGXAZDYVYOZLEGMBREIHUMMZRKWEYNDCYNXGNBHWZQUZOEBXQFOVAHOOIGPYWLVGXEIVKUAYRNPRRCMWUTUKTLFHSWHNMHVSLLGPWNVGPLPAQDJSRLQIQPRMOQWHDSDKOCCSRJHMTEWQIXVCWNTBOYKBXMPWDXAELPJLULDABNANTZJTJCFAMBCMGJYPTYJZJRIBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.5272268239087234);
    msg.setSource(23480U);
    msg.setSourceEntity(97U);
    msg.setDestination(52739U);
    msg.setDestinationEntity(154U);
    msg.seq = 2094294935U;
    msg.state = 190U;
    msg.error.assign("QBQMVHFNPLXGRFIMWYYOBZCIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.7507327516684336);
    msg.setSource(34954U);
    msg.setSourceEntity(230U);
    msg.setDestination(12417U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("YJKREYNQELQMSQJHMEHLFTVKYIFHDIFSVHIOTEMNZCRIPACJEBAJEXZFHRKXSHKHXNDWFNNSFXOJNFOTULLHLZGPWGKQORRNFKUKPSUBTNL");
    msg.text.assign("CJQEWYGBIGDBZGQAYDLQSUXOGRUJUOSRNBPMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.9694650416993829);
    msg.setSource(47140U);
    msg.setSourceEntity(68U);
    msg.setDestination(2064U);
    msg.setDestinationEntity(30U);
    msg.origin.assign("OMSCJKMPYUDCNWUOOEXKLJHQPSSVXAGJLNTHRAIEYNBXRJKODBAVSROJHYHTUFEQUSRPCEKGFZZEFNGDDHMTVFKMCFYJLISLKWCAFJ");
    msg.text.assign("OGIFRYVWMALYZCJVTGLZFMFNGVOYFPSOLUNZFBSDZAEIWRXHTVMQMBZICXHOIAWRUVEIXLGGIQYJAYKXTRGGKMHLMGPNEXPXEXRLDJROXATJDHSRTBASVEZTCQQABEPZVOCCDONHSNKOWNQGLJERPZUDMCQVGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.8124342875263353);
    msg.setSource(20045U);
    msg.setSourceEntity(183U);
    msg.setDestination(21042U);
    msg.setDestinationEntity(43U);
    msg.origin.assign("BDTXONUSFOWKBUTLCOJVKWNTBAPFODBITPXJSAMFZDPDZAIPQCJIYCWTOVGUKZMXOELSYKHFRRSBWYVDDJIYOM");
    msg.text.assign("YTFMBSCUOKWQJDVCLXTSOWYBDXFBWOCOEIPMYTYYKUERGVBRQMRXWNEYNPFUFGCNJCGLEVUVNVSBMCHUZJLEHTJIAPIUZMSZTXGLFSREYQMQVDAMHAPRQZLDYDJGRHIZSHDGVVZOGVJBYOESVOXXUEZKFCNUNMHEMOWXQKPLRFARAMNHIDKIQBYGNPTJXPOQSDBQLNXDTPFGZZFJACRHTHLPKKIJIADKGZALRAAOTEQTLJI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(4.033745703591052e-05);
    msg.setSource(56479U);
    msg.setSourceEntity(152U);
    msg.setDestination(9407U);
    msg.setDestinationEntity(143U);
    msg.origin.assign("ADFNTHPPRFIUEMHOLHBWWOHVCMVJCRTXCXDPPXRWGIBAFPNGODIPJAORYWUGQTAXQTBLSRYHBRUVZPBOAOWQYPSZIKLGTKBNUCAETUMQJFRUVGQLMZKIKCQCNYXAEGNAGWKQHBPKOZOWVIGUEHNZMXELSAZEGTQQJJKNAEJSYPCERBDLJJICHDWSYIVIUFUTSYHCXMFGLTLJXNJDZMVRDZVOXBFNWMKFDLFKNWDSKIRYYYFBDMQ");
    msg.htime = 0.07527559849949039;
    msg.lat = 0.43379575807391535;
    msg.lon = 0.09508757614357233;
    const char tmp_msg_0[] = {126, 28, -84, 87, 85, -24, 50, 105, 70, -33, 31, -7, 122, -35, 105, 15, -14, -121, 24, -2, -59, -78, -68, 65, -63, 104, 102, -96, -91, 120, -54, 73, 111, 57, -106, 23, 99, -19, 112, 27, -7, -108, 102, -18, -24, -6, 83, -87, 59, 105, 98, 44, 88, 45, -103, 63, -69, 91, -54, -58, 76, 104, -102, 65, -80, 12, -60, -30, -5, -91, 61, 44, 123, -50, 76, 46, 9, -109, 64, 71, 83, 44, 35, -106, -59, 69, 64, -70, -52, -121, 72, 103, -57, 14, -27, 40, 21, 75, -48, -54, -61, 11, 71, 32, -93, 111, 37, -3, -83, -70, 68, -76, 71, 126, 28, 73, 99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.41668274806878836);
    msg.setSource(58246U);
    msg.setSourceEntity(78U);
    msg.setDestination(30984U);
    msg.setDestinationEntity(0U);
    msg.origin.assign("BBTACPWQOSTQGQJUYOAIJBPSZZZZSJJFQNKNRAWDEGWAXIJPGKEFAIMNUOLYICSURNYWYKSAKSHRFXEYCNXACTFOJFIUHABJQWJUOCODRPOTMPLQCVTLFNYGSEGXCVSNUEGTGFMZVXMSVWBMIBDMLIHHCDKEHQLNWNWXRKAYHYDJEHGMUZRVLXZPGHHIQYXKGWEXKUUFODOBWVBTBBILVVVKYSLCCEFKDRNPHPUZQE");
    msg.htime = 0.4098818014164425;
    msg.lat = 0.9163845138438261;
    msg.lon = 0.08562001275002629;
    const char tmp_msg_0[] = {-13, 27, -88, 55, -37, -47, 92, -43, 62, -40, 11, -125, -54, 15, -40, 66, 85, -16, -83, -60, 66, -60, 91, 89, 95, -24, -14, -41, 121, 49, 79, 35, 70, -77, -67, 113, -66, 80, -75, -4, 31, 119, -6, -54, -75, 12, 115, 113, -35, -13, -80, -52, -32, 82, -86, -82, 62, 72, 50, 69, 122, -4, -24, 43, -26, 83, 24, 5, 119, 80, 108, 92, -45, 99, -128, 99, -9, -10, 110, 89, 75, -85, 34, -64, -34, -2, -31, 1, -91, 11, 98, -108, 93, -70, 57, -15, -92, -93, -36, -2, 2, -75, -30, 20, -33, 60, -41, 52, 67, -113, -40, 25, 25, 81, 12, -100, -79, -100, -86, -124, -114, 66, -51, 79, -81, 66, -71, 8, -85, -65, 27, -80, -19, 59, -52, 10, 57, 87, -96, -118, -23, -35, 37, -122, -54, 111, -72, -77, -102, -5, 90, -46, 30, 92, -90, -37, 2, 53, -61, -30, 108, -116, 24, 105, -49, 10, -56, -107, 23, -118, -85, -120, 76, 21, 53, -61, -27, 43, -42, 0, 84, -118, -6, 110, -109, -30, -96, 43, 83, -36, -86, -58, 89, 96, -108, -26, 54, -33, -116, -114, 29, 96, 25, -23, 119, -54, 90, -49, -67, 59, 88, -89, 51, -14, 1, -96, 103, 77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.8401469972580662);
    msg.setSource(48612U);
    msg.setSourceEntity(12U);
    msg.setDestination(57317U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("JNAICBWNTMBQSHDBTVMUXFAJTVYYOWPBQIDEKWBNERZSZPIASPQTQQZWDIXXUCCBDKVCTCZFINGESGRNDFWALYJAYT");
    msg.htime = 0.09865694833806837;
    msg.lat = 0.16295456226034766;
    msg.lon = 0.45479944033069286;
    const char tmp_msg_0[] = {-116, -46, 20, -125, -115, -28, 96, -109, -28, -33, 26, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.7837081208922951);
    msg.setSource(40256U);
    msg.setSourceEntity(201U);
    msg.setDestination(29737U);
    msg.setDestinationEntity(203U);
    msg.req_id = 37756U;
    msg.ttl = 62635U;
    msg.destination.assign("GNAACCTIBUMQDGSDAUPFZRUHGZDPHGTXYNZLHQXLPJSBWYSCCAWTYIURGIVBEEIMLYXCWFFDTUWLLXPNEIBZNBNUAAZOVQRSTWBQKHTVLFSMOLRENQZMOMROIE");
    const char tmp_msg_0[] = {94, -36, 111, 93, 125, -1, 10, 121, -116, -4, -106, 39, 24, -64, 83, -58, -102, -51, -55, -64, 52, 14, -58, 110, -125, -42, 43, -51, -20, -12, -96, 68, 121, -61, 88, -105, 10, -66, 7, 113, -60, -59, 31, 100, -43, -62, 124, 17};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.03609301648146246);
    msg.setSource(48277U);
    msg.setSourceEntity(24U);
    msg.setDestination(29003U);
    msg.setDestinationEntity(232U);
    msg.req_id = 5649U;
    msg.ttl = 7515U;
    msg.destination.assign("QNHCOCLPIDMXGDYTFEHZCDWJKDZWPXVAVJPNIJKOXWUYDJQYOMLNVSHIYYJRFLEZHTRCQKSPQEBWOQFWMUYXCWNJKPLRBHVYIDTFFGENUEMDFIUAKVVTDKYUQMPXMSCVCTKDLEGHMSMSIPZCROTJJZWROFGVNHDEBIWLXSIOEMTPWAAIZRAMVXTNLUOCKQKNFQE");
    const char tmp_msg_0[] = {5, 7, 111, -46, 126, 42, -11, -9, -114, 29, -101, -59, -62, -77, -28, 48, -86, -106, -26, 29, 18, -2, 12, -56, -24, 124, 51, -110, -60, 53, 53, -80, 86, -67, 80, 70, 96, 60, -52, -9, -87, 47, -31, -101, 2, 91, -110, 8, 119, -62, -34, -55, -119, 7, -100, 11, 101, -72, -46, 36, -14, -126, 26, 15, 97, 65, -78, 126, 115, 1, -66, -23, 39, -4, 46, 59, 103, 90, 118, 49, 90, 5, -48, -34, -119, -44, -104, -102, 29, 121, 5, -67, -13, -86, -60, -105, 101, -55, -9, 68, -51, 107, 21, -31, -8, 43, 82, 46, -117, -12, -106, -23, 79, 88, 91, -60, 30, -117, -42, 83, 80, -107, 105, 65, 113, 81, 110, -81, 46, -56, -117, -30, 97, 73, 90, -20, -94, -66, 68, 1, -23, 68, -107, -109, 122, -33, 58, 45, -105, 4, -64, 79, 15, -119, -117, -15, -102, 72, 84, -77, -79, 48, -32, -108, 41, 110, -41, 103, 0, 74, 123, -104, -102, 125, -79, -113, 82, -72, -52, 104, -3, -117, -25, -13, -83, 67, -85, 100, 47, 7, 88, 6, 17, -12, -51, 32, 5, 20, 81, 46, -103, -55, -50, -45, -91, 79, -5, -101, -7, -65, -8, 8, -105, 23, 98, -100, -9, 120, 107, 106, 126, 120, 38, 111, -64, -38, -107, 46, -68, -74, 95, -77, -80, -95, 41, -78, -38, 77, 95, 64, -80, -69, -77, 32, -114, -81, 5, 11, 18, 58, -73, 95, -32, 19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.6865923993709789);
    msg.setSource(3412U);
    msg.setSourceEntity(28U);
    msg.setDestination(32950U);
    msg.setDestinationEntity(101U);
    msg.req_id = 5560U;
    msg.ttl = 23515U;
    msg.destination.assign("AKFPOLGZRYFNBFOFXQPILHPUEBVSCBIWQRCFJZMNKYZIVNLGBEHX");
    const char tmp_msg_0[] = {-101, 29, -54, 65, 26, 120, -120, -126, 3, -48, 43, -61, 1, 80, -80, 59, 48, -119, 2, -94, -57, 119, -65, -5, -101, 91, 104, -19, 116, -1, 83, 71, 57, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.16307298649806057);
    msg.setSource(23937U);
    msg.setSourceEntity(83U);
    msg.setDestination(17557U);
    msg.setDestinationEntity(178U);
    msg.req_id = 32862U;
    msg.status = 127U;
    msg.text.assign("UUJCRLFOKETWLYUFLKHTYIRAKDQKGQOKVWHATMORHSBHVKCPTUFNLOSHZQAXLSVPDZJPMDRTGVLXZZBXEIMWHSJBYJWEEICIYSFVPMUWYPWTNJZQAOJCMYFEPWDFYHOXXGNNQVNBJZPAJXEVIIBLQQCLFSDYUQHJAXBRBHSWIFGPINMXUPDDRQSTNOGFMJZUSCZGBSGMRAEWKWVTDDBGCFNAVGZICHAKCOMRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.37163516014058506);
    msg.setSource(55255U);
    msg.setSourceEntity(181U);
    msg.setDestination(47189U);
    msg.setDestinationEntity(109U);
    msg.req_id = 57504U;
    msg.status = 103U;
    msg.text.assign("QHWIYOJAFDYDCRQJZBJPMFAERSBIVMUFSYESGYTCCILUOQBQGQTLETGSAPCDYFBTGWYBAZDKXNIGEJLOVFHHNUVCIKPHMBPWZFWHQUEJCBVRNJVYQLUKBNODFIAKILNCZVUZZXRPLBWEEGNUJXUNGPYHEGDXTHWTCTUQDXNS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.6441654852618961);
    msg.setSource(15272U);
    msg.setSourceEntity(246U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(70U);
    msg.req_id = 809U;
    msg.status = 251U;
    msg.text.assign("LZDXBLPUSNGRDWYIBGGBIEKDYROHNZUQXQTSYBVFOMBYRQJXHELKBOMPCGIFQUJXDTBMGUTDHPFEYHJTFZZEPLOPAQPPQOUADFJPULJZNNVOWTKNFHDVXUPCIZHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.06462081228580607);
    msg.setSource(30289U);
    msg.setSourceEntity(25U);
    msg.setDestination(294U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("SMYYZJTEZVLOYCWCJDGTPZQSTSOFPXBLWMUEWSVQEHYWKGKHWHFPHIXJXFNVRLLOIFPGLKJKMOGWQZEVBXCLEBACRTGYBJYMTFHFVAKRZBFIIEPDKVAHLUBWRQLIMOAPZOQMQSBPKEEITEVIKJFZIFZDMUVFURUTNOUWONBTPDNGXPJQNAGSKXAUEAZGYSCSKNOQICUMPCMXASDQTUHGXDJYCRWBDDYRDARMRDSNAJXVJLONXUG");
    msg.links = 3329299531U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.6168303864945616);
    msg.setSource(5602U);
    msg.setSourceEntity(200U);
    msg.setDestination(45605U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("PWFHZYCSKRCRVJPJWDMYRDFBDIJLELKRAMISATYUPNZJGAMOBWOODURSSFENYKWJKHCBINMVNCTQYHVUBIUTMRDVEUEQBPBOXSSPOCWQLCYZNEVKRHOXVYANMSUSMDCHFIDRYMUNWXQDTJCTQZAFKSQWXEAYPVIXTRIFOZGGZAPXTWHHOFKPOTVIBLSXLECJFBATQUTXQGLLQDHNOGWDJJFWEZGVCUKINPHAHGAEGMP");
    msg.links = 2410487958U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.7653073577604675);
    msg.setSource(46193U);
    msg.setSourceEntity(61U);
    msg.setDestination(54503U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("ADUCNJVPWYZQAUKYOVCIBRWTBRLPQKOYUGKVBIECQIKKVAKEJFGAGTPEMSNNCEIWFOPUTSJNZPKPFLHZDTFHZQ");
    msg.links = 531202620U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.3799379688652881);
    msg.setSource(37497U);
    msg.setSourceEntity(51U);
    msg.setDestination(24982U);
    msg.setDestinationEntity(119U);
    msg.groupname.assign("ULAHDSSYFREUTNOAZJCXXMVCEDMDBSLIYDHLPFGLFBSTNAHBXLVJRYRQVUQLLLVLSGKZXCTQMATNGMXABMAUOFGSTQSCSRBKIOXWIICOVHYZYVKUCEPEXAFZUVZOKBYWQMUPKJYADGNQOFPPQNEIWNPZQBFHODQLJRIDTBMRXENJJHNUVCBRPEMF");
    msg.action = 172U;
    msg.grouplist.assign("DUUHDSDTQECRNRBZXMYQUFDUCMVOPFYIFTCBIHOVFPJMVJBOGQXFVYTGMCTKALGEOXLOIWKFTYPNKZTGIQCZAWKLJEBBSFWJVPMZZHRSTKOHHJREYNAHEPUKKCGDCOASUCVTUSNLYWMGSMABXXOKVNGHIQDUEEGVXROUWTXUZXARONDGEBMBQRWJZJPQSIJYJLZPPPHAIYCWRYJXWFNVLBYTIKQAPASHRKSWECLQLBDELNLGQNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.5557118558060709);
    msg.setSource(1895U);
    msg.setSourceEntity(124U);
    msg.setDestination(31098U);
    msg.setDestinationEntity(125U);
    msg.groupname.assign("EMNAZLAPKOTTWUERWKMQXKUIFLVBVUAKEUNYUXVCWHEGZNGQKRULEAJBQLMSWFXYTYADAEOSMTRTGNYXPSCLMOBYJJOKVOBZSNRDNZX");
    msg.action = 234U;
    msg.grouplist.assign("YTQZUGGVKKLFHWZKRXVWIJXUUDSWALZMRYIGYRQDBRADBVMFNCJPYACIVXPVGPCJAEQQOOKETEXGNGPZUGTMPYVSTYOHFDRMIWNMVIKMBQTXZOSPFOQKLPZHHDHOENZWTACHDCTBVJEQNNJXREKGQAZDRMOBPECHNYMSFSUKNENCLIFKUFYHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.4360794038000284);
    msg.setSource(48343U);
    msg.setSourceEntity(239U);
    msg.setDestination(21216U);
    msg.setDestinationEntity(118U);
    msg.groupname.assign("XFUPIKHTCLNREQPJM");
    msg.action = 111U;
    msg.grouplist.assign("GYNTBXGNQNIOPGOSRCKSNDMFKUYXQPVTEFZULBTZQGASOFJGWLXHQLCOQGAARXNNCXLKQVSFPETYVSWYDVWOZEDMJBCFEYSDBPWJPIJJFWBMYHARTFOCUKLFQNHOAZJAQKGH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.8471120133211443);
    msg.setSource(55624U);
    msg.setSourceEntity(86U);
    msg.setDestination(55161U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9938527757177493;
    msg.sys_src = 19933U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.40342391104736086);
    msg.setSource(54012U);
    msg.setSourceEntity(225U);
    msg.setDestination(30563U);
    msg.setDestinationEntity(155U);
    msg.value = 0.16266434997265633;
    msg.sys_src = 4502U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.7593914585159006);
    msg.setSource(10415U);
    msg.setSourceEntity(222U);
    msg.setDestination(21388U);
    msg.setDestinationEntity(37U);
    msg.value = 0.4776848110088202;
    msg.sys_src = 9958U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.8265769395036217);
    msg.setSource(10142U);
    msg.setSourceEntity(90U);
    msg.setDestination(17674U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5886281946659192;
    msg.units = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.7474520891947025);
    msg.setSource(65311U);
    msg.setSourceEntity(50U);
    msg.setDestination(57405U);
    msg.setDestinationEntity(53U);
    msg.value = 0.30574793115482246;
    msg.units = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.9431310615639958);
    msg.setSource(30680U);
    msg.setSourceEntity(153U);
    msg.setDestination(53068U);
    msg.setDestinationEntity(226U);
    msg.value = 0.2752330109721538;
    msg.units = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.1967901767874849);
    msg.setSource(22495U);
    msg.setSourceEntity(211U);
    msg.setDestination(57022U);
    msg.setDestinationEntity(220U);
    msg.base_lat = 0.35505137927700725;
    msg.base_lon = 0.7528611856312095;
    msg.base_time = 0.2863213262309575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.667762771249599);
    msg.setSource(33742U);
    msg.setSourceEntity(171U);
    msg.setDestination(52301U);
    msg.setDestinationEntity(154U);
    msg.base_lat = 0.8459096846748689;
    msg.base_lon = 0.912322953223378;
    msg.base_time = 0.8650314460597339;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.5381911716629824);
    msg.setSource(33800U);
    msg.setSourceEntity(49U);
    msg.setDestination(37416U);
    msg.setDestinationEntity(219U);
    msg.base_lat = 0.19387922298819382;
    msg.base_lon = 0.7467039299151437;
    msg.base_time = 0.7894094241372006;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 13838U;
    tmp_msg_0.priority = -15;
    tmp_msg_0.x = -14530;
    tmp_msg_0.y = 4236;
    tmp_msg_0.z = -7655;
    tmp_msg_0.t = 22826;
    IMC::Phycocyanin tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.07611738492766584;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.25037061649813375);
    msg.setSource(26010U);
    msg.setSourceEntity(94U);
    msg.setDestination(7810U);
    msg.setDestinationEntity(174U);
    msg.base_lat = 0.19677821331135825;
    msg.base_lon = 0.784544218087513;
    msg.base_time = 0.5127002913441184;
    const char tmp_msg_0[] = {-11, -83, -113, 13, 45, -79, 67, -37, 111, -50, 59, -76, -40, 9, -86, 94, -76, 39, -112, -60, -39, 83, 5, 109, -29, 66, -40, -40, 8};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.9716340664415688);
    msg.setSource(26281U);
    msg.setSourceEntity(78U);
    msg.setDestination(44204U);
    msg.setDestinationEntity(72U);
    msg.base_lat = 0.5279584251085349;
    msg.base_lon = 0.7489060575939142;
    msg.base_time = 0.001730595617270625;
    const char tmp_msg_0[] = {-27, 54, 35, -70, 14, 95, -66, 21, -45, 97, -74, 10, -76, -77, 25, 91, 11, 29, -19, 80, -1, 92, -82, 122, -45, 47, -78, 59, 20, -83, -87, 54, -34, 109, 116, 6, 50, 105, 72, 125, -84, -13, 75, 32, -108, -113, -110, 39, 44, -50, -58, -70, -71, -83, 105, -10, -113, -64, 25, -30, 73, 116, 123, -28, 28, 92, -88, -44, 19, -70, -76, 38, 88, 50, -109, 92, 17, 21, 87, 35, 3, -115, -1, 110, -47, 51, -57, 86, -13, 60, 49, -67, 35, 90, 126, 23, -62, 44, 60, 69, -114, -15, 26, -69, -37, -119, -33, 20, -127, 34, -82, -69, 9, 11, -120, -69, 35, -45, 29, 16, -125, 69, 55, -5, 58, 117, 89, -8, -91, 21, 39, 14, -64, -111, 88, -12, 77, -22, 71, -116, 112, 6, -14, 4, 8, 61, 33, 79, 54, 109, -13, -63, -68, 103, -120, -22, 88, 53, -116, 55, 75, 85, 13, 11, -124, 61, -82, -71, 60, 59, 72, 74, -95, 6, -21, -83, -115, -94, -71, -119, -10, 124, -102, 75, 114, 88, -76, -103};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.7003692336241277);
    msg.setSource(47625U);
    msg.setSourceEntity(196U);
    msg.setDestination(23480U);
    msg.setDestinationEntity(107U);
    msg.base_lat = 0.41840828848308853;
    msg.base_lon = 0.6168787784295025;
    msg.base_time = 0.9522014697603188;
    const char tmp_msg_0[] = {-33, -57, 68, -29, -61, 26, -44, 60, 0, 108, -88, 67, -31, -8, -82, -83, 91, -116, -21, 109, -28, -82, 43, 72, -65, -47, -115, -35, -30, 40, 36, 10, -73, -81, -111, -32, 53, -109, 1, -26, -117, -45, 21, 66, 5, 32, -19, 14, 121, 68};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.014464306293227591);
    msg.setSource(39815U);
    msg.setSourceEntity(10U);
    msg.setDestination(25143U);
    msg.setDestinationEntity(221U);
    msg.sys_id = 17735U;
    msg.priority = -105;
    msg.x = 5828;
    msg.y = 24958;
    msg.z = -18460;
    msg.t = -18781;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 28339U;
    tmp_msg_0.custom.assign("NCJJLYAIAVGPLUOFGLUSSZHIABDWDQYTWUXEKXTJWSFYVKTEIUMXMIFWKFJMPYCUCPBCOFPLJHOTCVVCRHWHXFNBRQOBKAPUWURZXYEQNTKQYWBAAXDDMEGMRNCGONZRSBHCY");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.8725002584261887);
    msg.setSource(47142U);
    msg.setSourceEntity(11U);
    msg.setDestination(65019U);
    msg.setDestinationEntity(17U);
    msg.sys_id = 34807U;
    msg.priority = -6;
    msg.x = -5976;
    msg.y = -10505;
    msg.z = 5480;
    msg.t = 2519;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.8245077496804166;
    tmp_msg_0.units = 207U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.5466702896103296);
    msg.setSource(8625U);
    msg.setSourceEntity(226U);
    msg.setDestination(53932U);
    msg.setDestinationEntity(98U);
    msg.sys_id = 3594U;
    msg.priority = 25;
    msg.x = -2672;
    msg.y = -3002;
    msg.z = -13351;
    msg.t = 11472;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 123U;
    tmp_msg_0.op = 180U;
    tmp_msg_0.request_id = 63596U;
    tmp_msg_0.plan_id.assign("HRLCFICPCJBMTPVBRZKPPORHTJODWXVGDCDPTMXNQGOGNAZNERGQKAFWCEBUNVMMFABSXCLQUXLSJGLPEKFRGBAEJYUMVEUVOMSRZKAEWDZZFTGGRBSWKRSLJPDZCAVIFDA");
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 42986U;
    tmp_tmp_msg_0_0.lat = 0.2435653823275724;
    tmp_tmp_msg_0_0.lon = 0.6694245909875622;
    tmp_tmp_msg_0_0.z = 0.008653057066646319;
    tmp_tmp_msg_0_0.z_units = 90U;
    tmp_tmp_msg_0_0.speed = 0.8862567712822083;
    tmp_tmp_msg_0_0.speed_units = 210U;
    tmp_tmp_msg_0_0.custom.assign("AFSUSTKCDESKDNBSWNKGIQRLYVNQHXIYSFLPOZDJRDUAOPZAZCKMNAAZCQGPUQOFACUOVDERDWFYGSVELBQHENQPKWHMFXSXYKBDBGIHZREBZLRJEJUQVZEMHXXJFPGYHUMIZYLTBFWJANEOCNMAVVWPUVLTNCGMEUZLGMMOEJSPTTWRZTRVNBJKHOJFTBLWHPWJMPRXPHYCUBOFCGWSXTYBYCDJXKDFQIDITUIIWIRM");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("OSYWBJQFCRLNVEAFQBDASAMXRFOAKLHPMUWNDHQITGEIGFGEICYVQHROJACSTFZBFCSEUPTCZWDBKRXCNJMTZSYOQRXHBZQGWWEOUBRIVODKJMKLZPYLIUIWBRHOAAENUPJYMCHCDHHTIIEXVQKPLTNWRRGXNJUN");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.160033437892668);
    msg.setSource(52185U);
    msg.setSourceEntity(99U);
    msg.setDestination(47749U);
    msg.setDestinationEntity(80U);
    msg.req_id = 52131U;
    msg.type = 209U;
    msg.max_size = 793U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.022654237149270506;
    tmp_msg_0.base_lon = 0.45953324798155715;
    tmp_msg_0.base_time = 0.6196318088080108;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.035583137039570945);
    msg.setSource(46888U);
    msg.setSourceEntity(83U);
    msg.setDestination(61330U);
    msg.setDestinationEntity(6U);
    msg.req_id = 32022U;
    msg.type = 77U;
    msg.max_size = 51642U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7658813233586355;
    tmp_msg_0.base_lon = 0.5072055429766688;
    tmp_msg_0.base_time = 0.7918973974571074;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 4539U;
    tmp_tmp_msg_0_0.priority = 106;
    tmp_tmp_msg_0_0.x = -17456;
    tmp_tmp_msg_0_0.y = 31613;
    tmp_tmp_msg_0_0.z = 18247;
    tmp_tmp_msg_0_0.t = 20116;
    IMC::ParametersXml tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.locale.assign("FHZXVRHOYKGQCVGSOWQLBPQLBDJLNXBDPZYYUIMNXDAVEUFHWKNSMBNJJCHVSJSXHDYSFQZPOEAAIAIIIVSEHWBWIPTJLKTZHLNYROKFLLNCZBOTRBMPOQMTRBSZXXACHKEDSUCPJCYGUVGBLEYREUAQNFGEMAWJCRYHTGHKZRTOWN");
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {77, -117, 114, -128, -24, 107, -105, 5, -80, 78, 30, 25, -42, 65, 12, 41, -91, 114, 93, 51, -52, 76, -120, 66, 29, 10, 124, 102, -118, 8, -55, 44, 44, 26, 3, 121, -20, 124, -78, 59, 112, 120, 26, -61, 95, 64, -19, -18, -84, -66, 39, -126, -59, 108, -18, 2, 119, 43, -62, 71, 1, 87, 58, -9, -6, 89, 121, 66, -58, -69, -55, 111, 83, -64, 51, -22, 32, -58, -103, -12, 100, 5, -95, 100, 70, 50, 66, 3, 69, 42, -92, 2, 50, -2, -104, -13, -55, 28, 46};
    tmp_tmp_tmp_msg_0_0_0.config.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.11241931232239022);
    msg.setSource(36227U);
    msg.setSourceEntity(56U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(253U);
    msg.req_id = 18015U;
    msg.type = 206U;
    msg.max_size = 28736U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.45607566483031714;
    tmp_msg_0.base_lon = 0.4729672018566884;
    tmp_msg_0.base_time = 0.10766299552578174;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 60153U;
    tmp_tmp_msg_0_0.destination = 26892U;
    tmp_tmp_msg_0_0.timeout = 0.18661323893045323;
    IMC::ArmingState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.state = 166U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.5817593731854543);
    msg.setSource(40572U);
    msg.setSourceEntity(241U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(94U);
    msg.original_source = 30258U;
    msg.destination = 55820U;
    msg.timeout = 0.18399158373038915;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("KNISWFGEMBUQFDNPIYLOBQIXYUYBTFLKJGUHKAFSUMCEBOCMXRDDPNEIUVWZWOHQGSBFAISTRQKWTDCZJPRGDUQWUOPENLGJGOBYHBJAXZNKRKTCSANPELKMRQENDCCBCMLJZKFGEMLYTYSESVPQNFUNPJQZJDBCYADRVV");
    const char tmp_tmp_msg_0_0[] = {-32, -90, -85, 105, 106, 90, 44, 95, -50, 57, 81, -13, -41, 61, -62, -101, -93, 89, 73, 113, 61, 82, 65, -76, 66, 27, -93, 92, 35, -73, -83, -92, -9, -11, 86, 47, -108, -67, -79, -102, -43, 93, 122, 43, 8, 104, -32, 62, -95, -3, 19, 10, 73, -86, -80, 26, -77, -119, -83, 18, 110, 92, -105, 113, -13, -68, -82, -56, -76, -14, 98, -36, 1, 54, -53, -109, 98, 100, 18, -31, -127, 63, 46, -103, 16, -23, -119, 48, -110, -125, 91, -57, 111, -39, -61, 36, -69, 83, -83, 30, 31, -108, 109, -96, 56, -14, 111, 25, 68, -65, -11, 73, 78, 48, -50, 18, -63, 78, 12, 40, 51, 43, 38, -21, 20, -61, -91, -81, -44, -93, 71, 49, -87, 93, 2, -32, -4, 114, -36, -84, 90, 35, 112, -79, -85, -103, -13, -50, 124, -64, -22, -94, -46, 119, 54, -36, -86, -33, -34, 17, -28, 51, 94, 96, -41, 81, -111, 18, -9, -58, -53, -55, -1, -89, -27, -36, 12, -45, 18, -108, -94, -32, -108, -9, 60, 113, -46, -29, 16, 95, 41, -91, 52, -40, -16, -29, 121, 77, -83, 96, -11, -79, 65, 44, 108, 76, 100, -87, 72, -76, -123, -40, -31};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.07469526824883044);
    msg.setSource(10612U);
    msg.setSourceEntity(137U);
    msg.setDestination(31844U);
    msg.setDestinationEntity(79U);
    msg.original_source = 24070U;
    msg.destination = 7372U;
    msg.timeout = 0.17329232068872513;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.07613856252044326;
    tmp_msg_0.reason = 226U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.6148386903397004);
    msg.setSource(46464U);
    msg.setSourceEntity(58U);
    msg.setDestination(38763U);
    msg.setDestinationEntity(176U);
    msg.original_source = 52411U;
    msg.destination = 19834U;
    msg.timeout = 0.8699399803850624;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("EDJDLMWTFWVQWLKAAITUHSRQTLBOFFJZPUDBFMXXENTPZHSKIYOMHBHGJDDMNLVLZAKUXTECP");
    tmp_msg_0.sensor_class.assign("WMPUTRLRPHNEGNTVOGDJZBFFDVTELQKHAFSCNSOEDOXPLPNWDBGWWUCBBSRANCFQUNULTHBUK");
    tmp_msg_0.lat = 0.8963393008275293;
    tmp_msg_0.lon = 0.7287325968518296;
    tmp_msg_0.alt = 0.41365065002628665;
    tmp_msg_0.heading = 0.4828952151610989;
    tmp_msg_0.data.assign("JYUERNAXALYWWNIMYRQKWCVYGMCGDZCXITJPKDQJDKIUQLJRDVUHSESHFVTALYJSIZFOEOBOXHVSBWTCOJRRSHEZKTCAXLJHVJZEKVMWKWWZRYPIPCQGQAYEHXIYTNXFGBFZFFLAFHAMQIKBDBMENIARDLWTTMXKQUOPMKE");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.5637778793203865);
    msg.setSource(31998U);
    msg.setSourceEntity(64U);
    msg.setDestination(8101U);
    msg.setDestinationEntity(179U);
    msg.type = 67U;
    msg.comm_interface = 3101U;
    msg.model = 22866U;
    msg.list.assign("EGZLOWGXSUQOESEWJZESQSCNENPTXQNYMDRBCFTXKZJLQVCAWPCBRBYFTHRZDROLPSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.12621387025856523);
    msg.setSource(55128U);
    msg.setSourceEntity(234U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(215U);
    msg.type = 192U;
    msg.comm_interface = 10239U;
    msg.model = 29237U;
    msg.list.assign("AMBCCPGUDPFUFGIRVHJPXMLNCJSUKGNOLHXFLSRFZBOTXTIWNCV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.24355189750573814);
    msg.setSource(42812U);
    msg.setSourceEntity(123U);
    msg.setDestination(26747U);
    msg.setDestinationEntity(197U);
    msg.type = 155U;
    msg.comm_interface = 52599U;
    msg.model = 43478U;
    msg.list.assign("PQBYSVLTINAXARRVZYOUPJWQKLMOGQLBMCXRVTCCZPOBDASDPCYGDUHDPNDGEJWOAZKTIVZECZQHHPLINVZWAHSADSGNLUDCYJOSHCZIYLOAUENKPIMMWYJFAKXUEXHTUTDBWARULRVOJWMRGTUTQFSERPLKXYJMQXGNJKIPRVEFWKTTPFAKVCLBJCBBIHWBQDISBWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.3865572430027816);
    msg.setSource(4339U);
    msg.setSourceEntity(111U);
    msg.setDestination(37867U);
    msg.setDestinationEntity(207U);
    msg.type = 76U;
    msg.req_id = 4203599731U;
    msg.ttl = 29085U;
    msg.code = 142U;
    msg.destination.assign("UBFOWXIXTSFHCENRNUEAPNWJUOAJQCKBRYVUTLMHFMTYMHLXLHVGKBSDGBPGQYNOGUFHFLGVPAOJJZCKMQRPDJMDIKTEDUARSXYWFNARSZNUXODQPFHWATAGKHKHZDZOKR");
    msg.source.assign("VXYFUKPRTZWDABNNOPVKAEDWIBLJXZTOMUPJHYNTKXRQDLRAQQCGUHSNADESMPFWVICEKJLXUBTYVB");
    msg.acknowledge = 200U;
    msg.status = 117U;
    const char tmp_msg_0[] = {89, 107, 64, 89, 42, 84, 42, 13, 117, 112, -45, 35, 103, -33, -9, -50, 124, 47, -126, 64, 110, -122, 4, -11, 10, 46, -24, -33, -44, -103, -124, 42, -63, 89, -115, -115, -20, 35, 34, -127, 56, -34, 73, -71, -49, 24, 31, -2, -54, 66, -36, -38, 67, 40, 16, -77, 97, -25, -59, -65, 40, 23, 73, -20, -66, 116, -101, -34, -126, -84, -89, -71, -96, -90, -89, 86, 80, -93, 123, 7, -62, 65, 107, 124, -64, 34, -28, 108, 74, 2, 19, 116, 90, -67, -118, 57, -88, 16, -60, -113, 92, 108, 104, -6, 63, 68, 27, 96, 110, -111, 11, -19, -76, -88, -126, 97, 83, -103, -73, 6, 81, -3, 70, -11, -113, 58, -97, -17, -82, 9, -106, -113, -44, -9, -11, 118, 101, -36, -52, -128, -20, -50, -67, -18, 87, 116, -117, 46, -124, 26, -113, 16, 114, 108, -58, -115, 13, -49, 20, -47, -3, 124, 86, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.3525358013992578);
    msg.setSource(32302U);
    msg.setSourceEntity(142U);
    msg.setDestination(1720U);
    msg.setDestinationEntity(109U);
    msg.type = 193U;
    msg.req_id = 4105578258U;
    msg.ttl = 1642U;
    msg.code = 125U;
    msg.destination.assign("NWQHMXHHIUYWLGECNSEQSWETKYXYHGRIJKBWZVZPZVOQGQIFJBITMVGXWTVZPCOJMBY");
    msg.source.assign("YCKGTELMGYHXDYMAXCUDOIQFYVVOXFEEJFXWWUSZSDEQCIDYAXRWTGKTYWTJPBPEBNVRWFTIONFYXLHLKEPHIIXAQPUMOGJSMJRUVNDRNAMDVWCIKHZTRSQGEUTHBFLPKKJCATTGBLEISIYVMUFSHXROASNHZFCCLNDOZAQZVLZHZAVBMMRUQOKZEBJDZSYVDNNUFDPGUWONMMAIOJPJJLSBUGRQRQFBVWQJPZYKIBWGHLB");
    msg.acknowledge = 105U;
    msg.status = 80U;
    const char tmp_msg_0[] = {83, -69, -52, -76, -128, 116, 77, -22, 2, -76, -33, -20, 5, 52, -69, 25, 75, 11, -66, 114, -76, 97, 76, -22, -21, 112, -107, -90, 58, -78, 78, -111, 111, 51, -34, 126, -68, -21, 2, 66, -95, 49, 9, 61, 5, 30, 12, 111, 4, -90, 26, -13, 69, -19, -88, 103, -71, 49, -85, -29, -15, -84, 29, -105, 103, -45, 58, -120, 62, -124, 37, -52, 53, 9, 22, 121, -128, 52, 43, 6, 52, 80, 48, -10, -33, 58, 90, 24, -106, -5, 68, 29, -42, -115, 124, 11, 113, -72, -109, -9, -90, -68, 66, 43, -42, 50, 50, -103, 17, -76, -71, 12, 118, 41, -89, -34, -58, -93, 69, 24, -41, -7, 85, -108, 39, 39, -59, 47, -58, -18, 65, -106, -9, 90, 123, 97, 99, -115, 116, -10, -100, 124, 120, 97, -96, -67, -76, -87, 126, -9, -121, -85, 102, 28, -29, 29, 50, 43, 126, -30, 116, 108, -11, 0, 2, 111, 13, -64, -51, -82, -37, 63, 32, -70, 64, -82, 16, 63, 0, -54, -54, 49, 67, -25, 45, 93, -90, -86, 77, 58, -81, 101, 115, -90, 38, -88, -47, 9, 77, -49, 126, -9, -7, -64, 98, -116, 41, 27, 104, 13, 74, 39, 96, -73, -105, 69, 101, -82, -78, 90, 81, -43, -71, -4, 73, 111, -3, 119, 14, 123, 16, 14, 11, 109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.7862889594136908);
    msg.setSource(26915U);
    msg.setSourceEntity(83U);
    msg.setDestination(9382U);
    msg.setDestinationEntity(249U);
    msg.type = 72U;
    msg.req_id = 2206584464U;
    msg.ttl = 36257U;
    msg.code = 234U;
    msg.destination.assign("YKLOGEEQSHMCUPEBKNQCZKAQCJFOGKIZFVANCYIJCWHMUFFXCWPMAQDSKIDPXHSVZKTPXQLVLOBMUKEBFOSDAIWBATWYGTYQFUXXPELQTBBIZTXMHQUSUVZJNTRIRKMAUWIDWJSHDGHKLSVYVGAPJOQNIKDTGJUDFMEWMWONOWOYEERGPYRLFUFONBANVBXLXXHGJCRRPTELDPJVWAJOTICELBHCRZZSYPDVYUCFMXRQZR");
    msg.source.assign("ANXAVMVYHZHWCANFWHLDOOFSMNRLUCULIVLMGXRBPUETDOPZGKOVANUNDOIWQPBGYIAHOQIFPRUEBYVURKRPYQXMFESKIXYAZFSJNJWGRVTKVHDFA");
    msg.acknowledge = 215U;
    msg.status = 162U;
    const char tmp_msg_0[] = {48, -5, 16, -5, -46, 46, 23, -60, 79, 72, 46, 47, -59, -102, -93, -50, 57, -68, 47, -102, -121, -50, -88, 40, 73, 79, -62, -99, 88, 56, 124, 50, -22, 63, 37, 96, -28, 94, 108, 98, -122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.05391205331401927);
    msg.setSource(64157U);
    msg.setSourceEntity(128U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(239U);
    msg.id = 188U;
    msg.range = 0.9743383869953236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.7948694602501258);
    msg.setSource(61072U);
    msg.setSourceEntity(247U);
    msg.setDestination(12967U);
    msg.setDestinationEntity(146U);
    msg.id = 107U;
    msg.range = 0.20390249495264012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.9819487593176076);
    msg.setSource(54127U);
    msg.setSourceEntity(30U);
    msg.setDestination(31471U);
    msg.setDestinationEntity(206U);
    msg.id = 137U;
    msg.range = 0.8286323396739718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.10544312117292565);
    msg.setSource(65435U);
    msg.setSourceEntity(225U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(238U);
    msg.beacon.assign("TUWJRKKDRCFFQAIMJVBSPLZNGVSWHVPKCRZCKYTMIKBSYGNRFNNIIDOEWTACQPLGSVDPVKHRDEJNFZYOPVJPGGDRGJFOUDTEYRTMDHUAXZSMEOVABFCPTENXLJGIKQLOTMAQHQQJS");
    msg.lat = 0.07682082879672225;
    msg.lon = 0.6666699318749465;
    msg.depth = 0.3826287463952318;
    msg.query_channel = 141U;
    msg.reply_channel = 177U;
    msg.transponder_delay = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.12518285126864503);
    msg.setSource(20916U);
    msg.setSourceEntity(124U);
    msg.setDestination(22440U);
    msg.setDestinationEntity(102U);
    msg.beacon.assign("VMVRKLGOLGVEQ");
    msg.lat = 0.7104946269975199;
    msg.lon = 0.7182439916001628;
    msg.depth = 0.47637562608467476;
    msg.query_channel = 254U;
    msg.reply_channel = 92U;
    msg.transponder_delay = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.7717016704596582);
    msg.setSource(35357U);
    msg.setSourceEntity(20U);
    msg.setDestination(5836U);
    msg.setDestinationEntity(35U);
    msg.beacon.assign("ZJHLJRGPGSFZCWZHQFRETGVHWBGNVEMEQGPOVGBUWKDDOCOVYFNTLQBCHOMULFIYBNMWMAIACZSYGMIZAUDLAQKSWZVCFETMEIUJSQ");
    msg.lat = 0.09960845068699087;
    msg.lon = 0.35485006145777653;
    msg.depth = 0.14331993433741963;
    msg.query_channel = 133U;
    msg.reply_channel = 14U;
    msg.transponder_delay = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.24337111074614337);
    msg.setSource(3110U);
    msg.setSourceEntity(201U);
    msg.setDestination(41280U);
    msg.setDestinationEntity(142U);
    msg.op = 94U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MDCZFBOQEBFSYNBFAFWPZWDWTGFFKRVXVPHNEIRYJBEDLDOQMYINOMJLKNNLSMCHKKOAHMY");
    tmp_msg_0.lat = 0.800989761903848;
    tmp_msg_0.lon = 0.03200102420875173;
    tmp_msg_0.depth = 0.3579576686558993;
    tmp_msg_0.query_channel = 202U;
    tmp_msg_0.reply_channel = 58U;
    tmp_msg_0.transponder_delay = 113U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.685513661096959);
    msg.setSource(42948U);
    msg.setSourceEntity(251U);
    msg.setDestination(57708U);
    msg.setDestinationEntity(214U);
    msg.op = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.3017206258378058);
    msg.setSource(12352U);
    msg.setSourceEntity(119U);
    msg.setDestination(31261U);
    msg.setDestinationEntity(7U);
    msg.op = 88U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JBGXBYMIKOBCNIHZVHVLUSWSEPLNBRYGAQGEE");
    tmp_msg_0.lat = 0.15995259535476292;
    tmp_msg_0.lon = 0.8398470297274119;
    tmp_msg_0.depth = 0.4421645620052763;
    tmp_msg_0.query_channel = 15U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 119U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.9267067415438964);
    msg.setSource(12436U);
    msg.setSourceEntity(13U);
    msg.setDestination(54697U);
    msg.setDestinationEntity(234U);
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.43817184797509867;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.7307470089794867);
    msg.setSource(55643U);
    msg.setSourceEntity(129U);
    msg.setDestination(36146U);
    msg.setDestinationEntity(144U);
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("HGYVLKFIXTJVRAJXBMHSFQNHRARYZNCTMGPDTJWNHBWTXVNIUACJKDMMQIDZLDPFLHOMAWHYLHFOVKFGDBEYYSUPDSKZYBJYNKTLEPQCAAMAIPHKGWEZTWFIOFSWQMMCZKQZNSNVIGAJRLXVXXDJGWZENGYFIYZUBRRBOWOUSYCGECFOCDZFKRXQUIXDUUITKSMCOJGLVLMPORVOEJGXETHEBWOWPNRLVPBRXHBJSAITPEUNUQ");
    tmp_msg_0.report_time = 0.3996771263070851;
    tmp_msg_0.medium = 87U;
    tmp_msg_0.lat = 0.5812676348540903;
    tmp_msg_0.lon = 0.9053222133476102;
    tmp_msg_0.depth = 0.8792705411144203;
    tmp_msg_0.alt = 0.12987959713055042;
    tmp_msg_0.sog = 0.520717272812848;
    tmp_msg_0.cog = 0.3527663399182571;
    IMC::Heartbeat tmp_tmp_msg_0_0;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.8279703602241664);
    msg.setSource(19228U);
    msg.setSourceEntity(162U);
    msg.setDestination(43985U);
    msg.setDestinationEntity(11U);
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 64U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("ZMVKLTUWULJBXQWIOBDGYXHEVEDOSDPUGYLWZJDAWTJAEKPQYDRVTMFWLBMVBCYSOFPZBXQGBANBYTCVCOYAWAHRBMMQXVEAITSVGKMOFLHRFMNBDCHRQWGNIISOXNS");
    tmp_tmp_msg_0_0.lat = 0.5890528186276758;
    tmp_tmp_msg_0_0.lon = 0.3854465867481306;
    tmp_tmp_msg_0_0.depth = 0.9453294100849222;
    tmp_tmp_msg_0_0.query_channel = 104U;
    tmp_tmp_msg_0_0.reply_channel = 78U;
    tmp_tmp_msg_0_0.transponder_delay = 40U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.2676483784412367);
    msg.setSource(1501U);
    msg.setSourceEntity(140U);
    msg.setDestination(36971U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.6786474175782214;
    msg.lon = 0.7405951548528408;
    msg.depth = 0.14641751866298358;
    msg.sentence.assign("FYIRQMHBCYBBILLWVELTOLCKHIRFAQYMUWMFPISGYVPWJUHGFVFROOVIZONUEZPBASNOIAGPVAQARBAKXJSXHLOSSEMTKQLTCICTPREMDBGEOKHJRZFLQYSYRJNWKQTWEDSVPIUGTAECVJZSSNKGMVWQBURMDTWNHXWAQUFJBDHHKJXDZVVUMPBXGOXLKUZUJETZETDFYUOAM");
    msg.txtime = 0.10703830989055729;
    msg.modem_type.assign("KYRECGRYVFLIPWKTIEMBAVLKPAHADALTHULOLBVKSSGZHCXHEQJEIFXHEHNRSDQUOZFVUEINQYAXZVJUZGIYBALRRKZKXMTMANCEHNMBBBUVQWPXJUTFCFWEDSMOLHOPRTOWJUAPONTOTPALJSFICQSBSAQGKNZBEYWWDMSRVGZXDTMBQGJYGDOYXPZQVXZLHO");
    msg.sys_src.assign("HLWBBDIMBWHEVDLYOQCXHOUHAOVHUTUTATTCQNESOCUGWUZVPAYGOIWLZGQNQKQZBMTJAJOWPUDTZTVS");
    msg.seq = 18743U;
    msg.sys_dst.assign("IBQGTZJATRVKJPACBUSLPLQBDWLLGMDGKYXGRKSHMUORWEXRMDBOYGRXROSUDJJELQYAYUPPHHKBUHJEJGKQJYVAQLBFCOXNCHCSIPXLYSNVOJJZPDXNMHLPZITZNEYSTZPFIYKCLTSWBCFOWFNYWRQUECGGYACN");
    msg.flags = 107U;
    const char tmp_msg_0[] = {125, 65, -56, -11, 79, 0, 83, -69, 85, 20, -27, -100, 24, 114, -67, -70, -19, 98, 125, -77, -33, 103, -76, -56, -42, 88, -101, 101, 85, -85, 32, -100, 19, 87, 124, 117, 30, -118, -74, -5, 83, 48, -27, -85, 54, 104, 46, -35, -57, 29, -53, -46, -4, -69, 17, 23, 9, 5, -103, -128, 17, 111, -51, 43, 45, -12, 34, -60, 86, 120, 0, -92, 69, 117, 77, 33, -18, -110, 58, 126, -78, -64, 63, 72, -108, -52, -76, 114, 81, -96, -76, 30, -110, -26, 3, 85, 9, 121, 47, 59, -62, -115, 42, -90, -110, 126, -26, -32, -74, 126, 71, 59, 107, 49, -41, 6, -118, -59, 120, -126, -12, 90, 24, 54, 43, -64, -46, -107, -61, -123, -72, -102, -43, -11, 37, -96, 81, -38, -71, 61, 108, 8, -119, -112, 0, 72, 120, -50, 113, -53, 8, 97, 91, 72, 109, 82, 16, -96, 28, 31, 75, 116, -77, -67, -102, 59, 86, 47, -18, -43, -22, 118, -101, 8, 36, -69, -33, -113, 59, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.21558716655039467);
    msg.setSource(54246U);
    msg.setSourceEntity(187U);
    msg.setDestination(13494U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.06957294909554035;
    msg.lon = 0.8810472151712723;
    msg.depth = 0.6115876720186322;
    msg.sentence.assign("WIHPREPQKTAZCNXUGGJMVEDY");
    msg.txtime = 0.5648503093150404;
    msg.modem_type.assign("SZVQLLRHSBVE");
    msg.sys_src.assign("ZATBMZDMJSBMJEEOQWPBOSHOQXHMLVXQARRYQJLKWJPPOHIYFAZSDTNEIZIWCTWSXYHMTZRSFKCNLVNLBAODLLOPQKCUMGULUBJUFPCVYPIYIZEMYFTGWBTCKIRUIJIVW");
    msg.seq = 50335U;
    msg.sys_dst.assign("KXVJFSCPYQZCIDEAKDKLRSCMKOMGMJRAIDHTZADAFRKPWGV");
    msg.flags = 111U;
    const char tmp_msg_0[] = {114, -108, -88, -116, -11, -124, -47, -109, 0, -128, -98, 23, 112, -91, -99, -110, 118, 7, -76, -79, -44, -27, -42, -12, -85, 35, 40, 81, -19, 26, -118, -15, -47, 96, -95, -84, 48, 67, -58, 56, -82, -104, -18, -40, 70, 82, 113, 11, -21, 42, -29, -75, -99, 32, 21, 100, -4, -76, 93, -28, 85, -71, -74, 85, -103, -42, 41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.5707011720137328);
    msg.setSource(9408U);
    msg.setSourceEntity(147U);
    msg.setDestination(1068U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.1914431682965878;
    msg.lon = 0.36165639981138786;
    msg.depth = 0.8993777474561904;
    msg.sentence.assign("NTGVIZJLCSDBPUKAZOIAFHXINVOZNHNABCQTBVXMHLDSPVWXOILVQFMVGAWDDUCMSTXWNMFTFFLRIXUGGKUSHPGPDWVJJGIRJDWMPRFIJBEUSNURTYSWKLQDYLEQCKROYQYYVZZJBEETMYMEFAGJFONQRGBPIBRQNCKDFOCECNPUCHKSEHXQXBEHSIPCXQTKAYZBZLHJGLRTZCTUWURDFKG");
    msg.txtime = 0.84650810622429;
    msg.modem_type.assign("TNOXAPQRSZVQVVCRISJPMLZWISIMHBBPZSLLGABXYIHMEJJGCVSMOSGBZIBQIAGDJHQXZSUZBSQGBFYUKURUNCCTXVOMUO");
    msg.sys_src.assign("STBWLNBKWJESGBMHNYKUWKFDHYGDZELDPHHXNNLLETTZJZATECGPMNLURTAVQIWQHOQKKHMIURGNVFVMJOPRA");
    msg.seq = 36831U;
    msg.sys_dst.assign("DMKNBUFFTNPTELTLCMTOYJRPJVIOKLRIOUWSRQYZFPYGGMYKZAQFQELZPYVXJNATHJYONLMXCSORWUCGSEITMPXEAHGZWGFUGXKCTZUDBZJAOEHYTUJHSZRVCQUGODACMINKASVURFFXHTERSNEWDBCSAMEBKYJLXHMQZQVWLVXPKGOQMWAFQSLABLBLTUVCRWIJIAURXMDIOENBIVDZBSBDPCZXRNHPQOBYWIFJPCGKPHKDDWSIWJNFHKD");
    msg.flags = 72U;
    const char tmp_msg_0[] = {-75, -127, 102, -63, -60, -51, 120, -82, -77, 37, 35, -97, -62, 38, -22, -76, -72, -120, 126, 87, -10, 71, -22, 83, -46, 83, -3, -24, 3, 35, -56, -81, -17, 76, -62, 82, 14, -124, -13, 102, 81, -111, -84, 99, 54, -77, -99, 48, 14, -69, 86, 95, -120, 109, 58, -48, -104, 85, -9, -103, 114, -84, 7, -64, -47, -106, -21, -40, -111, -90, -57, -7, -81, 112, -107, 60, -20, -88, 47, 106, -68, -25, -119, -64, -73, 65, -36, -27, 75, -80, 72, -80, 106, 30, -44, -116, 22, -26, 5, 104, -76, -4, 5, -10, 64, 108, 17, -11, -25, -110, 60, -33, 11, -98, -9, 10, -125, -39, -52, 69, 30, -126, 17, 87};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.044880774832709136);
    msg.setSource(62092U);
    msg.setSourceEntity(134U);
    msg.setDestination(53464U);
    msg.setDestinationEntity(139U);
    msg.op = 70U;
    msg.system.assign("FCIWELDFSSCMJWOKYSIMDRYVUJHHLKVXBUWVIEDAFOWMOOKYXFHQCMWYEEOCUWWGTJSITSNRDZJLAZTTRNOXOZHNYCBDFWBSRYHSVMZLIAWLBCRTCFND");
    msg.range = 0.9147266428785676;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.13894749387113658;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.674912003791444);
    msg.setSource(23483U);
    msg.setSourceEntity(154U);
    msg.setDestination(35030U);
    msg.setDestinationEntity(148U);
    msg.op = 48U;
    msg.system.assign("AAJIDSUBVZQZUKMXWNOONSHLGDCMERWGFKSVAGYLJZWVWTUUUQCFZHSES");
    msg.range = 0.6048233231721678;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5327899219481187;
    tmp_msg_0.lon = 0.9037572034007989;
    tmp_msg_0.height = 0.2152728586151892;
    tmp_msg_0.x = 0.741506680593978;
    tmp_msg_0.y = 0.17140114940329987;
    tmp_msg_0.z = 0.02060532166886664;
    tmp_msg_0.phi = 0.7240588414772384;
    tmp_msg_0.theta = 0.45300521530514304;
    tmp_msg_0.psi = 0.09041724028473841;
    tmp_msg_0.u = 0.6006741881180071;
    tmp_msg_0.v = 0.8476748308827767;
    tmp_msg_0.w = 0.11764991467106611;
    tmp_msg_0.p = 0.40613604220841293;
    tmp_msg_0.q = 0.614920281902477;
    tmp_msg_0.r = 0.5372836628914153;
    tmp_msg_0.svx = 0.570615340158706;
    tmp_msg_0.svy = 0.18214170635979554;
    tmp_msg_0.svz = 0.7418040988499411;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.233873720439837);
    msg.setSource(54986U);
    msg.setSourceEntity(191U);
    msg.setDestination(46417U);
    msg.setDestinationEntity(241U);
    msg.op = 74U;
    msg.system.assign("TATRCVAZMRHHWVEWEHHDEXPNDCDNXNLXAHEDDYASTXSIJCCJAMHGQZKANYQGZFYCEQSWVYBYDFSIILDYVWRMQMIUNDOOUZQBMUKBJSXPDLCIQUGAUGWTBPRHNHIOWJOIZHRXZLOFQBRIGXNHVWMFZXYVOKTMUTNGAPRVGTXLWEMEKRG");
    msg.range = 0.8975541614066512;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.4683857864081783;
    tmp_msg_0.width = 0.4372252745622073;
    tmp_msg_0.length = 0.3486562287700412;
    tmp_msg_0.bearing = 0.4604742499041826;
    tmp_msg_0.pxl = 9355;
    tmp_msg_0.encoding = 228U;
    const char tmp_tmp_msg_0_0[] = {-15, -120, 23, -51, 45, -18, -22, -40, -128, -64, -24, -60, -114, -124, 123, -12, 79, -101, -55};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.8493872908401713);
    msg.setSource(60242U);
    msg.setSourceEntity(14U);
    msg.setDestination(34605U);
    msg.setDestinationEntity(164U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.506107470231507);
    msg.setSource(26191U);
    msg.setSourceEntity(201U);
    msg.setDestination(20668U);
    msg.setDestinationEntity(125U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.6496759988078618);
    msg.setSource(35692U);
    msg.setSourceEntity(132U);
    msg.setDestination(41323U);
    msg.setDestinationEntity(20U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.4030058833504946);
    msg.setSource(6369U);
    msg.setSourceEntity(108U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(83U);
    msg.list.assign("TKHKWDBUWNYRFXSMEYRVCTUGFUPLNEJRLPVQBQEQFBOOLZJXYSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.8551907137970098);
    msg.setSource(27126U);
    msg.setSourceEntity(36U);
    msg.setDestination(43888U);
    msg.setDestinationEntity(202U);
    msg.list.assign("ERTNKOVSFCFXHTGMLVZENGJQWMXVIZUDJRYRFIPYALKOEZTSOGNDMPXPJWBGATAKPAXCAUWACZYLGSMAKRQYJFGCLIIWWFYQOTKCJGVICXRLLFLYEUJZKZZBZSVENTMGNBBFOLWMCTOWABQJXVVXNRTSCJDNQDUKAHSCGMPXMMUPFESQGQDJHWWBHTQRIDRWOIMLVTDPUEXHDYDQPQNPORNSZBFXYHHYECRVUIHBPFSBHUKEUIODSBJNYKIAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.8351479323123087);
    msg.setSource(45996U);
    msg.setSourceEntity(171U);
    msg.setDestination(54588U);
    msg.setDestinationEntity(123U);
    msg.list.assign("MSCUARQAEYPMACB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8073432341229364);
    msg.setSource(50739U);
    msg.setSourceEntity(235U);
    msg.setDestination(25703U);
    msg.setDestinationEntity(28U);
    msg.peer.assign("MONLFWCHTFTMFZSQQKBQHUFMYQKOUCWIPJXNXDSSAGYJFQDFGMBZEPSIBLZUSPBGWHRROZGGYCTDIYJNJSVARSVEBSLMDIQELAMCTDKCAVXXJAYQGIEUPJETXKVZJONEGZNCVILBRNYXVDOQMHHYEVLPNLKHMVQUUEJAJYCVHTOBZUFNHWNEWRU");
    msg.rssi = 0.15162002031233657;
    msg.integrity = 61399U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.1321666802185092);
    msg.setSource(62498U);
    msg.setSourceEntity(167U);
    msg.setDestination(10235U);
    msg.setDestinationEntity(67U);
    msg.peer.assign("WMIROYWTBVPHBOSGWWGZSZNFBBYYZFUKFZCLMMQBWCYNUWLAMOQDBURSEDKXABMORUFOPQTVFVEVLXLRXNUPOZGOMVKKIPARHBKQTIECWENMKDMWSXZYCEPAAHPCDIHKJZJESUJTHRLPIELTRUDNDBRTXQAJMGSXJQQVJYJECATTVSKSDMCHSYIQONRQDKCKAATCNHZOWZGFYGLSDHLJJFPJ");
    msg.rssi = 0.2021467057672448;
    msg.integrity = 51577U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.1321855948394487);
    msg.setSource(25023U);
    msg.setSourceEntity(97U);
    msg.setDestination(37174U);
    msg.setDestinationEntity(195U);
    msg.peer.assign("UIHHRUZDJJMW");
    msg.rssi = 0.281393034235917;
    msg.integrity = 20672U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.9496747101111033);
    msg.setSource(57143U);
    msg.setSourceEntity(124U);
    msg.setDestination(8790U);
    msg.setDestinationEntity(206U);
    msg.req_id = 14470U;
    msg.destination.assign("JPTXDQKCEEUCUWGNPYHQTELVYWWEMWOBBZPQSSGZCRMJXIFEOLWJHMVHRVGEGSTCDZULALUZVGYXRNIDLNIRZEHLEYIHMIWQYQMDMOEVYCGOXNBDNRRJZKVMABVTPYI");
    msg.timeout = 0.8107773956618259;
    msg.range = 0.08192037634757166;
    msg.type = 201U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.23367497825725614;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.22556448105040028);
    msg.setSource(1296U);
    msg.setSourceEntity(142U);
    msg.setDestination(5004U);
    msg.setDestinationEntity(225U);
    msg.req_id = 35894U;
    msg.destination.assign("RYTSAHPBEJLRQTXVTDRXDTZVNHZQQPEHKVMUHLWPWNRCNGXDEYLCBACZGEDEBITUFSPCQEFWIKFSXGZPZMIBKSRLIIGFBGYQPCRSXQWZBUVNLUAJDPKFWCEGMHMOWDTXDRSJYGD");
    msg.timeout = 0.8663538247836106;
    msg.range = 0.015047209433587283;
    msg.type = 59U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9791709855488759;
    tmp_msg_0.y = 0.45911584501877234;
    tmp_msg_0.z = 0.6300402788972439;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.927187477138274);
    msg.setSource(21240U);
    msg.setSourceEntity(137U);
    msg.setDestination(20250U);
    msg.setDestinationEntity(27U);
    msg.req_id = 27236U;
    msg.destination.assign("TIFVARLWZCFTZBLOGGTPBDOXEIRMHCIJBXHZSBAZWUQEJONTKRPMEWVKEEFFZXXGZXFTIYQMABZDPRDHMCQAKVUYEINACNSFNXQPURWGUSWQPHNLTAXSPIUVRA");
    msg.timeout = 0.29823307221332973;
    msg.range = 0.09416038550121753;
    msg.type = 232U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("JUMLZRORXKJVPKKTAHPMTWGMVODVXMVFTRAGWYINQHNCQFFSQPQUPLXMYOBXRYUECLUTEVIHKSZEGNGOGB");
    tmp_tmp_msg_0_0.lat = 0.12345645422604357;
    tmp_tmp_msg_0_0.lon = 0.12403576528872551;
    tmp_tmp_msg_0_0.depth = 0.3577125394486449;
    tmp_tmp_msg_0_0.query_channel = 75U;
    tmp_tmp_msg_0_0.reply_channel = 10U;
    tmp_tmp_msg_0_0.transponder_delay = 155U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.6603780244847114;
    tmp_msg_0.y = 0.8179038988730132;
    tmp_msg_0.var_x = 0.37981176687873;
    tmp_msg_0.var_y = 0.2938021929085567;
    tmp_msg_0.distance = 0.5654892451275843;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.30104649544190365);
    msg.setSource(21573U);
    msg.setSourceEntity(95U);
    msg.setDestination(11732U);
    msg.setDestinationEntity(121U);
    msg.req_id = 15496U;
    msg.type = 223U;
    msg.status = 140U;
    msg.info.assign("YYADACIMJD");
    msg.range = 0.6781789245832319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.24054840286053147);
    msg.setSource(38934U);
    msg.setSourceEntity(124U);
    msg.setDestination(9784U);
    msg.setDestinationEntity(195U);
    msg.req_id = 48719U;
    msg.type = 47U;
    msg.status = 237U;
    msg.info.assign("SRTEDHZKDNYOYHPAUPNRTTUWAVBJFJNMXLQIICPZBFQATDMZVSCOJJKFKSWMWPBWVCLVFBGUPDAMJFGECYSVZFZAGAH");
    msg.range = 0.4371391859908944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.837393093315946);
    msg.setSource(64114U);
    msg.setSourceEntity(209U);
    msg.setDestination(959U);
    msg.setDestinationEntity(56U);
    msg.req_id = 19656U;
    msg.type = 207U;
    msg.status = 30U;
    msg.info.assign("RRODNJSZSWYFSGMMFHGNVWXSZCNCLBBJGBBUMVOTHQUUNPIPWXELDRHWYQEDAGTXVMQHIPOJCSVAAVPVYRCJUXAASKIDGHLKVKSFKRCSPLQYZMLEBIYIMZBHTQXLKEZWUPWOEDVLAYEGJSMPNNRBFAXZZKCJTQZCRMEBUDXIZRIQHIXLCHIHEYUTJXWYRKDFOUOGTUONBAPKFNOVEQMLKKTYDLFUN");
    msg.range = 0.1025817450794595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.7493470928387868);
    msg.setSource(12427U);
    msg.setSourceEntity(207U);
    msg.setDestination(32814U);
    msg.setDestinationEntity(49U);
    msg.value = 18980;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.13773194617155526);
    msg.setSource(9330U);
    msg.setSourceEntity(205U);
    msg.setDestination(32239U);
    msg.setDestinationEntity(217U);
    msg.value = -22226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.5407943781631093);
    msg.setSource(57726U);
    msg.setSourceEntity(72U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(250U);
    msg.value = 24016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.2751329546064838);
    msg.setSource(6400U);
    msg.setSourceEntity(77U);
    msg.setDestination(156U);
    msg.setDestinationEntity(130U);
    msg.value = 0.4540350349299872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.6130987419865562);
    msg.setSource(21168U);
    msg.setSourceEntity(206U);
    msg.setDestination(46983U);
    msg.setDestinationEntity(92U);
    msg.value = 0.27028732480581086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.7195678643178735);
    msg.setSource(46365U);
    msg.setSourceEntity(111U);
    msg.setDestination(29341U);
    msg.setDestinationEntity(216U);
    msg.value = 0.06459651367984198;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.13680563070655116);
    msg.setSource(61530U);
    msg.setSourceEntity(96U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(81U);
    msg.value = 0.642204330970683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.497360003808737);
    msg.setSource(1257U);
    msg.setSourceEntity(149U);
    msg.setDestination(52359U);
    msg.setDestinationEntity(134U);
    msg.value = 0.7762189581504357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.8395934808203822);
    msg.setSource(34550U);
    msg.setSourceEntity(196U);
    msg.setDestination(38512U);
    msg.setDestinationEntity(182U);
    msg.value = 0.9798569460195943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.679366735595016);
    msg.setSource(13164U);
    msg.setSourceEntity(239U);
    msg.setDestination(46200U);
    msg.setDestinationEntity(161U);
    msg.validity = 15461U;
    msg.type = 164U;
    msg.utc_year = 29845U;
    msg.utc_month = 220U;
    msg.utc_day = 126U;
    msg.utc_time = 0.34287582322181276;
    msg.lat = 0.015935554610815195;
    msg.lon = 0.3705097889740987;
    msg.height = 0.6818572205358586;
    msg.satellites = 180U;
    msg.cog = 0.021867383518407002;
    msg.sog = 0.7707371215008528;
    msg.hdop = 0.2515117946289741;
    msg.vdop = 0.1969212266467053;
    msg.hacc = 0.9277141434326204;
    msg.vacc = 0.5136909399361418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.2885992991099082);
    msg.setSource(53404U);
    msg.setSourceEntity(104U);
    msg.setDestination(32785U);
    msg.setDestinationEntity(180U);
    msg.validity = 20366U;
    msg.type = 91U;
    msg.utc_year = 10912U;
    msg.utc_month = 70U;
    msg.utc_day = 156U;
    msg.utc_time = 0.04150735080635204;
    msg.lat = 0.6231274489319665;
    msg.lon = 0.3638386498596293;
    msg.height = 0.47661264212561316;
    msg.satellites = 130U;
    msg.cog = 0.4964465241151862;
    msg.sog = 0.6333111663103639;
    msg.hdop = 0.5874663778162814;
    msg.vdop = 0.6106240931058879;
    msg.hacc = 0.8702704294989914;
    msg.vacc = 0.7369885393621335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.852376488590966);
    msg.setSource(54605U);
    msg.setSourceEntity(33U);
    msg.setDestination(11110U);
    msg.setDestinationEntity(111U);
    msg.validity = 30572U;
    msg.type = 40U;
    msg.utc_year = 15861U;
    msg.utc_month = 152U;
    msg.utc_day = 164U;
    msg.utc_time = 0.7169029397049819;
    msg.lat = 0.9663871514991846;
    msg.lon = 0.3293180971497158;
    msg.height = 0.899997560662699;
    msg.satellites = 176U;
    msg.cog = 0.024700114847672983;
    msg.sog = 0.673774182513875;
    msg.hdop = 0.5688959719347384;
    msg.vdop = 0.34849303853125535;
    msg.hacc = 0.948375499630655;
    msg.vacc = 0.23622603841550682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.4708617644415575);
    msg.setSource(40939U);
    msg.setSourceEntity(25U);
    msg.setDestination(43692U);
    msg.setDestinationEntity(43U);
    msg.time = 0.11073564027766769;
    msg.phi = 0.045555279298808316;
    msg.theta = 0.6375714767218182;
    msg.psi = 0.9786505011651534;
    msg.psi_magnetic = 0.5637044904822529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.03169006625608928);
    msg.setSource(40847U);
    msg.setSourceEntity(151U);
    msg.setDestination(44271U);
    msg.setDestinationEntity(60U);
    msg.time = 0.9566083908716387;
    msg.phi = 0.5506765832782473;
    msg.theta = 0.9752290525423235;
    msg.psi = 0.47722387733926785;
    msg.psi_magnetic = 0.37247247892448443;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.9114447401521019);
    msg.setSource(18718U);
    msg.setSourceEntity(220U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(240U);
    msg.time = 0.790791307406069;
    msg.phi = 0.5366510886816541;
    msg.theta = 0.7659686595930438;
    msg.psi = 0.7686210332936834;
    msg.psi_magnetic = 0.27366053759749687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.24962598788899248);
    msg.setSource(30741U);
    msg.setSourceEntity(56U);
    msg.setDestination(57270U);
    msg.setDestinationEntity(186U);
    msg.time = 0.5301689969066895;
    msg.x = 0.675284531725184;
    msg.y = 0.2182681645994986;
    msg.z = 0.19109401906417733;
    msg.timestep = 0.4944539083870243;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.49275856160884524);
    msg.setSource(56103U);
    msg.setSourceEntity(150U);
    msg.setDestination(59458U);
    msg.setDestinationEntity(178U);
    msg.time = 0.009194355401981213;
    msg.x = 0.5031865043191235;
    msg.y = 0.5335481028071024;
    msg.z = 0.24273044042411074;
    msg.timestep = 0.3064770116320722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.2710382342133246);
    msg.setSource(50055U);
    msg.setSourceEntity(175U);
    msg.setDestination(32551U);
    msg.setDestinationEntity(116U);
    msg.time = 0.3474983060620642;
    msg.x = 0.5197600712476166;
    msg.y = 0.8294017536786266;
    msg.z = 0.4295425313070421;
    msg.timestep = 0.6520586530421592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.9568379062253114);
    msg.setSource(6599U);
    msg.setSourceEntity(249U);
    msg.setDestination(57228U);
    msg.setDestinationEntity(152U);
    msg.time = 0.767552770275361;
    msg.x = 0.6053513799161917;
    msg.y = 0.6088625724314997;
    msg.z = 0.5081133881758428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.03399639121947451);
    msg.setSource(43906U);
    msg.setSourceEntity(21U);
    msg.setDestination(18910U);
    msg.setDestinationEntity(128U);
    msg.time = 0.046090639208658746;
    msg.x = 0.16432901472663575;
    msg.y = 0.568506159551751;
    msg.z = 0.6873835535714439;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.8569689299399741);
    msg.setSource(1552U);
    msg.setSourceEntity(97U);
    msg.setDestination(24868U);
    msg.setDestinationEntity(178U);
    msg.time = 0.32855642328919543;
    msg.x = 0.6143871942179752;
    msg.y = 0.5619351804675663;
    msg.z = 0.23069269875299847;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5390010872795179);
    msg.setSource(27407U);
    msg.setSourceEntity(64U);
    msg.setDestination(28913U);
    msg.setDestinationEntity(145U);
    msg.time = 0.49294163419775394;
    msg.x = 0.5306862497084102;
    msg.y = 0.10151395942270314;
    msg.z = 0.6947962432029497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.9904021647334992);
    msg.setSource(2117U);
    msg.setSourceEntity(198U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(11U);
    msg.time = 0.6097972243249566;
    msg.x = 0.6010051007126777;
    msg.y = 0.9995710134782938;
    msg.z = 0.39888489379225756;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5705154205364845);
    msg.setSource(32561U);
    msg.setSourceEntity(8U);
    msg.setDestination(38560U);
    msg.setDestinationEntity(78U);
    msg.time = 0.15865690579022973;
    msg.x = 0.8614120230889946;
    msg.y = 0.1046013723612762;
    msg.z = 0.7485912478501914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.23266469785363653);
    msg.setSource(3676U);
    msg.setSourceEntity(66U);
    msg.setDestination(16266U);
    msg.setDestinationEntity(153U);
    msg.time = 0.5666748855225144;
    msg.x = 0.33605712293527024;
    msg.y = 0.47274006272903923;
    msg.z = 0.9203522436651269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.3837726200582964);
    msg.setSource(3479U);
    msg.setSourceEntity(20U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(151U);
    msg.time = 0.254158317331986;
    msg.x = 0.3700123343994779;
    msg.y = 0.08650430036208367;
    msg.z = 0.24506812279896772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.19660282206267699);
    msg.setSource(24116U);
    msg.setSourceEntity(79U);
    msg.setDestination(45296U);
    msg.setDestinationEntity(247U);
    msg.time = 0.684325730148504;
    msg.x = 0.40735918380446323;
    msg.y = 0.2443023351760052;
    msg.z = 0.42687814525021817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.8978546006598347);
    msg.setSource(33368U);
    msg.setSourceEntity(158U);
    msg.setDestination(17886U);
    msg.setDestinationEntity(15U);
    msg.validity = 222U;
    msg.x = 0.2469646089677492;
    msg.y = 0.5088992568192657;
    msg.z = 0.5367674882415984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.15790918574436708);
    msg.setSource(11277U);
    msg.setSourceEntity(29U);
    msg.setDestination(32318U);
    msg.setDestinationEntity(190U);
    msg.validity = 150U;
    msg.x = 0.9399945981168356;
    msg.y = 0.9069780727636546;
    msg.z = 0.5462067604445962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.32684171610034396);
    msg.setSource(9027U);
    msg.setSourceEntity(241U);
    msg.setDestination(11133U);
    msg.setDestinationEntity(110U);
    msg.validity = 251U;
    msg.x = 0.8120704160838365;
    msg.y = 0.9444257360832428;
    msg.z = 0.6553343350413993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.7920959481309107);
    msg.setSource(44346U);
    msg.setSourceEntity(215U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(33U);
    msg.validity = 29U;
    msg.x = 0.41331651690917415;
    msg.y = 0.023441756765738342;
    msg.z = 0.7353600651447393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.5061891735718378);
    msg.setSource(61697U);
    msg.setSourceEntity(162U);
    msg.setDestination(55379U);
    msg.setDestinationEntity(195U);
    msg.validity = 74U;
    msg.x = 0.09468277610290432;
    msg.y = 0.9084830856090086;
    msg.z = 0.33853605076398186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.44553723791237887);
    msg.setSource(34270U);
    msg.setSourceEntity(247U);
    msg.setDestination(529U);
    msg.setDestinationEntity(193U);
    msg.validity = 179U;
    msg.x = 0.6163845755047856;
    msg.y = 0.8938379839241287;
    msg.z = 0.6256922609176726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.1024861603483973);
    msg.setSource(29045U);
    msg.setSourceEntity(130U);
    msg.setDestination(17686U);
    msg.setDestinationEntity(42U);
    msg.time = 0.14541159526768233;
    msg.x = 0.48203533005053845;
    msg.y = 0.5286814286176669;
    msg.z = 0.22017370872589137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.9280440856621711);
    msg.setSource(41681U);
    msg.setSourceEntity(64U);
    msg.setDestination(41648U);
    msg.setDestinationEntity(247U);
    msg.time = 0.5673074442686539;
    msg.x = 0.2225452908698986;
    msg.y = 0.7167809122137665;
    msg.z = 0.8149368570548772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.8044562606967421);
    msg.setSource(10472U);
    msg.setSourceEntity(61U);
    msg.setDestination(36483U);
    msg.setDestinationEntity(14U);
    msg.time = 0.2154085096546804;
    msg.x = 0.10432296326584778;
    msg.y = 0.1556058626609863;
    msg.z = 0.6662566920767176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.026252531893831144);
    msg.setSource(30921U);
    msg.setSourceEntity(61U);
    msg.setDestination(10804U);
    msg.setDestinationEntity(219U);
    msg.validity = 1U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9797510817727717;
    tmp_msg_0.y = 0.8589289838140487;
    tmp_msg_0.z = 0.2237821609788;
    tmp_msg_0.phi = 0.8321506710928718;
    tmp_msg_0.theta = 0.7127515687312247;
    tmp_msg_0.psi = 0.8171872351716706;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.6298376054400923;
    tmp_msg_1.beam_height = 0.3992699941622847;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8243519368346777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.8234970796377721);
    msg.setSource(55169U);
    msg.setSourceEntity(167U);
    msg.setDestination(9878U);
    msg.setDestinationEntity(139U);
    msg.validity = 253U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.22298929342592133;
    tmp_msg_0.y = 0.245121912600904;
    tmp_msg_0.z = 0.5486245685678284;
    tmp_msg_0.phi = 0.061653144992318554;
    tmp_msg_0.theta = 0.03999796994946225;
    tmp_msg_0.psi = 0.322675936665172;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.7610877426764387;
    tmp_msg_1.beam_height = 0.8843670332847229;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4241677032461534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.8331190132415601);
    msg.setSource(29339U);
    msg.setSourceEntity(60U);
    msg.setDestination(26140U);
    msg.setDestinationEntity(221U);
    msg.validity = 161U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5247054728415446;
    tmp_msg_0.y = 0.7638651427611912;
    tmp_msg_0.z = 0.03720078850192299;
    tmp_msg_0.phi = 0.6937648670965094;
    tmp_msg_0.theta = 0.10007404402726372;
    tmp_msg_0.psi = 0.9411900846783157;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0852564015553946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.9178047228169272);
    msg.setSource(3335U);
    msg.setSourceEntity(241U);
    msg.setDestination(24971U);
    msg.setDestinationEntity(69U);
    msg.value = 0.04801647403329956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.29874642619370917);
    msg.setSource(38361U);
    msg.setSourceEntity(114U);
    msg.setDestination(10275U);
    msg.setDestinationEntity(49U);
    msg.value = 0.13011859135576043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.7686089719040252);
    msg.setSource(64506U);
    msg.setSourceEntity(39U);
    msg.setDestination(11579U);
    msg.setDestinationEntity(184U);
    msg.value = 0.9102999625174858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.5249529111223128);
    msg.setSource(32797U);
    msg.setSourceEntity(195U);
    msg.setDestination(45283U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9900833478650949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.02223407524709531);
    msg.setSource(39427U);
    msg.setSourceEntity(203U);
    msg.setDestination(5986U);
    msg.setDestinationEntity(84U);
    msg.value = 0.5566528669624713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.46627873879984294);
    msg.setSource(32752U);
    msg.setSourceEntity(33U);
    msg.setDestination(11916U);
    msg.setDestinationEntity(55U);
    msg.value = 0.37449670824502523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.9978648992084749);
    msg.setSource(48949U);
    msg.setSourceEntity(221U);
    msg.setDestination(43269U);
    msg.setDestinationEntity(240U);
    msg.value = 0.4643638407508538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.2674563221890628);
    msg.setSource(29642U);
    msg.setSourceEntity(181U);
    msg.setDestination(19593U);
    msg.setDestinationEntity(150U);
    msg.value = 0.2246614245394426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.6574982597959534);
    msg.setSource(9311U);
    msg.setSourceEntity(163U);
    msg.setDestination(61530U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8153905009894411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.17693959505800116);
    msg.setSource(50563U);
    msg.setSourceEntity(154U);
    msg.setDestination(58154U);
    msg.setDestinationEntity(97U);
    msg.value = 0.25463031637610345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.8615161945179441);
    msg.setSource(43751U);
    msg.setSourceEntity(93U);
    msg.setDestination(16076U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9589091873313554;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.950776643991924);
    msg.setSource(1587U);
    msg.setSourceEntity(198U);
    msg.setDestination(27216U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7970362923102551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.5764008252834149);
    msg.setSource(54276U);
    msg.setSourceEntity(71U);
    msg.setDestination(23774U);
    msg.setDestinationEntity(5U);
    msg.value = 0.28061089575992315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.32528179005451774);
    msg.setSource(17692U);
    msg.setSourceEntity(66U);
    msg.setDestination(2975U);
    msg.setDestinationEntity(142U);
    msg.value = 0.6150167371340989;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.010197563264881082);
    msg.setSource(13837U);
    msg.setSourceEntity(136U);
    msg.setDestination(46040U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5182365370092844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.147062623359962);
    msg.setSource(50653U);
    msg.setSourceEntity(142U);
    msg.setDestination(39148U);
    msg.setDestinationEntity(160U);
    msg.value = 0.004839124718989396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.9265153104241782);
    msg.setSource(33626U);
    msg.setSourceEntity(6U);
    msg.setDestination(16183U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8688493606620528;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.9436374603032565);
    msg.setSource(44613U);
    msg.setSourceEntity(192U);
    msg.setDestination(28340U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7942997634768333;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.48216244308095624);
    msg.setSource(6534U);
    msg.setSourceEntity(11U);
    msg.setDestination(26437U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6612265176733186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.18090286994764881);
    msg.setSource(60547U);
    msg.setSourceEntity(176U);
    msg.setDestination(59461U);
    msg.setDestinationEntity(157U);
    msg.value = 0.34258718351857553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.5283604883821442);
    msg.setSource(45149U);
    msg.setSourceEntity(154U);
    msg.setDestination(14438U);
    msg.setDestinationEntity(19U);
    msg.value = 0.9985913506936346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.8364716497997405);
    msg.setSource(63071U);
    msg.setSourceEntity(144U);
    msg.setDestination(65527U);
    msg.setDestinationEntity(0U);
    msg.value = 0.2812575274751572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.4537776602297351);
    msg.setSource(14082U);
    msg.setSourceEntity(151U);
    msg.setDestination(30462U);
    msg.setDestinationEntity(215U);
    msg.value = 0.5477247433869715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.5791320585443713);
    msg.setSource(8831U);
    msg.setSourceEntity(221U);
    msg.setDestination(56433U);
    msg.setDestinationEntity(2U);
    msg.value = 0.6487935554287876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.026350939451799893);
    msg.setSource(31425U);
    msg.setSourceEntity(249U);
    msg.setDestination(56889U);
    msg.setDestinationEntity(219U);
    msg.direction = 0.807338901050633;
    msg.speed = 0.38662065548372626;
    msg.turbulence = 0.2383236146506732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.08414205018692533);
    msg.setSource(11624U);
    msg.setSourceEntity(194U);
    msg.setDestination(46036U);
    msg.setDestinationEntity(144U);
    msg.direction = 0.4434947153182037;
    msg.speed = 0.9060659250569972;
    msg.turbulence = 0.265891429096192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.78988411224099);
    msg.setSource(41101U);
    msg.setSourceEntity(139U);
    msg.setDestination(63155U);
    msg.setDestinationEntity(253U);
    msg.direction = 0.6022805896270189;
    msg.speed = 0.09307531318778195;
    msg.turbulence = 0.8171931021674801;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.6245637581251935);
    msg.setSource(28894U);
    msg.setSourceEntity(26U);
    msg.setDestination(16061U);
    msg.setDestinationEntity(217U);
    msg.value = 0.16218092023517283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.013132481741910507);
    msg.setSource(60274U);
    msg.setSourceEntity(249U);
    msg.setDestination(31638U);
    msg.setDestinationEntity(193U);
    msg.value = 0.29761720077238607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.3438020387045646);
    msg.setSource(64441U);
    msg.setSourceEntity(198U);
    msg.setDestination(60963U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9056867804228806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.6481299880130295);
    msg.setSource(53282U);
    msg.setSourceEntity(62U);
    msg.setDestination(19864U);
    msg.setDestinationEntity(246U);
    msg.value.assign("AYQVWTDNKJXMJJLHPPUUQCPIRFESABZCQYVQMZATUANLBHEIFPTZWUZOEDKMCHXVXPTPFJRGYONHLXAZGXAUYDTOXFBVDLQTQSZIOIOJPXCRVQESHORSJKMFUIY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.9512606623620656);
    msg.setSource(59036U);
    msg.setSourceEntity(148U);
    msg.setDestination(64012U);
    msg.setDestinationEntity(48U);
    msg.value.assign("JUWYRHCEXJJIPKMNAONEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.3009779936112691);
    msg.setSource(12526U);
    msg.setSourceEntity(45U);
    msg.setDestination(18621U);
    msg.setDestinationEntity(23U);
    msg.value.assign("SVEWNILAYCHQBRSUMMJZFUYONUTBXZOWSGVQMJTFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.2862642009919353);
    msg.setSource(50329U);
    msg.setSourceEntity(0U);
    msg.setDestination(50374U);
    msg.setDestinationEntity(28U);
    const char tmp_msg_0[] = {-45, -49, 64, -96, 104, 106, -117, 106, -34, -85, 18, -21, 89, 36, 123, 123, -15, -87, -91, 72, 121, 36, -47, -45, -46, 28, -111, 78, 55, -46, -114, -80, -29, 32, -31, 116, 6, 20, -116, 91, -64, 125, -83, 113, 38, 43, -84, 33, -7, 16, -20, 54, -33, 46, -65, -103, -9, 95, 70, -10, 31, -35, 103};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.6651693009768962);
    msg.setSource(7931U);
    msg.setSourceEntity(5U);
    msg.setDestination(11535U);
    msg.setDestinationEntity(164U);
    const char tmp_msg_0[] = {94, 121, 63, 33, 118, -15, 11, -20, -125, -93, 75, -22, 122, -122, -106, -12, -28, -41, -114, 8, 15, 8, -88, 119, -51, -60, 17, -48, -64, 20, 61, -92, -79, -112, -101, 77, -47, -75, 11, 15, 18, -56, -83, -104, 62, 124, -68, 65, 60, -39, -66, 107, -85, -67, 19, -22, -5, -119, 74, -62, 126, 117, -95, -28, -31, 53, -116, -75, -73, 22, 107, -15, 112};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.033464470440484284);
    msg.setSource(64174U);
    msg.setSourceEntity(109U);
    msg.setDestination(1858U);
    msg.setDestinationEntity(42U);
    const char tmp_msg_0[] = {45, -4, 69, -11, 60, -93, 118, 49, -85, 39, 0, 80, -53, 60, 118, 63, -121, -64, -32, -118, -34, 68, -15, 68, 53, 27, -116, 19, 72, 121, -45, -34, -38, 65, -75, 58, 69, -79, -98, 12, -85, 121, -38, -110, 10, 95, 60, -27, -86, 119, -118, -27, -7, 110, 32, 125, -29, 104, -72, -83, 27, 97, -116, 12, -86, 126, -69, 59, -66, 16, -127, -14, -89, 6, 4, 97, 26, -88, 119, -67, 98, 78, -100, 45, 4, -86, -104, -128, -66, -116, -52, 38, -1, 31, -74, -73, -38, 31, 81, -11, -101, -103, 60, -96, 46, 102, 120, -76, 75, 74, -88, 61, 69, 48, -26, 90, 63, -66, 111, 40, -42, 56, 67, -4, 110, 30, -106, -52, 111, -47, -74, -115, 3, -56, 40, 7, 77, 99, 39, 75, 38, -91, -75, 105, 67, 11, 92, 2, 21, -2, -6, -18, -30, -57, -90, 41, 77, -117, 32, -40, -15, 68, 104, -70, -38, -35, 107, -38, -25, -110, 28, -113, 50, 6, -18, 17, 51, 19, -23, 70, 120, 23, -25, -37, 70, -78, -27, 38, -26, 76, 11, 3, -33, -63, -88, -33, -90, 59, 41, 60, -30, -35, 25, 98, 120, 13, 26, 20, 25, 74, -67, 86, -72, -85, 92, 80, 76, -92, -46, 59, 45, 56, 30, -75, 108, -4, -122, -73, 88, -3, 100, -120, 60, 77, -51, -4, -73, -47, 113};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.4591400499099828);
    msg.setSource(37446U);
    msg.setSourceEntity(243U);
    msg.setDestination(51170U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7660906355653567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.2589658896613394);
    msg.setSource(48141U);
    msg.setSourceEntity(158U);
    msg.setDestination(30214U);
    msg.setDestinationEntity(249U);
    msg.value = 0.8190664822841472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.32616409319980566);
    msg.setSource(59376U);
    msg.setSourceEntity(214U);
    msg.setDestination(6470U);
    msg.setDestinationEntity(145U);
    msg.value = 0.5797342401310623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.09431937236018462);
    msg.setSource(40576U);
    msg.setSourceEntity(20U);
    msg.setDestination(3830U);
    msg.setDestinationEntity(122U);
    msg.type = 92U;
    msg.frequency = 314974337U;
    msg.min_range = 33584U;
    msg.max_range = 11808U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.3893391213402797;
    const char tmp_msg_0[] = {-1, -34, -45, 94, -63, 2, 56, -99, 73, -50, -94, -56, -97, -34, 36, 14, 47, -3, 43, 51, -112, -114, -119, 17, 14, -123, -116, 9, 99, -49, 116, 41, 36, -1, -81, 12, 63, -113, 99, -92, -63, 94, -105, -96, 78, -35, -8, -107, 112, -100, -88, -67, 23, 115, 7, 95, -42, 106, -128, 60, -67, -43, 93, 12, -7, 55, -102, 2, 65, -2, 109, -80, 71, 113, 71, 105, 65, 26, 72, -115, 5, 97, -82, -13, 72, 11, -122, -112, -32, 56, 84, 49, -3, -115, -107, -51, -124, -5, -39, 91, 97, 27, -45, -18, -94, -27, -48, 30, -115, -118, 49, 46};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.6657457117766928);
    msg.setSource(16600U);
    msg.setSourceEntity(202U);
    msg.setDestination(7584U);
    msg.setDestinationEntity(220U);
    msg.type = 77U;
    msg.frequency = 826575958U;
    msg.min_range = 24499U;
    msg.max_range = 24019U;
    msg.bits_per_point = 248U;
    msg.scale_factor = 0.061209763137393125;
    const char tmp_msg_0[] = {94, 108, -41, -30, -15, 3, -116, 18, 122, -52, 58, -125, -104, 48, 42, -53, -64, 23, 87, 90, -67, 16, -67, 63, -120, 94, 67, 26, 56, 57, 26, -23, -58, 60, -60, 63, 106, -2, -106, -80, 16, 71, 114, -42, -24, -69, 3, -83, -3, -83, -126, -55, -75, -84, 108, -125, 108, -128, -77, -54, -86, 92, -125, -47, -90, 78, -63, -6, -94, -54, -83, 52, 66, 2, 29, -128, -29, -128, -126, -85, -26, 65, -38, -123, -123, -112, -57, 79, -55, -121, -9, -7, -37, 3, 24, -81, -103, 47, -52, 126, 122, 29, -116, -101, 45, 27, -33, -45, 69, -100, -28, 39, 2, 9, 51, -72, -103, 93, -34, 29, 80, -65, -91, -2, -37, -115, -73, -31, -27, 107, 82, -60, 58, 126, 108, -49, -83, -58, 77, 83, 106, 122, -80, 121, -14, 35, 50, 101, 68, -35, 78, 6, 111, 89, 104, -5, 68};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.3771272757044327);
    msg.setSource(42828U);
    msg.setSourceEntity(246U);
    msg.setDestination(23330U);
    msg.setDestinationEntity(94U);
    msg.type = 125U;
    msg.frequency = 828952272U;
    msg.min_range = 23099U;
    msg.max_range = 25509U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.48398624802682166;
    const char tmp_msg_0[] = {-91, -63, -79, -75, -77, 111, 18, 27, 12, 88, 67, -74, -51, 101, 122, -17, -57, 119, -15, -79, -94, -114, 11, -80, -68, 76, -90, 61, -96, -13, 44, 10, 4, 45, 93, 20, -109, 112, -27, -16, -109, 98, 75, -39, -35, 14, 90, 65, 119, -123, 89, 118, 90, -13, 116, 106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.4991924636505941);
    msg.setSource(1574U);
    msg.setSourceEntity(89U);
    msg.setDestination(21822U);
    msg.setDestinationEntity(203U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.01855276195325195);
    msg.setSource(21166U);
    msg.setSourceEntity(56U);
    msg.setDestination(62710U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.25296979901776984);
    msg.setSource(8195U);
    msg.setSourceEntity(103U);
    msg.setDestination(51832U);
    msg.setDestinationEntity(24U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.14722076409260643);
    msg.setSource(16613U);
    msg.setSourceEntity(165U);
    msg.setDestination(60389U);
    msg.setDestinationEntity(101U);
    msg.op = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.4481872402876903);
    msg.setSource(13917U);
    msg.setSourceEntity(95U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(248U);
    msg.op = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.879866299225735);
    msg.setSource(41013U);
    msg.setSourceEntity(190U);
    msg.setDestination(1894U);
    msg.setDestinationEntity(31U);
    msg.op = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.6066539053335971);
    msg.setSource(6696U);
    msg.setSourceEntity(20U);
    msg.setDestination(17026U);
    msg.setDestinationEntity(227U);
    msg.value = 0.5544990322650823;
    msg.confidence = 0.6506838120108479;
    msg.opmodes.assign("PWNCXDGKZVGXFTLTIUASQVYLRNAWOBZSPMQNDZPRQFTKBQUPEYHXJLUZWYRUGTIUTZOYDTNLNMJDHWYBHAXWFZKCOELSTISDCLPKVFIMFJHBXMQCROXOSULMNPGXJIBOVGKESENGFSEAIVVTZWQUBEMLHYWVAMVCKGANEIENFCRGQTCSFMHMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.5010074427956162);
    msg.setSource(4932U);
    msg.setSourceEntity(156U);
    msg.setDestination(12080U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5839248178021382;
    msg.confidence = 0.7446703511457727;
    msg.opmodes.assign("LZCEFZICLQONPUEBRRGOXFZPHMMYAWSYXJHBGCWISWRUPNDMRBDWLCETZEKVJNVHDGJQCMYTHUADDRHCYJASVXVKGFENQWMNADIFLQVZPLLJNMSDPIMIGNDAFRIUEFBAYGCXRRIAISWUXKBKFEOTWXKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.029263481558482796);
    msg.setSource(8497U);
    msg.setSourceEntity(205U);
    msg.setDestination(27945U);
    msg.setDestinationEntity(134U);
    msg.value = 0.37519375345480455;
    msg.confidence = 0.6513135802069584;
    msg.opmodes.assign("IOMDBOVEHHRSNMOZGYUHNYYCZDLGQIEAKXNOLLBXFDJKKGQLLZACRWFQEKVLPYSPZVGXXCVXXCTLWWGNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.00878475437716364);
    msg.setSource(39011U);
    msg.setSourceEntity(202U);
    msg.setDestination(25036U);
    msg.setDestinationEntity(112U);
    msg.itow = 1933680011U;
    msg.lat = 0.3099718784328036;
    msg.lon = 0.06313908115998867;
    msg.height_ell = 0.29843711378636617;
    msg.height_sea = 0.1970161601623901;
    msg.hacc = 0.26520133212531183;
    msg.vacc = 0.975776382600688;
    msg.vel_n = 0.9928988838486276;
    msg.vel_e = 0.5730444396445594;
    msg.vel_d = 0.6052390610513363;
    msg.speed = 0.47186094161301184;
    msg.gspeed = 0.08796374978378452;
    msg.heading = 0.9655144868308068;
    msg.sacc = 0.3920157778876038;
    msg.cacc = 0.3931765598802923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.23957255129476152);
    msg.setSource(14906U);
    msg.setSourceEntity(42U);
    msg.setDestination(25326U);
    msg.setDestinationEntity(22U);
    msg.itow = 1438904326U;
    msg.lat = 0.24208706395461788;
    msg.lon = 0.3150458206778718;
    msg.height_ell = 0.8003363420924618;
    msg.height_sea = 0.25318285794977535;
    msg.hacc = 0.9502962577241292;
    msg.vacc = 0.15770919525468263;
    msg.vel_n = 0.011278775239236594;
    msg.vel_e = 0.6875107652657909;
    msg.vel_d = 0.4796004597048661;
    msg.speed = 0.6481113586889173;
    msg.gspeed = 0.5435224145775657;
    msg.heading = 0.4763588686407454;
    msg.sacc = 0.2541382289296995;
    msg.cacc = 0.5157085408899994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.9943329089364786);
    msg.setSource(40083U);
    msg.setSourceEntity(76U);
    msg.setDestination(36119U);
    msg.setDestinationEntity(197U);
    msg.itow = 4020287461U;
    msg.lat = 0.9478601251594972;
    msg.lon = 0.5838333131815153;
    msg.height_ell = 0.15281624718567544;
    msg.height_sea = 0.37892429045465625;
    msg.hacc = 0.22429691944972474;
    msg.vacc = 0.7630930160610069;
    msg.vel_n = 0.08059789053794553;
    msg.vel_e = 0.7337641046357711;
    msg.vel_d = 0.9200031135209393;
    msg.speed = 0.7159108162010086;
    msg.gspeed = 0.9134439550325593;
    msg.heading = 0.03290176380402288;
    msg.sacc = 0.535750498902634;
    msg.cacc = 0.7022226659440557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.44139326339275897);
    msg.setSource(10402U);
    msg.setSourceEntity(157U);
    msg.setDestination(6994U);
    msg.setDestinationEntity(118U);
    msg.id = 47U;
    msg.value = 0.9998868076002821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.7457346751392222);
    msg.setSource(783U);
    msg.setSourceEntity(190U);
    msg.setDestination(58764U);
    msg.setDestinationEntity(125U);
    msg.id = 161U;
    msg.value = 0.1831133038317636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.8369455894959296);
    msg.setSource(28925U);
    msg.setSourceEntity(12U);
    msg.setDestination(28563U);
    msg.setDestinationEntity(107U);
    msg.id = 116U;
    msg.value = 0.5801178474850014;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.5947741021711377);
    msg.setSource(41598U);
    msg.setSourceEntity(210U);
    msg.setDestination(23814U);
    msg.setDestinationEntity(107U);
    msg.x = 0.5608647524931208;
    msg.y = 0.7339092763342593;
    msg.z = 0.765283829851159;
    msg.phi = 0.4359621404424453;
    msg.theta = 0.800359438619704;
    msg.psi = 0.9756039770725652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.7693469253347134);
    msg.setSource(52426U);
    msg.setSourceEntity(92U);
    msg.setDestination(5649U);
    msg.setDestinationEntity(93U);
    msg.x = 0.15094716478673276;
    msg.y = 0.6604015858524349;
    msg.z = 0.5513314100717387;
    msg.phi = 0.8802030941973682;
    msg.theta = 0.30354521460223216;
    msg.psi = 0.0802677215974269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.08179158699467004);
    msg.setSource(44020U);
    msg.setSourceEntity(207U);
    msg.setDestination(42429U);
    msg.setDestinationEntity(167U);
    msg.x = 0.7565606162126762;
    msg.y = 0.8153516644127657;
    msg.z = 0.5355096390461109;
    msg.phi = 0.08331901160698929;
    msg.theta = 0.6465014288513584;
    msg.psi = 0.3625559864737591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.9116437754700811);
    msg.setSource(34950U);
    msg.setSourceEntity(150U);
    msg.setDestination(12639U);
    msg.setDestinationEntity(247U);
    msg.beam_width = 0.3053033874208996;
    msg.beam_height = 0.5653664156107197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.2892202897036027);
    msg.setSource(38455U);
    msg.setSourceEntity(84U);
    msg.setDestination(57347U);
    msg.setDestinationEntity(220U);
    msg.beam_width = 0.7527963908315705;
    msg.beam_height = 0.1618237996216213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.3801193762651276);
    msg.setSource(21265U);
    msg.setSourceEntity(196U);
    msg.setDestination(19203U);
    msg.setDestinationEntity(69U);
    msg.beam_width = 0.7532829500963805;
    msg.beam_height = 0.9952269031455102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.39600805244571613);
    msg.setSource(20330U);
    msg.setSourceEntity(234U);
    msg.setDestination(46808U);
    msg.setDestinationEntity(13U);
    msg.sane = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.04920289875970518);
    msg.setSource(60874U);
    msg.setSourceEntity(235U);
    msg.setDestination(32915U);
    msg.setDestinationEntity(206U);
    msg.sane = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.7968955955703507);
    msg.setSource(56636U);
    msg.setSourceEntity(69U);
    msg.setDestination(52857U);
    msg.setDestinationEntity(228U);
    msg.sane = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.9962910126609851);
    msg.setSource(59466U);
    msg.setSourceEntity(235U);
    msg.setDestination(3885U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6845743294805468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.7750577269392769);
    msg.setSource(32095U);
    msg.setSourceEntity(6U);
    msg.setDestination(25497U);
    msg.setDestinationEntity(120U);
    msg.value = 0.0230592364462211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.8224200221708158);
    msg.setSource(20148U);
    msg.setSourceEntity(157U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(167U);
    msg.value = 0.9344954413201151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.86605941960975);
    msg.setSource(28007U);
    msg.setSourceEntity(233U);
    msg.setDestination(30723U);
    msg.setDestinationEntity(109U);
    msg.value = 0.915974499753823;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.19921116315810428);
    msg.setSource(41884U);
    msg.setSourceEntity(202U);
    msg.setDestination(33740U);
    msg.setDestinationEntity(230U);
    msg.value = 0.8339431418778689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.7545493237057774);
    msg.setSource(40896U);
    msg.setSourceEntity(200U);
    msg.setDestination(2305U);
    msg.setDestinationEntity(37U);
    msg.value = 0.1454760925992401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.8132570327719973);
    msg.setSource(18435U);
    msg.setSourceEntity(22U);
    msg.setDestination(32164U);
    msg.setDestinationEntity(134U);
    msg.value = 0.29834178849332593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.7401253246178087);
    msg.setSource(53441U);
    msg.setSourceEntity(157U);
    msg.setDestination(43683U);
    msg.setDestinationEntity(149U);
    msg.value = 0.17674805323380105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.24083275810796778);
    msg.setSource(45212U);
    msg.setSourceEntity(164U);
    msg.setDestination(45599U);
    msg.setDestinationEntity(155U);
    msg.value = 0.9298491533817116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.4475207521263562);
    msg.setSource(37017U);
    msg.setSourceEntity(135U);
    msg.setDestination(16426U);
    msg.setDestinationEntity(159U);
    msg.value = 0.6514353236458849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.49724351334577366);
    msg.setSource(10942U);
    msg.setSourceEntity(28U);
    msg.setDestination(52186U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6165424846429086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.3269054370848108);
    msg.setSource(18468U);
    msg.setSourceEntity(50U);
    msg.setDestination(59785U);
    msg.setDestinationEntity(88U);
    msg.value = 0.5462038169627099;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.8380203170824584);
    msg.setSource(29243U);
    msg.setSourceEntity(35U);
    msg.setDestination(39826U);
    msg.setDestinationEntity(62U);
    msg.value = 0.636625364847452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.41188915601026765);
    msg.setSource(63165U);
    msg.setSourceEntity(24U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(33U);
    msg.value = 0.5759711961389009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.24929526494782084);
    msg.setSource(26300U);
    msg.setSourceEntity(99U);
    msg.setDestination(4899U);
    msg.setDestinationEntity(205U);
    msg.value = 0.9483942340278825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.38545192098876857);
    msg.setSource(44218U);
    msg.setSourceEntity(165U);
    msg.setDestination(15621U);
    msg.setDestinationEntity(119U);
    msg.value = 0.8180405004251562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.5307341563963993);
    msg.setSource(13894U);
    msg.setSourceEntity(37U);
    msg.setDestination(20878U);
    msg.setDestinationEntity(245U);
    msg.value = 0.38395419143130727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.2602375851739889);
    msg.setSource(28308U);
    msg.setSourceEntity(177U);
    msg.setDestination(4736U);
    msg.setDestinationEntity(167U);
    msg.value = 0.36704375231923925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.10792098461511679);
    msg.setSource(43909U);
    msg.setSourceEntity(208U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(98U);
    msg.value = 0.8403619389171701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.9844330815277722);
    msg.setSource(7657U);
    msg.setSourceEntity(9U);
    msg.setDestination(15215U);
    msg.setDestinationEntity(125U);
    msg.value = 0.7184260723091396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.10786249141110016);
    msg.setSource(36290U);
    msg.setSourceEntity(45U);
    msg.setDestination(29470U);
    msg.setDestinationEntity(195U);
    msg.value = 0.1481497793006331;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.03324584055309854);
    msg.setSource(20618U);
    msg.setSourceEntity(26U);
    msg.setDestination(51393U);
    msg.setDestinationEntity(97U);
    msg.value = 0.5543586599491233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.41381935314239626);
    msg.setSource(47367U);
    msg.setSourceEntity(126U);
    msg.setDestination(13275U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7007874428322324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.8641474550080926);
    msg.setSource(16995U);
    msg.setSourceEntity(84U);
    msg.setDestination(9207U);
    msg.setDestinationEntity(103U);
    msg.value = 0.5102502496492816;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.5072519864197657);
    msg.setSource(56297U);
    msg.setSourceEntity(111U);
    msg.setDestination(51473U);
    msg.setDestinationEntity(165U);
    msg.validity = 61917U;
    msg.type = 197U;
    msg.tow = 3679997226U;
    msg.base_lat = 0.37115805168336813;
    msg.base_lon = 0.7252167391934251;
    msg.base_height = 0.5931728271678312;
    msg.n = 0.062337503604468325;
    msg.e = 0.048581173662809674;
    msg.d = 0.3309189292251057;
    msg.v_n = 0.4102174738635628;
    msg.v_e = 0.1427861481810475;
    msg.v_d = 0.14032772763840662;
    msg.satellites = 233U;
    msg.iar_hyp = 62594U;
    msg.iar_ratio = 0.9265858100773842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.2844103154226302);
    msg.setSource(47496U);
    msg.setSourceEntity(89U);
    msg.setDestination(43287U);
    msg.setDestinationEntity(73U);
    msg.validity = 33310U;
    msg.type = 0U;
    msg.tow = 1291808217U;
    msg.base_lat = 0.2596847084860837;
    msg.base_lon = 0.08415359392778377;
    msg.base_height = 0.9659915896547677;
    msg.n = 0.22387934988029679;
    msg.e = 0.9373954235670183;
    msg.d = 0.560951788763657;
    msg.v_n = 0.6166600687664135;
    msg.v_e = 0.3412866170375086;
    msg.v_d = 0.30940405343050026;
    msg.satellites = 152U;
    msg.iar_hyp = 64691U;
    msg.iar_ratio = 0.24986256489137781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.6273386620611974);
    msg.setSource(38477U);
    msg.setSourceEntity(7U);
    msg.setDestination(19238U);
    msg.setDestinationEntity(163U);
    msg.validity = 25736U;
    msg.type = 11U;
    msg.tow = 4127887095U;
    msg.base_lat = 0.7189893125273026;
    msg.base_lon = 0.22267835672676328;
    msg.base_height = 0.34557161718279183;
    msg.n = 0.1268275572748846;
    msg.e = 0.7115720112494104;
    msg.d = 0.3865525754455632;
    msg.v_n = 0.0618288662574904;
    msg.v_e = 0.5475873648815365;
    msg.v_d = 0.788160868948385;
    msg.satellites = 59U;
    msg.iar_hyp = 38404U;
    msg.iar_ratio = 0.8098896490810473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.500062989213855);
    msg.setSource(892U);
    msg.setSourceEntity(74U);
    msg.setDestination(53590U);
    msg.setDestinationEntity(23U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2322854333151313;
    tmp_msg_0.lon = 0.44466556198638196;
    tmp_msg_0.height = 0.9263693573796349;
    tmp_msg_0.x = 0.17436946303839496;
    tmp_msg_0.y = 0.4421432552663239;
    tmp_msg_0.z = 0.4940307562924193;
    tmp_msg_0.phi = 0.9636679380931026;
    tmp_msg_0.theta = 0.2564122067403142;
    tmp_msg_0.psi = 0.2913242713282368;
    tmp_msg_0.u = 0.9327783243463376;
    tmp_msg_0.v = 0.33964244766906027;
    tmp_msg_0.w = 0.0917093318829264;
    tmp_msg_0.vx = 0.04677286896080479;
    tmp_msg_0.vy = 0.8167885566214077;
    tmp_msg_0.vz = 0.2869089357108472;
    tmp_msg_0.p = 0.7250966677859928;
    tmp_msg_0.q = 0.05955152448981238;
    tmp_msg_0.r = 0.4431251625668007;
    tmp_msg_0.depth = 0.9466185703726252;
    tmp_msg_0.alt = 0.9150736440059642;
    msg.state.set(tmp_msg_0);
    msg.type = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.693295446776147);
    msg.setSource(15674U);
    msg.setSourceEntity(146U);
    msg.setDestination(6421U);
    msg.setDestinationEntity(87U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7571915999461739;
    tmp_msg_0.lon = 0.7890480767797433;
    tmp_msg_0.height = 0.6455581203127873;
    tmp_msg_0.x = 0.2017772907726707;
    tmp_msg_0.y = 0.41616172100578963;
    tmp_msg_0.z = 0.391345610780917;
    tmp_msg_0.phi = 0.20443311894998883;
    tmp_msg_0.theta = 0.1811792611398777;
    tmp_msg_0.psi = 0.8844321742665997;
    tmp_msg_0.u = 0.32869971315595026;
    tmp_msg_0.v = 0.7919082357438424;
    tmp_msg_0.w = 0.041210578319369584;
    tmp_msg_0.vx = 0.5788502977353122;
    tmp_msg_0.vy = 0.014720814537416582;
    tmp_msg_0.vz = 0.08716453778828015;
    tmp_msg_0.p = 0.2896480426306396;
    tmp_msg_0.q = 0.1845831830452911;
    tmp_msg_0.r = 0.2439402393763085;
    tmp_msg_0.depth = 0.28227719076615;
    tmp_msg_0.alt = 0.6293388420893723;
    msg.state.set(tmp_msg_0);
    msg.type = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.31467583953631806);
    msg.setSource(4516U);
    msg.setSourceEntity(65U);
    msg.setDestination(44944U);
    msg.setDestinationEntity(74U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.38334446258690447;
    tmp_msg_0.lon = 0.37649250495698783;
    tmp_msg_0.height = 0.9191597438675227;
    tmp_msg_0.x = 0.5402961480536653;
    tmp_msg_0.y = 0.9119625913962347;
    tmp_msg_0.z = 0.4701425851960873;
    tmp_msg_0.phi = 0.8459512747610839;
    tmp_msg_0.theta = 0.17372925997450372;
    tmp_msg_0.psi = 0.14599133370125628;
    tmp_msg_0.u = 0.5363434990488921;
    tmp_msg_0.v = 0.04104197294994616;
    tmp_msg_0.w = 0.15792913817070808;
    tmp_msg_0.vx = 0.15419652337918455;
    tmp_msg_0.vy = 0.3711652194471935;
    tmp_msg_0.vz = 0.015192965200345299;
    tmp_msg_0.p = 0.509644380484363;
    tmp_msg_0.q = 0.1517152377134302;
    tmp_msg_0.r = 0.9211918991961967;
    tmp_msg_0.depth = 0.12237568760282591;
    tmp_msg_0.alt = 0.7627613276747809;
    msg.state.set(tmp_msg_0);
    msg.type = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.5649610692646271);
    msg.setSource(49977U);
    msg.setSourceEntity(249U);
    msg.setDestination(65078U);
    msg.setDestinationEntity(185U);
    msg.value = 0.5795331171951764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.17028508240637497);
    msg.setSource(61909U);
    msg.setSourceEntity(183U);
    msg.setDestination(46513U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7819115692329737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.32307567911500734);
    msg.setSource(56364U);
    msg.setSourceEntity(244U);
    msg.setDestination(37561U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9774212108768539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.6671186014135071);
    msg.setSource(29958U);
    msg.setSourceEntity(227U);
    msg.setDestination(55798U);
    msg.setDestinationEntity(243U);
    msg.value = 0.14943442527326933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.6602590755859038);
    msg.setSource(48060U);
    msg.setSourceEntity(83U);
    msg.setDestination(48566U);
    msg.setDestinationEntity(160U);
    msg.value = 0.49347482623231287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.13968374857161536);
    msg.setSource(10632U);
    msg.setSourceEntity(4U);
    msg.setDestination(3541U);
    msg.setDestinationEntity(145U);
    msg.value = 0.6328023713279864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.48707680406638565);
    msg.setSource(1026U);
    msg.setSourceEntity(173U);
    msg.setDestination(20435U);
    msg.setDestinationEntity(1U);
    msg.value = 0.31000817449712403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.624548466080893);
    msg.setSource(12865U);
    msg.setSourceEntity(30U);
    msg.setDestination(47055U);
    msg.setDestinationEntity(51U);
    msg.value = 0.07797018234141428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.20586615438569822);
    msg.setSource(14810U);
    msg.setSourceEntity(14U);
    msg.setDestination(47888U);
    msg.setDestinationEntity(33U);
    msg.value = 0.47245342782488187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.1762998142010892);
    msg.setSource(48961U);
    msg.setSourceEntity(54U);
    msg.setDestination(54580U);
    msg.setDestinationEntity(180U);
    msg.value = 0.7677897500167681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.9321066683135779);
    msg.setSource(17962U);
    msg.setSourceEntity(193U);
    msg.setDestination(30573U);
    msg.setDestinationEntity(75U);
    msg.value = 0.23673178797023708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.2977281469692439);
    msg.setSource(30402U);
    msg.setSourceEntity(207U);
    msg.setDestination(25126U);
    msg.setDestinationEntity(57U);
    msg.value = 0.780210873456254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.21280694919054088);
    msg.setSource(32596U);
    msg.setSourceEntity(62U);
    msg.setDestination(50259U);
    msg.setDestinationEntity(98U);
    msg.value = 0.14591516612377453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.7032910290597865);
    msg.setSource(7599U);
    msg.setSourceEntity(127U);
    msg.setDestination(35186U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9959239289449826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.8201694481337396);
    msg.setSource(48444U);
    msg.setSourceEntity(252U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(40U);
    msg.value = 0.49528399797262723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.6193337864445859);
    msg.setSource(32033U);
    msg.setSourceEntity(225U);
    msg.setDestination(41798U);
    msg.setDestinationEntity(4U);
    msg.id = 106U;
    msg.zoom = 84U;
    msg.action = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.8615771837003584);
    msg.setSource(25449U);
    msg.setSourceEntity(20U);
    msg.setDestination(1045U);
    msg.setDestinationEntity(250U);
    msg.id = 27U;
    msg.zoom = 124U;
    msg.action = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.6279799668350273);
    msg.setSource(28248U);
    msg.setSourceEntity(231U);
    msg.setDestination(40475U);
    msg.setDestinationEntity(65U);
    msg.id = 225U;
    msg.zoom = 61U;
    msg.action = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.3794914060220542);
    msg.setSource(30994U);
    msg.setSourceEntity(223U);
    msg.setDestination(32292U);
    msg.setDestinationEntity(230U);
    msg.id = 14U;
    msg.value = 0.03876203093747088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.5390115119368414);
    msg.setSource(58164U);
    msg.setSourceEntity(200U);
    msg.setDestination(22171U);
    msg.setDestinationEntity(121U);
    msg.id = 82U;
    msg.value = 0.6526943378645004;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.8338968309464312);
    msg.setSource(56422U);
    msg.setSourceEntity(7U);
    msg.setDestination(16967U);
    msg.setDestinationEntity(133U);
    msg.id = 32U;
    msg.value = 0.658921434333885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.5731917894458123);
    msg.setSource(62805U);
    msg.setSourceEntity(175U);
    msg.setDestination(26915U);
    msg.setDestinationEntity(195U);
    msg.id = 177U;
    msg.value = 0.8018119224287713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.7085909154141642);
    msg.setSource(57724U);
    msg.setSourceEntity(176U);
    msg.setDestination(37909U);
    msg.setDestinationEntity(122U);
    msg.id = 6U;
    msg.value = 0.2192612229203207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.8472483843024023);
    msg.setSource(50453U);
    msg.setSourceEntity(45U);
    msg.setDestination(32459U);
    msg.setDestinationEntity(203U);
    msg.id = 207U;
    msg.value = 0.17486444234124088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.20903835497935574);
    msg.setSource(61478U);
    msg.setSourceEntity(25U);
    msg.setDestination(46595U);
    msg.setDestinationEntity(191U);
    msg.id = 228U;
    msg.angle = 0.998260234480407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.556045742272396);
    msg.setSource(48949U);
    msg.setSourceEntity(253U);
    msg.setDestination(30408U);
    msg.setDestinationEntity(177U);
    msg.id = 97U;
    msg.angle = 0.04309564578888625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.3815808982764377);
    msg.setSource(31038U);
    msg.setSourceEntity(182U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(139U);
    msg.id = 137U;
    msg.angle = 0.6396992854996177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.4533372349749012);
    msg.setSource(11633U);
    msg.setSourceEntity(139U);
    msg.setDestination(18277U);
    msg.setDestinationEntity(121U);
    msg.op = 72U;
    msg.actions.assign("CLKILQFOEVNWRHYRRBJDTCIZBLCHGCLIKJOQQYLPPKJNENGTWHMFGVNDFGCAHRZKDSWMXNGYPBGAEDSSXBOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.24480530092548924);
    msg.setSource(63161U);
    msg.setSourceEntity(239U);
    msg.setDestination(9207U);
    msg.setDestinationEntity(244U);
    msg.op = 163U;
    msg.actions.assign("WKXBMKJVEYUREFDYHMXSYVGGJQJBEJBQHIZLSPORXTBUNJPFNIQMKRGZUGOOQMFBIRSUMDPSTAVYLDDROZNWFCEYKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0710007708403586);
    msg.setSource(63299U);
    msg.setSourceEntity(176U);
    msg.setDestination(9381U);
    msg.setDestinationEntity(193U);
    msg.op = 250U;
    msg.actions.assign("UAQRFAKQZVCPXHWWAQXZMAZUGDLOPWIIXDKSMXTCCEKUBFXIPULEBHTIBQHECSBHXBLPIKZBTWIQKWMMQLOVRDVDYRKSDGGVSSTSPCJXABYCPNGJWKFJNRNZFVDCLRROUIJYMDFOWFYKKTEEXWRQJLJGNTFXEJOMMVATZZNLVOAJNUMRDOEACMQBHPIUOIPOLHVSYNYGBORVWDJEGDBTUYWZQSTRPPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.783201306309596);
    msg.setSource(33631U);
    msg.setSourceEntity(150U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(217U);
    msg.actions.assign("KHHBOHARLXDFFGWLJQZQZDFBQNTRI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0010034827768423682);
    msg.setSource(1648U);
    msg.setSourceEntity(178U);
    msg.setDestination(6953U);
    msg.setDestinationEntity(94U);
    msg.actions.assign("XEZWZZIUFSJSJLXALOBKGNJPZFYIVICIQPHWFEVDJLDILLLYQBOVGSINPFRUNKWWHWGDYGAXUCRPNSMQCVNEEWGU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.2091336352253731);
    msg.setSource(15082U);
    msg.setSourceEntity(132U);
    msg.setDestination(55932U);
    msg.setDestinationEntity(88U);
    msg.actions.assign("UEGAATYIPFPBDKFWYVYQERDOPGDWQUBFWXPIZKRDYJHVSTVSNQTLXCLKXZLRBFOLMMWFFDHSKLCXNZHRCGCMFMCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.06940604227843561);
    msg.setSource(46427U);
    msg.setSourceEntity(19U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(254U);
    msg.button = 59U;
    msg.value = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.12259545929151605);
    msg.setSource(57368U);
    msg.setSourceEntity(92U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(139U);
    msg.button = 128U;
    msg.value = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.3099207665421465);
    msg.setSource(61949U);
    msg.setSourceEntity(15U);
    msg.setDestination(8878U);
    msg.setDestinationEntity(139U);
    msg.button = 216U;
    msg.value = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.22881433216378777);
    msg.setSource(5670U);
    msg.setSourceEntity(249U);
    msg.setDestination(47433U);
    msg.setDestinationEntity(239U);
    msg.op = 36U;
    msg.text.assign("KBLVGWXFQBSAIIAPIPSCUGHNHHWZAQCWRMRCUIBPVAYNVXDTFQZOXQYNZELFUXAKLSRUOSOYZADVCERBZLDXIMLCNCGEKCWTUKJYPXOJVFNMGCMEFDMPIXCBLOZQFOGBOSNBQAXBPPPOIYJAROGWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.18241677109860077);
    msg.setSource(29120U);
    msg.setSourceEntity(122U);
    msg.setDestination(40163U);
    msg.setDestinationEntity(216U);
    msg.op = 26U;
    msg.text.assign("TRAYIBHYLSKFWVPZREMFBTOXIQDRYHECIEGRJQUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.3892891518136322);
    msg.setSource(53889U);
    msg.setSourceEntity(37U);
    msg.setDestination(24063U);
    msg.setDestinationEntity(104U);
    msg.op = 116U;
    msg.text.assign("YICTSZRRATRZMHVJSLVRWNPCYMYIGPVNJLPIWZROKCXBQYTYBIXDNSPYZPWIOAINBTQNSYEFZJAXOHZVVUWJUAULZOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.30648363686855673);
    msg.setSource(17354U);
    msg.setSourceEntity(73U);
    msg.setDestination(64351U);
    msg.setDestinationEntity(160U);
    msg.op = 135U;
    msg.time_remain = 0.6243813708185888;
    msg.sched_time = 0.39220025586143514;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.3195606980848469);
    msg.setSource(50480U);
    msg.setSourceEntity(102U);
    msg.setDestination(8399U);
    msg.setDestinationEntity(98U);
    msg.op = 4U;
    msg.time_remain = 0.36055808195213546;
    msg.sched_time = 0.2444466755156286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.24174733141755134);
    msg.setSource(5418U);
    msg.setSourceEntity(171U);
    msg.setDestination(61244U);
    msg.setDestinationEntity(228U);
    msg.op = 106U;
    msg.time_remain = 0.13524376755668943;
    msg.sched_time = 0.6965439146855904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.2099288444860261);
    msg.setSource(31079U);
    msg.setSourceEntity(157U);
    msg.setDestination(32565U);
    msg.setDestinationEntity(90U);
    msg.name.assign("IKYPMQYTEGNDXZZEWTVHEKWMAQPQXCFRUZJRGJFKNCXOIUQGWVBFHFDVTOBJBGTTSRCYJSWDTLFTGUAAFUSDHZMVUDIIQDJOXEAYUKGVCKOJMPXJJRBDOZHWMCPIHRZNSNB");
    msg.op = 14U;
    msg.sched_time = 0.06908684596939707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.8705992276094813);
    msg.setSource(37995U);
    msg.setSourceEntity(135U);
    msg.setDestination(54153U);
    msg.setDestinationEntity(226U);
    msg.name.assign("FAUHJSGVZXGTOXAVEVDUYHJYJLMLEFCFDGOMBDMHWNIBHNWLEAQRXKFOCSYMGXIPFMS");
    msg.op = 64U;
    msg.sched_time = 0.4355486143248505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.44195790454615835);
    msg.setSource(40004U);
    msg.setSourceEntity(244U);
    msg.setDestination(22917U);
    msg.setDestinationEntity(202U);
    msg.name.assign("JLPVZXDSTDPFFVGOQELYKMAKTWLXHEPCGZJJTDZYBWKMRDDMTWPMSXGCBNCYLTJDVKNGZTROIKLQFHDPFBOSVJNGRCJMKSFISIQIXZBAQUDIAPOETAKHQMRERQRGDKGOVOBEWFZNEJCZXYQWZUSISBSFHOBGPJNYMOUXXASTLPEFBHIZUYHWWWVLRYCNNRVFEIAPHHCDAUYCVTOALXRQKKOVERIIQHUWMBNUQJZWUAYXLCFMGSYUXJ");
    msg.op = 209U;
    msg.sched_time = 0.623248692502491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.5636216534074705);
    msg.setSource(60300U);
    msg.setSourceEntity(160U);
    msg.setDestination(64194U);
    msg.setDestinationEntity(212U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.4891131962383721);
    msg.setSource(60936U);
    msg.setSourceEntity(63U);
    msg.setDestination(29358U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.6546719879676005);
    msg.setSource(18952U);
    msg.setSourceEntity(138U);
    msg.setDestination(26483U);
    msg.setDestinationEntity(244U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.1175149540550382);
    msg.setSource(819U);
    msg.setSourceEntity(34U);
    msg.setDestination(12255U);
    msg.setDestinationEntity(70U);
    msg.name.assign("BCWXSMUAYBPCQUSLVMDVUDUFFHSEYRFQKLMROTXLIGNAIRQPLXFEWTPCVGEHQHEYROKWRGJZDALKTYDBPKSEBDXTVWEYESNZGDDHSIQVSKBYSBXSMQHJLLRAZAYVYIYFUZCHANCIOWOSZMBOUVGCTPWPUQBNIGJLHVIGJOFDNUBZAMIWGAGJTCEOFUKKNTXLIJMCGMZJJUQWE");
    msg.state = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.8516769115549716);
    msg.setSource(2872U);
    msg.setSourceEntity(145U);
    msg.setDestination(55899U);
    msg.setDestinationEntity(122U);
    msg.name.assign("ESQYGMCGBCXMWOXOJCJMENFCBZVLCDLRZWUAAGWMUTUHZOQHAAIVQYUEQZCERSQEDSGFPTKMNKKTDBPKAGOBNXPERLLFJZCPQYWDAEMPTTFBNVILXHJAUUBCFSIEQKESLUYXRVXSRODTEVZLXHGDIWLUBWFGGXYUZNJZHTRKFHPYAJVZPHQBBWTHNFNMWFQKCVHOINHPIDSQVDYYICLDK");
    msg.state = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.6371118136677492);
    msg.setSource(62730U);
    msg.setSourceEntity(165U);
    msg.setDestination(62661U);
    msg.setDestinationEntity(34U);
    msg.name.assign("VSZQONXFOPNBGAMEYJBUSUYZEJKRGQQRXZPDSPHMFZBIXEUXJZALRIOYYHJMWOADUOXOLGGYCHKQFOQBUSMUQKHOSLNPNAWTXEQWGYKLPMWLZVKSWESFKZHEMRHTXJSUVTXYLGTUCKACKERYPIDDTGJWFPBNTBJTMALXAGYJCRFZEIAIRPCVUBHLMGVOIWCVCJEONDCUAXNDJTWQKHFEBFTAIBZBTVIFFQDNVYRNCRSDR");
    msg.state = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.6418173251127395);
    msg.setSource(39327U);
    msg.setSourceEntity(249U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(244U);
    msg.name.assign("MQHBCPLZCAPTKKRKHZIZBJVYCYAQHDCLPBRNUWLSMPFZBQGJUDEOQVICFGUOXWHKFRFUISDKCSNMXFFBTKATAILZWG");
    msg.value = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.9084605627990392);
    msg.setSource(24067U);
    msg.setSourceEntity(89U);
    msg.setDestination(45102U);
    msg.setDestinationEntity(208U);
    msg.name.assign("ZBSVZIGDJSKTEPGFURXVDUNHADCCCAFPMFKAFZKYJHOIOAAPGVBLMMTQSHQSJNCXTIDLPLNGXAIXUKRUOIPYZKVHRQPGMHMNSPKCJATPRVIQEWAOUBFSWAHZUELNSLUQJDLQEXGNFXUDHVWNELVZCJWORJSRWELT");
    msg.value = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.8611205495257442);
    msg.setSource(42829U);
    msg.setSourceEntity(233U);
    msg.setDestination(23691U);
    msg.setDestinationEntity(254U);
    msg.name.assign("UHTCKVHAXVSVLSSTGOXP");
    msg.value = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.6071960588440031);
    msg.setSource(16111U);
    msg.setSourceEntity(179U);
    msg.setDestination(2586U);
    msg.setDestinationEntity(42U);
    msg.name.assign("YVOISDKLMWFYXSVKBFGXEYJXWANLTWJQWTFUSFWMYMTONHYJUSMOGSXDJTKZHHJNXUHCTVGEVYSZBOXOUFLHIGCKAFTHQDRCJMKBKNUBNIXIQSEZVQCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.3867048936580477);
    msg.setSource(5507U);
    msg.setSourceEntity(246U);
    msg.setDestination(7526U);
    msg.setDestinationEntity(133U);
    msg.name.assign("FWZVXMLSHJGQERXBJVTSDYTRAQJQVIHCEQHZEYUMGBAUILAKVVEZWBCGXMTARSHTPDWAYYPDTYMMJCEBZWYJKHFXWBHDFGOQRUUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.7146909247888353);
    msg.setSource(7439U);
    msg.setSourceEntity(236U);
    msg.setDestination(24615U);
    msg.setDestinationEntity(34U);
    msg.name.assign("ZSKKMJRWZJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.30396922570201623);
    msg.setSource(57711U);
    msg.setSourceEntity(80U);
    msg.setDestination(62702U);
    msg.setDestinationEntity(102U);
    msg.name.assign("NYNXNLRWAUOTUYAMHYZOKFBFOPGWEPHODLKRSNEJQPXPNOSRBFIZQTHZSGJUIUNWKHCIGTRCJGZQFLURVZHIFEXDXKBLESJCYBGQPJMCDTZUGLPKHUHWBSLQRYSVCOIAPMJGNERBTMJMPBAAGKFXADHTITTRROVDWVQFSQHEFGSKBNMKZXVAFZEWESNKLWGM");
    msg.value = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.7340476186845077);
    msg.setSource(36699U);
    msg.setSourceEntity(162U);
    msg.setDestination(11297U);
    msg.setDestinationEntity(160U);
    msg.name.assign("VZXCAVIGTSQOUHTPUFSAETCOBTGRJDZRBNQKBZAWALXPQYMHYGGRBJQUXEJVWBANAAHJORKIZFWOIXZLXHDCFLSCWSMQKWMMKWDEHU");
    msg.value = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.3954623449935719);
    msg.setSource(34345U);
    msg.setSourceEntity(116U);
    msg.setDestination(45664U);
    msg.setDestinationEntity(6U);
    msg.name.assign("VMXMYKUTJTBYVQCPHKAZWKZDQSTBQFBJAJUOBYLDYCBGIRRBAQKZORLCSEBMLCQNGNMBPVKWEAYJXYIELOSIZGUDKIRMHZYONFJLYRCFOLWMKGRC");
    msg.value = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.12666239396089618);
    msg.setSource(27627U);
    msg.setSourceEntity(169U);
    msg.setDestination(19967U);
    msg.setDestinationEntity(83U);
    msg.id = 54U;
    msg.period = 141691063U;
    msg.duty_cycle = 3086131033U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.9500946263965923);
    msg.setSource(54696U);
    msg.setSourceEntity(220U);
    msg.setDestination(59589U);
    msg.setDestinationEntity(126U);
    msg.id = 35U;
    msg.period = 2435293057U;
    msg.duty_cycle = 1044555800U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.9736642744684032);
    msg.setSource(18350U);
    msg.setSourceEntity(45U);
    msg.setDestination(50455U);
    msg.setDestinationEntity(194U);
    msg.id = 18U;
    msg.period = 2272249966U;
    msg.duty_cycle = 442983860U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.1821154009661986);
    msg.setSource(30453U);
    msg.setSourceEntity(252U);
    msg.setDestination(32194U);
    msg.setDestinationEntity(177U);
    msg.id = 60U;
    msg.period = 1483554058U;
    msg.duty_cycle = 3545012965U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.5588478575273572);
    msg.setSource(42301U);
    msg.setSourceEntity(123U);
    msg.setDestination(10151U);
    msg.setDestinationEntity(131U);
    msg.id = 74U;
    msg.period = 924799475U;
    msg.duty_cycle = 488147089U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.8569603393273473);
    msg.setSource(34863U);
    msg.setSourceEntity(65U);
    msg.setDestination(6109U);
    msg.setDestinationEntity(245U);
    msg.id = 77U;
    msg.period = 2738462839U;
    msg.duty_cycle = 3087642927U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.28265730867464234);
    msg.setSource(55485U);
    msg.setSourceEntity(139U);
    msg.setDestination(38131U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.12401334168186218;
    msg.lon = 0.33745240697750223;
    msg.height = 0.13123318533526518;
    msg.x = 0.22185478361927646;
    msg.y = 0.4248861691710084;
    msg.z = 0.21603331745463572;
    msg.phi = 0.4768968032086781;
    msg.theta = 0.1275178590122531;
    msg.psi = 0.21775007688316927;
    msg.u = 0.4131119890028413;
    msg.v = 0.892114918080736;
    msg.w = 0.9159914878760355;
    msg.vx = 0.670133601032511;
    msg.vy = 0.9533942060441704;
    msg.vz = 0.7239991383909129;
    msg.p = 0.4243725458809756;
    msg.q = 0.02999314802844988;
    msg.r = 0.8716070532752507;
    msg.depth = 0.04548008519518243;
    msg.alt = 0.7911459194716626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.8589528837749428);
    msg.setSource(1376U);
    msg.setSourceEntity(78U);
    msg.setDestination(12869U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.04591424926562915;
    msg.lon = 0.9530072989248226;
    msg.height = 0.5116583615682675;
    msg.x = 0.30611695739072176;
    msg.y = 0.46789174963492186;
    msg.z = 0.38855037816755245;
    msg.phi = 0.7808491594887982;
    msg.theta = 0.6659388632788088;
    msg.psi = 0.5593157434976672;
    msg.u = 0.9714023370012239;
    msg.v = 0.43645840806953484;
    msg.w = 0.6599931297625434;
    msg.vx = 0.4627216611239646;
    msg.vy = 0.7760113298134926;
    msg.vz = 0.15441513733840462;
    msg.p = 0.8799175956174037;
    msg.q = 0.43906234949839795;
    msg.r = 0.16301466318571223;
    msg.depth = 0.3903661003893194;
    msg.alt = 0.3954039104830318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.9509872534022058);
    msg.setSource(34040U);
    msg.setSourceEntity(84U);
    msg.setDestination(49792U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.9895257777138894;
    msg.lon = 0.9772416226320207;
    msg.height = 0.933002292075752;
    msg.x = 0.9328263965650649;
    msg.y = 0.3886872077307567;
    msg.z = 0.43855558196449707;
    msg.phi = 0.5311454838587102;
    msg.theta = 0.15456657825820397;
    msg.psi = 0.04664514831982458;
    msg.u = 0.33480395815401487;
    msg.v = 0.7509846141364509;
    msg.w = 0.06931832290032347;
    msg.vx = 0.7543125517536734;
    msg.vy = 0.45390054840985583;
    msg.vz = 0.5635310779389673;
    msg.p = 0.5544401806002615;
    msg.q = 0.33528959190152496;
    msg.r = 0.4647687946543786;
    msg.depth = 0.3831914633954143;
    msg.alt = 0.1997635419974333;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.239932495544237);
    msg.setSource(31125U);
    msg.setSourceEntity(88U);
    msg.setDestination(22103U);
    msg.setDestinationEntity(116U);
    msg.x = 0.7686150865858804;
    msg.y = 0.615350558515062;
    msg.z = 0.5792625668004754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.43885755572436336);
    msg.setSource(48295U);
    msg.setSourceEntity(131U);
    msg.setDestination(24020U);
    msg.setDestinationEntity(54U);
    msg.x = 0.7674012002766519;
    msg.y = 0.7738753749245174;
    msg.z = 0.060810101420661455;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.49147589582764284);
    msg.setSource(53021U);
    msg.setSourceEntity(215U);
    msg.setDestination(49077U);
    msg.setDestinationEntity(179U);
    msg.x = 0.4465829044420606;
    msg.y = 0.9057196694696729;
    msg.z = 0.1380319202687802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.4925387890118875);
    msg.setSource(151U);
    msg.setSourceEntity(193U);
    msg.setDestination(25749U);
    msg.setDestinationEntity(45U);
    msg.value = 0.5420635451801323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.7297278964927439);
    msg.setSource(6454U);
    msg.setSourceEntity(172U);
    msg.setDestination(24144U);
    msg.setDestinationEntity(247U);
    msg.value = 0.604678095989555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.2048758451056768);
    msg.setSource(14396U);
    msg.setSourceEntity(223U);
    msg.setDestination(50537U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9988667286280731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.1964642972581575);
    msg.setSource(13664U);
    msg.setSourceEntity(195U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(245U);
    msg.value = 0.13261069575865125;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.5752177941544273);
    msg.setSource(36553U);
    msg.setSourceEntity(123U);
    msg.setDestination(59104U);
    msg.setDestinationEntity(109U);
    msg.value = 0.507375023251713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.823987414549972);
    msg.setSource(21668U);
    msg.setSourceEntity(146U);
    msg.setDestination(2806U);
    msg.setDestinationEntity(223U);
    msg.value = 0.22234355350469703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.38146382361294473);
    msg.setSource(64166U);
    msg.setSourceEntity(186U);
    msg.setDestination(34803U);
    msg.setDestinationEntity(28U);
    msg.x = 0.620638218841981;
    msg.y = 0.5275105588021781;
    msg.z = 0.22517345214021411;
    msg.phi = 0.24059565642068415;
    msg.theta = 0.8566351267360082;
    msg.psi = 0.9051484502591212;
    msg.p = 0.23606377177544813;
    msg.q = 0.9369615805384877;
    msg.r = 0.11121389524280845;
    msg.u = 0.6803954731755609;
    msg.v = 0.2858612441074484;
    msg.w = 0.07175187565090735;
    msg.bias_psi = 0.09741073035669379;
    msg.bias_r = 0.054830426892453765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.08746498284176574);
    msg.setSource(24867U);
    msg.setSourceEntity(170U);
    msg.setDestination(7592U);
    msg.setDestinationEntity(68U);
    msg.x = 0.17282457503327053;
    msg.y = 0.03626149623965291;
    msg.z = 0.605219155785113;
    msg.phi = 0.22722071142030986;
    msg.theta = 0.768019691555214;
    msg.psi = 0.5448516626101331;
    msg.p = 0.9269441045659684;
    msg.q = 0.8193663256544902;
    msg.r = 0.5632945215892973;
    msg.u = 0.7664817416968912;
    msg.v = 0.9889264858323298;
    msg.w = 0.7228809916147572;
    msg.bias_psi = 0.617216354944984;
    msg.bias_r = 0.23862967506568955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.8507268775768857);
    msg.setSource(35374U);
    msg.setSourceEntity(144U);
    msg.setDestination(55886U);
    msg.setDestinationEntity(32U);
    msg.x = 0.07045297040363174;
    msg.y = 0.664132036776433;
    msg.z = 0.5925177620575061;
    msg.phi = 0.2689921846443727;
    msg.theta = 0.6702532259002746;
    msg.psi = 0.5982765248394506;
    msg.p = 0.5759849089905159;
    msg.q = 0.5997338730703884;
    msg.r = 0.2583943618245679;
    msg.u = 0.04931246153823743;
    msg.v = 0.11562089428215316;
    msg.w = 0.8260062241744853;
    msg.bias_psi = 0.24118441416091163;
    msg.bias_r = 0.25058384821356705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.4392244530410192);
    msg.setSource(4772U);
    msg.setSourceEntity(124U);
    msg.setDestination(15321U);
    msg.setDestinationEntity(122U);
    msg.bias_psi = 0.6005863020743345;
    msg.bias_r = 0.3720298179590731;
    msg.cog = 0.2337472947696979;
    msg.cyaw = 0.45687180084329737;
    msg.lbl_rej_level = 0.5335104416513492;
    msg.gps_rej_level = 0.27514519377575797;
    msg.custom_x = 0.04111135018168388;
    msg.custom_y = 0.17940298587816106;
    msg.custom_z = 0.09880160083222267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.028489474451386942);
    msg.setSource(21453U);
    msg.setSourceEntity(63U);
    msg.setDestination(61443U);
    msg.setDestinationEntity(128U);
    msg.bias_psi = 0.6683503729188338;
    msg.bias_r = 0.43873152181918085;
    msg.cog = 0.15248635669141852;
    msg.cyaw = 0.8275273646678039;
    msg.lbl_rej_level = 0.07969784284803494;
    msg.gps_rej_level = 0.8281748010416571;
    msg.custom_x = 0.2470288440388434;
    msg.custom_y = 0.873935795472503;
    msg.custom_z = 0.3862006824549352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.2163502185001962);
    msg.setSource(47082U);
    msg.setSourceEntity(254U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(0U);
    msg.bias_psi = 0.7630480507875993;
    msg.bias_r = 0.28992138780287513;
    msg.cog = 0.938017227330294;
    msg.cyaw = 0.35259717626610343;
    msg.lbl_rej_level = 0.6324200175006469;
    msg.gps_rej_level = 0.13209437322643403;
    msg.custom_x = 0.5318001487034711;
    msg.custom_y = 0.7401821496652383;
    msg.custom_z = 0.792850552384986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.4584979657265359);
    msg.setSource(27994U);
    msg.setSourceEntity(162U);
    msg.setDestination(53205U);
    msg.setDestinationEntity(177U);
    msg.utc_time = 0.3825568402511932;
    msg.reason = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.38798637650425305);
    msg.setSource(54946U);
    msg.setSourceEntity(97U);
    msg.setDestination(29475U);
    msg.setDestinationEntity(247U);
    msg.utc_time = 0.1499531678434305;
    msg.reason = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.2657406041019137);
    msg.setSource(49221U);
    msg.setSourceEntity(238U);
    msg.setDestination(27044U);
    msg.setDestinationEntity(175U);
    msg.utc_time = 0.40130707634710594;
    msg.reason = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.3477671487887779);
    msg.setSource(48397U);
    msg.setSourceEntity(32U);
    msg.setDestination(27775U);
    msg.setDestinationEntity(231U);
    msg.id = 35U;
    msg.range = 0.9027579933244386;
    msg.acceptance = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.6150819989603546);
    msg.setSource(7647U);
    msg.setSourceEntity(221U);
    msg.setDestination(18063U);
    msg.setDestinationEntity(99U);
    msg.id = 136U;
    msg.range = 0.9938841423324581;
    msg.acceptance = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.596971884133771);
    msg.setSource(3737U);
    msg.setSourceEntity(34U);
    msg.setDestination(15956U);
    msg.setDestinationEntity(175U);
    msg.id = 189U;
    msg.range = 0.12554908497338058;
    msg.acceptance = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.6263190054044738);
    msg.setSource(57976U);
    msg.setSourceEntity(224U);
    msg.setDestination(61582U);
    msg.setDestinationEntity(25U);
    msg.type = 175U;
    msg.reason = 57U;
    msg.value = 0.5730100307382957;
    msg.timestep = 0.034720574180785446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.9311931052886747);
    msg.setSource(36313U);
    msg.setSourceEntity(248U);
    msg.setDestination(9793U);
    msg.setDestinationEntity(187U);
    msg.type = 66U;
    msg.reason = 143U;
    msg.value = 0.2501289631370086;
    msg.timestep = 0.4005247441858699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.06782185669549934);
    msg.setSource(47833U);
    msg.setSourceEntity(211U);
    msg.setDestination(23086U);
    msg.setDestinationEntity(187U);
    msg.type = 159U;
    msg.reason = 187U;
    msg.value = 0.43829983243311876;
    msg.timestep = 0.6265530842670441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.49766026445178535);
    msg.setSource(62469U);
    msg.setSourceEntity(252U);
    msg.setDestination(15682U);
    msg.setDestinationEntity(249U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ERVHBAKIJRKMNANNXFOBHBPBBXDWKSZQDLNJHPORKWGZSLTWQPINRZWHJHXDTJHAJIWNNVAOQTZMZYKFPFOPAOHYRIGEMTQOFRVDGSKGGZGRJKWXSDPWEDBQUIYOMDEGJILVMFXFALYSURUJCAIPWRUJCZYBOCSLETDAMPSOMQCBVEKRVWXNSVMTQCQQGHCEHTJLUAPGZFIGFZUYBYXYFUTVVFOEDKHCS");
    tmp_msg_0.lat = 0.36743272481124434;
    tmp_msg_0.lon = 0.0018567375498241834;
    tmp_msg_0.depth = 0.28725775029743983;
    tmp_msg_0.query_channel = 124U;
    tmp_msg_0.reply_channel = 214U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.747978740734237;
    msg.y = 0.7754775503850764;
    msg.var_x = 0.4446962474375551;
    msg.var_y = 0.5295753184560967;
    msg.distance = 0.6492888822192128;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.5724071423603856);
    msg.setSource(35451U);
    msg.setSourceEntity(27U);
    msg.setDestination(63080U);
    msg.setDestinationEntity(249U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VRWYUOCKJVSKGGPNLZPRXOCEDXBGPBYPOMGYWFKSTA");
    tmp_msg_0.lat = 0.29502885352719865;
    tmp_msg_0.lon = 0.6860273970448418;
    tmp_msg_0.depth = 0.33216799312035694;
    tmp_msg_0.query_channel = 61U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 111U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.12700241840789872;
    msg.y = 0.2827615129707023;
    msg.var_x = 0.7814010649792008;
    msg.var_y = 0.5519389102308175;
    msg.distance = 0.03771519400689338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.568863964542842);
    msg.setSource(35773U);
    msg.setSourceEntity(112U);
    msg.setDestination(42363U);
    msg.setDestinationEntity(54U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ETJTJABYQGQPVQHZUIJINESZHBBOVRTIZAMVSFAGPNXYJHDKHWMDBOPDMLWFXYVSWPKIHPEPXYRUNQSDMXTHQIUJIOWSQRLKBASOOTSZUVLVGERFCOLGAMNROUAKULXFPLLXDMQQNBYICAKKGFTZNYPRUULFSJMTKBZTAWIZCVSCRQEZTWTGWGRMIJBXEXHCDEADICUCGKFJSFVJDKGBOWZYRXVCHJDQGMXOWLMULYRZFDNNA");
    tmp_msg_0.lat = 0.6553619398811406;
    tmp_msg_0.lon = 0.031631334420405555;
    tmp_msg_0.depth = 0.6786246251053127;
    tmp_msg_0.query_channel = 60U;
    tmp_msg_0.reply_channel = 193U;
    tmp_msg_0.transponder_delay = 161U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.010192978546578635;
    msg.y = 0.6657718773167866;
    msg.var_x = 0.6003673852314846;
    msg.var_y = 0.4252712821924567;
    msg.distance = 0.0023200643985541447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.12329067202684085);
    msg.setSource(46163U);
    msg.setSourceEntity(111U);
    msg.setDestination(3574U);
    msg.setDestinationEntity(245U);
    msg.state = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.8085745644680553);
    msg.setSource(2646U);
    msg.setSourceEntity(173U);
    msg.setDestination(17216U);
    msg.setDestinationEntity(113U);
    msg.state = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.7882586736322079);
    msg.setSource(14546U);
    msg.setSourceEntity(91U);
    msg.setDestination(55489U);
    msg.setDestinationEntity(195U);
    msg.state = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.08474271561368862);
    msg.setSource(28450U);
    msg.setSourceEntity(40U);
    msg.setDestination(475U);
    msg.setDestinationEntity(230U);
    msg.x = 0.8620062258410898;
    msg.y = 0.19100337492977126;
    msg.z = 0.5893880976994538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.4974452783103588);
    msg.setSource(4449U);
    msg.setSourceEntity(78U);
    msg.setDestination(46356U);
    msg.setDestinationEntity(134U);
    msg.x = 0.7046956899491453;
    msg.y = 0.6167880221070715;
    msg.z = 0.8240102949175035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.6301244112062843);
    msg.setSource(60041U);
    msg.setSourceEntity(162U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(24U);
    msg.x = 0.31316126022156;
    msg.y = 0.07041591886375098;
    msg.z = 0.24905717442435715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.8209723055462522);
    msg.setSource(1805U);
    msg.setSourceEntity(198U);
    msg.setDestination(3618U);
    msg.setDestinationEntity(71U);
    msg.va = 0.19478139072306566;
    msg.aoa = 0.6931711111367709;
    msg.ssa = 0.7778733441001606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.43441431174176637);
    msg.setSource(21512U);
    msg.setSourceEntity(38U);
    msg.setDestination(25120U);
    msg.setDestinationEntity(82U);
    msg.va = 0.2774416557962196;
    msg.aoa = 0.559430909146372;
    msg.ssa = 0.9894639916975473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.30640490033813317);
    msg.setSource(47613U);
    msg.setSourceEntity(37U);
    msg.setDestination(11391U);
    msg.setDestinationEntity(216U);
    msg.va = 0.30889374464317765;
    msg.aoa = 0.4362845868197798;
    msg.ssa = 0.4793669420872687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.07280807886974172);
    msg.setSource(39533U);
    msg.setSourceEntity(85U);
    msg.setDestination(61752U);
    msg.setDestinationEntity(10U);
    msg.value = 0.4485614920376513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.1521038329192672);
    msg.setSource(12149U);
    msg.setSourceEntity(91U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(146U);
    msg.value = 0.2296626734008772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.7239847760110903);
    msg.setSource(10081U);
    msg.setSourceEntity(69U);
    msg.setDestination(35481U);
    msg.setDestinationEntity(194U);
    msg.value = 0.15294752663279243;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.5068991458992452);
    msg.setSource(41589U);
    msg.setSourceEntity(198U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(249U);
    msg.value = 0.5358719297728891;
    msg.z_units = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.6026433941648459);
    msg.setSource(62691U);
    msg.setSourceEntity(63U);
    msg.setDestination(385U);
    msg.setDestinationEntity(242U);
    msg.value = 0.17260379715301377;
    msg.z_units = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.9475233938264037);
    msg.setSource(59830U);
    msg.setSourceEntity(19U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(30U);
    msg.value = 0.20606804053750305;
    msg.z_units = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.14472446368210745);
    msg.setSource(60371U);
    msg.setSourceEntity(135U);
    msg.setDestination(1244U);
    msg.setDestinationEntity(195U);
    msg.value = 0.1645505806836688;
    msg.speed_units = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.14651244896605042);
    msg.setSource(64218U);
    msg.setSourceEntity(117U);
    msg.setDestination(20807U);
    msg.setDestinationEntity(217U);
    msg.value = 0.92640692803444;
    msg.speed_units = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.16764353691563072);
    msg.setSource(9825U);
    msg.setSourceEntity(22U);
    msg.setDestination(43059U);
    msg.setDestinationEntity(145U);
    msg.value = 0.6775785744289193;
    msg.speed_units = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.7375297432911646);
    msg.setSource(52572U);
    msg.setSourceEntity(215U);
    msg.setDestination(14496U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8429096484752961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.4743617340189237);
    msg.setSource(41560U);
    msg.setSourceEntity(119U);
    msg.setDestination(22820U);
    msg.setDestinationEntity(9U);
    msg.value = 0.6844174130427644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.760668233664332);
    msg.setSource(38401U);
    msg.setSourceEntity(161U);
    msg.setDestination(62498U);
    msg.setDestinationEntity(128U);
    msg.value = 0.06660990029437452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.7370565738237034);
    msg.setSource(63001U);
    msg.setSourceEntity(72U);
    msg.setDestination(28747U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8451897097120344;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.7368184616156034);
    msg.setSource(43618U);
    msg.setSourceEntity(123U);
    msg.setDestination(56379U);
    msg.setDestinationEntity(28U);
    msg.value = 0.9496150141018453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.5140245442640048);
    msg.setSource(16079U);
    msg.setSourceEntity(240U);
    msg.setDestination(58143U);
    msg.setDestinationEntity(161U);
    msg.value = 0.3364189604535812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.2914091487949868);
    msg.setSource(46063U);
    msg.setSourceEntity(148U);
    msg.setDestination(62601U);
    msg.setDestinationEntity(64U);
    msg.value = 0.34484223673506964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.1399220121458412);
    msg.setSource(36193U);
    msg.setSourceEntity(182U);
    msg.setDestination(1973U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0030322004209982767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.9776261056114076);
    msg.setSource(38930U);
    msg.setSourceEntity(99U);
    msg.setDestination(24124U);
    msg.setDestinationEntity(150U);
    msg.value = 0.05547132881927486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.16069514933251894);
    msg.setSource(29701U);
    msg.setSourceEntity(128U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(131U);
    msg.path_ref = 822055775U;
    msg.start_lat = 0.8294096611699864;
    msg.start_lon = 0.8348083811731514;
    msg.start_z = 0.7608032930507959;
    msg.start_z_units = 134U;
    msg.end_lat = 0.056311897496366004;
    msg.end_lon = 0.2353842682805507;
    msg.end_z = 0.8119577298753188;
    msg.end_z_units = 197U;
    msg.speed = 0.3923390021905787;
    msg.speed_units = 141U;
    msg.lradius = 0.4078933936462724;
    msg.flags = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.8321126071905628);
    msg.setSource(61590U);
    msg.setSourceEntity(14U);
    msg.setDestination(54239U);
    msg.setDestinationEntity(151U);
    msg.path_ref = 3207175966U;
    msg.start_lat = 0.8647083169850037;
    msg.start_lon = 0.8504551642611807;
    msg.start_z = 0.6118668797145604;
    msg.start_z_units = 26U;
    msg.end_lat = 0.5230403533487777;
    msg.end_lon = 0.9860546008776536;
    msg.end_z = 0.4343059746230643;
    msg.end_z_units = 161U;
    msg.speed = 0.9004060411449168;
    msg.speed_units = 25U;
    msg.lradius = 0.7197454056823291;
    msg.flags = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.037764977292052304);
    msg.setSource(53603U);
    msg.setSourceEntity(38U);
    msg.setDestination(65449U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 3438810462U;
    msg.start_lat = 0.10807741774789192;
    msg.start_lon = 0.5517038548661793;
    msg.start_z = 0.3611823678783007;
    msg.start_z_units = 134U;
    msg.end_lat = 0.7039868885993275;
    msg.end_lon = 0.5052157225054629;
    msg.end_z = 0.43372465671598515;
    msg.end_z_units = 162U;
    msg.speed = 0.6399993977202635;
    msg.speed_units = 222U;
    msg.lradius = 0.632155874103402;
    msg.flags = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.5736406595297099);
    msg.setSource(27082U);
    msg.setSourceEntity(162U);
    msg.setDestination(23869U);
    msg.setDestinationEntity(116U);
    msg.x = 0.694506677197285;
    msg.y = 0.27765095881211976;
    msg.z = 0.7156790880324684;
    msg.k = 0.08834091488251006;
    msg.m = 0.8417034220023264;
    msg.n = 0.7964691203565568;
    msg.flags = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.35218656397778025);
    msg.setSource(21819U);
    msg.setSourceEntity(154U);
    msg.setDestination(48864U);
    msg.setDestinationEntity(190U);
    msg.x = 0.9258037325397984;
    msg.y = 0.01814405359442961;
    msg.z = 0.5732726601523296;
    msg.k = 0.05646973897319252;
    msg.m = 0.6473249917275095;
    msg.n = 0.4865799790164568;
    msg.flags = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.7552753178895848);
    msg.setSource(8392U);
    msg.setSourceEntity(41U);
    msg.setDestination(44476U);
    msg.setDestinationEntity(162U);
    msg.x = 0.8498845306321537;
    msg.y = 0.6154886208732427;
    msg.z = 0.45363531845098937;
    msg.k = 0.48843655802627595;
    msg.m = 0.18969087683485664;
    msg.n = 0.3492009128927399;
    msg.flags = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.28045275715148543);
    msg.setSource(17878U);
    msg.setSourceEntity(207U);
    msg.setDestination(34499U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8672434324208861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.3241785005181188);
    msg.setSource(38591U);
    msg.setSourceEntity(161U);
    msg.setDestination(62388U);
    msg.setDestinationEntity(84U);
    msg.value = 0.5866035840914591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.47906805002986697);
    msg.setSource(12703U);
    msg.setSourceEntity(240U);
    msg.setDestination(1710U);
    msg.setDestinationEntity(50U);
    msg.value = 0.5122605873194835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.14485881077446472);
    msg.setSource(12982U);
    msg.setSourceEntity(150U);
    msg.setDestination(24508U);
    msg.setDestinationEntity(9U);
    msg.u = 0.7476111830398375;
    msg.v = 0.6259180286701815;
    msg.w = 0.08172087017252283;
    msg.p = 0.5876002623213339;
    msg.q = 0.19261747167160503;
    msg.r = 0.26199135687558406;
    msg.flags = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.2577169269016546);
    msg.setSource(64635U);
    msg.setSourceEntity(104U);
    msg.setDestination(2337U);
    msg.setDestinationEntity(227U);
    msg.u = 0.14236019735168015;
    msg.v = 0.2698755216943083;
    msg.w = 0.25612675137979046;
    msg.p = 0.603170667817425;
    msg.q = 0.9592654951715525;
    msg.r = 0.6478875623763024;
    msg.flags = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.476397745367398);
    msg.setSource(43890U);
    msg.setSourceEntity(86U);
    msg.setDestination(62689U);
    msg.setDestinationEntity(78U);
    msg.u = 0.6822411005658972;
    msg.v = 0.96077225907713;
    msg.w = 0.5399568260995005;
    msg.p = 0.39445541341054724;
    msg.q = 0.5202630400007403;
    msg.r = 0.3091396966631258;
    msg.flags = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.7288760929464738);
    msg.setSource(35839U);
    msg.setSourceEntity(134U);
    msg.setDestination(22991U);
    msg.setDestinationEntity(37U);
    msg.path_ref = 395633816U;
    msg.start_lat = 0.5661863322520723;
    msg.start_lon = 0.410427958566028;
    msg.start_z = 0.8171337794100377;
    msg.start_z_units = 96U;
    msg.end_lat = 0.46165273868602785;
    msg.end_lon = 0.6594598800064749;
    msg.end_z = 0.463070299742653;
    msg.end_z_units = 132U;
    msg.lradius = 0.2311398188360515;
    msg.flags = 120U;
    msg.x = 0.5294270016113244;
    msg.y = 0.3671272814462758;
    msg.z = 0.5194063580323287;
    msg.vx = 0.9085085072073291;
    msg.vy = 0.9730149011806101;
    msg.vz = 0.16687171803448875;
    msg.course_error = 0.12761290510930867;
    msg.eta = 15121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.6357380041290898);
    msg.setSource(45508U);
    msg.setSourceEntity(142U);
    msg.setDestination(16313U);
    msg.setDestinationEntity(12U);
    msg.path_ref = 577745657U;
    msg.start_lat = 0.9319123031925819;
    msg.start_lon = 0.6288048406397468;
    msg.start_z = 0.10655936306430702;
    msg.start_z_units = 202U;
    msg.end_lat = 0.9778747271536672;
    msg.end_lon = 0.7086781816902948;
    msg.end_z = 0.2761816123157522;
    msg.end_z_units = 178U;
    msg.lradius = 0.8207578959778372;
    msg.flags = 139U;
    msg.x = 0.002718753977834054;
    msg.y = 0.22695541861797985;
    msg.z = 0.5442755479062172;
    msg.vx = 0.024620771795749286;
    msg.vy = 0.3643745744459904;
    msg.vz = 0.6476397504951329;
    msg.course_error = 0.10931894029576372;
    msg.eta = 6062U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.7504112854546633);
    msg.setSource(32604U);
    msg.setSourceEntity(203U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(180U);
    msg.path_ref = 150224804U;
    msg.start_lat = 0.7564836417081837;
    msg.start_lon = 0.8015807450731313;
    msg.start_z = 0.3948735356774695;
    msg.start_z_units = 99U;
    msg.end_lat = 0.9337101920011169;
    msg.end_lon = 0.3350708975525276;
    msg.end_z = 0.3416080588621391;
    msg.end_z_units = 82U;
    msg.lradius = 0.6544039819806542;
    msg.flags = 170U;
    msg.x = 0.04623629135889651;
    msg.y = 0.38918367119580555;
    msg.z = 0.4288852310219191;
    msg.vx = 0.6123268434664692;
    msg.vy = 0.07023501920952735;
    msg.vz = 0.5957740513205594;
    msg.course_error = 0.5032167197649792;
    msg.eta = 49946U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.7911659428467441);
    msg.setSource(57458U);
    msg.setSourceEntity(139U);
    msg.setDestination(5515U);
    msg.setDestinationEntity(83U);
    msg.k = 0.7356106710976301;
    msg.m = 0.011143256420162673;
    msg.n = 0.45332556327550433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.45269489938194873);
    msg.setSource(32311U);
    msg.setSourceEntity(136U);
    msg.setDestination(46099U);
    msg.setDestinationEntity(143U);
    msg.k = 0.8371581879040076;
    msg.m = 0.9435882220853138;
    msg.n = 0.8639844909706114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.2814493580409392);
    msg.setSource(45603U);
    msg.setSourceEntity(95U);
    msg.setDestination(30167U);
    msg.setDestinationEntity(212U);
    msg.k = 0.9761244967558869;
    msg.m = 0.5055777994278245;
    msg.n = 0.2220489519961284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.2075308711961361);
    msg.setSource(64796U);
    msg.setSourceEntity(234U);
    msg.setDestination(27078U);
    msg.setDestinationEntity(9U);
    msg.p = 0.3742222191832495;
    msg.i = 0.2794822167582549;
    msg.d = 0.8946286987700409;
    msg.a = 0.5265594471959558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.955422195481486);
    msg.setSource(32224U);
    msg.setSourceEntity(23U);
    msg.setDestination(22926U);
    msg.setDestinationEntity(69U);
    msg.p = 0.11618739382155441;
    msg.i = 0.11734929762368285;
    msg.d = 0.8541045903486487;
    msg.a = 0.28161851123362713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.4679241220016219);
    msg.setSource(7898U);
    msg.setSourceEntity(81U);
    msg.setDestination(33760U);
    msg.setDestinationEntity(31U);
    msg.p = 0.5976828579397901;
    msg.i = 0.5891639975358077;
    msg.d = 0.7519153398783758;
    msg.a = 0.26147441258477944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.03757235479121446);
    msg.setSource(19365U);
    msg.setSourceEntity(6U);
    msg.setDestination(1539U);
    msg.setDestinationEntity(103U);
    msg.op = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.967874712966998);
    msg.setSource(11898U);
    msg.setSourceEntity(89U);
    msg.setDestination(41328U);
    msg.setDestinationEntity(165U);
    msg.op = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.8197339388352537);
    msg.setSource(6365U);
    msg.setSourceEntity(55U);
    msg.setDestination(4604U);
    msg.setDestinationEntity(70U);
    msg.op = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.19625377108854192);
    msg.setSource(15410U);
    msg.setSourceEntity(62U);
    msg.setDestination(21984U);
    msg.setDestinationEntity(135U);
    msg.x = 0.7147475976896082;
    msg.y = 0.5664345565356345;
    msg.z = 0.5955452959636137;
    msg.vx = 0.7930579833325581;
    msg.vy = 0.8095640474710413;
    msg.vz = 0.9293114494177012;
    msg.ax = 0.8160218331224907;
    msg.ay = 0.2640150681357676;
    msg.az = 0.17169408423178167;
    msg.flags = 3311U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.07080300959615304);
    msg.setSource(64749U);
    msg.setSourceEntity(253U);
    msg.setDestination(18267U);
    msg.setDestinationEntity(44U);
    msg.x = 0.7179636411596865;
    msg.y = 0.9540886042250487;
    msg.z = 0.5679193110041706;
    msg.vx = 0.4461315116599075;
    msg.vy = 0.5040183700372983;
    msg.vz = 0.16469092689203613;
    msg.ax = 0.2233633369784297;
    msg.ay = 0.4421624346219163;
    msg.az = 0.7526968844334329;
    msg.flags = 4642U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.7199356669195728);
    msg.setSource(11344U);
    msg.setSourceEntity(135U);
    msg.setDestination(21878U);
    msg.setDestinationEntity(223U);
    msg.x = 0.24668369970149362;
    msg.y = 0.8484956366175218;
    msg.z = 0.8029348099270004;
    msg.vx = 0.04392859808935401;
    msg.vy = 0.13789920586945548;
    msg.vz = 0.27472734540304333;
    msg.ax = 0.22590609657360394;
    msg.ay = 0.30156054015906064;
    msg.az = 0.8872682694825945;
    msg.flags = 50306U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.22858187604414815);
    msg.setSource(56787U);
    msg.setSourceEntity(97U);
    msg.setDestination(46896U);
    msg.setDestinationEntity(150U);
    msg.value = 0.20536254233440543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.31877359549696216);
    msg.setSource(34856U);
    msg.setSourceEntity(81U);
    msg.setDestination(17665U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7680161725226929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.4931420410899151);
    msg.setSource(50902U);
    msg.setSourceEntity(192U);
    msg.setDestination(50699U);
    msg.setDestinationEntity(151U);
    msg.value = 0.193978920436769;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.7341055453750214);
    msg.setSource(58664U);
    msg.setSourceEntity(175U);
    msg.setDestination(43531U);
    msg.setDestinationEntity(25U);
    msg.timeout = 52019U;
    msg.lat = 0.44168752772333497;
    msg.lon = 0.48125909809150147;
    msg.z = 0.13557213023401582;
    msg.z_units = 173U;
    msg.speed = 0.23542268569659364;
    msg.speed_units = 155U;
    msg.roll = 0.9535375478203804;
    msg.pitch = 0.4264323721316928;
    msg.yaw = 0.009144314409945675;
    msg.custom.assign("CXBGWLTUFBDBST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.9204135823974631);
    msg.setSource(60040U);
    msg.setSourceEntity(151U);
    msg.setDestination(34235U);
    msg.setDestinationEntity(250U);
    msg.timeout = 269U;
    msg.lat = 0.8403748533626438;
    msg.lon = 0.7550819672847487;
    msg.z = 0.8613870791057301;
    msg.z_units = 48U;
    msg.speed = 0.4332514935876991;
    msg.speed_units = 13U;
    msg.roll = 0.7941271515498082;
    msg.pitch = 0.8293089154890225;
    msg.yaw = 0.738219203500454;
    msg.custom.assign("FXLHAPRIXWFQNQWUGYMYNNWYNRPXCHMBAQJZJCHYLKCLHWIFBJUQKJEYEOPDTKTMHSFAWUHNWOXBFVUSPADZTOBOYBYMCOBHXMKWAAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.9088247246635918);
    msg.setSource(4399U);
    msg.setSourceEntity(74U);
    msg.setDestination(45314U);
    msg.setDestinationEntity(173U);
    msg.timeout = 2004U;
    msg.lat = 0.5673504528374312;
    msg.lon = 0.5534894315539627;
    msg.z = 0.34744709714140154;
    msg.z_units = 53U;
    msg.speed = 0.5798839052134338;
    msg.speed_units = 193U;
    msg.roll = 0.9832658748135195;
    msg.pitch = 0.04004362230032765;
    msg.yaw = 0.8073446216082165;
    msg.custom.assign("NBQYFDTPNGEAAPLZTUMMGNFDWTGBHPVQFSFIIRCZWXXRXBGYRVPJBLNJVDVTWFAFHTKKBYPORONTNXSUVVXGMZAUWGFWGIGWKISNHDVABXKACUCHILMPQUTUJOFJDNKMCJYKOYAEFAPZZROLEPMEDHCVHOPUEQHSSBYBZBSRSDEJGOLLARSCDXKHKUCETTQIQRIMYIYMLQTXBSWIEOCQYZKQPWFIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.003306988880069639);
    msg.setSource(40053U);
    msg.setSourceEntity(78U);
    msg.setDestination(28711U);
    msg.setDestinationEntity(229U);
    msg.timeout = 33806U;
    msg.lat = 0.6649232863686195;
    msg.lon = 0.23640849004293607;
    msg.z = 0.6874074506983551;
    msg.z_units = 99U;
    msg.speed = 0.25366905833043185;
    msg.speed_units = 21U;
    msg.duration = 40608U;
    msg.radius = 0.47296666499455575;
    msg.flags = 106U;
    msg.custom.assign("XBQQWFYBJDWE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.6574491532369672);
    msg.setSource(32399U);
    msg.setSourceEntity(107U);
    msg.setDestination(5176U);
    msg.setDestinationEntity(15U);
    msg.timeout = 48469U;
    msg.lat = 0.8006588163549541;
    msg.lon = 0.7073333610703574;
    msg.z = 0.915354739274466;
    msg.z_units = 43U;
    msg.speed = 0.0013772426145158834;
    msg.speed_units = 12U;
    msg.duration = 3985U;
    msg.radius = 0.12499323873954271;
    msg.flags = 167U;
    msg.custom.assign("NTBUWNEDPFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.19347100972004283);
    msg.setSource(28034U);
    msg.setSourceEntity(195U);
    msg.setDestination(17248U);
    msg.setDestinationEntity(168U);
    msg.timeout = 40295U;
    msg.lat = 0.8363582122413574;
    msg.lon = 0.5544551632161464;
    msg.z = 0.9053257455255262;
    msg.z_units = 203U;
    msg.speed = 0.2600623934215336;
    msg.speed_units = 97U;
    msg.duration = 44459U;
    msg.radius = 0.7541856526391945;
    msg.flags = 118U;
    msg.custom.assign("STQGEUXCRTOPFCQHJRKRCCKKYBGEFKDWREZTKMVULAVBTBTDNXQVHZNOJMIGOMZUQRNLUJEOFDEVSVQNYZIAXUHMGCOYAZWDUIPJJDYWWBYRXMOSLGIDLQYOILAQFPSIGMXTWSABKTVPANJPDSNWMCDIKAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.05419593187682781);
    msg.setSource(32891U);
    msg.setSourceEntity(142U);
    msg.setDestination(52161U);
    msg.setDestinationEntity(81U);
    msg.custom.assign("BOOMONILMBOSWSUEDPSVZWORYBKUHKUAFNGGAOIZFXUNPTEZSTVJELXXSMPWAYYKHJKVORDBZGCCFLTDRNZEINIZWMVCCHULSDYPQYRHFPAJKAMCCUXQQRZKRGELXCDRYNJZHTYFWVIJDYSJETMGISSUDBXYDKEEUKXSNQVJQTGXATMAFENUTMOBIRWHOTQMWAIJPLRLLBOTBVQEPHMKUXDBQRDXVIPGKCZCJGFQVPACZNHIPGLGNWFQFYWJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.38679746511797053);
    msg.setSource(63538U);
    msg.setSourceEntity(38U);
    msg.setDestination(6406U);
    msg.setDestinationEntity(12U);
    msg.custom.assign("HROHKLSWBZLLXPCAAOJWQIZHEUQKMTVDBNFVSLIBZAIGWTWTFRUJQRODJAGSUFVOYSWMIDZPEMXRYDSYNCVTWHBFIWLOEPMHDOUKKEEZGRBEJPHTARZLGTKGSQNTCJRUIZBVFJNVRTDDYAPEVCXSDJXCNYDPNFCQAQVXZHPMJAMGOXUJCPEXHAXELUFUCHBBDRCKPLIOIWZZRGTWUFQQK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.8985029371618125);
    msg.setSource(7301U);
    msg.setSourceEntity(145U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(10U);
    msg.custom.assign("ANJZUCUYKTPBCXULWDWCPJAZDGONMRQJVBPHVYXWVHFRVFFQHCQJCXIIWIZUKYKMJOARMYNMXZFJKGSTIPZPEDGVMFSTXODSHUHFQYZQCUBNKVCDEIUMTXOHWPWKMGJABLQSMLXERPBLLSAURORVJKZFPRCOBQKENTENWEDWAGDVNLFZBYQJGIGYKBLPIXFHLLAEKIDICCNAWSWOTJGOMTXAYDYLAYFTNQRMUEGSHORBSBTOVVEPHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.9249999548864438);
    msg.setSource(25323U);
    msg.setSourceEntity(154U);
    msg.setDestination(19323U);
    msg.setDestinationEntity(219U);
    msg.timeout = 44712U;
    msg.lat = 0.4888897197529106;
    msg.lon = 0.021214005734721653;
    msg.z = 0.5758167421673756;
    msg.z_units = 182U;
    msg.duration = 32985U;
    msg.speed = 0.6014527651231688;
    msg.speed_units = 41U;
    msg.type = 200U;
    msg.radius = 0.2762458478112181;
    msg.length = 0.7355343388243087;
    msg.bearing = 0.2168583690629271;
    msg.direction = 161U;
    msg.custom.assign("TQYRXTONAEVYZWRFVJTGZUNNIOJJOCFFCIFQZOMPDDTERJLMJAWFKPQAUPNZBHLSTKWZSPUDYYNGDCGTOPAAUCDDFQQDQTYKIXFGLNULCILMSWGUCWOXVQHZNDWBLRGOKNBYUOEFVXVIHRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.53160092985304);
    msg.setSource(12451U);
    msg.setSourceEntity(215U);
    msg.setDestination(26455U);
    msg.setDestinationEntity(163U);
    msg.timeout = 19119U;
    msg.lat = 0.22992781046394828;
    msg.lon = 0.4370487040073785;
    msg.z = 0.4578304374506361;
    msg.z_units = 68U;
    msg.duration = 20147U;
    msg.speed = 0.40392605574645213;
    msg.speed_units = 109U;
    msg.type = 45U;
    msg.radius = 0.04828942556941396;
    msg.length = 0.08464766111624822;
    msg.bearing = 0.09721258235331309;
    msg.direction = 175U;
    msg.custom.assign("CJGBCWOYRSSFCIIXOVJRHGGYAOPEURKQAIPESIQMDEAAYKXVDPWNHXHAACDWSUZRJMXOXLULBDVRSNVGAHMFKDWPOKKCJJDEDNUEFTXAOXJCDBNSJMJLGTUPHMHUITFFCLVYRTBQBXYVIGVKWTKSLAEWNTKMYOZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.5529076714865104);
    msg.setSource(26481U);
    msg.setSourceEntity(11U);
    msg.setDestination(36436U);
    msg.setDestinationEntity(66U);
    msg.timeout = 8714U;
    msg.lat = 0.0064626621373669035;
    msg.lon = 0.60688032978061;
    msg.z = 0.060171648648080556;
    msg.z_units = 147U;
    msg.duration = 24550U;
    msg.speed = 0.8718582864183189;
    msg.speed_units = 231U;
    msg.type = 214U;
    msg.radius = 0.21323915572952878;
    msg.length = 0.9347923702496465;
    msg.bearing = 0.38648401256293907;
    msg.direction = 183U;
    msg.custom.assign("FZVOCNDMLTNKTFUSDTVRIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.21333420593531194);
    msg.setSource(28115U);
    msg.setSourceEntity(224U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(73U);
    msg.duration = 332U;
    msg.custom.assign("USZLQMXXCNKLNMRUAVZUMSRQUKPUQHOZVDAQTQYLMEROLCWIYMCQGHTJBAYFVVUVVXHHNSIBFMVYRSNSTDFAQVPHFDBZODYWCQFJTKOEYUPIGFKOAKNQPKJKDWAGEYWKPUSPOBTJSDEIEVLZWRBCSAGZEIPJJTIAMBLECUWTINXXGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.5899812902791679);
    msg.setSource(63165U);
    msg.setSourceEntity(167U);
    msg.setDestination(58522U);
    msg.setDestinationEntity(108U);
    msg.duration = 65078U;
    msg.custom.assign("JOCUURUYWPYCJLVBZUNXBINQSTQOPWZHGQKETFZMRCDSVRTZIHLSWFLBLHKLBYQEGWEDHNNBDCPCBRFZNUUMYBJXUENOFWOAKATKMBTRDVTTYUHHRIJYVSBPJPDMAPIOXOHDJNAJJPOBPUTCGEOXZVQIEGDLZALQVYGNMEKAOWMSSXFIWSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.3454332438967542);
    msg.setSource(21229U);
    msg.setSourceEntity(202U);
    msg.setDestination(18855U);
    msg.setDestinationEntity(118U);
    msg.duration = 31033U;
    msg.custom.assign("LQUTZMLFMZFLGFHLNYRIVEINPJMAITKBNZSRONXPWZUAEEWMKACCYUITAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.4558852356559031);
    msg.setSource(15144U);
    msg.setSourceEntity(101U);
    msg.setDestination(36578U);
    msg.setDestinationEntity(221U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0701554366354814;
    tmp_msg_0.speed_units = 141U;
    msg.control.set(tmp_msg_0);
    msg.duration = 56793U;
    msg.custom.assign("QTZFMQONDMTEFEXSUDRLZUDJZLVIHWKT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.678958487746092);
    msg.setSource(4178U);
    msg.setSourceEntity(33U);
    msg.setDestination(41006U);
    msg.setDestinationEntity(74U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.9330365569463018;
    msg.control.set(tmp_msg_0);
    msg.duration = 49315U;
    msg.custom.assign("IJTGTFGXOJNPLGYPPXZNDIYKIOMCNNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.22796602799265175);
    msg.setSource(1361U);
    msg.setSourceEntity(240U);
    msg.setDestination(21412U);
    msg.setDestinationEntity(168U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6318458688728874;
    msg.control.set(tmp_msg_0);
    msg.duration = 3918U;
    msg.custom.assign("GTZPQOYYBMNZTIBGZOHEBYZAGRTBJOJWCCAASBKTVFXYIPRCPQHBWDVTKRLIUQPKHPDFYXPWHLIBRSMZCPFFLOSSHKMMJCRKBSBMIYLVEHDEWRIPOGUSNDSLTLCNIHDOHDVWEHUUKEJVPVMDKFJAAIEYARFKWNBWMNLGZUNWCXUDQEORWRXFVXGSFCJQAGLIGVOJFKQNZXOXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.5604499267771704);
    msg.setSource(31400U);
    msg.setSourceEntity(192U);
    msg.setDestination(31180U);
    msg.setDestinationEntity(252U);
    msg.timeout = 25472U;
    msg.lat = 0.04286618663901898;
    msg.lon = 0.7286739639283792;
    msg.z = 0.6596969704839546;
    msg.z_units = 218U;
    msg.speed = 0.6515097349741942;
    msg.speed_units = 181U;
    msg.bearing = 0.30523521938645726;
    msg.cross_angle = 0.34922945904396496;
    msg.width = 0.3324155601018689;
    msg.length = 0.6477941887565988;
    msg.hstep = 0.21566603794618733;
    msg.coff = 130U;
    msg.alternation = 39U;
    msg.flags = 176U;
    msg.custom.assign("TDHNFFYFBPOMMTGMPXCUPLUWOICFWGYQXCGXJFXTINCFZIYJKNDACHVPERRZVFVOISRVHZLMAXBDETEASELVTEODJNJQGQCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.9135930711353046);
    msg.setSource(35647U);
    msg.setSourceEntity(193U);
    msg.setDestination(20544U);
    msg.setDestinationEntity(59U);
    msg.timeout = 19524U;
    msg.lat = 0.8462222128027359;
    msg.lon = 0.6337508338349581;
    msg.z = 0.550760825276288;
    msg.z_units = 193U;
    msg.speed = 0.39591419123742055;
    msg.speed_units = 139U;
    msg.bearing = 0.5949656163312311;
    msg.cross_angle = 0.04914009024351462;
    msg.width = 0.6176737055901054;
    msg.length = 0.048505385585530525;
    msg.hstep = 0.44853242064545085;
    msg.coff = 51U;
    msg.alternation = 160U;
    msg.flags = 60U;
    msg.custom.assign("PYYXFUTJAJZBSEOFYMQWYCCICEOSZPLVEVCZUHYERFVTDLGJNSOHDKNWBGXJCXOLHMINMLWKBQQTRTJKGLRAQVRQHJZCJHAEBPZTOFENIZMBILWQHOOWHSAGUZRVHYTSICBVPDGVLTJNFAFVWXDOMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.8985633986928807);
    msg.setSource(4485U);
    msg.setSourceEntity(181U);
    msg.setDestination(50232U);
    msg.setDestinationEntity(138U);
    msg.timeout = 45383U;
    msg.lat = 0.8963418924750768;
    msg.lon = 0.5543204277141964;
    msg.z = 0.7659945234948885;
    msg.z_units = 96U;
    msg.speed = 0.5347592078898719;
    msg.speed_units = 68U;
    msg.bearing = 0.7546347045365989;
    msg.cross_angle = 0.44688907745645656;
    msg.width = 0.9937689786101801;
    msg.length = 0.7580296676301335;
    msg.hstep = 0.8096736694809574;
    msg.coff = 79U;
    msg.alternation = 22U;
    msg.flags = 105U;
    msg.custom.assign("YBVZKZIAOJFUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.07906894796119535);
    msg.setSource(39398U);
    msg.setSourceEntity(174U);
    msg.setDestination(30937U);
    msg.setDestinationEntity(183U);
    msg.timeout = 44316U;
    msg.lat = 0.7665782500585105;
    msg.lon = 0.27665650612870263;
    msg.z = 0.6979409691437313;
    msg.z_units = 252U;
    msg.speed = 0.37008973306861737;
    msg.speed_units = 2U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6497314453735833;
    tmp_msg_0.y = 0.7685532076251104;
    tmp_msg_0.z = 0.009799044657702094;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("APTFJMQGQZTHOCWASJZMGCWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.3276013431996707);
    msg.setSource(1875U);
    msg.setSourceEntity(112U);
    msg.setDestination(6832U);
    msg.setDestinationEntity(88U);
    msg.timeout = 65325U;
    msg.lat = 0.3478685105513313;
    msg.lon = 0.49082998657171584;
    msg.z = 0.8709342017000449;
    msg.z_units = 244U;
    msg.speed = 0.6280046980421423;
    msg.speed_units = 98U;
    msg.custom.assign("EKVBKAHAQLPYWJATXXRRVOFADGEFOKUEVAIWNIPHEXPOCAWGXJPHHLNSDPFRYEUUHCJVNZJIQINZDOWELMUYYFTRXUYPNTBCQZZWFNWKAVWKIZTGEPHFBQDYSBBZTQVQNMNGDRSMQGSMLDCUHEZRYBOTIKVUMSCMGOBVSLCBZUCEYFYGGQSABIXJNTLKMXPWLZKBCTROXKJXPTDJWSFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.16113744752879244);
    msg.setSource(16979U);
    msg.setSourceEntity(164U);
    msg.setDestination(60502U);
    msg.setDestinationEntity(96U);
    msg.timeout = 1782U;
    msg.lat = 0.884188900050498;
    msg.lon = 0.11879932450490804;
    msg.z = 0.9916144273425748;
    msg.z_units = 248U;
    msg.speed = 0.8743590267936705;
    msg.speed_units = 242U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.07747309302106975;
    tmp_msg_0.y = 0.3092939957807914;
    tmp_msg_0.z = 0.5621346022052973;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JNUYKFPLNXIXSXNGRIUWUIGWDSFWQAQPVWIXIMRVQYKLHHITXBHXUMIDFUASVZRKQFATNSKQGLGDOKWJBYAOSBOCKPJGLZDLHNRACQXQZJCMPJNDMGAFJYZNWFZPYXLRRDNFHTEBHZBCZEEXLFYVEKSTVDMGLDRVVBINCTCMHTTAFSHJQMYSOBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.10686721593969695);
    msg.setSource(6325U);
    msg.setSourceEntity(169U);
    msg.setDestination(19508U);
    msg.setDestinationEntity(135U);
    msg.x = 0.4315805520485959;
    msg.y = 0.4303025428550582;
    msg.z = 0.8413274132968815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.8426722813286042);
    msg.setSource(36784U);
    msg.setSourceEntity(46U);
    msg.setDestination(37703U);
    msg.setDestinationEntity(99U);
    msg.x = 0.9138677982219168;
    msg.y = 0.4884730894015964;
    msg.z = 0.8292529896834276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.23321869166991505);
    msg.setSource(47178U);
    msg.setSourceEntity(180U);
    msg.setDestination(23679U);
    msg.setDestinationEntity(141U);
    msg.x = 0.6636323228283182;
    msg.y = 0.20112200535707814;
    msg.z = 0.4684618066422972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.03717965319151595);
    msg.setSource(45522U);
    msg.setSourceEntity(72U);
    msg.setDestination(57060U);
    msg.setDestinationEntity(108U);
    msg.timeout = 2698U;
    msg.lat = 0.5956382355523681;
    msg.lon = 0.5995259292769398;
    msg.z = 0.3726440597252628;
    msg.z_units = 101U;
    msg.amplitude = 0.046391197621366675;
    msg.pitch = 0.04524033730681487;
    msg.speed = 0.3375988562987614;
    msg.speed_units = 48U;
    msg.custom.assign("ZVVYUYECUNCVQOPGDBMOXWTOJDLUDARISDKOQTEWKYVRYOFXICQYIKPRRKTXZMAOMAIPMNFGIRTJLNSWEATVFZDHWOBBBPZBTLGCLTIAGAROARWFCXLENAXXGNYPQZRKERUJGHHEWDSMCQCUVLIPVBMNGZBCLHHQQFJWHKQNEENHFOVBLYIWXMAFDIWKZBHMPANTDEP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.8634379753390321);
    msg.setSource(58311U);
    msg.setSourceEntity(107U);
    msg.setDestination(19963U);
    msg.setDestinationEntity(90U);
    msg.timeout = 14318U;
    msg.lat = 0.27198020522517585;
    msg.lon = 0.9194332224674064;
    msg.z = 0.5318757809737219;
    msg.z_units = 64U;
    msg.amplitude = 0.8196142288802557;
    msg.pitch = 0.06947002243315437;
    msg.speed = 0.5025822570504496;
    msg.speed_units = 58U;
    msg.custom.assign("QBHPSEHKSTPSZUUPYSNYJBZBZWZMUHAYSYHLALOGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.6857292490843874);
    msg.setSource(17398U);
    msg.setSourceEntity(150U);
    msg.setDestination(49817U);
    msg.setDestinationEntity(181U);
    msg.timeout = 15100U;
    msg.lat = 0.8133495827220747;
    msg.lon = 0.24605595548715609;
    msg.z = 0.7149058998066009;
    msg.z_units = 218U;
    msg.amplitude = 0.9192231188077509;
    msg.pitch = 0.7627024992760717;
    msg.speed = 0.8888126575100768;
    msg.speed_units = 91U;
    msg.custom.assign("SWVLSNHTMBAZCWAKMBIIFITJXUOAMOGZDEDAARDDHOHXEYWVXIKJGMKZOPTPUEPPBPFDMHULXHSVKMZULUFPQORVCENPJTTPFAQLXIAYGBIWGXEZFUVSDCKWLPQGQILXRZMQIJTGWSRHVYCQGMIBGYOJKUKEDNNYRBCCPHGTRYUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.7947124296352236);
    msg.setSource(53176U);
    msg.setSourceEntity(110U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(79U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0028029024581008866);
    msg.setSource(49698U);
    msg.setSourceEntity(177U);
    msg.setDestination(42341U);
    msg.setDestinationEntity(70U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.626409486414004);
    msg.setSource(61940U);
    msg.setSourceEntity(133U);
    msg.setDestination(56260U);
    msg.setDestinationEntity(41U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.5146180697508793);
    msg.setSource(61179U);
    msg.setSourceEntity(47U);
    msg.setDestination(14277U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.6031126915472674;
    msg.lon = 0.2129089791856662;
    msg.z = 0.0656970735030119;
    msg.z_units = 194U;
    msg.radius = 0.10747283093923388;
    msg.duration = 52537U;
    msg.speed = 0.6893647956641421;
    msg.speed_units = 73U;
    msg.custom.assign("KIKFPWWCWHDHNXSGSEKQEGUAVFMIQDQNGUVPHEUXONOGBVPNHDGRFHZIXTMEBILTIBARZNKHGURLCCJTPVFVCKJUOYQMARZLJBRPCLZXXYLWYIBZZPHTQSUMAXXTYIAJRVULGYJMKHDJPQSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.008002980465401821);
    msg.setSource(55608U);
    msg.setSourceEntity(99U);
    msg.setDestination(27273U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.6669597360294948;
    msg.lon = 0.18401809222598342;
    msg.z = 0.11307058111757384;
    msg.z_units = 197U;
    msg.radius = 0.40302233549879063;
    msg.duration = 60691U;
    msg.speed = 0.41024755526935786;
    msg.speed_units = 214U;
    msg.custom.assign("ECZJZRXSLGSIMILPQCWUKGJWCNUMOWAWBHXQPBXWKOGZQIAWTIDYHVLAPNUKDVQZCRVOCAYNJYMYMXFFBPTPPQTQAKOMXGNRDWJEHTFIWVXGDOMVEHHAMLVELCBSLPKZSRDBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.41437120410866635);
    msg.setSource(8133U);
    msg.setSourceEntity(237U);
    msg.setDestination(26996U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.5439653309596099;
    msg.lon = 0.032900460856948754;
    msg.z = 0.5187374211308625;
    msg.z_units = 192U;
    msg.radius = 0.02370050582663219;
    msg.duration = 35498U;
    msg.speed = 0.30842081595040793;
    msg.speed_units = 203U;
    msg.custom.assign("LGBSCJLDHQOTTACCYUPXDCJWVXQIEUTPCDYUNNFNZCNPLWFBKJYMSWBIOPDEVUZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.2497324849335142);
    msg.setSource(23077U);
    msg.setSourceEntity(244U);
    msg.setDestination(64809U);
    msg.setDestinationEntity(147U);
    msg.timeout = 41035U;
    msg.flags = 72U;
    msg.lat = 0.5972088094638869;
    msg.lon = 0.614967706903826;
    msg.start_z = 0.7011092428892249;
    msg.start_z_units = 126U;
    msg.end_z = 0.18993471530858763;
    msg.end_z_units = 240U;
    msg.radius = 0.4638993315897145;
    msg.speed = 0.18437610770723112;
    msg.speed_units = 183U;
    msg.custom.assign("UROXNDNVDOBLMMTENVAKRIHLGNVIYWXZALSZJTTUOVGYSZMSOQINWNCFGDSJYETRIQDJRGMHEXWVZKZXPQWETCOCERXUBBBEMOFKMYPBODQQTKVKFTPMLIICGSAPBUJEULPUQFOYGASNTQXCCHIOBKAUQFRUKZHWCYNSGFMEWZFQJPYYVVQZWLHHZDBRPHYGTAHEWUCNBWIVLTUDDILPFKHVXJDAEAWRJHIPKYCAXMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.8504476012252142);
    msg.setSource(36036U);
    msg.setSourceEntity(238U);
    msg.setDestination(39964U);
    msg.setDestinationEntity(71U);
    msg.timeout = 17429U;
    msg.flags = 145U;
    msg.lat = 0.33571140579636793;
    msg.lon = 0.803672938121098;
    msg.start_z = 0.10152514380723554;
    msg.start_z_units = 224U;
    msg.end_z = 0.9876072572127534;
    msg.end_z_units = 60U;
    msg.radius = 0.6675423969183732;
    msg.speed = 0.5746729980377042;
    msg.speed_units = 90U;
    msg.custom.assign("HDYFKYLOGFOFOXMLRHCHVJQDRNSZQEYBSZCFYXCKWXNSVSPHWJEUYLEMKMFZVUOTLAPQGZYWQYPFSIMZGRKDTMLDIEVBFNXKNMVJTHCAFAWHXSAOIQAIGLFIQTWIVOKCQZPMWJBVULAJTUTXVVVXUSKTURIZNOCJNKYAXEPRTEBGEBDUTGJWQJPRDRXGHCCNHJBJEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.08557166245220371);
    msg.setSource(17471U);
    msg.setSourceEntity(104U);
    msg.setDestination(56452U);
    msg.setDestinationEntity(236U);
    msg.timeout = 47288U;
    msg.flags = 152U;
    msg.lat = 0.4925824998652233;
    msg.lon = 0.48490528609967487;
    msg.start_z = 0.3949261648972905;
    msg.start_z_units = 100U;
    msg.end_z = 0.45532345764432325;
    msg.end_z_units = 7U;
    msg.radius = 0.9065720119748876;
    msg.speed = 0.5799979710599142;
    msg.speed_units = 186U;
    msg.custom.assign("TBHLOSPEUZNCFHSBSQGXXLQTFTJALHSVGVUUJSRBLPODKYWUCAATHRINMMAVMXVCXOKNOIPZCGZYJJWNLYDDLNXSRNWQYEPOCQOPCBSDGWVCDJIXEDMBRFKUZHNZKBOKXELECEKPGIIIWGIYCXYBDRPYAEWFSVIMZTKPUHFDRWLASKEGQQGWALTTGHNHUJFUATAIGJRZNJEHQVNRFRJKDPIMTMWZUQFMMLVWYOO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.4882007522599706);
    msg.setSource(8178U);
    msg.setSourceEntity(181U);
    msg.setDestination(46452U);
    msg.setDestinationEntity(147U);
    msg.timeout = 25481U;
    msg.lat = 0.22269996467610487;
    msg.lon = 0.43540460574547046;
    msg.z = 0.3770716212123325;
    msg.z_units = 97U;
    msg.speed = 0.06572802467691607;
    msg.speed_units = 6U;
    msg.custom.assign("ATKBTAYJDRCGSHJVMGECTIDXPFQBZYHYEWBOUIBONUVPFFHQXAHKJZEYFVUMBHXVLXNUXQJOACPCRELDKNMIEZMJLDWXJARBLZUNKBCQIUQWSMLHEYIKFNGSRMMQIRSANTTJBPSUAJIXDFWWZKLIQSVVQKICGOPTZEFNUANZKMDGWCFGVBURD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.6117213129612378);
    msg.setSource(34130U);
    msg.setSourceEntity(123U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(8U);
    msg.timeout = 55295U;
    msg.lat = 0.6583587773070719;
    msg.lon = 0.678434088272125;
    msg.z = 0.442316678916545;
    msg.z_units = 150U;
    msg.speed = 0.807176248565782;
    msg.speed_units = 143U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.01691826223059356;
    tmp_msg_0.y = 0.011000676532063491;
    tmp_msg_0.z = 0.5774254156291455;
    tmp_msg_0.t = 0.9536222468858989;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QWRZPSEVIRCUUDNINYNCQUOFYJZXHYICOSKKSKAMEXOZQOWMKVBASKCDMQXADGUAURPGWWTRTHXBXJWTNKUBNEWMOVZRPRHIRPITLGUHQPBBJMPNDSLQANDGLBMYFVSZPEXDQTAXQEFLJTVEMGPLLBUWLXFHSNHMZMFOATOCCNSGNIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.5316307718971739);
    msg.setSource(9673U);
    msg.setSourceEntity(124U);
    msg.setDestination(45806U);
    msg.setDestinationEntity(219U);
    msg.timeout = 38406U;
    msg.lat = 0.1817275575385937;
    msg.lon = 0.6680996462580883;
    msg.z = 0.5288895960855143;
    msg.z_units = 121U;
    msg.speed = 0.500569167745746;
    msg.speed_units = 174U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.22085863227800062;
    tmp_msg_0.y = 0.8660614899788919;
    tmp_msg_0.z = 0.0629294355935166;
    tmp_msg_0.t = 0.4607247376341512;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YHYSMQHKCSSMLLOSFUBWYHZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.5812396086959496);
    msg.setSource(12560U);
    msg.setSourceEntity(167U);
    msg.setDestination(42470U);
    msg.setDestinationEntity(18U);
    msg.x = 0.01771185487859339;
    msg.y = 0.40444551564321196;
    msg.z = 0.6007857873496937;
    msg.t = 0.5484743300811634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.8930974603839149);
    msg.setSource(5341U);
    msg.setSourceEntity(41U);
    msg.setDestination(11207U);
    msg.setDestinationEntity(136U);
    msg.x = 0.21366407451795522;
    msg.y = 0.38637021358899815;
    msg.z = 0.9730223288013025;
    msg.t = 0.3347792134402313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.1492593982746503);
    msg.setSource(18592U);
    msg.setSourceEntity(89U);
    msg.setDestination(14784U);
    msg.setDestinationEntity(84U);
    msg.x = 0.06878115241841853;
    msg.y = 0.24106686962612478;
    msg.z = 0.05969863690052579;
    msg.t = 0.03802148948901796;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.29134259922539374);
    msg.setSource(48227U);
    msg.setSourceEntity(201U);
    msg.setDestination(1797U);
    msg.setDestinationEntity(23U);
    msg.timeout = 7273U;
    msg.name.assign("XMNCQDASSVPDZROXYDKHZLXMVFNCWEGRKAHPODZYXTIFIMFWOBGNMHWAZSBMBLKBHWRINLERTHUXPSFNIVSCFIZHJOEVZUBOXYEURFUHEIEQAFKQJSCKLCDVJFLGGYPEXPCYKCFSXUWXPIEWOIMTDNZNTZYCPKBFQXYQRUJKRJTRKVBBAMEIJWKTGJLOLWVDPETWGCHUTOWASSOMPVCGIVPHBQDYRQUAHA");
    msg.custom.assign("BODLVMCBOHINWUMJKZBGBSQACEHOIGKIIDVUSCUZOPBPSJJKDTRMQORATA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.6371861938786575);
    msg.setSource(64162U);
    msg.setSourceEntity(111U);
    msg.setDestination(61008U);
    msg.setDestinationEntity(4U);
    msg.timeout = 36074U;
    msg.name.assign("MYIVXRRPIWQWGDCNFPEOGPKZIVWNWSIVIQUHDDVNLHQYLHUMCVTFNSZEFGAAFGKITMAFJKRYSPFGMPWIJELCNKCVDAY");
    msg.custom.assign("QNRFEZPOYBAYPHODXBYHGKDUUWDOGQRSFKKXAMMUBAZBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.05735476504669246);
    msg.setSource(56389U);
    msg.setSourceEntity(17U);
    msg.setDestination(58049U);
    msg.setDestinationEntity(240U);
    msg.timeout = 63242U;
    msg.name.assign("NQKXIYRZICVYSXEQLSFQOMOBMSSUOSESERJXCPGBVUPJJFZAGKKWTANROEPBAVFTIKJTWYTAUDWLMCBHVNYIGLQTIRCWDCLBXLRONHZXYBWDTDUVMVYWHZJPSMQIOWFBACHMRGSHNLDCPDZAEGEMAUNZXYLXPGRAVFFZYQDWNLUZFWIPZJGQKJHERBTAEJRDFOQIXWHQSMPVNSPHGBTJULYGVLUXARNQHTKFKXMIZDDOOFCMGKPHYOUKKN");
    msg.custom.assign("HSJOAQFXKFKSRRJABPNAQEWZYXFZTWKOGCNYWBGOGAIZSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.5196961377343522);
    msg.setSource(44908U);
    msg.setSourceEntity(150U);
    msg.setDestination(33873U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.850419461092102;
    msg.lon = 0.9822531884306686;
    msg.z = 0.6958063883714884;
    msg.z_units = 86U;
    msg.speed = 0.567293652805374;
    msg.speed_units = 244U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9624U;
    tmp_msg_0.off_x = 0.4552178139764449;
    tmp_msg_0.off_y = 0.0025606585223765244;
    tmp_msg_0.off_z = 0.7151994394011401;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.20346142827179015;
    msg.custom.assign("WLKOBKLLHKEFFVBDCRCAOIRLYKKGLLZMUORQUZUQHJBMJZXJTAQTSKWADIPLVZXZEYETPLSYEIJYQGSRPSNXHFABHGVWRKNUAEWMICHPDUKKHUAUEOIIYDNOBPTXSKHVFUVDMNGTNYNFMGTOJWWZPQXRQISMDFOCYZYBDMHSRAWVZSQCIWORVFUMMAOUJLWXWNXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.8166536381519769);
    msg.setSource(11276U);
    msg.setSourceEntity(235U);
    msg.setDestination(14842U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.7762900350256042;
    msg.lon = 0.9015571517350116;
    msg.z = 0.43506560882885514;
    msg.z_units = 238U;
    msg.speed = 0.9646729458322767;
    msg.speed_units = 35U;
    msg.start_time = 0.8557400493573496;
    msg.custom.assign("CHVUVVPUMRLPQGUMVIOCRCQSGXSDETIZNJQPWRMDIJEBGSGEHXCTNQOTQGGXLBXYBRP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.6817600216787607);
    msg.setSource(49320U);
    msg.setSourceEntity(116U);
    msg.setDestination(17361U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.7677234988938413;
    msg.lon = 0.6330804241278688;
    msg.z = 0.5189347629127867;
    msg.z_units = 69U;
    msg.speed = 0.1649242111164857;
    msg.speed_units = 232U;
    msg.start_time = 0.41738773348808567;
    msg.custom.assign("MDUYRPRELCOKYNHWDWCHZYXXUTBZIWQNIPGORJXADQHPCCOPXSXMTVEATZIMYDXNGINMJIMPYQLQXBVZTSTJWELNEGKHRXAUTHLDSMWRLIDWAUPCVSFNBKUSZAOCTYGGEOJFWVKNJFHACDFVUNDJCRRIFBWOUXLGLWSSAFVHRGSQFJTIPEQQJMWVRHETKHJASINNBYDFLOYYVHCPFZGVZBPZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.22507500139740477);
    msg.setSource(38195U);
    msg.setSourceEntity(172U);
    msg.setDestination(30637U);
    msg.setDestinationEntity(178U);
    msg.vid = 24652U;
    msg.off_x = 0.5647060581035482;
    msg.off_y = 0.8731169421087231;
    msg.off_z = 0.9627721585256915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.25516558474352535);
    msg.setSource(9438U);
    msg.setSourceEntity(66U);
    msg.setDestination(10207U);
    msg.setDestinationEntity(137U);
    msg.vid = 13201U;
    msg.off_x = 0.2573100051288173;
    msg.off_y = 0.48778740814822785;
    msg.off_z = 0.6013659718824365;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.3741175212892386);
    msg.setSource(51610U);
    msg.setSourceEntity(232U);
    msg.setDestination(6866U);
    msg.setDestinationEntity(127U);
    msg.vid = 25199U;
    msg.off_x = 0.9669751548969665;
    msg.off_y = 0.5318953955899698;
    msg.off_z = 0.3078878474192267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.4613628672478073);
    msg.setSource(46842U);
    msg.setSourceEntity(79U);
    msg.setDestination(29933U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.8272633361186552);
    msg.setSource(43947U);
    msg.setSourceEntity(1U);
    msg.setDestination(51368U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.7238906771032663);
    msg.setSource(38053U);
    msg.setSourceEntity(1U);
    msg.setDestination(30422U);
    msg.setDestinationEntity(14U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.6653966342185944);
    msg.setSource(1454U);
    msg.setSourceEntity(81U);
    msg.setDestination(1661U);
    msg.setDestinationEntity(131U);
    msg.mid = 19070U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.556573700841392);
    msg.setSource(12203U);
    msg.setSourceEntity(232U);
    msg.setDestination(42513U);
    msg.setDestinationEntity(51U);
    msg.mid = 11281U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.3187251473524355);
    msg.setSource(30638U);
    msg.setSourceEntity(178U);
    msg.setDestination(30959U);
    msg.setDestinationEntity(21U);
    msg.mid = 17872U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.7345006076655837);
    msg.setSource(45350U);
    msg.setSourceEntity(148U);
    msg.setDestination(39950U);
    msg.setDestinationEntity(247U);
    msg.state = 84U;
    msg.eta = 3893U;
    msg.info.assign("YTSNMNJJSABJZTRLVKHEHFVBHFKSLQXOUOTPLVLUPMCTINTCWMIJEAGNWSMPDVNQLRGRGQXSJRHGUGGAQCLIETBCSHJFXXMYLYJJATMZVOUQVBCSYSIIAIXQUNYPVVTDXBYWMRCDFEMNATLELZZHFNDPXBZSHPNDPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.2171700365517798);
    msg.setSource(44368U);
    msg.setSourceEntity(191U);
    msg.setDestination(64714U);
    msg.setDestinationEntity(238U);
    msg.state = 216U;
    msg.eta = 65370U;
    msg.info.assign("WGQCNKFOUDNVBLCDCIQVOHCHEJFAKPPVTRMNFJNHFUBWLWKAZCOJOPJYYBQCIRKRKFKEWJTTSXDMQWFHZHISAAABLGXZFRJGDGSCXXSLOTYLHCTPSXDUIQMOMHWIADRLKZIEJPVUGNGBVIQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.7221423243502958);
    msg.setSource(19124U);
    msg.setSourceEntity(103U);
    msg.setDestination(23769U);
    msg.setDestinationEntity(139U);
    msg.state = 6U;
    msg.eta = 3761U;
    msg.info.assign("ABIFQNXDKUOEFEFZSJFXSDTUIAWRDQIGNPCSFXSVRBVBCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.9995023121112996);
    msg.setSource(55600U);
    msg.setSourceEntity(234U);
    msg.setDestination(12441U);
    msg.setDestinationEntity(96U);
    msg.system = 15809U;
    msg.duration = 17362U;
    msg.speed = 0.23417818254861977;
    msg.speed_units = 10U;
    msg.x = 0.2365715965145736;
    msg.y = 0.021942807571568745;
    msg.z = 0.28055237350302864;
    msg.z_units = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.15844181602677954);
    msg.setSource(40076U);
    msg.setSourceEntity(7U);
    msg.setDestination(39934U);
    msg.setDestinationEntity(249U);
    msg.system = 60834U;
    msg.duration = 24436U;
    msg.speed = 0.9079487910753392;
    msg.speed_units = 76U;
    msg.x = 0.6323637846827393;
    msg.y = 0.9859645991839895;
    msg.z = 0.23464450034419615;
    msg.z_units = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.2628637371200976);
    msg.setSource(1621U);
    msg.setSourceEntity(53U);
    msg.setDestination(15702U);
    msg.setDestinationEntity(210U);
    msg.system = 48147U;
    msg.duration = 6711U;
    msg.speed = 0.9973485265532689;
    msg.speed_units = 226U;
    msg.x = 0.07367332865630016;
    msg.y = 0.37789029175100164;
    msg.z = 0.1441340809150473;
    msg.z_units = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.44170859761535963);
    msg.setSource(28725U);
    msg.setSourceEntity(50U);
    msg.setDestination(34445U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.7647970241489009;
    msg.lon = 0.11947970550498377;
    msg.speed = 0.7282679688477057;
    msg.speed_units = 213U;
    msg.duration = 40563U;
    msg.sys_a = 51720U;
    msg.sys_b = 21128U;
    msg.move_threshold = 0.6341079306674201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.10986903611828935);
    msg.setSource(29635U);
    msg.setSourceEntity(135U);
    msg.setDestination(52142U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.08342780606540534;
    msg.lon = 0.5657795733948957;
    msg.speed = 0.6052227224168094;
    msg.speed_units = 228U;
    msg.duration = 59847U;
    msg.sys_a = 3782U;
    msg.sys_b = 13123U;
    msg.move_threshold = 0.8555358092665962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.10705110822515695);
    msg.setSource(57483U);
    msg.setSourceEntity(187U);
    msg.setDestination(48668U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.6364928463970672;
    msg.lon = 0.6539595856919281;
    msg.speed = 0.6338608570700999;
    msg.speed_units = 27U;
    msg.duration = 16872U;
    msg.sys_a = 55734U;
    msg.sys_b = 33229U;
    msg.move_threshold = 0.35109692715845653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.154485902590641);
    msg.setSource(64023U);
    msg.setSourceEntity(228U);
    msg.setDestination(24277U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.16139964123996486;
    msg.lon = 0.22106542605135004;
    msg.z = 0.45446974440197496;
    msg.z_units = 225U;
    msg.speed = 0.8271956572170788;
    msg.speed_units = 173U;
    msg.custom.assign("DECEQBJZZUMJNFYIFDUUAQZYDXKAPOFTHPBRFUJUNILIEGRWMLFLLXVOLMNRAKQAYBUOQNSJPNJEEZSCEMPPTAKQTXJOVBAGCRTSLLKNYWXXIDLVVIZDRIKVDWKPMGHFMAGSNSTCUZVOOGPIWCHVVTTBHGRITHAHKYGCGAYNZWZPEELCDOKSTMUFJJQRSXBXWJFYKSHKZOSWNUGQWRXVJFBEYREPWXYQHMZIHOBXRYDSFUCMVBOANIDGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.8900370263925381);
    msg.setSource(63286U);
    msg.setSourceEntity(191U);
    msg.setDestination(12566U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.15963618040510996;
    msg.lon = 0.5327995898094205;
    msg.z = 0.8742257262942563;
    msg.z_units = 165U;
    msg.speed = 0.07253066819324927;
    msg.speed_units = 13U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.19801407913974223;
    tmp_msg_0.lon = 0.27157651486133405;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TEPVDXLYEESBGKDHLRKJRUYUNZVOHMERGADPSSLIVMIWMQJZQRWEXUWDODTYTTRHBAZVPHHGWVKNDBUUHKRZWCSYCINGFMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.5857332131880534);
    msg.setSource(9103U);
    msg.setSourceEntity(141U);
    msg.setDestination(21961U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.2480605948424478;
    msg.lon = 0.3100699550816878;
    msg.z = 0.0021154829135773268;
    msg.z_units = 107U;
    msg.speed = 0.04372174923458705;
    msg.speed_units = 224U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2530167938895719;
    tmp_msg_0.lon = 0.24028579597561306;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XSVXHWWLCHDUBECILRDGPZVKUNJDSLYLXRTOPBUJEZEHZRPIFKAQDTNJBULHFIMUVMHCSZVIYNKQKAMJNEWSGRDAGCWIQMKLJHHOXJBCGMGXIXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.16451800878765943);
    msg.setSource(26647U);
    msg.setSourceEntity(67U);
    msg.setDestination(11864U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.4344220132842812;
    msg.lon = 0.19666888711503572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.638919030504126);
    msg.setSource(25757U);
    msg.setSourceEntity(7U);
    msg.setDestination(38133U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.18503858860763434;
    msg.lon = 0.6514807780715457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.35219676996864024);
    msg.setSource(52122U);
    msg.setSourceEntity(134U);
    msg.setDestination(20579U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.6941191922707372;
    msg.lon = 0.8596361249336127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.30422796315448863);
    msg.setSource(22830U);
    msg.setSourceEntity(195U);
    msg.setDestination(1017U);
    msg.setDestinationEntity(113U);
    msg.timeout = 21600U;
    msg.lat = 0.4737817027114024;
    msg.lon = 0.45797640760183134;
    msg.z = 0.6544375061978538;
    msg.z_units = 249U;
    msg.pitch = 0.27035799757805656;
    msg.amplitude = 0.8717287352795619;
    msg.duration = 52913U;
    msg.speed = 0.670942411088805;
    msg.speed_units = 163U;
    msg.radius = 0.6828115427346158;
    msg.direction = 230U;
    msg.custom.assign("WBACKHMOCSQLJDHDVNTEOLRURFMZNFKEPVXISYLVKGKUHLLJOHZRKMBCWDZNGUZEMTVXNRESDEYEDKWGJPZKDNJYZLAISYAZFJLWXFUCRODFAUKSNTMZWBLNUXPBYQHHBIAQPJXOYNMTHFVCBDHSSXRKIWMAVCHOGDIVQBBFWPRVITTSIQCFPWGECQWMYIHUPAAOADENUAXZEPTMRQMUJVYCRPLWTFOTGGQXOYGGBJLQICJQTXFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.26713165373089076);
    msg.setSource(63221U);
    msg.setSourceEntity(210U);
    msg.setDestination(24300U);
    msg.setDestinationEntity(103U);
    msg.timeout = 19915U;
    msg.lat = 0.8261149550162905;
    msg.lon = 0.7423821491658178;
    msg.z = 0.918760530243287;
    msg.z_units = 149U;
    msg.pitch = 0.3710385803221279;
    msg.amplitude = 0.03444957915327329;
    msg.duration = 51591U;
    msg.speed = 0.3097100301591136;
    msg.speed_units = 25U;
    msg.radius = 0.3481702158385239;
    msg.direction = 86U;
    msg.custom.assign("JQRHSRPQJJEWDRVKFCIZQGAYVEMOKVHHUZJXDLLFGGNPGSBOTBOCDVIMPMHHTSEAWZDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.7643796089449224);
    msg.setSource(20522U);
    msg.setSourceEntity(236U);
    msg.setDestination(23498U);
    msg.setDestinationEntity(249U);
    msg.timeout = 16684U;
    msg.lat = 0.40492357396646184;
    msg.lon = 0.7884868317982485;
    msg.z = 0.9445255950746367;
    msg.z_units = 193U;
    msg.pitch = 0.4448042667716474;
    msg.amplitude = 0.47389594553401504;
    msg.duration = 40605U;
    msg.speed = 0.6415777293227892;
    msg.speed_units = 19U;
    msg.radius = 0.03150447647912691;
    msg.direction = 104U;
    msg.custom.assign("VJQVSASJFYZBNGMOPHYDYBLFKISRTFUJVADAKWSWZXRXJNDBHLNIZBEMAHLXELVGMYKWUINNBVZYNRRWCAZSELXDHNZZZCIGVHTKSOHHPCXEXROTUYRCKQFIBEPODTOXCDEQECCGODNFWDPMFCLGIOMATGUEWCTPRYJVQGKUJTPGOEGAOLQBTRJYPHKKKKYBJHYWFQLIMCGFDBZQBLRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.9987592833443627);
    msg.setSource(6663U);
    msg.setSourceEntity(14U);
    msg.setDestination(59396U);
    msg.setDestinationEntity(27U);
    msg.formation_name.assign("IJNBKHUMJOEMPAMBRSKQIEPLSGNMYUQBKEHYVZBNTFBLGRBPHGEQCNEAICNLJRRONGIWDSXWPWRIWHOOQIYLRUPNZTXVOSGJLWQUPKYQXJHDPYFFCPILVDOXPGGBSCKCYIFMTAXFYCYAUWFHXDJYLMUMXVSATTGNKAQT");
    msg.reference_frame = 104U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6471U;
    tmp_msg_0.off_x = 0.32601483933179265;
    tmp_msg_0.off_y = 0.4852693959228269;
    tmp_msg_0.off_z = 0.8754434396118213;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WGAKXGIKJRFEBPXMCEIXUCOUAWLDAYYFOLSZLVQGZYEVKKATARIQPQCQONFOOCZGIWJFWUQVNBPVHMRHOCVJGDZLYIDIETJNHJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.04150937140189115);
    msg.setSource(18188U);
    msg.setSourceEntity(83U);
    msg.setDestination(64345U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("QPRHCRGLKXQTQCZLVYAVCLOYUOEKNFWVJBKZEUVUMXIFAMSPAJMIWXWVJDBTKVSKAAJXDEQFMTVYTJXLCGYVSFHSHNPJQUGAHCQRMSGQRGAR");
    msg.reference_frame = 7U;
    msg.custom.assign("OYNYAFDRBALVATHRWSPXFPBAWRWPLMQUGKPNNEQDBAESQGPAVOACCWQEPWVMQCHNRYTJHTKIWNWRKBJMXQBBURTVUUHNCOLGMGQZMKMZEJOXENIYTFZFBUWEZDRSRTLXCBGJSJYWIVVGFXKMKMLLQKIEFFSXPSQLZUSZWHXKIQLPNDHCTZROJIEKCEVSGVUDZGSDCHAIJPGSOYTCUHIZKYIOBUFFELXDYJARXCNMTAYOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.7636154890877416);
    msg.setSource(31389U);
    msg.setSourceEntity(36U);
    msg.setDestination(62398U);
    msg.setDestinationEntity(160U);
    msg.formation_name.assign("JWAIIUGQXOVQEVTJKFFFBASHCUCBRFKNCYLFUYYBZCVDLWWSPMPYJNIHBKXDDYJDWXOZXLYINFVCZMFHUCITTCGQPARZBIJKJSQIIEUZGZMKXDYAMVDREPTSZEVNLMFMOAGEIVWUYNLLSSADXNQDRRWGHWFMHNKQSOXPUHPVEZP");
    msg.reference_frame = 190U;
    msg.custom.assign("KJZORPIGSYLCSDUQYRQTKIHLJMLZDWPGGMSFVEFLDPGOSTGOHCXMINOHEKOPTGAFUFBVUXZWPTFQQWKUCNPAIXUJAGJCZJAHEVFYBUSCKQJDJQILRCISNCYQABGLXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.10931322169066149);
    msg.setSource(40465U);
    msg.setSourceEntity(51U);
    msg.setDestination(18750U);
    msg.setDestinationEntity(57U);
    msg.group_name.assign("JESLPMKGDHQEWSTSYVHIQH");
    msg.formation_name.assign("BXOWUDBPSYAYPNDTHWRXJIESPULHOMFBDQOKXGGYXMBDCWIITXCKVNCYUZQKANGPHTNALKCMOSWCARWSVVIQUIFPJWPZLTGKSVDMYIZFVIDOQANVJXHHTGFNLFXZQTQUZEGXESZSYFRRVZVMNDFTPJOMEOECTEYUOYLJURDJEBNZMOLFLJUGARRLIMKWGYMPAXAXPIBKWRHJHRYFJQBGJKNKQFAHESBUOBCTLZTQSNHCKZSQ");
    msg.plan_id.assign("YEFAIIPSCFTPLCMWRSXGZITEOQJHYFSSPHMNUYWPVYHNQARJJVQQYVACYAEBOVKKMKBEVZGUAWXNXZLRLOBWDRNNGJUZRUVHEKSQGFTJQJHLEBCKHGTVKAHUPUBWJSRKGMXDTPCEFNCHNQQIPYOZMPNHHBFOARMDDSIOLSDVXFMGUFDOMAWOBYQVJWKLXFGJORAIXLWNFSTYJZGWECLYRWUTVBZZZETIDUOPXLRUIENG");
    msg.description.assign("FUDMXTLITZVJDMYKSXQYWMRBGLVFZPUMSEGNNSZORSLQCGVHBQYYRQRJDDVPJBYKCVRRCZTQNUUEZANKVC");
    msg.leader_speed = 0.7997379917754541;
    msg.leader_bank_lim = 0.8257486567647221;
    msg.pos_sim_err_lim = 0.03252545276247354;
    msg.pos_sim_err_wrn = 0.8206678706173692;
    msg.pos_sim_err_timeout = 57802U;
    msg.converg_max = 0.698666423510382;
    msg.converg_timeout = 39339U;
    msg.comms_timeout = 1240U;
    msg.turb_lim = 0.7783301800470214;
    msg.custom.assign("OHPUUVKYQALZRNJJKKNSUTREDJTBORTAKJFIJCECPCAJENHRWVKCJYZHURLDABYRVJTXESWDIQLZANEULFTTZIDVZMIXLEKFSSYOXMFYRHYGGSFFEMMRQIIGMYQOSHLQOFHLXBPYEODB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.6611815511298386);
    msg.setSource(12672U);
    msg.setSourceEntity(94U);
    msg.setDestination(11287U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("HJZOGNUNBQLWBFYJSOXXTYRYPRNNKDWWBHJAOPLBWDYHUATSDZJRDYKDFUBEKKDHVLXNKZQCQSY");
    msg.formation_name.assign("AQKYORVAVOOKYNTTCDINOEZNJTPRDPRZPHTSBIZWEUSPSKVBGXNAEWRFFMWODNGCUZSVGWTWSDMVYALZHIXVUKSIVYZH");
    msg.plan_id.assign("EFWTPKTWRMCWVKHPGONSOO");
    msg.description.assign("QQZRYPHSZDQNSYTXWGMWRL");
    msg.leader_speed = 0.7957309777567235;
    msg.leader_bank_lim = 0.5212775449544303;
    msg.pos_sim_err_lim = 0.5145093754064868;
    msg.pos_sim_err_wrn = 0.5013279289107408;
    msg.pos_sim_err_timeout = 44796U;
    msg.converg_max = 0.07541695686291816;
    msg.converg_timeout = 12115U;
    msg.comms_timeout = 57904U;
    msg.turb_lim = 0.02157309117303241;
    msg.custom.assign("RNEUOIKLWAGBLXYAMXFMAILJBJQIDSTMKRSMTEWEJTILRPXOZSVSHQTZIRXOEHVJTKEHMIYNHNYJQUUXHUPNVIAHDLVFWZDHINGQAKPQOCOQWBWCXXEVRORYTGWYAUGNSZLWMMSLJZDUIPGNZSECERFABJFGVQWUTVEQVPYPXQGMNKDTKYQNBFXHDBBSKUJUOBPMZLWHGFAEOSTBYRYIHOZXROPJYFCDPZSCVAGFPJNZWDATFBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.9667508324058777);
    msg.setSource(61316U);
    msg.setSourceEntity(90U);
    msg.setDestination(16437U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("UDEKKVYNEWMSFEPYUWNZIRFOEOHHXJZVOFIRCNUMQTYHMVVQSRZDPFQZEDLAOPXIUCLKUTPNYEQTJIJBXRRQMTJXZHOSJVWCLEWSMTGCNHYWOIMWCJJZNU");
    msg.formation_name.assign("XDZVPSTTIKJHJKMTYEQHUONRWQIFYAWXBGVSWRZPYRQLJMYHSZLCSVASKJBXTLUNYWREWFHFPHIWGWNUQNGGZMRPQPPTQMBKDCCSKREGUVBAORIQCBGLTTXYVPCPOFDHIOICHCZDEAIBNLA");
    msg.plan_id.assign("TOITAHLMMERPZTHOPRLBUHCZIRFFYNDOALCGXMYBVMESCQLHXZFTDTLDDWMVGTJNLZZKOAIQRBIZQVJVQIFNOKERUSBYJRPDNQYQCAHPAXOZAJKNLYDAXGEBPUBVBJPLEEXWKNTXEEFH");
    msg.description.assign("OLOEFJTPUZHFILDOITBKKSYUCDBJFECGPJMOQVTYAWSPVYTGESJUJUFRVWTKRHBNPQCCNXHBXXCBCVISFFGYRSOAODAMPIWKUCEVVGOHEBNHUQKSMQQHVFKGHBIRSIRWIMMNZMEGRBJBTZYFYDUGOZHCWWEANDLHNTMQ");
    msg.leader_speed = 0.4284359801530493;
    msg.leader_bank_lim = 0.25305234903285867;
    msg.pos_sim_err_lim = 0.45320961227932544;
    msg.pos_sim_err_wrn = 0.4000288476506658;
    msg.pos_sim_err_timeout = 42893U;
    msg.converg_max = 0.269702757071398;
    msg.converg_timeout = 14865U;
    msg.comms_timeout = 28865U;
    msg.turb_lim = 0.6719831326028544;
    msg.custom.assign("XFKEWTXALYZPAOGOKPPMCDVSGQRURYSSIFFOKAQXNIIZBJBDYKUNWLVCJIPKJODJDJKYTHZVFHDVMBFLGITMKMLMBCPLCCAMNQFUQMAXOSVRHDUPGUWXJVSTWPNDLHUOXJSEMNTHRORNGAUZKZBZESGMBWCNSPWNQTMHIY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.09016049237606927);
    msg.setSource(55087U);
    msg.setSourceEntity(233U);
    msg.setDestination(37748U);
    msg.setDestinationEntity(40U);
    msg.control_src = 9420U;
    msg.control_ent = 148U;
    msg.timeout = 0.0034909233127751182;
    msg.loiter_radius = 0.3129825520127745;
    msg.altitude_interval = 0.43724354785507735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.5331510878728288);
    msg.setSource(62394U);
    msg.setSourceEntity(35U);
    msg.setDestination(30627U);
    msg.setDestinationEntity(121U);
    msg.control_src = 58781U;
    msg.control_ent = 113U;
    msg.timeout = 0.14373265818318093;
    msg.loiter_radius = 0.9220194837265545;
    msg.altitude_interval = 0.744060462269899;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.06146079285187678);
    msg.setSource(61192U);
    msg.setSourceEntity(224U);
    msg.setDestination(26302U);
    msg.setDestinationEntity(200U);
    msg.control_src = 50493U;
    msg.control_ent = 175U;
    msg.timeout = 0.3329025713308491;
    msg.loiter_radius = 0.32216663845930693;
    msg.altitude_interval = 0.17949284759072248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.5106801752939062);
    msg.setSource(17450U);
    msg.setSourceEntity(30U);
    msg.setDestination(12585U);
    msg.setDestinationEntity(4U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7455116577906473;
    tmp_msg_0.speed_units = 91U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.17654911198105472;
    tmp_msg_1.z_units = 18U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5259415797460363;
    msg.lon = 0.9707989887459957;
    msg.radius = 0.3102575932337239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.7694712496986125);
    msg.setSource(22894U);
    msg.setSourceEntity(97U);
    msg.setDestination(55782U);
    msg.setDestinationEntity(22U);
    msg.flags = 54U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.05476623743693343;
    tmp_msg_0.speed_units = 56U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.16345907222302747;
    tmp_msg_1.z_units = 96U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6899715555153699;
    msg.lon = 0.05106731763185035;
    msg.radius = 0.479899779390088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.3932945579638881);
    msg.setSource(12905U);
    msg.setSourceEntity(45U);
    msg.setDestination(41503U);
    msg.setDestinationEntity(95U);
    msg.flags = 176U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8322024735702663;
    tmp_msg_0.speed_units = 133U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4689035008708474;
    tmp_msg_1.z_units = 74U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.886808029200066;
    msg.lon = 0.4674166721075539;
    msg.radius = 0.20181437433986105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.28113925468996737);
    msg.setSource(46927U);
    msg.setSourceEntity(18U);
    msg.setDestination(48215U);
    msg.setDestinationEntity(68U);
    msg.control_src = 17021U;
    msg.control_ent = 249U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 47U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5709958349945087;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6250245135210497;
    tmp_tmp_msg_0_1.z_units = 66U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3468389422484247;
    tmp_msg_0.lon = 0.3368933610967251;
    tmp_msg_0.radius = 0.058720731890466116;
    msg.reference.set(tmp_msg_0);
    msg.state = 200U;
    msg.proximity = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.9853362425114819);
    msg.setSource(25959U);
    msg.setSourceEntity(86U);
    msg.setDestination(55265U);
    msg.setDestinationEntity(252U);
    msg.control_src = 24604U;
    msg.control_ent = 52U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 27U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9789331718940802;
    tmp_tmp_msg_0_0.speed_units = 170U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12379187710730355;
    tmp_tmp_msg_0_1.z_units = 136U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.02489834940161706;
    tmp_msg_0.lon = 0.7018054071649076;
    tmp_msg_0.radius = 0.6672914525090747;
    msg.reference.set(tmp_msg_0);
    msg.state = 23U;
    msg.proximity = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.7895113928841127);
    msg.setSource(7104U);
    msg.setSourceEntity(73U);
    msg.setDestination(37496U);
    msg.setDestinationEntity(142U);
    msg.control_src = 33841U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 93U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9841838437987783;
    tmp_tmp_msg_0_0.speed_units = 59U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.986240982161027;
    tmp_tmp_msg_0_1.z_units = 78U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1731546603130072;
    tmp_msg_0.lon = 0.8807590958926673;
    tmp_msg_0.radius = 0.11657405272462484;
    msg.reference.set(tmp_msg_0);
    msg.state = 141U;
    msg.proximity = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.4704042649385961);
    msg.setSource(728U);
    msg.setSourceEntity(243U);
    msg.setDestination(19336U);
    msg.setDestinationEntity(134U);
    msg.ax_cmd = 0.0009710135574713119;
    msg.ay_cmd = 0.29107383319276514;
    msg.az_cmd = 0.5703419407340777;
    msg.ax_des = 0.15583125587384994;
    msg.ay_des = 0.7914436677509348;
    msg.az_des = 0.6850119265178496;
    msg.virt_err_x = 0.012713804968628173;
    msg.virt_err_y = 0.17905453204453226;
    msg.virt_err_z = 0.8914262427269058;
    msg.surf_fdbk_x = 0.9025436511048377;
    msg.surf_fdbk_y = 0.5249034889755239;
    msg.surf_fdbk_z = 0.8040688363969491;
    msg.surf_unkn_x = 0.8565036027712768;
    msg.surf_unkn_y = 0.03274902876286312;
    msg.surf_unkn_z = 0.14628868218916702;
    msg.ss_x = 0.743922200855296;
    msg.ss_y = 0.8158874392184731;
    msg.ss_z = 0.7080906641795166;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZQTUIBAXEVVFMSOQOCNWFZSARVQZLLKANCDSNRMNCQXGPRPIEYJTJMWEEOTYJIRLJFPFBBGNORXZJDSCVVDLANBQLKQT");
    tmp_msg_0.dist = 0.41243040011530785;
    tmp_msg_0.err = 0.28670552134498706;
    tmp_msg_0.ctrl_imp = 0.9049380177499686;
    tmp_msg_0.rel_dir_x = 0.1412082704875346;
    tmp_msg_0.rel_dir_y = 0.5479378820771598;
    tmp_msg_0.rel_dir_z = 0.856767852192572;
    tmp_msg_0.err_x = 0.6927396781361532;
    tmp_msg_0.err_y = 0.1935084709200019;
    tmp_msg_0.err_z = 0.9501306625927779;
    tmp_msg_0.rf_err_x = 0.18135975373233115;
    tmp_msg_0.rf_err_y = 0.11861981369287211;
    tmp_msg_0.rf_err_z = 0.7490229628639572;
    tmp_msg_0.rf_err_vx = 0.10283912729047784;
    tmp_msg_0.rf_err_vy = 0.8973858956752236;
    tmp_msg_0.rf_err_vz = 0.07753855088539807;
    tmp_msg_0.ss_x = 0.793160392041424;
    tmp_msg_0.ss_y = 0.758590294302437;
    tmp_msg_0.ss_z = 0.4020535560669969;
    tmp_msg_0.virt_err_x = 0.6204912541464493;
    tmp_msg_0.virt_err_y = 0.1017855114347952;
    tmp_msg_0.virt_err_z = 0.561113843894319;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.7430870461426842);
    msg.setSource(41578U);
    msg.setSourceEntity(14U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(213U);
    msg.ax_cmd = 0.09903045752843131;
    msg.ay_cmd = 0.05621996991521705;
    msg.az_cmd = 0.1425543176205658;
    msg.ax_des = 0.10804851343674893;
    msg.ay_des = 0.35331416937100446;
    msg.az_des = 0.08666687656649452;
    msg.virt_err_x = 0.31863937988191493;
    msg.virt_err_y = 0.5445098583510644;
    msg.virt_err_z = 0.35838301864192534;
    msg.surf_fdbk_x = 0.81422538803399;
    msg.surf_fdbk_y = 0.530357192590461;
    msg.surf_fdbk_z = 0.5055569403481941;
    msg.surf_unkn_x = 0.10894295631605166;
    msg.surf_unkn_y = 0.0036374413625206437;
    msg.surf_unkn_z = 0.7613759231218364;
    msg.ss_x = 0.9427545829534563;
    msg.ss_y = 0.3309979781352579;
    msg.ss_z = 0.8843397388405779;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.606996998080593);
    msg.setSource(24797U);
    msg.setSourceEntity(233U);
    msg.setDestination(57U);
    msg.setDestinationEntity(4U);
    msg.ax_cmd = 0.7132760064224608;
    msg.ay_cmd = 0.9402600894170615;
    msg.az_cmd = 0.13821915838848453;
    msg.ax_des = 0.8088514882193869;
    msg.ay_des = 0.3226322216608325;
    msg.az_des = 0.5327754885788255;
    msg.virt_err_x = 0.1948982958886426;
    msg.virt_err_y = 0.9606864825869373;
    msg.virt_err_z = 0.5312067347122884;
    msg.surf_fdbk_x = 0.4948410961016366;
    msg.surf_fdbk_y = 0.12610087320230234;
    msg.surf_fdbk_z = 0.22444574625360803;
    msg.surf_unkn_x = 0.8710750059630453;
    msg.surf_unkn_y = 0.9644064109081881;
    msg.surf_unkn_z = 0.4682964008570033;
    msg.ss_x = 0.9317325948878468;
    msg.ss_y = 0.08230144303060505;
    msg.ss_z = 0.9556965208112241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.31119179709250533);
    msg.setSource(47701U);
    msg.setSourceEntity(190U);
    msg.setDestination(35723U);
    msg.setDestinationEntity(71U);
    msg.s_id.assign("WVZLSJMBYPPVSHLLTBSOOXI");
    msg.dist = 0.6476533659877926;
    msg.err = 0.2524042369114654;
    msg.ctrl_imp = 0.5225552449653663;
    msg.rel_dir_x = 0.4375327902457573;
    msg.rel_dir_y = 0.3361933310440136;
    msg.rel_dir_z = 0.1647187207374926;
    msg.err_x = 0.02925020980216997;
    msg.err_y = 0.30602861530572223;
    msg.err_z = 0.6560528438558328;
    msg.rf_err_x = 0.9070798793359792;
    msg.rf_err_y = 0.8002173547091492;
    msg.rf_err_z = 0.8457217379975915;
    msg.rf_err_vx = 0.5251758348506937;
    msg.rf_err_vy = 0.8615219900540668;
    msg.rf_err_vz = 0.9482053662289743;
    msg.ss_x = 0.6801845264327666;
    msg.ss_y = 0.833820404155645;
    msg.ss_z = 0.3669546363644288;
    msg.virt_err_x = 0.18156743710227652;
    msg.virt_err_y = 0.7318438772549174;
    msg.virt_err_z = 0.5023646102213065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.9737798593457544);
    msg.setSource(22729U);
    msg.setSourceEntity(131U);
    msg.setDestination(34447U);
    msg.setDestinationEntity(86U);
    msg.s_id.assign("UYDMLYIJRCIEAJUNOZXGNTBCHAHQOPULAQXILASQKKYCOXPPEJZMWMVCLCMHWXEKVYVGZWRSYKVLMPMKWKOFLFZQXMEJDWVTAQTRZAOOXRZBJEIJTCIENIRDSXPBIYQFBEUEFEQOKYZBMFCSHYWTVGPPRKBLZTDGPHDRNXYUMJGVSFGDFBNMASPDLJOHAXWVBFQWRCURLNSZQTNHFVUNHCRIZDVFISKWHUDUUTJBAEGATNXNOT");
    msg.dist = 0.08654329439943964;
    msg.err = 0.28113597112530553;
    msg.ctrl_imp = 0.6976527175711253;
    msg.rel_dir_x = 0.6699217535887177;
    msg.rel_dir_y = 0.6537590994247379;
    msg.rel_dir_z = 0.9998453142941518;
    msg.err_x = 0.002458859769040811;
    msg.err_y = 0.37882774834900956;
    msg.err_z = 0.4563487315514184;
    msg.rf_err_x = 0.38545421516925205;
    msg.rf_err_y = 0.1600376494393715;
    msg.rf_err_z = 0.7467394926622105;
    msg.rf_err_vx = 0.5415412566983702;
    msg.rf_err_vy = 0.09525312642547712;
    msg.rf_err_vz = 0.7817748133489322;
    msg.ss_x = 0.5241799627549006;
    msg.ss_y = 0.6671733659770839;
    msg.ss_z = 0.8711461195215446;
    msg.virt_err_x = 0.5315237978448629;
    msg.virt_err_y = 0.7615267410499396;
    msg.virt_err_z = 0.8395620885016256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.21405866489218606);
    msg.setSource(51260U);
    msg.setSourceEntity(18U);
    msg.setDestination(17658U);
    msg.setDestinationEntity(95U);
    msg.s_id.assign("YABJRJJYUYMLCGQODMSEDWJFLVTXXYFMUJIIONCBLPJVDSIZEWCRRBZDLOYALL");
    msg.dist = 0.21944165094399481;
    msg.err = 0.6430768057608276;
    msg.ctrl_imp = 0.47024112937669105;
    msg.rel_dir_x = 0.18085683419900977;
    msg.rel_dir_y = 0.7133037258272535;
    msg.rel_dir_z = 0.10124047700541738;
    msg.err_x = 0.37198055499635974;
    msg.err_y = 0.39000972954943125;
    msg.err_z = 0.7839547031327351;
    msg.rf_err_x = 0.5246046155083628;
    msg.rf_err_y = 0.9229657572736859;
    msg.rf_err_z = 0.916322795292652;
    msg.rf_err_vx = 0.5090065173968426;
    msg.rf_err_vy = 0.6593414049862255;
    msg.rf_err_vz = 0.8154843738764224;
    msg.ss_x = 0.7775620434513765;
    msg.ss_y = 0.5635485723839964;
    msg.ss_z = 0.5643165579815124;
    msg.virt_err_x = 0.18910984254566476;
    msg.virt_err_y = 0.5883533645125694;
    msg.virt_err_z = 0.8871900348883515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.23906475104864167);
    msg.setSource(17826U);
    msg.setSourceEntity(110U);
    msg.setDestination(28897U);
    msg.setDestinationEntity(165U);
    msg.timeout = 16732U;
    msg.rpm = 0.7412003726392025;
    msg.direction = 213U;
    msg.custom.assign("WUGZFBHOVPBMRODSOFCPZHFLINCAGXKCXTJWMFSAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.5487135959247704);
    msg.setSource(15798U);
    msg.setSourceEntity(144U);
    msg.setDestination(65283U);
    msg.setDestinationEntity(246U);
    msg.timeout = 31256U;
    msg.rpm = 0.8586991067339848;
    msg.direction = 18U;
    msg.custom.assign("IFITVRYXZAPAATGIHYABXUOFUHDSXWLPTMXUNVVBDBNSXTYDUMGXWWPGIVFUBJICVPNRCPFOYWKECVVTKZHFYHJXYKFMKIZCQNMSNASXHJBSMZXDAUJUDZVRKECWRNJQDBLGJWKIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.17303084469204966);
    msg.setSource(53277U);
    msg.setSourceEntity(84U);
    msg.setDestination(42995U);
    msg.setDestinationEntity(243U);
    msg.timeout = 44712U;
    msg.rpm = 0.7308775786875723;
    msg.direction = 212U;
    msg.custom.assign("QHCWBOMAVHWBJJQGOKLLOUZPXZCVXTPYEQOXYAUBEGSOHVKVDKMBRTZGUTHTYWLJAKMOJFGWBRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.6111287672667037);
    msg.setSource(29915U);
    msg.setSourceEntity(244U);
    msg.setDestination(27656U);
    msg.setDestinationEntity(248U);
    msg.formation_name.assign("IMEKZOHVBKLXFVIAKQIVTUJZGCOSDNUHADGMWJNOIJMEUABKEBSSCQYLYSGQLUUDKWJLTOHVBGWZBUDCVHYTAQLTWDGGHVYOFROZXPEYRRJNLTRUEXLLHQZSSMERZRCPLBUXBWPDRVFNDLWCTYFNCIJIWIQAVKMKMYSSEQWEHJRTFYPFMARMOXPXNWOZNXYZSCPADMOGGIBJM");
    msg.type = 185U;
    msg.op = 108U;
    msg.group_name.assign("SCKJFGOUBNRNZRJNHRSMCMWJGDKMQPZDWADNQRXOYPEEWXFFDIEMPNIEUE");
    msg.plan_id.assign("JQERZCVLZSURPALGWWGCYWPJMPUZKJP");
    msg.description.assign("LUBHIBNDYNHBIJNSPPGBMTDYDNGJQGSEQWITTYLYCLREMAXUXOQMPEDKWJZWJWOMOFSSMZKYTOIOKDJDOVRECAUPP");
    msg.reference_frame = 225U;
    msg.leader_bank_lim = 0.483919440519215;
    msg.leader_speed_min = 0.8551342665477322;
    msg.leader_speed_max = 0.975938170874724;
    msg.leader_alt_min = 0.7611328293810964;
    msg.leader_alt_max = 0.39407423838537525;
    msg.pos_sim_err_lim = 0.6823775879690597;
    msg.pos_sim_err_wrn = 0.9282983955754417;
    msg.pos_sim_err_timeout = 41927U;
    msg.converg_max = 0.6896264079910911;
    msg.converg_timeout = 37736U;
    msg.comms_timeout = 52447U;
    msg.turb_lim = 0.6387106841714546;
    msg.custom.assign("ONDIUMCZYJRHJLQNVP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.08204724522982443);
    msg.setSource(4615U);
    msg.setSourceEntity(127U);
    msg.setDestination(37226U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("IKXTGIXFZSYGEORUEPEMPPYIGUIFTJWSDVFSTFDYPZOEDXFSLKUJMNWVHHGQCRBMKLUXRBWANWZPHX");
    msg.type = 33U;
    msg.op = 210U;
    msg.group_name.assign("QMCWUKYOAPJNOWSNYZCOGZKJFIELABMQPCOLNLKNVUXIOJKVBDZITSXWFTSGENLFZOGEKWCJYTZDIORFJJRUWDWHRADRCVOJWPEGZLIDHDSKNE");
    msg.plan_id.assign("PBOPYCMNAXILSTITGOYKBLYEVEWGZASHTDWXLECNUMOKRIGUBFDXKNZWJJZYWZJFEKHIVOQLCYPZAWIDNTLUGQZTQSMCPRADTKNFWKHLPBODRXXAZWGUXSAUAMRSIRGCECVNCWMXWZOWUODJKHJEMNPRFDOHVOVQBLG");
    msg.description.assign("FSZGNTIGUTFLBZWRSIPCYBCZCXUZYOCQWNAJLZSPEFRGRJVGXMIHFSEGNWULWHZHPXYRZTOSRQTMBDAYMUXEVXDWSSOEOACUALHWAVJFOMMJAOVDGHNNVVBBGRNYRHDINETIEBPJQFKRSYDEYDVBF");
    msg.reference_frame = 25U;
    msg.leader_bank_lim = 0.35189099336654284;
    msg.leader_speed_min = 0.6373305553190587;
    msg.leader_speed_max = 0.16179178269727956;
    msg.leader_alt_min = 0.18060552574469024;
    msg.leader_alt_max = 0.41539626963075815;
    msg.pos_sim_err_lim = 0.9370269058947189;
    msg.pos_sim_err_wrn = 0.754935401928259;
    msg.pos_sim_err_timeout = 30552U;
    msg.converg_max = 0.9191475840697213;
    msg.converg_timeout = 32117U;
    msg.comms_timeout = 38617U;
    msg.turb_lim = 0.02071210763183451;
    msg.custom.assign("KNHBDBRYUUMDRMKJISHKRVQBJCUKIQSSQGSNMTJDCIEDKTDAJWUHHBMNJEHUFLRKRWCOPJOGJEVFXOUYXZIIHLYBXDEEFEFRCELXCUZEXGEAOSDOBNRVTLSKAKVNTGHOQSAHBWLFPCYLWPRAVFZTMTFLGTFYPLJSUJZQFMDBXYWQEGMTXGYHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.04561306089948969);
    msg.setSource(34189U);
    msg.setSourceEntity(185U);
    msg.setDestination(57848U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("TVBMEBPZPRFXIQBDYTAOHGLMSWGLRRRTJ");
    msg.type = 242U;
    msg.op = 0U;
    msg.group_name.assign("TFSRUDTQNMXLEXMCPSUZWERSTKEQBAXVADGPLQESSRZEUOJTRHUDDIROHHCOITCNJCIVJHGNIBWKADAWVZGTMPZPVBKVLUDXRDHAYJMGHRALHHKMDSVPIQQWMEDGOYMJZYYTP");
    msg.plan_id.assign("WVIPFSCXFFWSXDBPARQPBNIGQLHHUTXQKGYHFSRPHMJJTFLIKBOEDRLZAAWINKYHGYYUZFNDGGGINWQBTSEEXNOWMOWETEYOWLSJBTYUOZMPVMAMXNMTCZVUGIFTZEBSPEOLKTGULPHUKFDCQYRFHJCVAARXBD");
    msg.description.assign("GAQDDUTLMEHCCFXAYQWOPFTCGQRRHMQWIBLFZULKZKMPOAZGMJWCQVGVBNFGHOYKJZGOWADGCTAPHBMQTVBXTQRLVIRBSLYNNOCPCEHO");
    msg.reference_frame = 241U;
    msg.leader_bank_lim = 0.6771365428098425;
    msg.leader_speed_min = 0.2729822142249603;
    msg.leader_speed_max = 0.6631588172333929;
    msg.leader_alt_min = 0.19746731082462154;
    msg.leader_alt_max = 0.26626396602287794;
    msg.pos_sim_err_lim = 0.28759292439807316;
    msg.pos_sim_err_wrn = 0.5355810388515984;
    msg.pos_sim_err_timeout = 64442U;
    msg.converg_max = 0.40633689113409066;
    msg.converg_timeout = 54117U;
    msg.comms_timeout = 54590U;
    msg.turb_lim = 0.6262352996833715;
    msg.custom.assign("GEUPFTFBQGEKQXQVZUOAZPHRZOUUFXWKVPQBRVMZFIVLIRSMDSHPRIUDJSCAQPMZCNJBXXSMZONSWWJHOKTJDKDZJZQUHRBULKSLWQCLDCFKIGHMJCNAJXVYHMIECDWSBKYGAONTJLEYYOPPTIEYRFBGUEKYMUORVTYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.33405427605941573);
    msg.setSource(8115U);
    msg.setSourceEntity(200U);
    msg.setDestination(12078U);
    msg.setDestinationEntity(68U);
    msg.timeout = 3968U;
    msg.lat = 0.9909024189849839;
    msg.lon = 0.1225181584376418;
    msg.z = 0.4062413919294128;
    msg.z_units = 187U;
    msg.speed = 0.9245082611879986;
    msg.speed_units = 217U;
    msg.custom.assign("UUJXWSVYUYNQVMEBJKYPQSTCBFKRBWDMQWLOLGBGZOSGMAFAUUGBGFYVXYHVGROZHUEPCUFAHGOKEVVIYFODMDWRQZJGNJIRIASWWEPXUHKCCAUQSNTIGCQDPPDTDQDLBZHNIYFTFXJSJABTVLPFMXNLCDZMZQQCAHVPYTEXTBKZLRRCWHOKKIXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.3969316690561069);
    msg.setSource(47733U);
    msg.setSourceEntity(200U);
    msg.setDestination(17066U);
    msg.setDestinationEntity(203U);
    msg.timeout = 3192U;
    msg.lat = 0.8955600447874189;
    msg.lon = 0.05536522040120839;
    msg.z = 0.5785650905559963;
    msg.z_units = 105U;
    msg.speed = 0.7453693258432008;
    msg.speed_units = 139U;
    msg.custom.assign("LUAEYQVCQZFJJXEGPPUJYRRUWSXRSWWUBFXGTQHCKAIVUWPNWVCCSFGYIADKEUSOYVMHBDHMEICPSECQDOFFLPCBHDYNYDAPDMZTPEWJFNKJJM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.1806872177963995);
    msg.setSource(41907U);
    msg.setSourceEntity(101U);
    msg.setDestination(25563U);
    msg.setDestinationEntity(42U);
    msg.timeout = 15941U;
    msg.lat = 0.6777523927920158;
    msg.lon = 0.8366700745824162;
    msg.z = 0.3001844631751879;
    msg.z_units = 165U;
    msg.speed = 0.4070152640428698;
    msg.speed_units = 208U;
    msg.custom.assign("FAYKQMJNZFWNMPAUYHGNMJGFOCGXXSGJEVCWYJAQZEXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.3703832685701105);
    msg.setSource(30787U);
    msg.setSourceEntity(221U);
    msg.setDestination(14085U);
    msg.setDestinationEntity(32U);
    msg.timeout = 59940U;
    msg.lat = 0.61612294480242;
    msg.lon = 0.8720052043244667;
    msg.z = 0.38955017708650064;
    msg.z_units = 197U;
    msg.speed = 0.5897372860931025;
    msg.speed_units = 171U;
    msg.custom.assign("JEMDFNPTTLCZKHIKDLKYAIOSXWUQEGUTKZQGXERJXVVGOJELXLGRDZMWLVFHSPTIZWIXQPWUOTSECJYVHEWNQUZZBWORMGSRMYHGNFURXBRAYNNWIPEBMMKNKVHCVIVHDJSIWVAAPYKBEVMXYOWZRKUBYBBXZFGACISDJLUEJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.6574648428040595);
    msg.setSource(16488U);
    msg.setSourceEntity(213U);
    msg.setDestination(34462U);
    msg.setDestinationEntity(48U);
    msg.timeout = 10253U;
    msg.lat = 0.8159309650200107;
    msg.lon = 0.533956421010689;
    msg.z = 0.49768993299889663;
    msg.z_units = 117U;
    msg.speed = 0.21510299205613492;
    msg.speed_units = 109U;
    msg.custom.assign("SNEUDTRZTRPGBMMIWDRSFIPRZNUQHOBKOJPVHXPEWCGILOQYSSQTIOBDMLNOVMSYJKZJFNZXCFCHSVGZAFDPKLNNKLHOFEXADZAUTMUPIWRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.23626930826747683);
    msg.setSource(57379U);
    msg.setSourceEntity(225U);
    msg.setDestination(9478U);
    msg.setDestinationEntity(108U);
    msg.timeout = 30940U;
    msg.lat = 0.26490103420942734;
    msg.lon = 0.5943162259380602;
    msg.z = 0.8660565471519083;
    msg.z_units = 205U;
    msg.speed = 0.9151096813004868;
    msg.speed_units = 157U;
    msg.custom.assign("SYKYNCPZPUGDOHGGTPJFKMMTJVEFWIFZTMDZYSNWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.294252804513638);
    msg.setSource(3099U);
    msg.setSourceEntity(246U);
    msg.setDestination(21582U);
    msg.setDestinationEntity(204U);
    msg.arrival_time = 0.5165760988997594;
    msg.lat = 0.5774284072678938;
    msg.lon = 0.196571590536901;
    msg.z = 0.09565244327977307;
    msg.z_units = 101U;
    msg.travel_z = 0.7662696267798259;
    msg.travel_z_units = 227U;
    msg.delayed = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.6795638385568948);
    msg.setSource(45450U);
    msg.setSourceEntity(43U);
    msg.setDestination(3837U);
    msg.setDestinationEntity(119U);
    msg.arrival_time = 0.5317525745057167;
    msg.lat = 0.22008417815074288;
    msg.lon = 0.14752789329892124;
    msg.z = 0.8340100459348052;
    msg.z_units = 45U;
    msg.travel_z = 0.7924489274241586;
    msg.travel_z_units = 89U;
    msg.delayed = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.36425330585938986);
    msg.setSource(33561U);
    msg.setSourceEntity(92U);
    msg.setDestination(30211U);
    msg.setDestinationEntity(117U);
    msg.arrival_time = 0.14346410592754066;
    msg.lat = 0.2604284166497719;
    msg.lon = 0.24683399149495078;
    msg.z = 0.7346562008891256;
    msg.z_units = 67U;
    msg.travel_z = 0.28935343835410343;
    msg.travel_z_units = 94U;
    msg.delayed = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.38008817488833313);
    msg.setSource(20483U);
    msg.setSourceEntity(49U);
    msg.setDestination(30483U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.21493008546904258;
    msg.lon = 0.32840031359573063;
    msg.z = 0.1643844788411658;
    msg.z_units = 98U;
    msg.speed = 0.9412331109433231;
    msg.speed_units = 197U;
    msg.bearing = 0.26917351426572933;
    msg.cross_angle = 0.81657231216093;
    msg.width = 0.4897734216755545;
    msg.length = 0.9373837538055227;
    msg.coff = 60U;
    msg.angaperture = 0.9931800816655999;
    msg.range = 50434U;
    msg.overlap = 156U;
    msg.flags = 60U;
    msg.custom.assign("USAXJALFDVNPHHRLECPBVVIWGYDDMTBRPBSFKAXLNAMXZOKFUYLNSQLNCHXUNPQZOBJMTUKRZLJVJKRTSROKRCXGOCOKWYJAAVNKBIAAZNFKSVZQESDDWYEBUWPUNMBDLKDOCBEBVEBQITOTQKWCHXUWIXMQYZHRJICSULHGMQCGVHYPIGGCAHSZPPRQYOMJMSTGAFFINDDUOTFRNVLEOHGRPTJUSZJCIWDHQFFIWZMXEJZFTWXTXGEMV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.58744335492605);
    msg.setSource(36291U);
    msg.setSourceEntity(37U);
    msg.setDestination(235U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.9919491385184904;
    msg.lon = 0.9632338240032893;
    msg.z = 0.4572867314058995;
    msg.z_units = 135U;
    msg.speed = 0.8756570210165033;
    msg.speed_units = 186U;
    msg.bearing = 0.9862825056680151;
    msg.cross_angle = 0.18520552659742218;
    msg.width = 0.904667743349881;
    msg.length = 0.33754387965229826;
    msg.coff = 227U;
    msg.angaperture = 0.0641248171303952;
    msg.range = 3970U;
    msg.overlap = 124U;
    msg.flags = 105U;
    msg.custom.assign("PEZGWULUTAGCBKABMFHNSXEAPTVHDMWJRXOJQFBXLDRFCLYQYVZEKNIMMBJQUYCUKXUYFDMVGTNCZWEDETKSEEZASZNOBXLOHVWMVQODGHZFSJISRUJWLBVKFZJVXCAPYAAIVBNIQRTLBJBWCPIPTRCUQVFHTHGVWJZAFBNWFTOUPKCPQKCDOXARYSKMRZTIWGMTUXQLRYNQPLANOGIGJUPQEHHZSPKLDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.6108830889560014);
    msg.setSource(25723U);
    msg.setSourceEntity(16U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.22514926516999523;
    msg.lon = 0.5209579469746419;
    msg.z = 0.446580033110933;
    msg.z_units = 8U;
    msg.speed = 0.9307938152491294;
    msg.speed_units = 61U;
    msg.bearing = 0.5341281662789341;
    msg.cross_angle = 0.23812848394272934;
    msg.width = 0.3994735704912874;
    msg.length = 0.5705578694434006;
    msg.coff = 142U;
    msg.angaperture = 0.5190610748618433;
    msg.range = 42873U;
    msg.overlap = 89U;
    msg.flags = 137U;
    msg.custom.assign("ZBPVFERXYHYILKETEHCAJWQMIKYVTUNSDWFOEGBIMOWXIJNZSAJCNHTKHWCQGURHOBEDJAMCNPPWDZSABCSTOGUBTTQLYMNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.25693548593239135);
    msg.setSource(9692U);
    msg.setSourceEntity(161U);
    msg.setDestination(39255U);
    msg.setDestinationEntity(76U);
    msg.timeout = 10002U;
    msg.lat = 0.5206053906606977;
    msg.lon = 0.6983165762046846;
    msg.z = 0.30269407287188865;
    msg.z_units = 90U;
    msg.speed = 0.19181079422688696;
    msg.speed_units = 186U;
    msg.syringe0 = 168U;
    msg.syringe1 = 187U;
    msg.syringe2 = 7U;
    msg.custom.assign("AJPTPBLPVMLFGVDFWVRPZDPKJEXXBSVSAVGHFFDMWJEROWBFASGEXBMZEXZOFILJKVLMCIATHHPKWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.10875022752361474);
    msg.setSource(61934U);
    msg.setSourceEntity(45U);
    msg.setDestination(19926U);
    msg.setDestinationEntity(202U);
    msg.timeout = 14392U;
    msg.lat = 0.6963592716780179;
    msg.lon = 0.09196857927964075;
    msg.z = 0.19163137567444677;
    msg.z_units = 211U;
    msg.speed = 0.8880438741839677;
    msg.speed_units = 19U;
    msg.syringe0 = 171U;
    msg.syringe1 = 242U;
    msg.syringe2 = 169U;
    msg.custom.assign("IQPMDKBNTLEDZONVQCXJKKUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.17548329975042243);
    msg.setSource(55842U);
    msg.setSourceEntity(105U);
    msg.setDestination(54661U);
    msg.setDestinationEntity(90U);
    msg.timeout = 15521U;
    msg.lat = 0.5492486599303232;
    msg.lon = 0.42578774692505694;
    msg.z = 0.11857929744236018;
    msg.z_units = 142U;
    msg.speed = 0.9307068303509247;
    msg.speed_units = 81U;
    msg.syringe0 = 83U;
    msg.syringe1 = 198U;
    msg.syringe2 = 89U;
    msg.custom.assign("HGEAZXVMXEAATPMFZGGZXLFENOFZJTEWGFWCKOCPTUYDREOXDNTIRYXBHIYBHYAYFTFSQYYVSHDAIUMJHUCLIDWVIBQFEPEQQAPECSXBQJIGMNROXDYFLKUTXLAJUPFGLKMPWGVOCZBLOWSRVRGHRJJYPUZJLDWOZTWCSAMQTSEZQLBQGDUDIRBKQVVUVSMCIUPONJWVCLKJVIKHAZRXPNNBIMMSAKKUNLHFZJSNSHPNDTRHKGXKRDQYMBWBTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.4052227017353386);
    msg.setSource(33756U);
    msg.setSourceEntity(102U);
    msg.setDestination(8528U);
    msg.setDestinationEntity(15U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.015020571276952221);
    msg.setSource(7506U);
    msg.setSourceEntity(11U);
    msg.setDestination(21751U);
    msg.setDestinationEntity(4U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.45284233148232533);
    msg.setSource(6308U);
    msg.setSourceEntity(124U);
    msg.setDestination(19780U);
    msg.setDestinationEntity(13U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.4626480023794426);
    msg.setSource(57210U);
    msg.setSourceEntity(228U);
    msg.setDestination(60119U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.16188030250426266;
    msg.lon = 0.9595601250721915;
    msg.z = 0.686383011788243;
    msg.z_units = 52U;
    msg.speed = 0.9849352413350361;
    msg.speed_units = 177U;
    msg.takeoff_pitch = 0.41458288772893614;
    msg.custom.assign("YHBQTTEBWRKVZINLNLNMNGBYTBMECMHLXHIHNVTWIEJOXVHCEJDHFDZLMKVFYJJWOXAGXYEYAJFZCMBHINUXXJSSCVPPUFTQRMAAESWNIRNOBHDWLIOODQCZVBWUKGFTBPOFKIJODXKQUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.19938052987989452);
    msg.setSource(18778U);
    msg.setSourceEntity(53U);
    msg.setDestination(9484U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.2640447312147506;
    msg.lon = 0.8568539585188503;
    msg.z = 0.9952340385252061;
    msg.z_units = 254U;
    msg.speed = 0.9939796060045628;
    msg.speed_units = 8U;
    msg.takeoff_pitch = 0.03354483991806534;
    msg.custom.assign("NSUSYLYNJEKXYCUIIEQPSODTXWCNPNQFVDMOMTEDAQBAVJIFQITTNUXYGQGLOGDPPBOPYRHVSBEWAICHLIONPMBOFFAJKQJMCALYGPXUVZJGXWWYZUTYXMDNECFYUMCIIUZRHGREZSNSMTGEWZHURIDLQHLLMVAHFUBDZEMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.8008586286851388);
    msg.setSource(43029U);
    msg.setSourceEntity(179U);
    msg.setDestination(60284U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.19793323377499594;
    msg.lon = 0.045273339762312625;
    msg.z = 0.8324837054283502;
    msg.z_units = 198U;
    msg.speed = 0.38215552326191704;
    msg.speed_units = 204U;
    msg.takeoff_pitch = 0.5601507001838328;
    msg.custom.assign("KJDJSWDISMWXSPTVLXCDEURXDFKXJZENHBAXSCKNKMVCDEGAPPYNZTFPQBYOMTBVSSHJLQUHFVZBILUOFEZRHXCCMOBHRPTDXIYPNOUWFUYFFNNLZYZGEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.3048236823878616);
    msg.setSource(8858U);
    msg.setSourceEntity(169U);
    msg.setDestination(49018U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.6580123970574328;
    msg.lon = 0.5093607173408657;
    msg.z = 0.6074016608739654;
    msg.z_units = 160U;
    msg.speed = 0.7600927032438298;
    msg.speed_units = 19U;
    msg.abort_z = 0.0080332772927455;
    msg.bearing = 0.281582793030696;
    msg.glide_slope = 174U;
    msg.glide_slope_alt = 0.5020692624432824;
    msg.custom.assign("JQZIEYPUISSVCPZUJLVRYENAORMJBKVOBHWBEPUJXKSYKGNUOWQTPIGOCRGSFRSALDZFZWRHQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.502008214567569);
    msg.setSource(63141U);
    msg.setSourceEntity(189U);
    msg.setDestination(44184U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.1521010846294334;
    msg.lon = 0.4966697944253685;
    msg.z = 0.9067246883326019;
    msg.z_units = 75U;
    msg.speed = 0.534662008854629;
    msg.speed_units = 141U;
    msg.abort_z = 0.9970907836508311;
    msg.bearing = 0.37828194044301455;
    msg.glide_slope = 193U;
    msg.glide_slope_alt = 0.1452322803010062;
    msg.custom.assign("BCHTWBHYLTPHLRTFMTOQREXGSCMLKGIDQWUGFMMPSZLYEJONDHSVCRTKZYDSDVEXCJZSOKMGQNAWYFBAZPFWVUQCSOLRPEEPJUIQCFEDFCWTLLAAVLARMQI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.3663556950754868);
    msg.setSource(60854U);
    msg.setSourceEntity(58U);
    msg.setDestination(24146U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.6637320238280457;
    msg.lon = 0.562331239507151;
    msg.z = 0.7317084213717011;
    msg.z_units = 198U;
    msg.speed = 0.7709609981130905;
    msg.speed_units = 8U;
    msg.abort_z = 0.7257101386135488;
    msg.bearing = 0.7409469153057333;
    msg.glide_slope = 57U;
    msg.glide_slope_alt = 0.8874456407109215;
    msg.custom.assign("XUAMFOVYOIQGOVTPSDMKLOGHVRTMFNYRVAPFZSIIZGLQJKKSHUEMJPPLSKKHSXQLDNJCWDAMGHCWYKNGULKFDWCSIWOTNRQNPZBAVVSEWPKCFFYNTGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.5178290258142146);
    msg.setSource(24613U);
    msg.setSourceEntity(195U);
    msg.setDestination(1084U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.6276230248879298;
    msg.lon = 0.7987627585031526;
    msg.speed = 0.18154259311666276;
    msg.speed_units = 213U;
    msg.limits = 37U;
    msg.max_depth = 0.5047896823586017;
    msg.min_alt = 0.06469390059317837;
    msg.time_limit = 0.03423365922371835;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9447457428698873;
    tmp_msg_0.lon = 0.8757544090386811;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MLPMAWBWLUWDQATYSBQPFZTSYJJFWNEZOARAXDWIOJDGGMISKKJIBHMEKUCRVBUGVTCXLGFFWKDAQAGNLEGFJWHGQXTYITZOYRHFYLHSCENLIITDARXXUMCGVPZOKSJUPHUX");
    msg.custom.assign("KSRISJREIXWMZLMYVEPADCHHHHOZWLXXXLOUWKYDPCWFMRGANYCCVDAABGXJYTBMPRRKLONFIDRAUUWGDBQPPEOUYKAKCIYYCDESSVYMVXFWGBFLHZGUZFMLNXLVHDHDKSIOOTIGMBJAPSFQCUMTKNSTQGHQEOAPLGMRQFXKVBDAPTWENFNTJDLXNWOZSNXFVJJOUUQEWCBREJIOBIEVZLGTBJZHVSQGKSTWPVZEQBMUCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.8540541161836076);
    msg.setSource(1893U);
    msg.setSourceEntity(230U);
    msg.setDestination(57312U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.54124198454719;
    msg.lon = 0.6029142458279859;
    msg.speed = 0.9124248780628781;
    msg.speed_units = 173U;
    msg.limits = 38U;
    msg.max_depth = 0.557453832707518;
    msg.min_alt = 0.6653530370433757;
    msg.time_limit = 0.8228511609004302;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5625320130118128;
    tmp_msg_0.lon = 0.14654442504440746;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("BYJNWYHMPOFNWJGWUCHPLSXAAYSDXDGBCXJMORVUTQCWUTSITZYSRTGKECBJDAZJQWDGRHIHESNAEXBJQVTBVFNAQMIIWRAOXGQEPPWFQDNOEHVRSUWBKYGDZJIRRNHDTOVZCCBIWEGDSFAOIGTVMOXGKXKELQUXADMELFZOFQDSIFYSYPMHRYJHHUBVCAPBTXNTZXFQNVUULRKJPWBVKRJZPOIILTCS");
    msg.custom.assign("JZQYSRUUHYOMAHKIAPENBHFQRSETVDSCZHLDLIUNXEXJMKMVKDMEKCTWDKDQWBJKRVYLMYVHVLQCRYCCSGTGZNBAOBTNLEMQXWWMWNHXQJGGUGLNNTIAOUPAZROTMHXAZROGIEDQWDXZEWBSLPWADCHSLIZEOBNXRPTJXYGYTMRVOWXUORDNPFPRZJYLUCSPVFGTHCOVIEIFJKASFWEKIGIZVKQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.0732400272478857);
    msg.setSource(55615U);
    msg.setSourceEntity(92U);
    msg.setDestination(5453U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.8895783667250902;
    msg.lon = 0.390016424527194;
    msg.speed = 0.4308583615175591;
    msg.speed_units = 198U;
    msg.limits = 148U;
    msg.max_depth = 0.33823924849624143;
    msg.min_alt = 0.6853995379752019;
    msg.time_limit = 0.8693262883087901;
    msg.controller.assign("FSGRUZMBFVNGDJRRDLIPAVNTUPFUKCGQTQXWDPFVXFJVUUXASQMETJKZDOHVZBWAYMJQIZAHENOGHFKNCVOYWKDPEYSERXHHQUALBZVBAYMHTZZSSGNLKCTICUVXKSBTHJY");
    msg.custom.assign("SKOYAMTGIPEKZBPQSEXWRIDENSSMJPGHLSKXCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.02103777808496743);
    msg.setSource(53278U);
    msg.setSourceEntity(249U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(215U);
    msg.target.assign("IWQGRDJGFIMUKNFLFQUGHKFINOBHSDZSXKTVREDUXOSTWWRJBVELDGQSNFPAKTSONVFJJARMGMHMOVCXKHMUSRDJUBWGHNZHKEZPSFETXEGUDIOTGFXXKQIPBWHBPMOVJCDCQLIBZEZKXLWJUOZTLBOTPYGDPBNNIQYRZMCHLNVZOQAPWESFDGE");
    msg.max_speed = 0.5525800629955969;
    msg.speed_units = 109U;
    msg.lat = 0.01955501723797959;
    msg.lon = 0.6181802820714569;
    msg.z = 0.3406315142784492;
    msg.z_units = 109U;
    msg.custom.assign("ZNEQMLXDIITYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.515782775245303);
    msg.setSource(19297U);
    msg.setSourceEntity(91U);
    msg.setDestination(47052U);
    msg.setDestinationEntity(26U);
    msg.target.assign("GBDOHRMIDAKAOUANWXEJPCRLTXZGHPUWBAIDWVSQUZDTRAHKVSNTWKWWNWZTQCMPCFZQNCOLWRCNKRLUJRJOIXJTPPLQVQCELECSVJIUCARXPDBDKMOTPYUSSMANCRGRQSOHNEETYDBRFBXLGIQUYOEQVMYDOELFIHDBMQSZBJOBYZWGNIVANUIUHBFFCXSZWGAXLFHPVVQGKMYTETBDKYXVTFEKGFUKYZPMLGY");
    msg.max_speed = 0.5311550515492873;
    msg.speed_units = 173U;
    msg.lat = 0.5320204471245451;
    msg.lon = 0.7990873328741043;
    msg.z = 0.7507211280348788;
    msg.z_units = 180U;
    msg.custom.assign("OXGEQEDQUJWNWEPDIPUYZVDWRJFAMGTMPYTRARTJEJVHXKUZRXSCJXCARJGPRZIQIUKAVIOCBMLWNNNEVCHAKTYCQKTLJEFFBCXSMHZXDYTFADYHCGUIRXHOYAGRKAXOQYHLTKBBMDSUSALTVIBNDOFQBIBRZMQNYXDHSKLONNVHSZSXMHSQIZUMYZFMFIUBPEYZPLTWDBLFFLDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.49834252610634944);
    msg.setSource(39588U);
    msg.setSourceEntity(211U);
    msg.setDestination(38747U);
    msg.setDestinationEntity(233U);
    msg.target.assign("IJYZUPOPKKRQMMPUFKAGGCNQKXTTLRRUMFJZWMWSSKILDHEZSOWMBCUQFJMNVRRXESIXRPHETMEWUBXQXKCSRPBTOXQPHPZOWYWZNTVUPCWSVXTKBLHKJZJSDQLTJALQFVDSDQYRRNVAGYYICBKNNAMTAFUXNLTBHGCIFGSHHACXEIYGYLUHADQFEMVCDFTBHQUY");
    msg.max_speed = 0.6933552165363123;
    msg.speed_units = 138U;
    msg.lat = 0.3177810617911646;
    msg.lon = 0.9023921561820165;
    msg.z = 0.6464032438408363;
    msg.z_units = 32U;
    msg.custom.assign("CNBLUYTDGUYAZGRVMOHNRRKHAYPWRIQXJQTISONZWAMFBCAZZTFMQIOSOBRJFSMIMFBZSHSXEGEEIHLRXJNBARVMLEVUCKRQTYVSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.5690264402186918);
    msg.setSource(25631U);
    msg.setSourceEntity(224U);
    msg.setDestination(43376U);
    msg.setDestinationEntity(24U);
    msg.timeout = 34670U;
    msg.lat = 0.7016876693779233;
    msg.lon = 0.9096309009083566;
    msg.speed = 0.5982266420823329;
    msg.speed_units = 67U;
    msg.custom.assign("LBPINGYTBQNPXLKZTJFAADJOKSMPUHXUIFDUVPTFACCIKSUVQNAWDWJGFQRHROEGLIVWHUVYJTKNISTEXQVXXUPNJUYOZYQQLDPGENZJSTTAUBZAGSYEHIORBLFEDKHKVECOLXMLVZCCDKYFLSJYBAKXONEIKETGPVFQBIBGEMBMXSMHZMMRXPCPDSCWHPWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.6748564789556799);
    msg.setSource(29700U);
    msg.setSourceEntity(6U);
    msg.setDestination(19771U);
    msg.setDestinationEntity(123U);
    msg.timeout = 64521U;
    msg.lat = 0.8932369041288991;
    msg.lon = 0.041526921221189506;
    msg.speed = 0.715366911678554;
    msg.speed_units = 14U;
    msg.custom.assign("STEULCNBXHRSGQJIMEENZIVQAROFQETAAXKPDYIXPRMPOVBJLTBYZWJJQPKBOZSASNUGANPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.35630929216183926);
    msg.setSource(43971U);
    msg.setSourceEntity(38U);
    msg.setDestination(38777U);
    msg.setDestinationEntity(132U);
    msg.timeout = 7065U;
    msg.lat = 0.6236642583342905;
    msg.lon = 0.45499039073002445;
    msg.speed = 0.8201148405437547;
    msg.speed_units = 109U;
    msg.custom.assign("RQJIFZYUQKOSJNQFCUBBRRNOAPVYTTIGDXMJJJNTEZUUSXWEWBBQLHTJESPZQRFZAWCAIDLHTGZAKVHBKEHPVKVMYNWVVYYETOFYONUFXTQXABGCLKMHCEMRWHAHPBWSUHMLLXFUMVGITVVZCSARGDXGKJFKJDNESCXATICWOPPSXAPWDGMMEQIRCDPQZRUZLMDDHEMSILSYCNWOBGKITRYRNQOFOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.06524739680896596);
    msg.setSource(16878U);
    msg.setSourceEntity(224U);
    msg.setDestination(49985U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.5835466156656481;
    msg.lon = 0.218234644993192;
    msg.z = 0.19808821982157498;
    msg.z_units = 55U;
    msg.radius = 0.5246831616667526;
    msg.duration = 8576U;
    msg.speed = 0.30558983504711323;
    msg.speed_units = 76U;
    msg.popup_period = 18044U;
    msg.popup_duration = 51166U;
    msg.flags = 241U;
    msg.custom.assign("KPAWJTBMYBKRCICUTWVSZEWKWYLIRMHZLREOPPZYYGEOQSVQCKANBRGVTUPSCBDXHDGZMKAHLLMBVJIPDHDVIFAXEYDSOIUMXTGIJYZUTYHWMWUTZGUXTZQXYGLUOTPBBBRXQFNIROODENQFFQFKPPKIPAENHINCOMLHXNCGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.19650804294094637);
    msg.setSource(55552U);
    msg.setSourceEntity(220U);
    msg.setDestination(54482U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.5182349880146518;
    msg.lon = 0.11669293529978675;
    msg.z = 0.035621575135688976;
    msg.z_units = 35U;
    msg.radius = 0.4562115151033731;
    msg.duration = 23151U;
    msg.speed = 0.9233792748274375;
    msg.speed_units = 148U;
    msg.popup_period = 17441U;
    msg.popup_duration = 64950U;
    msg.flags = 204U;
    msg.custom.assign("TZPUIPTCMEANOSGBQIIJUMCKMSFQGNXMQLBMIYKDIHODCHAUKBOTRHQJQXVYSYPXDWBZKTBQCYPFHURLGBTRYEETWYXYSKHXBCKGBVOBZPPFSJVDRFXWHDOWZGNANLULOATJANZCEKAWIKFWJDRUCLDVOTEGRRSQVREZJCJUCGDYFLYTAEOSOPSJVKHZQVAXFHIAECNEGMMRXNMUYQGNXLWOVJFNHWUHPTISZWGWZDDVQKVLF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.36977073652489256);
    msg.setSource(605U);
    msg.setSourceEntity(56U);
    msg.setDestination(21456U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.0756768540273588;
    msg.lon = 0.32804228887020137;
    msg.z = 0.2007062739711315;
    msg.z_units = 38U;
    msg.radius = 0.05050281076481089;
    msg.duration = 16825U;
    msg.speed = 0.04292825156850821;
    msg.speed_units = 158U;
    msg.popup_period = 6403U;
    msg.popup_duration = 59119U;
    msg.flags = 188U;
    msg.custom.assign("PENKBDWKHGZBMKYSLYVNOFCXRGBXZVEHWBQQHJAVDEFSEBVQAJRFQSOWMMETLDOIGHYQYSSZBXZIEPXZXLBHWJITJJYYGKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.5706345432348308);
    msg.setSource(4645U);
    msg.setSourceEntity(199U);
    msg.setDestination(33897U);
    msg.setDestinationEntity(126U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.9776138223394565);
    msg.setSource(34695U);
    msg.setSourceEntity(71U);
    msg.setDestination(22717U);
    msg.setDestinationEntity(121U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.5571473752286874);
    msg.setSource(45264U);
    msg.setSourceEntity(96U);
    msg.setDestination(28679U);
    msg.setDestinationEntity(85U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.771633607445387);
    msg.setSource(23718U);
    msg.setSourceEntity(149U);
    msg.setDestination(57525U);
    msg.setDestinationEntity(35U);
    msg.timeout = 34100U;
    msg.lat = 0.830971039627062;
    msg.lon = 0.35735567725839334;
    msg.z = 0.1009704858546876;
    msg.z_units = 45U;
    msg.speed = 0.3594452428247292;
    msg.speed_units = 217U;
    msg.bearing = 0.04133734538381162;
    msg.width = 0.2887632558452742;
    msg.direction = 54U;
    msg.custom.assign("TUQODDLTPZABYKDSTVRJOQPRJWTIJKYRESWHYZJFCSLOMJQXWQNXUDAOCJBVVKEKARAGDPDFPPHSQIBMAAEVVOXHQNVTEKBNECUAZENLERENNYBGIDPIMOMPYHWKHSGUHWMYWGVLVZQPROFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.02960910084744295);
    msg.setSource(258U);
    msg.setSourceEntity(126U);
    msg.setDestination(31402U);
    msg.setDestinationEntity(212U);
    msg.timeout = 20022U;
    msg.lat = 0.5797587947671103;
    msg.lon = 0.38781308491898037;
    msg.z = 0.9825583246461378;
    msg.z_units = 43U;
    msg.speed = 0.6145549227518724;
    msg.speed_units = 107U;
    msg.bearing = 0.45480228822310687;
    msg.width = 0.826468207889325;
    msg.direction = 187U;
    msg.custom.assign("RWZUTQGODIVLNPYHAXLCMYTKPRHYTTHVIJNMAXQXQIOCHGLBDTKSCPLSXCQZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.21402065418975735);
    msg.setSource(52733U);
    msg.setSourceEntity(183U);
    msg.setDestination(2510U);
    msg.setDestinationEntity(223U);
    msg.timeout = 20389U;
    msg.lat = 0.46308850964915205;
    msg.lon = 0.46011418109019353;
    msg.z = 0.037483890548706156;
    msg.z_units = 244U;
    msg.speed = 0.18370264840282302;
    msg.speed_units = 42U;
    msg.bearing = 0.012449468218884374;
    msg.width = 0.6160475983927994;
    msg.direction = 237U;
    msg.custom.assign("TBAVCZDMOBVNJLCGIZFDBYKENPOZGBCFAXNECLEQLPQIJNYWODPQXPZYIWUZUHVQRCJDDDDBUYEVSPVMWUCTXIWASMPFGFYLARRHGICFMMDCIOXJUHNHZMOFUMWTWEAFGILYQSOISVOGCXPBWFKWXHOHGMALPONIXYPZNSYKRVRLTNUVSQHORTKJHLRUMIJNKSGZNQQXZJBFLRJWHSSWKUBYYKTSDKLGXEZQATKUEEEMTKBJHJVTFGXCDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.6618282735313186);
    msg.setSource(8941U);
    msg.setSourceEntity(107U);
    msg.setDestination(25323U);
    msg.setDestinationEntity(245U);
    msg.op_mode = 241U;
    msg.error_count = 2U;
    msg.error_ents.assign("ABLOERNTIKVOVYLXTHDSDPQWIXFDMRNBOQHAIWJCJDUUVSRSHTYMTOYQMIBBXVJVTGCPFUGMNVKMEGDAPZNUUOYYOFZYRPQNIKNSQGLDSQZUJKKTPWEHSHEIHTAGKEPBYXEAPOCEGZRDR");
    msg.maneuver_type = 21563U;
    msg.maneuver_stime = 0.17090818246090622;
    msg.maneuver_eta = 14856U;
    msg.control_loops = 1880899252U;
    msg.flags = 173U;
    msg.last_error.assign("CBLEJXMWXGDWBHBLCNASDWQBTBXRYIJUKQONHNGPXPQEPZEEYPOYIFKTXGSIAQUKEOEANTCDGKFWDGBTRVZLRFUJJFYFQDTUCRWLNBHGYMALQPIQGMAVDGFCHEBBWDVQHIMZBDKRUWLLKGVNURNUAVSEVFJOSCAQHPMRNOJIXUPQYSVZ");
    msg.last_error_time = 0.025242277263960444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.8969062621993233);
    msg.setSource(22281U);
    msg.setSourceEntity(205U);
    msg.setDestination(55024U);
    msg.setDestinationEntity(233U);
    msg.op_mode = 194U;
    msg.error_count = 195U;
    msg.error_ents.assign("LKJIHZWFHNKXQEOIFWSJKRSHEUGLJMNRECQLTXUZRCJLEPQFLMFYWUXIWLHPINGAGJQUUHRFRZLBTNJJSIADFKSNYMJWQYSFVTACHVHQIKJUYDANVSKKHCOGUWDNKBTVLGXDABOPXZGIMRBJF");
    msg.maneuver_type = 44147U;
    msg.maneuver_stime = 0.6116730567678121;
    msg.maneuver_eta = 48726U;
    msg.control_loops = 2685464896U;
    msg.flags = 25U;
    msg.last_error.assign("QQESQDSQYBMNKTLRXPCGVBOKZZEUKVXUCNMKQYBRWAHVDWPSSUJFESYGFOEHATRTHVWPLDIHKRGIGWXZNCTYBDHCPJLOTFWQFXXMGUOULKUXGPCDWWEVQCMJIHLGPHJZKASK");
    msg.last_error_time = 0.040753085622205254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.38151179772967525);
    msg.setSource(14088U);
    msg.setSourceEntity(23U);
    msg.setDestination(20629U);
    msg.setDestinationEntity(56U);
    msg.op_mode = 79U;
    msg.error_count = 209U;
    msg.error_ents.assign("GLPPDOABFFCVEQYMPSXQLDWHI");
    msg.maneuver_type = 12721U;
    msg.maneuver_stime = 0.28215750988600397;
    msg.maneuver_eta = 45633U;
    msg.control_loops = 1489791386U;
    msg.flags = 137U;
    msg.last_error.assign("GYMPZJSZOVXGVGWMFGGULQYUOIFULQOUGOSUZPCIRSYEZFWKFMBMEMDELMSVCIJVQDXCNKTHQVLIHRAYJHKGVVYJAKOUOTVTZSRUDNUIEBFESBWWYCWBINBPQOKCIXZLZZNHPXCWNHJKAKTDRFFDDGJHDDOFBDJVRQXWBSMXCMEGNQYAAEURLFQPERSNITWTAJFAGJPAJVMSPKYYPN");
    msg.last_error_time = 0.9298011446595572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.9683011012105991);
    msg.setSource(59144U);
    msg.setSourceEntity(163U);
    msg.setDestination(41218U);
    msg.setDestinationEntity(144U);
    msg.type = 56U;
    msg.request_id = 27094U;
    msg.command = 241U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 47118U;
    tmp_msg_0.lat = 0.28391319139019167;
    tmp_msg_0.lon = 0.8434991725534355;
    tmp_msg_0.z = 0.9207044236554991;
    tmp_msg_0.z_units = 253U;
    tmp_msg_0.duration = 16361U;
    tmp_msg_0.speed = 0.93478915883601;
    tmp_msg_0.speed_units = 52U;
    tmp_msg_0.type = 3U;
    tmp_msg_0.radius = 0.48318114484231944;
    tmp_msg_0.length = 0.4975485261555459;
    tmp_msg_0.bearing = 0.0046539698959553455;
    tmp_msg_0.direction = 116U;
    tmp_msg_0.custom.assign("CSHHRCLTKIPQODYQJDMGPAUEGXUZELNPYUOJMAEBQUQNCHXKYMNZSTYQDWACIIWFTSJJYDFZFMEGKSCLZDJKQQRFIALATUSYLHVUMYOVVXDCFTWJROWNDRKWBXUVLXNYMYIIXPTZRMHZGBHJQMOHROUJEOIEHXAYBBAFAZBOKKFPJNWVGPNLNLRREXWGCCSOFWSLSSKAEZG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3028U;
    msg.info.assign("REBLYJHQCGDWTKJMPAXFXFFUUOUMYVCQGHIWNKTCLFLKJAPASUWUWWLBPVTCGNMAHAORDZTOWFZRYNNBVXIJOUQJSEEHFNDASOZKCGQKHIUSPJRBDXHSOZGXACKZGMHYWZOBYSXQNPMSTNEDEQVOBLSVLSKITXMWQVMKDCYZCVHGDJTVBLMIXHNURGARJIPRRMTPDIA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.428490259529658);
    msg.setSource(19569U);
    msg.setSourceEntity(159U);
    msg.setDestination(18182U);
    msg.setDestinationEntity(91U);
    msg.type = 122U;
    msg.request_id = 11319U;
    msg.command = 147U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 50003U;
    tmp_msg_0.lat = 0.295603537964682;
    tmp_msg_0.lon = 0.6886723469780515;
    tmp_msg_0.z = 0.8790168500289447;
    tmp_msg_0.z_units = 171U;
    tmp_msg_0.speed = 0.8819633500042015;
    tmp_msg_0.speed_units = 228U;
    tmp_msg_0.duration = 59789U;
    tmp_msg_0.radius = 0.8876003747974822;
    tmp_msg_0.flags = 61U;
    tmp_msg_0.custom.assign("CJCVOTHGKJQSBBNRIJOIHGYAZYBDLTQFDTKEGUTNQYUQKCPZQRXIJJNVAXPCXOKRLCIEHHHMMZTLVXAKGURYBLGWPXJEZIEBNUNPBASMLWSUQHSFXEWEYCTDMFHOFSFLJDKDJVB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52917U;
    msg.info.assign("SORDLCTQLUPLGSKRMSSQNOJHOGTKFHTUEKMDLYLGFUMACACKICZEEVXSKVXUVYJBJRABZHDHZDYOIZWBIOQJRZHDSLIGNKCWOEUPPHVSOOLXFXRODTBRXYZABEHYPTJJXJZZWHOKAVMZHQQXDSPYQFYAVQEMNFXIESGMVPWEFFNPLPYCBNQAWBCWVUZJGGNIEVJBINECGPTRDYGHTFNCTPFRNCMUTDXWBBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.4956673676789819);
    msg.setSource(1392U);
    msg.setSourceEntity(186U);
    msg.setDestination(63515U);
    msg.setDestinationEntity(9U);
    msg.type = 64U;
    msg.request_id = 16774U;
    msg.command = 170U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.7192225457871162;
    tmp_msg_0.lon = 0.5245509405040234;
    tmp_msg_0.z = 0.4132529443147539;
    tmp_msg_0.z_units = 227U;
    tmp_msg_0.speed = 0.003069709647304353;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.takeoff_pitch = 0.08448277447795727;
    tmp_msg_0.custom.assign("BGZSUYGXUEIWTTJIYJDPUP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16259U;
    msg.info.assign("FABKHPKEBPMGMVKZZIOSDPWIGBVKZBOPSPHTUIPZMEZWSATGFHHFYQYPVWQDCUCLGSJNRGISYEYGHQJUCHLFXEBTIRZYWJOCXMVXDKOCADIMDTEXKCQFMAQMEDONRFBLMAZWJJYOLIICRRZEUNJSEAOBXWVMYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.5204803702523103);
    msg.setSource(36312U);
    msg.setSourceEntity(27U);
    msg.setDestination(15317U);
    msg.setDestinationEntity(90U);
    msg.command = 117U;
    msg.entities.assign("UVUAEVWCSNRNCWVXVYAOPPYFWNDOKXEFXGOIYUWHUHUEBZMSFGXOHJTERXNBEWZIOKGRZCXRABICZIGKWMLRYAJMKRUPQQTGJELWFFGMFWYPNKJQGOKZPFTTVKDILOLRADYCDBBTNFVSESMQPCJPDTPFAVQQSXZADLLSEIGXRBHBOOUMMGSDKIMOUWLNZMEUHCPTRIISYZHLLYNSJDQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.5438888760349255);
    msg.setSource(38835U);
    msg.setSourceEntity(48U);
    msg.setDestination(56966U);
    msg.setDestinationEntity(166U);
    msg.command = 228U;
    msg.entities.assign("HGTQALENJVKTIYEUDEJQGHSNSITAGMZMVYOLBYLGZFKAVQAVPDBRCUJDBMEYWUXUOHWCFDBVRJSYXBBFOSKHJAMAEHOSWJZQTVHCUKPXLUKKRXFCZCBXMYKPVCHRQUWCGDZZDIICWOPHSFTXAZGMPNVIRSGDSXLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.07884488751291485);
    msg.setSource(8420U);
    msg.setSourceEntity(109U);
    msg.setDestination(19922U);
    msg.setDestinationEntity(34U);
    msg.command = 123U;
    msg.entities.assign("JJYTFYOGFBIACQPQNRTSHRQGLIRJQDSWKZPPGXZTNPFOEKVIOQPMSGTWXZCZGEXHZDFIHBVLGZNKLDCWDBAYASJTXVUOKENPCQQIMYBIHPDHDVSUPTXUNDIMJJLWLVNJODUNHBLYGQYNOMESOAXPFENZKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.8511223963221537);
    msg.setSource(14727U);
    msg.setSourceEntity(31U);
    msg.setDestination(64928U);
    msg.setDestinationEntity(188U);
    msg.mcount = 170U;
    msg.mnames.assign("JMYUVFHUFIQPZGDGEXALYCIDSEGAWFWXYIWAESYPJWPTCBGTSJGQTAQDIQLHRHJDMMILUVWEMZDYREKOVEMOQKLZWKDFGPDAOINNFZTRJNBTQHMSFVKBGYIIQOKQAZNUOLUXBLCUZUCFLQPCCXYZHBAFCOXBNBKSFBDHXSQDWJRXRKVUCTVOYESPOBUAIHRWFTRJCNN");
    msg.ecount = 183U;
    msg.enames.assign("PGNGFXZCOUOXTSDLDGKYHKEFIYUIBGMQJHIRGRQBUSLPFMCIITNSTEWVURZMDWEJWLZAPYVCFWCTXBOWWZTKDVCQMELQSAEOMMIJCLOKVVPZXEGFBSHRBXZLHAJXFOYCPPBPVZOKRBPSZJDYJMINNQPRRITAQAKMTAFKQGFUOHDUHVOLSBTHGNU");
    msg.ccount = 165U;
    msg.cnames.assign("NBEAHSTPAEJSVNQHOCUYDKDSFDVAKFWLSAOOGEQUXNRZWRBFBEDZJBXBZRACTBVIXBXYIPHIZJKLNEAFHPZCHXIRKWRMW");
    msg.last_error.assign("OEHBFEIWYMDLXANECRYZDJAFQGRRKESYSBMKPUVJLHTNBJPYVFZZEOUGMUVHTOIDZAAYDYSYDMCSPKKYWBQCPXNIRLBPJNXTEFMNFGXLJRWABTIVFROHOGCBUBEUIJXOEXZRBQNCAWZIXNHUGQMPDWCLVEUTLKUIDRJRVCVNXWDSGXQZ");
    msg.last_error_time = 0.2673610503182694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.6822180673468249);
    msg.setSource(24220U);
    msg.setSourceEntity(240U);
    msg.setDestination(9367U);
    msg.setDestinationEntity(85U);
    msg.mcount = 47U;
    msg.mnames.assign("UCVXBIATLDQZKMRPMYSLIQYEFBXTHCZBJPOKHTDVU");
    msg.ecount = 167U;
    msg.enames.assign("BGPWPPWNBGRODMVFRBKZOEITCXMISBPGWOWRJELXLUAEMKAAUEJXV");
    msg.ccount = 225U;
    msg.cnames.assign("SCZAJRNNPJFBVUJNRTTWVBRFLIJWOGIEKXNSLLCYZOSGNGOFFIGJCLAZFERDAJWWYUGABZZGMHKWTSSCRFBJDZTLVYKWYGECTTPBDGUHAVOKLMDDIFMLMNBIXYUWAQRTXUSSWOPRPUNOPKTSULPDJYKYHMABZKKYIQVEIMXOCPRWMZVHHDPOFYGHHNXVREOVKHTMGVZBIQAFJLDJIUCQENBERQDULHMQUKPQONPXEHSMAVDCQYXBEE");
    msg.last_error.assign("MGROUMBZZJCOYVACSBFADBLXOIFUGFAEANIP");
    msg.last_error_time = 0.025893266329608977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.9041421197280121);
    msg.setSource(47917U);
    msg.setSourceEntity(189U);
    msg.setDestination(51815U);
    msg.setDestinationEntity(38U);
    msg.mcount = 249U;
    msg.mnames.assign("YTDCNHSOJUJJOQRPXEIBAPTTIGDKUXTANXHUGDOXMSPVQNXFDOMDWJMBKYFBHSDWRECJFQULYGJSPHYRGZBWBHLLFVKPBQLHJQWI");
    msg.ecount = 30U;
    msg.enames.assign("YNZSEXRTYGUJKIUJTUPCTEOOWYDEJSJZZJCTDEVBSNWZZBIGOUUKGTSNGGVDOVMNMVLKHWRPKMOCIAVQGLXBPCFKDQVHOCRRNIIWY");
    msg.ccount = 2U;
    msg.cnames.assign("OHJGKWTXYVQVLQNAOBEFZVPCGTNICIOSSIRNUYCXWYRGTSZAKIBGPGUEXPNCJTUHPOAIWMVULRQHAJSSTAVNKMPCNCDLCUBBGFZXJADRDBFYZJSRMFSPUNFPJXPXZRIVCQDQHHAQYZKOEZKEZCTTHVGYTXKGYEUSIMSNMILKMJBWDQFIYVRAFDORCXBIFDGBYWFBQZHLFLRMLJHKNEMDVBVUKAAXMJELWZONPWOSOUDYTWJWGUKPEXOTLQM");
    msg.last_error.assign("EUOYHXJFLSLIJFWXVYJEOINIXWPNPQNGDWAVWLLMZSXKFAEMNSTDWOIGAHNKWCHCPONMLJYNCLBHNLYCFRXPDBYIBVTLBNRVRRVVEWSUUEDXKSISIZQQCPZXQMJZOOGSDFZSEZPHIGG");
    msg.last_error_time = 0.36372530242375023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.4070272465629964);
    msg.setSource(21485U);
    msg.setSourceEntity(109U);
    msg.setDestination(39941U);
    msg.setDestinationEntity(125U);
    msg.mask = 177U;
    msg.max_depth = 0.5162244401426541;
    msg.min_altitude = 0.07628992587190153;
    msg.max_altitude = 0.21051960959586757;
    msg.min_speed = 0.6901444586397685;
    msg.max_speed = 0.3263310808366313;
    msg.max_vrate = 0.7343020117259047;
    msg.lat = 0.28943931318834604;
    msg.lon = 0.9430914794966869;
    msg.orientation = 0.3834922847350515;
    msg.width = 0.5106953813343992;
    msg.length = 0.09923283287783424;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.3024066728059497);
    msg.setSource(17417U);
    msg.setSourceEntity(87U);
    msg.setDestination(40811U);
    msg.setDestinationEntity(94U);
    msg.mask = 112U;
    msg.max_depth = 0.5920839181787377;
    msg.min_altitude = 0.3556072954676114;
    msg.max_altitude = 0.7372624522305908;
    msg.min_speed = 0.8408864661765444;
    msg.max_speed = 0.06567308098717617;
    msg.max_vrate = 0.344876636340253;
    msg.lat = 0.754317966804114;
    msg.lon = 0.7396334424129114;
    msg.orientation = 0.43802542768005526;
    msg.width = 0.7763072698683559;
    msg.length = 0.3683367697320964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.9526956761477715);
    msg.setSource(25302U);
    msg.setSourceEntity(54U);
    msg.setDestination(19947U);
    msg.setDestinationEntity(218U);
    msg.mask = 163U;
    msg.max_depth = 0.4287557135533401;
    msg.min_altitude = 0.24371333137297602;
    msg.max_altitude = 0.791718004061211;
    msg.min_speed = 0.6579982512791371;
    msg.max_speed = 0.7195538471319834;
    msg.max_vrate = 0.36651908195471894;
    msg.lat = 0.4721859686179777;
    msg.lon = 0.37902082157941674;
    msg.orientation = 0.9765982322626529;
    msg.width = 0.4583593097112595;
    msg.length = 0.9104762522805034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.09914465958750973);
    msg.setSource(34317U);
    msg.setSourceEntity(252U);
    msg.setDestination(37419U);
    msg.setDestinationEntity(141U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.7116480756725873);
    msg.setSource(9611U);
    msg.setSourceEntity(53U);
    msg.setDestination(36011U);
    msg.setDestinationEntity(109U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.8751336815094549);
    msg.setSource(38799U);
    msg.setSourceEntity(154U);
    msg.setDestination(59446U);
    msg.setDestinationEntity(201U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.8866343545511883);
    msg.setSource(26763U);
    msg.setSourceEntity(39U);
    msg.setDestination(309U);
    msg.setDestinationEntity(193U);
    msg.duration = 12119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.7338464564273174);
    msg.setSource(51722U);
    msg.setSourceEntity(64U);
    msg.setDestination(18328U);
    msg.setDestinationEntity(221U);
    msg.duration = 58660U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.1761779766289755);
    msg.setSource(64939U);
    msg.setSourceEntity(43U);
    msg.setDestination(44731U);
    msg.setDestinationEntity(11U);
    msg.duration = 55390U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.5675158835638757);
    msg.setSource(8540U);
    msg.setSourceEntity(233U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(68U);
    msg.enable = 210U;
    msg.mask = 582814223U;
    msg.scope_ref = 1884508588U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.6535474475247912);
    msg.setSource(25771U);
    msg.setSourceEntity(27U);
    msg.setDestination(57863U);
    msg.setDestinationEntity(108U);
    msg.enable = 48U;
    msg.mask = 1497008459U;
    msg.scope_ref = 376194746U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.8725785558501408);
    msg.setSource(54956U);
    msg.setSourceEntity(140U);
    msg.setDestination(47833U);
    msg.setDestinationEntity(198U);
    msg.enable = 90U;
    msg.mask = 4248875987U;
    msg.scope_ref = 2139315600U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.844060377806356);
    msg.setSource(19055U);
    msg.setSourceEntity(15U);
    msg.setDestination(8518U);
    msg.setDestinationEntity(56U);
    msg.medium = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.8797970234557622);
    msg.setSource(35U);
    msg.setSourceEntity(171U);
    msg.setDestination(27361U);
    msg.setDestinationEntity(139U);
    msg.medium = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.20830240546067091);
    msg.setSource(63429U);
    msg.setSourceEntity(45U);
    msg.setDestination(20777U);
    msg.setDestinationEntity(109U);
    msg.medium = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.3335180488670245);
    msg.setSource(38681U);
    msg.setSourceEntity(136U);
    msg.setDestination(35932U);
    msg.setDestinationEntity(221U);
    msg.value = 0.42419820454321877;
    msg.type = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.4038773606944096);
    msg.setSource(13380U);
    msg.setSourceEntity(95U);
    msg.setDestination(6609U);
    msg.setDestinationEntity(245U);
    msg.value = 0.7990930252081281;
    msg.type = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.5191617785963235);
    msg.setSource(41079U);
    msg.setSourceEntity(205U);
    msg.setDestination(15121U);
    msg.setDestinationEntity(208U);
    msg.value = 0.4418766491298781;
    msg.type = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.22060992223294396);
    msg.setSource(40644U);
    msg.setSourceEntity(184U);
    msg.setDestination(33078U);
    msg.setDestinationEntity(130U);
    msg.possimerr = 0.11605045871985531;
    msg.converg = 0.4228330143824287;
    msg.turbulence = 0.2288116570078076;
    msg.possimmon = 127U;
    msg.commmon = 197U;
    msg.convergmon = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.36495159593246884);
    msg.setSource(40471U);
    msg.setSourceEntity(177U);
    msg.setDestination(16984U);
    msg.setDestinationEntity(253U);
    msg.possimerr = 0.8550814849468811;
    msg.converg = 0.34772694518249014;
    msg.turbulence = 0.9615992708981437;
    msg.possimmon = 249U;
    msg.commmon = 165U;
    msg.convergmon = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.8597441440919245);
    msg.setSource(62594U);
    msg.setSourceEntity(192U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(81U);
    msg.possimerr = 0.6096034722193946;
    msg.converg = 0.19646008727606656;
    msg.turbulence = 0.34508577551802244;
    msg.possimmon = 188U;
    msg.commmon = 87U;
    msg.convergmon = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.4738185232561527);
    msg.setSource(40481U);
    msg.setSourceEntity(33U);
    msg.setDestination(22111U);
    msg.setDestinationEntity(79U);
    msg.autonomy = 62U;
    msg.mode.assign("CYBDCEAMEFYHTVTRBSMNXPCQLANEGBQCARMYZVJSWKNCFRKAXNGIWLMSKNOLOTSZLDHDGJZUDXLFDEESYNXHMSYXTAIXPJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.7483721088807268);
    msg.setSource(38735U);
    msg.setSourceEntity(127U);
    msg.setDestination(1814U);
    msg.setDestinationEntity(35U);
    msg.autonomy = 163U;
    msg.mode.assign("KBDCBNTSSPRJFBFIFJJWYUNOGGWZLXLSTKOMKTWQNPHUHRJMJQIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.12862784096646795);
    msg.setSource(59995U);
    msg.setSourceEntity(251U);
    msg.setDestination(14307U);
    msg.setDestinationEntity(208U);
    msg.autonomy = 122U;
    msg.mode.assign("ZOIKTBWCJHYVDUSBFMQXRTZBRRJLCSWLNDUTBAHCFXIMUQQXQNUEGINCOVNGHHMGFPXLQLDDZCOMXWCEHNPISOYHRBKGLZZKNUNQJWTEIWRNHAWMXPVODSDPYJLSOFKMYCBMMJLCDREEQPMKCJFJEED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.8616376226973272);
    msg.setSource(28377U);
    msg.setSourceEntity(87U);
    msg.setDestination(51020U);
    msg.setDestinationEntity(3U);
    msg.type = 181U;
    msg.op = 67U;
    msg.possimerr = 0.13698397913465943;
    msg.converg = 0.7285421283511557;
    msg.turbulence = 0.5057657779264909;
    msg.possimmon = 250U;
    msg.commmon = 238U;
    msg.convergmon = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.34585757016147756);
    msg.setSource(2217U);
    msg.setSourceEntity(80U);
    msg.setDestination(18711U);
    msg.setDestinationEntity(215U);
    msg.type = 111U;
    msg.op = 232U;
    msg.possimerr = 0.5867909894694217;
    msg.converg = 0.316085324374498;
    msg.turbulence = 0.5433073979449213;
    msg.possimmon = 68U;
    msg.commmon = 51U;
    msg.convergmon = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.7281237280061278);
    msg.setSource(31009U);
    msg.setSourceEntity(143U);
    msg.setDestination(50701U);
    msg.setDestinationEntity(252U);
    msg.type = 63U;
    msg.op = 177U;
    msg.possimerr = 0.5465505201566092;
    msg.converg = 0.8006279447912868;
    msg.turbulence = 0.19200277513428865;
    msg.possimmon = 41U;
    msg.commmon = 32U;
    msg.convergmon = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.273158886418865);
    msg.setSource(546U);
    msg.setSourceEntity(44U);
    msg.setDestination(5949U);
    msg.setDestinationEntity(64U);
    msg.op = 61U;
    msg.comm_interface = 54U;
    msg.period = 62359U;
    msg.sys_dst.assign("RGJNEMMVQICVFNYQVFGTUWCWLLHAPPQBAEVBJKMBEKWDWHVYZJSOEXCWTKXTZHPZSKDRTXJEGBCROIOWIAFEPTJDAYDNDNLBSAGBWMUCGXWYRIEQHLSBYJLPGPPMYDPNVUZOMXEOVAHHACXQRZGHZYLVOGKZQQYEXFIRJQXZKRFCRCDMLAHNIFSOCNBIBYCKFXXOUKKMAOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.23670922849280773);
    msg.setSource(57780U);
    msg.setSourceEntity(133U);
    msg.setDestination(43315U);
    msg.setDestinationEntity(79U);
    msg.op = 91U;
    msg.comm_interface = 24U;
    msg.period = 19162U;
    msg.sys_dst.assign("USNMGCBYRVFGUVDFGOVSWYIZEGQKEYYQHAXMQFKBJGDROHZQDCDLXVIGFVIYILTHXDUMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.9929379584740751);
    msg.setSource(54105U);
    msg.setSourceEntity(3U);
    msg.setDestination(60725U);
    msg.setDestinationEntity(201U);
    msg.op = 3U;
    msg.comm_interface = 148U;
    msg.period = 55438U;
    msg.sys_dst.assign("ZOZBBGVQWZLAXILKUXLPGJPMEQNMJAMVCJVELWGSI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.47209969676364705);
    msg.setSource(20726U);
    msg.setSourceEntity(151U);
    msg.setDestination(9784U);
    msg.setDestinationEntity(1U);
    msg.stime = 3558884671U;
    msg.latitude = 0.8191664929102789;
    msg.longitude = 0.9179445612621587;
    msg.altitude = 18109U;
    msg.depth = 27878U;
    msg.heading = 37635U;
    msg.speed = -2190;
    msg.fuel = 105;
    msg.exec_state = 13;
    msg.plan_checksum = 29022U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.9878647602261477);
    msg.setSource(28256U);
    msg.setSourceEntity(213U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(204U);
    msg.stime = 4160813071U;
    msg.latitude = 0.07626399682019624;
    msg.longitude = 0.48173587934149364;
    msg.altitude = 21501U;
    msg.depth = 4448U;
    msg.heading = 42520U;
    msg.speed = 31979;
    msg.fuel = -61;
    msg.exec_state = -69;
    msg.plan_checksum = 47454U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.7190708701106499);
    msg.setSource(31344U);
    msg.setSourceEntity(88U);
    msg.setDestination(61266U);
    msg.setDestinationEntity(232U);
    msg.stime = 1308224330U;
    msg.latitude = 0.560923311062916;
    msg.longitude = 0.5469870724466153;
    msg.altitude = 42841U;
    msg.depth = 30015U;
    msg.heading = 50097U;
    msg.speed = -3141;
    msg.fuel = -8;
    msg.exec_state = -8;
    msg.plan_checksum = 555U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.5238078839706063);
    msg.setSource(11749U);
    msg.setSourceEntity(157U);
    msg.setDestination(25104U);
    msg.setDestinationEntity(227U);
    msg.req_id = 50748U;
    msg.comm_mean = 142U;
    msg.destination.assign("FGBBJNXZGRUCCEKLRKWVJAEIQDWUPEOLJULB");
    msg.deadline = 0.4393276633094334;
    msg.range = 0.009230081178131622;
    msg.data_mode = 240U;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.6940559818289558;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RMJQRZMGDHLDJ");
    const char tmp_msg_1[] = {88, 82, -76, 47, -116, -128, -25, -5, -26, 72, 118, -25, 48, -114, 118, 77, 97, -39, -59, 8, 44, 81, -55, 92, 105, 20, -124, 41, 123, 32, 21, 80, -5, -17, -92, 19, 32, -92, -52, -22, -38, 62, -120, -46, 104, -18, -114, 77, -14, 79, 111, -124, -27, -22, 102, -39, -9, -6, -82, -94, -61, -34, -101, 29, -118, 30, 5, -124, -72, -24, -3, 47, 43, 8, 82, -48, -116, 5, -114, 75, 124, 13, -48, 94, 82, 13, 40, 71, -119, -124, 7, -11, 52, 52, -27, -108, -128, -72, 2, 9, -44, -64, -50, -38, -118, 91, -99, -5, 1, -32, -60, 25, 55, -61, 1, 37, -105, 21, 94, 27, 65, 9, 2, 38, 39, 94, 98, -21, -63, -110, 74, 77, -99, 103, -108, -47, -45, -82, -23, -112, 57, 57, -113, -39, 24, 98, 74, 56, -73, -124, 37};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.3555292375975977);
    msg.setSource(16798U);
    msg.setSourceEntity(135U);
    msg.setDestination(21670U);
    msg.setDestinationEntity(150U);
    msg.req_id = 5044U;
    msg.comm_mean = 121U;
    msg.destination.assign("FTHCEFRLVKVYOOVZQUUHYMFDBHHODAWMHYCKFVHBWBOTXBGDSJWVTCXQNSQPNGDGOPCPCAKOFRJIURICPIOTFSEFTNTLRYULXBZRGIZNVELSDEXPKQYRUDNPALYBJJVREYHEJQYSCZRAACVXXJWLVU");
    msg.deadline = 0.5722507938034533;
    msg.range = 0.04161362493219378;
    msg.data_mode = 11U;
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 69U;
    tmp_msg_0.op = 14U;
    tmp_msg_0.request_id = 57258U;
    tmp_msg_0.plan_id.assign("SKELFJZBMMAKXZSCQKAUMAMQHQAVEVMNXPVECUHYQBJFNDZTNIOUFKPOMVBYLXTXHNQADUGCTCXOCIIFWILAFCDIOSEJXRVTYSETTJELMVQPOWBWLRWEWRTTHPGHGJOXHUND");
    tmp_msg_0.flags = 55745U;
    IMC::Heartbeat tmp_tmp_msg_0_0;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("UMBZCODKGTETCLJJWEPTINPBXUBIFMAEORWFFOGSKEGWJLHFHXMHRQRTNWGBMDWLCQYHLNXCWDLBKGVTTSABWGHVIZTXKSJHVCPBZLQZQFMWRFHYCMVKKUEIUHNYMZLCYQYAZOAAIFUJOXNQBEKVXYDOPNDTFALUSSQPPCSBGDEEHEPWYAXRVNKRYRGNODY");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OBCBRXUYLBBLRTMVLPZTXFKQSPSAWUWDSKIGSKAMIHKIUZLNEFTELCFGDENZIHBHOTIQIBAEFAYNTGTJVIBOCWDVVXYFYQKZUJDMLJFVAVVUYHJWXYJYLAPDPGJMSRWQYORTGJBKSHNGDAMGYNMZOZNUPOQRHJVRWPIKRIDSYUMSLCUNSXRECOEHGDHEFBXEOPDZZCKMJMXBOQCMFAZAACVPPPXUCWINTQGNSHETWOXLWLQQXHFRCVWRZQKE");
    const char tmp_msg_1[] = {119, 37, 96, 2, -59, -91, 81, 104, -61, 18, -73, 75, -45, -17, -115, 89, 92, 41, -77, 61, -31, -40, 103, -12, -73, 95, 126, 86, 5, 10, 109, -26, -11, 4, -93, 101, -85, 102, 96, -59, 41, -123, 46, -90, 47, -123, -67, 55, 113, -127, 79, -27, 67, -99, 66, 11, 52, -96, -80, -46, 47, 24};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.7661694355525203);
    msg.setSource(32928U);
    msg.setSourceEntity(6U);
    msg.setDestination(58354U);
    msg.setDestinationEntity(123U);
    msg.req_id = 8116U;
    msg.comm_mean = 73U;
    msg.destination.assign("RFPGZLAESQUKYTPBKTASGOHIAJTNNGMSLICENOPQWZRKLKHBTFXXXRPFDJUWLQEYUITIVRDALZHJWHZBXRSIGUZXJHDGEOMMVNNPVFSBRKJXELYTYMKZUPIIYVXAFAYRVUDDGMLPIVGNPWCNSKJMCOTBWQVZBDPDIFDQCUBOLYM");
    msg.deadline = 0.21478719730006035;
    msg.range = 0.13505033255925525;
    msg.data_mode = 220U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.8081593526000154;
    tmp_msg_0.lon = 0.2835646337028018;
    tmp_msg_0.z = 0.3193913969098573;
    tmp_msg_0.z_units = 227U;
    tmp_msg_0.radius = 0.883546741458161;
    tmp_msg_0.duration = 27826U;
    tmp_msg_0.speed = 0.9535472044175244;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.custom.assign("SHVZHNBCFONZBWTTHFFQPNAXOEVPAUSACQCKHZKVYMESYBBNZIROHULYYZMWQJSVMOADHTSJQHRPPQSNREDQNOANCKFXKTUAUASUWBWTKZXXVGDMCVOPGGUJDRPOTOJFUXABHXWSLGQIJVYCTKRAQROJIFBZUDTTLIQVYWTYJLHCKSECJREUMLYRFLMMXUL");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OLILSMCVACHVBQFGRXQEACQMZFOMIPWKDBCWNTEGUYANRLISSZHNXLYERFSGYTTMFWRJKCFKZKDFRZBBQXVUGNUAPHPGSEJYMRNKKHYSGXIOFHVJMCSKHLHYVCZFJKEIVZWTXCTGULKGMCHUIPDDLFRPOEGXJNBUQAIDVPCAEJZDTNWBSBYQOYDVFUAAELJTRMONOLQYKAVTPTSXGHWZLBIAHMDIJDJOXNWREPVQX");
    const char tmp_msg_1[] = {108, 6, -80, 17, -103, 43, 46, 49, -80, 54, -18, -31, 109, -48, -43, -68, 93, 109, 40, -99, 22, -92, 13, -43, -73, -43, -94, 12, -62, -53, -75, -35, -111, 119, -125, 58, 116, -56, -62, 36, 67, 36, 65, -14};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.478149007328587);
    msg.setSource(41887U);
    msg.setSourceEntity(120U);
    msg.setDestination(9053U);
    msg.setDestinationEntity(77U);
    msg.req_id = 27951U;
    msg.status = 72U;
    msg.range = 0.5247667778799207;
    msg.info.assign("XNTJJQMVPKFIHTNPLDYHVEYYYREUKJVWHZVOZILWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.6608285231142448);
    msg.setSource(23170U);
    msg.setSourceEntity(66U);
    msg.setDestination(59590U);
    msg.setDestinationEntity(229U);
    msg.req_id = 107U;
    msg.status = 35U;
    msg.range = 0.3396485322308074;
    msg.info.assign("SLCBNFBWVTIXNUALYXHJEDWTQROYHZNLIZGLEXJSQJBZGNHRUFEQCRXPGKVZGYSKZDJRWFELLTBVTNPFJDSASHAXQCQOKQRIZVUHAVGICPZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.23753961450768646);
    msg.setSource(16168U);
    msg.setSourceEntity(149U);
    msg.setDestination(60592U);
    msg.setDestinationEntity(121U);
    msg.req_id = 38877U;
    msg.status = 141U;
    msg.range = 0.12032510615636693;
    msg.info.assign("YRAJKHFHSSMKDQQSODUARDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.9439125401941427);
    msg.setSource(34615U);
    msg.setSourceEntity(119U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(138U);
    msg.req_id = 10188U;
    msg.destination.assign("SKWZRXAAAJCCOFHAWUXBLOLKPHZNQJNOEJJBBHISFTXJESPWFBHRULUZZDBGNWYMBTYNMCMSDFLOEJKVPXKHWKTAGOBKQZIVIAXDQSENTNDCJTGYEMOFETGDAITVGBRISYRUIGZJMHPDTLBSRHQRVWWPHQCYPLVNXOONAMBSURGXEUYYOWUDMXYQJCCPTGGVAKVKPVYKFIVGZLZCZHKF");
    msg.timeout = 0.4568174652402479;
    msg.sms_text.assign("YUKAUNDGWSYADMXKJNYRRIOWKPLEDYGETXEKUOWESHHMVGQBSNWNVYXDLHHCJJTXSFHZPLVKPVUQMBFUVQPIGZCGBQQCFCBJRGBZJUOPAJIYLKNCONLJKEQHIXTRMADTMZJWFDMFOURTHFEWFWMFYZLTVXLFRFTLSNYUDGCOTGPMUEAAIVBBLRPZNCCQBCIZISJEWYYLREJDANOIHOUZQKXBITHWPXPRZA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.43410085535564336);
    msg.setSource(30465U);
    msg.setSourceEntity(124U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(67U);
    msg.req_id = 54951U;
    msg.destination.assign("IOVUTTTXWVFRDJMFYELICLXCDOIBNZWHIZKGSNNFTBHXYAVEIVKEQMATLDQOYAMVPBJSLZOISCZHJAPHYNUC");
    msg.timeout = 0.5523930011364651;
    msg.sms_text.assign("EQBJRUNQKDEMDSBAZNLAIGYEZHKTAPILQLALDNHYHODBJGCRKGHGOSRBQNBCCBYMJTMAWFMMNZXVSDVYWNFNGJHAUAHACKTVOOPYRUEAIECLHOECJZXEOMJOPTFKPAZDURCYBEQMNMILMBQIFIVUSLFQXGFKWVYSQSTTCTXWXCHWQJIEWLGUMBRZJXWVYSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.8297444540533937);
    msg.setSource(53226U);
    msg.setSourceEntity(23U);
    msg.setDestination(21614U);
    msg.setDestinationEntity(26U);
    msg.req_id = 8036U;
    msg.destination.assign("EZQFESOHOEJSWMCINGCGJQSLUTDRKTWRWHRUMYSEWGUNHQLBVGADBMWFACEJRPXDGNGQYLRCTEBOTEJUGPMUONLFFVOVRIEIHXPLKJXJQMAPCJYTVLLPIBNZEMZYBPBKXTIIRWIPASISKBHVAEDKPUUNGW");
    msg.timeout = 0.544825449282118;
    msg.sms_text.assign("JNJCRSBZTAUOGWWTKHPEQTDQKZTXKVJEKIBHBLJCZRLLLOXSNPJIRPXXAJEMEPVDUOGAVRIAVTPHLYWDQCJGROUVWXHYFAVOCGAESGLFHSTZSVBGDYKMCNEIKRBFWCESEVYVAYZHPDQZDOVSLXFHSHMCIJYWKLTIBOBWDKMMUNYGFHEFORMRYPFUQGQFIBSOUDQIMMUJBXDFNQUINPUNCLRTUWTOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.7383188235878299);
    msg.setSource(4080U);
    msg.setSourceEntity(165U);
    msg.setDestination(43977U);
    msg.setDestinationEntity(101U);
    msg.req_id = 59761U;
    msg.status = 126U;
    msg.info.assign("PVBBQUHWIWCCJNAAFPBFNGYZSUPHULSUXPKCQDNZYXJIXBLZNHDLRFCVJTCQPKYATCSPVGXLREGWWIYSTIQOBXZMJUNZUXOBXIWOZVQGRKHKFEDSPPEEVCKVQOTJHAOYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.2694000551869673);
    msg.setSource(12790U);
    msg.setSourceEntity(134U);
    msg.setDestination(45412U);
    msg.setDestinationEntity(34U);
    msg.req_id = 14384U;
    msg.status = 78U;
    msg.info.assign("VUMIOBLHZOXAHMIZLAYMYHUJAGJIZCXUYRGPTYXLJSKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.5791795892950339);
    msg.setSource(25868U);
    msg.setSourceEntity(146U);
    msg.setDestination(22U);
    msg.setDestinationEntity(142U);
    msg.req_id = 17657U;
    msg.status = 30U;
    msg.info.assign("BEGKEAITOHIBCNSAQTIDMPOWVWGRTMSFDPZIRZDEFJDTPXFFNOTBLTYXOUKGBVCEVBJVTHKIWOEQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.9494659406363758);
    msg.setSource(24083U);
    msg.setSourceEntity(126U);
    msg.setDestination(61970U);
    msg.setDestinationEntity(77U);
    msg.state = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.2569957434218525);
    msg.setSource(14236U);
    msg.setSourceEntity(170U);
    msg.setDestination(4059U);
    msg.setDestinationEntity(207U);
    msg.state = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.7656253187062402);
    msg.setSource(15322U);
    msg.setSourceEntity(59U);
    msg.setDestination(10861U);
    msg.setDestinationEntity(134U);
    msg.state = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.48717876889760203);
    msg.setSource(33706U);
    msg.setSourceEntity(177U);
    msg.setDestination(46034U);
    msg.setDestinationEntity(159U);
    msg.state = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.018868056653057907);
    msg.setSource(56818U);
    msg.setSourceEntity(171U);
    msg.setDestination(39960U);
    msg.setDestinationEntity(206U);
    msg.state = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.16086840905175737);
    msg.setSource(42929U);
    msg.setSourceEntity(241U);
    msg.setDestination(10029U);
    msg.setDestinationEntity(108U);
    msg.state = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.8605131916330514);
    msg.setSource(30617U);
    msg.setSourceEntity(248U);
    msg.setDestination(8115U);
    msg.setDestinationEntity(169U);
    msg.req_id = 32697U;
    msg.destination.assign("VGSZPPNSKIGQGJHAQSEZGXOMBCLHZAVNOKQSNURFOKFRGXXEHKPUDQNWKZOMBYBWDVSEFJVXQMUMOAHTTJZLCNFMWSDIPNIGEWULAYUQYSFKCURBYGTLUEXDQYVJPFXGZWLJUACCIVBPDTWEITXFFSIYNXWFEUOUDJIICYHJBKCPTMHBCRRWZRDAETRWMNSQGTRLPOKPOPNMOHHEYLTFKT");
    msg.timeout = 0.40329020201386034;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.6251111589497037;
    tmp_msg_0.phi = 0.444904872547909;
    tmp_msg_0.theta = 0.4279144715938541;
    tmp_msg_0.psi = 0.08000285658662287;
    tmp_msg_0.psi_magnetic = 0.5794933441728731;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.2586746872998339);
    msg.setSource(45753U);
    msg.setSourceEntity(19U);
    msg.setDestination(57916U);
    msg.setDestinationEntity(17U);
    msg.req_id = 6423U;
    msg.destination.assign("ASCPTHHDSWGYZEYXTCLXKREFHJQMAUAPOPBK");
    msg.timeout = 0.8173640932684417;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 31693U;
    tmp_msg_0.avg = 0.6706026120789524;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.14709711989863938);
    msg.setSource(44055U);
    msg.setSourceEntity(77U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(245U);
    msg.req_id = 26863U;
    msg.destination.assign("OTNAZQKYUZLRKRCXGUGNFQDXOIMBXNYCHSVTRSNIQIQOYFEMAAEJBXYTLNAQPKTSGJWMNAWHEVCXOXLNBWRVELYIPDDYVRDUCNDWEGUUBHPLJEBTFHJWIOQZYOQOCZFVLUJSJFWHYMBQOAFTVAGEOLS");
    msg.timeout = 0.08702373569126709;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.47192653172341903;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.17907464161313513);
    msg.setSource(3299U);
    msg.setSourceEntity(198U);
    msg.setDestination(53197U);
    msg.setDestinationEntity(1U);
    msg.req_id = 58620U;
    msg.status = 233U;
    msg.info.assign("IDJKXWOGYABIENXQCRLPAXAHTUZBFDLWGHOGDFFZLBLEVMNAVBCLTZTBJTYRHNAMEJCOHCZJYEMEMPONYLTGPCAVKMPSXIPKALIJITYZSDHUVNDDZVETJDQXAUQBWXZFIKXRYSMTVCRIWSWJKUPFBXKLSZJBKMUIDDAPUUDVGQNFFWNQOQQWEYQXZSLHXGPSPSNOHRFCMSRORYRIYJORCBGWGTGUVRJBOFMHGHFKENWVZEQOPTKWKCNCLUQVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.40365333507724943);
    msg.setSource(7284U);
    msg.setSourceEntity(80U);
    msg.setDestination(398U);
    msg.setDestinationEntity(63U);
    msg.req_id = 7895U;
    msg.status = 234U;
    msg.info.assign("BIAOFOIIOHXGXEDTGVHJNAXRZXLYOYTUUZSQLTOIVLVJDCFSOJXUYQRQJLTVHWDFDXCYSLRMBFOFERZJPSGVAMFWAXCZTBRIVQEHDGKDVZBXVVJIWLMSUQPUZRMRSFEPNWJKYBSGIJKCPPZZKNMGYYTAEMERSBWENJQPQNMDIUZLUNUKMHPHNHRYWPQEWKRKTCQMKCCNXFUGENTBWDGKGPBILPLJNUOWIAAVYTHZDAYXTOCSAQOWAKEFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.9793295611705108);
    msg.setSource(20015U);
    msg.setSourceEntity(7U);
    msg.setDestination(54446U);
    msg.setDestinationEntity(135U);
    msg.req_id = 44153U;
    msg.status = 212U;
    msg.info.assign("LGQVKBITJYHGJBFUPDHZTGGDCFLNXQQHUKGUXVWALTNSXXJMBEMRQPBNTGYYOJWBWVMLNEQKFUFRLRUTSOVPPOOFFIVAPRRNCWKJDADECZXSOFZPLCCOJNSVHVCNQKHHSUBOMXETSKCZADDTJDAFNATKKRVEBXYYZUPLYYHIOIECWBUIZVDHWHIDGOGYDJEIBSASGHQCUCQZYAFXERZMRMZNXMMFJRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.8596017449489752);
    msg.setSource(52640U);
    msg.setSourceEntity(68U);
    msg.setDestination(12783U);
    msg.setDestinationEntity(161U);
    msg.name.assign("ZJDQRKZGHUMHPWDUCRUDGRFABFPZTGXTXGZXOENSVNPRZLDQSIKLTWSXPWZHPAACGXDCMAOX");
    msg.report_time = 0.8850346663310366;
    msg.medium = 235U;
    msg.lat = 0.9774712575587586;
    msg.lon = 0.4509515938385792;
    msg.depth = 0.3717040051184045;
    msg.alt = 0.2735640740072788;
    msg.sog = 0.8828681278141772;
    msg.cog = 0.4894398647009899;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 150U;
    tmp_msg_0.eta = 39618U;
    tmp_msg_0.info.assign("AGFJPYGVRTFILCDHXKPAUGQTYZMANHMWOZBGXQUOSRSQTAUXPWNZIVHBFDJTZDPPCWWLIYXBNDKHYENWJKBJQTAQAMJAJMJOIVSQNENRYPFSVBIZLHKZFFEXOPRLXSVGEUKWSMTYFTRZBXZBVHIJCQURJNMOIXOFQLKSCUEDULGDMBQOTRIDCMRANFUOYKPBALEDCSMCVHEXGHEXVCKRGUFWGDLRZNHYJBVNHWEEMOAWSIPZLKPY");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.02863742027696503);
    msg.setSource(27056U);
    msg.setSourceEntity(102U);
    msg.setDestination(3393U);
    msg.setDestinationEntity(94U);
    msg.name.assign("EOBGSIFIXAPBCNCVKPOJFAQPWUHNUKQGOZHVEUWLZDVJEHRFDQKNDNHNEMLYBDTMMYJGXGPXAGSVFJUNZJVZUWAVBBIDMPCGKLYJSQWKZKLMYSJSDFHWYRWCXNALASQMSFPDTVREBYTXZIDTATMPKKTCWZKCMCURXGRQTBEAOYIOTRVGHYJLCXFRZIYNHLOLLDPBMIDXCEOOLRVMYG");
    msg.report_time = 0.9558905039721397;
    msg.medium = 179U;
    msg.lat = 0.1880008805596377;
    msg.lon = 0.5278650138868405;
    msg.depth = 0.8702543457072467;
    msg.alt = 0.6642942815999295;
    msg.sog = 0.7034102137185284;
    msg.cog = 0.6130272585009996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.9419924343241703);
    msg.setSource(40571U);
    msg.setSourceEntity(109U);
    msg.setDestination(45383U);
    msg.setDestinationEntity(233U);
    msg.name.assign("QZEWFUZCOVDBWOTNBYWRIKNSFYQDEPNWOTBWHYHFWRHBTIZHIKKZZOCJYBGPBVZVNNJYZPENVQQAUKEIPRAKUDEGTJAEPLHXLTECGTRPLDCCNKDARWYDVTFFMNPP");
    msg.report_time = 0.22630508255616044;
    msg.medium = 153U;
    msg.lat = 0.9444530486665182;
    msg.lon = 0.21181680084784993;
    msg.depth = 0.7510395481248032;
    msg.alt = 0.2868304719784319;
    msg.sog = 0.20312570277083886;
    msg.cog = 0.8855843949036849;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 29061U;
    tmp_msg_0.type = 195U;
    tmp_msg_0.utc_year = 9637U;
    tmp_msg_0.utc_month = 11U;
    tmp_msg_0.utc_day = 101U;
    tmp_msg_0.utc_time = 0.2660260404414988;
    tmp_msg_0.lat = 0.3569849149436156;
    tmp_msg_0.lon = 0.475836887396312;
    tmp_msg_0.height = 0.5066946206866123;
    tmp_msg_0.satellites = 124U;
    tmp_msg_0.cog = 0.7599618929201675;
    tmp_msg_0.sog = 0.49534144342190123;
    tmp_msg_0.hdop = 0.5051715131173132;
    tmp_msg_0.vdop = 0.01022918640548598;
    tmp_msg_0.hacc = 0.6975231459832039;
    tmp_msg_0.vacc = 0.7093402591594515;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.13417853208548514);
    msg.setSource(41882U);
    msg.setSourceEntity(54U);
    msg.setDestination(7590U);
    msg.setDestinationEntity(24U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.959939366494829);
    msg.setSource(36442U);
    msg.setSourceEntity(67U);
    msg.setDestination(23802U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.5449696306971908);
    msg.setSource(34518U);
    msg.setSourceEntity(121U);
    msg.setDestination(55906U);
    msg.setDestinationEntity(137U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.9001481961045842);
    msg.setSource(21920U);
    msg.setSourceEntity(208U);
    msg.setDestination(45157U);
    msg.setDestinationEntity(83U);
    msg.plan_id.assign("WCWUXGLFHECIPDETFSKRNEYKOCWPRRBDDKIDPWZNMGBXHBZBLDS");
    msg.description.assign("BEBOVXOPAWDOXJWEDYUJCSYNNWMICCOCLMJRZGMJOLKSWFYCPUCUANDRBHITPDZTZAGBXDELLXUPJSDYT");
    msg.vnamespace.assign("QQZHGCNYQXIRNOBDASDGNSJTMCHVDMXIDRESEZPNVFSHBUBWICUJLGUBRUFXRYKEFWDZSTAXGKVDMNYGPJMIQMFZVMACRSUCXYOULSHOGMYFFRJCBVHFPKPLTOVPEISLZKCOKFQNKTRTELHHINWATEDQALMTPKBYDGUFXMWLWHZRRSKJQTDQZOYGZVGUUNQEVBCRPAGPOAXEWNXHNXTEWKAIAWLOJSQOJWLKCWUBMDOZBAXYJIT");
    msg.start_man_id.assign("PQXSQWJTDJLZEIGBOVOUKBBGURBMFMTEXEVVJCWLLMUDQTEDZKYEIVMPQBSXUIJMGRZSPWXYXQATWBVTOPOPOPQJT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EJTQGTBKGOCVMFGOACMFDBUBAFWCVWICMBNNUYQKLXMYFQEJMFHGSOOXVKIFTLZRSZGFHXREHUXURRRDRSQBYNKRYSYYIKBPIDZZHJFAPJUOEJFLAAIMWTVDNEQLSNXBAZMEDPKGUECCXGXNHYLTWVDTCQNSTHORWZUZLSLPIHJNUJADTWHDUMKEHPTWCOSRJMGWJVBPZGQXIRNBVQPSOJHZLVBVXWAYOIKIKDNES");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 32880U;
    tmp_tmp_msg_0_0.rpm = 0.033523758463817055;
    tmp_tmp_msg_0_0.direction = 19U;
    tmp_tmp_msg_0_0.custom.assign("CSVJEHWMUXYGBVWDHTVRVGBDYJHQMAVTGZLXIIBOMEGPVWSXTOUAXEMNQFTOWECKCSKJQJZKUZOOYQOMDRXUJJCBLNMUFHFYXGPZCTWA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EulerAngles tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.6612711586333597;
    tmp_tmp_msg_0_1.phi = 0.6169236083946765;
    tmp_tmp_msg_0_1.theta = 0.6160247728964805;
    tmp_tmp_msg_0_1.psi = 0.8446946927284251;
    tmp_tmp_msg_0_1.psi_magnetic = 0.9778581452670538;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::FormState tmp_msg_1;
    tmp_msg_1.possimerr = 0.9635488792164382;
    tmp_msg_1.converg = 0.6820875489915572;
    tmp_msg_1.turbulence = 0.8492316981502713;
    tmp_msg_1.possimmon = 246U;
    tmp_msg_1.commmon = 41U;
    tmp_msg_1.convergmon = 153U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GpsFixRejection tmp_msg_2;
    tmp_msg_2.utc_time = 0.9829632829222053;
    tmp_msg_2.reason = 52U;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.6582329054112595);
    msg.setSource(1821U);
    msg.setSourceEntity(230U);
    msg.setDestination(9550U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("IJJZJCRTRFQCGFWPQTPJULGAIMSQJATVEKJPCJUCKMYRWGPTRQGONUSKUIGCANRKDACBVLWMFSQHZPYYOLSOPQZNEXBWYFDKFHWUOOTTURBIVFIAAHCLKIENXEMXVHUKDVKDUHGPVOFCSULZGPIYDZZTNAOXNZAEQBFBMBXEZOZRLSWMOMBSJ");
    msg.description.assign("IHZPRGRVQLOCKWLLYIYAKWTVDGFTLVNOZZQOFAGMQTGKR");
    msg.vnamespace.assign("QEZZXWRWSNFUZIEYKULROVNDOGPJUXJTBFMHFZOXBRATQSYXLROMENZONHTNWSSZXKTSKLPYYCPQVHBCHQYWSLAAXGDVVEPGIYGXCMQDHEHTHLFDAABOCKBECUTLWCFXMTDNGHJKGQMINBPBIMEOSUIEKOFTLNUGFYMJJQOPVFFWMVRDRFDHRPLRRBKLUNSTJCCOAZNKDAPQAIDUHCQRIEGKYYSUAWAVPJWSZZBIMUVKJVDVLW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GLMKBBIONCEDDQFFCRRKYFJUSUZOPWHNLRMGHDGUHSBZWROTNAREHXIHLZZNBCFXPMIUFVWTPLBMIDEVZQSBSIQWAUFAJGKPMYNQLSOOLFAMAEBYZUOEIFVQSCNAJROKKVX");
    tmp_msg_0.value.assign("RBYDEULLFPVCCSANJGDHYBLYGXTYPFQ");
    tmp_msg_0.type = 71U;
    tmp_msg_0.access = 229U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KIMFVCYBZQIEWXKNEHIWYLDJZZDHMUCKPUJWITOWNQYQNFYSJFSVGBTEMJSQA");
    IMC::NSBState tmp_msg_1;
    tmp_msg_1.path_param = 0.5147022440115756;
    tmp_msg_1.x = 0.11196318648050729;
    tmp_msg_1.y = 0.7451715165538295;
    tmp_msg_1.z = 0.8812821533209452;
    tmp_msg_1.r_f = 0.3667900103690521;
    tmp_msg_1.p = 0.12005818127321399;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.7678693445229298);
    msg.setSource(2144U);
    msg.setSourceEntity(178U);
    msg.setDestination(53447U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("BKKSQYJGYNHCKGTMVESLTTHUYOWJEMHNSEALWBTRPITCFOQJMXIZAQUAXDWUHXIIRITJFJVNMPEULANDJJHNEQRSIJILFCWXOLPOZFYPEYVPOOFWHOVRZZMHSQ");
    msg.description.assign("KLCAQLHAXUYWDZDTOBWHDAMCDKROSSANTJPMSXIVUUJCXKUEGTULTPTBGFFPMBUOTTANLIKDJEQVVSBOQEZEASYKZERTCQNACYBDTIQJOVQZKVLYOPSLQRVIHPKAGAYCNPRIZRXBFJMXFKDSUPSGLJNUTNEFPMSRCYNDWAWYFQUJJFMDGOIZGLRUXJCNRPZWP");
    msg.vnamespace.assign("XYFEBGKJUSGUHIDAOZUSANNWAJIHSLMVCUPCPWAEZBSAJDDZNJBRWXZVO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MXJICWZPGOZYBHSXNHVWMPKZZVYDLKSNQBFMROONFSBDCCYUEEKWHSSIZOJEUAMWIZMTAAJYPMQHUFRFADFXCWQDNRLXQXOOSUKPYJRMFALO");
    tmp_msg_0.value.assign("IVZACVOTSEWCYODRCGHOSRWBTBUJVLJLTASACKTBNJISYBALHCCXAMGUBFVQKJHNDMLZXWEFUKURQONFCAPTDLFSUFERQDFHAWHHGVZEZZIXMQKCKDQPTVYSGFMWGJOICREMLYJREQRKUOVEUKYAMVLMFXNAKBILKZHOUNQTGDBOTWFSLDAPREPWPWXIESPHSMQOXNNPDGWIRYSYNXLXHINTQRPJTEYDVXWZBQFXK");
    tmp_msg_0.type = 159U;
    tmp_msg_0.access = 177U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IKDLESWKDNFGFUGN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("IHFPTOPOOWXLKBTHISHHRDVLJRQUXDTSEZSOBYTJSQTRCDUKI");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 25109U;
    tmp_tmp_msg_1_0.lat = 0.11659662903856616;
    tmp_tmp_msg_1_0.lon = 0.15385247447638684;
    tmp_tmp_msg_1_0.z = 0.35274309759420086;
    tmp_tmp_msg_1_0.z_units = 249U;
    tmp_tmp_msg_1_0.speed = 0.4378505816742395;
    tmp_tmp_msg_1_0.speed_units = 89U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.04286062851216099;
    tmp_tmp_tmp_msg_1_0_0.y = 0.7721191917813437;
    tmp_tmp_tmp_msg_1_0_0.z = 0.101875770504672;
    tmp_tmp_tmp_msg_1_0_0.t = 0.8378958795606148;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("EVRHXGFEYPCPMBQWLYGMAHRQPGWGZQZOSNMOUIPJVTWVOZVLMXOGNIYXFXCXPBNTEFMQUFUADFCUUJLZPEAWZWKVLEMDKPHPYRSWZWYHNHINDRHSJDCSOSMMFBLDAZACLMBHRRUTEBBQGPZTXYJKRKVEFODGJBXTXSODDTIJOLNSLCYOVKGAAISQHRNAXBKPKIRDLMJHLFFQWVQTIKTTKKICDCNIAJFS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FollowPath tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 52591U;
    tmp_tmp_msg_1_1.lat = 0.7857624390433948;
    tmp_tmp_msg_1_1.lon = 0.8177474468533743;
    tmp_tmp_msg_1_1.z = 0.15110360818536606;
    tmp_tmp_msg_1_1.z_units = 85U;
    tmp_tmp_msg_1_1.speed = 0.38298447536856617;
    tmp_tmp_msg_1_1.speed_units = 219U;
    tmp_tmp_msg_1_1.custom.assign("NJNYSSROTOMBIGYFXXGBHUNVAXZRQSCLKOJAEUIDLUXNGLRLYUKUSNAVTVGGYFKFQTPMWOGZHFSSDROZYUCXIXDQDWHEXIWVUTLDVPFEKCMZF");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::DmsDetection tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.ch01 = 0.08115085473238137;
    tmp_tmp_msg_1_2.ch02 = 0.26106951915885046;
    tmp_tmp_msg_1_2.ch03 = 0.0924015687184988;
    tmp_tmp_msg_1_2.ch04 = 0.6070341336027848;
    tmp_tmp_msg_1_2.ch05 = 0.4681006403601845;
    tmp_tmp_msg_1_2.ch06 = 0.212602015765064;
    tmp_tmp_msg_1_2.ch07 = 0.4026043617871512;
    tmp_tmp_msg_1_2.ch08 = 0.747795817496493;
    tmp_tmp_msg_1_2.ch09 = 0.7934558530298413;
    tmp_tmp_msg_1_2.ch10 = 0.430017199335997;
    tmp_tmp_msg_1_2.ch11 = 0.5964015091989826;
    tmp_tmp_msg_1_2.ch12 = 0.15468347836867558;
    tmp_tmp_msg_1_2.ch13 = 0.6201235153922342;
    tmp_tmp_msg_1_2.ch14 = 0.9419900835276687;
    tmp_tmp_msg_1_2.ch15 = 0.5046179294191553;
    tmp_tmp_msg_1_2.ch16 = 0.29107114746629525;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("WJOEPTTBDYBDGHBNVYHESCHHWPWUNDILSRSMVKGRYCEYJBPMCUZTLSAZZKHSGCMWZRDQDCQPIFFUKIQGDSYXBOMBMAXXYLWNLCKFJXKKOLUBOVENAVGFKHVOICPYRKOPQBZTOXZAPQRGLVVQIMKBZIXOILPNWJDCLXDWXAFYHTNJDFMGHAUHAECEPJJTUERZSMGXEEFWVIW");
    tmp_msg_2.dest_man.assign("VBRMMGALJGPKIYEMOCBDVQFEXPYRMOXLWKQJSBMTTJPTWNVCVJIFAYMDECVNXIXCCTRGXFIYZESNLUZDXF");
    tmp_msg_2.conditions.assign("NDZIULMLQNXTTHIOWCDFTFRAQSDAFVLBNYVZUOGBGQQNPXCQPUWPGOXJWGWHFICSLIRPHJRSJHEROAOXJXESKUCVPVTZGVLYYLHJBZSRNGMQQCTFXBNEBPLELKTDDAMDQXMUEUPYIMIYEFEGEZNWSVWAKYZKAMJUHMDPTEJXRHAKPESKWXRISFRRBDTMVDOIOAPMIONAWHNTYJKKFCFBZFSGLVDBRQKGYZXWCUUOJQBYYTAVOC");
    msg.transitions.push_back(tmp_msg_2);
    IMC::VtolState tmp_msg_3;
    tmp_msg_3.state = 169U;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.09464978073203778);
    msg.setSource(40758U);
    msg.setSourceEntity(27U);
    msg.setDestination(56863U);
    msg.setDestinationEntity(134U);
    msg.maneuver_id.assign("MZWXYEOSHGOBCASRZWBTPYHGWAVMEGROFQFFOHQSDBVMGWUWFPYFFTW");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 9394U;
    tmp_msg_0.lat = 0.2587768111819755;
    tmp_msg_0.lon = 0.03411009986444147;
    tmp_msg_0.z = 0.9082394133227124;
    tmp_msg_0.z_units = 156U;
    tmp_msg_0.speed = 0.4493899534209035;
    tmp_msg_0.speed_units = 92U;
    tmp_msg_0.roll = 0.9694691836224686;
    tmp_msg_0.pitch = 0.7350795174959628;
    tmp_msg_0.yaw = 0.3552788067205497;
    tmp_msg_0.custom.assign("XGHEUYTHVMTQNLMVDBJVMWOVBBCYOZAIDYSRSPQXWUNSTKRJZYMWPTCHKCPYPWIOALILWQNHXBKFNRYDIFDXWRZWGQXEIDHUULPVXNPDPMUNUKAVAPOJZGFUCCHTCHZDOGAVJIASDYXQGSZTWIJLHFMNQQDUSKV");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.26547924725041483);
    msg.setSource(24632U);
    msg.setSourceEntity(81U);
    msg.setDestination(55114U);
    msg.setDestinationEntity(15U);
    msg.maneuver_id.assign("OTQVZGSOOURJXNQNQHFKXWQNMVCDVFBKJZFEGAYPZYZGBCTCKMZAORVPTDSTEAAIRWFYGJLBDKJFMQVEMSKWYFHDODHTLAHVSXUMDATOZHOEDCYHNPZHKQQVMYUMPRASFTKIJNXCEIEJBBGGIDMVGCWNBFZNJBRLLWACWHOAIMWBBVXGGDPKBWDLMNJPSQKTGLYSELHOJSRSXUTILXIWXECUPT");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("KUPZTYGZLPOBZXRLQGTWTJDQRBFAELZMOSLUWIMFZNHMAMYUBJBPJAVJNRQDOYXGXNDMABDVKDHOUXKJIXUXLFLGTOYRQSPFYGYTTHNEPJQTHOZSBUONLSTUGAMGLHPBOQILSC");
    tmp_msg_0.formation_name.assign("VRZLNJWPYBDMSYYNHGD");
    tmp_msg_0.plan_id.assign("CUOGYKOSJVMVYOQSAEYFDWUGMKCUBDLIQPPECOCAQSWGWZBDTPYGB");
    tmp_msg_0.description.assign("YJANUSZDDXNYYUFFPANECJKTGIPPXGQMMNZGIVJDRBOYOLUXWFARNRRNHTBFTMJSUEZEJNJWEQGLGMYCHZVDXYQYQFJOVEFMOXBLHBKKWIKTUGCMFBOPGNQMDKZACLUDTUWIOHQGBLAERKBPAUXIIOJLVWVJHKERYIRPBCDIZSDFAPCMWSCAQOKTWSXLYABZETHHSYCVPZGXRCVWNTAEMTLBRICQKZSLZUVQGFWPSWFJOPHESVURVKTXXMHO");
    tmp_msg_0.leader_speed = 0.8490874173613658;
    tmp_msg_0.leader_bank_lim = 0.9679120627969947;
    tmp_msg_0.pos_sim_err_lim = 0.8180137208813745;
    tmp_msg_0.pos_sim_err_wrn = 0.5007460797276948;
    tmp_msg_0.pos_sim_err_timeout = 49737U;
    tmp_msg_0.converg_max = 0.8738030554777864;
    tmp_msg_0.converg_timeout = 40087U;
    tmp_msg_0.comms_timeout = 19617U;
    tmp_msg_0.turb_lim = 0.3533317572950352;
    tmp_msg_0.custom.assign("XSVCFNWUCTHIQCFBIDIUZIAYECRAVXSBEUPNRNORAJPSFMGEWVKAJHXCDFKYFXEBDDKTHQWOLGXYRZHLAWCTGPRBRPATUAAGTTZHIOEZJTKQDSFZKYMJMHFJAOUUFMTQJIPGQVQYWJDDDLSRLISRQQKCVYLRNLHIPBOJOTWYFBOGLWZWXJIKMKXYWMBNBSOODHXOEVGGMCJURNNLLSASVUBUGBIMUHZKQYCWMEVCZZMSVENX");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.46118915577309216);
    msg.setSource(41582U);
    msg.setSourceEntity(153U);
    msg.setDestination(62642U);
    msg.setDestinationEntity(218U);
    msg.maneuver_id.assign("BOLDRGWDCSGJCEADEGGXKIPJFMOZPGFJYJGQYOLTWBZALFZKBRDUJNFUVLKBEQIEHQVZFSPKZDDOWRVOEHTMAEIIUXHMHVRVVENTURYWEWZVSDMNPASWSTIFXGGNQJPXCDVBPVYOQPCISPATAQAWAETIGKIYLHSUZTPIWUXSWNXSCNEBL");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 58109U;
    tmp_msg_0.name.assign("QMODVHOTWSKNMWRAOYAJDYZNXBXVANNGMIEQEYDWGABSNLPTHPHLOYUXFUVLBHTBMOCRPGNYPVLARWKFQPOGEEFTZKCLBNVXRTYT");
    tmp_msg_0.custom.assign("HDDSDAXBKHWTXUVLADYSVSYKHYGRNCFMYTRIRYHITVMWAEPHKNFERVYUZREQIZWHSRGKEQZUMCHOTGPOLXXARKCWPWODNGENCSBFXIUSGTIEDAEUXBLAMJBSHMBULBOCPIMUOPTAJISJZSQJTCYXFOCKJGLVTWBPXMTFQVNPIBIAJWZNOFMEPALKCOFOVZQVPDZZKLWLYNMUDSEJVKCGBFLKGEJFZVNFDJR");
    msg.data.set(tmp_msg_0);
    IMC::SimAcousticMessage tmp_msg_1;
    tmp_msg_1.lat = 0.9870064744246572;
    tmp_msg_1.lon = 0.20465813511476105;
    tmp_msg_1.depth = 0.9514527481183481;
    tmp_msg_1.sentence.assign("NKYCYYRGZXFZGMEBPQDXRNXZPIKIDNAGINMUKVADHYHPLVUACMVJLOQWSVFFTEMKPLMKROTPUFVFTFDBZINYNOBSWHNUPJJXGFAPCWQZKWBXBAGHGELMJFFLIXRAOCDQTMVQBCYQHWNSMKIZEABHQYSWVWCUCKZMLBEGDOBSDXECRUOTPOIGICSEITUMQUDQLARORGPJHLDYNXUOJSVHYK");
    tmp_msg_1.txtime = 0.6274952109314704;
    tmp_msg_1.modem_type.assign("LAJPCCWKNBIEQAMKDLTXUPVCVBHRZWMOUSZCMFFFYYPVJAZBEXFYXILKKXNXSSJYDWHEMFAWSMUHDOADREZUDMTYKBNRUYHQGEKGWWIRBJAOEQOTLTBBLVOPMJUFGWEMNJJZVRFAOKJRLLFKHPGGYDVBREWIYRNNFKTXUTHWTPNCLSMVIWVGPQFOGEZPJUXDUGACQSQIZSRPISHNEXPDCZX");
    tmp_msg_1.sys_src.assign("KLMPMEVYSHNEICAPEMSLOESNJQYGNBWCNOGPLARXQBAHQJGVXPHTGCKINOMWKNRKJIXFUSJTJTJXDXFFURAGVNINRPUMUFVPOHEWCRZKKGUWWVQYRKLAHDISZHBGTBZTLWXXNEFCEAVRMDLIAKFXYNADOEWLVFCY");
    tmp_msg_1.seq = 10764U;
    tmp_msg_1.sys_dst.assign("NWZLMHCYDRVIMYVMLKYANZFMIVDSAQFRZJYOGSBLSELBZOIUNLOCYIWWFASDOTXLTPVDMJSXXIYCWTEJZDKDRJLSHPWYBZAOSBWVHLZJYEMVEGHGPXQJNRJERNWRCZEQIOBJQBSXRZVLNECKPCVSSUKPCPKCWXHMDHTRUNTGUPDIHTEGWGOKFUOFAIVQFGVFJFUQFGDHXXTQPKXGORBCYONBAAXEYWHEPC");
    tmp_msg_1.flags = 200U;
    const char tmp_tmp_msg_1_0[] = {20, -57, 52, -71, -98, -103, -40, -82, 109, -4, 10, 43, -115, -90, -42, 1, 43, 38, -126, -60, 85, 56, -46, 106, -1, -101, -15, -118, 70, -4, -18, -78, 119, 29, -47, -89, 62, -71, 118, -71, -37, -53, -49, -22, 96, -56, -105, 75, -128, 61, 14, 9, -7, -38, 29, -111, 81, -72, 77, -68, -118, 54, -42, 86, 121, 84, -54, -47, -112, -59, 50, 69, -71, 97, -9, 13, -87, -100, -52, -67, 105, 97, 7, 5, 115, 61, 67, -102, -53, -47, 48, -17, 22, -69, -54, 27, -65, 24, 86, -11, -96, -33, -15, 81, 74, 74, 125, 93, 30, 7, 98, 117, -74, -102, 80, -56, 93, -45, -111, 45, 91, 36, -1, 75, 73, -58, -26, 9, 26, 33, -87, -52, 85, 99, 108, 93, -122, 109, -105, -87, 22, 105, -98, -119, 35, -14, -126, 93, -70, -16, 60, -53, -118, -83, 85, -73, -60, 103, -33, 17, -79, 28, 125, -95, -106, 88, -3, 14, 71, 9, 77, 34, 4, -11};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.05976883224412277);
    msg.setSource(57821U);
    msg.setSourceEntity(4U);
    msg.setDestination(43747U);
    msg.setDestinationEntity(153U);
    msg.source_man.assign("JAKTWNPBUMWLUHUJVUFSMNFQDMOTWWHWJNYSITJCBJMYCX");
    msg.dest_man.assign("IPXZMSJRRRZHCGAKLONFHQBUDCJDAIRYBHKYMTNAETBMMUHGPQFAEESWXRVXIHBKXZTAYRIXYSWGIBNEWLTGWHYZVGJVCNMLNQSXUZVNCXUHPSLRYDDNZZMGJNCWKHUYGAOEKZEJQAINFLWMICFLOZQLOBCXLKKVTELPSTCUOAEXJBVBTCEQDWLDOSRKAYPFKBVPIMWJQGFKQITBPHDUJGPEDODJFA");
    msg.conditions.assign("SOAIVXUPIWSCRESGCKKDRDIAQMOZFXRYWJDLTJXOLYBJDAAGRUMAVMHKGTYYQXYVXSRWTUBJKEPGBYVCBSPXMJCVOZZTDHMBUSHBFMECEQYFNONCHRUQQPQCVLZVKCBEDBMANOSESJTLHPFGBPVYJMZNGOPWFCAZXLNEELZJRFQLKSWWBPHUNUHWTPATGUQJDAPIFGIJCOIOLRTDMYTRLXVLWWXNK");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WAZNKWOIILNRDZFACWTKEGIJIDVOUTFWPPQTMJCJPFZEVAQLPPFHSNOLCESXYVUMZLHZJEZBKHRDUCDSDRYDQHZPHBXFUDAUSKYBQSEOJUYBROETTWHAPSIGNNGIBQTOALVJXSJGJORTVCWGPFYGHMTXYLQELXVNRXNCIIDK");
    tmp_msg_0.dist = 0.8652102260158869;
    tmp_msg_0.err = 0.5953069235861349;
    tmp_msg_0.ctrl_imp = 0.19826332653584766;
    tmp_msg_0.rel_dir_x = 0.7811170465590073;
    tmp_msg_0.rel_dir_y = 0.8469886612472659;
    tmp_msg_0.rel_dir_z = 0.9262303492871266;
    tmp_msg_0.err_x = 0.4743864000389727;
    tmp_msg_0.err_y = 0.29218552026555344;
    tmp_msg_0.err_z = 0.1733595674999685;
    tmp_msg_0.rf_err_x = 0.6889347733340296;
    tmp_msg_0.rf_err_y = 0.0478649780974324;
    tmp_msg_0.rf_err_z = 0.17421993160054827;
    tmp_msg_0.rf_err_vx = 0.19944078911618146;
    tmp_msg_0.rf_err_vy = 0.9879219620378425;
    tmp_msg_0.rf_err_vz = 0.6470130415357361;
    tmp_msg_0.ss_x = 0.5717294046798749;
    tmp_msg_0.ss_y = 0.9444733935836493;
    tmp_msg_0.ss_z = 0.796426543449964;
    tmp_msg_0.virt_err_x = 0.5777280066165308;
    tmp_msg_0.virt_err_y = 0.065517819300287;
    tmp_msg_0.virt_err_z = 0.10676540508158183;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.7166159757987496);
    msg.setSource(6245U);
    msg.setSourceEntity(242U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(117U);
    msg.source_man.assign("XNDPWEABETFYCQFEBBBXAWUWTQMLNDUQLMUSNZKXJCMTSXCPYZCKYDIIAJDDQUKNMZJQYHIYDPNXQRLWAMGKVPZJUBEMZXHNMDYSITRPVFNBXHOSVZPXVATSGFIGQHBOWFJJQTIRFJFCDOMSGIJHEIOLQMZWDLGQVCCCKREROVKRGTCSAHRKVYHEA");
    msg.dest_man.assign("ZGOYBWRSCKYAIBMXGSNMNGVOBBXFSYVFVXLVSRIZPMAFJAZZSBDEMKOUFQEOFMKHCNPJDKLZLPDLGARMCUIUJTRLFWMWJVYXDTUIZTHOHAJQFQTIYRKMEEAGZJJXESRGYNLDETLHUCJYFAHVYHOQSIKWLGEWNQWIEACKVMPGZJRBPZHDYVUHBOXXIKLGGXQSXIOZPCTUDNPWFUCNBOVWSETPNPCTJPQBMKUKAODTDI");
    msg.conditions.assign("EBUEVLBHCSZYQSYISVQYMGFCUFKWNFBHCZARVYWNKKCBUSECEXDPWKPQBFGQEULLUOJVTQXWHULQXGMARPZIQBMNAHYIFPKSAJGNBJZNRMNETFNCEFRRGGYADPAVPDWLLOSXGGCLGKNHXKRWJRWNXIZNOWTUJPDUQOB");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5252448815610099;
    tmp_msg_0.lon = 0.7704591193163097;
    tmp_msg_0.eta = 1424907086U;
    tmp_msg_0.duration = 59681U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.4085900530819816);
    msg.setSource(33574U);
    msg.setSourceEntity(1U);
    msg.setDestination(62390U);
    msg.setDestinationEntity(170U);
    msg.source_man.assign("GSGDCWQGOTARWRLWOTHJCZEXITPFDOEMYXLDWLQABAZEWPFCWERRUVHPHKIBIMTAHFBBXAKVYSKCFRMCQIPEWSHXAGGQNDQIFOSIYCRXVNVDKPMHTXBJKOFPHXULYJZVSJHTANZPSFDQUPRYRRGEUSFLJBWQHTMUJALUBQDMOAIJVMNGQGEKGHNWYULMBYGKDVPWVIZCOJLPIKXBVZDCSZTYNAFXKQUF");
    msg.dest_man.assign("VLHYEFLXVOIQQRVGTZVEWWURIOADIWASNMCFSCKBMFLATUCQXSOIVJBGHQXJQSIHKNHLTQFDUDNHGPMANVLDYCVJXFGZDUSWVZJMSDDYYIXPFFPAQKKZYECJOLLIRCSTMIJERZPWXLBPABDTYNKYHSRMGWNQKOCXUHWRPZZFNRNGAZZKRIYHMRBGKPOYUTJSECVTNUHSB");
    msg.conditions.assign("OBXWMTHPKLJDJVHDJEAHIMJFEJJTPMFHPZTTQGEKPS");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 60696U;
    tmp_msg_0.lat = 0.9911359861907746;
    tmp_msg_0.lon = 0.6795446800722087;
    tmp_msg_0.z = 0.46941422036653846;
    tmp_msg_0.z_units = 162U;
    tmp_msg_0.duration = 30145U;
    tmp_msg_0.speed = 0.09021961871085071;
    tmp_msg_0.speed_units = 75U;
    tmp_msg_0.type = 176U;
    tmp_msg_0.radius = 0.32807075630703986;
    tmp_msg_0.length = 0.37637690330337525;
    tmp_msg_0.bearing = 0.147455810786967;
    tmp_msg_0.direction = 52U;
    tmp_msg_0.custom.assign("TQQEAUQNNVWHQWBPIEGZDZTMRQCJERLRNLLKOPGLDZKGUTADLZMIMTCPNATRCNPKYHKRGSJKNWBCAYXYMFXFIGMHZLTUVVPVYNGXOSQJCTUBKSCFJKVSUUQOIPZUDLGHEEJQUPPEHVDTSOFQNSACICHRGLYXAM");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.2991083956879388);
    msg.setSource(50387U);
    msg.setSourceEntity(47U);
    msg.setDestination(54871U);
    msg.setDestinationEntity(169U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IPOKEONRYXVOWZNKKHZBIKJRYTTCCUAVSHFLFAPBKEOYDVAFIWMUEXDJZZYURDYGBVURIFNROTBGEWMMDKSWRCPBVZLESWXDFBHTLCZVXBDFUHDPSSJTYYDNGLAPWCCTHLVMBHIFKSUZECQUPCFJKQGCMJQMZQHMJUTKTVSWOHEXINWVYUNUPAGTHEFDSQRIATQELXAIGHBMBAKWGQFZNJZLPMSGPEXLQSLNGWMJAIJNVOOLIXJDXGRCORPNYX");
    tmp_msg_0.description.assign("WIEVXRAVJDDKJNJZBNBCQWUWISABTTXMAEZARHQZXSKCRGZCQKDYWTTTMUUHJMWVHGIMRXWVPPXEKOOFQCBFYTLIWQUOTXNLYVZCQJKCVESEWHQVZUBHKBSLCEGJCKPYRBEMNLRAZVBLIYMKDTPTGFUXFDHYDUASDXSNEDASRZOWIRUZGGKJOOMFMKIOQPVTOHQEGZLMFFBHUPFNPYLHG");
    tmp_msg_0.vnamespace.assign("VAHHQTUNRQJNSNDEDLRZXOGSUZGWGTBUPKKLCQLTTVXSPJPFHHBXBHUPTZCLIVERGCTZIPSRKGETPIYOYJZWCUQOZTAJFSFZVBSJMUFXOWXKLASEVBZKWCRYSGNPMHDLQEAAEBXKEYXAICYXOMIKEFRFCAKVQIBDJYOYRQMOGVMNFUZLIKIMYDDMGVFQPXN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FWSNDFJLZVURZKZEWRYVIPZNSGFJETGICXURGZOWGILHQAFOYMPNWHKXLSTDDTOGYUOLYBKVHBKGUCBHWCAWIFPMDQTBCLMZFEHEYGZUPYZOVPQCJDGKCCVNRVLIMQPKCQAYZXSAMZXXNXOKVTSSJVSWYPUJFRTHJMLQROMPHOKUUNNURMWOHTQEHHDFSVAWIFJFEEEDCNDBRBANNESJUPKIIBADMXLEPMQ");
    tmp_tmp_msg_0_0.value.assign("OHGTUJZSZQZTTMWZYMURPTFNSVAZSCOFEPEQHYIGDTVTWOMORNFLPXFVGLCTNIJIHDKBCXFBDRBGFSXZBQAGCWJVWYHUECCURHAFVKBMIDJAUWHEDPNIKWWLQCJREFBVEXHUOYLLHACYUJOBPGBNYSAMZGNTAEIZVILXIGYSSQKXNKYMMKDLRDXENWRQMJOQFCDKDTBPCYHRA");
    tmp_tmp_msg_0_0.type = 50U;
    tmp_tmp_msg_0_0.access = 18U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OLFOKZLPYJFFDSOBLQMJCPXW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HFFSCVHRRNQLVHTVHVWNIUCXIDWHETMFZQJPCXXGIWWLASWUBJSENUXXQSLDYIFWHHVQBYDMCMUOFGPJZEZAJPKROUJASTMBWFOFCCNYHPBXRDIJQAGIZOUQTREWEGMXXDTQBPGKNVONMLCUBHVAQIGYZGMPKTOZZZESGLQLBMLLAONYUPYEEKJYNHKSYDABOSMPFGDEORAAMDVURLRAUX");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 62270U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9220830161856537;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8100048163060144;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9337076015780711;
    tmp_tmp_tmp_msg_0_1_0.z_units = 173U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.03024243780814495;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 200U;
    tmp_tmp_tmp_msg_0_1_0.duration = 14202U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.9819805269059392;
    tmp_tmp_tmp_msg_0_1_0.flags = 229U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SLAXYSAJSLGPBZVXWJLXHRTBOLKICTMQNCRJEXCHFOKHQNYAUPNWELFRHTMQZFUKNUGFFOVVYAGCSJFKAQQZGTCKOBIVZYMXDREGWASILUCYEPYDGWDPVJJUOISGGEEJNQTWJRVMBNIMCPAHPCXAOOUNEBEDFBWMPSTURENYJHYBMXWOKRMMUDUKQVNHZODZCVBAIIWBZKLYJVVFLDCXPQYHDGBQSHLPIPZKTXESQAF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SmsRequest tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.req_id = 38533U;
    tmp_tmp_tmp_msg_0_1_1.destination.assign("RSYUBAXESXQNAMOFXYHARMXYLBXETKQNJFDKEOHILYAMUWLBDWTEZZZRGHPNVWWCMZKXEKDJVYRVNC");
    tmp_tmp_tmp_msg_0_1_1.timeout = 0.9561338409610023;
    tmp_tmp_tmp_msg_0_1_1.sms_text.assign("KELVKVDCGFMWFFRSKBXKBAXBETBGLCYSPFPSWAKOYYLNISQLBRHSAMZDADXZQQSYNGAFQWUUPEHFGINVJIPLCIQTEADLXCYCQHFYYCOZPTTUMOQEPZWVZGGSCENGHNHRKJIDATNVZKUXEVLUVOUJOYWXVU");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.3806233045024834;
    tmp_tmp_tmp_msg_0_1_2.speed_units = 144U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredPath tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.path_ref = 1561825731U;
    tmp_tmp_msg_0_2.start_lat = 0.19486354738102252;
    tmp_tmp_msg_0_2.start_lon = 0.8535430461403072;
    tmp_tmp_msg_0_2.start_z = 0.8951366827053913;
    tmp_tmp_msg_0_2.start_z_units = 38U;
    tmp_tmp_msg_0_2.end_lat = 0.17529426822939054;
    tmp_tmp_msg_0_2.end_lon = 0.6784503383114223;
    tmp_tmp_msg_0_2.end_z = 0.26579887778664957;
    tmp_tmp_msg_0_2.end_z_units = 45U;
    tmp_tmp_msg_0_2.speed = 0.8576402924172299;
    tmp_tmp_msg_0_2.speed_units = 219U;
    tmp_tmp_msg_0_2.lradius = 0.28794227024882324;
    tmp_tmp_msg_0_2.flags = 25U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.6844300970492256);
    msg.setSource(64604U);
    msg.setSourceEntity(64U);
    msg.setDestination(34778U);
    msg.setDestinationEntity(208U);
    msg.command = 130U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ABDEOVWGPVYUYI");
    tmp_msg_0.description.assign("WQSHVREZREXMLPLBYGGMFWDKOIPDSXIAMDSJXWBBUYDGZOSEXFNZPFDTCVMHZITHRPOWLIQONKTMDSGKXJLIVDJTLSUBRDLTOCAQGHXYYZPNJVLKJFWSOIUCBHJJBCOSVCUOFGNPLQYFKQTPUILZNPFUKAUQEMAIVWBEUJNFYRARJMWUVAHPRVDFTEYZXQRSCCORJMYEZGKVDGZVCETFCMLBQAYNC");
    tmp_msg_0.vnamespace.assign("PXRVLPGBVDPWOTJPZNOEZYGAYJERRMJZEUZFMOAWRWHEOOHVQDQWXCPOKBCWGVHSTLJICQTXHXBRIDCXGFAYDNCGNEXHKXYFYLHMYBETMRFDUJOECVDDSZBUXBNUWMTLIUQSQSSHFGFSTMZBLFWEPITPMREMMQKDZVNUYAUBPGBAFBAILYKJNNRLWQGTZCRUFXK");
    tmp_msg_0.start_man_id.assign("NXEVFPGCJYSVHSDTMZFZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YRPRUTBTFSNTFAPXQCRUYHDCALJMNKEBVOHEXIXNMGJVBIOXKKAMYIIXDWYWCQTPVHSMUNGECXRCDYBFOJFTMFYPIFBV");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.08295884984268087;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3417253564665297;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.019505072830248715;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 252U;
    tmp_tmp_tmp_msg_0_0_0.duration = 23941U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 51192U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 17520U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.05181561990183958;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WQPEVXGKCW");
    tmp_tmp_msg_0_1.dest_man.assign("KOFFLPBFWRNBNFDNBRZIGPCONZMURHOFVALQHKMSAOOYRLNIDTOBVNEBGTHSPPASLZVAXSULQDXJVWQBVFJEOYSCMHYREBYIBTHWHUMHZWZCJDMEQRRGCWZQYQHBBHVVKMILADAVKVFQIAJSJZJYGTE");
    tmp_tmp_msg_0_1.conditions.assign("YNHPIYPLSCWCRZBORJDFWZEVXVQBESZPRTFMFDCPKARQNCJXSQVDONXWHDNLHDLBGTALTGJEPDUYQAKERFOJRMRQUUXCEVJKEJYQZBUAYSNQBGKLPKVAWMYCXGBNPHMIOBLGTTDSYI");
    IMC::SetThrusterActuation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id = 107U;
    tmp_tmp_tmp_msg_0_1_0.value = 0.15181045149046413;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FollowSystem tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.system = 34236U;
    tmp_tmp_msg_0_2.duration = 39360U;
    tmp_tmp_msg_0_2.speed = 0.23843645493163124;
    tmp_tmp_msg_0_2.speed_units = 24U;
    tmp_tmp_msg_0_2.x = 0.07545989666320274;
    tmp_tmp_msg_0_2.y = 0.2220007761282924;
    tmp_tmp_msg_0_2.z = 0.008655740793032218;
    tmp_tmp_msg_0_2.z_units = 62U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::RelativeHumidity tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.23263713303361333;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.40805909083183745);
    msg.setSource(35928U);
    msg.setSourceEntity(62U);
    msg.setDestination(3325U);
    msg.setDestinationEntity(48U);
    msg.command = 213U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LXLXKGOMIJUIUW");
    tmp_msg_0.description.assign("LBNHFBXPZSQZHXGISMWNUBPAPWHTBLUJYKSDCBMMQKXYKFSUFMJSCKOGTJPRXLLJO");
    tmp_msg_0.vnamespace.assign("WCBPPFXDUJRYSZSWIWLBB");
    tmp_msg_0.start_man_id.assign("DBDEHWMFHSWDRXUQQIAXEKVXPUGBQTGNEGKTVBRKATARVTSCXHXIGLCSBUNOLJOGV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZEDFCQEVXTHWUQNDXLOZJNFFAODHDYHIASKBLKYWPZEYQWOMQTBOXCGBLTVRFSCYILHPJEOHFKYDBKWVKMUZJIGCYAUHSYJIAPOYAEXNXPAQHAFQVMLDSLBWHITUXVRXKGCGHSTCMUCEDKUVWPQZOGVYXGZKJMRRXLIMSWFEDDEKZYZDQSNVTPNPQVMWBWRFG");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7312663942290839;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.007852120168252763;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3949251312060952;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 6U;
    tmp_tmp_tmp_msg_0_0_0.duration = 46713U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 9115U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 5453U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.9299424436207836;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Announce tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.sys_name.assign("JDTOTEYRLKAQXBKMWJFURXTBIYRTUPSCXFTNYMFSLVCXOVZIJERNLZKOSFBHGZDVTZYHCRHFLQQVQHAGSSWGBXOWNVCTRHPJUNXUEOANEFAKVKWCDACFCGSDUIORYLJAJYUSNNIOMYFLZPPRMMBGPKJPLIOKDBZIDGKRYEDZPZVQGPEEOXAFDSVNGYIHNHXIQBDJQEQSTWVITFTMXVWMCBCEGH");
    tmp_tmp_tmp_msg_0_0_1.sys_type = 67U;
    tmp_tmp_tmp_msg_0_0_1.owner = 16844U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.550577780981095;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.15873494997832527;
    tmp_tmp_tmp_msg_0_0_1.height = 0.11315543583124354;
    tmp_tmp_tmp_msg_0_0_1.services.assign("MZDEVQSUFRCRGZLQPMGAUKAKUDIIGZTSCMKQOOBPHMUIWLGDWCIAVVSDPEERHUSG");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::StopManeuver tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityList tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 168U;
    tmp_tmp_msg_0_2.list.assign("RWLGTYDIHDOTKEOZAUMIQUJW");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.10450874322188741);
    msg.setSource(38502U);
    msg.setSourceEntity(240U);
    msg.setDestination(24912U);
    msg.setDestinationEntity(224U);
    msg.state = 1U;
    msg.plan_id.assign("NSOEJAQQDRHJYOXUZEKSHVBUVMWQKXQJNWWCVTGWLALNIZFQNODAULGTNLXMWPHEFGSFHSRDNRMKIUYKUHOAPZPUCTDBJGDXIZWWMPFPEENXRQHNCNEAPVRZKFLTWXUKLYIARMMSITCCFBUFOMNGCXAMZZLRCOVFPQBGESJCHOVTWBSQBXIGKYGHVCSFLDJWIIOAOHBJQGMXPYLDVDJZJTYYASUAEDPTYLHOKXIJBTGCEDZY");
    msg.comm_level = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.4128523209979703);
    msg.setSource(54741U);
    msg.setSourceEntity(184U);
    msg.setDestination(41935U);
    msg.setDestinationEntity(17U);
    msg.state = 238U;
    msg.plan_id.assign("URVWUOCEZENPWNGZKJFQUYIJEPLRDVYITRZAMGNOLTRBYHXMPSZTPACFZGCJRBHVD");
    msg.comm_level = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.5923244234166419);
    msg.setSource(52485U);
    msg.setSourceEntity(246U);
    msg.setDestination(19497U);
    msg.setDestinationEntity(212U);
    msg.state = 85U;
    msg.plan_id.assign("IWKNETBDXHMGWPNNRXXAFOKMLYPZOUJIUPPBKFWSFRAPFGQJXGGLDRVCSLNJQLRKZGEOJPGYVDFLEQTKCWOENBHCJDYZVAJQHFNUGEXQKPYQMHBPYFPYBMIHGZWWMMSFOAKBDUEBSMFIXPOIKAYZTJIWHQUHHAZLOVWL");
    msg.comm_level = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.17671654849282425);
    msg.setSource(5206U);
    msg.setSourceEntity(162U);
    msg.setDestination(48901U);
    msg.setDestinationEntity(243U);
    msg.type = 206U;
    msg.op = 133U;
    msg.request_id = 16413U;
    msg.plan_id.assign("OSVGMIZPYRCSCVZEWXBVWUIHWFRXJPHZTPNZMDMNTFYVAXUSJGYVKCOCULBRCPVOBTBIOZSMGFTPJLKFFMDPBFCXEBTLHCYAPKGCORIIPRONAXXQAAUQKLZBWSKEGUDUJRIXDNAIDTTWFYZGJNIEOFOCFQHPVSHTKMLJDMELWLMBTOGJUTNAUXWEHSYRSILDNKREDVKIBKYQYDKNZYQSJQXMNHW");
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 4675U;
    tmp_msg_0.status = 117U;
    tmp_msg_0.info.assign("KCVZHEOOVR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ONGIGTYENKUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.7738470445454689);
    msg.setSource(44181U);
    msg.setSourceEntity(201U);
    msg.setDestination(64016U);
    msg.setDestinationEntity(157U);
    msg.type = 154U;
    msg.op = 252U;
    msg.request_id = 21571U;
    msg.plan_id.assign("NJYAAVDXESZXOGTNZHYRIDJFMTCYSXMPBQSQJNBVALXINUTWGOTRSBFTIZMWEOXZHGUBRATUIUKZUYMWBCPKEPEQGQHUFPKKJIYOVAWKRFDLCZKENMQZDKWJNDVVBSBERDEGUWMLBPNCLAZFPJIXSRSVCLQFGNMXQHICIVVLIHGQOSMQSOQHZIYYJVAOAVDHFPWCLLCFRTYDARWHUSKLBGXH");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("BRBSIGDZSQRJFXZNWHYRLQPWTQTDARWNSBYVKRTREPOXVTXXBOXGUEDULWCWHQKGLIGWNJZUTRXMXMQYMUCSADYPLFWKVYDHJQQAAFIKVGTMADZVTZATCDALUIPULPCNBIZKELBUSOBHCIAFKNHXHDPWQMRIUSOMCBKFJELZQOGYSMFOPOFDSGJSPWBCJKAETIZHYENEUNMTVGGOFMEJKFHJXCYCEYJLDVUWVVNLYNZZFJP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AVKPIFHTZBBLIWUMGEPTAZXFEFFRPQSZNCBNWICRXKCUUMMANVDKZKXTBYXOCMEBHJLSDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.5731496241321027);
    msg.setSource(40359U);
    msg.setSourceEntity(43U);
    msg.setDestination(51753U);
    msg.setDestinationEntity(191U);
    msg.type = 148U;
    msg.op = 104U;
    msg.request_id = 55481U;
    msg.plan_id.assign("NHVMYNUWXOOGJELZVBAAOTYWZNKRMMFGSDCSNQHKTBHBSQKIMENPOJEPWAUSITAXMYUGDGWHIJHCTDOLZKDUEGHEXWOVQLHBSKJTXSSCLSVXWZUGFWZVCFPJPWQRJFDARLBRVJHGKUFBJTOI");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 151U;
    tmp_msg_0.error.assign("FDHUNHMLVLNZMQZZJXOHFWNCOWFNCRIABMBUJVKGOGSCHEEQAKFLEPMCPLHQPGTAARIKDFYOJVLYCAMQNEZVJPBMWSQJXNQTPTVKVIXEOBNBIXKMGXUQSAYIGJMPXJIEOHCNSAZHXRKNKALSSJYFEKTUVAXDTUOQGPDCCUDLZMGDSGFWUWYEVFRXUHPALYOZBWJZUDUTHYCHPRRTIELOQTWTKBYIMTLFRBIDFSRWYX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JGPAISPWQBKHHYTYJGWZKXDFSSZDNWVJUORCTZCUVZIHVGIPMAUFQHEZBCTLAAEOMDMKVXRGOVOYRDIDSHCGTAUYEPAIYFVKQLLDXZPGXHLJETWWSCUQYUBDXEEUADDGEKLRYLZMJSQTRTCNKIQIWBMRZSNNWRCOFARSORKXT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.797145001801093);
    msg.setSource(47955U);
    msg.setSourceEntity(97U);
    msg.setDestination(64398U);
    msg.setDestinationEntity(131U);
    msg.plan_count = 52256U;
    msg.plan_size = 1646219519U;
    msg.change_time = 0.833436526532462;
    msg.change_sid = 10015U;
    msg.change_sname.assign("QTWTNZJDZBUYCHKDUBAYYOVTLOXPIKGHFRPNYBGWLOWQVBZCCGJDCNMIHZQYMIVTFSXZZMJMUHFWCGRUORLMIYAOZTEREAXWICYYISLYXSSGPQUOGZKCVLNPFAHCGJHPKBFHGTVQVJQRLDNTKSWQTQVEJJEIOXLBMRWZMVOFKPSAVOBQRSANELIFEATBFZHADTXEODRPXYDKAQCGJUKFPCPWPGIMHVBNLLFX");
    const char tmp_msg_0[] = {125, -80, -64, 126, 55, -24, 118, 38, -22, 76, 64, -97, -66, -118, -90, 28, 84, 94, 111, 98, -98, 46, -109, 125, 18, 94, 19, 56, -22, -51, 82, 99, -109, -123, -34, 16, 6, 6, 116, -103, 100, -116, 101, -22, -31, 57, 22, 23, 4, 66, -116, -17, 25, -112, -97, 95, -50, -33, -33, -94, 78, -40, 103, 14, 44, 125, -107, -11, 42, -3, -88, -24, -11, 51, -79, -49, 13, -128, 45, 55, 2, 37, -34, 117, -42, -86, -104, 110, 43, -87, 77, -3, 41, -40, -33, 45, -52, -57, -66, 71, -40, -96, -84, 17, 113, 98, -90, 1, -21, 101, 73, -63, -20, 80, -109, -79, 117, 0, -75, -89, -58, -90, -73, 124, -57, -90, 67, 108, -119, 101, 21, 97, -85, 32, 49, 10, -21, 92, 55, -119, 2, 97, -1, -47, 67, 38, -12, 70, -61, 0, 77, -70, 55, 68, -36, 83, 42, 81, 9, 62, 21, -68, 10, 124, -18, 70, -59, 33, -120, -27, 99, 126, 25, -47, -90, -32, 96, -75, 32, 6, -122, 17, -4, -39, 73, -23, 113, 39, 87, -121, -15, -5, 34, -65, -52, 89, 107, -14, -9, -38, -119, -28, 63, -80, 28, 40, 25, -117, -31, -12, 110, -40, 115, 90, -122, -115, 85, -6, 111, 98, 40, 21, -109, 18, 85, -54, -56, 7, -110, 11, -12, 21, -98, 60, -95, 46, -43, 68, 80, -15, 38, -100, -40, -121};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RCMYLJXFDWRGIFLVJRIAKQGGNCIAZBDICHXPOY");
    tmp_msg_1.plan_size = 10710U;
    tmp_msg_1.change_time = 0.4035203684379317;
    tmp_msg_1.change_sid = 35746U;
    tmp_msg_1.change_sname.assign("USUJAGYQDZZGOPTUPACABMLRPLGKNSFYFHOFQQJFJDJCXRUQWPDKPUHZDMJFYNHHECKXQHOAYSCSSTINNKXDLAJFWQZCXXRVZWIVCIICTMLFVWJLTACLFXRBQTPOGGUVAHQLMHNHYVVJGKIMPSKRIECRWDBGNPYYEBRXVKPUEWRBVTUBOTSMOEGYFTBWOZZIJAAQNQSMEW");
    const char tmp_tmp_msg_1_0[] = {85, 119, 20, 82, 105, 14, -77, -91, 61, 46, 112, 105, -25, -128, -2, 25, 83, -122, -43, -108, 32, 12, -105, 54, -37, -82, -35, -62, -45, 14, -39, 104, 40, -15, -92, 107, -31, -10, 50, 45, 51, 70, -14, -69, -84, -114, 97, -115, 57, 77, -52};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.7123004222201538);
    msg.setSource(58132U);
    msg.setSourceEntity(17U);
    msg.setDestination(10777U);
    msg.setDestinationEntity(116U);
    msg.plan_count = 30310U;
    msg.plan_size = 3312350166U;
    msg.change_time = 0.8457203658873802;
    msg.change_sid = 54317U;
    msg.change_sname.assign("XUHEWBFZITEGCIBBFKNLJPBEZWOOSOBQCNWXEWQTEYLZACLYCOUPBEFNFWTSQGITHKVSLYOIAUFFJSEVGBJYXJAGOUWNHRHAWLVHLRKLTCZQCMOITHIISRSNRXDFULACEGHMOBUGVETKDUMBNPR");
    const char tmp_msg_0[] = {44, 110, -69, 22, 4, 28, -30, 0, -97, 49, 113, -68, -100, -12, -67, -61, 46, -78, 23, 85, -85, 24, -18, -116, 75, 32, 83, 62, -2, -105, -111, 77, -49, -127, 39, -127, -38, 72, -74, 46, 72, -15, -101, 75, 40, -82, 79, -14, 94, 79, 110, -86, 91, 58, 71, -88, -18, -30, -77, 115, -60, 99, 83, -33, -71, 4, -103, -106, -111, 7, -48, 59, -18, 97, 28};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XIHQWVDMDEOFKJZNFPVUKYYBZUTHJOOGKVCCVSZOXHWDDIUXDUNXZYLIHY");
    tmp_msg_1.plan_size = 49212U;
    tmp_msg_1.change_time = 0.8479101480473686;
    tmp_msg_1.change_sid = 40510U;
    tmp_msg_1.change_sname.assign("FUGWQSLRNXZFEPIXSLXCBSTMPLNVBQVVLKKOTENNQCPGMKCWWQYDYMNSSGDYHZKYVGIOORJTIJTMOJVEBFUDHDFWZHRFYZUJDDZRUAIAECXGKA");
    const char tmp_tmp_msg_1_0[] = {-100, 72, -7, 86, -3, 125, 58, 23, 29, 124, -13, 49, 53, -79, 96, -36, 94, 17, 64, 61, 35, 81, 25, 93, -42, 34, -54, -24, 107, 76, 81, -106, -68, -103, 44, -79, -109, -57, -33, 36, 36, 56, 68, -128, 97, -25, 4, -6, 55, -77, 97, -45, 33, 81, -41, -10, -60, 22, 55, 68, -120, -48, -52, -96, -107, -65, 66, 121, -63, 110, -32, 8, -25, -124, 76, -50, 94, 0, 36, 30, -78, 84, -75, 82, 59, -60, -41, -37, 80, -106, 22, -63, 36, 89, 59, 123, -49, -85, -77, -91, 18, -113, 94, -117, 18, 35, 87, -68, -127, -19, -91, 38, 96, 46, 36, -14, 21, 19, -29, -125, -31, 34, -93, 60, 9, -123, -100, -16, 107, 29, -64, 19, 124, -57, -86, 108, 15, 121, -47, 35, 27, -46, -2, 92, -41, -52, 10, 104, -18, -4, 7, 126, 33, -61, -117, -56};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.12354076099813582);
    msg.setSource(42539U);
    msg.setSourceEntity(240U);
    msg.setDestination(5632U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 43006U;
    msg.plan_size = 4039860162U;
    msg.change_time = 0.691613375013277;
    msg.change_sid = 7277U;
    msg.change_sname.assign("WIXYANEKGONGSEJAMWEJBOKMWEOZZHDTKJTHUCBFRZRMNSCTRHXIVFOLI");
    const char tmp_msg_0[] = {60, -127, 98, 124, -117, 103, -59, 99, -86, 73, -70, -89, -78, 94, 14, -65, 74, -57, 80, 97, 48, -47, 123, 83, -25, 78, 87, -84, 121, -8, 105, -114, -23, -2, -15, -103, 25, 86, -22, 42, 12, 43, 124, 68, -53, -61, 103, 32, 105, 27, 106, -62, -12, -9, -45, -49, 102, 89, 5, 14, -115, 106, 116, 66, -60, 66, -81, -81, -97, -36, 51, 10, -20, 109, -5, 32, 75, -100, -89, -36, 37, 2, 54, 29, -2, -76, 10, -94, -51, 31, 7, -75, -101};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PUZIASZEOCUSDMMQXJFOWBIPUPGFWFDHUIQYQ");
    tmp_msg_1.plan_size = 7888U;
    tmp_msg_1.change_time = 0.5982905559021305;
    tmp_msg_1.change_sid = 55906U;
    tmp_msg_1.change_sname.assign("KSPOHMHNYFYWTTJOOIWBYADPMURCZDQAVKGPSANTDEEYMJVDEPXBIJRKUQRTWXWZPGJKKOZKHCXSSQTHFXPXEOOWDRPLBFGMX");
    const char tmp_tmp_msg_1_0[] = {-45, -75, -8, 43, -14, -60, 79, -43, 122, -55, -96, -112, 18, 21, -67, -1, -34, 30, 84, 120, -20, 74, -7, 54, -78, -121, 92, -97, -21, -13, 69, -56, 107, -111, 115, -68, -105, -83, -54, -62};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.2166707379931262);
    msg.setSource(32796U);
    msg.setSourceEntity(81U);
    msg.setDestination(34717U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("EMWGNLFLZLHDEBUTJVHRMMUOPHUEETJDAVSHKUHRKOMIVUQNLXDDTVSKSKGZTROGQGYCMV");
    msg.plan_size = 25406U;
    msg.change_time = 0.5259981969944226;
    msg.change_sid = 56836U;
    msg.change_sname.assign("JGWXQKVNXUYIDFJMYIMFZWOCTSNXMYPABROLUTHNLJAOZBFZMYMTICQRLZRXEDBFOIDHVZBDWWZHCJRVLQSVNTZQLXOWSJIXOGIFTBMEGYIJQJMKNLLFDVZDFCLKGVOUJPPWDBYGGHKB");
    const char tmp_msg_0[] = {16, 32, -44, 49, 48, 88, 80, 71, 95, 11, -128, 104, -46, 91, 36, 14, -33, 9, -4, 126};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.40969476196720167);
    msg.setSource(52080U);
    msg.setSourceEntity(218U);
    msg.setDestination(28642U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("KUFTOMQHJKFDDZFURASMQXCGQYNRNLOELHVIYEENOGYGDZKGVTFZFWPKBWEGYWOLLDSAHJHPLDUTWPIQZNJZPXJISAYPYNCRNBS");
    msg.plan_size = 24674U;
    msg.change_time = 0.6944664293630499;
    msg.change_sid = 6649U;
    msg.change_sname.assign("VWJADXRTITJCPVHECXDPVIQEEZSDLGMNYBMNLJSRLXLAGJAQRBAXVAIHPSSSZJEDKHWZLRJAHFNAXHBRFJFCQHIZKHTGQKBYAKTDZNSFVVFCOGOPOVLZGLWSTDGUOOUBNLXYCENGARACWFHBPOVTMYVJGQMOFMNPZFBQWEZOEYWMDKRTPUDCXJRMSXYBPRZFOJWQEKBPB");
    const char tmp_msg_0[] = {-37, 121, -126, 50, 119, 115, 4, -104, -73, 40, -28, 30, -105, -23, -117, 111, -35, 77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.8236123156352341);
    msg.setSource(53206U);
    msg.setSourceEntity(196U);
    msg.setDestination(41595U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("VYMAXBOINRVYMSQICZISBQREBIUVFHVQLOOQSEJMJWDFSELLN");
    msg.plan_size = 1449U;
    msg.change_time = 0.9956329039720984;
    msg.change_sid = 654U;
    msg.change_sname.assign("JAZBUDRZLFAUKFEVBAQXBAUOQZQATYUNACTSQJLYHMOYUOGZIPWIIOBFSEHNBFXSVQBGEBPGWHCDARHJWPXYKOWXZYYTMCQCRRJGTDMPDWHYRJUCPDGYTWLLOFGLPGCNVWJKTRMMLENIVKWJJABNNHOKIQKVQHIXIFNZOGSJIPFHADDCDCWRUEEQXMMLGVCKIR");
    const char tmp_msg_0[] = {49, -82, -90, -39, -32, -40, 123, 58, -103, 121, 56, -82, 41, -119, 43, -101, -20, 117, 80, 39, -97, 107, 87, 75, 113, 123, -30, 113, -13, 31, 117, 109, -11, 95, 116, 9, 20, 86, 81, 10, -89, 87, -110, 8, -13, 115, 115, 73, 4, 101, 97, -80, -109, 53, -123, -37, -26, 68, -82, -6, -67, -47, 78, 14, 126, 8, 116, -114, 48, 8, -19, 47, 44, 121, 72, 116, 102, -7, -1, 98, 11, -26, -41, -122, 102, 120, -10, 84, 41, 122, -96, -44, -114, -60, 27, 6, 88, 30, -56, 9, 36, 43, 84, 116, -40, 13, 79, -85, 27, 122, 52, 36, 28, -42, 35, 72, 100, 28, 28, 91, -10, 40, -115, -13, 115, -90, 27, -116, -44, -28, 123, 93, 106, -39, -107, -40, -31, 32, -38, -125, 15, 107, 50, 96, -123, 46, 53, -29, 82, -106, 88, 60, 92, -128, -122, -96, 71, 11, -126, 72, 37, -65, 34, 88, -18, -9, -62, -57, 71, -13, 3, 59, 7, 15, 101, -11, 35, 65, 94, -94, 77, -112, -122, 109, -6, 27, 84, -85, -97, 23, 57, -124, -109, 115, -18, 53, 81, 70, 72, 0, -4, 69, -47, -97, 51, -23, -126, -90, 34, 78, -114, -115, 69, -121, -96, -78, 98, -8, -114, 89, -119, -27, 62, -113, 119, -12, -93, -71, -83, 61, -92, -98, 4, -21, 88, 99, 64, -19, 74};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.13986383143584946);
    msg.setSource(45011U);
    msg.setSourceEntity(123U);
    msg.setDestination(19566U);
    msg.setDestinationEntity(200U);
    msg.type = 77U;
    msg.op = 135U;
    msg.request_id = 40624U;
    msg.plan_id.assign("ORFVZCWOROEIKYJQVFYPXIFXUNBSZDUMTDKRGJNAQISGJIBQSJNLVMZIMDFKHPUAZZZRU");
    msg.flags = 232U;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.3930089913792377;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CXMXAPVLFVRQBUTJOVSVCDOZSEFCDKZQJSXXHWFBRPRKLDJMQVYPZQBSWPFEPRHIMLIVULIHNBERKHMOZKXZKTQNECKZSBORHHTFJUUADJAFWVMXTJDCGGNHPNXFNIMINNADYGMJDRULZVJUWYODQGSWCJJCTEGRPTOLANQBGIIBKWLAVOIZGEHDYEWGQWLOEATCSSUBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.3439484354495429);
    msg.setSource(39536U);
    msg.setSourceEntity(15U);
    msg.setDestination(44459U);
    msg.setDestinationEntity(191U);
    msg.type = 210U;
    msg.op = 198U;
    msg.request_id = 42325U;
    msg.plan_id.assign("ADCGZSHODRPTRHYAEMQJFLXBTLFYWBEFOZFEMOJCHIHVWZRNWPAKPLWPNYLJKCWTZGIHTUQMWBQSYIWRLYEL");
    msg.flags = 41051U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 3265114967U;
    tmp_msg_0.destination.assign("MWIISOHHONRLQSZWMRMANQRTGRT");
    tmp_msg_0.timeout = 55457U;
    const char tmp_tmp_msg_0_0[] = {-95, -41, 81, 102, 61, -26, -63, -33, -23, -73, -128, 97, -120, 24, -52, -12, -24, 111, 1, 21, -125, 117, -112, -6, -8, -37, 64, 119, 88, -119, -61, 43, 36, -69, -97, 10, 46, -58, 71, -127, -124, 90, 101, -125, -37, -48, 14, -86, 6, 37, 53, 96, 59, 11, 39, 41, 93, 34, -38, -7, -51, -52, -80, -128, 69, -19, 75, -15, 52, -18, 9, -120, -114, 48, -117, -83};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KEYTIIMJUUWLTVOHWGHFGTMAFEULCOOZVWFJGNDKBTIVRZQHAPRCYNOODMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.13694257665664866);
    msg.setSource(53690U);
    msg.setSourceEntity(34U);
    msg.setDestination(18351U);
    msg.setDestinationEntity(250U);
    msg.type = 26U;
    msg.op = 106U;
    msg.request_id = 36569U;
    msg.plan_id.assign("EBCSYJAMXXAULAKWNTQBFAVZCJDWPMCUKSJYHOSMSLXVHMGCDYNZOCTWRGZCYPAFRMCKSWHZGXOVKPFRJPIOGNTXEHTNUZZDYWQRJNQJAMSBEJUEABLTFWPMIIFCKUNXRQEDLVQFGZNBZTOVPXCJVIKGNUDQTQZVORLKSOWMWHEKLAHTQKUGRBJAEIIRSILLYPVHTPWDRUIFBXNEBBXCPQIFGOYYLSHVAXHKYUPHDBVFMUEGGRFDMLQN");
    msg.flags = 8391U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 119U;
    tmp_msg_0.flags = 126U;
    tmp_msg_0.description.assign("HYRXAVKDDDDAUCJKQBIMGEKITSLEKRMVPTMLEINLARWXKOXOWODVANGNXIIOGFQCGGSWVQBMSXTEGVTLJMPFAXJHHYIEEKCIGIUXYHFSWWYCYJUAAFPFIDEZNKLOYMZANAEPWMZZBXBUQTUOVDGIVNTQFQQGJTFFWYUOWZMNYZBJKSZSRHCKSNSDTUSDPMRRWCPQLAXCNRUNPJZVJYOOLYRCFFHHBHDQLHUMVCS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOUJTDASTGMDFXCKHVTAPCSRBLH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.9448766292108172);
    msg.setSource(62536U);
    msg.setSourceEntity(72U);
    msg.setDestination(774U);
    msg.setDestinationEntity(4U);
    msg.state = 3U;
    msg.plan_id.assign("DUJJTEDCLVGNNSXMQQOOUTCKSIKAKJIKYDBUSNJKEHFYMFRBGXOPKMQTEQQKVPPQPTLJDDWLTSOCCHYY");
    msg.plan_eta = -1411772051;
    msg.plan_progress = 0.34798528185990407;
    msg.man_id.assign("YCWXYVPCAGBVEAIRTEWPJXFSGCGKIGCSIWFJNQMOPPADFHACHNBYVTBKALUAUNRVUIYDVEUXNNFKRGIWKJYATZHPKSPLRNJJVEQUTWVZEYTSNORVFRHEIDQXPQTKZKLXKQLRA");
    msg.man_type = 18586U;
    msg.man_eta = 1714216381;
    msg.last_outcome = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.941827803384512);
    msg.setSource(29012U);
    msg.setSourceEntity(246U);
    msg.setDestination(22336U);
    msg.setDestinationEntity(188U);
    msg.state = 67U;
    msg.plan_id.assign("VNDQCCGVURXDVAZIIYIDUSXJSIOMQZSAJPMKYSJHKISDLPEVCVTTUQWXNPPQNDVCRBULKZGLFAWGCJXAHAXESOH");
    msg.plan_eta = -341592333;
    msg.plan_progress = 0.09253668629402845;
    msg.man_id.assign("SQSTVTDWDMBDMVWRSAFXNJOIUUGJICNXRMLMGUKXEWVEHKQASOYLFJVULYQPSSMU");
    msg.man_type = 47835U;
    msg.man_eta = -915198241;
    msg.last_outcome = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.9800217427975009);
    msg.setSource(64506U);
    msg.setSourceEntity(151U);
    msg.setDestination(39442U);
    msg.setDestinationEntity(183U);
    msg.state = 38U;
    msg.plan_id.assign("FAIAQXOGZHFDDLBOBIJIFFZMKYMTCSPECGMZJJPXOSPNWUREPOLRBELYVVASEVEVVMYGOYTTKWNKUDYEGXBYJZJSHBBQRNEPCNODNUTLJOAQQXKOGBQJSDRMACBVTRRVCWUIXQPHH");
    msg.plan_eta = 1501879466;
    msg.plan_progress = 0.09173507973633988;
    msg.man_id.assign("SWOVXTJSRDWVQPPKCGBHACMQWPDYHXIXIDYYUISPFTXATXGWDHUSMPDCWBUIBXVGM");
    msg.man_type = 4713U;
    msg.man_eta = 100654741;
    msg.last_outcome = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.42722078156844256);
    msg.setSource(17794U);
    msg.setSourceEntity(118U);
    msg.setDestination(23982U);
    msg.setDestinationEntity(182U);
    msg.name.assign("XGEHQGKHVAKZUCMRLTGESMXQAMBRZVGPIFAKIZSYZWWTHJVBTVRAGCDILUNDOTOGYPLORJPFISLWHXFLYEGLIWCHGQDONMJVNBYAUSEKVFBQXUEFWRQCENUND");
    msg.value.assign("KPNCOXZJOYJSNGWZHAQDKWJEDLQFMBYHHFBHNWXQAGMAMHOQMWRMUVPZQXAITDZMGEAEEJHRCWOVNCAICYBJMGLCKIFCIOIABJUYZKGXEZGSDBXAUSVBUEIKPSEYKGTSNTCWBYOVORJXTHEKTZYMTVQPRFENCDFRTLWIGXVDKJMDDXTCGUQBYNNDVWFPO");
    msg.type = 102U;
    msg.access = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.6241836647486667);
    msg.setSource(48378U);
    msg.setSourceEntity(61U);
    msg.setDestination(57782U);
    msg.setDestinationEntity(232U);
    msg.name.assign("XUUIEGPOYTNMFSESXICTHNXDWGAFZSLUWZJCHGYHQOIHLLNGUOLKYOTRHDPQTUPBDMWJMSMNPGBQCZOJDJRORQHNAUPFQVQCZALXIA");
    msg.value.assign("QHFPOTEZVLOKHNVGAYZBZT");
    msg.type = 101U;
    msg.access = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.6287291381860929);
    msg.setSource(46150U);
    msg.setSourceEntity(156U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(100U);
    msg.name.assign("EJRKQUCDKXVOQEWPEONTCFQVAVYTNQVKMGGQPRDGGHJZKPCHFZSDVLOABOVUHEEBHDLDTYXRNQXGWOMZPUTTDUCTFIHMOHFYSNWQPKRNLDFPDYTMFRGSCXGOCXZDFCYPAKMUIJYBZSZLHSKOSICWBTIYTAMGBBGNMBLPXRMUJASJNLIOUASMVUEAJ");
    msg.value.assign("BSCXWBDHKLKUPEBQUZNUYHQUBXIYW");
    msg.type = 105U;
    msg.access = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.8527894057706615);
    msg.setSource(3621U);
    msg.setSourceEntity(37U);
    msg.setDestination(14177U);
    msg.setDestinationEntity(168U);
    msg.cmd = 32U;
    msg.op = 197U;
    msg.plan_id.assign("AUZXSHGVEFGUMIKQWTCLTMAFPBTIHVSVCXIDUOEVRPSLSQIHPEGDAZRFLDJYQOVNEXQOAKSIETNCFJZBXTWHGCWZCGR");
    msg.params.assign("SVMFPKIPLOMKSENREWQBQWJYFRWLIRQVYPHT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.3953248501296275);
    msg.setSource(17493U);
    msg.setSourceEntity(217U);
    msg.setDestination(38326U);
    msg.setDestinationEntity(180U);
    msg.cmd = 115U;
    msg.op = 129U;
    msg.plan_id.assign("LJYWFBVDYEBLYTGCNDRBXJOQFTSNGAQRHQDKOUVODRDQHAVZBLUETUZSZUANNFCEMBJKERXRZOMGHQSDXSKMZXWUDAXCLRU");
    msg.params.assign("YTZNLKVILBKXSEMGVDTLGGQSQAUPUKLDCEKMRRDDHTQTFPWOIUYHZLZZYANBRURPOYGANDOFNFPDIGECFOTTDHZIWVIVHGKWMWRCAMKVUBUWFTPDHVSAQFJXBEYQEXTEHXEAGWETMVCXOEJQIHQLNPJMZMWMBBAWMQNBICVJFLRZZJOCXXPFHNRUAOYANCLNKHSJSPHYLZCXKJSIXEOKYIBKORVBMRQNFQUSXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.5175536874627269);
    msg.setSource(19763U);
    msg.setSourceEntity(56U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(84U);
    msg.cmd = 4U;
    msg.op = 249U;
    msg.plan_id.assign("PQOBXBFCAWJURAZIQEZNGAIDBUOHMAWKNHKSXWBBGTSUAELBTQDELQOQVPJCZBYKSFDKXRXFKITGCEFCLZDG");
    msg.params.assign("IDNYXMBVNPWGFELMHOZSTBRMLWXCDLTSGWRLXXGCSQYRUMILAZHHAIFOVPPPMLVQXFXNKZQTHKQULSUSDQTVXYRWYOYAQEJGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.40093732536800997);
    msg.setSource(49394U);
    msg.setSourceEntity(179U);
    msg.setDestination(20810U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("RNIBPJSMUWEPKEBVDKVLVWWIPPCKKNKSQIYAYSEYQACUQZBXFRGGOCYMCZHDJCVTOCYHRJOFHNTUACLWYCDB");
    msg.op = 32U;
    msg.lat = 0.3890764608296985;
    msg.lon = 0.7255762511603817;
    msg.height = 0.47725451559636234;
    msg.x = 0.35253974991278547;
    msg.y = 0.6509223296840183;
    msg.z = 0.11605123250779459;
    msg.phi = 0.7852446378528752;
    msg.theta = 0.2476269263400216;
    msg.psi = 0.3491087265117593;
    msg.vx = 0.48419537071257823;
    msg.vy = 0.6483195614628647;
    msg.vz = 0.5531651833867429;
    msg.p = 0.7358722851538682;
    msg.q = 0.16147749058126537;
    msg.r = 0.9040974365384499;
    msg.svx = 0.10613488263892179;
    msg.svy = 0.3579304503961145;
    msg.svz = 0.2456683664360253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.7304082413118695);
    msg.setSource(30110U);
    msg.setSourceEntity(187U);
    msg.setDestination(56999U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("WOXYSUXOMYWHQPYSBQNBJSOYZGIQSCOJXYQZTKBCLLBHQDSTMONXVVJVMUHQQYSLDSWEORXHBHNORHPZCYNY");
    msg.op = 135U;
    msg.lat = 0.9995328619858438;
    msg.lon = 0.6383860639914886;
    msg.height = 0.253818209849095;
    msg.x = 0.688750083511747;
    msg.y = 0.42130985201914783;
    msg.z = 0.15846051695987662;
    msg.phi = 0.597241830430386;
    msg.theta = 0.41525684851808753;
    msg.psi = 0.003863340327082909;
    msg.vx = 0.6282418225100035;
    msg.vy = 0.8867312191425969;
    msg.vz = 0.0759615429100915;
    msg.p = 0.8006932761715408;
    msg.q = 0.03527655040364641;
    msg.r = 0.5544587517472999;
    msg.svx = 0.7264415808445923;
    msg.svy = 0.1464183901156938;
    msg.svz = 0.7239914659595859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.1895046917014951);
    msg.setSource(53406U);
    msg.setSourceEntity(33U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("KEQZQUEZVDJTRTKPOFWQYISSQRIABXNPHHRAFEQOEFBRYNCCKGDBEFBMGMWYYASRJOCQNKWXADOCZOIIIZGAYESALKTVWTABBGQVOBYPYPXXXDHTLHNULMBTTTDAJFZNI");
    msg.op = 92U;
    msg.lat = 0.5044319487701255;
    msg.lon = 0.5918305295427931;
    msg.height = 0.05425597933849424;
    msg.x = 0.15769920061530995;
    msg.y = 0.8952650380744456;
    msg.z = 0.6828637107575483;
    msg.phi = 0.4023193264657804;
    msg.theta = 0.707468785140495;
    msg.psi = 0.07348053226032936;
    msg.vx = 0.7079964871144335;
    msg.vy = 0.16232852433332423;
    msg.vz = 0.9138801173518261;
    msg.p = 0.33638789993753504;
    msg.q = 0.1504421115469493;
    msg.r = 0.40466120322877663;
    msg.svx = 0.8595346027211528;
    msg.svy = 0.6683989068593545;
    msg.svz = 0.987199533989489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.7495725387069249);
    msg.setSource(38919U);
    msg.setSourceEntity(0U);
    msg.setDestination(53491U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("DZYJQLFCIWXKTCAPKABWIFSDHVGONVKQIFQNJIKLTMLHEGASRWSYOELLYEXYVZOPLECHANBJNWASXJEKXDRSTWFITGQTEHLMHVHODBIIBUOSMAGZIUOUWUQCSCUJCBTGZSRNNUYOHDXJRRCHPWKDUEDFRMHDNDPZBNFUABPEVGCNYOCBZGMRKZQREMGXYWEQYVXTKSXWDGNATYLTBJLPZ");
    msg.type = 82U;
    msg.properties = 213U;
    msg.durations.assign("HRAGUGCXFCKAEDYLYSZIABOMFJKXGVZMAYRZVIPOIMXCUHWFRRFBOJCJJLHDWEEJFZMUZSDPYUQWSKBGTLULNOYTQISVABDBTKFQMEWDWVCNXDKYMOWXUVIPQNJIEARQZLDPEHLJZGMWTJVYBSTUQCDFVQFHHHRSJBHEWVQTXORNIUATLENJTHBVLMDGGZZACNBNVXKNIOQARHS");
    msg.distances.assign("QXHTJVGTEXYFKITRJJPQVHXXCBXNLWEIDXSTBZAUFZNENVDUYAMRLPHDJCYEFSGDECQABGIPRWCKNTAFFWJUIISP");
    msg.actions.assign("KYONHNBPYOSZSFHCFGBRODSTHQZZRTBEYTQNKJNTMRTFMUMYLJDNBAZWJQVJLZKRCCCMZXXKFXGJGQVXPKFSMQMLENYNLSOSAWRBHUPOGWRBAIPTOFWURQEZJQCCJIIYGGW");
    msg.fuel.assign("YBVKCTTXPNWFPYAIBFEXHDMJRSHTLVVRUKBLQWJXZTHDMQUUPEXVHJZVZDGCKGJIJCZDFOLOWHEGGXQZACXKOAEVQDKFFRBOVHJWUGOSTNVZYGSDPCVXKFCDILLNYTHMTOMMWIGBTRPJJEYRPOONIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.6893913089540302);
    msg.setSource(41510U);
    msg.setSourceEntity(11U);
    msg.setDestination(11152U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("UCPPTIOFJDYKSQFGHZZXGLIVSUIPBJQKVTWLWECNSSVMLXGGDBWZDZLXDDHNRBELVRBEOFKQUORYCNVFCUCMINNPVOWTDUUDUWJOBYBNQQDQEJMGKAGWPUAVN");
    msg.type = 168U;
    msg.properties = 54U;
    msg.durations.assign("PFGFSHKKHGCRLAQWMCQXIBWHWYFAEPDLRNOFQIGMXRUPOWONZPDOGCJZCLDRNWADIOFONAWSFAMHTGRSQENDYTJLGXFSPWUIFSKGRUFQXSLCKZVRAHVKSPZJUWBMUQGXHEMSSVEECTDEIZLTECYTWBJEJTTVJOVBPPGSLUVYTBXUJXRNZYOLI");
    msg.distances.assign("PVAKDYQSHXEHWIRJBPNDZLKZAVAXSILTGEMUUPJUSHRLRBJVEXCFEEHCTOAFVYDTQYMNZIRSZRQVWGLZFSXMQHPUCZCVJGWFZKHGQVFOEXOUIBBIQZYGKLLWNOQGTIOAIMBKQBYMXNHTQFOYLWPAAVKBSCHTNJVONOKBCMGSKHJUTWGPRTYTYICRJICVANPYFNDWXFMDLAEXIDPTRCSNOWJDGKZCORBAMLHDQGEJLWWUDFMSNYFMXPBZ");
    msg.actions.assign("CEEMATVJIWSPEUIQKKVMYPEFADFGMHWVDAKNCHYJEJUP");
    msg.fuel.assign("LDQDYSUELHGFDZWMVGRPZNZYJTTBLNOGBBCUWCNWQGXAMHJBVBRAHIMFLEMKMRWIDAQUJZOBAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.5246773362358427);
    msg.setSource(24475U);
    msg.setSourceEntity(71U);
    msg.setDestination(42909U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("BWKRSVHPMTQLXYWAGYQRGYHWDEREZNXBOLPEOVJJYOGJMXFTNLEMYNSCGILKRLZGOWRVZMZGDMYAYGFOKMTWNNUGOPOSCSWCDUQOPRPBIIMICEABQTQKVTDCDQPKJWGCPXFFUPTNVAKDLXQUKRASAWJCIHUJLHZXWPDSNKDIEXJSCTUHRLIHBIEFQTPBOFFSJJHZUDXVYHYNZWYQLCIABBUAHTBKUGFONQXFUHSEVEMFZSECJAZVBMMTXIV");
    msg.type = 211U;
    msg.properties = 73U;
    msg.durations.assign("BIIEBKBWTXBHNWZYDNXKXBTFCERBFFINNSHKEUFZVILSCGAHGOTICWAHRTPEXRVCZMXYDPJAJPQUUCKMEJFFGEYWXAQYNZFOIWVIEWLOXFIFPYVYHGCLP");
    msg.distances.assign("HDNBNYFSSTEQBPAXIBDPTILBVOKNPTVQLEWBKDHXKMCLZFLGUPDJYZBRXFFAGODXQIAZQXCZAGQSQXCQEJTLOMRGNBNSUJPPJWKHUROXMYUMYYKUEDLXSJISTHUBNOWIOIIFOFWJHKJYQUSJAHIITDQBPLFZHYRCPZDAATRMCGEVKRCWIYAFCWUNWVOVLMYMTXCWFGEZWRVOEGSLQJUNXMNUEEDEGTG");
    msg.actions.assign("HFDCOANCOZKEFWUXKGKRAIVQHYTXZDXYDJAVTHOINRIQJQNHAKPHXNUFCZIRSGKTVHJOVDBKZOSSTCZLXPMFPYVPRVNOSLUMMGDXUHPWTOLYOBWJQTTKPFSJLCQBGDGCYZKMHLVBDAIMQBFSJIEBRSXGUHWCAPJXARWNFKEYFYMBBQMQAWRNRJSZSY");
    msg.fuel.assign("RNUHQZNGVYWTPHBBITDCNGUUHBCSPXSCLFCOOPXMIFEVJZASLUCQEDVNDFMRWYZYNMMHWTHOZFRESOKEMOAVORLDLKESJDWNWGIHRQVTWJGYAZJPKTALAGCEQKBQIEZUYFJXQHMNXDEFKRLWVXVBJTFBKNWDGBIGFYACRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.5334005083365491);
    msg.setSource(32841U);
    msg.setSourceEntity(24U);
    msg.setDestination(19047U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.6044599753094853;
    msg.lon = 0.08270999873506235;
    msg.depth = 0.6182579617413564;
    msg.roll = 0.7590543880157252;
    msg.pitch = 0.41178714105380065;
    msg.yaw = 0.15448357105759325;
    msg.rcp_time = 0.9018038490891076;
    msg.sid.assign("NBUESOMLUJBBFYHYXCZRUCXKZJVXTTZBZCITLKPBRTGGDQIACKUVKSIEHOIVHUZBJKOVNQREIOWFZWQWGEWIRXAEOWXBANCGHFMLJLDHNVFWOJZTAPKLFMXGGVMUQGDQPRUNEFJDMIDWLVMRNZLGTPPPBASXYQIFWLVQRZTQ");
    msg.s_type = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.3271204073385654);
    msg.setSource(3418U);
    msg.setSourceEntity(47U);
    msg.setDestination(12502U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.06492410243792401;
    msg.lon = 0.8666105976830318;
    msg.depth = 0.4517711506188433;
    msg.roll = 0.9337658936144296;
    msg.pitch = 0.9476184031982214;
    msg.yaw = 0.5693779289170765;
    msg.rcp_time = 0.8401151134999518;
    msg.sid.assign("OGKAKOUWGVWKMPDHEOXQBTRCLJTQWZUKSIJXCBHFDAQBDSPUGEYMMMSMRBJAVABTIPFLATODMJVNLRZCSHGXRYIWORNVQFARYGZQFWHRZHLIEHJGJVEIYDCHKVIXFATSENDHMQSFCWCILLDRVTURXZQTDTALPUPWZYSOGBXEDUINKOYVGXIFYOBNTLDBVCVZFYZWMOAXUUHTJLKMZNEENFQWYYKSBPKCRXEKGCNNILPANPMSZHPJQSBUP");
    msg.s_type = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.8787862689266656);
    msg.setSource(40126U);
    msg.setSourceEntity(36U);
    msg.setDestination(32539U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.8675048556106304;
    msg.lon = 0.20287520530795933;
    msg.depth = 0.8712341500975311;
    msg.roll = 0.37350166737579016;
    msg.pitch = 0.1617762772154564;
    msg.yaw = 0.598485087766036;
    msg.rcp_time = 0.3947842961974355;
    msg.sid.assign("LSOTNOSPJZXNJGLTKGDRHXSLTCQFBIILKUEQMKAJWISYARUVOZSCDSJHKTPVTRSNUFNPXLZYOWWREXKGQZCNMPUZBYTGWROYKJQQSUDREBBHAPJYBATNPICOMAHKADCYCCIEDWLNUULIFREHGVFMVNCXHFEGZQXSAYZIWZDSTZAFEJGTHKOJMQUYNBTVQZFWIGDVYNBLKVAIDE");
    msg.s_type = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.893734987389028);
    msg.setSource(2423U);
    msg.setSourceEntity(113U);
    msg.setDestination(55142U);
    msg.setDestinationEntity(87U);
    msg.id.assign("KXDTOZJMXAVGTGMHPNJJVJBUYTRDEYGMEOIFLBGPHRBWDFJZRCCMYJQYKOELAWIXTHPSHBTXVDWYSTGNKUXFGBHKFZEMVJDNLO");
    msg.sensor_class.assign("HNGLSGHRLBCPORUSLTDHUTPHSFECFLJYOBWKGUGDFJXSZDXPFUETICKAHMZSYBEAIEMNABGAELICTMESFDYQYQRTAHIRGSDYWDAJXPYWNPAQMOTPCIPNDZXQCZXWAGKQSVNICXFXRESZKHSCBLINOM");
    msg.lat = 0.8560079207457638;
    msg.lon = 0.3293552417995096;
    msg.alt = 0.31434405512772046;
    msg.heading = 0.6888990532645624;
    msg.data.assign("ESUGVMIHFUTCSBKDVVBDTRMMNELKQMADPZGEJJYHIAGMGKJJRFUNQUAGERKLHMNCIKKMEPUJTREHFWYOJOLLCOBVYDTACDXIQUCHXRBZYDCIXNZPULPCQXGLVNKAXLGPXKOGFRZJSOSLKQSFQAVJZEWWMIQCWZNLTSDATPWVTGWOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.2915215832121292);
    msg.setSource(48778U);
    msg.setSourceEntity(204U);
    msg.setDestination(26059U);
    msg.setDestinationEntity(38U);
    msg.id.assign("YWCPBEBGCFWRUNBWIPUJJZMLBPHWZSADHNJHELQIHGHCSBDBONFUVXSMRAXTZPKHJDQTFWUXYPYXDZWEDWM");
    msg.sensor_class.assign("IQYNKDYIBVNFJTSCSWPJLRGHTCRCXIASLJPXJFRW");
    msg.lat = 0.9040213737263398;
    msg.lon = 0.30398145481042715;
    msg.alt = 0.604534271058514;
    msg.heading = 0.8452141690657753;
    msg.data.assign("VETOPSOKJHPCBUYPIIMHNMEDJVCPOQWQGOLMGIHPYFZFLAVWKKBIYIBUFEERXWFUWAJXTNLOBKAAFGYBJNKQMEJKUTRLSZUZORFBHOZVNTZDAXDASDTQURUDIXGXTLRCIVMZUKBLAQIOCZXUROGFDLKWNIVNGNPWMSFGHGASCDXYXVCSPHSWRGWFJSKJMQIZEEQTTHRPYZERCENDOYLYMBJCLMTGBPSAHMBYZCVQPVEFDSTVDNQJWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.7371158978701512);
    msg.setSource(41217U);
    msg.setSourceEntity(32U);
    msg.setDestination(30998U);
    msg.setDestinationEntity(54U);
    msg.id.assign("SEPREGDUKNJBWEBMXCJHASTWPAHJAYOMOGWDIWVXUYZGNJYFSNPTTUMFKTYFMFDCWZIRLSL");
    msg.sensor_class.assign("IGJVHPODUESXSWZZUIDRDJVBGJMUSZOLQFBMNACJFCZHOXEYNOUIXSWIOWZGEFELXRYHBUGMPZONGHTATBYRMLOKWHLPDWGEVGGSLRFBLBYWIKBZSUQQPTOWZKVVFHYJTRKUJARDOYUYNTLIAQTZTO");
    msg.lat = 0.10672911921037309;
    msg.lon = 0.7830615314997436;
    msg.alt = 0.4727807359144236;
    msg.heading = 0.38302388422334277;
    msg.data.assign("TRIBVHLNKJHQFIPWZLBVDHUVAFFFXWUMQAJGCVNFRTBDUGYUPKURYBLEFTMDVSBYDXKNOZADMGWQJQQKZEJAWSFBYZVEKGYMRRHUTQKASNGPYDGSYLITTASXQSFZELIADDHLNCCNEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.41852175773556);
    msg.setSource(43681U);
    msg.setSourceEntity(125U);
    msg.setDestination(61132U);
    msg.setDestinationEntity(210U);
    msg.id.assign("EUDHIXHOQSTCXIAAKTONAMDUINCLOWGBSGBIUEVLCHGWXCQQQKTNOXLUGWXXGROXPVUBMPLFRTEQGGAAUPJRFHCFQVCDANSYSKJZPJLMZOKKIJVLCEGYMFYDKAHZEIDPRZPNYWOJEMNTYBRKNDIFWFOBJZOHNTWWDFYYJWXLWFDCDVVJLPZSMUXHZIPBDGAQZEIHMMMKRBQKSUFROGNEFEAQSWYLQIAHSJBYCCVVBZSPTTZELXHRRNUBSVJPK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RHZSZOSBBVAFZLMFPWOGTAVVBCYXGSXAVQHVRRNXOMMKLKTCEGJYTWGLWIVDGXGEETU");
    tmp_msg_0.feature_type = 229U;
    tmp_msg_0.rgb_red = 117U;
    tmp_msg_0.rgb_green = 167U;
    tmp_msg_0.rgb_blue = 27U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.10797210596130724);
    msg.setSource(2672U);
    msg.setSourceEntity(91U);
    msg.setDestination(22307U);
    msg.setDestinationEntity(149U);
    msg.id.assign("WYLTKCPYUFTPTYBXPCXDASYZBHRKLXCF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FJVFYVCQBADIMSVNPBZXNNXTQAOKCGALZDTRJYYZHYEQAICMICUPRCXQZPFWDGMRBHTONBBNWWRJQWIALEOUJWJOEZLGOFYXPVAEBETMBGCYMURECNQFUPAKDQWPBLHWPNJLDFZMOHRFJJVYHKESNYKVALCKZSJDEMSUXEATHUIWZLCLMQKLOUQTHFNHXRKXSZWDT");
    tmp_msg_0.feature_type = 112U;
    tmp_msg_0.rgb_red = 103U;
    tmp_msg_0.rgb_green = 128U;
    tmp_msg_0.rgb_blue = 14U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5886188280573027;
    tmp_tmp_msg_0_0.lon = 0.3074056938378378;
    tmp_tmp_msg_0_0.alt = 0.6456864666131228;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.07170306919491143);
    msg.setSource(51617U);
    msg.setSourceEntity(160U);
    msg.setDestination(38460U);
    msg.setDestinationEntity(60U);
    msg.id.assign("NHCNHSRGCZWRKGVJMUPSUSCDGBMEBPZFQBJQGRXLOWSKVKEEZUBDJTNDPYLLXTSLEVJSVRCXFQOFOCRESXTXAGIEIKFARYEQANHCTKAWFPWZIARJPIMUVJZTWFAYWTANFUZIZDMOWIINJULMVPBPSKIQFHUDQTLXEYDYUVWDHMNSBRCYQGXJHXKFPHNYKCVHRHMYBJDENDOTEOICTAOOLMASZVKJQZBMZPMGXVLWUIGQLF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YSMMRLVBXPYOMAQGBHWAEHTVDITZILTGDXVUWJNETZKFVTTIXWQSNDPZKDZUXNDCXOCBRNMCUCWRPGKFBCELNQPDHHGLUJZBROEUFLAILLRZPWDQEXBEAVEHYMAWTQXVYWFUAKJSSIIWVPYRSJQEGYNNGZLSHELJKMSEIYFPACXFVGURJMSCOKKMHFWOFZGQOFKHBJVYMDAAYFUQZZKLINMNJBW");
    tmp_msg_0.feature_type = 156U;
    tmp_msg_0.rgb_red = 44U;
    tmp_msg_0.rgb_green = 189U;
    tmp_msg_0.rgb_blue = 113U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.3419975708887426);
    msg.setSource(41360U);
    msg.setSourceEntity(200U);
    msg.setDestination(13315U);
    msg.setDestinationEntity(252U);
    msg.id.assign("CPTBADDJAYFTPQSKDDUJDDSLQWXZLEOUXRZLWQIGPRVOOGAWHCHPPKWILRPUIMXCXEBQHETOHFUOYWWVATGPIHNSBXHRYBFACKFAHGULTJMNLAECCNSXTPRXGZUWABKZSLYDKODEQQGFGSRJNSHNYFXMIBCQQVZFKNYSOUFXRMJHINJVFGIOKEAMCKTLPBBMBQMJJVVNEUVCHZRVONLZ");
    msg.feature_type = 193U;
    msg.rgb_red = 43U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.5927545151694129);
    msg.setSource(13009U);
    msg.setSourceEntity(182U);
    msg.setDestination(40235U);
    msg.setDestinationEntity(173U);
    msg.id.assign("EITDLHMYJEVMASCWQQKODTYMUAMJQVDLCVSRKPFZPVIGPXWYUPJXSKDPTNUBFHTIJRKWSJCXONGFDTBTRNDBDPMGNFABBLNKCJESOELAEUEJWMHBAUQJIRPTWWVUIWMQXKAZSNGVA");
    msg.feature_type = 102U;
    msg.rgb_red = 76U;
    msg.rgb_green = 204U;
    msg.rgb_blue = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.8419234884636205);
    msg.setSource(50264U);
    msg.setSourceEntity(189U);
    msg.setDestination(19434U);
    msg.setDestinationEntity(166U);
    msg.id.assign("AYLDURQBFQOOEYVAWAGMGRAZIDFCEMCPMCVSIBLDMXUYMXKULOELMCGHIWCBDSLDPXQCWMWHSHCHVYGBLNNKDNQHGJHKCHIBXBTWVRTIXFLVOGTUAUIFYPUCPDPOVBXYQAQIHEXLZRQPFFOZRSIDOHUTYARJBGT");
    msg.feature_type = 124U;
    msg.rgb_red = 57U;
    msg.rgb_green = 219U;
    msg.rgb_blue = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.286169526311674);
    msg.setSource(52928U);
    msg.setSourceEntity(127U);
    msg.setDestination(28398U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.8470484782682269;
    msg.lon = 0.4267092586263366;
    msg.alt = 0.24359954687787733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.06718672187045249);
    msg.setSource(6839U);
    msg.setSourceEntity(198U);
    msg.setDestination(21601U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.9197098080586518;
    msg.lon = 0.8410297850098711;
    msg.alt = 0.11693983038590139;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.8329596933160498);
    msg.setSource(52879U);
    msg.setSourceEntity(15U);
    msg.setDestination(37006U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.34736187002028807;
    msg.lon = 0.13241105280797227;
    msg.alt = 0.3031508311234693;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.907235947267645);
    msg.setSource(37309U);
    msg.setSourceEntity(215U);
    msg.setDestination(21559U);
    msg.setDestinationEntity(223U);
    msg.type = 83U;
    msg.id.assign("HKRJWKHZMVNFYZVEQFBYAUCCGGMGWPNBTSYBZDCXSDIQUYOEXSJWYMUAFZNTWWNJOKNXKCSYLROOJDHIHOLKSTYKZXIQYIGEGITPCRGEKPJDCREMUBCDHUYIRHZFBNWRQMWMPTLWDRXVVLQQOVFUZGMGELVEZKSFLAMMJJOIWDOKHDECPMSNNAPXJQAICT");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.20916832785947492;
    tmp_msg_0.lat = 0.05112231840228065;
    tmp_msg_0.lon = 0.012826180018164823;
    tmp_msg_0.z = 0.7706330504937742;
    tmp_msg_0.z_units = 171U;
    tmp_msg_0.travel_z = 0.33185892988610577;
    tmp_msg_0.travel_z_units = 236U;
    tmp_msg_0.delayed = 104U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.7684911608313687);
    msg.setSource(17915U);
    msg.setSourceEntity(65U);
    msg.setDestination(50054U);
    msg.setDestinationEntity(246U);
    msg.type = 244U;
    msg.id.assign("PSBCPGYDRRPHVJSJUXC");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 225U;
    tmp_msg_0.mode.assign("ZJBUCJDUWHYKLGWNHIBTLMIPRMIOIVYHEDOFQQRGAVRJOWQQNSSABCWYXZOXNFPBUOEGZKTYJSRDXEPMREETVLNXKHEVBYAOSHVVWYJRSIDSZUMHIZNIPXEKPPUGBBNTDQLNAALZHZOACPUSMXDLKFWNLAQJTVRFWUGEFAH");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.5026252555677813);
    msg.setSource(60103U);
    msg.setSourceEntity(104U);
    msg.setDestination(40575U);
    msg.setDestinationEntity(144U);
    msg.type = 96U;
    msg.id.assign("XRQMLIZZUZFIAGFKEBPRQUZVMPLYANZQVECNHPPNDASVCPVYJXEFCAZDBKGBQXJTIVREXXHMGQI");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2980018240U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.3958004416011148);
    msg.setSource(38141U);
    msg.setSourceEntity(18U);
    msg.setDestination(32657U);
    msg.setDestinationEntity(181U);
    msg.localname.assign("LIZRAJNUHWMCMMTAPGLVBVKRJPMRUXSPRK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UFGEMMRWROQJIDVUPOLECVTMQERCYXIHWYNMGAW");
    tmp_msg_0.sys_type = 127U;
    tmp_msg_0.owner = 24729U;
    tmp_msg_0.lat = 0.6421980426925401;
    tmp_msg_0.lon = 0.07459110785817136;
    tmp_msg_0.height = 0.6206791779253638;
    tmp_msg_0.services.assign("JSCNARSTNJVXZDOATPBZKUEFJLKUKQGBUWJMOPYDJXYOYFWVIJWVVWZUVXIMOSGXLFAWBPNABDASFOLVSVNXKIURYCHXALLVUIQKTCEXSOHLPIKWHJGMMYSXEGOPEHSQQMMZYJBZFRALRTYXWEZJQDTMGGQWTCRVHCMIOFZCTBROQI");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.5531048569896637);
    msg.setSource(53342U);
    msg.setSourceEntity(122U);
    msg.setDestination(40122U);
    msg.setDestinationEntity(162U);
    msg.localname.assign("SGPILLZPYVTDJFCSYUARSGUDFJDICAVUQUBHCGRNCENBCUQPLYACEEYDZSDLECKWMLBXVAXSGOESAQKRASNSTXKRDIHHVWGTNEQTPZTHPQOCNZWCOPUIWEBRWQKMOCTUXAPWWXDZLMKOKNFVAWLKSLBSUFQAHIJVHMVIWWZMYXF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HRPVUDHVSETBSSOXODFTGTCKUPEZAFXNWOQXGSMNDMLGZAPXJRIZNZRWMEAHFGVBOJKZHFEXQWFSLWYLEBGFRCEQVASNEKBTODCVPVDLUBCSZYDMTHXZWBIKCDIIXMQNDCUQMDOBSXRKUHKAVHAJVAUBBIJGPPFYILVNLOEPXCFUJJTGTYRYRHSHUQKAQOKAYFJHRGIMWZMFNBYXCNUZCLQCNTQWTMPOTLPKNEILRJYIMVOKYQISPJW");
    tmp_msg_0.sys_type = 65U;
    tmp_msg_0.owner = 49773U;
    tmp_msg_0.lat = 0.06491945570958646;
    tmp_msg_0.lon = 0.2717033570491344;
    tmp_msg_0.height = 0.22163431256152089;
    tmp_msg_0.services.assign("YLXMTBGQYEJTAWSUVQXGPEAXWBIFCQKGKTVAUCCCJUWVOSDNZRTLGOKGCHWIAYPUGHMYPQSUTQEERPUYOQVXMBDIRHNZXRSDBNBPGWKDLFEEFTORSXWIOMTWNYL");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.7241733505215027);
    msg.setSource(22379U);
    msg.setSourceEntity(241U);
    msg.setDestination(2623U);
    msg.setDestinationEntity(8U);
    msg.localname.assign("PUZPRQTFKUQDEMSYLCPMTRLBSZSJKCYNUYIPVNEQEQDSWTQOTYLAWZNDORFTFLXORBMKAHXDCJJYWKYDVCLVPZXJFGH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("COGNLHVXJZTGLOFWBKEWDPVIIATBSUZZWQHLWTLBWUBBOMWBAFDUKQXHRAILIVBIBRAEKKRNFYVDPNRSUKCHUCSFJVXNANMASFOEXJPKCPCMUXQXWYEWBOZYYXATDZJXUMDKTYOEZOGGDFXALCZSIHNHDDFTMIHGZJSTGJICFPEDRJZQMHRIQNNLKJMETVOTABPJCWIPGPWQYLVKYJANMCZLOGQEVVEQSRKUHYRGPRSYFUSGLMQFYRHSTEPNV");
    tmp_msg_0.sys_type = 30U;
    tmp_msg_0.owner = 38650U;
    tmp_msg_0.lat = 0.3385923827480102;
    tmp_msg_0.lon = 0.6093110252347927;
    tmp_msg_0.height = 0.0006316188014294788;
    tmp_msg_0.services.assign("MMBAEDWHJZXBNECLRBQHSBCDGFQHRRLKGIBFXTWBSQTMXJOGQTUTVANAKEIVLWGNJQHDTMGDVWIIVNHGGKDQAVBZTJHBNCXYNPKDFMYKHWIFPAUMEOCBZPFKOWEFICVWOP");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.2553003874839974);
    msg.setSource(55884U);
    msg.setSourceEntity(185U);
    msg.setDestination(3625U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("ZCWIVKEQXEHTRENYXJM");
    msg.predicate.assign("QONGLMBEGWRMBXXVRJVRMI");
    msg.attributes.assign("JACZQVXHOYIEKTLRDPCXCTMTUQHCAYOATDFOCKTURPIUGJXQIKTZWFSQIJKNOKFTVCWXBFHUSEUPAYEHGHMJREWYGUJWJBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.6168817069531127);
    msg.setSource(51003U);
    msg.setSourceEntity(64U);
    msg.setDestination(54786U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("OFDMBUIDIBARGYWXMYBRLEXHREWTGQTDTXCQMWJYXSWLEHFVDGYAAFCVKVBSANHJQRZTICZVCELUMYLKBIEURMOQJHYVLFCWGGXURKHUSADQPTGXYZKQYWZBXAN");
    msg.predicate.assign("WLSCCHEABJUUYAAWYGNDIROJMJKCUHIOFWMBSCGNLHTEMXNQOTNKITFERDHWMVEVZMZTDRGPOKTQBGDGVFHYKSVEWZ");
    msg.attributes.assign("KFFXRYXPXYUKXJBWXIOCCWCRZCMAIZIUIXPZVIWDITUDIDIMMCGHBNJHAKSZPRTELAZJWQOKVELJLUKSVHVXQRLZQEPNVJRSGIGWHOEWHWRAHYTXMHEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.06089079355184834);
    msg.setSource(34070U);
    msg.setSourceEntity(123U);
    msg.setDestination(26846U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("OOGUUQLPEMXOHNWRZHMPKOZFXULGXPVCADVTINNSVXCTNXNMKBTRFDHUMZRCIHRYBVCYJQURCYVVTANCPDQZENAKROIUKPTKFETJQJQSMDEBZXVYQDHRBLCUFBAGIFWEEHXLYBAPRAMUJTWXVLUKOSIHYOWEMRMYLZWDSWGQPJJKBOJJ");
    msg.predicate.assign("OLSLRBZLDRPDKCLSIPLBHSNJGDXMHTZNPEHCKYQDXIYVTIQKCQVNAKDLYVJHZKKMUMPEAAVUECHVXFEMGMWCQXTFOITVQRNCBBMMQFHIOZWRYHDPNBSEGXCRNWPSGCVHRUKUBJGTJYFZUTUIWNOEWGFLBMDTAAKWYSCIUGAXUWOIJRJNRXSXSJJYA");
    msg.attributes.assign("WNSOVIJEVOYBZGJDJNPYREZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.2686455020644132);
    msg.setSource(18163U);
    msg.setSourceEntity(91U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(231U);
    msg.command = 5U;
    msg.goal_id.assign("WDESPLTGCJUMICSADPJTQRIDFLPVFDAZDVZALQSPJZGQNLFYRHWTKINOAOPEZJPNPZPDKTVERGQAFWCBWHTNETNPXTOWHBAWKAUJCBMTRQVCAWYLYDVHYKGZIXBDUGILBFD");
    msg.goal_xml.assign("IAWTHXQXJIYXNMZUVXUVSHOUJYTOHUGPMJDCCKVEAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.7070735076856436);
    msg.setSource(32627U);
    msg.setSourceEntity(83U);
    msg.setDestination(52445U);
    msg.setDestinationEntity(87U);
    msg.command = 194U;
    msg.goal_id.assign("JKBQBCFUJSIHZNPDVBUMHFNMRCAOXGDKXGSSBQYJHETPLENPVWWUNYGUDGMWEQTJQHUFDGGODKRTACHESRN");
    msg.goal_xml.assign("TYCXXCHKXXGAIKARAZQYJMV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.7813706996441104);
    msg.setSource(55550U);
    msg.setSourceEntity(20U);
    msg.setDestination(58306U);
    msg.setDestinationEntity(251U);
    msg.command = 189U;
    msg.goal_id.assign("RIHKZJGCFEQNEZOUCBQMPMAYNNOOYZCZAPGZDMWEYSZGTWUCXFXTFVBQJVRDXLTGZCXHPIRVRTMOYJYUDNQBGDUFURHDTUQSYBWSQKOENAGGWBKSIOTROUVNKAUHHOHSAPILIEMFKCITSHNPDLZOXUGMUBLIKNHVMSJKQDK");
    msg.goal_xml.assign("UVUSMCPRQHKGRBTLWDBSVDVWBOIEBUCWZLLXOTIKSYOFUYGWIBVQYTMFQJGHXXYPXJNBOLPNOKRNIIVLRRZMZCQFMXUTIMZZRODVEGTOXAYOPLNLFMCVVKYAHYKQACEBXSHBUZZCFSGRVACNAEQKFNOPIMDYQLWAOQPDCEKDCEWNHIZFBFLJZLKUDTWBWRSJSPWHXJQQXREMNJUAJUGTPEFMKJMHTEVAXND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.06487131936639146);
    msg.setSource(46996U);
    msg.setSourceEntity(206U);
    msg.setDestination(58904U);
    msg.setDestinationEntity(209U);
    msg.op = 18U;
    msg.goal_id.assign("IFBSQAAPDCKDRTCVQKXDANAGWFUDIRHZSZJOSEZPRORXDKXVLAFEHGIYKTWFCWZQJQRGERMTKLEGBCUNXMGNHZAJXFKFMXNGILRLWKBHLFBOBFXHNOVQJUOBHWBVUHKDZLISJNHSZSEVCENPDXEOUOSKTMZJRYYJWTCRIMYYIAAEDYGLCINZWFRJSVHUGNQYCTYJOEMPDUTBTTWBZPLNXVWYUQMGCYMQWT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZPSOLOMZFLEUIPZUYCTNYUISPOQWZOHNHKNUHTRROGAEFHTLWFOCTQQDKASJKWJPUDXKSXWVJHGMDQANFKYENPKVFEZUBFNIQJYEWNZCXPMTITSHRUCIDSKEOEWGGDSHYGZCXBROORRAMUJR");
    tmp_msg_0.predicate.assign("FIZXTYPWIGOSPJXYHTVWNJROXKEDVUNXDTFYJTSNBQJFVPIOW");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.8825641932871149);
    msg.setSource(16735U);
    msg.setSourceEntity(58U);
    msg.setDestination(51826U);
    msg.setDestinationEntity(22U);
    msg.op = 167U;
    msg.goal_id.assign("EEEDPVWWMGVRLSUMIWFQTWQSHNOBITXUNA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UBNDWMRMWPYMBTZXVCSBSYGOZYBBIQWRALPMHRNHDYXDCWHKFQOEIIPXGKTGBQURADESHLMHACNOJNSAGRPKZXHQCINRODDPWFIJCKNCWVLHPXYVIWHTJINSJEJYTYMIQUTPOLIFDGLWXQKUXSJGTEFXROEYJDVLADGLLOBU");
    tmp_msg_0.predicate.assign("YKDTOHGZESVLGDZNNADQBKCWEJDBPGLIUJWTXBWVPPYUITBMSVLLXCUNAUAYAVCNNGFTZEMHQRYNGBORAFSMVDYKIDCMGJZYXQJHQZLIVSFKUVHACQIMYTUABFYIMBVWEXRSRHRHBXKILMYZTOFJOKUUOWFOJJGWJPVZEOTGADEQTDAUZHWARZEOLCVXIFMSQFGKPWWXBQHFECRPWQRIYXPETSDSMJPRLJQSXZKHCRFNLXTDN");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.5138996760045428);
    msg.setSource(43048U);
    msg.setSourceEntity(54U);
    msg.setDestination(7541U);
    msg.setDestinationEntity(222U);
    msg.op = 210U;
    msg.goal_id.assign("PMHNBYLJRBFHCFXTOSFANSUFOAHGVCMYAM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XVMGCECOWAVHTROPPBLLJMNMKJTXLEFTWTJHGMCZBJFHNKIJXOSDGVKNZVUUTAHKOVZPSFXDTRWHQIAYTDSFXZIXWUWZCUANDUAOBLEDKXIDESRZRZLNMPSJMBGEPQIOUH");
    tmp_msg_0.predicate.assign("LWGKGGOPKUDQRPVBMLRSZJHTPBL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UCSNGXWFQPZFAFICQDBXVDOVAPOCRJIVRZBWDSKRLMJAXTJUNGABJLIFVZYOYQMGBZSWWKMFXEBDQQZVYAYFNTUOHAUFKMWLQXSIZKPMKRWYXCNYYCIUXIHLUVEGEHWDMRYRYNBCVTGPEYBSWKRQPQBWCIUEMKVJEDHXBUPJSSFCJHLAMWQTHDGESGKEOZVTPNTNKSXOBJIJCGGMNOOGESZADTPDMRRUUZEHDOFKXZLNNTQIHILHALOVCALJ");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("WRYQAQPEEFJRWIMUIQHKYGNRPJYYEYEWEXYIPNWAABTUXMMHNDXPZXVVKDAXN");
    tmp_tmp_msg_0_0.max.assign("DQSIDMUVCWWKNPRIZJTKLLUOFDJXCLVYGZGDTLMDLHOVXODDAQYNUCNRNIBXZVOSWIWYJWGFYPJUYAPMBEIUZSSPXKHEQYJYQBWEXZFBEPZLGAEJFKMMQAWI");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.3787068788420507);
    msg.setSource(17080U);
    msg.setSourceEntity(46U);
    msg.setDestination(7319U);
    msg.setDestinationEntity(239U);
    msg.name.assign("MSSCNPOOVPXNGMDHPLZROVDCNG");
    msg.attr_type = 46U;
    msg.min.assign("LNKQLDFPWUMDQHAEWXMCDQAKLDWJAMIMNCBXXQQTUWURLCOBFQKAONQYATGGDPKQOUFCZMAZMRNYLPVKMHJYSTJSKSVXOFXPFNCLPGRWELZBDIPKKGSVXRFHVEGBHGZVGICIBUQEHTVI");
    msg.max.assign("UMVJRWELFRPGTQZUAUGZDLLNHYKMPKJMVHGAXOMVYTJSNKEICLAVYIJFAUUFTAXMEXQARUQDNHGKXOMCKOXDGYBYNJSZGBUQGHIWNNGZZLQOLWOIVRIHRYSCNCZSJPPVWRFETYFJSQXRRUESOVPBAPKBKCMZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.9515088957838018);
    msg.setSource(30148U);
    msg.setSourceEntity(215U);
    msg.setDestination(40228U);
    msg.setDestinationEntity(114U);
    msg.name.assign("CRKDIAACBOPCPISGFXICPNMMQMLTTXAFAUVSLVBJIXTEKTUWZXZIRWVXEYSNLQKRSIUVODLZEAKEGNPCDVBZYYEVCFJMDYZMLKWNCCBGUWJRHTFUUXOASVVRNBDSOJUDDIEQOWKSELOXKDHYDFPESRZXFSDPFRUJTGHQHPEHAZGIXQMWHQPMJHYVBJOIBZWQQRPNOAHZJEIKKTLYAZWHOCTWQUONBMNYFRRMUGXTJGL");
    msg.attr_type = 216U;
    msg.min.assign("KYSOYKRCJNSUDVYMNKNYYQSDHXWVYLAPQLCFISXLNGTMIMCFTPXGJZSABXAAMGYRJHKGAVCNWRHLZVXCUWMKMUWWUSPVMLXJVDQPJAIQEBJQISHWIMRBOCCOTZRUTJFOYOKBUDFSRZWXSMZVNJGRAOBYTXRUEZZRGZNUIBIYGAPSDXJEAQPEQFPFNDHLCDQKEFGZXWOTHTEHHFGBVNKUIQCLDHWAIEKDBGLCVTTENORDLKVB");
    msg.max.assign("RVWYYTHPVBEAYMWTFIBAYPNDZUGSSDVUDTZUZXOAFMZMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.12038608066977985);
    msg.setSource(50975U);
    msg.setSourceEntity(13U);
    msg.setDestination(31050U);
    msg.setDestinationEntity(94U);
    msg.name.assign("CBMMIOKQMNYXLIPZPVVECLHNOKUFCANDJBHRWWJPAYRGTTOSLFSTGVBOZPFGQZFWGRQWPUBIRCDCMIOWOASEXDCIVZKSDYHVOZHYTMKUGVFRYBKNVVQEYXWLAVJRZHDQJNZCWHFFENUJXSKPJSHRHEFBTAIJCULWJUWJQGDGOZIQMUNIAHYZDFCKUYMNTJCERPYPKEIYXRTXRDGDWGIUMLXEQNOSXXOXUSTVETSQPAAGBPEFKMZLBQKALMTB");
    msg.attr_type = 60U;
    msg.min.assign("LERWQYHVKRNOSIHBUPLXGVSGOMWIOLYKZQGAVMYZYRYPILZVNBWEFZJHCCBRLEOOKXAAXRPIXBWRGGPPNUMPKFFUMNIXDHLVUDQHMZKENAJBHMJAPXTTLGQYDGFUFAXWCWMSPIDDVCRBNXTVFQXI");
    msg.max.assign("PJNUBZYBCOZFIZTORSSTMVYMMRGPUARGWNUSTTWOYVNNUQLAJVIASCGXSNQAYISCQDNTIQIEBXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.479602121876164);
    msg.setSource(20807U);
    msg.setSourceEntity(158U);
    msg.setDestination(29019U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("SQLZCVBUJNQEDTPCMGNGLZWAODPGIOUBEQQQYPRNZJABNYUEDXUOCEELUKQJGBBFHHEPXXERVWGGISHYCHNMVTEZSMYVPSZUAFMWCBSYLWTYKGGLZRARDJEPJFINAREOOHOAJAWXKNLUWKXLXWXHDIDSFHRVZFIMQFSJWOIPFZWKVDJRBZTMLFHNTGRCPMMHSJZMGUSRSRIHILBYFYMKAYCUBKVLVPXUQTDFVAQXCOAOKWPKNYTQVITC");
    msg.predicate.assign("LBHFIHYCVHUZMWMSZIGOQLQZWGJFXNLFOAKOOAESZWXJIFSCVOKXQUELBMTLDHDHARUUMZFUHVUIOECUBLUGJEKNWZALZHTMVMNSRXKWIRIVNQHVWPQFPFGYQKVRMEBGWDDMIBCXPBJYTLBSTRUQDMORBQBPKHXKYADXEAYJTJCLECWSRSHPTVXTGSCEEAXIGAMTFGPWTRJYOVCNUYYERANPPDNZIGBIYDADZKPCOSXKWFGVJNORTFLNNPKQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IBWFCNUBZTWUXEJIZAEXJHGJNBQAMGNYDHDCHQVZYFKEELVMYTTIQZRZKOKZYIRVSCAKEMOFSYDLZGHORCFHBNUOCCSMFRPYUHLWICDMOQTKDLWXPMFXBPUCULAERGJKZNXWJBHRBQUPTJTHEELSLMTDNLUEJWOVLATPPIDGHQNOICWDIGGORBFWOMYOZVBCGXDUKKXWADYYSFWJBYIRFNQK");
    tmp_msg_0.attr_type = 28U;
    tmp_msg_0.min.assign("TJBNKSZIHNOLVWEFWCMTJLFNQFGWEHMBXZKAOZRMVYKQDSJEFIVMXZFAWNPMOFGGJOYNMYDX");
    tmp_msg_0.max.assign("SYSVPVHNIBQDXCXGHLALBOOTAEWXSJAQDKOGAYDWQMYMYANVWXWLBXXOJJTMNEZLFCUNQOXUHLLHGJHTZVQFRRDAFJPGJEYZSBPKCQKBNREOGRHPRMNEBVKIEOPUCV");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.8957285047868088);
    msg.setSource(56395U);
    msg.setSourceEntity(174U);
    msg.setDestination(2488U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("XZFLXNRXFIHHWTJCCFHABNFRCPJVOHPOSDUKQUEBJBDLGLIAPYJHNMAEOBFTNKOOPKSPESAXARCVKDFYZGSMGGRXHEK");
    msg.predicate.assign("TTQJPHSFXHPKYXTRZAKVOLIBATBLERZJNUUMVYIFUOLOGRHZWYGWEBHYZRCRFLXHFJJAQPSUIQFLVOBAKVIMDVELHZOASCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.08102936457612098);
    msg.setSource(64973U);
    msg.setSourceEntity(116U);
    msg.setDestination(38549U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("HXDWGRWUSXESQGABOTTGHUCUJMIDMMXSUKQPXCKQRTFBZAXTWGTCPHXIROYGKEROOODDNZCEKWZJUGDZYYRKSYVWDAOFAJVNKSZFAIRNVBSPREENNWVIJVQEALULTJTVJWUQYHXYVEPDSARSJFIYLTILBFPQTGEXNLVIMUF");
    msg.predicate.assign("DWUSGVACHVFNCZFHYAEQVTBQKATAQQCRSFTUUXVVGHLRYQSTWHEIOHGLRNTANFEDFXNIMRLDSJXLTGBIFKIMDDSRLIBBACWHZMPZSJYABOARWNYXDKPJYEKMDVCPKFGJSLJWLJXUIAIZJMBGGLZXDTUXKPNQHCFPXUI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WWUEBSFLPFUKSVJTRYZQCKXOBVGHMJDOQBFHHHSARCVVYZPLHB");
    tmp_msg_0.attr_type = 161U;
    tmp_msg_0.min.assign("SGZFEQFVDUJFFNRHBJLURTXVYTPQUESDKUQCQOPETGFHLYPKKSILKVWWAVZHSUKJUGHDPIGEOTXAICUDQMVINYLZCKMZWYMXDCTYCNQOAXGZMIEXBCRORRIRGYSANFWWCZPSAJNQPCJJETLQOOEUPRJRPIJXBZFQTIAKOVFNRHLOZNZKVBBSPLDHYS");
    tmp_msg_0.max.assign("GTSXKBFKNCZXQYMVMCYTWSMZOONGVZIMUGYCYFLVZUYWFFABLSDJWMGKHJKBELOTNRKGERJECAQNAZPEJDYRINFHIETXPXFIDZBNXSTLBRTDEMHWJVHUUWLHMUBOQGRUBCFOWWAVOORLHVQLZSJVGWXCHIFUYKLPECAJNJNGOXQFPQCUGIUYOWKNBTSTASPQPCARSMIEC");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.4995826716705192);
    msg.setSource(22700U);
    msg.setSourceEntity(212U);
    msg.setDestination(20533U);
    msg.setDestinationEntity(46U);
    msg.reactor.assign("DJZCGSAFYLKJQCBUAHMWCGQYLGONFBHWHFASHUKJBZJJULMZUTEKLQVYUOXEZGFELWTFMHCIHASXWJPPLPSMPSVSGZKJHRDFPXAESRSRRWUAETQDFKYVTUOHBKEAIVVILMAOBMDEWQVXXOGKATFSIDIHKNKSNCRXCUZRGIGFBBMPRYRYZOTUIQZZCXGJQDPPMVWBNTROVQOLIJUDPCKXYZLFDEMQWCAMECDYBON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.584304544449475);
    msg.setSource(49887U);
    msg.setSourceEntity(48U);
    msg.setDestination(29570U);
    msg.setDestinationEntity(50U);
    msg.reactor.assign("ZGLQWWBOCAOUJFJENDYSOPTOVYXQLAXNYFHIQYYKGNPULPCLGBQHVTXEFOQVXHAEDHJLAGNGEVGAHCSDJVHBXMSBWMKPBROCIQCPYLARUOG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TQLFMSPDYBAPTLPEAGAZZEKTCLADZCJDDFCQFBCWXNRDBIQXZUUOAPPXIWYRJGZZHRVSKQSUSCWQCQSXYDBMGZJOWNFCQYBWOYKWYVEIRENNTXLHHRFUHPGQAOIEMLJYVEUUYGXCTAIDLOZGCSBTHLHUGMJMTBQTSPIBWNNKOYKCDLBVGEOMVJVLPHFOKJMIDIUVNVOXVRVXPMKGEZ");
    tmp_msg_0.predicate.assign("UGCMWOSJPYBDYVUXDCVHXZFWAHKQBBQMXNSJCEUXSOFVIZFYGYXPMLWBT");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.4386818170101162);
    msg.setSource(57764U);
    msg.setSourceEntity(81U);
    msg.setDestination(24407U);
    msg.setDestinationEntity(104U);
    msg.reactor.assign("PCXUJBETPQCAVMRPBZCIBGAPOVXOLKMDUBINDBKOMANILOHCGGVNUMXHRSYSRYGMPMHEQYBPPPTFIAEZTINXWVJQKKDYSKCRCWDXUQHPDDSTYOAFLSHFUIRETLQWJUNJQJMQXNLLXNZHZXOFWDJHEVKCBWZSAYQEKJQDOVIUUEABSXIYWGIENQKMBSAKIZSDCMPXRSEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.6307252773078976);
    msg.setSource(27482U);
    msg.setSourceEntity(189U);
    msg.setDestination(56329U);
    msg.setDestinationEntity(246U);
    msg.topic.assign("TASCKCLJXX");
    msg.data.assign("UZPBQXGMAMAXLFLUAFUYGCKCJWHJFYFUVHUGPMCDESMMWILSRSRLQKHTLJUJPYTWAVWEYNOZKAXHLHVRYFSBPIWYHJIVTGYOKPEMTZODXHFDGXCCNQDHCJBOPNTEGGOYBGOFDSRCRSKZENQWQYXNWJPBFFAVAPHRFBZPVGHCLRTENKBCSNUKTEODVSBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.9775093704736294);
    msg.setSource(26768U);
    msg.setSourceEntity(55U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(57U);
    msg.topic.assign("EOYHERELUCAXIRJAYHLEAWNWYQVAXZTHHZJKJGRCPLVGSCUMDSHKFFGTJEIRYDNVDSPKGGOQVNJISZUARSRMMTHXIDTTXPNVFPQBOMFVVWXESCNPGSWKDVWFJULKUNCRZFJMEMQHBXYNCZHUHAFWLCOOSZKXLGUBIEKZIIVJZGAQBCAEWRFYMDYBXTZNOBUZGEBYLIFDWJQXBRIPOM");
    msg.data.assign("GACFNZBXKZQDOLWPMTTICKIRTFWNMXEAQKDHHWDUAUZCMIRHRPNWXMDDMPNNLLSSYVXRGWLYYUJBXLHMLGNADRJUSCFDHPYSNGBMVMFIATLVSYJZCKEUCYGQPTHTJWAOVWIMGAHTOERUVKOLJKABOEKIZBQBYFVQJSTVNQWLZQXIHNEPIYUFVPJTKKUGOPTURXOJMCQEBBBZGCEHPFIVZLSQOFHOEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.5036885851510673);
    msg.setSource(64891U);
    msg.setSourceEntity(33U);
    msg.setDestination(20636U);
    msg.setDestinationEntity(189U);
    msg.topic.assign("EYTGTFIJKKFTLBWQRMNPZYOPHBDLHRWDCBNQKLVEWIUTUAJOBVEJGVWHKTPDEZCPVGPFHKFPRRKCXAFGHTONQBJMHUZISJATHJBHCGNWOAUVZMAJNILLEYFRGUTZIMVDVHVCLPWUIKADOALYTPAUSFHWCFTLWPSIJXDISALFNSZSXYECJRWEMNOCIYVSUYGBNQKOSYMCXEEMDABBXGICFZZZXGBQDDOXKQLRNMYQXXRRJONX");
    msg.data.assign("RWJWNUUQETNDQOPTMJNLKISABEGGNOUYXSFBBRYDYVDCAYUMSLFTJIPKZMJXPQBEMVAMYKRGVGWWAEDSUEYRHMXIVMPIHYCKWJXQLGZEAIGOSETNGOGYTVXENRFIBAPLBZAVIBWVHKRASHPELRPQDJYTQRLKKCHKCOFCBUCBWWSKVZDZHXOGFCIFYNWMZECZSHQZUSXKHLHXJDQIOOZDTFFHVPUVUWNFQTTOFQZDGMNCLPCARUTPIADJBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.6831425786727988);
    msg.setSource(44981U);
    msg.setSourceEntity(14U);
    msg.setDestination(44184U);
    msg.setDestinationEntity(152U);
    msg.frameid = 88U;
    const char tmp_msg_0[] = {-95, -95, 18, 73, 62, 82, 22, -125, -32, 33, -115, -113, -119, 5, -64, 64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.047572182555472464);
    msg.setSource(24279U);
    msg.setSourceEntity(113U);
    msg.setDestination(57522U);
    msg.setDestinationEntity(127U);
    msg.frameid = 185U;
    const char tmp_msg_0[] = {-11, -57, -58, 2, 97, 22, -116, 19, 0, 86, -39, 78, -73, 3, 64, 67, 77, -29, 126, -24, 106, 66, -55, 54, -100, -9, 15, -71, -118, 70, -56, 78, -70, 80, -12, -75, -3, 125, -76, 42, -97, -110, -78, -72, 4, 0, -21, -94, -85, -31, 94, 18, 9, 41, -101, -63, -42, 83, -39, -99, -99, -73, -121, -46, -115, 0, -32, -96, -87, -26, -128, 44, -92, -23, 31, 12, 3, -98, 98, 69, -17, 109, -73, -110, -41, 15, -62, -35, 2, -48, -81, -82, 48, 15, -49, 112, 62, -40, -28, -19, 18, -85, -48, 102, -48, 12, -58, 67, 40, 62, 121, 63, 43, 48, -82, 32, -84, 33, -116, -47, 10, -10, 120, -11, -61, -80, 103, -125, 11, 8, 91, 45, -79, 31, 11, 59, 90, 101, -82, 63, -36, 4, -60, 15, -112, 43, 120, -121, 30, 47, -15, 34, 87, 80, 39, -55, -6, -24, -50, -59, -111, 100, 85, -110, 91, 1, 19, -87, -1, 25, -128, 40, -61, -89, -10, 55, -25, -77, 62, 53, -7, 32, -105, -63, 84, 49, 0, 11, -128, 1, 119, 72, 57, -99, 0, -51, -121, -108, -81, -6, -23, 34, -71, 14, 80, -119, 86, 110, 75, -4, -44, 25, 79, 97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.7389644953123014);
    msg.setSource(61270U);
    msg.setSourceEntity(188U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(248U);
    msg.frameid = 102U;
    const char tmp_msg_0[] = {-52, -84, 67, 12, 106, -15, -84, -37, -97, -33, -89, -19, -30, -45, -119, -58, -71, -110, 124, -25, -77, -19, -64, -81, 120, 83, -46, -24, 83, 21, -89, 117, -54, -100, 34, 89, -35, -62, 74, -28, 41, -86, -5, -100, 86, 4, -12, 57, -19, 91, 38, 0, -44, -117, 114, -85, 49, -14, 39, -113, -79, 88, -36, 90, 111, 9, 110, 47, 91, 122, -96, -32, 120, -22, -119, 90, 101, 82, 15, -34, -106, -83, -56, 56, -34, -128, -80, 10, 11, 110, 126, -124, -75, -78, 21, 105, -72, -51, 29, -79, 25, -71, 97, -74, 73, -57, -1, -104, -128, 59, 22, -1, 61, 61, -75, -93, -14, -27, -27, -117, 108, 92, -73, -75, 78, -55, -82, -81, 9, 83, -34, 51, 83, -60, -55, 67, -73, 5, 120, 41, -74, 1, -111, -83, -72, 59, -119, -118, 44, 102, 24, -50, -12, -37, -14, -71, -82, -15, 29, 74, 40, 82, 0, -16, 27, 119, 68, 42, 116, 101, 71, 100, 21, 75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.7526671923445665);
    msg.setSource(33781U);
    msg.setSourceEntity(173U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(243U);
    msg.fps = 83U;
    msg.quality = 148U;
    msg.reps = 122U;
    msg.tsize = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.37666588426698033);
    msg.setSource(24241U);
    msg.setSourceEntity(49U);
    msg.setDestination(46818U);
    msg.setDestinationEntity(108U);
    msg.fps = 134U;
    msg.quality = 227U;
    msg.reps = 147U;
    msg.tsize = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.15384597221215945);
    msg.setSource(842U);
    msg.setSourceEntity(176U);
    msg.setDestination(5202U);
    msg.setDestinationEntity(36U);
    msg.fps = 104U;
    msg.quality = 1U;
    msg.reps = 229U;
    msg.tsize = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.8257445018560314);
    msg.setSource(1712U);
    msg.setSourceEntity(224U);
    msg.setDestination(4702U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.5573974681561864;
    msg.lon = 0.8313011845727313;
    msg.depth = 164U;
    msg.speed = 0.24007136554662267;
    msg.psi = 0.10951168339652861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.36793327954312205);
    msg.setSource(14046U);
    msg.setSourceEntity(199U);
    msg.setDestination(35752U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.9077851193144553;
    msg.lon = 0.753276533887885;
    msg.depth = 129U;
    msg.speed = 0.525708391538846;
    msg.psi = 0.5220593643783075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.11666578450544118);
    msg.setSource(19169U);
    msg.setSourceEntity(186U);
    msg.setDestination(42403U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.7396290457112307;
    msg.lon = 0.8911315814359753;
    msg.depth = 18U;
    msg.speed = 0.3690265568982606;
    msg.psi = 0.24284158287340818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.5181709221194452);
    msg.setSource(35407U);
    msg.setSourceEntity(252U);
    msg.setDestination(7810U);
    msg.setDestinationEntity(203U);
    msg.label.assign("NXYOLRFONRZMIFNVOBYWLFXPBTFFLBROHDGNZCEXMAMFYNZIZYWSXRVOGLKRUPDTQBXMREVJAZTJPNSIHFERWUWQSSTJFKSPLTJHAJQAPFFBJ");
    msg.lat = 0.47484035447599926;
    msg.lon = 0.361552668198725;
    msg.z = 0.45848260359415605;
    msg.z_units = 158U;
    msg.cog = 0.4747584312878508;
    msg.sog = 0.4328723967056599;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.22644375883039813);
    msg.setSource(16716U);
    msg.setSourceEntity(122U);
    msg.setDestination(24829U);
    msg.setDestinationEntity(105U);
    msg.label.assign("VWQMIPSYCNANBPBYPOJNAFJVBFKIPVMCQSSBHEKQGBZFNXCJJIQSZAYDRTODJVDOBEJIWOZCDWTVWVNCLQPMAIQONEZZQWCAWAJMESQFRO");
    msg.lat = 0.10492672398008174;
    msg.lon = 0.08157729483581377;
    msg.z = 0.7104846848268648;
    msg.z_units = 82U;
    msg.cog = 0.7488234095623231;
    msg.sog = 0.7290073830306476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.7359742197452572);
    msg.setSource(23553U);
    msg.setSourceEntity(250U);
    msg.setDestination(21819U);
    msg.setDestinationEntity(178U);
    msg.label.assign("MFDPLOIZEIFIYPVBOUUXZAYVZRECKNAUGQULACXIENQYFGRVNCSNXRJPTUKFERXTPWTQTHYKDTMMEJWDGBFKBTHUEDPDAJVHGBRXRFIEWAJTOCXZFZQQZMPYTCESPOGXPDAHUNOZOUNGPTBOAKJRNVSTBHCSGMIYIJXKHOMWDLEDBMXVPKLZLWEZZMORSBFYL");
    msg.lat = 0.7863056400866933;
    msg.lon = 0.09991309545156446;
    msg.z = 0.4728034226010157;
    msg.z_units = 11U;
    msg.cog = 0.7739245517806969;
    msg.sog = 0.3882105634530929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.9276705573329228);
    msg.setSource(24897U);
    msg.setSourceEntity(210U);
    msg.setDestination(15958U);
    msg.setDestinationEntity(197U);
    msg.name.assign("FUGJGVZEBTSMGVJQUCPLJWVSIFBOWBQAOJQSQOQNCUIQGUVLLMHARLDBLWOLTWXHMNPHWSUNLMCZMOESRSPNWKKRFAQYYKAYDZTTPRSPEHTGJCVHBIFZXXMKJBGAXOHYRNNLMDLCEZDRQYGRIVWPTITQGHHACRVGDASJLZCJKEIOBXAVURYZJOXZABFDJYNMNFNTZXIMFXQAEYTCKUSOKYIODZYFUFECKDICBFXH");
    msg.value.assign("GLUUIZOQLWXFRMBLMNDTEHYUGNJPXMTYUKCWOYLIGIFABONYKTPMSQZUFWDIVGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.6920869843503918);
    msg.setSource(2640U);
    msg.setSourceEntity(79U);
    msg.setDestination(23722U);
    msg.setDestinationEntity(176U);
    msg.name.assign("QGITYPCAPKRKFKNRK");
    msg.value.assign("HZFSOJKQTYGLCXISPCNIQNJBVQPAMYSTBODUAQTHIDYRGIOYDNKXJEMJVOPDUWGZRLEOMZDKXIBWSDUVBYHCAXIBKJDLYXQPMCLFNSWYFHUEWRRFGRZGTTLXTECIVFSSLHELJEUUMPVJDDPBBOXBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.5022087902495749);
    msg.setSource(54134U);
    msg.setSourceEntity(67U);
    msg.setDestination(63478U);
    msg.setDestinationEntity(81U);
    msg.name.assign("DEOOMPKGSQEXKJANRMGXLWFZIENKDWEFWXPSSMKOPVXTJHTZOIRHFCOBMWLVFRHOCWWXYEHJFQJHUFSZPBFAEVLAQANYVVDMHBFSPUMITZOSIYODYPNSURJDLIGRBNDXZGFNOYIKDUIRIQHYQNHWRGLVBLPPJOUCWKTMBSWSDZXBPCTYQJLS");
    msg.value.assign("KGUFQDKZXMRQEDTLLESEAJPVUOQCWAXVPCAWUQUEBVVDFYQKWIMXTKJTHHTRMMGAMVKXXIROYPYSULHBADTCWVLZVFTXLPWLBWKJPOHTQZQGNRLGWHBNWBVROIASGYJRQDIFUAYAFZFUQSBECSGHLRNNFPYBOESOPBJNPUZXYRIYJOWMEIHXNCBGWOKZSXYDSMCHUFVEKHMTICLHJOPCATAZUKBZCMFVRFISODDXYJTNGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.36709243930283575);
    msg.setSource(23996U);
    msg.setSourceEntity(146U);
    msg.setDestination(55457U);
    msg.setDestinationEntity(220U);
    msg.name.assign("HFOPQBLWIGMEKMPYHMYBDPFHNFKTEAULODHBFJCSVTXGRTGUUPIJIJZOBPDDFRTXUESZCBSSNWQZPVKBSNMXLEXJTVBP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XUHTNQGXPOXWLYVREDW");
    tmp_msg_0.value.assign("BXCGJVHVBSAXUWJVFZQLPLDYVWRYFEFVEUPMJMDRLWODXTEXGMRZAAVWQIMTZMGEYCZOZLNAJECHHGVUXHPAXCRYCOSTAODSXZOXLSQGDPWNCBOIJQRDTMFJISK");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.11840912450634955);
    msg.setSource(50998U);
    msg.setSourceEntity(247U);
    msg.setDestination(55042U);
    msg.setDestinationEntity(159U);
    msg.name.assign("KCCZWEVWGXDRQAMQVTDFYLRCUQBRUZFGXULRBKGGJHAVOOSIUANJAPBBHEOCRSQWQLCSSAVVEAIROBTOWGEKYYJU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XDZSAFMQUMVSQXYOZVDTCDBTNTTLOUTTHCGPNKIGZWKRIXNOGPNZOFSBKGJIOZRXHKRRJUYAJQUVTCADKBLWEVGMNVTBUHMBGKRWPJELZFWABUKUVAFVEHEYQIIIXLJIHCNMUGMKEQXCSEHLFISPMISLOTLLCWUJORGAWOFQERH");
    tmp_msg_0.value.assign("AJUYWORKSEKSCWRBJCJKNWOGKYDQWKVNDNUMUTJYRNHLPMHPCRSUMHPJEBXDZYFAFYOUKOEGABMKECHJTRIVCQAMIXIZI");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.7648654703745901);
    msg.setSource(12127U);
    msg.setSourceEntity(29U);
    msg.setDestination(57177U);
    msg.setDestinationEntity(175U);
    msg.name.assign("CMOTIWEDVIPGRBSQVPHOHKPGOYHEDXQTLUKSXXNGASUDULBEOCNENRHYBQPDUBDTEULVEDAELICMNEVLVJOESTSLUCGHPBNXCXYQZZGQJHTDJCDJAKUWPGMTFZDQVOGSMBSNQFVDCQKIFRMFYLWVUSIIKHMTPYRNEZXMQUNJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EGNPCXXNMLTXLUJYXXKLSIXHBIFFBWAQICLWANMTIWSEZYWHQVNBYULEFEPQOGCGFICVBVPVKRSMTVAGRKOBATQRKNXBJIKCZREXGRRDZWIRGOADZZLVCJEZLKTZFJHSVAZPKTHLMEVMNMWMNUNSEVWQQKWDRYDJGBBQBQKUUDOYMRDTGNFYCHTINUSHYWADOSMLAAIZHRQOCTUJJPESFIPLVFYBGHEUKTXP");
    tmp_msg_0.value.assign("BKKHXEJTVNDIJUYCEQOGLMMHXMHBASZLGIPWQTWPMNRIZIXOXLHZBLSGPKQEBGQTFWHXRAZYDXNEBHUDNIATJWGRQVHWYBPZSJACRASJOZAWMFPBVSPDFQILRDRWTYNZKXHMNIUVTTLUPJPXGHIMEOK");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.6143287121188792);
    msg.setSource(44548U);
    msg.setSourceEntity(69U);
    msg.setDestination(55075U);
    msg.setDestinationEntity(103U);
    msg.name.assign("IDSTJMQMZVOESXFSKHTTRVBWUHEIMTGAJGGAUXMJGQMPSWATAXDLBHOPBLOZYYUIONLZBHIWKUOYRVLWGDKBRQXKWOBMVSJIGSFSBRQCROFDUZBDLVFEDDAPNKTGMVFEQWTDHVVQNIUJZCXEKCMSORYEXJYCNUCNIZDIENEZAAFJUAZVYKJUPBLHWXLNQZPJWKRNKLCZHPRFDIXLYQBCLJCWHORHAISSAFXMVPTEE");
    msg.visibility.assign("ZRXXIBMAQCEYUNMNQWTFBZTFSUTFVLMQAOFMRJGLZWOZPJPHIAXNZHDSCXDVDOHHHQKKHIGUCHOLNKVXYABXGQWFATTGRTWECVSGMTUCYDOIXBPIJHAPWZDRBJCNVRCLTUPJLYMFFVLERUBOQEQAUPZEWYGJKQVKWKGYKWZEJYRTOOSJZSBSQHSRFRKBICOANGDPWMSEZDFPIVIYLLMYIC");
    msg.scope.assign("EIVJQELDGNVWFBRBBYRJLTCAZQYGVAXRRKMIHZYXMQWWQPNKV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.7143790134794812);
    msg.setSource(58645U);
    msg.setSourceEntity(0U);
    msg.setDestination(9861U);
    msg.setDestinationEntity(192U);
    msg.name.assign("TXLZOFCDSOYHXKDAIXEUPCONZZCEDTHOYLOPMHYGBJQLHANMENGTGLVCSZXBFVMMWQCSPKGALKIRHDCFQKYWDPLOJAUTIFSXWBWUSLPHGJJKUCZWYFWCEZRMJIXCIDNFIGEQZRUDNIPDITBBVXJUTMPSTPOXFBEITROWHAZSHMGLNZQKQRSG");
    msg.visibility.assign("YALHQPKDAOONUIQEFSENUJQLTOUKZOGBTONUAPZJTVGIKSRGUXOIPGIBHMWELWXIZFRPDYVZRHDLPMJFXFOZKUBIMHIHMBFCJXZACGVBTXTNRWDFARJLVRIQJECYUQCLWLKHSCDVRWSROBZTWHQVYDYWKTETCCVW");
    msg.scope.assign("IMEASWUVLPFTCYSNXBFHKCOVCJBDRALTDEAUPCCBZGTPPZMQCUHBRACNGWHSJWNOHRYDGVCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.37226534240263665);
    msg.setSource(8220U);
    msg.setSourceEntity(33U);
    msg.setDestination(34765U);
    msg.setDestinationEntity(15U);
    msg.name.assign("YKDQEXTWAXZOSBHM");
    msg.visibility.assign("YNZAXIESQDRORMXVGTYMPUZHRCUCGZNKIOPYBRRAJQKGVFDAHABPTFZAHEHVARZELJKXFPNPCROVKXEWMTBJEJNNPRWDQOLSGBRPAZDNPABHJKQBWTYKSPNYZJBWVYCSSLXLBWCXKXODOULTJBULHGICMMACZTHQQUWSMNFCSANFWJIFRXHFYFMSLMFCDOSIBHQPWSLFIIOUTVXLCUDGGKIEIVKGOYEDYDWZEVU");
    msg.scope.assign("KIROQZHFNHFYNSOXVDPDBSDIXBXUGOZAJSBSZEEJNZKGXBHONPMGMHCCAJJYVUHLFROYFIKFWEBUZLDCGUGJTNYEDMMQFVXPOJAVIJLGTHRTSIKOQYFBFYRRKDQPVWIBVP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.25675653342325666);
    msg.setSource(55304U);
    msg.setSourceEntity(182U);
    msg.setDestination(2746U);
    msg.setDestinationEntity(16U);
    msg.name.assign("NSEUIRYRHXMRQTAMSMHJJFHQAAVYZMLRIXJSOTWLDBSQNJABYQFZENJUKLGBFJAUOTTXOECPBCGPAOSTQJWKAIEDQPHT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PPSKAZRRUXOZSLQGXHETIGTOADYGFLOYNGSIJHPMFJESOFEYUWRLLVEBKDCZILKBHHYFGCIDWLQOZHXORMTOFSCDCUWJYSCPAKHQFDLVNANBCPPTVOISIXKMSMUIIYQTRANTLABSVQNKXERTKWHUUEXDSKQPMFCQIJTJNIMEYGYVMPGMNZWPLCCHOHUXZVZ");
    tmp_msg_0.value.assign("FIMSTASPTFELLTIQPBIMKAAGPGD");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.17506609449668187);
    msg.setSource(34835U);
    msg.setSourceEntity(134U);
    msg.setDestination(31964U);
    msg.setDestinationEntity(56U);
    msg.name.assign("YQZUNOHQLKVNSNIWNDQDXKSKJEBUSLPYFMOJBXYOCPRMPRKUIBWJAMKBHACPIBFXCYNKYLUAJVXESJTFQQOCLRNSOWLCWDJGETZSGWLNEXWTGPUTVHUFMZCFZNWUZRTAFDTCMZBUCXTSLLXIQVOPGKYDTHQFORKEMIUVFBRGMAAZYDENGYKBBYWGPPJVROEVDOCICHWAQEJASUZDJDVWHLITIZMAEZIFLGIGPYEXXSSRNHMDXRBTGH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RYDIQSXOYXDONHIIOHXJBFQZLMFHDKTTVWXLVZIHLDRVJKMLXVWUZMQTGSKEOISHOUZNOTNTZQPBJKZPKPGOCPCYVNULPULWNSAKDUYGNEEQXZJHUTYLFGLQYJEYQUIBAQYEMTCXKSWFAVSXZGGTKFJTQUVJKDRSMSIFCQPRAIAZYEBWRVOPMMJBRPSENXLCAWDKEFGVNCXYLPOUCWR");
    tmp_msg_0.value.assign("JSCCCDOGPWFBSOZEXAUMWMMHXWMTNPFLHBHFQUHRTVYQBQCFDDLNJUJYZVDIUIOJARYJZBNOTUZEVAGCAXNTMKUI");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.9041906771463142);
    msg.setSource(1407U);
    msg.setSourceEntity(158U);
    msg.setDestination(40535U);
    msg.setDestinationEntity(119U);
    msg.name.assign("OIEXJBOZOGXQQSSBQWZFEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.11528333021291381);
    msg.setSource(12438U);
    msg.setSourceEntity(213U);
    msg.setDestination(61415U);
    msg.setDestinationEntity(2U);
    msg.name.assign("NYYWRIUEAFNXWFAROKGJCKCJTMGAEHLIEZCRPQCVPBJYTTXHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.1030313271091543);
    msg.setSource(40594U);
    msg.setSourceEntity(222U);
    msg.setDestination(34048U);
    msg.setDestinationEntity(16U);
    msg.name.assign("VHWJANSAICQXKOIOLHUAHKRWGCQWGEWEKTLUKSJULRPKTYFAJXPSANXUKCKLUEKDUATPDZCECQYDONVVPJGLTJADZADKGIFQGSISXEZPYXCWZFFVBZOTWVBRFBFHZORPIMQXMVGAIMGNBLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.6680929925805238);
    msg.setSource(25685U);
    msg.setSourceEntity(88U);
    msg.setDestination(16439U);
    msg.setDestinationEntity(243U);
    msg.name.assign("VRYSNOOVHACEKWIWZALBMJAYEFXUXSUBKEDJFFPFCTUYDVIAOGRXQMAEPJIESBKGQDQMUOBNJLNCSOTTRHMCFIECPZXJZYQRYCXZOMYCWMAUPXXNSINKLFSWKFVESNPMWJQIGIDWRHNWPXORBYLDHIJSWMQGRGXPADQBIQASZMTDCHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.6604017719011974);
    msg.setSource(14883U);
    msg.setSourceEntity(76U);
    msg.setDestination(33276U);
    msg.setDestinationEntity(241U);
    msg.timeout = 2823817576U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.20233947544137065);
    msg.setSource(5255U);
    msg.setSourceEntity(170U);
    msg.setDestination(47118U);
    msg.setDestinationEntity(189U);
    msg.timeout = 1506438013U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.9932037405959753);
    msg.setSource(16084U);
    msg.setSourceEntity(187U);
    msg.setDestination(37910U);
    msg.setDestinationEntity(208U);
    msg.timeout = 2746679223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.4218081292581978);
    msg.setSource(58360U);
    msg.setSourceEntity(173U);
    msg.setDestination(36309U);
    msg.setDestinationEntity(20U);
    msg.sessid = 1152305391U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.3384808617998507);
    msg.setSource(20782U);
    msg.setSourceEntity(132U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(65U);
    msg.sessid = 2164675815U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.41912971915262487);
    msg.setSource(27710U);
    msg.setSourceEntity(187U);
    msg.setDestination(5190U);
    msg.setDestinationEntity(207U);
    msg.sessid = 3103774873U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.4703891655640773);
    msg.setSource(31803U);
    msg.setSourceEntity(133U);
    msg.setDestination(13292U);
    msg.setDestinationEntity(112U);
    msg.sessid = 2253305975U;
    msg.messages.assign("RXBBVCURBSTMZZTIPELGYWLQOVZWXBFNEVEYLAGMKPSCDLVQNUNLYRNZEGKAJSVRTBOAIGSRGBKJRKSDJTAAPOSNTFFDLDMVZQTQZYEXZQNPMSZMJQYYIWUZTVWIPVIOKHOXSJINNCCHLYUWAPAEXDMYJRMJWSOXCAGFEKVPDOOUMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.7360976261920219);
    msg.setSource(51152U);
    msg.setSourceEntity(207U);
    msg.setDestination(35449U);
    msg.setDestinationEntity(109U);
    msg.sessid = 4187144297U;
    msg.messages.assign("BAYSUVZWXUXIHWSDEAEXNRCDVRWMHGBDGPIQPUKJOQWKQYPJVMHDLVOVHAMXGHYCDINYUTMIKQFRKCISNOIUACNGOYWYAOJSEMPWNNRBCZZBYXIIEEECMMFTMLTZVCFRQZNUSHHZVGGSJJEWJMKOMFZFIDXJRPBLKPTUAIQESPBVHAHJLLQPJPLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.5859490535882548);
    msg.setSource(15235U);
    msg.setSourceEntity(148U);
    msg.setDestination(51751U);
    msg.setDestinationEntity(115U);
    msg.sessid = 828856600U;
    msg.messages.assign("TLRPJKLCLVXOPFGRMKZIVVUMRZZZHXITTHLBOIKRXDBECGHYYAMUFJDJVHWPMZUWVHXAGDYSXMPNVTQDHSCBQNLKGQTVIFXBTLONTJTOAMNANOCXDRISBASWFFMGHNRDCWOZRLHICGEORQPROZSEBKUSBVDBWJEVWQKUAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.21459300640640777);
    msg.setSource(51293U);
    msg.setSourceEntity(169U);
    msg.setDestination(43558U);
    msg.setDestinationEntity(103U);
    msg.sessid = 4010274934U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.7148657263967721);
    msg.setSource(43896U);
    msg.setSourceEntity(197U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1279106050U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.42720205738709305);
    msg.setSource(47720U);
    msg.setSourceEntity(178U);
    msg.setDestination(36463U);
    msg.setDestinationEntity(96U);
    msg.sessid = 2278194346U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.8601343377447435);
    msg.setSource(1769U);
    msg.setSourceEntity(170U);
    msg.setDestination(46228U);
    msg.setDestinationEntity(153U);
    msg.sessid = 1021380918U;
    msg.status = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.11742753273102113);
    msg.setSource(60204U);
    msg.setSourceEntity(251U);
    msg.setDestination(50506U);
    msg.setDestinationEntity(153U);
    msg.sessid = 1538617162U;
    msg.status = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.4777176509585431);
    msg.setSource(22586U);
    msg.setSourceEntity(4U);
    msg.setDestination(8620U);
    msg.setDestinationEntity(76U);
    msg.sessid = 908152257U;
    msg.status = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.7472007049027378);
    msg.setSource(53168U);
    msg.setSourceEntity(2U);
    msg.setDestination(51952U);
    msg.setDestinationEntity(174U);
    msg.name.assign("LLGKTWWPHWRWFFQDNTMPCVDHDKFEBSXJIYDYBAISVCNSXPOSIIKJJDBTPGXXRINJULHBCONOVLHLMZWZUUGTUETMSNYQFBZOGJXTWEHDSROPYQXQZZUROCKEXKZDAOYHRVSZUHDFDBICMKNYIQEFUESERNSQHMLIFKKABQZJGAOJHWQMMRYVTKVIBGTXRMYKQGPAAEJLCUJRLAMAFGCVQLMWNRZCNWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.9244074161432704);
    msg.setSource(50909U);
    msg.setSourceEntity(230U);
    msg.setDestination(8325U);
    msg.setDestinationEntity(242U);
    msg.name.assign("OUJGAVRVZWCHMWMIPCQFCGIAHESTTFUPYXKRVCBJGBNPRABPEEQBCCBINJBPQTID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.6504069140976124);
    msg.setSource(27213U);
    msg.setSourceEntity(88U);
    msg.setDestination(11826U);
    msg.setDestinationEntity(234U);
    msg.name.assign("IFVFWSLRUHQJEXSPLXNIPATNKXIARZUOOOOHSTZWYGQBVMJITSEYXKSVDDSULRBWKQEFFVCZNYLMDPWXPRUIQOPVEAAJTPBCDLQJYUZEJGKVEQTXHGBBUCOOQHLYZPINOHUTMJZEOLMKNUTPXEGRWAHWIIRBMMHTDQLRDRGVAYAKSGDSDWDCKFEQNSNBHAILJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.19288041181215765);
    msg.setSource(28556U);
    msg.setSourceEntity(181U);
    msg.setDestination(23244U);
    msg.setDestinationEntity(245U);
    msg.name.assign("KHEOVPNABYZBJMKYQZQKNBBDXTFEVHQPBFGNSQPCLIRWTMXCNZRDFVKAPICXMTZIHSIWRAXVJRMGCJRATOCKKQLPWQEYJCTPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.8407698051652163);
    msg.setSource(45457U);
    msg.setSourceEntity(144U);
    msg.setDestination(37113U);
    msg.setDestinationEntity(35U);
    msg.name.assign("FNOEZNJYHRTOIWQTMGJVUDTKVFZGXGHRCDOARULNNNOYXOQJIVZOJGLNWFPEZCVUYPUBUMSUBBPKCGWRRHROZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.06763347455600854);
    msg.setSource(23430U);
    msg.setSourceEntity(155U);
    msg.setDestination(52719U);
    msg.setDestinationEntity(108U);
    msg.name.assign("IAABBXQXQKNSPGIMPTHEGNELOKMWOJMFHZWXJHSCTJTEYYOYFDSYHEZKEXNMKMTGYRDGGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.62675464199201);
    msg.setSource(8747U);
    msg.setSourceEntity(168U);
    msg.setDestination(42210U);
    msg.setDestinationEntity(133U);
    msg.type = 186U;
    msg.error.assign("LNAUGGNGIMAEUPBNQCLIGNWKGTOKGYKZFDXDDARDSCRFFZXEBDVEBSJBBUBAMZLYBKTJPYHGQYIFDHSSROCHOXFQVYAAMLEUHNWNOLQCOUHFVGQWEZCVSHVUFSCIIZJJOMFRXYIVAEROTYSWMYKGDSKWWNHYKQOBPXDBSLNTIEZUTMQOAMXRBRPMJTCERZJLKYXVPJNIUHQALXV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.7292123552861878);
    msg.setSource(2689U);
    msg.setSourceEntity(63U);
    msg.setDestination(56107U);
    msg.setDestinationEntity(43U);
    msg.type = 45U;
    msg.error.assign("FHLQZSCXRNZIAIKKGEIJQUSBCQXFGAXDBDMORXIWGPOYANZGTRUQCKCAVYDKBRNPPRJRLZFMWDHYUFAWBYYSYQIVHDZXOLDZGHJLOGZOSOWUINDMJWOMEMKTEYPQXESTWMSLFBOHQUXWNQDPEVJSIHUUTRNZATTHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.09468786600635615);
    msg.setSource(16463U);
    msg.setSourceEntity(141U);
    msg.setDestination(64772U);
    msg.setDestinationEntity(91U);
    msg.type = 113U;
    msg.error.assign("PRTUCHPLSMKVFUDTIANHDDCLMOIVQBVJLCEUQBHXWGQUELFFXGWWHMXMNJFFZRCFWHKMDOURTPOLKEBSAZVUEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.6034773104911182);
    msg.setSource(65487U);
    msg.setSourceEntity(243U);
    msg.setDestination(24186U);
    msg.setDestinationEntity(171U);
    msg.seq = 43731U;
    msg.sys_dst.assign("YQVZJHQZQHOTKPFELDWHEJBHLDLZXDBZVALJGYSSDKVUIXKLTQNBMCOOFRRWCYVWQCSGBOMCQOX");
    msg.flags = 40U;
    const char tmp_msg_0[] = {10, 62, 3, -46, -17, -18, -67, -91, -88, 96, -102, 97, -4, -102, -71, 93, -24, 60, 87, 36, -128, 64, -15, -16, 93, -33, -108, 58, 52, -124, 50, 103, 74, -9, -23, 42, 16, 52, 97, -1, -127, 20, 10, 36, -74, 61, -57, -31, 50, 20, 59, 114, -32, -84, -79, 62, -101, 117, 51, -75, 69, 4, -3, -61, -24, -61, -11, 54, -93, 73, 95, 115, 111, -56, -8, -19, 2, 101, 117, -29, -103, -92, -123, 18, -12, -48, -44, -7, -17, -45, -87, -82, 46, 20, 111, 76, 17, -64, -92, -4, 31, 96, -83, -70, 58, -8, 14, -43, 6, 38, -113, 58, -127, 124, 8, -61, -126, 95, 41, 104, -54, -53, -100, -51, 101, -78, -40, -121, 80, -72, -2, 13, 118, -49, -82, 48, 86, -69, 6, 94, -7, -26, 77, -94, 5, 104, 103, -50, -28, 73, -120, -20, -70, -35, 30, 33, -81, 126, 32, 124, 37, -105, 3, -96, 92, -67, 42, -10, 54, 91, 82, -81, 39, 96, 94, -111, 65, -54, -1, -93, 28, -53, -17, 14, -100, -127, -62, 66, 71, 52, -128, -21, 53, 48, 99, -26, -40, 58, -106, 89, 50, -24, 99, 76, 25, 25, 51, -119, -126, 80, 123, -95, -32, -96, -74, -88, -37, -28, -70, 50, -125, -6, -59, -104, -117, 8, -21, -108, -35, 44, -128, 57, 38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.4584649716767296);
    msg.setSource(55377U);
    msg.setSourceEntity(137U);
    msg.setDestination(49133U);
    msg.setDestinationEntity(62U);
    msg.seq = 26451U;
    msg.sys_dst.assign("XOHHWQIPHEKYWAAMDJWMLCQQLHZBJLGRICLFAPLVGNENYCNTBTECWKKNSJSRFTAYNUWWPIWGLTXMJFFCQEAUPKFSIZJV");
    msg.flags = 228U;
    const char tmp_msg_0[] = {115, 40, 125, -109, 51, 49, 75, -32, -69, -122, -30, 19, -68, 1, -107, -33, 48, -53, -55, 93, -56, 36, -25, 47, 82, -124, -13, -45, -104, -85, 58, 86, 68, 28, -103, 98, -6, 11, 99, 39, 13, -102, -30, 30, -59, -62, -24, 69, -25, 15, -34, -56, 57, -16, 51, -89, -95, 89, 79, -54, -54, -109, -38, -65, 71, -119, -17, 58, -89, -126, -28, -59, 56, 51, -106, -81, -83, -100, 70, -85, -117, 102, -128, 15, 108, 100, 93, -79, 70, -21, 83, 115, 121, 15, -41, 110, -84, 87, 94, -42, -78, -69, -43, -24, 31, -82, -110, 3, -110, -9, -111, 59, 124, 65, -31, 22, 48, 91, -127, 56, 54, -69, 53, -87, 112, 27, 77, 22, -41, 60, -44, -43, -50, 12, -21, -22, 101, -25, -8, 103, 82, -65, 23, 39, 29, 27, 79, -99, -55, -27, -10, -127, 55, -65, -27, 99, 63, 53, 19, 71, 79, -21, 92, 21, 82, -55, 99, 74, 96, -40, 92, -114, 39, 37, 30, 119, -75, 111, 103, 93, 19, 96, -19, 98, -53, -70, -61, -40, -5, 16, 86, 34, -43, -25, 21, 38, -123, -19, -13, 81, 37, 24, 94, -82, -72, -58, -123, 62, 70, -34, -51, -97, -98, 102, 13, 120, 115, -1, -23, -103, 84, 17, 40, -16, -25, -62, -41, 100, 38, 84, -16, 101, 108, -25, -99, -97, 52, 83, 114, -126, 91, -65, 19, -85, -87, -75, 50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.8673343006360537);
    msg.setSource(10398U);
    msg.setSourceEntity(165U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(171U);
    msg.seq = 3317U;
    msg.sys_dst.assign("HNXYBDXRQSLRSLHMVUSGEUIKQHXITAEIGMAVRZQABSBIOUHXKYAGOMBBYIYPALKLAMNJCSOICDROZTWPZVMFUTNYGCTNBRJQNCYWFVYGPJTTCBEGSUHAMLCWDWZJOZLKHNFVDEMBFJDKDTEAAKPWOO");
    msg.flags = 11U;
    const char tmp_msg_0[] = {-64, 69, -13, -20, -43, -2, 123, 23, 50, -80, 102, -93, -58, -60, 79, 35, 66, 30, 87, -22, 84, 121, -119, 6, 90, -123, -60, 31, 116, -51, 103, -65, 125, -37, -101, -54, 29, -51, 39, -16, -74, -12, -127, 53, -50, 102, -106, 76, 29, 12, 113, 57, 108, -93, -98, 48, -84, -61, -118, 1, -118, -62, 15, 120, -45, -33, -103, -93, -30, -60, -69, 70, -73, 30, -89, -37, -19, -120, 89, -35, -114, -56, -68, 34, -55, 124, -26, -69, -95, 115, -117, 13, -80, 17, 51, -27, -100, -74, -125, 43, -86, 30, -72, 102, -29, -43, 20, 123, -90, -22, -114, -96, 81, -31, 99, 7, 99, -48, -97, 41, -43, -80, -101, 13, 62, 77, -15, 78, 84, -11, -79, 29, 115, -11, 123, 73, 60, -117, -116, -15, 25, 60, 100, 33, -81, -81, -44, 54, 41, -121, -93, 53, 4, -119, 59, -39, 99, 16, -125, -74, -106, -6, 26, -88, 67, -8, -59, 49, -127, 25, -31, -16, -44, -27, -112, 95, 15, -40, 49, -119, 102, 33, 49, 49, -4, -30, 79, -119, -106, 63, 89, -91, 116, -53, -59, 46, 108, 25, 95, -68, -128, 73, 89, -45, -82, -49, 101, 68, -30, -9, 13, -96, -68, -102, 36, 49, -120, 25, -106, 5, 13, 74, 16, 106, -4, -77, 63, -11, -24, 104, 70, 106, 91, 41, 56, -120, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.13751059411652622);
    msg.setSource(61492U);
    msg.setSourceEntity(135U);
    msg.setDestination(32410U);
    msg.setDestinationEntity(19U);
    msg.sys_src.assign("MZQWHHNETUCLOAGDYXMIJMFWKRNIHLGBVEFKWDUORTPIWJPQCPXVJRISZXTADLZPHRWAPQJLFJXYKDTHEKRKOREXKVBGQIMPASNKPMUXCUYLRZHMKYDTXBIAVSNADGNHCUBVDSHSITWZALNEXACTCESEBBFFGJ");
    msg.sys_dst.assign("QJHXMJTCVZPPSPOLFDGDNYENMZWGVDGALWHLHEAASRNFNWKCYSFOVXJDWMYMGHLTCVBLTZTCFXUOKFGCUKMNDKAECJFRAJOPIPBUF");
    msg.flags = 12U;
    const char tmp_msg_0[] = {-28, -104, -7, -128, 90, -86, -107, -28, -26, -124, -34, -124, 64, 19, 4, -92, -14, 112, 54, -3, 74, -47, 99, 89, -23, 88, 40, -91, -23, -51, 121, 67, 79, 80, -57, 36, 81, -62, 30, -127, 31, 97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.29190185595005824);
    msg.setSource(3852U);
    msg.setSourceEntity(239U);
    msg.setDestination(60198U);
    msg.setDestinationEntity(131U);
    msg.sys_src.assign("BLVWQAHQNENQTUYAMCXIQIPBXJJYJEASNRRTYINJTESCNMSFDJPIKWJBERFHESDSJHNYFSHBTOVDDQELOPWQRBOFAGOOYLRDTKBZFXXUOKBKNIZZAUAVSVTJSOXZZWRYYWXAOEHPKVCGRKQCTGUOVPXGSDZWKYUJKUPLMGBMHDCDDGMLWHDMPMMZXNLKRLNVTJNEWLOVUHALILXCGGW");
    msg.sys_dst.assign("YFYVDAUGFSJQJPBNSFYMUILBOBXKPZXMDSHKPMOBDARNAEESECQXPDFULBVREVQBLSPGZKTHGFRNYXMLALRKHNCPWTRWMHODWTIZBQRRWZSIVLXHEFXWYPY");
    msg.flags = 249U;
    const char tmp_msg_0[] = {69, 92, 63, 54, -117, 100, -80, 122, 78, -112, 41, -31, 13, -121, -120, -67, -28, -6, 12, -30, 85, -19, -98, 80, 88, 94, 66, 41, 54, 64, -36, -56, -25, -95, 71, 66, -31, -46, 93, 38, -128, -120, 100, 103, -28, -18, 5, -74, -65, 83, 51, 9, -27, -87, 108, -113, 92, 61, -103, -88, -50, -121, -35, 67, 1, 107, -32, 68, -19, 76, -107, -55, -64, 90, -85, 8, 71, -80, 32, -2, -22, 52, 33, 14, 35, -37, 122, 42, 50, -84, 73, 24, 27, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.47729902313438965);
    msg.setSource(5588U);
    msg.setSourceEntity(249U);
    msg.setDestination(52546U);
    msg.setDestinationEntity(148U);
    msg.sys_src.assign("GFGVZXQLUHUFRREBDIWEKQVUZLAFTOTJMMQHPUFHIZJSMRPPICEFCXYBAKIKMRELJSDNCWPBOKOBVISZPCMWXGDXQVNSHIYPVCEFEOTHPYPLSWODNAOPHYLUUVGNITONWTUAQXMJCWQGSFLJRZXZUXBQSYYSTABNMJWLKVOKRVICB");
    msg.sys_dst.assign("YBEAJBLBLMPCAZVASIKJRIQTUSOCUGXQLMBHLVDRCZKXFLXFKYLWTBCMQWDCYMTFJCGJVYCTSAJCGGEYVPDEFNQQLFJPAQUIXPBDDTQGQRIEWGEVVWMFMRBRHWZBTZJWKNINHOZEURAIFSWHSDNOBRKZJCEZRSNKRLBJZSFOATIDGPJMEOFXKOHNAKUPLNXUWUZVRMPDOSVHIWYEINTAOPUXADHKTXPMNVDXHUCYYSYQNOETXQGH");
    msg.flags = 217U;
    const char tmp_msg_0[] = {-127, -42, -39, -95, 82, 78, 30, -68, 45, -105, 83, 55, -59, -119, 119, 5, -66, 56, -125, 20, 40, -58, -28, -101, -32, -111, 91, -118, -17, -26, 33, 114, 36, -9, -85, -74, 34, -112, -67, 42, -40, 90, 70, -69, -110, -44, 75, -47, 63, -62, 70, -34, -2, 118, -58, -20, -92, -63, 50, 119, 104, -44, -18, 101, -30, -57, 66, -26, 102, -2, -1, 26, 95, 42, -5, 22, 73, -76, -81, -59, 64, -97, 108, 45, -53, -18, 40, 89, -47, -89, 93, 56, -66, -109, 68, 27, -125, -23, -78, -67, -26, -70, 117, 18, -10, -113, -76, -2, 6, 102, 41, 80, 101, 63, -71, -14, 106, -92, -86, -50, 36, -68, -4, 98, -96, 120, -87, -92, 19, 88, 102, -83, -18, -40, -76, -103, 21, 115, -72, 64, -50, 103, -59, -89, -119, -121, -45, 125, 90, 67, -8, -30, -32, 4, 27, 2, 123, 24, -77, -64, -77, 125, -97, -49, -9, 8, 67, 7, -23, -40, 97, -26, 23, -75, 7, -13, -12, 37, -55, -125, -49, -115, -77, 38, 117, -79, -90, 82, -5, -47, -13, -11, -21, 95, -45, -66, 27, -67, -5, -69, 31, 19, 56, 74, -69, 59, 116, 22, 123, 125, -75, -90, -78, -55, 28, -55, -88, -6, -113, -78, -73, -59, -118, 80, 58, 106, -36, -46, 80, -30, 101, -104, 8, 93, -81, 77, -39, -27, 125, -52, 6, -13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.6007862767143594);
    msg.setSource(65050U);
    msg.setSourceEntity(233U);
    msg.setDestination(57589U);
    msg.setDestinationEntity(69U);
    msg.seq = 53288U;
    msg.value = 131U;
    msg.error.assign("IEERGNXVBQALRYUSBXEOCAZKYKZNPVLRQFJMCCCCWPBVZGOYEKSTUVMSFHIUMJGNTQOFFXNQRWTPZWDJDGAHUPTBMLDSMFIYXYCGJUXLXBDXRWWQKDRBZUEHKIAVYKKTJOETFBZLXJRHLMGHPWKNRTOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.09037189393195366);
    msg.setSource(25215U);
    msg.setSourceEntity(244U);
    msg.setDestination(4222U);
    msg.setDestinationEntity(109U);
    msg.seq = 35075U;
    msg.value = 79U;
    msg.error.assign("MZQDJXRMTFJXXEZVQKPTEGCFDLJMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.2342352985933165);
    msg.setSource(11874U);
    msg.setSourceEntity(170U);
    msg.setDestination(18348U);
    msg.setDestinationEntity(42U);
    msg.seq = 37202U;
    msg.value = 40U;
    msg.error.assign("RRUQFVUEIAHZWUVGFWHWZCPARRWVEVQFFTYLJCSVCJNFPRFQDSRAWLTPDXSLLDHPBIUMBZQZZJDEZPEJKBMAUMXLFOGRANJTTUWRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.11851488830688328);
    msg.setSource(52455U);
    msg.setSourceEntity(250U);
    msg.setDestination(47494U);
    msg.setDestinationEntity(224U);
    msg.seq = 48494U;
    msg.sys.assign("TKFBHRANRYIILSHCOYLMEGUCHLHQRXC");
    msg.value = 0.915711861038343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.7952342767929754);
    msg.setSource(27872U);
    msg.setSourceEntity(55U);
    msg.setDestination(15173U);
    msg.setDestinationEntity(6U);
    msg.seq = 40437U;
    msg.sys.assign("GHJFYXPKRHEEJHMTUWSWZQUFXFRG");
    msg.value = 0.7593923675587394;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.9109427869065788);
    msg.setSource(8703U);
    msg.setSourceEntity(106U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(157U);
    msg.seq = 38248U;
    msg.sys.assign("ESPEIUCDUAMFLQZRKQYMTMHUWOBNUWEXFZKVOSIEIUZRCOFFWJZMJLZZLUAUTYDGJWHLFLEQJEKB");
    msg.value = 0.25409203245726986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.24931817241467713);
    msg.setSource(51558U);
    msg.setSourceEntity(67U);
    msg.setDestination(7159U);
    msg.setDestinationEntity(32U);
    msg.seq = 47229U;
    msg.sys_dst.assign("ZUYFFXLQGCVHBWWMDRCEWDCESLBITTHKAUFXNWTKONEHSNQDZEYCLDLSELEMBGFBSZCARIKEJQVMCXGLUCVMAIVSJJEKHBSYIMIYMFUUGYGNDUOREFTKLWRNMBBEDHWPGYTPGBUCRRYXKARZKOINKZPWSDWHADGJMDMUATJZWQTSQILPFXZQIPARAVRQJWXHJGZCIHZYXFNSJRPKTPVVHGVABOQQDXOTXPSJNKQVPUMOYOOAY");
    msg.timeout = 0.36391864591464285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.9708286464255428);
    msg.setSource(42357U);
    msg.setSourceEntity(76U);
    msg.setDestination(16868U);
    msg.setDestinationEntity(111U);
    msg.seq = 64055U;
    msg.sys_dst.assign("IVBVHEXLDCEAEGWVFFAIJDUNPNGRLBHVXABFBRYJYXMSLIZSOSNAPHDKJSUWQHQJPYZGOWIMKUXKJVYPTDFEKZMJFKZYNACGLDPIIDSXZBVFJLHYY");
    msg.timeout = 0.9710193110890024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.050882437538432135);
    msg.setSource(57475U);
    msg.setSourceEntity(195U);
    msg.setDestination(28364U);
    msg.setDestinationEntity(18U);
    msg.seq = 46266U;
    msg.sys_dst.assign("SPGODIKWPCEDJEZZCOUKWTCKWBPEDOZJMWGZKEZCAIEUMUNLORYIOROEOGNLIMVQIYKLSTYMJTQRVIQSJSYBRZEHTJWFHGYNMIDMBCTXRDULJYUTFAXZYLPTCBUXGMSVDFHOAUFXWQNKLTHTRDOFCAQDVALJDKAPMRQGSJAVAZAUFVYFRZGPBHXNBBM");
    msg.timeout = 0.21147454791393672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.41454647287829627);
    msg.setSource(52081U);
    msg.setSourceEntity(84U);
    msg.setDestination(52494U);
    msg.setDestinationEntity(135U);
    msg.action = 71U;
    msg.longain = 0.7877697467333021;
    msg.latgain = 0.5701232148143799;
    msg.bondthick = 3025235152U;
    msg.leadgain = 0.5471068054026321;
    msg.deconflgain = 0.5866147968556855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.20741217547740542);
    msg.setSource(13318U);
    msg.setSourceEntity(107U);
    msg.setDestination(11228U);
    msg.setDestinationEntity(41U);
    msg.action = 215U;
    msg.longain = 0.05408481008881827;
    msg.latgain = 0.7953866276644956;
    msg.bondthick = 1629596342U;
    msg.leadgain = 0.8931567982566359;
    msg.deconflgain = 0.6377700488368312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.8281253020500726);
    msg.setSource(15531U);
    msg.setSourceEntity(44U);
    msg.setDestination(25932U);
    msg.setDestinationEntity(66U);
    msg.action = 240U;
    msg.longain = 0.043183974652429846;
    msg.latgain = 0.502322174547257;
    msg.bondthick = 4157731891U;
    msg.leadgain = 0.01663602624820626;
    msg.deconflgain = 0.19151143026723916;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.7650382802044151);
    msg.setSource(2215U);
    msg.setSourceEntity(183U);
    msg.setDestination(53800U);
    msg.setDestinationEntity(80U);
    msg.err_mean = 0.2939757735762868;
    msg.dist_min_abs = 0.08436661100303089;
    msg.dist_min_mean = 0.5290098216618874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.7012903198861214);
    msg.setSource(64200U);
    msg.setSourceEntity(45U);
    msg.setDestination(29117U);
    msg.setDestinationEntity(51U);
    msg.err_mean = 0.13647050661495042;
    msg.dist_min_abs = 0.6733433218468396;
    msg.dist_min_mean = 0.34340569345683736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.728564042221258);
    msg.setSource(1699U);
    msg.setSourceEntity(4U);
    msg.setDestination(32456U);
    msg.setDestinationEntity(6U);
    msg.err_mean = 0.6052104364420224;
    msg.dist_min_abs = 0.569937225359323;
    msg.dist_min_mean = 0.2783851675476099;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.5108840737282871);
    msg.setSource(10855U);
    msg.setSourceEntity(18U);
    msg.setDestination(3439U);
    msg.setDestinationEntity(27U);
    msg.action = 149U;
    msg.lon_gain = 0.09685318078506044;
    msg.lat_gain = 0.11321879153243286;
    msg.bond_thick = 0.19675540419796445;
    msg.lead_gain = 0.4637932210655975;
    msg.deconfl_gain = 0.9131158051140201;
    msg.accel_switch_gain = 0.5733653333355302;
    msg.safe_dist = 0.4385566309723704;
    msg.deconflict_offset = 0.3180854875482444;
    msg.accel_safe_margin = 0.37916972792817794;
    msg.accel_lim_x = 0.6465102492911835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.407142766132502);
    msg.setSource(61917U);
    msg.setSourceEntity(184U);
    msg.setDestination(38120U);
    msg.setDestinationEntity(65U);
    msg.action = 243U;
    msg.lon_gain = 0.5095181159803716;
    msg.lat_gain = 0.1113163093169155;
    msg.bond_thick = 0.3967537233104075;
    msg.lead_gain = 0.4383913905974547;
    msg.deconfl_gain = 0.6907678301865572;
    msg.accel_switch_gain = 0.7654468296915291;
    msg.safe_dist = 0.927104914017147;
    msg.deconflict_offset = 0.19382667890281913;
    msg.accel_safe_margin = 0.1684318788089384;
    msg.accel_lim_x = 0.6633836533100748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.004812213216855765);
    msg.setSource(49821U);
    msg.setSourceEntity(144U);
    msg.setDestination(40241U);
    msg.setDestinationEntity(181U);
    msg.action = 40U;
    msg.lon_gain = 0.3221593242350632;
    msg.lat_gain = 0.3801145797046074;
    msg.bond_thick = 0.07008842956394912;
    msg.lead_gain = 0.47924147719789145;
    msg.deconfl_gain = 0.810564892457352;
    msg.accel_switch_gain = 0.5666807254079196;
    msg.safe_dist = 0.26686377634965486;
    msg.deconflict_offset = 0.12434159821583912;
    msg.accel_safe_margin = 0.8524051229214186;
    msg.accel_lim_x = 0.04489988925460131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.5861877076668172);
    msg.setSource(12994U);
    msg.setSourceEntity(145U);
    msg.setDestination(41426U);
    msg.setDestinationEntity(219U);
    msg.type = 104U;
    msg.op = 185U;
    msg.err_mean = 0.6573246513767377;
    msg.dist_min_abs = 0.4683570487990767;
    msg.dist_min_mean = 0.15605086741891805;
    msg.roll_rate_mean = 0.5251181493750156;
    msg.time = 0.024659727148911625;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 20U;
    tmp_msg_0.lon_gain = 0.24341507979973664;
    tmp_msg_0.lat_gain = 0.15025788951197117;
    tmp_msg_0.bond_thick = 0.6670358961478565;
    tmp_msg_0.lead_gain = 0.7767895609656835;
    tmp_msg_0.deconfl_gain = 0.580706751380354;
    tmp_msg_0.accel_switch_gain = 0.6567020063386254;
    tmp_msg_0.safe_dist = 0.04623221020067869;
    tmp_msg_0.deconflict_offset = 0.16826984923828825;
    tmp_msg_0.accel_safe_margin = 0.12893159480563499;
    tmp_msg_0.accel_lim_x = 0.47694792604935987;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.5570345073671251);
    msg.setSource(55649U);
    msg.setSourceEntity(9U);
    msg.setDestination(45621U);
    msg.setDestinationEntity(115U);
    msg.type = 137U;
    msg.op = 209U;
    msg.err_mean = 0.7095789541561961;
    msg.dist_min_abs = 0.2583719088781532;
    msg.dist_min_mean = 0.3141964951695545;
    msg.roll_rate_mean = 0.3352182951536926;
    msg.time = 0.1349669182061437;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 51U;
    tmp_msg_0.lon_gain = 0.9776291042745652;
    tmp_msg_0.lat_gain = 0.5097280887209586;
    tmp_msg_0.bond_thick = 0.9180159971651328;
    tmp_msg_0.lead_gain = 0.5970155424458137;
    tmp_msg_0.deconfl_gain = 0.9796588477861836;
    tmp_msg_0.accel_switch_gain = 0.8422479676202359;
    tmp_msg_0.safe_dist = 0.14489863529846236;
    tmp_msg_0.deconflict_offset = 0.8534484078228232;
    tmp_msg_0.accel_safe_margin = 0.171897150117588;
    tmp_msg_0.accel_lim_x = 0.8191449587109946;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.4107600311568288);
    msg.setSource(61832U);
    msg.setSourceEntity(156U);
    msg.setDestination(50500U);
    msg.setDestinationEntity(108U);
    msg.type = 147U;
    msg.op = 166U;
    msg.err_mean = 0.6698930868372837;
    msg.dist_min_abs = 0.09785028002745866;
    msg.dist_min_mean = 0.978574068494263;
    msg.roll_rate_mean = 0.4305491319120327;
    msg.time = 0.6327871782804793;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 205U;
    tmp_msg_0.lon_gain = 0.017776957486796974;
    tmp_msg_0.lat_gain = 0.2261144935745134;
    tmp_msg_0.bond_thick = 0.631570481293751;
    tmp_msg_0.lead_gain = 0.7280380032289875;
    tmp_msg_0.deconfl_gain = 0.7034381526927325;
    tmp_msg_0.accel_switch_gain = 0.3024184048938404;
    tmp_msg_0.safe_dist = 0.9318178160052921;
    tmp_msg_0.deconflict_offset = 0.2563085608667488;
    tmp_msg_0.accel_safe_margin = 0.5869193207170831;
    tmp_msg_0.accel_lim_x = 0.15668549367979734;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.15634974259678158);
    msg.setSource(39505U);
    msg.setSourceEntity(4U);
    msg.setDestination(37794U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.9368655672554151;
    msg.lon = 0.3463437375681746;
    msg.eta = 3359495908U;
    msg.duration = 11500U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.1942476911572606);
    msg.setSource(33152U);
    msg.setSourceEntity(182U);
    msg.setDestination(55920U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.9738996081507404;
    msg.lon = 0.5781569761168118;
    msg.eta = 12772957U;
    msg.duration = 12839U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.1854693927645903);
    msg.setSource(59499U);
    msg.setSourceEntity(61U);
    msg.setDestination(45956U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.3321948226372957;
    msg.lon = 0.025356287451615445;
    msg.eta = 2245146318U;
    msg.duration = 38938U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.9051068408791867);
    msg.setSource(39084U);
    msg.setSourceEntity(81U);
    msg.setDestination(78U);
    msg.setDestinationEntity(85U);
    msg.plan_id = 1016U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.03911361888577092);
    msg.setSource(55720U);
    msg.setSourceEntity(99U);
    msg.setDestination(26452U);
    msg.setDestinationEntity(59U);
    msg.plan_id = 6580U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5425038810431634;
    tmp_msg_0.lon = 0.8531002599122935;
    tmp_msg_0.eta = 3201952084U;
    tmp_msg_0.duration = 8977U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.4377703687736909);
    msg.setSource(57248U);
    msg.setSourceEntity(244U);
    msg.setDestination(16703U);
    msg.setDestinationEntity(193U);
    msg.plan_id = 50527U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.4361516153683017);
    msg.setSource(21673U);
    msg.setSourceEntity(225U);
    msg.setDestination(39828U);
    msg.setDestinationEntity(75U);
    msg.type = 91U;
    msg.command = 75U;
    msg.settings.assign("JQSDVAPSSTEHGYLAMQBFFOMQFZODFPZJNJORATODNHVCICKBBWFNHMWEZFJKUUXBZIKIIXAYRPACUDRWTAUTEKRWUPXOVLRLUHGLOYESXHYYGEIVSQRELBMVXZOXNWMMG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 17212U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.09620584149814448;
    tmp_tmp_msg_0_0.lon = 0.7378187924558488;
    tmp_tmp_msg_0_0.eta = 1322154657U;
    tmp_tmp_msg_0_0.duration = 62281U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EWVYVTANXBWELKZKKZZPMAWFQFUKXMFLMHBGSLVZGWDDOQRBSNSFQEJUIUWJJLJTZVETJSNMASOFQXSTZCVUCRDYMHARLNUMDPUUOXWGEGJLCHUARPCFZYHTTHWATZSGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.30592352679127943);
    msg.setSource(12956U);
    msg.setSourceEntity(141U);
    msg.setDestination(18735U);
    msg.setDestinationEntity(37U);
    msg.type = 206U;
    msg.command = 232U;
    msg.settings.assign("PMQGLGEUHHBKHCZHONOWMIKRREQXUXSBGFGWPFYJCEJQRAVZNFSUZVOJSINBUBUUCNNDBQDJWOMWLLYXYLAOYQJD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 20481U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RHOMXWICSXXHHQUDQQSWVALOOOLQZCCFEBZTFZGRVAXWYLGBEQSRXLNCIMABVNSOTZJWPJOIQNRJXEPJUSLVEPSKZZPIEAAUZPYEITVBDWVOGGYFYVKYSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.31003095812403836);
    msg.setSource(63210U);
    msg.setSourceEntity(122U);
    msg.setDestination(30284U);
    msg.setDestinationEntity(109U);
    msg.type = 210U;
    msg.command = 87U;
    msg.settings.assign("ZANKHGSWDVYBFAQXAPHOMTHIMRPZDSARJWBMTNOXDUTYLMHJIOCKNYAUQKPLXFNPWXDLSCZGWKFJMDEUCPVZPXMFCBIQQYDDIXUBLWPCWHRUIFTUGETTXBYTFNQWEVDJAURLQGGIKEXNFWEBFSTBBVJNXKHSAYH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9419U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NRCTKPUWAKWKPZWQPBWGXIEQJZDOLRZVVVEDIBSXGJPNSRYUOLFMWUOFJCWDNTTVEHUSSHJRRBBXDUWMVUXYNTVMVUWPMPAKQCKYHMMTROASZNKSBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.5313713685125447);
    msg.setSource(65023U);
    msg.setSourceEntity(73U);
    msg.setDestination(16870U);
    msg.setDestinationEntity(104U);
    msg.state = 238U;
    msg.plan_id = 50528U;
    msg.wpt_id = 3U;
    msg.settings_chk = 37016U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.8502473610322536);
    msg.setSource(38601U);
    msg.setSourceEntity(96U);
    msg.setDestination(59334U);
    msg.setDestinationEntity(109U);
    msg.state = 2U;
    msg.plan_id = 27844U;
    msg.wpt_id = 73U;
    msg.settings_chk = 22434U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.7314006934082257);
    msg.setSource(16581U);
    msg.setSourceEntity(118U);
    msg.setDestination(6845U);
    msg.setDestinationEntity(21U);
    msg.state = 225U;
    msg.plan_id = 53865U;
    msg.wpt_id = 185U;
    msg.settings_chk = 44965U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.6132155567036487);
    msg.setSource(31995U);
    msg.setSourceEntity(113U);
    msg.setDestination(37904U);
    msg.setDestinationEntity(242U);
    msg.uid = 233U;
    msg.frag_number = 123U;
    msg.num_frags = 199U;
    const char tmp_msg_0[] = {94, -62, -3, -51, 61, 46, 110, 108, 31, 123, 84, -127, 120, 42, -10, -41, 36, -36, -2, 107, 106, 57, -49, 101, 106, 72, -9, -122, 79, 56, -128, -54, 123, 2, -83, 120, -16, 61, 47, -97, 23, -102, -6, -15, 53, 43, 4, 14, -39, 52, -22, -115, 83, -61, -116, -114, -111, -43, 10, 26, 46, 36, 109, 34, 45, 99, -28, 103, -23, 77, -75, -60, 48, -30, 62, 66, -52, 8, -114, -37, -22, 65, -67, 30, 103, -97, 79, -42, 110, 106, -121, 107, -128, 107, -45, 80, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.09051937793809584);
    msg.setSource(8926U);
    msg.setSourceEntity(61U);
    msg.setDestination(972U);
    msg.setDestinationEntity(67U);
    msg.uid = 148U;
    msg.frag_number = 178U;
    msg.num_frags = 58U;
    const char tmp_msg_0[] = {-46, 86, 43, -109, 17, -101, 19, -94, 97, -85, 111, 77, 17, -21, 89, 32, 108, -48, 87, 53, 91, -70, -1, -14, 45, -25, 69, -3, -77, 117, 104, -76, -8, -22, -53, 34, 55, 85, -65, 20, -91, 60, 115, -85, -37, -17, -111, 3, -119, 41, -120, 18, -94, -56, 36, -23, 87, 44, 20, -25, 35, -38, 2, -20, -40, 64, 20, 118, 8, -7, 23, 81, 39, 13, -9, -1, 54, 80, -56, -90, 13, 55, -112, -106, 19, -42, -92, -112, 75, -1, -115, -1, 22, 10, 20, 24, -53, -47, 93, -12, 126, -117, -121, -14, 32, -116, -48, -29, -88, 8, -55, 120, 34, 4, -28, -71, 57, 42, -28, -26, -20, -15, 21, -114, 60, -105, -4, -121, -104, -30, 96, 72, 36, 109, 15, 126, 124, -82, -98, -49, -21, -42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.06714309093321524);
    msg.setSource(46380U);
    msg.setSourceEntity(15U);
    msg.setDestination(26975U);
    msg.setDestinationEntity(119U);
    msg.uid = 19U;
    msg.frag_number = 253U;
    msg.num_frags = 113U;
    const char tmp_msg_0[] = {-54, 37, 77, -41, 61, 56, 60, 33, 120, -60, 67, -3, 16, -61, -11, 93, 50, -34, -4, 73, -95, -125, -75, 38, -117, -122, 5, 85, -37, 22, 118, 4, 85, -7, 104, -124, -112, 58, -120, 39, 98, 62, -26, -31, -36, -43, 10, -7, -106, 8, 111, -88, 87, 71, -101, -18, -14, 97, 18, -60, -13, 61, 25, 57, -51, 58, -70, -119, 33, -17, 12, 40, 109, -91, 39, -97, 125, 104, -47, -89, -115, -46, 0, 104, -99, -31, -103, 50, 124, -74, 18, 96, -8, -100, 114, 110, -46, -33, 4, -18, 117, 70, -47, -81, -65, -101, -20, -20, -103, -77, -101, -77, 113, -54, -63, -31, 84, 69, 31, 3, 52, -102, -17, 84, 65, -13, -77, 63, -57, -106, -105, -110, -79, 1, -69, 61, 7, 68, 34, -1, -82, -14, 96, -31, 46, 51, 70, -64, 30, -96, 0, -90, -77, 116, -85, 121, -30, 103, 53, -44, -36, 81, -48, -36, -18, 8, -94, 13, -40, -106, 112, -128, -52, 52, -36, -92, 86, 83, 112, -90, -70, -22, -14, 26, -30, -117, 107, -124, -43, -23, -103, 11, 106, -36, 115, -41, -32, -3, 81, 119, -65, -30, -118, 85, 88, -75, 17, 112, 122, -125, -2, -7, -72, -42, -113, -125, -114, 67, -68, -32, -97, -26, -50, -50, -84, -98, 40, 34, 56, -28, 117, 36, 118, -51, 119, 26, 45, 30, 33, -31, -96, 68, -76, -48, 13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.588175302360266);
    msg.setSource(13907U);
    msg.setSourceEntity(21U);
    msg.setDestination(7288U);
    msg.setDestinationEntity(136U);
    msg.content_type.assign("AWDPPMKYMDRTOELIDIGAFWZRXAQEVFISPDHIJMWCXCWCQMKSRWFAYGDFSJ");
    const char tmp_msg_0[] = {-121, 64, -26, 90, 55, -60, 73, 85, 4, 91, 62, -85, 82, -25, -32, 89, 1, 17, -47, -99, 115, -40, 122, 97, 123, -46, 51, 55, 122, 38, -92, 12, -94, 112, -90, -19, -80, 73, -95, 41, 57, -63, -83, 84, 63, 109, 22, -21, 86, -35, 102, -100, 102, -56, 67, 20, 64, 66, -39, 87, -39, 12, 51, -117, -123, 58, -85, 68, 78, 94, -98, 124, 116, -8, 79, 71, -51, 104, -117, 78, 28, 105, 125, 107, -59, 63, -96, 27, -25, -119, -115, -94, -125, 86, 44, -30, 16, -35, -100, -79, 14, 3, 20, 22, 74, 105, 4, -37, 14, 43, 124, -85, -115, 73, 11, 18, 12, 108, -50, -118, -104, 103, -3, 31, -94, 5, -66, 72, 65, 45, 64, 48, 7, 0, 111, -125, 20, -1, -81, 95, 121, 79, 102, 67, 26, -7, -35, -70, 66, -68, -121, 71, -87, 12, -1, 48, 92, 82, -55, -95, 7, 107, 108, 7, 84, -103, 58, 78, -57, 121, -20, -24, 43, 83, 71, -113, -1, 13, 120, -28, 92, -126, -53, 100, 86, -13, 26, -44, -11, 104, -92, -42, 30, -24, 2, 103, 43, -94, 74, 50, -70, 38, -121, -50, -95, -28, -45, 68, -2, 108, -112, -12, 24, 13, -13, -53, 5, -11, -47, 112, 3, 104, 59, 114, -73, 69, 90, -51, -107, 56, 116, 28, -52, 72, 54, 24, 123, 80, 60, -11, 38, -33};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.23829576954882614);
    msg.setSource(51596U);
    msg.setSourceEntity(254U);
    msg.setDestination(7367U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("UWESSBYYUAVEHLZGEWPXMWWFUXLADRGRMDONQCACSSNYAJLNZSITYLBDUYITWLCUXOQRUXZDZGDRVOTRGJUFLHMSKEDZRDXHFOZBBEKHNZFJ");
    const char tmp_msg_0[] = {35, -10, 95, -88, 35, -118, -27, -75, -82, 118, -97, -73, 28, 104, 53, 65, -86, -38, 29, 43, 96, -31, 58, 96, -103, 62, 1, 87, 5, 63, 27, 33, 31, -11, -62, -84, -59, -75, -90, 42, -120, 38, -37, 114, -33, -92, -56, 108, 98, -20, -73, 111, -71, -20, -21, 19, -14, 95, 97, -12, -92, 49, -104, -74, 125, 95, -38, -22, -128, 117, 57, 10, -12, 86, -67, -61, 4, -92, -39, 8, 75, 88, -46, -28, -126, 0, 12, -61, 57, 97, 26, -3, 25, 79, 86, 18, 49, -11, -39, 31, -44, 100, -41, -82, -77, -44, 9, 50, -13, -31, -125, -16, -10, -93, -4, 14, -84, -121, -118, -100, 97, -21, 88, -116, 13, -80, -86, -4, 32, 31, -33, -94, 123, 81, -59, 1, -118, -103, -117, -124, -15, -7, -66, -105, -98, -126, -116, 126, -38, -70, 106, -11, -118, -100, -3, -16, -22, 123, 51, -82, -93, -25, 68, -102, 38, 36, 57, 68, 46, 100, 56, -39, 20, 74, -103, -92, 109, -109, 67, -7, -99, 96, 38, -118, 36, 79, 35, -69, 17, -9, 34, 84, -31, 105, -11, 55, 105, -117, 109, 38, 57, 45, -92, -4, 80, 17, -121, -8, 101, 54, -90, -12, 114, 30, -18, 73, 50, 17, -6, 60, -84, 92, 107, -124, -67, -93, -83, -99, -95, 77, 7, 98, 34, -95, -49, -71, 57, -38, -73, 120, 2, 71, -52, -20, 12, -111, -15, 3, -7, -88};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.520130059306886);
    msg.setSource(45125U);
    msg.setSourceEntity(199U);
    msg.setDestination(12356U);
    msg.setDestinationEntity(56U);
    msg.content_type.assign("RPMOTHZHGYJEQGPCQSHTPAYDUCJNSRGYNCWCBVFUMUTCLVDPUWDOTKTHSHMMZRQSWAFXUEUMRCRPQZDZYKMPDIVGWFOJACOQRBOJLMRZS");
    const char tmp_msg_0[] = {45, -12, 75, 98, 11, -22, -96, -11, 54, -94, -7, -116, -96, 60, 55, 17, -3, 25, -43, 69, 45, 101, -37, 76, 68, 75, 69, -51, 108, 12, 38, 124, 88, -106, -128, -111, 0, -15, 107, -108, -6, -82, -45, -42, -73, -62, -72, -62, -121, -52, -13, -12, 52, 91, 14, 116, 96, -91, -41, -72};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.8832722977533589);
    msg.setSource(12932U);
    msg.setSourceEntity(74U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(242U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.6459142396854263);
    msg.setSource(56430U);
    msg.setSourceEntity(30U);
    msg.setDestination(14101U);
    msg.setDestinationEntity(117U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.4183202008614928);
    msg.setSource(62314U);
    msg.setSourceEntity(74U);
    msg.setDestination(47984U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.09125816259786279);
    msg.setSource(28313U);
    msg.setSourceEntity(148U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(171U);
    msg.target = 40996U;
    msg.bearing = 0.35382067718695465;
    msg.elevation = 0.37265678371862465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.12096022969077469);
    msg.setSource(57452U);
    msg.setSourceEntity(228U);
    msg.setDestination(38086U);
    msg.setDestinationEntity(99U);
    msg.target = 51998U;
    msg.bearing = 0.9204781872811885;
    msg.elevation = 0.4912635909595535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.8065967041467351);
    msg.setSource(8194U);
    msg.setSourceEntity(49U);
    msg.setDestination(21464U);
    msg.setDestinationEntity(72U);
    msg.target = 766U;
    msg.bearing = 0.28454768448037415;
    msg.elevation = 0.7310506383402384;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.5811048371731061);
    msg.setSource(18461U);
    msg.setSourceEntity(133U);
    msg.setDestination(1815U);
    msg.setDestinationEntity(202U);
    msg.target = 16468U;
    msg.x = 0.4874548384720717;
    msg.y = 0.4328926395924032;
    msg.z = 0.10292000181485794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.17279528819572199);
    msg.setSource(33865U);
    msg.setSourceEntity(196U);
    msg.setDestination(45621U);
    msg.setDestinationEntity(5U);
    msg.target = 65499U;
    msg.x = 0.20150282246719464;
    msg.y = 0.3236775251382574;
    msg.z = 0.030346052296448822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.22748606539925675);
    msg.setSource(906U);
    msg.setSourceEntity(248U);
    msg.setDestination(54375U);
    msg.setDestinationEntity(178U);
    msg.target = 9518U;
    msg.x = 0.6724733139555805;
    msg.y = 0.9842668201823533;
    msg.z = 0.3451943790165757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.743825232471133);
    msg.setSource(54901U);
    msg.setSourceEntity(38U);
    msg.setDestination(63808U);
    msg.setDestinationEntity(168U);
    msg.target = 6840U;
    msg.lat = 0.8065012365902908;
    msg.lon = 0.34262261122525506;
    msg.z_units = 211U;
    msg.z = 0.942637197494697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.984017002509285);
    msg.setSource(41397U);
    msg.setSourceEntity(38U);
    msg.setDestination(20425U);
    msg.setDestinationEntity(71U);
    msg.target = 20839U;
    msg.lat = 0.9325614687355853;
    msg.lon = 0.9020211593450124;
    msg.z_units = 97U;
    msg.z = 0.004504536764145528;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.7040024576154034);
    msg.setSource(34275U);
    msg.setSourceEntity(130U);
    msg.setDestination(11457U);
    msg.setDestinationEntity(83U);
    msg.target = 6599U;
    msg.lat = 0.8591779403833645;
    msg.lon = 0.08602577327447869;
    msg.z_units = 55U;
    msg.z = 0.42002703330546276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.4297393248964181);
    msg.setSource(4867U);
    msg.setSourceEntity(186U);
    msg.setDestination(17071U);
    msg.setDestinationEntity(209U);
    msg.locale.assign("MSZTLUJVONRVRUHLBGNTOEWVJNDJKJYAXJAVPVEWZOCWZBAADYFEIYZWCIROCQZNXLZKCRYHTWKDAWEIHTBQHBDXWLIELVQSFPBQOKQMOUFLPGSJPUDKPYAFYFOIWYNXGTNNZHNKEBCKDYQJLSMZJTEIKHIGQFGPDIEUMCIXKQGUMMBVADEPLVDTAAVGFNBPYUXXXSRFZGUYUSPRMGSHVOTXFBOQTOHKEGPAUQJSCCJX");
    const char tmp_msg_0[] = {58, -28, 51, 18, 76, -2, 8, -46, 88, -75, -7, 86, -60, -44, -64, 12, 55, -94, 43, -76, 115, -48, 99, -12, -35, 88, 75, -98, -59, -34, -82, 8, -50, -120, 12, -71, 81, 59, 104, -73, 27, 91, -111, -28, 112, -7, -83, 52, -111, 93, 104, 64, 29, -121, -122, 109, -12, -106, 93, 31, 55, -26, 42, -94, -43, -8, -7, -24, 39, 24, -41, -84, 22, -42, -93, -54, -93, 38, 115, 22, -44, 2, 59, 115, -55, 9, -110, -120, -48, -85, 13, -47, 125, -93, -10, 126, -85, -120, -39, -62, 12, -103, 30, 48, 43, 113, 85, 7, -33, -44, 105, -50, -93, 79, -44, -84, -92, -107, 31, -72, 4, 32, -74, -88, 124, -78, 17, -21, -103, 125, -108, -31, 17, -54, 42, -2, -77, -12, -91, -47, 41, 117, 100, 12, 78, -14, -88, -8, -35, -103, 51, -124, 42, -43, -103, -19, 51, -21, 52, 106, -4, 102, -43, -69, -109, 108, -114, 77, -28, 7, -119, 118, -6, 33, -93, 120, 82, -112, 90, -68, 30, 118, 44, 28, -93, -41, -73, -73, 57, 41, -53, -31, -106, 32, 34, -58, -61, 40, 33, -55, -94, 34};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.36138088800982704);
    msg.setSource(55563U);
    msg.setSourceEntity(14U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(141U);
    msg.locale.assign("XGXGXVQFYSBYYQLVSNHKCERHPUCBFYNOAVAIGDLJIMTICHLNZHKPKCWIAJTBNJPYUBJFQNETQWLUVURFNHQDRHOABBMOXRROTVZTCFKGBURAMQXIAWILTXAMPPVRQMDZIFDAUUGVPKXMOGCOBZVSJDCUSLHZHLGBTZZWOGUJTCQSLEXEESYMWKEOFPGCSWPADQUERKZZGNEHTIARIFRSEOJOYC");
    const char tmp_msg_0[] = {-104, 43, 116, 4, 48, 30, -1, -50, 108, -107, 18, 15, -127, 118, 121, -5, -1, 84, -49, 125, 24, -21, -116, -17, 41, -98, -81, 40, -64, -83, 18, -48, 30, -56, 43, 121, 11, 65, 52, 25, 67, 57, -61, -47, 122, 15, 34, -20, -70, 10, -95, -18, 19, 33, 106, 31, 103, 23, -75, -63, -72, 86, 82, 25, -31, -98, 89, -67, 108, 107, 114, 32, 10, 49, -1, 120, -68, 22, 51, -124, -75, -59, -41, 5, -116, 118, 5, -36, 103, 57, -50, 98, -101, 107, 95, -78, 80, 119, -16, -21, 92, 83, 111, -28, -29, -118, 2, -47, -66, -98, 108, -9, -11, 79, 104, 73, 120};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.9804770217702438);
    msg.setSource(22060U);
    msg.setSourceEntity(103U);
    msg.setDestination(25938U);
    msg.setDestinationEntity(33U);
    msg.locale.assign("USHHDAONWGPRNNFAARDQQWSCIFIDMZEMQFHTIPJIGLBEERSDXGECDAVMDKFBHPESGYUYYXEOZYBYTAWTBYTJHKKWTQHPEYUZHZMJCUBLRVYZWOPIVVKWQWMXKOPQLGFIOEJMLATZPDVBSAIBGNDBVWTSZCLXOQAQRNJNKXYFWFUPOUAKXIFIJKAGBZQVFKJGXRRBSXCVHMMUNSD");
    const char tmp_msg_0[] = {64, 99, -49, 124, 119, 119, -11, 91, 72, 107, -43, 120, 64, 32, 6, 42, -3, -25, -31, -20, -118, -126, 9, -128, 98, 66, 27, 34, -92, 55, -23, 27, 120, 83, 44, 33, -90, 111, -101, -37, -123, -81, -85, -13, -81, -107, -73, 12, 3, -33, -68, 3, 53, -45, 114, 35, 72, -119, 11, -34, 33, 35, -7, 101, -87, -23, -108, 125, -18, 68, 90, 12, -78, 35, -75, -33, 4, -33, -28, -65, -108, 62, -29, 112, 106, 84, -116, -103, 89, -98, -29, -13, 44, -1, -127, -101, 28, -4, -91, 101, -101, -77, -74, 49, -75, 19, -68, 21, -20, -25, -97, -1, -68, -64, -96, -123, -45, 100, -104, -46, -95, 49, -29, 5, -57, -7, 107, 42, 20, 119, -87, -8, 79, -117, -64, -88, -102, 59, 121, -84, -78, 8, -123, 53, -31, -11, 119, -91, -19, -6, -89, 3, -27, 43, 96, 117, 88, -109, 107, 67, 118, 29, -18, -65, -107, 42, 98, 125, -1, 58, -51, -3, -66, -19, 120, -34, -36, -92, 72, 30, 96, 124, 20, 107, 85, -6, -84, 86, 124, -107, -63, -12, -110, -52, 8, -15, -29, -40, 123, 86, 69, 126, 80, -6, -93, 3, -76, -103, -79, -29, 27, -118, 98, 89, 13, 85};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.25782638942100267);
    msg.setSource(29870U);
    msg.setSourceEntity(89U);
    msg.setDestination(9940U);
    msg.setDestinationEntity(241U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.5939638575288742);
    msg.setSource(31482U);
    msg.setSourceEntity(215U);
    msg.setDestination(9806U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.6673388342651156);
    msg.setSource(821U);
    msg.setSourceEntity(35U);
    msg.setDestination(13505U);
    msg.setDestinationEntity(222U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.3101712858565724);
    msg.setSource(47794U);
    msg.setSourceEntity(29U);
    msg.setDestination(15011U);
    msg.setDestinationEntity(95U);
    msg.camid = 79U;
    msg.x = 41548U;
    msg.y = 47286U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.6820483239387466);
    msg.setSource(4664U);
    msg.setSourceEntity(28U);
    msg.setDestination(3395U);
    msg.setDestinationEntity(207U);
    msg.camid = 251U;
    msg.x = 36625U;
    msg.y = 5350U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.6879252378245115);
    msg.setSource(35982U);
    msg.setSourceEntity(172U);
    msg.setDestination(44044U);
    msg.setDestinationEntity(223U);
    msg.camid = 151U;
    msg.x = 55371U;
    msg.y = 42591U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.5911390342649313);
    msg.setSource(65156U);
    msg.setSourceEntity(33U);
    msg.setDestination(53628U);
    msg.setDestinationEntity(198U);
    msg.camid = 220U;
    msg.x = 65023U;
    msg.y = 11484U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.7638096909644048);
    msg.setSource(32810U);
    msg.setSourceEntity(115U);
    msg.setDestination(41626U);
    msg.setDestinationEntity(81U);
    msg.camid = 249U;
    msg.x = 34748U;
    msg.y = 619U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.764521607610154);
    msg.setSource(40247U);
    msg.setSourceEntity(103U);
    msg.setDestination(11270U);
    msg.setDestinationEntity(51U);
    msg.camid = 168U;
    msg.x = 20866U;
    msg.y = 32711U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.9060450980412669);
    msg.setSource(62169U);
    msg.setSourceEntity(57U);
    msg.setDestination(18285U);
    msg.setDestinationEntity(161U);
    msg.tracking = 148U;
    msg.lat = 0.5959760323258002;
    msg.lon = 0.9948905938395294;
    msg.x = 0.4985505672175631;
    msg.y = 0.7252031557941239;
    msg.z = 0.8403484332948757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.7770785820092703);
    msg.setSource(17847U);
    msg.setSourceEntity(215U);
    msg.setDestination(22724U);
    msg.setDestinationEntity(82U);
    msg.tracking = 148U;
    msg.lat = 0.3328467609545175;
    msg.lon = 0.0022169335021505754;
    msg.x = 0.5463564758144948;
    msg.y = 0.08640055690133708;
    msg.z = 0.26364162104901456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.39997717622735107);
    msg.setSource(64030U);
    msg.setSourceEntity(153U);
    msg.setDestination(46824U);
    msg.setDestinationEntity(98U);
    msg.tracking = 195U;
    msg.lat = 0.9907406213304892;
    msg.lon = 0.642316954642753;
    msg.x = 0.12595466799293686;
    msg.y = 0.6790949830822255;
    msg.z = 0.47467498144571396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.4180590315893755);
    msg.setSource(21217U);
    msg.setSourceEntity(217U);
    msg.setDestination(31290U);
    msg.setDestinationEntity(138U);
    msg.target.assign("GZQUMRZGZBFIJRPTUWXUPOLUWDJXETQOGFHSLXMEDCCGREAPMOXYNHRNXZCMPDKIWDOAXVKDYNRFTSIPQSKGNFOLRJOCHTVQQVMJWTXUCHWYQOVSKRUDARZATVBYKKNIWDSANYLUDTGMZXKNATVFSEPHQAEOIYRYHDBEBFSZEPOPNVCWGTLBLWXCACIVEKGUVVZBKMQZGJQWLTISIJZPJHQJFMLLYHIMBFMINBPDSAFJCYBAHYFCNHBRGSOEKU");
    msg.lbearing = 0.4182578607759556;
    msg.lelevation = 0.8032065968322348;
    msg.bearing = 0.0010261144912704356;
    msg.elevation = 0.6798430039972654;
    msg.phi = 0.06702903931668325;
    msg.theta = 0.7529404931388606;
    msg.psi = 0.7764696234346543;
    msg.accuracy = 0.02668428783315846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.26166716560963077);
    msg.setSource(10012U);
    msg.setSourceEntity(68U);
    msg.setDestination(40652U);
    msg.setDestinationEntity(206U);
    msg.target.assign("QUIKQBVMPNBQGIXXLBACKSWFGFADTXUPBZWSPUHDTFTNXXAJQVQVPQPRWROCLXBIFCYDOOTHITISZJEBNLNKKTLKRQGPDFLKNVEFBTEVVNSHAUECSMJYMNWXGERXSYGWHUVFMVHIMPKCOULCIYBAVIORQAIJUBLFWRAQZKYSGAWROJNHJRRSJWUCLDPGLZZKYGUOEBXLHHT");
    msg.lbearing = 0.6895335182658022;
    msg.lelevation = 0.23136596709415091;
    msg.bearing = 0.6570480002893319;
    msg.elevation = 0.42211071726918903;
    msg.phi = 0.22183668249331812;
    msg.theta = 0.2716885956300995;
    msg.psi = 0.9795811417294567;
    msg.accuracy = 0.256104274256415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.6502106935857489);
    msg.setSource(32326U);
    msg.setSourceEntity(79U);
    msg.setDestination(48775U);
    msg.setDestinationEntity(37U);
    msg.target.assign("IWZHLIALTVHQTKDIEIPQQRISFTLCB");
    msg.lbearing = 0.5239211723970525;
    msg.lelevation = 0.4597079882156708;
    msg.bearing = 0.4516115094147962;
    msg.elevation = 0.39058548384486036;
    msg.phi = 0.4352787983916675;
    msg.theta = 0.3723044554663467;
    msg.psi = 0.46498791784677485;
    msg.accuracy = 0.36914737766899164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.6966049521365095);
    msg.setSource(7580U);
    msg.setSourceEntity(37U);
    msg.setDestination(1943U);
    msg.setDestinationEntity(140U);
    msg.target.assign("NCLDLLSMTIKORUTQIQRBBRICPE");
    msg.x = 0.7666657103398304;
    msg.y = 0.26017438778774693;
    msg.z = 0.41001070961110797;
    msg.n = 0.029131103689848392;
    msg.e = 0.7514665185554332;
    msg.d = 0.7514946721813143;
    msg.phi = 0.414075835300761;
    msg.theta = 0.06214305039298651;
    msg.psi = 0.8643997283310245;
    msg.accuracy = 0.7745733264390587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.3129003602897139);
    msg.setSource(11826U);
    msg.setSourceEntity(193U);
    msg.setDestination(14293U);
    msg.setDestinationEntity(78U);
    msg.target.assign("WHYTNUAHTGDZMYLXWRMGSIZKWKJCEKQSCWFXMCKDBZFDRRUVHGYFZIXDHBHZXRMFTRCNMEKTQOPEDOGPNXFJTBSDVIXWAQNZJINQUAANKCOLJTDORSWAPVXRNEBKJYSUAWUDQPJAHLE");
    msg.x = 0.5712729058595196;
    msg.y = 0.3562868689544757;
    msg.z = 0.722497417040825;
    msg.n = 0.7847417094961004;
    msg.e = 0.17160387681640088;
    msg.d = 0.8953001535169397;
    msg.phi = 0.32359244721019387;
    msg.theta = 0.3423476696548081;
    msg.psi = 0.8201143014784921;
    msg.accuracy = 0.40055350804362033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.38268803385283234);
    msg.setSource(48982U);
    msg.setSourceEntity(232U);
    msg.setDestination(50295U);
    msg.setDestinationEntity(70U);
    msg.target.assign("MFSHKDCCGAZFDLKPVLOTVUTIILMXLWZGUVEDWIGAZZGBQOHIRDE");
    msg.x = 0.5791320532436182;
    msg.y = 0.8665871332885061;
    msg.z = 0.7701332112742988;
    msg.n = 0.7331335702602532;
    msg.e = 0.5927198431970161;
    msg.d = 0.4645414016963523;
    msg.phi = 0.9188859493171571;
    msg.theta = 0.42886169377772276;
    msg.psi = 0.4671465934097896;
    msg.accuracy = 0.7823482535870417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.193555306541356);
    msg.setSource(19662U);
    msg.setSourceEntity(72U);
    msg.setDestination(27625U);
    msg.setDestinationEntity(184U);
    msg.target.assign("EIAUPEHSYMQTYPDIDRWENJLXTCIFQRXAODEEXGNCLEXZWYJTZVWDYPGXPOFKAFPWMZZNZVMYAHFGVMQIAXPVABBCSRSEAWSFCMRULSOBTGFTCSQZIQMJXAJHFDHTWDIDFKPCINGKEKDXTCIPVW");
    msg.lat = 0.5558611157630571;
    msg.lon = 0.5155709004749295;
    msg.z_units = 12U;
    msg.z = 0.41109351790942494;
    msg.accuracy = 0.909791571623613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.03381385753096389);
    msg.setSource(24292U);
    msg.setSourceEntity(92U);
    msg.setDestination(43484U);
    msg.setDestinationEntity(17U);
    msg.target.assign("IFXQSRIOVIXEMUFDPKDEQRWHMLRQPZSCIOKWFTHPMZNMVKNABXBMMOYEUVGUUSPWSWVXTFZGWHYCBGJHUFJKHDRBDJTATAPQPLZQYKVNKYDMLXAKUIUYCKIBAVINZOALLWNNKSWWZEUZLSEKHPGDDAEOXTPXYEQWFBCGODZDGCJOSSYXUEJQQNFTGGTWLVMSPOTRHRYIZLGBTOCCVLJORFBJCMCRFJXAPQNDBQFRBANGT");
    msg.lat = 0.15162123679720518;
    msg.lon = 0.6360202609004709;
    msg.z_units = 196U;
    msg.z = 0.8854483363490429;
    msg.accuracy = 0.1342854481292054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.9394213452721117);
    msg.setSource(55639U);
    msg.setSourceEntity(208U);
    msg.setDestination(59065U);
    msg.setDestinationEntity(136U);
    msg.target.assign("FEENUUPADBBWGLQEOGPVJPUOCIYZRBPNSXZIFKURMYBVHRDZSYUNNSKMHFXWWLFODTVQOSPLAGIJCEOOFEIFDQAGNUUIWJIIZXGLJMCSMQGLJORCDHIJJOVCDQQPJUPMRNXWLCHVDFAAZRYDVJRYZIZHLACTMMXPESRLFGTBGQNJHHXKFKUKCEBYVLDXZSVKXTBOKXY");
    msg.lat = 0.7554966380656817;
    msg.lon = 0.13862809017399969;
    msg.z_units = 156U;
    msg.z = 0.17273173775535666;
    msg.accuracy = 0.25630546236647134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.7291425739283912);
    msg.setSource(5721U);
    msg.setSourceEntity(126U);
    msg.setDestination(44422U);
    msg.setDestinationEntity(37U);
    msg.name.assign("BJRKWBNFRWHQOCNOVISKMPHJGEGZEHJZYDWZNOQKUTFQXTEBRTSFDQEQFDYGUMWMXHANBRWPMJJYCMGTPYMFXBGRGENLNQMUOGL");
    msg.lat = 0.7931640371488938;
    msg.lon = 0.8782472681743942;
    msg.z = 0.45384523572617586;
    msg.z_units = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.9918140495662556);
    msg.setSource(57098U);
    msg.setSourceEntity(143U);
    msg.setDestination(59622U);
    msg.setDestinationEntity(199U);
    msg.name.assign("KWMNAVOWPBTODQUMPFVWXYPIDTPHXHGYBDLLXGCXVASAECGYYYQUASZROKDUMITPLNMJSENPTUWZTRRXDHBLATWQKZIZRKNEVIHLPPFDRJLEZOGRFTLFBCIVYJAOIMBBEOQOOGWCKQEHFNMAVCFJTRYHTDHHDMSRHNZTGUADZRMQCU");
    msg.lat = 0.7176117509146034;
    msg.lon = 0.6097972301411663;
    msg.z = 0.09733902754280555;
    msg.z_units = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.45810863092805154);
    msg.setSource(32919U);
    msg.setSourceEntity(48U);
    msg.setDestination(10587U);
    msg.setDestinationEntity(110U);
    msg.name.assign("VXIBAIGMASFIVCZTXNSGCXTYEJCERJNDPBBYTMXZHYUWEZLSGKAZRPDRKKXERIQLVBESMUMOAQSZVBPMFOLAZSKNTHMMPXKEVJKQVRDOUDWHKYOBGAFHRKQUHGTZRELMZCGXWDXOJAGYNHUYCUSHAWFBIJYJMQOYBVOBWPWLFYIPQUQFFNFGTVARYNMQDJX");
    msg.lat = 0.006470949762027556;
    msg.lon = 0.392884269035622;
    msg.z = 0.8406660990092008;
    msg.z_units = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.18550457711463408);
    msg.setSource(9929U);
    msg.setSourceEntity(197U);
    msg.setDestination(48494U);
    msg.setDestinationEntity(178U);
    msg.op = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.7857707433949244);
    msg.setSource(60033U);
    msg.setSourceEntity(113U);
    msg.setDestination(8511U);
    msg.setDestinationEntity(117U);
    msg.op = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.9700365181153743);
    msg.setSource(32841U);
    msg.setSourceEntity(201U);
    msg.setDestination(40441U);
    msg.setDestinationEntity(145U);
    msg.op = 187U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YDQWNPMPKCSVCTLVHWUNNWE");
    tmp_msg_0.lat = 0.3047412895405902;
    tmp_msg_0.lon = 0.7996277691323873;
    tmp_msg_0.z = 0.5551151980582847;
    tmp_msg_0.z_units = 41U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.1550249797048321);
    msg.setSource(27146U);
    msg.setSourceEntity(240U);
    msg.setDestination(54051U);
    msg.setDestinationEntity(140U);
    msg.value = 0.17794794439189054;
    msg.type = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.790324415836951);
    msg.setSource(48263U);
    msg.setSourceEntity(155U);
    msg.setDestination(3490U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8787685622315496;
    msg.type = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4954851403633881);
    msg.setSource(13582U);
    msg.setSourceEntity(243U);
    msg.setDestination(51481U);
    msg.setDestinationEntity(42U);
    msg.value = 0.34857127346826866;
    msg.type = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.7191760248218654);
    msg.setSource(43906U);
    msg.setSourceEntity(128U);
    msg.setDestination(16215U);
    msg.setDestinationEntity(231U);
    msg.value = 0.8395691737580635;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.5931554972750551);
    msg.setSource(41986U);
    msg.setSourceEntity(246U);
    msg.setDestination(60814U);
    msg.setDestinationEntity(204U);
    msg.value = 0.9499872547362813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.07339512010718574);
    msg.setSource(13825U);
    msg.setSourceEntity(84U);
    msg.setDestination(17498U);
    msg.setDestinationEntity(47U);
    msg.value = 0.12137684362210288;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.6018817997783015);
    msg.setSource(4388U);
    msg.setSourceEntity(162U);
    msg.setDestination(4549U);
    msg.setDestinationEntity(226U);
    msg.timestamp_last_service = 0.5563839795726339;
    msg.time_next_service = 0.15569574618783666;
    msg.time_motor_next_service = 0.8699176969459452;
    msg.time_idle_ground = 0.8969613949737567;
    msg.time_idle_air = 0.04645027277804936;
    msg.time_idle_water = 0.40087910616371447;
    msg.time_idle_underwater = 0.3323145573288211;
    msg.time_idle_unknown = 0.32701933449330245;
    msg.time_motor_ground = 0.8335071850483542;
    msg.time_motor_air = 0.20444179388952954;
    msg.time_motor_water = 0.5103748828900122;
    msg.time_motor_underwater = 0.8378482182451957;
    msg.time_motor_unknown = 0.3983611246609572;
    msg.rpm_min = -9162;
    msg.rpm_max = 19367;
    msg.depth_max = 0.20354688663671283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.5495314817844345);
    msg.setSource(59331U);
    msg.setSourceEntity(34U);
    msg.setDestination(15094U);
    msg.setDestinationEntity(140U);
    msg.timestamp_last_service = 0.4865986727924727;
    msg.time_next_service = 0.6378381817223104;
    msg.time_motor_next_service = 0.7758547725025606;
    msg.time_idle_ground = 0.7734590813242299;
    msg.time_idle_air = 0.8329827346123692;
    msg.time_idle_water = 0.09309642747193236;
    msg.time_idle_underwater = 0.41239425356219417;
    msg.time_idle_unknown = 0.8298503723376014;
    msg.time_motor_ground = 0.8513913334299135;
    msg.time_motor_air = 0.052734141219085706;
    msg.time_motor_water = 0.19406256057442084;
    msg.time_motor_underwater = 0.2799388781986296;
    msg.time_motor_unknown = 0.7645068765928764;
    msg.rpm_min = -4154;
    msg.rpm_max = 11315;
    msg.depth_max = 0.827213638451759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.09734737060041398);
    msg.setSource(609U);
    msg.setSourceEntity(204U);
    msg.setDestination(30152U);
    msg.setDestinationEntity(224U);
    msg.timestamp_last_service = 0.1380414893686699;
    msg.time_next_service = 0.6984861462543809;
    msg.time_motor_next_service = 0.16324362333700437;
    msg.time_idle_ground = 0.8875161808025932;
    msg.time_idle_air = 0.4342481882444199;
    msg.time_idle_water = 0.886331385938587;
    msg.time_idle_underwater = 0.39970603968139806;
    msg.time_idle_unknown = 0.8767101839643205;
    msg.time_motor_ground = 0.9030508754187194;
    msg.time_motor_air = 0.7198427421568664;
    msg.time_motor_water = 0.07602172298442689;
    msg.time_motor_underwater = 0.4042878704464047;
    msg.time_motor_unknown = 0.7781893716594109;
    msg.rpm_min = 22571;
    msg.rpm_max = 24092;
    msg.depth_max = 0.8735867053179204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.5526099985397993);
    msg.setSource(25182U);
    msg.setSourceEntity(16U);
    msg.setDestination(46941U);
    msg.setDestinationEntity(38U);
    msg.severity = 62U;
    msg.text.assign("BGGEVJGTLCTHMRLVLCHYFINCZPYTGZXLRHZEMAXEDVHSFLQAKMZAECFKKRIWUCXIPYWZXYFCEOYGOLYZZNPMLGASYPZJMBWURKSDZOPKOVDUAVRBSPVNHQFIFMNAELYDYBTC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.7844224583637083);
    msg.setSource(29985U);
    msg.setSourceEntity(27U);
    msg.setDestination(36349U);
    msg.setDestinationEntity(183U);
    msg.severity = 33U;
    msg.text.assign("FVZWWMARPRLDBQEILEVMMBBBNDIXQTGSIOTKNFZZACQISBNVWRDZPDPGHEQVAOJHJMFAEIDRY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.6169661407043281);
    msg.setSource(18788U);
    msg.setSourceEntity(185U);
    msg.setDestination(63318U);
    msg.setDestinationEntity(92U);
    msg.severity = 22U;
    msg.text.assign("SSSVJLXDYNMDFFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.46619092765791326);
    msg.setSource(58103U);
    msg.setSourceEntity(195U);
    msg.setDestination(3250U);
    msg.setDestinationEntity(76U);
    msg.channel = 4;
    msg.value = 2053011662;
    msg.gain = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.6865461228775027);
    msg.setSource(27142U);
    msg.setSourceEntity(129U);
    msg.setDestination(60140U);
    msg.setDestinationEntity(35U);
    msg.channel = -26;
    msg.value = 874009571;
    msg.gain = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.8585741168087775);
    msg.setSource(53689U);
    msg.setSourceEntity(6U);
    msg.setDestination(11225U);
    msg.setDestinationEntity(14U);
    msg.channel = -38;
    msg.value = 269976453;
    msg.gain = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.06973060045765267);
    msg.setSource(56326U);
    msg.setSourceEntity(137U);
    msg.setDestination(46536U);
    msg.setDestinationEntity(137U);
    msg.ch01 = 0.1699900746651274;
    msg.ch02 = 0.9002086439117772;
    msg.ch03 = 0.44199180562612994;
    msg.ch04 = 0.28313636005615317;
    msg.ch05 = 0.019035318389632794;
    msg.ch06 = 0.602178907080844;
    msg.ch07 = 0.39104613596105475;
    msg.ch08 = 0.30268427803801135;
    msg.ch09 = 0.302702760596262;
    msg.ch10 = 0.3543631337271608;
    msg.ch11 = 0.171455725203288;
    msg.ch12 = 0.8961508296215961;
    msg.ch13 = 0.3421453333442025;
    msg.ch14 = 0.08940324575194358;
    msg.ch15 = 0.6319030271606892;
    msg.ch16 = 0.5900782164336458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.3657749982405515);
    msg.setSource(1903U);
    msg.setSourceEntity(215U);
    msg.setDestination(30036U);
    msg.setDestinationEntity(162U);
    msg.ch01 = 0.3307099868327026;
    msg.ch02 = 0.26549199568549775;
    msg.ch03 = 0.42755254457464853;
    msg.ch04 = 0.6757979779768418;
    msg.ch05 = 0.10217757255392879;
    msg.ch06 = 0.28317425178042166;
    msg.ch07 = 0.6340408718075068;
    msg.ch08 = 0.9526736101581571;
    msg.ch09 = 0.19179873603346964;
    msg.ch10 = 0.7094394233429884;
    msg.ch11 = 0.5650447502466991;
    msg.ch12 = 0.5711922524038915;
    msg.ch13 = 0.9060667492478454;
    msg.ch14 = 0.8880182428667559;
    msg.ch15 = 0.2445330820068069;
    msg.ch16 = 0.5669960834120846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.10308353340470733);
    msg.setSource(49789U);
    msg.setSourceEntity(113U);
    msg.setDestination(26761U);
    msg.setDestinationEntity(72U);
    msg.ch01 = 0.7040429470565752;
    msg.ch02 = 0.3851393180360859;
    msg.ch03 = 0.2695589700395782;
    msg.ch04 = 0.046671355164154105;
    msg.ch05 = 0.1499170547669918;
    msg.ch06 = 0.23775083192482283;
    msg.ch07 = 0.516441926570499;
    msg.ch08 = 0.7081622796189505;
    msg.ch09 = 0.10428889249705176;
    msg.ch10 = 0.17982106485337357;
    msg.ch11 = 0.08776857497770363;
    msg.ch12 = 0.04768668148533861;
    msg.ch13 = 0.24659357189340902;
    msg.ch14 = 0.5395257274403623;
    msg.ch15 = 0.814071459415699;
    msg.ch16 = 0.22869168968060505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.6190891301317023);
    msg.setSource(15390U);
    msg.setSourceEntity(101U);
    msg.setDestination(18000U);
    msg.setDestinationEntity(244U);
    msg.op = 86U;
    msg.lat = 0.6663831986878013;
    msg.lon = 0.045108048392505484;
    msg.height = 0.07585654868842884;
    msg.depth = 0.9120683000130598;
    msg.alt = 0.9438260950786773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.6975648208632171);
    msg.setSource(49373U);
    msg.setSourceEntity(44U);
    msg.setDestination(7144U);
    msg.setDestinationEntity(15U);
    msg.op = 205U;
    msg.lat = 0.7912886522348351;
    msg.lon = 0.3959559639979753;
    msg.height = 0.4200341711512118;
    msg.depth = 0.9420065657407547;
    msg.alt = 0.41435987597390367;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.5464173353157732);
    msg.setSource(34284U);
    msg.setSourceEntity(18U);
    msg.setDestination(14272U);
    msg.setDestinationEntity(18U);
    msg.op = 123U;
    msg.lat = 0.36993913887139884;
    msg.lon = 0.8280987354744376;
    msg.height = 0.2196098613844525;
    msg.depth = 0.8825525145472679;
    msg.alt = 0.8344329977804209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.9171166064963335);
    msg.setSource(12242U);
    msg.setSourceEntity(53U);
    msg.setDestination(55316U);
    msg.setDestinationEntity(1U);
    msg.nbeams = 225U;
    msg.ncells = 160U;
    msg.coord_sys = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.7143471612229173);
    msg.setSource(18058U);
    msg.setSourceEntity(176U);
    msg.setDestination(46645U);
    msg.setDestinationEntity(205U);
    msg.nbeams = 131U;
    msg.ncells = 37U;
    msg.coord_sys = 150U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4512939448716995;
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.6724799041459013);
    msg.setSource(14031U);
    msg.setSourceEntity(69U);
    msg.setDestination(6498U);
    msg.setDestinationEntity(48U);
    msg.nbeams = 3U;
    msg.ncells = 246U;
    msg.coord_sys = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.8221898054777819);
    msg.setSource(47832U);
    msg.setSourceEntity(10U);
    msg.setDestination(51672U);
    msg.setDestinationEntity(211U);
    msg.cell_position = 0.9531144098644968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.887880714001438);
    msg.setSource(19409U);
    msg.setSourceEntity(163U);
    msg.setDestination(30732U);
    msg.setDestinationEntity(64U);
    msg.cell_position = 0.8128948978007771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.1700077215796949);
    msg.setSource(35671U);
    msg.setSourceEntity(140U);
    msg.setDestination(50650U);
    msg.setDestinationEntity(246U);
    msg.cell_position = 0.5196281639511725;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.83549934836681;
    tmp_msg_0.amp = 0.3299410374242091;
    tmp_msg_0.cor = 15U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.22740008660689603);
    msg.setSource(37266U);
    msg.setSourceEntity(226U);
    msg.setDestination(22984U);
    msg.setDestinationEntity(238U);
    msg.vel = 0.05118893227782162;
    msg.amp = 0.015301394310798355;
    msg.cor = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.4008572517566851);
    msg.setSource(63052U);
    msg.setSourceEntity(198U);
    msg.setDestination(12106U);
    msg.setDestinationEntity(136U);
    msg.vel = 0.16095533560723696;
    msg.amp = 0.4487221160104592;
    msg.cor = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.9852832118913813);
    msg.setSource(61474U);
    msg.setSourceEntity(215U);
    msg.setDestination(23951U);
    msg.setDestinationEntity(199U);
    msg.vel = 0.3824869060804398;
    msg.amp = 0.2432827067774771;
    msg.cor = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.1541653608385588);
    msg.setSource(50028U);
    msg.setSourceEntity(153U);
    msg.setDestination(1143U);
    msg.setDestinationEntity(185U);
    msg.name.assign("UEVJHJTPAYWEGIULVMOLIZFKYZNPILVXODQIHCGFHMSXTNEJPGLLVREKNOTTRKBFRAWGKCOYBZWMSHXCFVZCGIKSPZMZNJFEMRBQHNVALHXAGPAJYICJITEEUFFZTWKRUBJNEOYCYLRXKUPTHXQAYUVRXIIXDQBDOYOGQSSMLUZNWBKTLHBDEQMHSORSMCSFDZHNRDQTWADRNGJQJZYFVQBUDEVLPJIXABWWUMKBAFXUCCOD");
    msg.value = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.8980412181586274);
    msg.setSource(62587U);
    msg.setSourceEntity(78U);
    msg.setDestination(32211U);
    msg.setDestinationEntity(62U);
    msg.name.assign("ZALJUIHBCUUOCBZTDGUOJUPNQZZQTNCBDQTKPJXCXSEVTEIIXHUQJILGVCBQBIORMNHHKYDF");
    msg.value = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.9638164199078744);
    msg.setSource(30055U);
    msg.setSourceEntity(100U);
    msg.setDestination(35232U);
    msg.setDestinationEntity(154U);
    msg.name.assign("QXHXHBIRIVMRELODAKZKSUCINJJEDMZTSGAQISTHGOYBXLT");
    msg.value = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.6635832238282009);
    msg.setSource(15347U);
    msg.setSourceEntity(19U);
    msg.setDestination(47180U);
    msg.setDestinationEntity(121U);
    msg.name.assign("AUGSZWKOOLLVBJCERDQLDVIJWPWKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.7567466171432331);
    msg.setSource(6826U);
    msg.setSourceEntity(156U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(124U);
    msg.name.assign("NRGBHYZWVAQOFIFVTTRIONPCFGPLJQXCOZIBXBCVQKFXQIMFVYNZIKEVMJZICDPKHEBVBEWIKQEMHDSTBETUSLDALGAPAGFWJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.8910807279357493);
    msg.setSource(7450U);
    msg.setSourceEntity(63U);
    msg.setDestination(27254U);
    msg.setDestinationEntity(251U);
    msg.name.assign("DTGLFCYTGDOLKGNUHJNVRJQZXYEPQETGNNNQDEOHVIPRCQSHMGQGNKWXKWYJSZDVAEGFRJZGJUBINQZCWRLXLOXSKLPKIOYIOXRYBIMSFALZOLFMVSWZUDXWHJEZMPGXHEUMTYJQEFSOZBGDAHUIPTTBMBVVYRWOADMOCKWMPYWFNAJQVSTBUSKPURFBOAKIMPECETFSUIAUHHYJQUHCPATLXRWCRNFZQXNLVIIHDLZXFDPBEKTRCSYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.7227806134057975);
    msg.setSource(61595U);
    msg.setSourceEntity(144U);
    msg.setDestination(39993U);
    msg.setDestinationEntity(236U);
    msg.name.assign("VAVMNPXYMHKHBMNUIYTSBOQLYUWVFTQNVQ");
    msg.value = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.600031044534205);
    msg.setSource(45973U);
    msg.setSourceEntity(85U);
    msg.setDestination(31575U);
    msg.setDestinationEntity(206U);
    msg.name.assign("CRXZIVQLUMNWEEAFWNSGPPCLQUVMMQTWEISDTBQMWGIBFGWCZXRZMLGUABCILVKAIKUZOAGHQPJBBICXHWVVJYGRAMWYEVYAPLPTNKOIHPVOWJDMLGAYENIVJTZYDTMFEUVQHXZZFDCBZOXXRBYRCHUNURCLBROWKOANWASUGXNJVROBHIJEGTOJOUHKKFSRDFLXLFEPQSEOAMYQKELJZDHJTFSGHKQJXXDYPSBDRZ");
    msg.value = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.6237646901183443);
    msg.setSource(50484U);
    msg.setSourceEntity(27U);
    msg.setDestination(30681U);
    msg.setDestinationEntity(222U);
    msg.name.assign("HWLDZJBUTFOYZHIJNTGGIIHOPZBVHRWFXMVDJCPTQCSDYWALIAVIWDQKZCUBWUUSGBJRYRMPTMRAAOOESYLVXCUEFMKYRNELDMWOZGXVAQGDKKGTLCYFYWGVPMFNJUI");
    msg.value = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.8694390254362007);
    msg.setSource(43862U);
    msg.setSourceEntity(163U);
    msg.setDestination(27588U);
    msg.setDestinationEntity(206U);
    msg.value = 0.21426746209252323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.5185559789431065);
    msg.setSource(24088U);
    msg.setSourceEntity(177U);
    msg.setDestination(5079U);
    msg.setDestinationEntity(3U);
    msg.value = 0.7617347027962099;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9930035897216517);
    msg.setSource(56016U);
    msg.setSourceEntity(27U);
    msg.setDestination(42571U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5187409561639671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6038066035566464);
    msg.setSource(11219U);
    msg.setSourceEntity(72U);
    msg.setDestination(43783U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5666252556372482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.8704386705017372);
    msg.setSource(32884U);
    msg.setSourceEntity(170U);
    msg.setDestination(56587U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5139657206430879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.8289549330042721);
    msg.setSource(34401U);
    msg.setSourceEntity(83U);
    msg.setDestination(21289U);
    msg.setDestinationEntity(135U);
    msg.value = 0.06851134189095742;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.44846215705568093);
    msg.setSource(11107U);
    msg.setSourceEntity(168U);
    msg.setDestination(30269U);
    msg.setDestinationEntity(98U);
    msg.value = 0.9477577795583253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.033629325597583914);
    msg.setSource(60743U);
    msg.setSourceEntity(47U);
    msg.setDestination(23809U);
    msg.setDestinationEntity(195U);
    msg.value = 0.7733328361570633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.7484824089102707);
    msg.setSource(65126U);
    msg.setSourceEntity(235U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(87U);
    msg.value = 0.5171003536089537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.8337517850345431);
    msg.setSource(17291U);
    msg.setSourceEntity(56U);
    msg.setDestination(56444U);
    msg.setDestinationEntity(228U);
    msg.restriction = 4U;
    msg.reason.assign("ZEPAHURDBEAYNFVHNNTEKTEWYOSUXDWJNLHQWMRZFQXYTAVVHLDJGASUENZGSZPKTCBMOBIACIGFRMQLGWCTLKFYKGTJQKQQFMXBIYRVNEYNNMKOVRIDZVQHUTSEYJBECBGBBHTULMOOWMLKVSELKICQLWRAPYPRUKXSXVYPHWVIOSGZUNAGXLNWSXBPUTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.8244304532837681);
    msg.setSource(3975U);
    msg.setSourceEntity(5U);
    msg.setDestination(59940U);
    msg.setDestinationEntity(52U);
    msg.restriction = 55U;
    msg.reason.assign("KWXLURUKJCDQOMJCHOEPJFQYANPTHBRIYKRSWLRUODNVBTEJNXWYTVQAASUJHXUOSGHKVGPSUBVPHCUQMZNGGTDFHQTAPXFHJEIZMTQZQNSNPVVXYOGKLAFOKLFXNNDLOHEAJWTJTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.8756363619333076);
    msg.setSource(7119U);
    msg.setSourceEntity(59U);
    msg.setDestination(19801U);
    msg.setDestinationEntity(175U);
    msg.restriction = 24U;
    msg.reason.assign("HFBJZLLMGLAMOWHKTILCLBIFXUHKGAHBZRWRJCWIVXDBTKHQSULDZUZDFMCAKKFXDSULUFPLUVZKTJPGYHDGOXISPZPALCPDQXOEQQYRMFHREIFAEWCVHYZWNNWGNFVLOXATUYWOABWOEEQTKBFVIOWSXRJPUMXIVQQMESEMUGHNBPPIJARXEPVUSSYKSQCASEXYCTPMDJIJKNGINGTMMZJBDGDNOJTNGEONJBTYSNYVYZOKVTYZWHQBVA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBMsg msg;
    msg.setTimeStamp(0.31957242624345017);
    msg.setSource(18721U);
    msg.setSourceEntity(160U);
    msg.setDestination(17260U);
    msg.setDestinationEntity(74U);
    msg.path_param = 0.8864237075578935;
    msg.lat = 0.0064816416971809065;
    msg.lon = 0.7262521416045034;
    msg.z = 0.14858088547385329;
    msg.r_f = 0.6610611399697494;
    msg.p = 0.9513036901699737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBMsg msg;
    msg.setTimeStamp(0.37189834851664205);
    msg.setSource(4221U);
    msg.setSourceEntity(55U);
    msg.setDestination(30817U);
    msg.setDestinationEntity(87U);
    msg.path_param = 0.7456935016977646;
    msg.lat = 0.06264498220270431;
    msg.lon = 0.8708287951569322;
    msg.z = 0.10580202414859141;
    msg.r_f = 0.6907151879582407;
    msg.p = 0.43487383889651976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBMsg msg;
    msg.setTimeStamp(0.7203474690157088);
    msg.setSource(61142U);
    msg.setSourceEntity(85U);
    msg.setDestination(54769U);
    msg.setDestinationEntity(75U);
    msg.path_param = 0.2817311020850971;
    msg.lat = 0.6415300356835695;
    msg.lon = 0.21471494807338276;
    msg.z = 0.38896257080845453;
    msg.r_f = 0.9876452732694284;
    msg.p = 0.3869060783213867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBState msg;
    msg.setTimeStamp(0.8064552490474582);
    msg.setSource(6110U);
    msg.setSourceEntity(99U);
    msg.setDestination(22408U);
    msg.setDestinationEntity(33U);
    msg.path_param = 0.4850114741103274;
    msg.x = 0.408599160330845;
    msg.y = 0.17523490166756672;
    msg.z = 0.9247263723070631;
    msg.r_f = 0.5075712455994991;
    msg.p = 0.09165096210159607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBState msg;
    msg.setTimeStamp(0.30267577211725327);
    msg.setSource(12769U);
    msg.setSourceEntity(254U);
    msg.setDestination(56353U);
    msg.setDestinationEntity(151U);
    msg.path_param = 0.6761333955842026;
    msg.x = 0.034470279738636034;
    msg.y = 0.21039074105883204;
    msg.z = 0.5929109893054592;
    msg.r_f = 0.8912977437515543;
    msg.p = 0.6473599246164323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBState msg;
    msg.setTimeStamp(0.5038309778453812);
    msg.setSource(48736U);
    msg.setSourceEntity(159U);
    msg.setDestination(60897U);
    msg.setDestinationEntity(174U);
    msg.path_param = 0.8032912418501787;
    msg.x = 0.12234528031812841;
    msg.y = 0.963361146327315;
    msg.z = 0.3492170226375907;
    msg.r_f = 0.3936235576822521;
    msg.p = 0.00710062330638872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExperimentControl msg;
    msg.setTimeStamp(0.9596058093878349);
    msg.setSource(9949U);
    msg.setSourceEntity(248U);
    msg.setDestination(58598U);
    msg.setDestinationEntity(191U);
    msg.op = 143U;
    msg.experiment = 54U;
    msg.obstacle = 10U;
    msg.delay = 0.6964836542907238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExperimentControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExperimentControl msg;
    msg.setTimeStamp(0.14179409926520514);
    msg.setSource(56334U);
    msg.setSourceEntity(25U);
    msg.setDestination(21824U);
    msg.setDestinationEntity(38U);
    msg.op = 173U;
    msg.experiment = 135U;
    msg.obstacle = 70U;
    msg.delay = 0.7636308947035813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExperimentControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExperimentControl msg;
    msg.setTimeStamp(0.10502537124141453);
    msg.setSource(35229U);
    msg.setSourceEntity(228U);
    msg.setDestination(51568U);
    msg.setDestinationEntity(59U);
    msg.op = 209U;
    msg.experiment = 105U;
    msg.obstacle = 251U;
    msg.delay = 0.673425207943034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExperimentControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBParameters msg;
    msg.setTimeStamp(0.526638125382037);
    msg.setSource(36945U);
    msg.setSourceEntity(227U);
    msg.setDestination(46856U);
    msg.setDestinationEntity(224U);
    msg.ellipse_path_lat = 0.8452832768989662;
    msg.ellipse_path_lon = 0.8646678577615914;
    msg.ellipse_path_z = 0.8883472096035566;
    msg.ellipse_path_a = 0.4272123788459361;
    msg.ellipse_path_b = 0.9709033215580858;
    msg.ellipse_path_c = 0.9910562939850909;
    msg.ellipse_path_clockwise = 217U;
    msg.ellipse_path_psi = 0.8398720734757948;
    msg.ellipse_path_z_freq = 0.13211721419297395;
    msg.ellipse_path_phi0 = 0.6181858357304619;
    msg.ellipse_path_z_phi0 = 0.1590071794231609;
    msg.waypoint_path_lat = 0.33201940940178254;
    msg.waypoint_path_lon = 0.42603109750873636;
    msg.waypoint_path_x.assign("ZNTTQOATYUAWLVBJVPFLADGPUPTDAYBWIVRSMHIJTKYSNUSFKYQMZBWIKFAQQPZADFTLSEEULEIGGQUYUHHTKVUBLMLXHIPLKGOR");
    msg.waypoint_path_y.assign("MNCGMXDTLTSMXMQGNYRFCNGJUVJEKUJKHRRBFGOMBPCAPVNCOXFAYMEUOTPQTERTQOMHZDFJEIXLRRJUAZVFGHCOZEBLBPAOHXCSVYZDPQVRCKIYXWWGUKUENDIUKNPAZYZFILJBGCWFNAXTFPCRWEKBOH");
    msg.waypoint_path_z.assign("KTNQKYFERCBCYDBTQIMRGWCFMZKVXOQISHCZJSKKITTZKZDSEQZXLXJXJYWFYFLIVGPGHDFVFDADTOLSVGAAMNGGOMOMWESXVSSQGIOLSOTDVRZBDFBEOYXTBAVETVJHHKPCILHKEYVLRUTNKCPSZXJPJPNMMANNRQGULRPALWOGYXCCWHYIIFBYQHEARWDUXJZUWKJNVDWUMPJHUPZBEZAWEFLRHAMYBEIJCHQNMRSTBAOICUPXWFUDQUOUGN");
    msg.waypoint_radius = 0.08862763866165257;
    msg.los_lookahead = 0.8027441453312998;
    msg.los_speed = 0.684625418420574;
    msg.los_gain = 0.8048360390406526;
    msg.los_adaptive = 187U;
    msg.form_x = 0.6546389130636037;
    msg.form_y = 0.14059971043830655;
    msg.form_z = 0.04355607730256428;
    msg.form_max_speed = 0.21329818247718912;
    msg.form_gain = 0.1093111223438673;
    msg.oa_radius = 0.05099371262147878;
    msg.oa_cone = 0.8511146971177332;
    msg.oa_hysteresis = 0.8304410907300356;
    msg.oa_recovery = 0.4728433889690943;
    msg.obs_lat = 0.15997763330304715;
    msg.obs_lon = 0.6417782662092687;
    msg.obs_x.assign("XRGSGLPVDBTZG");
    msg.obs_y.assign("PIGJDTXFDUOBGXTHLHTRLGYRTYWOXMPAOAIYIXPMQBNHIKCYJGSZITEMIGHOELZQLBAEUCQVRRBYOKSCBOZ");
    msg.obs_vx.assign("OFUSVIWGYHCNWYPMJEPVWGQVTBDZUBOFXCURRDBIDAEZMURHGFAMJWFIQITGXKOOQVKBPQPLYCCORIHKEQALMKQGNKHAPFNGVEHOPJIHYNZAMLMHDFGDTXDAOGJSJTVHOXEJLLPDLVKWZCJSXCVBRXHTRTZYYGISPTJTNCNWRDFWIEBMWMZKUDZTUUBNDSNYXSEUBLRNOLHEZWLEYFAMCFOYVXBMPCYQZNRKZGEJSKIFRXAXWVSAUQ");
    msg.obs_vy.assign("ZXAEHCZIKGZFBUCUKJEZHGZBFOSYGBUVQAITVMTYPXGOOSQBYUTDLMVYWXZEWQRLLINDYEKKFDDAJCJYBXTEBSHKTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBParameters msg;
    msg.setTimeStamp(0.8544963832256723);
    msg.setSource(62409U);
    msg.setSourceEntity(151U);
    msg.setDestination(16239U);
    msg.setDestinationEntity(37U);
    msg.ellipse_path_lat = 0.9416595724274307;
    msg.ellipse_path_lon = 0.8246542360313787;
    msg.ellipse_path_z = 0.06062364187185865;
    msg.ellipse_path_a = 0.2598629836478221;
    msg.ellipse_path_b = 0.23836331987914594;
    msg.ellipse_path_c = 0.5610558690624304;
    msg.ellipse_path_clockwise = 100U;
    msg.ellipse_path_psi = 0.3055080953119579;
    msg.ellipse_path_z_freq = 0.5828613904317749;
    msg.ellipse_path_phi0 = 0.08809542851269614;
    msg.ellipse_path_z_phi0 = 0.34597880949859183;
    msg.waypoint_path_lat = 0.6279687955651556;
    msg.waypoint_path_lon = 0.04589523815709673;
    msg.waypoint_path_x.assign("WOXMFFOVWVDIRZWZUYZJFJWKAAKRRJFMMQCYMTESNXKGKXODBNMVQJZFXDSHUDZLQOJPSHMXOWVCDDTCZZGPSHWQQWLUACSRCPNJAFTBYOFOOJQUEEPCJXTAIVKTPEWNIEQUQYBVCBLWTILLLMBOUATGBQENRCMSBZAGDGZTYJQUDPNPNLVVNBHAIUAPVWISKIEEBKSURFHCXSXUBSPGKIGTNRKRJDLGHVOYYIKALXHXIGZEYLMYNTPYF");
    msg.waypoint_path_y.assign("QKESNDCURPMBJJDBUOTABWDCTADSFJUUZMZWLFUIEPRWIQOMPNSOXPVFWSRLRQRMFKSITFWWXAEBXTSLDQGWZJHMIIJUHVKHAABVUKDFFLZAFCTKHHDPMZYGRYOYGICAACUPXGBVRJBXQSLLEUCVFQFNEAKJNYXVGETOKHYLCONKRZNKLT");
    msg.waypoint_path_z.assign("WTCWCQOMPUDFGZHUWBXAVZLBRJXFOTEUOYJMIZPUIVPZAWBRCPGAHGYSCDHYAHYCCWAJMBNJYGSYQZUXOOSEEGDPBNERBKLMEYQRUDS");
    msg.waypoint_radius = 0.005742613603351154;
    msg.los_lookahead = 0.5926797562846535;
    msg.los_speed = 0.9909420826551008;
    msg.los_gain = 0.7222008772461638;
    msg.los_adaptive = 239U;
    msg.form_x = 0.9319215763980071;
    msg.form_y = 0.4316433505383931;
    msg.form_z = 0.5924315019789288;
    msg.form_max_speed = 0.6309946191155551;
    msg.form_gain = 0.422083899074305;
    msg.oa_radius = 0.7884897636122996;
    msg.oa_cone = 0.01981789626435293;
    msg.oa_hysteresis = 0.46657620005037925;
    msg.oa_recovery = 0.31936936098429225;
    msg.obs_lat = 0.4389370453857824;
    msg.obs_lon = 0.760878513697528;
    msg.obs_x.assign("CPKVCDLDSDFBWTSDLUAZGDEOMKJAIAQAYGWXTEMXUBSSMVRHDPVWCNQPDSZGGXBQHHXCQYFMOODKDLQBXWMKWEZIFAZMVIMFWPZRQQKRXZFKMFYINYRPJHSUWTHRHJZKLBAZNHHKYEPBORCOETJSNJBPRWAMFAZTLWKIIRIFPYBNXCJLGFNGTGGUJVCRVNUEYOQEXEJSIOICUTIRJQUNYPUYVHEUALKQYZTMTJACWT");
    msg.obs_y.assign("NHSMVQSADOUGOLPJPHQWPXEGUYYKERJYTXDLIK");
    msg.obs_vx.assign("UJZKBEVHRUDZVEWNAMHPOPJGEZXGSRIBDKOCPASTSPMWWJXZITFWJXCTHGBMDLBNTFZKIEZGYFHNGOQMDRVIHWTYQYYUEUTRVNBHWKLQHRRDENXQGTLKQXUYW");
    msg.obs_vy.assign("NOPUSRHYCICKTRATCHGLKYRBGQYMXTWVOWBYSCHAJUVJGWKEDKYBRFKQTSFYJXTWBADUVRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBParameters msg;
    msg.setTimeStamp(0.9274018801726027);
    msg.setSource(31982U);
    msg.setSourceEntity(120U);
    msg.setDestination(51029U);
    msg.setDestinationEntity(15U);
    msg.ellipse_path_lat = 0.4471913157036924;
    msg.ellipse_path_lon = 0.6419629575993094;
    msg.ellipse_path_z = 0.49255435132111536;
    msg.ellipse_path_a = 0.5030897851059449;
    msg.ellipse_path_b = 0.15135740686496313;
    msg.ellipse_path_c = 0.8747948993031174;
    msg.ellipse_path_clockwise = 50U;
    msg.ellipse_path_psi = 0.41117637753804603;
    msg.ellipse_path_z_freq = 0.58672771305266;
    msg.ellipse_path_phi0 = 0.14774335993870924;
    msg.ellipse_path_z_phi0 = 0.5273054982505833;
    msg.waypoint_path_lat = 0.07065392492460076;
    msg.waypoint_path_lon = 0.3264987564621229;
    msg.waypoint_path_x.assign("VFQKQXWFKIIFSGZULHYKSRBVVKTITEUIBFHNBZQLJLMKQGPDX");
    msg.waypoint_path_y.assign("FOJFMZFVJRHNKLIVXFAWQKDHEBAWZCENQZQOFASWRSQMYHKBTGDYNTFMABVYVAQCTYOGZOEGRLDSGSLDDMLONLZCKQTUNCADHIYMWNPWISWGRCVFXUWGUJTEESRTZVJJHCYTUQXUMPWZPLXGLYBTCKWOEISAJNBHXUMVGMRNEYXQOWIXMBEDKQGCSBKAODDOPTRHHLILZJBVUSTHSJIPIJRDQOPXKVEYVBNJHXMRFBYCLPKUKAPZNUPFGFAUZP");
    msg.waypoint_path_z.assign("OQRGTTQCHMMPRDBMJFTZMALTMXNXVWVPBKGEWHYAUZCDPZVMYYHGNBOVOOKDZDLTKCANPZTWBFNZZGRSEYCDDHINJGKPEGKDNOJALVLJQUWOABISZVUAQMFKPGHESJLYVWLOIHEXIHYFYIBPBALUHTQOOXUUJUXRRWICKPPBDTFQSWTNMSEQDZQGANKLTLF");
    msg.waypoint_radius = 0.9323711976235883;
    msg.los_lookahead = 0.7862585997717116;
    msg.los_speed = 0.2865101556764841;
    msg.los_gain = 0.1553613161275752;
    msg.los_adaptive = 76U;
    msg.form_x = 0.7410852491221982;
    msg.form_y = 0.7313240038858015;
    msg.form_z = 0.09892614607955774;
    msg.form_max_speed = 0.3021267721179648;
    msg.form_gain = 0.3522201348558469;
    msg.oa_radius = 0.4511646955460473;
    msg.oa_cone = 0.026864887310760643;
    msg.oa_hysteresis = 0.503857065240345;
    msg.oa_recovery = 0.5517485714460624;
    msg.obs_lat = 0.3241994316419755;
    msg.obs_lon = 0.7804315647894365;
    msg.obs_x.assign("UHRKJYHOBKJRDMFECILMLXIQNMQASEFVGDLRRVITJCNKAXMETUTOZTVODLIQVDLFMQGVBVWHCJKJUHPWPMOSKZAZMLTYBAWRCFNXDYXWFLQOZXGSXESTIYI");
    msg.obs_y.assign("JGOUPWJTGNUFHOMSRCMDSKQTBPWSBJGGWEZMVCGQZCHICYKKRWEUVYEARDQPOPHWLMFPVTASLEFJQYSLSLSCMIRRRTAUCLZBXXNITYOHLUIROXVYSPNIZEPIV");
    msg.obs_vx.assign("HXRNBYLLWNYQYDAVZQQAFVPXLPBEDARBEYLQXHRTYDIOISMIUMQZRCLJ");
    msg.obs_vy.assign("ARDQIYIJTCGXEQKZBJXRIEGUFMLGVLVYXBZVIMWEVDOSTNDNTXWFWNOFLGMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBParametersRequest msg;
    msg.setTimeStamp(0.1545258406636686);
    msg.setSource(35175U);
    msg.setSourceEntity(51U);
    msg.setDestination(13178U);
    msg.setDestinationEntity(87U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBParametersRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBParametersRequest msg;
    msg.setTimeStamp(0.5096827207513631);
    msg.setSource(15440U);
    msg.setSourceEntity(254U);
    msg.setDestination(54664U);
    msg.setDestinationEntity(7U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBParametersRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NSBParametersRequest msg;
    msg.setTimeStamp(0.9604106334279946);
    msg.setSource(65464U);
    msg.setSourceEntity(183U);
    msg.setDestination(21525U);
    msg.setDestinationEntity(118U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NSBParametersRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockOffset msg;
    msg.setTimeStamp(0.02360948018664011);
    msg.setSource(14595U);
    msg.setSourceEntity(77U);
    msg.setDestination(44473U);
    msg.setDestinationEntity(220U);
    msg.system = 5234U;
    msg.offset = 0.9439485594178976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockOffset msg;
    msg.setTimeStamp(0.29962803058172827);
    msg.setSource(12072U);
    msg.setSourceEntity(94U);
    msg.setDestination(50477U);
    msg.setDestinationEntity(193U);
    msg.system = 23788U;
    msg.offset = 0.7798394083436847;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockOffset msg;
    msg.setTimeStamp(0.767304371946556);
    msg.setSource(18312U);
    msg.setSourceEntity(228U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(184U);
    msg.system = 21286U;
    msg.offset = 0.13853436332713764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockSync msg;
    msg.setTimeStamp(0.08131588206015405);
    msg.setSource(61316U);
    msg.setSourceEntity(59U);
    msg.setDestination(2108U);
    msg.setDestinationEntity(148U);
    msg.op = 161U;
    msg.id = 7283U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockSync #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockSync msg;
    msg.setTimeStamp(0.5836811364901646);
    msg.setSource(5325U);
    msg.setSourceEntity(180U);
    msg.setDestination(41569U);
    msg.setDestinationEntity(155U);
    msg.op = 205U;
    msg.id = 53300U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockSync #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockSync msg;
    msg.setTimeStamp(0.3216545250179814);
    msg.setSource(28777U);
    msg.setSourceEntity(45U);
    msg.setDestination(14790U);
    msg.setDestinationEntity(91U);
    msg.op = 87U;
    msg.id = 25455U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockSync #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
