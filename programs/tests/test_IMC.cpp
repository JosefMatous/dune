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
// IMC XML MD5: 9a34271857f8049443eae4aeb4ccec8e                            *
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
    msg.setTimeStamp(0.17482668332002238);
    msg.setSource(41037U);
    msg.setSourceEntity(66U);
    msg.setDestination(6104U);
    msg.setDestinationEntity(104U);
    msg.state = 90U;
    msg.flags = 119U;
    msg.description.assign("QTFLZSZJQXVGCDFYVCHHBNPKYPFMDMDRKWWZQKVGBMCFUXEUQQAIKBRJWDZCJSWKPMXQRIHNYXGOJZOXMSOFMVINEERBNZIPQGFRKAR");

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
    msg.setTimeStamp(0.8471055120198436);
    msg.setSource(38723U);
    msg.setSourceEntity(81U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(71U);
    msg.state = 143U;
    msg.flags = 170U;
    msg.description.assign("SUUUEQHMNDQJYFHOCTNVWBZRDQBGLNLTITLVMGYSSQDJMUKRVKKUZVANLBGVOIWQEVPEHQYNYZENNQHGMDYAWDWJSUYRXCOBOJUJPILZLMSWWSACSXZXSFIEBEQNVUIBRXNAZFFXPIYTCJEIVHDVNLOIXPYZFARZTPTHPTOYDBOKWFPVRPUKJBAUFAKGR");

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
    msg.setTimeStamp(0.06675274271015008);
    msg.setSource(44869U);
    msg.setSourceEntity(12U);
    msg.setDestination(32696U);
    msg.setDestinationEntity(54U);
    msg.state = 86U;
    msg.flags = 50U;
    msg.description.assign("OHRXJZEOUFAZTNDPDLCLXYCMWIJALDSEEVIQDWMYXJKHZWRGLWXBKIIFJKPARQUAOPMTQVCLHDQORSBTTNSUFWECKQHGPDMKYOCRKNNQYPIAGCFLJSHHUYLVFYRGT");

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
    msg.setTimeStamp(0.013076541843668132);
    msg.setSource(48697U);
    msg.setSourceEntity(184U);
    msg.setDestination(5794U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.15131574923581603);
    msg.setSource(25488U);
    msg.setSourceEntity(89U);
    msg.setDestination(15U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.1525545232011737);
    msg.setSource(40464U);
    msg.setSourceEntity(37U);
    msg.setDestination(52574U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.7891701054930598);
    msg.setSource(42650U);
    msg.setSourceEntity(154U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(197U);
    msg.id = 102U;
    msg.label.assign("JDTWBCFMGYIYYQJLTVNVCGMBAVORCYIZXQLOFSLCDVPPLYHJVYJFGFKEOKMCMTMTRXLLJKBQJWLYUSEXTYINKQABZBOQDUYADFFNCYSHGDCFBTAKREPZMIBTXIWGBNQW");
    msg.component.assign("PRUJICWUDFHFYMATQSSGBUNPDGQZYCYALJETVPIKKZFRVGNXHHOCJBPUTBYIPMPZFYKLQKFGVTCJONOREZAGEUUDDNLCGWVMZKLJVCDKXZIJWCKYMNXQLLTNOHICELQBSADTORZWFTAFDXPIECOUPBPOMXBLQDYZUCTVSQOMGXDUWWLJOPJHQJXQXHVHGVIGEYARIRBQGYDINSMTBTXEFWRZWEMASNXFYAMVHHRFKVAZONKUNSSWB");
    msg.act_time = 6637U;
    msg.deact_time = 46821U;

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
    msg.setTimeStamp(0.018996383402316686);
    msg.setSource(56385U);
    msg.setSourceEntity(112U);
    msg.setDestination(58772U);
    msg.setDestinationEntity(229U);
    msg.id = 49U;
    msg.label.assign("OOUSTGXJTGUCBEWRMADHMKYQQSKGENCMGZWALLRTITVDKBPAPZGMXKWPG");
    msg.component.assign("FGSIJFJAQHEKGGRXBENONCLRWBZPPVUKEZBTVDPZIRKROHIUGYVXPCCXPDRWGZFUUINL");
    msg.act_time = 58522U;
    msg.deact_time = 18963U;

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
    msg.setTimeStamp(0.5455251613776716);
    msg.setSource(55643U);
    msg.setSourceEntity(36U);
    msg.setDestination(16459U);
    msg.setDestinationEntity(182U);
    msg.id = 130U;
    msg.label.assign("RSSFKIXODUVGXJNFQCYEMEFIQQEAAXWPCDZWALJRMASKVNZKTAOCGYMLCMGHFFKAOUHBTFESVSQEYSOXJTDJMVXRRHQFNHEBVKHROWMBTMMCPZAIULX");
    msg.component.assign("SBGOWEBLTXLFBKKVDIZFOOUDSFKALCNXDUNARZPBZQLDLQLTJIJKPOOWUTKXIUOAXPOVOMJYMSPRCQHMENWEQXJKWBYJSWHORAVAKYURXLHEUHJVBEACNHGVNHLTRZCDYEMYFWQSQPIIDNXBGSAZKDVMQRTNJCCFBFHFJMGTHACBJYPYPUYWCQUPPQMGNGTZMAVCUFEBILRFWSDZZISVETHMAGMXKVZUD");
    msg.act_time = 60711U;
    msg.deact_time = 37818U;

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
    msg.setTimeStamp(0.17009991015060644);
    msg.setSource(21647U);
    msg.setSourceEntity(85U);
    msg.setDestination(41628U);
    msg.setDestinationEntity(105U);
    msg.id = 113U;

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
    msg.setTimeStamp(0.7344369544701493);
    msg.setSource(57254U);
    msg.setSourceEntity(242U);
    msg.setDestination(9855U);
    msg.setDestinationEntity(251U);
    msg.id = 117U;

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
    msg.setTimeStamp(0.7129730252360179);
    msg.setSource(63072U);
    msg.setSourceEntity(183U);
    msg.setDestination(52615U);
    msg.setDestinationEntity(203U);
    msg.id = 220U;

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
    msg.setTimeStamp(0.8254293915831381);
    msg.setSource(7210U);
    msg.setSourceEntity(235U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(65U);
    msg.op = 59U;
    msg.list.assign("UXZFKQPJUKLYYJECEQFJI");

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
    msg.setTimeStamp(0.32160038114587075);
    msg.setSource(23749U);
    msg.setSourceEntity(212U);
    msg.setDestination(9969U);
    msg.setDestinationEntity(174U);
    msg.op = 126U;
    msg.list.assign("VWILTBBWBQKEQYZFKKSTHS");

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
    msg.setTimeStamp(0.08323033549214143);
    msg.setSource(31000U);
    msg.setSourceEntity(44U);
    msg.setDestination(38248U);
    msg.setDestinationEntity(162U);
    msg.op = 12U;
    msg.list.assign("NKPGPHHFAMQSLCDDWANPCLIJPTKMZNXBGBPJHNCBZXRURVOEAESGAKMBTGIAXTRJHLKZXSHRDTLDOPCEMINBBEAXFWVWMASWQEPOJDVSQEJZJCFVRJEJHVOUNFUWTOLPHYYTVGXHNARTKOCMZUWGNIRBYTXDOEEWLXMFBUQZKUAFQBVQGHKTDQIGASMJD");

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
    msg.setTimeStamp(0.058171923048681795);
    msg.setSource(36583U);
    msg.setSourceEntity(71U);
    msg.setDestination(38484U);
    msg.setDestinationEntity(192U);
    msg.value = 96U;

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
    msg.setTimeStamp(0.7997353624437091);
    msg.setSource(44005U);
    msg.setSourceEntity(245U);
    msg.setDestination(54046U);
    msg.setDestinationEntity(39U);
    msg.value = 22U;

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
    msg.setTimeStamp(0.6070484248663356);
    msg.setSource(33278U);
    msg.setSourceEntity(113U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(57U);
    msg.value = 148U;

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
    msg.setTimeStamp(0.3928142403242979);
    msg.setSource(2395U);
    msg.setSourceEntity(129U);
    msg.setDestination(2551U);
    msg.setDestinationEntity(177U);
    msg.consumer.assign("SGNQJTPGTD");
    msg.message_id = 33485U;

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
    msg.setTimeStamp(0.5976132725094556);
    msg.setSource(7131U);
    msg.setSourceEntity(252U);
    msg.setDestination(27900U);
    msg.setDestinationEntity(140U);
    msg.consumer.assign("XGENNINFGCAEOWOMXHOXJCWWTYNVZQKXFVPIBDZCPOECQWHJWRWLBBKHXROJYECNJIADIZWRALVGAUMPLJYERTHURDTRJKHADUBGPSXIGYIQQIQZFVFSVJSTXT");
    msg.message_id = 11605U;

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
    msg.setTimeStamp(0.21553549722030674);
    msg.setSource(60813U);
    msg.setSourceEntity(5U);
    msg.setDestination(52844U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("YORICESAGMAKZPWBSEPWCNISLGRJHSXUMDZGJOZLOBJDZZHMHUSGAFNHEYRPJTBJERAFTCNKWCFUVMJSCRZKTNUEGKRPFMKH");
    msg.message_id = 22869U;

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
    msg.setTimeStamp(0.9825841260412763);
    msg.setSource(47018U);
    msg.setSourceEntity(27U);
    msg.setDestination(35145U);
    msg.setDestinationEntity(108U);
    msg.type = 191U;

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
    msg.setTimeStamp(0.04170563210841749);
    msg.setSource(28317U);
    msg.setSourceEntity(3U);
    msg.setDestination(21601U);
    msg.setDestinationEntity(221U);
    msg.type = 103U;

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
    msg.setTimeStamp(0.2903607493209739);
    msg.setSource(23768U);
    msg.setSourceEntity(211U);
    msg.setDestination(6839U);
    msg.setDestinationEntity(216U);
    msg.type = 220U;

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
    msg.setTimeStamp(0.2659611021547943);
    msg.setSource(8736U);
    msg.setSourceEntity(144U);
    msg.setDestination(58768U);
    msg.setDestinationEntity(72U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.5081117958840119);
    msg.setSource(32933U);
    msg.setSourceEntity(98U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(170U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.14211648641962515);
    msg.setSource(36569U);
    msg.setSourceEntity(113U);
    msg.setDestination(45670U);
    msg.setDestinationEntity(176U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.3293923979865798);
    msg.setSource(47343U);
    msg.setSourceEntity(55U);
    msg.setDestination(41292U);
    msg.setDestinationEntity(185U);
    msg.total_steps = 212U;
    msg.step_number = 217U;
    msg.step.assign("KZOLOVQIWQXLDUKJAOFFFCPYSBJACIDZSNWZLLXENHWJYSEOQIXLMMZUTXGSBHHGVVSF");
    msg.flags = 135U;

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
    msg.setTimeStamp(0.8033068571480851);
    msg.setSource(47159U);
    msg.setSourceEntity(153U);
    msg.setDestination(60272U);
    msg.setDestinationEntity(189U);
    msg.total_steps = 148U;
    msg.step_number = 89U;
    msg.step.assign("GQWNFVWHWPGOOQZEUDGRGMRPRFVWSPOBCMPIRAGRDTUKBSCEIUDEEBNOMKJBIQKPJMJPTZLCLZRNJKQXGAGIKDMTSIXTHFGAXLXLWFPYRRSBJDUCOKBSNYRSIZSSTDHFXAVBEHRLPLZYWJCUSYNXOKCNHUFJAKUCIAYIEQCGJEYJMLULWHMTHDVOWXDE");
    msg.flags = 92U;

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
    msg.setTimeStamp(0.8152564216073076);
    msg.setSource(41967U);
    msg.setSourceEntity(241U);
    msg.setDestination(51991U);
    msg.setDestinationEntity(127U);
    msg.total_steps = 7U;
    msg.step_number = 86U;
    msg.step.assign("ZDLHWDVJGUTPXWSWMDXMAXWXHIILLONHDMIWABYBIEFNYLGVUPWSSSKYZMIGXEMYYFNZ");
    msg.flags = 162U;

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
    msg.setTimeStamp(0.8401818309333529);
    msg.setSource(53633U);
    msg.setSourceEntity(96U);
    msg.setDestination(17835U);
    msg.setDestinationEntity(130U);
    msg.state = 202U;
    msg.error.assign("RMSLNTXUSMYNNPGJOVTTDHGBPPEPNHTJUXMTBPAFYIOVLSIQGMECJIPNLBUJCNBVCFXAIABVPHPROUITKYSHFIXWDIOSKWVTMKQAGWOLTHWXBUZNOKZWSFDVLIYKPALMHCAHKZWJBDDYLVGWUNAFRVYXLKHZQPKJGXF");

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
    msg.setTimeStamp(0.8670514204720932);
    msg.setSource(41875U);
    msg.setSourceEntity(249U);
    msg.setDestination(19534U);
    msg.setDestinationEntity(242U);
    msg.state = 81U;
    msg.error.assign("SAFFXRSOXSIMSYPXBGYFRNHURFCYIUAADSNDHVAMUOGVTBCDMXZQBVAWFRFSITJNJGLEYUOPVYZFPHKRBJUHCOOKVBCKRATEQXQKPIZFXKYTPPVKGJRJGOTBLNIZMRZVKZHEKCQQGWCOQMPTRCJSIDTLDIEHZDPGJCKSDDMUWBELNZCD");

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
    msg.setTimeStamp(0.24847583299473475);
    msg.setSource(60743U);
    msg.setSourceEntity(185U);
    msg.setDestination(45524U);
    msg.setDestinationEntity(229U);
    msg.state = 136U;
    msg.error.assign("VRMMDYAYEXAHOYKEKLRFZYPXBFDEYJRWXFVOTHBNNEGIJDISSMSSURIHGQETDFNEWZHVKSJGAEJCQURSDJGZLARXNCUMXAZPASUHGQDSLIWLUTKAXRBVKLMBYUKWHCAMWFULXHHXKBQCTWPDJVMBQOIRLWWLLPGCPVQSIYIFOZJHCEGAVHFOTFTNUSNDPUBNXRUZLCQKOQBYNRVZCOXPGVFJOOJWFBGDZTYYMTIBPNCEWNGQTOKI");

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
    msg.setTimeStamp(0.9994881479356347);
    msg.setSource(34411U);
    msg.setSourceEntity(33U);
    msg.setDestination(63976U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.5708054715851191);
    msg.setSource(27562U);
    msg.setSourceEntity(129U);
    msg.setDestination(1521U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.5697199779716632);
    msg.setSource(3076U);
    msg.setSourceEntity(230U);
    msg.setDestination(42777U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.18085924498911765);
    msg.setSource(17232U);
    msg.setSourceEntity(87U);
    msg.setDestination(3329U);
    msg.setDestinationEntity(246U);
    msg.op = 187U;
    msg.speed_min = 0.2201951929026702;
    msg.speed_max = 0.6902004115009079;
    msg.long_accel = 0.829377123897781;
    msg.alt_max_msl = 0.6474080135844784;
    msg.dive_fraction_max = 0.20344505121913592;
    msg.climb_fraction_max = 0.04730898890102997;
    msg.bank_max = 0.4267369063537182;
    msg.p_max = 0.401530829663884;
    msg.pitch_min = 0.2718578269266595;
    msg.pitch_max = 0.7901423167917109;
    msg.q_max = 0.5442759431518026;
    msg.g_min = 0.6971715795002875;
    msg.g_max = 0.35246473213110807;
    msg.g_lat_max = 0.04312076315920921;
    msg.rpm_min = 0.25272591932495736;
    msg.rpm_max = 0.8780764040739922;
    msg.rpm_rate_max = 0.22194856770314353;

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
    msg.setTimeStamp(0.10455761839431399);
    msg.setSource(28535U);
    msg.setSourceEntity(161U);
    msg.setDestination(52214U);
    msg.setDestinationEntity(8U);
    msg.op = 147U;
    msg.speed_min = 0.5139547753172484;
    msg.speed_max = 0.19580796726204275;
    msg.long_accel = 0.7466384407186742;
    msg.alt_max_msl = 0.9422676102901651;
    msg.dive_fraction_max = 0.5465860677669101;
    msg.climb_fraction_max = 0.04071598328890891;
    msg.bank_max = 0.5030101814922611;
    msg.p_max = 0.5856758575560398;
    msg.pitch_min = 0.7568777561707762;
    msg.pitch_max = 0.3819990119719775;
    msg.q_max = 0.24038503079282325;
    msg.g_min = 0.22860152722824156;
    msg.g_max = 0.7704111886045777;
    msg.g_lat_max = 0.9598942246629333;
    msg.rpm_min = 0.2066137667714245;
    msg.rpm_max = 0.8646633778826951;
    msg.rpm_rate_max = 0.6483435744436746;

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
    msg.setTimeStamp(0.5899531396527902);
    msg.setSource(12457U);
    msg.setSourceEntity(132U);
    msg.setDestination(56035U);
    msg.setDestinationEntity(125U);
    msg.op = 28U;
    msg.speed_min = 0.9802668842976702;
    msg.speed_max = 0.9622483742896776;
    msg.long_accel = 0.9809899652745996;
    msg.alt_max_msl = 0.6567238291528746;
    msg.dive_fraction_max = 0.5765048600765648;
    msg.climb_fraction_max = 0.24059128878540836;
    msg.bank_max = 0.10255239336864652;
    msg.p_max = 0.5993821758689432;
    msg.pitch_min = 0.10905522555216896;
    msg.pitch_max = 0.6348011459372704;
    msg.q_max = 0.45493575625321137;
    msg.g_min = 0.7126788199991191;
    msg.g_max = 0.3585443660230476;
    msg.g_lat_max = 0.2565916540841645;
    msg.rpm_min = 0.9652897351902822;
    msg.rpm_max = 0.8987138076788438;
    msg.rpm_rate_max = 0.8961929921800389;

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
    msg.setTimeStamp(0.9890202472208341);
    msg.setSource(3481U);
    msg.setSourceEntity(199U);
    msg.setDestination(28155U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.09376639649346319);
    msg.setSource(35768U);
    msg.setSourceEntity(182U);
    msg.setDestination(65086U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.831707976673635);
    msg.setSource(45834U);
    msg.setSourceEntity(195U);
    msg.setDestination(35354U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.20270054813506433);
    msg.setSource(54595U);
    msg.setSourceEntity(22U);
    msg.setDestination(4506U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.35958297724260857;
    msg.lon = 0.20111405752342637;
    msg.height = 0.2473986737811691;
    msg.x = 0.22890200255388038;
    msg.y = 0.4632078942907756;
    msg.z = 0.3705980679503248;
    msg.phi = 0.24547895133559094;
    msg.theta = 0.9318302281601542;
    msg.psi = 0.23775555697935669;
    msg.u = 0.34697856500424584;
    msg.v = 0.8985714597976948;
    msg.w = 0.3263816147603551;
    msg.p = 0.4686244792599239;
    msg.q = 0.5160597320312008;
    msg.r = 0.2924612290757511;
    msg.svx = 0.765650525855745;
    msg.svy = 0.2492249051919806;
    msg.svz = 0.19247942457285871;

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
    msg.setTimeStamp(0.8776527529007568);
    msg.setSource(22083U);
    msg.setSourceEntity(49U);
    msg.setDestination(3491U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.461058998436515;
    msg.lon = 0.8378822945912511;
    msg.height = 0.006711508214990003;
    msg.x = 0.24389365515564376;
    msg.y = 0.7458581791562189;
    msg.z = 0.34576188621931625;
    msg.phi = 0.6461394404171891;
    msg.theta = 0.10577666572799971;
    msg.psi = 0.14239789585568485;
    msg.u = 0.9389773517076871;
    msg.v = 0.2723165206671977;
    msg.w = 0.5070358117060461;
    msg.p = 0.5552209281833456;
    msg.q = 0.021184695115889607;
    msg.r = 0.06072481149114872;
    msg.svx = 0.4549963816662024;
    msg.svy = 0.2474588206832785;
    msg.svz = 0.7573999729270307;

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
    msg.setTimeStamp(0.334949997617477);
    msg.setSource(2849U);
    msg.setSourceEntity(179U);
    msg.setDestination(29631U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.7950930940016299;
    msg.lon = 0.41667735519660554;
    msg.height = 0.3208591682384053;
    msg.x = 0.5882465980935828;
    msg.y = 0.6995987745612989;
    msg.z = 0.8209286370698746;
    msg.phi = 0.03474263846850256;
    msg.theta = 0.4243146736097597;
    msg.psi = 0.6515775196255911;
    msg.u = 0.07966027158892253;
    msg.v = 0.13054262416575102;
    msg.w = 0.6132557670920962;
    msg.p = 0.7172738780749102;
    msg.q = 0.6788064852419319;
    msg.r = 0.6469852289388934;
    msg.svx = 0.7441058395219291;
    msg.svy = 0.9129468893169431;
    msg.svz = 0.96607463671095;

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
    msg.setTimeStamp(0.16448424170882048);
    msg.setSource(18457U);
    msg.setSourceEntity(50U);
    msg.setDestination(6126U);
    msg.setDestinationEntity(29U);
    msg.op = 16U;
    msg.entities.assign("AYPBXSVRNEYDHWPOYWDPODTNFQSZMEPJXZWDFKHAVBWISGQGMXUMQDESWSZUFOSGHGVEOFIVSIXAJMYLKHIXN");

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
    msg.setTimeStamp(0.5821354257728492);
    msg.setSource(3523U);
    msg.setSourceEntity(58U);
    msg.setDestination(34497U);
    msg.setDestinationEntity(152U);
    msg.op = 25U;
    msg.entities.assign("QJEFKNNPCDXULPZYUMJGSRSKUOKLYMGSLOOHEKYCAOHTFSSABYARXRXPCVHUTJGJWTVFCVNTSZMKLEIYFXNEWDDGSUMKCNVFBPXMHPEFZVRFTAPBOLUUUIIIKZNQHBMMRGLSJHDJBDGWLXEAJZNYXQQRXPQTCTQWBDFQ");

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
    msg.setTimeStamp(0.2782427641533127);
    msg.setSource(50860U);
    msg.setSourceEntity(48U);
    msg.setDestination(39255U);
    msg.setDestinationEntity(86U);
    msg.op = 18U;
    msg.entities.assign("VYZBFOCONCUPXGNHPSRCAIZSKDHQHKGGCIHXXPXNUWL");

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
    msg.setTimeStamp(0.2062878279350785);
    msg.setSource(17012U);
    msg.setSourceEntity(123U);
    msg.setDestination(11208U);
    msg.setDestinationEntity(213U);
    msg.type = 195U;
    msg.speed = 24762U;
    const char tmp_msg_0[] = {-19, 30, 100, -76, -11, 34, -64, 3, 118, -109, 76, 100, -38, 36, -54, 6, -100, 52, -54, 118, -66, 26, 9, 29, -9, 70, -18, -19, 112, -123, -88, -53, 76, -47, 42, -116, -83, -93, 119, -62, -34, -106, 53, 96, -55, 93, -107, -39, -54, -104, -115, -127, 4, 22, -120, -69, 66, 51, -19, -99, -95, -81, 121, 1, -112, -74, 29, 89, -5, 113, 92, 50, 68, 42, -46, 24, 77, -20, -70, 95, 26, 57, 76, 37, 68, 67, -58, -38, -74, -110, -94, -109, -1, -103, 44, -27, 101, -122, -51, -18, -1, 23, 120, 100, 86, -66, -77, 59, 7, 107, 105, 38, 9, 99, 56, 51, 60, -80, -41, 59, -66, -5, 51, 100, 47, 44, 15, 36, -26, -100, -41, 73, -6, -62, -14, -45, 56, -58, 28, 50, -49, -117, 88, 85, -122, 20, -95, -22, 53, 77, 66, -71, 41, -70, -38, 110, 45, -79, 3, -96, -91, -82, 102, -28, 40, 114, -28, -116, -22, -11, 12, 93, -101, 87, 119, -58, -128, 10, -60, 29, -87, -104, 22, 104, 74, -57, -119, 101, 3, 23, 98, -68, 72, 1, -3, 48, 89, -96, 109, 32, -65, -7, -98, -60, -20, 16, -96, 121, -105, -18, -34, -8, -65, 124, -68, 25, -13, 87, 64, -97, 61, 56, 31, 30, -49, -18, 89, -67, -87, -50, -120, -106, 17, 104, 46, -88, 37, -63, -77, 102, 97, 31, -37, 15};
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
    msg.setTimeStamp(0.8146704498082032);
    msg.setSource(63703U);
    msg.setSourceEntity(57U);
    msg.setDestination(37912U);
    msg.setDestinationEntity(53U);
    msg.type = 71U;
    msg.speed = 6657U;
    const char tmp_msg_0[] = {109, 51, 39, -90, 62, -77, -68, -90, 108, 53, 122, 3, 90, -109, -69, -122, -53, 124, 34, -34, -48, 75, -101, -48, -112, 93, -29, 19, 61, 38, -120, 20, -103, -54, 64, 88, 106, 73, 88, -49, -43, 125, 59, 111, 100, -75, -7, 75, -78, -118, 108, -32, -85, 68, 37, -21, -117, 2, 117, -75, -43, -95, -66, 37, -109, 68, -36, -54, -34, -65, 37, -34, -95, -53, 96, 2, 35, 125, 31, -40, -50, -33, -20, -21, -27, -41, -71, -92, -93, -57, 64, 115, 97, -65, 25, 93, 19, -67, -41, -103, 69, -91, -28, 110, -59, 122, 76, -101, -42, -80, 107, 46, 114, 9, -55, -86, 124, -100, -103, 87, 43};
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
    msg.setTimeStamp(0.7068639774017359);
    msg.setSource(44802U);
    msg.setSourceEntity(174U);
    msg.setDestination(2705U);
    msg.setDestinationEntity(151U);
    msg.type = 94U;
    msg.speed = 61250U;
    const char tmp_msg_0[] = {118, -30, 66, -82, -12, -23, -122, -76, -41, 46, 94, 36, -104, 105, 24, 24, 111, 33, -107, -127, 19, -76, 89, -75, 21, 49, 113, 113, -73, -61, 112, 91, 122, -35, 103, -27, 24, -88, -50, 21, -70, -81, 99, 26, -84, 120, 47, -79, -34, 91, 93, 78, -26, -26, 14, 125, -107, 5, -128, 13, -53, 98, -112, -99, 50, -26, -4, 63, 72, -98, 61, 103, -74, 58, 2, 106, -66, 50, 83, 79, 44, -62, -128, 65, -106, -103, 48, -82, -74};
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
    msg.setTimeStamp(0.6693230763058369);
    msg.setSource(52378U);
    msg.setSourceEntity(100U);
    msg.setDestination(64515U);
    msg.setDestinationEntity(138U);
    msg.op = 180U;
    msg.tas2acc_pgain = 0.49892955777051184;
    msg.bank2p_pgain = 0.30228600349056634;

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
    msg.setTimeStamp(0.11881329227393422);
    msg.setSource(55702U);
    msg.setSourceEntity(181U);
    msg.setDestination(231U);
    msg.setDestinationEntity(197U);
    msg.op = 229U;
    msg.tas2acc_pgain = 0.31311307402670674;
    msg.bank2p_pgain = 0.40147249908091953;

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
    msg.setTimeStamp(0.6668841426776768);
    msg.setSource(45574U);
    msg.setSourceEntity(237U);
    msg.setDestination(7705U);
    msg.setDestinationEntity(130U);
    msg.op = 156U;
    msg.tas2acc_pgain = 0.5604941029371181;
    msg.bank2p_pgain = 0.8897395755109356;

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
    msg.setTimeStamp(0.6013151489349909);
    msg.setSource(6213U);
    msg.setSourceEntity(39U);
    msg.setDestination(53208U);
    msg.setDestinationEntity(216U);
    msg.available = 737967957U;
    msg.value = 94U;

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
    msg.setTimeStamp(0.6529107407465242);
    msg.setSource(24264U);
    msg.setSourceEntity(247U);
    msg.setDestination(42311U);
    msg.setDestinationEntity(22U);
    msg.available = 1588516767U;
    msg.value = 66U;

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
    msg.setTimeStamp(0.40174883888678936);
    msg.setSource(64660U);
    msg.setSourceEntity(44U);
    msg.setDestination(17289U);
    msg.setDestinationEntity(74U);
    msg.available = 2537572503U;
    msg.value = 93U;

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
    msg.setTimeStamp(0.8594643807718361);
    msg.setSource(13186U);
    msg.setSourceEntity(102U);
    msg.setDestination(31842U);
    msg.setDestinationEntity(216U);
    msg.op = 29U;
    msg.snapshot.assign("VJIAYWHGTOYBJMALZCAJVTJWKKFLPCIVLYJZBNXBCYGUKOHCTGMZCEROGOJZLMWPXNWUGPJIUEFRRYEIFMPHMBSIPJWSAIHHLSXRVUHVSGKQJ");
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.28189814334587016;
    tmp_msg_0.base_lon = 0.7946899946598195;
    tmp_msg_0.base_time = 0.9307910413969339;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 17977U;
    tmp_tmp_msg_0_0.priority = -69;
    tmp_tmp_msg_0_0.x = 20373;
    tmp_tmp_msg_0_0.y = -4364;
    tmp_tmp_msg_0_0.z = -2221;
    tmp_tmp_msg_0_0.t = -19810;
    IMC::RelativeHumidity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.22895081660469196;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9830330383987946);
    msg.setSource(18033U);
    msg.setSourceEntity(221U);
    msg.setDestination(22375U);
    msg.setDestinationEntity(44U);
    msg.op = 144U;
    msg.snapshot.assign("VBKBYXAKMODPPUDMGXPQPZVXEQOUISZIJHGWLHVWFGECDDNGYZEOSCPMI");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9747320233303463;
    tmp_msg_0.y = 0.9967312370756244;
    tmp_msg_0.z = 0.08266724150625449;
    tmp_msg_0.phi = 0.9195504871136955;
    tmp_msg_0.theta = 0.8143847957902921;
    tmp_msg_0.psi = 0.30966585636830946;
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
    msg.setTimeStamp(0.5575609619884271);
    msg.setSource(59373U);
    msg.setSourceEntity(141U);
    msg.setDestination(17284U);
    msg.setDestinationEntity(81U);
    msg.op = 126U;
    msg.snapshot.assign("GDDOMSSKIZYYROSWRIKHIGXZXNMMYVGPRVIECTUPLUKNWUVELHOEEVPQKIDXTMHUNQKPNBBYWCSCEBAASSMHWHGPVFFHFNEQJRBORVLODCJGKBYPFISYXJADOOGAHJK");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 116U;
    tmp_msg_0.list.assign("KRQKALVXJZUBSGOOLBOUTUXFLHSEJFGEXZSVDEGXQHPRQGWDFNLIIURUHWKXAIHIWEADCPNZSMDAHZOJETHTFCSSYPHCEPNKHZPRKYSPRQJWCTBRACJUTYUKMGTQQLTAEYXNFJSNRIBPQVBWKDDDOMZKCAUFOCGVFEBWQJFTV");
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
    msg.setTimeStamp(0.2909578153354997);
    msg.setSource(58460U);
    msg.setSourceEntity(230U);
    msg.setDestination(29903U);
    msg.setDestinationEntity(88U);
    msg.op = 126U;
    msg.name.assign("LZZDKUQAOMZXGQCJLBVWDZTBSPSXJWLA");

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
    msg.setTimeStamp(0.07717916643405376);
    msg.setSource(807U);
    msg.setSourceEntity(101U);
    msg.setDestination(63330U);
    msg.setDestinationEntity(245U);
    msg.op = 202U;
    msg.name.assign("VXWPJZAJWTR");

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
    msg.setTimeStamp(0.46288203900084435);
    msg.setSource(32742U);
    msg.setSourceEntity(217U);
    msg.setDestination(40269U);
    msg.setDestinationEntity(64U);
    msg.op = 160U;
    msg.name.assign("ENFVZSDQWTKIUWTZEVESJNPWFJGQDKQRTPFEZYAQOOSLRKCBBEMEDXDAGBIJBXSN");

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
    msg.setTimeStamp(0.8650925525364077);
    msg.setSource(28310U);
    msg.setSourceEntity(174U);
    msg.setDestination(11913U);
    msg.setDestinationEntity(44U);
    msg.type = 4U;
    msg.htime = 0.36946274588479133;
    msg.context.assign("BJVOINVACHTRLOHPGFINPOMDOPDEJALZGOWWCATBQATXEBIDNJYOESGHZFNOQQPVVKUIUDDWEUICBLUNFMGSAZITTYIUCTGHSZHGKLGBUJAJLMRPXLHVDYRBSKHERVMEQYPKXLAORVOPTZUEJKEARDMCEJLWMSBRWCXFQFNNRAUBSKWISCYRQJYFZZTO");
    msg.text.assign("EHTJUNHWYHFPEQJHMQRQRMLWTFBCGEMSGHEAUFUSRKOFJIRRNPLQDACEAQBOBYNYQDLLZJSCLXTVXXHRIBQESBVVVRKIXQBYUTBAUYZSJNGAPEWSNAWFZUAGHXCUMLHVWXCDYKMXOCGORGPYNITSOJOGDBDYAAFIXSMVTIWUMSNPCLMPGJRDPLMENZKNJRUDKGVKEQKZIZFLTYTWUJCALETZZTIOYFDPGOBFDIWC");

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
    msg.setTimeStamp(0.5947973410724808);
    msg.setSource(36854U);
    msg.setSourceEntity(161U);
    msg.setDestination(15443U);
    msg.setDestinationEntity(197U);
    msg.type = 220U;
    msg.htime = 0.8014140253468307;
    msg.context.assign("BDCPIEZOSJS");
    msg.text.assign("WIRQLSROHHXVFEETDAWUEZDQNPJUKECJGHXYNFRRVKZQMTYEIJRPCOHSFWBSTYGPHQLIIXQHABJGNYYXWBDRJWS");

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
    msg.setTimeStamp(0.275508673989189);
    msg.setSource(378U);
    msg.setSourceEntity(22U);
    msg.setDestination(30529U);
    msg.setDestinationEntity(225U);
    msg.type = 16U;
    msg.htime = 0.1399168582587954;
    msg.context.assign("DBTEWMFYUOBTZIXYFHCLVDQINRBBKPCUFCEDFLEQLWRAX");
    msg.text.assign("NLAITQBIGNJHHIUESRKJHXEMCHLUIEWMDZBNPYAFCJXGWUPDSUBDMTLWGBUQVTOHJOMTYANIWOXEZF");

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
    msg.setTimeStamp(0.9246525168812958);
    msg.setSource(44857U);
    msg.setSourceEntity(64U);
    msg.setDestination(26517U);
    msg.setDestinationEntity(195U);
    msg.command = 5U;
    msg.htime = 0.7994613244582767;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 139U;
    tmp_msg_0.htime = 0.26429421229457395;
    tmp_msg_0.context.assign("SYBGFVTPATCMWQRXJDDNEBDDQRMBBLRRHYQCENFPAHDWHNVQHZCIGMOLPNTKMNCTGXYCZZOKBZBGKXVXQPSFWFEZHKTYCMYDMLJOMLYWOPIOFUEZXUJASSDAFCAWADGIBUOIGLSIOZKNMFRYGNP");
    tmp_msg_0.text.assign("MYGICSTFFAZQMPFNZWJFYUGSVRTZPVMMJODSPLBLKCYYRTKAYTMWEKHQBVQOZWXUXFHKKCQMDITGZKXIDCGSXXPXJER");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6887578727149404);
    msg.setSource(7477U);
    msg.setSourceEntity(27U);
    msg.setDestination(8781U);
    msg.setDestinationEntity(161U);
    msg.command = 73U;
    msg.htime = 0.3744351554100882;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 53U;
    tmp_msg_0.htime = 0.27063336616039413;
    tmp_msg_0.context.assign("MWRVXXDZKMIIKHUEHJNYMMXYSZMOQARULKAEOGIHPBMNGMOWKJWLDPQTTFOSCHKPJSZVJXNHPAPJDQDUSAGVPNHUFBRJBNTYJEBRADTYTGNACBMNTLQVPGJQMDSYHZVCBWNZVKBCR");
    tmp_msg_0.text.assign("IMVXORODRIZEHCRYDNPVFZMXADEQCHPSYCLFPLUNZYCWDLFNFYLWKLZ");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.23433216366233944);
    msg.setSource(19448U);
    msg.setSourceEntity(238U);
    msg.setDestination(43630U);
    msg.setDestinationEntity(105U);
    msg.command = 80U;
    msg.htime = 0.7382481945550743;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 63U;
    tmp_msg_0.htime = 0.10017555252050658;
    tmp_msg_0.context.assign("TFTXWKMXUYMUZEJQLOGPXUXTGOPIJLBKQVPUBQFWFFUMEYGGVKHTTRRWROLMUGMCRQVMCDJVDVBSDXHVCEEMPTURSKTNSCNNBRWJHAHQVESZIZVKONZSNVIXYIHOWMXSPFZGQDGEIYKHHZCBEAWBEIFWLYUIYGRSDJ");
    tmp_msg_0.text.assign("UKYCLELWEQOJRNYZAGADCOUOQTHTLCDQJVSFBYPICHFFSWCEMREILYONDIFRGAFPJEVMBGDNWEQCUDKKQUGDTOKPINHQJJPYZQKPOSJVRXYYSEXRODXIDSMB");
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
    msg.setTimeStamp(0.9845920669772751);
    msg.setSource(14856U);
    msg.setSourceEntity(62U);
    msg.setDestination(24065U);
    msg.setDestinationEntity(0U);
    msg.op = 70U;
    msg.file.assign("RKLJIMPPAGGNNZYPXEEVQBMGWSEQGOAVMOGPUAVTDOVHPQVSHUMMRTZCZCWZTEUWCBDZOUIQEJRUOCJFXVBPYSJNSGCJTAICYDAHNSLFLNGISTAXHTMRKEQLKZVKTFEGDJKYLKFWBJQYIFYBRWTYWJONCZKAVCBHGUSBUXWLNOOUPLRRMVDMRDANOXQHBJFAUQCQLLNKZUTGYXHPFEIQISIDBRXCLFBOXPHWRZFDDTVAPKJHYSWIMSX");

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
    msg.setTimeStamp(0.5403429589552231);
    msg.setSource(28181U);
    msg.setSourceEntity(224U);
    msg.setDestination(58115U);
    msg.setDestinationEntity(63U);
    msg.op = 68U;
    msg.file.assign("OWETMCIAGFNUHYNKAXYOHGMBYHXIIQULWVPZNEDMCJHYKPDGIBSLVTLJTWJTFOVMFKERRGMAUMGRLWLBZXHBWCCJ");

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
    msg.setTimeStamp(0.9233626712226697);
    msg.setSource(44408U);
    msg.setSourceEntity(22U);
    msg.setDestination(47220U);
    msg.setDestinationEntity(96U);
    msg.op = 34U;
    msg.file.assign("BQOJJMQTJNVSZXTAYKNDYWDOKKERLOCKOXOGTXDQSTLRAXBBHSCFGJOLWVOR");

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
    msg.setTimeStamp(0.28431124902428573);
    msg.setSource(15886U);
    msg.setSourceEntity(224U);
    msg.setDestination(38858U);
    msg.setDestinationEntity(9U);
    msg.op = 153U;
    msg.clock = 0.439734092930278;
    msg.tz = 35;

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
    msg.setTimeStamp(0.7108828502187846);
    msg.setSource(55995U);
    msg.setSourceEntity(110U);
    msg.setDestination(7354U);
    msg.setDestinationEntity(248U);
    msg.op = 111U;
    msg.clock = 0.3379435208436009;
    msg.tz = -68;

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
    msg.setTimeStamp(0.5306864912720333);
    msg.setSource(846U);
    msg.setSourceEntity(227U);
    msg.setDestination(23547U);
    msg.setDestinationEntity(137U);
    msg.op = 24U;
    msg.clock = 0.35957827826748245;
    msg.tz = 92;

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
    msg.setTimeStamp(0.8627384792162539);
    msg.setSource(7001U);
    msg.setSourceEntity(29U);
    msg.setDestination(10591U);
    msg.setDestinationEntity(221U);
    msg.conductivity = 0.15332526649939493;
    msg.temperature = 0.4133639455595116;
    msg.depth = 0.6015464706906544;

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
    msg.setTimeStamp(0.49356486370909436);
    msg.setSource(60351U);
    msg.setSourceEntity(237U);
    msg.setDestination(15945U);
    msg.setDestinationEntity(112U);
    msg.conductivity = 0.42779569449059096;
    msg.temperature = 0.2009510163303453;
    msg.depth = 0.3065386923967398;

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
    msg.setTimeStamp(0.3006899723372921);
    msg.setSource(49230U);
    msg.setSourceEntity(55U);
    msg.setDestination(57981U);
    msg.setDestinationEntity(220U);
    msg.conductivity = 0.4876832258337688;
    msg.temperature = 0.5326260432194185;
    msg.depth = 0.5375202276205632;

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
    msg.setTimeStamp(0.7277056049164262);
    msg.setSource(52392U);
    msg.setSourceEntity(121U);
    msg.setDestination(29770U);
    msg.setDestinationEntity(250U);
    msg.altitude = 0.9002411032813331;
    msg.roll = 9114U;
    msg.pitch = 44U;
    msg.yaw = 35643U;
    msg.speed = -15048;

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
    msg.setTimeStamp(0.6715253261620114);
    msg.setSource(12169U);
    msg.setSourceEntity(173U);
    msg.setDestination(42303U);
    msg.setDestinationEntity(183U);
    msg.altitude = 0.9046174032374905;
    msg.roll = 37866U;
    msg.pitch = 16095U;
    msg.yaw = 1376U;
    msg.speed = 10666;

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
    msg.setTimeStamp(0.8743592707139424);
    msg.setSource(35681U);
    msg.setSourceEntity(49U);
    msg.setDestination(26547U);
    msg.setDestinationEntity(100U);
    msg.altitude = 0.15105412971673327;
    msg.roll = 47743U;
    msg.pitch = 50695U;
    msg.yaw = 12610U;
    msg.speed = 31196;

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
    msg.setTimeStamp(0.8923167689267656);
    msg.setSource(57690U);
    msg.setSourceEntity(13U);
    msg.setDestination(33744U);
    msg.setDestinationEntity(149U);
    msg.altitude = 0.40619761935114107;
    msg.width = 0.7385294243968802;
    msg.length = 0.22239017009466766;
    msg.bearing = 0.49391101748711796;
    msg.pxl = -30269;
    msg.encoding = 61U;
    const char tmp_msg_0[] = {-90, -80, 103, -68, -115, -59, 25, 83, -29, -89, 95, 50, -9, -78, -62, -102, 25, 114, 92, -4, 116, -108, 7, -6, -33, 33, -98, 91, -39, -73, 10, 63, -56, 52, -38, 125, 85, -59, 47, 104, -77, -82, 94, -84, -71, -116, 29, -43, 92, 3, -49, -35, -99, 45, -122, -51, 80, 108, -18, -29, -111, -113, 12, -35, 63, -53, -57, -44, 72, -39, 78, 69, -70, 72, -53, -9, 104, 22, 118, -81, 71, 79, 30, -62, -64, 47, -4, -116, -86, 115, 80, 13, 43, -99, 49, 107, -115, 8, 95, 112, 35, 87, -42, -106, 56, 95, 58, 2, -119, -56, -2, 27, 4, 37, -60, -44, -64, 114, -29};
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
    msg.setTimeStamp(0.1165548928224256);
    msg.setSource(2981U);
    msg.setSourceEntity(61U);
    msg.setDestination(16335U);
    msg.setDestinationEntity(86U);
    msg.altitude = 0.9714662967687431;
    msg.width = 0.5120473623504971;
    msg.length = 0.29976941823278347;
    msg.bearing = 0.20843725820655523;
    msg.pxl = -24986;
    msg.encoding = 110U;
    const char tmp_msg_0[] = {41, -19, -42, -83, -38, -9, 104, 44, -86, 53, 64, -21, -75, -104};
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
    msg.setTimeStamp(0.17487671790332937);
    msg.setSource(57156U);
    msg.setSourceEntity(4U);
    msg.setDestination(15355U);
    msg.setDestinationEntity(93U);
    msg.altitude = 0.8692514104439567;
    msg.width = 0.18128431381448484;
    msg.length = 0.7510981108132153;
    msg.bearing = 0.6417527094112122;
    msg.pxl = 3676;
    msg.encoding = 222U;
    const char tmp_msg_0[] = {86, 107, 118, 29, -101, 96, -32, -114, -72, -15, 26, -65, 28, 8, 69, 14, -19, 103, -1, -51, 107, -53, -79, -109, -115, -83, 91, -81, 116, -24, -33, 97, 83, 92, 67, 12, -23, 2, -29, -58, 66, -68, -78, -22, 53, -124, 17, -18, -47, 86, -110, -68, 9, 57, 105, 71, -111, -38, 62, 102, -37, -8, -97, 40, 86, -11, 103, -83, -80, 54, 34, 119, 96, -34, 21, -81, 59, 41, -103, -35, 56, 59, -72, 78, -75, -124, 120, -118, 126, -127, -125, 85, 57, -120, 48, 119, -27, 100, 53, -61, 29, -71, -96, -8};
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
    msg.setTimeStamp(0.49645666911525543);
    msg.setSource(37947U);
    msg.setSourceEntity(10U);
    msg.setDestination(47713U);
    msg.setDestinationEntity(242U);
    msg.text.assign("NYTQDXWIILNDTFIMWDZRCGXWE");
    msg.type = 9U;

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
    msg.setTimeStamp(0.10892302159720824);
    msg.setSource(989U);
    msg.setSourceEntity(170U);
    msg.setDestination(23573U);
    msg.setDestinationEntity(214U);
    msg.text.assign("CSTBYJYEUPGVDOHIBZZSPMVBUWOMEQKLDALMTFAHMFZWKVLYNHERFVONFJGVRQFGGTTFULISAAHSWAPWRLZQFAGYDSFRMWDHQJYXSIPHOOYELLKKHCOUQKJVCDKEETPGRPGPURJEJTITANYXZYNBSIQCMJRDXJMJCUCXKYIIANEUCWKZEXPBTVLCXLJBNDZTRZWXBWXHKRSDOMOZIGSGVDQCYSTCBUFZOBNBKVVPMIAI");
    msg.type = 87U;

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
    msg.setTimeStamp(0.20623033733579332);
    msg.setSource(39247U);
    msg.setSourceEntity(151U);
    msg.setDestination(19648U);
    msg.setDestinationEntity(87U);
    msg.text.assign("TJZAFHCNPIMDTXUEDYTPIJYEZPMMJYVUEUMTWJCICNWVMDRCWGHKXYWDBDQOFBGBGZPSVUFXHVZMYHNJKNNCXOAOXQT");
    msg.type = 84U;

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
    msg.setTimeStamp(0.33675026114195084);
    msg.setSource(65112U);
    msg.setSourceEntity(24U);
    msg.setDestination(48042U);
    msg.setDestinationEntity(7U);
    msg.parameter = 193U;
    msg.numsamples = 177U;
    msg.lat = 0.957157291792836;
    msg.lon = 0.07778677247862664;

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
    msg.setTimeStamp(0.7610062383960216);
    msg.setSource(44989U);
    msg.setSourceEntity(63U);
    msg.setDestination(40293U);
    msg.setDestinationEntity(88U);
    msg.parameter = 166U;
    msg.numsamples = 9U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 60103U;
    tmp_msg_0.avg = 0.7680106493337354;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5097416135565432;
    msg.lon = 0.6257522016735191;

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
    msg.setTimeStamp(0.5830064280637196);
    msg.setSource(54278U);
    msg.setSourceEntity(27U);
    msg.setDestination(28321U);
    msg.setDestinationEntity(58U);
    msg.parameter = 98U;
    msg.numsamples = 99U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 39014U;
    tmp_msg_0.avg = 0.35978381118816727;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.03594197921751985;
    msg.lon = 0.611424363333533;

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
    msg.setTimeStamp(0.49506282882208497);
    msg.setSource(55286U);
    msg.setSourceEntity(225U);
    msg.setDestination(36861U);
    msg.setDestinationEntity(163U);
    msg.depth = 5712U;
    msg.avg = 0.8581734901787355;

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
    msg.setTimeStamp(0.5552445083984162);
    msg.setSource(18280U);
    msg.setSourceEntity(129U);
    msg.setDestination(2859U);
    msg.setDestinationEntity(59U);
    msg.depth = 32942U;
    msg.avg = 0.7939007467887;

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
    msg.setTimeStamp(0.9308321872714737);
    msg.setSource(21410U);
    msg.setSourceEntity(181U);
    msg.setDestination(36172U);
    msg.setDestinationEntity(55U);
    msg.depth = 59765U;
    msg.avg = 0.19963269240093717;

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
    msg.setTimeStamp(0.5282265685565125);
    msg.setSource(35707U);
    msg.setSourceEntity(19U);
    msg.setDestination(63278U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.5821309772783201);
    msg.setSource(8059U);
    msg.setSourceEntity(172U);
    msg.setDestination(10159U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.9870434329455484);
    msg.setSource(25082U);
    msg.setSourceEntity(1U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.6393967981689342);
    msg.setSource(55789U);
    msg.setSourceEntity(186U);
    msg.setDestination(46245U);
    msg.setDestinationEntity(98U);
    msg.sys_name.assign("SXRIFOETJUPOBALAYKYFIRSDKTCDOFXAGBKGBOZFLJBRJMHMRPENXWBOLQAQATCSXBIKPYRITETAWCFWLFNGPHMYJJZZQJTQFURHTRNYNPCTCHOMFWQDLHWLSQMENVYVVXZVGZLMIYVGPXAEUNNNVHUJOVQEMDZFUWMJZKRQJLUIZZDUHPGIFPVLCGDQLOTKWDSGXYEITKBWDSYEGQHNMDKSSHVBWUEHUJRMPXECCKNXAVISGPUOIS");
    msg.sys_type = 126U;
    msg.owner = 35429U;
    msg.lat = 0.39036759535232235;
    msg.lon = 0.08784106638617473;
    msg.height = 0.6169223113657523;
    msg.services.assign("UTLZGVRYSJAROIXPMCFLVDJBXPQHVSFCHTYSYIYCNFUAYCBJTWEZNMPGLOBNLSKRORENJPHVJTRLRDKJRZINWWCMUOQIUHDSQNTFWAYA");

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
    msg.setTimeStamp(0.47329618731393763);
    msg.setSource(16924U);
    msg.setSourceEntity(28U);
    msg.setDestination(29028U);
    msg.setDestinationEntity(89U);
    msg.sys_name.assign("ZUXPRVPSPEAIIXVXYKHAOJOSJWEWYLOUXNRBBNIVRHCNZVMTLZKHLWUDIDIDGLUJUGGASKXTISNUKCQOZIFFNIHZOUQETPXFPREOQEHQKOGNNZOLRQTBCCQWNEZMYLCFSUTDWBFAYQAVJSCAWJBHCGBLOYVTLNSJQX");
    msg.sys_type = 76U;
    msg.owner = 22301U;
    msg.lat = 0.4265157779837142;
    msg.lon = 0.3374774567107568;
    msg.height = 0.927554221170608;
    msg.services.assign("WFMEMTWJTPNYYHFOILXWYYSUBUMZXMYCQUNMQTKZCKTLZHNXEYOSAPNWTA");

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
    msg.setTimeStamp(0.5092704174001925);
    msg.setSource(34281U);
    msg.setSourceEntity(38U);
    msg.setDestination(22630U);
    msg.setDestinationEntity(149U);
    msg.sys_name.assign("FRNSLAJGRYDUKVRVJGUHYPQATCBDSYKBHKSCLDLNEVRPJZJQWOMMKBJPZEIWXRPQGWSTEPDGMITMQXIYIXDJFEZE");
    msg.sys_type = 218U;
    msg.owner = 23161U;
    msg.lat = 0.3444943797713742;
    msg.lon = 0.9269991876972751;
    msg.height = 0.32168584435026315;
    msg.services.assign("RHSNVCDBEKDYRRWHBCUIPMFIBOAIXMEFKATNQEPTASJSKPWHWKYEEENIARUXLPVJWDZNBZGMSTHTBTJHRUEVNM");

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
    msg.setTimeStamp(0.8983642514029373);
    msg.setSource(8624U);
    msg.setSourceEntity(176U);
    msg.setDestination(43979U);
    msg.setDestinationEntity(140U);
    msg.service.assign("SRKGULIANGWVVCULGCRZPJINDUNVDLITHZYOVBKMUSEIFMCXCRZHMXTDSSIFNQAQMABSYEJTQDJKMUFOYISKQUSWJKKOFLNHKZLLAPEIDXZQNTFBJZUPHTLUDRBYRSPDZWHBJDPCGTNMIXLHGVEIJHABXTABOCEROFLTJGPMWKYPCLOAHOAUFEEDRYNBXVWPMYUCQNDTGQSYEVHWAZQFGQRVYMBXFTWGCESF");
    msg.service_type = 43U;

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
    msg.setTimeStamp(0.7577084261055752);
    msg.setSource(366U);
    msg.setSourceEntity(215U);
    msg.setDestination(60425U);
    msg.setDestinationEntity(70U);
    msg.service.assign("LWYUHUFKTTOWCLTKCHKQFEGNZCRODPMMTPL");
    msg.service_type = 235U;

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
    msg.setTimeStamp(0.8448156083374665);
    msg.setSource(37119U);
    msg.setSourceEntity(102U);
    msg.setDestination(56712U);
    msg.setDestinationEntity(30U);
    msg.service.assign("PLWLIBDORVUADQCIJTNJGYCDJRNQRGESHCBXWFBVVBUSHWSTLOZSHDQYLHMYRKYZVYFHRSOELAAPZOYJPMVVSBZNIWMBIXUNMHKEMIKXEPCFJUNDEAGQAYZNCPZETXIYJHGQLC");
    msg.service_type = 90U;

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
    msg.setTimeStamp(0.3293504577513563);
    msg.setSource(39843U);
    msg.setSourceEntity(197U);
    msg.setDestination(39160U);
    msg.setDestinationEntity(147U);
    msg.value = 0.8014016626085226;

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
    msg.setTimeStamp(0.39056183992697835);
    msg.setSource(37496U);
    msg.setSourceEntity(16U);
    msg.setDestination(13379U);
    msg.setDestinationEntity(69U);
    msg.value = 0.8777510969080189;

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
    msg.setTimeStamp(0.4899766508987402);
    msg.setSource(33230U);
    msg.setSourceEntity(58U);
    msg.setDestination(11758U);
    msg.setDestinationEntity(251U);
    msg.value = 0.7121262167853901;

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
    msg.setTimeStamp(0.5483570496751671);
    msg.setSource(4790U);
    msg.setSourceEntity(218U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(48U);
    msg.value = 0.21005088287257534;

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
    msg.setTimeStamp(0.8294922197150247);
    msg.setSource(38964U);
    msg.setSourceEntity(1U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7496259679181227;

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
    msg.setTimeStamp(0.11194808718350091);
    msg.setSource(701U);
    msg.setSourceEntity(39U);
    msg.setDestination(5315U);
    msg.setDestinationEntity(137U);
    msg.value = 0.3390508233329491;

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
    msg.setTimeStamp(0.39189630393256514);
    msg.setSource(47594U);
    msg.setSourceEntity(226U);
    msg.setDestination(57102U);
    msg.setDestinationEntity(32U);
    msg.value = 0.2049050358059321;

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
    msg.setTimeStamp(0.6174790251353245);
    msg.setSource(20604U);
    msg.setSourceEntity(154U);
    msg.setDestination(31640U);
    msg.setDestinationEntity(56U);
    msg.value = 0.6908931936621616;

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
    msg.setTimeStamp(0.15892813339153022);
    msg.setSource(40699U);
    msg.setSourceEntity(49U);
    msg.setDestination(58698U);
    msg.setDestinationEntity(41U);
    msg.value = 0.7105985998992342;

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
    msg.setTimeStamp(0.5554519333085525);
    msg.setSource(34651U);
    msg.setSourceEntity(199U);
    msg.setDestination(39152U);
    msg.setDestinationEntity(179U);
    msg.number.assign("HMCXZZFLGLXEEXJCCGAGLAKHECRTKSXDJREGJYKWMYVTVABHWPYYHDEZZASUOPNKFGMQWNPETZBLIYQYVNBZKLAMHOBIWMKPGISU");
    msg.timeout = 24772U;
    msg.contents.assign("NVSEOFQFCIDVJECIENQYVGBRZZMKGWNUJKBHQQXGLZONUTDQEOZTVFSYMJDAITRDASIJYZSRGYIDOHLLGBNYXOEHBWQQHUFOYDXBBCVPAUHGNPTHRZZBCKQEVMWTHOEUFJKWNAUKEASZHAXRLXNCTWHTPSHISTGJLWKXCMWKNAAZMNYSYUXDQIKJRWCBUURKCLEVESCMWDKLOUJXPFLPQPMAGBLXVJFGPPFJLVRGTOYWZRMIARBDYIXI");

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
    msg.setTimeStamp(0.4922986065318442);
    msg.setSource(44806U);
    msg.setSourceEntity(83U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(66U);
    msg.number.assign("OSQDGSKPDAPNEJVUFURMNIGKSYTLFRBWRZGBIINPMWNEEKRTXMSAEKDQIZLHBFPHYFCSMHMKKVYFXXTOUVRXXWPBCGRVTRTYERLFPJQMNDDWBULOEHDZOCLVRCXXFZBPGGAIZKTXCEVUVLNNYGWLHFCXQNYHIDBQCAQWISLOBUPJUATSFVJMAOBJFCRSGVHYSAADIJYOEGJXUHJWQHQCTATZKEKVQIUBJUDLOQPKYTAYDJZLOGMWNINHSCP");
    msg.timeout = 10771U;
    msg.contents.assign("HQOTGTUHCSIZCPJVBBNHMPFMIVXMLZAJVNYAHDGBKYAITCNDQYTNIOBIMBLSKQYVXZPZLMTHKLYCXSLOPFTMHVWTCRWBKBEY");

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
    msg.setTimeStamp(0.19765376038553983);
    msg.setSource(37036U);
    msg.setSourceEntity(48U);
    msg.setDestination(18863U);
    msg.setDestinationEntity(67U);
    msg.number.assign("LXIBIJTCLRZCMZMFDKEIASNBSHSFIJVDSUUNUKJDOVEMWRAYTHNHDYILVQKVMIXEYEZJKORFMAYPNXNVKEKLBZGMBUARGWZMVDJTMOKQZPKCWNFJVEUDMLOQCOVTQZYAPXEGNHPUZBYCHHAWPGOSFUAGUJYBHKTYNWJHQGFZEMVHXSTXDESQNRDDDPAWSTQPQFFHQWWVBTLXIGEQF");
    msg.timeout = 2618U;
    msg.contents.assign("JQZHDVHYBTECEEJLBPYZJSRMMSNAGPM");

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
    msg.setTimeStamp(0.2440263273243698);
    msg.setSource(61118U);
    msg.setSourceEntity(6U);
    msg.setDestination(15454U);
    msg.setDestinationEntity(223U);
    msg.seq = 2651159298U;
    msg.destination.assign("VHMOYGYKYWTEEHGCKHSDKRQCQEZDTGKJYAVNSOPPJGNQKCLLGLOSZAIHHFGQJWUSYOBEWJDLMGTVMLOITSKTACTZCFPATRDBXMJRONAQSHMTPFZCYZOSELDZDDYAUIUFWHIRCVRFFEHNYRWFSPPGVMTPIVC");
    msg.timeout = 35114U;
    const char tmp_msg_0[] = {-70, -2, 37, 119, 69, -94, 87, -55, 57, 11, -115, 33, -72, 79, 16, -41, 44, -86, 57, -14, 122, -100, -62, -101, 8, -38, 103, 73, -110, -25, -56, -120, 112, -91, -95, -98, 117, -51, -122, 23, -72, -24, -108, -53, 110, 3, -71, 7, -120, 53, -120, 59, -36, -42, -83, 26, -79, 108, 61, 26, -72, 69, -71, 91, 40, -26, 0, 69, -100, 11, 2, 53, -85, 119, -20, -55, 41, -1, -15, 71, 53, -14, -113, 64, 11, -56, 121, 59, -42, 2, 81, 71, -73, 44, -75, 99, 106};
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
    msg.setTimeStamp(0.2547609961653462);
    msg.setSource(15173U);
    msg.setSourceEntity(132U);
    msg.setDestination(45657U);
    msg.setDestinationEntity(145U);
    msg.seq = 421241416U;
    msg.destination.assign("AIFNHCIEGSRWLSLXBMWKWHMBB");
    msg.timeout = 45615U;
    const char tmp_msg_0[] = {78, 66, 40, -69, 107, -1, -63, 53, 9, 74, 104, 96, 84, -72, 73, 22, -126, 107, 4, -80, 88, -115, -7, 27, -64, 44, 18, 73, 74, 58, 89, -78, -81, 92, -93, -104, -89, 74, 62, -4, 9, -59, -90, -104, 64, -25, 85, 73, -47, -57, 65, 126, -33, 66, -83, 83, 55, 48, -53, 2, 43, -46, -40, -25, -86, -108, 122, 122, -91, -113, -2, 20, 98, -25, -23, -3, 115, -126, -54, -60, -29, -76, -28, -59, -33, -8, -32, 65, 76, 82, -58, 38, 29, -16, -94, -100, 113, -95, -123, 77, -6, -90, 42, 24, 10, -65, 42, -123, 35, -80, 59, 45, -89, -10, -27, 52, -26, 108, -50, 123, -35, -94, 94, -40, 44, -29, -30, 107, 64, -73, 103, 68, 6, -1, -6, -126, 124, -85, 35, -49, -60, -37, -15, -26, 78, 81, 76, 69, 60, 104, 109, -86, -65, -105, 10, 98, -93, 93, -72, -85, 11, -125, -11, 103, 31, 90, 125, -44, -110, -33, -38, -71, -51, -113, -63, 56, -42, 115, -123, 3, -62, -21, 42, -61, 3, -43, 38, -19, -62, -22, 89, 8, -75, -40, 76, 105, 71, 56, -104, 120, 115, -21, -112, 78, 20, -74, -124, 34, -66, -105, -82, -82, -41, -15, 42, -65, -81, 13};
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
    msg.setTimeStamp(0.6760193755464805);
    msg.setSource(30899U);
    msg.setSourceEntity(176U);
    msg.setDestination(6180U);
    msg.setDestinationEntity(139U);
    msg.seq = 2392414986U;
    msg.destination.assign("OSYIDOYDIF");
    msg.timeout = 2661U;
    const char tmp_msg_0[] = {122, 44, 11, -90, 41, 109, 96, -19, 51, -12, 103, -33, -34, -44, 21, -55, 17, -110, 80, -61, 13, -79, -92, -2, -37, -55, -77, 11, -6, 77, 60, -79, 1, 33, 61, -125, 35, 108, -36, -73, 97, 48, 39, 14, 50, -17, 86, 35, 107, 81, 98, -69, 0, 112, 64, -127, 29, -28, 97, -49, 3, 39, -25, -49, -55, -56, 32, -121, -61, 98, 103, -122, -48, 55, 103, -109, -37, -68, -13, 29, 89, 117, 33, -18, 121, -37, 13, -107, 54, 56, -55, -6, -52, 111, 122, -11, 71, -90, 20, 107, 16, 38, 63, -92, -56, 109, -77, 34, 38, 57, -98, -47, 107, -41};
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
    msg.setTimeStamp(0.8334186542439257);
    msg.setSource(19053U);
    msg.setSourceEntity(4U);
    msg.setDestination(62706U);
    msg.setDestinationEntity(179U);
    msg.source.assign("NDOSOQIEHKMSUBVGRRUHFFHLXMFQCWNTJBQOTYEJKVGEUPSILORATMBRZIZYJVMOILNHALHEQZZXYOYHIGZBLPQVZPUFGIAXRBBVWFYKZANVUENKSGWKPXQFENRPDOHCCLSCTFEDYYTLUTAGVTNFUVFBQKKOJCGCCDDMPIAMZRGDYLRAMXPHCNPEJSMJEMEL");
    const char tmp_msg_0[] = {-43, -87, 74, -6, -30, -18, -105, 100, -98, -115, 92, -100, 103, 103, 66, -70, -128, -31, -44, 90, 100, 117, -4, -121, -128, 108, 110, -2, 69, 69, -74, 97, 93, 93, -106, -99, 13, -12, -62};
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
    msg.setTimeStamp(0.5321126740125685);
    msg.setSource(52132U);
    msg.setSourceEntity(141U);
    msg.setDestination(47027U);
    msg.setDestinationEntity(141U);
    msg.source.assign("HONICXBDXRSGKKEICPLFWFKHLNNRPKUOTNVLVURTAEJXLVQTXWMDPMOFIJRSHOYZXQIUKDQFVGCOZMFUUQAQWRPUCYBXDHLQGWRWEJMKNOQZIMRNC");
    const char tmp_msg_0[] = {34, -39, 72, 58, 65, 66, -60, -93, -111, 73, -64, 43, 5, 25, 51, 97, 34, -86, 24, -22, 53, 109, -120, 54, -117, 124, 59, -111, -8, -88, 40, 53, 52, 101, -14, 41, -5, -123, 64, -69, 21, 117, -93, -122, 89, -55, 63, -12, 80, 111, -34, -105, -46, -118, -94, -106, 24, -53, -2, 88, 89, -30, -1, 61, 75, 8, -13, -72, -87, -67, 69, 114, -6, -48, -127, -92, -115, 77, 77, 33, 97, -28, 98, -115, -57, -110, -37, -10, 90, -48, -111, -10, 54, 89, 105, 33, 44, -51, 59, -122, 6, 52, -122, -5, -34, -61, -50, 82, -60, -20, -81, -10, -61, -114, -52, -57, 100, 91, 27, 85, -74, 44, 119, 69, 76, 111, 46, -77, -99, 85, -103, -58, 14, 102, 107, 9, -42, -100, -111, -64, -94, 107, 18, -29, 42, -104, 25, -109, -71, -73, -91, -58, 91, -60, 82, 105, 98, -123, 107, -59, -48, 110, 109, 69, 33, 6, 16, 55, 122, -118, 37, -91, 15, -4, -1, -128, -37, 17, -16, 13, 34, -41, 8, -47, 3, -62, -80, 57, 67, -17, -47, -65, -42, 126, -84, -54, 85, 118, 46, 5, 71, 121, 88};
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
    msg.setTimeStamp(0.6182752323817313);
    msg.setSource(22590U);
    msg.setSourceEntity(56U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(12U);
    msg.source.assign("PCZRWTQYETCCADQFWOYQBVFXYLLKLZLHVZBRJDFDILGPDYHTJWMDTVXVGMNKNCUBQNMTISNPZKRIMSCDUINKQXMYEKWXJNIZJBMUGTVHJEXZWBITUTHHJCUOEGAFJQCZQWHHAAUPWAYKSQGRMFSAFDLSKOAOEHFOPIPZZ");
    const char tmp_msg_0[] = {43, -102, 10, 101, 102, -8, -1, 2, 107, -17, 20, -88, 19, -108, -14, -66, -50, 126, -128, 102, 8, -35, 7, -91, 44, -83, 34, 29, 48, 57, 46, -92, -22, -7, 121, 61, 19, -107, -122, 111, -103, -42, 94, 62, 51, -92, 25, -6, 81, -71, 84, -125, -8, 3, -28, 9, 68, 7, 22, -125, -119, 66, 43, 12, 111, -109, -48, 46, 106, 107, -1, -1, 109, 45, -51, -2, -7, 88, 15, -87, -120, -89, 29, -71, -22, 3, -67, -22, -45, 108, 21, 37, 59, 82, 98, -25, -90, -33, -64, -97, -50, -87, -118, 99, 35, 112, -119, -83, -110, -76, -123, 74, -93, 41, -121, 64, 60, -86, 104, -94, -63, -121, -90, 72, 67, 76, -87, -50, -98, 76, 71, 85, -29, -77, 66, -18, -19, -38, 18, 47, 59, -67, -112, 5, 84, -22, -37, -101, -12, 75, 39, -28, 31, -102, -58, 108, 10, 77, -6, -76, -76, 37, 14, 12, 69, 93, 37, 93, 87, 0, -99, -96, -31, 68, 9, -40, 23, -16, -32, -88, 0, 84, -45, -101, -37, 111, -21, -49, -1, -26, 68, -54, -72, 99, 68, 39, -66, -109, 29, -128, -7, 78, 70, 1, -125, 66, -102, 53};
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
    msg.setTimeStamp(0.6312216970070403);
    msg.setSource(45445U);
    msg.setSourceEntity(27U);
    msg.setDestination(42682U);
    msg.setDestinationEntity(250U);
    msg.seq = 3355346879U;
    msg.state = 97U;
    msg.error.assign("ALDAUZCLWODNFVTGUIJIDBZTOJXDJVYORBQIUKIEMKFZSHSANBXEHQHURELG");

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
    msg.setTimeStamp(0.17043593228137544);
    msg.setSource(43152U);
    msg.setSourceEntity(184U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(44U);
    msg.seq = 86952884U;
    msg.state = 113U;
    msg.error.assign("XEIYZKWFGDFSBQROAGLANBNFVJVZKKNGOERFXJWSKZZLTY");

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
    msg.setTimeStamp(0.46757510513328715);
    msg.setSource(65411U);
    msg.setSourceEntity(80U);
    msg.setDestination(59064U);
    msg.setDestinationEntity(223U);
    msg.seq = 2491397289U;
    msg.state = 106U;
    msg.error.assign("VVLDPEMZHVSWEFQTDLCETVU");

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
    msg.setTimeStamp(0.5890350126789763);
    msg.setSource(57450U);
    msg.setSourceEntity(19U);
    msg.setDestination(12444U);
    msg.setDestinationEntity(221U);
    msg.origin.assign("SJGPWZMLUDCNGONMUYBABKQSPDERAIKRTMEVWLBVKQIACDFDMTOYZEZFKNVUBJPPORGHXOFBYQGPXJUHWEXSHFXWMFOFKYCZXOBFOINTRJWSVTYNGMHVQTLRWVCJXEMCESTRRUVIKIPULNOKBBWJENCID");
    msg.text.assign("QEKGJYDHSRYNMIAGNFTOACXBIFBSSUKLQRUIAVFCRUVJMYCUDPXUORHGNXYMMZDGQBFEWHMLWJRVGSHWZDEZRHRMUPXVXYJOGTHZROHPJDBEJMXSKPRNZIIFHPXNQLPTWAWXWOKZZCGXEXPFDVQTPYKFDQANSSFAFJUHUIYBNTPL");

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
    msg.setTimeStamp(0.8539762237616774);
    msg.setSource(33569U);
    msg.setSourceEntity(57U);
    msg.setDestination(14857U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("ZCYIKNLGZILHCAMBNROXJNOOJVVKFATQTPYKSDZHBEJYKRAONTSDTNXXWSOHVSWEPQJMXDCT");
    msg.text.assign("YJNXQXVBSPNLFPHEOZULDDCWAXWXAGXKQFKLFJMXOTNVAPWYDWNNQYGPRQMSVEJJTKFZWAWCUJCTHJN");

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
    msg.setTimeStamp(0.1929842384834285);
    msg.setSource(30302U);
    msg.setSourceEntity(231U);
    msg.setDestination(18565U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("ZYILOGBJHZKPATXURVWMQAAWENJMHQDRLZCBDSJAPXWQZREQZZYYEXBKRCDPRULJKHOSMLGPRWTTQZSUEOEQSRURNKXHURBWIEENBHPESPMFTBISPUTTHPDSMYJDGFCVFNYLLOWXGAFQGFTOLIZKMGEBHVXOXOALFUJMJGMQW");
    msg.text.assign("JLQLXMQBEHBQXKIGXCWBAYITIXFQEZFRBIKHIWAYTZDGHHMCUIDSIKLQHQAHLCNCFPYSPZZTFYAKEOFHOSEVJRZIEUVTVNJVMJGANKNSMWJCYZULADYWVWOKDIOCRETWPWELTDMLZNZWUSBWJLMXKMIGDXAEDJTKSNAHCNGNAQDMCZGFSNXMDOOFBQTSKLUSUBPWH");

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
    msg.setTimeStamp(0.46926616318884695);
    msg.setSource(24523U);
    msg.setSourceEntity(15U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("OHAMIMWBWXYSEKEZEDMBANKWPNZRKYWTJKYNZCFCTGIBYBLDFVEKMOIOAEGURFQXVTPNZWGRSBHXIPSSLGQQUYSRMTBYNPTFGYLQBYEIWEBPUHNUHGOLDCJOOKYXAEVDERFFLFAOFODJUUYFUVASQGWARSQMAHNXSZJLXUNCQPSPGLIJNKFRCLINBDJLTMJXETRCDZJSHHUCKIK");
    msg.htime = 0.48121926040020735;
    msg.lat = 0.6907798406013741;
    msg.lon = 0.0235577001583972;
    const char tmp_msg_0[] = {6, -105, -19, -37, -102, 88, 103, 9, 19, 37, 64, -122, 88, -72, -125, 5, 99, -105, -79, 74, -128, -94, 107, -97, 123, -109, 106, 62, 60, 7, -85, 97, 37, -32, 125, 83, 118, 118, -96, -103, -64, -59, -112, -75, 74, -122, -64, -126, -35, 105, 19, 42, 73, -111, -98, -28, 21, 76, 38, 75, 34, 54, 49, 43, -39, 124};
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
    msg.setTimeStamp(0.8942144527795866);
    msg.setSource(41506U);
    msg.setSourceEntity(145U);
    msg.setDestination(10130U);
    msg.setDestinationEntity(145U);
    msg.origin.assign("XFVAEDGYRMUMYOEXDFFHOSKBVFQHUHQKCKGVMCKLLWOTCQYLEUCAMBSTTDNHPHIVYECMDKEZOBRENAUPRBFTJKUUWQMOCISZSSICWLLZZWXAFIXPRJBZITJPIEHSDGWRVJXHQ");
    msg.htime = 0.6833212484897994;
    msg.lat = 0.9294460208189609;
    msg.lon = 0.8875120979347919;
    const char tmp_msg_0[] = {13, -82, -31, -55, -38, -10, 37, -96, 5, 13, -19, 62, -99, 77, 122, 54, -87, 96, -2, 42, 34, -67, 86, 84, -120, 24, -120, 23, 75, 108, -89, -107, -71, -59, -28, -48, -95, -82, 47, -81, 97, 47, 64, -72, -76, -87, -30, 2, -32, -11, -20, 55, -75, 93, -21, 78, 76, -47, 53, -36, 17, -63, -80, 24, 108, -69, -91, 85, 83, 69, -7, -110, 106, 41, -122, 107, 52, 0, -62, 113, 8, -73, 85, -124, 22, 29, 31, 118, -33, -16, -102, -126, -2, 74, -57, -112, 102, 60, -82, 91, 24, -70, 90, 95, -95, -81, 88, 32, 115, 49, -126, 30, 77, -82, -41, 98, -66, -120, 22, 73, -7, 126, -42, 124, 71, 103, -74, -127};
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
    msg.setTimeStamp(0.9040874339907903);
    msg.setSource(38760U);
    msg.setSourceEntity(84U);
    msg.setDestination(56165U);
    msg.setDestinationEntity(244U);
    msg.origin.assign("HQFWAPXDACVCZRZJCJEEEGHHIMCLLCOORZGOISTRDNDLOTBWPUVLGIUIFYTHJTCOHGPGATSCBKHTGLBSTXUBGIEPKWFSJATKZKFQXTKRVUNVRRAXQCUWARXJHVUASUQYJDNSVZIJYQHPMQKSFXXDIIWQCB");
    msg.htime = 0.06296096209785562;
    msg.lat = 0.48444132481284996;
    msg.lon = 0.13563339362215132;
    const char tmp_msg_0[] = {78, 93, -93, -91, -108, -32, 58, -75, -109, -76, 68, 114, -79, -73, -73, -90, -91, 101, -13, 91, -8, -51, 0, 100, 98, -32, 35, -91, 107, -116, -24, -54, 33, 9, 101, -20, 95, -110, -11, 41, 67, -18, 18, -47, -20, -2, 89, 122, 3, -74, -37, -32, -33, 70, 70, -11, -9, -27, -30, -27, 72, -52, 75, -54, -21, 64, -24, 21, -48, 110, -112, 82, -72, 69, -46, -88, -70, 29, -31, 102, 54, -119, -125, 18, 126, 69, 71, 124, 109, -101, 25, 52, 42, -3, 106, 29, -124, 97, -102, -65, 121, -22, 114, -87, 10, 15, 88, -24, -55, 96, -110, 20};
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
    msg.setTimeStamp(0.31484249194454783);
    msg.setSource(20978U);
    msg.setSourceEntity(212U);
    msg.setDestination(53473U);
    msg.setDestinationEntity(131U);
    msg.req_id = 3636U;
    msg.ttl = 28023U;
    msg.destination.assign("CRZLLDEDUDYVBCGUERDMYVJMRZYUHTPSSSHTOKSUQFAOWFNYHZBDHGVOSVSEHMOAKZJVMYPKGLRTIZHQRFEXTCLPJLPNXGWNNFMZEWFQJTYVIJZKFIUPTEKMPAYNYQTTSKDGIWGGDOQWKFJWBHWVOCGCBDRXKLXALEFASMQOQIKPQ");
    const char tmp_msg_0[] = {-40, 121, 93, 117, 117, -104, -49, -43, -78, -107, -78, -128, -31, 112, -73, -8, -32, -96, -57, -72, -101, 97, -117, 57, -29, -8, -26, 12, 50, -102, 52, -119, 43, 85, 66, 16, 31, -109, 14, 20, -22, 53, 20, 42, 19, 105, 31, -40, 31, 45, 125, 23, 16, 55, 104, -28, 17, -81, 41, 68, 118, -4, -82, 69, 5, 32, -50, -81, 18, -18, 4, 110, -80, -128, -20, 62, -37, 63, -48, -120, -99, 113, -48, 101, 11, -78, -38, 90, 6, 81, 117, 102, 59, 19, -27, 70, 120, -24, -18, -124, 45, 30, 75, 95, -32, -68, -121, 37, 103, 71, -67, 25, 111, -15, -43, -7, 27, -74, -124, 117, 10, -113, 107, -120, 3, -42, 119};
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
    msg.setTimeStamp(0.27425499340116755);
    msg.setSource(56514U);
    msg.setSourceEntity(130U);
    msg.setDestination(33619U);
    msg.setDestinationEntity(241U);
    msg.req_id = 71U;
    msg.ttl = 59916U;
    msg.destination.assign("EAWKMENWEQUTVTOTQQPYLGEQNQAGWASYBNENHFOQUGGKHJCZHCZZIQVGDX");
    const char tmp_msg_0[] = {13, -89, 110, 118, 86, -96, -111, 35, 54, -9, -96, 71, 27, -105, 39, -57, -17, 100, 32, 34, -66, -36, -77, -13, -117};
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
    msg.setTimeStamp(0.8665780694154447);
    msg.setSource(60832U);
    msg.setSourceEntity(67U);
    msg.setDestination(16350U);
    msg.setDestinationEntity(173U);
    msg.req_id = 54640U;
    msg.ttl = 59888U;
    msg.destination.assign("ZVQXZJXYCDWS");
    const char tmp_msg_0[] = {-92, -125, -13, -73, -116, 105, 54, 29, -101, 63, -26, 11, -42, -42, 78, -53, -36, -126, -22, 48, 61, -42, -45, -20, -10, -67, 36, 107, -95, -27, -119, -18, -29, 50, 70, 125, -56, -116, 45, -83, 45, 91, 41, -37, -67, -3, 13, 4, 14, -73, 119, -48, -8, -8, 51, -31, 113, -63, 59, -60, -12, -8, 66, -4, 79, 19, 24, -120, 98, 124, -49, 73, -28, 105, 96, 27, -14, -119, 12, 3, 110, 103, -125, 22, 3, -39, 13, 115, -124, -93, 26, 30, -20, 68, -72, -14, 92, -49, -108, 61, -28, 126, -109, -51, -37, -88, -99, 50, 92, 17, -43, 39, 44, -10, 22, -82, 62, 102, -117, 94, -32, -85, 38, 57, -32, -71, 6, 57, 39, -74, -68, 47, 32, -14, 124, 3, -11, -113, 123, -60, 81, 104, 108, 30, -38, 11, -59, 110, -33, 7, 55, -99, 19, -48, 88, -120, 28, -33, -67, -6, 22, -13, -96, 35, -111, -4, 107, -98, 30, -13, 69, -111, 110, 14, -56, -19, -102, -76, 66, -54, -57, 86, -3, -40, 70, -15, 99, -92, -39, 38, -106, -6, -115, 3, 81, -31, 94, -95, -11, -85, -25, 67, -2, -57, 80, 103, 51, -107, -13, 97, 46, -36, -61, 44, 16, -41, 124, 118, 98, 84, -43, 62, 75, -123, 95, -69, 113, -22, 106, -121, 54};
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
    msg.setTimeStamp(0.8485571234128447);
    msg.setSource(51022U);
    msg.setSourceEntity(115U);
    msg.setDestination(22296U);
    msg.setDestinationEntity(162U);
    msg.req_id = 28986U;
    msg.status = 209U;
    msg.text.assign("BYNRMMOWKLLAVRUXRDPQJUXNBCUMJTZFTPDZJCNANMNBWUQBEBJOZRXAVWHZGTVXIGFNVMQHPSLSOFHQAFIEYAKECPKSQNTZVGKFIUWLTWDCWXNTYBEISGHYPBZDMHIXMFQQMJVFLPIWYRZOEYFIQSENGRRVOHQYSKEDVJXIRGGOEHQNFOAKGLHSVODAAIGPKKCJJUFGXHLCKOXYDKCPCAPDDMSHRUZPYTJSBEISTXCLUJ");

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
    msg.setTimeStamp(0.032561031315531785);
    msg.setSource(22229U);
    msg.setSourceEntity(17U);
    msg.setDestination(31246U);
    msg.setDestinationEntity(30U);
    msg.req_id = 28539U;
    msg.status = 2U;
    msg.text.assign("RMQCTHSZNGQJMCUBXPPUBOCGZQFGKLQRSOWIXTKDIKRBOPTKIBXJJVDLTUJZORZLVLTMYOMCOIGPSPWSSEZTRMEAKIFLPAZGJCBUGROUHNTFEXPQTUAWCFWYNFQBDGFYJZDXAGJVKVLHBDWJNYLFXLYVMUNVEEIANIMWJTXWRQWYUOPKDUDRSHCFHVSYQSKVBAEKQRF");

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
    msg.setTimeStamp(0.8186841192398209);
    msg.setSource(44456U);
    msg.setSourceEntity(174U);
    msg.setDestination(49217U);
    msg.setDestinationEntity(81U);
    msg.req_id = 7097U;
    msg.status = 153U;
    msg.text.assign("KATZUNMHDDCUHITUCFRKIUCHDIHCRRKGXRDAEPUDOQNOYQNKMYMVLCLFRIVEPWRNSHWLZHHNQFUXJKYWFMHXHBKEPABRSBMJELAAJZLOVLZASRBGTQU");

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
    msg.setTimeStamp(0.1483118913383753);
    msg.setSource(49356U);
    msg.setSourceEntity(4U);
    msg.setDestination(58046U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("IDOZUHJDMCGXWAAIVVNXQGHTYHMWC");
    msg.links = 2026198901U;

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
    msg.setTimeStamp(0.18069687241463095);
    msg.setSource(61368U);
    msg.setSourceEntity(169U);
    msg.setDestination(54529U);
    msg.setDestinationEntity(147U);
    msg.group_name.assign("KYFUJOEINEQGPOYSUQYCRMPXWJFCIMBOFEQNBYXDKCOPSTXLCMECOKSLSBVGFTEJZHBRNQKOVKAXHKAWDZCGFTUIEVJRWXHDLTVVTWQBPFP");
    msg.links = 836930714U;

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
    msg.setTimeStamp(0.34687670202690424);
    msg.setSource(28296U);
    msg.setSourceEntity(96U);
    msg.setDestination(17700U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("HIABHDCIVBEWEIVGEFXDGCBSMZWWJSKXGPNHVJLUGYAKYYKUZFALUUUGJRQPREXHKFALPQIXDEWCOIGMFHZTXRZOEEAWQIDIABOTTQOMOLMNWYQKLMYMRFWQVUNMGGXJIDPGABVNYXMADTVTSNRV");
    msg.links = 4286764824U;

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
    msg.setTimeStamp(0.7321028738267693);
    msg.setSource(49003U);
    msg.setSourceEntity(222U);
    msg.setDestination(49877U);
    msg.setDestinationEntity(35U);
    msg.groupname.assign("AKAKNCUSAXFMJQHBKPONUEIUPGTQHJFTJGKBFHRQSWCPDXVRANNXIXJHXGEZRALIJLDQXYTSYYSZHSOTAYSFMDVMBODYJRWXURZBERIBBJLTVYMVXKQCKEMRCYVXQNHOQDZPGBDBPJELGLLITMVEWLPHZEINFPWNIJKRUWSMQFRWDTKCRWHCOKVNMGPOAEZACMHTIOSIGFPIOFTUFSUDEOHQZCBZAJ");
    msg.action = 23U;
    msg.grouplist.assign("VUSKUNKDHSGGPSGPIIWXSIJZKMYNKVRBQYELTZAEDIRJMMECYYNSVILVVOJNURMSBUQYLSNGZZFWNHIIHEEJXWHQZMWPXNDGBQARRALCOPYCCSHPPBOELPTMPLXGSVHFHEEYQZBABALCI");

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
    msg.setTimeStamp(0.7649905339210801);
    msg.setSource(26867U);
    msg.setSourceEntity(62U);
    msg.setDestination(37962U);
    msg.setDestinationEntity(109U);
    msg.groupname.assign("PNMMPTRFVOCYDRJXFLKMYDZIKUBWJUIVIIFHLOFQWGWXYEEHVHWGQNMUNTSJGUEJSVSJNKLRUYTLYKGHDZDABAFREWVMHBPGRWPPCHBSEWZHYMODMWLCEBGSETBIXAQZDINSXBHTEIMSOEGNAQIAPKQLZFKPTJ");
    msg.action = 62U;
    msg.grouplist.assign("KARBBRDCOFUCRLCVWBGMJMVTZOQPREHKGDNVTADPYTDXMUBMVPQZVRURFUJHQGZKNNXWEYOMGPEBODFLPXWXGWNMUWCVYAOULDNLTBTMCVHNITVUYDZASKLSSOEWMKTHWPKAQIIIRQOFERJJPAUINBQQYSUEAGOSHIVCHZULDJFALZFNCSSQWLVYXNXCJWIDSEKPXGXJOJCLDKFYTNIGBZMYYTXABOXRWEGAMFHYIFSCHZZJQJTIH");

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
    msg.setTimeStamp(0.04057034835850659);
    msg.setSource(10331U);
    msg.setSourceEntity(244U);
    msg.setDestination(21343U);
    msg.setDestinationEntity(196U);
    msg.groupname.assign("BNBEZGVMUCJEPUZVBXQIFXKYUFCOEJTENTUXPPGXQHLHZIDYDALRVQZWTAISSQYKHJCOTCCOTXBKIHPHUSILSAA");
    msg.action = 1U;
    msg.grouplist.assign("AXIMYMOMYOXAVKFBAKWGSXWNABQOFUOGHLNINASFRAFEYJEWCNHHYIVSGTGXXJNRTZHKOXOEQTZEUKPMRNUBJIHGUZMSTXZJFJKPDQKDLIKJUKEJBVCQRDFHHZRCUQFDWYLNBLHCPUGTABBVCRKDYRCNRWWQTTTPQASVIEYSHSDZNEJMLHSYVTMAIQWLYDUDMWCOJL");

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
    msg.setTimeStamp(0.19071405243842432);
    msg.setSource(9857U);
    msg.setSourceEntity(100U);
    msg.setDestination(44143U);
    msg.setDestinationEntity(127U);
    msg.value = 0.7097830125882391;
    msg.sys_src = 20840U;

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
    msg.setTimeStamp(0.35569151781544983);
    msg.setSource(27479U);
    msg.setSourceEntity(168U);
    msg.setDestination(46871U);
    msg.setDestinationEntity(219U);
    msg.value = 0.022099236658311705;
    msg.sys_src = 29387U;

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
    msg.setTimeStamp(0.3810319019510069);
    msg.setSource(61479U);
    msg.setSourceEntity(2U);
    msg.setDestination(9156U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7169199385024414;
    msg.sys_src = 62326U;

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
    msg.setTimeStamp(0.9131850271394208);
    msg.setSource(22754U);
    msg.setSourceEntity(249U);
    msg.setDestination(23918U);
    msg.setDestinationEntity(118U);
    msg.value = 0.6889429587848587;
    msg.units = 172U;

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
    msg.setTimeStamp(0.11958756130574855);
    msg.setSource(28325U);
    msg.setSourceEntity(163U);
    msg.setDestination(33445U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8809645746913237;
    msg.units = 191U;

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
    msg.setTimeStamp(0.5463814480377004);
    msg.setSource(39467U);
    msg.setSourceEntity(68U);
    msg.setDestination(21742U);
    msg.setDestinationEntity(28U);
    msg.value = 0.7240515053749147;
    msg.units = 17U;

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
    msg.setTimeStamp(0.4115230835212954);
    msg.setSource(52266U);
    msg.setSourceEntity(27U);
    msg.setDestination(49269U);
    msg.setDestinationEntity(108U);
    msg.base_lat = 0.9859192433059722;
    msg.base_lon = 0.773471591028744;
    msg.base_time = 0.6228267218721167;

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
    msg.setTimeStamp(0.8781476623865069);
    msg.setSource(12706U);
    msg.setSourceEntity(235U);
    msg.setDestination(47471U);
    msg.setDestinationEntity(82U);
    msg.base_lat = 0.20168658296651798;
    msg.base_lon = 0.1617274074017898;
    msg.base_time = 0.6999560943194282;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 47403U;
    tmp_msg_0.destination = 48444U;
    tmp_msg_0.timeout = 0.7894150118034152;
    IMC::MsgList tmp_tmp_msg_0_0;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5477206203658911);
    msg.setSource(4733U);
    msg.setSourceEntity(32U);
    msg.setDestination(1203U);
    msg.setDestinationEntity(113U);
    msg.base_lat = 0.0786882421970837;
    msg.base_lon = 0.018107130598048582;
    msg.base_time = 0.623270058704034;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 65229U;
    tmp_msg_0.destination = 57205U;
    tmp_msg_0.timeout = 0.19379599602053343;
    IMC::UASimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 232U;
    tmp_tmp_msg_0_0.speed = 63615U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-118, 41, 94, 98, -93, -74, 55, 79, -127, -11, 84, 33, -91, -120, 36, -60, -41, -8, 69, -86, -23, -25, 82, -80, 15, 72, 27, -21, 55, -26, -36, -87, -34, 78, -50, 56, 95, -41, -21, 69, -121, -60, 84, -126, 78, 119, 117, -67, -50, -68, 85, -56, -97, -8, 121, -103, 110, 81, 51, 77, 43, -69, 76, 90, 40, -50, -109, -44, 126, -83, -62, 103, 39, -21, -25, -96, -35, 85, -30, 55, -59, -46, 91, 20, 90, -24, -32, 37, -22, -66, 40, -92, 36, 5, -22, 13, -49, -121, -111, 116, 42, 93, 49, 23, 38, 30, 47, 101, -23, -84, 26, -113, -107, 69, -64, -114, -105, -48};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9935147444944724);
    msg.setSource(17712U);
    msg.setSourceEntity(138U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(93U);
    msg.base_lat = 0.7540305960119014;
    msg.base_lon = 0.9464756755973273;
    msg.base_time = 0.7843630362561536;
    const char tmp_msg_0[] = {121, 27, 35, 122, 23, 87, -97, 123, 63, 18, 62, -19, 48, 66, -88, -75, -93, -26, -110, 99, -50, -64, -76, 123, -79, 104, -4, 118, 62, 34, -23, -109, 45, -37, 85, -55, 15, -37, -12, 48, -63, 115, -20, -19, 119, -125, -18, -33, 72, 113, 119, 29, -99, 34, 47, -106, -23, -81, 81, -104, 63, 28, -64, 122, -70, -11, -81, 104, -37, -42, -119, 93, -8, 76, -9, 39, -66, 31, -117, 68, 110, 27, 47, -55, 11, -20, 65, 2, -14, -93, -127, 70, 91, 120, -119, 28, -25, 3, -69, -107, 16, 6, -120, -36, 120, -40, -126, -21, -110, -28, 4, -44, -78, 98, 63, -43, -116, 110, 111, -44, 72, 26, 99, -23, 115, -12, 10, -3, 70, 118, 126, 102, -115, 117, 117, -76, -109, 61, 110, 102, -42, -34, -116, 28, 34, -124, -77, 118, -102, -68, -78, 68};
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
    msg.setTimeStamp(0.81395444368383);
    msg.setSource(52378U);
    msg.setSourceEntity(237U);
    msg.setDestination(63056U);
    msg.setDestinationEntity(167U);
    msg.base_lat = 0.629183139726252;
    msg.base_lon = 0.6601609737735012;
    msg.base_time = 0.2122342751829338;
    const char tmp_msg_0[] = {43, -6, -35, 125, -112, 124, 86, 6, 123, 49, 92, 4, -95, -64, 39, -120, -29, 122, 108, -104, -94, -83, -58, 103, 113, -58, -11, -1, -112, 106, 28, -24, -49, -127, -112, -103, -57, -37, -37, 65, -88, 38, 54, -126, 38, -62, 24, -55, -33, 18, -76, -104, -106, -21, 126, 21, -116, -8, 7, 113, -23, -122, 116, -84, -33, 52, -32, 52, 35, -21, 37, 75, -114, -106, -38, 22, -24, 117, -6, 48, 53, 117, 57, 122, -37, -125, -114, 20, -9, 111, 87, 88, -86, 89, -26, -78, -115, 53, 37, 32, 90, 80, 74, 36, -99, -107, -76, -101, -87, 49, -127, 119, -42, -23, 18, 35, -81, -78, -40, -78, -126, -64, 96, -2, -16, -78, 0, 61, -31, -5, -34, -36, 61, -49, -103, -93, -64, 98, 39, -94, 7, 56, 89, -59, -60, 34, -39, 103, -21, -117, 11, 37, 110, -124, -52, -15, 79, 72, 88, -59, -12, 64, -56, 98, 9};
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
    msg.setTimeStamp(0.911991537942604);
    msg.setSource(57647U);
    msg.setSourceEntity(28U);
    msg.setDestination(3423U);
    msg.setDestinationEntity(154U);
    msg.base_lat = 0.6173021362343262;
    msg.base_lon = 0.4425306043416999;
    msg.base_time = 0.6491858834091344;
    const char tmp_msg_0[] = {-111, 49, 88, -76, -85, -103, -126, -68, 75, -93, -45, -25, -108, 93, 73, -107, 31, -16, 13, 71, 73, -6, -22, 17, -95, 69, -119, -117, -15, -22, -17, 68, 83, 101, -24, -55, 110, 3, 7, 102, -63, 5, -90, 42, -36, 91, -56, -40, -63, -62, -13, 124, -102, -4, 44, 68, 109, -87, 66, 112, 115, -38, 58, -31, -2, 60, 106, -114, 104, -15, 105, 118, 15, -35, 47, -39, 46, 112, 52, 123, 16, -66, -2, -5, 92, -88, 50, 100, -41, -79, 59, 108, 69, -94, -43, -124, -44, -42, -19, -111, 78, -78, -23, -87, -32, 39, 60, 97, -21, 41, -73, -20, 114, 111, 118, 44, 9, 115, 7, -30, 47, 34, -68, 67, 101, 67, -106, 7, -79, -1, 17, -49, -21, 61, 49, -38, 104, -22, 74, -115, 27, 50, -74, 98, -70, -30, -85, 78, 6, 11, -7, -90, -93, -99, 32, 24, 76, -13, 105, 99, -56, -76, -51, -105, 50, 94, 45, -78, 72, -44, 43, 4, 43, 12, -74, -108, -50, 107, 46, -1, 99, 47, -49, 15, 47, 60, -59, 80, 52, -45, -4, -117, 82, -68, -25};
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
    msg.setTimeStamp(0.2208942934509669);
    msg.setSource(23065U);
    msg.setSourceEntity(141U);
    msg.setDestination(13010U);
    msg.setDestinationEntity(177U);
    msg.sys_id = 33397U;
    msg.priority = -61;
    msg.x = 9893;
    msg.y = 29134;
    msg.z = -7249;
    msg.t = -4846;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DVUXWFWHFRJBVOELNTDMJDLUBASGYJCDTTPFBPTLYKEXLTIOQLIUQWOHARSPGPVCYKYSXXMLFWVDNWJWGESTISKSXOEKFXPMCACSGFYXQUUSIKASJZAMLOQFKMQZVODQHOXHKICGRKRXEIEATTYHXQNZBZIVYMLAWBVZDENJGDRBMLRGRNPCHUDZZCJNOYNHRF");
    tmp_msg_0.sys_type = 188U;
    tmp_msg_0.owner = 51145U;
    tmp_msg_0.lat = 0.3641364209094704;
    tmp_msg_0.lon = 0.336026804635867;
    tmp_msg_0.height = 0.3856179834298957;
    tmp_msg_0.services.assign("UYNZVZSFLTOKBBOOAKDGDMSKMJKBPWMREXCBTBTVUHEAZTQWJLGFHXFQRSZNLKDVWIPXRMNNTPUGSEORGKJEHBEIGVENVBJRJXIPVZGSACBVNTUZAWYFOXDSYCAFDRWULGMFLINSJXQQCKAJLHTWWEDLQIJSIHFNQJLFVVQCKMCY");
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
    msg.setTimeStamp(0.8351444523282094);
    msg.setSource(22501U);
    msg.setSourceEntity(91U);
    msg.setDestination(45682U);
    msg.setDestinationEntity(184U);
    msg.sys_id = 25448U;
    msg.priority = 100;
    msg.x = 17487;
    msg.y = -31441;
    msg.z = -21067;
    msg.t = -11553;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.6051576638129327;
    tmp_msg_0.x = 0.755233923802883;
    tmp_msg_0.y = 0.39511288829764224;
    tmp_msg_0.z = 0.4547723794101407;
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
    msg.setTimeStamp(0.7817626703779055);
    msg.setSource(51008U);
    msg.setSourceEntity(178U);
    msg.setDestination(50626U);
    msg.setDestinationEntity(197U);
    msg.sys_id = 13759U;
    msg.priority = 34;
    msg.x = -7499;
    msg.y = 3520;
    msg.z = 3095;
    msg.t = -6949;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("OOSLPPEHTQYJLGRADSNWKCAIIVWWUBGYNYAXVKXQLMAJZKOXULCHU");
    tmp_msg_0.sensor_class.assign("OVXPZLDCQLECVYNURLFHLJEIVABLZUGVVJKGRXFAYRGSZHLWWCKCSWHJETCKOTFZGDZZAMGRMVIBSKQZYRFVFMKYPPBZSTI");
    tmp_msg_0.lat = 0.11133420629203539;
    tmp_msg_0.lon = 0.2835711551375354;
    tmp_msg_0.alt = 0.3025213653088119;
    tmp_msg_0.heading = 0.5189918903175095;
    tmp_msg_0.data.assign("CXWYWBRYZQLCXZBAMXOMGBFUNRUSWBCRKDAZYWWATAVPTTVORPKULPDMFQKHHWQXVFPCCNDTMDGFOEPFHZOHOTARYDIXQNUSDSMIIWLZZVGJPSWMODVGMJIPAINHUAEFPQLZOTBBFXBYHUIIRZCJAPJVVDUJLRRLKSPQDVXWYQNEEIFRGINSEQLBOUCAKSSJYZCGLJEIATFFTQNGZHMJWHYTL");
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
    msg.setTimeStamp(0.5364238549476756);
    msg.setSource(46932U);
    msg.setSourceEntity(42U);
    msg.setDestination(64928U);
    msg.setDestinationEntity(239U);
    msg.req_id = 48003U;
    msg.type = 234U;
    msg.max_size = 17377U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9810405403644439;
    tmp_msg_0.base_lon = 0.900561107911404;
    tmp_msg_0.base_time = 0.8812880809057468;
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
    msg.setTimeStamp(0.19011460883811881);
    msg.setSource(51569U);
    msg.setSourceEntity(201U);
    msg.setDestination(64921U);
    msg.setDestinationEntity(3U);
    msg.req_id = 3027U;
    msg.type = 69U;
    msg.max_size = 54236U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5388237503600785;
    tmp_msg_0.base_lon = 0.03556685489844169;
    tmp_msg_0.base_time = 0.2657373180418098;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 14727U;
    tmp_tmp_msg_0_0.priority = -34;
    tmp_tmp_msg_0_0.x = -11116;
    tmp_tmp_msg_0_0.y = -21451;
    tmp_tmp_msg_0_0.z = 18309;
    tmp_tmp_msg_0_0.t = -8029;
    IMC::ClockControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 110U;
    tmp_tmp_tmp_msg_0_0_0.clock = 0.9065621664274637;
    tmp_tmp_tmp_msg_0_0_0.tz = 1;
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
    msg.setTimeStamp(0.5943101913302633);
    msg.setSource(28533U);
    msg.setSourceEntity(200U);
    msg.setDestination(40590U);
    msg.setDestinationEntity(146U);
    msg.req_id = 19669U;
    msg.type = 24U;
    msg.max_size = 21232U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.23883396873287188;
    tmp_msg_0.base_lon = 0.8393711351365424;
    tmp_msg_0.base_time = 0.5842896587674243;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 5502U;
    tmp_tmp_msg_0_0.priority = 2;
    tmp_tmp_msg_0_0.x = 19854;
    tmp_tmp_msg_0_0.y = -31379;
    tmp_tmp_msg_0_0.z = -30933;
    tmp_tmp_msg_0_0.t = -7772;
    IMC::HomePosition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 142U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.5591291479866166;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.08859602835205171;
    tmp_tmp_tmp_msg_0_0_0.height = 0.5113145103141106;
    tmp_tmp_tmp_msg_0_0_0.depth = 0.3686720549126077;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.6761442711334608;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.5766885191693487);
    msg.setSource(30712U);
    msg.setSourceEntity(173U);
    msg.setDestination(4251U);
    msg.setDestinationEntity(171U);
    msg.original_source = 59677U;
    msg.destination = 6974U;
    msg.timeout = 0.16963233208471307;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 227U;
    tmp_msg_0.system.assign("QTYVDVXTRRNMUAOFVRBDUIUOIMTRLVUNXGZPKPXPAEXIIZILPLOYDLPWFBQCWTFGOUZPNUTVJYHHGZKNJDMGCDMFEJCHTWGEWUKSHTLECEZLYFJISJWNGMAOAXKUODJLSFVZSHXYBMUWVFXDEYIOBJZQHUMTSPVOIIXNNEACZRRLKQNYBZJYIQWMGMJROBCGNPVEWSHBTFYBBLSS");
    tmp_msg_0.range = 0.7012665203573993;
    IMC::GpioStateGet tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ULAUCOJGCODGDJBYFRDHHAETWVONCIGOVVYDERUGKPBVKSUPLNLGLKIBSSZSRVDEXSQYTKXRMUIAJPZZKAVFZCVNTJTVTMNGQGYEPWRTLXPNCBCGLFMYGAKUBEFBWKKCOLIYWOWEIJHJWJUJHIDFFEMEFCLBHTOWJXKMALYQQSPQEIXQNAYBVQFNNZDMHZNYWMQXXSQCMZTRZODFPI");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7978238973677477);
    msg.setSource(6604U);
    msg.setSourceEntity(204U);
    msg.setDestination(24812U);
    msg.setDestinationEntity(128U);
    msg.original_source = 56843U;
    msg.destination = 732U;
    msg.timeout = 0.8746141813766707;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.7875327515241738;
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
    msg.setTimeStamp(0.5392682859008883);
    msg.setSource(15400U);
    msg.setSourceEntity(13U);
    msg.setDestination(43957U);
    msg.setDestinationEntity(19U);
    msg.original_source = 48517U;
    msg.destination = 13804U;
    msg.timeout = 0.6794490945244034;
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 116U;
    tmp_msg_0.ncells = 98U;
    tmp_msg_0.coord_sys = 66U;
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
    msg.setTimeStamp(0.44475933326022266);
    msg.setSource(17249U);
    msg.setSourceEntity(107U);
    msg.setDestination(33647U);
    msg.setDestinationEntity(156U);
    msg.type = 34U;
    msg.comm_interface = 29233U;
    msg.model = 51723U;
    msg.list.assign("QGKNPVHJYHUOXTUNCNFYPOTWIBUNQDWYRKOISEN");

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
    msg.setTimeStamp(0.03538187386704028);
    msg.setSource(58657U);
    msg.setSourceEntity(228U);
    msg.setDestination(3703U);
    msg.setDestinationEntity(21U);
    msg.type = 150U;
    msg.comm_interface = 35328U;
    msg.model = 38380U;
    msg.list.assign("LSESKDCDWVEBMYIUKDSTVWOWDWQMFEXIKOLIFQLSSTKXCENBWJSHAOFGBCJZBTKHYARJKPEZMHQHYUENUXZJVVRGIXXGDSLZONYPENDFAYLMHATTASYOLVZVIYOFQJDARQDMXIPXRYVIBPGWNRKFNUQKCEWGPBHJWZMXGBVLYTMYGFJIFUCJPORRLAHPGDGUNWCTFQMTPVRZEUOKXSNHXTJRWVKPMQA");

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
    msg.setTimeStamp(0.7411813942343826);
    msg.setSource(515U);
    msg.setSourceEntity(113U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(169U);
    msg.type = 35U;
    msg.comm_interface = 31301U;
    msg.model = 2285U;
    msg.list.assign("WEABMUNETRPOTCADJNLXAWECYGXETZKFRPHPKBWZNADRXUIMOBAGVUUSZPONKQWCCLOCLCDMEOZPXTKASGQW");

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
    msg.setTimeStamp(0.4283276682266205);
    msg.setSource(18994U);
    msg.setSourceEntity(245U);
    msg.setDestination(50848U);
    msg.setDestinationEntity(78U);
    msg.type = 55U;
    msg.req_id = 2600354548U;
    msg.ttl = 17620U;
    msg.code = 227U;
    msg.destination.assign("EKWNUMOBGQIQWKEZBTAVCPPAVXUEXEUCQVAIRSKFGJJRUTDSCRTGHKPPJNLZPDYBKYW");
    msg.source.assign("ICEWCLOBVPXTMAJHNJEKNQNSIRODCSEFZCZIEDSBOAQPMFTJDXDZZGYZZDMFT");
    msg.acknowledge = 146U;
    msg.status = 154U;
    const char tmp_msg_0[] = {58, -28, 8, 102, 52, -20, -79, 102, -71, -119, -42, -109, 27, -22, -35, 107, 87, -88, -15, -18, -120, 50, -23, 20, -80, 101, -66, -114, 18, 56, 23, -73, 100, -101, 77, 121, -87, -19, 124, 74, 65, -74, -42, -19, -87, 116, 27, 63, -50, 106, -107, 29, 48, -34, -100, 107, 45, 6, 13, -89, 118, 14, 76, 56, 54, 56, -105, 28, -19, -24, -55, 75, 28, 14, -64, -49, -95, 65, -60, 5, 39, -95, 79, -78, -94, 24, 71, 13, -24, 101, 47, 62, -64, -91, -31, -47, -105, -98, -46, 33, -92, -37, 35, 57, -123, 81, -5, 124, -88, 57, -47, 123, -39, -120, -12, 87, -100, -40, 5, -118, -3, -46, 47, -19, -13, 92, 35, 19, 45, -34, 35, 64, 59, -111, -125, 38, -122, -9, -13, 91, -84, -46, -78, -92, 10, -36, -19, 6, 123, 81, 67, 23, 123, 113, 113, -114, -51, -31, 104, 53, 77, -54, -44, -2, 0, -84, 75, 121, -39, 33, 78, -52, 59, 115, -29, -14, -37, 53, -107, 82, 27, 71, -23, -124, -76, -65, 87, 2, -117, 36, 118, -34, -42, -107, 95, -100, -88, 84, -63, -84, -81, 80, 11, 32, 24, 54, 121, -26, -83, -49, 93, 123, -80, -52, 37, 82, 113, -100, 20};
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
    msg.setTimeStamp(0.12080687862344686);
    msg.setSource(30673U);
    msg.setSourceEntity(116U);
    msg.setDestination(46310U);
    msg.setDestinationEntity(248U);
    msg.type = 74U;
    msg.req_id = 3508668431U;
    msg.ttl = 10194U;
    msg.code = 194U;
    msg.destination.assign("RPZHGHFKAWUUCMGEEQUNQZLXWSHPDONALOLYKXELRKYGGBWGISSVWLNXBQMJRHFFROSWDIUKPYRVYQAZJZTGLUXJXNMHYRUVSRFBRT");
    msg.source.assign("PVEXMYTZACHCZZKPQTBUGYOPENRBGIHLXKTEZIAREBIMFTBDQUPSEUUXNMTPIBKOQKCDFNWJVATCJHUQXPMCIOAKHSNBAOKWMIOIWPNYSLSDZGMRKRZJCXTBGFUEKQDOWVNYZFAWDMNGQJIKMOJDVZRCLLDCLGAWCEEBVVJMVVHLXAXLRWQXFGYJPWTOUSUFRNJZRUJPFZWY");
    msg.acknowledge = 253U;
    msg.status = 192U;
    const char tmp_msg_0[] = {50, -34, 54, -42, -21, 8, 60, -2, -102, 87, 93, 25, -85, 81, -39, 96, 55, 29, -42, 82, -63, 109, -56, 82, -108, 47, 90, 62, -16, -103, 114, 57, 68, -104, -27, -79, 65, -16, -56, -97, 117, 90, -38, 69, -3, -120, 42, 124, 96, 103, 35, 83, 103, 44, 91, 77, 50, 14, 26, 101, -58, 8, -110, 109, -11, -18, -116, 8, 88, -36, -3, -103, 71, -118, 32, -33, 29, 41, -18, -25, -115, 46, -65, 39, 57, -95, 59, -122, 106, -58, 9, 0, 115, -47, -117, -58, -104, -55, -97, -104, 15, -40, 20};
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
    msg.setTimeStamp(0.06658269506732772);
    msg.setSource(19883U);
    msg.setSourceEntity(113U);
    msg.setDestination(29636U);
    msg.setDestinationEntity(114U);
    msg.type = 71U;
    msg.req_id = 3313524494U;
    msg.ttl = 37742U;
    msg.code = 65U;
    msg.destination.assign("JQVUAHSMKCTZBOHQBUGCYYNYGNEBFFKBTBTFMPIGYULXVWSPWLTMRZHEDBZTTFGEVJKIAMOHXPWMFDJQPSKODCPAEZRDIIAFIIBZDRZJJEGNUQFYEJJQHXSMYCYHOHWVYNZILUCPVPXTODELKEAGLIZQZVWLTMRRFIKNQXV");
    msg.source.assign("NCHBQZCPIUOMVLUWMANGHRHQFEMDVBUPXLLSEADOZJQQEICITYTMUEBBKFNCQBMJ");
    msg.acknowledge = 84U;
    msg.status = 191U;
    const char tmp_msg_0[] = {70, -60, -28, -120, 74, -21, -72, -31, -99, -106, -73, 124, 31, -73, 68, 25, 49, 64, -68, -64, -105, 49, 7, -15, 10, -58, 118, 9, 9, -76, 1, -94, -24, 118, -19, 21, 10, 86, -88, 27, 26, 110, 101, -125, 27, 40, -72, -119, -16, -54, 55, 70, -83, -14, -79, 7, 75, -76, 81, -64, -120, 116, 69, -62, -66, 85, -111, -128, -74, -100, -39, 11, -115, -12, 86, -105, -104, 5, -40, 34, -17, 88, 19, 18, 25, -67, 121, -82, -9, -117, -105, -13, -56, 88, -124, 5, -46, -89, -43, -115, 96, -30, -77, 5, 69, -64, -120, 97, 0, -114, -128, 81, 31, 35, 22, 104, -125, 34, -110, -93, -77, 126, 106, 87, 51, -6, -126, -27, 102, 91, 10, 109, 96, -87, 69, -125, -62, 39, 65, 79, -86, 19, 42, -61, -59, 5, 8, 106, -124, -87, -115, 79, -82, -96, -98, 53, -75, 117, 56, -80, -34, 11, 53, 30, -112, 94, -8, -103, 2, -53, -42, -126, 78, -51, -20, -65, -22, -61, -15, -24, 72, 99, -90, 57, 95, -111, -88, 104, 11, 46, 116, -30, -95, -73, -48, -85, -7, 123, 84, 20, 59, 123, 6, -99, -109, -74, -6, -88, 89, 106, 51};
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
    msg.setTimeStamp(0.1330535628825542);
    msg.setSource(7976U);
    msg.setSourceEntity(144U);
    msg.setDestination(9346U);
    msg.setDestinationEntity(90U);
    msg.id = 174U;
    msg.range = 0.15374145085212554;

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
    msg.setTimeStamp(0.5037429811409803);
    msg.setSource(45430U);
    msg.setSourceEntity(82U);
    msg.setDestination(3362U);
    msg.setDestinationEntity(27U);
    msg.id = 205U;
    msg.range = 0.9739872728995216;

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
    msg.setTimeStamp(0.7589192119697414);
    msg.setSource(9928U);
    msg.setSourceEntity(34U);
    msg.setDestination(57808U);
    msg.setDestinationEntity(59U);
    msg.id = 70U;
    msg.range = 0.8060415859604536;

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
    msg.setTimeStamp(0.8401002054965223);
    msg.setSource(44164U);
    msg.setSourceEntity(170U);
    msg.setDestination(32580U);
    msg.setDestinationEntity(101U);
    msg.beacon.assign("MVTMMVOSGHQBJBRJBCHNWUHDKPSPOTEDSJHYDPKIUXLLDQZXVMRDVGULPXPWTNJCMQBXWWYCRFZHZGXIQBLOQEMKETRRPVZVNYMRTLZDFHJOPNOOUNG");
    msg.lat = 0.14231172558478233;
    msg.lon = 0.6722346690101262;
    msg.depth = 0.7267440553286953;
    msg.query_channel = 53U;
    msg.reply_channel = 63U;
    msg.transponder_delay = 61U;

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
    msg.setTimeStamp(0.4456633145213563);
    msg.setSource(55620U);
    msg.setSourceEntity(68U);
    msg.setDestination(47837U);
    msg.setDestinationEntity(85U);
    msg.beacon.assign("ZHEHQRCOYWWBCPBHLZXQLUFPSAROXUYNOLTVEFBVITQDJGBPYPADPGJMIHGVJSJKNFYOBZXZBGBHPDCYYXRGQQTXWOUCBNISNUIANIRKMLFVANPXSOVUWFDTKXEHEMWCKMILRSNNMRUDHUDWMXWZVCRMGCPRPKNKQFGWAWFYKPAMNZLZWHVKQKUTYVTFCFGABAJYYDICXLJRBSZIJOESZSLODXZLHQU");
    msg.lat = 0.8227230136896311;
    msg.lon = 0.535475682461088;
    msg.depth = 0.0823495010008416;
    msg.query_channel = 65U;
    msg.reply_channel = 216U;
    msg.transponder_delay = 248U;

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
    msg.setTimeStamp(0.9665688327221796);
    msg.setSource(42053U);
    msg.setSourceEntity(24U);
    msg.setDestination(4206U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("SOZEQMECVRSHGVYNZZBAZGASXUPQXJBZVOUOJGTMCRFKCIOMEIGEWYTCKSLGWP");
    msg.lat = 0.5907791643695518;
    msg.lon = 0.37512888646219256;
    msg.depth = 0.6576955853038385;
    msg.query_channel = 53U;
    msg.reply_channel = 79U;
    msg.transponder_delay = 145U;

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
    msg.setTimeStamp(0.18008725216827404);
    msg.setSource(24957U);
    msg.setSourceEntity(60U);
    msg.setDestination(8409U);
    msg.setDestinationEntity(227U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.5243873944465897);
    msg.setSource(30073U);
    msg.setSourceEntity(173U);
    msg.setDestination(25540U);
    msg.setDestinationEntity(25U);
    msg.op = 154U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NECLNGDVHRUEELBKTKAKEPUFVKFWXSYMZOPIYTBSOCWJPGRQBLNUABSJZMUAYRXQKQNRPUNHGOAXZXTMSEJD");
    tmp_msg_0.lat = 0.5992172122667179;
    tmp_msg_0.lon = 0.11849814388792557;
    tmp_msg_0.depth = 0.01952799998691357;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 155U;
    tmp_msg_0.transponder_delay = 172U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9977915495071056);
    msg.setSource(2275U);
    msg.setSourceEntity(13U);
    msg.setDestination(28319U);
    msg.setDestinationEntity(148U);
    msg.op = 59U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CXYQFKZKYUCKMSWEHZFNNNOTMTUYBGZKGNHNBLAADIZDWCTIEOMILJPSSBQLPZUAHIOEEHLRCKTMNFXDQVYOHUSUHTKXHXVBWJRGI");
    tmp_msg_0.lat = 0.537445336673594;
    tmp_msg_0.lon = 0.7266073756792236;
    tmp_msg_0.depth = 0.09063216701216203;
    tmp_msg_0.query_channel = 85U;
    tmp_msg_0.reply_channel = 1U;
    tmp_msg_0.transponder_delay = 133U;
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
    msg.setTimeStamp(0.8257569384965595);
    msg.setSource(6103U);
    msg.setSourceEntity(143U);
    msg.setDestination(63145U);
    msg.setDestinationEntity(64U);
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 833303067U;
    tmp_msg_0.destination.assign("NGFQHROOTTVPAIREBMNDFCPUFICPTXCHTQBKAXCKXKFYOYVKJNEHRNLFWNAWASMOOLRLDWJITMKGCYONPVQAJVQEMZWNESWQMKYCYPUUTJQIWYRGQYTEZRVXUHOUZEUIKPGOUCADPWBDJHMTJZSYHJAIFMARFPLDPOEIFSZFYZGSSJQGSCHIZEMVLSNVXDPBKLXGNBWCWAWTXDMCXYBBRUHDOEVNUKLSBLVHZUVDLGLJRQBKXEMGZIQR");
    tmp_msg_0.timeout = 9862U;
    const char tmp_tmp_msg_0_0[] = {-12, -44, -103, 26, -37, 7, -64, 17, 84, -100, -77, 108, -123, 5, 91, -6, -82, 4, 110, 61, -57, 61, -27, -50, 120, -115, 63, 87, -118, 95, -27, 82, -13, -53, -54, -20, -44, -126, -10, -13, -100, 41, 74, -39, -22, 109, -112, 26, 81, -124, 1, -51, -39, 70, -22, 102, 40, -124, 8, -86, -96, -7, 29, 25, -31, 4, -71, 26, 108, -36, -54, 19, -100, 62, -80, 118, -106, 87, 1, 61, 64, 24, 0, 5, -18, -68, -75, -43, 75, -108, 34, -72, 86, -56, 7, -70, -72, 85, 24, -50, -94, -67, -22, -11, 44, 104, 44, 62, 121, 104, -128, -13, 77, 112, -26, -26, 84, -58, -86, -72, 112, 24, 22, -56, 42, 45, -56, -126, -125, 50, 2, -14};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.22100095510150775);
    msg.setSource(27516U);
    msg.setSourceEntity(201U);
    msg.setDestination(34792U);
    msg.setDestinationEntity(0U);
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 37339U;
    tmp_msg_0.plan_size = 2475195262U;
    tmp_msg_0.change_time = 0.42315458877150425;
    tmp_msg_0.change_sid = 64975U;
    tmp_msg_0.change_sname.assign("DBNTPUTZPLUZSVKZXITPWRXOTPRIIBYYHMZJIXHVRVHKGEEURYDANZYOOVNZZHMYPGHUWWFBLARBZEAQKPLJFMDTQTQKSKSHKMCMGBWKOAM");
    const char tmp_tmp_msg_0_0[] = {83, -72, -88, 59, -106, -3, 71, -30, -101, 83, 70, 112, 111, -59, 37, 115, 114, -45, 112, -93, 34, 49, 124, 119, -32, -5, -49, -100, 102, -119, 108, 33, 126, -12, 51, -10, 34, -16, -58, -117, -53, 53};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.471246659215664);
    msg.setSource(57806U);
    msg.setSourceEntity(254U);
    msg.setDestination(58498U);
    msg.setDestinationEntity(22U);
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.8223319248114843;
    tmp_msg_0.units = 92U;
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
    msg.setTimeStamp(0.8842113732562763);
    msg.setSource(58935U);
    msg.setSourceEntity(188U);
    msg.setDestination(20874U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.0481437925830529;
    msg.lon = 0.8097445384823623;
    msg.depth = 0.7589792158177073;
    msg.sentence.assign("CKVPTIKGBGOHZRCUCBEUIEXGLVKVOJKPPEJGSVXNTAHAXRQAKQMRJNIITKEAUDCSHOMLFGDHLAJAERPHHREINCJQFMNICQOYNQBWZITKGNKXFUGDTSLHXUCFAIWBPKXFBVGYMWXEXWQWRGTRUIFNPSMZLPJPYYJDOLOLYXZCVAMBGQZBWRDZYVOAPSOASUSDQDUVEMOKUZZWVLCYJQJ");
    msg.txtime = 0.03499090154148066;
    msg.modem_type.assign("FDDONTWAQHCXKBICBEGYAHRRWUQFAT");
    msg.sys_src.assign("UKMCGQABOWPSAGAZQXJIPDVUCQCSHIMSYVFQPNNLCGHPZOHPXDJFKATNFZCRHCLZEUJKRZMLRXXRZEHUIZVWIVFXFOPKBBJDHMYORQWITHXNLYHUONQSQWWLKVDGDWGUUZAGXCSNJBEKICIBZQMRECWITSEJBPOCUFHYYYEVJFARRMZSJDBNVPGQLVBTVYGDWABLAOFOAUOTSLFNPSOTXHX");
    msg.seq = 60464U;
    msg.sys_dst.assign("JVAEOONWNNKLNPXZEPMCAMHBLCZFKMCHQRSEXLNUHMYPBAKZJEVXOOKAWSWBEMOWCGLUQHXYYHYAOLGBZQSXVABYJDUVSEVFWDRMTJWIEMUIINTLYDRUBXDUBF");
    msg.flags = 93U;
    const char tmp_msg_0[] = {-71, 60, -125, -128, 53, -26, -32, 101, -98, -25, 7, -87, 73, -105, -48, 12, 75, -103};
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
    msg.setTimeStamp(0.8372067883688059);
    msg.setSource(33532U);
    msg.setSourceEntity(200U);
    msg.setDestination(19678U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.9799012863355266;
    msg.lon = 0.12144436057078012;
    msg.depth = 0.9680890876122343;
    msg.sentence.assign("QHBLXTFECXMZFFFCCVVUYLJHJQGUIDCHBKNYKFAWLXXKFTPVLTRRHTGKUYZZFOLDUICKUHNPBIALOTQWTCZVXJYEKAANORAJYWEDTWJYRALPOUOIFWXUHCRHSHBNDPW");
    msg.txtime = 0.3767446240255289;
    msg.modem_type.assign("LDXCUOACAIXCXJNRUYSSCISVAIJZFY");
    msg.sys_src.assign("GACEJGYOSBVTHKRRCEPPVPWDBRVISOULKOSJKQFBFOVBLNKTWIMYWMCGIKJMWAEAPLPEUCJKATSUGQZGMMORXZITHXHTXN");
    msg.seq = 56500U;
    msg.sys_dst.assign("SMXQDASSVJUSDQZJYCUAJKVARSSOPZTEXXIPJEFQTQ");
    msg.flags = 58U;
    const char tmp_msg_0[] = {19, -29, 115, -14, 64, 67, 100, -68, -60, -127, 90, 119, -54, 103, 37, -93, 36, -64, 76, 56, 31, 125, 67, -91, -24, 93, 46, -62, -110, 10, 78, 23, 75, -41, 35, -55, 124, 55, -19, -72, -123, -7, -89, 58, 60, 70, 54, -94, -19, -68, 117, -48, -96, -22, 93, 26, 16, -122, 37, -5, -66, -20, -34, -43, -80, -38, 25, 110, 95, -6, -27, 29, -78, 31, -27, -56, -51, -57, -57, -73, -27, -72, -53, 117, -65, 94, -45, 100, -93, 118, -64, 107, 111, 100, 17, -63, -79, -33, -7, -17, -23, 125, -68, 65, -68, -81, 35, 29, -127, -40, 123, 97, 105, 66, -25, -47, 73, -13, 33, 119, 108, 26, -82, -20, -87, -57, 63, 29, -97, -30, -10, 111, 98, -1, -44, 109, 86, 67, -115, -98, 24, 77, -73, 83};
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
    msg.setTimeStamp(0.24790267340994787);
    msg.setSource(7689U);
    msg.setSourceEntity(146U);
    msg.setDestination(27261U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.6852786868136933;
    msg.lon = 0.6552229979863443;
    msg.depth = 0.9792673158804908;
    msg.sentence.assign("NXACPXXNUCQESJKSVKWOBTQOHHCMODJJLZKLDDFKDQNALSWIURITRQXHTFDDVRVSYPKMYNSLDVPMYCOXEZGJWJEODTTYWAEEOOGVBMKHGAMPRKRJZNPFAKIGXFSEGOJXLYWZTFUCHDYVINUGUCFBAEVLRZURLLAWBPWHSHEXBFQSCTYJQQMHVKEZZCQIUKOOQLCHLMUBAFBIFYRCIQGZVXIPUWJNRMPIMRZSSFT");
    msg.txtime = 0.3093998183399741;
    msg.modem_type.assign("DGWSNAMJCZOXFZDMAAYQGIMILI");
    msg.sys_src.assign("DHTLMOYCONHWAUJOIKKUUNDLBWTYQQXGVZUASCVHTQNEVVPSPYDTKBUIOBXHIZDTWYBXKJALZCLXVCQJGNFWZW");
    msg.seq = 33105U;
    msg.sys_dst.assign("LMMOGTOQWLDFPJKZVREHAOGQVLAZIGDVWDZDXLGLQKRVDWHYUXPAYRYEPFHOUMECBCDWGVUUOFPTWILSPUKZWEWIIANEVQHPQKXYCIYFRGCCEJJFSTNMHJCVFDNKRJPXODQCXJXIVHNNQXEMNKRYBPLNOXMCNUVSDZTPTAASSHVTMYURDQRHOACQEWYJFKUNQBZBBR");
    msg.flags = 82U;
    const char tmp_msg_0[] = {92, 115, -36, -91, -81, -88, 104, -65, -42, -7, -48, 111, 62, 107, 68, 37, -49, 22, 25, 125, 95, 54, 51, -83, -7, 12, 22, -32, -119, -41, 42, -125, -32, -101, 126, -13, -31, 124, 125, 76, -12, -117, 61, 13, 86, -118, -125, 64, 118, -40, -1, -117, 14, 39, 104, 43, 11, 123, 18, 38, -120, 24, -96, -51, -44, -60, -77, -65, 26, -120, -99, -97, -78, 24, -27, -99, 13, 76, -98, 17, 0, 39, -26, -101, 57, 46, -116, 28, -1, 68, 74, -107, 55, -117, 110, -5, 100, -37, 60, -89, -106, 87, 99, 59, 74, -45, -47, -58, -35, 32, 20, 76, 19, 46, 109, -107, 116, 24, -76, 45, 87, -74, -18, -33, 2, -93, 74, -12, 83, 23, 16, 125, -7, 20, 37, 91, -11, -75, -44, 85, -115, 9, -78, 48, 119, -90, -5, 83, -71, -3, 32, -45, -126, -5, -120, 15, -65, 10, 63, 123, -110, 41, 109, 88, -62, 83, 25, 116, 21, -89, -74, -22, 119, -122, -1, -52, 18, 100, -114, -27, -49, -20, -57, 1, -52, 31, 45, -58, -41, 16, -64, -119, 44, 88, 90, -100, -32, 100, 99, 1, 100, 59, -112, 124, 29, -62, 122, 41};
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
    msg.setTimeStamp(0.8090659595318305);
    msg.setSource(3395U);
    msg.setSourceEntity(162U);
    msg.setDestination(6458U);
    msg.setDestinationEntity(231U);
    msg.op = 239U;
    msg.system.assign("ENCWJNLEZRLVAQLYQHFUBMEHUQAUZJNIOELMPLDBZBIKCZOXFBTHWIOFNOGRRTEWPNOYNLPKLCCRZDYXKXYUHFCKTVWNSMPRXCFGWZRCDSILUJOFSBEIAJTXUPXYDKCQCJEDPRGMCNREHIZYWOIGFOKDLIMYZEDVBTAKNXUGZPAHSVHPTYUHKSVHZJEIUSMPYSOBTVBXOFDSYVRJGGAJUGW");
    msg.range = 0.5198185273588717;
    IMC::Obstacle tmp_msg_0;
    tmp_msg_0.x = 0.6709777237342883;
    tmp_msg_0.y = 0.09190946987101656;
    tmp_msg_0.v_x = 0.2956859211896602;
    tmp_msg_0.v_y = 0.9769721723832548;
    tmp_msg_0.t = 0.8282328685396181;
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
    msg.setTimeStamp(0.3506746248180762);
    msg.setSource(19724U);
    msg.setSourceEntity(137U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(116U);
    msg.op = 82U;
    msg.system.assign("SKHEJKEBYYXPNSBUJSYNUDEOZFZAQYQQVQXHZCORNJRKANFWOHKTTQJGVTPCAAXMUGILAMCLKXHWRRQDUMFAPSUHPDEVZSOVFHKBJRABZXSQJLIVEGIEQPMNEWDGTXBZMAUCWMUCYRJBWKRNNFGLMWWRHLOQIFICPONZEYSCLHVSTVTIYIVPTOOWXXTKLWIGDFLEIXMSVPJTBPRDAUFYDOBBMPR");
    msg.range = 0.747547059175015;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.06913578157175271;
    tmp_tmp_msg_0_0.lon = 0.5099980197198206;
    tmp_tmp_msg_0_0.height = 0.7917280970821758;
    tmp_tmp_msg_0_0.x = 0.9403155578099729;
    tmp_tmp_msg_0_0.y = 0.407317389426446;
    tmp_tmp_msg_0_0.z = 0.08486775715854522;
    tmp_tmp_msg_0_0.phi = 0.21596698643204115;
    tmp_tmp_msg_0_0.theta = 0.737894003426856;
    tmp_tmp_msg_0_0.psi = 0.5965905420614858;
    tmp_tmp_msg_0_0.u = 0.035531555513086066;
    tmp_tmp_msg_0_0.v = 0.34889038568324915;
    tmp_tmp_msg_0_0.w = 0.07057491713899577;
    tmp_tmp_msg_0_0.vx = 0.8588256098737681;
    tmp_tmp_msg_0_0.vy = 0.37124065401873263;
    tmp_tmp_msg_0_0.vz = 0.022580129223481626;
    tmp_tmp_msg_0_0.p = 0.8777800650987957;
    tmp_tmp_msg_0_0.q = 0.38407151302472187;
    tmp_tmp_msg_0_0.r = 0.2673470645868655;
    tmp_tmp_msg_0_0.depth = 0.6228405325415883;
    tmp_tmp_msg_0_0.alt = 0.7151235052102527;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 115U;
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
    msg.setTimeStamp(0.2696548741181082);
    msg.setSource(37551U);
    msg.setSourceEntity(41U);
    msg.setDestination(31202U);
    msg.setDestinationEntity(162U);
    msg.op = 189U;
    msg.system.assign("EWRUZUGENXIQZEPNYQLLRYDKTUGJCWQRZJELBB");
    msg.range = 0.49060027037102194;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("XFJARKTWTAYDFGZVSGZIUFMOIOJKSBICLFLXCTMSYMVCOSSPTBWQBXWSXNJMLKIOHACWHXSQUGKHXRTNCUSPEFMYRUEQUYEYNWKNFXRLKOESAQZBRTJVBPUPMQMBPLEDVMGZUWFPVUI");
    tmp_msg_0.links = 520833108U;
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
    msg.setTimeStamp(0.7214469908871836);
    msg.setSource(8317U);
    msg.setSourceEntity(69U);
    msg.setDestination(6667U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.5096498053993817);
    msg.setSource(12114U);
    msg.setSourceEntity(144U);
    msg.setDestination(52665U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.5783519104273881);
    msg.setSource(60025U);
    msg.setSourceEntity(95U);
    msg.setDestination(44413U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.927647439385592);
    msg.setSource(45323U);
    msg.setSourceEntity(103U);
    msg.setDestination(20846U);
    msg.setDestinationEntity(161U);
    msg.list.assign("LQMNVJXWROQXMPVKQARNTAGDYIBSZMKGEJANHXXDRULPEDCLSXBOKEFYTIFJNKENSMQXNWHKYJTYZGIHHZKJQOSEOCWMAMCPQUEDTTASHDRGAAAUUTVPBGJPNVNLTCUVKBMUWE");

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
    msg.setTimeStamp(0.5932161841375538);
    msg.setSource(10387U);
    msg.setSourceEntity(238U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(42U);
    msg.list.assign("GYLIPIAZMGUTRCXJTYIMWPFWKENBKXIOCTBQZOEYFOODUZFSGHQHGWYGLYVCPLHJWDSTSEXLCMXZWVRUANJPGDKJSXCEYCGQRIBXUUCUHIMRUBZYHPNXKHRODFCZDMTQA");

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
    msg.setTimeStamp(0.1617702417595529);
    msg.setSource(40566U);
    msg.setSourceEntity(226U);
    msg.setDestination(46876U);
    msg.setDestinationEntity(152U);
    msg.list.assign("SORDYBNTRHBXYAZD");

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
    msg.setTimeStamp(0.5704885503928729);
    msg.setSource(43607U);
    msg.setSourceEntity(155U);
    msg.setDestination(40646U);
    msg.setDestinationEntity(8U);
    msg.peer.assign("XQWWMSXZJOWVYCKPJCHUZRXMNTTMIJZHDXERUVXBZVGPLFYPHGVYYMWSAZIDOXZHAEIBRNUBSVOVRBOERFQPHUDDGRGLJFTYKXCNGTYWCOHLSKBGODDUUKOLDYIXTIMNWBFZTFPPFRMMCATYMFCNAPJTNLACLGXZOKG");
    msg.rssi = 0.9239407120811476;
    msg.integrity = 51820U;

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
    msg.setTimeStamp(0.8084308741813173);
    msg.setSource(12335U);
    msg.setSourceEntity(61U);
    msg.setDestination(62232U);
    msg.setDestinationEntity(28U);
    msg.peer.assign("CNYZNAVRDGTMKSGTQXYLXZVUJTUKSAMPWHRLEFXYVJHGMIKAWOLJDPYWOVUBTQRQBWCKTNCBJRSYEGZASCOKISSWPKDBUOKCNNFFHWWBLLMFIOTJRGPMFSIDQRFXFTAOLEKGSAQCOVNZFQXLKIARXUCVEZJXEEHMMIEOSHAIVMLYDFGHWNODFUYVLTCRDTHUBXIJPPUSQBXCVDZPNLHPVBWAEXBDYHQ");
    msg.rssi = 0.9417908611122752;
    msg.integrity = 42385U;

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
    msg.setTimeStamp(0.659846600219374);
    msg.setSource(13595U);
    msg.setSourceEntity(23U);
    msg.setDestination(64414U);
    msg.setDestinationEntity(217U);
    msg.peer.assign("CTEMRPOYBSSSZPXOWWKDIJSZDSGGJFIJYRVDMESUCGEISMJHVIFXVCTGVKGKTMAADHXYXAZNSELLHPTFACRNPBNPEYJOUOIWVNTRCQYDWMDNLDVKMDMKPLOJXHKBEQZAWZAIVENMCQKJBBPUOLHYTOLXDBKVORULMNCTIYEFXRFAREFDHFGULIRJYXWPSCGUBZ");
    msg.rssi = 0.2744751178230008;
    msg.integrity = 33898U;

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
    msg.setTimeStamp(0.7435492546912669);
    msg.setSource(59860U);
    msg.setSourceEntity(59U);
    msg.setDestination(59549U);
    msg.setDestinationEntity(15U);
    msg.req_id = 49664U;
    msg.destination.assign("NJRWAVCEMLHWPEFAVLQCIEMHZRDHOYUMMZNCKYSBUOXPOZDODYYZQBQSXYKBYRFWMBRGJBOKCTEZFS");
    msg.timeout = 0.8795931103522955;
    msg.range = 0.8719885957434389;
    msg.type = 91U;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QBPGZJBSJKGURANTSKPOBIPXIPILHVEDOEKWCRROZBLVZHFUZYDKBNSRHOFBCFHQRQKBMEDTLCQGMTTGDVDZBNRHZGFORQQDBJGFTQJYHUCWEZNIOWEBEATUWTKWQXYJFIYOOVSCMXWXOQSRAGEPGFYDPPVLUMRYKEAFAMNLZAUWIXSVWYVUXYYHINUJJJDSUMKCHENNG");
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
    msg.setTimeStamp(0.967895539470511);
    msg.setSource(17430U);
    msg.setSourceEntity(226U);
    msg.setDestination(46670U);
    msg.setDestinationEntity(239U);
    msg.req_id = 22856U;
    msg.destination.assign("RVHAHYUFQQEOOBKHGOFIQSXOQWZMCUJWOVPLIEOCSSHRMBSNFHIKXCHDEJTBXAZIXGKFOJSRPXRBWDDNKUZWPTTAFCBKNTNYRIMZDWYOYBPLFCYVLZELVDQOAAQJRELDIFYTGGWVKTHJSPYJKTRUMRZFCL");
    msg.timeout = 0.422263851588098;
    msg.range = 0.6561365128904155;
    msg.type = 175U;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 90U;
    tmp_msg_0.goal_id.assign("UINCAOTQTBNMVXYFISWIGTIFOPNVHMKQKOODRGRDUSYFPHZHWYLZZAEGPKQPVDVTAECRMXOYWKCQBKRIXGTSQFQWBNGJCHGZTZUYSGKHFMYRMLHAWWMAHVFQPDX");
    tmp_msg_0.goal_xml.assign("YKUBSFGAQRTAJYOYTBBETLGOSVAHGUVEISFLCTFFWIZSIQNCQLIDEQEQVJZGMPQRCKMGZIBVIYJLOUXAQEAXWTKSXAUMWCSVDNFEHXOBJIZHPLXFNXWCHUSMQVNHESRBFMILWOFYRWWNUAHZYNKRLYJVWCPLPOFPJOVDMDNFUBDDEIRMPRCBGSXCNPLDKMGMYKVQRTHQXXHYAVSHPUTKIRTAMEZRZKTGAWDKJCDTJBPU");
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
    msg.setTimeStamp(0.8655954141355084);
    msg.setSource(42398U);
    msg.setSourceEntity(45U);
    msg.setDestination(63985U);
    msg.setDestinationEntity(13U);
    msg.req_id = 2921U;
    msg.destination.assign("XCEBRCHDXWLZXYRTOSZKFHLSYAULMNNPTNIENMRXCLODWZGQFCEKHFNHAFVMEDYQAZOHQZUWVMUVTYROGISZUKQJYQUOVZIPWBNKEMTE");
    msg.timeout = 0.3393182756836256;
    msg.range = 0.8742069216422198;
    msg.type = 178U;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.6899143534254251;
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
    msg.setTimeStamp(0.8655172827993808);
    msg.setSource(24154U);
    msg.setSourceEntity(237U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(250U);
    msg.req_id = 7518U;
    msg.type = 49U;
    msg.status = 217U;
    msg.info.assign("AMFFTGTJJYRMCQVFEUIKLSHDWBDPLLJOWGPGQGEXXDHUFGMOEWOJDXNUUAZQZHDTUODFKQCMTIMQDCKXNNHABTYMDZJWYIBMBGJZCLRYBCVAHSWEQIEFATCOSVGPKRIEEWZKORPKNJUBLFAEDRIROFRGNNKTNVGLIEEVYSBFATWCQHUOUYCOAKKASDZIYIXRJSAXSWSCZPNZYWPRSQ");
    msg.range = 0.8500246170516182;

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
    msg.setTimeStamp(0.4344296528942073);
    msg.setSource(32312U);
    msg.setSourceEntity(229U);
    msg.setDestination(49357U);
    msg.setDestinationEntity(48U);
    msg.req_id = 63790U;
    msg.type = 109U;
    msg.status = 114U;
    msg.info.assign("JKPQAQKTHXJPDSHNVGRZQZDPWOAGNWROQPNKBACBYCIGOUKSQUIHUVRUOHZLETLSSDAHFIHBGOMRDPBGJYJGGKTRXUDMIHZLXVQKPMEFBEQVHEPALLFZSETNNBOZQAJZXYQUUGCYRXBBTOASEKFTCCFLYUKDMXUSAFJXNINCROORMIYFFTATTVISZMJVCMDMCBN");
    msg.range = 0.7225877916334631;

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
    msg.setTimeStamp(0.6479933080785301);
    msg.setSource(62626U);
    msg.setSourceEntity(68U);
    msg.setDestination(37588U);
    msg.setDestinationEntity(136U);
    msg.req_id = 24099U;
    msg.type = 138U;
    msg.status = 8U;
    msg.info.assign("HWRQQITRAZORJLLTHUNYNPIRIVAGTLLKQCDDAOEXKZVSDEJBOEVXYNGMOJELIARGBEJPHJMBYFSYDUEOMDUAHINQUFBQZEBNUDOWCCHYIRFT");
    msg.range = 0.3948755443905839;

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
    msg.setTimeStamp(0.5171739569017563);
    msg.setSource(41445U);
    msg.setSourceEntity(233U);
    msg.setDestination(62455U);
    msg.setDestinationEntity(94U);
    msg.value = -23655;

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
    msg.setTimeStamp(0.8261139659973399);
    msg.setSource(6809U);
    msg.setSourceEntity(31U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(63U);
    msg.value = 24385;

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
    msg.setTimeStamp(0.9236329537823216);
    msg.setSource(3133U);
    msg.setSourceEntity(52U);
    msg.setDestination(56821U);
    msg.setDestinationEntity(168U);
    msg.value = -20504;

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
    msg.setTimeStamp(0.5119554377214962);
    msg.setSource(34532U);
    msg.setSourceEntity(176U);
    msg.setDestination(17863U);
    msg.setDestinationEntity(212U);
    msg.value = 0.910629585289115;

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
    msg.setTimeStamp(0.9613223317679022);
    msg.setSource(10195U);
    msg.setSourceEntity(21U);
    msg.setDestination(28041U);
    msg.setDestinationEntity(185U);
    msg.value = 0.10377649758138652;

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
    msg.setTimeStamp(0.21648830264436303);
    msg.setSource(58458U);
    msg.setSourceEntity(145U);
    msg.setDestination(8549U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6126178506952656;

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
    msg.setTimeStamp(0.30061081004282997);
    msg.setSource(38267U);
    msg.setSourceEntity(236U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(114U);
    msg.value = 0.30359498381613725;

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
    msg.setTimeStamp(0.054794020677003896);
    msg.setSource(32633U);
    msg.setSourceEntity(11U);
    msg.setDestination(51454U);
    msg.setDestinationEntity(154U);
    msg.value = 0.8347964045135109;

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
    msg.setTimeStamp(0.5842316254207656);
    msg.setSource(62356U);
    msg.setSourceEntity(80U);
    msg.setDestination(43622U);
    msg.setDestinationEntity(249U);
    msg.value = 0.04337975951321782;

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
    msg.setTimeStamp(0.7645677937181503);
    msg.setSource(54481U);
    msg.setSourceEntity(70U);
    msg.setDestination(26077U);
    msg.setDestinationEntity(58U);
    msg.validity = 52215U;
    msg.type = 22U;
    msg.utc_year = 31689U;
    msg.utc_month = 209U;
    msg.utc_day = 35U;
    msg.utc_time = 0.15652168416382728;
    msg.lat = 0.8983960350025489;
    msg.lon = 0.4260337716941359;
    msg.height = 0.5514248383076271;
    msg.satellites = 97U;
    msg.cog = 0.7933728359007128;
    msg.sog = 0.4541247994774954;
    msg.hdop = 0.388544301120766;
    msg.vdop = 0.9385059115414629;
    msg.hacc = 0.2512583403899725;
    msg.vacc = 0.6623660010967536;

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
    msg.setTimeStamp(0.07462153098561475);
    msg.setSource(38601U);
    msg.setSourceEntity(182U);
    msg.setDestination(38624U);
    msg.setDestinationEntity(37U);
    msg.validity = 16156U;
    msg.type = 26U;
    msg.utc_year = 54552U;
    msg.utc_month = 227U;
    msg.utc_day = 164U;
    msg.utc_time = 0.03484678169972544;
    msg.lat = 0.024795836698298768;
    msg.lon = 0.3200269117162434;
    msg.height = 0.7147851325980871;
    msg.satellites = 166U;
    msg.cog = 0.35929670127414737;
    msg.sog = 0.9736411653586107;
    msg.hdop = 0.201500192264356;
    msg.vdop = 0.17063408124993262;
    msg.hacc = 0.0363168122767481;
    msg.vacc = 0.6618592047731668;

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
    msg.setTimeStamp(0.42172932226551574);
    msg.setSource(47393U);
    msg.setSourceEntity(246U);
    msg.setDestination(44586U);
    msg.setDestinationEntity(65U);
    msg.validity = 3186U;
    msg.type = 119U;
    msg.utc_year = 60935U;
    msg.utc_month = 3U;
    msg.utc_day = 154U;
    msg.utc_time = 0.18488612664689363;
    msg.lat = 0.12465756644900261;
    msg.lon = 0.37455495255145965;
    msg.height = 0.39638850407410364;
    msg.satellites = 139U;
    msg.cog = 0.02543895501650928;
    msg.sog = 0.8667169189916579;
    msg.hdop = 0.6550040810403052;
    msg.vdop = 0.13239769445218974;
    msg.hacc = 0.31073701634380435;
    msg.vacc = 0.935202652775833;

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
    msg.setTimeStamp(0.52660518998696);
    msg.setSource(26596U);
    msg.setSourceEntity(68U);
    msg.setDestination(35743U);
    msg.setDestinationEntity(222U);
    msg.time = 0.6791605955075335;
    msg.phi = 0.6949882438624634;
    msg.theta = 0.15202790624230222;
    msg.psi = 0.16988150810982727;
    msg.psi_magnetic = 0.13297971689630095;

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
    msg.setTimeStamp(0.5322188442829522);
    msg.setSource(5981U);
    msg.setSourceEntity(125U);
    msg.setDestination(7152U);
    msg.setDestinationEntity(166U);
    msg.time = 0.9659199107422957;
    msg.phi = 0.9036162213648998;
    msg.theta = 0.2001823039802917;
    msg.psi = 0.3907746492643813;
    msg.psi_magnetic = 0.8013012044930964;

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
    msg.setTimeStamp(0.07823976681652667);
    msg.setSource(25358U);
    msg.setSourceEntity(44U);
    msg.setDestination(58130U);
    msg.setDestinationEntity(87U);
    msg.time = 0.6936524918709791;
    msg.phi = 0.8668127160763499;
    msg.theta = 0.7254525548482861;
    msg.psi = 0.4056420219791059;
    msg.psi_magnetic = 0.09014976597017754;

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
    msg.setTimeStamp(0.05313183052742998);
    msg.setSource(55653U);
    msg.setSourceEntity(78U);
    msg.setDestination(3430U);
    msg.setDestinationEntity(104U);
    msg.time = 0.4270286786489036;
    msg.x = 0.5450938309064141;
    msg.y = 0.8696770280994646;
    msg.z = 0.21870466620572226;
    msg.timestep = 0.8895537556605927;

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
    msg.setTimeStamp(0.2494545289313388);
    msg.setSource(50155U);
    msg.setSourceEntity(32U);
    msg.setDestination(51971U);
    msg.setDestinationEntity(64U);
    msg.time = 0.5604377258978764;
    msg.x = 0.9380113102694506;
    msg.y = 0.0005510159411190596;
    msg.z = 0.31819189908844947;
    msg.timestep = 0.1716377337351509;

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
    msg.setTimeStamp(0.7673633133299543);
    msg.setSource(8094U);
    msg.setSourceEntity(101U);
    msg.setDestination(26356U);
    msg.setDestinationEntity(84U);
    msg.time = 0.30675242057201935;
    msg.x = 0.0772135391724037;
    msg.y = 0.8408146068888;
    msg.z = 0.06121774705423633;
    msg.timestep = 0.5463422499555756;

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
    msg.setTimeStamp(0.11870906631315914);
    msg.setSource(52496U);
    msg.setSourceEntity(115U);
    msg.setDestination(10517U);
    msg.setDestinationEntity(35U);
    msg.time = 0.5761338713596388;
    msg.x = 0.4477764817241374;
    msg.y = 0.6073970124081682;
    msg.z = 0.32935690775909976;

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
    msg.setTimeStamp(0.17630687735862005);
    msg.setSource(48685U);
    msg.setSourceEntity(50U);
    msg.setDestination(57895U);
    msg.setDestinationEntity(84U);
    msg.time = 0.5544125736859401;
    msg.x = 0.6083916140788597;
    msg.y = 0.5411710146718807;
    msg.z = 0.4307779663833139;

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
    msg.setTimeStamp(0.9113999565459089);
    msg.setSource(58466U);
    msg.setSourceEntity(183U);
    msg.setDestination(60369U);
    msg.setDestinationEntity(30U);
    msg.time = 0.24716399232687303;
    msg.x = 0.730921582573375;
    msg.y = 0.8826635538711419;
    msg.z = 0.5925458644978316;

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
    msg.setTimeStamp(0.9350188511215048);
    msg.setSource(48007U);
    msg.setSourceEntity(188U);
    msg.setDestination(51748U);
    msg.setDestinationEntity(158U);
    msg.time = 0.28310875182778505;
    msg.x = 0.4189258498706291;
    msg.y = 0.4937216995972472;
    msg.z = 0.6266860559176775;

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
    msg.setTimeStamp(0.8660527366404409);
    msg.setSource(41930U);
    msg.setSourceEntity(78U);
    msg.setDestination(40961U);
    msg.setDestinationEntity(239U);
    msg.time = 0.8769990839481281;
    msg.x = 0.7697241779758931;
    msg.y = 0.7524948750613624;
    msg.z = 0.04594710524856549;

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
    msg.setTimeStamp(0.3492190000179005);
    msg.setSource(45585U);
    msg.setSourceEntity(230U);
    msg.setDestination(27519U);
    msg.setDestinationEntity(198U);
    msg.time = 0.6723710937059295;
    msg.x = 0.9553231348822702;
    msg.y = 0.9190701712773808;
    msg.z = 0.6390698552445461;

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
    msg.setTimeStamp(0.7579990509687298);
    msg.setSource(6732U);
    msg.setSourceEntity(0U);
    msg.setDestination(19661U);
    msg.setDestinationEntity(148U);
    msg.time = 0.2413253857069536;
    msg.x = 0.6013868498519146;
    msg.y = 0.46833595525881755;
    msg.z = 0.7276107129150127;

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
    msg.setTimeStamp(0.9713243938818189);
    msg.setSource(61992U);
    msg.setSourceEntity(132U);
    msg.setDestination(9975U);
    msg.setDestinationEntity(224U);
    msg.time = 0.9569648969693467;
    msg.x = 0.27060974756382783;
    msg.y = 0.06894479807289056;
    msg.z = 0.09207825148241411;

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
    msg.setTimeStamp(0.7256549134751824);
    msg.setSource(51898U);
    msg.setSourceEntity(27U);
    msg.setDestination(54529U);
    msg.setDestinationEntity(23U);
    msg.time = 0.5472169681096815;
    msg.x = 0.3042713658227525;
    msg.y = 0.5400428715380432;
    msg.z = 0.025149576783423222;

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
    msg.setTimeStamp(0.12779127502853938);
    msg.setSource(35268U);
    msg.setSourceEntity(152U);
    msg.setDestination(17812U);
    msg.setDestinationEntity(228U);
    msg.validity = 79U;
    msg.x = 0.5747051936761773;
    msg.y = 0.40197699364931494;
    msg.z = 0.2606083775830912;

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
    msg.setTimeStamp(0.7146965357564086);
    msg.setSource(6502U);
    msg.setSourceEntity(85U);
    msg.setDestination(30291U);
    msg.setDestinationEntity(114U);
    msg.validity = 148U;
    msg.x = 0.5800729610090155;
    msg.y = 0.9594980660306726;
    msg.z = 0.9827943189750612;

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
    msg.setTimeStamp(0.054935165426208465);
    msg.setSource(8004U);
    msg.setSourceEntity(205U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(202U);
    msg.validity = 13U;
    msg.x = 0.5995945721838232;
    msg.y = 0.6371090372289667;
    msg.z = 0.10164074388680377;

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
    msg.setTimeStamp(0.9675572423831318);
    msg.setSource(28950U);
    msg.setSourceEntity(64U);
    msg.setDestination(38457U);
    msg.setDestinationEntity(128U);
    msg.validity = 220U;
    msg.x = 0.00965527139501099;
    msg.y = 0.10553547869166513;
    msg.z = 0.31609438186608596;

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
    msg.setTimeStamp(0.5227987477453745);
    msg.setSource(19721U);
    msg.setSourceEntity(238U);
    msg.setDestination(15096U);
    msg.setDestinationEntity(189U);
    msg.validity = 182U;
    msg.x = 0.76682384601186;
    msg.y = 0.3725855355045017;
    msg.z = 0.9724903348371432;

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
    msg.setTimeStamp(0.7725650744210082);
    msg.setSource(63446U);
    msg.setSourceEntity(38U);
    msg.setDestination(22274U);
    msg.setDestinationEntity(227U);
    msg.validity = 237U;
    msg.x = 0.8090256483518301;
    msg.y = 0.7836312809068633;
    msg.z = 0.835085951431722;

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
    msg.setTimeStamp(0.1781135518185034);
    msg.setSource(12181U);
    msg.setSourceEntity(6U);
    msg.setDestination(55913U);
    msg.setDestinationEntity(35U);
    msg.time = 0.8728226969793549;
    msg.x = 0.9530051504067456;
    msg.y = 0.46843204927231574;
    msg.z = 0.15990323252566518;

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
    msg.setTimeStamp(0.38818881815322404);
    msg.setSource(34121U);
    msg.setSourceEntity(15U);
    msg.setDestination(58414U);
    msg.setDestinationEntity(235U);
    msg.time = 0.5152715179512816;
    msg.x = 0.5327638425147834;
    msg.y = 0.17621815507497884;
    msg.z = 0.4798507287334428;

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
    msg.setTimeStamp(0.5731391351984074);
    msg.setSource(18737U);
    msg.setSourceEntity(66U);
    msg.setDestination(58468U);
    msg.setDestinationEntity(136U);
    msg.time = 0.6865802558550941;
    msg.x = 0.5630929709505081;
    msg.y = 0.8046006025550064;
    msg.z = 0.8369735062193164;

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
    msg.setTimeStamp(0.23692043892035708);
    msg.setSource(56701U);
    msg.setSourceEntity(79U);
    msg.setDestination(61325U);
    msg.setDestinationEntity(11U);
    msg.validity = 87U;
    msg.value = 0.9573927616303758;

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
    msg.setTimeStamp(0.6496929441764926);
    msg.setSource(54530U);
    msg.setSourceEntity(182U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(160U);
    msg.validity = 45U;
    msg.value = 0.6085225760460543;

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
    msg.setTimeStamp(0.017887792966692517);
    msg.setSource(46351U);
    msg.setSourceEntity(141U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(154U);
    msg.validity = 118U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4853437229129647;
    tmp_msg_0.y = 0.35924235176201924;
    tmp_msg_0.z = 0.11517108279180244;
    tmp_msg_0.phi = 0.5133664307575871;
    tmp_msg_0.theta = 0.1371965246424489;
    tmp_msg_0.psi = 0.25917921496689655;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.09475649936789587;
    tmp_msg_1.beam_height = 0.4873734099760392;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.3472367974092069;

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
    msg.setTimeStamp(0.33274738714466967);
    msg.setSource(3957U);
    msg.setSourceEntity(211U);
    msg.setDestination(27519U);
    msg.setDestinationEntity(17U);
    msg.value = 0.5358756760914161;

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
    msg.setTimeStamp(0.7869273233388066);
    msg.setSource(3737U);
    msg.setSourceEntity(110U);
    msg.setDestination(51508U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7594229605047176;

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
    msg.setTimeStamp(0.30899989411808415);
    msg.setSource(9492U);
    msg.setSourceEntity(181U);
    msg.setDestination(55025U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9624826412787888;

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
    msg.setTimeStamp(0.08829732037808202);
    msg.setSource(42947U);
    msg.setSourceEntity(148U);
    msg.setDestination(64561U);
    msg.setDestinationEntity(236U);
    msg.value = 0.40392476125639254;

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
    msg.setTimeStamp(0.17104245706392995);
    msg.setSource(60038U);
    msg.setSourceEntity(140U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(26U);
    msg.value = 0.34157232605723997;

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
    msg.setTimeStamp(0.9211995527986871);
    msg.setSource(48352U);
    msg.setSourceEntity(75U);
    msg.setDestination(59806U);
    msg.setDestinationEntity(12U);
    msg.value = 0.20990310610037688;

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
    msg.setTimeStamp(0.6521179580716261);
    msg.setSource(44607U);
    msg.setSourceEntity(141U);
    msg.setDestination(65398U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8554738905609303;

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
    msg.setTimeStamp(0.24176208748936334);
    msg.setSource(48044U);
    msg.setSourceEntity(15U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8006388635122647;

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
    msg.setTimeStamp(0.1306437812059491);
    msg.setSource(63382U);
    msg.setSourceEntity(227U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(128U);
    msg.value = 0.2227146165728825;

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
    msg.setTimeStamp(0.7363010074482415);
    msg.setSource(3391U);
    msg.setSourceEntity(71U);
    msg.setDestination(7906U);
    msg.setDestinationEntity(160U);
    msg.value = 0.011704857629390553;

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
    msg.setTimeStamp(0.6313109714074941);
    msg.setSource(9842U);
    msg.setSourceEntity(114U);
    msg.setDestination(19771U);
    msg.setDestinationEntity(226U);
    msg.value = 0.9895136558437088;

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
    msg.setTimeStamp(0.8309100506742658);
    msg.setSource(34153U);
    msg.setSourceEntity(12U);
    msg.setDestination(42867U);
    msg.setDestinationEntity(48U);
    msg.value = 0.591227296801442;

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
    msg.setTimeStamp(0.16744433955659066);
    msg.setSource(12103U);
    msg.setSourceEntity(87U);
    msg.setDestination(4749U);
    msg.setDestinationEntity(247U);
    msg.value = 0.6002773140519675;

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
    msg.setTimeStamp(0.08718534488184915);
    msg.setSource(55887U);
    msg.setSourceEntity(7U);
    msg.setDestination(21454U);
    msg.setDestinationEntity(26U);
    msg.value = 0.7925886307907073;

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
    msg.setTimeStamp(0.8256952369492359);
    msg.setSource(51598U);
    msg.setSourceEntity(180U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(172U);
    msg.value = 0.1748342216907901;

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
    msg.setTimeStamp(0.2996927375928351);
    msg.setSource(41541U);
    msg.setSourceEntity(67U);
    msg.setDestination(43112U);
    msg.setDestinationEntity(39U);
    msg.value = 0.00030662527650549;

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
    msg.setTimeStamp(0.565956110472497);
    msg.setSource(61305U);
    msg.setSourceEntity(18U);
    msg.setDestination(61438U);
    msg.setDestinationEntity(169U);
    msg.value = 0.5010314918784821;

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
    msg.setTimeStamp(0.5305290812992433);
    msg.setSource(6613U);
    msg.setSourceEntity(128U);
    msg.setDestination(13754U);
    msg.setDestinationEntity(76U);
    msg.value = 0.7554078522984073;

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
    msg.setTimeStamp(0.5867972417359356);
    msg.setSource(53877U);
    msg.setSourceEntity(61U);
    msg.setDestination(31754U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9141976614928178;

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
    msg.setTimeStamp(0.520164363518199);
    msg.setSource(30512U);
    msg.setSourceEntity(209U);
    msg.setDestination(28931U);
    msg.setDestinationEntity(230U);
    msg.value = 0.8074583494581267;

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
    msg.setTimeStamp(0.9153152248179893);
    msg.setSource(6953U);
    msg.setSourceEntity(152U);
    msg.setDestination(44634U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9700011128523185;

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
    msg.setTimeStamp(0.19328318560287416);
    msg.setSource(40571U);
    msg.setSourceEntity(104U);
    msg.setDestination(28674U);
    msg.setDestinationEntity(241U);
    msg.value = 0.007138078536206294;

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
    msg.setTimeStamp(0.7059753095494903);
    msg.setSource(31141U);
    msg.setSourceEntity(128U);
    msg.setDestination(10063U);
    msg.setDestinationEntity(75U);
    msg.value = 0.9657519201744649;

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
    msg.setTimeStamp(0.6301562467983958);
    msg.setSource(27292U);
    msg.setSourceEntity(170U);
    msg.setDestination(34373U);
    msg.setDestinationEntity(102U);
    msg.value = 0.9445473976976705;

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
    msg.setTimeStamp(0.7225475936941916);
    msg.setSource(20312U);
    msg.setSourceEntity(140U);
    msg.setDestination(59428U);
    msg.setDestinationEntity(239U);
    msg.direction = 0.7672291698235483;
    msg.speed = 0.9740042878185041;
    msg.turbulence = 0.3089400515850258;

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
    msg.setTimeStamp(0.548985140798591);
    msg.setSource(32322U);
    msg.setSourceEntity(20U);
    msg.setDestination(41407U);
    msg.setDestinationEntity(2U);
    msg.direction = 0.6606732381118696;
    msg.speed = 0.5419134364420526;
    msg.turbulence = 0.9782056980039286;

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
    msg.setTimeStamp(0.0373125243979513);
    msg.setSource(26479U);
    msg.setSourceEntity(34U);
    msg.setDestination(5349U);
    msg.setDestinationEntity(201U);
    msg.direction = 0.2781892452382322;
    msg.speed = 0.5901893146028346;
    msg.turbulence = 0.9311306426970203;

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
    msg.setTimeStamp(0.7789882772375442);
    msg.setSource(62632U);
    msg.setSourceEntity(17U);
    msg.setDestination(896U);
    msg.setDestinationEntity(140U);
    msg.value = 0.94233464355234;

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
    msg.setTimeStamp(0.3324971478171217);
    msg.setSource(17216U);
    msg.setSourceEntity(73U);
    msg.setDestination(3223U);
    msg.setDestinationEntity(251U);
    msg.value = 0.30222715228856023;

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
    msg.setTimeStamp(0.672631752854267);
    msg.setSource(17388U);
    msg.setSourceEntity(117U);
    msg.setDestination(39146U);
    msg.setDestinationEntity(65U);
    msg.value = 0.0015761947660243303;

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
    msg.setTimeStamp(0.874161690730779);
    msg.setSource(16179U);
    msg.setSourceEntity(199U);
    msg.setDestination(49889U);
    msg.setDestinationEntity(115U);
    msg.value.assign("NCCJNLOHZPTSVJXTPAZLKDTSBYZKRQNEWMSTSQBEZKSUMZKEXMIGDNOFOFZGTXBZPTWWGWHVQNUWOIEDRLNXKKPLHDCHZWXNEAEAGFQPAUGOUHIWIFSRFJMLZUABPXRVXYVRRFBOUDKQJXJQVUQMSVKQAAPVRDTRYJCNRTUJOUZMHDMFOSHWIIHTVUGOTMGBWIJJCCIEYHGBELIYFLAIDNYKMV");

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
    msg.setTimeStamp(0.20344245839678);
    msg.setSource(24931U);
    msg.setSourceEntity(191U);
    msg.setDestination(14424U);
    msg.setDestinationEntity(66U);
    msg.value.assign("SBVMWWQLZJDOYVRNNTFZPDKHJGZVCLPGSAALMZEUACIKXUEJSHQWNHMDAJRYTSNIFMKCUHEYKXMASWMDFBPYIIMVWLGQCDMIRTKDOGCXQUKYLZINASZVJNTHXRJQBXHZPOIQKDRKWOCPTCYFVOZAJZXCPCGBRYJTOKXGHDBFHNEDLELFECBRBAEIXTYOMWREUNANUFVFFSUYPOSIFBGLGBIRTYEQGJWAWBUHMUOPLOEVNLSPTXSTQQDJZVHVUR");

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
    msg.setTimeStamp(0.05139719307282442);
    msg.setSource(20082U);
    msg.setSourceEntity(103U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(210U);
    msg.value.assign("PNJERBCJPEYDXOBELHYKABCBLOPOAMAQLJDUWCEVNANSKMWPYBVDEAYYLPVZIXFFOTHCNCKHLUHIMSEDVREJYGIKFAVGKRYXWQNXZXSDTHTGOQWZACLDKTFNHMHFTIXQUVPBPOZQVURGUIEXGLWOGSHZNOMSKSLXQOLTPZQIBMDTJCTFFJAHCPJ");

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
    msg.setTimeStamp(0.8740045254024785);
    msg.setSource(62697U);
    msg.setSourceEntity(101U);
    msg.setDestination(51645U);
    msg.setDestinationEntity(233U);
    const char tmp_msg_0[] = {6, -63, 42, -126, -1, -88, -106, 35, 84, 46, 83, -79, 93, 57, 67, -99, 102, 16, -24, 75, -13, -103, -30, 20, -4, -47, -64, -121, 107, -6, 38, 97, 9, 27, 126, -94, -126, 122, 125, -35, -42, 8, 43, -75, 83, 21, -28, 19, -43, -62, -15, -97, 97, -113, -101, -64, -121, 95, 14, -40, 80, 28, -25, -86, -114, -104, -45, 114, 20, -4, -19, 74, -41, 123, -28, -14, 91, 111, -24, 98, -81, -104, 119, -14, -98, 48, -124, -52, 11, 116, 106, 28, -77, 126, -17, 100, -115, -21, -49, 28, -112, 33, -38, 117, -38, 92, 123, -23};
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
    msg.setTimeStamp(0.2122274442894415);
    msg.setSource(31861U);
    msg.setSourceEntity(207U);
    msg.setDestination(5189U);
    msg.setDestinationEntity(130U);
    const char tmp_msg_0[] = {-122, 47, -126, 104, 70, -83, 12, -26, 78, 57, 37, 82, 99, -59, -89, -72, 122, -39, -93, 64, -56, -32, 40, -121, -7, 86, 2, 108, 53, 62, -97, -97, -15, -63, -86, -39, 27, 34, -37, -61, -46, 1, 16, -29, -121, -75, 63, 30, 85, -27, 123, 60, 60, -100, -15, 41, -70, 51, 118, -106, 72, 124, 110, 13, -78, -68, -88, -111, 77, 95, 58, 6, -22, -15, -122, 59, -68, 2, -116, 117, 94, -16, 65, -64, -30, 36, 114, 90, -26, 55, 39, -85, 50, -51, -89, -55, 7, -95, 3, 108, 63, 97, 108, 31, -98, -53, -45, -49, -18, -100, -22, -72, -48, -81, 120, -56, -6, 81, 82, -99, -63, -75, -19, -44, 25, 90, 81, 97, -99, 38, 71, 89, -65, 122, -80, -21, 103, 124, -7, 50, 45, -11, -30, 117, -32, 81, -115, 65, -51, 109, 29, 88, -46, -36, -48, -35, -17, -12, -68, -33, -60, -85, 21, -81, -20, -128, 66, -1, 30, -65};
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
    msg.setTimeStamp(0.550417963274666);
    msg.setSource(51679U);
    msg.setSourceEntity(100U);
    msg.setDestination(50198U);
    msg.setDestinationEntity(232U);
    const char tmp_msg_0[] = {-61, -24, 82, 91, 83, -63, -36, -61, 59, 46, 122, -33, -107, -104, -39, -39, -122, 53, -72, -55, -119, -51, 114, -90, 107, -74, 26, -62, 55, 92, 63, -105, -106, -85, -29, -2, -48, 7, 14, -10, -125, 31, 21, -46, 90, 115, 2, -63, 84, 64, 30, 71, 17, 97, 110, -16, 46, -90, -103, -95, -110, -110, 79, 96, 121, 58, 120, 95, 67, 113, 33, 122, 15, 14, 56, 19, -102, 14, -89, -6, 65, -46, -86, 6, -29, 14, 95, -21, 21, 53, -119, 64, -127, 96, -92, -71, -88, -67, 89, 14, -55, 22, 18, 26, 52, -110, 98, -83, -49, 30, -46, -101, 60, 120, -107, -68, 106, 44, 17, 60, -112, -27, 116, -84, 59, -119, -82, -5, -14, -108, -87, 99, 71, 68, -89, -67, 11, -62, -99, 108, 107, 112, -15, -29, -103, -72, 92, 23, -32, -76, -67, 50, -42, 47, 1, -58, 72, -4, 64, 47, 39, 26, 15, -120, -40, 2, -90, -126, 14, -8, -35, -120, 88, -88, -98, -59, 85, -103, -102, 103};
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
    msg.setTimeStamp(0.31854605440341766);
    msg.setSource(7324U);
    msg.setSourceEntity(231U);
    msg.setDestination(60512U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5372524058644245;

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
    msg.setTimeStamp(0.5534573677130121);
    msg.setSource(29076U);
    msg.setSourceEntity(104U);
    msg.setDestination(50564U);
    msg.setDestinationEntity(33U);
    msg.value = 0.3592165657296883;

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
    msg.setTimeStamp(0.8757093036698689);
    msg.setSource(19227U);
    msg.setSourceEntity(27U);
    msg.setDestination(63133U);
    msg.setDestinationEntity(247U);
    msg.value = 0.46554079042910446;

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
    msg.setTimeStamp(0.27861907615285364);
    msg.setSource(50918U);
    msg.setSourceEntity(5U);
    msg.setDestination(17738U);
    msg.setDestinationEntity(147U);
    msg.type = 100U;
    msg.frequency = 1638529248U;
    msg.min_range = 11903U;
    msg.max_range = 4829U;
    msg.bits_per_point = 179U;
    msg.scale_factor = 0.16326345700049683;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.23806254073398325;
    tmp_msg_0.beam_height = 0.6562071935533753;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {126, -114, 55, -43, 4, 77, 15, 125, -74, -12, 57, -100, -100, 8, -126, 13, 105, 97, -74, 59, -109, 121, 62, -18, 29, 32, -43, 123, -43, -44, 64, 96, -85, -89, 20, -36, -30, 60, -45, 37, -125, 107, -21, 40, 62, -99, 92, 13, 66, -31, 52, -69, -73, 94, 49, -75, -44, 98, -72, -34, -74, 104, -60, 52, -125, -88, -55, -7, 59, -33, -66, -35, 97, -5, -21, -34, 2, -26, 54, -124, 79, 1, -125, -76, 60, 121, -113, -32, -53, -124, 86, -40, 124, 102, -17, 36, 66, 105, -49, -2, -44, 82, 52, -18, -82, -51, -34, -49, 103, 7, 59, 45, 44, -19, 23, -19, -21, 76, 58, 121, -10, 105, -80, -40, -69, 92, -94, -54, -91, -100, 97, 6, -41, 36, 92, -15, 72, -41, 49, 70, -54, -36, -77, 118, -121};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.334885354580328);
    msg.setSource(30613U);
    msg.setSourceEntity(106U);
    msg.setDestination(43341U);
    msg.setDestinationEntity(190U);
    msg.type = 105U;
    msg.frequency = 1012358931U;
    msg.min_range = 13011U;
    msg.max_range = 17610U;
    msg.bits_per_point = 233U;
    msg.scale_factor = 0.5665980598783595;
    const char tmp_msg_0[] = {83, 35, 64, 58, -24, -8, 121, -78, 106, -38, 0, 80, -67, 80, 126, -94, 61, 118, 0, 46, 33, 97, -76, -49, -81, 29, -114, 2, 83, -79, 69, -120, 63, -18, -86, -127, -61, -6, -87, 87, 64, -109, -95, -55, -93, -79, 3, 30, -91, 76, 102, 11, -19, 105, 31, -78, 19, -44, 90, 71, 19, -11, 105, -28, 13, 15, 32, -107, 77, 67, -98, -57, 107, -25, -51, 23, -22, 54, -121, 50, 71, -70, -86, 61, -6, -26, -112, -128, -121, -52, -77, -51, -78, -56, -78, -73, 9, 38, 65, 34, 85, -33, 35, 88, 24, -85, -49, 110, -45, -18, 117, 7, 78, -94, -69, -40, -64, -17, -27, -38, 82, 73, -41, -13, -63, -94, -72, -114, -28, 112, -44, 36, -52, -3, -89, -99, 24, 78, -97, 56, -12, -28, -16, -15, -67, 45, -32, 98, 15, -97, 85, -120, 35, 35, 68, 109, 15, 40, 82, -7, 17, -62, 99, -52, 19, -106, -74, -90, -128, 80, -87, 71, -105, -118, 47, -48, -85, -35, -15, -47, 47, 27, -121, 28, -51, 15, -114, 116, 35, -126, 49, -65, -28, 27, 38, 38, 25, -19, 101, 82, -57, 5};
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
    msg.setTimeStamp(0.3143499607815925);
    msg.setSource(65065U);
    msg.setSourceEntity(203U);
    msg.setDestination(40329U);
    msg.setDestinationEntity(181U);
    msg.type = 23U;
    msg.frequency = 2370153455U;
    msg.min_range = 9066U;
    msg.max_range = 6257U;
    msg.bits_per_point = 56U;
    msg.scale_factor = 0.5991489624124787;
    const char tmp_msg_0[] = {-91, -39, 43, 26, -26, -91, -20, 73, 94, 22, 5, -28, -48, -9, 111, 63, -87, -96, 101, 21, 68, 102, 22, 81, 81, 23, 15, 55, -11, 11, -50, 54, -26, 78, -105, -93, -117, -123, 51, 43, -68, 73, -89, -72, 13, 47, -63, -86, -41, 33, -106, -119, 1, 89, 51, -45, -122, -58, 42, 32, 1, 61, 68, -28, -14, 15, -47, -97, 2, -69, -101, -24, 27, 121, -95, 14, 65, -59, -38, -61, -75, -30, -65, 54, 54, 104, -111, 26, -13, -74, 36, -95, 100, -102, -107, -66, -128, -16, 16, 5, 64, -27, -19, -82, 121, -10, 4, -112, -61, 38, 107, 89, -95, 23, 56, 100, -40, -22, -125, 15, 38, -108, 77, 15, -109, -114, -60, 123, 55, 17, -59, 27, -111, 65, -6, 35, -94, -10, -27, -93, 45, 59, -87, 12, 70, 91, -107, -105, -86, 98};
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
    msg.setTimeStamp(0.544927856676062);
    msg.setSource(34657U);
    msg.setSourceEntity(64U);
    msg.setDestination(35752U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.3488535347300552);
    msg.setSource(16980U);
    msg.setSourceEntity(114U);
    msg.setDestination(54295U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.3690573219359199);
    msg.setSource(60521U);
    msg.setSourceEntity(27U);
    msg.setDestination(51386U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.22565821338977354);
    msg.setSource(6757U);
    msg.setSourceEntity(50U);
    msg.setDestination(36026U);
    msg.setDestinationEntity(1U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.19052110927783372);
    msg.setSource(18047U);
    msg.setSourceEntity(249U);
    msg.setDestination(9888U);
    msg.setDestinationEntity(184U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.9425981815670036);
    msg.setSource(59445U);
    msg.setSourceEntity(189U);
    msg.setDestination(31984U);
    msg.setDestinationEntity(242U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.5050712805813329);
    msg.setSource(14505U);
    msg.setSourceEntity(6U);
    msg.setDestination(58620U);
    msg.setDestinationEntity(49U);
    msg.value = 0.07969070173187542;
    msg.confidence = 0.3438656927382282;
    msg.opmodes.assign("QIULYCPPLAXNDNJEDYFSGTXZWLMZOFUPZGOKPYHPREJTVDAMKIHQWBPYANWNXBGQXARMTRKQGBUIKKACMMTRSBCVHREYMFIBYJJAPGK");

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
    msg.setTimeStamp(0.26119469032027576);
    msg.setSource(20180U);
    msg.setSourceEntity(244U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(67U);
    msg.value = 0.2784395647377459;
    msg.confidence = 0.46913201176028196;
    msg.opmodes.assign("FTSMELOAGHFTFQALIVYSBVEGRZZVKNFKIYMPTRRTPLWTQDBEOPHWJNRSVWBTMYENZUVNZAQUZPHDCYFGTHQLRLIQBIZSLWAMKUCETJKRXVJGWTTEBRUIPXYXNCKFEHKIDUYUMKCXPOVWRYUQURADUIGDBMGAJWSFCOQVVGFWKCPN");

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
    msg.setTimeStamp(0.3181874427663307);
    msg.setSource(5469U);
    msg.setSourceEntity(51U);
    msg.setDestination(50677U);
    msg.setDestinationEntity(251U);
    msg.value = 0.3878469813594122;
    msg.confidence = 0.48628249080280495;
    msg.opmodes.assign("NFFKMSKMHPLQTNSDGFXSXBVBOTWHPDXETMJENJTVCPOILHRSZPNCPWUIUOGCLKBXBQZIHPVRUSMUGKMCUHJZQIAAOKRZMLAJQWYQDKNZXMCEISYMXURILWSDVBTKGCVRZGDRWDPERJZHIBSFMVFUCVUAJFAKETCAUGNDBHABTXPYKNJZUSJEVDFLCYXONJYWVYAQRZFEBDR");

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
    msg.setTimeStamp(0.47880345985310124);
    msg.setSource(2649U);
    msg.setSourceEntity(131U);
    msg.setDestination(45502U);
    msg.setDestinationEntity(249U);
    msg.itow = 2526184490U;
    msg.lat = 0.7554937318623203;
    msg.lon = 0.8099700380359803;
    msg.height_ell = 0.7453657630028582;
    msg.height_sea = 0.41236020250148053;
    msg.hacc = 0.9164200461411759;
    msg.vacc = 0.550402764485369;
    msg.vel_n = 0.40124761722810676;
    msg.vel_e = 0.9650576135913081;
    msg.vel_d = 0.3090998808227543;
    msg.speed = 0.45804269518577034;
    msg.gspeed = 0.28501734305936055;
    msg.heading = 0.957547366058554;
    msg.sacc = 0.1918791200809148;
    msg.cacc = 0.7346335064843196;

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
    msg.setTimeStamp(0.2201325530740229);
    msg.setSource(23246U);
    msg.setSourceEntity(23U);
    msg.setDestination(47575U);
    msg.setDestinationEntity(195U);
    msg.itow = 2999999798U;
    msg.lat = 0.07742981370591706;
    msg.lon = 0.9007267634230357;
    msg.height_ell = 0.4079656295888455;
    msg.height_sea = 0.0641089955292733;
    msg.hacc = 0.898493505884289;
    msg.vacc = 0.5056352853122834;
    msg.vel_n = 0.23018199207015277;
    msg.vel_e = 0.5068894029087203;
    msg.vel_d = 0.24408391055280199;
    msg.speed = 0.8270476620230276;
    msg.gspeed = 0.09061600144818549;
    msg.heading = 0.7570751558788493;
    msg.sacc = 0.1670166272269299;
    msg.cacc = 0.8656694572323084;

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
    msg.setTimeStamp(0.08471200878989527);
    msg.setSource(21947U);
    msg.setSourceEntity(253U);
    msg.setDestination(29777U);
    msg.setDestinationEntity(130U);
    msg.itow = 1004154201U;
    msg.lat = 0.7679421056935931;
    msg.lon = 0.794903774241984;
    msg.height_ell = 0.4173794963015256;
    msg.height_sea = 0.04316256092041659;
    msg.hacc = 0.7081297944758128;
    msg.vacc = 0.563470004048319;
    msg.vel_n = 0.8579710019325766;
    msg.vel_e = 0.7207866266757724;
    msg.vel_d = 0.4485932330338769;
    msg.speed = 0.49670717125901565;
    msg.gspeed = 0.3810029126624217;
    msg.heading = 0.5410156752716293;
    msg.sacc = 0.779682411658125;
    msg.cacc = 0.21760615501968383;

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
    msg.setTimeStamp(0.47766080087962903);
    msg.setSource(19724U);
    msg.setSourceEntity(170U);
    msg.setDestination(15195U);
    msg.setDestinationEntity(216U);
    msg.id = 72U;
    msg.value = 0.9781567207568239;

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
    msg.setTimeStamp(0.10760365065630051);
    msg.setSource(48590U);
    msg.setSourceEntity(253U);
    msg.setDestination(18972U);
    msg.setDestinationEntity(209U);
    msg.id = 29U;
    msg.value = 0.08393119230595536;

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
    msg.setTimeStamp(0.3439382514222751);
    msg.setSource(46109U);
    msg.setSourceEntity(177U);
    msg.setDestination(4649U);
    msg.setDestinationEntity(157U);
    msg.id = 195U;
    msg.value = 0.5601443961502492;

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
    msg.setTimeStamp(0.3202388725041322);
    msg.setSource(24305U);
    msg.setSourceEntity(54U);
    msg.setDestination(9885U);
    msg.setDestinationEntity(114U);
    msg.x = 0.9496916688512264;
    msg.y = 0.09710832018205673;
    msg.z = 0.08335472697258273;
    msg.phi = 0.3920552978820455;
    msg.theta = 0.7182774967244224;
    msg.psi = 0.8090293091108636;

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
    msg.setTimeStamp(0.3020392304158098);
    msg.setSource(38007U);
    msg.setSourceEntity(89U);
    msg.setDestination(59870U);
    msg.setDestinationEntity(197U);
    msg.x = 0.6866429242214791;
    msg.y = 0.16121582308664095;
    msg.z = 0.5493460941267164;
    msg.phi = 0.7885948167806195;
    msg.theta = 0.39833291495820167;
    msg.psi = 0.4064228395662919;

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
    msg.setTimeStamp(0.6388430243816486);
    msg.setSource(6686U);
    msg.setSourceEntity(189U);
    msg.setDestination(31513U);
    msg.setDestinationEntity(232U);
    msg.x = 0.37759176536425854;
    msg.y = 0.2584222949272438;
    msg.z = 0.7792629488182992;
    msg.phi = 0.9522629409532195;
    msg.theta = 0.19747277890826964;
    msg.psi = 0.17407410084292552;

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
    msg.setTimeStamp(0.6483173297872599);
    msg.setSource(2182U);
    msg.setSourceEntity(144U);
    msg.setDestination(60121U);
    msg.setDestinationEntity(84U);
    msg.beam_width = 0.9909513945194344;
    msg.beam_height = 0.5762579061789672;

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
    msg.setTimeStamp(0.48462392495596474);
    msg.setSource(11016U);
    msg.setSourceEntity(234U);
    msg.setDestination(50095U);
    msg.setDestinationEntity(170U);
    msg.beam_width = 0.9222537083315279;
    msg.beam_height = 0.09659404623960166;

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
    msg.setTimeStamp(0.8490419084538574);
    msg.setSource(35985U);
    msg.setSourceEntity(198U);
    msg.setDestination(15446U);
    msg.setDestinationEntity(209U);
    msg.beam_width = 0.599537689788719;
    msg.beam_height = 0.49443736319024967;

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
    msg.setTimeStamp(0.559835549636959);
    msg.setSource(26676U);
    msg.setSourceEntity(71U);
    msg.setDestination(29568U);
    msg.setDestinationEntity(61U);
    msg.sane = 194U;

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
    msg.setTimeStamp(0.7578541820136795);
    msg.setSource(47786U);
    msg.setSourceEntity(25U);
    msg.setDestination(45090U);
    msg.setDestinationEntity(218U);
    msg.sane = 27U;

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
    msg.setTimeStamp(0.4116664140343006);
    msg.setSource(26754U);
    msg.setSourceEntity(15U);
    msg.setDestination(56976U);
    msg.setDestinationEntity(191U);
    msg.sane = 115U;

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
    msg.setTimeStamp(0.480826404459323);
    msg.setSource(32649U);
    msg.setSourceEntity(203U);
    msg.setDestination(37249U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6997632727201412;

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
    msg.setTimeStamp(0.45144422006948937);
    msg.setSource(39132U);
    msg.setSourceEntity(173U);
    msg.setDestination(12231U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7840925216088497;

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
    msg.setTimeStamp(0.23857593257084453);
    msg.setSource(18636U);
    msg.setSourceEntity(114U);
    msg.setDestination(54859U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9815405860991498;

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
    msg.setTimeStamp(0.045344371959754715);
    msg.setSource(12036U);
    msg.setSourceEntity(187U);
    msg.setDestination(34414U);
    msg.setDestinationEntity(18U);
    msg.value = 0.05650046307875478;

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
    msg.setTimeStamp(0.16070180169650938);
    msg.setSource(2493U);
    msg.setSourceEntity(50U);
    msg.setDestination(25528U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5973400563762418;

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
    msg.setTimeStamp(0.7207136031573718);
    msg.setSource(58841U);
    msg.setSourceEntity(246U);
    msg.setDestination(38711U);
    msg.setDestinationEntity(143U);
    msg.value = 0.29652071035757643;

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
    msg.setTimeStamp(0.38262392307685567);
    msg.setSource(12434U);
    msg.setSourceEntity(20U);
    msg.setDestination(500U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8068715698334749;

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
    msg.setTimeStamp(0.8926494484727042);
    msg.setSource(6769U);
    msg.setSourceEntity(218U);
    msg.setDestination(37005U);
    msg.setDestinationEntity(51U);
    msg.value = 0.2787313383348108;

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
    msg.setTimeStamp(0.5442055715911732);
    msg.setSource(42982U);
    msg.setSourceEntity(124U);
    msg.setDestination(49773U);
    msg.setDestinationEntity(182U);
    msg.value = 0.05194156383608439;

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
    msg.setTimeStamp(0.7572556371146073);
    msg.setSource(60382U);
    msg.setSourceEntity(189U);
    msg.setDestination(52263U);
    msg.setDestinationEntity(9U);
    msg.value = 0.010804710932008743;

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
    msg.setTimeStamp(0.5930783326729435);
    msg.setSource(37289U);
    msg.setSourceEntity(122U);
    msg.setDestination(39392U);
    msg.setDestinationEntity(36U);
    msg.value = 0.7755368400655324;

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
    msg.setTimeStamp(0.18193706116923902);
    msg.setSource(52366U);
    msg.setSourceEntity(174U);
    msg.setDestination(59458U);
    msg.setDestinationEntity(9U);
    msg.value = 0.33443609386966966;

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
    msg.setTimeStamp(0.03707544692830811);
    msg.setSource(47240U);
    msg.setSourceEntity(132U);
    msg.setDestination(4802U);
    msg.setDestinationEntity(70U);
    msg.value = 0.5944580731369136;

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
    msg.setTimeStamp(0.42098038481445144);
    msg.setSource(17030U);
    msg.setSourceEntity(133U);
    msg.setDestination(63041U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6428686081573859;

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
    msg.setTimeStamp(0.5777539167929768);
    msg.setSource(576U);
    msg.setSourceEntity(39U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8982807583496939;

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
    msg.setTimeStamp(0.33570374654293456);
    msg.setSource(38593U);
    msg.setSourceEntity(22U);
    msg.setDestination(892U);
    msg.setDestinationEntity(119U);
    msg.value = 0.313758622045764;

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
    msg.setTimeStamp(0.27839774276115603);
    msg.setSource(36010U);
    msg.setSourceEntity(147U);
    msg.setDestination(50922U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9206030189436751;

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
    msg.setTimeStamp(0.6688428253310037);
    msg.setSource(26208U);
    msg.setSourceEntity(100U);
    msg.setDestination(42379U);
    msg.setDestinationEntity(244U);
    msg.value = 0.9781118535591061;

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
    msg.setTimeStamp(0.34010114193817076);
    msg.setSource(8998U);
    msg.setSourceEntity(76U);
    msg.setDestination(23099U);
    msg.setDestinationEntity(86U);
    msg.value = 0.8218017980167793;

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
    msg.setTimeStamp(0.5823618911042507);
    msg.setSource(47366U);
    msg.setSourceEntity(91U);
    msg.setDestination(9337U);
    msg.setDestinationEntity(248U);
    msg.value = 0.7685360161957482;

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
    msg.setTimeStamp(0.0651042040255514);
    msg.setSource(39265U);
    msg.setSourceEntity(22U);
    msg.setDestination(44243U);
    msg.setDestinationEntity(92U);
    msg.value = 0.025326195889355474;

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
    msg.setTimeStamp(0.8100273388760768);
    msg.setSource(52974U);
    msg.setSourceEntity(105U);
    msg.setDestination(5046U);
    msg.setDestinationEntity(169U);
    msg.value = 0.14082578688774516;

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
    msg.setTimeStamp(0.9556687015091049);
    msg.setSource(31708U);
    msg.setSourceEntity(140U);
    msg.setDestination(4232U);
    msg.setDestinationEntity(248U);
    msg.value = 0.18982085175195718;

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
    msg.setTimeStamp(0.910540737684826);
    msg.setSource(37757U);
    msg.setSourceEntity(47U);
    msg.setDestination(1606U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7073719550484273;

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
    msg.setTimeStamp(0.7965748215169325);
    msg.setSource(54605U);
    msg.setSourceEntity(134U);
    msg.setDestination(13029U);
    msg.setDestinationEntity(16U);
    msg.validity = 53171U;
    msg.type = 64U;
    msg.tow = 642798717U;
    msg.base_lat = 0.46241058392428136;
    msg.base_lon = 0.2581504663189188;
    msg.base_height = 0.9505412131956351;
    msg.n = 0.8024592365307883;
    msg.e = 0.6029408548564611;
    msg.d = 0.96701416790438;
    msg.v_n = 0.8651290162427446;
    msg.v_e = 0.17504093584288105;
    msg.v_d = 0.3835436678385573;
    msg.satellites = 38U;
    msg.iar_hyp = 13123U;
    msg.iar_ratio = 0.8943076840022067;

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
    msg.setTimeStamp(0.1974631947518618);
    msg.setSource(65031U);
    msg.setSourceEntity(75U);
    msg.setDestination(10956U);
    msg.setDestinationEntity(190U);
    msg.validity = 5445U;
    msg.type = 145U;
    msg.tow = 2143032725U;
    msg.base_lat = 0.6936655412421684;
    msg.base_lon = 0.21156279016697388;
    msg.base_height = 0.4788855936578399;
    msg.n = 0.6615937872051986;
    msg.e = 0.7363151349566514;
    msg.d = 0.5078809886791131;
    msg.v_n = 0.8325485399755311;
    msg.v_e = 0.5259981992024447;
    msg.v_d = 0.16066699614722146;
    msg.satellites = 146U;
    msg.iar_hyp = 32329U;
    msg.iar_ratio = 0.9729969955438099;

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
    msg.setTimeStamp(0.49377494460719695);
    msg.setSource(8663U);
    msg.setSourceEntity(168U);
    msg.setDestination(16176U);
    msg.setDestinationEntity(69U);
    msg.validity = 55734U;
    msg.type = 207U;
    msg.tow = 1243777982U;
    msg.base_lat = 0.9727888897880324;
    msg.base_lon = 0.22698531928690036;
    msg.base_height = 0.47825572735706334;
    msg.n = 0.757187884255416;
    msg.e = 0.9553910917493712;
    msg.d = 0.7453031151231537;
    msg.v_n = 0.8730589882607116;
    msg.v_e = 0.22776502661835474;
    msg.v_d = 0.8979381562395718;
    msg.satellites = 79U;
    msg.iar_hyp = 44285U;
    msg.iar_ratio = 0.6363646815989713;

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
    msg.setTimeStamp(0.957829216486655);
    msg.setSource(25701U);
    msg.setSourceEntity(3U);
    msg.setDestination(47081U);
    msg.setDestinationEntity(54U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7031842271217288;
    tmp_msg_0.lon = 0.599084528144211;
    tmp_msg_0.height = 0.44978450227336;
    tmp_msg_0.x = 0.27522352299832087;
    tmp_msg_0.y = 0.26653896422554835;
    tmp_msg_0.z = 0.6606431698059934;
    tmp_msg_0.phi = 0.8807317876689075;
    tmp_msg_0.theta = 0.3607056484642336;
    tmp_msg_0.psi = 0.8116164004114927;
    tmp_msg_0.u = 0.33537015220876343;
    tmp_msg_0.v = 0.08800712473946126;
    tmp_msg_0.w = 0.7363763547169744;
    tmp_msg_0.vx = 0.7870097742086695;
    tmp_msg_0.vy = 0.6800551751535792;
    tmp_msg_0.vz = 0.12020822997652014;
    tmp_msg_0.p = 0.8896686771274379;
    tmp_msg_0.q = 0.9733830257475529;
    tmp_msg_0.r = 0.5309288420941072;
    tmp_msg_0.depth = 0.581420454206226;
    tmp_msg_0.alt = 0.3698497824426339;
    msg.state.set(tmp_msg_0);
    msg.type = 247U;

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
    msg.setTimeStamp(0.9341483196733783);
    msg.setSource(42089U);
    msg.setSourceEntity(74U);
    msg.setDestination(27017U);
    msg.setDestinationEntity(17U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.851565014171559;
    tmp_msg_0.lon = 0.22509962444297982;
    tmp_msg_0.height = 0.3216545872002218;
    tmp_msg_0.x = 0.7838834258635592;
    tmp_msg_0.y = 0.21229150415173137;
    tmp_msg_0.z = 0.7162809813143313;
    tmp_msg_0.phi = 0.8707944243977284;
    tmp_msg_0.theta = 0.7518972009149122;
    tmp_msg_0.psi = 0.6355984968370446;
    tmp_msg_0.u = 0.9670435776563266;
    tmp_msg_0.v = 0.3140231438973152;
    tmp_msg_0.w = 0.5293927677730308;
    tmp_msg_0.vx = 0.8417887667560602;
    tmp_msg_0.vy = 0.31299012756103917;
    tmp_msg_0.vz = 0.005468588158937693;
    tmp_msg_0.p = 0.9839368375335097;
    tmp_msg_0.q = 0.32869979350065637;
    tmp_msg_0.r = 0.2633561545764693;
    tmp_msg_0.depth = 0.28239206455907706;
    tmp_msg_0.alt = 0.32580462520930553;
    msg.state.set(tmp_msg_0);
    msg.type = 228U;

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
    msg.setTimeStamp(0.5897290343891813);
    msg.setSource(52843U);
    msg.setSourceEntity(243U);
    msg.setDestination(39748U);
    msg.setDestinationEntity(192U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6282476178756219;
    tmp_msg_0.lon = 0.5692415294188135;
    tmp_msg_0.height = 0.826147547900526;
    tmp_msg_0.x = 0.16731626699273838;
    tmp_msg_0.y = 0.6554990530321527;
    tmp_msg_0.z = 0.08202315217228684;
    tmp_msg_0.phi = 0.34579737785031095;
    tmp_msg_0.theta = 0.9426718167934017;
    tmp_msg_0.psi = 0.05050175644185384;
    tmp_msg_0.u = 0.3069573324415591;
    tmp_msg_0.v = 0.65829799914988;
    tmp_msg_0.w = 0.7835273780033268;
    tmp_msg_0.vx = 0.30033305660915444;
    tmp_msg_0.vy = 0.3219632591419057;
    tmp_msg_0.vz = 0.6773652665515005;
    tmp_msg_0.p = 0.5596663131018444;
    tmp_msg_0.q = 0.31461888257032744;
    tmp_msg_0.r = 0.9654108874851843;
    tmp_msg_0.depth = 0.4274948429929005;
    tmp_msg_0.alt = 0.1408169215426469;
    msg.state.set(tmp_msg_0);
    msg.type = 6U;

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
    msg.setTimeStamp(0.2669988930606383);
    msg.setSource(61427U);
    msg.setSourceEntity(251U);
    msg.setDestination(15818U);
    msg.setDestinationEntity(153U);
    msg.value = 0.8998458625873139;

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
    msg.setTimeStamp(0.5085554835307916);
    msg.setSource(54080U);
    msg.setSourceEntity(212U);
    msg.setDestination(25155U);
    msg.setDestinationEntity(28U);
    msg.value = 0.24117270124501433;

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
    msg.setTimeStamp(0.032663769402733744);
    msg.setSource(35652U);
    msg.setSourceEntity(182U);
    msg.setDestination(50205U);
    msg.setDestinationEntity(19U);
    msg.value = 0.03955418718554016;

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
    msg.setTimeStamp(0.49792625725412054);
    msg.setSource(29726U);
    msg.setSourceEntity(93U);
    msg.setDestination(5504U);
    msg.setDestinationEntity(60U);
    msg.value = 0.20918223855999796;

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
    msg.setTimeStamp(0.8670220889207426);
    msg.setSource(43320U);
    msg.setSourceEntity(62U);
    msg.setDestination(8800U);
    msg.setDestinationEntity(69U);
    msg.value = 0.7714197585096849;

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
    msg.setTimeStamp(0.507484561313186);
    msg.setSource(31519U);
    msg.setSourceEntity(177U);
    msg.setDestination(68U);
    msg.setDestinationEntity(135U);
    msg.value = 0.21840675787945463;

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
    msg.setTimeStamp(0.6610001110926748);
    msg.setSource(5104U);
    msg.setSourceEntity(77U);
    msg.setDestination(60186U);
    msg.setDestinationEntity(84U);
    msg.value = 0.014275130989675922;

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
    msg.setTimeStamp(0.5245144511690975);
    msg.setSource(53670U);
    msg.setSourceEntity(1U);
    msg.setDestination(62731U);
    msg.setDestinationEntity(68U);
    msg.value = 0.5971615441495147;

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
    msg.setTimeStamp(0.7778013294545799);
    msg.setSource(37498U);
    msg.setSourceEntity(147U);
    msg.setDestination(23279U);
    msg.setDestinationEntity(37U);
    msg.value = 0.7235511892573632;

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
    msg.setTimeStamp(0.09517440941924216);
    msg.setSource(6335U);
    msg.setSourceEntity(227U);
    msg.setDestination(34430U);
    msg.setDestinationEntity(28U);
    msg.value = 0.27007697227353344;

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
    msg.setTimeStamp(0.1739365635132607);
    msg.setSource(9744U);
    msg.setSourceEntity(21U);
    msg.setDestination(60971U);
    msg.setDestinationEntity(159U);
    msg.value = 0.17593820475027788;

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
    msg.setTimeStamp(0.6935915222387753);
    msg.setSource(33789U);
    msg.setSourceEntity(160U);
    msg.setDestination(36774U);
    msg.setDestinationEntity(65U);
    msg.value = 0.1399229648587944;

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
    msg.setTimeStamp(0.5141321381273323);
    msg.setSource(49086U);
    msg.setSourceEntity(57U);
    msg.setDestination(12866U);
    msg.setDestinationEntity(220U);
    msg.value = 0.986252030757552;

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
    msg.setTimeStamp(0.31197879332392475);
    msg.setSource(1544U);
    msg.setSourceEntity(140U);
    msg.setDestination(2124U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0902304892033795;

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
    msg.setTimeStamp(0.3561593218571282);
    msg.setSource(57743U);
    msg.setSourceEntity(3U);
    msg.setDestination(11394U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5738966986723777;

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
    msg.setTimeStamp(0.8677296928026111);
    msg.setSource(11603U);
    msg.setSourceEntity(2U);
    msg.setDestination(30145U);
    msg.setDestinationEntity(230U);
    msg.id = 190U;
    msg.zoom = 172U;
    msg.action = 239U;

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
    msg.setTimeStamp(0.20233610570271454);
    msg.setSource(40049U);
    msg.setSourceEntity(4U);
    msg.setDestination(4646U);
    msg.setDestinationEntity(159U);
    msg.id = 113U;
    msg.zoom = 192U;
    msg.action = 244U;

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
    msg.setTimeStamp(0.3741332466603562);
    msg.setSource(32308U);
    msg.setSourceEntity(225U);
    msg.setDestination(9825U);
    msg.setDestinationEntity(69U);
    msg.id = 18U;
    msg.zoom = 226U;
    msg.action = 234U;

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
    msg.setTimeStamp(0.8638045297798068);
    msg.setSource(27625U);
    msg.setSourceEntity(148U);
    msg.setDestination(41545U);
    msg.setDestinationEntity(7U);
    msg.id = 81U;
    msg.value = 0.9534020056935827;

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
    msg.setTimeStamp(0.8020175690526915);
    msg.setSource(52741U);
    msg.setSourceEntity(213U);
    msg.setDestination(17563U);
    msg.setDestinationEntity(50U);
    msg.id = 156U;
    msg.value = 0.4625716962129629;

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
    msg.setTimeStamp(0.4174880134339215);
    msg.setSource(39495U);
    msg.setSourceEntity(184U);
    msg.setDestination(44394U);
    msg.setDestinationEntity(190U);
    msg.id = 61U;
    msg.value = 0.23912140923037928;

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
    msg.setTimeStamp(0.9392180446026938);
    msg.setSource(36861U);
    msg.setSourceEntity(145U);
    msg.setDestination(38828U);
    msg.setDestinationEntity(83U);
    msg.id = 182U;
    msg.value = 0.4879668217317549;

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
    msg.setTimeStamp(0.3579071319313084);
    msg.setSource(62000U);
    msg.setSourceEntity(160U);
    msg.setDestination(37238U);
    msg.setDestinationEntity(132U);
    msg.id = 181U;
    msg.value = 0.6487255264558611;

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
    msg.setTimeStamp(0.5349492244475688);
    msg.setSource(8964U);
    msg.setSourceEntity(186U);
    msg.setDestination(25538U);
    msg.setDestinationEntity(152U);
    msg.id = 141U;
    msg.value = 0.9167847811927503;

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
    msg.setTimeStamp(0.45182854168512865);
    msg.setSource(6767U);
    msg.setSourceEntity(184U);
    msg.setDestination(44932U);
    msg.setDestinationEntity(181U);
    msg.id = 152U;
    msg.angle = 0.2506711824821696;

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
    msg.setTimeStamp(0.19643009234440745);
    msg.setSource(28467U);
    msg.setSourceEntity(146U);
    msg.setDestination(62566U);
    msg.setDestinationEntity(228U);
    msg.id = 46U;
    msg.angle = 0.11891633827171111;

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
    msg.setTimeStamp(0.95569837692508);
    msg.setSource(18660U);
    msg.setSourceEntity(61U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(86U);
    msg.id = 253U;
    msg.angle = 0.023357236004629134;

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
    msg.setTimeStamp(0.5913354980412476);
    msg.setSource(22990U);
    msg.setSourceEntity(86U);
    msg.setDestination(3089U);
    msg.setDestinationEntity(123U);
    msg.op = 109U;
    msg.actions.assign("XLVTKOTLMXHCSPNFOFAVDXOROXSUQVTTBOFOSKRCWMRZBEYIUCUBXYTQNUZGHYUMAQLRXTYWVPSXPFMDBKXLIUAHYSNXMNCPWEUBGDQZEECJLCUKBEWKQOIBAAAVEDSWKNJRJHRKKQJR");

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
    msg.setTimeStamp(0.7314337275506358);
    msg.setSource(48776U);
    msg.setSourceEntity(68U);
    msg.setDestination(34543U);
    msg.setDestinationEntity(173U);
    msg.op = 184U;
    msg.actions.assign("IZLZELAKYSKBVRMQGHRLHDJVAIGWJGGFTPBRFWNTTBPXRWEEPSIHLXSOPLBTHZAPRJYZBUKLTMYWVFWEALMADXRJWHNQCDPGOYGNCUEXQMMKJTIMACJUBTROBSMSURYVVKWJFWUQEQKORTIVGNDVPXYKJGFPQHBBNADKCDOFAMWNFSNFSHILVY");

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
    msg.setTimeStamp(0.7660395673373924);
    msg.setSource(38908U);
    msg.setSourceEntity(126U);
    msg.setDestination(29432U);
    msg.setDestinationEntity(62U);
    msg.op = 140U;
    msg.actions.assign("TOVKEDKLUGQKLAUJMGOFOEPSLVBKNAXZEGOUDNOVXDK");

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
    msg.setTimeStamp(0.36457892614410725);
    msg.setSource(4930U);
    msg.setSourceEntity(46U);
    msg.setDestination(50831U);
    msg.setDestinationEntity(222U);
    msg.actions.assign("SHMOVHROPGJNKITDINHUCVAFVUODPPQCPCLFEKWKGSKXQLAMVMLZQXATHATYEZLRBCYLFQJ");

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
    msg.setTimeStamp(0.029825248000075244);
    msg.setSource(26019U);
    msg.setSourceEntity(92U);
    msg.setDestination(7122U);
    msg.setDestinationEntity(135U);
    msg.actions.assign("XWTVBPLGSQQNNEUMBZYZEYAGI");

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
    msg.setTimeStamp(0.7667909902742872);
    msg.setSource(11212U);
    msg.setSourceEntity(117U);
    msg.setDestination(21411U);
    msg.setDestinationEntity(171U);
    msg.actions.assign("NVBDPDTZSJUPSLIZCVZOJNGJZEHQIGXVNPLZXUDXNJKGJTQTC");

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
    msg.setTimeStamp(0.622161089777294);
    msg.setSource(42672U);
    msg.setSourceEntity(32U);
    msg.setDestination(8666U);
    msg.setDestinationEntity(4U);
    msg.button = 143U;
    msg.value = 162U;

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
    msg.setTimeStamp(0.015298298803609223);
    msg.setSource(2040U);
    msg.setSourceEntity(188U);
    msg.setDestination(15085U);
    msg.setDestinationEntity(5U);
    msg.button = 228U;
    msg.value = 20U;

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
    msg.setTimeStamp(0.9648892733774556);
    msg.setSource(49614U);
    msg.setSourceEntity(99U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(245U);
    msg.button = 245U;
    msg.value = 227U;

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
    msg.setTimeStamp(0.5229672503088927);
    msg.setSource(50751U);
    msg.setSourceEntity(186U);
    msg.setDestination(21255U);
    msg.setDestinationEntity(104U);
    msg.op = 29U;
    msg.text.assign("DOWSRLFBSMGAWMFDZNGNLVPRQKWTNSHBFYXVTEHWTUIGJUBSFOGNQHKDBVUHQCBFJUKL");

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
    msg.setTimeStamp(0.43962675584405864);
    msg.setSource(65435U);
    msg.setSourceEntity(92U);
    msg.setDestination(23849U);
    msg.setDestinationEntity(173U);
    msg.op = 167U;
    msg.text.assign("CNFZNPJTITGUAPRJTJDBQHTWWJMOVFRNDHVQWKSKUKLEQDBFVIBQMHRZUVFCITTBYEARSXCBYRHHAEXZQSOGZXGYJLTGVDGXRMXMOEXINSIXTSEWOSNWCPXSDRDZLCIUCYFCUFAHAQGOEPFSEDNMSLQFDIBPYWKWVPKVIZYRYCCXVJHUMLZFTZYLKMABHKTPEWBZMCYJQLNUUNVKULGOFLNYRLUSGRXJEAEJHOWNAVAQ");

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
    msg.setTimeStamp(0.09525023212816686);
    msg.setSource(26626U);
    msg.setSourceEntity(34U);
    msg.setDestination(7280U);
    msg.setDestinationEntity(32U);
    msg.op = 151U;
    msg.text.assign("ABYZYOIRRMCJWIYOKHNSKNOMLDLZSHTFMOPAGVEJUIXMCDSLHRADWNHUGANLQFXETPOPBGDZCVTWBLUZGBGHXNBDNITYSJFWUSCOUFEMDQACBWJSATNKSKWONYCITTBUCXKMYKJHBYRQMZQFZJPRELYMXIGWULQFFOOXTYIGLFOECZVTLGXZIQGYRRKPARPZREBJWVUSTUDJIWKAVGVHNJLQWEAPKRPQFIHXDDDNZSEVAUCHEFMQXQVKJSVC");

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
    msg.setTimeStamp(0.5452011075106908);
    msg.setSource(15910U);
    msg.setSourceEntity(99U);
    msg.setDestination(60848U);
    msg.setDestinationEntity(34U);
    msg.op = 98U;
    msg.time_remain = 0.18151223264142935;
    msg.sched_time = 0.5433697126559627;

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
    msg.setTimeStamp(0.8481735303687387);
    msg.setSource(7310U);
    msg.setSourceEntity(93U);
    msg.setDestination(49635U);
    msg.setDestinationEntity(73U);
    msg.op = 242U;
    msg.time_remain = 0.6428150542208427;
    msg.sched_time = 0.5401665871276804;

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
    msg.setTimeStamp(0.6207056271279874);
    msg.setSource(38612U);
    msg.setSourceEntity(113U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(243U);
    msg.op = 231U;
    msg.time_remain = 0.3049281028873311;
    msg.sched_time = 0.2498241009944312;

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
    msg.setTimeStamp(0.7250785065514838);
    msg.setSource(55292U);
    msg.setSourceEntity(239U);
    msg.setDestination(53339U);
    msg.setDestinationEntity(61U);
    msg.name.assign("GWHCZOBAEREHD");
    msg.op = 35U;
    msg.sched_time = 0.6659688607944549;

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
    msg.setTimeStamp(0.4172006553147244);
    msg.setSource(1165U);
    msg.setSourceEntity(25U);
    msg.setDestination(12822U);
    msg.setDestinationEntity(224U);
    msg.name.assign("ALCRWAXNPMLOMNDBRCUUXJKAXKDDHVLSYEOUENWMTVDYMVBHYSVBARTNRLRJIZXLKGRHZJTWAKGMCZJSEJGTHPYSNEZROWRTYBYKXEORVWDIAAYCYSLZGGUZENPMCSFQIJHTHXFWVQSEQHKLCQIEYGGAPPKQHXWTVQOGBGYXLQXOFBASIJIDPDWIZPIONXHPFFMFZOUMCTKQBTG");
    msg.op = 191U;
    msg.sched_time = 0.27892444121446913;

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
    msg.setTimeStamp(0.29254781198624646);
    msg.setSource(47547U);
    msg.setSourceEntity(147U);
    msg.setDestination(47154U);
    msg.setDestinationEntity(100U);
    msg.name.assign("KUJMBSFEGKRQFQZJVRYQTEBSSUEGIOQYEBBAQEKNRKLBAKGJCSWYMFQCXOTEGAUKCAWKMUMTNPQAZLLTZGWHMEUNVDDFHLBOPRGSGDZIEQDZXRIXYTKDHJHIAWCCVEPVFYFNDIUOSTFEGTZJRXKUDNNODBSKLVUOMAVMLPLCDOJUATPJGNNNZMAYXCPHCAIWGOMPOTIWBHYPULFWWIVW");
    msg.op = 150U;
    msg.sched_time = 0.9325148331253104;

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
    msg.setTimeStamp(0.1835949998264199);
    msg.setSource(3696U);
    msg.setSourceEntity(42U);
    msg.setDestination(9827U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.5893241076596836);
    msg.setSource(64908U);
    msg.setSourceEntity(74U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.47135642712661996);
    msg.setSource(44244U);
    msg.setSourceEntity(35U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.9645022541930938);
    msg.setSource(37767U);
    msg.setSourceEntity(184U);
    msg.setDestination(56312U);
    msg.setDestinationEntity(160U);
    msg.name.assign("RROGIDXKZTYMMOKTOHEVXFPCIJDWUBXQKSBXVSUZQOYHHHKKDBUVRFGMINZIUSLXWCGENRCEZNYPXLQTLCWXDIEPBWXJXTKTCNVULPFDARQHPMADDGRUJKQARIFHWMXRRQJWBBHTEAFSOUESTWPTJGUFZCCPYALSNZOSMTLZDKNVNVQBKVYHIBABZFJUAJOWGFPAMUDGJN");
    msg.state = 12U;

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
    msg.setTimeStamp(0.8885810847783021);
    msg.setSource(46530U);
    msg.setSourceEntity(141U);
    msg.setDestination(24965U);
    msg.setDestinationEntity(131U);
    msg.name.assign("LOVUXJJENLZANCUYSOZNZMFJWNYMQRRMQETW");
    msg.state = 198U;

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
    msg.setTimeStamp(0.9947731153385275);
    msg.setSource(65271U);
    msg.setSourceEntity(167U);
    msg.setDestination(43092U);
    msg.setDestinationEntity(4U);
    msg.name.assign("GQONXBJSPWIVGIRFVUOVMJDBNXUOSJXMWPLBJMXZQSBGPWPQGNYYTLSIKOOBKIXTKFCBWPSNTGLRRAZFPKMDRFWXCUDYESFZWWLZZRRLLUVIHCPLHDOTFTWRAJKEENAMBYJHUHYMDWKDGQBTXLYORLDVTHXIGZSBMAJVHHXEAQQZTPPUENCKCCRICOCEAQTNVSQKQAAVYTOB");
    msg.state = 221U;

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
    msg.setTimeStamp(0.9924890930520075);
    msg.setSource(44814U);
    msg.setSourceEntity(102U);
    msg.setDestination(32310U);
    msg.setDestinationEntity(254U);
    msg.name.assign("JYIRSGEITDPSFHQWRLFKOAHTDYWVYZENAGIPCVCMTATZIVPGHLGITXCAEUYHRLUUQNZUZBBBENXSCWLVTMLFORGJZETWISYAOUXJBLBPOQXWOKODKSFRUFQXZWHZHMA");
    msg.value = 25U;

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
    msg.setTimeStamp(0.7784270294464494);
    msg.setSource(15965U);
    msg.setSourceEntity(4U);
    msg.setDestination(27675U);
    msg.setDestinationEntity(73U);
    msg.name.assign("ZTNNUIQAVGDIHEPCIPZQBDUTKSASXMXAGWXKPKDCBZJTUSMLAFFBOUGETTUHNQASGHYQJKHVRMLLSGRAMYNGZQEXTNZSFYDFWCIXUKILOVPHMYLEGLYRORHBATMRYQPDKDJORRWLJRNBBYWYZHXZWUPDHSJFIDVDDVAPKJUHTSMKGIVZMTFEWIECWFVNOKBMXBPQPHBCELGJUJNZCY");
    msg.value = 189U;

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
    msg.setTimeStamp(0.6215967573270296);
    msg.setSource(59892U);
    msg.setSourceEntity(189U);
    msg.setDestination(32849U);
    msg.setDestinationEntity(142U);
    msg.name.assign("AGWVKACMAODNZSMJBMWAIHOOUZOKOEJYEKWKEUVWBYYKDMQBPUDXQAERIFBGPTLITLLSQMLXCHFNTNLWGVAZQTCZJEYSGKEJUJAFQBQNESUVNAPBARGHLDPHQHITXRNCQLKRTHEAPOIWNUOHDVCGBPOZUWCSIYVMSYJXVTIMIVFFYQNJFNYZXZCPPOKTFPGZRV");
    msg.value = 61U;

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
    msg.setTimeStamp(0.29050334870912176);
    msg.setSource(44864U);
    msg.setSourceEntity(88U);
    msg.setDestination(3670U);
    msg.setDestinationEntity(57U);
    msg.name.assign("IWJLPWGBVULGFFHEXKIOPRPUVHRAIHPUJITBBAHSQYVKSOD");

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
    msg.setTimeStamp(0.7869792837596952);
    msg.setSource(15758U);
    msg.setSourceEntity(182U);
    msg.setDestination(61443U);
    msg.setDestinationEntity(149U);
    msg.name.assign("QLQQMZIXLFCCTDP");

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
    msg.setTimeStamp(0.6672115181487654);
    msg.setSource(30496U);
    msg.setSourceEntity(241U);
    msg.setDestination(2545U);
    msg.setDestinationEntity(241U);
    msg.name.assign("JPUTCGJTSSUFRNZPIIGSWFJXUBLWXGYE");

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
    msg.setTimeStamp(0.19593475925190262);
    msg.setSource(42260U);
    msg.setSourceEntity(103U);
    msg.setDestination(15465U);
    msg.setDestinationEntity(187U);
    msg.name.assign("QFUGSBKECMXKQSRVMPFWZDFELCGIXBASGRTDVNGJHDXAMIALMNEZSRGBQBBVUGPXGDAPYCUCPNKTYOKTHYJTMHUVXDVUDBSHASROXHIQPMERSLWRSYFRAYIAQVFEYXOLDNOZJUJOWCKTMFNWKCITJZYJPTKHHVTSUDIJEARWLLOELEXNMFITWILCGQBLOKZBKGQVYUHWJORINMNUWBWK");
    msg.value = 165U;

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
    msg.setTimeStamp(0.32312063454092554);
    msg.setSource(5303U);
    msg.setSourceEntity(156U);
    msg.setDestination(6935U);
    msg.setDestinationEntity(250U);
    msg.name.assign("NCZBBDDMSQQJXAPJYVASVXBKEJFLOLENQCUQMEUFYDHBLPGXZVLIAAAXHBHIMWFJHBDQCHIYQHKXDNVVCFRWUVVSCJEAMWDGWNIUOKDIMQYHPXTSNCGPLQCEAUYWYABVTIOKYGFUKHJFXZHZZWPVZKGJRWRLUOOFWGTFWNJTSQOEENOWILLOTGDIIPSCOSRMLXYRHUJRKTASGTXRCEUSKPFGXIM");
    msg.value = 55U;

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
    msg.setTimeStamp(0.5473935325642219);
    msg.setSource(1031U);
    msg.setSourceEntity(162U);
    msg.setDestination(39916U);
    msg.setDestinationEntity(82U);
    msg.name.assign("GYZWMTVHYLLYWSVMBGNNVKIGNUGTZVPNSBZPEGCFCDVGZMNYOAYPJCFFWCEHCJQRWBOYQRVFEDCELZSLHJCAECTWYVJXXLZYPJHKOBJQPDZGAIRHXTUQ");
    msg.value = 136U;

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
    msg.setTimeStamp(0.9045282567510805);
    msg.setSource(5767U);
    msg.setSourceEntity(13U);
    msg.setDestination(64272U);
    msg.setDestinationEntity(84U);
    msg.id = 141U;
    msg.period = 2794044507U;
    msg.duty_cycle = 2370260298U;

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
    msg.setTimeStamp(0.30913052002083496);
    msg.setSource(44871U);
    msg.setSourceEntity(224U);
    msg.setDestination(35419U);
    msg.setDestinationEntity(165U);
    msg.id = 28U;
    msg.period = 1984395885U;
    msg.duty_cycle = 1433322361U;

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
    msg.setTimeStamp(0.41772258911151827);
    msg.setSource(58206U);
    msg.setSourceEntity(237U);
    msg.setDestination(50506U);
    msg.setDestinationEntity(89U);
    msg.id = 61U;
    msg.period = 2712073174U;
    msg.duty_cycle = 1364453427U;

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
    msg.setTimeStamp(0.5624562480512844);
    msg.setSource(50852U);
    msg.setSourceEntity(201U);
    msg.setDestination(38187U);
    msg.setDestinationEntity(21U);
    msg.id = 106U;
    msg.period = 4005828374U;
    msg.duty_cycle = 2893925178U;

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
    msg.setTimeStamp(0.6130101465784635);
    msg.setSource(48402U);
    msg.setSourceEntity(189U);
    msg.setDestination(40119U);
    msg.setDestinationEntity(141U);
    msg.id = 133U;
    msg.period = 3197980092U;
    msg.duty_cycle = 3183805287U;

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
    msg.setTimeStamp(0.8525176730606262);
    msg.setSource(63785U);
    msg.setSourceEntity(98U);
    msg.setDestination(30270U);
    msg.setDestinationEntity(139U);
    msg.id = 99U;
    msg.period = 723529621U;
    msg.duty_cycle = 4166393269U;

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
    msg.setTimeStamp(0.5622827239119679);
    msg.setSource(24135U);
    msg.setSourceEntity(150U);
    msg.setDestination(38723U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.8805448909948176;
    msg.lon = 0.4508935937299964;
    msg.height = 0.5208473659473868;
    msg.x = 0.4808228509146243;
    msg.y = 0.29030337371237014;
    msg.z = 0.5147127845207226;
    msg.phi = 0.8179283398170264;
    msg.theta = 0.7053514077791666;
    msg.psi = 0.5496913299951192;
    msg.u = 0.7715967902343882;
    msg.v = 0.020584054067687374;
    msg.w = 0.42410212948307635;
    msg.vx = 0.29983175247016236;
    msg.vy = 0.8940031298296316;
    msg.vz = 0.4856440198544343;
    msg.p = 0.5308183672021722;
    msg.q = 0.1273566354704725;
    msg.r = 0.010211417555544888;
    msg.depth = 0.5715297309353585;
    msg.alt = 0.41838388234609913;

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
    msg.setTimeStamp(0.25481250859672366);
    msg.setSource(55132U);
    msg.setSourceEntity(60U);
    msg.setDestination(37994U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.7220348621730225;
    msg.lon = 0.7911372182618482;
    msg.height = 0.01381319703871342;
    msg.x = 0.9783385704464064;
    msg.y = 0.01143974707458384;
    msg.z = 0.9212620749032813;
    msg.phi = 0.5695295182578012;
    msg.theta = 0.07040276878315199;
    msg.psi = 0.7131758252480978;
    msg.u = 0.656961967548582;
    msg.v = 0.2413074328635051;
    msg.w = 0.6916586984384495;
    msg.vx = 0.4874049804214694;
    msg.vy = 0.9224685894325944;
    msg.vz = 0.23986961903700865;
    msg.p = 0.25768097566939807;
    msg.q = 0.5297769800142965;
    msg.r = 0.8188746334929287;
    msg.depth = 0.0025538966577008937;
    msg.alt = 0.8946274830401534;

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
    msg.setTimeStamp(0.9319018201409103);
    msg.setSource(32176U);
    msg.setSourceEntity(229U);
    msg.setDestination(51167U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.9705421299867075;
    msg.lon = 0.6704033645943533;
    msg.height = 0.9210828282295731;
    msg.x = 0.43067718045058356;
    msg.y = 0.32323210907956434;
    msg.z = 0.7560060547868135;
    msg.phi = 0.4895117837777001;
    msg.theta = 0.16089535762836737;
    msg.psi = 0.6336093303304852;
    msg.u = 0.5451737641973637;
    msg.v = 0.002346650774892378;
    msg.w = 0.27029215569229115;
    msg.vx = 0.38774313728251997;
    msg.vy = 0.7876385473178228;
    msg.vz = 0.966042009187764;
    msg.p = 0.8511456830043203;
    msg.q = 0.309313279884895;
    msg.r = 0.5875299253817948;
    msg.depth = 0.3037672069795714;
    msg.alt = 0.8460692423840295;

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
    msg.setTimeStamp(0.14614636307612916);
    msg.setSource(50334U);
    msg.setSourceEntity(15U);
    msg.setDestination(7447U);
    msg.setDestinationEntity(91U);
    msg.x = 0.8989515422157209;
    msg.y = 0.4032391400524674;
    msg.z = 0.3137464423739793;

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
    msg.setTimeStamp(0.3168857011386875);
    msg.setSource(15312U);
    msg.setSourceEntity(228U);
    msg.setDestination(4813U);
    msg.setDestinationEntity(77U);
    msg.x = 0.7343376889867517;
    msg.y = 0.5095630170907204;
    msg.z = 0.8637127884798836;

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
    msg.setTimeStamp(0.8820221108731559);
    msg.setSource(29228U);
    msg.setSourceEntity(30U);
    msg.setDestination(36522U);
    msg.setDestinationEntity(108U);
    msg.x = 0.13563712675568163;
    msg.y = 0.20379013622872488;
    msg.z = 0.5963364904745402;

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
    msg.setTimeStamp(0.4309268275983337);
    msg.setSource(28890U);
    msg.setSourceEntity(204U);
    msg.setDestination(56500U);
    msg.setDestinationEntity(116U);
    msg.value = 0.18975014924061706;

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
    msg.setTimeStamp(0.6479118440355265);
    msg.setSource(9342U);
    msg.setSourceEntity(204U);
    msg.setDestination(31961U);
    msg.setDestinationEntity(142U);
    msg.value = 0.6713805783716537;

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
    msg.setTimeStamp(0.795192604056309);
    msg.setSource(2653U);
    msg.setSourceEntity(69U);
    msg.setDestination(28257U);
    msg.setDestinationEntity(211U);
    msg.value = 0.6421409750014333;

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
    msg.setTimeStamp(0.5847308983636772);
    msg.setSource(6721U);
    msg.setSourceEntity(97U);
    msg.setDestination(53131U);
    msg.setDestinationEntity(149U);
    msg.value = 0.5240815014840057;

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
    msg.setTimeStamp(0.764939015416993);
    msg.setSource(6388U);
    msg.setSourceEntity(13U);
    msg.setDestination(230U);
    msg.setDestinationEntity(136U);
    msg.value = 0.3684543983540206;

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
    msg.setTimeStamp(0.6451434878014567);
    msg.setSource(55226U);
    msg.setSourceEntity(215U);
    msg.setDestination(34404U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5979561671402801;

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
    msg.setTimeStamp(0.06416448700943089);
    msg.setSource(63666U);
    msg.setSourceEntity(138U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(49U);
    msg.x = 0.17565408234679036;
    msg.y = 0.2632286366540022;
    msg.z = 0.9724890147225036;
    msg.phi = 0.6894112296501514;
    msg.theta = 0.10644672761457508;
    msg.psi = 0.19147489077243374;
    msg.p = 0.7444370657361137;
    msg.q = 0.20555577881655207;
    msg.r = 0.00930265282410081;
    msg.u = 0.8569402036006994;
    msg.v = 0.7752483127389225;
    msg.w = 0.7040731076284008;
    msg.bias_psi = 0.1063347120829482;
    msg.bias_r = 0.8432822305240525;

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
    msg.setTimeStamp(0.9702643215518163);
    msg.setSource(61596U);
    msg.setSourceEntity(120U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(236U);
    msg.x = 0.9353233283776882;
    msg.y = 0.33343983405582034;
    msg.z = 0.6753126867428728;
    msg.phi = 0.3275914830464992;
    msg.theta = 0.8495766985583462;
    msg.psi = 0.4194931919480225;
    msg.p = 0.7665357939290116;
    msg.q = 0.3803671601310695;
    msg.r = 0.8500050519769634;
    msg.u = 0.2690309692722609;
    msg.v = 0.5897004055663502;
    msg.w = 0.5542156255129923;
    msg.bias_psi = 0.6911339024008298;
    msg.bias_r = 0.5633707498719329;

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
    msg.setTimeStamp(0.41266608932184323);
    msg.setSource(9956U);
    msg.setSourceEntity(31U);
    msg.setDestination(63469U);
    msg.setDestinationEntity(208U);
    msg.x = 0.7482403149001429;
    msg.y = 0.8373122273758593;
    msg.z = 0.6725670432508063;
    msg.phi = 0.8425570422942165;
    msg.theta = 0.24216865540249122;
    msg.psi = 0.39310562344269917;
    msg.p = 0.54611502018297;
    msg.q = 0.1868338880472108;
    msg.r = 0.21953813781464027;
    msg.u = 0.2636479797988095;
    msg.v = 0.022419663900323905;
    msg.w = 0.7268144959425196;
    msg.bias_psi = 0.6421913487608213;
    msg.bias_r = 0.6235422459283226;

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
    msg.setTimeStamp(0.8420493472823413);
    msg.setSource(39284U);
    msg.setSourceEntity(161U);
    msg.setDestination(12658U);
    msg.setDestinationEntity(184U);
    msg.bias_psi = 0.5472154825254294;
    msg.bias_r = 0.5057140744441783;
    msg.cog = 0.7092533188455588;
    msg.cyaw = 0.41624544516082185;
    msg.lbl_rej_level = 0.3264515235911163;
    msg.gps_rej_level = 0.8260651643131772;
    msg.custom_x = 0.750969325629541;
    msg.custom_y = 0.13580431101769797;
    msg.custom_z = 0.3814000377801854;

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
    msg.setTimeStamp(0.8893774051247921);
    msg.setSource(56529U);
    msg.setSourceEntity(54U);
    msg.setDestination(16469U);
    msg.setDestinationEntity(231U);
    msg.bias_psi = 0.42301871387347045;
    msg.bias_r = 0.1640557041374573;
    msg.cog = 0.20794081232713235;
    msg.cyaw = 0.7031241198997973;
    msg.lbl_rej_level = 0.14913444959765443;
    msg.gps_rej_level = 0.9138242599955309;
    msg.custom_x = 0.25978515070768093;
    msg.custom_y = 0.8823514134592366;
    msg.custom_z = 0.5553028838371125;

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
    msg.setTimeStamp(0.26149172069484294);
    msg.setSource(19895U);
    msg.setSourceEntity(117U);
    msg.setDestination(15241U);
    msg.setDestinationEntity(87U);
    msg.bias_psi = 0.6389948675822191;
    msg.bias_r = 0.8629300047726985;
    msg.cog = 0.8978397698949326;
    msg.cyaw = 0.2744442444573373;
    msg.lbl_rej_level = 0.9006569746847009;
    msg.gps_rej_level = 0.013480318416707493;
    msg.custom_x = 0.06392760155447619;
    msg.custom_y = 0.3848113667337779;
    msg.custom_z = 0.1542228967804623;

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
    msg.setTimeStamp(0.5721667368064463);
    msg.setSource(55237U);
    msg.setSourceEntity(103U);
    msg.setDestination(43540U);
    msg.setDestinationEntity(18U);
    msg.utc_time = 0.7179145598762695;
    msg.reason = 96U;

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
    msg.setTimeStamp(0.7758781565402215);
    msg.setSource(2447U);
    msg.setSourceEntity(131U);
    msg.setDestination(348U);
    msg.setDestinationEntity(82U);
    msg.utc_time = 0.3758858482004154;
    msg.reason = 26U;

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
    msg.setTimeStamp(0.34311752247093785);
    msg.setSource(37571U);
    msg.setSourceEntity(20U);
    msg.setDestination(20028U);
    msg.setDestinationEntity(182U);
    msg.utc_time = 0.21151215440879645;
    msg.reason = 99U;

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
    msg.setTimeStamp(0.04233787483043616);
    msg.setSource(61000U);
    msg.setSourceEntity(186U);
    msg.setDestination(22517U);
    msg.setDestinationEntity(2U);
    msg.id = 106U;
    msg.range = 0.625126346381311;
    msg.acceptance = 34U;

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
    msg.setTimeStamp(0.49642145758093104);
    msg.setSource(36808U);
    msg.setSourceEntity(54U);
    msg.setDestination(5425U);
    msg.setDestinationEntity(97U);
    msg.id = 55U;
    msg.range = 0.8777991933459687;
    msg.acceptance = 232U;

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
    msg.setTimeStamp(0.22008725369105564);
    msg.setSource(59209U);
    msg.setSourceEntity(182U);
    msg.setDestination(23590U);
    msg.setDestinationEntity(247U);
    msg.id = 136U;
    msg.range = 0.2303083893479394;
    msg.acceptance = 197U;

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
    msg.setTimeStamp(0.9281972840248036);
    msg.setSource(47345U);
    msg.setSourceEntity(6U);
    msg.setDestination(35117U);
    msg.setDestinationEntity(197U);
    msg.type = 52U;
    msg.reason = 100U;
    msg.value = 0.12483671140812524;
    msg.timestep = 0.12383833501697938;

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
    msg.setTimeStamp(0.5143836952988448);
    msg.setSource(46171U);
    msg.setSourceEntity(237U);
    msg.setDestination(16977U);
    msg.setDestinationEntity(101U);
    msg.type = 164U;
    msg.reason = 23U;
    msg.value = 0.9995259273241336;
    msg.timestep = 0.2635798015411507;

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
    msg.setTimeStamp(0.7001930078770554);
    msg.setSource(12368U);
    msg.setSourceEntity(95U);
    msg.setDestination(26942U);
    msg.setDestinationEntity(158U);
    msg.type = 105U;
    msg.reason = 241U;
    msg.value = 0.24786037879947265;
    msg.timestep = 0.7027262655036692;

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
    msg.setTimeStamp(0.12391674551474541);
    msg.setSource(34764U);
    msg.setSourceEntity(249U);
    msg.setDestination(39722U);
    msg.setDestinationEntity(77U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EJVGVNEEPJOYSJWXUQMTQNDAOQJAYDXYWDCVTHGYTZSPCQDXTYKBOEALNIJKNEQIKDMVACKXRLOTHVKWYWKMAGMSBFKQLARZSJMJKUWQIZDVAHNPABOHODDBWIEVLULWHLKMFRTPIVHGTXOHFUCTSNBUEUADJBNPJTVXBNMFNAFZWEREHBRGLGZFESQZUONCGPOGTBQICUXFSPWFRY");
    tmp_msg_0.lat = 0.17315801195094294;
    tmp_msg_0.lon = 0.21581236610043397;
    tmp_msg_0.depth = 0.303101418148225;
    tmp_msg_0.query_channel = 226U;
    tmp_msg_0.reply_channel = 124U;
    tmp_msg_0.transponder_delay = 15U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.045433872114684526;
    msg.y = 0.6314225173253886;
    msg.var_x = 0.8302538993659616;
    msg.var_y = 0.4894568406426143;
    msg.distance = 0.5941996153506736;

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
    msg.setTimeStamp(0.5466190258005307);
    msg.setSource(28049U);
    msg.setSourceEntity(115U);
    msg.setDestination(23140U);
    msg.setDestinationEntity(91U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TIEWCUYOFCJAKKYTNFLTHGTRNLYJI");
    tmp_msg_0.lat = 0.3802145679044977;
    tmp_msg_0.lon = 0.24642300397784822;
    tmp_msg_0.depth = 0.7802631561899084;
    tmp_msg_0.query_channel = 142U;
    tmp_msg_0.reply_channel = 55U;
    tmp_msg_0.transponder_delay = 203U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2348642150266751;
    msg.y = 0.4443992058630162;
    msg.var_x = 0.7031981642433792;
    msg.var_y = 0.17014155008039578;
    msg.distance = 0.009560124181251295;

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
    msg.setTimeStamp(0.13262697153777236);
    msg.setSource(52750U);
    msg.setSourceEntity(201U);
    msg.setDestination(14853U);
    msg.setDestinationEntity(244U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZYFDSPVJIPFOJJWKPPZRAQUFDR");
    tmp_msg_0.lat = 0.4035474754104156;
    tmp_msg_0.lon = 0.05697628089042306;
    tmp_msg_0.depth = 0.2401335803304091;
    tmp_msg_0.query_channel = 197U;
    tmp_msg_0.reply_channel = 89U;
    tmp_msg_0.transponder_delay = 227U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.31392680211168134;
    msg.y = 0.5057539387215947;
    msg.var_x = 0.8959497514852339;
    msg.var_y = 0.18624373665286875;
    msg.distance = 0.7107086137073678;

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
    msg.setTimeStamp(0.726116122891278);
    msg.setSource(16530U);
    msg.setSourceEntity(219U);
    msg.setDestination(56525U);
    msg.setDestinationEntity(142U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.09430105394732635);
    msg.setSource(12828U);
    msg.setSourceEntity(64U);
    msg.setDestination(48786U);
    msg.setDestinationEntity(208U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.21196821667719834);
    msg.setSource(62214U);
    msg.setSourceEntity(30U);
    msg.setDestination(50820U);
    msg.setDestinationEntity(71U);
    msg.state = 98U;

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
    msg.setTimeStamp(0.05010609307283265);
    msg.setSource(50564U);
    msg.setSourceEntity(59U);
    msg.setDestination(41192U);
    msg.setDestinationEntity(74U);
    msg.x = 0.3004250700945813;
    msg.y = 0.2881142570961217;
    msg.z = 0.32267656692278845;

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
    msg.setTimeStamp(0.38231586008471785);
    msg.setSource(53743U);
    msg.setSourceEntity(173U);
    msg.setDestination(6079U);
    msg.setDestinationEntity(7U);
    msg.x = 0.7819625812827019;
    msg.y = 0.007665623921080833;
    msg.z = 0.32963471408742795;

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
    msg.setTimeStamp(0.9848778395778613);
    msg.setSource(11249U);
    msg.setSourceEntity(85U);
    msg.setDestination(28094U);
    msg.setDestinationEntity(254U);
    msg.x = 0.2702777697570061;
    msg.y = 0.2472640838337875;
    msg.z = 0.7570418008233029;

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
    msg.setTimeStamp(0.3974870107370453);
    msg.setSource(4353U);
    msg.setSourceEntity(106U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(91U);
    msg.va = 0.7167424976903344;
    msg.aoa = 0.35191000961797736;
    msg.ssa = 0.11327124947993528;

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
    msg.setTimeStamp(0.46699699160098995);
    msg.setSource(28914U);
    msg.setSourceEntity(235U);
    msg.setDestination(35645U);
    msg.setDestinationEntity(50U);
    msg.va = 0.9301212455052413;
    msg.aoa = 0.13186400554925115;
    msg.ssa = 0.9619987137191464;

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
    msg.setTimeStamp(0.7392693557037509);
    msg.setSource(17186U);
    msg.setSourceEntity(40U);
    msg.setDestination(16234U);
    msg.setDestinationEntity(112U);
    msg.va = 0.32556754215897965;
    msg.aoa = 0.4172809046313676;
    msg.ssa = 0.638756041021374;

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
    msg.setTimeStamp(0.14736225765008404);
    msg.setSource(35918U);
    msg.setSourceEntity(78U);
    msg.setDestination(44760U);
    msg.setDestinationEntity(203U);
    msg.value = 0.9448277584386284;

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
    msg.setTimeStamp(0.538913684859889);
    msg.setSource(65209U);
    msg.setSourceEntity(217U);
    msg.setDestination(34876U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7704720799099887;

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
    msg.setTimeStamp(0.03309388963336024);
    msg.setSource(2483U);
    msg.setSourceEntity(150U);
    msg.setDestination(18505U);
    msg.setDestinationEntity(179U);
    msg.value = 0.737230879264485;

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
    msg.setTimeStamp(0.9892176500785009);
    msg.setSource(21726U);
    msg.setSourceEntity(166U);
    msg.setDestination(19657U);
    msg.setDestinationEntity(249U);
    msg.value = 0.6054671598741533;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.9958545995394742);
    msg.setSource(60106U);
    msg.setSourceEntity(81U);
    msg.setDestination(49345U);
    msg.setDestinationEntity(179U);
    msg.value = 0.3533692755760073;
    msg.z_units = 105U;

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
    msg.setTimeStamp(0.3127418168157453);
    msg.setSource(22327U);
    msg.setSourceEntity(243U);
    msg.setDestination(30470U);
    msg.setDestinationEntity(26U);
    msg.value = 0.1795515967016087;
    msg.z_units = 178U;

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
    msg.setTimeStamp(0.12684471461823565);
    msg.setSource(19989U);
    msg.setSourceEntity(233U);
    msg.setDestination(54500U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7761896724193375;
    msg.speed_units = 122U;

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
    msg.setTimeStamp(0.8708674833408012);
    msg.setSource(31493U);
    msg.setSourceEntity(52U);
    msg.setDestination(59U);
    msg.setDestinationEntity(32U);
    msg.value = 0.9005566847153234;
    msg.speed_units = 254U;

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
    msg.setTimeStamp(0.7618131722886576);
    msg.setSource(3188U);
    msg.setSourceEntity(182U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6704183372581313;
    msg.speed_units = 3U;

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
    msg.setTimeStamp(0.3206602485937682);
    msg.setSource(58038U);
    msg.setSourceEntity(165U);
    msg.setDestination(20222U);
    msg.setDestinationEntity(138U);
    msg.value = 0.9913731654209109;

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
    msg.setTimeStamp(0.9002576849931939);
    msg.setSource(29156U);
    msg.setSourceEntity(241U);
    msg.setDestination(63740U);
    msg.setDestinationEntity(43U);
    msg.value = 0.11177832866596726;

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
    msg.setTimeStamp(0.5240072127144416);
    msg.setSource(695U);
    msg.setSourceEntity(55U);
    msg.setDestination(57731U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6223485878915203;

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
    msg.setTimeStamp(0.5249320683371487);
    msg.setSource(26455U);
    msg.setSourceEntity(90U);
    msg.setDestination(35127U);
    msg.setDestinationEntity(170U);
    msg.value = 0.055849900861919655;

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
    msg.setTimeStamp(0.09066017411575933);
    msg.setSource(36340U);
    msg.setSourceEntity(91U);
    msg.setDestination(48904U);
    msg.setDestinationEntity(142U);
    msg.value = 0.13031305768283807;

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
    msg.setTimeStamp(0.9067317819366066);
    msg.setSource(54696U);
    msg.setSourceEntity(253U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(64U);
    msg.value = 0.44853925081521984;

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
    msg.setTimeStamp(0.22051171695721694);
    msg.setSource(15087U);
    msg.setSourceEntity(30U);
    msg.setDestination(13704U);
    msg.setDestinationEntity(178U);
    msg.value = 0.3061953073753846;

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
    msg.setTimeStamp(0.9649471234171655);
    msg.setSource(37694U);
    msg.setSourceEntity(10U);
    msg.setDestination(33911U);
    msg.setDestinationEntity(217U);
    msg.value = 0.3895154368005397;

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
    msg.setTimeStamp(0.560801232344117);
    msg.setSource(49706U);
    msg.setSourceEntity(219U);
    msg.setDestination(49313U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7040852568212045;

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
    msg.setTimeStamp(0.6683758935393361);
    msg.setSource(51670U);
    msg.setSourceEntity(78U);
    msg.setDestination(2589U);
    msg.setDestinationEntity(174U);
    msg.path_ref = 749319674U;
    msg.start_lat = 0.3500374847921994;
    msg.start_lon = 0.07173639684334887;
    msg.start_z = 0.8332943769624092;
    msg.start_z_units = 115U;
    msg.end_lat = 0.6783251039618392;
    msg.end_lon = 0.7503616736519093;
    msg.end_z = 0.3689732042515119;
    msg.end_z_units = 229U;
    msg.speed = 0.35754196480354594;
    msg.speed_units = 167U;
    msg.lradius = 0.05276037790707244;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.585698213709716);
    msg.setSource(23162U);
    msg.setSourceEntity(25U);
    msg.setDestination(22255U);
    msg.setDestinationEntity(249U);
    msg.path_ref = 2440897997U;
    msg.start_lat = 0.026171361890034994;
    msg.start_lon = 0.9859595751193054;
    msg.start_z = 0.535857121614118;
    msg.start_z_units = 208U;
    msg.end_lat = 0.8672142080246457;
    msg.end_lon = 0.14986904101571574;
    msg.end_z = 0.2908967990590877;
    msg.end_z_units = 163U;
    msg.speed = 0.3866925511794195;
    msg.speed_units = 158U;
    msg.lradius = 0.5818553835339944;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.08725173418068277);
    msg.setSource(37861U);
    msg.setSourceEntity(121U);
    msg.setDestination(63951U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 4171236214U;
    msg.start_lat = 0.8395211793602697;
    msg.start_lon = 0.18169408999623438;
    msg.start_z = 0.517670466031683;
    msg.start_z_units = 249U;
    msg.end_lat = 0.9782129045264166;
    msg.end_lon = 0.9228121730368454;
    msg.end_z = 0.44474242264548147;
    msg.end_z_units = 132U;
    msg.speed = 0.5288395662469481;
    msg.speed_units = 132U;
    msg.lradius = 0.8980598971915255;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.8986184533042758);
    msg.setSource(47049U);
    msg.setSourceEntity(53U);
    msg.setDestination(36427U);
    msg.setDestinationEntity(37U);
    msg.x = 0.2541832095424884;
    msg.y = 0.14065330916869345;
    msg.z = 0.056268268452627224;
    msg.k = 0.11914693858006753;
    msg.m = 0.6328635750112662;
    msg.n = 0.720478871058242;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.5018641334538432);
    msg.setSource(32443U);
    msg.setSourceEntity(43U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(11U);
    msg.x = 0.8540481772709113;
    msg.y = 0.5017719659941346;
    msg.z = 0.5943622970522535;
    msg.k = 0.2818302321610928;
    msg.m = 0.8413121499960282;
    msg.n = 0.23560625759369502;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.2289443837395173);
    msg.setSource(14854U);
    msg.setSourceEntity(126U);
    msg.setDestination(18390U);
    msg.setDestinationEntity(89U);
    msg.x = 0.279249595693692;
    msg.y = 0.4376153332006536;
    msg.z = 0.21504108232426333;
    msg.k = 0.011739867296956086;
    msg.m = 0.17407326895962927;
    msg.n = 0.6611973501685285;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.35383189153928796);
    msg.setSource(49082U);
    msg.setSourceEntity(9U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(8U);
    msg.value = 0.9298658235388605;

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
    msg.setTimeStamp(0.905451090035304);
    msg.setSource(56110U);
    msg.setSourceEntity(10U);
    msg.setDestination(53683U);
    msg.setDestinationEntity(229U);
    msg.value = 0.750611220002173;

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
    msg.setTimeStamp(0.7550862092135671);
    msg.setSource(16446U);
    msg.setSourceEntity(71U);
    msg.setDestination(16933U);
    msg.setDestinationEntity(163U);
    msg.value = 0.5284155687803126;

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
    msg.setTimeStamp(0.6218013525613763);
    msg.setSource(35972U);
    msg.setSourceEntity(81U);
    msg.setDestination(9202U);
    msg.setDestinationEntity(245U);
    msg.u = 0.08020615946947685;
    msg.v = 0.8305126739138986;
    msg.w = 0.367890524032661;
    msg.p = 0.9262207250662252;
    msg.q = 0.2720034883429737;
    msg.r = 0.8722254272492754;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.5961373189853364);
    msg.setSource(35761U);
    msg.setSourceEntity(148U);
    msg.setDestination(25186U);
    msg.setDestinationEntity(91U);
    msg.u = 0.2106741164976631;
    msg.v = 0.3486733039461555;
    msg.w = 0.9335804730943682;
    msg.p = 0.9930509314984126;
    msg.q = 0.836549193426572;
    msg.r = 0.6470443085309416;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.5309748309224654);
    msg.setSource(36401U);
    msg.setSourceEntity(207U);
    msg.setDestination(57331U);
    msg.setDestinationEntity(172U);
    msg.u = 0.852786447832442;
    msg.v = 0.5848842338101716;
    msg.w = 0.3130582210587223;
    msg.p = 0.9607824483322708;
    msg.q = 0.8985899903543576;
    msg.r = 0.0480029063565095;
    msg.flags = 112U;

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
    msg.setTimeStamp(0.4309718596435689);
    msg.setSource(42006U);
    msg.setSourceEntity(200U);
    msg.setDestination(14846U);
    msg.setDestinationEntity(230U);
    msg.path_ref = 3350548903U;
    msg.start_lat = 0.5098122281836017;
    msg.start_lon = 0.6585207059235031;
    msg.start_z = 0.7475572035648466;
    msg.start_z_units = 247U;
    msg.end_lat = 0.7156543508811763;
    msg.end_lon = 0.9901001874403734;
    msg.end_z = 0.6402281089040487;
    msg.end_z_units = 118U;
    msg.lradius = 0.7332583190665577;
    msg.flags = 87U;
    msg.x = 0.822626229417521;
    msg.y = 0.4277671296454668;
    msg.z = 0.3898569588774303;
    msg.vx = 0.8973260951528921;
    msg.vy = 0.19970887163100526;
    msg.vz = 0.5776860362847486;
    msg.course_error = 0.003340368902212121;
    msg.eta = 11490U;

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
    msg.setTimeStamp(0.5995898183615357);
    msg.setSource(35822U);
    msg.setSourceEntity(153U);
    msg.setDestination(7604U);
    msg.setDestinationEntity(216U);
    msg.path_ref = 2121574990U;
    msg.start_lat = 0.5293828708397021;
    msg.start_lon = 0.6788229711550431;
    msg.start_z = 0.5691278539812232;
    msg.start_z_units = 177U;
    msg.end_lat = 0.7325261347814475;
    msg.end_lon = 0.5065444888716762;
    msg.end_z = 0.5375750072178865;
    msg.end_z_units = 26U;
    msg.lradius = 0.31408509602639056;
    msg.flags = 187U;
    msg.x = 0.18998718262188063;
    msg.y = 0.33914764201018865;
    msg.z = 0.660776953341165;
    msg.vx = 0.488792760434662;
    msg.vy = 0.2104183502637038;
    msg.vz = 0.7446937086448123;
    msg.course_error = 0.12397937425075711;
    msg.eta = 16413U;

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
    msg.setTimeStamp(0.4379037527552573);
    msg.setSource(48776U);
    msg.setSourceEntity(26U);
    msg.setDestination(54881U);
    msg.setDestinationEntity(152U);
    msg.path_ref = 1708571283U;
    msg.start_lat = 0.6986057577191837;
    msg.start_lon = 0.5339813439087744;
    msg.start_z = 0.8397997324577646;
    msg.start_z_units = 212U;
    msg.end_lat = 0.9403201990621325;
    msg.end_lon = 0.6617489369798714;
    msg.end_z = 0.4752886314531688;
    msg.end_z_units = 103U;
    msg.lradius = 0.2939555260656429;
    msg.flags = 171U;
    msg.x = 0.22868506337815853;
    msg.y = 0.712840698569452;
    msg.z = 0.29708149069118106;
    msg.vx = 0.7819215633221048;
    msg.vy = 0.13684717954873904;
    msg.vz = 0.5647778528278758;
    msg.course_error = 0.5050114627890606;
    msg.eta = 25718U;

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
    msg.setTimeStamp(0.18282954609027402);
    msg.setSource(16920U);
    msg.setSourceEntity(109U);
    msg.setDestination(47555U);
    msg.setDestinationEntity(3U);
    msg.k = 0.8755596502907632;
    msg.m = 0.2226296988886992;
    msg.n = 0.654843087932141;

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
    msg.setTimeStamp(0.1678534616795625);
    msg.setSource(40986U);
    msg.setSourceEntity(57U);
    msg.setDestination(28230U);
    msg.setDestinationEntity(66U);
    msg.k = 0.9892990973925392;
    msg.m = 0.8645813902136946;
    msg.n = 0.0769426502515953;

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
    msg.setTimeStamp(0.340402433128173);
    msg.setSource(31397U);
    msg.setSourceEntity(249U);
    msg.setDestination(7001U);
    msg.setDestinationEntity(84U);
    msg.k = 0.9692396061496935;
    msg.m = 0.9475554721480952;
    msg.n = 0.2203554242245429;

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
    msg.setTimeStamp(0.37237593728984975);
    msg.setSource(12287U);
    msg.setSourceEntity(189U);
    msg.setDestination(32018U);
    msg.setDestinationEntity(157U);
    msg.p = 0.7721732792616532;
    msg.i = 0.8895592484461686;
    msg.d = 0.8294469117787086;
    msg.a = 0.20498928310991404;

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
    msg.setTimeStamp(0.8498014047208543);
    msg.setSource(58787U);
    msg.setSourceEntity(66U);
    msg.setDestination(640U);
    msg.setDestinationEntity(92U);
    msg.p = 0.9708840169842261;
    msg.i = 0.2974013981636453;
    msg.d = 0.2093020748899701;
    msg.a = 0.4782303241965259;

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
    msg.setTimeStamp(0.9600380605094433);
    msg.setSource(57535U);
    msg.setSourceEntity(95U);
    msg.setDestination(44036U);
    msg.setDestinationEntity(176U);
    msg.p = 0.1401940281804288;
    msg.i = 0.33379949755031113;
    msg.d = 0.6213136289652238;
    msg.a = 0.9005679043552239;

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
    msg.setTimeStamp(0.8496161256171021);
    msg.setSource(6134U);
    msg.setSourceEntity(175U);
    msg.setDestination(4274U);
    msg.setDestinationEntity(240U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.19654254879567812);
    msg.setSource(61352U);
    msg.setSourceEntity(96U);
    msg.setDestination(17422U);
    msg.setDestinationEntity(177U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.27909667764205226);
    msg.setSource(33249U);
    msg.setSourceEntity(249U);
    msg.setDestination(25832U);
    msg.setDestinationEntity(78U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.21966557639637185);
    msg.setSource(14519U);
    msg.setSourceEntity(91U);
    msg.setDestination(28140U);
    msg.setDestinationEntity(16U);
    msg.x = 0.5331428786792209;
    msg.y = 0.8725172807709991;
    msg.z = 0.36725279331563365;
    msg.vx = 0.5253245867340763;
    msg.vy = 0.053830774498008216;
    msg.vz = 0.5232273464087186;
    msg.ax = 0.19799899274573618;
    msg.ay = 0.3199609138286068;
    msg.az = 0.5845739397712988;
    msg.flags = 946U;

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
    msg.setTimeStamp(0.7570008006506757);
    msg.setSource(48970U);
    msg.setSourceEntity(133U);
    msg.setDestination(31219U);
    msg.setDestinationEntity(52U);
    msg.x = 0.4652601250040511;
    msg.y = 0.572020744344917;
    msg.z = 0.6695228420944902;
    msg.vx = 0.6308392953631372;
    msg.vy = 0.31120798727859644;
    msg.vz = 0.4631620549503218;
    msg.ax = 0.2760976475896081;
    msg.ay = 0.4697064942955612;
    msg.az = 0.8328769208431983;
    msg.flags = 28090U;

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
    msg.setTimeStamp(0.321838833487915);
    msg.setSource(18746U);
    msg.setSourceEntity(78U);
    msg.setDestination(44821U);
    msg.setDestinationEntity(182U);
    msg.x = 0.9366259541506927;
    msg.y = 0.8116728860316967;
    msg.z = 0.799824834917605;
    msg.vx = 0.8954218880930491;
    msg.vy = 0.08747718974198138;
    msg.vz = 0.5901565525371433;
    msg.ax = 0.25407747189744556;
    msg.ay = 0.43717953051478653;
    msg.az = 0.48125146730385393;
    msg.flags = 39571U;

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
    msg.setTimeStamp(0.8112995527403013);
    msg.setSource(18338U);
    msg.setSourceEntity(199U);
    msg.setDestination(31621U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6144928120685141;

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
    msg.setTimeStamp(0.9327600031315665);
    msg.setSource(18830U);
    msg.setSourceEntity(65U);
    msg.setDestination(47269U);
    msg.setDestinationEntity(193U);
    msg.value = 0.672349298506598;

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
    msg.setTimeStamp(0.9740195620668533);
    msg.setSource(42462U);
    msg.setSourceEntity(168U);
    msg.setDestination(46443U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6226865549957307;

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
    msg.setTimeStamp(0.5762270883833768);
    msg.setSource(48963U);
    msg.setSourceEntity(237U);
    msg.setDestination(8754U);
    msg.setDestinationEntity(192U);
    msg.timeout = 42689U;
    msg.lat = 0.42791768537339103;
    msg.lon = 0.358760552668126;
    msg.z = 0.23687983629721876;
    msg.z_units = 125U;
    msg.speed = 0.12175097304365612;
    msg.speed_units = 21U;
    msg.roll = 0.0906413398500524;
    msg.pitch = 0.6374794189978685;
    msg.yaw = 0.4082759195920489;
    msg.custom.assign("CBVEJCVGYRWHAWDOZJCIOUGTFWQXIPCDMTJLLPECPAXWQHPZNBSOWKTSSFVULNNPXMLZFNABIXYIQQSOMVKLYRQUTVEVNTUYWLCVFRUUBFIAQLBQ");

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
    msg.setTimeStamp(0.06655366981110811);
    msg.setSource(62327U);
    msg.setSourceEntity(99U);
    msg.setDestination(175U);
    msg.setDestinationEntity(14U);
    msg.timeout = 10339U;
    msg.lat = 0.6656352166575856;
    msg.lon = 0.34323537653851277;
    msg.z = 0.6496901989565038;
    msg.z_units = 72U;
    msg.speed = 0.3056249538337392;
    msg.speed_units = 250U;
    msg.roll = 0.30923111793925584;
    msg.pitch = 0.19187532581914568;
    msg.yaw = 0.4300264203006756;
    msg.custom.assign("PRRESOJCPXCVMGAUCDNJLZZAOKPWDGCLSGFSMYIFBNQADUEDQEHJLHLWWRTJPMSYAEYXRNYTANCJHXUAHWFYHOCFOYCTBZBQKQFVDZTVQFLIOIHRQX");

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
    msg.setTimeStamp(0.8073946554511824);
    msg.setSource(28129U);
    msg.setSourceEntity(99U);
    msg.setDestination(25570U);
    msg.setDestinationEntity(99U);
    msg.timeout = 1006U;
    msg.lat = 0.3526522796530964;
    msg.lon = 0.28472901450146026;
    msg.z = 0.16073822270605365;
    msg.z_units = 174U;
    msg.speed = 0.9646252105726553;
    msg.speed_units = 174U;
    msg.roll = 0.47960251606727744;
    msg.pitch = 0.7669510005819097;
    msg.yaw = 0.44781615880573356;
    msg.custom.assign("OIFHCNFSASXWFMNLOHUUDJKCGRHORKLIJUSNBOHACDTIYVUOMZCDQSBGIUKYQDEGVWGZVRZCDCLQZEXWGJLANKPYZXJPWRLVNIRKXFKRTYTEQBEQXJAMYVJHERNPBWZDZOSAGKPRFCEMECQNTMXYKXSYBZPHLHFPJAVVDHULVYSECQUIFIYBAZUMVUKIOFLYJWQW");

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
    msg.setTimeStamp(0.3484372696906244);
    msg.setSource(62352U);
    msg.setSourceEntity(192U);
    msg.setDestination(22899U);
    msg.setDestinationEntity(83U);
    msg.timeout = 2102U;
    msg.lat = 0.44551418398439824;
    msg.lon = 0.9079630189396662;
    msg.z = 0.052424687162961225;
    msg.z_units = 112U;
    msg.speed = 0.19585252767288852;
    msg.speed_units = 85U;
    msg.duration = 38937U;
    msg.radius = 0.9280535889610653;
    msg.flags = 56U;
    msg.custom.assign("MDJQNYVYARCTSIPXWMEDFXSIQHAIXOVQXYRATTKZSOCNSXBJNZHJLRUINAPCKTUKCWJTJWDANVILZMNOJRFPQNAAPZUXQVLNZHQQGGBTRHSEOXGKESZUWMPDYOCSVDHWJYJLDRWIGRLOINRFBTLMHFRUERFQGFLKOKNKPMGYHXHDEOWBDIVPTCXTCELI");

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
    msg.setTimeStamp(0.9911354336457758);
    msg.setSource(4943U);
    msg.setSourceEntity(120U);
    msg.setDestination(53204U);
    msg.setDestinationEntity(87U);
    msg.timeout = 9056U;
    msg.lat = 0.12269673725630836;
    msg.lon = 0.5287802634905608;
    msg.z = 0.8347540945315155;
    msg.z_units = 244U;
    msg.speed = 0.08000469940274424;
    msg.speed_units = 134U;
    msg.duration = 1739U;
    msg.radius = 0.12705406875146297;
    msg.flags = 144U;
    msg.custom.assign("UBINTQLMAMTGBRJNEKFACLTATBSFWMUOJVCGGRLUWHZHBNZUJEUTQEQPAYPKCQXJIXDGSPSVEHCZALHLWBSQCPNIYGNYFCPGUZBJSPVTDOVGOOEERWGQFJCHYPXFCERXWPDJIPTKVQKAMVFXRZBEYHUSASOILTNBQDVMWNIW");

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
    msg.setTimeStamp(0.9474132982396071);
    msg.setSource(45290U);
    msg.setSourceEntity(10U);
    msg.setDestination(7012U);
    msg.setDestinationEntity(22U);
    msg.timeout = 20641U;
    msg.lat = 0.46196774329691936;
    msg.lon = 0.1952475880905149;
    msg.z = 0.3603097786911029;
    msg.z_units = 174U;
    msg.speed = 0.26979682984784925;
    msg.speed_units = 211U;
    msg.duration = 9287U;
    msg.radius = 0.3419849437833232;
    msg.flags = 32U;
    msg.custom.assign("QOWRCLTCJOJPTHMURWGSZAYEKWCLFOAXBDADESBTIEKBTRSEEYUAQWVGCYGKCLTIKHNWXLHPDEOHCJNAIUTNVNSZPVUYJZLDRBGEZS");

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
    msg.setTimeStamp(0.5521751953682801);
    msg.setSource(21003U);
    msg.setSourceEntity(26U);
    msg.setDestination(45140U);
    msg.setDestinationEntity(39U);
    msg.custom.assign("QWEOGWTRSVSRTGGLFOYZWXVTOFPLDPPSRXZUAAHYTNUSSYYVMPJMGCHOEZKMMFBCQZCBXNWZIIFBDCDNQVZTSXWGMYBRFYTIBVSIALERGUXZTLADUYCTOEWFQNDHGHKLAQHUJQKNVMRLEWDKUHSAZBATUGUDGMJHZVXTKFDZJLKBQVIRSSYCCOVDHFUV");

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
    msg.setTimeStamp(0.18061356010645957);
    msg.setSource(12682U);
    msg.setSourceEntity(128U);
    msg.setDestination(28548U);
    msg.setDestinationEntity(247U);
    msg.custom.assign("NRPLMYKJZBRKVOQYHDOLUAGODBKHEYNUCOQAABFTZADNHUSKLIHZSPGTLGXHOBXRVDMDMRZHYLRNMZYXTVHISGQXQUZCGWJQMTZYJJBCDXXNIPQVMPNNZEJFKECSBKGCTFYLARWYFOQVKPVUEDBVTUNJKTCHGSXFELLOTFRESDWCIVXAZMAKGYAF");

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
    msg.setTimeStamp(0.4240967941266839);
    msg.setSource(29918U);
    msg.setSourceEntity(51U);
    msg.setDestination(35088U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("ZZLAFGJTTULQWOMNBFWXUAHPMXSHLZVEBYUFSHTRMAU");

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
    msg.setTimeStamp(0.6599795605323863);
    msg.setSource(7025U);
    msg.setSourceEntity(218U);
    msg.setDestination(38649U);
    msg.setDestinationEntity(64U);
    msg.timeout = 37624U;
    msg.lat = 0.9125059662839418;
    msg.lon = 0.422870028910043;
    msg.z = 0.4859257322460695;
    msg.z_units = 93U;
    msg.duration = 25981U;
    msg.speed = 0.8389342171133846;
    msg.speed_units = 106U;
    msg.type = 198U;
    msg.radius = 0.9395564122830561;
    msg.length = 0.5323948073926245;
    msg.bearing = 0.8162748346555497;
    msg.direction = 6U;
    msg.custom.assign("EEDYEVZDWXRIJTBGWGSINJURULTUAENSONRSCMJMVGCYEJQSDAPDUQKBQZVDJEFFSVBOKVPPGKLWITHCWYJHJFYXQIBIMMXCLUEHMYTRNDACBCUPCOAWZYAECKXKVXYYGQZNPXGQF");

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
    msg.setTimeStamp(0.5212863680937055);
    msg.setSource(56632U);
    msg.setSourceEntity(127U);
    msg.setDestination(32089U);
    msg.setDestinationEntity(254U);
    msg.timeout = 63787U;
    msg.lat = 0.13755706169320525;
    msg.lon = 0.5303084420728557;
    msg.z = 0.9469198097765776;
    msg.z_units = 21U;
    msg.duration = 47801U;
    msg.speed = 0.008557693560681812;
    msg.speed_units = 237U;
    msg.type = 197U;
    msg.radius = 0.25554132231054716;
    msg.length = 0.00449806201309344;
    msg.bearing = 0.5120501761918634;
    msg.direction = 65U;
    msg.custom.assign("WSYEZCNPLIHUHYQZQXZGGQOCVSPLYXUIRMEDFWRXIPKNXEMYAPOHCTKBBGFZTVXLAGHUQHIJHQMVBGILWBJFIERCIDIOENWOLNVPAKSALWDBASXAQFEYGMPORLZJSVLMZRJDXFJRCSGZSJTITSNUOQFNANPCBCBEKRJLVGLYVNDXKFQEMDQSUVY");

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
    msg.setTimeStamp(0.8172661490159836);
    msg.setSource(27152U);
    msg.setSourceEntity(47U);
    msg.setDestination(19273U);
    msg.setDestinationEntity(8U);
    msg.timeout = 103U;
    msg.lat = 0.7003381733957955;
    msg.lon = 0.44981384714125794;
    msg.z = 0.29581059986091185;
    msg.z_units = 129U;
    msg.duration = 43833U;
    msg.speed = 0.219720522060584;
    msg.speed_units = 10U;
    msg.type = 57U;
    msg.radius = 0.49669608027012435;
    msg.length = 0.33461382510845894;
    msg.bearing = 0.9817817021673685;
    msg.direction = 91U;
    msg.custom.assign("QCNTCWBZDCNDSSFPLVGHFLPENKZZXCHNWBHTWRYQLOPIADTKOYIUKTJLDIJSDMEUREMUPCWNFQMVXRBNXEWRPSHCNXIYYQSLFTHAQGHNOMSXMDOGBUBAJRREZGGT");

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
    msg.setTimeStamp(0.15885288211856474);
    msg.setSource(51188U);
    msg.setSourceEntity(135U);
    msg.setDestination(366U);
    msg.setDestinationEntity(29U);
    msg.duration = 54742U;
    msg.custom.assign("EAKVTTSOTBLWQQBTXKGSDXFBUICUCWPLEMBSXZMEKHGEOUQQINZDMJJNQSFVLBLGDINPEGTWVAAB");

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
    msg.setTimeStamp(0.9442532667092842);
    msg.setSource(52139U);
    msg.setSourceEntity(104U);
    msg.setDestination(16311U);
    msg.setDestinationEntity(88U);
    msg.duration = 19502U;
    msg.custom.assign("DIMVJMMEANYVTDHUZCBJLBVPHSKSTWHZWXRYGOLTPTXSOVQVYKYGDDCVLKQHETWXIFFMEPVRPBUCQRSCATBRTTESBROXEDJIUSUMWRYNBQPORWWSBHNEJLGYLSDPEKWZRJLGBMIPZZDIEKOL");

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
    msg.setTimeStamp(0.36630166070855663);
    msg.setSource(45411U);
    msg.setSourceEntity(80U);
    msg.setDestination(47600U);
    msg.setDestinationEntity(247U);
    msg.duration = 58956U;
    msg.custom.assign("GPKESQUAJVYAOHBHWJNIHNCEMTAQQXDWFZQWVVZFOOZRRMXGSUBGRNENMSBFHYLTLVSZRKMFHJQEUTKPMSZAOLCRBPMXWSYIMPTBMYIHSDQWUVNVTYEIKAUPWMIBEEWBJXOWYVHUNFBFWQTDLGCZGYGJTRPPBDIUGIUZARJKFQCDCXBZLUYJDIDUPNYSRXVCAKLKCTFOGFOIJEDDOCF");

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
    msg.setTimeStamp(0.9491017169437795);
    msg.setSource(27706U);
    msg.setSourceEntity(5U);
    msg.setDestination(63200U);
    msg.setDestinationEntity(87U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.5319245749574412;
    msg.control.set(tmp_msg_0);
    msg.duration = 64879U;
    msg.custom.assign("FMVPDBRLBEXDKBIZHGP");

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
    msg.setTimeStamp(0.1581353795352829);
    msg.setSource(29240U);
    msg.setSourceEntity(226U);
    msg.setDestination(19371U);
    msg.setDestinationEntity(66U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.40126105210548324;
    tmp_msg_0.speed_units = 170U;
    msg.control.set(tmp_msg_0);
    msg.duration = 4278U;
    msg.custom.assign("WWOBOKCVFLRGKSVARCRIXMPGQLTGVNKLKCQIWVFFKUDAZYUPCKDWAJOZDNTIJNIDCJPCVUHAOEFTOXXJSWFDMSNZJDETLAOTUAJBONRPMMKXRMTLSUZDFHAIVEZLXXMSSRBEQSMTNIYYLDVHGMREKYUHWQVPAAXZCFODGUUOYLQ");

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
    msg.setTimeStamp(0.9902340575982099);
    msg.setSource(9408U);
    msg.setSourceEntity(172U);
    msg.setDestination(61588U);
    msg.setDestinationEntity(221U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8907168888479586;
    msg.control.set(tmp_msg_0);
    msg.duration = 21289U;
    msg.custom.assign("ZPFGLGDIRQMCDYMQQYXYBRXDTNGGGVYNDXAPVQYMOUDFOPWQZHFASVUTXHJDZDRXFNEAQSDKEKYAACCVIFWPZTSRPEYKJTBOZOHCRXHZFAKRTBEKSALRLHVUKEGNITWCMUIJAGWJRYMWLBMHBSMMNSRZOJCTSSCPNONUQKFZLOYLNCOILKCLUETABHUZYTXHNXJBBAQHFLVQJWJEGJIHLOOKISSDIGDKVPQWVFWWJZBWTUBMVIXUPEUNRFPXG");

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
    msg.setTimeStamp(0.5859128599706083);
    msg.setSource(34612U);
    msg.setSourceEntity(60U);
    msg.setDestination(48679U);
    msg.setDestinationEntity(216U);
    msg.timeout = 501U;
    msg.lat = 0.9377607100647715;
    msg.lon = 0.8282024020928811;
    msg.z = 0.05784202100251712;
    msg.z_units = 68U;
    msg.speed = 0.032433460170906314;
    msg.speed_units = 190U;
    msg.bearing = 0.742445344884401;
    msg.cross_angle = 0.7934651399490489;
    msg.width = 0.6539766566559411;
    msg.length = 0.39098563273701126;
    msg.hstep = 0.8807308555205683;
    msg.coff = 31U;
    msg.alternation = 67U;
    msg.flags = 230U;
    msg.custom.assign("GNDZKTNCLQKYLAGYAHJICFLZFHUPBPRINBOACWNOWOMRWUWIYCVIFGXQKRVTLNGLFWEOGSVRWJ");

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
    msg.setTimeStamp(0.01908170675039078);
    msg.setSource(20792U);
    msg.setSourceEntity(232U);
    msg.setDestination(39484U);
    msg.setDestinationEntity(234U);
    msg.timeout = 59546U;
    msg.lat = 0.30192053637437444;
    msg.lon = 0.5761942133037787;
    msg.z = 0.26195528082730224;
    msg.z_units = 86U;
    msg.speed = 0.29093467288467434;
    msg.speed_units = 21U;
    msg.bearing = 0.3200141139682554;
    msg.cross_angle = 0.5028040472422556;
    msg.width = 0.07285147650337354;
    msg.length = 0.023499947824021428;
    msg.hstep = 0.9265509719192515;
    msg.coff = 27U;
    msg.alternation = 209U;
    msg.flags = 46U;
    msg.custom.assign("CCXZTLKQWKEHXEACWABSOBGP");

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
    msg.setTimeStamp(0.6307669090219102);
    msg.setSource(6355U);
    msg.setSourceEntity(47U);
    msg.setDestination(18808U);
    msg.setDestinationEntity(186U);
    msg.timeout = 57564U;
    msg.lat = 0.5864671928674635;
    msg.lon = 0.5027858909397191;
    msg.z = 0.09894827990853228;
    msg.z_units = 117U;
    msg.speed = 0.6584096488895257;
    msg.speed_units = 61U;
    msg.bearing = 0.10389863140612121;
    msg.cross_angle = 0.8801335244889794;
    msg.width = 0.4862611686538205;
    msg.length = 0.5711938945471977;
    msg.hstep = 0.006277300450632239;
    msg.coff = 33U;
    msg.alternation = 68U;
    msg.flags = 64U;
    msg.custom.assign("WQPDTNMZLOUSQGGZECANZCVEEHMHIUHVSTDBRCHLIQTFGDSJOM");

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
    msg.setTimeStamp(0.9871738064877174);
    msg.setSource(29782U);
    msg.setSourceEntity(80U);
    msg.setDestination(28194U);
    msg.setDestinationEntity(161U);
    msg.timeout = 2499U;
    msg.lat = 0.7027292196548882;
    msg.lon = 0.6464345698729793;
    msg.z = 0.17485025281044486;
    msg.z_units = 220U;
    msg.speed = 0.7985186189799993;
    msg.speed_units = 59U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7944344132797091;
    tmp_msg_0.y = 0.6853332654991477;
    tmp_msg_0.z = 0.9168839507498115;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AZNLUZGNUSACBLLBAUTTVQHGIIGAPCX");

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
    msg.setTimeStamp(0.5436640705717014);
    msg.setSource(2858U);
    msg.setSourceEntity(226U);
    msg.setDestination(64145U);
    msg.setDestinationEntity(193U);
    msg.timeout = 5897U;
    msg.lat = 0.8739783929772267;
    msg.lon = 0.4287173974691655;
    msg.z = 0.3936794093988877;
    msg.z_units = 36U;
    msg.speed = 0.7212038772439328;
    msg.speed_units = 136U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.23286118050503368;
    tmp_msg_0.y = 0.06356117490436552;
    tmp_msg_0.z = 0.6426640776494986;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MNTEFWCAGQVMODENIDSCRUYUPJZEAEGXOIAHXJQTCYJRDYOBOHIZJKTXPPUDRSVQPLDIKWMWQEUNSZCOJZMWYHEJFFLVKVJLHBFBLGCRMQGITVBTNVNZDAAHYLTUVGFXQVVKRWESVYHZMFAEOXZQT");

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
    msg.setTimeStamp(0.29209719360493913);
    msg.setSource(37314U);
    msg.setSourceEntity(116U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(135U);
    msg.timeout = 43218U;
    msg.lat = 0.9201881744185035;
    msg.lon = 0.577741753487516;
    msg.z = 0.3450140860787132;
    msg.z_units = 80U;
    msg.speed = 0.4334799823200798;
    msg.speed_units = 235U;
    msg.custom.assign("DBOZLOQXAUILJGRTQAFHCTITZIUEWZVEMVAVVSTSFWSMKRZHCNSNGDUFJZUYJJUWBXAOHCVGUSMOGB");

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
    msg.setTimeStamp(0.10964733592152176);
    msg.setSource(23715U);
    msg.setSourceEntity(196U);
    msg.setDestination(23904U);
    msg.setDestinationEntity(172U);
    msg.x = 0.20197317314587737;
    msg.y = 0.8954771830147545;
    msg.z = 0.3650948972686556;

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
    msg.setTimeStamp(0.056107865319327765);
    msg.setSource(57141U);
    msg.setSourceEntity(54U);
    msg.setDestination(50782U);
    msg.setDestinationEntity(67U);
    msg.x = 0.056933345510276734;
    msg.y = 0.11068032821121221;
    msg.z = 0.2238626130082172;

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
    msg.setTimeStamp(0.5101679854081442);
    msg.setSource(39599U);
    msg.setSourceEntity(187U);
    msg.setDestination(10548U);
    msg.setDestinationEntity(139U);
    msg.x = 0.7200452601690337;
    msg.y = 0.8287106656895425;
    msg.z = 0.72896488334588;

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
    msg.setTimeStamp(0.7648315868397615);
    msg.setSource(48012U);
    msg.setSourceEntity(27U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(254U);
    msg.timeout = 13081U;
    msg.lat = 0.9576058413794519;
    msg.lon = 0.7706198683940757;
    msg.z = 0.48759889164559045;
    msg.z_units = 34U;
    msg.amplitude = 0.014741116635744622;
    msg.pitch = 0.5362646760647489;
    msg.speed = 0.12645141166121598;
    msg.speed_units = 161U;
    msg.custom.assign("WWAJFTPHPRSBLVA");

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
    msg.setTimeStamp(0.06944617338163817);
    msg.setSource(40895U);
    msg.setSourceEntity(41U);
    msg.setDestination(44602U);
    msg.setDestinationEntity(6U);
    msg.timeout = 12698U;
    msg.lat = 0.46154453492519276;
    msg.lon = 0.4600091751170905;
    msg.z = 0.4359589205526585;
    msg.z_units = 230U;
    msg.amplitude = 0.48061659884098973;
    msg.pitch = 0.07813565998422589;
    msg.speed = 0.896932306255688;
    msg.speed_units = 82U;
    msg.custom.assign("IPPWPSGZTUKOGOMRNVNHSYWCZOPEMBHLBDAQMYAEHWPKZYURJYDRHWJJUYXEOQTHDQGBRPAAFDKXRDPXOSSGIYUOQICOXVJHPFZDTGECIJVEJCHXLRZUGCFTZVURDXQGMTUYWLLQUFBBLDSLIQAKSRTKXMIVXUTSJYAQGFAVNZTNMVCFJVYTNABZTOHYVDICEGXLNDJNSMZXVUGOAKFBHWPCMSESLZMBWRBIPECECNWOQBWKWF");

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
    msg.setTimeStamp(0.5996305609031617);
    msg.setSource(9128U);
    msg.setSourceEntity(76U);
    msg.setDestination(11588U);
    msg.setDestinationEntity(227U);
    msg.timeout = 48068U;
    msg.lat = 0.12276307127659913;
    msg.lon = 0.41899608680476086;
    msg.z = 0.9341550909811948;
    msg.z_units = 110U;
    msg.amplitude = 0.5497631542404104;
    msg.pitch = 0.7863484489241336;
    msg.speed = 0.3372732940084312;
    msg.speed_units = 131U;
    msg.custom.assign("FKHCIYADMXVPILDHUYCIGQTDCAMZDGOWNXYVPWVTFIKXVEXMDWBMQCRYOWABUNEKSATBIJQUJEVCIMGBEKZFDYHBNGBUVPLPBXDJKEOXXZSSIDTWHRXORRGUYLTUVAKSRMYFTFMPQGZYCNXLJHVREFZKPGCSFUMJHJQZFNHDWFSWQPNNEPEREWLH");

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
    msg.setTimeStamp(0.9181590480692114);
    msg.setSource(27419U);
    msg.setSourceEntity(82U);
    msg.setDestination(24286U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.7009625504809625);
    msg.setSource(23618U);
    msg.setSourceEntity(118U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.8577364188249162);
    msg.setSource(12644U);
    msg.setSourceEntity(214U);
    msg.setDestination(61915U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.7212430907666314);
    msg.setSource(8471U);
    msg.setSourceEntity(89U);
    msg.setDestination(55914U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.9903436294638193;
    msg.lon = 0.07169994460633411;
    msg.z = 0.4119322143453259;
    msg.z_units = 60U;
    msg.radius = 0.24722348361396207;
    msg.duration = 20305U;
    msg.speed = 0.08181878446082136;
    msg.speed_units = 176U;
    msg.custom.assign("AZEMCTQLEFFDNJZARHVKYLXUBWSJADKKXPTUAEPSIDGPJDCAUIVVDYRSTWOFHTULHOPPZYUOEEIEAWNLJNITQBBQZFYXHKJGZSWBSZMMBRKRVNQFGKQZLHJVBYUE");

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
    msg.setTimeStamp(0.4312418072419464);
    msg.setSource(40801U);
    msg.setSourceEntity(13U);
    msg.setDestination(41742U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.2660881025119479;
    msg.lon = 0.00829719732531986;
    msg.z = 0.11398235851567451;
    msg.z_units = 113U;
    msg.radius = 0.5925094388043198;
    msg.duration = 19688U;
    msg.speed = 0.03575032850451021;
    msg.speed_units = 235U;
    msg.custom.assign("EYIJQRPUAQKLFPQUGHRAVPZMTVMYDOOOTRNVGZHXBPJISSFHMEZWEUXTIQVEGXCLCSSNNZJFWYCQFXWSXBSNSXJAUUMKWTGRAFJHHDZBVKIDYDFJLWDLKMEEBVYQFDSZDOYWYPMRYTMGIMGYFHBECITBNPUTLHVCHNRJSIVUZUPNAXOFELNOQQCTWIAZXCENACVLBGPOGDZOKKNKJGGBQRTDSMLEMRRLHBFZTIJ");

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
    msg.setTimeStamp(0.9084957857150396);
    msg.setSource(58008U);
    msg.setSourceEntity(157U);
    msg.setDestination(64423U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.8840728868789329;
    msg.lon = 0.04415356777882473;
    msg.z = 0.9132879869260779;
    msg.z_units = 194U;
    msg.radius = 0.4409352921342493;
    msg.duration = 59441U;
    msg.speed = 0.5666334628509675;
    msg.speed_units = 108U;
    msg.custom.assign("ELACMIMKJYACBSIYBWYWWMUQRMPHIOHPFYALDKBXLGTXIDOWOOYEDATMYLEXUJHFEQBUQHHFTZCTIILIVNNNSFXJDDWUXHAVZPRVQKVZFORBNPVZNJTQHLOGSTJBHAGUPAFVUXKIVFGDNYNAZPWMTEZVSHICQCZYTAJYFKCTWSRDLEGCJRBEAGWQOJFLMLERZWQOCXRVUUJSCSBODVNQNSGPXXSGXYBIHMKRWGEFJEKGPKKKPUMT");

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
    msg.setTimeStamp(0.03201735012459961);
    msg.setSource(2808U);
    msg.setSourceEntity(204U);
    msg.setDestination(31350U);
    msg.setDestinationEntity(183U);
    msg.timeout = 29578U;
    msg.flags = 49U;
    msg.lat = 0.35362033130349146;
    msg.lon = 0.17037753013419243;
    msg.start_z = 0.931207914586964;
    msg.start_z_units = 82U;
    msg.end_z = 0.6094619606309881;
    msg.end_z_units = 79U;
    msg.radius = 0.04614108937133887;
    msg.speed = 0.19221601969308388;
    msg.speed_units = 203U;
    msg.custom.assign("WOIMPLMUVWWZGUZRRGCFEVRYMGDLFWEDROUBACUUMLEGJQSEZXQQTTRLNSRXKFSBSIJTJOPGTFBRSLFZXXUCXQYRBCPVHCKONEDSILEBPNYIXJMXTHNUJWQAOOKFLEZVZLAWGPNYJTGWKGMTZVHAVYUCMMOXNHIBAFPWTZKYJFRDHDDAOGXCOBBQIUKXJEPQSFVIJFPKQAMDYLSAALVYZMEQASNWNYCEWYJQOVKGH");

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
    msg.setTimeStamp(0.7484159716755568);
    msg.setSource(55724U);
    msg.setSourceEntity(254U);
    msg.setDestination(55241U);
    msg.setDestinationEntity(135U);
    msg.timeout = 64274U;
    msg.flags = 116U;
    msg.lat = 0.0679004727148107;
    msg.lon = 0.8393890994815797;
    msg.start_z = 0.13028067576542568;
    msg.start_z_units = 139U;
    msg.end_z = 0.8283825815656977;
    msg.end_z_units = 179U;
    msg.radius = 0.3004499814437164;
    msg.speed = 0.5621960464493816;
    msg.speed_units = 96U;
    msg.custom.assign("YEXEMSBWKOEPFIHFZRAJOKGXFULZRBRMMVIQYIDPAGJCWZBFMOPGGKIWHPPVDXTIHGZLKYHPDTHPJXOJCXUFCNWMVSZFRBYBR");

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
    msg.setTimeStamp(0.8280901403495898);
    msg.setSource(43966U);
    msg.setSourceEntity(48U);
    msg.setDestination(12907U);
    msg.setDestinationEntity(146U);
    msg.timeout = 7324U;
    msg.flags = 20U;
    msg.lat = 0.27728390985946416;
    msg.lon = 0.7414709340101624;
    msg.start_z = 0.4251417818337603;
    msg.start_z_units = 203U;
    msg.end_z = 0.85245716756933;
    msg.end_z_units = 58U;
    msg.radius = 0.9296635293004739;
    msg.speed = 0.1327303776457851;
    msg.speed_units = 22U;
    msg.custom.assign("CWOAHXJYRQXYEALHGBJZBISYSCPMKOTQZOBGGRCGMJZAHSTARVQWJODZFSINAJOWOUAVMEKZRFZVBRCWPFWHGHNQXTIMGOROZIPT");

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
    msg.setTimeStamp(0.32255040332411955);
    msg.setSource(7812U);
    msg.setSourceEntity(0U);
    msg.setDestination(19719U);
    msg.setDestinationEntity(212U);
    msg.timeout = 38435U;
    msg.lat = 0.3696269941284437;
    msg.lon = 0.9195025122603663;
    msg.z = 0.359263798728112;
    msg.z_units = 181U;
    msg.speed = 0.5676074123422697;
    msg.speed_units = 252U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.25762037987233377;
    tmp_msg_0.y = 0.4427069824059203;
    tmp_msg_0.z = 0.25204025285077125;
    tmp_msg_0.t = 0.4149790263883756;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QXROMGRFJDUTRSLTNJUOFPXXYABJCGDMBUKMHHGOVGVPRFLIDBSMHUSTPWIWQXYGZZKEDDZGSDBKPWUKSJJHFAGXOZYLBWGFKAR");

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
    msg.setTimeStamp(0.15341451547859042);
    msg.setSource(19711U);
    msg.setSourceEntity(63U);
    msg.setDestination(61101U);
    msg.setDestinationEntity(248U);
    msg.timeout = 18154U;
    msg.lat = 0.9260773597957903;
    msg.lon = 0.1768494357941427;
    msg.z = 0.3499390365141172;
    msg.z_units = 55U;
    msg.speed = 0.7776725424122923;
    msg.speed_units = 31U;
    msg.custom.assign("XJLSAVFDSBEGMTNZJYRHSCBNDVDJHLWCXLUKAXOWGYZGPKMIMIOVIHOGKCTQUPWJSJJFXWXIB");

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
    msg.setTimeStamp(0.30436508629285763);
    msg.setSource(65300U);
    msg.setSourceEntity(80U);
    msg.setDestination(9422U);
    msg.setDestinationEntity(93U);
    msg.timeout = 60676U;
    msg.lat = 0.1479950322106589;
    msg.lon = 0.9489526688276965;
    msg.z = 0.42926080046714776;
    msg.z_units = 228U;
    msg.speed = 0.49062580928343824;
    msg.speed_units = 227U;
    msg.custom.assign("FHTXDUWMZVLBISJKHZLWGYFTJERKSXFEIGOOQZQDWBOGKOJLFLMYADNYINRDSQROMBNNAKLHWQYNRDNKLCBCEWVSUZVAIAMCZBTWTAAXZXEYLOLHKCVDTVIIAEDAYOQG");

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
    msg.setTimeStamp(0.7928834639779876);
    msg.setSource(30172U);
    msg.setSourceEntity(70U);
    msg.setDestination(20623U);
    msg.setDestinationEntity(149U);
    msg.x = 0.3319115383707594;
    msg.y = 0.5993932669532048;
    msg.z = 0.9234211646058886;
    msg.t = 0.16402356021302966;

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
    msg.setTimeStamp(0.3241436433034016);
    msg.setSource(54038U);
    msg.setSourceEntity(126U);
    msg.setDestination(5327U);
    msg.setDestinationEntity(3U);
    msg.x = 0.016910693963192336;
    msg.y = 0.7726463506844947;
    msg.z = 0.45383665869434364;
    msg.t = 0.664895079528248;

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
    msg.setTimeStamp(0.5255046163936777);
    msg.setSource(40748U);
    msg.setSourceEntity(31U);
    msg.setDestination(25660U);
    msg.setDestinationEntity(64U);
    msg.x = 0.9426624484828725;
    msg.y = 0.2889972002125246;
    msg.z = 0.49094948481683287;
    msg.t = 0.8992112320820338;

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
    msg.setTimeStamp(0.9086877650480242);
    msg.setSource(64642U);
    msg.setSourceEntity(76U);
    msg.setDestination(51758U);
    msg.setDestinationEntity(196U);
    msg.timeout = 49793U;
    msg.name.assign("LYJZXOKDAHLUUOHXNMVBAJPLXSPZTKUWZYIYKBLSJYQIYRVKWUCPXSIFMDHBMAWKQXFLTNPOGNZWAFEQFIJICUQHMHGUKBFWWISNXNQLXJBKWEYGOGMEQWPQHBDEAZFTWLDDPDQLSRDHCGICOABYMVGEHTYCODXRCPENITEVXLFDRMPUH");
    msg.custom.assign("QNPFUVGVTZXHLLCIEJVRHJDCHPLTBXKXOYTVFXFAVGERBGCEODSMQFCRFCASQDBPFDFJAEAYUKWSAZIMDSJBNNZWLAZZZWUWFTCPEKMIOUQDUYINKIGVSIOJSBUGBZXDRREXXALWOURVSQVPAHXCRNBVMLBPLOVEJUAYQEOIM");

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
    msg.setTimeStamp(0.3070350250485253);
    msg.setSource(38412U);
    msg.setSourceEntity(148U);
    msg.setDestination(43248U);
    msg.setDestinationEntity(159U);
    msg.timeout = 41937U;
    msg.name.assign("GECDUNXZAAUJFLDRRZLSVYKWHNPIOLHBPXVWUIZFYQNELIEWFGSOQXN");
    msg.custom.assign("PRSOYMKSQOMESLDPTYZNFMIGGHXBSCAMVZXJHAXEYIZCIRCXAVKRVPXLIYFVPDGUBNBHAIFOJCDWGAGSQBUWCCFQYHVXSGTMGBHAJJKOXYQTYHNLJWSEWAGVMRRULUEXBKANPZFTWOFTNTTVWYZDVDGJKZFZIOOHUMWWLMMCVWBVYEIXFBHKKXFJIPZICZ");

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
    msg.setTimeStamp(0.5453286230280574);
    msg.setSource(23030U);
    msg.setSourceEntity(251U);
    msg.setDestination(8153U);
    msg.setDestinationEntity(235U);
    msg.timeout = 30997U;
    msg.name.assign("CXHNSNHXOPEUGFY");
    msg.custom.assign("LQYATOJVSCMBMMJBGPIRQD");

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
    msg.setTimeStamp(0.10519574818297517);
    msg.setSource(60599U);
    msg.setSourceEntity(90U);
    msg.setDestination(30998U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.834949380944887;
    msg.lon = 0.8051041589531934;
    msg.z = 0.17281013888068686;
    msg.z_units = 242U;
    msg.speed = 0.12691317825236847;
    msg.speed_units = 247U;
    msg.start_time = 0.09686370906585651;
    msg.custom.assign("AXFVJEYTRMLOAYBWSZFT");

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
    msg.setTimeStamp(0.3781458211391431);
    msg.setSource(38037U);
    msg.setSourceEntity(37U);
    msg.setDestination(6670U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.4907037682305968;
    msg.lon = 0.09476731776340219;
    msg.z = 0.641797290975373;
    msg.z_units = 208U;
    msg.speed = 0.06813515837041118;
    msg.speed_units = 182U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9178047774894945;
    tmp_msg_0.y = 0.6082107083025149;
    tmp_msg_0.z = 0.8415053264430763;
    tmp_msg_0.t = 0.02243160569593272;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6273983909998557;
    msg.custom.assign("TJXUPGYSFKWEXFSALJMUNPLVMKEQRIFTZOMMJOFLVGJQFHSTTAKYZTHIHCOWTVSVGFFCWZRZGPPJIYPIVCODRARYEELDCAIUJYHMCZQGXYSLAHBALUONKCDLXBWVBPDYBQGEZQTMPDNVUDHQQABXXVJANCIMWQZGYNYOMLWDJNTERUMENXUEKHRWKRBWHSWQAETUS");

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
    msg.setTimeStamp(0.7518503526746849);
    msg.setSource(21270U);
    msg.setSourceEntity(90U);
    msg.setDestination(56235U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.5306445403862482;
    msg.lon = 0.8637923616002763;
    msg.z = 0.05847341793650995;
    msg.z_units = 150U;
    msg.speed = 0.20671631371739396;
    msg.speed_units = 194U;
    msg.start_time = 0.07897568403347432;
    msg.custom.assign("LYGBXHZGHQAIDHVRQUQPXLWGDTPXNBCFDODGMVXCMVFMVSNMPPKTMYLJKSNHMOBYHCXVUIXAEAGTPUFBISNEBQRJLKRZYRLFCYAEEMQOKESKUCZJQBFHRCJNGHYIKYOJINNQBPTTQKSYBUONCAOPTCZCKZDYZGVFEEUZDKXQALUXHWBEDSTWXARRUYFMXEVPDZNTWASLGUPWVFRWSRKOISHNESDTTOWJQUWAI");

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
    msg.setTimeStamp(0.3847594898439235);
    msg.setSource(48803U);
    msg.setSourceEntity(146U);
    msg.setDestination(57113U);
    msg.setDestinationEntity(101U);
    msg.vid = 45319U;
    msg.off_x = 0.3428458454372225;
    msg.off_y = 0.7600451861166729;
    msg.off_z = 0.12892176059609828;

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
    msg.setTimeStamp(0.17094816773611288);
    msg.setSource(46458U);
    msg.setSourceEntity(12U);
    msg.setDestination(17118U);
    msg.setDestinationEntity(242U);
    msg.vid = 24647U;
    msg.off_x = 0.2530479843157247;
    msg.off_y = 0.4902281218190945;
    msg.off_z = 0.31457012494185377;

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
    msg.setTimeStamp(0.46699776495421674);
    msg.setSource(63215U);
    msg.setSourceEntity(96U);
    msg.setDestination(63711U);
    msg.setDestinationEntity(16U);
    msg.vid = 41035U;
    msg.off_x = 0.029361852106723152;
    msg.off_y = 0.7519979160013115;
    msg.off_z = 0.972754160380856;

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
    msg.setTimeStamp(0.20808879396781843);
    msg.setSource(8664U);
    msg.setSourceEntity(114U);
    msg.setDestination(37605U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.3994906847112465);
    msg.setSource(5511U);
    msg.setSourceEntity(76U);
    msg.setDestination(17077U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.16807724637597798);
    msg.setSource(11804U);
    msg.setSourceEntity(74U);
    msg.setDestination(13436U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.5931159844752771);
    msg.setSource(4802U);
    msg.setSourceEntity(83U);
    msg.setDestination(20812U);
    msg.setDestinationEntity(126U);
    msg.mid = 44266U;

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
    msg.setTimeStamp(0.6622903486699465);
    msg.setSource(61283U);
    msg.setSourceEntity(101U);
    msg.setDestination(15985U);
    msg.setDestinationEntity(67U);
    msg.mid = 35917U;

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
    msg.setTimeStamp(0.31037524891290047);
    msg.setSource(14417U);
    msg.setSourceEntity(253U);
    msg.setDestination(34363U);
    msg.setDestinationEntity(68U);
    msg.mid = 57953U;

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
    msg.setTimeStamp(0.3444378542900094);
    msg.setSource(24303U);
    msg.setSourceEntity(50U);
    msg.setDestination(48898U);
    msg.setDestinationEntity(65U);
    msg.state = 28U;
    msg.eta = 38651U;
    msg.info.assign("MBJLYDBHLLWDAAGOPAKJKFFVXAFUBPYMAXZBYSPXEWBJJFRRY");

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
    msg.setTimeStamp(0.5834286434673982);
    msg.setSource(64728U);
    msg.setSourceEntity(101U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(218U);
    msg.state = 122U;
    msg.eta = 2133U;
    msg.info.assign("LTFSOVDFQXCMALJAQIERWMESZEKWIQGWEVROMPHMRNHPDLJTEZDGYTDTPGQAXOPJTJUAUSWLYA");

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
    msg.setTimeStamp(0.829040631234122);
    msg.setSource(10559U);
    msg.setSourceEntity(225U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(194U);
    msg.state = 196U;
    msg.eta = 296U;
    msg.info.assign("ICXOAKFJPAXDHAAQSNBIIBUTQCQNELUWOUBMOHHOYXJJVBKMMIDCRCVPLSDDLJEGP");

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
    msg.setTimeStamp(0.4834907630164791);
    msg.setSource(1190U);
    msg.setSourceEntity(212U);
    msg.setDestination(16958U);
    msg.setDestinationEntity(5U);
    msg.system = 13029U;
    msg.duration = 10923U;
    msg.speed = 0.9036098467632324;
    msg.speed_units = 31U;
    msg.x = 0.055753611809000625;
    msg.y = 0.4068117766809165;
    msg.z = 0.18312557680357688;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.4469765898046941);
    msg.setSource(2333U);
    msg.setSourceEntity(170U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(103U);
    msg.system = 22214U;
    msg.duration = 53788U;
    msg.speed = 0.8122342992730769;
    msg.speed_units = 63U;
    msg.x = 0.905341433841538;
    msg.y = 0.20749443320780103;
    msg.z = 0.9665649021938605;
    msg.z_units = 104U;

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
    msg.setTimeStamp(0.06952710255874273);
    msg.setSource(51775U);
    msg.setSourceEntity(140U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(214U);
    msg.system = 65427U;
    msg.duration = 24539U;
    msg.speed = 0.2001433884810001;
    msg.speed_units = 53U;
    msg.x = 0.44769128272180236;
    msg.y = 0.45667314587492336;
    msg.z = 0.21494685969901128;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.05112473423066455);
    msg.setSource(760U);
    msg.setSourceEntity(44U);
    msg.setDestination(27104U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.4164981526637572;
    msg.lon = 0.79292465714204;
    msg.speed = 0.4111779087443076;
    msg.speed_units = 185U;
    msg.duration = 28533U;
    msg.sys_a = 41902U;
    msg.sys_b = 3467U;
    msg.move_threshold = 0.12800019629183734;

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
    msg.setTimeStamp(0.7916907201639373);
    msg.setSource(52010U);
    msg.setSourceEntity(128U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.1819024404593268;
    msg.lon = 0.17021272249362118;
    msg.speed = 0.17577368054702325;
    msg.speed_units = 215U;
    msg.duration = 16470U;
    msg.sys_a = 753U;
    msg.sys_b = 23754U;
    msg.move_threshold = 0.5982778800298157;

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
    msg.setTimeStamp(0.14878275032696575);
    msg.setSource(56231U);
    msg.setSourceEntity(94U);
    msg.setDestination(41635U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.4152010754371409;
    msg.lon = 0.5318948415681797;
    msg.speed = 0.08257421305514723;
    msg.speed_units = 145U;
    msg.duration = 33452U;
    msg.sys_a = 28980U;
    msg.sys_b = 3085U;
    msg.move_threshold = 0.056486900940535545;

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
    msg.setTimeStamp(0.18464034927300843);
    msg.setSource(64728U);
    msg.setSourceEntity(119U);
    msg.setDestination(42100U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.5447651469257853;
    msg.lon = 0.8508810666160838;
    msg.z = 0.15834467962929444;
    msg.z_units = 58U;
    msg.speed = 0.5128323851405403;
    msg.speed_units = 23U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.49341561790740984;
    tmp_msg_0.lon = 0.34559352287161704;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZUMIGKCUNVERFIBQFTHAEEYILRROXVLKIAIPJITTOKLRWKQKQBLWPSBLXMPKOQOYMSGGIDGVYWQJYCVEVSDHBAWRCXMPUTNGNZZNSHGOPJRXWAFVDOCGNDJURXTHHFZISBPAHZFEHKWMYVANFDBYNSGHNJBCVMFZFDPXBGTWFNLCLRUOYZDLKDXURQMQZJCJAPXUDCEYTVHBIWCLOOX");

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
    msg.setTimeStamp(0.6809138875651135);
    msg.setSource(13308U);
    msg.setSourceEntity(17U);
    msg.setDestination(51706U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.5726197214742242;
    msg.lon = 0.28563663978577136;
    msg.z = 0.013854507365265278;
    msg.z_units = 220U;
    msg.speed = 0.7363914462984849;
    msg.speed_units = 168U;
    msg.custom.assign("GUMWTAYFKQYCMVSPVHBVGHZ");

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
    msg.setTimeStamp(0.05522521344962905);
    msg.setSource(8081U);
    msg.setSourceEntity(227U);
    msg.setDestination(16103U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.963333622571891;
    msg.lon = 0.3826585777314444;
    msg.z = 0.4769833756311195;
    msg.z_units = 218U;
    msg.speed = 0.6603737554536896;
    msg.speed_units = 163U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6528538259001132;
    tmp_msg_0.lon = 0.861295569423943;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IIGRELEVGGSQMKYHCZCGOCRGAAEXULNBSLZCNCOJMRRPCJPHTSKZYBAEZDQWRFSOHGQDONTJSWQKVCDNLGDGWEBUFTUZGFVNJNKLHBTWTADNXHAXXKQKMNFYBBLUSQYMYMYMRKJKAQUISYYZTZMJINLEMIRIPIZOLXXAXDJFFVMPGRUBVRABTYOHVYEXDMECOLSXZPBPQCTWTAHPLBJPRDFKJZDQWUPUNVXQIOHEFAHUVUOPHTWDEJSVWI");

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
    msg.setTimeStamp(0.40025054807105254);
    msg.setSource(53347U);
    msg.setSourceEntity(57U);
    msg.setDestination(34771U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.7538536638939307;
    msg.lon = 0.04475988362282046;

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
    msg.setTimeStamp(0.058295855421167775);
    msg.setSource(45885U);
    msg.setSourceEntity(38U);
    msg.setDestination(36098U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.23793950536590203;
    msg.lon = 0.6131706150911341;

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
    msg.setTimeStamp(0.34008626644640916);
    msg.setSource(62258U);
    msg.setSourceEntity(90U);
    msg.setDestination(54382U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.03149840334623266;
    msg.lon = 0.6392479809790291;

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
    msg.setTimeStamp(0.3786712644941479);
    msg.setSource(24077U);
    msg.setSourceEntity(197U);
    msg.setDestination(13632U);
    msg.setDestinationEntity(134U);
    msg.timeout = 30017U;
    msg.lat = 0.8502237248511932;
    msg.lon = 0.9829335704069505;
    msg.z = 0.21918067711460598;
    msg.z_units = 10U;
    msg.pitch = 0.7064394650762732;
    msg.amplitude = 0.23019847141621896;
    msg.duration = 44076U;
    msg.speed = 0.9596922643321836;
    msg.speed_units = 219U;
    msg.radius = 0.7395726587409536;
    msg.direction = 19U;
    msg.custom.assign("ZCIXVVJWRUVXBDAX");

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
    msg.setTimeStamp(0.04169673834962406);
    msg.setSource(46406U);
    msg.setSourceEntity(171U);
    msg.setDestination(52029U);
    msg.setDestinationEntity(236U);
    msg.timeout = 15519U;
    msg.lat = 0.3036932745205505;
    msg.lon = 0.5402771705746922;
    msg.z = 0.11729104378087207;
    msg.z_units = 118U;
    msg.pitch = 0.5901927719902794;
    msg.amplitude = 0.4666015090485053;
    msg.duration = 59082U;
    msg.speed = 0.9147679132970893;
    msg.speed_units = 133U;
    msg.radius = 0.25693290880814;
    msg.direction = 135U;
    msg.custom.assign("BJJQOVTZNLOIGOLNMDUDUCYVGBAWSPKRSLODQFPFPHOISCWHTVAQ");

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
    msg.setTimeStamp(0.3060876882434226);
    msg.setSource(43150U);
    msg.setSourceEntity(210U);
    msg.setDestination(12996U);
    msg.setDestinationEntity(48U);
    msg.timeout = 39626U;
    msg.lat = 0.24032265590453694;
    msg.lon = 0.8112479806060422;
    msg.z = 0.36214857839683867;
    msg.z_units = 153U;
    msg.pitch = 0.026082067483527926;
    msg.amplitude = 0.21866785408093303;
    msg.duration = 22133U;
    msg.speed = 0.5391183489949876;
    msg.speed_units = 86U;
    msg.radius = 0.18512363942420118;
    msg.direction = 58U;
    msg.custom.assign("NGKHRWPEEGWLRPNYZFQLZKZIZUQKWXTPBKCUTOBTNNVUDRMOCFDBPXRTALGMWHVRLINXGDMJFPJSGBEXZCPPCAJYDJSHPMULJCBRADXKFYIUQZOOVXYLBOFIUBDSZJKDLNUQKYMTSXKEBMVZNINLOESXRRYWVHGABYGDCEQHGYESQNUFQFAKCWYSQFWMTQAJEOTEVOUIZJVWIDLOEMSTCZAI");

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
    msg.setTimeStamp(0.5897252668918227);
    msg.setSource(60688U);
    msg.setSourceEntity(165U);
    msg.setDestination(42942U);
    msg.setDestinationEntity(156U);
    msg.formation_name.assign("QBEAURRPHSZIGOBQYXKPUDKPSNDZODBPTVBAEPMKOJODYFEBMJRQCRZSNBOYZGFNADAPLUATECLDHCXTAJKMWYYHYBXTNCUGORQBZSISKGHQNFLOAGHXFLKCJVIFWZDVNLPWZCLWEIGQXDUJPGOFOGMVZJJCSKUJZXVKHMIKUUMLHTMIFAICDGACHVFWSYWNLRZULIVETYNDCMQWOLHWTEQNJREYSXKQTMR");
    msg.reference_frame = 86U;
    msg.custom.assign("BTPXSECRAMRLJROLDGGVRACLYQVFXDSIYDWAJJXAMGJLYDXYTMNCMNXGXTTHKJCEDZAZDIPCGRLHU");

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
    msg.setTimeStamp(0.4787059773552601);
    msg.setSource(45725U);
    msg.setSourceEntity(139U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(201U);
    msg.formation_name.assign("XZPJWRHSNUVXGMTAVSLYGYZVYOEEHZARBRPYIFXZCBEIAJRJVKVRQPARMGDIWNUUDTGTCHOHYPWORFXSBOXODDOIQQCHXNFIZDELWNRLVFFW");
    msg.reference_frame = 16U;
    msg.custom.assign("VNIBWXUYHYIXORCOALJZYFTJLEAZLBNRUGGKKKXRBVTSOQWAKTEMPHLRWGPTYDTBFFXREDTOKCNSYNDNCHOEPQLCJQEUVKWVBFRJRUFKOBYCSZAIJIEPAPQKRDSMNMZGMQGLBWEYUGYEHVOAFBGTCLVMCOVJICZKZDDWMZUGPWSIHIORHDNPTMHMTEIBHQUGUCDBAGDUMAIXOLUXDQWYZEXVKJFQPPQVFZNRJSLPZXSXNJLV");

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
    msg.setTimeStamp(0.5219503338568421);
    msg.setSource(64629U);
    msg.setSourceEntity(68U);
    msg.setDestination(42648U);
    msg.setDestinationEntity(167U);
    msg.formation_name.assign("DTSFQMJNFZABATLRHKMRQPMRCFELKWSOCLOGEXUSLFWHVBDIJBYPJBGYLMLZVVPJJNZVUTKNNVBRNQVPFEOKVJGCROHQBOKECQPIPYWWFAXJZYHUTMMBTZPYDBZVAOSBRLZGOAFUGDDCNUQPTLGIJOXCBDHHKYXUQGNAHPCWJCWNYFDELSIIMHKEUVKYTSHEMFIXRDJIRZXSX");
    msg.reference_frame = 167U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32776U;
    tmp_msg_0.off_x = 0.060066885835968975;
    tmp_msg_0.off_y = 0.7795864636166934;
    tmp_msg_0.off_z = 0.6223196139408016;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OAVHQOKFMEPHTZNOZMQACUTXBJZUZVIFCAMSFKKIFJWBCWRBSAETRVTOFOGIIYWGRKNPHTYQPHETHBUHUE");

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
    msg.setTimeStamp(0.20546653861133635);
    msg.setSource(32740U);
    msg.setSourceEntity(105U);
    msg.setDestination(57138U);
    msg.setDestinationEntity(188U);
    msg.group_name.assign("AYMSMZZVGAVRCGHDWBILFZJIRXUOEURLHVJPPVOPIURKIDDAQTIWKCAHDTVTXHYBJGEAIUYFKWDWQUOSCWKMYROGFEBPKOMYENJLODVIEXNNDYLWHQWAHTTLZFDAVWLNCIUSZZJHSGYBSEJJKLFOAQAATYMBGRQCXJIECUXONMQVKSSOPCDTCBDQXSQMLUQKPYBLVESSNMLHUZIPTNXJOYJMWMXKQPZH");
    msg.formation_name.assign("FFZTONNVRXAXBIBSHBCQTREFILXBQJUVYWACGKHODLIVAHEAISWSJTYPUKFOQEZYPYKFNNPOVQTGVTPDFPWCEVYXQNVUTYIHWSAOUJBZDFTUVJKXSLRMUDHWTSLXELRMTZQIIFRDWOSRRUFNIZHXDGQJKDWZHWYRCSLSMBJBQMNMCJWFEOLMGOUBQOZMAVXPHCDIMKYKELLBNAPEUPCXGHZQKOWBUIXHRLGPMCAGRMAKGZJGKNYAGCPYETNE");
    msg.plan_id.assign("UYCCGWUXRABYMNXMFCOJTNNSPDUGBDGKRYCUPYZKZSQWBUSOFOLIKRTDHIZSJJEXKNRYGOLPJKBABRHVXXHACLPEQTSGBKKMVAFMQFGNJLZMRMLOHRXVFXRZZBLYWUNXWMDVSIPOAEUVIEWBANWYQFELPICJNKEIPQJDTCCTYAHAUGDZFWBJH");
    msg.description.assign("PFJIYJENRUOATVTAIVHSIGBYZXFKZODGYJTZUNOWJECKIGQBDPLFDFHFBXWILYQVZBBLARWKBSVWMDUVZBIQLYGSSOJQPXELROZFEHVAIDMXCPTTVCNKHQKZTWOLGQMMBWEESJODAAYJMGWUSYMPULNZXCPU");
    msg.leader_speed = 0.5357965738919431;
    msg.leader_bank_lim = 0.05066495072655286;
    msg.pos_sim_err_lim = 0.3665234373681705;
    msg.pos_sim_err_wrn = 0.1963048295691473;
    msg.pos_sim_err_timeout = 38936U;
    msg.converg_max = 0.5953910715105004;
    msg.converg_timeout = 57857U;
    msg.comms_timeout = 63574U;
    msg.turb_lim = 0.4237759863559395;
    msg.custom.assign("MVEHNBDOUROJMOKXSVCLLYNUJDVOZGAOZQWFKRPEWAWYMGMARGPZJOROTQIISEOAHDBYGNFNWQLCGIXUPOHQPTZBEIJTLCPRFZCHKKBXFZQUXFMPHYUXHPVSUBVWZBLAWFTSXCIGFVLDQEFHDBDGXBJETTRSSDPABIQYLNECNKFUJQFMUYVGRTJVYNEJTHEXMWICESWQRISVDKUAUZAKSOLLTMYKYS");

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
    msg.setTimeStamp(0.9429187394554688);
    msg.setSource(31256U);
    msg.setSourceEntity(78U);
    msg.setDestination(28565U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("RCLYFLOYGINDBQGJRZSAWLJUCWUVKMAHGSSDFOBNIAYRNGBSZWUV");
    msg.formation_name.assign("DGPUZZJAIMLSGSXIQPFOBJTCBTIMZUSLXFMKBEJNNQIAHDRSEHDJMKGTADVCYEDULAPALRQLFANSBFRYMWEROQNHWRHUKDQVIVSHTD");
    msg.plan_id.assign("TRFTQEHWPOKHODUGQTQWJZLIDBYEWCAKCXWEGLHDVZLECZMUFFGAGYGPERYDLPRSANRITFLNDWMSAXXQYWXIQCUDBYTGMWGLAJGWCNSOJCKLFJOTVZADQJXJFJDDSNFKOEZIVRFNOORGFCBHVNJVLMIRRONHZYVNHBTUNHBUQOUVIZMTTUYAPLPPIBEFKYMEPQCYWSMAKIAU");
    msg.description.assign("PWFTYJMIBZSVBLKCBSQLQBDFAAFJAYCOWBCMBTJPFIGVBPYFLAZRFYEDXSKENPGSFNHRRGTNAGKTTXCUKWOHPVIXXYWOUUHLOTWMDMPCQUXHRIZTMYQKAGSAQWJUVIEHONJNUVGZVRSZMRVLEMAPNSYJYDPZBQKUAUWNSDMYYCRWGGPKZLOBMJBHTJKDSCCAIXFWOHEZHREI");
    msg.leader_speed = 0.882883707469584;
    msg.leader_bank_lim = 0.03612449087548586;
    msg.pos_sim_err_lim = 0.9428310348496851;
    msg.pos_sim_err_wrn = 0.12106479237894818;
    msg.pos_sim_err_timeout = 33427U;
    msg.converg_max = 0.6647586809597271;
    msg.converg_timeout = 41732U;
    msg.comms_timeout = 16655U;
    msg.turb_lim = 0.010106259097636516;
    msg.custom.assign("KIZQBLMISGDZTDPATOWOHDJKZVOOJDMFDDZPHQBGSEMEWHGCUYPSRJUOXMEPCEBCRBVAPBMUQYNLXXLODBVWXVTCLQVORMPWNPNFPMVQOAAJOGVYLYTAXSESVGFXFGWGUIRZUYCZAPYNIFYKUUBKQFXYTRAMDYFAWCALTHLESNEJUQZLNRKFSWHLHIGNFV");

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
    msg.setTimeStamp(0.901961764475116);
    msg.setSource(13508U);
    msg.setSourceEntity(202U);
    msg.setDestination(41021U);
    msg.setDestinationEntity(21U);
    msg.group_name.assign("YENGVNJBMMATSLPHSGVUNCJVRNNHAOYSLOPLKVTDYJFBTHLADTNIEJFWNNOUBJVMIBXCQQHHWQEFOFYTXUIGHMEYEUPKQAYGLJRWLK");
    msg.formation_name.assign("SJAIBGJXVSNHJSNEAHUCHFUEMKLNDETRFCZGZNHYOMDOSJRKDKMOUIDBAVNPEVBNMTEOMZDPLDPVHFDYAAOHJDAAUGFZTZYPZYLPKWVXXGSBKLILUBCWYFNJHCPKTTPTQMDOIWOXFGUPIENCQQCELAWQBIQFZVPJMYNZGWVMCTBQXWVIRTRIVGCRFYLTJLSPDMUWWRSKAUQBSFO");
    msg.plan_id.assign("YXOWUUFNEDYIDGTUFVONUSMRBBNXMRXMTTEROYJOMLCADLVQRZZJHGPIYCVPSYPRJJWOUPHVSGOEKVKFKXCSFVDLASINTOAXWDRKKLKRSWASAIZBTVXNTFLVWPICZTHRBAFYMZXFDVKQHZEUDORIHNBPMQUKEZEQLCJQLQEHGQRZXCSNETYBCEJMAB");
    msg.description.assign("VHKXPBEMMGVFYAUSKUFLMYXMGLGIAXIXZRBZWNQVOJMUHUACYCGGWPCPYNVEWIBHNWQWAHHMUNLCOLWTBAFLYUJSNXMVYPQSQUEYJOKNEJGEOLKSNPBBPUKFGDAWZHIDDN");
    msg.leader_speed = 0.7569245705811881;
    msg.leader_bank_lim = 0.7573797561121;
    msg.pos_sim_err_lim = 0.7642362600265502;
    msg.pos_sim_err_wrn = 0.11479054525259069;
    msg.pos_sim_err_timeout = 15903U;
    msg.converg_max = 0.5111847608430056;
    msg.converg_timeout = 36841U;
    msg.comms_timeout = 20782U;
    msg.turb_lim = 0.9062536000624;
    msg.custom.assign("ABSUSWQHQKVHKCMVFJQKVHWFANSXNMODFLCWQEQFOOPTODEZUAMIUCBBHOTGGXOVURKZDXZPDHLXVJYFDRXPEOCETNZKMIKIGDPDKVHKZARGEJJBYRICILSCHVNFYNBMPLBQXFDYCYMMAOYJZADGEMJGXUPRREAYESEPNUKXWTZMCRWJVTISWNCTGXZVELIAVQNFQCWPGUTYXHPQNBWNSYKJG");

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
    msg.setTimeStamp(0.5021070315535595);
    msg.setSource(13035U);
    msg.setSourceEntity(94U);
    msg.setDestination(52923U);
    msg.setDestinationEntity(228U);
    msg.control_src = 38472U;
    msg.control_ent = 245U;
    msg.timeout = 0.49146175963976846;
    msg.loiter_radius = 0.3087860819246926;
    msg.altitude_interval = 0.39771953832641727;

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
    msg.setTimeStamp(0.30439111240530103);
    msg.setSource(52434U);
    msg.setSourceEntity(225U);
    msg.setDestination(54296U);
    msg.setDestinationEntity(132U);
    msg.control_src = 42179U;
    msg.control_ent = 26U;
    msg.timeout = 0.41410491577712405;
    msg.loiter_radius = 0.6847676717234401;
    msg.altitude_interval = 0.39967887988705675;

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
    msg.setTimeStamp(0.05381799872493587);
    msg.setSource(26261U);
    msg.setSourceEntity(131U);
    msg.setDestination(34262U);
    msg.setDestinationEntity(0U);
    msg.control_src = 57897U;
    msg.control_ent = 216U;
    msg.timeout = 0.8876218349387662;
    msg.loiter_radius = 0.7109923135258873;
    msg.altitude_interval = 0.8936494899408718;

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
    msg.setTimeStamp(0.4310471875001982);
    msg.setSource(59102U);
    msg.setSourceEntity(36U);
    msg.setDestination(19389U);
    msg.setDestinationEntity(62U);
    msg.flags = 215U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.09396374037402655;
    tmp_msg_0.speed_units = 175U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2528995968840312;
    tmp_msg_1.z_units = 68U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9727816283879388;
    msg.lon = 0.7627468458703942;
    msg.radius = 0.7568073450762174;

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
    msg.setTimeStamp(0.876264032115481);
    msg.setSource(60567U);
    msg.setSourceEntity(194U);
    msg.setDestination(46586U);
    msg.setDestinationEntity(109U);
    msg.flags = 155U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7589631000962319;
    tmp_msg_0.speed_units = 200U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7656607948728522;
    tmp_msg_1.z_units = 45U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5969732180858368;
    msg.lon = 0.7620588100215638;
    msg.radius = 0.06844838421666244;

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
    msg.setTimeStamp(0.34927961980597244);
    msg.setSource(14019U);
    msg.setSourceEntity(182U);
    msg.setDestination(12790U);
    msg.setDestinationEntity(247U);
    msg.flags = 107U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4054305840687761;
    tmp_msg_0.speed_units = 8U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5189687322582566;
    tmp_msg_1.z_units = 224U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1635295143570613;
    msg.lon = 0.12674221521079987;
    msg.radius = 0.9327290686614491;

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
    msg.setTimeStamp(0.011761510295732247);
    msg.setSource(3977U);
    msg.setSourceEntity(45U);
    msg.setDestination(42197U);
    msg.setDestinationEntity(45U);
    msg.control_src = 53065U;
    msg.control_ent = 173U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 150U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.933391500969274;
    tmp_tmp_msg_0_0.speed_units = 70U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.49918054358365793;
    tmp_tmp_msg_0_1.z_units = 91U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8769581877374059;
    tmp_msg_0.lon = 0.9016412237735913;
    tmp_msg_0.radius = 0.5555792892802608;
    msg.reference.set(tmp_msg_0);
    msg.state = 113U;
    msg.proximity = 4U;

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
    msg.setTimeStamp(0.6139236456748803);
    msg.setSource(65405U);
    msg.setSourceEntity(200U);
    msg.setDestination(25020U);
    msg.setDestinationEntity(115U);
    msg.control_src = 4559U;
    msg.control_ent = 191U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 236U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5575665287459586;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8696477622156208;
    tmp_tmp_msg_0_1.z_units = 27U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.28695312139931894;
    tmp_msg_0.lon = 0.3977551826716875;
    tmp_msg_0.radius = 0.9137357485552465;
    msg.reference.set(tmp_msg_0);
    msg.state = 31U;
    msg.proximity = 196U;

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
    msg.setTimeStamp(0.038111453443819054);
    msg.setSource(49959U);
    msg.setSourceEntity(72U);
    msg.setDestination(58911U);
    msg.setDestinationEntity(46U);
    msg.control_src = 34220U;
    msg.control_ent = 184U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 101U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8799733178729521;
    tmp_tmp_msg_0_0.speed_units = 246U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4891396481758308;
    tmp_tmp_msg_0_1.z_units = 223U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.23561579194918658;
    tmp_msg_0.lon = 0.37953297054998836;
    tmp_msg_0.radius = 0.19352570518544365;
    msg.reference.set(tmp_msg_0);
    msg.state = 207U;
    msg.proximity = 169U;

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
    msg.setTimeStamp(0.6230989029932);
    msg.setSource(50042U);
    msg.setSourceEntity(28U);
    msg.setDestination(40371U);
    msg.setDestinationEntity(84U);
    msg.ax_cmd = 0.11675830914475527;
    msg.ay_cmd = 0.416770972364791;
    msg.az_cmd = 0.8515024372829398;
    msg.ax_des = 0.07916886229816411;
    msg.ay_des = 0.8422292843164518;
    msg.az_des = 0.11505697771639078;
    msg.virt_err_x = 0.848974041374392;
    msg.virt_err_y = 0.9856193561436504;
    msg.virt_err_z = 0.054462953002142434;
    msg.surf_fdbk_x = 0.06481687867421793;
    msg.surf_fdbk_y = 0.6909561470168634;
    msg.surf_fdbk_z = 0.3795790542753512;
    msg.surf_unkn_x = 0.4403160622977007;
    msg.surf_unkn_y = 0.5425093493071235;
    msg.surf_unkn_z = 0.03778017965531577;
    msg.ss_x = 0.18304801009784777;
    msg.ss_y = 0.07437543453512918;
    msg.ss_z = 0.37755371779664326;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ESRDIBTITIHJANNYWWLTDDTOMAEEEBIUXBCZXHMYWDHKBIACACAGECEPXRNCSUZXGROJSGMRUSWHZJKYDNPLUFZQZCMUWYDICDIWXXPFRQXMSZFVPGMOHSLWQBVEBUAFNKRYOAOHRPDGHUQYNASULVSGMPOLOYLBYOQYTPFKTEKQEQRK");
    tmp_msg_0.dist = 0.19206383499914215;
    tmp_msg_0.err = 0.43936790349561494;
    tmp_msg_0.ctrl_imp = 0.391633372592914;
    tmp_msg_0.rel_dir_x = 0.30061670812672703;
    tmp_msg_0.rel_dir_y = 0.9239010502076518;
    tmp_msg_0.rel_dir_z = 0.44664231361906936;
    tmp_msg_0.err_x = 0.42952842335772046;
    tmp_msg_0.err_y = 0.9606869365731247;
    tmp_msg_0.err_z = 0.21808853098334602;
    tmp_msg_0.rf_err_x = 0.7663956208155719;
    tmp_msg_0.rf_err_y = 0.47954799380717306;
    tmp_msg_0.rf_err_z = 0.3031634933350442;
    tmp_msg_0.rf_err_vx = 0.6172125553685087;
    tmp_msg_0.rf_err_vy = 0.4063973034425241;
    tmp_msg_0.rf_err_vz = 0.47143209173880385;
    tmp_msg_0.ss_x = 0.9059911620857068;
    tmp_msg_0.ss_y = 0.19451937356556426;
    tmp_msg_0.ss_z = 0.5632065095546614;
    tmp_msg_0.virt_err_x = 0.5596807976455525;
    tmp_msg_0.virt_err_y = 0.024933961260053428;
    tmp_msg_0.virt_err_z = 0.8035551248215769;
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
    msg.setTimeStamp(0.5085639570338615);
    msg.setSource(2583U);
    msg.setSourceEntity(29U);
    msg.setDestination(38643U);
    msg.setDestinationEntity(20U);
    msg.ax_cmd = 0.16566857828863002;
    msg.ay_cmd = 0.46252880037803146;
    msg.az_cmd = 0.8488395916971998;
    msg.ax_des = 0.4933490354116966;
    msg.ay_des = 0.5267070408658714;
    msg.az_des = 0.010931238339432103;
    msg.virt_err_x = 0.4729537399844769;
    msg.virt_err_y = 0.6045923954805318;
    msg.virt_err_z = 0.9964331972254917;
    msg.surf_fdbk_x = 0.9578629142999865;
    msg.surf_fdbk_y = 0.07435229166560697;
    msg.surf_fdbk_z = 0.18592438349819984;
    msg.surf_unkn_x = 0.17347865206802726;
    msg.surf_unkn_y = 0.6630453675964979;
    msg.surf_unkn_z = 0.8306051025476413;
    msg.ss_x = 0.6720386759359379;
    msg.ss_y = 0.298885552242768;
    msg.ss_z = 0.5094041337131565;

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
    msg.setTimeStamp(0.4795374628380906);
    msg.setSource(36684U);
    msg.setSourceEntity(170U);
    msg.setDestination(15963U);
    msg.setDestinationEntity(105U);
    msg.ax_cmd = 0.7905237658235597;
    msg.ay_cmd = 0.056048753564769904;
    msg.az_cmd = 0.4190617244998981;
    msg.ax_des = 0.25360246985328694;
    msg.ay_des = 0.5303428648933632;
    msg.az_des = 0.379491900189316;
    msg.virt_err_x = 0.5438043005356435;
    msg.virt_err_y = 0.018906236213991012;
    msg.virt_err_z = 0.6870588025048578;
    msg.surf_fdbk_x = 0.8049881495085406;
    msg.surf_fdbk_y = 0.7526627996169903;
    msg.surf_fdbk_z = 0.36948840286247875;
    msg.surf_unkn_x = 0.2947632598338765;
    msg.surf_unkn_y = 0.5053505360690761;
    msg.surf_unkn_z = 0.584389171694479;
    msg.ss_x = 0.13695771362304765;
    msg.ss_y = 0.8546953061199666;
    msg.ss_z = 0.06621963142920262;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DZVRSWKKDTVQBVTNCMQGOXHHTIFFOKUUXXMEZLQOCUOWQALZYGTCBYHREPINAQJONQMFPOLLAFDIIDSJGFASAVEYSDLCCAPCNRQGUSATYKPKNSVPNBWZSMCZDGBWFHGKGNUPLBXJDWOLMGVKFCMMHMERIATZQXHNVGEHZVXMZXK");
    tmp_msg_0.dist = 0.9824955357106475;
    tmp_msg_0.err = 0.5044155459889201;
    tmp_msg_0.ctrl_imp = 0.6702852040437578;
    tmp_msg_0.rel_dir_x = 0.051823514197750886;
    tmp_msg_0.rel_dir_y = 0.9948890814627965;
    tmp_msg_0.rel_dir_z = 0.7188889178915303;
    tmp_msg_0.err_x = 0.8902420363153544;
    tmp_msg_0.err_y = 0.9751894311033859;
    tmp_msg_0.err_z = 0.9369601240049107;
    tmp_msg_0.rf_err_x = 0.2387947569183867;
    tmp_msg_0.rf_err_y = 0.1989265437559974;
    tmp_msg_0.rf_err_z = 0.09970574275016975;
    tmp_msg_0.rf_err_vx = 0.4331979646881746;
    tmp_msg_0.rf_err_vy = 0.06675598407084515;
    tmp_msg_0.rf_err_vz = 0.2803838961284574;
    tmp_msg_0.ss_x = 0.9348519131679979;
    tmp_msg_0.ss_y = 0.9366682361870924;
    tmp_msg_0.ss_z = 0.7996621029763521;
    tmp_msg_0.virt_err_x = 0.057560644644581216;
    tmp_msg_0.virt_err_y = 0.10197987206648496;
    tmp_msg_0.virt_err_z = 0.8287848005397701;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4906513621447699);
    msg.setSource(26889U);
    msg.setSourceEntity(5U);
    msg.setDestination(54090U);
    msg.setDestinationEntity(121U);
    msg.s_id.assign("WSJJCZXVEIDFNSYQPVDQNGGFZYHXCAKJMYBRCGLGEUAHC");
    msg.dist = 0.7514241415203945;
    msg.err = 0.13035261278648047;
    msg.ctrl_imp = 0.840918033448519;
    msg.rel_dir_x = 0.49988439684534536;
    msg.rel_dir_y = 0.3363898762015437;
    msg.rel_dir_z = 0.4563677301887903;
    msg.err_x = 0.3599484927196134;
    msg.err_y = 0.6198506051736982;
    msg.err_z = 0.319971864426738;
    msg.rf_err_x = 0.563041230563653;
    msg.rf_err_y = 0.23148121824626966;
    msg.rf_err_z = 0.7379300773380196;
    msg.rf_err_vx = 0.6666329345616048;
    msg.rf_err_vy = 0.28957972812475963;
    msg.rf_err_vz = 0.30252005278872074;
    msg.ss_x = 0.3298812431788207;
    msg.ss_y = 0.08338012148763985;
    msg.ss_z = 0.30034718953870165;
    msg.virt_err_x = 0.0810469791115821;
    msg.virt_err_y = 0.0047136418760900245;
    msg.virt_err_z = 0.7977311424319259;

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
    msg.setTimeStamp(0.7844054515561696);
    msg.setSource(42553U);
    msg.setSourceEntity(49U);
    msg.setDestination(61775U);
    msg.setDestinationEntity(44U);
    msg.s_id.assign("HRIZEWAFHDKUYUIGKDXGXVTVNUDSHEMOGNETKPAFBMZWSOGMEYTUMSHFHCZXJTOLTBARYFKYINNMONGKAXKZRABPVISHEIECXCQRUNAQBGWFSOHWDIYXPUNVQLEPLRXNHWRFGTWJHXTMFDQDCYOCWZNMJRWBVJLBLZOVSUPPMNWXEBOLOVIAYLFJTTSBYJLBFQKAQPZUGPWT");
    msg.dist = 0.34190977711372017;
    msg.err = 0.822359271058409;
    msg.ctrl_imp = 0.32697054941501424;
    msg.rel_dir_x = 0.5008938810931564;
    msg.rel_dir_y = 0.9030511967782202;
    msg.rel_dir_z = 0.32233902594344765;
    msg.err_x = 0.3922977765585687;
    msg.err_y = 0.9830837466872454;
    msg.err_z = 0.3214056493840025;
    msg.rf_err_x = 0.159099189886317;
    msg.rf_err_y = 0.15080012614073612;
    msg.rf_err_z = 0.10418609237306153;
    msg.rf_err_vx = 0.544617202870884;
    msg.rf_err_vy = 0.3766579493569785;
    msg.rf_err_vz = 0.2851845430937646;
    msg.ss_x = 0.45525296722438946;
    msg.ss_y = 0.5043165089838317;
    msg.ss_z = 0.2876665461989023;
    msg.virt_err_x = 0.37208507737701346;
    msg.virt_err_y = 0.6319160137674044;
    msg.virt_err_z = 0.34106024428587023;

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
    msg.setTimeStamp(0.13532846402945298);
    msg.setSource(36495U);
    msg.setSourceEntity(213U);
    msg.setDestination(43769U);
    msg.setDestinationEntity(124U);
    msg.s_id.assign("BMNDAVKMLZOQABEUMDAPPRHZTMSIEULKYWGVYUKYXAEYTQNIUHFSJOISKZJOHINJXCMPCNCRBFXFWCIGIDBOPDFVDESSFF");
    msg.dist = 0.10970237977228015;
    msg.err = 0.47151265269651954;
    msg.ctrl_imp = 0.020386712366320725;
    msg.rel_dir_x = 0.8825647446707341;
    msg.rel_dir_y = 0.14303165505232962;
    msg.rel_dir_z = 0.3590862129003267;
    msg.err_x = 0.38330915119916853;
    msg.err_y = 0.46142723305820255;
    msg.err_z = 0.41966007895050894;
    msg.rf_err_x = 0.5537862027882158;
    msg.rf_err_y = 0.6720634049536583;
    msg.rf_err_z = 0.06990957671888842;
    msg.rf_err_vx = 0.2690934194745964;
    msg.rf_err_vy = 0.9304013082006373;
    msg.rf_err_vz = 0.6333555968265607;
    msg.ss_x = 0.6675903966870139;
    msg.ss_y = 0.11216940336760117;
    msg.ss_z = 0.8466887932081675;
    msg.virt_err_x = 0.7639714969889326;
    msg.virt_err_y = 0.18710427484158165;
    msg.virt_err_z = 0.049961391420425105;

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
    msg.setTimeStamp(0.0032322014061137994);
    msg.setSource(54454U);
    msg.setSourceEntity(249U);
    msg.setDestination(35411U);
    msg.setDestinationEntity(171U);
    msg.timeout = 41169U;
    msg.rpm = 0.5738863077358307;
    msg.direction = 151U;
    msg.custom.assign("ACXEGTIMQREEETURPGEZXCYLAGSSSUQRRGOTJFIOSVTYIEUOMMGNTMNMVNZHTJPXTCJNRXJOHKCPOLZFKBFLOIRWLJGCDYLNAEVVAKDYWCIXTDYNBBWHBZWIJFNTZDHHBAKAUJKQSUHNOCW");

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
    msg.setTimeStamp(0.6632764919713828);
    msg.setSource(27949U);
    msg.setSourceEntity(159U);
    msg.setDestination(58129U);
    msg.setDestinationEntity(17U);
    msg.timeout = 47474U;
    msg.rpm = 0.5085640056635979;
    msg.direction = 223U;
    msg.custom.assign("ZJTAUQBAQTBHOBPSGPYSKVVYKYTOQPDJMADBWNJNYFCZKHABFMLZXWQVXDHXCKULTHVBNIITXLWNWMFWKJRZUGEVMSOMOYAUSCHHGSFWDWLMOTTBFRSIKTXCYVRPUMPGQCZNDNBCCEGYYACFMJRQNFZGKIMMADEYVYBURWOUJEPGXPNREXPHETQNPLQJDOEIXQIOUSIKAOAFXIZPVTQOGBHSWFRGHKGISLFHWCNLIUESCRLUDJZD");

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
    msg.setTimeStamp(0.994420066981223);
    msg.setSource(47464U);
    msg.setSourceEntity(251U);
    msg.setDestination(40694U);
    msg.setDestinationEntity(39U);
    msg.timeout = 24312U;
    msg.rpm = 0.8167814110304225;
    msg.direction = 219U;
    msg.custom.assign("UFDSWVNBJNAJOCNNPEXWSMDOSINMZTXMBOKDGPRZLPGVWUSCRAHRNJIGHVXBHLMOZPMBRNIZKPKQSVWOUSOUKXFLRPKXPHFKAGQYMDLKOCCRTDJFOTIFTRLUQVCMNYQZTYGEZYZPQYDTDHXERBAYMLMLUJOVVJEVAYBFAQRKEJLULPWZAYDXPSTNIYACSUABFQRGMEIHWTUIBWNXAIC");

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
    msg.setTimeStamp(0.004039400707286811);
    msg.setSource(55289U);
    msg.setSourceEntity(93U);
    msg.setDestination(30080U);
    msg.setDestinationEntity(159U);
    msg.formation_name.assign("HBMVQZHBJVGACKKCUCHYMIAPAJVPQKXXWVJSHSFEEVTJKOWUZILOJCRPSQMOITTGNRCDICRFZRRXLMYWTBKKRUSNQWXBBLHWZVEEBPAUHEZYYQKYWWOLLTOJQZGUPOESIG");
    msg.type = 191U;
    msg.op = 205U;
    msg.group_name.assign("JXSMTVZZAWIHMEVQHOITFMHIZTOZOJRTEIYSTPDQRPBFPAKXCCZNWFZKVSIDAIZOAKOYNEWMGWGDOHPYFRUCBJCDAXNAHDWPQAZXTXGQLFMSQJDQTUKCGURBHESLHLYJEMSYQVNLKEPRLPEZHSRGKFGLYCKYIYLUXYBXRVNWJOUBGQELBVPRJHUUUVMFNRBKCIBFLWJSEYBWOQDRAIHVUZDOFKNBVCAQCMOGKTNWNPCXMD");
    msg.plan_id.assign("NPPSLYBNFWNKRKQTVBMTVJSURTLVPXCCURWJOIHIWCPDQJYFRGKOOSZYEDBONZGFZMBQWEGIDEBVUXOXSQ");
    msg.description.assign("AXAXBEOFWTIYYKXFUSDTQKDEWPBXCFTQJASVNNBDSGPDBMNJLUBGPXZVOVTYKJUZGRCGBMQRUKNLCHTODYIDYHRWORGYZRQFIJXFBPLVQMZSIKZHDZSDAGMNMALXVCFCTJZHZEKQXFHFVIIGKRAISZUSOHNSJHMLUARKIQOLVUCLPSUFCWZSXNJLPWYKOELACBMDTMRWEEIHYBGUNJYEWTTE");
    msg.reference_frame = 120U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7517U;
    tmp_msg_0.off_x = 0.2516880054181424;
    tmp_msg_0.off_y = 0.5773722937200471;
    tmp_msg_0.off_z = 0.18409773316709743;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4090162686758846;
    msg.leader_speed_min = 0.3023693843899872;
    msg.leader_speed_max = 0.995648746469658;
    msg.leader_alt_min = 0.10684068034505456;
    msg.leader_alt_max = 0.8853831688255218;
    msg.pos_sim_err_lim = 0.7733208627678299;
    msg.pos_sim_err_wrn = 0.43731753281715713;
    msg.pos_sim_err_timeout = 61915U;
    msg.converg_max = 0.7912543998128174;
    msg.converg_timeout = 34577U;
    msg.comms_timeout = 52154U;
    msg.turb_lim = 0.43001995626580103;
    msg.custom.assign("ZRUGKOCWUNYQJQFJYLAFUIXCEJKKKDCDAREJYBHBJZMVFUINXUECEPTCUSZJZHJOSYSAOZIYCDQIPGYHDFD");

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
    msg.setTimeStamp(0.48731673235493855);
    msg.setSource(5441U);
    msg.setSourceEntity(175U);
    msg.setDestination(63263U);
    msg.setDestinationEntity(239U);
    msg.formation_name.assign("NIXXVGIQUPZINAVFCLBBFSDYNGTEHPKURVMPACYDWQMUBULQXZHPWPBTLSFWOCZKTEYEBBEDTZWEQWAASZYMPLKSOKAXICLGMJIJBCJKANIMRVIABNEYRZLWQPOYAJPXGVBBQVOPNMLEJGKXEOIDCZCMRHVVKXGWDAOWGRJEQUNKJ");
    msg.type = 159U;
    msg.op = 5U;
    msg.group_name.assign("OQKAIXYRVQFWHWPNDIKJEPAFNREDLRXGUDV");
    msg.plan_id.assign("XDCQIVHXEGLORYOFHIXLKLJYNWYGURKPKIMSDYNZIBQRFXLDGWUCVNQUFHHJDODBCXRZCZTPSNNHFIJRSIUZHOTUWABWNXYJOYAQGTBMAQOGUETZLFVQIGDKJMUFESSVSMHAEQMFGMKKZJBCSLOMKBCKVIHRPMCZPFPUEIVRTQQSPUVASJSVMZGCRNLXAEXRDQNTBVTDYPOWARAFBEZCJWKAWKFNBHYEPZGBJOEMTPAXDHUN");
    msg.description.assign("AKLEJQJZRIKTCZPXLEWXGPJXBGXGZXVXHUPYOTMBNWLKCVKMDIHZLECREVUQWYFCQCBANOYOSYTRLADUKUMYZBEFSEMULDBNJDAECFWUUDKBRGJAWTUYGFGTIFOQMJPAXDJIDMVMHXONGJDSCFQRYYCXENPAAQVVMNXHUZCOIRWNGSBQTRVOVSNWJDBMITZHVOGKPQPSPTYRNIBWYLRLFWT");
    msg.reference_frame = 7U;
    msg.leader_bank_lim = 0.3405342780298236;
    msg.leader_speed_min = 0.3776789921861783;
    msg.leader_speed_max = 0.9490964435584309;
    msg.leader_alt_min = 0.4543415974753101;
    msg.leader_alt_max = 0.5072044072180363;
    msg.pos_sim_err_lim = 0.560766715884418;
    msg.pos_sim_err_wrn = 0.5561369585024211;
    msg.pos_sim_err_timeout = 1943U;
    msg.converg_max = 0.2466723951851394;
    msg.converg_timeout = 48300U;
    msg.comms_timeout = 30231U;
    msg.turb_lim = 0.4995543562248135;
    msg.custom.assign("MQZUSVSEIKGGTMLDCRBBXWIOPGNFFOARGUWDYTRQMRJLKVUHHLCX");

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
    msg.setTimeStamp(0.563437885478544);
    msg.setSource(5517U);
    msg.setSourceEntity(223U);
    msg.setDestination(55808U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("VCNTPFVOLSWEDYASFEUNIKVLRXEASMAILXDAGFEKWURPDCQZZHYOSLCBZIXCLGVDZCCBLKEFFHRBCUIDQKRNHSGRYMLIVMXRPOFIDBRJNGTEBPSEGQKWHGVJTNMLXQJWNFOP");
    msg.type = 193U;
    msg.op = 217U;
    msg.group_name.assign("QXJJEJHTBHIJKDCKPFWJZOWGAXNTPRCDZSQQVHNXGNFNVORGYCOLYCDNUXYCHYQLTCFQXEELOFELUGRLOTKLFZKSAXKULZDQCMMMRZUJWHLIBDHMITPGYXDCARWTBRCABEJSDVOMPQQVNPEKAZFGAIAVABZIUECKASPEESDJPORYWZOWIBHTNSIMIKWAGGVQRPMUMEOQXG");
    msg.plan_id.assign("MXOZFEBOTTAWVBNIIGFKLBCHVRLZUQXEZCDADKWHJQEJFOWJTGCSXPQUYKAMJRGMBSWUMCPBYUIZDTWBXHICKPYNRAVGALCAWYEMFOKJLWDNUEAZOTXUICKIJDEXCFLBTXRNVHARTPZUSSIYOCAVZPFETGIVGSYISPYWRQYHWNFMOKRJMESPLMJFSJZSOTMHENKZGPUVPOLUMTBSKKHHBWQRURONVDQZXQGCENQDQXXLVDVJAYLLG");
    msg.description.assign("HMIQPXEXUKSNNWYTRJMOZHQIETPCIWQWUQTUKZEAQVBTOBQQBPWZHBOGYXNDTTJHFXZGFVLBOODPKSZFIOKRQRGWGFFCVLIHLHDVTENPCFBJZCALFYZPEJRFMDLJBWLGCDNSPXOURGZBODAJHFNQCNHENVCGSLYLDXIGYEAJTEUAXTK");
    msg.reference_frame = 74U;
    msg.leader_bank_lim = 0.000538616811750714;
    msg.leader_speed_min = 0.06909273591438003;
    msg.leader_speed_max = 0.4243711020065567;
    msg.leader_alt_min = 0.22684812117836384;
    msg.leader_alt_max = 0.39700825217864044;
    msg.pos_sim_err_lim = 0.17717485750313378;
    msg.pos_sim_err_wrn = 0.17415111380832748;
    msg.pos_sim_err_timeout = 1124U;
    msg.converg_max = 0.08837075209468281;
    msg.converg_timeout = 42041U;
    msg.comms_timeout = 3348U;
    msg.turb_lim = 0.20976409067058854;
    msg.custom.assign("PQVEUHDKNUQBMEEWTVPTYFBGXWPTLSJTJGQHMSJTNHLEXRGRWXLLRDMZGTWZVDCMINQEKXDBUFWUUBCNOFUIRJJSVDUZNPAVRTJGIRITOISNSIAKAXTMJWKKICNCPWPVVHSOYMMXJBDOYDZJRUZDHKYLKVCGEZSLAKBCQTQODFMCAZCXRSXOFXPPGMCJWYQOAMHIKILDFVSAEZRHHRLYHONCUGEWGXNIFFAYYBEBHPPALGSVEYA");

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
    msg.setTimeStamp(0.7474144730280786);
    msg.setSource(18009U);
    msg.setSourceEntity(134U);
    msg.setDestination(62717U);
    msg.setDestinationEntity(252U);
    msg.timeout = 43201U;
    msg.lat = 0.020856526514670404;
    msg.lon = 0.6188099725572486;
    msg.z = 0.621649344981109;
    msg.z_units = 103U;
    msg.speed = 0.4612378640654822;
    msg.speed_units = 83U;
    msg.custom.assign("XNPYTIJBHJVAUWEOUSOHTJBU");

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
    msg.setTimeStamp(0.9570983227550581);
    msg.setSource(61522U);
    msg.setSourceEntity(117U);
    msg.setDestination(8454U);
    msg.setDestinationEntity(251U);
    msg.timeout = 22852U;
    msg.lat = 0.6596655029727733;
    msg.lon = 0.7925263779935833;
    msg.z = 0.9731011043248651;
    msg.z_units = 88U;
    msg.speed = 0.6169252389221901;
    msg.speed_units = 131U;
    msg.custom.assign("GXREXLDCZYQIWDQJQFLMKQVFTUUKPIISEZKSQIFVBJOX");

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
    msg.setTimeStamp(0.6029435432639042);
    msg.setSource(30238U);
    msg.setSourceEntity(123U);
    msg.setDestination(29393U);
    msg.setDestinationEntity(2U);
    msg.timeout = 15372U;
    msg.lat = 0.27934952262434976;
    msg.lon = 0.646501671175081;
    msg.z = 0.4085327918005598;
    msg.z_units = 26U;
    msg.speed = 0.4038496868476694;
    msg.speed_units = 13U;
    msg.custom.assign("QAJYTITZDPNMYKHATGWFPYPTPSJNHUOLEJFVGZLMIREKYF");

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
    msg.setTimeStamp(0.10351359081939149);
    msg.setSource(63583U);
    msg.setSourceEntity(31U);
    msg.setDestination(18493U);
    msg.setDestinationEntity(23U);
    msg.timeout = 4893U;
    msg.lat = 0.9777199416842058;
    msg.lon = 0.2863399740485495;
    msg.z = 0.015418942628383392;
    msg.z_units = 42U;
    msg.speed = 0.5210186489761635;
    msg.speed_units = 217U;
    msg.custom.assign("DIWDCCURNTBVODVFNKEMPVYHAVCPQALICVWXIVESFNOXRTKTEQLNPTEKGYJWHSKXYTUKPIOZFTKXTSBJOQSUVFAEJHFEYYSEKLPHWBYQZGHGSNCJBWUPJALRJXQVDCZPZRIJEQOUNIATXHROVSQYIMZQOBGUUHRIKZWFYZVOOCDBFLGAQUIDCDJXMTSKYKARXFHGWRNMPAWGMNALNSDMLGBWEMUXBPGFEGQRMJXBILPDLMCWRZHSZMUCNOZA");

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
    msg.setTimeStamp(0.19440378905338795);
    msg.setSource(63364U);
    msg.setSourceEntity(57U);
    msg.setDestination(48787U);
    msg.setDestinationEntity(241U);
    msg.timeout = 52449U;
    msg.lat = 0.05469192182269755;
    msg.lon = 0.395721992591626;
    msg.z = 0.7103209900739926;
    msg.z_units = 86U;
    msg.speed = 0.29715527762136573;
    msg.speed_units = 95U;
    msg.custom.assign("OLKBPGDQYTBMTMJARYCRTYASYDOCZILJYRPESEQIKKNFCWNBHEAPDGDUAPOIKZWZVZAILAHAWHBFUUMXUDLQQBVMUVVLTGHDTHNXRRHVYMNMWXGXQWPNJFCZKLQAJTMOSQWSDJBUXNSSGXIADHGPRCVDNERCNFYRFSMZLFLEBYGZIBEFOQOPRVVCCVGTKCDJNTWOKHQWGHAKEYFENMUTEQFJLSIBJJJCIZOTWRSXYUFU");

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
    msg.setTimeStamp(0.8798935565652882);
    msg.setSource(6641U);
    msg.setSourceEntity(125U);
    msg.setDestination(47040U);
    msg.setDestinationEntity(177U);
    msg.timeout = 19281U;
    msg.lat = 0.4051876824816738;
    msg.lon = 0.5299135980602965;
    msg.z = 0.869388887771107;
    msg.z_units = 155U;
    msg.speed = 0.05897614309880128;
    msg.speed_units = 168U;
    msg.custom.assign("TYRRHRFKLHITYWZKATCJHCIMXUSWZEGAMOYJGFWHODQQFPNUOEOZAGUYJAPLCWZZNSXNVBCESDCJEMGVUDGBVPHDVNQNKYGAEODXKRARSKMGAFMBIKIOGT");

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
    msg.setTimeStamp(0.7142067235338477);
    msg.setSource(10323U);
    msg.setSourceEntity(106U);
    msg.setDestination(33756U);
    msg.setDestinationEntity(42U);
    msg.arrival_time = 0.6299528525372817;
    msg.lat = 0.5538118286380618;
    msg.lon = 0.1440465286698278;
    msg.z = 0.15002287154224314;
    msg.z_units = 10U;
    msg.travel_z = 0.04668608368585869;
    msg.travel_z_units = 200U;
    msg.delayed = 208U;

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
    msg.setTimeStamp(0.055307101098286626);
    msg.setSource(33984U);
    msg.setSourceEntity(53U);
    msg.setDestination(31090U);
    msg.setDestinationEntity(115U);
    msg.arrival_time = 0.05683325223541125;
    msg.lat = 0.8759684021715386;
    msg.lon = 0.43697105204060793;
    msg.z = 0.17922589512499243;
    msg.z_units = 177U;
    msg.travel_z = 0.3328259280032617;
    msg.travel_z_units = 66U;
    msg.delayed = 233U;

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
    msg.setTimeStamp(0.5377216997451821);
    msg.setSource(33145U);
    msg.setSourceEntity(122U);
    msg.setDestination(65472U);
    msg.setDestinationEntity(241U);
    msg.arrival_time = 0.30192074796735857;
    msg.lat = 0.34311822644131273;
    msg.lon = 0.9325979581108067;
    msg.z = 0.6081044394406229;
    msg.z_units = 233U;
    msg.travel_z = 0.7338821795284292;
    msg.travel_z_units = 145U;
    msg.delayed = 178U;

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
    msg.setTimeStamp(0.09542533639296835);
    msg.setSource(63274U);
    msg.setSourceEntity(30U);
    msg.setDestination(23628U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.4910564613724431;
    msg.lon = 0.8485853803917127;
    msg.z = 0.7449476632113;
    msg.z_units = 134U;
    msg.speed = 0.09117467729925488;
    msg.speed_units = 32U;
    msg.bearing = 0.7610115507267972;
    msg.cross_angle = 0.33638045783997894;
    msg.width = 0.9185811963646573;
    msg.length = 0.05438134129125727;
    msg.coff = 171U;
    msg.angaperture = 0.05463733415714689;
    msg.range = 61811U;
    msg.overlap = 117U;
    msg.flags = 169U;
    msg.custom.assign("PTOZQNZMETWNETFMYHBILDKQVPHZYGZDDBRRRYDKXNJWIZJUWTPULHMVQCCWFOUWANLM");

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
    msg.setTimeStamp(0.39866303557728);
    msg.setSource(64377U);
    msg.setSourceEntity(160U);
    msg.setDestination(41722U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.9186237731228102;
    msg.lon = 0.05601382960201262;
    msg.z = 0.5833757781365317;
    msg.z_units = 174U;
    msg.speed = 0.17846094908889087;
    msg.speed_units = 142U;
    msg.bearing = 0.4508327871302581;
    msg.cross_angle = 0.14512636191170636;
    msg.width = 0.9334303235218187;
    msg.length = 0.9603340807909951;
    msg.coff = 235U;
    msg.angaperture = 0.24838709588120178;
    msg.range = 12322U;
    msg.overlap = 196U;
    msg.flags = 44U;
    msg.custom.assign("SVLAFNDMCYHWOQTKETOGRXEDKTUMWOZJZREAIPQLPBVIZSULXBFWQYGGBYEJCHIJRFPOZJUNAEXLGNLJMAHUHERZAZGGMTRFVJWQQHOVREQPMFOOSWDKSYSHKNUIZWCJDPHVBSUSNFADIEBFLMFNTXOFZVQXNKIEWYT");

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
    msg.setTimeStamp(0.45218762991353867);
    msg.setSource(9150U);
    msg.setSourceEntity(152U);
    msg.setDestination(18425U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.7666079814774852;
    msg.lon = 0.04897607276403204;
    msg.z = 0.40165980114952826;
    msg.z_units = 110U;
    msg.speed = 0.18774849138980199;
    msg.speed_units = 196U;
    msg.bearing = 0.7902390062543808;
    msg.cross_angle = 0.631572619606372;
    msg.width = 0.3357918127372804;
    msg.length = 0.6753667902360048;
    msg.coff = 108U;
    msg.angaperture = 0.8049404320235746;
    msg.range = 29936U;
    msg.overlap = 210U;
    msg.flags = 98U;
    msg.custom.assign("IHWNSWJNOFFABJGQJTZWDCQGBPADCVOXMITQZBCLS");

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
    msg.setTimeStamp(0.6587731571095915);
    msg.setSource(24977U);
    msg.setSourceEntity(245U);
    msg.setDestination(61664U);
    msg.setDestinationEntity(136U);
    msg.timeout = 1759U;
    msg.lat = 0.5100891856851277;
    msg.lon = 0.009123796584186494;
    msg.z = 0.1838100672358136;
    msg.z_units = 103U;
    msg.speed = 0.3275235959648468;
    msg.speed_units = 82U;
    msg.syringe0 = 75U;
    msg.syringe1 = 13U;
    msg.syringe2 = 114U;
    msg.custom.assign("FJDEKTKLVIOUWMXHBMJNRIBXAPXJRHXZGUZENYYYSIKGHHVCNHPYWBWZIRPGMIQLMBLKE");

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
    msg.setTimeStamp(0.14826525552246184);
    msg.setSource(11267U);
    msg.setSourceEntity(182U);
    msg.setDestination(27310U);
    msg.setDestinationEntity(4U);
    msg.timeout = 2186U;
    msg.lat = 0.2945925124567851;
    msg.lon = 0.5941530845825992;
    msg.z = 0.13610988424477144;
    msg.z_units = 35U;
    msg.speed = 0.5424168530397372;
    msg.speed_units = 10U;
    msg.syringe0 = 171U;
    msg.syringe1 = 245U;
    msg.syringe2 = 97U;
    msg.custom.assign("TDAJUGSXAKTYYRHQSJONORMRKMDMZDNCAJPYLYBAWPBTPXFBUAJGARBOVHGOHCGZMEIHAMHNZDUKQANIUEOVWLFEZYLHFWHZJKOTNGETIKTVWDJJ");

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
    msg.setTimeStamp(0.13984767587689628);
    msg.setSource(52515U);
    msg.setSourceEntity(24U);
    msg.setDestination(13082U);
    msg.setDestinationEntity(124U);
    msg.timeout = 53382U;
    msg.lat = 0.3140358469688814;
    msg.lon = 0.49566365731856676;
    msg.z = 0.061742454936778435;
    msg.z_units = 110U;
    msg.speed = 0.04236339202432471;
    msg.speed_units = 236U;
    msg.syringe0 = 92U;
    msg.syringe1 = 19U;
    msg.syringe2 = 204U;
    msg.custom.assign("BRZBBDFUUFSTPXTZUAORUXUAJVQLZMNWFOTVORIIKAWZIPVYVRZRAHEZDSNTWHIREFDYONMTQCAGMGIDQWUALHJYQ");

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
    msg.setTimeStamp(0.5597821140579773);
    msg.setSource(57739U);
    msg.setSourceEntity(110U);
    msg.setDestination(15079U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.008783629612652222);
    msg.setSource(11200U);
    msg.setSourceEntity(144U);
    msg.setDestination(558U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.3681131935923918);
    msg.setSource(60352U);
    msg.setSourceEntity(249U);
    msg.setDestination(62122U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.26104869037421896);
    msg.setSource(10273U);
    msg.setSourceEntity(146U);
    msg.setDestination(12719U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.25427283269764556;
    msg.lon = 0.5682552730063978;
    msg.z = 0.8660291848333092;
    msg.z_units = 72U;
    msg.speed = 0.6954099401846183;
    msg.speed_units = 25U;
    msg.takeoff_pitch = 0.39436505292069735;
    msg.custom.assign("SGKBKQVXBWAPLAGEIUMAZWOKKJZOWRDTEBAROXLQQRTYYLYPTZMKBYFIXRFBHFTDFHEJHEGABDPMURFIGFHCIQPQCNYKXHUYQYMCPMDJXHRYICGGHSOENCDXIXVXPSVPBVZKLSZQUBWUHKAONNJH");

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
    msg.setTimeStamp(0.05657971651871985);
    msg.setSource(26035U);
    msg.setSourceEntity(134U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.6849488488297168;
    msg.lon = 0.9162787254535266;
    msg.z = 0.6764103475628576;
    msg.z_units = 25U;
    msg.speed = 0.6091491304389137;
    msg.speed_units = 138U;
    msg.takeoff_pitch = 0.1368407385442555;
    msg.custom.assign("LVCFFSWIHBWXLRKZILGJGHKDESEYZCYJHDPTEMJORRVYZBUJWHWLRXYCAFZPXEDLS");

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
    msg.setTimeStamp(0.7830161061236197);
    msg.setSource(11616U);
    msg.setSourceEntity(82U);
    msg.setDestination(5727U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.13503585044775157;
    msg.lon = 0.75620938832944;
    msg.z = 0.5918064386841064;
    msg.z_units = 251U;
    msg.speed = 0.7668053208913134;
    msg.speed_units = 156U;
    msg.takeoff_pitch = 0.12029604681141848;
    msg.custom.assign("LWVZGAYEITPAMVQUSKTJCLVCNOLHZZECDBEBXTUXNJOZZPPXRZMEMCCUBTIIUKIFVRQQNCWSXKYEDQNLWSGFJILGOBVDCZBABFTDMRPVVITQSEAYUZ");

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
    msg.setTimeStamp(0.25454712443520877);
    msg.setSource(27750U);
    msg.setSourceEntity(254U);
    msg.setDestination(30935U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.6616625747722439;
    msg.lon = 0.14504922458951786;
    msg.z = 0.36314033732099193;
    msg.z_units = 135U;
    msg.speed = 0.8622403886989715;
    msg.speed_units = 248U;
    msg.abort_z = 0.6436918882450555;
    msg.bearing = 0.6661670358371395;
    msg.glide_slope = 236U;
    msg.glide_slope_alt = 0.5044005038479142;
    msg.custom.assign("TYCREBULRDFFSPQDLHVNRPXRFVMJZETOFHWBUDSJLZZUNXWSOFKLKSXRKVRCJXDAPPJJIGDFHTNEWXFTVBIDARHXMYYAOCNGETLCEIVIXMQKOKYUQCEDDTEKNRCMMNRQQBJUCAQ");

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
    msg.setTimeStamp(0.8029575955981637);
    msg.setSource(45124U);
    msg.setSourceEntity(250U);
    msg.setDestination(52338U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.6992387857016621;
    msg.lon = 0.87221751405892;
    msg.z = 0.7336836320110783;
    msg.z_units = 206U;
    msg.speed = 0.4576398363102384;
    msg.speed_units = 192U;
    msg.abort_z = 0.8028475326398752;
    msg.bearing = 0.4034725186682738;
    msg.glide_slope = 223U;
    msg.glide_slope_alt = 0.23132543191963273;
    msg.custom.assign("YZVEYWWDVMPJHJBHKFIDRDFWHXZSPLLJGDGHGPQVPFKEWISTDBLNPEYSJUHTWTFQWQZAFXRBFVIQNULDMWKJGYMSTRXBEZNSOQXZPFDSFGSQLULRACPCTVTGLPSREUNLGOTGXKJJYXKCXIWJUKUHAMOOTVYWCIAMGUFRIXVXUHMNPNQEQJZKCMYCEAML");

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
    msg.setTimeStamp(0.16220612908939358);
    msg.setSource(34384U);
    msg.setSourceEntity(19U);
    msg.setDestination(59814U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.8696317894189911;
    msg.lon = 0.7093781441712966;
    msg.z = 0.251184396432356;
    msg.z_units = 98U;
    msg.speed = 0.000737791268504151;
    msg.speed_units = 81U;
    msg.abort_z = 0.8038080423141309;
    msg.bearing = 0.4367288609831489;
    msg.glide_slope = 208U;
    msg.glide_slope_alt = 0.8267597205886023;
    msg.custom.assign("STTCIUEUNWKWYNQDGIVHLDGROMMYOPTSTBFIBUGHDTRWIXPWNBAVMZTPDIRJHXALYHZUHKEMPMCKMCURDBEMWSXPGSSEWCUEIBFUCFMKNZXTYYBQXSOJZJSROBWUVEKXXZFUBHVMQQOVRTJCFANRXFKOVEJCLDGJALYQYOYGEAHODGALVWTPFGDIQORSKWZNCTHVHKPALVYJCOKVLJZGYFJZSPLKDACPNLPQFEQ");

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
    msg.setTimeStamp(0.05763399070416253);
    msg.setSource(53524U);
    msg.setSourceEntity(195U);
    msg.setDestination(36625U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.8957209811209941;
    msg.lon = 0.9394963749161497;
    msg.speed = 0.42844628238833304;
    msg.speed_units = 28U;
    msg.limits = 17U;
    msg.max_depth = 0.6095898305006274;
    msg.min_alt = 0.1208423002146396;
    msg.time_limit = 0.5489094583850089;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9477155421685725;
    tmp_msg_0.lon = 0.9529387953323051;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UBKLGRZHQSXCZNTIBDAHIQWEGPSEEVIRGCCKFUSWJSJY");
    msg.custom.assign("GRMUOMHECBWPJNTDCXGWIUAPNZGPMNMJFPLYAVQPMEOCLRUADQGBVHGOIZSRXTJLLEZVJYGPSXOOJJMTETFYEXZIWDCDDXZSDKBYZKKTSPPGYCAOKFRAHUUNKOEZQMLJJYRVWWEBAUCEAZBTHTBCHQTFMXIFUWNHLVEPNSSDUVWTIRFAKVHRYSIIOQHBI");

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
    msg.setTimeStamp(0.8540933970135344);
    msg.setSource(28953U);
    msg.setSourceEntity(24U);
    msg.setDestination(46773U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.29073594453162066;
    msg.lon = 0.16701701979450023;
    msg.speed = 0.4019693490821472;
    msg.speed_units = 69U;
    msg.limits = 193U;
    msg.max_depth = 0.2989821744889818;
    msg.min_alt = 0.9243905979305941;
    msg.time_limit = 0.3047355046014497;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.004497005531480247;
    tmp_msg_0.lon = 0.71875032412463;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("LCCHQDONQIMPURITSOJZGHCZWTZTYZYIDPMKAKKELBJEMJNFDAGWOGVLNWHAEDNQLSHSCIUXYKPIEXQXZDWCKALSJGEWOFMNYCQCDQXDHFSBXQTYHISKVVAGKBP");
    msg.custom.assign("VANRYYMWCCCVJZOLOULBKMLDKQNDJHECLSJQQZHP");

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
    msg.setTimeStamp(0.13040014011545986);
    msg.setSource(2666U);
    msg.setSourceEntity(115U);
    msg.setDestination(46759U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.6389951255865836;
    msg.lon = 0.9070500388711388;
    msg.speed = 0.39291227923138605;
    msg.speed_units = 152U;
    msg.limits = 103U;
    msg.max_depth = 0.6104657062664451;
    msg.min_alt = 0.6017513235829923;
    msg.time_limit = 0.6658931910344423;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4772111891364075;
    tmp_msg_0.lon = 0.4190902128354689;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EQZXINWBEXHDOALYYOMMHCWLJPGEUZHNYKVKUBANVBNFRHEDBGWMFNJRFTPQWYCIVMPXEUODBGJAPEZSXUKNFMGMSIDCBRWWSPDCZCQOTYHTXDGXMRTTGOVLFCBQUMXESJCIOEZVLFFSEPZKZWTIYUISGNJTRHDDXAUTPQAPRAPGRQHDBQIAORSKIIWLWQZHKKVCGAUZMRLVFLDCUSSTJIKYUTOJQVYJEFLKNNVLA");
    msg.custom.assign("LFUXCSVQJNOOJYTALXZWISZKQGWAYWUTKMSDABZIGDRUVTOEBXGFJTHOBUMUCKXBCDBGSLIMRWIFMNKXOGMKSOAGLCMYZRUTKNAYJPPQJGVHNUOTHCESFYZEUKPMGPBOHNGPEYMCJRFACOQJDWMLHRCADUJFRDGMKAEXVIWHDDDNZTRNEXESZCXKLPZSZBTQISRBJENNWXTQHFRFLBHWFWCILIYLPFVVUVQJBPEVIQOVYARKPSXENQ");

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
    msg.setTimeStamp(0.7731065146247119);
    msg.setSource(42956U);
    msg.setSourceEntity(177U);
    msg.setDestination(40273U);
    msg.setDestinationEntity(52U);
    msg.target.assign("AVJGMGRILCELWYXCNZFONFLCCILYMACBOIUABHNZGEMTQQZSCIMQVQHLBHEUAXQDJTFVECLYJDFWZNNGWZIFZDRQGEXKOHWOTBPVRSKUUAGUPSQXRXSEGEZFSVKRPNWWOHTJKHPKRQGOCUAJDIBNWPWDELDVYLEHWIITRKJXJFHVXWJTD");
    msg.max_speed = 0.9418010762251968;
    msg.speed_units = 98U;
    msg.lat = 0.7211212166660412;
    msg.lon = 0.786789322357735;
    msg.z = 0.04160016589072835;
    msg.z_units = 46U;
    msg.custom.assign("DBMXLFCWMJZTBZSYOVAOWCJOTSFSRHYXUEWJLTSQKTYVYHVQTXYKKQMYHXQPSYOFQHSEUAPAANCOEJGXFJC");

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
    msg.setTimeStamp(0.9807753364859673);
    msg.setSource(48140U);
    msg.setSourceEntity(197U);
    msg.setDestination(43252U);
    msg.setDestinationEntity(236U);
    msg.target.assign("JQKVXKRCYBTEUJTQQOKYPALYKWJWFPOYEEFASCUQACSCJMFBRQMPPYFAVHDHIBJDOWIAHZBFRDXMURUZSWHSVWGSTQQKLFQVPGEAPGVZPGJKADPULLRMOXNOLXTEDF");
    msg.max_speed = 0.4036173740003678;
    msg.speed_units = 251U;
    msg.lat = 0.21329791387103747;
    msg.lon = 0.31324487893719144;
    msg.z = 0.2323993109920146;
    msg.z_units = 213U;
    msg.custom.assign("JXUNBYLLTQYTOKDVRWQUEDRPIMUSHGDDILZQNXDRIMTJBFVFHVRFNHAMPQPQLUSOVEQYCVJYYIEUXSWZVDGFPVQHLMNCTXRDFVCVSQZXHHEBIJWPEYARKTFYRBKHDGEDCRGPWAJNUZZSGYWBEZKOSBWLEIOZIUZOHFJFNBXOILCM");

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
    msg.setTimeStamp(0.10714180111223759);
    msg.setSource(35878U);
    msg.setSourceEntity(238U);
    msg.setDestination(11388U);
    msg.setDestinationEntity(204U);
    msg.target.assign("RLQAEIPHWFJYZIPZZCBNUMYULLDTYEEXPGYQGCTDQUBMPNVRYBOSGJRKROLWWFYCYZSOAJFDQAMHLIOJTEUPOSDPBHVHAMZLWOHAGQOMGMHTJVXDGUIHPWKRBAQEQUSTFMUBFBOXEAWGNDNTPIXAUSYKEOAGDSJNJXJXXVSCVWJBLCOVNGWMQECFKAPTKFKPDHFYFLVEZBRICLQHKNINEZMJVVVGSTFQXCTWRMKXHSINZTRIRUXYD");
    msg.max_speed = 0.31753210101950136;
    msg.speed_units = 175U;
    msg.lat = 0.8487661567148088;
    msg.lon = 0.8593250709602969;
    msg.z = 0.5846763374342401;
    msg.z_units = 103U;
    msg.custom.assign("YRXGOTHELSYZQITQVZEYLUPENITWHIKNRMGPATYOKUMFTMHOZODWAQMJCRACIRHDYSULJCFINFVTQWVCBHNDXKYYWDHWQOCUVXWPDPRWLBDXYP");

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
    msg.setTimeStamp(0.4294301323407538);
    msg.setSource(36509U);
    msg.setSourceEntity(29U);
    msg.setDestination(1106U);
    msg.setDestinationEntity(214U);
    msg.timeout = 55820U;
    msg.lat = 0.27659994646722585;
    msg.lon = 0.49638925731711014;
    msg.speed = 0.6136221751518828;
    msg.speed_units = 93U;
    msg.custom.assign("ONSGVSGWCRTAIWIZWJXWDNYLJKMXZRVCGNRUOPKXHCFBFNXSYIJYDPBNFZOTDMNSPGYZEYOAQEZHVAABQJYZZLDGVUNPSVLAUGXTLLMFURCQPONPKCMPRXVQWQWRBLEZYDUIIUCETHSTWDHJGGUOERRDNCQMNTGVFEFMJUAIHHOSBXKOLTMUDYKEDADIKPFQXGLAFVRTIMKJCFVOZCWLI");

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
    msg.setTimeStamp(0.9360434946976496);
    msg.setSource(48101U);
    msg.setSourceEntity(182U);
    msg.setDestination(62956U);
    msg.setDestinationEntity(73U);
    msg.timeout = 58751U;
    msg.lat = 0.019984188367587086;
    msg.lon = 0.11944902996479878;
    msg.speed = 0.8832441819250998;
    msg.speed_units = 168U;
    msg.custom.assign("BTBWPWKPJSIECLGWJZFQHWHYVCNIUPNMLDUKVVBEXNZVBLWGFRQEGJKPXSRSRXTQOGKHMXPSMJYRNFNAHZRLQODLULCMEUPXTTIZREPWCFSITAIFEBIYZJLDMOZXLNSNFGDZUNIWBYXQCCSIYKIHMUBYJLAVQFIAGHJZVZOPOQWDGKJHCUOMOBLTWTKPXFEDWADMUSVGEXMMYFKAGBAONRUDXDHKCJHVUEEFYSOQ");

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
    msg.setTimeStamp(0.5838845762172243);
    msg.setSource(29098U);
    msg.setSourceEntity(146U);
    msg.setDestination(32687U);
    msg.setDestinationEntity(202U);
    msg.timeout = 38258U;
    msg.lat = 0.5954038235979221;
    msg.lon = 0.42199107413953973;
    msg.speed = 0.8529274750452251;
    msg.speed_units = 175U;
    msg.custom.assign("UUXBTVXZZEDJDZITPQMCYMQFXITBUSZBOVGROPTCHDQMBRTJGNIFWWZRJPSWDFOCFTVVJENYEFEYLWBEZRJRISAHNAAMOLKGVQAZUNNYPOSKCJTHMLLEUAGWUHLSJAXGNEZKVNOCKIRCZRGBLY");

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
    msg.setTimeStamp(0.5130271983138719);
    msg.setSource(62443U);
    msg.setSourceEntity(95U);
    msg.setDestination(6954U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.7688730808793526;
    msg.lon = 0.42395463670372524;
    msg.z = 0.5637405183781505;
    msg.z_units = 61U;
    msg.radius = 0.883668645718027;
    msg.duration = 8864U;
    msg.speed = 0.4610605307742427;
    msg.speed_units = 24U;
    msg.popup_period = 46685U;
    msg.popup_duration = 17691U;
    msg.flags = 172U;
    msg.custom.assign("DCTBKNSKUPSBRYHHVOXHGXUWLEIJZYTECWUMIWFZYMCWOYJIYNJQTSNWCURBPQRLEIWJNNIZUOGHSZZSKUINWWUOFNPLBCYIEGOAUFKBMNRVIDTMAEBLJEORACOGMLDVDKILJPKLWAQGQYIZOXXQVCMFEKSRXVXKQBCTLJMTKPOYZAMBQCQRRQFFUFZAHFGEPXHHNTMTWAGXYSDPPVGJDPVHK");

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
    msg.setTimeStamp(0.1778029534747917);
    msg.setSource(51084U);
    msg.setSourceEntity(153U);
    msg.setDestination(34654U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.11735830598983232;
    msg.lon = 0.2938868507982565;
    msg.z = 0.6892405952212937;
    msg.z_units = 15U;
    msg.radius = 0.3023767984104554;
    msg.duration = 39976U;
    msg.speed = 0.8969619820831609;
    msg.speed_units = 151U;
    msg.popup_period = 41035U;
    msg.popup_duration = 34233U;
    msg.flags = 147U;
    msg.custom.assign("OKDZGFZAIERNLJZKDVTCWNOEFEJKDCBTGXEVPMFBBGTPSAAFXLBUTWMYFFSIGHNNWAUPQITXBWRYHHCQJZQPVRCBXOQNKGYALSUKMSTWPDJVYEZXACDMSCZHAO");

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
    msg.setTimeStamp(0.4626363217490441);
    msg.setSource(39009U);
    msg.setSourceEntity(36U);
    msg.setDestination(4991U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.8818880878415158;
    msg.lon = 0.9146258126198462;
    msg.z = 0.18524697888741293;
    msg.z_units = 70U;
    msg.radius = 0.1653176860285448;
    msg.duration = 28715U;
    msg.speed = 0.33735002984047413;
    msg.speed_units = 218U;
    msg.popup_period = 4684U;
    msg.popup_duration = 28336U;
    msg.flags = 52U;
    msg.custom.assign("LCWXOFMBLJUUYJRZFJYPXLZKYCKPAEAIIQFQWMKOLURLOEJVLETUTZPEWQNBPSGXOXTAEFAXDLXXCQPUJGIPNSSNDQBITRPDZDCGZOKIRWFHDDCKIWRHWVBQDOCIYMRRONNAAFDGAJQHZOSTBSBTNOTHIHMMGAFAYBUCRVWHNKUMNOMV");

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
    msg.setTimeStamp(0.8637101851094268);
    msg.setSource(20344U);
    msg.setSourceEntity(56U);
    msg.setDestination(32771U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.31152719902392445);
    msg.setSource(23875U);
    msg.setSourceEntity(97U);
    msg.setDestination(23965U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.5341255401095779);
    msg.setSource(5104U);
    msg.setSourceEntity(82U);
    msg.setDestination(23287U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.22010302740570364);
    msg.setSource(7390U);
    msg.setSourceEntity(120U);
    msg.setDestination(14998U);
    msg.setDestinationEntity(233U);
    msg.timeout = 4006U;
    msg.lat = 0.35429030478703083;
    msg.lon = 0.09240006318508043;
    msg.z = 0.441544004749969;
    msg.z_units = 2U;
    msg.speed = 0.9252501641908524;
    msg.speed_units = 74U;
    msg.bearing = 0.3514762882681495;
    msg.width = 0.732029509916434;
    msg.direction = 70U;
    msg.custom.assign("YZCBRWUYAKUTQYQCXXUBFSKOKDXFOAENBZLWWTRVNKHANRKMYINNAHSXOVCLDUAGFCEZRZYTNXJJGPPNDHSWBSTRPGNLGMKBFLBPVDHSWJUPEOJMRFSGTDNHKZROPIXELNKVJGIAZXIVQFCJPOMPOUHHDXZMCIBATJUQHDUYTSUAAGVSZLLE");

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
    msg.setTimeStamp(0.24190801070320433);
    msg.setSource(29949U);
    msg.setSourceEntity(182U);
    msg.setDestination(41490U);
    msg.setDestinationEntity(28U);
    msg.timeout = 58885U;
    msg.lat = 0.44476312151086905;
    msg.lon = 0.7267143073014718;
    msg.z = 0.5940148793180087;
    msg.z_units = 24U;
    msg.speed = 0.8107793906227185;
    msg.speed_units = 106U;
    msg.bearing = 0.4212564909317069;
    msg.width = 0.27615029434716065;
    msg.direction = 51U;
    msg.custom.assign("YYVIHTEZNIASEHONIMXRHEJUMVBINAQJGJYHKEAUEQDBHXSGJQMSTBJWPFOYXRHIBDAPEOWX");

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
    msg.setTimeStamp(0.9524830085729123);
    msg.setSource(54569U);
    msg.setSourceEntity(115U);
    msg.setDestination(46849U);
    msg.setDestinationEntity(108U);
    msg.timeout = 23423U;
    msg.lat = 0.729180559719363;
    msg.lon = 0.14584020777560391;
    msg.z = 0.3884078400618667;
    msg.z_units = 194U;
    msg.speed = 0.8450304947751431;
    msg.speed_units = 57U;
    msg.bearing = 0.8276883958139941;
    msg.width = 0.8761033790422131;
    msg.direction = 215U;
    msg.custom.assign("SBNODEWYXAKFMHLNTAZUEBJTSPUMDPNKTLCQLMCMKGWUAOVXIBRCIFHWOFHVSQFUAZTIHTQOCXNBJIJDSCVJJTJZXGZNTUPAETYJDWNXCPGYUUUWAQNOTVUARROY");

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
    msg.setTimeStamp(0.610257692293631);
    msg.setSource(10082U);
    msg.setSourceEntity(217U);
    msg.setDestination(29790U);
    msg.setDestinationEntity(16U);
    msg.op_mode = 119U;
    msg.error_count = 98U;
    msg.error_ents.assign("IIQITZOZSZPVNGQHMBKYWHCDNDTHUDLCLAX");
    msg.maneuver_type = 1610U;
    msg.maneuver_stime = 0.43641482483482774;
    msg.maneuver_eta = 43100U;
    msg.control_loops = 2403564255U;
    msg.flags = 225U;
    msg.last_error.assign("HSKQMRXDYVXFZUZEYXDAQSSZGXFNRFJXQBAPWKZUFMCANFUOMZLJHPCJYDSCKQXUWCHPAXPLTRADLPNSTYBSRVRTFJVFJDKRNUKPZYDPNK");
    msg.last_error_time = 0.5387272284267332;

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
    msg.setTimeStamp(0.7151169833725586);
    msg.setSource(46380U);
    msg.setSourceEntity(182U);
    msg.setDestination(17414U);
    msg.setDestinationEntity(92U);
    msg.op_mode = 186U;
    msg.error_count = 192U;
    msg.error_ents.assign("DSLLODNCRNGVKKRAJPNIPETXYHCWVQBMXMQDSPSVDYDNGSBDIODRVSXPSUKMJUQHXHNJPZEQFHHEALTPTUCVYAITXPZMQEHKBQPLEOFRECBFOOAQUQL");
    msg.maneuver_type = 48044U;
    msg.maneuver_stime = 0.7108899390648636;
    msg.maneuver_eta = 48149U;
    msg.control_loops = 3105719128U;
    msg.flags = 228U;
    msg.last_error.assign("TQNQOSXJPLDZNNPRSKUVZIPFUZCZUSSGLIHKADFXFAMXRCYVSUTFYBSAYCGEFOBETBMMGPYCRJZAENCOHMCIKKGWLNXNHRAELJPOODJNQEMNLJKRMQMYGXLTKPYVHBKSGFWHJQVZEVJOEUQMHCZLZRGPHDSDFKKTDOIFUJQVZQSIAXUTCVNBJRGRQISFOAWTXBUBLBXOWEQVCUHXADJIHX");
    msg.last_error_time = 0.940716450841877;

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
    msg.setTimeStamp(0.9354652857099255);
    msg.setSource(55365U);
    msg.setSourceEntity(65U);
    msg.setDestination(51338U);
    msg.setDestinationEntity(144U);
    msg.op_mode = 247U;
    msg.error_count = 15U;
    msg.error_ents.assign("IPOYFVZNYKQCVBLXWAIESHYGILAUVIRYJWELSZDQEGXYEMFMRPVCSBGLRTHBQQZCHPPDQJPBAULPRTIOTOQMHWUQDXONFTUUOGWBWPSCELIOXKXBPAGQXAIYTWGMCKNPKMMQVCTCKCQHICJDGUNRVOZAFYWNKTZXJLHDKTRLLIVDEPMXEFSWHAGWFZOVNSRUJTJRSFFEHBBWMSBDZJNKEDSUGUZZHINNVUOYA");
    msg.maneuver_type = 63839U;
    msg.maneuver_stime = 0.2745582566745154;
    msg.maneuver_eta = 14351U;
    msg.control_loops = 3909428156U;
    msg.flags = 209U;
    msg.last_error.assign("YBMMJWZSDQSZENKBLVZTROSGIZBTCSVOUQUTXOWUHJZBLVZTXXORIWURIEPFIVFBQCLDBUDKGNEDYZAAE");
    msg.last_error_time = 0.9685897470923435;

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
    msg.setTimeStamp(0.6919387437320381);
    msg.setSource(40411U);
    msg.setSourceEntity(253U);
    msg.setDestination(21630U);
    msg.setDestinationEntity(230U);
    msg.type = 164U;
    msg.request_id = 36390U;
    msg.command = 30U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36780U;
    msg.info.assign("TFMVHGMQTWOXZMICUHDOXGINSKUECHKAKMXIVHUQXAQNARNVQMNUPXTFTYRTIYGCRZYJNOHHFBMXSAUVEL");

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
    msg.setTimeStamp(0.8637924858517555);
    msg.setSource(3787U);
    msg.setSourceEntity(105U);
    msg.setDestination(38333U);
    msg.setDestinationEntity(23U);
    msg.type = 254U;
    msg.request_id = 52195U;
    msg.command = 218U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.5529955236806523;
    tmp_msg_0.lon = 0.4750814549645168;
    tmp_msg_0.z = 0.18801622728341372;
    tmp_msg_0.z_units = 240U;
    tmp_msg_0.radius = 0.7384408841763193;
    tmp_msg_0.duration = 64855U;
    tmp_msg_0.speed = 0.7736442189847783;
    tmp_msg_0.speed_units = 158U;
    tmp_msg_0.popup_period = 64250U;
    tmp_msg_0.popup_duration = 33030U;
    tmp_msg_0.flags = 100U;
    tmp_msg_0.custom.assign("LBMFPAWVXY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40581U;
    msg.info.assign("HUKJVZTIJKNVRCQSRGWUDBZQIYLWAAOHFFXWRMXFDNJCMDZARBX");

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
    msg.setTimeStamp(0.3901800010069387);
    msg.setSource(18077U);
    msg.setSourceEntity(125U);
    msg.setDestination(18568U);
    msg.setDestinationEntity(183U);
    msg.type = 142U;
    msg.request_id = 9834U;
    msg.command = 79U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 64853U;
    tmp_msg_0.lat = 0.5882124036010812;
    tmp_msg_0.lon = 0.8388704835305953;
    tmp_msg_0.z = 0.42657841759696546;
    tmp_msg_0.z_units = 210U;
    tmp_msg_0.speed = 0.05702850183832331;
    tmp_msg_0.speed_units = 252U;
    tmp_msg_0.custom.assign("YKHETPPHVDSBKOFXOAYTHNWSLXZHRNYFKVQMROPQIBEPAUN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35036U;
    msg.info.assign("WZUYUDINRUQDUUIGELREIONRSPTKACPJNGYQLQYSHHPHPKPK");

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
    msg.setTimeStamp(0.9866341982232202);
    msg.setSource(33791U);
    msg.setSourceEntity(85U);
    msg.setDestination(28521U);
    msg.setDestinationEntity(226U);
    msg.command = 170U;
    msg.entities.assign("JEHYMXHITFXBRQCHJFZOAIGKCANMPDYOSJQCPYHHGRBTDQZVFTHJXLUNZFLPXKNBQGZRRWWYWDSHNUWOADGYXPLBIBWQKJHBAROBAGYMYFEQAMMCBDYAGEVUKNMXMIKLBEWKZAKILJRGOIEFWOMZSZXONVCPKFYGU");

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
    msg.setTimeStamp(0.15660655307095783);
    msg.setSource(54101U);
    msg.setSourceEntity(233U);
    msg.setDestination(24034U);
    msg.setDestinationEntity(197U);
    msg.command = 60U;
    msg.entities.assign("SJLPQHNAERGHYJWIRSUZAKWRPEUFHOGTBZQVJMPAYBZDXJAMGHOXYEAKFVCDCEUKWPISDDMXQTIQHODNHDQPYSMTSUZPTUMPVVHSAEEYVBKOVVUBXZWJIZYKUXVOHZWIIXRRCCGRNB");

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
    msg.setTimeStamp(0.08657811592905895);
    msg.setSource(32306U);
    msg.setSourceEntity(236U);
    msg.setDestination(61941U);
    msg.setDestinationEntity(4U);
    msg.command = 43U;
    msg.entities.assign("YNGHVKROJOXSKTNQAYIUZQUAS");

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
    msg.setTimeStamp(0.8957634841132367);
    msg.setSource(574U);
    msg.setSourceEntity(177U);
    msg.setDestination(12490U);
    msg.setDestinationEntity(112U);
    msg.mcount = 207U;
    msg.mnames.assign("DNKZIYEBBENWGBAQMXDNUQRDUYVATFWKTVQFSGHYTRREAFDXTIESHSTDQJLDJBVWQCXMCSBGUOQIFYEAJRNSLUZDTXNNGQQNIQIM");
    msg.ecount = 230U;
    msg.enames.assign("TSBEWHNKSUGSTXZFFLCBUTQNDHPGKPOFMMAUYIAEWUXYMXPDPTLCZJTMEOUBPQFCQCIFWHMBEAQVIRIDNBKKOSGUZMXOYYQWOXYKVOKCRIFYEVNVLDDQQGWKEWJXUDIJTNRIAVJNCWUNYHDFKVSRXLKLWCQKOIVOTTXJSPLLZVXAZAHEQWDDOZSMRGGGVRLQRTRACBYBAUHYBIEMZBGYFNSDPTMJHZMJJPALHNZJ");
    msg.ccount = 120U;
    msg.cnames.assign("LRZIQJPDPZQKUSXUVZXZKSIZBFIWFXL");
    msg.last_error.assign("JYFEUGVGPXVUOLVDOANICUQXFZSZDNMNCOWFBDBDXHCKVTUYQKIHQYINXJGDBDGKRFCEUIMFZZUXXCOXSHEAABHFMQCYNRVDRRGUOPJKMFRTKLRZM");
    msg.last_error_time = 0.6773010858754795;

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
    msg.setTimeStamp(0.17777263505292973);
    msg.setSource(27685U);
    msg.setSourceEntity(229U);
    msg.setDestination(42341U);
    msg.setDestinationEntity(5U);
    msg.mcount = 217U;
    msg.mnames.assign("YDEFZWOTWOWRPIZBIRZLYHWKUGLATPDBSUZKEXXEVQJYYDPBMEYPMBWIXHAAOOPHFQOANSCGMJGEGCMXVKWLKKMVZMVQJGFXOLWUNIR");
    msg.ecount = 120U;
    msg.enames.assign("HFKTWWRDYRFYZSULAUDUWJYGZXCSPFCXHAFTPQDMNVZETHFVSNVXGCNWWLMJJINOOFSBMBJQUGPLHPXXAEZJBHOUOFVAKCWKLCKEGHSJEHBZIMQRMQJNPDIDETOGMPYGSRBQXZMRIOMVBUCVIOHVPPYHZMIVTUZGNIKRFBOLSRADUZITBKKMTRCUETWBXJODPIQCYEKWXEYDYNHFNTNPD");
    msg.ccount = 0U;
    msg.cnames.assign("YNWDRKJQLXFNXQGMOWICNRVKBDXLNWNPEWSYWFAJRTEIJDATEEGCTTKSG");
    msg.last_error.assign("SHYDWHTTKUGNZONFDIIAXMUEOCBDDSUTEFMVBBMZGPKGHCKPAGTJQWOFWTGWXCFPAMVIRNPVQXPHLFAFKZCCYJZWJAEBEDIBKYBOOHLVDZJLPKNYIYPQXZTGUXXIBYHLRMZLGBJLMEMYFWRRIVHNYRGEFJTUKOZNPCUUTXWRDNRAGFMJUENARPJXQSRKUTC");
    msg.last_error_time = 0.8542845905989206;

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
    msg.setTimeStamp(0.7420166158401392);
    msg.setSource(11614U);
    msg.setSourceEntity(33U);
    msg.setDestination(36069U);
    msg.setDestinationEntity(41U);
    msg.mcount = 219U;
    msg.mnames.assign("JQKBYEOQUZAGAXXCOLQLTJRAKXXTGEIYUYKCHVRMBWUYRMIBNGMCISTAMRBYFFBKSZFUMTZGRXXCXPZVIZADKLVZMDFJMEZBNZCETDMQNWIYRPCERIVDHXOGYTQVUDOHJHUJEYWGAUPWNFQBOUDIOGPKLSLFLNGKSPOXOAYNODKWAWQLSRWCMFFNVDUCJTFSPIBTBVTOUXGPLYJFQHHREHZVMNANIHDLQKDGJ");
    msg.ecount = 178U;
    msg.enames.assign("EISGHQJALMLZWGWBUBONSDJFCYMGAWTUZPATTZEYWMUSQHROCWVLQQQAKJOLPDIHWNFSZZSVRKPCTAQYETVFDLVYDICBUQPSEOYINBKJNXETRXYSGAYEEEGLHMPOJCNWQICXBWWGFJCJPIUX");
    msg.ccount = 220U;
    msg.cnames.assign("JNHDHYXVIZLTPJCDBSEIQKSQPWATTHERTNNCHSODPKYFDOKSEFQBRCIMECWMDBFCFOZHSOGACRNRIMNDKUJBPOWNHJZWYBHAIIFBMQMQSOWQRPUWIPQKAYVYHBYAZFCMYXLFFLIZWUXKPVKOGHULLGWZTOVAJTOTKVVLNDNAXDRBXBMY");
    msg.last_error.assign("UWKJBNLKWBPCQJIVCCBTRJBZZAGQFUHJBCLKYFYQYEFUZRSRYSEGOZHNIGWSPBFVVIJWGFVTRKUKLQYROQJYGXVSNMDIMEIPLYQQHXBHGJZRPXEHTTRZKVORTDLWUFSBCXVNUVALNDOATMANWZOGMYLOWUTIMWTPDVMY");
    msg.last_error_time = 0.8102306344266922;

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
    msg.setTimeStamp(0.4641407977836862);
    msg.setSource(11813U);
    msg.setSourceEntity(52U);
    msg.setDestination(17866U);
    msg.setDestinationEntity(36U);
    msg.mask = 63U;
    msg.max_depth = 0.878696573222933;
    msg.min_altitude = 0.03281679548311345;
    msg.max_altitude = 0.13103841990450915;
    msg.min_speed = 0.39164963192565605;
    msg.max_speed = 0.6538566669398292;
    msg.max_vrate = 0.6390668694186471;
    msg.lat = 0.8586946150653495;
    msg.lon = 0.6829458318217286;
    msg.orientation = 0.3294192966781716;
    msg.width = 0.9985172368796066;
    msg.length = 0.6918797680892125;

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
    msg.setTimeStamp(0.8386440734184457);
    msg.setSource(64587U);
    msg.setSourceEntity(169U);
    msg.setDestination(13057U);
    msg.setDestinationEntity(109U);
    msg.mask = 106U;
    msg.max_depth = 0.7945624297933768;
    msg.min_altitude = 0.46235028085732055;
    msg.max_altitude = 0.3405606566973559;
    msg.min_speed = 0.8568523363748085;
    msg.max_speed = 0.5643338191980602;
    msg.max_vrate = 0.30130311260173825;
    msg.lat = 0.6036118656359528;
    msg.lon = 0.563516282280475;
    msg.orientation = 0.7934617054847476;
    msg.width = 0.9178386835690163;
    msg.length = 0.8783139827220492;

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
    msg.setTimeStamp(0.6837081765732397);
    msg.setSource(46422U);
    msg.setSourceEntity(20U);
    msg.setDestination(32470U);
    msg.setDestinationEntity(141U);
    msg.mask = 210U;
    msg.max_depth = 0.14182352112185292;
    msg.min_altitude = 0.35001386323353456;
    msg.max_altitude = 0.18135934831782008;
    msg.min_speed = 0.10715465190152473;
    msg.max_speed = 0.45249810919601585;
    msg.max_vrate = 0.5815121122080653;
    msg.lat = 0.4245627942893584;
    msg.lon = 0.3689509455231439;
    msg.orientation = 0.6424303274143067;
    msg.width = 0.11287126651469293;
    msg.length = 0.6461713425487602;

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
    msg.setTimeStamp(0.6434846071242343);
    msg.setSource(16492U);
    msg.setSourceEntity(59U);
    msg.setDestination(30965U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.7427974359447502);
    msg.setSource(19323U);
    msg.setSourceEntity(119U);
    msg.setDestination(58144U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.43955454787071124);
    msg.setSource(45954U);
    msg.setSourceEntity(198U);
    msg.setDestination(21989U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.12845779905175359);
    msg.setSource(13636U);
    msg.setSourceEntity(210U);
    msg.setDestination(24904U);
    msg.setDestinationEntity(187U);
    msg.duration = 9850U;

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
    msg.setTimeStamp(0.709262852213432);
    msg.setSource(29762U);
    msg.setSourceEntity(0U);
    msg.setDestination(8358U);
    msg.setDestinationEntity(93U);
    msg.duration = 44337U;

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
    msg.setTimeStamp(0.4791483391633552);
    msg.setSource(58700U);
    msg.setSourceEntity(119U);
    msg.setDestination(19451U);
    msg.setDestinationEntity(161U);
    msg.duration = 34580U;

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
    msg.setTimeStamp(0.10111728385371144);
    msg.setSource(18019U);
    msg.setSourceEntity(8U);
    msg.setDestination(27538U);
    msg.setDestinationEntity(236U);
    msg.enable = 28U;
    msg.mask = 3548974776U;
    msg.scope_ref = 1745677480U;

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
    msg.setTimeStamp(0.046472257151838336);
    msg.setSource(10238U);
    msg.setSourceEntity(249U);
    msg.setDestination(8282U);
    msg.setDestinationEntity(179U);
    msg.enable = 130U;
    msg.mask = 1738801316U;
    msg.scope_ref = 3276078114U;

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
    msg.setTimeStamp(0.67946490100076);
    msg.setSource(50559U);
    msg.setSourceEntity(7U);
    msg.setDestination(45188U);
    msg.setDestinationEntity(177U);
    msg.enable = 251U;
    msg.mask = 3703416281U;
    msg.scope_ref = 2993909457U;

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
    msg.setTimeStamp(0.7963362157650267);
    msg.setSource(55131U);
    msg.setSourceEntity(200U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(135U);
    msg.medium = 251U;

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
    msg.setTimeStamp(0.6821980352390867);
    msg.setSource(37063U);
    msg.setSourceEntity(56U);
    msg.setDestination(49279U);
    msg.setDestinationEntity(145U);
    msg.medium = 206U;

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
    msg.setTimeStamp(0.3854763976097425);
    msg.setSource(38967U);
    msg.setSourceEntity(133U);
    msg.setDestination(6886U);
    msg.setDestinationEntity(199U);
    msg.medium = 180U;

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
    msg.setTimeStamp(0.48377556486372053);
    msg.setSource(23329U);
    msg.setSourceEntity(130U);
    msg.setDestination(22886U);
    msg.setDestinationEntity(69U);
    msg.value = 0.8606258619286115;
    msg.type = 138U;

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
    msg.setTimeStamp(0.46129283390059106);
    msg.setSource(61758U);
    msg.setSourceEntity(148U);
    msg.setDestination(55455U);
    msg.setDestinationEntity(236U);
    msg.value = 0.7349737098346192;
    msg.type = 129U;

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
    msg.setTimeStamp(0.6857153872430982);
    msg.setSource(52138U);
    msg.setSourceEntity(158U);
    msg.setDestination(2547U);
    msg.setDestinationEntity(192U);
    msg.value = 0.23039348034113272;
    msg.type = 142U;

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
    msg.setTimeStamp(0.05926337035945939);
    msg.setSource(10445U);
    msg.setSourceEntity(136U);
    msg.setDestination(59662U);
    msg.setDestinationEntity(142U);
    msg.possimerr = 0.036887116805981;
    msg.converg = 0.43876530239402245;
    msg.turbulence = 0.8574448576545781;
    msg.possimmon = 130U;
    msg.commmon = 121U;
    msg.convergmon = 62U;

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
    msg.setTimeStamp(0.991071781903917);
    msg.setSource(41129U);
    msg.setSourceEntity(150U);
    msg.setDestination(44333U);
    msg.setDestinationEntity(65U);
    msg.possimerr = 0.48249539598962965;
    msg.converg = 0.5242842563491591;
    msg.turbulence = 0.7227585115377761;
    msg.possimmon = 102U;
    msg.commmon = 61U;
    msg.convergmon = 51U;

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
    msg.setTimeStamp(0.8184091420984052);
    msg.setSource(6121U);
    msg.setSourceEntity(115U);
    msg.setDestination(16148U);
    msg.setDestinationEntity(45U);
    msg.possimerr = 0.7852766893273352;
    msg.converg = 0.28119488325311004;
    msg.turbulence = 0.7995787143901745;
    msg.possimmon = 144U;
    msg.commmon = 158U;
    msg.convergmon = 251U;

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
    msg.setTimeStamp(0.37482320553528636);
    msg.setSource(63075U);
    msg.setSourceEntity(182U);
    msg.setDestination(38800U);
    msg.setDestinationEntity(193U);
    msg.autonomy = 104U;
    msg.mode.assign("ZTXRLLIRORQFLIFZSPCKCKIWJLAIIJLWBCQODBCBABLXGVHPXAFHXHIABIEUEY");

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
    msg.setTimeStamp(0.30754361019448095);
    msg.setSource(24937U);
    msg.setSourceEntity(236U);
    msg.setDestination(22948U);
    msg.setDestinationEntity(199U);
    msg.autonomy = 158U;
    msg.mode.assign("ROQAIUYUAMFVMULBGAYZWQKEIMLNIVPPZUJKNBOVOEFDTRBBELQNXIJFNYUWMBTSCYDKGZAODQWFEJGJTYDIZWTPDXTGDURTPEAEMRSZJHOCHNROANVPYFUXQBWPCXXSDCAJPXIMTEFKSGBRSOVMWYIZYSNGVUQHLKPKCVSWGJFTIJLUQHNMGQXDLDXZRKDTBCFUOHVIRFVTMMRNSZJEACCLZVBOHQYYJHSWBKHWKG");

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
    msg.setTimeStamp(0.07746469095511499);
    msg.setSource(24155U);
    msg.setSourceEntity(45U);
    msg.setDestination(49275U);
    msg.setDestinationEntity(223U);
    msg.autonomy = 39U;
    msg.mode.assign("NCJZDOBPCHTETVYLHPYUBMXRUICBQQVOLGMRLGBGEKSWKFNGPQAPZ");

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
    msg.setTimeStamp(0.7041256618920413);
    msg.setSource(50252U);
    msg.setSourceEntity(174U);
    msg.setDestination(576U);
    msg.setDestinationEntity(111U);
    msg.type = 227U;
    msg.op = 209U;
    msg.possimerr = 0.9326696798853141;
    msg.converg = 0.8611701521596309;
    msg.turbulence = 0.35724216275081944;
    msg.possimmon = 55U;
    msg.commmon = 239U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.8685335431499921);
    msg.setSource(41615U);
    msg.setSourceEntity(118U);
    msg.setDestination(38512U);
    msg.setDestinationEntity(69U);
    msg.type = 41U;
    msg.op = 233U;
    msg.possimerr = 0.8456131573509786;
    msg.converg = 0.30847281909584634;
    msg.turbulence = 0.24128476432824575;
    msg.possimmon = 246U;
    msg.commmon = 167U;
    msg.convergmon = 91U;

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
    msg.setTimeStamp(0.2769834035181866);
    msg.setSource(45600U);
    msg.setSourceEntity(208U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(102U);
    msg.type = 163U;
    msg.op = 161U;
    msg.possimerr = 0.7497862280173561;
    msg.converg = 0.6414377659860813;
    msg.turbulence = 0.6818371464636082;
    msg.possimmon = 111U;
    msg.commmon = 57U;
    msg.convergmon = 83U;

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
    msg.setTimeStamp(0.9931801185415459);
    msg.setSource(34429U);
    msg.setSourceEntity(246U);
    msg.setDestination(26072U);
    msg.setDestinationEntity(227U);
    msg.op = 21U;
    msg.comm_interface = 175U;
    msg.period = 21944U;
    msg.sys_dst.assign("HTLKEXQXBYNKMFABETVWHDICMFSSSYLKGVETRYTYSPNOJYB");

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
    msg.setTimeStamp(0.6380890891191949);
    msg.setSource(7381U);
    msg.setSourceEntity(158U);
    msg.setDestination(4050U);
    msg.setDestinationEntity(45U);
    msg.op = 192U;
    msg.comm_interface = 251U;
    msg.period = 15588U;
    msg.sys_dst.assign("IBEDUWUFFNYOOUZFUYYAKAQEHVZGNNXDCMGPVMOYLFOQHXJJJUALSUSBHFNZYGGLCKVMHCWOJMSMDQWQTYVNQMKXYTUCNPXKFXALLBKDSWBJPCSJXRGKRZKJFFKNOTLZRRMRAXGPVZETIOIQWUCZEEOSRILBPHYPAHCQHRJXHLOSTPVHIBWEIVIFDLVW");

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
    msg.setTimeStamp(0.9194927662631363);
    msg.setSource(58432U);
    msg.setSourceEntity(250U);
    msg.setDestination(15179U);
    msg.setDestinationEntity(234U);
    msg.op = 87U;
    msg.comm_interface = 24U;
    msg.period = 23800U;
    msg.sys_dst.assign("MCEEXBJGLWEKZOHOPVDJQYBTSNVGEAIHQNFVWVMTYTXYUXBOFQWBNCJAOJPVOLRIZDVXAGRLZBC");

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
    msg.setTimeStamp(0.8384748931624106);
    msg.setSource(35478U);
    msg.setSourceEntity(32U);
    msg.setDestination(3082U);
    msg.setDestinationEntity(237U);
    msg.stime = 4215497686U;
    msg.latitude = 0.11693065845772765;
    msg.longitude = 0.17164688154755503;
    msg.altitude = 14458U;
    msg.depth = 45824U;
    msg.heading = 58339U;
    msg.speed = -15672;
    msg.fuel = -81;
    msg.exec_state = -88;
    msg.plan_checksum = 8158U;

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
    msg.setTimeStamp(0.5484549356724133);
    msg.setSource(58542U);
    msg.setSourceEntity(240U);
    msg.setDestination(18007U);
    msg.setDestinationEntity(80U);
    msg.stime = 261486431U;
    msg.latitude = 0.5990083447726204;
    msg.longitude = 0.35098454344363883;
    msg.altitude = 23042U;
    msg.depth = 62321U;
    msg.heading = 58313U;
    msg.speed = 31783;
    msg.fuel = 93;
    msg.exec_state = 28;
    msg.plan_checksum = 46003U;

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
    msg.setTimeStamp(0.2381620029671273);
    msg.setSource(62778U);
    msg.setSourceEntity(117U);
    msg.setDestination(43761U);
    msg.setDestinationEntity(7U);
    msg.stime = 669172476U;
    msg.latitude = 0.667946673931099;
    msg.longitude = 0.12817064785572174;
    msg.altitude = 45549U;
    msg.depth = 9150U;
    msg.heading = 3082U;
    msg.speed = -29328;
    msg.fuel = 70;
    msg.exec_state = -100;
    msg.plan_checksum = 44393U;

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
    msg.setTimeStamp(0.08058553574842842);
    msg.setSource(60480U);
    msg.setSourceEntity(246U);
    msg.setDestination(44363U);
    msg.setDestinationEntity(57U);
    msg.req_id = 51997U;
    msg.comm_mean = 7U;
    msg.destination.assign("EGBVKSPLLROHJNNDQMPWCKXANJRLPQUJQJOUCKRPYMSTITWZMIVEKHNTGXCNVSGRBVGZWQTZYHUYXMUSKDXGVZAEKZOXWOHDITOYCLIBVBLIKMFYWLEPLTTRUBENSPBWBDACWMYCQQMHGJVSZPHSQCFXOJFHARFADKKFIFVNGLMUMGJX");
    msg.deadline = 0.06741917508426842;
    msg.range = 0.7817569687755225;
    msg.data_mode = 139U;
    IMC::Heartbeat tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RWFLCZFDBIUTZDKYJGKGTLCUUHKOMFUNIMWPBKOARNSODVD");
    const char tmp_msg_1[] = {38, -75, 114, 97, -87, 17, 58, -123, 76, -72, 74, -78, -61, 33, -18, -102, 56, -78, 25, -57, -80, 0, 110, 106, 11, 26, -120, 42, -80, -71, 55, 67, -18, -115, -21, -85, 91, -116, -18, 58, 30, 51};
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
    msg.setTimeStamp(0.009868684452035925);
    msg.setSource(37762U);
    msg.setSourceEntity(141U);
    msg.setDestination(31509U);
    msg.setDestinationEntity(174U);
    msg.req_id = 46249U;
    msg.comm_mean = 17U;
    msg.destination.assign("YXMKTHDIQQML");
    msg.deadline = 0.5204157896254593;
    msg.range = 0.3825117269877961;
    msg.data_mode = 220U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.9980765172860333;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PPUOFDCMOIKKPVWUZHHTSEKOFBXRUGDHAAWIJQCRMDRDZMGQWWYXYEVKTINSMLCTZTZXESCGADDSSEMTNJUIXJOMDQQUHNBCKCWQVXHLDNGQLCPNJCJFBZLEBUUOJKGGM");
    const char tmp_msg_1[] = {-21, 112, -60, -7, 79, 25, 66, -128, -67, -127, -63, -118, 116, -113, -80, -52, -31, 93, 8, 123, 115, -49, 46, -85, 121, -14, 6, -108, 30, 115, -60, -65, -27, -39, 1, -111, 125, 65, 51, -27, 11, -44, 70, -38, 29, -70, -58, -1, 120, -16, 28, -109, 29, -86, 53, 7, -37, -91, -103, 119, -56, -68, 123, 100, -82, 33, -91, -8, 89, 18, -12, 20, -14, 104, 34, 3, -81, 10, 105, 26, -73, -43, 58, -125, -13, 32, -75, 113, 87, 53, 122, -94, 51, -48, -5, -100, -68, -67, -38, 94, -79, 98, 115, 63, 37, -90, 49, 71, -96, -18, -31, 28, -45, -16, 50, 46, 94, -43, -105, -44, 108, 35, -120, 89, -111, 111, 105, -15, 46, 53, -68, -27, -98, -86, 9, -63, -1, -22, -120, -114, 26, -119, -32, -65, 96, 118, 101};
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
    msg.setTimeStamp(0.277933318890239);
    msg.setSource(59968U);
    msg.setSourceEntity(223U);
    msg.setDestination(53403U);
    msg.setDestinationEntity(216U);
    msg.req_id = 2798U;
    msg.comm_mean = 106U;
    msg.destination.assign("QCHPHKYPIMEORIBUVEALUFWWBYQTGZKXOZBCNHVUXNVTNRUCAUPTECOXWLMDFVRPPEVHSUAXCXADXNCGIJNWBTWHSEJZMIIRGQMZUSQOSJPPPDQRTEQVNNBSFNORJSYGSBMWYVDTPNBMORYSFEHT");
    msg.deadline = 0.9530238940348524;
    msg.range = 0.5067935291366941;
    msg.data_mode = 93U;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 111U;
    tmp_msg_0.tas2acc_pgain = 0.2568618983776827;
    tmp_msg_0.bank2p_pgain = 0.29880174847476504;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GWYBBGUURIXNYAMF");
    const char tmp_msg_1[] = {68, 80, -70, 108, -102, -106, 69, -102, 20, 99, 3, 13, 44, -104, 25, 44, 59, -56, -52, 0, -111, 75, 98, 56, -123};
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
    msg.setTimeStamp(0.6848329867341788);
    msg.setSource(2939U);
    msg.setSourceEntity(6U);
    msg.setDestination(43609U);
    msg.setDestinationEntity(104U);
    msg.req_id = 37539U;
    msg.status = 47U;
    msg.range = 0.6040382231809501;
    msg.info.assign("JUDLQAXHJKOWONTRIGOUBHKSSDNOJVUCTXLSTEAGXGALKPBNJFYTMFGHZPFYYCJEKAPMKQBUBNCZWAGQLHSEOXAOPQYHZRLWSQRTBTFCZAKWAXDZKEMGJOEJVRGWHIUVFYYHVHLIQULEGMWHXTDXIBLEMRCCQ");

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
    msg.setTimeStamp(0.4002190123987268);
    msg.setSource(43377U);
    msg.setSourceEntity(175U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(202U);
    msg.req_id = 186U;
    msg.status = 120U;
    msg.range = 0.17024930604631072;
    msg.info.assign("HPHXKJVPCAPKEZOXUEFGMTJ");

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
    msg.setTimeStamp(0.11185232021795355);
    msg.setSource(421U);
    msg.setSourceEntity(89U);
    msg.setDestination(1157U);
    msg.setDestinationEntity(124U);
    msg.req_id = 3217U;
    msg.status = 187U;
    msg.range = 0.1615614255509643;
    msg.info.assign("GYACUXWLBSDLTQDNMMMXWNHFAPRXSUMZUNVCVEASYSI");

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
    msg.setTimeStamp(0.6145254106564307);
    msg.setSource(28942U);
    msg.setSourceEntity(33U);
    msg.setDestination(40643U);
    msg.setDestinationEntity(17U);
    msg.req_id = 2140U;
    msg.destination.assign("IIHMERYPKOUYCJXOKGGHJQGURXKQYZQGVFDXAWZEEGZBOLFVPFDCBVQILCNKQTYJFRWSNXYDBEDHBAHJLILDACICOAMJKNTUJCVUTBRTECXWSOYJQUZVFTBWQYGSDHYTIZIONVRBPWZQIIZCKDNDPKMGEDNCPBWMZCMNRULLA");
    msg.timeout = 0.1190294191984389;
    msg.sms_text.assign("DPQWPCVFOVUCRNNHSFAGBYOIYCJMEQFMXVZEPYSRSOBONEESJZAKQLXXHKQKOXJXRZPFMFGJPJIEJDHZARXFYIOQDUMTIQXHIBUEGDOOYLUCCKDCVKGOTDWUNSAUJTEXVRRDNGZBRWNFMWLDBVFQPSTSUELUAKLQLWSLSCHCNWUMCVJPZXTAFRWG");

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
    msg.setTimeStamp(0.7569825770287278);
    msg.setSource(17363U);
    msg.setSourceEntity(27U);
    msg.setDestination(42893U);
    msg.setDestinationEntity(208U);
    msg.req_id = 65216U;
    msg.destination.assign("GEZHMKFHXJQDZJCHRALVFROPMKGMCQALRUNTGTFDNWKUYNYAIZBACXQCDUAFJRLSZWRNBXBUQPPHOPFGYYCIAFLYSJZJNQIJSSOXCYYOIGATWBZLRIWLSRDVXQEYBWPZNPIKDDPNUVPCTOMOAEVSYSZVBWFGDCUEBIUCESYNQWLNQEJOIJXNPCROGRDKXTFWKTWLIMDQHKJFVLBBBDIPQZEAKHHZGVXKMGEEMHLHSRAWVTTOTKGV");
    msg.timeout = 0.21250458059390798;
    msg.sms_text.assign("EWJEXPIXMTSZQOVLTKIWQWAPMBERQKNOUZURMVBWNWMYKNUFKZDENOHAUFHCTHQCHUHFLCNZYGYQGUYLMJALOTSXOBASWEEQFMIIIXGVGZXSFTQQGVXBXGVBVHGSBVJXNYABXRJKVZVJDZKEEIZCTWHRTRNUOBQCCLYJJIJUQLAJORAFDTUILHWSMNIHKUDKHBPDDZFCBYFEYALSPPVCSC");

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
    msg.setTimeStamp(0.2397347826851559);
    msg.setSource(40300U);
    msg.setSourceEntity(134U);
    msg.setDestination(16169U);
    msg.setDestinationEntity(61U);
    msg.req_id = 33726U;
    msg.destination.assign("VCNLRWAPKWFHJKXSUITDVMCRECLXGGTWEQOOTVCSBNVODWHMBNWCPXUGZSNOBLGTPURZZDHHFVITZXWKTZWTEOABZTYGJLSOUYGYQDEXMRIWPCAQMNYRKYNCKERVQPLRXMAOFKWABYUUJEUMMXFIYJQRVXKVWFRTOSJQIYZXHBNZFCJAMLB");
    msg.timeout = 0.9168142038695916;
    msg.sms_text.assign("FSSFQFAJZBRMOIEYIULFYOSNNVGWBYQHAYWRFLWOMHFUCUXTDKDBRSQFWWXGQTNTGEJMHAWEQEKJBYWZPWCEUCDUEQXNBLYSLAMNZHCKMOPGOMUBQFTPXAIGWJMUVCOHLXDIRIPJGSMXIHPEHVFIJVJYTNBGQBPPNCUSAGSTTFLSVOEKTS");

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
    msg.setTimeStamp(0.06742179307679108);
    msg.setSource(34862U);
    msg.setSourceEntity(202U);
    msg.setDestination(11219U);
    msg.setDestinationEntity(169U);
    msg.req_id = 3698U;
    msg.status = 212U;
    msg.info.assign("JEOIHVKHMSNZRECCLVEDVVMONXWHLWFPDOUJZADASJFPYJWPJMAHWLZCTFBZZRCOVWMYBKNRFBADTLHYMTVQBEBRQGBMAMZTZFIGSBIHMULFXCRSBEDDUFWPUQQRKQNIGTQ");

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
    msg.setTimeStamp(0.055074947701724164);
    msg.setSource(22534U);
    msg.setSourceEntity(61U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(238U);
    msg.req_id = 40630U;
    msg.status = 222U;
    msg.info.assign("OUYFICUDDBHGIQMRLYNUUGUGLJWJLMXZFSVFQDSGWEIEZMOSUGHYWKVOXVMAEHBTHIGSID");

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
    msg.setTimeStamp(0.3923865067929463);
    msg.setSource(32087U);
    msg.setSourceEntity(208U);
    msg.setDestination(55732U);
    msg.setDestinationEntity(29U);
    msg.req_id = 38388U;
    msg.status = 30U;
    msg.info.assign("ULNTIIFWHKCLQTKPEINUDQVTAAEDMMEZROQYCNGVHMT");

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
    msg.setTimeStamp(0.7013859160017882);
    msg.setSource(40433U);
    msg.setSourceEntity(3U);
    msg.setDestination(10910U);
    msg.setDestinationEntity(227U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.02138673251794143);
    msg.setSource(37824U);
    msg.setSourceEntity(164U);
    msg.setDestination(59120U);
    msg.setDestinationEntity(115U);
    msg.state = 54U;

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
    msg.setTimeStamp(0.85556365633454);
    msg.setSource(11374U);
    msg.setSourceEntity(160U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(191U);
    msg.state = 245U;

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
    msg.setTimeStamp(0.1309708684273696);
    msg.setSource(37556U);
    msg.setSourceEntity(200U);
    msg.setDestination(3642U);
    msg.setDestinationEntity(59U);
    msg.state = 70U;

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
    msg.setTimeStamp(0.38944827551003514);
    msg.setSource(29387U);
    msg.setSourceEntity(146U);
    msg.setDestination(25903U);
    msg.setDestinationEntity(245U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.9022783804974088);
    msg.setSource(5169U);
    msg.setSourceEntity(14U);
    msg.setDestination(32439U);
    msg.setDestinationEntity(175U);
    msg.state = 27U;

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
    msg.setTimeStamp(0.20760475419683977);
    msg.setSource(61461U);
    msg.setSourceEntity(195U);
    msg.setDestination(11625U);
    msg.setDestinationEntity(82U);
    msg.req_id = 9089U;
    msg.destination.assign("PMPEKNHKFFQDXEMUWUISFCSLIICQBWRWOOOFXQNTPWOVIVFRPPCBASAVVAJFDFCDXTNBSJYLBPGE");
    msg.timeout = 0.6194548124118024;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.46003903485111386;
    tmp_msg_0.lon = 0.697154236334117;
    tmp_msg_0.z = 0.407188705420524;
    tmp_msg_0.z_units = 206U;
    tmp_msg_0.speed = 0.18173219831119491;
    tmp_msg_0.speed_units = 92U;
    tmp_msg_0.bearing = 0.5295784826563833;
    tmp_msg_0.cross_angle = 0.8662000329057149;
    tmp_msg_0.width = 0.1624324630204802;
    tmp_msg_0.length = 0.8998514273621256;
    tmp_msg_0.coff = 57U;
    tmp_msg_0.angaperture = 0.20231169407313243;
    tmp_msg_0.range = 20474U;
    tmp_msg_0.overlap = 40U;
    tmp_msg_0.flags = 219U;
    tmp_msg_0.custom.assign("KMTUVJEMEHSNDGFIUSQRAQFZMZQVCYJBGSLQHRWIZDLLRPNGXAMWUHBNOCAVIEVYUYCDWMDIPYQKKKBNOGGKNCSULAPWTQXAZMFCVIZCBSKXBJBCOLRCQF");
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
    msg.setTimeStamp(0.9492807429809365);
    msg.setSource(57563U);
    msg.setSourceEntity(144U);
    msg.setDestination(17156U);
    msg.setDestinationEntity(66U);
    msg.req_id = 33881U;
    msg.destination.assign("VUQLWYVLYF");
    msg.timeout = 0.7963130781789473;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0397991593091408;
    tmp_msg_0.lon = 0.881719686835792;
    tmp_msg_0.height = 0.5797173338278199;
    tmp_msg_0.x = 0.01315595061239172;
    tmp_msg_0.y = 0.704863268604258;
    tmp_msg_0.z = 0.6290312780377761;
    tmp_msg_0.phi = 0.17533663932611954;
    tmp_msg_0.theta = 0.03662604046786788;
    tmp_msg_0.psi = 0.9363280161194484;
    tmp_msg_0.u = 0.6291828295120492;
    tmp_msg_0.v = 0.9425946481069947;
    tmp_msg_0.w = 0.5181793109143215;
    tmp_msg_0.vx = 0.6065340592939225;
    tmp_msg_0.vy = 0.25028080656034324;
    tmp_msg_0.vz = 0.7980982585348495;
    tmp_msg_0.p = 0.25056403493095714;
    tmp_msg_0.q = 0.4778421539936677;
    tmp_msg_0.r = 0.2663883225408199;
    tmp_msg_0.depth = 0.8400132418530872;
    tmp_msg_0.alt = 0.37251496216499325;
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
    msg.setTimeStamp(0.23087616738792527);
    msg.setSource(22291U);
    msg.setSourceEntity(102U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(28U);
    msg.req_id = 63268U;
    msg.destination.assign("AGSUBYNUSVFIBWJVDFHFXLSYWCPKWEEXHYBOERKVTARHZMWDUCAZLWFKHZXUPZWNJBPVUOCRGEPCOHFOQHUVZTKFIXNJAHGNPOKTDIXSBBISAFUJAQIVZJJQCAGWJRCXIRLGTNDPGLLTKHEDPMFYOOFVVQMCRCJERQLOODZQSDWTXXUIPALMGQNZSEKADXKQEFITEBYVWQNKUDLSYWKVEMITAMSRTYCJLI");
    msg.timeout = 0.3985746755233197;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 14283U;
    tmp_msg_0.destination.assign("FEUGJMUUSAWJKNDQMQTKDKCKJVPDMMHBVXMKFZGBXZOWMQFVMBLPYPOJGCZQIWILEAKIXHLWRWZPLRHVNXNOVQEUTUJNUCGIVNHRREPPEMNICFLXCCXVQYLOHHSIGBVLAHEZMRYVTIOKRJDSOMEHNDGZQGAFLPZFHXVHBXTAZXGSSOPDSDSJSDYIRANGYUFQFWTLJUAWTQQSEIKTYNWJKFZDBFOYNPCBRSYGTPRUJWKC");
    tmp_msg_0.timeout = 0.5159487776305031;
    tmp_msg_0.sms_text.assign("SKNLVZONIVCEOIEBZJAMOVBUXMWLSOUWKHPOQCWCPKAXQFRSZNHEUGODQZVABPHJTDDYYHWCCURQNBJXKBKLIZNEXFCNGNMBGTHPXRFUFRLFZSCDAERVBNSGPVEZPTUYHADRGBLWIAWLQFLYAVQXQHRHKQYHFJEIUHQVCWSUTJDKOGSIGXRTPMDJTFTNVJOYLJCEDDSETSSMUNJICGYIXWRZZMQXMPRYOVUYAMOGBTKKWYEFMZLFBAXWPT");
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
    msg.setTimeStamp(0.7506126950485578);
    msg.setSource(37376U);
    msg.setSourceEntity(250U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(183U);
    msg.req_id = 17390U;
    msg.status = 190U;
    msg.info.assign("CHWRDPDSXURXGZBQQRSFKPWJVAVKIEIEBIDRYVLRDNWBAKNGKUBAJYYWXXQWGUBQREPHMNTZIYXJYNJYWIKDOZQLMNFKUBVOXHMAI");

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
    msg.setTimeStamp(0.49891690364182373);
    msg.setSource(55367U);
    msg.setSourceEntity(92U);
    msg.setDestination(22144U);
    msg.setDestinationEntity(223U);
    msg.req_id = 7896U;
    msg.status = 228U;
    msg.info.assign("BLZRTOXQDMNCFOFBMHWOACOYATQNIVQDLYLIJKUTIBDRKEVBCLPYLDDFCZGRJJUXSPWSCEWQYPQAARHKDHPJYPOCUYXSHZVNIHWIUOZKDLCVJHMEMWMAXIHZMGPSXGFQHXRDPPEBLBXJTCUKXWGKTISUFYFFVKKGZJWFYL");

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
    msg.setTimeStamp(0.8847309922052238);
    msg.setSource(63441U);
    msg.setSourceEntity(161U);
    msg.setDestination(53290U);
    msg.setDestinationEntity(62U);
    msg.req_id = 58837U;
    msg.status = 123U;
    msg.info.assign("SYNWEXENQZFOLFCITTKITSBGPYHJHBTEHSUFKNZIXZIXJXTRNEZTLNUUAUCWSBCJQUDWPXQYZBVFBLVAOVUYKJGMMJAAVROBKHUSPRV");

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
    msg.setTimeStamp(0.5996215588966808);
    msg.setSource(34992U);
    msg.setSourceEntity(139U);
    msg.setDestination(2197U);
    msg.setDestinationEntity(176U);
    msg.name.assign("QGZESYQRCNQZVUBVNZWFQGWDXLMUOYFDIGDESYRPUSNXLPYUGHPKQZJPZWJLTYICGSEJIBWQQBAMSFHJFJGMVJEUCXPGTPDRMTKFVVFAPEZXLKCQKKBLASODWXDGJLVJISXWVIPLRKRBOXFYDEBNBNPXVRHHUYKALMYEHFYVDFYXTODTROJRLSKTTUSMCGTMKNHABIZQUMELOMIRWIBOVIWQCHUJGHACOCPHFR");
    msg.report_time = 0.652893661368033;
    msg.medium = 105U;
    msg.lat = 0.6830037207810961;
    msg.lon = 0.7868416308332177;
    msg.depth = 0.007374984548206509;
    msg.alt = 0.0817004351300985;
    msg.sog = 0.7914093706545838;
    msg.cog = 0.8071444824150638;

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
    msg.setTimeStamp(0.024889610267167295);
    msg.setSource(22054U);
    msg.setSourceEntity(213U);
    msg.setDestination(40735U);
    msg.setDestinationEntity(38U);
    msg.name.assign("JSWXHFAWJUXQEOQRHIDTNZMBUUMVPJQWGLEBQONMLYRKELGBXRCXIRKX");
    msg.report_time = 0.8536442234707341;
    msg.medium = 71U;
    msg.lat = 0.2931050469362453;
    msg.lon = 0.04975682801181902;
    msg.depth = 0.8293027117229712;
    msg.alt = 0.016608412293935615;
    msg.sog = 0.6781033582196303;
    msg.cog = 0.40166136660182516;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.5163125992255604;
    tmp_msg_0.speed = 0.2681285697595863;
    tmp_msg_0.turbulence = 0.6314005931655758;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6911837641570181);
    msg.setSource(42515U);
    msg.setSourceEntity(128U);
    msg.setDestination(15309U);
    msg.setDestinationEntity(204U);
    msg.name.assign("XLGNWTWSYAJKXHZQQOKVDKFUAXEKXELJAPTDSIVJTEQHNCFDDFJNLLRFAAHHIEHMXELSSPVCAPCRBEUBIBOYGZKPFWELGMDOCROLTCZPOKDMMHZIPBSIRYOPKQF");
    msg.report_time = 0.5402788876845316;
    msg.medium = 140U;
    msg.lat = 0.7418243660394194;
    msg.lon = 0.017152611580932176;
    msg.depth = 0.5126477403909702;
    msg.alt = 0.8732458854149876;
    msg.sog = 0.8794375432181091;
    msg.cog = 0.16702422979313658;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WDYDTTKNJAGUONONVBRFZQXHLLLRARBJBBBEEYSKIS");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SZBDUVKHLCLMUPJTGZJDPGSZCNRCHAHYXVVLDKAAZEBNFWRXZJEKSNGYBHOJLWRAUWQCWELXKUOIHEUVUAKQLKXFHNDQOJMQAORDXITFQYODTBERQLPADXSGHTULHJYIQUFXNJXMPMGYYTGFHPPYIYJSZJSZKMLVFMFGCWCZWVPAODTKNG");
    tmp_tmp_msg_0_0.value.assign("CQAJNOJKJLTQYYCFBZAQUEGQZWSQGVGUHWZDOBBZPTKEMSSZHVTKHFOAFXGERHAIDNQQJRWXTILKTNGUZDKYTKZOLMMJNFYVBTUUB");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8022269319767086);
    msg.setSource(29573U);
    msg.setSourceEntity(253U);
    msg.setDestination(34103U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.8577762812135813);
    msg.setSource(46142U);
    msg.setSourceEntity(65U);
    msg.setDestination(8098U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.5644592824091526);
    msg.setSource(49837U);
    msg.setSourceEntity(11U);
    msg.setDestination(22517U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.8366764202973384);
    msg.setSource(64891U);
    msg.setSourceEntity(208U);
    msg.setDestination(7514U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("VOBKSVPNPVFTKMATRIBBCEADJWVZWQPRCMLZOXDICHSJGNDNVGUSOAKIIJJYTXHDUFDSNRUSFYOEVQQLMLIKKMNAHYAHERLVHKTOMMYRPNZLCFDNYHOKLRNGZMCOOJDBKZAYMHPGWQFQNJZTFSBPEIWODFIIWUQCLEDFRUBBGAXHVAJBEGJJZXYXERYCBBQXPFNYXQSAIE");
    msg.description.assign("ANCPHERMOGAJNSGXFJTRHEECIJOHGZYFHZTBGCQINVYFPXMAYAUSHEJUISAZDFXWQSVNOKCPCCCTQOZBAIDUDXNZXQKRMUFHBSHCGUVMVISTERUVBTVWMXNPFAOZROTALMFCVDKFLNXPWKJOLQZVTOTJUFSBSNRYEJQLWWJRBNOWKQWKQ");
    msg.vnamespace.assign("ZPIVWLJFXCSOBBOPTKSKUGUCMUMANRVVXHOFQFTMWXPMNTBTHOSDYLZGLCDRHAZVXKCYPYWIUDUMORUTPLFZRKEXKYWBDBSIJJNGZAEFOLGMMFRUYHNRZJAAHLTQLBRESWVSKBREVPOLGYMYZEPYOQEJVUHRJSBWIQDWGKKKWFEWPANAJQFMCSCSMIGJWHKENPTTBABYNLCQVEFQUDXDHUIIXXSTTJNNHIGYDX");
    msg.start_man_id.assign("VPOPMVCMBABZQOTSZHKWTIKMVQRBDQDZUIFYGWAIZLFCLLUAMKXEJPMIEIHEXAWIEFYTASFNGOFCFZJNZFUMGSWBJVLDBJUOYCTXCJRQLQXZTAYKNKIFTSNEKDIZIEFRVVLVOYRPMSXRYJCX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TABISNJVVWKUDXUDAKLNQENSUFZNFIENTAUCFHYCHSCFPAZYFYRGZOXDJIOEZXJHIFBEDPVODRLETXEKRYJIQLKGQGYGZSJALQSHJZLCYKOGBMBSQSIKCJZAIHWQHRFXEBOFPTZDEXQMQIACHMHOMGRWMTMFKILBLPVCLZGTYYMTWOKDWVRQBPNHLWKVVTVGAGPCXBNBMYVHMKDWSGMOCOWOTETUSDR");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 42791U;
    tmp_tmp_msg_0_0.lat = 0.2852097106330651;
    tmp_tmp_msg_0_0.lon = 0.32705966779997464;
    tmp_tmp_msg_0_0.z = 0.7740514837633358;
    tmp_tmp_msg_0_0.z_units = 238U;
    tmp_tmp_msg_0_0.pitch = 0.17071930630373067;
    tmp_tmp_msg_0_0.amplitude = 0.5179646924310771;
    tmp_tmp_msg_0_0.duration = 9291U;
    tmp_tmp_msg_0_0.speed = 0.07258257556202885;
    tmp_tmp_msg_0_0.speed_units = 163U;
    tmp_tmp_msg_0_0.radius = 0.2679127125541869;
    tmp_tmp_msg_0_0.direction = 146U;
    tmp_tmp_msg_0_0.custom.assign("KQTJUMWYZJKACKSGBJTQQTNNKGLQZMCXAHHQMHVZFVPKZERBPWSMXOPIQDZNDUCSTYYSVRE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LinkLatency tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.03743748856411333;
    tmp_tmp_msg_0_1.sys_src = 58308U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Teleoperation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.custom.assign("GLHNSYPWZWJNIJXOLHOPXPQNBRERFRLZYMSVPNZLCDUOCKBXYXGZCHKLQPINTDSDSTYQNZWPIVCWXLTFBAMIQJEFJUKGQKJECBOIWJIWTMJTSJPKCLMGVZOLNUAVAJEBMSFAPQPAIRFLMRWXNXDMWHEISBDZEH");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VCZXVNHTRJZTWXGBZXKSUOUOLRANAVLMTJTQPBCHPTLLYICBOHIKHBCSMPUZVEERDMXOCQZHCOXUZVSFKKNKTGGQPKTEWTWDVXJGMJXLUSJWTZJBGDLKAUVLSRIDQYUKGPYGAEDASWZWACVRRXWLYUGNRPHPCFQFLEENHHYTRVQFFCMIZENIMWFFKSFIQBIWINDAJHSFLUODRDEJKBZBAQYPPFNPBMXCIYXAMYMUVEDROQWDME");
    tmp_msg_1.dest_man.assign("QOALKTOSGAVGWLULYSBXCYRQVGFLWXOXBJXKKPEZFOLMEEYDOFYNCDACKGZBYHCFGDMFPWQFKVJMBSJCRYPRXMQBOYUIVINUCFAELRROBOLHWNRGHNWPUDWEHXSWAPJXQIRZVUDXJAUNSMZJMLZGIANAITEVVUFBNKODKTIVHOTRHNMTWENITMCZQTUZZJMEJGHPPZBPMPRYDWKYNAQHLTXYILSSPCIJIKRKGQSQVHFBJCEHDXFADTBUEZQTUW");
    tmp_msg_1.conditions.assign("PAJQXEKVEQGIDWJPRAFFWOZLKDLIDGQZHBEBYVSHGXNSVPLTKGWOORKEMAYEBZIGTIUWFYZLZCNMFSTHOIFBUHCLJANPJUYQWKSQFUCRVUKFIBEBWHFSIANDNRVUHTTGXFLGOXEASQOJWSQPHLMRRYURHNXHTMAOXPJFOLYNCONCMABWCR");
    IMC::Current tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.4078365375437719;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::PowerOperation tmp_msg_2;
    tmp_msg_2.op = 153U;
    tmp_msg_2.time_remain = 0.7479723219032994;
    tmp_msg_2.sched_time = 0.8233031036385005;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.853852584239495);
    msg.setSource(34680U);
    msg.setSourceEntity(174U);
    msg.setDestination(43218U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("BRSAPSQACTJCG");
    msg.description.assign("OQMTDCKMILGVBYWCTFEUWRUJLOIFVVWBCSIVXJWBAQQHKMJTQIJFYLJRBOPAOFHASBDUUBGZZECTOOJZQKOVIXSFH");
    msg.vnamespace.assign("SVUCGKKPXKTOJFRVIRPAXGHMTUODMBFPGZBMBBZAVHFUXXYRVINIYOVALIWFHJHULWHCDAQDM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XVNLECKESYOQJRWBBUULZRUTRQZFHKBJUHYIKGLOVZGRAIMEQZ");
    tmp_msg_0.value.assign("ARWCYMHTUVATIZSYJMVYBNXRCNRSOLEIYFUKAFOKRLMMGDLFDHCGHYMQYFTZKXJEKAWIDGVRHPYYQWMKEHPPSFGMNEXVWRDAWXGPZXAMUEGFOIEQIODWPAOJNSKIJTVJBEKQKJVHTQZLUSNTOUCCPGBUXCAJDXQZWXUBZTAHQDXDNOJRGNLUFLBENZYJKMPERFIELWLTQCALOSNIIRPDNVTXFBDGBCBZRCQUSH");
    tmp_msg_0.type = 231U;
    tmp_msg_0.access = 39U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HYVDUCICURBHABGHKKYRJSMORWZTXFPDXRJMYXJGMFFCGGCATRDJZZALNWHYKAFWUTALYWQOSLGUKVVPEBARZHWWRRXP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QOURPCIAMXKJGFRXJYFPJHASKEDTGREYYOTKMCAIOODXZAYCWJLYJOIWEKDBVPVLDVBFUEBNHZNXRRNHGZLDYSCUFTRIJRPCHAWGWNJNGPXCPBIFTCQEPJDVBZKQJITQOIVMNVHNDYZMZDUFGQXKLALMXKEDUUARWSWUZHXJQSATLQQPKAQMZSRYUKDHOWVWVAZTBWFCXNFGPICOMEYVFZTUGMSBQGUMGLY");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 28561U;
    tmp_tmp_msg_1_0.lat = 0.37269544644239994;
    tmp_tmp_msg_1_0.lon = 0.20368958893263556;
    tmp_tmp_msg_1_0.z = 0.9900316890657285;
    tmp_tmp_msg_1_0.z_units = 183U;
    tmp_tmp_msg_1_0.speed = 0.7358800068446197;
    tmp_tmp_msg_1_0.speed_units = 96U;
    tmp_tmp_msg_1_0.duration = 5870U;
    tmp_tmp_msg_1_0.radius = 0.8180148417863664;
    tmp_tmp_msg_1_0.flags = 66U;
    tmp_tmp_msg_1_0.custom.assign("QXWIUHEBUEYXFOZQAJKKKTKQAZZRYKDYGQLNTGZIUUHLEPWEFEFKAHBRZNXBFBBGJDTJSTUHQVOPVXDMVLAKCQZPROSMRNDPJ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Reference tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.flags = 58U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.value = 0.12319169308484412;
    tmp_tmp_tmp_msg_1_1_0.speed_units = 42U;
    tmp_tmp_msg_1_1.speed.set(tmp_tmp_tmp_msg_1_1_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_1_1_1;
    tmp_tmp_tmp_msg_1_1_1.value = 0.23634648716006634;
    tmp_tmp_tmp_msg_1_1_1.z_units = 16U;
    tmp_tmp_msg_1_1.z.set(tmp_tmp_tmp_msg_1_1_1);
    tmp_tmp_msg_1_1.lat = 0.5296980276059743;
    tmp_tmp_msg_1_1.lon = 0.3590814577144422;
    tmp_tmp_msg_1_1.radius = 0.42453686961542925;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::Alignment tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.timeout = 40419U;
    tmp_tmp_msg_1_2.lat = 0.21255369028105386;
    tmp_tmp_msg_1_2.lon = 0.778043948961724;
    tmp_tmp_msg_1_2.speed = 0.43466488495171696;
    tmp_tmp_msg_1_2.speed_units = 182U;
    tmp_tmp_msg_1_2.custom.assign("PVCVZPSGLWINAHDMGWKRZQLTADMQMAHZBKFJG");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("CUMDPSMWMSSAYVNXGKZOVIYTHAUCKPOMABRWJVJCEFESCQCOCQHCKHYIZQNIUNUOYBZHKAKTISEPHTAAXRIBJEAQKOGRPSVMMWQHEITCOYVJTFFUQSZIRVHOMVCHJZOMONLVIMALXLORVTNXLZYTQNJWDQYJDPDGQAFBWKJGPTGFWBXYJNFKWUHL");
    tmp_msg_2.dest_man.assign("BDTTGXZUQKUCIZLRPVPFGDIIKVYJGGGXPMV");
    tmp_msg_2.conditions.assign("PNHLUNVZQYZHAYPOGEMUNBF");
    IMC::AcousticStatus tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.req_id = 34366U;
    tmp_tmp_msg_2_0.type = 205U;
    tmp_tmp_msg_2_0.status = 145U;
    tmp_tmp_msg_2_0.info.assign("EAHEAKIMHMHTHLOKXVLUFWDCGNYBVWITOJTPFGQYCFHXLOOBHIHZFPAQBJWVMULQNDYTMYFPTUOKDNWKIYZDSSTQJWFASXEETZXPFVYQRSDFUBMCHKCUBPYBLGNWXESFGKGIMPLRXKUGSYWNRAIZYWCZAOAXJLCXZDDMGACLPQBVWBSIMXRCOKREVJRZIMZJZGSPAZBRTLEWQKQVDIELEOCENUJVBDNHGUN");
    tmp_tmp_msg_2_0.range = 0.7430778294688493;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::FormationParameters tmp_msg_3;
    tmp_msg_3.formation_name.assign("VXMLFRASBFKPELKMLCEIXQHUCTULHXOPKSQATCGMYYJXRGYMZBRJRCZOIHRCEDOADEYMWZ");
    tmp_msg_3.reference_frame = 1U;
    tmp_msg_3.custom.assign("ZDXYYUHDWYBPKXAOYJHJXSKDEASLSPBRYEQMHDIFTWJZPSUHVDVRHVALEGGCNJLNGQDGIBDUQHFSEKEBTQPIMLUVJLFYREOLINPTIZUOWDAORENHPKCXCKKWVAXGTPOCJNJZUXCVMOFKOUGLPRKIGSZFOLYDOABKNTBCXWQMWSVRTCFZTYCPXHQRABZBTUQUEAZQZAWLWMYTIPNJSGVMMBREOYHBGWMFKHANTS");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.02518631329426757);
    msg.setSource(22885U);
    msg.setSourceEntity(175U);
    msg.setDestination(31771U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("YSBVHWPVJEUJUQTIDTUZNKQRTUZNDLCDHKWMBHIAPGJHOWQONFYMBTAMPRTVDSDPEQOZTESFSQJCGAFKCKBITZBSSZDYZPBFXWITPXVE");
    msg.description.assign("CSXCFPAPAQGZPWUWEQHNOJPLTISIUWRYGOBLKBRLEKXPNNYEYAUDZOCYQLYLLCNXSDOYMAEKLSDGHYAEXKBUUIHSXURFPWID");
    msg.vnamespace.assign("GRCUTDCTIEWOXMNBADGRZHLDTVRPWA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XHBUPAREQMRJVKWKYHIFPHILTMJHRNEDPIZOMJJYSCKSDIXOJBNXMVFOT");
    tmp_msg_0.value.assign("ODNSJUNDLZYQRWROZYOIICGMGHTA");
    tmp_msg_0.type = 139U;
    tmp_msg_0.access = 8U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YMPWFNGUJJNVKMUVHESLZKFXNXZPXCXKVRNMPEDDSIMYWBTHZGSAIYQKCJKRZMMXSWLTCHGDTILVGTMZUFMQBSWSBHCNYHWPOBLJGVPLBEZLBURXRCRWCGARJJIKCKPQUIDPBQAEWYWSYXDKBHOSYAFCAVDQARNVVYQNHMZFFQHJIMGOTUXVOQYTBT");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("EFSMCMLHVSDPQSBFJGUUXOHTBFLKGCXEMPWZVJGTPBCHHXSUUOTYIPRAOOEMRIYAWVBKFQAZLNOJAVEJMRFBIRSUYZDQGJVUDZLIPXITHSIWUVXEPELTNDVQNXJDWMSFRZRLTEKLDBBNTKPG");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.6249208420158697;
    tmp_tmp_msg_1_0.lon = 0.8790082002126578;
    tmp_tmp_msg_1_0.z = 0.7889859720752632;
    tmp_tmp_msg_1_0.z_units = 192U;
    tmp_tmp_msg_1_0.radius = 0.8113457397471214;
    tmp_tmp_msg_1_0.duration = 28217U;
    tmp_tmp_msg_1_0.speed = 0.00687441259673538;
    tmp_tmp_msg_1_0.speed_units = 146U;
    tmp_tmp_msg_1_0.custom.assign("VTCMARPVJAYFNBCSKZOUYFBXUHSPGFRZPERVMTTVYFGIFBBXLIWYDOGDCOPIZGIIQEKZPLGQYBEOORURRVTXYNFQIMNEXNMSUUZPQAQLDCYEKJEDHMNMDHAWPIKQBMGAHHSFRAJXCTOUBLPTEH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PlanDBState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.plan_count = 58430U;
    tmp_tmp_msg_1_1.plan_size = 1549541901U;
    tmp_tmp_msg_1_1.change_time = 0.33655647361203167;
    tmp_tmp_msg_1_1.change_sid = 2777U;
    tmp_tmp_msg_1_1.change_sname.assign("VIMBLBOTMTUVJXECOOTVT");
    const char tmp_tmp_tmp_msg_1_1_0[] = {-79, 72, -24, 115, 57, 70, 37, -34, -60, -12, 81, 16, -5, -126, -25, 8, 84, 69, -43, -38, -40, -17, 68, 79, -124, 28, -121, -11, -42, 54, 116, -10, 68, -81, -109, 12, -59, 73, -49, -61, 91, 56, 75, 52, -117, 12, 21, 96, 93, -46, -3, -105, -46, 83, 85, -67, 111, -83, 55, -95, 42, 59, -96, 103, -14, 5, 95, 112, -106, 22, -71, -109, -71, 106, -49, 73, 46, -25, 15, -115, -70, 96, -117, 120, -14, 61, -87, 99, -74, 42, 95, 96, -31, 27, -34, 53, -85, 65, -55, 104, -113, -61, -51, -31, -91, 65, -121, 1, -121, 122, 114, 82, -25, -126, 120, -16, -38, 0, 111, 8, 15, -61, -5, -18, 126, 21, -19, 97, -103, -81, -61, 12, 25, 125, -13, 97, 87, -124, 31, 16, -16, 25, -110, -99, 68, -12, 126, -14, -97, -51, 27, 77, 42, -108, -60, -16, -36, -45, 8, -61, -32, 26, 77, 22, -20, 67, -93, 82, -74, -5, -79, 87, 16, 62, 37};
    tmp_tmp_msg_1_1.md5.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    IMC::PlanDBInformation tmp_tmp_tmp_msg_1_1_1;
    tmp_tmp_tmp_msg_1_1_1.plan_id.assign("BDMKONAKMQZGVHPZQXJGVZBJCRTJWELNEMKABMJXQNTKTCBOWWQSVRVBNMPRISLBCCFXHDQYBEXFTAGNNMKKYZLORUUFGFMFDEFHHLVIGXROTJTEDBXMGSPFYSNIZSQQQIGQVUEFGPWTIYVAYLOHJEMIZRDXYADJPLYRIESAKZL");
    tmp_tmp_tmp_msg_1_1_1.plan_size = 29869U;
    tmp_tmp_tmp_msg_1_1_1.change_time = 0.8240941601604722;
    tmp_tmp_tmp_msg_1_1_1.change_sid = 32364U;
    tmp_tmp_tmp_msg_1_1_1.change_sname.assign("UNYTALGCRTGORQHGQNJJQISIKHPGCKVNKJUNYNMODJPEGIACSMBDWKLYXLSVXCOGPFNVMFYFMSMELQRZVRTQSBJZBICZXJXYAFACFRXVEIVWSHOYUEYBMYKDKLDLEHEVDBCHTGORFSPUMQSRIVFOSKWUJUAPUEBUVWIBTTQNMJIFONJQWPPZOKJAHLISAKRAZRXFBUGULXTWWLPYEGVWOZKCFZDBXDNDETRHDHWZIZHYPNBOPWMXDC");
    const char tmp_tmp_tmp_tmp_msg_1_1_1_0[] = {-50, -71, -65, 13, 48, 57, 26, 115, 19, 6, 124, 42, -95, -66, 24, 65, -82, 103, 36, -76, -87, 84, -102, -81, -58, -98, -64, -37, -8, -85, 8, 2, 71, 97, 19, 78, -63, 103, 107, -70, 90, -25, 106, -78, 83, -86, 45, 100, 30, -82, 121, -39, 66, -28, 110, 5, 62, 118, 124, 71, 59, -76, -30, -30, 23, -11, 34, 73, 96, 56, 25, -128, 49, -37, 44, 71, 25, -3, -75, 96, 117, -73, 59, 112, -123, 22};
    tmp_tmp_tmp_msg_1_1_1.md5.assign(tmp_tmp_tmp_tmp_msg_1_1_1_0, tmp_tmp_tmp_tmp_msg_1_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_1_1_1_0));
    tmp_tmp_msg_1_1.plans_info.push_back(tmp_tmp_tmp_msg_1_1_1);
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::Teleoperation tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.custom.assign("YJXAUDKWWZGLMLVJACBALMLGGHALSBRPRJPNUSWIXDNBCDGOYZRMMOBIOSBRIFSSRWTRKLZRBHMEJNJOTEWUHPTIBDSOQVAFKGZTNOCQWI");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("JSSBEMNCHBCHRBRXMQXZHAYSMKPIFTMLMMRIPXLVLDFFIWPYHNOKGEFOMTEWCUTXAQBTIWGIBXAPQCDYZRKDRYSLQXJOYNMAMPVUYHJNQD");
    tmp_msg_2.dest_man.assign("ZGOYQHEBUIUJOGSSDJJLDCPMIYZYSZKOHBYWQKPXKZAZNMBQKOZAOJDCAUYQPVCIGTVTPPXPNDINARBXVGL");
    tmp_msg_2.conditions.assign("ZLQSYBWPJTJETSJOVILDBJFKGCCPRQNSMXCBJHKGHAKSXVPMLTZCUWQGYVNOWEKUIPKZSMCMLYABLZSOXNHNRRAIKWAHILSAREDUAJJZTGJVPNLPKVRPDFUKYXFRYOQSNGBYBUEXHONGXVTNIAWMJDFXUUEQXFFUMTRBLVZNXKECQAPQHZLGIYIWOMSBOQUEUOFCMDHXHIVGEHEDRGRNATPIYFWWLQGBZTSHKFOECAORDZIFVCQMZ");
    msg.transitions.push_back(tmp_msg_2);
    IMC::Teleoperation tmp_msg_3;
    tmp_msg_3.custom.assign("MRBHPITCKDYMUDJQDIOYSWMRFVMABTIBOJZWNPLXVTTQZZMKSBKUGSRLECGPDTOJOQEXVKKMCBJCUTXAYCNIOFGNPJEDNMAYGRIMXBFASVLERGIDYUWDYFMTECHIEGZTPREHECWIKUZWHUAOCFXFVYTURHOVAJSBJODKWZOWCOFYKHLXLUSJSBQNNQRZGIAVJGAZXEXIDQQ");
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.03284468367992521);
    msg.setSource(6620U);
    msg.setSourceEntity(83U);
    msg.setDestination(22517U);
    msg.setDestinationEntity(90U);
    msg.maneuver_id.assign("VFNPVEWVZNDIIBVZRKLHODLOHTKPAPGDTFLSCEQETBINBHXTXBSMPCUJAGIYFCNQKELXOVFJUVCGSXNBKRJFXUREFBOBTLWJTQVQOXWYLPZCTJPGSCOKVHFSLYDMQBIDSAMYGIAWZGMQGHNQNUOCZAXEYYAAFYNKVOOEBMXMNMXIHTJWDEEPLZVIHZRRDUUTSFMKCKFUMWUZCQRHKPDIZOHLIAWYPSLGEBXPWKWQARMCRGU");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 41561U;
    tmp_msg_0.lat = 0.3597813852069581;
    tmp_msg_0.lon = 0.878403465372345;
    tmp_msg_0.z = 0.7458803650971936;
    tmp_msg_0.z_units = 221U;
    tmp_msg_0.duration = 62876U;
    tmp_msg_0.speed = 0.4784556312017898;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.type = 217U;
    tmp_msg_0.radius = 0.08016427750525301;
    tmp_msg_0.length = 0.8272733551475641;
    tmp_msg_0.bearing = 0.4644138091881578;
    tmp_msg_0.direction = 252U;
    tmp_msg_0.custom.assign("VGPFZDIUVNJRZYAWIXVQFTJLUROPNBFRTETHCSORXJBGNDUNVMUNKMXEQPPHHRLMGBWDEQJYQTIWFBTYNYKWALLFZZSKKIODZLBDIYQIKQEUMRFSPJOXLDPKAOBVDHJGWJSIZBEMHKJ");
    msg.data.set(tmp_msg_0);
    IMC::UsblModem tmp_msg_1;
    tmp_msg_1.name.assign("NICTLGHDNOAAMNRZEMOATHNMSEMNEBYPBWXZFXSMBXRFSWHSTLJQGHVBYEYHWAMXWFJKXHLKCBDDUYXTYY");
    tmp_msg_1.lat = 0.403792747768593;
    tmp_msg_1.lon = 0.6089016486146585;
    tmp_msg_1.z = 0.5868995727032426;
    tmp_msg_1.z_units = 167U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.3393821818915189);
    msg.setSource(60413U);
    msg.setSourceEntity(31U);
    msg.setDestination(25602U);
    msg.setDestinationEntity(229U);
    msg.maneuver_id.assign("TZLENSJDAUJFSPOXGRUSDHDYMZSFIUSUICPTKRDRKCMEQJZPLFXLG");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 37455U;
    tmp_msg_0.lat = 0.48771233518922186;
    tmp_msg_0.lon = 0.16898969111688278;
    tmp_msg_0.z = 0.023562944784522588;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.speed = 0.9241831968554017;
    tmp_msg_0.speed_units = 246U;
    tmp_msg_0.custom.assign("KPUMYLGDJSXECJFDUIXVMAATXQIHCAEYTLGGHJUPZRQWYYIORLNCNQJMTNKZZOBODTFGPFSPUBMGERPWMKJLPLIMWWGSHIDAOEWXXKOJPWJAZCSZBODEBGCMKKRTVZQNTEVRHWTYEKHBHRDMOHBZFZYTJYAAKLQVMODWWQDTLWRVJFXRANNCUSNGEBCFB");
    msg.data.set(tmp_msg_0);
    IMC::PlanSpecification tmp_msg_1;
    tmp_msg_1.plan_id.assign("TTZNSKBQKTZQKTZNTGLUJZREEVRUWMJTOMDRPEKZJMBCDYF");
    tmp_msg_1.description.assign("OATGYWTGKRAFDSGYJSSILZCBBUSLMPPDWBYTXTCCVYFWNSWQKFVUNZHDHUMVIKMHVQBZQXXAXACJOXJCJIDWARRKXODHRPWFPOHJMLSVEOQAMUBFXSOJFCPPUVQGNRNEILVVLGEFJKBWDZUOUMMNQ");
    tmp_msg_1.vnamespace.assign("VFZWAXNKDQHITMEDHWOTTLYGTWOMCPCRIHSJSJLUBORSMQYVKHDRCKRVQJJYEBHLAJCKOIOXUVHPTLNSODKGWKKTHHZZZPDXQPXJYUTGOWDVSFMVUYKNCRENNTCUMGOPAQMQGELRQILCEAMDXYEFASRWWIHOOLLVLKQFPVDXMKBVARCZIZUAXEBBBNPQA");
    tmp_msg_1.start_man_id.assign("DTZMKAVNAEDZMRYLLQUYOXKSCSRVGNBFKDBBZHHITXUTGCJAUWKMEEYUPESSOLZBIKEFJVVROCWDQCYJKAFUNKPQQGZQLBTFWREIBRXVNPNAIZNVZYAK");
    IMC::PlanTransition tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.source_man.assign("DFZAFFQWYXRISSMUVIXGDNLUZELMPRMLNKOXCGWPFBUYGAPKXJFGYXUWYARPUEDPAFANLBNPOCTKEV");
    tmp_tmp_msg_1_0.dest_man.assign("XLMGYXNBTVTAMGJIQRIINJBAWRBOOHVNMPSLEIRTMGACHQFZOBNWGYCBSKORXMXWGJSXKQBJNJHDEVMYNKPPEZECVUHRHPTUIXYPVFQDSVIHUCOAMWWUYCSCKPKFLLZKZZLJCWTNBUEKXIDIRLVTYFBZVSFYCNRPZUBEDWUDBOVYZWCDDGLFFSELEQQNUOHAJMDFXMUKTYGUJEWRAQRJTNAAQLLCOJAXIFZZGSEIS");
    tmp_tmp_msg_1_0.conditions.assign("NZFXXBKXJAPWZYVQRRVDJALQFFSVLELAZHGAWMQVDDYFAHNIHPJSSWSUMSLTLQRHOYWHEFZHNAJZJAIKGEJEDTUSMRVLSUFKIDPLCCJDUXUXGLUMNTCOIMBIQYLWGIZCEXQPMRNHBNDOBGTWSOVDDNBYUGEFPGMWVMNTQPJIKTKWQTVCRZLHWFVTXFOGRZKEBHCPUNYRJCNHKWXPOKAMQCVYISMPU");
    tmp_msg_1.transitions.push_back(tmp_tmp_msg_1_0);
    IMC::PlanGeneration tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.cmd = 223U;
    tmp_tmp_msg_1_1.op = 243U;
    tmp_tmp_msg_1_1.plan_id.assign("NDVVSMPUXXGMRUOIWYSIANWUFXRRQZIGZMULZKIUFZKMNZWTXKXKGCWLCOTLSRG");
    tmp_tmp_msg_1_1.params.assign("ONHAGLSPRJPJFPXIRUUXBCUVNKGCKAOMBMDFNCRGJOKRJECWVYQOWUIYWFRS");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7933644540832153);
    msg.setSource(51445U);
    msg.setSourceEntity(231U);
    msg.setDestination(43430U);
    msg.setDestinationEntity(187U);
    msg.maneuver_id.assign("GBDYMUOPEAOLTWKFFRRMNRSUIOCKLHTVOCEIAEFXSQITOLINRBGHGDHIVEYDEYSWPWXIQQNBHEKMZASZFTVXCTXGLBNTJLPBPFFBMZMZPQVRTDSAZ");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.26834428541154487;
    tmp_msg_0.lon = 0.06275984038964888;
    tmp_msg_0.z = 0.11522784672670705;
    tmp_msg_0.z_units = 7U;
    tmp_msg_0.radius = 0.5006864751329179;
    tmp_msg_0.duration = 57480U;
    tmp_msg_0.speed = 0.9761135604391088;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.custom.assign("VINTVXHEEXNJQXFXFAEESCYLHXRMQBWYLUWDOKIUACWFOIZYKMTWPSIHDCSYOISAAHCDWIDGSRUBKJFBVDMJQDGWTFKVDLOGEQBVLDHLMPFPSQUVSZZRGCSPOHSQHUXELCPMGYQQBNPTNQZAZVJJYPLLJTARKJZUJGINRBHRDOVOXLCCYLKKXTIRHJRDGYPRAEYSGWBUMUVNTEWFOPTXKNMO");
    msg.data.set(tmp_msg_0);
    IMC::GpioStateSet tmp_msg_1;
    tmp_msg_1.name.assign("CGDDLSBPQZGWTSOJSJRCTPVBLQETRSIBFTEVYWDEUYVC");
    tmp_msg_1.value = 96U;
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
    msg.setTimeStamp(0.6177314055910894);
    msg.setSource(6928U);
    msg.setSourceEntity(155U);
    msg.setDestination(46429U);
    msg.setDestinationEntity(167U);
    msg.source_man.assign("JQWPLZSXVGUVPRNHNIHYIMWPBOADAKAXMCNSGUONWRZEQJZLTUTHEFTZPDZDUQKEBJYLPFCQYTIIRAWXBFWFLPYHKJKAJGTWKGACISFGFYGEAMMCDOBWQTNRBNKVTAKJKXSRZLHBRRUVOVCOGFEXISBUIMWSZAUUXVDCHOTMZXPELLLPVCOVGEEMXMIHQOMOLHTBQKENZGJIHJSFNDRJOKWLPDJTDQF");
    msg.dest_man.assign("RPWHKBGZKFFSFQRAFIXOKOGWLDLNUKRUHVNWUDYWHMHEZTUHCFJAODPXLPTCXOEDRBGEVIYNRNMQKZMSQEGQGR");
    msg.conditions.assign("YOZPASOINZMSCGPQXJDKCCTCBAUIKCBDCSRQFPLQACVJIPVPUPNYDGJCLXRRNOBBHTWOXQNMBRLMFJDLTQXGZCYEMJXJIUHRURQNZHBNVNZFEJMNLETJMWDIXUDRRJUHTVKNEXQZGBHQKXWSGYLWIUEKIZGAAQUJYQVMEAMLWFKGWLWPRA");

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
    msg.setTimeStamp(0.6258633894071948);
    msg.setSource(578U);
    msg.setSourceEntity(103U);
    msg.setDestination(7187U);
    msg.setDestinationEntity(60U);
    msg.source_man.assign("EZQYHFUQRLOKIOWDQPGQLTUYOJIHTRGJRDADPWBZKCEDUZNUWQIAMYQDNABOXQJPFUHYVHVWVVVYBYGEYLFSACDFSXCHEXPWJPICUWNJNBCIMXSZGRPIGMSBISXIDXGMMKQZLFMDGPJEVRCTOEAOXVURICTZAUTLUZWBRSREWTOZFPSZCBJVHMKKGUGLKTELIXTNLWNKOKRHTFH");
    msg.dest_man.assign("OALQMKZPHNDMEHK");
    msg.conditions.assign("BGCWJMZRUXCVZIBHRTYTXKICSWYZBJMVOSPWACGKYJDTMSYBKHAQMVOEHFNWHXDRHMVFWIPDUEDVKIFQPCABULRRDYGSAEGKXYGILVTFFUSJLROITNCADWZNSKOPAYBNAHDJNRLHMXLLDEVUPBCRVEKCJUSGROJPZMNPYWQHXKCTMKLFJTBQFSVOXXVJUSPPQJMUBQUUTTLNWQFENIW");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("CKEWXMDBLENMGTDIVYELTJOZTMVZZMXALHZGSXDUHENRKLFFNVWTW");
    const char tmp_tmp_msg_0_0[] = {-4, 53, 97, -110, -17, 25, -83, -15, -13, 21, -56, 6, 1, 32, 92, -90, 72, 44, 26, -36, 51, 17, 5, 44, 11, 4, 65, 73, 12, -25, 16, -110, -56, 108, 4, -23, 44, -108, -98, 45, -37, 19, 1, 13, 78, 98, 42, 98, -2, 51, 16, -12, -56, 19, -6, 112, 36, 90, -104, -53, 44, -15, 46, -75, -4, 82, 62, -57, 68, -7, -1, -74, -42, 66, -59, 51, -22, -45, 109, 102, -18, -125, -108, -90, 35, 8, -109, 117, -113, 105, 104, 43, 118, 124, 109, 4, -66, 116, 93, 66, -44, -5, 12, -57, 23, 49, 63, -27, 9, 27, 51, 51, -115, 12, -94, -37, -24, 1, -87, -51, 81, 28, 61, -53, 111, -89, 23, -72, -69, -1, 8, 34, -3, -84, -75, -108, -122, -51, 86, 124, 107, 86, 113, 20, -102, 45, 11, -22, -73, -47, -117, -41, 118, -37, -7, -83, 114, -88, -83, -23, -126, -120, 34, -110, 34, -74, -40, -83, 19, -24, 49, -15, 8, -128, -34, 54, 110, -121, -76, -79, -77, -33, -21, -8, 28, -88, -40, -34, 3, 24, 73, 12, -1, -1, -48, 27, 113, -34, -124, -10, 100, -112, 34, -122, -48, -3, -35, 93, 11, 110, 63, -21, 56, 0, 14, 41, -17, -32, 116, 11, 63, 107, 75, 114, 102, -9, 124, 54, -91, -44, 94, -86, 107, 121, 101, 78, -78, -4, -40, 119, 107};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8834102799499545);
    msg.setSource(63166U);
    msg.setSourceEntity(44U);
    msg.setDestination(44455U);
    msg.setDestinationEntity(12U);
    msg.source_man.assign("VEFOCHUIFLCYPHXIWZKWCGSWZOGJDEWTYMURVCOQZJSTROMPLLKWVAXDVKNMXRFDLCRSTNCCTOJEPTRBQZJPYEBJWAMPLGVNHASQCIFDANDHTYTQ");
    msg.dest_man.assign("OBVVIGYWRNUTHGIHSIBGGSWOIAETORIASQCRGPIACBKVQHYYQPMZYDEKGXUPQATTIDNSEZKXIWZFPFMTZQRUVHKAMLOCZBPVXTDHXLJFSKQZNSWCHWKOJBCIUWQANWVXSUXCTNWJSXOMZLPMQOZBFSRRGAUMVGOUCQLXJQHFDJRCMDEEJFKURNNMJNJYBRVVETOMVDFPWIE");
    msg.conditions.assign("ZGUTVADRHBXZYZSGZYLHXRFFNAEBKWIZMEOCDCDWTZQYJQEMHSAISPAZUPNWTPDVGYJSPBMBQIQZGGBNJNVAXQLWCTZMWLKYQRISOTMOWAULRETNEJKDVLMPOESFGQMJXABFAFVHCOOPOBTSQLNDJKFGDIBNKXYVSPTUNMYERHTWXOCUKFJMUXBVCAYIRJRUPH");

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
    msg.setTimeStamp(0.31379474432248466);
    msg.setSource(8859U);
    msg.setSourceEntity(77U);
    msg.setDestination(11170U);
    msg.setDestinationEntity(73U);
    msg.command = 93U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CZPQXWTQXWGLMKVOFOJXCAAJECBEQAIVTIXIHNORMGLKJRAKQZZPROVHTUQFNAIBACVOGYLGYUKCRQJSEDWNRSFZVWZKNTPDMIZDHDTHOPGQEMIYIUERONUAKVCPTWPYTCRYLFKHWDXNSHTMVKFDBZFYLUSLESUOBWACJJFXXDBGZYMCCBPGSVJNFQHNGVDXBHT");
    tmp_msg_0.description.assign("ZZWEDRJKKVKSFXOHJNHBILYUCWUFBDNVNQDTKJQBXNPJQEMXQDDVXROZAUQFUCZRSLOYANHIUIZYCGTCGBOAJYSYILAVGMTVNMSGAHWDMLKUNPBCPLBVXOTUXRQ");
    tmp_msg_0.vnamespace.assign("QFIDZXKRUGFGQBETICXUHOXLRCYYVGYXMWMHALZMVDSIKFQTAZZWFPTPNEREWJKBKHFMDJCXLWOKZII");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BFNVIFOHRJWLQDJPTLFKFIQSMOGSOZYNANIVNRPFMEKEJUMGZBTTQZTZKZSAJBCVASSECDOYOYXGFCAXIRMKHCTWXGHASIIYXKLUCVBDMBXIAHFQEZPZVYPGQROMMCCJOWMMHUGOBSQJVDQDUSQYNNEYIHYZELVTKUWCWXEETUEWUWFJCPKOXTJWMLNUUZLTRNGRDJVRDGGPHKBNVPKCAXYTGHRAHPQLBSAILKNJDXZBLSVPFIWFLHQOWYU");
    tmp_tmp_msg_0_0.value.assign("RGRKHIRSKAXHKPGGYOJUEDSZNFDLZXT");
    tmp_tmp_msg_0_0.type = 40U;
    tmp_tmp_msg_0_0.access = 189U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YRKZLLPXFHPNQQHGRMUKBJKZYDYWQYCENVDEJJFHIVIZUEGMXPGMHDWRYWORFUJUDWZJTGRLXYJZZQLPATCCHKBSNIGVJXXPNJMIMEMYGBKQDTEFOIYOCFRJUEGZVMEBNDHLBWQNUWAUATFSD");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ILHWNHXMXGOMOSHIUXUVUAUD");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 51691U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.8797194821631725;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.4850712598130408;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5615238824700743;
    tmp_tmp_tmp_msg_0_1_0.z_units = 54U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.878962434073084;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 58U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("MTWSBJKHVZZSXMBQULKAEPUIDQXEDDYCWYJMRTUFIYDYYZTPIBVVXTPDRGCHKVHSRPPHEDNMLJCTCEUMVBGAETSEGBJLKIVEDUBNASMVLROJFYMXFKWKZQYGTROBOWXKFFRXJLNBOFAHTBAUHWLGCBPOZFMQASSXQOLOQKJCYGGIHCWNLMUZRQCLGPZVJMDIZVJFAHNOIQRFP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EntityActivationState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.state = 42U;
    tmp_tmp_tmp_msg_0_1_1.error.assign("XVCHONWAHJREBMTTQSFOHLSXYSFKQWNTRAUMCBXWMCIZLNDZNFKAGDUREONOVLJPUFAKXSLPZQTZCGXKAIVEUKCCXKUVIBYGHBBJIQGKSUBVLRNYJQWVKHOGZYITZDYVWPBGRPFSCNPBVVUIDTDIYTHNWNLQITOBHCPSDNXMRCPML");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("DSOAJOMWFZHGRRUOPAQDJSMXQLSXLHTVPDKIAQYCIHVYRVAGKMWGZRXTDZJFFBXHFSAWTTLYEZTQOEUHDZMZLFNUGVMUAYASPNXXQYAOVNIBLQZKADUFVBNKSMVIEWPOMREPHULBECIJSLXQGOBPANCGTURJSYTCNBCRJTQECPCXROCWUKWDIPNYWCFGDPGBFYZEDLWKWOVMRFNTIYPCBZKQXIMNGNZSFKDVJUESQKJOWXHGHJ");
    tmp_tmp_msg_0_2.dest_man.assign("XSSUPIJVGBACHSLZNRGEXQRFYQSZZGTYKYEJUXENWLROYDIYTGYQTABM");
    tmp_tmp_msg_0_2.conditions.assign("AWQVFSMLCNHUG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::HistoricData tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.base_lat = 0.009497185020518883;
    tmp_tmp_msg_0_3.base_lon = 0.1635151985255655;
    tmp_tmp_msg_0_3.base_time = 0.6459767622929486;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.11772970184154252);
    msg.setSource(43404U);
    msg.setSourceEntity(143U);
    msg.setDestination(46443U);
    msg.setDestinationEntity(3U);
    msg.command = 165U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FQXADXPTLKSCCNVFEHSLVRJLHZDZFLCZCZGJYIHOQYARLNOZKKXHAMVOJYOTSJPOBFDQOVOPNADKMTZLYBEHVKPNFEDOTPTMSBCDVVQSWUEMZMTPDUVUNYTIDZGIULAKQB");
    tmp_msg_0.description.assign("EHZZNNNETFPSVLMZNTYZYRFTQJCAPHUVSPUVXMDFFEJWAHSVFCIIEQSNQZKRTPHBUBFKOCNSQOCTIBEWQVAQLUXAVKDMZLLEBADKLEPAGGNGRIGOBGKWLBAWXMHXLOKHZRZQCFIWGYUCQOMBPYDMSFMKKWNJBBZOIXLDJIIDAEMAXBGVURNRSJIOPUOXHVYTVTYKLYGJPDMX");
    tmp_msg_0.vnamespace.assign("JRTGKVKPRMURWURRQICKNLDCYUTSPQKNVBWZGJCFSOYICFJETPLHKZVXOMBWGGGRSRLPATJBFHOVXHUDQXCPPTCJSXKEYBQPZHMNVJUQRXZKNAQOOUNDAZLYOWQIWPNMZMKCUBTBOOBWIDIXRTMHGNPOIWIEBSYYIRJKEZLPYWHFLQVSAAMQNZVBSXTDVEVDCYZHSCAWYOUNAGSHAXUJLADM");
    tmp_msg_0.start_man_id.assign("QQPCAZJKGZEOTUFHSBSWTNQNJDKZXWJIXTNAIPOJROQTTLLUBBWAERXPEEUHXVRGWXDWFXKMIOMMLZFDIGICOGPTLWRHG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ESRVQORSNWXGTSFSLJPIXMIXYYUBOPKKDZZJOXFKIMREMWIJWTYQDCDSJ");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("XXEBBDGUXUXWAGPLFTCQZPDJNENFJEGTVOPGIIQDPPWNKRIKGWMSJVDMFUSOSCAACSBCVOPSMHEEYNHXIVDEUOTJNQTZVLQROKBBRBLY");
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("TACAJEAAJAJDFKDTXBOGIMJQUWRGCOIIMOQHWCKEGHLNWAYBRALNPORYKPXUFZPSPNZLGUXVKHRHXO");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("EPQZHFQBURQRXDXMCUMYGTWRMYJMDVWBCEHIYKNA");
    tmp_tmp_tmp_msg_0_0_0.description.assign("XYLMODNHKNJCAFMYXVU");
    tmp_tmp_tmp_msg_0_0_0.leader_speed = 0.3183423008770665;
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.028242368400617113;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.3867997251198785;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.5394425402930785;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 48661U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.13953314876331735;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 24809U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 25208U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.35187857242337206;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VLYGJHHPRCYDQHQTEKIFKTOKSBWZAHIDUCYZFWBOLDYPWNXEUJIDMBKSGQTXODULSSIEGYSFO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::TransmissionRequest tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 28143U;
    tmp_tmp_msg_0_1.comm_mean = 134U;
    tmp_tmp_msg_0_1.destination.assign("SVNUKTJXGORCERSIRCUENFMRFSYMGNVLIYAAVSADWHQPXZRIYMYKMOPFRIBGQKCZPZUJZVGVHFBCHUTDADYTTOENOJPWMHAMOOHBQDTGGEUWFLBCLNCWXLBDQJQFBOJEZAYIKIRJSQXPSSDXNCHQLXEULPLWTJBHUMVXVWNKQSYGKKHRYNSZTCDMXXRKOZUQZFZPGHJPJMIIBBBMCXHAVECVATLFTUINFFYWEGUJDKEZ");
    tmp_tmp_msg_0_1.deadline = 0.4586308336411683;
    tmp_tmp_msg_0_1.range = 0.9868588219786474;
    tmp_tmp_msg_0_1.data_mode = 177U;
    IMC::CcuEvent tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 44U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("YJWIVQODFUPOZPYC");
    IMC::SoundSpeed tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.5449824754388582;
    tmp_tmp_tmp_msg_0_1_0.arg.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.msg_data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.txt_data.assign("BRREHTENBIHMTSTOXOQTZDSSJDNGEJBPLCYSTOGCNLOIRPGOJUMCGJTQRFVLHZKYCFNOYHBFIYWFKCVVBRFJZAEEOKXLIYRDDQRZP");
    const char tmp_tmp_tmp_msg_0_1_1[] = {-113, 46, 94, 10, -33, -7, -33, -112, -104, -12, 111, 99, -16, -93, -88, 19, 119, -86, 51, 51, 121, -71, -96, 5, 76, 37, -115, 2, 40, -80, 122, -5, 46, 124, -28, -73, 21, -110, 44, -96, 33, 31, -6, 62, -72, 2, -10, -55, -79, -109, -28, 23, -42, -23, 70, 26, -1, -30, 78, 33, -101, 125, -127, 16, -54, 40, 116, 25, -22, 113, 2, 69, 87, -79, -98, 61, 85, -91, 97, 87, -86, -29, -37, 122, 68, 114, -112, -106, -99, -69, 75, -60, -99, -98, 44, -53, -55, -81, -47, -76, 33, -60, -53, -6, 81, -60, -71, -75, -43, 86, 19, 35, -71, -52, 7, 47, -120, 68, -128, 64, 3, -13, -103, -109, 47, -21, 40, -96, -20, 114, -17, -86, 44, 8, -88, 20, 124, -60, 49, 38, 5, 3, -77, 10, -51, -46, 82, -58, 9, -69, -113, -25, 49, 95, 59, -110, 92, -22, 118, -34, -43, 67, 56, -101, 66, 1, 69, -128, 88, 32, -57, -62, -41, -46, 120, 52, -13, 22, 69, -72, 50, 5, 47, 122, -19, 67, 90, -17, -63, 116, 10, -61, -84, 71, 6, -78, 124, -47, 62, 76, 80, 35, 58, 111, 125, 16};
    tmp_tmp_msg_0_1.raw_data.assign(tmp_tmp_tmp_msg_0_1_1, tmp_tmp_tmp_msg_0_1_1 + sizeof(tmp_tmp_tmp_msg_0_1_1));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.978412701023279);
    msg.setSource(25320U);
    msg.setSourceEntity(180U);
    msg.setDestination(2998U);
    msg.setDestinationEntity(68U);
    msg.command = 15U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SXQBIABWQTJJDHZEBAXESZJFVXNQWWJEJIKROHVHOURPPLUTUBMSAJMRICUPFLLXLNNWEWSOIDFHBUZTLWEMXCDCZITCIFTNEMVIVBTCWFGGCPGHMQEGEMMJDPMXFDXSSINHROO");
    tmp_msg_0.description.assign("BICPKRWZLHVIRKWLDMVLHQYCKBMLHGJGTC");
    tmp_msg_0.vnamespace.assign("OZEUMEXEZUILGBLPBEVWWPECXMDXQCRTJUVZRSQGFCOPALHYNUYUMCKALWNICXYFHHSRAKLKTTGQS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QTOZKCJXBVQLZOBUNNNAIUJXPAIKGXQCRXDITJNHSTXMVLLCCXLNKGUWHJDAFJGEUNDZFQTHCXRHPRQFVHBWRQKHSNLRYPHZPOSTBZIXWWBPVGQTSVFDTOAUPRKJUMMCFLEVEECSG");
    tmp_tmp_msg_0_0.value.assign("ILCQHPNBCNMGWUIWBTKHGZKFPRQRJSEUOKDDKXJTHRAIWCYGXEHFPYTBKHNFBMBRUVPWAEYFOXSYYFKVEWODJJOUIZNHLYPASZHJKNGWMCZIVSQQHWKKTAGDAFEFTNUYTGIUIJBMMTAAAEZTLCLDZGVLYISAXVZSMDITLFJNUBOCXLMRQCMOVFEJQXPZSNWYYLDSQHVCQPMQDWPSGXNVVLRCRDUTHGIOLDMZBSEBJO");
    tmp_tmp_msg_0_0.type = 198U;
    tmp_tmp_msg_0_0.access = 31U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VLRJIWAYHRUVTRHALRFXCGLJKDJWPBIRFHIZPYKNCEDCPAPPGLZGMDBJWMJQGSOZHKEWBOFDNLPOSNMPVQRABOFWSQCSMZCYGETOUXLYFKYXGRJMXDSUJYOBOMNSPFZDQBGYKIEWEDRHCGHHUDSVLEZFBCXZQAKMHKMSRZGQXBTTZFJWTXVBLVINXFIXUQTCNYSEGTNZIBKWYADNQPOQREKQAAYJECAAEVTIIVUHDVUWNPIMTOL");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LZLDUUYPTHLAYPFHSCURDPQWNLMFVSNVRBDGJXBMTOMCPWVXCASZTZPMYKFBHEHUSHWGDZZISYOLOFKGQXSAZAFRDSNSKVXTOWRVGRAKJQVNPEJIUFQDDGWGLUEQSAMLAEHINEXHOZW");
    IMC::Launch tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 33264U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5460916127288181;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.786616607239297;
    tmp_tmp_tmp_msg_0_1_0.z = 0.017112913265971752;
    tmp_tmp_tmp_msg_0_1_0.z_units = 209U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.3996287389330364;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 78U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OVZMLCBLHASPENOCLWBMJXTOEGFWOPGVQFPNDBJMVIWLDHIESZPAUZGYHRYFFZNKEGUJSXOYIUSHWUFGLGOPTJZONGTWKCZTQMQZPPNMHFRNDUNZPJFQKWYDKRDYHXXHNQAQFUHLRBCWUYYOIIJZEBICHSYQXABNIWEVTIPDVSCAVQTEDIDUOMTRRQSETKUBGYMIDHAKEKWLJMMLAZJSVLMOCSBAGQFVTRBRA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.8713819375905073);
    msg.setSource(46821U);
    msg.setSourceEntity(26U);
    msg.setDestination(65031U);
    msg.setDestinationEntity(38U);
    msg.state = 98U;
    msg.plan_id.assign("URXIUTBXEWTGCXDCTGLBKESHJPMYJCPUDLMDVHXOSKLMDREGRINOZNNWUETCJZKUASRSDEUVCLFCZPYNZBQSRAZSDPAHKNPQBGSXTLLKLTURCXVBJKOZQQFJVONMWBBMLXYHHOBIGFIRIWAPFNIDYQKUJZHTDGCQKCMFLQAOHOSEFNGBQXRAILTWEIYHARDREFGPFVWVWGIOHPTUZWPXAJWNVEAQMXPYFKMFQVBEYIVNVWCMZSJ");
    msg.comm_level = 227U;

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
    msg.setTimeStamp(0.3628426269625631);
    msg.setSource(31480U);
    msg.setSourceEntity(138U);
    msg.setDestination(46702U);
    msg.setDestinationEntity(26U);
    msg.state = 99U;
    msg.plan_id.assign("DIWMSSNAIBGIJRQYNOGRTTJSKNBYVEIKTIWRJLEAHNYVEPFXBLZBHZGORPXYNZQOITKPYKVLJTCCXCMMXZCVXUNHVAIFESMFLSDHDWGVPKAMUFYRSFURNOWPBAUTEDSIYPGQVQXPTFZFFFYEHSZVZQLFARHDYABXMKCMNQVNDOOGLJXTEWJKKXKLRHQDKPUJBCHTJQPLWUWCIVJMUSGWWMABGQUDBZATRGEUSULZOOMORQLYGDCACDCEZWPE");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.7638448144740838);
    msg.setSource(53270U);
    msg.setSourceEntity(172U);
    msg.setDestination(60777U);
    msg.setDestinationEntity(241U);
    msg.state = 62U;
    msg.plan_id.assign("XFBJQIBAYRYVHGRVBKILNDSGKTSDIAULALFVMNTBNHIOWJCZPYRSDJFNGTXKBQXGKZQOOIIMPDUOFCEWJEXEGJQNAQWPNPRUGTWVVOPZVWCXVJSSHGPZ");
    msg.comm_level = 109U;

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
    msg.setTimeStamp(0.4963088202291982);
    msg.setSource(29151U);
    msg.setSourceEntity(137U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(21U);
    msg.type = 129U;
    msg.op = 120U;
    msg.request_id = 47679U;
    msg.plan_id.assign("QBUANCJNXHHBRNIBPCQLQJRONAHNMMGEYYHCQSRSXYCBWXMDXEUDQXWDGRVUGOMJORJAFTZFGODIALZDPNJHEVLDSDFSDURKPYTGLBNTAEXGJJZFSSLIUCMTULVIFASSXPHWQHZMSNWZFWPPVCALODJTZZENV");
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("EQBJLLBBQJLMOCOKJBCYDTCNUDZQ");
    tmp_msg_0.value = 187U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QUCXLOGCZFLTNXPNVLEDQVNJHLZWUSZPDYBKSROXDIEWFDZJQCWHKUFYJWNCOIEPCDJFKKDRBWYEYICRPYFNXDUTSLGBMSKKYG");

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
    msg.setTimeStamp(0.6036295991283503);
    msg.setSource(14204U);
    msg.setSourceEntity(224U);
    msg.setDestination(27334U);
    msg.setDestinationEntity(240U);
    msg.type = 111U;
    msg.op = 20U;
    msg.request_id = 7919U;
    msg.plan_id.assign("BJFXUWOPXVUTIWLPWILARALRJOXMDKFLNJAHTZMPLZMMOUFBPICDWWEOGIFQRYVNXCCSAUJVSCUUGRRARFWKYQGDGOC");
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 25260U;
    tmp_msg_0.status = 122U;
    tmp_msg_0.info.assign("CQELTWCQDWCEJLSONPZYIFTPIOAXHMZFDPUGMLKWDXDJLARECMJHUPEGIGTZUJKHBIANSNUOKCXHWXBTYANLVOTANGBCKZWRDVFXAXFQXNWKBHISWZTMOCFLFZSYENVKPPGGLFMZERSICQQAJBRRSMRHVYYYUZJBGVROEQGASSTVXUDFQHZPDMBMAGYSHXEHYKSIPVRAVPMUTBJDVOLIBOIFRNQTMULKJPZNQCGER");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SSQJTZBCIBHEQBXAJULFOAKKKDRIXXYDOMMJEUWJCTCFPKAQLYVPNSQCVLWUKCSKFLJWOEPYRGZBYIMPLNDIYJBGMHAGPXUYRYOVWDSDGRXXF");

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
    msg.setTimeStamp(0.1671582961381317);
    msg.setSource(36883U);
    msg.setSourceEntity(158U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(136U);
    msg.type = 84U;
    msg.op = 202U;
    msg.request_id = 889U;
    msg.plan_id.assign("PMSRAFFBJHMYURJHGUBHANNZZMGZERJWCYJWQFMTSKLJIRVCLWGDYJVOATQIABFKGNRRVXBDCGBHYLBKPDPXPALGMYONNACDYMNTQYOQTPLEHETEVQGUQBQWEALUM");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("VJLXYOGGPAONXKNOXNHNJBBDLHUITELJUICBFV");
    tmp_msg_0.service_type = 143U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TDNOQOAQUBXNDCPSALICUJBLHMHQIMYQEMJGOQPVZDVOJIALFTSNVNDFAKOPPQQXWTFTCOGUHFISSZDUBVZRTSVFSPXAQVYTFVTAGGHPELQAOFWUUKKMCJPDBEGKXXNKHIKZORTFJYJCLMFASWBLGCICHWCYREPDMUCKUZBSSZILOHLGVYYXBWJBHVGAIEXWKDRNBOH");

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
    msg.setTimeStamp(0.13995016753907175);
    msg.setSource(31714U);
    msg.setSourceEntity(164U);
    msg.setDestination(45266U);
    msg.setDestinationEntity(101U);
    msg.plan_count = 10764U;
    msg.plan_size = 3016862022U;
    msg.change_time = 0.2703619205602502;
    msg.change_sid = 53455U;
    msg.change_sname.assign("HCWBUIMHKKZKNSIETODBSOXJHXMTTLJLXUMJZSYRGRQJEWBPAFLQWZSADJSDDY");
    const char tmp_msg_0[] = {-58, 87, 29, -36, -92, 0, 123, -88, 69, 51, -107, -119, -78, 77, -102, -52, -21, 40, -16, -23, -17, -47, 54, 12, -60, 6, -62, 119, 118, 85, -84, 41, -127, -85, -50, 13, -74, -80, -72, -40, -69, -114, -39, -54, -68, -83, 53, 85, -73, 71, -119, -65, -17, -32, 38, 102, -48, 24, 115, -107, -37, -108, 62, 7, -35, 36, -21, 20, -2, -21, -101, 86, -29, -34, -7, 54, -86, -70, 30, -67, 91, 44, 27, 80, -13, 126, 12, 86, -117, 37, 116, -6, 116, -2, -116, 123, 107, 45, 63, 116, -48, -69, 69, -108, 78, -99, -80, 111, 2, -19, -100, -1, -13, -19, 22, 41, -2, 47, 96, 4, -33, 56, -7, -83, -84, 23, -73, 25, 31, 8, -27, -105, -101, 19, 65, -17, -39, 91, -54, -43, -50, 81, 37, -50, 62, 95, 115, 79, 79, 17, 12, -13, -81, 74, 77, -97, -8, -125, 23, -58, 12, -89, 86, 96, 63, -90, 11, 99, 121, -127, -78, -17, 62, -37};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KTKZOBBLIDVPUAHOHFGUMNSWACBUTCWDVYIKJQMZCIQEYNJAEIBBZAUSNDSQSSMOEMGZTHGCKUPOGBJMEPEZGYVXFZXXYBSFYGLWBFJTYBIFCVQJPLETRDJKHRKZPCTRRTWUWIAVDMGORESMKHXCKECWNLZUNXFHNSAADOQJWTRFEMODFWUTKIWRVYFPGOERVGQZOVJHIQCPXZHQNCKPNYRBDPHDXXLQRIMTXYNFUXALAJULSDQSVO");
    tmp_msg_1.plan_size = 54773U;
    tmp_msg_1.change_time = 0.3457845236389938;
    tmp_msg_1.change_sid = 52681U;
    tmp_msg_1.change_sname.assign("BIBLOBDQXQGXSGTRWZHGAUNFNVOZTJKMWDBJEEAITLEFPQWTPERXGRMSLIOVBUUVREYVXUACMYJBZPRFNKCBDHRWLBZAMNRTOXOKSGKVYQOOJDSCHIZFWPWSNHDOAY");
    const char tmp_tmp_msg_1_0[] = {-91, -12, 124, -99, 13, 39, -44, 85, 28, 41, -98, -22, 89, 11, 42, -16, 46, -71, -124, 27, 96, -98, 7, -102, -109, 48, 26, 36, 48, 73, -10, 88, 34, -116, 43, 89, 0, 44, 95, -123, 55, -18, 102, 25, -96, -33, -37, 105, 45, 69, -79, 19, 113, 49, -40, -90, 26, 15, -44, 49, -104};
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
    msg.setTimeStamp(0.5499451851408127);
    msg.setSource(8467U);
    msg.setSourceEntity(194U);
    msg.setDestination(6778U);
    msg.setDestinationEntity(61U);
    msg.plan_count = 3402U;
    msg.plan_size = 1727188699U;
    msg.change_time = 0.41223989461621435;
    msg.change_sid = 63652U;
    msg.change_sname.assign("KBVOHMYLWPDAPJSOGKFIXATTFAVDOVNWNLUBXDRRAQTSJBRHDOEYNCWEDXZZQJMPIHCFJZVUPMNSVKFCJYAVQYCHIYMVEZQUVKSKSSBZAYTYSKDRGXTGJDXOIFUUHCUDFTSEORELEEBZITROMVAJPLWQLXWZHONMEEABGZIFVDQMK");
    const char tmp_msg_0[] = {-67, 71, -43, 6, -35, 112, -37, 126, 56, 103, 34, 114, -37, -7, -103, -106, 117, -50, 13, -127, -46, -62, 61, -101, -85, 95, 16, -109, 90, 64, -89, -96, -128, -116, -80, 7, -87, 59, -71, 75, -21, 108, 83, 126, 119, 30, -21, -14, -121, -10, -99, 21, 46, 34, 80, 1, -104, -10, 105, -72, -68};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.8313518978518087);
    msg.setSource(39813U);
    msg.setSourceEntity(229U);
    msg.setDestination(62455U);
    msg.setDestinationEntity(140U);
    msg.plan_count = 50471U;
    msg.plan_size = 3460505283U;
    msg.change_time = 0.22267184334616508;
    msg.change_sid = 65243U;
    msg.change_sname.assign("QLBLMPQJBDWYJGUVXWQWRDCGMISGICNEZDMLEJXHJZKPRQFJPIMN");
    const char tmp_msg_0[] = {113, 51, 100, -70, 30, 28, 26, -66, 60, 94, -9, 57, -104, 82, 118, -74, 12, 65, -50, 2, -11, -67, -84, 110, -86, -59, -4, 19, 67, 9, -83, -39, -46, -123, 23, 116, 41, -29, 89, 49, 50, 77, 0, -69, 108, 7, 111, -83, -69, 41, 59, 50, 47, 82, 35, 93, -4, -36, -7, -87, -107, -36, 14, 65, -44, 31, 114, 104, -4, -124, -47, 78, -87, 108, -103, 2, -23, 94, -17, -123, -32, -111, -52, -118, 15, 31, 84, -118, -1, 62, -119, -98, 94, -8, 88, -96, -35, -96, -44, 70, 64, 103, 43, -72, -67, 47, 91, 15, 8, 22, -92, -99, -47, 55, 93, -123, 102, 23, -8, 55, -39, -26, -3, 74, -110, -5, -101, -41, 0, 13, 13, 36, 126, 51, -72, -3, 124, 113, -99, 49, -60, -126, -58, -30, -7, -14, -2, 69, -118, -57, 103, 8, 28, 77, 61, -27, 65, -5, 121, -18, -61, 8, -64, -51, 17, -115, -127, 70, 65, 71, 28, -84, -63, -126, -31, -119, 95, -54, 17, -114, -109, -18, -62, -121, -22, 82, -62, 99, 76, 13, -111, 17, 7, 48, 4, -125, 84, 89, 101, -107, 97, -9, 59, -53, 107, 39, -47, 21, -86, 59, 116, 21, -36, -47, -107, 23, 103, -38, 25, -39, -37, 115, 48, 11};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.708754128276863);
    msg.setSource(12666U);
    msg.setSourceEntity(148U);
    msg.setDestination(52383U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("MXWRGLSEPSKQEXIBHXPUOGVKKPZYMEWZGKACAXONKKCDCTNZWOFMHFTUBSSHVFBSNLMKZGHDCZVGBRYWZRFDQPMAWTMTIDCHTQJUG");
    msg.plan_size = 56184U;
    msg.change_time = 0.16996963475967275;
    msg.change_sid = 31383U;
    msg.change_sname.assign("OJPRNUGIDQRINJPVMASZKSWHKTUKDBLAXDZYYYQFOECYXVPIKGACSJGYBSYFGEXPRKZQCIANHPXNFHRQIJAAZUMXDXLYDHYUVWKUOHTSOZDEHPUMKCAPEQVNZBKHZRHDSJCXWRBELNGWRJLSVMJOECRNVTZROOHGUBLMSFGAPDTMVKMQCFIIXXVNOLFPFJWLJWBQMYDWBWADPTWQNMSZBGCXTUMICUWZLBGYQGERAISLVKEETOETLQ");
    const char tmp_msg_0[] = {96, -115, 68, 52, -90, -12, -8, -26, 87, -63, 13, 62, 74, 107, 54, 34, 9, -120, -50, -86, -32, 111, -71, 61, -26, -51, -82, -96, -85, 116, -41, 64, -17, -108, 64, -98, 37, -112, -101, -44, 37, 34, 82, -62, -35, -45, -12, 79, 58, -64, -57, 52, -11, -14, 28, 50, 99, 105, 80, 46, -17, -44, 15, 32, 70, 9, -51, -38, 45, -53, 94, 95, -79, 71, 34, -88, 49, -71, -90, -123, -113, -109, -72, 108, -56, -117, -63, 28, -69, 104, -121, -28, 69, -12, -85, 39, 50, 116, -57, 89, -88, -125, -108, -41, -68, 50, 78, -92, -41, -111, -32, 122, -41, -12, -85, -49, -91, 93, 111, 16, -92, 38, -80, 60};
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
    msg.setTimeStamp(0.9646516798481204);
    msg.setSource(40651U);
    msg.setSourceEntity(202U);
    msg.setDestination(18071U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("THVJOUUMXAEPDBVZZQASWIUCUZRTXHYGRONHWFWPPMTGPLTXXTOICWZRAXYZDKAPOTKIJDQVXWLYKEYMBFHUWRQFCNDOCLQRITLHLQMFBSZACXVLNMRNNYIIRSPHYWVIJRNTPKGFZRHEEISJGCMTB");
    msg.plan_size = 7201U;
    msg.change_time = 0.4547621344269014;
    msg.change_sid = 3515U;
    msg.change_sname.assign("XBPTMZXPKGSWQEJLCEBXSVTGCMPLOTRVNHNYLBXYGVPENJDFPRNUYMZPIGVIQOGGRAADLQJTDQFZYWZUWMJXYEFGNFWJZPCLZMKDUHTXACEPSFQCOHFMGTQGZKIIEWFVCBEMUXHOSIKDBCKZVTRKADFACJJBOYDSTZDRSWUKVMSOMHIUALYJWQRLZHSPXRNAWBD");
    const char tmp_msg_0[] = {-39, 41, -59, -13, -11, -105, -109, -27, 99, 24, 58, 96, -38, -96, 7, -29, -42, 53, -28, -101, -47, 62, -106, 90, 107, 78, 38, -102, -5, 72, -60, 93, 77, -113, -94, 113, -33, -74, 20, -68, 94, -76, 57, 8, 4, 96, 112, -12, 30, -68, -94, -50, 19, -96, 6, -110, -19, 104, -11, 54, -52, -2, 68, -23, -55, 125, 121, -106, 24, 42, 13, 71, 124, 36, 118, -50, 8, -58, -66, -53, 77, -112, 79, -120, -78, -86, -125, -94, -90, -16, 69, -29, 30, -84, 52, 124, -37, -44, -47, 47, -83, 54, -128, 99, -106, -63, 114, 51, 117, -10, -58, -8, -98, 25, -98, -37, -65, -123, 98, -73, 10, 91, 111, 98, -70, 93, -52, -123, -82, 26, -33, 121, -29, 58, 90, 37, 55, 26, 63, -76, 11, -84, -108, -107, 78, -108, -4, -93, 80, -60, -62, -20, -106, -65, -12, 41, -19, -65, -105, 53, -4, 47, -2, 84, -109, 56, -56, 24, 25, -55, -52, 124, 124, 43, 110, 5, 91, 35, 58, -14, 115, -102, -60, 17, 98, -114, 70, -121, -74, -50, -33, 106, 1, -128, 114, -126, -70, -96, -69};
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
    msg.setTimeStamp(0.12182575952094976);
    msg.setSource(9038U);
    msg.setSourceEntity(253U);
    msg.setDestination(1922U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("HRSELDYVZTTOGSIRPAPZLNEMTTWNKGCBTZVVFHRBRWECKOLWLPAMJUYGHPJMULHRQSOOMMPMRRUSMSJDPGIYHZGNEBUXGQSYXGJFCYXITAKEBWEEJVFJPFUCZQYVAWUJXTNZOMYXZZEIWDQLEFVSYGUTOIBFDBSWULXVODILVNMQVQCKKHBNBBJDZZHASAVNAWPPKFICFXQXXQEGSCLTDKJHXLUDUQF");
    msg.plan_size = 4920U;
    msg.change_time = 0.12460063417085965;
    msg.change_sid = 17366U;
    msg.change_sname.assign("ASKQXORMCVFWXGOVDMADUYEOEBJKMTTJTIBAEETOAUHFQWSZLMHFKZRUAIIYCQCMBWTNGILNJMJKJJWDURPNRSDKYNWPGOTILBPCFSFLMZXVHWLYMIUKDNASHIZBQNPJZGBGHNHRORCSSZLOXHGEAMBXDVRKUODYVKDPLQJZEEUK");
    const char tmp_msg_0[] = {111, 108, -51, 104, -73, -111, -106, -73, 13, -125, -30, 61, -68, 92, -121, -56, 30, -3, 106, 7, -65, -29, 34, 108, -45, -102};
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
    msg.setTimeStamp(0.16076933474450794);
    msg.setSource(1621U);
    msg.setSourceEntity(25U);
    msg.setDestination(23451U);
    msg.setDestinationEntity(142U);
    msg.type = 83U;
    msg.op = 133U;
    msg.request_id = 23361U;
    msg.plan_id.assign("APPAKCPDYOFLNLXILQAKOFVFUIVVMFPKLZKTTUQEYXXCNCBWMFHDYOWELTGQUMHBDYOEAXTXXAAZWRNCCSCVGIYWYQQQHRGUOSBZLNMUTSPHSXXZMRDJHTRCJGESVTNDISTPDZFDKEZRMUQYPJWSZJWQMAQTZGGHJJNPBFWPKVBAMMWORCJDFEBKHUEZRWADHICQUIVLHIN");
    msg.flags = 56428U;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.9650695081431289;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YXIZFRMXEUZKQNJYSXRIDXUTTPHHWLALJBZBNDJXHYCVBGOQVUIFQNDXYBNQUEELGSCQZHFQEMPTWGZJGYJDPMJDAAMIGXMOQLAWUOEKWR");

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
    msg.setTimeStamp(0.43204312069973694);
    msg.setSource(19181U);
    msg.setSourceEntity(86U);
    msg.setDestination(35684U);
    msg.setDestinationEntity(153U);
    msg.type = 175U;
    msg.op = 12U;
    msg.request_id = 50950U;
    msg.plan_id.assign("XULKRMHFTCQSSBIRCGFYWJNFZTMMPWFTSGQHKWGECARPVKATHHNGEBPVAWRINRMAOALUXCNSYTCYLPXVQWXKCJKYPDXZCKIRYVUSFAJRNZSPEUZTVOOVSFLMRGDOJEGJEIWBWFDLKKWRHXCEHFKNSJBIYFWEBIIQICTPOUJXMZTAYDOULHXCGHNBSXZDZQONLALGPVDGYAIPOZQURIHJUQOEQZT");
    msg.flags = 34004U;
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 162U;
    tmp_msg_0.value = 0.08012347503263217;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XAMDDCJAKYKJFHTNWUYPMJLQSOPUFBAUZXOYEGSBBYPRIHQCVTOQUUIDTGBQRVEPISNZQSITKYVRLLIAAVPRXVCAZTILLXHEGGQBTCXN");

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
    msg.setTimeStamp(0.24720267918673466);
    msg.setSource(38383U);
    msg.setSourceEntity(133U);
    msg.setDestination(59093U);
    msg.setDestinationEntity(147U);
    msg.type = 229U;
    msg.op = 136U;
    msg.request_id = 45958U;
    msg.plan_id.assign("JJVWZJMWXCVONWJFOCMJKJGTNYZOYEAJOJEVEQXABSVXDGAHQMHYJGHATUTIGIQAPXQZLSMWYRGPVKHVLHOYCIEDXTPSDNZTJFNSHWHFFDZLPKNBBFZRRYIUKWAHUSLGGIOSANRUTQRGPAWMWUUPCKNCTLITLXTVRMRMGQCEQYZUTILMZVEPYDLUNUDACCKQYLPVL");
    msg.flags = 19764U;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("LSLQNYKGYRPZUBLMHRFTCPDEPJAXPKMBLHOZTDWXETUSWCJXDRQGWFDOIIBMQYHXCUOXJIPKCZAVECOUNVIUKIYEBHOKX");
    tmp_msg_0.type = 106U;
    tmp_msg_0.properties = 86U;
    tmp_msg_0.durations.assign("ZHUXVFQMDHARPRPJBCTFWQBTAAECHEZUAIXAHARBDVNIXWTKHCLRPESNPKQUYLRVKYJEQDSJQYZTSLVATOHDLFMBWKDKPKSMRNSWJTQOUZRUOEYJLFOKGLLYTJTIMEJCYCDOAOSZVIW");
    tmp_msg_0.distances.assign("WACZHXZCMUATXGQVMHVMSJGSFMSFKLFXUXQOKUVJUWOEDYLEQPNLGNJXWJPSUPKPHESEDYAQBRUCOAFISUDBBSWDCEGVCRAQGBUBGOBVXTEVJJRHJOZHOIGMTNIVWWYDCITPNLLIPWMTOHREERUYJDLAYIKOAKTBFFXBWLNINYXQVNJSQXZ");
    tmp_msg_0.actions.assign("CVOGTSJAEZHBSTEVHUT");
    tmp_msg_0.fuel.assign("VUWTMDQBATQAALWQMENHBCAOGGDBYVDVCWCXCYEKWZCGLVLEURPHNFNZTPUTCOF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JMVTEOBVHPJYLNSNOUKKTGXAFRKOCXHXNNVRTIFMGHUBFWFHTVAXGYYQHDIGWVLQQCSBUGHQQRCDXJAGERIICMAVWKBMYLJRSOASROCMAFJGFRLVMSBLBBWWLEQJPEXQITMIUSAMOOCYXEWYTZYQTEDOPKNFLKDUEISJANJPRHIVDOXGKZZNBJLUICPDDPGBFLXPHFCPQSWYKAUJDLDUXOPMNZWCEZWQVBKVDWENHZTFHGIZTR");

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
    msg.setTimeStamp(0.20583064455953137);
    msg.setSource(52449U);
    msg.setSourceEntity(236U);
    msg.setDestination(40423U);
    msg.setDestinationEntity(185U);
    msg.state = 87U;
    msg.plan_id.assign("MQXSRMIPVARFAFCPUAOOWRRKOWUGBOIIUPNUIPRVXTVCZRKUDHVBTCMGOEKPLNGLCAEROACUHVSTJURFAYNHYNXNDNWSECNGSKBBJWIWYJTM");
    msg.plan_eta = -402547864;
    msg.plan_progress = 0.2768521834963049;
    msg.man_id.assign("IKOXIFEJSGHQJMXTUPHYAQAGQDOATZQSFSAWWKFGCZYXYFJYBTGWFDDLZDERQBMBHEHWM");
    msg.man_type = 64738U;
    msg.man_eta = -1341184037;
    msg.last_outcome = 71U;

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
    msg.setTimeStamp(0.07544025573056712);
    msg.setSource(8186U);
    msg.setSourceEntity(117U);
    msg.setDestination(34622U);
    msg.setDestinationEntity(134U);
    msg.state = 13U;
    msg.plan_id.assign("KLIUSQKAAZFOXREVDGOQPILYPLKQKEVUSHLAFSECVH");
    msg.plan_eta = -1008094691;
    msg.plan_progress = 0.03642723778023704;
    msg.man_id.assign("XACOBLKZFRSYYJIRKWHUHXBAVCAJEIBVBDQOGJVFSSOTONZHAGLCUINZPMMDCMITBNPRQRPSWOGSKZUUIILVRPAGEKJVTGELLHKXMAAWNNQTHTFBLQCFZUUWYHDCDFICDUAOSDEKQIRBLWONZQVKERICXCPTMJYETRVZHQYYXHFQBHEBPGFZTTRFTSFASMOOGSFZJQXAGMJDPYRJJPKQNLWKYWHECUWDGEVEXIOLP");
    msg.man_type = 65466U;
    msg.man_eta = -1466848245;
    msg.last_outcome = 154U;

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
    msg.setTimeStamp(0.6871304515288572);
    msg.setSource(50664U);
    msg.setSourceEntity(154U);
    msg.setDestination(39775U);
    msg.setDestinationEntity(49U);
    msg.state = 27U;
    msg.plan_id.assign("DAPEOPUUZEIELETFKSQVHREVSLRJTSXXUVDVGUASZTDPHGWHKOSNNSGWKYADOKPGOTMWJJNPNTJVERVHOFDCKMHMJNMTCGOASURBHSCAMYKXXFYCAAYNPYRUZZCWOAWXIFZNGKCHQQYMTCDNTWSGGPIQCMBTHLFELHPKPLDOLBWKWGYOJF");
    msg.plan_eta = 1748474732;
    msg.plan_progress = 0.8871081359865003;
    msg.man_id.assign("COSQXEDXMUHVCTMYKYDFTLJCLEEDEPRBVHDQZKOYFCBJFRPBSGMRPNSQYZQJAYUSEGGPOGUDVCBEDJQIXKOAONFBNCUTJWWSSBHYJGURBQRLVMLSNXINVHMAAWYXURVTZIPICWZIGJSHGCRFARTVTPMLKLUGKDOPBENKBWRZTCXTGVYLOQIHXNKBFPTUYQEVJADAZWHIZXLWANGFPEKMPORF");
    msg.man_type = 50443U;
    msg.man_eta = 1972332730;
    msg.last_outcome = 219U;

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
    msg.setTimeStamp(0.5584908607200855);
    msg.setSource(51031U);
    msg.setSourceEntity(150U);
    msg.setDestination(41273U);
    msg.setDestinationEntity(122U);
    msg.name.assign("BPJGLLICXXLLEGZYADUKOELUFWNBDTZYTCXYZLDVNFMKFVTNPAUUCWPIHDDWYCPZCFRIBVDMJJANXOMSSAQJKRE");
    msg.value.assign("NJMJTVCHYJNHGXNKKPYYBLLEADCAXICFCPDWFBRBLUPOYOTQIRLNGVTTYGYQOJBSMCFQHHTIUXQQKAGNDUDOFJ");
    msg.type = 180U;
    msg.access = 62U;

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
    msg.setTimeStamp(0.8392867493893732);
    msg.setSource(47783U);
    msg.setSourceEntity(253U);
    msg.setDestination(6647U);
    msg.setDestinationEntity(78U);
    msg.name.assign("MHOQKNBWVZKJVEALPQXHOQRSEXS");
    msg.value.assign("WBGTDDZSZSYXUJYNGKIOJPEFMGZFXJSEYUCFAAMI");
    msg.type = 68U;
    msg.access = 54U;

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
    msg.setTimeStamp(0.7595732310899638);
    msg.setSource(28237U);
    msg.setSourceEntity(91U);
    msg.setDestination(43773U);
    msg.setDestinationEntity(119U);
    msg.name.assign("IPUJRCHIAGZYBEZSXOUFQCVCBBQFNTTUKVPKGBQWVEKDYGZNOVHBLARVDIHHQLUJRJTFQWBOCEOSUARARMJTKGLOLXXBMZLJVAQFUKEYBLZJYSPYONEYSTSJTYLQHOLICMVCGOUWCCQDPLZSNFUOPTWEVHTMNTXRBMDAWNJGRKFDUXSZZIEXXDSIHFYWENKZPRGMKMANDDIQVIXG");
    msg.value.assign("RNZXZSEVDDYKNJXTSYWAEDORRQTQIHURZWENLBUFFPCEPTWCMRMTWHNQFKZIMSWDYFPOCPADDSIHZUCWBTFJTIYHGGXQASGOJWUMBEGVARHVOSWQLNXCDFJPYBPXTXKHKKMHTFSCBYJQ");
    msg.type = 132U;
    msg.access = 177U;

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
    msg.setTimeStamp(0.9417748637716785);
    msg.setSource(60236U);
    msg.setSourceEntity(128U);
    msg.setDestination(10819U);
    msg.setDestinationEntity(135U);
    msg.cmd = 178U;
    msg.op = 41U;
    msg.plan_id.assign("ZVUWTSPNPUZEHYESHFRUYPJORBZDYFHLRTTSSWMQYMXLDJRLSXQQXBCJA");
    msg.params.assign("BTNPSUATPQTXSWNXLBIDOBWYMNFGVOGKPKXYZNHXZDCLVRK");

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
    msg.setTimeStamp(0.7602921981439137);
    msg.setSource(44322U);
    msg.setSourceEntity(216U);
    msg.setDestination(31216U);
    msg.setDestinationEntity(59U);
    msg.cmd = 191U;
    msg.op = 206U;
    msg.plan_id.assign("MVUCGIUAEDYDKBWRHLFPRGOTVRVFTXNEGQSYCJQSTZKJXSUIYAIHUZBKFSILGPNLPQNABPVZLCCSPUVKWGWZYYTQFC");
    msg.params.assign("CWTWZSNGLRFTFURURVWFGQQRAKCKMDAGHWEDFVLKGEFHNBCACPNUUVSQCXDLVCIFNFXSSQCJOJGWIWQEXRJOJPQTOAAYXSPAVKRDPRTVJQOHMLSJVERVNNMIRBGERPZYMBXEIUEQZGYBYOBDNOZZDKABHKLKVIZVHIPSAFJOYLOHGDLDNLBBWY");

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
    msg.setTimeStamp(0.856348716610634);
    msg.setSource(41630U);
    msg.setSourceEntity(243U);
    msg.setDestination(41777U);
    msg.setDestinationEntity(76U);
    msg.cmd = 216U;
    msg.op = 154U;
    msg.plan_id.assign("GJDORSTOXLWRLUWXLIFUGCLVEEKAHJDAGK");
    msg.params.assign("QBAUFOCSAWQINJYNLQIXKNMVEGFJJQNZSUSOULERZQJMB");

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
    msg.setTimeStamp(0.7589716693141371);
    msg.setSource(11845U);
    msg.setSourceEntity(45U);
    msg.setDestination(3761U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("KHKUMQBIGMKCRBLJEKHYUAZMNMJVQCZBAFHLPXAVENAPYTYPRVHREZGWLMCIBUAEMQJNEDSYBVEQNGATYBNIXIUNTBPVSIGPWLFSQIOSPAZWCZTYFEBQCFZKDGCVZFBNUKKXZISPHUSRAS");
    msg.op = 169U;
    msg.lat = 0.9901517046494134;
    msg.lon = 0.3741549506920423;
    msg.height = 0.8776820000761262;
    msg.x = 0.12014439822427103;
    msg.y = 0.79042085258451;
    msg.z = 0.6583188235358133;
    msg.phi = 0.008963822367884844;
    msg.theta = 0.3767609457807015;
    msg.psi = 0.6321969949156734;
    msg.vx = 0.4278281079939903;
    msg.vy = 0.47683345964410906;
    msg.vz = 0.13634310391239546;
    msg.p = 0.7172109233894046;
    msg.q = 0.44582994346051774;
    msg.r = 0.48425328800011713;
    msg.svx = 0.7813168936941548;
    msg.svy = 0.30370371994629364;
    msg.svz = 0.526243963843022;

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
    msg.setTimeStamp(0.7072616915645217);
    msg.setSource(16440U);
    msg.setSourceEntity(90U);
    msg.setDestination(20779U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("YRULCNWTYTSYWXYGWUTTHSJKKGSUWYMBAIZXRYKOROFGGQIJAZBIGXDLWCVDKLNRCOMPWEIXEOOFRYRSWKNZEBHQVODCAFLLLIMBFQAEMWSQJQAGXVCUCFHUFFTSMKPJMDVQOUWBENRHDYJKLHEREMCIZVQZCOVGWOAXNEHAATEGPLKPKZRPXMSPPBNFETGTTSSQDDBUPYZVZOUIUYDDVZPBNJHVZAFNPHJQCNJLDLHNMMBUVSJGAQBKFX");
    msg.op = 147U;
    msg.lat = 0.5329795298991165;
    msg.lon = 0.27516197934304176;
    msg.height = 0.6547084893832659;
    msg.x = 0.40746315872082417;
    msg.y = 0.9006530525776716;
    msg.z = 0.28858781374214115;
    msg.phi = 0.030166238996250816;
    msg.theta = 0.19151108437044306;
    msg.psi = 0.4126307567870724;
    msg.vx = 0.14312367471840148;
    msg.vy = 0.8593094673260674;
    msg.vz = 0.7737455047040633;
    msg.p = 0.4469774954330564;
    msg.q = 0.46383541488624835;
    msg.r = 0.11882216483509966;
    msg.svx = 0.21562244770879724;
    msg.svy = 0.9290097597804092;
    msg.svz = 0.43755930959059497;

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
    msg.setTimeStamp(0.7157448645315864);
    msg.setSource(6958U);
    msg.setSourceEntity(125U);
    msg.setDestination(64597U);
    msg.setDestinationEntity(161U);
    msg.group_name.assign("WVLXKPJNFLJKXVQNKFVAGZLMVAWGFHIETJYPCVMRRWCFGXAWERWXTCZLQRAQDNUSFOYZMQWUEADTHUPKKJTONRTQSHYELJDQHKXVVTBEGAUCWWLBHIKZPQOFQHAOPNUBYDJSXCFSWXOMVI");
    msg.op = 85U;
    msg.lat = 0.5581912153049343;
    msg.lon = 0.5134296748438246;
    msg.height = 0.47202372395908765;
    msg.x = 0.8227559550223803;
    msg.y = 0.8389307918530607;
    msg.z = 0.18701490143369237;
    msg.phi = 0.9818133868640715;
    msg.theta = 0.07212948705442146;
    msg.psi = 0.12616479579326856;
    msg.vx = 0.6480449787717557;
    msg.vy = 0.5292575156689864;
    msg.vz = 0.44125799666366206;
    msg.p = 0.2669070175660404;
    msg.q = 0.666292155729083;
    msg.r = 0.4818492803125707;
    msg.svx = 0.3850358556093719;
    msg.svy = 0.9712881046043904;
    msg.svz = 0.8817313059848211;

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
    msg.setTimeStamp(0.8469953153570878);
    msg.setSource(42841U);
    msg.setSourceEntity(80U);
    msg.setDestination(35435U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("VPWQKGKYSELWTHEVYKWYDRXTPZODZMIPAAMAERVWHJQGDCCUIGWTYAJASPQC");
    msg.type = 184U;
    msg.properties = 119U;
    msg.durations.assign("QFYQGFBSPCXYUHMZGABMTXVTOSJCRAEIHECTBMNMZLLIFZWIISVAWQDBXBJLBYLQMOKLAQFVEIIYRPUJSOJSDSMTZJRIXCEKPZUSXGBZUJRUSHPCNVLWFGMHXNKBONYHZQHTEDOOGVKIMJKAALYDHT");
    msg.distances.assign("IQFWCKNISRNVJHSBBKZYGQYHSLZOBETLDLVQWMBYCWHBRUIZGNOTMYKGFNGBUAOPFUDESRXJPWMVDFQCMCPSSXWCLIFOVQZZTLTEYIEMMLVFWNYOJZMLLZDAHKJIDRFAQOFACNYGMTBEXNHJVEGUZQNWCRKAGLTQULJVACXUKWESZGPTBXHHNYQEQRPTCTOIFTFJHOOJHANXURSXMXSMCI");
    msg.actions.assign("ELLSYGLNAPIUORMUVSENWEBMUPXEVBYKMSKOBKAEXTJVUCCHCMJTPWBHAEVXJEIZPLBPAWKNLKUXBAWLZJEUZPQTKGTIWNRFXSFPDBNRIYIRMJNTVNMQKWYIKOCKIDQGJPGDGHXRPQIMOUSKTAJOYNXOEFDVCDDCTATGHEGHVZWFRDOOZIFZSRBVWBZJVLSNDWVCZQUYUSHXSAGGQRTHQBMXFFTYNUMFDM");
    msg.fuel.assign("PUZKGMAXGDRAONFHQZKQGKIWSIPOAVFNYCLIPBCJESPTSAOKNHTDOZVUQAFCSLIHQDFBDWEPCBIYMSUKXATJXOMWVVZWCLZQGMHOVRFMOWEHZRNXRZEZRIJJEWXKTXWRJVCANJSDTGYFIGSPUJEIKVBULRBMV");

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
    msg.setTimeStamp(0.8629700005814501);
    msg.setSource(29198U);
    msg.setSourceEntity(78U);
    msg.setDestination(37819U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("TLHYNMCZUOZIIWFFVPPDWWKQZZJOLJDTWBFQOPINGGYGRHGEVRNUGPDRVKCXLRCOXIUUPAXTQACQCFHVDMXABNRKJBWETZFAEOHGDHKIHJAEYWNUBXTGXTBTUCWUJKEQFFOLQNLWLSVBLNVAJLLIVYPSSCZBIVBNDRMKWJROYPSZPDMMMFNKYKGQHYIZQIRTDPCOQVATAMERMEJYZUG");
    msg.type = 109U;
    msg.properties = 222U;
    msg.durations.assign("QLLRJGWMTFBQBPHVBSMPJABZOMOGKNFXXULJMDXSOWKGQAZVATDSZJPCGPLHEMVXXHNFINRWRZLHVWEAIKCNOZQCSACPTUPLVQIFBQEIWNPRDIWAJVYZTMOUSEKKZEBBYABUSHVRWOREQFSG");
    msg.distances.assign("MEJHNSNIAUZTEMRSPPUXPXBYDXFPKSQQCVJXRAMLUTHEMTHRCKGVBJSINNYAEYWKZUUDGOOOEAQGVLKIAHNTWBROLTEHDTDFOQTXZTQAHDRJDQXCZ");
    msg.actions.assign("PADIMGHJQZJNPYOLYYOIRWJVBGHKFTLSPQSZMLOLYAPKNQNAAWZOKKOIEOKULRAMIODLTYFKYWUVHHCNWCJHUGTUVFALXHHSBBMDRQXHZCMQJXSLERNRMBJWCBGTTAONWENEUXHYQFSZONFPYRMVTSDDPJBC");
    msg.fuel.assign("GOPYPAGPJBDPZDYHYEOTIOCZCSGHVIMBGACXOXAJSWSERYGSQMEXTFVAEFRHPNOUKSTAHBALFXHBLKCPGYVSZSUNNNZSILCQRUHEKKKFTCJTDIMNCRYQIWJIWRLMLCFOXTDABQVVZDBWGKIX");

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
    msg.setTimeStamp(0.7506342219933613);
    msg.setSource(64005U);
    msg.setSourceEntity(111U);
    msg.setDestination(25082U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("NESWYMAEWAGJUFEXQWISDNQMREBTLOHOLGYMBMTOGUHFREIQXCXQQUAMPRGHATDVGDIDDZRROCQKHLKBSAVTPXFVHQYCDDKGTSNRDVVPJVRFKPNSLOKMSWCHIVAEDCYUAOJHWLTKXN");
    msg.type = 162U;
    msg.properties = 33U;
    msg.durations.assign("JKBMRBURBXTIUOWJLZZEWGSDZSPWDRRMUTTNKEWAHYJWTGGTYACIBZRQHMNIIZQGYYKESVZYAVZEETUVYXFGWKRVOHQQBFFYWFLXCAWQCLBLJUFKEOFSXLPHBYMVSIVMSPMMCOQSNXXZXXNBIMEMDKADNBTDIOUENASNAKXP");
    msg.distances.assign("TGQVJIWYCEQXFJGWUUGJNIARVTPBRFPKCOCDEOLLYKAEIIMWRXFUXCHLEVTZMOMWGRNXYNGFLATHIEYGWRVXLFAIMUK");
    msg.actions.assign("EMROWUQVIZZOJXWUSPNNZHLHPFWFQGTIGFZTJCYLOLAFYHSCPHYABNDXGSJJHCHFJHGXPFWMNTUMVQONSCTNVKAECSAUAIMVAHGLAJFGSGBFXYKUWYQMFPXVLOGLCWTWYKCBBBAUDQEHDDIIRSMAUDXUQHBQMPXLSP");
    msg.fuel.assign("PRWKCGMWNSPJRINIHYUXDKFISJTZDFUTMHLTTTUVFWTLOAVXHYCYITICBGOXXXZAAIRURNGMPQYPEQDGYXVXFUHQJAYFTCAIZ");

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
    msg.setTimeStamp(0.29578738566309626);
    msg.setSource(48738U);
    msg.setSourceEntity(165U);
    msg.setDestination(59964U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.3542831833042739;
    msg.lon = 0.18890247779602465;
    msg.depth = 0.43935389554691096;
    msg.roll = 0.0659810684145884;
    msg.pitch = 0.19091274926600144;
    msg.yaw = 0.9388087639340174;
    msg.rcp_time = 0.09620007737964775;
    msg.sid.assign("ZOYUJQEZHWAJQJNMWXADPCBMWXDEGBILRFWKHJATOQNRGTOXIWYNABZMVRACHNMCZFQAGDFFSYSGXPGRUUBSIHJPOHWWQSLTPYOYEPIJPQKNEECTIUAYWQBXGNSOFVKYXBMECOFUEIBRZZKJDACBOCSYJUFRPKHRXMVPGLVDWAKTMBIYTIIMLUIZQDXVFGVSJOBFDMNANTULKOLNQCVYRTWJHDLGSVPRVUVCXPETEZHEFZKUDLRCDSL");
    msg.s_type = 42U;

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
    msg.setTimeStamp(0.29545467225319655);
    msg.setSource(43433U);
    msg.setSourceEntity(63U);
    msg.setDestination(7084U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.5828011329498248;
    msg.lon = 0.054376267612537;
    msg.depth = 0.22730660806635816;
    msg.roll = 0.7768279718086674;
    msg.pitch = 0.6831777901199642;
    msg.yaw = 0.4510721217027952;
    msg.rcp_time = 0.6377729005980143;
    msg.sid.assign("MWHEKAYNZDRUZMRWFRHITYOMW");
    msg.s_type = 104U;

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
    msg.setTimeStamp(0.9007530126252311);
    msg.setSource(1161U);
    msg.setSourceEntity(153U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.4031563497881595;
    msg.lon = 0.3058954838544151;
    msg.depth = 0.04337956178053615;
    msg.roll = 0.9616959373680719;
    msg.pitch = 0.35611921900445576;
    msg.yaw = 0.3899296929985514;
    msg.rcp_time = 0.7315142424074373;
    msg.sid.assign("NFCPXGUWNIBESVOAQFZVKDWXPGBSBKLGNITAZSGOKVHYTEAOWCOUWIGLXQDZXJLOUJQNOIBLREBYYGTZQYKKZLECUYPRCYORSEITWCADJYOLGLHPGOSNRRVAYZMVTAYBDQQPSTRDBCDXKUEM");
    msg.s_type = 26U;

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
    msg.setTimeStamp(0.9465775045665981);
    msg.setSource(45207U);
    msg.setSourceEntity(131U);
    msg.setDestination(600U);
    msg.setDestinationEntity(119U);
    msg.id.assign("GTGFUEWCGSXWKVVKQHTIOJHDHZEWUPMSFJSOEZJUQLLAJXBXUOWAEIILMIRBFCISAPKZGSOMXAZM");
    msg.sensor_class.assign("MHJRBOYVAJZXBEAXRAUUMJLABVAZCVBECAYQGFDICFRMEHEUTLTBNBUSLKRNKJVJHQYZFGWYAJKXKFKPEOSMNTCIKSXYIRNGIECNPSXJOFPHUXYCYVNXGXGZNBRZDYTRKLFTOWBMDQLCWZN");
    msg.lat = 0.36243338019344085;
    msg.lon = 0.9127354924734057;
    msg.alt = 0.677164722293095;
    msg.heading = 0.34986693073422814;
    msg.data.assign("ZQQADIYXUIEDPPSIJWIDZLYTWKKYIDEPOGNPSORNWSQMOBZHYCJUJSHYAYPHXXRVMLTMWNWGJENGCHVHQYKJUJDGJVAVBZSREPOSVUIWWVBLJEHDKITZOILBXXANTLHCKCPAFAJDKFXQXCYUYFLZUTCFFMXZMEAEYNFBBOMLVPCKJPQQKECRNQIPRD");

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
    msg.setTimeStamp(0.3860432884151932);
    msg.setSource(58554U);
    msg.setSourceEntity(207U);
    msg.setDestination(15512U);
    msg.setDestinationEntity(34U);
    msg.id.assign("XUGPESLEWOYSFOJXTNLCLQRWHPNNYPNHOMUMKTDJZZRBNJGTXLFRCIMYTMDRWZCSSHFWPLWTTUEZOXAUKOIKUIZNHIDISZEXPGGULIVZRLBYCYWWRFQXRUNDFAZAQGOVSTQVMMPBYLRKMNLUAAFJTJYMKPQVIGAO");
    msg.sensor_class.assign("ZRSTXUDJSVKVLCEKNIDBMRZUSWASJDPJFGXLOVDXEJNZUCCALZNBMRHULGVZCTUIOQZASHMGVPLKEHTPCAAMHTOEGCXELVOGDRFZTYXMRHQPEOARKGSRUFNZPEGWWBIUJLMTV");
    msg.lat = 0.571669074362968;
    msg.lon = 0.4527158922446929;
    msg.alt = 0.8581958803560965;
    msg.heading = 0.1061954738854004;
    msg.data.assign("LAURPZZSAFQZRDLEBLHEQFDNDBNOMZFQCNGFZBQTANKDUKIFGXF");

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
    msg.setTimeStamp(0.8056308468683162);
    msg.setSource(39086U);
    msg.setSourceEntity(245U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(86U);
    msg.id.assign("BUZKDNTOXZCNSCXISWBWSJHTSUDINLRPEMDJZGWGSXNVKGAEKPTJMXAJAMGFUZPGYUCCPORIGWUBVYRUKABIHTVVEPYPBCWYHOFLLNOWQUQIDTLQEDJIBEJNRKEFPWLVMKMFRGCQYLNAHRYKPVZLQASMDLKZVJORMZFOVHGURHJEYEYVDEXFWMBTOAQHJXSDBFZBYPBXFCSNYIQAWLHMQNWOIAMUQXOUNJCGKEFTGCHOFQ");
    msg.sensor_class.assign("UGBNRMIXXYTTZFNWREMYKVFURMSIDPYAQCPOCEWDRSBOIXJAKWZHBOVPPRCZGLRSUGEVEUODCCWQGUIJUYFHQCMQGXIATKQNCDUEDKLFEGZKBMQTBABVJTNTSUWXEZGVAYBWHCRZNLSMVVQHYAVFODJELGOKISOLLHDEUPKX");
    msg.lat = 0.6159944369975285;
    msg.lon = 0.22789280429305803;
    msg.alt = 0.2337225111130241;
    msg.heading = 0.9502065975355796;
    msg.data.assign("SUKAPWKQUOFBTAJFGLTARAIOVL");

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
    msg.setTimeStamp(0.42380792109559917);
    msg.setSource(20656U);
    msg.setSourceEntity(102U);
    msg.setDestination(24340U);
    msg.setDestinationEntity(225U);
    msg.id.assign("WFBYSIRKJTJUGKRFOKACMQZNFVENUDJBJPLIJQUROEHNUDNIEWWSFPCPHUHPCOABVQOZIZBPHFTJBGAJXUYUGXLVOICFRVIOYCEGMPBAMQGXZTEHNRVWMSZVZQHHRPGOGBCQADXTRKEUZXAYLXWYXVKWJZ");

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
    msg.setTimeStamp(0.6065976263699429);
    msg.setSource(25766U);
    msg.setSourceEntity(90U);
    msg.setDestination(24998U);
    msg.setDestinationEntity(138U);
    msg.id.assign("SXWHPMEMMGXCOSSWNLBWJABYRXGHDAUDLRXRQBRRLMXAQTWTWYEYZNHGHLABQYOMJCVTAMAXZXGPODBSNIUDDZWQIJRAHQISOKPPKHDYUVURYOFUAWGMVWUCGFBOBNNCTJYPSNLBFQSPVMUD");

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
    msg.setTimeStamp(0.7730583106246237);
    msg.setSource(38607U);
    msg.setSourceEntity(231U);
    msg.setDestination(31447U);
    msg.setDestinationEntity(71U);
    msg.id.assign("TFPRQDHDSPPEAEAHRAWEXAHCKMEMNYYFJITSLMEOLJIZBBBIUOJKUUTTCCXFSRWZTSDXQSLPZGBSYCDNCLWKOFWQSFCWWBGTLTRXYIOCGHRPXFHUYAIUNZNLGOBTRPGZNT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CTGDHIBJKZIMFHFCYLFBQBNZDOEWESBONETKUWIXVAJMJHFORRFFPBXWDQFAISEDSTXKPHZQQTYVOKJGOSILQTNVUWINXEZWBALPMPUSYQQVVSZKHUMRHGMCLSDIDNSYTGAYQKATNOLMPXTCITYMNVXZIWAPGDAFECBWOPOMSJNZZNAEPXGRULHDQWHBHJLLKYEPKERAUCRGCLCDYWUOVQOXBMXEWGGUBGDJFRRCAZJVLRPHMJYINKTV");
    tmp_msg_0.feature_type = 240U;
    tmp_msg_0.rgb_red = 240U;
    tmp_msg_0.rgb_green = 170U;
    tmp_msg_0.rgb_blue = 77U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5111648200723008;
    tmp_tmp_msg_0_0.lon = 0.9830267633852793;
    tmp_tmp_msg_0_0.alt = 0.056808961220648824;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9656976021643253);
    msg.setSource(4178U);
    msg.setSourceEntity(108U);
    msg.setDestination(31104U);
    msg.setDestinationEntity(174U);
    msg.id.assign("ATEZTRBDQDLYPDWXSMDTXEEASYGWCALPFKIYNUWAMHOYKMJDBPTZKOBWFUYKJPLMASAVCRJNQVRNQFQZRRPAKGPCBUVJSMTXKHSSZCEJCKHPXFZTQLQHRUNTGGUVTEZMLOHIWEJDLHNBQBFINBOVCRBFCFLDDWRIQGCPIHZZXRMIVUOFBEYDLJGZSVOOXTWXHLPYCRODHMBIITFWYYVEYPVJGWSFAONXNMXIMSUVZIEJEKA");
    msg.feature_type = 172U;
    msg.rgb_red = 135U;
    msg.rgb_green = 77U;
    msg.rgb_blue = 153U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1934549740756738;
    tmp_msg_0.lon = 0.13924806571340853;
    tmp_msg_0.alt = 0.2883902283188824;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8106955666304375);
    msg.setSource(15638U);
    msg.setSourceEntity(184U);
    msg.setDestination(59128U);
    msg.setDestinationEntity(243U);
    msg.id.assign("RUTGTAAZPLPCHYKNLVTXOUEKBYWMKAAELNUVECWGXWXEWWQVJBKZTOYMBYRNXGKVDBNKVPMSYIVMJCKPQSMAEIJBHYPDUUBCQVNACJSHHHCRLICDRMGHGYTXPUFSDOKZVZIQLKOMSGZWXRTHQSQFZDFVLJYCWNWBGPJXVSORFDPYLDSIUO");
    msg.feature_type = 56U;
    msg.rgb_red = 101U;
    msg.rgb_green = 222U;
    msg.rgb_blue = 178U;

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
    msg.setTimeStamp(0.6482822880325244);
    msg.setSource(45314U);
    msg.setSourceEntity(235U);
    msg.setDestination(8067U);
    msg.setDestinationEntity(29U);
    msg.id.assign("SANXKKSYFNRLBALJIPJHUCOAWILCENPEQJGJUXZUQQFBFMJDDIVRLZZWGWRMKRTYMOKMUHYNZEMXWBKOWBBHPKYFHCQLTNVOBPFICQUKJMZKNGXYQTGSSAAPBFXYTTNRHDAHNVGIPCRVAAEKSHH");
    msg.feature_type = 222U;
    msg.rgb_red = 28U;
    msg.rgb_green = 101U;
    msg.rgb_blue = 164U;

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
    msg.setTimeStamp(0.7971830650449125);
    msg.setSource(50934U);
    msg.setSourceEntity(211U);
    msg.setDestination(62254U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.03312606337175483;
    msg.lon = 0.8359258651877467;
    msg.alt = 0.6891405709663525;

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
    msg.setTimeStamp(0.703227418406056);
    msg.setSource(28597U);
    msg.setSourceEntity(138U);
    msg.setDestination(15401U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.45025092281168944;
    msg.lon = 0.21432845405070755;
    msg.alt = 0.547644397814516;

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
    msg.setTimeStamp(0.4895002731784057);
    msg.setSource(56239U);
    msg.setSourceEntity(211U);
    msg.setDestination(31346U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.753494673681602;
    msg.lon = 0.5580664039786215;
    msg.alt = 0.5309082656842569;

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
    msg.setTimeStamp(0.3810342898754152);
    msg.setSource(12133U);
    msg.setSourceEntity(134U);
    msg.setDestination(49773U);
    msg.setDestinationEntity(219U);
    msg.type = 36U;
    msg.id.assign("LYDTSQIOCTNMVEBKBZVSCSLELRPOFQAMDRACWLSJKAOMXWOQFORTLJOPXNDZUCWOJVGNKMDZGYIYYGBIEJLKQBBKNIISQZCFDJTEJEBQVLXFWP");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 5U;
    tmp_msg_0.request_id = 54659U;
    tmp_msg_0.command = 175U;
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6197041146901392;
    tmp_tmp_msg_0_0.lon = 0.4141916540935172;
    tmp_tmp_msg_0_0.z = 0.4544114742165717;
    tmp_tmp_msg_0_0.z_units = 198U;
    tmp_tmp_msg_0_0.speed = 0.033790575837279846;
    tmp_tmp_msg_0_0.speed_units = 51U;
    tmp_tmp_msg_0_0.custom.assign("IPCJJAAVZQVHJPLDOCURXKLNERUZMCEAUZQLMTGXHBHKYYGAJZIMFIWPQQMWUPJETWXJISVPPNGDWPHUYIYYOLTHXRFAMJXHOFBEAASCWKBPVQNKBXBMJQCRIKQSALTHBNMBUTDGRBFKZDCTRXZGPESSVFQJNQJVE");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 41394U;
    tmp_msg_0.info.assign("SONWAHXRPRSUOWWJJBHGXKAAVERHIEYDZVBNIPQGQRNOPKNHZNKJWSIXGRTYAGCZLBJUEVEBRUDJQTUFRUTQGXHSYMJVPBBAJLHSOFLTBO");
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
    msg.setTimeStamp(0.7955576062315667);
    msg.setSource(47114U);
    msg.setSourceEntity(148U);
    msg.setDestination(27741U);
    msg.setDestinationEntity(60U);
    msg.type = 8U;
    msg.id.assign("KEHPZCJSCQBBIZOOMXOYPCGLTCNEEOLULFSVDPUXZBDMALQVTIOBHDKKYEVSWTMITFYIGSBVVNZUSQWXMEJJGYEJFRGABAGVJKZRBSVNTDXWNKXAIICENYTXSUGJSCQLUOMRXZUCTPDGARHJCKZVMKHMPDCREBFUWIWNPYJLOZBBPNKUAPZWIWYDULLYATFWVXHAKDICHYLVGYHJUOMQQRRAPDSPQNFFFELMR");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2742049902U;
    tmp_msg_0.value = 68U;
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
    msg.setTimeStamp(0.048288304679106386);
    msg.setSource(15119U);
    msg.setSourceEntity(32U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(117U);
    msg.type = 40U;
    msg.id.assign("BUCQNIPVRQHZWFLJDFFXJXMLUDYXFRPGWIWBANKHRSGVIOOUZXEKHJCTBZEOBWMBABYOIWUKOBREQZGDGNDWLDNBPHOEZUHQULUHYVMGYCCMCLUAAKDGJVXVXJWZZGFCGLVTKRSMTAHEASYVDSRSHYNMMQINYTUEPERILPMCSTFLIGXYTHJSESKMAKFPYOTJYACQSMWS");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.8503549110650943;
    tmp_msg_0.phi = 0.45903749456281906;
    tmp_msg_0.theta = 0.9484472870669454;
    tmp_msg_0.psi = 0.28190587063195804;
    tmp_msg_0.psi_magnetic = 0.32379368985532664;
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
    msg.setTimeStamp(0.31663078570556913);
    msg.setSource(785U);
    msg.setSourceEntity(166U);
    msg.setDestination(43721U);
    msg.setDestinationEntity(1U);
    msg.localname.assign("GCNKOOLIOFEKYTYJMPJNHGVJWBNUVSGOFTIEFKKADHNJNMVGAQPWTYVBLCKDICNPHMFDPQAEIRZENRVVLYZYSBAXHLESORUIODITRLJUIYJGQKUEBBOYUGCJHCSTXQTVUSTKUQQRLPDJWZDMLNBQUJHHGXZDXTKMZWZCXHANWSDYWHWMGGZAHCBKCSLZASUFMQALERPSGXAUWXXI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZKPIUOWPLWNMTDNSJSRGDQMRJUDEWYKCOTXPLSYESEZSZZHHPVXFTQIGCIYTRQQQRXJKZLECDMOQLWGJJGQEFUBNJAGAREOXVUHHIYJEQMCTKDPXELLCHNIRUTIZHNXZOPADAKOWVMLFKQUUIKLHQTPFUWXAOHBMFXPLCWIBRBVMDYTZCWVONSNWCOXAAKVMGDVMKHFUFTAXBVMYRBFNNGSLRBGRGWHCYEVEYYKTJSSODJ");
    tmp_msg_0.sys_type = 247U;
    tmp_msg_0.owner = 56297U;
    tmp_msg_0.lat = 0.3934368742355535;
    tmp_msg_0.lon = 0.9351928703062485;
    tmp_msg_0.height = 0.8384683388492387;
    tmp_msg_0.services.assign("YHBZDXADRFWCXGXEPLVSMCJUBOYPVMYZPRNFQALLPXHXDERUJWJVVMJMXIZOTPWIHGQTFYMIHVRTHIGCJ");
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
    msg.setTimeStamp(0.9903636974130539);
    msg.setSource(47958U);
    msg.setSourceEntity(225U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(83U);
    msg.localname.assign("ANGJQFIMCSELOCIRMPXIYTDWFKKRDKCDAUXZHYCEGINFJABPUXMLJSHWSKSXSGTWLQEDFBJIZDVOPZERNBENFLBBZLGGAPMKCSZJTUQUBUNJALQOT");

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
    msg.setTimeStamp(0.8553198475015777);
    msg.setSource(45925U);
    msg.setSourceEntity(58U);
    msg.setDestination(37574U);
    msg.setDestinationEntity(91U);
    msg.localname.assign("MKUUOUUXMFIRZKVKGWHKKLZDWLHEJYOCLETGFATCWGXMZKXBNJRNIJEMGJDLOAFUTCZISQIBHTTVNCFSUERCUNBJBZEQNZWNYWAJARRXUJPFLDZEBQHNAHTWVMYLEYAOWPEFDYDUGROCGESNDKIQBSS");

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
    msg.setTimeStamp(0.6529855333223532);
    msg.setSource(56806U);
    msg.setSourceEntity(254U);
    msg.setDestination(53867U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("CLIWSKMJNZRKNMCPRMIYKVZWGDKCZEIGGFIEZNGNAKMOUHXSQJHLKPFPQANOSHOXUGVZOLYJYBCUBBJDAZDJSPRLDGDSXUJJXEZERVXEUTCTQTHQAIDFRGHPMKOYNYULPOLIWEVWVMCYFF");
    msg.predicate.assign("BHNVUZSTYYHXDHINDPNVTABEFAAQQPAZPTIDGUXCYCXQRLRHAWDJSIVKZWGEJEATRNCAJEUEKJYKHW");
    msg.attributes.assign("QQIWTMGQGPBXTVPZSZVTPZJABKPFGWQMNOXRCUJCFDUERPQLRVTMUCNNACJYOVSEQCMVELHJYNNWEFMDNSPWCMANVRUBORHEHTKGGDAZFCHX");

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
    msg.setTimeStamp(0.813450268475794);
    msg.setSource(26830U);
    msg.setSourceEntity(80U);
    msg.setDestination(56285U);
    msg.setDestinationEntity(194U);
    msg.timeline.assign("ELVXTJSUPZOOWZAEKOFHASCMMKWCRPNWZVNQMLENBUHRNLASLBPEBKYQKISBSUDFRZITQPJWPJ");
    msg.predicate.assign("EZVAVLHXYJJNALTQWUSXYGBSSOKRTGHMKGTICQWSUUUWYJVEWNVFASRKYMEQTKDQZEIIUZLSROHGWJIBKDACXDSIKDEQIDWDQPMQFNXLEUFHNDOFCHRLUACBOROGBINQSVFTONBLYYGWABXZNCRDZZGRYJERMJGLOPTTFVCEHMHJXDPUOJLMCBPECGLUWAZNFWFMVXXPFYSSZ");
    msg.attributes.assign("DUAUQVIGYMLORELEVFBXJWRMGMDFPRWJNVKQWMHXYRISOBANVCKYXGQSJNDSINKVFEKYYTIQRMFUFAQDRNWBPTJYRBAGTNHSDVYMOZLLLHQRFOUIGKUIRAALLAQQKECHNWGEGCONYK");

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
    msg.setTimeStamp(0.252742212004215);
    msg.setSource(6219U);
    msg.setSourceEntity(159U);
    msg.setDestination(41911U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("EFUWZVDGGHDBCDBHPBPFJPOECJERDVKVPJRRMTVVWDKPSOGLYYKFZZQQRIQEQIDUAGIGLVXGLVMDOTXFIBITSZGAHWLCB");
    msg.predicate.assign("IRTUFQKZHFDXJVVEPZXUFQMMCNNGYPDVPRTVHDVQDMFIJ");
    msg.attributes.assign("BIGNBJMFHQRRPASJZMWJKNJQFYTEFAIOIOXJRZHMHUWXYZRRWDHQVSACYGHNUEKPOGDXEUNGBUZKYDXQXDVZVETOMIIQDTJLAATLKWCET");

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
    msg.setTimeStamp(0.8537721624835504);
    msg.setSource(30270U);
    msg.setSourceEntity(103U);
    msg.setDestination(51285U);
    msg.setDestinationEntity(2U);
    msg.command = 195U;
    msg.goal_id.assign("ZHTFMLFUPPDVYMXBCRFHCLMVLESEUJBGHWGRYLBEJCUMQJGFFJQQBOTGNDRMJIEDESCSSNPBASKWDTWCCKDEVPIJYKTUGHJSYZKDUXMIRJIYOZNFLVCZAZIDATAIQWGBRSVJRMKYZBOEKQKPWVCTUOTADXQPIOPRRPHWTLNAHWIKJAEVIZNGWHAKEQQGSYKUYHYHOBBSNRVTOMNCPLDFXNNLFXLYAQFGXXXECZDHZMOVQLAUOIXPWGUM");
    msg.goal_xml.assign("SIGQRBHJHSETFJIEFBJRITXTSFKFIWVHGKOIVJMNKPKEOMUHCBWAQVBNYWLROYDUKESBDGUWLSLUMCASDAXPXRCCFCAUQZYSQYZAUEUOUVZTV");

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
    msg.setTimeStamp(0.2068050713984787);
    msg.setSource(28658U);
    msg.setSourceEntity(104U);
    msg.setDestination(63824U);
    msg.setDestinationEntity(25U);
    msg.command = 119U;
    msg.goal_id.assign("BZEYYTUWXENDLDGIDVWBFCRPIORMVSTELMKYMHYSISWLVDKEMCGZRJSEQFTREOPVHILKHUDYYDRHQUGNSPSBOCFGLNBOKKACFOVQKWCXZQAOEBMYBMAVPNGUZQXIFNZIBRDEP");
    msg.goal_xml.assign("QKVGMAFGJZSSJXNXMNPFCPDYIUCQLLGOBYFBUZONAFPEQUWJCPTVYUGEXOMVWRNZFCNEVPHPUGBGGJTMWWIDZTKPSFDDVBRTARVLY");

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
    msg.setTimeStamp(0.7429456356829183);
    msg.setSource(53666U);
    msg.setSourceEntity(33U);
    msg.setDestination(5528U);
    msg.setDestinationEntity(138U);
    msg.command = 152U;
    msg.goal_id.assign("PQDXFZJQSWWOVVPPCHUUEXOYPNUDDVWHTYATVDEJNUX");
    msg.goal_xml.assign("BRBVOBVMYRZTHXXJNXXXZCHRYFIBRKWSGJVYKUIAAJPRRIRLEWDHCITLHMFZVPBBQIMDJLMOGISUHSQAWLXAMQACCNEWOKOGPUDSMNTRALFJKOVYTVSSHJTYCJWAC");

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
    msg.setTimeStamp(0.28590168739069943);
    msg.setSource(48455U);
    msg.setSourceEntity(194U);
    msg.setDestination(14284U);
    msg.setDestinationEntity(12U);
    msg.op = 165U;
    msg.goal_id.assign("INZDSXTIQCDJAZMRESOEMYNDEUWUFSPRKBGKHLSFTXYUYZCSGERQOHAUWDSBDPRVQAVNMUYLSYUVTAKEQLMBPNVZKDHUNOHCHWVJOVUBYZMBRXDJPOHSGIJAEVVTMRFMJSPXQNQRNLGKQFYUGRGEWBIPOTCKISLE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DTWZXLTJPPYYLFWFSFJNZVWELYUJOGQTMZNLMBQXEJRKOMBKIIUADPDCUVQWZHJUSNCKZUWNYHMLAWGINVMZBUREQSDXXCDNBUKFISFEERS");
    tmp_msg_0.predicate.assign("VHJQAXHNWVGHSARPGXVSNHNFTLTOTYZCSGJXBWRVMLWBXVOYNZSQJAZREJKZOLFJBHKVQCIWJIEQQGIQHPASREPQCBSDEKSPTTWKGNNRNERPQHDTYBWJOBGZXJVEDFDECLIY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZGKLTOQFMSCCIIMHHRWAHFUVXEDZUYONRXTCYCMWSBXWQCZMRIRHQSLPHLLATCHNPTDEPPQGGIKTYPOXXKWUGBUWEYSJAHDMBZQEBBYIPMIJFSRJZNTARDNXNNKGGQFWGFFAYZUSDWKPJVQYWDVXRVMJUQBODQTXEBCBGMFMJELELNFLIKIWDSZXP");
    tmp_tmp_msg_0_0.attr_type = 4U;
    tmp_tmp_msg_0_0.min.assign("NLSXTYXPLFCLDKPJIWHMNNFCFIRQGBBOZUFEE");
    tmp_tmp_msg_0_0.max.assign("GUUHIDGRCZFIXXIZGVLEDSLGKFHRQYNNAHYQQXKXEJRY");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.11762869850201219);
    msg.setSource(22206U);
    msg.setSourceEntity(35U);
    msg.setDestination(6598U);
    msg.setDestinationEntity(44U);
    msg.op = 52U;
    msg.goal_id.assign("QWAOZXZHFRPPRXECAQPRZYMGVIEBCLOZGKTBLLMXWNJEXYFFSDSATPRJPZWYEDKDOQMJNSTSGZPSCSLVBINGXDIWUZKNKKJVMWCDJGSUQWFIIEOYAWDKZNNUFARQIUTTJKDKHHXLRLHWTIJAHNYFRXOSOOAEYARIYCKEYMVNBEIQBZBFHEQCEFQVJAUCGPUUVBJZLNRLPKXFJTOVGCMVDMUUMRBHGPGDVXHCCSTTBVTLY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QMQHLKLIOCMECOYRPRMNZTLJPRGEBSUTEPKITRXHMNUNTLWUGXBCJKJPYHYZ");
    tmp_msg_0.predicate.assign("OBXBTLSTSKZJJEUHTQNPQIYAMNOGNHKZCI");
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
    msg.setTimeStamp(0.3681033043776518);
    msg.setSource(21813U);
    msg.setSourceEntity(8U);
    msg.setDestination(37086U);
    msg.setDestinationEntity(130U);
    msg.op = 47U;
    msg.goal_id.assign("WNGXRAPISJNLLPPVRULSSGOWCHFUDVQMOOWVUYCCITYYKPLIMKQAEXSZEGZEKCDSATWDNEAVFWGENWOVTTOZPGYVJYYTZMEMAMFSRXAAHSZBHLVXFHGWDMJSYUKJTPQRUCCXBVIFLAW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IEPBJNSYODMTTIZIFCKXQXUFNLIDBEUCHSYOARJJRDJNBBGGOPHZZNIPZAPKCHQWAWYVAWQYCJO");
    tmp_msg_0.predicate.assign("TPDJENSZXMFDMZNSEHASFBBPWNHMFIWFIVQMZOJCQGLOICGCLADBIUOZKYGIUXCHTRKTEQAKPWSKYWNDBYWRTCWPKIHEGXRHSNWACDMPSLLTRXQBXSYQJEJFUYGIORXPLUYGYQXEXHOVSDVCUANMJPVRVOHDZIDVAUTENOLPBLJDGMKVVMKLYZPWTREOKHOBLKGQXGZYSMEFIJHMQFJAB");
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
    msg.setTimeStamp(0.735583915598446);
    msg.setSource(27776U);
    msg.setSourceEntity(193U);
    msg.setDestination(61408U);
    msg.setDestinationEntity(110U);
    msg.name.assign("BENNQKWUSTYVCSMPOJZINBOVSFYHDMMGOOSGZBRYSQGQMLJAJGWLROW");
    msg.attr_type = 233U;
    msg.min.assign("VLMNHHYQWYBLHUEDEYNBEXXTIPHGEISRJWEGNXARLJCUWYQIBEZWMLRPIDKMKJKKSNVWDBZRJATGDFBXAPHBSJUFQCEPIRTDMRVPKVLYSUYCTWQZDOVWJCZYZNRCDQQUABBFNSZTXAXLLQWOOIZXOUCQENXYUEVTGNDODHMVMWSPAJNFHGCKRGTPSZRUJFVUHCGIOIXFKAGSOXIFIPBOQDZTW");
    msg.max.assign("CWOGWYXUWNOTJMCSETQDWRPJDEBSUEDVUWPGOUGUVQIALOLZTRSTIFEBFHVKSWGPIL");

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
    msg.setTimeStamp(0.6062594786337913);
    msg.setSource(22018U);
    msg.setSourceEntity(225U);
    msg.setDestination(9359U);
    msg.setDestinationEntity(125U);
    msg.name.assign("VJEIIHRPRENOBIFRBCYKDBKVMUOWUOXJGQOKGLCIFWATZDUJXBJMPLMJQRYSOTPTZZHRHJPYLGLHSUUYHFXNGCQFCWEYSSEJYNDTFCDDJRDSYWGWPMLVQZVAQZGBXATDOFEKDNBOADCFGOPCYMZKBNUAQBMXWIISNWVPGFZULHFCELKNDKFWQIPUZVKQMSCZYTAESBHHLHAAYTENTQNKXRXWRXIERTAIMQMMUZPJPGCE");
    msg.attr_type = 41U;
    msg.min.assign("XEGWHFJCHDGMURVDOWBXUYOKHRDIJKCGTYJLKPOEFRMWIXTUHFNATYSVVNINURVWLTZQECZDIYEBWJ");
    msg.max.assign("CECQFZCHJXYJMHJGYWQGLQOVGIPKALBAVZXEIAYFSWTFUNOBDAAIZMRHQPHHN");

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
    msg.setTimeStamp(0.9414815910723603);
    msg.setSource(53447U);
    msg.setSourceEntity(82U);
    msg.setDestination(50523U);
    msg.setDestinationEntity(159U);
    msg.name.assign("MCWMPLTXBHJVHKRSFMRZEJARQHYJXBZTHKWXOXOAHFGLNCQEZRHTSIWOFNEVSBQCQPEWGSWXADYNDNPIUZQCBAPUUIYHDJTRJDUXNTEVERSDASSIBENKBLUWZLNAPUGUKNZXHWGKOCFCLOJCGYRNMQRKRBDVTMII");
    msg.attr_type = 55U;
    msg.min.assign("EFLFKILMGOLBFKOCHTPHPZYLWJHQTUYPBAMKGNPJWDJIGNOHIBNNTMQVUJGVWCZUOERZZBLAQPXOWKDZRQFAFIHZRMEPSWPVBDYEPCSVVSMTWMBCRVNAUXRQIWSFXTSQIIFZGTRWKXLZXWSVCYEJQQTLNEAPNVYVCLVCXUHKLGYUGMSUHBRDAKBTRJUOKNCFJZRQHAKJD");
    msg.max.assign("WFRBHBAIBPLODZYTAQIKPMDBINWCQHPRZVIRXBEKLNUAKNOOMNDRCXDUUFBESTSPQLJYQSJGMEMLRDHYECJKTWCETORAKGJEYZFEZQQJVIOMTHOMGIGJJMHWQXYINLXDQZPJVJGSWBCRLTGTXXSBK");

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
    msg.setTimeStamp(0.08486013250382007);
    msg.setSource(4331U);
    msg.setSourceEntity(189U);
    msg.setDestination(58115U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("CXPUSEQFRIXYHMGOFPNJYQRXNHMDWEGAOFGVPFBJIRAMZZLRQAZHSJEHXPPYM");
    msg.predicate.assign("QGMJEONZUWYYDJOWEWNMXGDLKMMVFSUQCCAYVYZIMAALTYNAEJTXNTDPZOUZSBBEKIKOZNVGOKUGDUUXFBJRKWVLW");

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
    msg.setTimeStamp(0.3740448094692548);
    msg.setSource(49464U);
    msg.setSourceEntity(236U);
    msg.setDestination(1530U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("XXVQFVIYDLILYKTPEKWDSXYWLQBIKVZRDHOEPASXAUAIMZSVCYVIBUGNYNACFWOVOVWNHZGFXDNKUGPFOYOWMCALFMEEXKIXGURXLJHSUPAILGU");
    msg.predicate.assign("QHXZKGLWCWNJUXQABZAJCZSSEUXVEYMBXZZRAGYJMTHDAHDJNVBOEHTPIJDQM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HNFDYUUZQWXEMHLYODJQYRZJPJEBBNOVCSUUMEGWSTWKZIKLOHPXIVQWLKIMVTBBCXKDPKXBNYVGMFTRDUFHCAYVRKXNLAVQCYVCNYSLDSJAVHSPHTLRKCZBWQDPWMRIGANHZFQHXOOUBQPPQHTWBYGETZRERFLESSYHXCOGQYCAJUNKJKIXEDGZGMFMGNGRF");
    tmp_msg_0.attr_type = 128U;
    tmp_msg_0.min.assign("HOTWMUMWJOKZORXETBDVZWTFMLIWDOFGYVRSPOAOZQGMUFVUCXAZXRHYNLAGKUETDLWTKJFBDQZFXWQAUSKEJMQQLEGYBABUCK");
    tmp_msg_0.max.assign("ONDZJSHDKJTPCXAASUYEGEPKWMFHXRNNKKOTYQUHCINJVIZJDLYXDLZFJTCQHAGUIJVPYRHQ");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.36037761740801877);
    msg.setSource(12379U);
    msg.setSourceEntity(44U);
    msg.setDestination(35493U);
    msg.setDestinationEntity(254U);
    msg.timeline.assign("YSCBMMPDNJYJUNTPILNOCJRHFFSBGTBAFYNPJZ");
    msg.predicate.assign("QBIRBIQQGPLXPKLMGTOMPEHREONCMWNMMXFKLARVBMDGUXCKJVLPJBORPWYESDGODXBYLXGZZNHXYMKZNDACXSCYAAUZWBIDZJITTDMTORJNHEINHENLNUAFVGKFLZNIBUFVCZTSFDRAIOOEKEEKPCMRGLWPYXUCMKBRISRLSSZHVQAJWWXWFQFNEOQVVWGDV");

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
    msg.setTimeStamp(0.28717704774778186);
    msg.setSource(14717U);
    msg.setSourceEntity(186U);
    msg.setDestination(28198U);
    msg.setDestinationEntity(201U);
    msg.reactor.assign("AXIUTJEALIZHTLTAQAXYIVICPVTRFCWHRERRJHYJYJBBWOOESZUVMQQJYHVBGSONUUEORXPAMEBDLHDAFSVBBOXBCLYJHVPGPLXCWGKGPJLLADFCLQDQBCVKSZWHXFVRYOYVQKKYTSRQIQKNMMEXSZNSNWETYOSZTIIKFZDKEJDQPMRXMDZADNUFEFBIWHNOLUPCZGFFTZHQBIOVWFYKKCSJWXNWPGSAZAKCUOEJGIUGNMMRWTPGMTLMHCR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PAZEZMTLVCONJJFUDXDRIFZGQXNSXZQLGCOCTXIMDKBJCUWCXBHBGBTRJSOVFBBOVXVJHGPUVJWWBEXSRYYIUWGBPAKWKLISPUYLULFCXPQRPRKFHYLSWYTOIDAMFMEWIGWNFFMICQMGNAMYHUHFAWZ");
    tmp_msg_0.predicate.assign("CIQMIJPRDMIYNTPYOTCAAFTSJNZSBGJLVBYDSEUFNKCOHVXVGPUKSDEYAWDTLZBZJROXUNJTGD");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.026375772095085348);
    msg.setSource(57449U);
    msg.setSourceEntity(91U);
    msg.setDestination(23916U);
    msg.setDestinationEntity(134U);
    msg.reactor.assign("LKGVZRZUQJNXUQMECFAFXJEQHEEPUJSYXUIKZMGXBQNCOPSQYBLRPKVMXOQSPOIKUTOPZVFLFIOYHTUSLQHCNLIGWSDYFAKFGDNBHYPEJJWTILUYOROKPEACWIJZVFAMWDHBTCAZOQVAXHEREZGBPEVAORMUDDNRRFKSWMDCINCPWIZNBJWDDSLGABHGDNYRXKJSHYXPHUTJKISQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EXNTOGVWABTJFWSAIURKZTRHRRZSHCMXAH");
    tmp_msg_0.predicate.assign("GIUXNEOUXAVKLRS");
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
    msg.setTimeStamp(0.420535485349653);
    msg.setSource(4864U);
    msg.setSourceEntity(192U);
    msg.setDestination(15770U);
    msg.setDestinationEntity(61U);
    msg.reactor.assign("DOPXBDUWFKWWNAFBDCUSQIFFJYNSZTKWFCRMHHPEZRAHKEXMGKZIYDXXNAPWCQLNPQCZJALITYCRGQVQAZDLYJMMEDVUKOLDZJFVXJUGYBRKDQVYVRXUHHTAFYQEPONMVXBSUMFHZDMUXLKYUHETJEGOXHIWVVYTWGANSFISABCNBKMKOJCOTSLYRZO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IBVDTNNIEYZTMMKKWXMILZXQJPHGZAXJPDBALGSZQNTHUWJRTRQIQUYKAADDBSSUGMOEPFCRODPYOAKHMORUNWSNPCZUNCVHEHBTYQXFPJEVUEOZLBFA");
    tmp_msg_0.predicate.assign("TONRADOULRYFLRPUCVAMFHZNVCOGUKNODGJWFDEAFNJVGSDMOUNDALLGXFWBFC");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3978597041949372);
    msg.setSource(28702U);
    msg.setSourceEntity(18U);
    msg.setDestination(5635U);
    msg.setDestinationEntity(11U);
    msg.topic.assign("YEDBTWTXDABKYUTDPDWXLEDHJBVUKNCJGYDSCPAGLOHMPLVRKJQUCIJDRUGVBBLMLZCACWNXMJYOEMPTWHYFOSHCSGIUDLBDVKZJFMXTXGFZXFTB");
    msg.data.assign("DHNKBYXOOIAKZIEVNTMWXBCULASFMDZOZUIEZUFVGDLNGLHMQTEQQLFOGUYZKFYWITPBVYVYR");

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
    msg.setTimeStamp(0.7961240148376374);
    msg.setSource(39865U);
    msg.setSourceEntity(32U);
    msg.setDestination(50621U);
    msg.setDestinationEntity(57U);
    msg.topic.assign("LRPJGMEVYDEMYKXSNUZGFIYJSZKDCFJVZJBGZNPEZVCYAEXHVGISLTOBQBOLDUHMPKMUNZDLASKIVSFUCCOKIFWXCMHEBXYENYLNNRIBRNKTIHUNRBIAFHQVZCYXQH");
    msg.data.assign("NLOLWHYZDIMVPTQPUFECNSEYXEKQDXDPDVNKYBMJWBPYIHZTUQYGSVHFPVINVCBAFPLONRFLCRICYKTQIHABSLRHYGOXSIDPBJRFSANZJMZWAZMLTMVYWOAOZAHMKOJHOUGLEXATKICQMVDGAWPXAUKBYIQALEPOCTHQGVSWUWQSUJFIQJKGUFQEZNBTXCCJXYBJGIOTZNFXCSTRERFGXBMZOEDRKEMTSX");

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
    msg.setTimeStamp(0.21705837753565094);
    msg.setSource(40323U);
    msg.setSourceEntity(18U);
    msg.setDestination(31770U);
    msg.setDestinationEntity(208U);
    msg.topic.assign("SKPCGIILFUSFJJXLSSNMSQFNRLJCFCZMUMZKCOAAJTTKHZBXQWECEUPRNKYEZYKRJTFXGMFQRIKCDLKYAGBECALMQYJDREDAYLYZPLRNBYRWPODVCEOYGHHAQFVNZTTVFWTLAODUUBOZAUNNYGHOXIPVMNWSVWZVDETMSJKUGBILDDAKUPQOQBSPPKWUGWZCHRVIWHLQEINMHOITWVVATMXDTYHZGSORWGJEQCOX");
    msg.data.assign("RLCZQREKYWHDZGCKKYFWGSRNKWVFOJTHRSWFNQJHUZJOPZLXGHQTPNVRQCDVLXRBCIFLSKVKKJSWGEIXPAHLDU");

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
    msg.setTimeStamp(0.4260793421678215);
    msg.setSource(53329U);
    msg.setSourceEntity(201U);
    msg.setDestination(17762U);
    msg.setDestinationEntity(113U);
    msg.frameid = 139U;
    const char tmp_msg_0[] = {63, 41, -99, 113, -91, -47, -45, 26, -9, -36, 81, 97, 114, -22, 41, 23, 63, 26, 65, 125, 57, -117, 117, -20, -114, -80, -115, 96, -117, -112, 30, 119, -26, -46, 39, -32, 87, 18, 64, 20, 71, -26, 75, -111, 118, 36, -68, -81, 33, -5, 125, -20, -111, -126, 50, -120, 52, 39, 12, 57, -60, 96, -28, 70, 119, -19, 5, 62, 51, -6, 81, -27, -35, 24, 116, 53, 98, 37, -105, -89, -44, 20, -32, 84, -58, -69, 1, -82, -61, -5};
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
    msg.setTimeStamp(0.44960773651093877);
    msg.setSource(11233U);
    msg.setSourceEntity(102U);
    msg.setDestination(46733U);
    msg.setDestinationEntity(140U);
    msg.frameid = 251U;
    const char tmp_msg_0[] = {92, 64, 5, 31, -120, -95, -58, 73, 29, -68, -42, 8, -9, 15, 82, 123, -115, -120, -29, 64, -123, 22, -26, -118, -120, -14, -62, -13, 49, -93, 105, -17, 18, 95, -58, 61, 28, -64, -104, -73, 54, -84, -80, -84, -79, 99, 14, 74, 59, 16, -11, 56, -106, 49, -99, -19, 88, -25, -103, -29, 106, -73, 2, -30, 88, 32, -115, -16, -36, 99, -7, 59, 14, 118, -7, 50, 49, -85, -70, -92, 54, -17, -79, -118, 66, -51, -54, -11, 59, -21, 9, 15, -112, -125, 14, -67, 47, 19, -13, -75, -73, 117, -35, 13, 52, 15, 32, -27, 43, 28, -104, 58, 87, -38, -45, -50, -102, -3, 113, -12, -5, -39, -21};
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
    msg.setTimeStamp(0.11907926585302009);
    msg.setSource(2422U);
    msg.setSourceEntity(112U);
    msg.setDestination(47823U);
    msg.setDestinationEntity(235U);
    msg.frameid = 138U;
    const char tmp_msg_0[] = {41, -78, 88, -95, -67, -27, 96, 32, 87, 88, 16, 2, 124, 85, -76, -3, 16, 3, 123, 48, 106, -86, -27, 33, -6, 77, 28, 103, 33, -64, -1, -26, 10, 98, 79, 118, 72, 38, 54, 14, 56, -4, -118, 54, -9, 28, -107, 73, 82, 81, -91, 85, 49, 97, -39, -117, -82, 57, -45, -68, -66, 72, 123, 84, -55, -104, -30, 73, 85, -114, -41, -58, 113, -128, 28, -65, 118, 38, -111, -83, 124, 56, 23, -118, -65, 118, -65, 112, -47, 113, 74, -118, 65, 57, 116, -60, -10, -9, -34, 82, -37};
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
    msg.setTimeStamp(0.5067754144917592);
    msg.setSource(25413U);
    msg.setSourceEntity(110U);
    msg.setDestination(36597U);
    msg.setDestinationEntity(143U);
    msg.fps = 118U;
    msg.quality = 243U;
    msg.reps = 206U;
    msg.tsize = 14U;

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
    msg.setTimeStamp(0.6372605542818532);
    msg.setSource(45513U);
    msg.setSourceEntity(220U);
    msg.setDestination(4899U);
    msg.setDestinationEntity(169U);
    msg.fps = 47U;
    msg.quality = 236U;
    msg.reps = 158U;
    msg.tsize = 58U;

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
    msg.setTimeStamp(0.5752330151586612);
    msg.setSource(65125U);
    msg.setSourceEntity(88U);
    msg.setDestination(6740U);
    msg.setDestinationEntity(114U);
    msg.fps = 128U;
    msg.quality = 34U;
    msg.reps = 88U;
    msg.tsize = 227U;

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
    msg.setTimeStamp(0.5109495338382496);
    msg.setSource(2062U);
    msg.setSourceEntity(141U);
    msg.setDestination(2861U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.6334324405000726;
    msg.lon = 0.8860922847274618;
    msg.depth = 72U;
    msg.speed = 0.7376053165111003;
    msg.psi = 0.5978642332697881;

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
    msg.setTimeStamp(0.11452761656908639);
    msg.setSource(17854U);
    msg.setSourceEntity(27U);
    msg.setDestination(23938U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.34455484272654946;
    msg.lon = 0.13024546166099404;
    msg.depth = 10U;
    msg.speed = 0.4716596587843874;
    msg.psi = 0.08683522249329645;

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
    msg.setTimeStamp(0.27993886670867696);
    msg.setSource(36898U);
    msg.setSourceEntity(63U);
    msg.setDestination(44758U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.8848740941703003;
    msg.lon = 0.9176018942008178;
    msg.depth = 200U;
    msg.speed = 0.24965821437247415;
    msg.psi = 0.0021327502361661033;

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
    msg.setTimeStamp(0.22931886551948677);
    msg.setSource(17500U);
    msg.setSourceEntity(151U);
    msg.setDestination(31432U);
    msg.setDestinationEntity(205U);
    msg.label.assign("KVGFFMBZYPASGBIJYNNDTJIPHLJQNCBIVNGIVILIGARCBQCOPDRFIYLEPYAODHESWOTONCNMJOAZKCMXEUCMUEUDXYKISYRXOHCLUGFBDMFVWIWZUKHKEJYZDEURSQUSKQSZXJWCGKTHOSSALFXYZLPAZMWETEJJTFPNNRCTMWUDLSDXTNHVVXQKQRRYNECPSOPXWKXZAVXRMQGWJBMGFQQKDRLRYTHHVZHUUOZBLL");
    msg.lat = 0.8816160076784394;
    msg.lon = 0.2765318909113009;
    msg.z = 0.25990078918540394;
    msg.z_units = 148U;
    msg.cog = 0.2333273619504942;
    msg.sog = 0.5236326672807142;

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
    msg.setTimeStamp(0.1369971680939407);
    msg.setSource(17562U);
    msg.setSourceEntity(68U);
    msg.setDestination(10877U);
    msg.setDestinationEntity(101U);
    msg.label.assign("WDSIEAGCQASDNWEVDUBZAUQVOBCXXHBLUILEWPJHDYXKAHTIPFDERRAIFXNGJJOJKBMUSMKYPNRWFTQYQPRZOCTLJJPCEICMMAIIPNRNBNQVUFNMHTOYZBCDOXXLREEIDMLARULHTQVJCPVWNBFNYABHVKOYYFTRAPSBTDICGFYVWFFKWCYZQSKGYDLMHVSRUEKEHXMGTKTGQOUWUXCZKGPTZGNWOGSQZX");
    msg.lat = 0.08617342300965558;
    msg.lon = 0.23511694981161402;
    msg.z = 0.03697276230550339;
    msg.z_units = 4U;
    msg.cog = 0.9608068927456466;
    msg.sog = 0.43486266808744944;

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
    msg.setTimeStamp(0.9621943374058992);
    msg.setSource(59691U);
    msg.setSourceEntity(172U);
    msg.setDestination(39146U);
    msg.setDestinationEntity(121U);
    msg.label.assign("TQBUZCCRWBHXPSAHXAVKGLSALTYIROTDFQQGSBSWTDBNVBGEOKAVFIUXQIRKZUSIBLCAEUEMKTTZXRPZAMDSOZOMWDKHFMADKNECBTSPZRMUFCUPJUZYYNYFDLAINOTFYFORSWQPOYIKPJHEPWKUMXYHMBXRTBEVJAHVPPQPQRUWMVGGKILGLXCGGIWELCOZCSQVRNXCJKYLHHJIELHJRDWEZJFFJWNXTDLVVMEHXNWDIJDSBCOYUQOFQM");
    msg.lat = 0.6463097104704048;
    msg.lon = 0.9185791205070883;
    msg.z = 0.6356985755174663;
    msg.z_units = 15U;
    msg.cog = 0.263414112483894;
    msg.sog = 0.7014620880412452;

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
    msg.setTimeStamp(0.026369637798111523);
    msg.setSource(29095U);
    msg.setSourceEntity(83U);
    msg.setDestination(9900U);
    msg.setDestinationEntity(42U);
    msg.name.assign("JZWKIAEWEPPDOCOCJIOKIMFYKSZBZWMUDHVQYMVUFAHKCYIUJAYMEAMRJMXJSGNEWIDLXROXCJBMVTKAWVXNGJSFGAGQHXOOBMCIPGSLUTTLEEIQUYBFCRQDWAZOULIKKILZNPHYDMSGFNLVAULHPHBJSBQHN");
    msg.value.assign("DHYVWQFHNOBGFSSILWXXOZMRITOJCDXJAHDYAUWQAYGFRNQTANIVZOTVBHWNPMFWYWHVKUWPPKETSEDBACKPJUHDZJPERUMCHTJOGRCFZMPTGXAKNSRKMLOWLBYEBJPJNIUSBIKGSQTWQCETISOUGUCMYDYJDVGAGPNRRQE");

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
    msg.setTimeStamp(0.36965118366931116);
    msg.setSource(19354U);
    msg.setSourceEntity(54U);
    msg.setDestination(11821U);
    msg.setDestinationEntity(105U);
    msg.name.assign("KKVWFDNVWDXLPSNGBGVYQLZTLPIBATMQGOXWPOUQTMCDTMOZNGEAEBUWHHXMOZCQSJPEBGHOOTYLMKEVOKLRYSYRWFAIQRTCPHZTIADWCJBACPLRZMRKYHPVILPAVXUIJNFIRWNUYVEIROFYXPKHCEFDGKFKPMBXVHXDUZNZBDURWQUWYCAQDNYJSYVQFDJAJBALRASUZB");
    msg.value.assign("VFLPBWAWKEEKPWHMBBXVHCTSQTGLJKZOMSDXGYACLEYMGGSMWJWIJVEJNTZHYOBJDLGUEXFQQYZTTRNQOVDMVTUIDBHMGLXVNUBEJIGPDPMNLQXNIUNMSSOSHAYZOQCAOXENAIAKQQVJZKRBFCHLGDCRDFPHKBXKUNRXHOWDWOORVBZEFYFETGWRLPACURPPVIGYBIFCDKCPZURXFDSSWOPXUCTTRZWTZZHFUVHSRFCAQMQY");

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
    msg.setTimeStamp(0.9721254124466864);
    msg.setSource(18964U);
    msg.setSourceEntity(52U);
    msg.setDestination(28874U);
    msg.setDestinationEntity(2U);
    msg.name.assign("CTKNGDIEYXPAMHAZAHHYOUGTKEFNWLOUXMXSVMPJPQMUDHLHZBQLIHRFWECZVFIGQGZOTZEKFBNQSEFKUUMIDTFJWLWJGNDDGFSXWVUNCCRZYVWPRESYKTPIXBIAKK");
    msg.value.assign("ZFDYOFKTGEQPGVFUZVLHIDCIOXXPKLFMHSFTUULEXONMMAKYEEBONWLJYUBZBUPHMDGRHHINCATGMQURCAIFRASQITKDOFBSXSHQZEXRNIPWFVWVTJQDNOYZSDTEPGEHLBAMJBTIVJCPWXQJRUECWNKLCYCDYKMDNTQOKGKTHAPRZQNLYRSJWTYQGSSJFVOXGSYRQKJBMNPJRHABL");

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
    msg.setTimeStamp(0.7108889006283501);
    msg.setSource(2174U);
    msg.setSourceEntity(196U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(250U);
    msg.name.assign("ANHHMBRLIMEZUSLBMXPORIHKCTD");

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
    msg.setTimeStamp(0.8858420118634159);
    msg.setSource(58603U);
    msg.setSourceEntity(125U);
    msg.setDestination(16712U);
    msg.setDestinationEntity(153U);
    msg.name.assign("OALCFVGMJCFDGLJTTHZDUCJIEBKROBFDTWINXRHICSQBNTYYGNGSZKVPCJPREJCZYNWDHAZSZZLDAOHQGGSQWXHRHZROQHAMUOMBMQIBUJWJDTQLMRTLIIEKUYBKIOPRRQWCAMYVSPSWPGQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QWKWQCWDGCWPZIEURLSBJJOJL");
    tmp_msg_0.value.assign("TOPJAVWHTWHPQJTWQTYKMVEWYZOUPXJTHVHDCQGSGTUWHFDSKIGRGVBAFBPIYJSZHHEUDCVRAFKTCPIOBFCHIRVNCPSYXAMFGMGQIAZOEWNNRENULFXJLWBPICJKQYMAKGRWMZTVPDNR");
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
    msg.setTimeStamp(0.27203942811100124);
    msg.setSource(24733U);
    msg.setSourceEntity(94U);
    msg.setDestination(25159U);
    msg.setDestinationEntity(177U);
    msg.name.assign("CVKHHRMBMIRLTGBQWKACTBGONHMDMCWEVUKWWOXDTTGIYPPMSLENAFJJHUGGGMAFE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HTTJZIPTWRGCISBBASFNDCLAUXVWGRVHOMMLDTKTZKAJSLLWZNQYDEUG");
    tmp_msg_0.value.assign("LMBEQIYWJQNZFDKQMGCYRJFBUKHSTXLGVUPJMBODSVTBQVHFSQWVFBZAWEDDNNMXCQJLUAJODNNSIMYAVOGZPEOHGINHVSAIPRRONEBZIRTUKWCKLZLWCZVVKQWIXGQDKFCNEUSWDYGOMXLRLYPOJPNPRVKLHYZAAXTEHPUIYZWFHFDUPXPQBYJYMAOZRJCCSDWIHCTRCTERCLGGHXJODIAZGSBBMKBRYFLSTTW");
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
    msg.setTimeStamp(0.3656348833015146);
    msg.setSource(23426U);
    msg.setSourceEntity(137U);
    msg.setDestination(29017U);
    msg.setDestinationEntity(131U);
    msg.name.assign("IVHEKXGKYPOIGCTANNVUSZFFDWQACLKBARXAUWJOSAFLUBNXNCUEHZROYKMQZRZDEHFPMRAMIYOJXOVXHIESAMNBIVHQDQEDECUQIOMVPLYOZVJWBCPLQYOHRTTHLHJRWCBMGOCBPXXJVTHSNAUVUIPTILLTNYXPDYQEBNJWITVTUXOFRGDEKZUWNLGEGRVRSKYBSMFZJZTJWDSRJKDSTCFPKIWLN");
    msg.visibility.assign("UICAVBOJHMBSLKSPYRIOXWVDUXXDEPGVGGLLVRQRDCYLZYKZMTWDMOQUPEWFVHUHGVDPNEXDKBKAWFBEFUICRYBXJGPMATFMZWVMHXQQQYRGOETQDXNEEKHLLUHHZOKNABEBXJMJVKSMAZWMARDCXZDZQGIPAAJFBCOHJSNZSCPXUVNTIVOZISQBN");
    msg.scope.assign("DCQPYGPHATZVJDGASJTHIBPLZIGHBOFMCKXGUKZSPMMXJLMGUXNBBRARCCHQDSLCKWLMPJIWAMMKVITFXEHYODWWRFAMQYEIKQIWAIPXFVCNWSSBRZJOUWEYRLOXZOQCWUGIOLREKNEPEFAVUTMBENLOYNVRYZHJFSLXZEIWYDXTXZOJGTQZVVQDLXUZCQRTJQHSBFIFMVJCO");

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
    msg.setTimeStamp(0.623023868048453);
    msg.setSource(31891U);
    msg.setSourceEntity(245U);
    msg.setDestination(19588U);
    msg.setDestinationEntity(169U);
    msg.name.assign("QLJOHZYNXYZANCMSCCISHSDAUOMKOXWDURZOXNHJEMMXKFKKGBROFSDEQBOYVBKEJMQUFBPZMNXFHIGLECAVFQLVLEWAFTPLANTJGUKSBOVPMXVYUDRTQTGNHRUCUQDWJPNAPGTTYQPPEZZREYMWTCHR");
    msg.visibility.assign("SRXLDRCMDVIFNTTVTRFFLABFRSIYJDJEPIAXSZPPUHFRXXYAUAEZSAVJGKOHMUCXTXEOZBVIBUZMXEWDEZHAEWUGCWKKLWILPTYBHHSOPYBEDCGDNPKBLTOUCQWHGOQRSJFFNPQJKQPNHTURQYZWYYEMZLDVQHVNFINGMKPVJLKOJOCSFUQOKLHBQUCAJQ");
    msg.scope.assign("PEZNADFNUAUWXNSBMKLTLEZNBWTRMHXZIACZGUUUHZLQCEDTAIIVQWPCHOJSKXDDVSVLLVLBYXTVAZTUIVPDMAEVMYXYPYSPGYFQMJMVWUDFZKUYZNVTDKWSQLNCFBRXGIYYZCARAPSSTNABMGWPBRKBOTXVSJQDRLNOKMUCWGQJHSJALWHNXJYOCETIOEBOGOBGMTCJYJKGGFQJRFKMOUCDFQEIRPZBPIDKRIHFWLCEHRO");

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
    msg.setTimeStamp(0.4434270520960901);
    msg.setSource(28961U);
    msg.setSourceEntity(146U);
    msg.setDestination(21126U);
    msg.setDestinationEntity(26U);
    msg.name.assign("YTHHWATMKYGFWNXUBBSMONBTVHLIHQJKWPYCAAQITZILPKFUTHUDJEBFYSCLKDXSDWUDOOVCPNBSJRZPJGO");
    msg.visibility.assign("TVKWVXGSCECNZNBKNDJOGP");
    msg.scope.assign("OJEZZTTMSSZHUBBDJHDGTPIRJUFUPQWBUPHVKRDTYOJYAFWARVPMBTSUAYPGIPNJCRWQVMYBXFMLSDFWLGBNAVEPKROAXIHHJXMBUNXDIRICQZQMSYYOEEZVQGWTOGPDCBNEHDAVSLUEKGMZFJNHIMQRNGZQZFXYPCQXWLPLKTFVSIKZ");

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
    msg.setTimeStamp(0.19274863541422094);
    msg.setSource(23382U);
    msg.setSourceEntity(238U);
    msg.setDestination(17803U);
    msg.setDestinationEntity(199U);
    msg.name.assign("YCNSUMNDMDWOIRTXVBFKKXPIITMMSCGXTDNQLTTKPICPPHLGQIBPKRUGFERBEJGLVFSOHYPGZWDSYUADEAAYPQPZTJAGLZYNPVOVKNMLIIZCJWWBEMYQNARURGOBXOZEQSXOZUEHXQDRBGFLFZAQZEKJCOWCJTLJPYAGJSKYRCQYUBHFHUFLDESWJSVEYFKTNWBKXCHUWMHWILDTAWNIXBSRVUEDUXKXVRAMZQDJAMTCVMGHSHFOJNHVIFRLNZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HUACRHBYRZWVGNKDUPHTSNDXTQXNJCJJNCLERFSSAYPFUCMFHSTSLZYANFMGJJLEQQLZZSTBGSKBEQZNMLDRMORHFTJGUDZBPXHIUWEWOKHCHHBAQWDMOOIX");
    tmp_msg_0.value.assign("UNBKPVKMQGHNTTWBFDHCIXYJKWTDLYWVXXPEWLZLASGCNXYAZFHMAUAEYUPHIISISMEMQNVCCOFHPIIXQEHJXDEVEVGOFQJQLZVKWVWBGVPMTFSPFRMYCJKYTTLNBYCFDNCRBLALHZTFIHEWQULWHUMNEJOXTQISQRRBKNGUDPZGOAKCIOPMRZXNJJJLEUGBHSKZZQBSGJAAWYZGRULEROZPCDXIWUACKTAOMSSBMFOVBDYDTKSRDRONQYUXVJ");
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
    msg.setTimeStamp(0.6299050434160337);
    msg.setSource(49915U);
    msg.setSourceEntity(148U);
    msg.setDestination(49567U);
    msg.setDestinationEntity(236U);
    msg.name.assign("BKIOAOZFNERVTUNPBPDJAUZAZRHWJZWL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UOQCUFNFTQKGSADEZCHHN");
    tmp_msg_0.value.assign("IWBGXWSBCRUEBNVSQDSEWFANRBWORPYNCROHOMHKMJPMFLZTJTFNVZGZXLIDGDPFAVDZZYVXFP");
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
    msg.setTimeStamp(0.7544521418192293);
    msg.setSource(32582U);
    msg.setSourceEntity(123U);
    msg.setDestination(11811U);
    msg.setDestinationEntity(91U);
    msg.name.assign("XGDMQSWYVDQCUNHNBVIAPFABYEDBGKTATXDEABJFBWUFOZNDKIVCKSRFYHHXAMBXRHJOVVSZKUM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TWGBXUHNNJOSKYXYINRXZFHEQJSMCBSZXVUAJTTGFTWADYRMFOVBZVGASADHYTJECFEFQEOOGZTIZCDYLJQVMMRVLXJPWPRLIPHKUTBHWSVXGTQHKPFMIZIZKEHGEXZMWVAUCLSRBEIAROVOQQVTNRCASMEQNXHBFZGBBGLPNSJBLKNKIUWYLQAJDLIECYIDRUKWMJSYPRPUXUWDFCUFYDPHMKDSIVKNCNLPQTHQDCZ");
    tmp_msg_0.value.assign("OHTWEBBUCRAQLWKXDVRZXTJHWJKLJSMOVDOAEHENITCOYGWUNQPDHTISUIJLAUALERSQFRMYMKZINISSVGOPPKJGTEFELPARIWFWBMPROWVRMVQXNIBJCBYQZFMFCBBZFGMUJGSNYXYHDQFPPUBH");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8419052624700759);
    msg.setSource(43989U);
    msg.setSourceEntity(176U);
    msg.setDestination(11453U);
    msg.setDestinationEntity(212U);
    msg.name.assign("BVJCPLFHJXDBGKOPWOCIKEPIBQCTCAYKSUFRYJLSEXUGHRDABQAKLOAFNEXUQ");

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
    msg.setTimeStamp(0.7930039818918543);
    msg.setSource(65330U);
    msg.setSourceEntity(213U);
    msg.setDestination(55493U);
    msg.setDestinationEntity(222U);
    msg.name.assign("ITVLXTUYKXYMISEVLLRZDDYUABJUTQVCYZXGLSEPMYEWGPXLWJSKB");

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
    msg.setTimeStamp(0.05213463807006402);
    msg.setSource(55870U);
    msg.setSourceEntity(220U);
    msg.setDestination(25287U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JDVSABVOYAWDTSFCDIMPWYUNSZABFIJLZIJESRZETDMOGTHCXQXJUJACVQOWVXPVQDWNDTEAWELIXDGCRAAWFKJBRYFIIKOUHLSIRLPJAUNVKPMWCBPCAHYFECHMITDTWPGKYYGBBQBNMSVNVNQSELUUMZCOUDPUEYHVKUZSTKGZYXOGHMNAHMHPGXFLNFBOEIFQNZWGZHEEQPKRD");

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
    msg.setTimeStamp(0.719397607430811);
    msg.setSource(30825U);
    msg.setSourceEntity(64U);
    msg.setDestination(31871U);
    msg.setDestinationEntity(144U);
    msg.timeout = 1829260611U;

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
    msg.setTimeStamp(0.8632557109587423);
    msg.setSource(22633U);
    msg.setSourceEntity(106U);
    msg.setDestination(30890U);
    msg.setDestinationEntity(133U);
    msg.timeout = 2078044132U;

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
    msg.setTimeStamp(0.7113483649214286);
    msg.setSource(38432U);
    msg.setSourceEntity(57U);
    msg.setDestination(56803U);
    msg.setDestinationEntity(104U);
    msg.timeout = 203598878U;

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
    msg.setTimeStamp(0.8747410255697627);
    msg.setSource(57966U);
    msg.setSourceEntity(227U);
    msg.setDestination(48635U);
    msg.setDestinationEntity(204U);
    msg.sessid = 1827182262U;

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
    msg.setTimeStamp(0.9292033546382945);
    msg.setSource(17285U);
    msg.setSourceEntity(221U);
    msg.setDestination(60531U);
    msg.setDestinationEntity(50U);
    msg.sessid = 474528832U;

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
    msg.setTimeStamp(0.9594643277768327);
    msg.setSource(14203U);
    msg.setSourceEntity(15U);
    msg.setDestination(2549U);
    msg.setDestinationEntity(148U);
    msg.sessid = 1834825881U;

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
    msg.setTimeStamp(0.7176266766932777);
    msg.setSource(18060U);
    msg.setSourceEntity(32U);
    msg.setDestination(13930U);
    msg.setDestinationEntity(5U);
    msg.sessid = 1770118727U;
    msg.messages.assign("WCMLTYIFVIPUYONKYOOTHZAEALLSITWBVOQKGWPPZBZBEDEYOCVQAGYXFMOQVWPVCFHRPUDSFMNQRKZRZSSGSHREBUXAGGAEJTLIKICYXDHTEBCBOWYBGYJEYHVGXTJJDKIDLHMMAUJLUUKLFFLPIWDPRKLCQPBGJZFZZMWANN");

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
    msg.setTimeStamp(0.6109150602865265);
    msg.setSource(19418U);
    msg.setSourceEntity(155U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(177U);
    msg.sessid = 1016460598U;
    msg.messages.assign("ZRKYMPZNAQBSTVCPTHYPEDTCXJABVDPPKUHIQDHKFECZCQIVQNTMGNFXBDBALXLGITYPUOKFQJEMMRWWNBMELZTLIAGBUCQACEYWWHAKRMVLJSKOQIFWZOVRYBNZGVQUCSMONNGLMJBWSSAKUZYWFPTWKRHSONHFZXAVTMJLXRSHVUZDUGACDJYICRYFXPXGAOYJLR");

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
    msg.setTimeStamp(0.8341293284414902);
    msg.setSource(27482U);
    msg.setSourceEntity(103U);
    msg.setDestination(55916U);
    msg.setDestinationEntity(11U);
    msg.sessid = 3598443425U;
    msg.messages.assign("AKJLPEDMNIYVHGSSYVRAHJLKCBFFIDFTPMABWVCQCQXDQJVWILLAGPIWNUUYSTNUFBFTDGPEMDANKCEZ");

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
    msg.setTimeStamp(0.5018403234796225);
    msg.setSource(34771U);
    msg.setSourceEntity(249U);
    msg.setDestination(39029U);
    msg.setDestinationEntity(171U);
    msg.sessid = 4029074404U;

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
    msg.setTimeStamp(0.8160611064660982);
    msg.setSource(53158U);
    msg.setSourceEntity(108U);
    msg.setDestination(7806U);
    msg.setDestinationEntity(91U);
    msg.sessid = 374606666U;

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
    msg.setTimeStamp(0.6820603661254311);
    msg.setSource(52353U);
    msg.setSourceEntity(79U);
    msg.setDestination(24255U);
    msg.setDestinationEntity(26U);
    msg.sessid = 2655237907U;

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
    msg.setTimeStamp(0.4323577892877808);
    msg.setSource(45123U);
    msg.setSourceEntity(226U);
    msg.setDestination(39932U);
    msg.setDestinationEntity(3U);
    msg.sessid = 1929082447U;
    msg.status = 184U;

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
    msg.setTimeStamp(0.6481986311751629);
    msg.setSource(24520U);
    msg.setSourceEntity(107U);
    msg.setDestination(35131U);
    msg.setDestinationEntity(68U);
    msg.sessid = 4262212433U;
    msg.status = 61U;

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
    msg.setTimeStamp(0.8603868043723107);
    msg.setSource(60655U);
    msg.setSourceEntity(124U);
    msg.setDestination(788U);
    msg.setDestinationEntity(115U);
    msg.sessid = 2890439701U;
    msg.status = 214U;

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
    msg.setTimeStamp(0.6659884173338628);
    msg.setSource(9737U);
    msg.setSourceEntity(251U);
    msg.setDestination(27020U);
    msg.setDestinationEntity(28U);
    msg.name.assign("PDKDTNWPRTINXYEAXQSIMKHPIKLNQJFBXNRIKMORHCOHZOCCWYUMFYYBTOLLNUZBVCCISAYXXGCJRQUCGANBQBBTDFUDRPOOXKLHEHMZXOEJGBWUQIWAZJNGWTHRPJPFEIXWPSNXOEZVMHKKZGEQFCUQVFMZKVRLJLORSPDJFPQAKS");

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
    msg.setTimeStamp(0.19032933007856057);
    msg.setSource(42336U);
    msg.setSourceEntity(163U);
    msg.setDestination(10074U);
    msg.setDestinationEntity(93U);
    msg.name.assign("VYWIUNWDQLCHLLIEQSGRMXPCHXAFBMUQOJNZVDFSYFYAOXLGZVWMQGJGCHCLBQKCKBIECZNOUEZCYPHWBTMGFHSMRLOEVDRDOVDBKTCDEGTJOJXYSSVQIAKNVEFQHWXJRAYVAHMIHDWISFWXIYBBXUDAUJFZPXTZAERPFWKKLUGDRNELMZZRTIXNURYPSNZPJFAPCEJTUGUQKPWBOOMKTNDIWMAZVR");

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
    msg.setTimeStamp(0.40887124766127936);
    msg.setSource(26047U);
    msg.setSourceEntity(19U);
    msg.setDestination(44764U);
    msg.setDestinationEntity(207U);
    msg.name.assign("IYVTKUQFQHZXHINVXBCDHJJHWGQIUVYQBKASCMFONXGWPJKKGPGQSAVJXPWSTTTUOYPLOVNFLRVGEIQCSMSURTJWHRBWLUORVUBMALPHGRMMPLNGKTEDXKKEFIERFPEJLSUZEBZLAM");

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
    msg.setTimeStamp(0.44293412718134095);
    msg.setSource(20455U);
    msg.setSourceEntity(250U);
    msg.setDestination(37903U);
    msg.setDestinationEntity(229U);
    msg.name.assign("BYELJHMCZSPSNTNREUPRWZXKKYDWXGULV");

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
    msg.setTimeStamp(0.24237179114505147);
    msg.setSource(62336U);
    msg.setSourceEntity(196U);
    msg.setDestination(4981U);
    msg.setDestinationEntity(98U);
    msg.name.assign("NEABCZHPARDUJNUACKKGMWWBIFIBZFMPVIA");

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
    msg.setTimeStamp(0.32627342053845165);
    msg.setSource(7238U);
    msg.setSourceEntity(185U);
    msg.setDestination(50002U);
    msg.setDestinationEntity(40U);
    msg.name.assign("ZAQSGIIZCATEABGGCVJYBETTXXMSBDQFYPMPHAGZLWLLSVSQNMIOPQLWQZVHJWRBTWFVGFQACFKKRALDNPXFCJWHZLERQRMFXJKNOCBDNURXHDVZMYYTKYXETEJVICYIYUHTGAEREGNBPHK");

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
    msg.setTimeStamp(0.998197018982195);
    msg.setSource(25859U);
    msg.setSourceEntity(200U);
    msg.setDestination(17154U);
    msg.setDestinationEntity(44U);
    msg.type = 242U;
    msg.error.assign("JVNDFGTUWNILTMBZZLOZURFSAORQBSTXPOYWRDJHMNINHMMLSQDAGQJQTOTQRZBBJIKEPFKMHPBWERSTLSLUTQD");

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
    msg.setTimeStamp(0.07308887044863033);
    msg.setSource(6674U);
    msg.setSourceEntity(163U);
    msg.setDestination(4902U);
    msg.setDestinationEntity(209U);
    msg.type = 171U;
    msg.error.assign("ILUJCYZPNVDSCHSIIGHEYPIRZSKYAQJTECBFDBFNJUWSSQVYZDVOFMAULNUVLWKQKHLMKNBWULRIWXSPGOCSRFGWCPYWPMDOJZVZHCDBZZJWHMAKJRZFOJYPQEOZXDUNDANWMELWVHKCGHAORLTGJFGMEGETWZTXIMANTMLOGCXXQTPOHSFXBMEQYOBKXIJXPBHSRSKYRNVMBR");

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
    msg.setTimeStamp(0.9061869634483883);
    msg.setSource(50649U);
    msg.setSourceEntity(85U);
    msg.setDestination(39630U);
    msg.setDestinationEntity(119U);
    msg.type = 122U;
    msg.error.assign("JJTQELYBGIKFJNCJKULQUGOGPPWRGFQXOPKLXZMDEYIPTUOZLBWZOKJNYJBZFOFENMWJGARWJSEBUJWTGYRHATFGCUGIOHVINYZSHZWCWQNBDIKEALPDLBKKSSPHDQXNSRXMNCAPISQFRODVURZKMBMLLNACUCAFYVSBTEXWVOQFZULEHXSARTPPIWINVPVRSMQVCYZWXYFXIAAHNHDGXMOVYUHCYOEMHXTH");

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
    msg.setTimeStamp(0.13425916275345895);
    msg.setSource(45792U);
    msg.setSourceEntity(109U);
    msg.setDestination(27422U);
    msg.setDestinationEntity(183U);
    msg.seq = 6061U;
    msg.sys_dst.assign("FHIMJZMUOTUWREJOHRDJTUYANEWRRUACJNZXBDBKANNRQIBPACVFSZTXQJPZOPIKOFMIEDMWXOCGVOZFCIPHKRYWHYFIKCTXJPDVYXKJHZQGRBBZRMUKNUAUMOVZMXLYMSEGCNN");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-102, -92, 101, 6, -62, -103, -27, -95, 51, 116, -23, -27, 115, 122, -22, -61, 0, 124, -22, -74, -34, -12, -10, 111, 20, 86, 23, -22, 122, -63, 124, 67, -28, -59, -86, -64, -9, 30, -86, 21, 93, 3, 10, -54, -11, -125, 41, -71, 26, -87, -93, -78, 15, -88, 5, -31, 30, 115, -32, -51, 72, 13, -41, -126, -81, 110, -116, -107, 23, -72, 11, 58, 3, -118, -35, 99, -57, 111, 87, 102, 89, 36, 94, -24, -56, -77, -43, 57, -5, 5, -15, 22, 31, 67, 110, -122, 29, -24, -108, -128, 42, 8, 97, -87, 8, 29, 74, -78, -79, 115, -113, 104, 93, -60, 58, -26, 29, -11, -28, 98, -43, -125, 63, -22, 93, 118, 49, -45, -28, 33, -37, -10, 52, 100, -35, 47, -99, 69, 6, -92, -79, 64, -7, 105, -93, -40, -107, 20, 71, 116, 72, 123, -109, 39, 24, -14, -110, -26, -108, -116, 17, 8, -53, -71, -5, -21, 119, -102, -103, -107, 34, -82, -43, 121, -64, -125, -74, -113, -57, 94, 80, -5};
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
    msg.setTimeStamp(0.2295269557613624);
    msg.setSource(64451U);
    msg.setSourceEntity(157U);
    msg.setDestination(54366U);
    msg.setDestinationEntity(188U);
    msg.seq = 43433U;
    msg.sys_dst.assign("QYJENFASWYSUMSUCQJKZIOYABDTBBEZLWIMEPEPUFLVHGRRAXXEOXMLQNZUGZCGKYTVHOOEMCWTKVQLJJLZAFSGJIR");
    msg.flags = 173U;
    const char tmp_msg_0[] = {-71, -124, 95, 68, 40, 12, 3, 29, -36, -36, 15, -96, -41, -48, -114, -121, 41, 96, -7, 90, -40, 27, 104, 41, 39, 121, 46, 79, -79, 25, -16, 113, 114, 35, 25, 39, 27, -24, -94, 3, 94, 53, -61, -93, 5, 118, -77, -115, 122, 45, 15, -110, 10, 2, 124, 113, -37, -66, -1, -84, 117, 105, 83, 84, 111, -71, 13, -55, -65, -38, -80, 124, -21, -117, 41, 49, -103, -62, -73, 48, 87, 9, 82, 39, -125, 51, -52, 6, 64, -118, 12, -58, 36, -102, 104, 107, 68, -102, -103, -68, -117, -13, -51, 104, 81, 111, 56, 14, -112, 78, 67, -4, -6, -38, 90, -12, 22, 87, 44, -105, 33, -56, 115, 126, 83, -29, -121, -52, 7, -114, -74, 104, 20, -19, 55, -29, -50, -26, -86, -36, -28, -57, 44, 16, -88, 58, 83, 125, 64, 114, 122, -3, -87, 96, -80, -26, 56, -70, 88};
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
    msg.setTimeStamp(0.8050680913572098);
    msg.setSource(869U);
    msg.setSourceEntity(149U);
    msg.setDestination(51036U);
    msg.setDestinationEntity(106U);
    msg.seq = 8476U;
    msg.sys_dst.assign("VMRNCDEJGHAWURFPMLUNGIHFKOXQURHVFUBDSIMTKWMAPHTYKFSJSJGQMCFCKXKYAZYOVGKDWQCCHYSUXVNRSUEQUVTYEFDPBWIJBSPTNIXPAGHISOQLPBLXMQRBNLDLDOUZIDPEFXAPYXRVVWJOZTYUCXTEEWVDTJOQSEBIGZKA");
    msg.flags = 221U;
    const char tmp_msg_0[] = {-18, 99, 81, -4, -31, -127, -47, -16, 125, 44, 118, -50, 61, 91, -119, 47, 26, 103, 84, -67, 109, -122, 34, 44, 66, -118, -4, 13, 101, 48, -36, 115, -27, -68, -123, -21, 74, 34, -27, -113, -6, -29, 126, 60, 120, -54, -10, -33, 79, -85, 113, -53, -83, 25, 14, -85, 80, 8, -56, -76, -31, 61, -24, 118, 43, 50, 22, 75, 16, -54, -99, 17, 116, -115, -19, -75, 88, -3, -108, 44, -102, 17, 0, -96, 44, -53, 56, 125, -29, 87, -117, -107, 21, -65, 8, 0, 6, -106, -68, -10, -31, 64, 12, -118, 15, 18, -87, -60, 42, 83, 32, 126, -113, -16, 56, 68, -65, 22, -102, -1, -60, -21};
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
    msg.setTimeStamp(0.8031128935377883);
    msg.setSource(28077U);
    msg.setSourceEntity(51U);
    msg.setDestination(57521U);
    msg.setDestinationEntity(190U);
    msg.sys_src.assign("CKUOPHFCGVHGAVNMAOJIZGERPYRQTGWIDVNBGXTVEFRMVMHKIKWASQSLLTKCSHDLJMGFDPDXGISPTVDMUWKCYGSKGVBOAUPYSJRLLYOJWOFFUXEEHQLEWYUWJBKMZNEDDDZANQTCZDMYHOIFAXWQNCZXRTPIJCMNKQZFYRLWCGHOYJVOPSKSTYFIZZNQSBLREPFHCDUAFLBNQCBQLOBPJK");
    msg.sys_dst.assign("OUXKQEXMUCKEKONWRBTRZNSMBKBKFGQDNWNSLNXEVAYSZJLOESCHIBWALIATJGBCBDPHWWOODRQFPVEDZXFPWMMUAFEEVCWGVINBKUOYCDRYJZXUWJMSHQKPYDTQPBRJAZZNQXVLXSPZJIIUOQIBLKQLCFUCZLKHARAUGMSESXWEARDTHLPFDGGUIGYPCTQZBRFYHMVJFOGGFJSVTMVCDX");
    msg.flags = 81U;
    const char tmp_msg_0[] = {11, -26, -81, -42, 113, -20, 15, -38, -58, -36, 52, -25, 108, -113, 41, 115, 81, -97, 104, 64, -34, 47, -86, 93, 44, -14, 72, 79, 40, 35, -108, -45, -29, 26, -40, 94, 21, -73, -30, -41, -119, 49, 67, 79, -95, -89, -41, -122, 45, 45, 20, -24, 67, -65, 30, 84, -18, 9, 106, 77, -39, 125, 80, 120, -56, -28, 56, 100, -14};
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
    msg.setTimeStamp(0.8962205635770734);
    msg.setSource(5382U);
    msg.setSourceEntity(164U);
    msg.setDestination(11673U);
    msg.setDestinationEntity(38U);
    msg.sys_src.assign("UZWXIEJPKSWOLIABNNEUHFCJKKRHUIECFVGGPQJQWHGQMYFTCUUMMZPJWGNQBTSZEYJEOZXHXADQDSFWILCUTQPPQIDBMEALOTFFZ");
    msg.sys_dst.assign("KWPVXLWTVAAHDECGLROKJUJWZSMIPVCAPAKHMKALXTKHDYWPMSQHEDBXBHBQFUGJZPEINKFGBHLEGKLCZCDUDNFBDWOCGYLWXWPOPYXR");
    msg.flags = 70U;
    const char tmp_msg_0[] = {95, -13, 119, -118, -66, -128, 11, 87, 80, -101, -19, -80, 50, -59, -15, 15, -23, 58, 32, -89, -35, 86, 29, -115, 9, -122, 94, -125, -64, 27, 4, -89, -21, 92, -124, -88, 14, -5, -100, 1, 86, 7, -45, -68, -101, -88, -17, 52, -79, -32, 38, 37, -75, 29, 61, 6, 16, -15, 126, -3, -101, -62, 121, 52, 116, -11, 6, -74, 107, 44, -7, 15, -110, 97, 32, 87, -52, -16, 30, 123, -65, -40, 34, -58, 37, -64, 61, 57, -117, -23, -25, -77, -105, -104, 92, -78, 116, 84, 65, 54, -70, 22, -115, 71, -40, 118, -30, 123, 110, 81, -24, -101, 44};
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
    msg.setTimeStamp(0.9365560711035015);
    msg.setSource(26782U);
    msg.setSourceEntity(181U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(11U);
    msg.sys_src.assign("FEGGUKMLJWWLSURPDBFMVBAVLMBXDYGVQMVIWQSJX");
    msg.sys_dst.assign("SKXHKALUWIYTNCQXGOSFLEDBVVSLXVYLDJZIEVLEQOZQULKCDMYMZVRSDFRCHAHAMFATZVJRPFDSVIBJOXHIANXWKCDQDZAYRVACWWBCQUPWETBTO");
    msg.flags = 183U;
    const char tmp_msg_0[] = {-93, -61, 72, -92, 3, -40, 45, -45, -49, -99, -90, 43, -74, -13, 61, 72, 100, 43, 62, -112, 3, -98, 48, 72, 29, 93, -47, -81, -12, 98, -125};
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
    msg.setTimeStamp(0.707566368494831);
    msg.setSource(63253U);
    msg.setSourceEntity(145U);
    msg.setDestination(64510U);
    msg.setDestinationEntity(143U);
    msg.seq = 20647U;
    msg.value = 31U;
    msg.error.assign("JMQEOWWMDYEMUJAPUYEBNZHRWFVACZIVYMCLRMTIPSXCJBNNXJAMSPDJJDFVLQKKVRLDMAYVKESHZXYAXBGWEQTIKCMIGLOU");

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
    msg.setTimeStamp(0.840247749389818);
    msg.setSource(49708U);
    msg.setSourceEntity(181U);
    msg.setDestination(33690U);
    msg.setDestinationEntity(0U);
    msg.seq = 11455U;
    msg.value = 147U;
    msg.error.assign("OPLXREOFQUGONNXWWHVWOTVLQHVFXFPCESJEGALMWKMEKLYQBZBYHMAXSFUVDADFRKISYZYQASKPROJVTUCAXVWNKVUDTCVPOIMKLQEDHLUJCZHSIMEASNXJOTMKXRLCDPAGYLTCTEWHFPVZDYFIPKZJBZCQHRKCRDDWCBIXRHIIRINZOBFMNEIAVYQMBPZLRFPGUHDBYEWGMGNUSTQGBAWSNPQSGNJYWKTJYGDZEQIFOHBTBUXMJLRSJNAO");

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
    msg.setTimeStamp(0.14520530412739552);
    msg.setSource(16228U);
    msg.setSourceEntity(171U);
    msg.setDestination(45461U);
    msg.setDestinationEntity(109U);
    msg.seq = 11933U;
    msg.value = 71U;
    msg.error.assign("SLQOMIAKJGFFNDIICOKZQXYLHMWKJLWKWUDGHYZIBXCDOOQDMDNLKQEARQVXCUWCSDZMRBRPHZFNTKPTGNVRWVMSZTPLXOUUGKQFFOPEYVYSBPGSLXTJGZFCXPZOHHNWLQVSXUNRNHSBZIMYAEMCQWYCAADIOVKRITATOWSEEPILHUPQEUVLJLDCFYVEBFTZNVAMBYJTFXKNSJTAGWSVRDXREARAJUHPIDBEKEPFYCBJIOGTWMJGHQJ");

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
    msg.setTimeStamp(0.49623828582010676);
    msg.setSource(23870U);
    msg.setSourceEntity(74U);
    msg.setDestination(943U);
    msg.setDestinationEntity(44U);
    msg.seq = 11017U;
    msg.sys.assign("VCVITNRWMFQACBQVEACMXTGPUZWBSJXHKWRIBFIAPVYQHJEZUVCFSEJINRHTFZRNFTYEQYRSZHXKPJOFPNKDSNCBLLGUTNANDTOKMOQXGGPSUDVJFPAEGTLLIWOWDGNPYLIOMALHZUYQJHEAHBXCUXGTIVHXOTBSLGMYRZPSECVCZYCOFKZUDZNXVIMALNEQDFWQRBMWEKOJHLKDWYUYGAPRSMMPOJXAKQW");
    msg.value = 0.3358436554580756;

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
    msg.setTimeStamp(0.5913841633639424);
    msg.setSource(4446U);
    msg.setSourceEntity(33U);
    msg.setDestination(33619U);
    msg.setDestinationEntity(120U);
    msg.seq = 54854U;
    msg.sys.assign("HIJQEVNGXOBCQKWYWDHZITQZNHCETBZRIPZTBXTNODEGUMJBZXLGD");
    msg.value = 0.6296719849823255;

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
    msg.setTimeStamp(0.13563534028899926);
    msg.setSource(27677U);
    msg.setSourceEntity(25U);
    msg.setDestination(4090U);
    msg.setDestinationEntity(10U);
    msg.seq = 24523U;
    msg.sys.assign("MTQTCJEYMWRF");
    msg.value = 0.5754222307481679;

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
    msg.setTimeStamp(0.2730684257033351);
    msg.setSource(31695U);
    msg.setSourceEntity(105U);
    msg.setDestination(27054U);
    msg.setDestinationEntity(103U);
    msg.seq = 1928U;
    msg.sys_dst.assign("TJQEYUUKJXYXMGSTKADIMPFDJPVWEZRLOAOHWPPBREGFMYXKSMZJAZNDLKHXZRIHZXJHFGTEQLHAPFKWOJTYGZI");
    msg.timeout = 0.7211101133571842;

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
    msg.setTimeStamp(0.12908563974554044);
    msg.setSource(5692U);
    msg.setSourceEntity(124U);
    msg.setDestination(42021U);
    msg.setDestinationEntity(186U);
    msg.seq = 56155U;
    msg.sys_dst.assign("ZIRZSOKFDUYCZVPLMQXONEIGXDHGTEUJNFCFEBLMEEKBETVGJEAMQSLTVWJMYPAJZCOHPOWDSVJYNPNXJSRRNSWFCBQIGOCOXYLYPSAYTVTFZUKFOJMJEUEDFMVWBLLRDTHDWNUZQPQGHTDJSJ");
    msg.timeout = 0.4023860519393937;

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
    msg.setTimeStamp(0.8281918835356612);
    msg.setSource(39726U);
    msg.setSourceEntity(33U);
    msg.setDestination(27683U);
    msg.setDestinationEntity(160U);
    msg.seq = 40609U;
    msg.sys_dst.assign("ZJQMRYRIADER");
    msg.timeout = 0.907010307452018;

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
    msg.setTimeStamp(0.86626677278554);
    msg.setSource(34029U);
    msg.setSourceEntity(248U);
    msg.setDestination(30927U);
    msg.setDestinationEntity(16U);
    msg.action = 213U;
    msg.longain = 0.36751313845723443;
    msg.latgain = 0.7006457665309762;
    msg.bondthick = 10181523U;
    msg.leadgain = 0.8261483260950437;
    msg.deconflgain = 0.22528379683561317;

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
    msg.setTimeStamp(0.4943283061828667);
    msg.setSource(54865U);
    msg.setSourceEntity(135U);
    msg.setDestination(16772U);
    msg.setDestinationEntity(139U);
    msg.action = 29U;
    msg.longain = 0.5563802212899768;
    msg.latgain = 0.4050783296900836;
    msg.bondthick = 3794296899U;
    msg.leadgain = 0.7926262752251384;
    msg.deconflgain = 0.4171705429805991;

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
    msg.setTimeStamp(0.8025631652035531);
    msg.setSource(58507U);
    msg.setSourceEntity(94U);
    msg.setDestination(30457U);
    msg.setDestinationEntity(31U);
    msg.action = 83U;
    msg.longain = 0.7756899107514145;
    msg.latgain = 0.07892565062306156;
    msg.bondthick = 1244808172U;
    msg.leadgain = 0.7340039035414289;
    msg.deconflgain = 0.5442866513270758;

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
    msg.setTimeStamp(0.6303928935640297);
    msg.setSource(31632U);
    msg.setSourceEntity(39U);
    msg.setDestination(41552U);
    msg.setDestinationEntity(23U);
    msg.err_mean = 0.40981979993630113;
    msg.dist_min_abs = 0.4718934208607227;
    msg.dist_min_mean = 0.3430333923589798;

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
    msg.setTimeStamp(0.5061303506249807);
    msg.setSource(16044U);
    msg.setSourceEntity(123U);
    msg.setDestination(22528U);
    msg.setDestinationEntity(179U);
    msg.err_mean = 0.6136996996872055;
    msg.dist_min_abs = 0.8697135766691312;
    msg.dist_min_mean = 0.9109168714034884;

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
    msg.setTimeStamp(0.226768121192517);
    msg.setSource(30132U);
    msg.setSourceEntity(82U);
    msg.setDestination(33104U);
    msg.setDestinationEntity(112U);
    msg.err_mean = 0.6992649780630382;
    msg.dist_min_abs = 0.055550472689698815;
    msg.dist_min_mean = 0.12000914908273808;

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
    msg.setTimeStamp(0.3145145483554954);
    msg.setSource(24156U);
    msg.setSourceEntity(123U);
    msg.setDestination(51238U);
    msg.setDestinationEntity(214U);
    msg.action = 133U;
    msg.lon_gain = 0.14664730615702315;
    msg.lat_gain = 0.03987377920892976;
    msg.bond_thick = 0.9727483031754315;
    msg.lead_gain = 0.09840739229632056;
    msg.deconfl_gain = 0.7707363214430543;
    msg.accel_switch_gain = 0.35374077238380086;
    msg.safe_dist = 0.5506117964222191;
    msg.deconflict_offset = 0.7148777991392925;
    msg.accel_safe_margin = 0.09131191628840651;
    msg.accel_lim_x = 0.668788777873074;

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
    msg.setTimeStamp(0.39741189176135683);
    msg.setSource(61744U);
    msg.setSourceEntity(18U);
    msg.setDestination(10040U);
    msg.setDestinationEntity(183U);
    msg.action = 232U;
    msg.lon_gain = 0.3173312907496021;
    msg.lat_gain = 0.3117459918631962;
    msg.bond_thick = 0.2357602698251794;
    msg.lead_gain = 0.904918741041642;
    msg.deconfl_gain = 0.3763198448562848;
    msg.accel_switch_gain = 0.5354869561814044;
    msg.safe_dist = 0.6520325035038782;
    msg.deconflict_offset = 0.9778172747321896;
    msg.accel_safe_margin = 0.4376416500075264;
    msg.accel_lim_x = 0.4943511620163008;

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
    msg.setTimeStamp(0.8261178420065852);
    msg.setSource(30864U);
    msg.setSourceEntity(96U);
    msg.setDestination(7070U);
    msg.setDestinationEntity(147U);
    msg.action = 209U;
    msg.lon_gain = 0.15963307554917827;
    msg.lat_gain = 0.4671523347176998;
    msg.bond_thick = 0.29165700422225316;
    msg.lead_gain = 0.23209535442821516;
    msg.deconfl_gain = 0.815508395577099;
    msg.accel_switch_gain = 0.6088018938810881;
    msg.safe_dist = 0.43550945071613567;
    msg.deconflict_offset = 0.11857837667590698;
    msg.accel_safe_margin = 0.13054790152307594;
    msg.accel_lim_x = 0.653420446222641;

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
    msg.setTimeStamp(0.6768662551125967);
    msg.setSource(3939U);
    msg.setSourceEntity(110U);
    msg.setDestination(31241U);
    msg.setDestinationEntity(186U);
    msg.type = 93U;
    msg.op = 135U;
    msg.err_mean = 0.7123572013907027;
    msg.dist_min_abs = 0.0358857404492412;
    msg.dist_min_mean = 0.24751960070228352;
    msg.roll_rate_mean = 0.6516449051118239;
    msg.time = 0.6185093061789558;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 221U;
    tmp_msg_0.lon_gain = 0.26375272655106097;
    tmp_msg_0.lat_gain = 0.9748529823681049;
    tmp_msg_0.bond_thick = 0.3656644435563364;
    tmp_msg_0.lead_gain = 0.389931877818094;
    tmp_msg_0.deconfl_gain = 0.26432365226323473;
    tmp_msg_0.accel_switch_gain = 0.0769082424831592;
    tmp_msg_0.safe_dist = 0.5681391836504023;
    tmp_msg_0.deconflict_offset = 0.07642239697593756;
    tmp_msg_0.accel_safe_margin = 0.2444586451398243;
    tmp_msg_0.accel_lim_x = 0.5140829001757763;
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
    msg.setTimeStamp(0.7073972939889207);
    msg.setSource(1528U);
    msg.setSourceEntity(201U);
    msg.setDestination(59147U);
    msg.setDestinationEntity(216U);
    msg.type = 100U;
    msg.op = 42U;
    msg.err_mean = 0.7490615001971853;
    msg.dist_min_abs = 0.4946506539448149;
    msg.dist_min_mean = 0.6728094030798029;
    msg.roll_rate_mean = 0.7061418956692416;
    msg.time = 0.30322731364268884;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 210U;
    tmp_msg_0.lon_gain = 0.19570819674162243;
    tmp_msg_0.lat_gain = 0.5368732861309153;
    tmp_msg_0.bond_thick = 0.6113878153731059;
    tmp_msg_0.lead_gain = 0.8792808826468753;
    tmp_msg_0.deconfl_gain = 0.9108881534575978;
    tmp_msg_0.accel_switch_gain = 0.47518629119016376;
    tmp_msg_0.safe_dist = 0.8365903116549076;
    tmp_msg_0.deconflict_offset = 0.6791057267697566;
    tmp_msg_0.accel_safe_margin = 0.6428995131165761;
    tmp_msg_0.accel_lim_x = 0.0050521491491578585;
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
    msg.setTimeStamp(0.8344473574134333);
    msg.setSource(47799U);
    msg.setSourceEntity(121U);
    msg.setDestination(1996U);
    msg.setDestinationEntity(140U);
    msg.type = 100U;
    msg.op = 240U;
    msg.err_mean = 0.48709670084408796;
    msg.dist_min_abs = 0.847528029716586;
    msg.dist_min_mean = 0.43427494542551215;
    msg.roll_rate_mean = 0.3214185704374698;
    msg.time = 0.5586787224674766;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 12U;
    tmp_msg_0.lon_gain = 0.9713966730672622;
    tmp_msg_0.lat_gain = 0.32207845119952405;
    tmp_msg_0.bond_thick = 0.8374803807281904;
    tmp_msg_0.lead_gain = 0.9194569506990997;
    tmp_msg_0.deconfl_gain = 0.0636168899310755;
    tmp_msg_0.accel_switch_gain = 0.4468060381685166;
    tmp_msg_0.safe_dist = 0.518695946826803;
    tmp_msg_0.deconflict_offset = 0.2207440297774913;
    tmp_msg_0.accel_safe_margin = 0.561326293531429;
    tmp_msg_0.accel_lim_x = 0.21027540532251843;
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
    msg.setTimeStamp(0.05410310007207819);
    msg.setSource(26800U);
    msg.setSourceEntity(52U);
    msg.setDestination(41385U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.15616051697222977;
    msg.lon = 0.7301148247187338;
    msg.eta = 4084265001U;
    msg.duration = 8976U;

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
    msg.setTimeStamp(0.3373870518506853);
    msg.setSource(24557U);
    msg.setSourceEntity(14U);
    msg.setDestination(38592U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.5866802235179466;
    msg.lon = 0.28055056241005194;
    msg.eta = 1326668406U;
    msg.duration = 28733U;

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
    msg.setTimeStamp(0.4625788296937845);
    msg.setSource(36162U);
    msg.setSourceEntity(43U);
    msg.setDestination(23621U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.6519882023733423;
    msg.lon = 0.003872077959194864;
    msg.eta = 4121288303U;
    msg.duration = 7625U;

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
    msg.setTimeStamp(0.7989439898609438);
    msg.setSource(51220U);
    msg.setSourceEntity(27U);
    msg.setDestination(36822U);
    msg.setDestinationEntity(44U);
    msg.plan_id = 23915U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5913341411705926;
    tmp_msg_0.lon = 0.6341828937790559;
    tmp_msg_0.eta = 3779124866U;
    tmp_msg_0.duration = 48797U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.31003695097907447);
    msg.setSource(42872U);
    msg.setSourceEntity(90U);
    msg.setDestination(43007U);
    msg.setDestinationEntity(27U);
    msg.plan_id = 47068U;

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
    msg.setTimeStamp(0.4049545654984231);
    msg.setSource(48657U);
    msg.setSourceEntity(57U);
    msg.setDestination(3829U);
    msg.setDestinationEntity(203U);
    msg.plan_id = 1007U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6427949875097246;
    tmp_msg_0.lon = 0.0012924586893862111;
    tmp_msg_0.eta = 905322157U;
    tmp_msg_0.duration = 2109U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.01599023037383185);
    msg.setSource(16403U);
    msg.setSourceEntity(118U);
    msg.setDestination(14345U);
    msg.setDestinationEntity(76U);
    msg.type = 198U;
    msg.command = 187U;
    msg.settings.assign("HQTNOYJBXNFRJRGAMRHIUZGIYYSAWZXGANZLAECEBOWXZEDBNXDCBYWJOVDQVGXDRKOPMJQTFHIPHAQTTNCPMWFTUDPTSTPUGOMDWMNKFJMNIGIUQVFZDLYTPSKJLWJHCXXPLGELSCJKCRNCKOIABXSRLPYHRBQK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 23285U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LPOFIDOWHMJHQBRDFPHAXEVXAHSAQPCKRMNHVSGELZNDYSVVQSGDUMC");

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
    msg.setTimeStamp(0.8937316586375628);
    msg.setSource(48530U);
    msg.setSourceEntity(143U);
    msg.setDestination(14324U);
    msg.setDestinationEntity(2U);
    msg.type = 188U;
    msg.command = 134U;
    msg.settings.assign("AQHYAFRBSLDUBNSCMDVSQTYMJPZGVBAGCMEFNKSFRFSZPWLXTHIP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53053U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.44785744373271696;
    tmp_tmp_msg_0_0.lon = 0.7854369755931924;
    tmp_tmp_msg_0_0.eta = 1181376724U;
    tmp_tmp_msg_0_0.duration = 10747U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RJFVZQYYUKQGMXBHUXAYTJYCLZRZTEMOUOXJECTDANVSDIBWDUGPOXFUNPWFSBKRAQPJPGWCLRPIKQRQLIKKVWJIATICMGLEGEKWNISRBH");

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
    msg.setTimeStamp(0.29656360093303025);
    msg.setSource(750U);
    msg.setSourceEntity(148U);
    msg.setDestination(25597U);
    msg.setDestinationEntity(79U);
    msg.type = 111U;
    msg.command = 132U;
    msg.settings.assign("OBJAKFZCKCDZKTFXZFPCERJCEUABXXRIEYMFSLIPLSHOKFHYZHDUHDBSLHUDGJCNIOHTDMBNRVWDKNQYPTAFOWNGAMQAQTPZRBIQLFQLUEAXOUCNEZWSGDWJJLKVVIUVVCKRAAJKWPXRMTQJXMWBNUYGUSQYURIEVYVABSWTGIFAGXIEKDFNOXEKNTLYGSVZXMZOPBJGEXHSBTGHQDPSLPCDOVMICLHCNYOWFMIQEOPYZQRJPHLRGSBTN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 52143U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IMOLYEZXCEXLIWVDMEIAETFUPCSJEBJX");

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
    msg.setTimeStamp(0.769095105567314);
    msg.setSource(40324U);
    msg.setSourceEntity(85U);
    msg.setDestination(8140U);
    msg.setDestinationEntity(239U);
    msg.state = 56U;
    msg.plan_id = 33152U;
    msg.wpt_id = 107U;
    msg.settings_chk = 28083U;

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
    msg.setTimeStamp(0.7427116224070958);
    msg.setSource(47477U);
    msg.setSourceEntity(177U);
    msg.setDestination(39261U);
    msg.setDestinationEntity(191U);
    msg.state = 98U;
    msg.plan_id = 45480U;
    msg.wpt_id = 79U;
    msg.settings_chk = 15577U;

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
    msg.setTimeStamp(0.26295649642266405);
    msg.setSource(41097U);
    msg.setSourceEntity(145U);
    msg.setDestination(20703U);
    msg.setDestinationEntity(24U);
    msg.state = 155U;
    msg.plan_id = 15402U;
    msg.wpt_id = 10U;
    msg.settings_chk = 64980U;

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
    msg.setTimeStamp(0.5446845033483707);
    msg.setSource(61044U);
    msg.setSourceEntity(83U);
    msg.setDestination(57635U);
    msg.setDestinationEntity(84U);
    msg.uid = 132U;
    msg.frag_number = 74U;
    msg.num_frags = 168U;
    const char tmp_msg_0[] = {-11, -38, -102, -108, 114, -118, 39, 52, -81, -20, 76, -4, -21, -11, 17, 90, 79, 111, 21, 69, -21, -117, 64, 108, 109, 58, -23, -43, -73, 114, -3, -43, 17, -2, 17, -114, -98, 39, 92, 112, 119, 30, -92, 64, 124, 101, 41, 82, -14, 96, 39, 20, -91, 29, -92, -67, 4, 30, -26, -106, -119, 84, -118, -60, 118, 29, -113, -52, -13, 87, 4, 26, -98, 45, 82, 102, -115, 64, -9, -98, -89, 69, 62, -121, -4, 116, 115, -22, 125, 125, -80, -107, -27, -101, -101, 82, 74, -51, 113, -34, 22, -122, 110, 39, 59, 73, -6, 22, -18, 119, -32, -72, -32, 22, -51, 98, -37, -99, 69, -53, -32, -90, 35, -116, 96, 19, 17, 91, 90, 35, -112, 19, 70, 24, -105, 122, 53, -116, -113, -6, 11, -122, 20, -70, -56, 79, 66, 48, -8, -84, -80, -125, 25, -50, -99, 41, 41};
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
    msg.setTimeStamp(0.23120832286191506);
    msg.setSource(62222U);
    msg.setSourceEntity(80U);
    msg.setDestination(17500U);
    msg.setDestinationEntity(248U);
    msg.uid = 134U;
    msg.frag_number = 127U;
    msg.num_frags = 193U;
    const char tmp_msg_0[] = {-79, -98, 119, 77, 72, 18, 124, 95, 125, 5, 38, -89, 18, -109, 110, 22, 35, 0, 55, -105, -108, 40, 69, -101, -3, -15, -34, -109, 88, -93, -67, -126, -88, -50, 74, 32, -98, -68, 96, 25, 2, -106, -39, -119, -2, 111, 34, -54, -45, 105, 82, -127, -71, -52, 61, -12, 57, -117, 5, 62, 30, 58, -41, 85, -62, 74, -125, -102, 81, -32, 16, -14, 94, -39, -92, 59, -112, 49, -11, -52, -1, -30, -128, 116, 105, 125, -91, 37, 31, 86, -20, 108, -109, 124, -100, -106, 0, -64, -67, -114, -47, 99, 84, 101, 112, 19, 120, -25, 62, 78, -37, 118, 114, 86, 26, 46, -112, 72, -60, -5, 70, -16, -66, 94, -80, -33, -113, -28, 94, 71, 117, 75, 33, 110, 40, 14, 3, -13, -101, -27, -78, 108, -122, -32, -32, 42, 62, -96, -91, 81, 76, 120, -70, -80, -7, 26, -52, -37, -83, 26, -8, 82, -36, -82, 71, 8, 51, 119, 35, -77, 36, 68, -63, 11, 118, 65, -90, 35, 57, -34, 75, -72, -45, -33, -76, -77, 26, 48, -125, -24, 50, -56, -106, 65, 83, 102, 32};
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
    msg.setTimeStamp(0.10039712403842038);
    msg.setSource(43565U);
    msg.setSourceEntity(148U);
    msg.setDestination(35794U);
    msg.setDestinationEntity(103U);
    msg.uid = 162U;
    msg.frag_number = 144U;
    msg.num_frags = 221U;
    const char tmp_msg_0[] = {41, -13, 65, -6, 4, 100, 70, -98, -5, 73, 47, 105, -124, 62, -52, -40, 41, 72, -108, 87, -127, -16, 66, -5, 113, -48, -52, -107, -63, 2, 122, 116, -63, 109, -88, 111, 53, 101, -18, 66, 38, -123, 20, 38, -115, -28, 67, -15, 35, 68, 89, 69, 97, -61, -115, -108, 106, 66, -110, -55, -53, 4, 76, -59, -70, -11, -80, -39, -63, 19, -86, 18, 17, -16, 46, -43, 1, 71, 3, -21, -110, -58, -26, 50, 18, -33, 122, 46, 63, -88, 11, 110, 122, 103, 85, -60, 3, 48, 111, 14, -113, 113, 100, 21, -91, 121, 6, 79, 26, -125, -106, 51, 77, 25, -35, 20, -53, 1, -68, 125, -105, -49, -69, -79, 93, 61, 75, -24, 114, -41, 106, -24, 22, 82, 84, 91, -67, 18, 85, -54, 88, -99, 35, 73, -40, -112, 13, 63, 47, 53, -95, 68, -24, 93, 34, -19, -44, -123, 99, -36, -3, -33, -45, 10, 107, 54, -117, 124, -1, -46, 24, 3, -56, -80, 72, 66, 117, -17, 19};
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
    msg.setTimeStamp(0.6034387221436491);
    msg.setSource(50295U);
    msg.setSourceEntity(78U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(72U);
    msg.content_type.assign("CKEPMUUMJRISAUWPPXNBEEMMJABJIFRXOMATHALPCVSMEDHVQBHFWFBCPANIVOACFGNDQJMFKOFNEROZCWTMCXDZTSLEJNMPXOHFCNCFPHNBIGDPKKZPCDSJQZLBDWTCULS");
    const char tmp_msg_0[] = {-74, -13, 30, -50, 19, -3, -57, -86, 86, 0, -56, 67, 70, -65, 10, -35, -39, 124, 59, -122, 54, 12, 72, 1, 8, -67, -101, -44, 17, 82, -22, 64, 97, 106, 52, -109, -69, 122, -58, 114, 93, -122, 101, 9, -30, -126, 72, 116, 45, 44, 115, -91, 91, 108, -64, 17, -104, -88, -65, -22, 12, 50, 6, -55, 72, 93, 109, -101, -23, -7, -14, -21, -80};
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
    msg.setTimeStamp(0.7312766585055499);
    msg.setSource(36943U);
    msg.setSourceEntity(240U);
    msg.setDestination(45524U);
    msg.setDestinationEntity(168U);
    msg.content_type.assign("RSWDSUXAKSPKUZCDSZTUQKCTDWTRNCOVFXJORBKCAESHFMZBOWURKRMPFAHJSCGPLBKMSVZXSNAGETLJANCODYVWQRTACNIWVJWZTGCTOIBLUGWFLNTLNSFGYONARPVDHDGAYIHJGOYNQKHYMKVBEUXLFDHPMEIHGJHFZVME");
    const char tmp_msg_0[] = {22, -95, 21, -68, 22, -107, 114, 47, 58, 115, 124, 86, 60, -47, 0, 101, -21, 82, 63, -107, 110, 70, -126, 33, 29, 70, 65, -11, -53, 74, -51, 59, 77, -11, 49, -68, 54, 88, 67, 76, -98, -79, -68, -85, -90, 101, 37, 46, 69, -55, 88, -90, 11, -65, -3, -10, 31, -47, -26, -92, 57, 12, -45, 54, -4, 101, -120, 105, 100, -45, 22, -69, 55, -115, 38, 9, 40, -37, 39, 48, -100, -51, 107, 123, -56, 20, -122, 80, 18, 84, -122, -84, -50, 37, -38, 119, -4, 117, -40, -96, 22, 17, 35, 99, -84, -55, -45, 101, 81, 121, 100, -89, -33, 15, 40, -19, -44, -120, -43, -55, 82, -91, 0, -56, 106, 86, 110, 117, 78, 69, 108, -63, 84, 102, -25, 119, 5, -83, 96, 34, 101, -61, 104, -107, -79, -17, -10, -84, -86, -66, 53, 90, 1, -112, 25, -79, 96, -77, 17, -25, -90, -103, -98, -79, 15, 53, -30, -117, 46, -6, -7, 49, -95, -78, 4, -25, 70, 45, -120, 70, 80, 51, -112, 121, -46, 118, 55, 126, 85, -93, 101, -1, 81, -71};
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
    msg.setTimeStamp(0.5860413259828167);
    msg.setSource(18189U);
    msg.setSourceEntity(176U);
    msg.setDestination(49166U);
    msg.setDestinationEntity(189U);
    msg.content_type.assign("ORJHOMWKKTCKXITVSDDCSUMQSCOBPHEYHQILGQEWVEAKUFBCTIIONCAWREJZVNEKSLPYDPBVOKPCAAL");
    const char tmp_msg_0[] = {56, -46, 65, -35, 124, -50, -50, 22, -113, 75, 31, 102, -10, -107, 111, 69, -48, 106, -64, 73, 61, 100, -81, -72, 41, -16, -16, -78, 60, 120, -40, -51, -85, 117, -74, -110, -15, 113, -73, -70, 78, 77, -55, -28, 80, 45, 99, 15, 94, 28, -54, -95, 102, 30, -25, 60, -66, 66, 38, 78, 102, 19, -46, -122, 88, 7, -40, 36, -26, -99, -68, -11, 119, 45, -55, -125, 70, 44, -7, 6, -106, 80, 111, -111, -35};
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
    msg.setTimeStamp(0.31285384498148394);
    msg.setSource(46460U);
    msg.setSourceEntity(214U);
    msg.setDestination(46974U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.9636973210159846);
    msg.setSource(16556U);
    msg.setSourceEntity(192U);
    msg.setDestination(58728U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.5564963514843428);
    msg.setSource(26910U);
    msg.setSourceEntity(68U);
    msg.setDestination(25634U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.27714410005522394);
    msg.setSource(65473U);
    msg.setSourceEntity(102U);
    msg.setDestination(2445U);
    msg.setDestinationEntity(236U);
    msg.target = 61935U;
    msg.bearing = 0.5058883100526669;
    msg.elevation = 0.6570972750117688;

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
    msg.setTimeStamp(0.49513862542493325);
    msg.setSource(6518U);
    msg.setSourceEntity(67U);
    msg.setDestination(21092U);
    msg.setDestinationEntity(137U);
    msg.target = 16396U;
    msg.bearing = 0.6246702140889019;
    msg.elevation = 0.8797699155982361;

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
    msg.setTimeStamp(0.6733349240841665);
    msg.setSource(64635U);
    msg.setSourceEntity(236U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(77U);
    msg.target = 64517U;
    msg.bearing = 0.8430390030100693;
    msg.elevation = 0.2859327748084176;

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
    msg.setTimeStamp(0.6168663314024285);
    msg.setSource(35147U);
    msg.setSourceEntity(170U);
    msg.setDestination(29772U);
    msg.setDestinationEntity(203U);
    msg.target = 3885U;
    msg.x = 0.6104172374462821;
    msg.y = 0.14499655042418802;
    msg.z = 0.12163037923105335;

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
    msg.setTimeStamp(0.4434728264346455);
    msg.setSource(58006U);
    msg.setSourceEntity(28U);
    msg.setDestination(52692U);
    msg.setDestinationEntity(121U);
    msg.target = 60682U;
    msg.x = 0.6247419808604256;
    msg.y = 0.45467383138347717;
    msg.z = 0.8499330414114022;

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
    msg.setTimeStamp(0.5806329047187626);
    msg.setSource(28045U);
    msg.setSourceEntity(73U);
    msg.setDestination(726U);
    msg.setDestinationEntity(237U);
    msg.target = 50998U;
    msg.x = 0.36830389840587363;
    msg.y = 0.9158214678661719;
    msg.z = 0.39441790066911153;

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
    msg.setTimeStamp(0.9516224237727452);
    msg.setSource(9425U);
    msg.setSourceEntity(138U);
    msg.setDestination(39555U);
    msg.setDestinationEntity(44U);
    msg.target = 8571U;
    msg.lat = 0.7463308000162304;
    msg.lon = 0.009723779875883243;
    msg.z_units = 24U;
    msg.z = 0.5475235882041541;

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
    msg.setTimeStamp(0.22455487154689058);
    msg.setSource(11556U);
    msg.setSourceEntity(252U);
    msg.setDestination(15890U);
    msg.setDestinationEntity(137U);
    msg.target = 31971U;
    msg.lat = 0.6775287617101233;
    msg.lon = 0.8249557299241193;
    msg.z_units = 60U;
    msg.z = 0.5592203447176609;

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
    msg.setTimeStamp(0.4255921801670193);
    msg.setSource(61795U);
    msg.setSourceEntity(74U);
    msg.setDestination(28030U);
    msg.setDestinationEntity(148U);
    msg.target = 25437U;
    msg.lat = 0.9720255047322646;
    msg.lon = 0.6935135121663597;
    msg.z_units = 88U;
    msg.z = 0.03609218771730238;

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
    msg.setTimeStamp(0.6112029325116343);
    msg.setSource(60792U);
    msg.setSourceEntity(41U);
    msg.setDestination(22077U);
    msg.setDestinationEntity(68U);
    msg.locale.assign("SFMVQACYDIHSWGEMHKNSBPBTTABFMFWOURCIPMYHBFDKYAOXVIDPBDYXDECRFGTTLBTRQZTSKORPIXTNZRYRETJENQGYWWJGEZJXPWUJISPKOTLWQAFJHEDSSBKFXRGHNSDUOHRTXWNJIYUMWWOQFYLLCFAOCKXDPIADCRUQPHLQZJSVLCLGUUNKVHJOLNQLNFKGSIDMU");
    const char tmp_msg_0[] = {40, 103, -77, 78, -61, 87, 101, -107, -99, -81, 75, -98, -34, 121, 70, 25, -30, -37, -101, 79, -80, 69, -61, -126, -101, 53, 56, 71, -47, -93, -48, -6, -125, -128, -75, -124, 67, 108, 103, 52, -81, 84, -112};
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
    msg.setTimeStamp(0.32591893784276915);
    msg.setSource(64751U);
    msg.setSourceEntity(212U);
    msg.setDestination(34401U);
    msg.setDestinationEntity(176U);
    msg.locale.assign("WHMAUMOBJXGWTLHPWESLMCFDPKMOUNAGRJEOCAYJWYCIJM");
    const char tmp_msg_0[] = {19, -10, -60, -112, -64, 56, -42, -76, -21, -71, 80, -104, -13, -124, -5, -15, -69, -42, 66, -52, 47, 49, 7, -57, 119, 83, -41, 89, -128, 25, -124, 113, -35, 89, -27, 53, 53, 72, 11, -31, 106, 18, 66, 84, 23, 84, -112, -82, -34, 41, -26, 45, 95, -82, -18, 7, -4, -116, -51, 62, -35, 83, -72, -27, -65, 56, 94, -105, -86, -65, -64, 54, -38, 53, 81, -5, 62, 6, -99, 12, -45, 123, 30, 124, 53, 7, 81, 43, 91, -87, -75, 83, -44, -64, -83, -100, -65, 40, 0, -104, 68, -44, 13, -75, -16, 31, 105, -2, 12, 94, -104, -102, -48, -54, -16, 110, -46, -58, -79, -31, -75, 73, 30, -61, 90, -21, 79, -9, 14, 45, 107, 11, 63, -11, -28, 78, -114, -120, -79, -22, 40, -109, 73, -101, -49, 84, 65, 15, 19, -63, -42, 94, 49, -21, 61, -107, -19, 36, 84, 41, 63, 115, 49, 79, -18, -60, 1, -40, -51, -52, -97, -71, -34, -37, -128, -70, 106, 64, 116, 112, -28, -54, -87, -128, 95, 50, 22, -92, 65, -38, -66, 80, 67, 1, -96, -81, -24, -4, -92, -116, -26, -86, 8, 56, -96, -55, -98, 90, -45, -55, -52, 24, -101, -125, 1};
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
    msg.setTimeStamp(0.06583765494318805);
    msg.setSource(23982U);
    msg.setSourceEntity(194U);
    msg.setDestination(13734U);
    msg.setDestinationEntity(238U);
    msg.locale.assign("ZWMNJYSZFJNQCXZQ");
    const char tmp_msg_0[] = {-118, -39, 72, -120, -112, 53, -88, 90, -19, -34, 102, 10, -102, -28, 68, -90, 74, 34, -23, -62, -2, 68, 3, 26, -30, 106, 71, 30, 74, -70, -78, -49, -120, -72, -30, 91, 111, 40, -12, 7, 125, 7, -111, 41, 88, -37, -42, 15, -89, 60, 38, -6, 60, -64, -49, 109, -108, 28, 109, 64, 69, 64, -61, 5, -110, 97, 11, -125, 32, 42, 103, -78, 41, -25, -81, -57, 114, 82, -76, 85, -54, 7, -36, 11, 122, -50, 3, 94, -109, 99, -92, 30, 47, -112, -95, -84, 2, 19, 80, 112, 16, -112, 38, 96, -57, -28, 89, -115, 115, 75, 44, 74, 47, 97, 16, -121, -45, 99, -10, -2, 29, 62, -114, 84};
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
    msg.setTimeStamp(0.2364444626489075);
    msg.setSource(36256U);
    msg.setSourceEntity(138U);
    msg.setDestination(3110U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.39673269582661785);
    msg.setSource(12177U);
    msg.setSourceEntity(6U);
    msg.setDestination(15239U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.28260398971259537);
    msg.setSource(58055U);
    msg.setSourceEntity(108U);
    msg.setDestination(44228U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.017999974117959283);
    msg.setSource(39201U);
    msg.setSourceEntity(165U);
    msg.setDestination(33498U);
    msg.setDestinationEntity(132U);
    msg.camid = 49U;
    msg.x = 7149U;
    msg.y = 63827U;

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
    msg.setTimeStamp(0.9977691671609099);
    msg.setSource(4036U);
    msg.setSourceEntity(120U);
    msg.setDestination(2187U);
    msg.setDestinationEntity(249U);
    msg.camid = 135U;
    msg.x = 24182U;
    msg.y = 61240U;

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
    msg.setTimeStamp(0.1875987208232558);
    msg.setSource(52218U);
    msg.setSourceEntity(113U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(60U);
    msg.camid = 153U;
    msg.x = 57953U;
    msg.y = 37234U;

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
    msg.setTimeStamp(0.5804636913072762);
    msg.setSource(37332U);
    msg.setSourceEntity(111U);
    msg.setDestination(45255U);
    msg.setDestinationEntity(126U);
    msg.camid = 221U;
    msg.x = 64392U;
    msg.y = 62188U;

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
    msg.setTimeStamp(0.243328938513111);
    msg.setSource(31124U);
    msg.setSourceEntity(49U);
    msg.setDestination(42864U);
    msg.setDestinationEntity(246U);
    msg.camid = 45U;
    msg.x = 34136U;
    msg.y = 11732U;

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
    msg.setTimeStamp(0.44763484871709525);
    msg.setSource(50136U);
    msg.setSourceEntity(6U);
    msg.setDestination(20766U);
    msg.setDestinationEntity(253U);
    msg.camid = 253U;
    msg.x = 13645U;
    msg.y = 150U;

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
    msg.setTimeStamp(0.4853010566920105);
    msg.setSource(49590U);
    msg.setSourceEntity(41U);
    msg.setDestination(19945U);
    msg.setDestinationEntity(79U);
    msg.tracking = 72U;
    msg.lat = 0.28888456269988205;
    msg.lon = 0.6632226405804923;
    msg.x = 0.37520414674147884;
    msg.y = 0.3837544368870701;
    msg.z = 0.39531760557490325;

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
    msg.setTimeStamp(0.6036780282140157);
    msg.setSource(6928U);
    msg.setSourceEntity(67U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(245U);
    msg.tracking = 45U;
    msg.lat = 0.2206300823875409;
    msg.lon = 0.31690400118413675;
    msg.x = 0.702571879155308;
    msg.y = 0.8311364290197949;
    msg.z = 0.8324073389394112;

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
    msg.setTimeStamp(0.41446440060420464);
    msg.setSource(61068U);
    msg.setSourceEntity(132U);
    msg.setDestination(45833U);
    msg.setDestinationEntity(121U);
    msg.tracking = 33U;
    msg.lat = 0.021309529356173806;
    msg.lon = 0.9800444995341359;
    msg.x = 0.7875963864882638;
    msg.y = 0.5960507824401806;
    msg.z = 0.2870927144677826;

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
    msg.setTimeStamp(0.2683382914994735);
    msg.setSource(45556U);
    msg.setSourceEntity(202U);
    msg.setDestination(32279U);
    msg.setDestinationEntity(147U);
    msg.target.assign("GNVNQUSHLXGVJYCUKIVABLUMPKDFIWTVQGCPILVBYEIARSUTYTAPFEHZUSRDJJZEAMWFQHPTVAMKQHFOCNYQODUWLBNBENDBDBRJKW");
    msg.lbearing = 0.5076173955828651;
    msg.lelevation = 0.2987219940177752;
    msg.bearing = 0.195859631923054;
    msg.elevation = 0.9986651802042242;
    msg.phi = 0.035396920017129574;
    msg.theta = 0.7657478817685072;
    msg.psi = 0.5639679626042227;
    msg.accuracy = 0.14223541807722506;

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
    msg.setTimeStamp(0.7424096384447525);
    msg.setSource(26367U);
    msg.setSourceEntity(231U);
    msg.setDestination(26005U);
    msg.setDestinationEntity(49U);
    msg.target.assign("CARLFZTLXWRKNOKPECWTRDGGAKYOZNLAZTPOZSLSWAHXYUPYJMKTHELTRKXAPEHXWWBEEFR");
    msg.lbearing = 0.12430066674211737;
    msg.lelevation = 0.19057975401251448;
    msg.bearing = 0.9442051633950711;
    msg.elevation = 0.6285355124388382;
    msg.phi = 0.7429454620452083;
    msg.theta = 0.08825455297722873;
    msg.psi = 0.23677083689252498;
    msg.accuracy = 0.9984706793903381;

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
    msg.setTimeStamp(0.9175076974003123);
    msg.setSource(40300U);
    msg.setSourceEntity(49U);
    msg.setDestination(10933U);
    msg.setDestinationEntity(236U);
    msg.target.assign("KHWUTNLXAWCX");
    msg.lbearing = 0.28083438382763803;
    msg.lelevation = 0.6887864052110284;
    msg.bearing = 0.6112846392939304;
    msg.elevation = 0.13595236342685602;
    msg.phi = 0.05346294509860472;
    msg.theta = 0.4605156239631074;
    msg.psi = 0.3128715822247481;
    msg.accuracy = 0.2649253980064892;

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
    msg.setTimeStamp(0.8067534817194335);
    msg.setSource(59393U);
    msg.setSourceEntity(35U);
    msg.setDestination(56435U);
    msg.setDestinationEntity(126U);
    msg.target.assign("YPWMPOZGQZPNCLAHHBCCNTPRARZGEGGCSCDYSBRYKBTKUOBGHJTFJFSIVRTBTLUNIFRSYVMMXSDIUREBXAVPUWDJCFHKHVBFDLEUKDINMZUGZRLXIQGVCSOGABQHUYZOKWHFQSQQNVNCWWZDPTPZEVMNTDATGJHEKOKNXOLIRLWAEIEWKAXQJBHEOPMIACMYFPQJMJKJVIYXEGOSRHUVJWWDQULLNKFLZCVONZTTEYSYJDALAQMXPUSFWXX");
    msg.x = 0.9683908906687819;
    msg.y = 0.6764375666057553;
    msg.z = 0.6270788877147471;
    msg.n = 0.1936769574686017;
    msg.e = 0.493067526158256;
    msg.d = 0.37546120769749103;
    msg.phi = 0.7538038747382803;
    msg.theta = 0.48752103481205733;
    msg.psi = 0.3449680440742571;
    msg.accuracy = 0.551698639589885;

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
    msg.setTimeStamp(0.13251286148458163);
    msg.setSource(40908U);
    msg.setSourceEntity(214U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(225U);
    msg.target.assign("JDKBLSBEWQGHHNOMZCOBSWNSTWZXTLHQCRSYLNTIOREXTGDQOWRAZWKLYPAEJTBRFTVTJYRJVNRWOYIXKIEHDUPZVMYXOFVIOMCFAQUUUHADKBUXTSFKWBNVWPYGFQBP");
    msg.x = 0.3527005620682493;
    msg.y = 0.7184660746418776;
    msg.z = 0.4948305386849192;
    msg.n = 0.5062362717436981;
    msg.e = 0.22800853717743919;
    msg.d = 0.6771072967522475;
    msg.phi = 0.40236935875531776;
    msg.theta = 0.5266953166615514;
    msg.psi = 0.07981164967206944;
    msg.accuracy = 0.5299794221184434;

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
    msg.setTimeStamp(0.28033626361455455);
    msg.setSource(1347U);
    msg.setSourceEntity(227U);
    msg.setDestination(16931U);
    msg.setDestinationEntity(204U);
    msg.target.assign("WXZFDXXLQCANMSVEZSTKUANFAFKZUEATTDEVYGDSTUOJNYNAVHIDMPZKAOCTEBHZVNUKMXFFGJXHGKECPUKLEQIHJKHZCJVNFCZEPRLUMEVXGJPIDAIYLIJBIKQUOHGTIONGZYDAKWSBROPJHBYRSDWPWJTYTLFWRRVWJQERQCMBXSFISRVYWNYRLBUWBMUUACOGMGSSKIMYDRLQZXBJQMHCQCGOHZTDLOPOTYP");
    msg.x = 0.846830896635145;
    msg.y = 0.8573289663520456;
    msg.z = 0.06451512365178014;
    msg.n = 0.5017827455093571;
    msg.e = 0.16273702871674978;
    msg.d = 0.7845197223123558;
    msg.phi = 0.446570262872403;
    msg.theta = 0.29447890261737275;
    msg.psi = 0.2978167526977965;
    msg.accuracy = 0.038949834450261234;

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
    msg.setTimeStamp(0.6705927929356752);
    msg.setSource(9760U);
    msg.setSourceEntity(140U);
    msg.setDestination(17376U);
    msg.setDestinationEntity(9U);
    msg.target.assign("MBEUSCUCQOQUJWYRXIQZFGTXQMWBZUGBRSSUJIAZHNCRINJAGTVHJDELITOREFLOWYGTLMHLZCVAYOEEZZMRDQPPCGVKASIPIAYGPEHQOPNGJSNUQCNBXLWOJDVOQKSTEXGVPBLYAMKVFHXVDIEBCYKDKSCUHHMFFBZSNMYKDOOMJBKFIFBJLLKW");
    msg.lat = 0.13258251226513806;
    msg.lon = 0.8468389336984733;
    msg.z_units = 235U;
    msg.z = 0.2784611847656755;
    msg.accuracy = 0.20003315960343215;

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
    msg.setTimeStamp(0.5730590359469322);
    msg.setSource(50157U);
    msg.setSourceEntity(71U);
    msg.setDestination(4324U);
    msg.setDestinationEntity(144U);
    msg.target.assign("HTSLJEOXWYMDGBWWKSLNNVOTWOEYNCIKFDTKTLIURACEWRLBEEMICLVMYBXZHDQTSWXXYQBZHUCJNQCDQVDGQNFHSYCFTIKCGMVBMFAKPAGPRUXNAQEOQFSGIPAXGNOPSSILZGNWOBKRMUWHGOXGDSXFCJDAZCPJARVYVUKOKLVHAMBJHOIUYZMJPCHTJUJIBBJBXZRVDFPZPUAEOTXNMLVPFKTZMIFQIYR");
    msg.lat = 0.5463989586937235;
    msg.lon = 0.3763100184212613;
    msg.z_units = 15U;
    msg.z = 0.05465107063720953;
    msg.accuracy = 0.2895598507903765;

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
    msg.setTimeStamp(0.7774337000400995);
    msg.setSource(38257U);
    msg.setSourceEntity(119U);
    msg.setDestination(40294U);
    msg.setDestinationEntity(117U);
    msg.target.assign("GOGAASEPWFHOXZPJYGLXRNTAZQGJLALTGJREZTZMXBMISKDWUKPDAQVFTOVESHRJGIGGMVDUQBUBAWJTQJXICAVWCBKYWQBNCCPDLPAIDGXILFMOVMEODIFFGBPDJIP");
    msg.lat = 0.1696393458903186;
    msg.lon = 0.3724365299550778;
    msg.z_units = 72U;
    msg.z = 0.5657059612213964;
    msg.accuracy = 0.20763510255304307;

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
    msg.setTimeStamp(0.7001069039004857);
    msg.setSource(53257U);
    msg.setSourceEntity(71U);
    msg.setDestination(7831U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ZMCPORGQCASRIKSKYDESUGWSXTEXRSQ");
    msg.lat = 0.4765533781850101;
    msg.lon = 0.4604197443485716;
    msg.z = 0.04897838438946578;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.98310846139249);
    msg.setSource(14711U);
    msg.setSourceEntity(215U);
    msg.setDestination(7801U);
    msg.setDestinationEntity(77U);
    msg.name.assign("RKZPYHKOSCZTLOEBUQFBIQWLFZRYOKIDUTCYISNCTQYTAVSRQHXAZOFEIR");
    msg.lat = 0.6799607293527153;
    msg.lon = 0.5647659283304894;
    msg.z = 0.5627682226864682;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.05285603442833475);
    msg.setSource(64766U);
    msg.setSourceEntity(121U);
    msg.setDestination(55776U);
    msg.setDestinationEntity(210U);
    msg.name.assign("JEDLHSPDFQNSOSHFEJUBRUYPKCVCDCSESTQWYCGIQJJLWKNAFXGZFICBHDLUQTCIENYMTCURPRFGQKIQRXJSJKFQWBMUXNOKQYOAUJEEOMZKFADZOCOLBNVTGLFAVBRIBKEKYREYVVKVUIIDXAPRWCGAMPLZNGO");
    msg.lat = 0.9344285696682701;
    msg.lon = 0.9443829894039591;
    msg.z = 0.38446472433503;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.30928392170949814);
    msg.setSource(44395U);
    msg.setSourceEntity(67U);
    msg.setDestination(37472U);
    msg.setDestinationEntity(134U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.9912624478591452);
    msg.setSource(21005U);
    msg.setSourceEntity(64U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(202U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.9314955132045771);
    msg.setSource(27472U);
    msg.setSourceEntity(75U);
    msg.setDestination(17474U);
    msg.setDestinationEntity(169U);
    msg.op = 89U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SPUWCMALBVWFYPOVZIJKXROVWEODRVXRMOLCEXBSWLBU");
    tmp_msg_0.lat = 0.6532685286380996;
    tmp_msg_0.lon = 0.6608979051208425;
    tmp_msg_0.z = 0.3027951126977706;
    tmp_msg_0.z_units = 215U;
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
    msg.setTimeStamp(0.14795204728408828);
    msg.setSource(2812U);
    msg.setSourceEntity(141U);
    msg.setDestination(34319U);
    msg.setDestinationEntity(126U);
    msg.value = 0.1397616117158088;
    msg.type = 15U;

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
    msg.setTimeStamp(0.6688702139495573);
    msg.setSource(43654U);
    msg.setSourceEntity(124U);
    msg.setDestination(4898U);
    msg.setDestinationEntity(218U);
    msg.value = 0.5976875146605583;
    msg.type = 24U;

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
    msg.setTimeStamp(0.5007880962142373);
    msg.setSource(37780U);
    msg.setSourceEntity(112U);
    msg.setDestination(44741U);
    msg.setDestinationEntity(196U);
    msg.value = 0.23433346058451598;
    msg.type = 169U;

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
    msg.setTimeStamp(0.49440870169525075);
    msg.setSource(7057U);
    msg.setSourceEntity(194U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8571762747702084;

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
    msg.setTimeStamp(0.6212209809652436);
    msg.setSource(42911U);
    msg.setSourceEntity(84U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6119862542100732;

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
    msg.setTimeStamp(0.5644590484203468);
    msg.setSource(20696U);
    msg.setSourceEntity(112U);
    msg.setDestination(15235U);
    msg.setDestinationEntity(208U);
    msg.value = 0.1571191820776776;

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
    msg.setTimeStamp(0.3796249145386731);
    msg.setSource(2774U);
    msg.setSourceEntity(93U);
    msg.setDestination(37735U);
    msg.setDestinationEntity(44U);
    msg.timestamp_last_service = 0.5698767207645327;
    msg.time_next_service = 0.26139740553902835;
    msg.time_motor_next_service = 0.06804694922734145;
    msg.time_idle_ground = 0.06605486827135454;
    msg.time_idle_air = 0.24127651446674692;
    msg.time_idle_water = 0.6601163150982375;
    msg.time_idle_underwater = 0.6388744918525362;
    msg.time_idle_unknown = 0.31108217388033;
    msg.time_motor_ground = 0.8321615626217923;
    msg.time_motor_air = 0.336236370918255;
    msg.time_motor_water = 0.2321449636082199;
    msg.time_motor_underwater = 0.4956975420136066;
    msg.time_motor_unknown = 0.3442069441834755;
    msg.rpm_min = -20948;
    msg.rpm_max = -13617;
    msg.depth_max = 0.2610778989877427;

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
    msg.setTimeStamp(0.9301904057709313);
    msg.setSource(24865U);
    msg.setSourceEntity(80U);
    msg.setDestination(8872U);
    msg.setDestinationEntity(204U);
    msg.timestamp_last_service = 0.41044386352452567;
    msg.time_next_service = 0.7034423000526023;
    msg.time_motor_next_service = 0.6387004731044648;
    msg.time_idle_ground = 0.9141751391658841;
    msg.time_idle_air = 0.6712377000734112;
    msg.time_idle_water = 0.7292785415240346;
    msg.time_idle_underwater = 0.8873145541867309;
    msg.time_idle_unknown = 0.6931758382235972;
    msg.time_motor_ground = 0.8121210304553741;
    msg.time_motor_air = 0.47839771724307245;
    msg.time_motor_water = 0.403032841544673;
    msg.time_motor_underwater = 0.7417950846858905;
    msg.time_motor_unknown = 0.183903675004501;
    msg.rpm_min = -13138;
    msg.rpm_max = 30934;
    msg.depth_max = 0.9634321998565057;

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
    msg.setTimeStamp(0.13744944849758356);
    msg.setSource(10272U);
    msg.setSourceEntity(199U);
    msg.setDestination(13586U);
    msg.setDestinationEntity(155U);
    msg.timestamp_last_service = 0.9482518290836548;
    msg.time_next_service = 0.8601318973299649;
    msg.time_motor_next_service = 0.9125328629448669;
    msg.time_idle_ground = 0.3722041368168255;
    msg.time_idle_air = 0.5685412920817817;
    msg.time_idle_water = 0.3216918265151326;
    msg.time_idle_underwater = 0.8589030181607821;
    msg.time_idle_unknown = 0.6346897158675754;
    msg.time_motor_ground = 0.7597611590579292;
    msg.time_motor_air = 0.1876814049349409;
    msg.time_motor_water = 0.688795175754145;
    msg.time_motor_underwater = 0.6213686982764851;
    msg.time_motor_unknown = 0.024782365576920817;
    msg.rpm_min = -21176;
    msg.rpm_max = -12985;
    msg.depth_max = 0.5550667180479244;

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
    msg.setTimeStamp(0.2421929123245532);
    msg.setSource(16604U);
    msg.setSourceEntity(43U);
    msg.setDestination(25469U);
    msg.setDestinationEntity(70U);
    msg.severity = 108U;
    msg.text.assign("BUTHAUYYXKAZONMVNISWEDKRLQRPOWNGXJWOYKLTGUWSZZOQJIAAJWSCPMHWSFDMXVI");

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
    msg.setTimeStamp(0.3409436867786837);
    msg.setSource(56705U);
    msg.setSourceEntity(64U);
    msg.setDestination(12663U);
    msg.setDestinationEntity(185U);
    msg.severity = 87U;
    msg.text.assign("GROPMERWWQBUBKXYLPXBFQEKTSATJFYKHSIBCCTILBXLLZWZSHNLGTVAKGZJKGSEIJUMHHXUSTAIKJVHLWEXORNUUOQWZJWAOECSJNVMKWBIULVHMAMOZFUCAIXYYFLCPDPRTHSZLYTGWBYEVPTHZNYRFNMQVEFVMZJDOHQBNSWPNLFDJDOEPC");

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
    msg.setTimeStamp(0.5152510900712519);
    msg.setSource(25290U);
    msg.setSourceEntity(199U);
    msg.setDestination(9207U);
    msg.setDestinationEntity(202U);
    msg.severity = 81U;
    msg.text.assign("AXZXDZQTBNGUMVOVPEJSPDTPQVAIKWOZJTRJKLBGLNANXMLOMKAJATGPLESXSBOSLFNAXROVERWWHDPPMFIZFHEFGATXRNDRQGMRHCACCCHOVDSUJQGPGEKCRUPQGTHSCIFPJTYCKXVJLWBFDKFIELGBSMVXKUUZKTIYRLHUUAUDMLYJLY");

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
    msg.setTimeStamp(0.7091941025636171);
    msg.setSource(22284U);
    msg.setSourceEntity(19U);
    msg.setDestination(39303U);
    msg.setDestinationEntity(236U);
    msg.channel = 16;
    msg.value = -353675351;
    msg.gain = 168U;

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
    msg.setTimeStamp(0.188205277705358);
    msg.setSource(61996U);
    msg.setSourceEntity(98U);
    msg.setDestination(44577U);
    msg.setDestinationEntity(40U);
    msg.channel = 118;
    msg.value = -1109741732;
    msg.gain = 51U;

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
    msg.setTimeStamp(0.9556106223317671);
    msg.setSource(14973U);
    msg.setSourceEntity(70U);
    msg.setDestination(11889U);
    msg.setDestinationEntity(184U);
    msg.channel = -14;
    msg.value = -694551396;
    msg.gain = 137U;

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
    msg.setTimeStamp(0.2781596378219303);
    msg.setSource(42059U);
    msg.setSourceEntity(158U);
    msg.setDestination(19388U);
    msg.setDestinationEntity(30U);
    msg.ch01 = 0.9836611843837636;
    msg.ch02 = 0.23178896725887388;
    msg.ch03 = 0.13478109274703665;
    msg.ch04 = 0.658202688479681;
    msg.ch05 = 0.09727119516173688;
    msg.ch06 = 0.024428387213479175;
    msg.ch07 = 0.20363735688982987;
    msg.ch08 = 0.20470685826065205;
    msg.ch09 = 0.47751285428048906;
    msg.ch10 = 0.09739533040679249;
    msg.ch11 = 0.3085874073404349;
    msg.ch12 = 0.2507723049098822;
    msg.ch13 = 0.5322426554946063;
    msg.ch14 = 0.52395043767537;
    msg.ch15 = 0.4580775541464267;
    msg.ch16 = 0.3297494898768233;

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
    msg.setTimeStamp(0.21345378424050154);
    msg.setSource(11389U);
    msg.setSourceEntity(101U);
    msg.setDestination(38371U);
    msg.setDestinationEntity(26U);
    msg.ch01 = 0.4951322613622047;
    msg.ch02 = 0.9968037267152311;
    msg.ch03 = 0.3721737632910507;
    msg.ch04 = 0.6462216591811205;
    msg.ch05 = 0.1401758679597277;
    msg.ch06 = 0.23996181412074158;
    msg.ch07 = 0.15741501867319563;
    msg.ch08 = 0.39899675302700033;
    msg.ch09 = 0.7945446671158564;
    msg.ch10 = 0.3355228886262829;
    msg.ch11 = 0.5179753578410574;
    msg.ch12 = 0.4259664344789902;
    msg.ch13 = 0.28412911715554545;
    msg.ch14 = 0.8534069806734275;
    msg.ch15 = 0.8650655840079918;
    msg.ch16 = 0.06392807822778979;

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
    msg.setTimeStamp(0.42655912669274776);
    msg.setSource(5155U);
    msg.setSourceEntity(189U);
    msg.setDestination(4412U);
    msg.setDestinationEntity(168U);
    msg.ch01 = 0.7076314742399943;
    msg.ch02 = 0.9448895371067033;
    msg.ch03 = 0.12772115837371112;
    msg.ch04 = 0.6506000290118564;
    msg.ch05 = 0.9151184959840266;
    msg.ch06 = 0.027338142869526294;
    msg.ch07 = 0.14867679077091023;
    msg.ch08 = 0.799148224126068;
    msg.ch09 = 0.031226604485060205;
    msg.ch10 = 0.8385885463268365;
    msg.ch11 = 0.31812678761590174;
    msg.ch12 = 0.5525343955902298;
    msg.ch13 = 0.01982848784186475;
    msg.ch14 = 0.22900421447718422;
    msg.ch15 = 0.13880883167809321;
    msg.ch16 = 0.09080419459973188;

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
    msg.setTimeStamp(0.7352786377839522);
    msg.setSource(56140U);
    msg.setSourceEntity(180U);
    msg.setDestination(31233U);
    msg.setDestinationEntity(31U);
    msg.op = 177U;
    msg.lat = 0.8686568539442756;
    msg.lon = 0.8962362586847461;
    msg.height = 0.5859227209234175;
    msg.depth = 0.8904841620341305;
    msg.alt = 0.4797307536152198;

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
    msg.setTimeStamp(0.15249867706715625);
    msg.setSource(45868U);
    msg.setSourceEntity(254U);
    msg.setDestination(45523U);
    msg.setDestinationEntity(234U);
    msg.op = 251U;
    msg.lat = 0.8928474075558211;
    msg.lon = 0.5848715099071532;
    msg.height = 0.15915216664848686;
    msg.depth = 0.23598263551284104;
    msg.alt = 0.7239174035378532;

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
    msg.setTimeStamp(0.5658956209937803);
    msg.setSource(4567U);
    msg.setSourceEntity(3U);
    msg.setDestination(43224U);
    msg.setDestinationEntity(159U);
    msg.op = 134U;
    msg.lat = 0.4819246441448225;
    msg.lon = 0.6955210116170878;
    msg.height = 0.8526982070415107;
    msg.depth = 0.6530851135108685;
    msg.alt = 0.8281001105670506;

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
    msg.setTimeStamp(0.09401865275151378);
    msg.setSource(48237U);
    msg.setSourceEntity(167U);
    msg.setDestination(51289U);
    msg.setDestinationEntity(13U);
    msg.nbeams = 214U;
    msg.ncells = 200U;
    msg.coord_sys = 195U;

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
    msg.setTimeStamp(0.13501987144332073);
    msg.setSource(47748U);
    msg.setSourceEntity(157U);
    msg.setDestination(44044U);
    msg.setDestinationEntity(0U);
    msg.nbeams = 72U;
    msg.ncells = 81U;
    msg.coord_sys = 236U;

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
    msg.setTimeStamp(0.7434250619375535);
    msg.setSource(38504U);
    msg.setSourceEntity(85U);
    msg.setDestination(27395U);
    msg.setDestinationEntity(130U);
    msg.nbeams = 220U;
    msg.ncells = 150U;
    msg.coord_sys = 230U;

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
    msg.setTimeStamp(0.8566306458974553);
    msg.setSource(63206U);
    msg.setSourceEntity(211U);
    msg.setDestination(61806U);
    msg.setDestinationEntity(118U);
    msg.cell_position = 0.9603536156538368;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.25693167089020297;
    tmp_msg_0.amp = 0.7721205760730753;
    tmp_msg_0.cor = 117U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.26033234424221385);
    msg.setSource(56695U);
    msg.setSourceEntity(11U);
    msg.setDestination(20217U);
    msg.setDestinationEntity(223U);
    msg.cell_position = 0.5362600190687987;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.15672820094315842;
    tmp_msg_0.amp = 0.15499274145761155;
    tmp_msg_0.cor = 60U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6549425129563227);
    msg.setSource(64226U);
    msg.setSourceEntity(38U);
    msg.setDestination(40410U);
    msg.setDestinationEntity(178U);
    msg.cell_position = 0.9424047605142869;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.28209178926106715;
    tmp_msg_0.amp = 0.4053863241847032;
    tmp_msg_0.cor = 140U;
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
    msg.setTimeStamp(0.019341058020293622);
    msg.setSource(18965U);
    msg.setSourceEntity(233U);
    msg.setDestination(61867U);
    msg.setDestinationEntity(188U);
    msg.vel = 0.987517082704058;
    msg.amp = 0.5422408897840237;
    msg.cor = 238U;

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
    msg.setTimeStamp(0.39051615565643105);
    msg.setSource(17451U);
    msg.setSourceEntity(229U);
    msg.setDestination(51859U);
    msg.setDestinationEntity(18U);
    msg.vel = 0.9438020618914255;
    msg.amp = 0.8317707217270119;
    msg.cor = 107U;

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
    msg.setTimeStamp(0.8467190318828705);
    msg.setSource(10853U);
    msg.setSourceEntity(22U);
    msg.setDestination(16025U);
    msg.setDestinationEntity(75U);
    msg.vel = 0.3219131030026824;
    msg.amp = 0.5025741324973744;
    msg.cor = 64U;

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
    msg.setTimeStamp(0.15516293847473983);
    msg.setSource(23392U);
    msg.setSourceEntity(134U);
    msg.setDestination(26780U);
    msg.setDestinationEntity(124U);
    msg.name.assign("ZEZQQLAQQMQCXKYSCXKXZSFYVIGUWAWBTWGPEVOBJSEVNLLYQMUGCKVREWOPHJEJHSAHXLTHUCGKVFJNUORO");
    msg.value = 56U;

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
    msg.setTimeStamp(0.6896517167753461);
    msg.setSource(15625U);
    msg.setSourceEntity(119U);
    msg.setDestination(33023U);
    msg.setDestinationEntity(76U);
    msg.name.assign("ZDHGOHORAWRLLKBFVNFCKEVKVHMBVTUAZJHQHMRUXHTVRZPAMDRUYOGJMLXPKHSFDTYIXJPGCVMHWIDVSQGXYKUEKYWGWIIMGCFEIESITXCERNCUQBLUDNJAAWZQKEIFJJBFCZWGYWABBDSYNNJVTTOEKDJMUXOJYPWXCFIQRWXWDZANVBSUDYOKTCPHYFPU");
    msg.value = 143U;

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
    msg.setTimeStamp(0.22517801230925627);
    msg.setSource(8978U);
    msg.setSourceEntity(152U);
    msg.setDestination(39619U);
    msg.setDestinationEntity(66U);
    msg.name.assign("VWSZSBWWKAYHJSXZXQVLCAUWBTQMHGJGAIQGWNEDUVYWUIKUMPXEUJLZZGA");
    msg.value = 201U;

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
    msg.setTimeStamp(0.09265061847188205);
    msg.setSource(37391U);
    msg.setSourceEntity(182U);
    msg.setDestination(57438U);
    msg.setDestinationEntity(83U);
    msg.name.assign("AXWRZEJYYTDUJHNZHFGZRIFOZVQJKKBLDUOTNSCRADZKFJPNYXTEJWIUMHWYHGAEMQWGKIJZXKRGUCXMAFNBQFPPSAJRVUYXYCNLVZBFUFBSKMRXOSWDMNBHGWKRDIIPHQDTPSBGEASRBSKOISRQMPMLHZONVLBAMDTJYVCFQXSHGVQIGZDVDYQUCJMTAPTOORVUXQNYX");

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
    msg.setTimeStamp(0.8113041450408186);
    msg.setSource(65036U);
    msg.setSourceEntity(40U);
    msg.setDestination(62373U);
    msg.setDestinationEntity(159U);
    msg.name.assign("ISCNONSNOVYCRUQLWRNPLKCUFKSXHZVXEHXIBPGFJYWAMKLLFMWJOOBDFAUWKDYGFJNLCO");

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
    msg.setTimeStamp(0.49764654784497997);
    msg.setSource(28916U);
    msg.setSourceEntity(64U);
    msg.setDestination(15640U);
    msg.setDestinationEntity(191U);
    msg.name.assign("EMXVVWEBEAUDBFQWUZIPOMEVNYSBXGFLPFTWDHOFDLRBJNKBZKKFCQUYWKRAVIXH");

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
    msg.setTimeStamp(0.5780395062165636);
    msg.setSource(56364U);
    msg.setSourceEntity(112U);
    msg.setDestination(1369U);
    msg.setDestinationEntity(100U);
    msg.name.assign("BNFVSXMEGGODTUKUYZQJXTXOJNRBCOMOSFKNJIYHSTDWZGYNXYQLQAZDXQPQEW");
    msg.value = 238U;

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
    msg.setTimeStamp(0.4353955195854563);
    msg.setSource(51390U);
    msg.setSourceEntity(88U);
    msg.setDestination(31521U);
    msg.setDestinationEntity(249U);
    msg.name.assign("XRMZWSRDTQAEGWIMMWCNNLRJUVEKPNZPOMBGDTDBZICFQHHBZSOATBLHCBLFYUCMAULEJGCJOIDKQKASKNJMLKXHPYHHJDWZKZBEDIGXGEZDJOKSCFRYUMYPIBFGZFZRQUIDQWAZXPSPYWQNOEESFQJRFNOOXPMKAUIBWJTXRWLCVPSVYIXBKUVYMDILDLRWAFTLVTOQCXVENBQC");
    msg.value = 203U;

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
    msg.setTimeStamp(0.9212730033037826);
    msg.setSource(62822U);
    msg.setSourceEntity(230U);
    msg.setDestination(17062U);
    msg.setDestinationEntity(165U);
    msg.name.assign("ZQUZOISTKBCMXVXRURGHYZJOJNWNSOKTSTOJEJFSWUWQVKENADAJIFHBUHMDWLXQTTOOAKMNWLL");
    msg.value = 250U;

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
    msg.setTimeStamp(0.8903711710626954);
    msg.setSource(47U);
    msg.setSourceEntity(27U);
    msg.setDestination(35023U);
    msg.setDestinationEntity(249U);
    msg.value = 0.08204961754140383;

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
    msg.setTimeStamp(0.0898154281297101);
    msg.setSource(45924U);
    msg.setSourceEntity(188U);
    msg.setDestination(19170U);
    msg.setDestinationEntity(145U);
    msg.value = 0.9322541100404977;

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
    msg.setTimeStamp(0.19069029648011016);
    msg.setSource(4991U);
    msg.setSourceEntity(125U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(122U);
    msg.value = 0.4026268105415275;

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
    msg.setTimeStamp(0.20811939042893823);
    msg.setSource(53762U);
    msg.setSourceEntity(73U);
    msg.setDestination(52678U);
    msg.setDestinationEntity(208U);
    msg.value = 0.6493621565932278;

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
    msg.setTimeStamp(0.36677003075864034);
    msg.setSource(22346U);
    msg.setSourceEntity(182U);
    msg.setDestination(47491U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6459672153901799;

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
    msg.setTimeStamp(0.017185112350103116);
    msg.setSource(7014U);
    msg.setSourceEntity(1U);
    msg.setDestination(58640U);
    msg.setDestinationEntity(107U);
    msg.value = 0.9456269935112616;

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
    msg.setTimeStamp(0.024143395675521928);
    msg.setSource(20958U);
    msg.setSourceEntity(181U);
    msg.setDestination(26906U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6524548731328659;

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
    msg.setTimeStamp(0.9937757319367581);
    msg.setSource(63166U);
    msg.setSourceEntity(9U);
    msg.setDestination(37193U);
    msg.setDestinationEntity(198U);
    msg.value = 0.8882306223297441;

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
    msg.setTimeStamp(0.8461505440533204);
    msg.setSource(30341U);
    msg.setSourceEntity(100U);
    msg.setDestination(22644U);
    msg.setDestinationEntity(107U);
    msg.value = 0.1848165868480517;

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
    msg.setTimeStamp(0.38793395197644165);
    msg.setSource(37234U);
    msg.setSourceEntity(251U);
    msg.setDestination(14599U);
    msg.setDestinationEntity(232U);
    msg.restriction = 34U;
    msg.reason.assign("DHFHLXDHABUWEETMIOAVPIFNBMWDRZNMVIIUOTWREOBUSIJYTBBILCXQYEQYWTORBKJYWHGEXAZLRSNUQHL");

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
    msg.setTimeStamp(0.7231483343146714);
    msg.setSource(33277U);
    msg.setSourceEntity(203U);
    msg.setDestination(35203U);
    msg.setDestinationEntity(32U);
    msg.restriction = 56U;
    msg.reason.assign("GGXHRIVFNVEZNKNCLVJJKHTTERTLTU");

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
    msg.setTimeStamp(0.4480872573738274);
    msg.setSource(30628U);
    msg.setSourceEntity(93U);
    msg.setDestination(13883U);
    msg.setDestinationEntity(194U);
    msg.restriction = 180U;
    msg.reason.assign("YPXOTOQYYYUGOFCBBIDUSECQJJWVTDPFAMLZNJRDGMYXULGRPEKVAQAFZVFRWLJPMCSWJIUWQDIWFNWORUOUSXCPRJFHSKUQSTXMYSNEUVZRWCKASIQRUBZXGCHYELPWTCPMBCNOZAQFVNXLBRAPRGOEEXALJHFHMBBGQZTMJDUKOKXKETLTDZWHHJJQMSYXIVZMGTVGKVPNIETALHPCXNGTEAVIQNDEHSZNGDDNOHDALIVBOKBKIRCYFHK");

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
    msg.setTimeStamp(0.1320881036124476);
    msg.setSource(62792U);
    msg.setSourceEntity(167U);
    msg.setDestination(16306U);
    msg.setDestinationEntity(37U);
    msg.path_param = 0.9295080209590878;
    msg.x = 0.29395002285240923;
    msg.y = 0.3627171333932546;
    msg.z = 0.7858799925249503;
    msg.r_f = 0.6996283756087199;
    msg.p = 0.8639965729715869;

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
    msg.setTimeStamp(0.1556688191332205);
    msg.setSource(48135U);
    msg.setSourceEntity(120U);
    msg.setDestination(11705U);
    msg.setDestinationEntity(67U);
    msg.path_param = 0.1880832022603146;
    msg.x = 0.2734232666601152;
    msg.y = 0.39510052872443846;
    msg.z = 0.6354647257310017;
    msg.r_f = 0.14070045070660497;
    msg.p = 0.7531224361578321;

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
    msg.setTimeStamp(0.060096452192322625);
    msg.setSource(8297U);
    msg.setSourceEntity(65U);
    msg.setDestination(54197U);
    msg.setDestinationEntity(66U);
    msg.path_param = 0.9641890682663716;
    msg.x = 0.4802644362477596;
    msg.y = 0.8743715864495365;
    msg.z = 0.9582231077331849;
    msg.r_f = 0.33885627905072135;
    msg.p = 0.6371494012192688;

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
    msg.setTimeStamp(0.41053669872596465);
    msg.setSource(19062U);
    msg.setSourceEntity(109U);
    msg.setDestination(42147U);
    msg.setDestinationEntity(76U);
    msg.path_param = 0.26354708760559153;
    msg.x = 0.8341097235827463;
    msg.y = 0.3883273648032096;
    msg.z = 0.2763781901816875;
    msg.r_f = 0.2736547780290328;
    msg.p = 0.9409694206571996;

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
    msg.setTimeStamp(0.4521810998917296);
    msg.setSource(32923U);
    msg.setSourceEntity(211U);
    msg.setDestination(24768U);
    msg.setDestinationEntity(76U);
    msg.path_param = 0.17504341765827047;
    msg.x = 0.4373447484978308;
    msg.y = 0.8815223658925716;
    msg.z = 0.9640684675409708;
    msg.r_f = 0.6258528409181573;
    msg.p = 0.42948800833914136;

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
    msg.setTimeStamp(0.3425597213563901);
    msg.setSource(63518U);
    msg.setSourceEntity(240U);
    msg.setDestination(59023U);
    msg.setDestinationEntity(117U);
    msg.path_param = 0.526876739729255;
    msg.x = 0.0789386528381254;
    msg.y = 0.46463495671371957;
    msg.z = 0.6615351846558191;
    msg.r_f = 0.9467855063814653;
    msg.p = 0.2331868906139808;

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
    IMC::Obstacle msg;
    msg.setTimeStamp(0.18872139688852918);
    msg.setSource(63286U);
    msg.setSourceEntity(231U);
    msg.setDestination(17114U);
    msg.setDestinationEntity(188U);
    msg.x = 0.46369350778029284;
    msg.y = 0.5562305045679022;
    msg.v_x = 0.6965402267554398;
    msg.v_y = 0.20626565000713126;
    msg.t = 0.3269333670784438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Obstacle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Obstacle msg;
    msg.setTimeStamp(0.06844762329768828);
    msg.setSource(490U);
    msg.setSourceEntity(214U);
    msg.setDestination(15130U);
    msg.setDestinationEntity(36U);
    msg.x = 0.6742306919340355;
    msg.y = 0.12914421180273772;
    msg.v_x = 0.07183024714207653;
    msg.v_y = 0.18503493902675017;
    msg.t = 0.030119692187736136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Obstacle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Obstacle msg;
    msg.setTimeStamp(0.1439636740954786);
    msg.setSource(31382U);
    msg.setSourceEntity(176U);
    msg.setDestination(53723U);
    msg.setDestinationEntity(207U);
    msg.x = 0.765052955437122;
    msg.y = 0.15632088500319707;
    msg.v_x = 0.05854147354792061;
    msg.v_y = 0.8931983018607547;
    msg.t = 0.5276181465005804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Obstacle #2", msg == *msg_d);
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
