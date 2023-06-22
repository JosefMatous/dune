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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: f1a480023cccfd4eaf9c8624e562ffd5                            *
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
    msg.setTimeStamp(0.42166133398266303);
    msg.setSource(4705U);
    msg.setSourceEntity(190U);
    msg.setDestination(3642U);
    msg.setDestinationEntity(149U);
    msg.state = 54U;
    msg.flags = 118U;
    msg.description.assign("PHOSVCMDMZDQZKGEPVEJNHHJCMYGAFEPYUAWFPOECJOKRTUDJYJUHCAQSBENECUAVWDSGTP");

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
    msg.setTimeStamp(0.39270365153872144);
    msg.setSource(43108U);
    msg.setSourceEntity(32U);
    msg.setDestination(7368U);
    msg.setDestinationEntity(32U);
    msg.state = 86U;
    msg.flags = 67U;
    msg.description.assign("BKALACKZMAWZIEBHFDODGYIBQQMXTICFUDZBLVYWENVQOGCGUMRFULBYYZHYCCNWJZGHKNPHWUOHEGWOOEAQRKJKGAPFKVGOEDSUTLWVYHVWQLQDMVERYNXVCAITOKBOLDEXLWPDOKQSTLDRIBXHJUJNZUYNQHAJJXPSMXHPRJPFXJPIWSCGMRTXZRJEE");

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
    msg.setTimeStamp(0.986091441371192);
    msg.setSource(26438U);
    msg.setSourceEntity(93U);
    msg.setDestination(31711U);
    msg.setDestinationEntity(77U);
    msg.state = 90U;
    msg.flags = 32U;
    msg.description.assign("ADCPOMKLTBUXAGKUCOKLIYANWGUWUZTNFLEHMGBHENPDWRMHEJPUQPWTXSSSPZQDHIREFMKLQGCQQRDVW");

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
    msg.setTimeStamp(0.09096659192741141);
    msg.setSource(31001U);
    msg.setSourceEntity(11U);
    msg.setDestination(35364U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.8544373844015878);
    msg.setSource(51616U);
    msg.setSourceEntity(158U);
    msg.setDestination(20636U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.24746616700825297);
    msg.setSource(50487U);
    msg.setSourceEntity(39U);
    msg.setDestination(4269U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.18293276180660056);
    msg.setSource(52924U);
    msg.setSourceEntity(211U);
    msg.setDestination(7031U);
    msg.setDestinationEntity(224U);
    msg.id = 251U;
    msg.label.assign("EXRTVQWFILHWPORJBKQVHSUXFUUMPDIWCHJUTNRALFFVRFLUMMESKIBSVZZYMTNYGCTHWSGCBUCXFJOZTBKEXNZKAIOSOXHIJYRCDNRSQYCLI");
    msg.component.assign("TYVJYXLEBQWJVMYKXHJANIASDSCMCNEMWQNEUAXYYMJJFHXOWKVFLCAQTVIBAWBCBIJPUMVDCUZAMZRTFEUDLDPBYZHIRSAPKKXLLVJFHRUBBQMXET");
    msg.act_time = 46022U;
    msg.deact_time = 20563U;

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
    msg.setTimeStamp(0.7832224801134569);
    msg.setSource(52528U);
    msg.setSourceEntity(204U);
    msg.setDestination(50708U);
    msg.setDestinationEntity(106U);
    msg.id = 49U;
    msg.label.assign("HZPYARQJSELTEUQZLBKNMCHOCYWFFSRXGSEWFAXYBBIUTGKAOWINVTVFBMLPONHVACGDTAJG");
    msg.component.assign("MYRFHAQQTMMKJBEXRQSGLLSAIODGZKTTXBFNLPWHDJJCBLHFYWIEZNORRMGSSQRTSHFGTHYBQDOPHOUST");
    msg.act_time = 47737U;
    msg.deact_time = 2278U;

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
    msg.setTimeStamp(0.9585002072159273);
    msg.setSource(45678U);
    msg.setSourceEntity(250U);
    msg.setDestination(58190U);
    msg.setDestinationEntity(142U);
    msg.id = 187U;
    msg.label.assign("RKLIWBUHBDXCEZAHKGANFJQIXITYAWLTCLTRBTKGAWQODKTY");
    msg.component.assign("ZKVKDFYUDLEACQJLTMXYMFQCVHIYYACDUGZUTEUJBAOROSXXGJGFPCVMCNQALJZETAQLBGZHSAHKDKBRHZPQKIZVNVWRNUDREKWTBITDHSWHJWOUMFNPTHQMBYBTSIXBLQQFCZHGWTRVWGJPYSNJUTCOZKUFKYIARBOLFOKBDPLCPIEXNVAYZWAGOKXIGOIWSVEANRUVRGPNFCUSILDJQRRQNESZYLPNOVJBJEMWXEHISFPOW");
    msg.act_time = 59927U;
    msg.deact_time = 23478U;

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
    msg.setTimeStamp(0.7681101819657009);
    msg.setSource(32496U);
    msg.setSourceEntity(180U);
    msg.setDestination(50089U);
    msg.setDestinationEntity(48U);
    msg.id = 104U;

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
    msg.setTimeStamp(0.5418541958934657);
    msg.setSource(7863U);
    msg.setSourceEntity(6U);
    msg.setDestination(53876U);
    msg.setDestinationEntity(149U);
    msg.id = 69U;

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
    msg.setTimeStamp(0.0773051284881402);
    msg.setSource(62825U);
    msg.setSourceEntity(80U);
    msg.setDestination(21426U);
    msg.setDestinationEntity(217U);
    msg.id = 79U;

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
    msg.setTimeStamp(0.2996039538894505);
    msg.setSource(47948U);
    msg.setSourceEntity(249U);
    msg.setDestination(62260U);
    msg.setDestinationEntity(89U);
    msg.op = 237U;
    msg.list.assign("UWJPGJCBYVPAFTGJMSFYLAGRTJZREAYQAPPCHWRKWRESNEKCDSOLOFLYIZAODQOZHTDIVEUVERUZXBPVAMGHFQQJGRVENXWMKQABNHDLUPZVNSSBTVWKXPWNNKYTNFWOVNBJHTZIUZJZIWVAJZSEXCDWMOHCYKBTHOSMSOAPTYSRZVILHPTYTEOUDINKPOAKJNCRMCDQWXBHRUGKLMIXEXBGLMI");

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
    msg.setTimeStamp(0.5792192191140919);
    msg.setSource(16727U);
    msg.setSourceEntity(18U);
    msg.setDestination(39584U);
    msg.setDestinationEntity(1U);
    msg.op = 203U;
    msg.list.assign("YCPALSZCGIUYKEHFUKMEGOIHZSQWZIPZXQHNJSCBAQYRYIUJJFLUQPTRXEFFENOYQMRYLGIOBQHDSTNPLXHIOXOAPMRYYATRSVZSFIJEFQTRAUENAWBQQISCYIVRNVCVOHDXRQZXMHDLEWGAGKWDLMVUBBLDOWSNFXWRMVFDAZZGDRZNUJVGMDTCUJLWJKJDAKTHCWWEVVVTKBXPMS");

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
    msg.setTimeStamp(0.060118052939986066);
    msg.setSource(44847U);
    msg.setSourceEntity(244U);
    msg.setDestination(1264U);
    msg.setDestinationEntity(218U);
    msg.op = 183U;
    msg.list.assign("MRMFFDPCCVGOWTIATEVNUHCEHGPQMXSTTCUPWVAHBACAXPEQJYGFXNQVBKFAMDSIKTSKOGXYA");

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
    msg.setTimeStamp(0.4053784701371509);
    msg.setSource(32031U);
    msg.setSourceEntity(175U);
    msg.setDestination(46089U);
    msg.setDestinationEntity(112U);
    msg.value = 152U;

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
    msg.setTimeStamp(0.15535394629231647);
    msg.setSource(48938U);
    msg.setSourceEntity(224U);
    msg.setDestination(31267U);
    msg.setDestinationEntity(0U);
    msg.value = 128U;

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
    msg.setTimeStamp(0.12561439324391965);
    msg.setSource(15533U);
    msg.setSourceEntity(75U);
    msg.setDestination(19561U);
    msg.setDestinationEntity(8U);
    msg.value = 89U;

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
    msg.setTimeStamp(0.23011617684065466);
    msg.setSource(150U);
    msg.setSourceEntity(80U);
    msg.setDestination(62752U);
    msg.setDestinationEntity(53U);
    msg.consumer.assign("GDKXPLKMSMGOVVZRANZFCFAVUAVYUSOHNGIVTJURTBPOZTHZCWQKYEDKTEEHNPWRBBIKDFUSPSFOCVOUNLCZHSASMDWBAXVPLLWXEQRZUBKWIONCWGHDINQKMEWWRLHVSJLFICDYDVFGBMIAXZGPXPJKORQZQJBNSQYFXITQCMAJGYLQGUPYFZLFTYHMDJOPBXDJKXBNASNYYLRUMYJEJQEIGSTTJMIBAHAUGCNCEZXTOEURFPHHMTDQRI");
    msg.message_id = 4549U;

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
    msg.setTimeStamp(0.71251060933633);
    msg.setSource(39002U);
    msg.setSourceEntity(54U);
    msg.setDestination(2918U);
    msg.setDestinationEntity(80U);
    msg.consumer.assign("LCQIGUBPSIWCOYVRLMOUKJBOXVJBCQCLTIKASFBVNIIAAXROEVMATSHFZUEFEWYTACPIJGPYOFEJVZMLUQOBFXVCXROVOVIYPRCWYSYDBTOQFLBPVRQQFTQARZWBKGHQANMJCPCEUGZRZUETURSJHKIDFPX");
    msg.message_id = 9440U;

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
    msg.setTimeStamp(0.08607814854682316);
    msg.setSource(11565U);
    msg.setSourceEntity(190U);
    msg.setDestination(11751U);
    msg.setDestinationEntity(126U);
    msg.consumer.assign("PTHOFNQOBEDWQSXKAWPUXBEZJSEEDYSNOGITPCTTMHVWITBSHLTZAQNAENAOSCYUQVLOK");
    msg.message_id = 10441U;

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
    msg.setTimeStamp(0.3386162214229599);
    msg.setSource(31310U);
    msg.setSourceEntity(229U);
    msg.setDestination(63268U);
    msg.setDestinationEntity(83U);
    msg.type = 187U;

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
    msg.setTimeStamp(0.6793106390456658);
    msg.setSource(29258U);
    msg.setSourceEntity(83U);
    msg.setDestination(5024U);
    msg.setDestinationEntity(130U);
    msg.type = 149U;

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
    msg.setTimeStamp(0.3215970586490189);
    msg.setSource(20456U);
    msg.setSourceEntity(84U);
    msg.setDestination(16027U);
    msg.setDestinationEntity(237U);
    msg.type = 59U;

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
    msg.setTimeStamp(0.2267290873114085);
    msg.setSource(20145U);
    msg.setSourceEntity(219U);
    msg.setDestination(6233U);
    msg.setDestinationEntity(33U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.009445477803101121);
    msg.setSource(11685U);
    msg.setSourceEntity(56U);
    msg.setDestination(1336U);
    msg.setDestinationEntity(120U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.3629752937148284);
    msg.setSource(58306U);
    msg.setSourceEntity(54U);
    msg.setDestination(53932U);
    msg.setDestinationEntity(127U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.6264987907271887);
    msg.setSource(7102U);
    msg.setSourceEntity(94U);
    msg.setDestination(6042U);
    msg.setDestinationEntity(231U);
    msg.total_steps = 228U;
    msg.step_number = 65U;
    msg.step.assign("KSORKAAJQEEWFPVIOIVMCDNJMSYDELCLUGQHEELBTTYFZYFXHZAGVKSYXRCBCMZYOMVCOWDLZUK");
    msg.flags = 154U;

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
    msg.setTimeStamp(0.5172349401621772);
    msg.setSource(36279U);
    msg.setSourceEntity(13U);
    msg.setDestination(62825U);
    msg.setDestinationEntity(69U);
    msg.total_steps = 217U;
    msg.step_number = 11U;
    msg.step.assign("NSOAQTBBNZFRIWWRIURPUJNRVJGQWLROYQZVFCSZHRHXHZHTWXYEJUPESNGCJVWAGDQVPGKFEHLOHMOKFGLDJUNOZAEXYVTQKQPK");
    msg.flags = 137U;

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
    msg.setTimeStamp(0.5523248542256034);
    msg.setSource(51767U);
    msg.setSourceEntity(59U);
    msg.setDestination(54012U);
    msg.setDestinationEntity(21U);
    msg.total_steps = 14U;
    msg.step_number = 8U;
    msg.step.assign("MNQPKECNZEQJUUJBBKMSKPWXKYDVQJJEFMBBGVDQCMKNRJWTANLQUSEXRHOPPTGC");
    msg.flags = 132U;

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
    msg.setTimeStamp(0.3717621945019687);
    msg.setSource(15933U);
    msg.setSourceEntity(102U);
    msg.setDestination(20641U);
    msg.setDestinationEntity(125U);
    msg.state = 47U;
    msg.error.assign("WAZQDQDQNJGAMOZIERYYPQDJYGNLDSJSCHOLOZVRYDUWBCFORFFCWMUOEKRSHPEQAVZRUEURPJMSULJBQXOCKCGYXTTVIZWDEEHMRXQDVCOBFDFUIDSCCVKTNTFGWJZPGQCIJLNBFWXTHJMMNSUYDWILSNAUVYAGEIPMMQANKGSZZNKYMVLXBBLWXOPHKQVIHAYYZULEXASHMWRKPXTCXIKO");

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
    msg.setTimeStamp(0.627365730582524);
    msg.setSource(63537U);
    msg.setSourceEntity(201U);
    msg.setDestination(47607U);
    msg.setDestinationEntity(102U);
    msg.state = 68U;
    msg.error.assign("JEVCYAJOCPYOWHZLRNCYMBWBJSWLRWIBCOYPDDCXPWAQRTDGVWPZUZUEKFUBEGGKFIXNVAYLFDGUAICWEOOXNKKNDZZASUZBKHTEAMDYSYUUIOXRCGWHKNXRPMJVSOLZRFJQINRGMPKVELQGMSSLTLQZVIYMLQHPDFJQRPSXTQOHHINWBOGGKJHFXQTTEAPZIJSZOLERSEDUWFVHJMMMEXBBJTKIYCKIVMNAPHTCNTXVFNDUXFSBGVTHBCD");

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
    msg.setTimeStamp(0.8960973915754108);
    msg.setSource(43251U);
    msg.setSourceEntity(200U);
    msg.setDestination(36165U);
    msg.setDestinationEntity(141U);
    msg.state = 182U;
    msg.error.assign("GOOOEATSHQZNFCPKQNHIBADCVFBDMTTKNRFLGMUDKQSRMPJXKAUBCCIEMSJUFKTFZVOTPEJLMNJTEPWDWJLRUHWZNEMKWGBHNESVBGDJZQZGOSPZVWNOFCBWAXIVIQPBLEYYBDEHZGLRXXSRHLVHUUAJKAMSWUGJHXSSQWNRDVVFPPCFHGIACXQWNXLGLEAQYHNUDQOTLEISYBCDYTMQIVFTKKYRCCP");

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
    msg.setTimeStamp(0.591809742382292);
    msg.setSource(28672U);
    msg.setSourceEntity(118U);
    msg.setDestination(53073U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.31356870430639994);
    msg.setSource(59936U);
    msg.setSourceEntity(47U);
    msg.setDestination(59579U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.38356382152803015);
    msg.setSource(28809U);
    msg.setSourceEntity(184U);
    msg.setDestination(43191U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.5125712833905792);
    msg.setSource(6173U);
    msg.setSourceEntity(71U);
    msg.setDestination(55795U);
    msg.setDestinationEntity(16U);
    msg.op = 200U;
    msg.speed_min = 0.45792883154768027;
    msg.speed_max = 0.3783584446622892;
    msg.long_accel = 0.3529643686356727;
    msg.alt_max_msl = 0.4598759495870285;
    msg.dive_fraction_max = 0.23577302154183832;
    msg.climb_fraction_max = 0.25412100518689307;
    msg.bank_max = 0.01793287746073091;
    msg.p_max = 0.2923236981018129;
    msg.pitch_min = 0.007170932300117672;
    msg.pitch_max = 0.6023813237149129;
    msg.q_max = 0.9125940926515165;
    msg.g_min = 0.37209769861254316;
    msg.g_max = 0.6882605780889504;
    msg.g_lat_max = 0.7233619363147971;
    msg.rpm_min = 0.05571756586185883;
    msg.rpm_max = 0.013371062586811644;
    msg.rpm_rate_max = 0.9480417510092868;

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
    msg.setTimeStamp(0.8402016223637012);
    msg.setSource(29908U);
    msg.setSourceEntity(245U);
    msg.setDestination(13558U);
    msg.setDestinationEntity(91U);
    msg.op = 37U;
    msg.speed_min = 0.8450814528911819;
    msg.speed_max = 0.5669422160495843;
    msg.long_accel = 0.872104203648842;
    msg.alt_max_msl = 0.9454800330184319;
    msg.dive_fraction_max = 0.49599115254261217;
    msg.climb_fraction_max = 0.28682664802184066;
    msg.bank_max = 0.7428827148660389;
    msg.p_max = 0.7314337767232636;
    msg.pitch_min = 0.7633044686901895;
    msg.pitch_max = 0.47395158271706206;
    msg.q_max = 0.2896210278070689;
    msg.g_min = 0.02619663761899227;
    msg.g_max = 0.20810907650785648;
    msg.g_lat_max = 0.22361332923078847;
    msg.rpm_min = 0.4713675481383016;
    msg.rpm_max = 0.24277647636876898;
    msg.rpm_rate_max = 0.9996371751320824;

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
    msg.setTimeStamp(0.9282876666809237);
    msg.setSource(63144U);
    msg.setSourceEntity(175U);
    msg.setDestination(27684U);
    msg.setDestinationEntity(118U);
    msg.op = 142U;
    msg.speed_min = 0.9785863783208799;
    msg.speed_max = 0.4882887400660706;
    msg.long_accel = 0.9218289116161064;
    msg.alt_max_msl = 0.05088777649838372;
    msg.dive_fraction_max = 0.6526750541956998;
    msg.climb_fraction_max = 0.5705089914893763;
    msg.bank_max = 0.010669931295479218;
    msg.p_max = 0.452211598937872;
    msg.pitch_min = 0.3401516857849006;
    msg.pitch_max = 0.41738207675487204;
    msg.q_max = 0.943454197898643;
    msg.g_min = 0.35771184964735625;
    msg.g_max = 0.8057984438288937;
    msg.g_lat_max = 0.6447435672264977;
    msg.rpm_min = 0.7549448797854633;
    msg.rpm_max = 0.5103405674560182;
    msg.rpm_rate_max = 0.26808167908745595;

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
    msg.setTimeStamp(0.5052614084026488);
    msg.setSource(43365U);
    msg.setSourceEntity(26U);
    msg.setDestination(32174U);
    msg.setDestinationEntity(37U);
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.23935383686470468;
    tmp_msg_0.roll = 52550U;
    tmp_msg_0.pitch = 19893U;
    tmp_msg_0.yaw = 55565U;
    tmp_msg_0.speed = 4061;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9951626034633513);
    msg.setSource(47095U);
    msg.setSourceEntity(66U);
    msg.setDestination(8276U);
    msg.setDestinationEntity(17U);
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 59213U;
    tmp_msg_0.lat = 0.5919310682388564;
    tmp_msg_0.lon = 0.8205707078294706;
    tmp_msg_0.z = 0.7134411315296979;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.speed = 0.7561934008418;
    tmp_msg_0.speed_units = 112U;
    tmp_msg_0.bearing = 0.07975580091732326;
    tmp_msg_0.width = 0.8433579566456455;
    tmp_msg_0.direction = 37U;
    tmp_msg_0.custom.assign("STABSYFVVGRGNUMTWMIWAHDHTURJQLWAIZZWLMSCQDFBBPHKCVNCMZBEDSJJQOFXOFKISRCEVWWCWYPWNYOMFATSRIVHLMEGAZFEPZOBD");
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
    msg.setTimeStamp(0.46087022585265947);
    msg.setSource(2007U);
    msg.setSourceEntity(174U);
    msg.setDestination(51694U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.24281120163149206);
    msg.setSource(15515U);
    msg.setSourceEntity(92U);
    msg.setDestination(18565U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.10895403381008528;
    msg.lon = 0.8801765785645116;
    msg.height = 0.01654475803579769;
    msg.x = 0.3818092079342619;
    msg.y = 0.232342172479015;
    msg.z = 0.5762695544485672;
    msg.phi = 0.17395763647343454;
    msg.theta = 0.02513294604288152;
    msg.psi = 0.2374021957156991;
    msg.u = 0.8721631507232723;
    msg.v = 0.9143077838419107;
    msg.w = 0.776874045391394;
    msg.p = 0.9600257599961095;
    msg.q = 0.004423689982750334;
    msg.r = 0.36046731590612036;
    msg.svx = 0.9669399583355941;
    msg.svy = 0.914347647018508;
    msg.svz = 0.9109203544194474;

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
    msg.setTimeStamp(0.8014816807636239);
    msg.setSource(46915U);
    msg.setSourceEntity(254U);
    msg.setDestination(29410U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.19193481318400218;
    msg.lon = 0.11039894913624082;
    msg.height = 0.9065951581365602;
    msg.x = 0.8742851920293998;
    msg.y = 0.6065023475232254;
    msg.z = 0.9932179474802578;
    msg.phi = 0.8336688616799962;
    msg.theta = 0.22087724401016184;
    msg.psi = 0.7058587564388571;
    msg.u = 0.02167751161409881;
    msg.v = 0.17266162236691784;
    msg.w = 0.3823418695318763;
    msg.p = 0.19497572326101897;
    msg.q = 0.815404783532903;
    msg.r = 0.9621505727975073;
    msg.svx = 0.3368542439673732;
    msg.svy = 0.7136767486617543;
    msg.svz = 0.4944067156777887;

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
    msg.setTimeStamp(0.8374714283573669);
    msg.setSource(36520U);
    msg.setSourceEntity(157U);
    msg.setDestination(30912U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.2506202736309976;
    msg.lon = 0.5070811495912163;
    msg.height = 0.6786446311344275;
    msg.x = 0.25026898339066705;
    msg.y = 0.8648573149622721;
    msg.z = 0.2840379926509147;
    msg.phi = 0.7174765106833686;
    msg.theta = 0.3404337573134011;
    msg.psi = 0.49163200428441656;
    msg.u = 0.3933070929078798;
    msg.v = 0.1960905554046617;
    msg.w = 0.39492063531432586;
    msg.p = 0.29088836027754383;
    msg.q = 0.767075582057635;
    msg.r = 0.9736443162365095;
    msg.svx = 0.5220799665390109;
    msg.svy = 0.16390212444157815;
    msg.svz = 0.8612486488072623;

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
    msg.setTimeStamp(0.8165965583316472);
    msg.setSource(62083U);
    msg.setSourceEntity(27U);
    msg.setDestination(63289U);
    msg.setDestinationEntity(174U);
    msg.op = 147U;
    msg.entities.assign("PKRTNYDWKCPTWLQBSHBSDALXVEUEJTHCAUQGOIZVALQQNFJKCGOTDYXBFBO");

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
    msg.setTimeStamp(0.5322004978751749);
    msg.setSource(6642U);
    msg.setSourceEntity(128U);
    msg.setDestination(33282U);
    msg.setDestinationEntity(23U);
    msg.op = 84U;
    msg.entities.assign("XJOBXHZEAPACZQYRXFWNDRGIADKKFCSBLOAOEDKHECMSYBDXWGYSXOAPWEUINDWABGSSGFOQW");

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
    msg.setTimeStamp(0.9707151806115435);
    msg.setSource(50220U);
    msg.setSourceEntity(45U);
    msg.setDestination(40624U);
    msg.setDestinationEntity(7U);
    msg.op = 125U;
    msg.entities.assign("SIRDONADMZPMXHBZGWMVBMJNFQUIMOXXUEISDZFXMVEHQBECMGRAFRQBREZJXGKMWBZWFUKCPBDLHYSXXSUCKEOAZFEUTR");

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
    msg.setTimeStamp(0.7749136177555755);
    msg.setSource(11674U);
    msg.setSourceEntity(82U);
    msg.setDestination(37169U);
    msg.setDestinationEntity(2U);
    msg.type = 201U;
    msg.speed = 25369U;
    const signed char tmp_msg_0[] = {-105, -111, 14, -108, 106, -50, 120, 13, 100, -41, 53, -38, 66, 59, 8, -71, 64, -25, 11, 93, 55, -51, -38, -45, 75, -80, 77, 74, 117, -75, -50, -56, 96, -12, -88, 29, -7, -117, 5, -61, -32, -106};
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
    msg.setTimeStamp(0.6591764109314274);
    msg.setSource(39262U);
    msg.setSourceEntity(108U);
    msg.setDestination(4276U);
    msg.setDestinationEntity(224U);
    msg.type = 48U;
    msg.speed = 48137U;
    const signed char tmp_msg_0[] = {-36, -71, 74, 79, -46, 109, 5, -10, 115, -33, 95, 52, 41, -1, 81, 54, 55, -56, -120, 122, 43, 2, -100, 100, 9, 79, 97, -73, 40, -4, -29, -108, -1, 46, 51, -28, -81, -90, -111, -3, 78, 48, -33, 70, -45, -111, -46, -24, 7, 104, -128, -31, 19, -84, -48, 65, 62, 118, 76, 119, -29, 98, -31, -111, -118, 55, 20, -96, 121, -106, -9, 83, 73, -20, -92, 93, -14, 70, 33, 60, -65, 9, 77, 28, 25, -28, 22, 29, -75, -70, 23, -75, -89, -31, -22, 30, -44, 3, -85, 40, -60, -41, 99, 88, 99, -90, 24, -25, -53, 119, 74, 50, 96, 99, -85, -27, -61, -40, -119, 47, 70, 27, -35, 69, -99, 93, 120, 123, 125, 46, 111, 92, 38, 40, -75, 74, -58, 80, -84, -99, 25, -64, -49, -55, -36, 98, 7, -99, -40, 29, -65, -95, -77, -23, 105, -46, 11, -90, 14, -55, 27, 32, -42, 65, -126, -31, -125, -74, -122, 108, -65, 98, 54, -37, -86, 41, 48, -111, -104, 123, -4, -82, 79, 110, 48, -73, -62, -105, 123, 89, -115, 40, -66, -62};
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
    msg.setTimeStamp(0.4725243189441759);
    msg.setSource(21063U);
    msg.setSourceEntity(238U);
    msg.setDestination(56809U);
    msg.setDestinationEntity(192U);
    msg.type = 200U;
    msg.speed = 60634U;
    const signed char tmp_msg_0[] = {109, -105, -85, -16, 6, -1, 4, 18, 118, 32, -11, -10, -30, -22, -53, -43, -77, 52, 24, -105, -2, 51, -22, -55, 87, 66, 61, -37, -30, 65, 51, 28, 45, -117, 41, 12, -94, 68, 16, 121, -86, -92, -50, 112, -34, 60, -46, -91, 83, -43, -11, -24, -22, -123, -114, -62, -48, -88, -63, -31, 52, 106, -94, -50, 70, 123, 90, -119, -45, -18, 119, 106, -82, -16, -39, -106, 83, 125, 17, -53, 121, -90, 49, -10, 35, 99, -99, 36, -77, 81, -93, 58, 119, -79, -14, 61, 34, 45, 41, 76, -44, -17, 72, -125};
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
    msg.setTimeStamp(0.2505617691290337);
    msg.setSource(5330U);
    msg.setSourceEntity(217U);
    msg.setDestination(33614U);
    msg.setDestinationEntity(155U);
    msg.op = 28U;
    msg.tas2acc_pgain = 0.4376684113048511;
    msg.bank2p_pgain = 0.16455182764991427;

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
    msg.setTimeStamp(0.050443060155893726);
    msg.setSource(39605U);
    msg.setSourceEntity(62U);
    msg.setDestination(2404U);
    msg.setDestinationEntity(19U);
    msg.op = 56U;
    msg.tas2acc_pgain = 0.028110565190770043;
    msg.bank2p_pgain = 0.2804981743093846;

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
    msg.setTimeStamp(0.5389001164255675);
    msg.setSource(9575U);
    msg.setSourceEntity(241U);
    msg.setDestination(23434U);
    msg.setDestinationEntity(212U);
    msg.op = 24U;
    msg.tas2acc_pgain = 0.026005006159319333;
    msg.bank2p_pgain = 0.8761655645532646;

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
    msg.setTimeStamp(0.9864064632133666);
    msg.setSource(30776U);
    msg.setSourceEntity(104U);
    msg.setDestination(12008U);
    msg.setDestinationEntity(16U);
    msg.available = 2216384580U;
    msg.value = 75U;

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
    msg.setTimeStamp(0.08324763995049844);
    msg.setSource(15545U);
    msg.setSourceEntity(250U);
    msg.setDestination(60098U);
    msg.setDestinationEntity(218U);
    msg.available = 1146215067U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.16007800578475795);
    msg.setSource(6703U);
    msg.setSourceEntity(27U);
    msg.setDestination(34449U);
    msg.setDestinationEntity(141U);
    msg.available = 824605568U;
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
    msg.setTimeStamp(0.3348716337073111);
    msg.setSource(16206U);
    msg.setSourceEntity(210U);
    msg.setDestination(59941U);
    msg.setDestinationEntity(247U);
    msg.op = 242U;
    msg.snapshot.assign("DJAICCGMJQELVLPRXMWVIDMZJEXHDOHIOFPYKLDAGVHNSKKWHTBJGBKHLTYPBGWTYHSVBIVPAOFVFASFNPTMLXYNIZQUROGACJEFUXPWXIRNSILBNKQMWTRJQORFSKCYXIGDZVSYDHICQXKNSHLBEXYFNYENGKMOENZMPHDYSTGSCFQOZPJPZCVPZCIDGUQHDMJBORBWBWOVWARURMQUOCJAXURT");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 25U;
    tmp_msg_0.mask = 1700916520U;
    tmp_msg_0.scope_ref = 2705407533U;
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
    msg.setTimeStamp(0.4753246375282767);
    msg.setSource(17886U);
    msg.setSourceEntity(181U);
    msg.setDestination(59887U);
    msg.setDestinationEntity(240U);
    msg.op = 62U;
    msg.snapshot.assign("CITWIZDFYXLPTQNJDJMRBUSHPUNVURLTMPAQJAMZVMRSPOGQJGUSKVPOWYSFDNMEFBITYKKZKSSHGOTSFANNGTUVSXYEETSANCHFUIYBAWNVILNYJZIEKRXPCWMQEVEHARZEOPKRJDMJFKXGHPIFHILPHDLEFFXPBOQILBOBABRKMWURKNZQYDXLAXDCCDJLZNDCFOCAJGYTHZCOTVCLE");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("SSKISPJNYBBRJADXEOHNTRQNXFCWCJWAAEWKGRLIJYKXUYCEIIAUUQQFWYXIIFWXCRJVZTEWNATRFJSZFZUGVPQEMHSFZAROHKBDTNOAMQUHOHBHMLJSDRWGCHGCKNKVQZYWVGGJLCP");
    tmp_msg_0.dest_man.assign("RCIEZVPLESOWSELBQCPDAMVJKHOWOQDVCVTLKFPGWKJVBPBXLQMUEWYRBYCAXIITMTRCIUSHHAZDYEYITUPEOFDFJBEZGANMBNLSUXZGFTJURLUUSGSVIXBEZHDQVLW");
    tmp_msg_0.conditions.assign("GVAHAWHTOMCJJAONETRUONSKJRGHYIHBBSVEQKOSUQIXDAIEZGBNHYGNRRLF");
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
    msg.setTimeStamp(0.409244836091499);
    msg.setSource(53465U);
    msg.setSourceEntity(158U);
    msg.setDestination(52564U);
    msg.setDestinationEntity(119U);
    msg.op = 75U;
    msg.snapshot.assign("VOXRKPNBRIHCRJOSTJIUAGBCVDREKPBVNJECKYXZVQHTFHIFGYQQBNTHTGWPUAUQVAQMADSSOEIEVIPYJVNAKPZZKJMXUBEJSQOHYUCMTRVBOFJNYTZDTCAWIESCLLDGFVMLEKAEDKBFINBPOQIXHGTUPWGMEWZBSKTQDU");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.7176914800395368;
    tmp_msg_0.lon = 0.5148083907276012;
    tmp_msg_0.z = 0.8363094183187787;
    tmp_msg_0.z_units = 194U;
    tmp_msg_0.radius = 0.2775130728328771;
    tmp_msg_0.duration = 2832U;
    tmp_msg_0.speed = 0.13999902055194202;
    tmp_msg_0.speed_units = 87U;
    tmp_msg_0.popup_period = 36957U;
    tmp_msg_0.popup_duration = 8464U;
    tmp_msg_0.flags = 134U;
    tmp_msg_0.custom.assign("TUSITWMNUGVLBRMLXHZWFTHDMRHWYVAUKOYNUBWMQXBKYXGPSSGPYNH");
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
    msg.setTimeStamp(0.5475165011881272);
    msg.setSource(37488U);
    msg.setSourceEntity(215U);
    msg.setDestination(2918U);
    msg.setDestinationEntity(22U);
    msg.op = 59U;
    msg.name.assign("HEVSKNMSERKWHGSVRKKQDCTEGCHVXMFBYRIYSXNDBEQEJJXIQTMJQDPGRIMAOQFKSZVHCMDZATLQOLHUVVYHAMCYAUWOECWEDBBTSIFHGJJKXOCHWQUPDRUXANZENLOTJYPNCUEJYFYKXSWBMFOHGVULFPZNZCLMRYXEIUZTPZJGCQISTYIWFP");

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
    msg.setTimeStamp(0.1407553155916158);
    msg.setSource(5447U);
    msg.setSourceEntity(98U);
    msg.setDestination(3309U);
    msg.setDestinationEntity(129U);
    msg.op = 112U;
    msg.name.assign("WADBPNUYNIOKGJTTNURCLSTPUIISWGVRROLVLHWCMFCHKKXKRHLXBGEKDYUTKERFZQPCEAUXOEOYFSWSAYGHTIWIVKVMBOXPRAXMEDUXIMSSCIWBWTUFVFPYXDZCBWMNDZUNQTSQDFFKQOPEGQSBLYYMCOHXVJMGUHGQJEAZVXJPEGLJZMEYQDPCWOHKBVGQJVFIIAOABAEMNZNBZCFDN");

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
    msg.setTimeStamp(0.2961828969557586);
    msg.setSource(15975U);
    msg.setSourceEntity(8U);
    msg.setDestination(49108U);
    msg.setDestinationEntity(90U);
    msg.op = 97U;
    msg.name.assign("TSLAKDZUWOHUXZMSSLUPGIOVHJNSKQSGFZNDOCKAKXQSFZPNYAIUMRMSVXUXXLGHKPYBAFFXGWCCFQKXJBKYTTHINKLORJDRGOAFHBQGLFWCSNEUDEG");

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
    msg.setTimeStamp(0.6830611503733736);
    msg.setSource(28638U);
    msg.setSourceEntity(106U);
    msg.setDestination(17521U);
    msg.setDestinationEntity(240U);
    msg.type = 194U;
    msg.htime = 0.5843247291674464;
    msg.context.assign("YYYPZDSVIQPCXPHWHLJFDRGJNMLWXFOFEUWOETLKTQGZRIWVVPLQULHKDCLHUBHWSKBTTFFARNDECARVNQQALFVNLSGBWLSCIPGZEGYKIBSUEGNMKMQXUOMIMZBZIPHJWBUEMPJXRQSRKUYTWGCYDXSCDKVSZWAMXRJBVNYZATIQNOZFTDBRKNPAIAZAOWUTVJXJEOJGAOFGUQMMJOBZOYDRFC");
    msg.text.assign("NXHESRRCUGYEWCPXATLCVGDGOMLQIQNIGLBYDKQSEIYZIBHTWCHXFQMFEGNRKFASHKSUJXRZYITVZDTZPTSPZZNOMOYJPNBLLVLHDGPHELEKADSFOERWVY");

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
    msg.setTimeStamp(0.8098757075124259);
    msg.setSource(28613U);
    msg.setSourceEntity(89U);
    msg.setDestination(35136U);
    msg.setDestinationEntity(176U);
    msg.type = 129U;
    msg.htime = 0.49770733849780535;
    msg.context.assign("XDYCPCYFFMHVOUSZILEWIRATRDJRIFDQGATVZKGJQFZBLLLOLIBNEIFMYOLUXEEXUNODSVFDSKOCPCKWNXYPGOEZYVELUQUKVKNUYUBSVGCXLGEJGSDABVKFJRIWTMORTRQGYBPDVWATNMCIKZWDRQPSHRPPZNZNKMBXOXRFUJACCXMAPJKHSUE");
    msg.text.assign("PXLFFITWJAZQZLTCEGTBREPODRUHKTDYHIJYAAMSXDPRCHGNOVBACHNAKMQRTYKNIZNMIXNVPUBCEESWEIDRSPJKYGZPXSGCWOFXEINYHDGAAXDBTXDHSIS");

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
    msg.setTimeStamp(0.5287759379326279);
    msg.setSource(5579U);
    msg.setSourceEntity(143U);
    msg.setDestination(30653U);
    msg.setDestinationEntity(135U);
    msg.type = 198U;
    msg.htime = 0.6603927235305219;
    msg.context.assign("GVLTQMLYQLWWVFMILNCXDZLGVGTYKOAINDMRHFSPKWXIDZRGECTFUPYQXRIKKMFCPNKMKQGVHJABZWDTFVBURIITTEMWAQRYSYOMPCACOSMPEBGYKFOJVMOBHHTSDXUEOOEUNDPLJVJYAATVBWHCKUUXCROGIUBSIJWNAJCZNBDZSENKWXEZZXFFDQCZBVRJHRAQFPNSTXXHBSPDLESTEA");
    msg.text.assign("DZVQCSMCAQGBPZVCSDZAPZYDEKYKBYCYOWOBGJASM");

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
    msg.setTimeStamp(0.6705176990408526);
    msg.setSource(63200U);
    msg.setSourceEntity(108U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(149U);
    msg.command = 116U;
    msg.htime = 0.7570800266855775;

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
    msg.setTimeStamp(0.29095794217331916);
    msg.setSource(27672U);
    msg.setSourceEntity(22U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(217U);
    msg.command = 45U;
    msg.htime = 0.7598918107920873;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 201U;
    tmp_msg_0.htime = 0.21175580463605426;
    tmp_msg_0.context.assign("UKUIOXOCVDLJKOFDKCORYSBKSTQWQLFYPNIVDVRZIYZAURPZCOIOBUDKMWKURXJGPCUFHMWXGFVPEGSPNRUBPBZSOKQJRGXQFTHACXXTHNWPMQLERBENGEHLOOLBCTEVFNLGZNXNIYSCJDPGHHMYUWMBCHCTYBAYNJWRFVDTACZZAGJKTRYTMPTASKDSLBQZWWIJFMGXHIEDQIPWQBELVISSUNAVZRGUVJDAKE");
    tmp_msg_0.text.assign("AVEQSDHUBKQYKFGUWTRSREXPZPAHJVAQ");
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
    msg.setTimeStamp(0.8670204845050697);
    msg.setSource(34082U);
    msg.setSourceEntity(12U);
    msg.setDestination(51635U);
    msg.setDestinationEntity(101U);
    msg.command = 229U;
    msg.htime = 0.03254054053161537;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 249U;
    tmp_msg_0.htime = 0.16952437325255332;
    tmp_msg_0.context.assign("KHXGCNJPYDINWUCJTUAOYCWDRXRQIIEEKIXSLNABZFWVTFKZCXOREDZUJFPTIQMAYSJDVZTCCICBPHCIGAUKKFSKLSUXOQOODNVVTZQYJQFPIVKATWRSGMNRLJEGRVWDFBZRKWBLGLAXMLPGXLOBOLEPYMEPLIYTESEVXJZKZUFNVWSHQRRGQUYZNHWXGBTYVBCMCBPD");
    tmp_msg_0.text.assign("XSRGHJLOQVPVMEARPHFCRMEHWNOYCVZDWOUCWLIBZZJUOTDFMXCIOKSHXMHFHOZLGJRDEYEBNLWNCDTTBZFJDWUJDFAIWYYJQVQAKJUCTCMANAZUUGHLWMQJKYNNWHRHTZKERQUGPLEURRNSDOPPTLXNDUKCOIZRXALFJGMRBGTGXELKXSWVISFGHPIUESPTBKPPAJXYQGVBMFKBCWPVAYFYONLDEQZNMSQBKXIAE");
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
    msg.setTimeStamp(0.8842457864806725);
    msg.setSource(61561U);
    msg.setSourceEntity(86U);
    msg.setDestination(61961U);
    msg.setDestinationEntity(131U);
    msg.op = 160U;
    msg.file.assign("CHQSYULXIGARYCURWCFKKGZUCJOCEBSNUHHMJSGVXPYIWLQCUEUNTGSDPFORAJQWLSCAGZWLOFNETTIDQDSNUZJJVLKRFOHGEMMZSJYTAKNWVUCMAWYWOMVPHLDFNSNOYKMPXQLRRUYZPIHSBTEIOPZIBPDXNOWNPX");

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
    msg.setTimeStamp(0.9334953387475047);
    msg.setSource(43396U);
    msg.setSourceEntity(148U);
    msg.setDestination(31907U);
    msg.setDestinationEntity(226U);
    msg.op = 84U;
    msg.file.assign("IQQWXZHTATDDTXNNRXIGWSXYHYYAIZLAJQIUGCZRFWVNBHNWMIKBMDVCRFPOXVURPFEACJBJWPHRPOCKXJTEIYJXIEYBEKLQSZEEFMWSZJPNSNTHSALHPUQAFAVOWFBBOOEOMBTCAMTGSPUUPZOERMFXGLTZCQYWHWUHLUYBGPKMODIJGJTOTSLI");

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
    msg.setTimeStamp(0.5191134313405201);
    msg.setSource(42017U);
    msg.setSourceEntity(221U);
    msg.setDestination(58152U);
    msg.setDestinationEntity(98U);
    msg.op = 63U;
    msg.file.assign("IXACGIORPTGVLQMHDWJYDUQJZYURQXKQHSBWPVFKMISYDYVPYFDDCXTFFTIUGQSXMXIVSNENGOLVPXXOLRSVKTGBEUBJWYPXUVSZZULTSATNDMYKIECBPULKMHZIAORYUTRVKZJFGFASOQDTNNLCNRJOCSECBHLOINTWJGMMZECKWJCMFFPGHPZHWGRDQAHJPQROBIOFOLXJZSRBNTDWQHAWXYKEDLACAIKRZGVBWCKEEJUBYMAEHLV");

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
    msg.setTimeStamp(0.2084832997714866);
    msg.setSource(34909U);
    msg.setSourceEntity(146U);
    msg.setDestination(40230U);
    msg.setDestinationEntity(76U);
    msg.op = 232U;
    msg.clock = 0.9405068612483048;
    msg.tz = -47;

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
    msg.setTimeStamp(0.5111931090492527);
    msg.setSource(3313U);
    msg.setSourceEntity(82U);
    msg.setDestination(35539U);
    msg.setDestinationEntity(235U);
    msg.op = 236U;
    msg.clock = 0.10116454537164987;
    msg.tz = 89;

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
    msg.setTimeStamp(0.9076488079488911);
    msg.setSource(27828U);
    msg.setSourceEntity(125U);
    msg.setDestination(35039U);
    msg.setDestinationEntity(166U);
    msg.op = 41U;
    msg.clock = 0.3426744123864025;
    msg.tz = 31;

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
    msg.setTimeStamp(0.16423738449293257);
    msg.setSource(35196U);
    msg.setSourceEntity(244U);
    msg.setDestination(53126U);
    msg.setDestinationEntity(216U);
    msg.conductivity = 0.8949316930034759;
    msg.temperature = 0.9400705994871833;
    msg.depth = 0.06461714284585118;

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
    msg.setTimeStamp(0.5762679586373607);
    msg.setSource(13435U);
    msg.setSourceEntity(227U);
    msg.setDestination(39314U);
    msg.setDestinationEntity(107U);
    msg.conductivity = 0.17616004375573213;
    msg.temperature = 0.056878782187906984;
    msg.depth = 0.6039376202170577;

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
    msg.setTimeStamp(0.09710832502374667);
    msg.setSource(15173U);
    msg.setSourceEntity(98U);
    msg.setDestination(37045U);
    msg.setDestinationEntity(37U);
    msg.conductivity = 0.7435268293681315;
    msg.temperature = 0.18155730154750727;
    msg.depth = 0.04315805838995468;

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
    msg.setTimeStamp(0.2733614265917371);
    msg.setSource(26930U);
    msg.setSourceEntity(64U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(75U);
    msg.altitude = 0.8162097888034562;
    msg.roll = 46945U;
    msg.pitch = 24737U;
    msg.yaw = 40434U;
    msg.speed = -11654;

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
    msg.setTimeStamp(0.5194660240437868);
    msg.setSource(4902U);
    msg.setSourceEntity(44U);
    msg.setDestination(35790U);
    msg.setDestinationEntity(232U);
    msg.altitude = 0.6160290645297934;
    msg.roll = 739U;
    msg.pitch = 5393U;
    msg.yaw = 46035U;
    msg.speed = 6513;

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
    msg.setTimeStamp(0.4411576843737727);
    msg.setSource(24690U);
    msg.setSourceEntity(26U);
    msg.setDestination(11760U);
    msg.setDestinationEntity(54U);
    msg.altitude = 0.8806863175364507;
    msg.roll = 42322U;
    msg.pitch = 48616U;
    msg.yaw = 1023U;
    msg.speed = 12055;

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
    msg.setTimeStamp(0.645766697927263);
    msg.setSource(58840U);
    msg.setSourceEntity(40U);
    msg.setDestination(22486U);
    msg.setDestinationEntity(32U);
    msg.altitude = 0.3149554995175713;
    msg.width = 0.7310322790762099;
    msg.length = 0.7629025161148362;
    msg.bearing = 0.5606277747195667;
    msg.pxl = 6530;
    msg.encoding = 29U;
    const signed char tmp_msg_0[] = {-26, 11, -104, 30, -125, -89, 113, -110, -58, 51, -18, -75, 125, -40, 38, -68, -125, 5, 83, 36, -39, 36, -110, 74, 101, 81, -46, 114, 22, 51, 30, 8, -77, -84, -82, -113, 53, -50, -41, 66, 113, 34, -118, 61, 68, -109, 84, 19, -77, -77, -36, -24, -115, -128, -112, 76, 25, 16, 32, -11, 91, -77, -124, 17, -44, 68, 91, 15, 76};
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
    msg.setTimeStamp(0.6703953453061448);
    msg.setSource(4484U);
    msg.setSourceEntity(101U);
    msg.setDestination(49660U);
    msg.setDestinationEntity(3U);
    msg.altitude = 0.40313164228870646;
    msg.width = 0.15370479663801873;
    msg.length = 0.35980303020012594;
    msg.bearing = 0.2534055453748685;
    msg.pxl = -1869;
    msg.encoding = 121U;
    const signed char tmp_msg_0[] = {-101, -123, -7, -30, -43, -49, -94, 79, -9, 119, 25, 44, 114, 114, -109, -33, 28, -61, -60, -84, 114, 28, -54, 36, 18, 120, 56, -121, 16, -99, 123, -89, -60, -24, -7, 38, 95, -79, 1, 118, 74, 26, 48, -11, -9, 48, -84, 114, 28, -82, -30, 25, -87, 19, -44, -73, 76, 101, -93, -27, -56, -98, -45, -127, -118, 80, 3, 47, 2, 68, 126, 120, -70, -112, 95, 71, -18, 37, -7, 76, -21, -26, -92, 33, 1, 38, 80, 18, 50, -56, 112, 34, 6, 32, -29, -46, -11, 0, 82, 76, 109, 106, 27, 19, 33, 6, 22, 78, -104, 89, -56, -78, 28, -66, -39, -97, 88, 97, 107, 70, -67, -32, -72, 27, 95, -106, -74, -69, 70, -97};
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
    msg.setTimeStamp(0.6236768996842581);
    msg.setSource(7262U);
    msg.setSourceEntity(183U);
    msg.setDestination(48447U);
    msg.setDestinationEntity(79U);
    msg.altitude = 0.928201636866429;
    msg.width = 0.9547858270540779;
    msg.length = 0.4025644084695934;
    msg.bearing = 0.6401882160567505;
    msg.pxl = -25642;
    msg.encoding = 72U;
    const signed char tmp_msg_0[] = {-108, -19, -74, -19, -63, -111, -98, 37, 101, -58, 75, -21, 79, -27, -22, 23, 74, -99, -127, -75, 78, 18, 18, 51, -62, 90, -94, 13, 24, 103, -42, 119, -31, 67, 64, 97, -106};
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
    msg.setTimeStamp(0.6816829270964627);
    msg.setSource(21065U);
    msg.setSourceEntity(74U);
    msg.setDestination(48832U);
    msg.setDestinationEntity(174U);
    msg.text.assign("DXHMDWSMPKWSPGEFIWJFZLGQYLVLUXAEVJUOPRHILGUGTGJTAPKIEOPANORKQZGUMHUZARTIARZZWRSQOOUQBSDNHJMMCIFUVBVJBNXAAQNNCKQLPMCHMKOTVRKEPHVOIYLXVCXVZXRXXNUDICKKPJYKENYXQTM");
    msg.type = 245U;

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
    msg.setTimeStamp(0.38385589324991365);
    msg.setSource(50686U);
    msg.setSourceEntity(16U);
    msg.setDestination(51884U);
    msg.setDestinationEntity(14U);
    msg.text.assign("ALCQPXDKVZMRBGMJKIYBJKYHBLGCNWTYLBFSQRXWFEFTBCXLLOPJQZFVACWMQZDGPEJEXMNHZVEPLFPCDWGSOFXVWBYHYIDSTRXGXURCUJZWNCSOAYASGZPHVBUJEIMIT");
    msg.type = 244U;

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
    msg.setTimeStamp(0.4721305435885349);
    msg.setSource(62981U);
    msg.setSourceEntity(195U);
    msg.setDestination(29064U);
    msg.setDestinationEntity(77U);
    msg.text.assign("OWVVFELQJTTLETTHRMYUKMZQAGOXGVWAZGZYZGPRRLRMYQOYPDQCKITOUHIEDSJCWQKJVLZYDBNLPKFAAGUQMBRPDBNSCTYJUREJLBRKOUEGMSGAOSSXNVZFMZQLNAVXNUOLFEMUSTWDFPMEFGNBTPJJFAXJVYBWWQWUEHIRDLRNPFCVXHZIPDTEHVOYSFBASBYCMUHIXGZDPCCINFDBKWIKRKIGXOENKKTWWXACHQOIICJHHQZPMNY");
    msg.type = 2U;

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
    msg.setTimeStamp(0.3080645176218971);
    msg.setSource(19571U);
    msg.setSourceEntity(208U);
    msg.setDestination(48140U);
    msg.setDestinationEntity(14U);
    msg.parameter = 18U;
    msg.numsamples = 131U;
    msg.lat = 0.7579980636855355;
    msg.lon = 0.9996816469230256;

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
    msg.setTimeStamp(0.3224002665946002);
    msg.setSource(37376U);
    msg.setSourceEntity(233U);
    msg.setDestination(13050U);
    msg.setDestinationEntity(130U);
    msg.parameter = 139U;
    msg.numsamples = 172U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 52751U;
    tmp_msg_0.avg = 0.3738315003327246;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.4490349727972298;
    msg.lon = 0.47456071489253093;

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
    msg.setTimeStamp(0.5226979751887939);
    msg.setSource(10776U);
    msg.setSourceEntity(30U);
    msg.setDestination(46576U);
    msg.setDestinationEntity(118U);
    msg.parameter = 65U;
    msg.numsamples = 214U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 4485U;
    tmp_msg_0.avg = 0.8994429944159837;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.024456854718122534;
    msg.lon = 0.5552436989634266;

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
    msg.setTimeStamp(0.3028641666832549);
    msg.setSource(46454U);
    msg.setSourceEntity(194U);
    msg.setDestination(29180U);
    msg.setDestinationEntity(233U);
    msg.depth = 13167U;
    msg.avg = 0.6488650896137326;

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
    msg.setTimeStamp(0.14328515447662937);
    msg.setSource(37369U);
    msg.setSourceEntity(139U);
    msg.setDestination(19948U);
    msg.setDestinationEntity(180U);
    msg.depth = 3704U;
    msg.avg = 0.9251966727943662;

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
    msg.setTimeStamp(0.0053349996462707105);
    msg.setSource(36019U);
    msg.setSourceEntity(242U);
    msg.setDestination(38319U);
    msg.setDestinationEntity(10U);
    msg.depth = 11753U;
    msg.avg = 0.22850750300137013;

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
    msg.setTimeStamp(0.2849965312500974);
    msg.setSource(28766U);
    msg.setSourceEntity(48U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.8618161989342054);
    msg.setSource(12799U);
    msg.setSourceEntity(168U);
    msg.setDestination(63208U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.46710262594196483);
    msg.setSource(9411U);
    msg.setSourceEntity(21U);
    msg.setDestination(899U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.2334061736024844);
    msg.setSource(21773U);
    msg.setSourceEntity(38U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(161U);
    msg.sys_name.assign("WHMONYHKRNGVDWMBQYSBLLTQIZZWDAJUTTHOZNTUIJQTEPRZPWMDAEUUQIIPJYBCGVKUYAGQRBOYZYLMLMWXFXHIUAUFPLNAEZBEBQKKT");
    msg.sys_type = 139U;
    msg.owner = 37101U;
    msg.lat = 0.6230518716241373;
    msg.lon = 0.2534737996319849;
    msg.height = 0.30075538198188356;
    msg.services.assign("NQQIGXAYGLJKFIRLTUJAELYFQRAZFPREUEFSNCHKYDGHXTBHPVFZOMXGBPWHHVZJMNPPBAGUQIDNQRCIBTLDFDHCIOSXOBEMLLDYWDEYXVRZYCEVTPZMJZRTTOUVXZSIBKWLPGJJBJGTQANUOURCGSGKJAFUEBZDESNTPHUUIBWHESDIAOWOKWVSJFNQQPPOYSQLWYMFCTMNTCAODLKIKIBXSRVZAVZMRNKGJHCDSWVY");

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
    msg.setTimeStamp(0.3832596409949778);
    msg.setSource(59040U);
    msg.setSourceEntity(36U);
    msg.setDestination(42768U);
    msg.setDestinationEntity(29U);
    msg.sys_name.assign("EUFHMXATJEQFIRAHUQTYLPMR");
    msg.sys_type = 97U;
    msg.owner = 61592U;
    msg.lat = 0.30810339679375387;
    msg.lon = 0.34084647052810624;
    msg.height = 0.36236030157017274;
    msg.services.assign("TEDXFLCCMAFGBOSSXTKGCKRHARGXGPLSMIBCDYMLFHVDQUXGEZLNCIOTYKIENGOWYCZNFUHLOVPWYBFIJLVVRMHCXPGQDWQTTUAKNJP");

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
    msg.setTimeStamp(0.9049985708507474);
    msg.setSource(42111U);
    msg.setSourceEntity(138U);
    msg.setDestination(30274U);
    msg.setDestinationEntity(161U);
    msg.sys_name.assign("QGLYTRWCTCSXJGNQBGUJJABNXQFIKMWDUIPALTHQYLPOLFIHHJVFJPNZMHDCHKMDKATYQVVZQGVBEBLOHJTFXNCKIYEFGNJUESOXWGCAMPYURVBMLACSVEOUHZAADOJFYMILIVTRDKYCZPWWWTEMSWMIFNTWLCOGHUPEIDSVRXANDPZSQWUQFBWOTSXPEYOX");
    msg.sys_type = 139U;
    msg.owner = 41129U;
    msg.lat = 0.15216369942638241;
    msg.lon = 0.024038611303597968;
    msg.height = 0.19122815713399577;
    msg.services.assign("QZCGAKQUKHJSRGAXWDPYEUHCFIQPBKHGMZOBPSSEZJFVXNZKNYYCIGVMUJGNTWGTTJKOBNRHDLNTYULAXMSPQIFDLVOBYOLFPRS");

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
    msg.setTimeStamp(0.4611520727157634);
    msg.setSource(15650U);
    msg.setSourceEntity(193U);
    msg.setDestination(59277U);
    msg.setDestinationEntity(65U);
    msg.service.assign("WODOCVESBBVAHSFAXRGPJFTPUSCKWNZNZQQQRUHWVQLMOVFEIQBEIFRSFVRKLRKHQLSULXRFFGWBHMSRDFMYLSJBOPLOUZQUTZITGH");
    msg.service_type = 28U;

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
    msg.setTimeStamp(0.5007568816805481);
    msg.setSource(25034U);
    msg.setSourceEntity(75U);
    msg.setDestination(37370U);
    msg.setDestinationEntity(209U);
    msg.service.assign("UUSIJXQQFJPJCCTQPXBFSHJNVSXKARALUJENAPZRMVXUDJBOMEXOWRWIOVJPHUIHGAYRUVIHCEZOSLQLQDBILAFGOVIYPMPOSOHMYTRRZDMMDXEFLMYFUKTEOMPUOAEGYSCCLBCXBCLGQWNPZKRMFNPTZSYYFUBQLTDDNQOKWAULWZIEWWCAGHKBKTREDVJFDPJHEKBHGGGFYKBIVYDQFISCTHWXLYNWRXV");
    msg.service_type = 93U;

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
    msg.setTimeStamp(0.14030836120468526);
    msg.setSource(10680U);
    msg.setSourceEntity(237U);
    msg.setDestination(3150U);
    msg.setDestinationEntity(30U);
    msg.service.assign("BIXOYLFXDMEIPFVZYYXYHUXVEJEGHYEXSOBPKMGLTNFXMZMUFQGPJPZODUECUTHPWUADGAZRZPOTXDRSAZAZVYBKQBZVCHSDGZRUNKMVVFQNVN");
    msg.service_type = 4U;

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
    msg.setTimeStamp(0.41773748510956465);
    msg.setSource(55232U);
    msg.setSourceEntity(135U);
    msg.setDestination(63913U);
    msg.setDestinationEntity(244U);
    msg.value = 0.2344252040734992;

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
    msg.setTimeStamp(0.6630652850374421);
    msg.setSource(39212U);
    msg.setSourceEntity(75U);
    msg.setDestination(2375U);
    msg.setDestinationEntity(49U);
    msg.value = 0.18535454205461455;

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
    msg.setTimeStamp(0.939822835063225);
    msg.setSource(6327U);
    msg.setSourceEntity(29U);
    msg.setDestination(12429U);
    msg.setDestinationEntity(35U);
    msg.value = 0.4927522423313303;

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
    msg.setTimeStamp(0.4930392383107043);
    msg.setSource(56057U);
    msg.setSourceEntity(228U);
    msg.setDestination(39219U);
    msg.setDestinationEntity(84U);
    msg.value = 0.16089137133250753;

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
    msg.setTimeStamp(0.04948116379021528);
    msg.setSource(41056U);
    msg.setSourceEntity(208U);
    msg.setDestination(12608U);
    msg.setDestinationEntity(6U);
    msg.value = 0.8034428935237274;

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
    msg.setTimeStamp(0.203415162935916);
    msg.setSource(9252U);
    msg.setSourceEntity(190U);
    msg.setDestination(55137U);
    msg.setDestinationEntity(46U);
    msg.value = 0.2722488982803939;

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
    msg.setTimeStamp(0.8782031071858344);
    msg.setSource(25495U);
    msg.setSourceEntity(159U);
    msg.setDestination(7775U);
    msg.setDestinationEntity(6U);
    msg.value = 0.37774359361543985;

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
    msg.setTimeStamp(0.5506278164406399);
    msg.setSource(48254U);
    msg.setSourceEntity(217U);
    msg.setDestination(44993U);
    msg.setDestinationEntity(174U);
    msg.value = 0.5902067206224236;

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
    msg.setTimeStamp(0.7135674590665625);
    msg.setSource(62223U);
    msg.setSourceEntity(174U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5091363211931443;

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
    msg.setTimeStamp(0.0892896940589053);
    msg.setSource(60879U);
    msg.setSourceEntity(130U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(115U);
    msg.number.assign("ZUQJOJXFAENPMEFXMFEXQWZVKWDPBOJUWINYDYUILHDRYSXAISMADTOLWSPABITSKABXYPNRMJHSIJLUVKEUISJUKSWSE");
    msg.timeout = 40323U;
    msg.contents.assign("BFYDGWFIUYKLTNPY");

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
    msg.setTimeStamp(0.7708801391888951);
    msg.setSource(4262U);
    msg.setSourceEntity(149U);
    msg.setDestination(41688U);
    msg.setDestinationEntity(57U);
    msg.number.assign("SCAJKWBDXHSAKNLWDUEIWULNJIXXXVZMZLLXFLDPMPJPWQQEANRHHCJAOREGSDSFTKFSJTOJRMPCEHGZUJZQTDNCOMCIZHKHLJLGPOMFBNCADCKZVOYUDBEFTJVQUMNDEVOIQSRIARUXCYQLMRPNWBTAYZYZXMNBKUZPUVMGYHCSAYGWKQANIWIOGKLDWXHGBFBYQEBMQIFDNPWJXU");
    msg.timeout = 47471U;
    msg.contents.assign("FEXOAAUHYJGWSMEZBXUYMADVQPSAMRDPUQIHSPKUEIDCUZCMOTZWJKJACAYRMKLJVZNGKQ");

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
    msg.setTimeStamp(0.5999493163765433);
    msg.setSource(23328U);
    msg.setSourceEntity(224U);
    msg.setDestination(64899U);
    msg.setDestinationEntity(232U);
    msg.number.assign("TDJQPPPIDWBCJKNDRKJKAYQYXBCUGKHLRAGWEZAVLCFQWFBZIRID");
    msg.timeout = 35798U;
    msg.contents.assign("UQFENPUHJFIKFRKJIFDTIPEISKCTSCSZPJTDQKUYEIDMWXXHIVMCPZPORWBLHTEJXHDHBXDQPKLOCGWODMABTDEVGNLDOLBVVXGOLJNRLV");

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
    msg.setTimeStamp(0.5591526209857473);
    msg.setSource(19511U);
    msg.setSourceEntity(236U);
    msg.setDestination(25698U);
    msg.setDestinationEntity(91U);
    msg.seq = 1651639837U;
    msg.destination.assign("TQGCKUYQTNCNJXMLKTJMSVOLENMBOLSOMOGUTFDMPXFJZBXTJVGLDHCFAUPQLWORXPWKDTABLVAKEGUBHHQIAAZRDFGADSESDCWVMVQHILIXVIGUHFIISCCLSKWJCKQFDABEVNVUZYEGUXSEMHRZYVHHGLGFIWUFAERHMRQZY");
    msg.timeout = 14949U;
    const signed char tmp_msg_0[] = {22, 66, -115, -19, 71, -95, -48, -89, 125, 92, -89, 100, -104, 66, -93, -82, -35, -66, 30, -33, 57, 77, -10, 11, -73, 99, 17, 17, 91, 68, -126, 58, 24, -109, -83, 122, 68, -119, 72, 84, 48, -43, 125, 93, -101, -27, -108, -124, 115, 123, -33, 14, 70, 85, -59, 28, -84, -14, 120, -97, 94, -125, -64, 107, 18, 50, 5, 50, 109, -52, 66, 31, 5, 17, 87, 83, -27};
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
    msg.setTimeStamp(0.7677552226038179);
    msg.setSource(43596U);
    msg.setSourceEntity(246U);
    msg.setDestination(53774U);
    msg.setDestinationEntity(204U);
    msg.seq = 631777462U;
    msg.destination.assign("SGPUIVFYKICDBHMUAJOYTFTRFISYFPEZKFDCRJAXHNARVMSUHJMEIIPAVMTMEEDQWHLMWZIIYHLRPAUGSARLDOYDQIPMSTZOYLMSJAMOGLKUXEORHCLUVBVXWNZINVGAPEADNIBPYCJQTQWQROYWYUSFBGUTXZJEQLVKXNWKVLBTZJZEDFNPDGXGNNWEQAFBSCFUFXSNCQBJBQCVMWVCJEYD");
    msg.timeout = 36403U;
    const signed char tmp_msg_0[] = {-20, 126, -52, 5, -64, 48, -76, -89, 77, -5, -73, 89, -20, 107, 78, -40, -112, 126, -55, 71, -114, -22, -77, 120, 96, -88, -65, 42, -37, -10, -126, 106, 16, -2, -74, 55, 118, -108, 100, 108, -127, 113, -42, -51, 54, -55, 123, 18, -98, -27, -106, 107, 110, 122, -63, 112, -51, 95, -10, 59, -32, -95, -55, 109, 114, 58, 61, -46, 68, -20, 40, 77, 42, -110, -127, 125, -45, -106, -47, 115, 93, 68, -69, -122, -91, 65, 76, -55, 122, -88, 31, -127, 3, 60, -69, 49, 1, -42, -107, 78, 124, 11, 1, 20, 63, -87, -84, 113, 118, 28, 18, -15, 3, 80, -2, 56, -44, -112, -100, -80, 51, -126, -20, 82, -112, -31, -122, 118, -74, 108, 101, 113, 123, -82, -37, -46, 62, -112, -87, -47, -14, -109, -21, -36, -43, 61, 53, 102, 1, -19, -118, 125, 54, 62, -107, 83, 39, 27, -65, -93, -94, -79, 47, 123, -93, -66, 5, -90, -75, -87, -84, 96, 118, 72, 2, 39, -39, 111, -28, 105, 24, -54, -56, -23, 109, 20, -7, -6, -106, 8, -117, -87, 17, 120, -112, -33, 90, 40, -87, -58, -90, -19, -2, -23, -9, -82, -119, -91, -80, -57, -68, -19, 59, -21, 102, 4, -81, -12, -36, 62, 14, 17, -68, 122, 30, 108, -19, -43, -3, 70, -87, 57, 93, -84, -91, 103, -18, -59, -63, 20, 54, -59, 94, 30, 74, -111, -19, -11, -107};
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
    msg.setTimeStamp(0.9105119957548748);
    msg.setSource(34087U);
    msg.setSourceEntity(238U);
    msg.setDestination(10295U);
    msg.setDestinationEntity(142U);
    msg.seq = 4204776114U;
    msg.destination.assign("YVCHGWRIPODPZNWQBFXKZVNVDUPIV");
    msg.timeout = 12141U;
    const signed char tmp_msg_0[] = {-21, -42, 87, 54, -42, -49, -60, -22, -31, -57, 59, 97, 80, 115, 63, 40, -94, 3, -66, -12, 5, -30, 14, 49, -65, 81, 55, -99, 125, 8, -100, 56, 71, -5, -89, -48, 10, 78, 59, 98, -115, 10, 110, 22, -8, -66, -75, 122, -86, 3, 122, 110, 49, 91, 11, 73, -70, -58, 76, 123, 94, 72, 4, -78, 36, 98, -100, 23, -50, 37, -90, -68, -46, 92, 53, -36, 114, -36, 96, -61, 125, -45, -35, 75, 57, -18, -87, 45, 84, -54, 75, -116, -36};
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
    msg.setTimeStamp(0.396878207048984);
    msg.setSource(29650U);
    msg.setSourceEntity(53U);
    msg.setDestination(18996U);
    msg.setDestinationEntity(30U);
    msg.source.assign("OMPVEYAUFJGCENNZCZQWSFTLRAYXCTSAJXZMVHKHVMRXAUZKSITLFUULXH");
    const signed char tmp_msg_0[] = {-122, -70, -86, -30, -78, -56, -3, 83, -115, -75, -35, -14, 83, 52, 107, -45, 49, -47, -46, -112, -60, -61, 10, 16, 125, 68, 81, 27, 55, 121, 65, 3, -34, 90, -56, -68, -116, -119, 35, -75, 56, 110, 8, 90, -48, -28, 48, -80, -1, -72, -52, -97, 44, 111, 76, 125, -71, 3, 24, 111, -3, -60, 107, -53, 6, 93, 1, 72, 50, 27, -30, -52, 63, -78, -37, 92, 71, -64, 18, -50, -6, 29, -22, 87, 87, 113, 95, -108, -108, 20, -19, 56, -66, 86, 125, 82, -87, -84, -51, 54, 35, 85, 99, -104, -54, -58, 47, 23, -17, 29, -112, 113, 1, -36, 113, -38, 16, -78, 89, 10, -113, -15, -120, 42, 92, -42, 67, -60, -26, 33, 57, -33, 70, 31, 58, -103, 58, 78, -1, 114, -48, -34, 80, -105, -41, 42, -114, -71, 78, 67, 111, 27, 14, 117, 119, 24, -124, -90, 46, 78, 10, -80, -127, 126, -120, -96, -35, -80, 61, 50, -117, 60, 35, 104, -97, -127, 63, 39, -45, 57, -37, -78, -61, -43, 101, 0, -44, -65, 25, -114, -107, -47, -99, -58, -101, -47, 117, -31, -56, 59, 74, -112, 77, -66, -126};
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
    msg.setTimeStamp(0.8782350280855676);
    msg.setSource(12731U);
    msg.setSourceEntity(253U);
    msg.setDestination(42949U);
    msg.setDestinationEntity(131U);
    msg.source.assign("GENAXGUPSSUWGINHKNLFAEYNAMDI");
    const signed char tmp_msg_0[] = {-104, -113, 73, -20, 32, -41, 35, 126, -17, -8, -96, -76, 81, -53, -19, 10, -7, 68, -3, 103, 35, 20, 38, -6, -4, -35, 100, 118, 96, 9, -21, 39, -75, -50, -1, 126, -90, 18, 108, 90, 64, 40, -1, 125, -109, -45, 42, 13, -99, -12, -27, 97, -121, 76, -42, 23, 85, 84, 38, -36, -44, 98, 96, 123, -14, -5, -32, -20, -16, -14, 81, -111, 66, -94, -38, -94, -100, 104, 42, 56, -21, 88, -55, -113, -86, 62, 10, -71, -7, -35, -58, 107, -113, 124, 47, -14};
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
    msg.setTimeStamp(0.527683255801801);
    msg.setSource(59042U);
    msg.setSourceEntity(50U);
    msg.setDestination(7260U);
    msg.setDestinationEntity(30U);
    msg.source.assign("QNFIASCGNFHKENUNUJBPDIUGEGQFPHZOBXSPQMZTLQCGWDYGVTJOYACTRVOWLPIRMHRSDHKMAETNKEEXHDVSWOLSSSVAVBMKYEZPXZXHQTUIGYIXXOAQUPZBQVJDASY");
    const signed char tmp_msg_0[] = {33, 111, 59, -127, 113, 1, -48, -118, 29, 58, -89, -50, 47, 44, 2, -5, -73, 84, -23, 21, -86, -127, 30, 108, 126, -109, -57, -115, -105, -99, -127, -12, 88, 33, -87, -124, 15, -101, -41, -110, -51, 13, -76, -65, 94, -51, -80, -58, -117, 99, 69};
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
    msg.setTimeStamp(0.3627940676286918);
    msg.setSource(7184U);
    msg.setSourceEntity(94U);
    msg.setDestination(55343U);
    msg.setDestinationEntity(166U);
    msg.seq = 1667497039U;
    msg.state = 254U;
    msg.error.assign("YTXUYMZQUTXSJSBVDSQLQABYCLRWEICBPFYJLCKOYFPWFNVDQJELOXXRRTPCRZUAFABBQZKEFVFNPRHIJBHWOFZSARNOISDDQMVYIJRLMCVAWOGNGJ");

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
    msg.setTimeStamp(0.38414791414778016);
    msg.setSource(35287U);
    msg.setSourceEntity(116U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(248U);
    msg.seq = 3902986417U;
    msg.state = 89U;
    msg.error.assign("CZBZJTFLLATJYKYMHFHUWSWBJRZZCFFSZNTHNLVMDMHDGJAQVILSWQPVBKYTAFWRWJXURJONHHDMEVHRTYVDKERCVDKAGWGOYZIAKLWDZIUPQUGGXUDSSIEIQUVPBHCEV");

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
    msg.setTimeStamp(0.05931428562733687);
    msg.setSource(18625U);
    msg.setSourceEntity(2U);
    msg.setDestination(22611U);
    msg.setDestinationEntity(120U);
    msg.seq = 1889613007U;
    msg.state = 68U;
    msg.error.assign("FHNHNREUDNSNKTDC");

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
    msg.setTimeStamp(0.08041671986972398);
    msg.setSource(8279U);
    msg.setSourceEntity(114U);
    msg.setDestination(21390U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("EJNQHKUZNKHBFOOAPBCEJMUYQFMYKCCRJVXUGGMIXQSAPUJFMVIJDZSBMDPONOL");
    msg.text.assign("CAHXJMMADUHHUASLGZUQEVIVKTXSLMHJOKHNOOXLOQXUPRFBDUNFMGXJQWORJWLYRXVPYFZBGNDONYZZYCUFIOGPTDGEYBJSMHIWBKOKENJFBFQMIMNDDCKGWTODXZZIEENLJRRRTGRRWBYDWMKEBSUHISJFSSYVTGWCKMVQKUJTFWBLATXQESGAKIBLFYNCVYVQPPEBHWQNCPLCZVYERDHRTGAJICCQENTLADAWHAKZUPVIVZCUOIPFLPA");

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
    msg.setTimeStamp(0.06949923487749743);
    msg.setSource(21703U);
    msg.setSourceEntity(56U);
    msg.setDestination(24325U);
    msg.setDestinationEntity(94U);
    msg.origin.assign("URPSQPLKWAFIBVKZCZDXGMLIHSRADMQVNNVVYPOGTCCRXVQAONJZEDQMUIGTFLYRTRHQXWUAFTPORCOEECEXCAZOBJDBYDESOBUFTHKFFXAVKTJEJXBYPAVYMPMWYLFESPICRRFWIIZDKDWVLHAXZGVHSKNUNKPJBQUKXDQRUFPHTMEWRMNCLHXLBGBEW");
    msg.text.assign("RGPZEVHDHXYGIHBCBJDGTMJWWHPKDIKNUPUIEELDUDSVMLLWCAZTFKNSMPXIQBMBCXOOTHL");

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
    msg.setTimeStamp(0.363832252226449);
    msg.setSource(15101U);
    msg.setSourceEntity(51U);
    msg.setDestination(64253U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("SUXBMLMRAOEGTGDRPLZBNLXKDOTZNLUCLZHGPFYQLGROBHTIFJEUUEWCYACBIQQOMUSHCOPXCUHSYSLNRECZRMNVSIONOKDOPLPYZGIL");
    msg.text.assign("POHUVJHQZEVAYVZUXLYFZFRPMOBSWHOXCETLMETSDHORLJOLTBDWWRPRCTULAZNWUMHFQXHSJABSBGTXBGKPNNSJKDQNFXJUAOXTBCQQTWONLTJQINPTRMIFEEQWKGGMDYZAYSHVNSFYZKZFICMCEYRDTBYPDVLLHKK");

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
    msg.setTimeStamp(0.42050544043143734);
    msg.setSource(46222U);
    msg.setSourceEntity(122U);
    msg.setDestination(27733U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("YXSSYCKHGSZKJVCMKXQRZJPLHHARJFUMFDQAFIBPFYNNJBPARIPLNBDXCMQUHTELVCYKLKWRPZBTFKVVLLWCUGGSIZEPDLHTEFQIWFIGOVFAQHLPZAAJPMBVNGRMJNUJGTDOGECZLBTNWEWHUTLOSUXZIIXSPNQGHHHMTMVJEYTGRGIJXDUXWWSKNMQYREAVCODRETVTCARYEBAYOWMVOXOSQJQW");
    msg.htime = 0.7893022283893356;
    msg.lat = 0.5026572348908166;
    msg.lon = 0.20130751867524055;
    const signed char tmp_msg_0[] = {82, -21, -114, -127, 17, -118, -33, -97, 45, 45, 110, -87, -106, 33, 64, 44, -72, 72, 82, 28, -37, -102, -102, -46, -4, 12, 33, -16, 86, 101, -73, -85, -90, -51, 14, -103, 26, -18, -35, 26, 106, 21, -115, -18, -28, 123, 9, 121, 101, -77, 12, -38, -46, -121, -128, 93, 24, -79, 25, -112, 61, -85, 45, -125, 124, -86, 75, 69, 89, 56, 71, 26, -80, 29, -26, 101, 29, 76, -49, -19, -82, -93, 61, 8, 119, -128, -27, -51, 76, 20, 122, 66, 71, 99, -89, -118, 6, 32, 11, 43, -93, -4, -62, -81, 121, 50, -45, -53, -128, 29, 64, 30, 9, -86, 16, 90, 8, 55, 16, -17, -60, -57, -22, 53, -36, 83, 13, -49, 50, -13, 88, 68, 65, 10, 112, 12, -9, 117, 26, -57, -115, -26, -99, 64, -81, -107, 46, -98, -89, 47, -38, -11, -93, 9, 4, -36, -28, -99, 29, 69, 87, 108, -12, -70, 10, -27, -102, 62, -1, 39, -71, 111, 117, 90, -28, 78, 126, -28, 33, -62, 32, -37, 15, -5, -127};
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
    msg.setTimeStamp(0.41837468668351363);
    msg.setSource(26241U);
    msg.setSourceEntity(238U);
    msg.setDestination(60635U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("ZUMTXLSEHDAGENHBCEDZMLSSBWCIDYGALBIXPHOKQXAWYFRDOAKSVRZEFNNDTKGZJPXYVJTEZTVFTSWDXEQAINZPRWOWVYCDBDPQOYKHLJZNMLXXPVQZRXUTAVFNKSPJO");
    msg.htime = 0.35976027371482155;
    msg.lat = 0.3897201151652323;
    msg.lon = 0.5456843345125912;
    const signed char tmp_msg_0[] = {52, 7, -124, 36, 110, -98, 89, 66, -40, 116, 7, -39, 42, -62, -98, 53, -111, 82, 60, -79, -83, 95, -63, -107, 34, 52, -8, 57, -44, 40, 36, 9, 89, -71, -36, -86, 19, 41, -13, -115, 81, 39, -121, -21, 32, 27, -46, -75, -19, -5, -117, -72, 48, 41, -79, -58, 5, -107, -77, 106, -123, -108, 111, -124, -1, 27, 1, 118, -55, -100, -3, 78, -5, -121, 26, -65, 28, 105, -1, -76, 15, 98, 42, -33, 83, -45, 48, 104, 75, -67, 46, 85, -68, 11, -107, 125, 99, -60, -38, -87, 99, 49, 30, 63, -56, 90, 124, 70, -112, -75, -98, -105, 77, 81, 69, -127, 46, 5, 60, -68, -50, -65, 57, 113, 26, 100, 107, 71, -46, 29, -104, -35, 6, 16, -46, -98, -53, -17, 66, 49, -119, -107, 3, 34, -25, 110, 93};
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
    msg.setTimeStamp(0.11897101472041527);
    msg.setSource(62662U);
    msg.setSourceEntity(84U);
    msg.setDestination(59599U);
    msg.setDestinationEntity(109U);
    msg.origin.assign("GFHZFZCLLAOVNENVMOWMDEHKEHFOYTCXKVNDTTAQXBOGRFYRXGRPSJUIFWUNIZFYVWSZSZRAQLOUXJHRHJKPMITQTWRYXSLBXJJKOQEWPMCIXJUMGPCBBQDCVCUALTQFRIGJTZMOHDPTAHMLDBFDKDAEJFGOBKWPUPLHPSCEQHFUDZXNJYTS");
    msg.htime = 0.46405152069204203;
    msg.lat = 0.7649930030697948;
    msg.lon = 0.1294970021268772;
    const signed char tmp_msg_0[] = {-3, 105, -103, 10, -121, 114, -33, -86, -34, -92, 10, 93, -112, -61, 41, -93, 105, 24, 77, 37, 60, -97, -64, 46, 74, -35, 90, 39, 79, 24, -16, -42, -37, 110, -9, -101, 19, 63, 18, 12, -8, -56, 123, 61, -103, -7, 114, -72, 23, -86, -98, -107, 14, 20, 16, 94, -106, -52, -51, -1, 115, 58, -89, 9, -94, -32, 7, -112, -9, -108, 104, 67};
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
    msg.setTimeStamp(0.7999531097293261);
    msg.setSource(821U);
    msg.setSourceEntity(62U);
    msg.setDestination(21215U);
    msg.setDestinationEntity(211U);
    msg.req_id = 6945U;
    msg.ttl = 10548U;
    msg.destination.assign("ZLKOCMFICXRGHUOICDPAPYOQQFKNGMGOGUJNEDQQTKPNILESHKWYKRVAGUALGZTDLCMZHVVJPBPQFTJRAZAUGIQYZOHSEFWMKKFVOBKCNRFJOTDGTIFNWMNLJBJGYCRJIIFABVECSEOYLDIXCRXLOETDMECDWFRBSSDCTRZYHRMSQXXEZIMSKKBWZHUSPMDNYBV");
    const signed char tmp_msg_0[] = {-110, 33, -50, -116, 41, 61, -6, 4, -64, -113, 60, -95, 4, 113, -87, 60, 98, 87, -102, 114, 53, 81, 37, -18, 77, 45, -59, -109, -70, -51, -114, 33, -83, -36, -45, -1, 59, 49, -52, 82, 18, -60, 71, -118, 92, 29, -63, -11, 86, 14, -12, 109, 79, -95, 34, -100, -46, 104, -25, -105, -5, 17, -91, -80, 63, 52, 62, 102, -124, -80, 70, 66, 117, -24, 62, 81, 72, -54, -13, 67, 35, 69, -32, 15, 101, 2, -29, 60, -43, -33, 22, -63, 44, 1, -16, -59, -9, -43, -42, -118, 55, 52, 124, 61, 112, -47, -115, -109, -56, 80, 35, -32, -17, -13, 116, 85, -26, 77, 40, -64, -44, -15, -128, 76, -17, 82, -34, 48, 123, -59, -93, -14, 48, 38, 64, 60, -120, 88, 76, 45, 29, -79, -12, -68, 108, 93, 14, 101, -16, -65, 76, -27, 84, -1, 49, -36, -50, -1, 45, 38, -57, 97, 29, -58, 93, -93, 94, -112, -9, 51, -94, -84, -106, 110, -34, -89, 55, 75, 82, 14, 0, 5, 2, 86, 77, 1, 75, 77, -11, 81, -33, -98, 17, 33, 49, 44};
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
    msg.setTimeStamp(0.8277171554462877);
    msg.setSource(6894U);
    msg.setSourceEntity(84U);
    msg.setDestination(21453U);
    msg.setDestinationEntity(17U);
    msg.req_id = 31871U;
    msg.ttl = 3876U;
    msg.destination.assign("OTLVSZSFTFQCTFSXZXRSLCPIEVRVJAGAMXZKHNHYBBNIHNPCSAYQTMEFPUKWAWLMWWBTEYBDKGDHPCZVSCPSWTCIZGMJQACEIKDWBMQCELJBBBJMJZSLRDVAFOPTY");
    const signed char tmp_msg_0[] = {45, -96, 117, -92, -66, -10, -121, 112, 4, -25, -34, -55, -51, -115, 107, 79, -88, 94, 6, 115, 77, -12, -67, 26, -44, -101, -68, 124, 102, -128, -23, 92, 109, 5, 3, 26, 88, -41, 112, -41, -59, 8, -79, 101, 102, 36, 16, 114, -125, -58, -59, -122, 95, -43, 21, 75, -48, 26, 65, 123, -122};
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
    msg.setTimeStamp(0.9218721238391315);
    msg.setSource(17444U);
    msg.setSourceEntity(123U);
    msg.setDestination(60553U);
    msg.setDestinationEntity(223U);
    msg.req_id = 65131U;
    msg.ttl = 5502U;
    msg.destination.assign("MNBJHHZCZOBMLLFMZNRUYCBPOHQPVBVURUYQMNVQPEIAOYICUPPHVSXEIJLFGBRVNQGMSGSOXLHWVKZMYASNXKSCZIKWWOTCVGKOIMERHAJRQGETNUEAGPDFSEDTRRQZDTNGSQGJDSDTXBXCYTFKKNWTVPYBCCKFBVRIMWEFZBDZTDWJQQG");
    const signed char tmp_msg_0[] = {-122, 77, -21, 34, 45, -119, 62, -107, -82, -61, -120, -72, 85, -28, -96, -87, 84, -121, 40, -18, 102, -47, -7, -23, 68, 37, -75, 126, 17, -115, -117, -28, -67, 107, 109, 100, 49, -113, -43, 122, -18, -45, 26, 31, 116, -54, 80, -21, -32, -37, -78, 64, 99, 124, 55, -5, -128, 30, 117, -10, -33, 60, 31, 22, 104, 58, 31, 70, -2, -128, 60, 70, -53, -47, -100, 48, -14, 58, -85, -96, -28, 108, -93, -33, 25, 16, 106, 49, -50, 78, -52, 69, -24, 19, 47, -29, 30, -80, -105, 17, 40, 117, -28, -109, -116, -23, 124, -56, -68, 56, -101, -9, 65, 118, -11, -30, 67, 91, 62, -56, -95, 65, -69, -55, -89, -40, 119, 74, 30, -34, 83, 19, 1, -50, 122, -82, -61, -66, -116, -96, -79, -113, -99, 104, -120, 27, 86, -50, 84, 59, -34, 24, 82, 86, 97, 106, 35, 16, -125, -65, 6, 62, 52, -25, -25, 106, -63, -30, -125, -121, 16, -16, 16, 22, -54, 110, -106, -50, -57, -68, 23, 90, -61, 74};
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
    msg.setTimeStamp(0.8261110725037532);
    msg.setSource(56970U);
    msg.setSourceEntity(90U);
    msg.setDestination(9613U);
    msg.setDestinationEntity(13U);
    msg.req_id = 30643U;
    msg.status = 31U;
    msg.text.assign("JNBWTOHPWFMNXZSOYEZTUJXUNYFDQYRYUIYKLTVGIQINFCIAZKMRFODBZIKPGUXKBKXCCVGEDFDMPDXSBYVOFUMGZZLRMXAASWIKQMWMZTBGRYAUEJHPZTSOYRHKZASDJCD");

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
    msg.setTimeStamp(0.1890553860236941);
    msg.setSource(54009U);
    msg.setSourceEntity(37U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(96U);
    msg.req_id = 19750U;
    msg.status = 220U;
    msg.text.assign("IQDMZOXFRTGPHVTBVUTCVWZCKFPSHUOSIXHGQRUIHBCNHPEUHCOZOGSAJYLBKFOGUKFMRHSGDLPMWZETVNJNQUPAEPJZQGKGAXVGBLCHUIRZCBNIEOOJAAKCJNKP");

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
    msg.setTimeStamp(0.8552775621337557);
    msg.setSource(1369U);
    msg.setSourceEntity(2U);
    msg.setDestination(4050U);
    msg.setDestinationEntity(169U);
    msg.req_id = 1549U;
    msg.status = 72U;
    msg.text.assign("JTBDZGIFGYCLNDCIMJPLDTXCZECWSMIKDQYAGDFTOVHJGEXVOGJOHDDPZNRGIZXUVKUZPTFBLEYRZCRLTAHGPOUQJOBGFREFHHNVQOAIHEECFUXQEW");

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
    msg.setTimeStamp(0.6735420646015923);
    msg.setSource(48584U);
    msg.setSourceEntity(217U);
    msg.setDestination(65083U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("ACYIQVECUWMEZTZWPHIPIZAPHNLCQJPXESHSKCGYRPRNTRBSKLQCPJQFVFPGIPYBRXDFCOLVOHMKSIALCZGMIFMFLHDEIHSLOKDGQUVSCMBRMZIRUYXOJPMJWXVU");
    msg.links = 1344877618U;

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
    msg.setTimeStamp(0.9606572598763163);
    msg.setSource(47373U);
    msg.setSourceEntity(83U);
    msg.setDestination(4432U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("QSCNLYWCGZRRRZAEDLBUELRXAQIZJIMPWEQXQDRDABNOVABYIDWHGWJTFMUNWXKEVIVYAWVJPTXCUCKAOLENYQEWKSCHJFIBCJPCXRKVCVBVMFFQHKOPHGSUSBQYJGWGWKYNNLHCVNBZZLDZHFYBDOSNRHGPMLPQTGHOQLYBFCRDIJBRPOKVUNDMIOZFDOSYUXXDSZFJUOHSHISAGAPRXGMTXALIJMFNTAEKTLZTEZEVSTYM");
    msg.links = 2693995975U;

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
    msg.setTimeStamp(0.1042373566365965);
    msg.setSource(32695U);
    msg.setSourceEntity(79U);
    msg.setDestination(50562U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("ZANIHORIGEKZMZQDQDLVPBZMOWVMLLDNODZCKFPRXLJOXQVEHNZBPNXAZVJHUORGFYHAELJJPXD");
    msg.links = 914406450U;

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
    msg.setTimeStamp(0.8765656221833634);
    msg.setSource(34670U);
    msg.setSourceEntity(79U);
    msg.setDestination(19835U);
    msg.setDestinationEntity(91U);
    msg.groupname.assign("CRIXDWJSSGABPBYYHSNHUVFYMASOGGJNIVTTRIYWRVCOYANMIMX");
    msg.action = 201U;
    msg.grouplist.assign("DPPZGOKNXYJLRFEMJYWCXAXJFEKHTQEMNCIXBTVUIKXKGAPHWJBEXFTTHVYAALVPZUQZGRZNDFMGUAUDFDWIVNYLSLQONQTWOWNBDCFRTJAGKYIWGNOEVWMJESHKPWQBCJQQAWIHOHYCLFMPUGYMKXOLPIPXGRMTCGLAUPJZKZMDQOJSEMVQICIBSSPBSSGFFDLHODNBVKKZJYRBWCS");

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
    msg.setTimeStamp(0.13389380841300935);
    msg.setSource(47197U);
    msg.setSourceEntity(112U);
    msg.setDestination(39316U);
    msg.setDestinationEntity(106U);
    msg.groupname.assign("DBOPNAMUFULGZOOCWIMGKGMZMOKXHQTNCXUCWAABXTTAOQUPYYZYSDZQOHDGTHUWFHLBTSQLXORIRIVTEEDWLHYFERRGAQBXIRKYVCS");
    msg.action = 70U;
    msg.grouplist.assign("KHYMCCUUAYIFZWLHYKZWGZQOQIJPJGJZFYBLKWPVURVHSCSPLDJFRTUQZAUXVDFQPERLXLCDSMLNOSYRSFIJHMWNETIPAITWHPXRWDDWDOPVCEIFLOPIJKGILUNSVOFGJFKPSGGYCVOQTQXXUMQHPFXZIFRJEAKBOYTRAIZUMANHDCTOBECKHRQWZKV");

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
    msg.setTimeStamp(0.09622209674913951);
    msg.setSource(54581U);
    msg.setSourceEntity(179U);
    msg.setDestination(39623U);
    msg.setDestinationEntity(86U);
    msg.groupname.assign("CZQSTVXNSHBJZTHVYXUIULZALKKUYCMPSEHDSDHPMIPXKKLSQOICTDFTPHWJVTGEFYERDMVNLKWGQHKQIGOFCABQNGKIAHCPCBGDPJTVOARBXDQWOOWUCITOGZYZQXIFWQRRMFELEAPAUTDQLLXOFVFPYEWMURCSBJJTXFTZELPSURBYONGACVQGGMVWBZYJKNUNLE");
    msg.action = 110U;
    msg.grouplist.assign("NNIKMMTVZUHKKFRIXEWBVZYFQNLGWETPHBSUDCEWNYHJZSOVGVQWPCFXTUTDZAZIIJJBVPBBCNHAIWUGVKPJGMXDJFUWGBCRESCPKJLCKGKXEFDGDQDAWYYLRMSBUADTSJOHNDXXYELLLEVYAPRIKSLHCMYQHOFRPFKLQUPAQLOXMTLIABWFYAYSJXUGSXNVQWHMEAPRTMJNMTEROCZIORZRTS");

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
    msg.setTimeStamp(0.36304019510420793);
    msg.setSource(56049U);
    msg.setSourceEntity(188U);
    msg.setDestination(35691U);
    msg.setDestinationEntity(92U);
    msg.value = 0.3452298836554121;
    msg.sys_src = 51872U;

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
    msg.setTimeStamp(0.41609003744225825);
    msg.setSource(46882U);
    msg.setSourceEntity(171U);
    msg.setDestination(32355U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5692276902391709;
    msg.sys_src = 48083U;

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
    msg.setTimeStamp(0.9535535050991135);
    msg.setSource(48606U);
    msg.setSourceEntity(180U);
    msg.setDestination(45219U);
    msg.setDestinationEntity(219U);
    msg.value = 0.04237056869899891;
    msg.sys_src = 59603U;

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
    msg.setTimeStamp(0.49820576373878545);
    msg.setSource(58650U);
    msg.setSourceEntity(220U);
    msg.setDestination(51918U);
    msg.setDestinationEntity(190U);
    msg.value = 0.38615627791945406;
    msg.units = 220U;

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
    msg.setTimeStamp(0.1779895662096369);
    msg.setSource(5452U);
    msg.setSourceEntity(54U);
    msg.setDestination(62022U);
    msg.setDestinationEntity(100U);
    msg.value = 0.2917699908225434;
    msg.units = 72U;

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
    msg.setTimeStamp(0.5863205804412981);
    msg.setSource(53106U);
    msg.setSourceEntity(209U);
    msg.setDestination(58798U);
    msg.setDestinationEntity(182U);
    msg.value = 0.26127940986370113;
    msg.units = 236U;

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
    msg.setTimeStamp(0.4022392198860957);
    msg.setSource(28410U);
    msg.setSourceEntity(179U);
    msg.setDestination(62747U);
    msg.setDestinationEntity(135U);
    msg.base_lat = 0.9012772811165225;
    msg.base_lon = 0.9961514738467483;
    msg.base_time = 0.14877616357340817;

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
    msg.setTimeStamp(0.0014519740501774958);
    msg.setSource(6263U);
    msg.setSourceEntity(57U);
    msg.setDestination(40824U);
    msg.setDestinationEntity(248U);
    msg.base_lat = 0.15516090768702095;
    msg.base_lon = 0.8997234377223695;
    msg.base_time = 0.8548386926595717;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 33036U;
    tmp_msg_0.priority = 56;
    tmp_msg_0.x = -24072;
    tmp_msg_0.y = 31366;
    tmp_msg_0.z = 12539;
    tmp_msg_0.t = 26627;
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 5713U;
    tmp_tmp_msg_0_0.custom.assign("NQKRKURNMHOPZVXISCZXSSHTNURYAHQDMQVQTLYFCBEWETMOCYWDEUJZCQZZFXBGXHTRWLPWWGAHJKVNFLNFSIUDFAPBMALPGVNBJTEAFNCZOOPZDCAEBFSCMXFLEKPLXEIPUYRDOJCOQMQJDLGOXTXUVRWBJKCYYMQATPBFEBWFPXKSJLHRQVUWNWGDKZ");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.14414629697472725);
    msg.setSource(33214U);
    msg.setSourceEntity(95U);
    msg.setDestination(3529U);
    msg.setDestinationEntity(191U);
    msg.base_lat = 0.5205376835207142;
    msg.base_lon = 0.28518793122966224;
    msg.base_time = 0.9361470022686619;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 52316U;
    tmp_msg_0.destination = 20055U;
    tmp_msg_0.timeout = 0.9755827839652231;
    IMC::Heartbeat tmp_tmp_msg_0_0;
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
    msg.setTimeStamp(0.7850171351432859);
    msg.setSource(50061U);
    msg.setSourceEntity(159U);
    msg.setDestination(45270U);
    msg.setDestinationEntity(157U);
    msg.base_lat = 0.7163519836270165;
    msg.base_lon = 0.703691111858667;
    msg.base_time = 0.23834966951151115;
    const signed char tmp_msg_0[] = {27, -19, 119, 80, 123, -105, 30, 32, 47, -119, 19, -14, -96, -45, -40, 123, 10, 17, 29, -83, 0, 70, -74, -113, 46, -53, -85, -17, 102, -67, 107, -80, -70, -83, -16, -72, -1, 31, 30, -109, -20, 1, -16, 79, 120, 81, 7, -118, 126, -16, 107, -24, -13, 52, -47, 87, -12, 49, -74, -94, 63, 123, -52, 3, 45, -26, -37, -11, 120, 26, -101, 95, -101, -2, 79, -117, 0};
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
    msg.setTimeStamp(0.8804951755970444);
    msg.setSource(32192U);
    msg.setSourceEntity(43U);
    msg.setDestination(54121U);
    msg.setDestinationEntity(243U);
    msg.base_lat = 0.35334859326212475;
    msg.base_lon = 0.9857444402105902;
    msg.base_time = 0.6344268920429871;
    const signed char tmp_msg_0[] = {81, 39, 46, 125, 117, -121, 46, 74, 101, 44, 68, -37, 91, -64, -50, -92, -72, -125, 92, 23, -121, 65, 99, 68, -95, -68, -61, -60, 92, 89, 26, -120, -61, 114, 69, 126, 36, 40, -95, 1, -54, -43, -123, -102, 120, 57, -16, 126, 10, -84, 19, -94, -41, 80, -23, 61, -104, 81, 71, 19, -32, -93, 121, 126, 94, -27, -40, 53, -15, -1, -53, -112, -37, -126, -25, 32, -118, 58, -94, 18, 78, 90, 48, -102, -3, -127, 3, 58, 98, -6, 68, 94, -56, -96, -69, 73, 52, 69, -18, -26, 105, -84, -23, -65, 40, -53, 114, -42, 123, -72, -28, -102, -20, -123, 16, -93, -106, -83, -80, 30, -115, 123, 14, -28, 47, -124, 48, -110, -113, -77, 25, 51, -101, 111, -97, -118, -49, 110, 16, -75, -30, 3, 64, 18, 23, 95, 66, 64, -78, 82, -114, 95, 42, -122, 11, -75, 70, -12, -22, 102, -42, 5, -71, 123, -3, 27, -97, 80, -12, 24, 29, -66, 46, 86, 21, -6, 29, -117, 11, 41, -117, 3, -77, 2, -97, -88};
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
    msg.setTimeStamp(0.7419937865912728);
    msg.setSource(2193U);
    msg.setSourceEntity(28U);
    msg.setDestination(33586U);
    msg.setDestinationEntity(234U);
    msg.base_lat = 0.6568149356365703;
    msg.base_lon = 0.3619018897379267;
    msg.base_time = 0.8829623090444582;
    const signed char tmp_msg_0[] = {-117, -63, -30, 8, -87, 94, 126, 62, -49, 93, -56, -35, 71, 43, -96, 64, 70, 79, -25, 120, -43, -111, 49, 58, -54, -77, 16, 110, -38, -100, -84, -125, -122, 94, 68, -105, 56, -52, -82, 82, -78, -69, -53, -106, 126, -43, -65, 121, -45, -114, -42, -72, 107, 110, -122, 112, -48, 112, 34, -95, -119, -78, -90, 97, -47, -101, 34, -77, 73, 2, 105, -26, -28, -86, 26, -104, -14, 36, -33, -79, 119, -84, 61, -24, 32, 12, 43, 26, -46, -121, 99, 43, -128, -108, 45, -60, -60, 41, 69, -11, -53, 114, 86, -27, -63, -100, -2, -47, 38, 35, 65, 69, -39, -66, 80, -123, -40, -105, -10, -30, -97, 3, -26, 32, -110, -105, 79, -47, 3, 25, 81, -30, -20, -112, -30, -78, 110, 4, 49, -115, -55, 115, -29, -4, -120, -45, 80, -106, 62, 28, -9, 91, -89, -96, 119, 65, 68, 40, -52, 116, -63, -8, -82, -107, 29, -16, -94, -1, -1, 50, -43, 45, -23, 66, 76, 6, 10, -78, -103};
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
    msg.setTimeStamp(0.05630238912412777);
    msg.setSource(16376U);
    msg.setSourceEntity(146U);
    msg.setDestination(27213U);
    msg.setDestinationEntity(192U);
    msg.sys_id = 22193U;
    msg.priority = -53;
    msg.x = -24094;
    msg.y = -19217;
    msg.z = -23356;
    msg.t = -23295;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.8529628713401337;
    tmp_msg_0.units = 220U;
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
    msg.setTimeStamp(0.3740140081857387);
    msg.setSource(6394U);
    msg.setSourceEntity(30U);
    msg.setDestination(23435U);
    msg.setDestinationEntity(118U);
    msg.sys_id = 7724U;
    msg.priority = -103;
    msg.x = -11321;
    msg.y = -20731;
    msg.z = 8048;
    msg.t = 17019;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 5069U;
    tmp_msg_0.duration = 62811U;
    tmp_msg_0.speed = 0.2874896325029437;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.x = 0.7702359272178284;
    tmp_msg_0.y = 0.07786597117113336;
    tmp_msg_0.z = 0.3154575592660753;
    tmp_msg_0.z_units = 208U;
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
    msg.setTimeStamp(0.6635217271452333);
    msg.setSource(34909U);
    msg.setSourceEntity(200U);
    msg.setDestination(44625U);
    msg.setDestinationEntity(222U);
    msg.sys_id = 33351U;
    msg.priority = 30;
    msg.x = -12487;
    msg.y = -20540;
    msg.z = -1465;
    msg.t = 6496;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.3327086941650237);
    msg.setSource(50698U);
    msg.setSourceEntity(223U);
    msg.setDestination(12522U);
    msg.setDestinationEntity(151U);
    msg.req_id = 57509U;
    msg.type = 55U;
    msg.max_size = 28019U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4340726687797185;
    tmp_msg_0.base_lon = 0.7785844075030744;
    tmp_msg_0.base_time = 0.180322103818914;
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
    msg.setTimeStamp(0.33871280708632157);
    msg.setSource(23416U);
    msg.setSourceEntity(169U);
    msg.setDestination(47625U);
    msg.setDestinationEntity(41U);
    msg.req_id = 37742U;
    msg.type = 245U;
    msg.max_size = 46719U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7237315186322593;
    tmp_msg_0.base_lon = 0.5352635523048352;
    tmp_msg_0.base_time = 0.5253177796304785;
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
    msg.setTimeStamp(0.6062542014501129);
    msg.setSource(9996U);
    msg.setSourceEntity(137U);
    msg.setDestination(36922U);
    msg.setDestinationEntity(55U);
    msg.req_id = 25417U;
    msg.type = 184U;
    msg.max_size = 16130U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7251117186960286;
    tmp_msg_0.base_lon = 0.500710168990618;
    tmp_msg_0.base_time = 0.2917748196398743;
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
    msg.setTimeStamp(0.951410766220873);
    msg.setSource(63377U);
    msg.setSourceEntity(91U);
    msg.setDestination(44991U);
    msg.setDestinationEntity(249U);
    msg.original_source = 44803U;
    msg.destination = 37055U;
    msg.timeout = 0.45700087496725617;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.7596230851794644;
    tmp_msg_0.temperature = 0.23472955318712807;
    tmp_msg_0.depth = 0.335373793235507;
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
    msg.setTimeStamp(0.216620399430681);
    msg.setSource(26097U);
    msg.setSourceEntity(4U);
    msg.setDestination(9184U);
    msg.setDestinationEntity(169U);
    msg.original_source = 30277U;
    msg.destination = 59969U;
    msg.timeout = 0.40839906512222446;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.6606107280368044;
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
    msg.setTimeStamp(0.9251880630694375);
    msg.setSource(43309U);
    msg.setSourceEntity(229U);
    msg.setDestination(15359U);
    msg.setDestinationEntity(192U);
    msg.original_source = 48424U;
    msg.destination = 29440U;
    msg.timeout = 0.11938345821489638;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 38U;
    tmp_msg_0.error.assign("KPZYNRDUTCNP");
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
    msg.setTimeStamp(0.9514694381388122);
    msg.setSource(35676U);
    msg.setSourceEntity(122U);
    msg.setDestination(28971U);
    msg.setDestinationEntity(120U);
    msg.type = 218U;
    msg.comm_interface = 54713U;
    msg.model = 60837U;
    msg.list.assign("VSKWZWBDDQKCLYVMORHGSHEBEXIVGDFURROCYFGYZKWTLDSRUYMJSGKNGBNAPBMUJRJPXPZUJWQVFQCVXSZXDKXWNTROAXVGSHTBMYUWFQEYGJOEBYMIIUNMCPFQLRMDKESDATHHZRDZJWLODUXBZOCOVAPLVNZINCTLIFTUWYZMTMEEKIHPHSKIFTIVQJFBKWHEFIFYN");

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
    msg.setTimeStamp(0.7751336747601911);
    msg.setSource(27297U);
    msg.setSourceEntity(128U);
    msg.setDestination(47784U);
    msg.setDestinationEntity(158U);
    msg.type = 71U;
    msg.comm_interface = 58870U;
    msg.model = 19053U;
    msg.list.assign("ILKAYVHMHQEKDRNGMGLZSWQINYUQUXZBDWNVIQZWTJSCVTOJNCAHMKKFJOGPQGOCAMFZFKCYUNGWHBTFLHVAUDUVRLDTOABZLBWWORCEGKTSYNPPIUEYYETDNCGZYXTUJCNWPSUP");

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
    msg.setTimeStamp(0.1842041455402944);
    msg.setSource(18592U);
    msg.setSourceEntity(79U);
    msg.setDestination(20764U);
    msg.setDestinationEntity(48U);
    msg.type = 10U;
    msg.comm_interface = 22417U;
    msg.model = 14898U;
    msg.list.assign("LNPWLPRITBMRLENMBFLOWRJWHFSXPSZCAHOJMBMRTOWIIGXIMOBYUWGAAYSCPMTMDDNMUQGMBXOCPDZCEVDGPHTVNXSHJKTUBCUYVRJGFVVZFZQQLFNZCKKPULISKOIHYIRIYHPNBWUFXQNUOKCQDZKYMZDWEFGWZHEFTLRAHORHQANEJTJEXZISKNSTGOKWBGXCXSUW");

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
    msg.setTimeStamp(0.8997147362893524);
    msg.setSource(22882U);
    msg.setSourceEntity(203U);
    msg.setDestination(31411U);
    msg.setDestinationEntity(120U);
    msg.type = 130U;
    msg.req_id = 3394226239U;
    msg.ttl = 38449U;
    msg.code = 33U;
    msg.destination.assign("MIPYPDIHYYSKLNDNZEAJWFAKWQYEZJHVENSZGITEKZXVZXDMGNFXDXUJUDNHFHUWMNFDBAGQELFOVMWVYQGHTHGDUKXHALTKSFLSKPQCTRNBCMYYSSBLERGOPBTOVSJCYFQRVQDMLEJQFFQLIQRZUGHZRITMRPCXWHMOHBWMTWJSAUIYPIKYDNNPORAJZUBIIOUUCJKGZOUWLWKACBRZXCCJVVBXOQCTPLWE");
    msg.source.assign("KGMWCLZDQPAITHNISOTZXRJSLARWZASGGWZEBKBXQPSJPQTAAPUFNAQAONMSCOWFXWDGDJYDKQEULWREIIROBWHXKGVHCTLMKFGKQTMBVYJDQBYCJMKUDNSJOPNVGAWVATCRNFXBSEPFODFFTHHOMVAURYHYWLVBDUSKEBEJRTOGCPLMMNIHLPEHXZEUUCYBPUXTYDGSTZIDLIVRGYYZYJQCUIR");
    msg.acknowledge = 223U;
    msg.status = 190U;
    const signed char tmp_msg_0[] = {-67, -16, -32, 119, -5, -49, -53, -45, 31, -47, -27, 37, 47, -8, 126, 83, -82, -77, 83, 62, -80, 85, -37, -12, -27, 33, 111, -45, -62, 45, -101, -18, -97, -117, -69, 92, -90};
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
    msg.setTimeStamp(0.3070320829024713);
    msg.setSource(13274U);
    msg.setSourceEntity(224U);
    msg.setDestination(25190U);
    msg.setDestinationEntity(153U);
    msg.type = 86U;
    msg.req_id = 3532266485U;
    msg.ttl = 28271U;
    msg.code = 230U;
    msg.destination.assign("ADURVHSUUBBUWEKMTCOWJRFXADEZBLXPZQNFQGGJ");
    msg.source.assign("KQZRDZDOJLWXOKSCKRHVXVIIBVKLPVWETNFPBPYHHBZAVFIGBBJHLBCCPYMXJPJZHSJEIWISALXTIGOAWJHMNJDZBGJGFTSNGNFHXTTEOMCMRLUQZUGHNERJDYOCXUIQAPDLPQTGFNKOKRNKOYUWESCRBFLTZAARWIVXDYYSDZOIMDECQMXUVDWFLFTCCBLQVGMAGRXSSRELNWPCUQYKPSAPQFAEWKYZZXRIEUTHE");
    msg.acknowledge = 232U;
    msg.status = 167U;
    const signed char tmp_msg_0[] = {4, 24, 58, 18, 13, 77, 87, 83, 108, 103, -97, -94, -47, -8, -83, 53, 109, 116, 75, 76, 93, 108, 66, -20, -15, -76, -99, -52, 69, -39, -4, -78, -110, 113, -7, 84, -72, -79, 77, 13, -96, 61, -108, 95, -62, 108, 113, 105, -126, -95, 95, -122, 15, -122, 37, -101, 70, 1, -25, -5, -83, -15, 8, -120, 118, -101, 35, -23, 111, -54, -96, -39, 3, 87, -122, -49, -75, 34, -51, -95, -67, -64, -119, -127, 79, -51, 55, -90, -90, -94, -49, 98, 30, -79, 33, -128, -19, -1, -46, -45, -116, -4, -37, -123, 92, 105, 24, 29, 47, 70, -27, 76, 56, 9, -21, 67, 87, -67, 34, 116, -95, -60, 30, 24, -100, 20, -62, -78, 97, 1, -17, -72, -111, -29, -45, -60, 19, -15, -83, 8, -97, 56, 80, -30, -121, -94, -101, 76, 39, 52, 81, 53, 91, 58, -117, 120, -58, -32, 70, 59, -112, 71, -62, -36, -110, 39, 47, -30, -8, -72, 93, 103, -11, 21, 11, 18, -30, -11, -100, -80, -80, -40, 113, -111, -30, 13, -82, 40, 42, 17, 94, -33, -80, -124, -9, 91, 89, -39, -77, 33, -85, 40, 40, 61, -114, -17, 73, 93, -25, 82, 62, 48, 40};
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
    msg.setTimeStamp(0.9800873027532003);
    msg.setSource(9393U);
    msg.setSourceEntity(74U);
    msg.setDestination(29242U);
    msg.setDestinationEntity(139U);
    msg.type = 55U;
    msg.req_id = 1302508073U;
    msg.ttl = 10988U;
    msg.code = 232U;
    msg.destination.assign("SJZGNCKYDIOFUBFWVEUGYMJQRCSEISOYJZNOWYMDPTDGVIBHRLDBHTRYDMXUDTPOLFKIOBZHLQHQKMKVABJFZLIJJECOAIUEKTAVNKPHRTQEEESZFRBWVMLBOJHWWBTNNCDVYLHNZEFYAJYKNBFIEZMURPSGWKPLNLKXVURWXS");
    msg.source.assign("YEKGAHIJDWSRBFKODUMGFPAMUVWILLSNFCHWNCMRVYYXSQRYAKCEIADFZMINNPLWXBKIUXEKZUGBWRVHQCSCXAVUHOBOUTRQBZUMHBRSAORPTKNFTYOTKJNUDFPCRCZNIIXBTZJKFJYYRXMAMDZOPH");
    msg.acknowledge = 78U;
    msg.status = 27U;
    const signed char tmp_msg_0[] = {-43, -47, -93, -77, -69, 50, -25, -24, -61, 14, -42, 25, -10, 80, 106, 21, 107, 77, -101, 6, -92, 81, 53, -68, 48, 87, -72, 36, 123, 40, -30, -49, 77, -36, 49, 92, -13, 64, 42, -28, 119, -15, -46, -44, 57, 96, 101, 83, -39, -59, -43, -119, -83, -88, 0, -49, -76, 84, 114, -58, 26, 113, 51, 120, -104, -108, -79, -15, 82, 53, -96, 23, 20, 41, -25, -103, -36, -104, 93, 35, -67, -10, -49, 82, -75, 42, 122, -30, -96, 110, 113, -11, 64, 105, -75, 18, 99, -85, -32, 50, 108, 117, 120, 115, -27, -70, -35, 47, -37, 31, 115, 28, -87, -123, 100, -81, -124, -70, -76, -115, 113, 67, 18, -38, 20, -18, -126, -56, -61, 43, -70, -106, 10, 19, 80, 121, -101, 105, -48, 12, -82, 39, -44, -100, -99, -78, -7, 116, -22, -101, 39, -115, -47, -83, -57, -40, 79, 84, 0, -81, 4, -68, 44, -41, 63, -70, -12, -125, 26, 92, -114, -65, -118, 50, 75, -27, 42, 4, -57, 106, 63, 51, -106, 19, -44, -67, 43, -103, -56, -62, 17, 117, -50, 11, 4, 20, 29, -92, 22, -128, -39, -90, -112, -52, -110, 62, 13, 4, 59, -111, 72, 22, -114};
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
    msg.setTimeStamp(0.6541528878673322);
    msg.setSource(31059U);
    msg.setSourceEntity(194U);
    msg.setDestination(54756U);
    msg.setDestinationEntity(63U);
    msg.id = 94U;
    msg.range = 0.7480247721845618;

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
    msg.setTimeStamp(0.8792803665131748);
    msg.setSource(46415U);
    msg.setSourceEntity(150U);
    msg.setDestination(36560U);
    msg.setDestinationEntity(218U);
    msg.id = 222U;
    msg.range = 0.6566010561560744;

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
    msg.setTimeStamp(0.030653238861543253);
    msg.setSource(33187U);
    msg.setSourceEntity(143U);
    msg.setDestination(52319U);
    msg.setDestinationEntity(164U);
    msg.id = 65U;
    msg.range = 0.8693812084297473;

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
    msg.setTimeStamp(0.641415847182436);
    msg.setSource(34790U);
    msg.setSourceEntity(35U);
    msg.setDestination(26441U);
    msg.setDestinationEntity(15U);
    msg.beacon.assign("YRZEZEFKZEAOQLXGZPXTQPJUSYSHLHHMKECSWMXUFATQMLMNSRKCFJBRTCDXJTWHOFDTWKSJKNUUHYXILFYZNGETZRYRRMNIJCIINMDCBJPLPQHSPQVXOWVOLUIAYAFHGFNOJISMZTMUBIGFCOFQY");
    msg.lat = 0.8638840929961326;
    msg.lon = 0.7678539666802132;
    msg.depth = 0.9160042516532719;
    msg.query_channel = 55U;
    msg.reply_channel = 143U;
    msg.transponder_delay = 0U;

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
    msg.setTimeStamp(0.343652407339448);
    msg.setSource(4388U);
    msg.setSourceEntity(97U);
    msg.setDestination(24216U);
    msg.setDestinationEntity(234U);
    msg.beacon.assign("PMXGBMVRKFCIVAUYBJHQKWDESBNZZCWVVWSKCAUSRHCHOAOLPCWKAVETZNDETRZTEPIXAGFERSDIZBGVHTIPIZEJNQWCBEMMGLFJXDSMBRQLHDPQHRKJBRYVRAUNTRIDBHGFNKLQKLIUSQYKXYUYVKXHYJODFGCXPFEDPTTEKAULCWNJMLQGDXFOUWNXSSRILYSPJJOOYOVPNXUJBY");
    msg.lat = 0.46607534435128073;
    msg.lon = 0.7487805239787911;
    msg.depth = 0.24548559808639647;
    msg.query_channel = 245U;
    msg.reply_channel = 8U;
    msg.transponder_delay = 179U;

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
    msg.setTimeStamp(0.1231357459987632);
    msg.setSource(34155U);
    msg.setSourceEntity(122U);
    msg.setDestination(40884U);
    msg.setDestinationEntity(216U);
    msg.beacon.assign("AXNCHZFFQXMARJYMLABONCYLSZEMZTOGQWXFYDOHCQEKBEYYJPNEOGODXWFIMCRYNNUKDTVJZRXILMWYIMBWHKNUVBRIBZFTSQGIPXJANXNATPDAWILSD");
    msg.lat = 0.4892467258213784;
    msg.lon = 0.2556009722213859;
    msg.depth = 0.31979183485935325;
    msg.query_channel = 94U;
    msg.reply_channel = 240U;
    msg.transponder_delay = 13U;

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
    msg.setTimeStamp(0.7415383389571223);
    msg.setSource(15505U);
    msg.setSourceEntity(29U);
    msg.setDestination(43141U);
    msg.setDestinationEntity(93U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.9228897246621005);
    msg.setSource(57793U);
    msg.setSourceEntity(36U);
    msg.setDestination(9017U);
    msg.setDestinationEntity(33U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.2838117069743228);
    msg.setSource(24645U);
    msg.setSourceEntity(71U);
    msg.setDestination(19561U);
    msg.setDestinationEntity(133U);
    msg.op = 48U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FXEWOTCYVBVJENJGHJLHFRNOHXFPPSGQXGACUQTMVRYIYBVJBNRGMHZUBKCJDBETAZHERTWIACWXJFGIRLRVPHFLFCDMXLIEUBPUYLSKQITZRRIZBOKQQSZENTDNIPWGPEVMEXQDUZTWAQKHYVDEANVJHLFQWACCVWHLLOUKBPMQMSDXJQOSWTKOMGUMWZMUZSLSGFCDYRKXNIKNCKVBZJYNOSPFRFWEYUIPDIAUAPOH");
    tmp_msg_0.lat = 0.47143205799041077;
    tmp_msg_0.lon = 0.006076833490419431;
    tmp_msg_0.depth = 0.9758459190649638;
    tmp_msg_0.query_channel = 208U;
    tmp_msg_0.reply_channel = 160U;
    tmp_msg_0.transponder_delay = 111U;
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
    msg.setTimeStamp(0.881447282598966);
    msg.setSource(20906U);
    msg.setSourceEntity(120U);
    msg.setDestination(50314U);
    msg.setDestinationEntity(228U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.5821927276686236;
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
    msg.setTimeStamp(0.3856127286611929);
    msg.setSource(42011U);
    msg.setSourceEntity(219U);
    msg.setDestination(44613U);
    msg.setDestinationEntity(33U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("KBGISBWIIHTIWBVQEDQQPVJETSGNDTMYKGJLPWQDLSZFELSNQXJWGZNAFKEEAMWZRVSXVHKWBUFIUFEZHJPDBOVPTFRFKOYIPMMFJOOQVGKSWWCPFQLINEXDCLNOWUHCZNCQPTTZAALUBDGTDTORJQKAGMAZRNBKVDGHPHAYEYQVKHUDONRXLCWCEBXFTBXAJRXCYRYRLIJXFCSGYCUHCLMUZOPGIZOVZBAOJVSSLUSPMXRHYDKUMYU");
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
    msg.setTimeStamp(0.5279922966493196);
    msg.setSource(59701U);
    msg.setSourceEntity(82U);
    msg.setDestination(48009U);
    msg.setDestinationEntity(234U);
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 196U;
    tmp_msg_0.op = 58U;
    tmp_msg_0.possimerr = 0.3771825080724255;
    tmp_msg_0.converg = 0.7921887230868677;
    tmp_msg_0.turbulence = 0.8720945434626508;
    tmp_msg_0.possimmon = 230U;
    tmp_msg_0.commmon = 44U;
    tmp_msg_0.convergmon = 225U;
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
    msg.setTimeStamp(0.9536800635266642);
    msg.setSource(63394U);
    msg.setSourceEntity(16U);
    msg.setDestination(10813U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.338797870739161;
    msg.lon = 0.2951677594853469;
    msg.depth = 0.4282635146516658;
    msg.sentence.assign("XGSNGWAQTEDRXZILXIKPLHHUKTCXFGMLHYMTMVL");
    msg.txtime = 0.6384330361823322;
    msg.modem_type.assign("RAZXERGQOPFBAKKBJTCIXPLIQUELGAWYFOAQIGCJABUQMKJQHVDZRVJIYYPPLZTEILOWFRVUSMEWXB");
    msg.sys_src.assign("GTICLGKAXILVBKVVZNCPRTDDAXJXEBGFYVONQNDFJSVFZWLSYUQGXYUENKBSODKZQOVHPJYAOHXKHOYTUKXTEGRSDQCDII");
    msg.seq = 22795U;
    msg.sys_dst.assign("QZWCJSXJKGTMAAEWANWWPFMDJWUGVNMUEFJCDBLGYXIQSFPHFXRMSGMXEDLIKVPGBRLRNSIYZSUMACLERZBKUZHJVOKTEGWWVNIQFMFEIYUQVE");
    msg.flags = 216U;
    const signed char tmp_msg_0[] = {114, 85, 65, -90, -116, 9, 2, -33, -61, 80, 68, 89, -106, -55, -17, 97, -34, 126, -112, -33, -20, 1, 28, 26, 74, -26, 37, -66, 78, -11, 3, 94, -108, 5, -124, 109, -103, -103, -70, -8, -119, 60, -29, -35, -40, 108, 43, -33, 34, -34, 85, 96, 89, 33, -104, -89, -25, -52, -4, 17, 121, 3, -116, 89, 109, -23, 125, -114, 77, 64, 124, -125, -74, 102, 59, 79, 22, -19, 41, -3, 123, -17, -88, 121, 4, 87, -13, 75, -60, 57, -97, 120, 88, -74, -97, -127, 126, 77, -18, 86, -54, -124, 55, 45, 105, 98, 71, -73, 95};
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
    msg.setTimeStamp(0.9581852447618525);
    msg.setSource(7225U);
    msg.setSourceEntity(168U);
    msg.setDestination(45946U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.49175025046133813;
    msg.lon = 0.7134396495674477;
    msg.depth = 0.3396839340465273;
    msg.sentence.assign("KKGAZWIZANBX");
    msg.txtime = 0.051632812187429544;
    msg.modem_type.assign("OSTEMEXRJWJPTMDGKLRWJ");
    msg.sys_src.assign("ZVZEVXKMQVBBUGZTIDEAQXJF");
    msg.seq = 10967U;
    msg.sys_dst.assign("TLJIKAUCYRHWOBFBGRICKPVNPURNMAJCFBTECRRKJNCXSTBCQVXGNIKGVOSMFBHJHUAVXDZCAJZAXJLEPBGOFSCYEFEPLIVDSRLMNANZIDNKXUQPEHQVXELTYSJLEYFDLOAMDAAOIMYDIUMKKSNQKRHYCFSDMWQOKHHVWQINYGVZITEUBDMQBOYTLZXEWPGBRPIMV");
    msg.flags = 116U;
    const signed char tmp_msg_0[] = {101, 112, -26, -45, -33, 109, -29, -66, -93, 110, 51, 85, -74, -59, 4, 18, 39, -21, -115, 59, -89, 118, -11, 58, -31, 49, 87, -3, -72, 39, 35, 50, -20, 74, -54, -32, 94, -25, -69, -41, 87, -94, -53, -35, -94, 89, -98, 70, -66, -109, 0, -15, -55, -90, 41, 123, 67, -65, -94, 74, -75, 56, 38, 29, -66, 98, 95, -77, -114, 106, 37, -1, 84, -127, -33, -82, -29, -42, -119, -16, 2, -69, -47, -99, 24, 38, 89, -83, -115, 73, 7, 15, -122, -51, -36, 32, 69, 99, -64, 11, -107, 111, 2, 120, -4, 96, 43, 45, -48, 45, -15, -32, -45, -96, 10, 52, 61, 97, -9, 32, 5, 46, 49, 68, -123, -60, -54, 23, -22, 123, -57, -127, -84, -48, 123, -78, -7, 107, -30, 117, -119, 48, 112, -12, -99, -96, 105, -42, -85, 25, 5, 61, 64, -83, 85, -80, -42, -39, -60, -41, -121, -116, 84, 9, -64, -68, -116, -91, -102, -89, -36, 23, 11, 3, -39, -126, 119, -90, 42, -72, -46, 66, -42, 57, -9, 52, 38, 70, 109, -29, -100, -31, 50, 39, -71, 121, 9, -43, -24, -65, 40, -62, 39, -72, 113, -73, 7, 79, -123, -82, 21, 44, 67, -84, 119, -20, -14, -47, -22, -84, 106, 117, -65, 14, 60, 36, -86, -52, -119, 81, -128, 46, -10};
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
    msg.setTimeStamp(0.41866381469571323);
    msg.setSource(33859U);
    msg.setSourceEntity(77U);
    msg.setDestination(558U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.17189059351819447;
    msg.lon = 0.11742693784476865;
    msg.depth = 0.25864759553069605;
    msg.sentence.assign("QYWCFHVLNMTZCLYWTHJMSDNFBJJYVEOXBTDILUPRDJKSSLRFYIATZGVUJTAHAWDOMUOYVXFBSFYIOLUYJTYPZZZPDUPFXRSMNSGSKVGNENPUJNURTINDCXMFFOBICMLQRHUXGCHOSYQBWEBSPQEXVKQRSXCWCXPKGJQEAMCOCTRYWWDH");
    msg.txtime = 0.5403721683949807;
    msg.modem_type.assign("ADRAULUVXKCSNNKSJBBUISGSWZCTMIGWJDQTFOGFHXMPTGPVYKGVUOWNSZEOLGCJZVXKTWAGETNPRFDFNAMZIQIVJYPQWRJXEBFODAVSHJYZ");
    msg.sys_src.assign("LDMYUAJKQSPSJNZKZBOJGPIPBGPDCFKUBQQPSKYIBMDFAVTMXXIENCDMGESMGCLT");
    msg.seq = 48818U;
    msg.sys_dst.assign("UCEPUKHVOUAZROKYKEWZDIUWPTLFCZHNRIEKSUETMYFFJIOPV");
    msg.flags = 35U;
    const signed char tmp_msg_0[] = {85, 32, 62, -113, 122, 94, 57, 25, 66, 118, -7, 51, 102, 73, 96, -54, 44, -31, 105, -102, 23, -110, -49, -36, 109, 1, 23, -113, 81, -65, -74, 94, -5, -33, 70, -97, -89, -119, 91, -28, 35, 50, -83, -90, -91, -94, -47, 1, -84, 115, -100, -62, -30, 31, 82, -5, -109, -115, 36, 107, -113, 68, 40, 94, -17, -75, -78, 68, 55, 98, -79, 17, 33, 98, -124, 11, -19, -79, 17, -17, -37, -60, -106, -66, 77, -60, 88, -107, 59, -67, -112, 74, -74, -14, -41, -121, 88, 18, 33, 37, -128, 18, -112, 97, 67, 62, -66, 16};
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
    msg.setTimeStamp(0.946214845672426);
    msg.setSource(7602U);
    msg.setSourceEntity(153U);
    msg.setDestination(29166U);
    msg.setDestinationEntity(177U);
    msg.op = 72U;
    msg.system.assign("EMRYKJCOVSEMUNJDHGQMIYWDFJSEXKOKAAIDJXFKTSNRTQZNBARPAGETJCRLXGGLIZULJBDHBYISXRDRVXYXYTYOWJPWIIBAMMLFPJSBCLXGKXQJBGNRFKRMLUSURSCNMPCWPHVYZDWUAULEKMTKDGTCQOIHFIGWBUMOVZOEPBZWLVXQIQOHPYHHVWNPGYNZQKVOWAO");
    msg.range = 0.30432495072442134;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 55715U;
    tmp_msg_0.lat = 0.4360782352150614;
    tmp_msg_0.lon = 0.7965975188473154;
    tmp_msg_0.z = 0.62267211476523;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.speed = 0.14433815726538946;
    tmp_msg_0.speed_units = 120U;
    tmp_msg_0.roll = 0.578378861823513;
    tmp_msg_0.pitch = 0.5424438557298817;
    tmp_msg_0.yaw = 0.38949712770761813;
    tmp_msg_0.custom.assign("GCSBGLADIELQXKNASQAYCNKBRECJZMXCTZZUDYJPMVRCOFDEDJXBYQVXWWHWKXPJMXDHTFYNIGCLBIJVTPKDEUGYCZQZRVVUXLEPZRLKWUTNAHMMGCISHKSEPHWMQATVO");
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
    msg.setTimeStamp(0.2054699464922265);
    msg.setSource(48326U);
    msg.setSourceEntity(160U);
    msg.setDestination(30069U);
    msg.setDestinationEntity(73U);
    msg.op = 14U;
    msg.system.assign("MFNPJQENRMAELGOWTSPSGEWXRRXASITVEPVGDREVUPLSWHFGQSFUMQHTQVRLYIYSKOUPGEBDOIZKJLIKFJRUMIJFVAOYLBDSPAZXWUCESMTUXXIHYVXOATNKRPCDOYHPZJMHBDNSWQILRGNBYQDFXBFDVWBQCAZDXWCUPWVKELHU");
    msg.range = 0.5468347684742959;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.8523199181101403);
    msg.setSource(25290U);
    msg.setSourceEntity(70U);
    msg.setDestination(12153U);
    msg.setDestinationEntity(81U);
    msg.op = 183U;
    msg.system.assign("OPZLOANQVROMWWNVNVMQLYWYYPKFMOFASTWRBESCGLUVTISWKNXQZDLXQLVJTIYRRFJDAMBGBJYTAAGHNNQXPTGHTPKVDPNB");
    msg.range = 0.5083889934739371;
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.7843048198329134;
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
    msg.setTimeStamp(0.7372116151281933);
    msg.setSource(47785U);
    msg.setSourceEntity(115U);
    msg.setDestination(7444U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.7594579003176938);
    msg.setSource(48028U);
    msg.setSourceEntity(35U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.6130223317020395);
    msg.setSource(25482U);
    msg.setSourceEntity(147U);
    msg.setDestination(32269U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.0137406812043801);
    msg.setSource(8746U);
    msg.setSourceEntity(241U);
    msg.setDestination(39367U);
    msg.setDestinationEntity(144U);
    msg.list.assign("TJRJUQOBDYGQFFLCMIQSBSXRDXIZZIUSAPEAEPGAXNPROGKURTLIBHKDNDNDZQLVGWVURVEZPYBEAVEOGINUKQZATPEZMRJMGPLFWJIOQBETJCDOVKSWCTWGADVLYCMVWDDTMVKNNRFFJWQJWYHYJSIPMLKOEGUJCKHQEBTSCNYMXRARWQXKQXNIYGBFIAHGOMFHFXOPLASTCDKSPSX");

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
    msg.setTimeStamp(0.25826462310098763);
    msg.setSource(37562U);
    msg.setSourceEntity(242U);
    msg.setDestination(19572U);
    msg.setDestinationEntity(75U);
    msg.list.assign("NSUYFZEKSEOJEABZWFDKRFRVMWJTQPQEALNDHFPEJJPEHFGULIBAAINZORGNUKUQQZAOCFOQREQVIHBXCAIBCRIGVNMNPLWGLZVJMTKCQIUEXRCZXXWVQOPXMZKGWASWMJTXBOOYDBUHVGYRWVTQZJDUHVZLQYYMVYPKMDSHLOYUPHTUSFAXTZDMSTOFXLMDNWRLNPDPGCMBWYWPETDJT");

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
    msg.setTimeStamp(0.34903239640525385);
    msg.setSource(30361U);
    msg.setSourceEntity(147U);
    msg.setDestination(37514U);
    msg.setDestinationEntity(22U);
    msg.list.assign("JAYPULRQQBIXZUIBPDUIDVQNWZFALFBMLHLYHJNDPPRVLWFMFXTCHEMYAQBQZUNKETOBDJDJBODTIXSREHAKKFENGXGCSKUOBENZOCFNKRERMVZLLQOZBHIGXOWSIYITKSJSWONCAXLHYMEUNZYOVATVTIUTVHJERFGPCGGGPWQUACUEYWYAIKVMWZJSFLDFDSBJCRTZGCVXMCXGRNDWJRIQPJCKXWMHASVPRVBDUYGHMPPW");

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
    msg.setTimeStamp(0.6177049076167697);
    msg.setSource(60207U);
    msg.setSourceEntity(224U);
    msg.setDestination(34471U);
    msg.setDestinationEntity(82U);
    msg.peer.assign("STTXRRUKUSSWCAZGUNPMUEAJXFKFKFHWTXDOBIVMQNFEHCDHNIKTPMJQMMHCKKDSZVOMLRKOZPWYIGBLMHANKGTPOYTECGXDVTZRLZDPVDNDYHFRTOCAUXVYPPCGCCGDIWR");
    msg.rssi = 0.11906989663417311;
    msg.integrity = 2849U;

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
    msg.setTimeStamp(0.508013954084492);
    msg.setSource(31830U);
    msg.setSourceEntity(226U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(145U);
    msg.peer.assign("TFNWWCWCKONBBAMUFOHCAFKPZZYVAJXNGJHJQCHHQXIPIUPNDNODEBHSQQBRSMGRGWEQWLTXNBZARZDERHCFXERZUWWXIMUSCTKJTGIAIFTVHLYJSMGZOPJMPPLGLLGYTOKDRNRIEIGOWSKHIVQTEK");
    msg.rssi = 0.6354577151271815;
    msg.integrity = 55420U;

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
    msg.setTimeStamp(0.04736929415225133);
    msg.setSource(57900U);
    msg.setSourceEntity(208U);
    msg.setDestination(30033U);
    msg.setDestinationEntity(75U);
    msg.peer.assign("UNSHGNEKHEBQNMDPTZKUEFZSIZKFYWSMZNCICXKNAWXERTBQOLGOAEMPCVVXJTNRLMHHTAAVCBQWZWVWDJCUUOAHANQIULOGTWVZC");
    msg.rssi = 0.3772683216055467;
    msg.integrity = 12652U;

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
    msg.setTimeStamp(0.38778491686013095);
    msg.setSource(3465U);
    msg.setSourceEntity(185U);
    msg.setDestination(15820U);
    msg.setDestinationEntity(69U);
    msg.req_id = 8816U;
    msg.destination.assign("FSLMWFSYHRMYHQQGFLXCJQPZFNDNDKIHVAOSTQZZLPGBBHCRVNPEVVIHZWOGQSJEAJGZZULTSKSCUNGDMFAODPWUTUUCQOZYFDVKRASWMCGQGDHMBETJGUZRUDOQQXXEMMEHBEJHXISEOCH");
    msg.timeout = 0.1841355614940322;
    msg.range = 0.03077451503335127;
    msg.type = 96U;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 108U;
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
    msg.setTimeStamp(0.460521217950587);
    msg.setSource(38186U);
    msg.setSourceEntity(174U);
    msg.setDestination(47507U);
    msg.setDestinationEntity(43U);
    msg.req_id = 182U;
    msg.destination.assign("HZUOSOKADCWTXERGCMWAYQBOQPMABNQMRUDURNNKGKJMVEWETKYYYWWGSEPFFPRGWTFHIRDAEDLCJQLOGLUKQOZVZUZJYRYZIFPWMWJOSWZRNFJYEBMDHQFIICDLFXRIOQAASIXWLXTFKVUQGKHROTLQNLGSBVRBJVBMVNCPIUJXHSGIEKBDTBCAPBVYLOELZJCTHNHUVUMDAZTYQYGJIXSNPISHFCTXNPCBTD");
    msg.timeout = 0.33707052805041704;
    msg.range = 0.6407259888710161;
    msg.type = 47U;
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.6841775644733964;
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
    msg.setTimeStamp(0.21959233085992957);
    msg.setSource(36721U);
    msg.setSourceEntity(249U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(69U);
    msg.req_id = 21509U;
    msg.destination.assign("JNQJAIEWOTSPMTHTGHURVODSLUSVCPKWXFLZFPOKZQXNGJPMXVYETRKMERCEFUQHPDFVTDZCSZGIWXYRIKNDXAHTIYFALIDNUWZLLCPHCOOLSKALSIBWCNHAUPHRAQBORUVSBBUZDJNXSJKUPNZPGJDYTXHOBYMPIRCGKRVOJHZXKQWYGBA");
    msg.timeout = 0.2661861250096532;
    msg.range = 0.9970400772708059;
    msg.type = 90U;
    IMC::GpioState tmp_msg_0;
    tmp_msg_0.name.assign("UQVFIROLZNPLRBYQFQHBISKPVAUDUXTBOIWKQXJCUYROOZKFHYDCFVXWEISMMDXDTRUCHHGYIHBQTYAGNDNKPWTBDSSAAEHNWIVNMJKQFVJIGPZLGZKTONBOXOKRLWAICVEZBVELGYVJGWTRXLLAXCJSRSRAXASZCBJWFPM");
    tmp_msg_0.value = 248U;
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
    msg.setTimeStamp(0.1316260133119418);
    msg.setSource(21067U);
    msg.setSourceEntity(222U);
    msg.setDestination(5477U);
    msg.setDestinationEntity(106U);
    msg.req_id = 36585U;
    msg.type = 119U;
    msg.status = 227U;
    msg.info.assign("KZURULREVGTXENJPUNANHWDOTBAVCLHXXFGIPGIRWJETRZFJKTSXBMJJPTTQKYTZXNUJKIASMSQHFWCKUOYTIQXIKYABFYWUCWNDRFAZBLLJPCZOIVEAZEAWZLUEZKNBDQFOOSHDESQLXVRJNLEGMBYPR");
    msg.range = 0.7270993709506434;

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
    msg.setTimeStamp(0.7576577139304835);
    msg.setSource(62689U);
    msg.setSourceEntity(243U);
    msg.setDestination(41718U);
    msg.setDestinationEntity(42U);
    msg.req_id = 26429U;
    msg.type = 59U;
    msg.status = 196U;
    msg.info.assign("CAGZQDTEZN");
    msg.range = 0.321442240272112;

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
    msg.setTimeStamp(0.3128900149020044);
    msg.setSource(40253U);
    msg.setSourceEntity(54U);
    msg.setDestination(9050U);
    msg.setDestinationEntity(40U);
    msg.req_id = 2642U;
    msg.type = 197U;
    msg.status = 3U;
    msg.info.assign("YMNSJGXDMCGSHEDWRIFLRSGMUSBRRQLFTBGIFU");
    msg.range = 0.3787762234193953;

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
    msg.setTimeStamp(0.1607756958810912);
    msg.setSource(32305U);
    msg.setSourceEntity(250U);
    msg.setDestination(54848U);
    msg.setDestinationEntity(173U);
    msg.value = -15158;

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
    msg.setTimeStamp(0.3380866160273073);
    msg.setSource(28579U);
    msg.setSourceEntity(35U);
    msg.setDestination(1647U);
    msg.setDestinationEntity(51U);
    msg.value = -10629;

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
    msg.setTimeStamp(0.8818337892538628);
    msg.setSource(37764U);
    msg.setSourceEntity(80U);
    msg.setDestination(55661U);
    msg.setDestinationEntity(134U);
    msg.value = -22204;

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
    msg.setTimeStamp(0.20760491562443106);
    msg.setSource(17292U);
    msg.setSourceEntity(240U);
    msg.setDestination(1804U);
    msg.setDestinationEntity(159U);
    msg.value = 0.7672062512886614;

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
    msg.setTimeStamp(0.12480676558551873);
    msg.setSource(24767U);
    msg.setSourceEntity(212U);
    msg.setDestination(3076U);
    msg.setDestinationEntity(168U);
    msg.value = 0.18088724295559278;

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
    msg.setTimeStamp(0.22687966884639965);
    msg.setSource(60359U);
    msg.setSourceEntity(189U);
    msg.setDestination(63468U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7498055651053551;

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
    msg.setTimeStamp(0.23383722271569762);
    msg.setSource(21425U);
    msg.setSourceEntity(226U);
    msg.setDestination(25973U);
    msg.setDestinationEntity(20U);
    msg.value = 0.8611569410541003;

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
    msg.setTimeStamp(0.8203863199549773);
    msg.setSource(46770U);
    msg.setSourceEntity(190U);
    msg.setDestination(62737U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6783375724212176;

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
    msg.setTimeStamp(0.6396104398096076);
    msg.setSource(40745U);
    msg.setSourceEntity(148U);
    msg.setDestination(13664U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7892861237872657;

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
    msg.setTimeStamp(0.9469454184502504);
    msg.setSource(30973U);
    msg.setSourceEntity(243U);
    msg.setDestination(21654U);
    msg.setDestinationEntity(232U);
    msg.validity = 25599U;
    msg.type = 110U;
    msg.utc_year = 15485U;
    msg.utc_month = 210U;
    msg.utc_day = 48U;
    msg.utc_time = 0.007062441470779834;
    msg.lat = 0.35170358127319534;
    msg.lon = 0.6722385461228869;
    msg.height = 0.10424508189351267;
    msg.satellites = 226U;
    msg.cog = 0.5592950618018713;
    msg.sog = 0.6149920217620642;
    msg.hdop = 0.6693315771882212;
    msg.vdop = 0.42351777945207947;
    msg.hacc = 0.9683373525953473;
    msg.vacc = 0.34834150958666255;

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
    msg.setTimeStamp(0.9404512683274496);
    msg.setSource(31984U);
    msg.setSourceEntity(141U);
    msg.setDestination(43977U);
    msg.setDestinationEntity(113U);
    msg.validity = 15477U;
    msg.type = 31U;
    msg.utc_year = 13587U;
    msg.utc_month = 47U;
    msg.utc_day = 86U;
    msg.utc_time = 0.17480902112106778;
    msg.lat = 0.7488975434736118;
    msg.lon = 0.36699536931456844;
    msg.height = 0.09673046808713315;
    msg.satellites = 114U;
    msg.cog = 0.772008945846016;
    msg.sog = 0.014200716661376012;
    msg.hdop = 0.7007466311193585;
    msg.vdop = 0.4694044032475262;
    msg.hacc = 0.9508633812659987;
    msg.vacc = 0.8199272466242399;

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
    msg.setTimeStamp(0.734164090914728);
    msg.setSource(55857U);
    msg.setSourceEntity(93U);
    msg.setDestination(2764U);
    msg.setDestinationEntity(108U);
    msg.validity = 16775U;
    msg.type = 92U;
    msg.utc_year = 47215U;
    msg.utc_month = 150U;
    msg.utc_day = 67U;
    msg.utc_time = 0.7793662333447123;
    msg.lat = 0.021227181999921796;
    msg.lon = 0.3575668711141674;
    msg.height = 0.4182424760912953;
    msg.satellites = 65U;
    msg.cog = 0.1106987321196351;
    msg.sog = 0.5073845971249521;
    msg.hdop = 0.0687420016573893;
    msg.vdop = 0.9443015160149316;
    msg.hacc = 0.7948919986427753;
    msg.vacc = 0.11097674714317163;

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
    msg.setTimeStamp(0.5504320279687109);
    msg.setSource(34715U);
    msg.setSourceEntity(28U);
    msg.setDestination(63474U);
    msg.setDestinationEntity(31U);
    msg.time = 0.7979309004444298;
    msg.phi = 0.42544541244124157;
    msg.theta = 0.6125208218939581;
    msg.psi = 0.573356031665428;
    msg.psi_magnetic = 0.7157561798630756;

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
    msg.setTimeStamp(0.7735655631675711);
    msg.setSource(31991U);
    msg.setSourceEntity(142U);
    msg.setDestination(45093U);
    msg.setDestinationEntity(182U);
    msg.time = 0.771276095152965;
    msg.phi = 0.2410512740889026;
    msg.theta = 0.5461598808921775;
    msg.psi = 0.21855877975285476;
    msg.psi_magnetic = 0.3591611785408464;

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
    msg.setTimeStamp(0.6092773859709066);
    msg.setSource(5455U);
    msg.setSourceEntity(169U);
    msg.setDestination(49461U);
    msg.setDestinationEntity(85U);
    msg.time = 0.23181317689935166;
    msg.phi = 0.3363460100144856;
    msg.theta = 0.11661031694774182;
    msg.psi = 0.17524461103671307;
    msg.psi_magnetic = 0.992262387963994;

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
    msg.setTimeStamp(0.3101259173118579);
    msg.setSource(35152U);
    msg.setSourceEntity(176U);
    msg.setDestination(56604U);
    msg.setDestinationEntity(120U);
    msg.time = 0.2411473641956251;
    msg.x = 0.36329584600425746;
    msg.y = 0.777883662423293;
    msg.z = 0.46272428592780557;
    msg.timestep = 0.6032381206807117;

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
    msg.setTimeStamp(0.4272239237419436);
    msg.setSource(494U);
    msg.setSourceEntity(36U);
    msg.setDestination(40035U);
    msg.setDestinationEntity(236U);
    msg.time = 0.12854689033725575;
    msg.x = 0.9960917532857473;
    msg.y = 0.10603297403620704;
    msg.z = 0.7671547348914157;
    msg.timestep = 0.18426783004096037;

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
    msg.setTimeStamp(0.45010883474081564);
    msg.setSource(32019U);
    msg.setSourceEntity(187U);
    msg.setDestination(55591U);
    msg.setDestinationEntity(32U);
    msg.time = 0.32086891710201115;
    msg.x = 0.2502217663437101;
    msg.y = 0.6747116111960769;
    msg.z = 0.4665944520630718;
    msg.timestep = 0.7379400974518929;

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
    msg.setTimeStamp(0.8322956679715415);
    msg.setSource(55569U);
    msg.setSourceEntity(191U);
    msg.setDestination(43186U);
    msg.setDestinationEntity(149U);
    msg.time = 0.5725764828961283;
    msg.x = 0.9094336254626166;
    msg.y = 0.7033130713843548;
    msg.z = 0.038234424406866196;

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
    msg.setTimeStamp(0.5626658585696875);
    msg.setSource(3273U);
    msg.setSourceEntity(2U);
    msg.setDestination(24723U);
    msg.setDestinationEntity(80U);
    msg.time = 0.13445853937219399;
    msg.x = 0.19216329413602073;
    msg.y = 0.9946670354271199;
    msg.z = 0.7834262324377701;

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
    msg.setTimeStamp(0.7610450187919551);
    msg.setSource(46465U);
    msg.setSourceEntity(164U);
    msg.setDestination(44551U);
    msg.setDestinationEntity(237U);
    msg.time = 0.7170196756116088;
    msg.x = 0.01943013022279061;
    msg.y = 0.34702391563668533;
    msg.z = 0.8839086250702569;

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
    msg.setTimeStamp(0.9924237435554779);
    msg.setSource(17125U);
    msg.setSourceEntity(224U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(153U);
    msg.time = 0.6781408190786857;
    msg.x = 0.1825553104975568;
    msg.y = 0.32711774094290813;
    msg.z = 0.2022295017495257;

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
    msg.setTimeStamp(0.20139924151391186);
    msg.setSource(61381U);
    msg.setSourceEntity(50U);
    msg.setDestination(27828U);
    msg.setDestinationEntity(30U);
    msg.time = 0.24954607232685777;
    msg.x = 0.3747897139155718;
    msg.y = 0.14485394493790882;
    msg.z = 0.7739845086487123;

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
    msg.setTimeStamp(0.9372515414529072);
    msg.setSource(21310U);
    msg.setSourceEntity(49U);
    msg.setDestination(40123U);
    msg.setDestinationEntity(251U);
    msg.time = 0.2573155321314059;
    msg.x = 0.6071176623567969;
    msg.y = 0.926137917741502;
    msg.z = 0.04011911839589466;

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
    msg.setTimeStamp(0.7962912277270192);
    msg.setSource(19092U);
    msg.setSourceEntity(24U);
    msg.setDestination(50252U);
    msg.setDestinationEntity(94U);
    msg.time = 0.22693063151055626;
    msg.x = 0.9975316650887714;
    msg.y = 0.3574480860090762;
    msg.z = 0.39482711549814853;

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
    msg.setTimeStamp(0.33621359418983277);
    msg.setSource(23170U);
    msg.setSourceEntity(229U);
    msg.setDestination(39380U);
    msg.setDestinationEntity(249U);
    msg.time = 0.7952375479654095;
    msg.x = 0.9345436496834517;
    msg.y = 0.3695720576581295;
    msg.z = 0.6190479020202847;

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
    msg.setTimeStamp(0.12890201810060387);
    msg.setSource(12516U);
    msg.setSourceEntity(113U);
    msg.setDestination(4982U);
    msg.setDestinationEntity(10U);
    msg.time = 0.3532169483755392;
    msg.x = 0.7466618994674126;
    msg.y = 0.6824775602480198;
    msg.z = 0.09966576272239591;

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
    msg.setTimeStamp(0.8032961919661713);
    msg.setSource(28193U);
    msg.setSourceEntity(214U);
    msg.setDestination(57588U);
    msg.setDestinationEntity(125U);
    msg.validity = 14U;
    msg.x = 0.3796626081605815;
    msg.y = 0.16780277068416982;
    msg.z = 0.2799636472231507;

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
    msg.setTimeStamp(0.42459699658076255);
    msg.setSource(56406U);
    msg.setSourceEntity(8U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(242U);
    msg.validity = 47U;
    msg.x = 0.6201679203120253;
    msg.y = 0.6616681992752517;
    msg.z = 0.35747866203992473;

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
    msg.setTimeStamp(0.5662950861476381);
    msg.setSource(44867U);
    msg.setSourceEntity(129U);
    msg.setDestination(15035U);
    msg.setDestinationEntity(172U);
    msg.validity = 20U;
    msg.x = 0.9613951786300278;
    msg.y = 0.15606528286690535;
    msg.z = 0.98354954754302;

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
    msg.setTimeStamp(0.2846278274796611);
    msg.setSource(52560U);
    msg.setSourceEntity(63U);
    msg.setDestination(17045U);
    msg.setDestinationEntity(231U);
    msg.validity = 209U;
    msg.x = 0.9408307231275596;
    msg.y = 0.4055501518777129;
    msg.z = 0.3235890967730237;

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
    msg.setTimeStamp(0.26917528537318824);
    msg.setSource(25573U);
    msg.setSourceEntity(212U);
    msg.setDestination(51254U);
    msg.setDestinationEntity(103U);
    msg.validity = 172U;
    msg.x = 0.3631335556393982;
    msg.y = 0.3259702433799653;
    msg.z = 0.4524620998138362;

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
    msg.setTimeStamp(0.380833357359303);
    msg.setSource(49736U);
    msg.setSourceEntity(153U);
    msg.setDestination(39552U);
    msg.setDestinationEntity(21U);
    msg.validity = 62U;
    msg.x = 0.7541379488736101;
    msg.y = 0.08896687262936742;
    msg.z = 0.7096389646003742;

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
    msg.setTimeStamp(0.9974160393018465);
    msg.setSource(9492U);
    msg.setSourceEntity(122U);
    msg.setDestination(11259U);
    msg.setDestinationEntity(231U);
    msg.time = 0.9646264740577521;
    msg.x = 0.601100036659147;
    msg.y = 0.04570523930360193;
    msg.z = 0.10347945305405348;

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
    msg.setTimeStamp(0.193048035581335);
    msg.setSource(56250U);
    msg.setSourceEntity(69U);
    msg.setDestination(52773U);
    msg.setDestinationEntity(228U);
    msg.time = 0.6806212089377752;
    msg.x = 0.5706850559456262;
    msg.y = 0.03965284264608271;
    msg.z = 0.9860973094917141;

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
    msg.setTimeStamp(0.7415996638195385);
    msg.setSource(41698U);
    msg.setSourceEntity(243U);
    msg.setDestination(53462U);
    msg.setDestinationEntity(174U);
    msg.time = 0.8160501800139142;
    msg.x = 0.30176561539913405;
    msg.y = 0.7643466565988688;
    msg.z = 0.6700383018078624;

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
    msg.setTimeStamp(0.29806479018508036);
    msg.setSource(15821U);
    msg.setSourceEntity(218U);
    msg.setDestination(7838U);
    msg.setDestinationEntity(0U);
    msg.validity = 70U;
    msg.value = 0.8117708546238049;

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
    msg.setTimeStamp(0.1522823260956936);
    msg.setSource(60099U);
    msg.setSourceEntity(126U);
    msg.setDestination(6263U);
    msg.setDestinationEntity(160U);
    msg.validity = 143U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.10202039517925776;
    tmp_msg_0.beam_height = 0.9940080685432795;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.2895624635754882;

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
    msg.setTimeStamp(0.11866206249210876);
    msg.setSource(3830U);
    msg.setSourceEntity(228U);
    msg.setDestination(59694U);
    msg.setDestinationEntity(175U);
    msg.validity = 112U;
    msg.value = 0.10037349016283159;

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
    msg.setTimeStamp(0.44601444036255133);
    msg.setSource(33293U);
    msg.setSourceEntity(252U);
    msg.setDestination(15371U);
    msg.setDestinationEntity(0U);
    msg.value = 0.962835656305835;

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
    msg.setTimeStamp(0.4607250423735);
    msg.setSource(21252U);
    msg.setSourceEntity(18U);
    msg.setDestination(17605U);
    msg.setDestinationEntity(176U);
    msg.value = 0.3150372077797904;

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
    msg.setTimeStamp(0.9776707024116542);
    msg.setSource(43747U);
    msg.setSourceEntity(80U);
    msg.setDestination(4012U);
    msg.setDestinationEntity(124U);
    msg.value = 0.24985490866512094;

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
    msg.setTimeStamp(0.6364247586104174);
    msg.setSource(11480U);
    msg.setSourceEntity(232U);
    msg.setDestination(35770U);
    msg.setDestinationEntity(143U);
    msg.value = 0.9806625985655908;

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
    msg.setTimeStamp(0.6511624186756112);
    msg.setSource(25825U);
    msg.setSourceEntity(56U);
    msg.setDestination(8848U);
    msg.setDestinationEntity(206U);
    msg.value = 0.4377592129270923;

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
    msg.setTimeStamp(0.93360138546156);
    msg.setSource(8795U);
    msg.setSourceEntity(199U);
    msg.setDestination(12325U);
    msg.setDestinationEntity(7U);
    msg.value = 0.40915805499327484;

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
    msg.setTimeStamp(0.7771434379844053);
    msg.setSource(54497U);
    msg.setSourceEntity(208U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(12U);
    msg.value = 0.20809336216075636;

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
    msg.setTimeStamp(0.6690902047260574);
    msg.setSource(40027U);
    msg.setSourceEntity(37U);
    msg.setDestination(52981U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7009604998461895;

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
    msg.setTimeStamp(0.42805393989881946);
    msg.setSource(31123U);
    msg.setSourceEntity(91U);
    msg.setDestination(64841U);
    msg.setDestinationEntity(52U);
    msg.value = 0.9429450482826582;

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
    msg.setTimeStamp(0.3620557485311391);
    msg.setSource(60640U);
    msg.setSourceEntity(219U);
    msg.setDestination(19996U);
    msg.setDestinationEntity(70U);
    msg.value = 0.24745874462560025;

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
    msg.setTimeStamp(0.9009996862521009);
    msg.setSource(53583U);
    msg.setSourceEntity(99U);
    msg.setDestination(42941U);
    msg.setDestinationEntity(186U);
    msg.value = 0.757821186667897;

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
    msg.setTimeStamp(0.06333599547994617);
    msg.setSource(32249U);
    msg.setSourceEntity(8U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(38U);
    msg.value = 0.5554410910851555;

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
    msg.setTimeStamp(0.44085902511667463);
    msg.setSource(51670U);
    msg.setSourceEntity(103U);
    msg.setDestination(31918U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6561599528005856;

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
    msg.setTimeStamp(0.2060609782199494);
    msg.setSource(48757U);
    msg.setSourceEntity(18U);
    msg.setDestination(31016U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9953722780903196;

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
    msg.setTimeStamp(0.44978280771981416);
    msg.setSource(23255U);
    msg.setSourceEntity(45U);
    msg.setDestination(63749U);
    msg.setDestinationEntity(20U);
    msg.value = 0.20246428022160434;

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
    msg.setTimeStamp(0.3072006234302306);
    msg.setSource(8007U);
    msg.setSourceEntity(15U);
    msg.setDestination(7076U);
    msg.setDestinationEntity(159U);
    msg.value = 0.6588014409645263;

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
    msg.setTimeStamp(0.8887480768185035);
    msg.setSource(7627U);
    msg.setSourceEntity(81U);
    msg.setDestination(33710U);
    msg.setDestinationEntity(63U);
    msg.value = 0.32563954336309;

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
    msg.setTimeStamp(0.718216150096399);
    msg.setSource(52829U);
    msg.setSourceEntity(250U);
    msg.setDestination(49832U);
    msg.setDestinationEntity(52U);
    msg.value = 0.39477249008345483;

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
    msg.setTimeStamp(0.7311225524315276);
    msg.setSource(44275U);
    msg.setSourceEntity(23U);
    msg.setDestination(18375U);
    msg.setDestinationEntity(68U);
    msg.value = 0.5145662855452878;

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
    msg.setTimeStamp(0.6635361168844841);
    msg.setSource(64052U);
    msg.setSourceEntity(35U);
    msg.setDestination(96U);
    msg.setDestinationEntity(82U);
    msg.value = 0.2231756467632645;

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
    msg.setTimeStamp(0.7460378704769728);
    msg.setSource(22353U);
    msg.setSourceEntity(107U);
    msg.setDestination(50756U);
    msg.setDestinationEntity(0U);
    msg.value = 0.40832607538198495;

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
    msg.setTimeStamp(0.09257991336430371);
    msg.setSource(16137U);
    msg.setSourceEntity(113U);
    msg.setDestination(18594U);
    msg.setDestinationEntity(43U);
    msg.value = 0.8796366793655523;

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
    msg.setTimeStamp(0.5147447218402509);
    msg.setSource(4559U);
    msg.setSourceEntity(154U);
    msg.setDestination(59734U);
    msg.setDestinationEntity(133U);
    msg.value = 0.9148999964665312;

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
    msg.setTimeStamp(0.5360217650344027);
    msg.setSource(63841U);
    msg.setSourceEntity(162U);
    msg.setDestination(8406U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6344862229766463;

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
    msg.setTimeStamp(0.2578120046391861);
    msg.setSource(17998U);
    msg.setSourceEntity(244U);
    msg.setDestination(54265U);
    msg.setDestinationEntity(24U);
    msg.direction = 0.383200374461378;
    msg.speed = 0.810109708746603;
    msg.turbulence = 0.5526386172951939;

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
    msg.setTimeStamp(0.2855354993581637);
    msg.setSource(21831U);
    msg.setSourceEntity(228U);
    msg.setDestination(61103U);
    msg.setDestinationEntity(171U);
    msg.direction = 0.6701292188765707;
    msg.speed = 0.0908039820245401;
    msg.turbulence = 0.4527465782123644;

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
    msg.setTimeStamp(0.21130629783960553);
    msg.setSource(29070U);
    msg.setSourceEntity(24U);
    msg.setDestination(13308U);
    msg.setDestinationEntity(184U);
    msg.direction = 0.31858288351381614;
    msg.speed = 0.48734867842267215;
    msg.turbulence = 0.40291019233882486;

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
    msg.setTimeStamp(0.23031540336582113);
    msg.setSource(28994U);
    msg.setSourceEntity(155U);
    msg.setDestination(12679U);
    msg.setDestinationEntity(205U);
    msg.value = 0.26374711142365626;

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
    msg.setTimeStamp(0.2451901309313297);
    msg.setSource(39589U);
    msg.setSourceEntity(118U);
    msg.setDestination(53588U);
    msg.setDestinationEntity(179U);
    msg.value = 0.6136672306672427;

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
    msg.setTimeStamp(0.3411563300140844);
    msg.setSource(28733U);
    msg.setSourceEntity(240U);
    msg.setDestination(33092U);
    msg.setDestinationEntity(166U);
    msg.value = 0.3616285111760127;

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
    msg.setTimeStamp(0.21219642833010488);
    msg.setSource(29251U);
    msg.setSourceEntity(192U);
    msg.setDestination(55310U);
    msg.setDestinationEntity(126U);
    msg.value.assign("HDJENQRBMYFWIYUOSRGRLZN");

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
    msg.setTimeStamp(0.8384535806650341);
    msg.setSource(46557U);
    msg.setSourceEntity(118U);
    msg.setDestination(6688U);
    msg.setDestinationEntity(30U);
    msg.value.assign("UTWYLPKIXKLBRDSKCMUJGUXYXVDNPGYUAQJLZBBNTXIDAZDEXUCNIGVVHWHGYSAGTBOKKEBPDWQMZFRKCFOTPEZOCAQOSJPTBQYEQSJRVUZORPYZOIQSIENIIJNCZENGFSW");

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
    msg.setTimeStamp(0.21266828051200048);
    msg.setSource(53148U);
    msg.setSourceEntity(118U);
    msg.setDestination(3822U);
    msg.setDestinationEntity(50U);
    msg.value.assign("PNZJJGAQCXQKFCLRXFDWTJIYQKOXKXIHNKTBZEXUXGEADAPDIKR");

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
    msg.setTimeStamp(0.06040544267006942);
    msg.setSource(60131U);
    msg.setSourceEntity(163U);
    msg.setDestination(16707U);
    msg.setDestinationEntity(56U);
    const signed char tmp_msg_0[] = {22, -74, 8, 114, 60, 113, 29, 75, -11, -73, -26, -95, 50, 94, -43, 24, 123, -97, -27, -92, 94, -29, -96, -119, -126, -55, 42, -33, 117, 3, 39, -120, 88, -107, 85, 1, 88, -65, 8, -75, -67, 27, 109, 42, 58, -25, -126, 51, -106, -94, 54, 59, -69, -68, -27, -119, -54, 112, -25, 36, -40, 73, -106, -38, 26, -117, -56, -82, -121, 69, -49, -88, 62, 124, -8, 42, 24, 29, -28, -87, -40, 78, -12, 57, -85, -38, -2, -124, -121, -48, 35, 20, 118, -101, 65, -115, 106, -3, -120, -6, 125, -27, 63, 67, 36, -41, -66, 96, 83, -35, 94, -42, -19, 14, 110, -82, -35, -117, -99, -96, 17, 125, -31, 27, -121, -102, -112, -104, 1, 22, 121, 79, 99, 38, -84, 71, -15, -13, 35, 26, 26, 69, 73, 108, -21, -86, 63, -23, -106, 66, 44, -57, -5, 19, -90, 18, 126, 27, 117, 31, -90, 115, -57, -81, 42, 29, 14, 50, -60, -45, -57, -122, -119, 108, 112, -61, 57, 85, 114, 76, 37, 10, 105, -105, -81, -8, 103, -59, 11, -38, 60, -122, -97, 81, 97, -24, -25, 120, -57, -98, 28, -109, -124, 6, 17, 11, -120, 23, -76, 8, 2, -122, 39, -6, 96, 25, -87, 10, 12};
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
    msg.setTimeStamp(0.7897778465222267);
    msg.setSource(12329U);
    msg.setSourceEntity(125U);
    msg.setDestination(6764U);
    msg.setDestinationEntity(27U);
    const signed char tmp_msg_0[] = {-69, -38, 90, 36, 34, -30, -10, 4, 89, 18, 54, 7, 40, 39, 91, -66, 41, 63, -93, -49, 98, 77, 94, -108, -33, -79, 90, 23, 97, 69, -126, -111, 17, -92, -60, -127, 1, -98, 13, 1, -25, 81, -71, 54, -70, -95, -54, 68, -125, -2, 78, -106, -47, 58, 81, 108, 43, 12, -124, 17, 80, -13, -119, 91, 78, -30, -40, 125, -115, -128, 83, 98, -84, 4, -7, -43, 66, 72, 54, -121, -90, 10, -50, 50, 114, -2, -55, -71, 97, -49, -33, -96, 30, 115, 12, 122, -25, -1, 57, 120, -120, -117, -117, 92, -35, 77, -26, -115, -42, -55, -43, 67, -37, 45, -105, 100, -6, -26, -63, -80, 8, 74, -70, -13, -54, 92, 101, 73, -46, 42, -14, -87, -56, -98, 40, 121, 104, -41, -2, -36, -9, -72, 68, 64, -121, -113, 112, 1, 58, 86, -103, 7, -70, 114, -18, -74, 112, -11, 109, 17, 98, 16, 92, -88, -110, 68, -50, 115, 52, 122, -100, 66, -111, 2, 64, -25, 18, 14, 1, 58, 108, -124, 82, -86, 2, -42, -30, -123, 39, -114, 8, 68, -38, 15, 124, -80, -38, -8, -1, 111, 119, 71, 102, -30, -128, -52, -26, 55, 36, 62, -96, 11, -14, 17, -34, -74, -22, 69, -101, -41};
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
    msg.setTimeStamp(0.6394182543827648);
    msg.setSource(42509U);
    msg.setSourceEntity(4U);
    msg.setDestination(44424U);
    msg.setDestinationEntity(248U);
    const signed char tmp_msg_0[] = {-120, -107, 32, 65, -77, 8, 116, 32, -118, 67, 72, 115, -117, 67, 41, -85, -44, -84, 9, -87, 89, -70, -31, -71, -125, 116, 50, 48, 11, 122, 32, -92, -103, -57, 96, -34, 65, 73, 28};
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
    msg.setTimeStamp(0.3498605832470615);
    msg.setSource(37539U);
    msg.setSourceEntity(166U);
    msg.setDestination(62261U);
    msg.setDestinationEntity(19U);
    msg.value = 0.40461176069499694;

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
    msg.setTimeStamp(0.26421063288293545);
    msg.setSource(28622U);
    msg.setSourceEntity(231U);
    msg.setDestination(9867U);
    msg.setDestinationEntity(245U);
    msg.value = 0.08462368200801718;

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
    msg.setTimeStamp(0.8148618680268148);
    msg.setSource(8882U);
    msg.setSourceEntity(23U);
    msg.setDestination(1578U);
    msg.setDestinationEntity(33U);
    msg.value = 0.4962018517849568;

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
    msg.setTimeStamp(0.410052139863715);
    msg.setSource(17441U);
    msg.setSourceEntity(91U);
    msg.setDestination(47661U);
    msg.setDestinationEntity(133U);
    msg.type = 30U;
    msg.frequency = 2488390361U;
    msg.min_range = 35330U;
    msg.max_range = 30980U;
    msg.bits_per_point = 176U;
    msg.scale_factor = 0.8590338316447356;
    const signed char tmp_msg_0[] = {-112, 110, -100, 125, 29, -50, -59, -123, 47, 4, -88, -36, -31, -99, 55, -7, 112, -24, 20, 64, -39, 82, 32, 89, -75, 73, -4, -124, 106, 37, 100, 78, 29, 72, -57, -15, -116, -31, -46, 27, 93, -55, -62, 57, 105, 48, -117, 98, -10, 2, 3, 93, 110, -28, -33, -31, -88, -117, -114, -98, -49, 126, 35, 101, 77, -81, -80, -45, -39, 35, 59, 114, 32, 54, -34, -107, -1, 28, -58, -101, -6, -111, 57, -87, -17, 12, -5, 8, 95, -28, 113, -86, 56, -70, -40, 91, -7, 64, -62, 121, -15, -79, -121, 6, 30, -111, -69, -52, 87, -33, 27, -101, 21, 55, -96, -50, -62, 29, 32, -104, 111, 86, 123, -126, -8, -66, 126, 39, 79, 64, 27};
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
    msg.setTimeStamp(0.7050315633464741);
    msg.setSource(18679U);
    msg.setSourceEntity(198U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(178U);
    msg.type = 107U;
    msg.frequency = 2782435527U;
    msg.min_range = 55654U;
    msg.max_range = 17393U;
    msg.bits_per_point = 174U;
    msg.scale_factor = 0.7631634678643481;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3422723897659138;
    tmp_msg_0.beam_height = 0.0400659852385733;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-72, 109, 59, -58, 100, -55, -7, -113, -86, -6, -74, 38, -27, 80, -109, 9, -120, 57, 1, 81, 110, 42, 1, -105, 112, -19, 53, 100, 52, -71, 11, -126, 22, 16, 45, 48, 19, 86, -60, 59, 109, -121, -40, 117, 1, -118, 38, -66, 101, -98, -5, 40, -3, -99, -51, 118, -43, 28, -51, -112, -91, -31, -70, -74, -43, 83, 55, -30, 41, -17, 15, 125, -84, 89, -8, -117, 1, -2, -95, 82, 67, 49, -28, -91, 91, -113, 52, 61, -2, -86, -18, 34, 18, 117, -82, -79, 119, 54, 49, 58, -125, -101, 45, 15, 62, -74, -29, 6, 67, 60, 124, 122, 21, -128, 102, 57, 0, 47, -116, -35, -30, -24, 116, -74, -52, 19, -99, -86, 110, 86, -52, -78, -117, -12, 38, 58, 37, 42, 86, 94, -128, 12, 94, 109, 112, 62, 10, 45, -27, 100, 111, -119, 2, 35, -42, -64, -49, 48, -22, -38, -85, -79, 40, -22, 13, -59, 38, -12, -116, -110, 31, -101, 115, -24, 108, -33, -7, -77, 91, -59, 45, 109, -116, 117, -81, 103, -115, 104, -13, 20, 26, 56, 56, -28, -52, 91, -128, -116, -42, -50, -70, 28, -55, -92, -79, -111, -29, -110, -34, -115, 16, -26, 32, 18, 26, 115, 95};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.6663434398024918);
    msg.setSource(474U);
    msg.setSourceEntity(25U);
    msg.setDestination(5715U);
    msg.setDestinationEntity(177U);
    msg.type = 43U;
    msg.frequency = 2085900184U;
    msg.min_range = 16775U;
    msg.max_range = 19374U;
    msg.bits_per_point = 7U;
    msg.scale_factor = 0.5175454731836165;
    const signed char tmp_msg_0[] = {84, 0, -101, -54, 116, 78, 85, 49, 59, 59, 63, 28, -78, -7, 85, -103, -111, -121, 37, -21, 71, -27, 123, -63, 96, -71, -63, -53, -121, -20, -114, -108, -17, -47, 49, -64, 61, -1, -97, 115, -50, 86, 114, 81, -88, -4, 38, -89, -101, -109, -106, -11, -19, 62, 19, 56};
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
    msg.setTimeStamp(0.34167288430018994);
    msg.setSource(31690U);
    msg.setSourceEntity(0U);
    msg.setDestination(45452U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.8121086538218516);
    msg.setSource(48650U);
    msg.setSourceEntity(249U);
    msg.setDestination(16902U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.31655765115266044);
    msg.setSource(36970U);
    msg.setSourceEntity(57U);
    msg.setDestination(42561U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.017106879400919706);
    msg.setSource(7268U);
    msg.setSourceEntity(234U);
    msg.setDestination(29850U);
    msg.setDestinationEntity(5U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.5686321517108914);
    msg.setSource(14354U);
    msg.setSourceEntity(234U);
    msg.setDestination(55706U);
    msg.setDestinationEntity(29U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.1755794449365108);
    msg.setSource(415U);
    msg.setSourceEntity(119U);
    msg.setDestination(14398U);
    msg.setDestinationEntity(165U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.3812089783128798);
    msg.setSource(46082U);
    msg.setSourceEntity(148U);
    msg.setDestination(55737U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5178141690668353;
    msg.confidence = 0.3272826787032872;
    msg.opmodes.assign("QXVAVJVEUMJJXVPOBKKMGBZJDSEIWHTFDLNFMTKDWVHNSRGVJQWMCABQRUNGIPQJSKULIYPVCNXURWJLBIOZPMMUTKZXUTYHHBAHWXHHRVZZICGOCMXQZXFZWBQSQDOLILPNOG");

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
    msg.setTimeStamp(0.04120863647451334);
    msg.setSource(48091U);
    msg.setSourceEntity(95U);
    msg.setDestination(11737U);
    msg.setDestinationEntity(113U);
    msg.value = 0.627261323072185;
    msg.confidence = 0.9952617500842433;
    msg.opmodes.assign("RCMRJJFZAPIUZEPASIHSALDGLWUUZQDL");

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
    msg.setTimeStamp(0.05704378470063065);
    msg.setSource(26452U);
    msg.setSourceEntity(218U);
    msg.setDestination(23518U);
    msg.setDestinationEntity(159U);
    msg.value = 0.30263434770912045;
    msg.confidence = 0.9368138212667669;
    msg.opmodes.assign("ZEOUVMSTCCBQJXQJFKCCTAJGCLSCGSXIBPYXZSRPCVCPHGLZMQDGABGIHGJVSEPMLILRBWGNRHFZRNPNEJWLZFQQSOYUVEJBQEWGEFYUCJUYVDATAKWWBPYCUTMKIMKBOPIRHAUVTNRYPARXQVRSDQXADNOBKBULNMQFNNOOTSKJAZOKTHGXNWDETQVYDFEMZJFYWHTWAHFUIMZLXGMWARSOYOIPWXHDL");

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
    msg.setTimeStamp(0.7604355850892196);
    msg.setSource(61232U);
    msg.setSourceEntity(130U);
    msg.setDestination(58284U);
    msg.setDestinationEntity(215U);
    msg.itow = 741216200U;
    msg.lat = 0.33362684016034505;
    msg.lon = 0.3032511796633578;
    msg.height_ell = 0.7067721145965308;
    msg.height_sea = 0.06068468781684344;
    msg.hacc = 0.49555939000388227;
    msg.vacc = 0.7475159741414267;
    msg.vel_n = 0.6063311113804635;
    msg.vel_e = 0.6333857096973501;
    msg.vel_d = 0.18540280888061855;
    msg.speed = 0.1819452846478009;
    msg.gspeed = 0.5397305988741449;
    msg.heading = 0.47609202073691015;
    msg.sacc = 0.06089543360840255;
    msg.cacc = 0.09645516919293362;

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
    msg.setTimeStamp(0.8618840211602375);
    msg.setSource(55414U);
    msg.setSourceEntity(88U);
    msg.setDestination(59039U);
    msg.setDestinationEntity(165U);
    msg.itow = 2763525338U;
    msg.lat = 0.1769879347107699;
    msg.lon = 0.2862252315200873;
    msg.height_ell = 0.20846968170685032;
    msg.height_sea = 0.37360837736494135;
    msg.hacc = 0.8014706633587727;
    msg.vacc = 0.34512377106086745;
    msg.vel_n = 0.4853033184228255;
    msg.vel_e = 0.1958559995867799;
    msg.vel_d = 0.03361369712963047;
    msg.speed = 0.8002243843638207;
    msg.gspeed = 0.08511929138969865;
    msg.heading = 0.6819812313315998;
    msg.sacc = 0.7331912593908787;
    msg.cacc = 0.44500753407616567;

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
    msg.setTimeStamp(0.776469101117556);
    msg.setSource(9489U);
    msg.setSourceEntity(141U);
    msg.setDestination(61079U);
    msg.setDestinationEntity(46U);
    msg.itow = 3807171272U;
    msg.lat = 0.32442152451600015;
    msg.lon = 0.8199302948967482;
    msg.height_ell = 0.9954988968039163;
    msg.height_sea = 0.1081785957240119;
    msg.hacc = 0.030292567397211534;
    msg.vacc = 0.3831029261692993;
    msg.vel_n = 0.7597372667938708;
    msg.vel_e = 0.3026749868197455;
    msg.vel_d = 0.021257769270321414;
    msg.speed = 0.3979913674362948;
    msg.gspeed = 0.8123144373118305;
    msg.heading = 0.13282451101620385;
    msg.sacc = 0.059288088926298554;
    msg.cacc = 0.9917981841783862;

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
    msg.setTimeStamp(0.1550787899048106);
    msg.setSource(41340U);
    msg.setSourceEntity(192U);
    msg.setDestination(61446U);
    msg.setDestinationEntity(181U);
    msg.id = 202U;
    msg.value = 0.42930548873066077;

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
    msg.setTimeStamp(0.2509608884178769);
    msg.setSource(50374U);
    msg.setSourceEntity(61U);
    msg.setDestination(11589U);
    msg.setDestinationEntity(42U);
    msg.id = 221U;
    msg.value = 0.558388884618218;

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
    msg.setTimeStamp(0.5605662305868825);
    msg.setSource(62225U);
    msg.setSourceEntity(134U);
    msg.setDestination(38174U);
    msg.setDestinationEntity(243U);
    msg.id = 21U;
    msg.value = 0.14082304007002788;

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
    msg.setTimeStamp(0.14466752164890062);
    msg.setSource(2465U);
    msg.setSourceEntity(208U);
    msg.setDestination(63055U);
    msg.setDestinationEntity(104U);
    msg.x = 0.5057343875091083;
    msg.y = 0.3398635178363153;
    msg.z = 0.13217461390682506;
    msg.phi = 0.21376198377966438;
    msg.theta = 0.7527018292959382;
    msg.psi = 0.8821285302890901;

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
    msg.setTimeStamp(0.571010238584699);
    msg.setSource(7706U);
    msg.setSourceEntity(225U);
    msg.setDestination(30642U);
    msg.setDestinationEntity(151U);
    msg.x = 0.17714025590582072;
    msg.y = 0.6846536480772737;
    msg.z = 0.14215236721103752;
    msg.phi = 0.8452982861252574;
    msg.theta = 0.6739623203259555;
    msg.psi = 0.6049097892158132;

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
    msg.setTimeStamp(0.38840025494535824);
    msg.setSource(2029U);
    msg.setSourceEntity(117U);
    msg.setDestination(51656U);
    msg.setDestinationEntity(219U);
    msg.x = 0.7776019595979997;
    msg.y = 0.9898044218803531;
    msg.z = 0.8625389171652347;
    msg.phi = 0.6266995427627161;
    msg.theta = 0.6482109423517517;
    msg.psi = 0.25619168677354676;

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
    msg.setTimeStamp(0.24023280728502383);
    msg.setSource(8119U);
    msg.setSourceEntity(215U);
    msg.setDestination(39461U);
    msg.setDestinationEntity(129U);
    msg.beam_width = 0.5150569057985167;
    msg.beam_height = 0.40357454149709904;

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
    msg.setTimeStamp(0.19251950763070946);
    msg.setSource(5530U);
    msg.setSourceEntity(211U);
    msg.setDestination(21275U);
    msg.setDestinationEntity(77U);
    msg.beam_width = 0.7244711017585419;
    msg.beam_height = 0.6987175012500028;

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
    msg.setTimeStamp(0.12258805519984606);
    msg.setSource(28397U);
    msg.setSourceEntity(172U);
    msg.setDestination(63032U);
    msg.setDestinationEntity(144U);
    msg.beam_width = 0.2997126250878098;
    msg.beam_height = 0.6211056645456975;

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
    msg.setTimeStamp(0.963615717826667);
    msg.setSource(55411U);
    msg.setSourceEntity(217U);
    msg.setDestination(52514U);
    msg.setDestinationEntity(161U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.2001683725383604);
    msg.setSource(65493U);
    msg.setSourceEntity(26U);
    msg.setDestination(46080U);
    msg.setDestinationEntity(58U);
    msg.sane = 116U;

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
    msg.setTimeStamp(0.6248739965387087);
    msg.setSource(58122U);
    msg.setSourceEntity(67U);
    msg.setDestination(10590U);
    msg.setDestinationEntity(68U);
    msg.sane = 18U;

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
    msg.setTimeStamp(0.012995494794437734);
    msg.setSource(173U);
    msg.setSourceEntity(71U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7463856313829678;

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
    msg.setTimeStamp(0.4548252381400193);
    msg.setSource(21779U);
    msg.setSourceEntity(70U);
    msg.setDestination(43205U);
    msg.setDestinationEntity(1U);
    msg.value = 0.9374056541010172;

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
    msg.setTimeStamp(0.6426053143939581);
    msg.setSource(13632U);
    msg.setSourceEntity(25U);
    msg.setDestination(16164U);
    msg.setDestinationEntity(198U);
    msg.value = 0.9476216250320973;

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
    msg.setTimeStamp(0.7937245736472667);
    msg.setSource(22542U);
    msg.setSourceEntity(61U);
    msg.setDestination(23189U);
    msg.setDestinationEntity(216U);
    msg.value = 0.8422501196759338;

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
    msg.setTimeStamp(0.807393460904348);
    msg.setSource(13340U);
    msg.setSourceEntity(89U);
    msg.setDestination(19850U);
    msg.setDestinationEntity(39U);
    msg.value = 0.7744310060947;

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
    msg.setTimeStamp(0.3811237061022019);
    msg.setSource(54455U);
    msg.setSourceEntity(127U);
    msg.setDestination(62089U);
    msg.setDestinationEntity(100U);
    msg.value = 0.40163264575748914;

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
    msg.setTimeStamp(0.7417892210999804);
    msg.setSource(17281U);
    msg.setSourceEntity(8U);
    msg.setDestination(21035U);
    msg.setDestinationEntity(109U);
    msg.value = 0.4074204663804105;

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
    msg.setTimeStamp(0.6993336692349028);
    msg.setSource(7925U);
    msg.setSourceEntity(229U);
    msg.setDestination(12699U);
    msg.setDestinationEntity(40U);
    msg.value = 0.9162838134005179;

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
    msg.setTimeStamp(0.15219912470436625);
    msg.setSource(43097U);
    msg.setSourceEntity(189U);
    msg.setDestination(20029U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6354822173711739;

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
    msg.setTimeStamp(0.3054647737164602);
    msg.setSource(53408U);
    msg.setSourceEntity(185U);
    msg.setDestination(20752U);
    msg.setDestinationEntity(199U);
    msg.value = 0.02583756941093185;

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
    msg.setTimeStamp(0.915937019409021);
    msg.setSource(32378U);
    msg.setSourceEntity(185U);
    msg.setDestination(40157U);
    msg.setDestinationEntity(12U);
    msg.value = 0.5226747568251653;

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
    msg.setTimeStamp(0.5284002056080406);
    msg.setSource(40022U);
    msg.setSourceEntity(82U);
    msg.setDestination(17857U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0804728221963179;

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
    msg.setTimeStamp(0.9365850314908697);
    msg.setSource(51284U);
    msg.setSourceEntity(227U);
    msg.setDestination(24231U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9013971659161215;

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
    msg.setTimeStamp(0.15786698199729576);
    msg.setSource(5616U);
    msg.setSourceEntity(158U);
    msg.setDestination(19708U);
    msg.setDestinationEntity(65U);
    msg.value = 0.6279444986003829;

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
    msg.setTimeStamp(0.9610132586617192);
    msg.setSource(57259U);
    msg.setSourceEntity(34U);
    msg.setDestination(38860U);
    msg.setDestinationEntity(235U);
    msg.value = 0.4383030171175678;

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
    msg.setTimeStamp(0.07609170866830572);
    msg.setSource(52312U);
    msg.setSourceEntity(23U);
    msg.setDestination(29297U);
    msg.setDestinationEntity(66U);
    msg.value = 0.5046099872179713;

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
    msg.setTimeStamp(0.7633468689922195);
    msg.setSource(49358U);
    msg.setSourceEntity(103U);
    msg.setDestination(322U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8824887755167813;

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
    msg.setTimeStamp(0.23186089439521806);
    msg.setSource(47327U);
    msg.setSourceEntity(33U);
    msg.setDestination(8701U);
    msg.setDestinationEntity(42U);
    msg.value = 0.03996703535028856;

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
    msg.setTimeStamp(0.5487309768648562);
    msg.setSource(24876U);
    msg.setSourceEntity(13U);
    msg.setDestination(26947U);
    msg.setDestinationEntity(198U);
    msg.value = 0.12784965986240115;

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
    msg.setTimeStamp(0.8265788141474703);
    msg.setSource(25377U);
    msg.setSourceEntity(112U);
    msg.setDestination(55402U);
    msg.setDestinationEntity(35U);
    msg.value = 0.977648828514851;

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
    msg.setTimeStamp(0.10848347771624511);
    msg.setSource(57192U);
    msg.setSourceEntity(196U);
    msg.setDestination(1447U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5933592002483971;

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
    msg.setTimeStamp(0.8905387181268972);
    msg.setSource(13475U);
    msg.setSourceEntity(8U);
    msg.setDestination(37275U);
    msg.setDestinationEntity(146U);
    msg.value = 0.8650800266425527;

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
    msg.setTimeStamp(0.7706787364992379);
    msg.setSource(5488U);
    msg.setSourceEntity(53U);
    msg.setDestination(24187U);
    msg.setDestinationEntity(215U);
    msg.value = 0.9382542762844421;

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
    msg.setTimeStamp(0.9446821104199881);
    msg.setSource(2666U);
    msg.setSourceEntity(99U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(226U);
    msg.value = 0.23440093619253233;

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
    msg.setTimeStamp(0.3117787697348645);
    msg.setSource(25844U);
    msg.setSourceEntity(200U);
    msg.setDestination(61180U);
    msg.setDestinationEntity(72U);
    msg.validity = 32793U;
    msg.type = 194U;
    msg.tow = 851272052U;
    msg.base_lat = 0.44863946253210474;
    msg.base_lon = 0.7505487816891879;
    msg.base_height = 0.8532045796896004;
    msg.n = 0.19285770693639404;
    msg.e = 0.4458292312276251;
    msg.d = 0.05878510346059029;
    msg.v_n = 0.9095337690866657;
    msg.v_e = 0.7152541132246739;
    msg.v_d = 0.5351357607729733;
    msg.satellites = 143U;
    msg.iar_hyp = 49488U;
    msg.iar_ratio = 0.00815295777392977;

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
    msg.setTimeStamp(0.44331695503435187);
    msg.setSource(35841U);
    msg.setSourceEntity(198U);
    msg.setDestination(38766U);
    msg.setDestinationEntity(194U);
    msg.validity = 57379U;
    msg.type = 148U;
    msg.tow = 2624201776U;
    msg.base_lat = 0.6706814791385038;
    msg.base_lon = 0.4773825267804094;
    msg.base_height = 0.3411050030381567;
    msg.n = 0.922366684773519;
    msg.e = 0.8016928793570396;
    msg.d = 0.6504692820341283;
    msg.v_n = 0.23127986468796624;
    msg.v_e = 0.1561508305358984;
    msg.v_d = 0.6540133997334907;
    msg.satellites = 154U;
    msg.iar_hyp = 12375U;
    msg.iar_ratio = 0.49704188923132864;

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
    msg.setTimeStamp(0.2565130266297406);
    msg.setSource(50205U);
    msg.setSourceEntity(32U);
    msg.setDestination(58712U);
    msg.setDestinationEntity(13U);
    msg.validity = 25616U;
    msg.type = 43U;
    msg.tow = 3458733591U;
    msg.base_lat = 0.7550968979914688;
    msg.base_lon = 0.1697562771628639;
    msg.base_height = 0.851141026420547;
    msg.n = 0.28278097659180135;
    msg.e = 0.7279180567892227;
    msg.d = 0.5567354166285202;
    msg.v_n = 0.9390244541206234;
    msg.v_e = 0.9775638818519703;
    msg.v_d = 0.9777203765721902;
    msg.satellites = 246U;
    msg.iar_hyp = 41499U;
    msg.iar_ratio = 0.8908952539226086;

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
    msg.setTimeStamp(0.7416798521064756);
    msg.setSource(65466U);
    msg.setSourceEntity(177U);
    msg.setDestination(17866U);
    msg.setDestinationEntity(67U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.019696110614743412;
    tmp_msg_0.lon = 0.7788723272131826;
    tmp_msg_0.height = 0.14179257561891467;
    tmp_msg_0.x = 0.20324266504236543;
    tmp_msg_0.y = 0.5213066096970956;
    tmp_msg_0.z = 0.5323923993131373;
    tmp_msg_0.phi = 0.5029657660378399;
    tmp_msg_0.theta = 0.982258841232486;
    tmp_msg_0.psi = 0.08488449453498581;
    tmp_msg_0.u = 0.803468474487833;
    tmp_msg_0.v = 0.2892185226190609;
    tmp_msg_0.w = 0.6769974444619401;
    tmp_msg_0.vx = 0.47584220224051377;
    tmp_msg_0.vy = 0.9853163865846182;
    tmp_msg_0.vz = 0.2691868946369165;
    tmp_msg_0.p = 0.5978482732225956;
    tmp_msg_0.q = 0.2451497853548913;
    tmp_msg_0.r = 0.2600986207966206;
    tmp_msg_0.depth = 0.020100227678761518;
    tmp_msg_0.alt = 0.9642961114859393;
    msg.state.set(tmp_msg_0);
    msg.type = 221U;

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
    msg.setTimeStamp(0.524590191837511);
    msg.setSource(23336U);
    msg.setSourceEntity(210U);
    msg.setDestination(30632U);
    msg.setDestinationEntity(184U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6055416466067762;
    tmp_msg_0.lon = 0.8789988099728308;
    tmp_msg_0.height = 0.3891151716425595;
    tmp_msg_0.x = 0.530381250028114;
    tmp_msg_0.y = 0.9210227060553264;
    tmp_msg_0.z = 0.8114701651232323;
    tmp_msg_0.phi = 0.8244297836203452;
    tmp_msg_0.theta = 0.8623179638102692;
    tmp_msg_0.psi = 0.10129323320756656;
    tmp_msg_0.u = 0.8405098854341166;
    tmp_msg_0.v = 0.9209826580583126;
    tmp_msg_0.w = 0.9260097605052415;
    tmp_msg_0.vx = 0.33878210753310145;
    tmp_msg_0.vy = 0.610841286245628;
    tmp_msg_0.vz = 0.7325526157617084;
    tmp_msg_0.p = 0.33183162752612916;
    tmp_msg_0.q = 0.49472476728029324;
    tmp_msg_0.r = 0.7949457749515342;
    tmp_msg_0.depth = 0.1399223468402202;
    tmp_msg_0.alt = 0.9520886560005569;
    msg.state.set(tmp_msg_0);
    msg.type = 203U;

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
    msg.setTimeStamp(0.694159840987347);
    msg.setSource(20889U);
    msg.setSourceEntity(99U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(187U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9464574742697888;
    tmp_msg_0.lon = 0.08950873288423666;
    tmp_msg_0.height = 0.36082863228436757;
    tmp_msg_0.x = 0.09252442909871983;
    tmp_msg_0.y = 0.4764437769103753;
    tmp_msg_0.z = 0.4215675351831063;
    tmp_msg_0.phi = 0.5494500828380771;
    tmp_msg_0.theta = 0.9603485606105698;
    tmp_msg_0.psi = 0.6795903758666411;
    tmp_msg_0.u = 0.12047785502780006;
    tmp_msg_0.v = 0.37634031008655;
    tmp_msg_0.w = 0.19465817082623915;
    tmp_msg_0.vx = 0.4315760575110914;
    tmp_msg_0.vy = 0.7822976951394055;
    tmp_msg_0.vz = 0.9477841170527048;
    tmp_msg_0.p = 0.3175308619494891;
    tmp_msg_0.q = 0.5924368440463506;
    tmp_msg_0.r = 0.6729123888394594;
    tmp_msg_0.depth = 0.9193566633889569;
    tmp_msg_0.alt = 0.6092870939890933;
    msg.state.set(tmp_msg_0);
    msg.type = 232U;

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
    msg.setTimeStamp(0.016676807104616165);
    msg.setSource(12964U);
    msg.setSourceEntity(101U);
    msg.setDestination(12711U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9601320640949593;

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
    msg.setTimeStamp(0.2100534910801528);
    msg.setSource(41622U);
    msg.setSourceEntity(44U);
    msg.setDestination(31948U);
    msg.setDestinationEntity(123U);
    msg.value = 0.7347130218411873;

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
    msg.setTimeStamp(0.4731220418514436);
    msg.setSource(8419U);
    msg.setSourceEntity(68U);
    msg.setDestination(442U);
    msg.setDestinationEntity(165U);
    msg.value = 0.37946351252788646;

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
    msg.setTimeStamp(0.18207764479131483);
    msg.setSource(2665U);
    msg.setSourceEntity(232U);
    msg.setDestination(11302U);
    msg.setDestinationEntity(141U);
    msg.value = 0.3366905114123757;

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
    msg.setTimeStamp(0.37573005547116123);
    msg.setSource(65525U);
    msg.setSourceEntity(188U);
    msg.setDestination(31112U);
    msg.setDestinationEntity(92U);
    msg.value = 0.4875903458949933;

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
    msg.setTimeStamp(0.12460751823183058);
    msg.setSource(37080U);
    msg.setSourceEntity(48U);
    msg.setDestination(23226U);
    msg.setDestinationEntity(178U);
    msg.value = 0.8194758390944084;

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
    msg.setTimeStamp(0.4360564832393976);
    msg.setSource(38017U);
    msg.setSourceEntity(61U);
    msg.setDestination(49310U);
    msg.setDestinationEntity(248U);
    msg.value = 0.48856795715455437;

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
    msg.setTimeStamp(0.01807181932266244);
    msg.setSource(62728U);
    msg.setSourceEntity(75U);
    msg.setDestination(31268U);
    msg.setDestinationEntity(57U);
    msg.value = 0.15324064003304505;

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
    msg.setTimeStamp(0.5418563369909598);
    msg.setSource(61116U);
    msg.setSourceEntity(73U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(19U);
    msg.value = 0.3446126026949833;

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
    msg.setTimeStamp(0.7119460750709661);
    msg.setSource(29826U);
    msg.setSourceEntity(174U);
    msg.setDestination(64057U);
    msg.setDestinationEntity(171U);
    msg.value = 0.08310962578122905;

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
    msg.setTimeStamp(0.7697454661120905);
    msg.setSource(598U);
    msg.setSourceEntity(106U);
    msg.setDestination(58809U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8932697738412209;

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
    msg.setTimeStamp(0.09628754890670643);
    msg.setSource(25196U);
    msg.setSourceEntity(66U);
    msg.setDestination(5006U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9429704188142625;

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
    msg.setTimeStamp(0.29942734590950226);
    msg.setSource(47504U);
    msg.setSourceEntity(65U);
    msg.setDestination(13210U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6005756752932627;

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
    msg.setTimeStamp(0.9079532731957918);
    msg.setSource(47470U);
    msg.setSourceEntity(161U);
    msg.setDestination(37731U);
    msg.setDestinationEntity(85U);
    msg.value = 0.014013814460465568;

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
    msg.setTimeStamp(0.7650692484777633);
    msg.setSource(10338U);
    msg.setSourceEntity(192U);
    msg.setDestination(18329U);
    msg.setDestinationEntity(72U);
    msg.value = 0.04525808863916658;

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
    msg.setTimeStamp(0.6737202628710109);
    msg.setSource(52677U);
    msg.setSourceEntity(70U);
    msg.setDestination(62198U);
    msg.setDestinationEntity(205U);
    msg.id = 253U;
    msg.zoom = 95U;
    msg.action = 108U;

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
    msg.setTimeStamp(0.6941516407073538);
    msg.setSource(32760U);
    msg.setSourceEntity(142U);
    msg.setDestination(45239U);
    msg.setDestinationEntity(118U);
    msg.id = 169U;
    msg.zoom = 117U;
    msg.action = 133U;

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
    msg.setTimeStamp(0.16460890096892677);
    msg.setSource(23512U);
    msg.setSourceEntity(37U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(202U);
    msg.id = 101U;
    msg.zoom = 234U;
    msg.action = 200U;

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
    msg.setTimeStamp(0.2497308655750623);
    msg.setSource(54033U);
    msg.setSourceEntity(63U);
    msg.setDestination(55806U);
    msg.setDestinationEntity(111U);
    msg.id = 9U;
    msg.value = 0.982912772305455;

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
    msg.setTimeStamp(0.9961557931429182);
    msg.setSource(6368U);
    msg.setSourceEntity(218U);
    msg.setDestination(8988U);
    msg.setDestinationEntity(229U);
    msg.id = 109U;
    msg.value = 0.6631034895810239;

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
    msg.setTimeStamp(0.12185584377646441);
    msg.setSource(18165U);
    msg.setSourceEntity(155U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(202U);
    msg.id = 141U;
    msg.value = 0.19466557938748674;

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
    msg.setTimeStamp(0.3625350609340785);
    msg.setSource(11187U);
    msg.setSourceEntity(5U);
    msg.setDestination(59278U);
    msg.setDestinationEntity(34U);
    msg.id = 106U;
    msg.value = 0.3768812668413629;

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
    msg.setTimeStamp(0.6410661288279258);
    msg.setSource(2619U);
    msg.setSourceEntity(54U);
    msg.setDestination(55611U);
    msg.setDestinationEntity(183U);
    msg.id = 119U;
    msg.value = 0.6541302872968386;

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
    msg.setTimeStamp(0.1510682052208725);
    msg.setSource(32741U);
    msg.setSourceEntity(121U);
    msg.setDestination(34593U);
    msg.setDestinationEntity(181U);
    msg.id = 85U;
    msg.value = 0.15463031788809511;

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
    msg.setTimeStamp(0.1434150084858795);
    msg.setSource(29139U);
    msg.setSourceEntity(213U);
    msg.setDestination(52982U);
    msg.setDestinationEntity(6U);
    msg.id = 152U;
    msg.angle = 0.7763804831456208;

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
    msg.setTimeStamp(0.22258061994916445);
    msg.setSource(7820U);
    msg.setSourceEntity(95U);
    msg.setDestination(22963U);
    msg.setDestinationEntity(2U);
    msg.id = 3U;
    msg.angle = 0.4629891840366398;

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
    msg.setTimeStamp(0.13592876514203733);
    msg.setSource(55782U);
    msg.setSourceEntity(32U);
    msg.setDestination(20675U);
    msg.setDestinationEntity(42U);
    msg.id = 112U;
    msg.angle = 0.9873335328065811;

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
    msg.setTimeStamp(0.9591290653579386);
    msg.setSource(32554U);
    msg.setSourceEntity(151U);
    msg.setDestination(45559U);
    msg.setDestinationEntity(183U);
    msg.op = 48U;
    msg.actions.assign("TAEUDZROPNCTQEQLPKJLEDBSKLROTASMFYNYDXNAOXWGKRQTPLWQNGGDOXZPUFLPEAYSSGTPYIFZXMYPBCFPYFQIDCAXAQSJMNMBUVCZYVYWJVGIJVIBWEJKBUHOJSHWMHRHVVRXHCUXHTBTZZSZFYEPILTMMWQAFRGEUJFKEVCCHSNNVAHFWURIEIMLOTRNZELJQDDUXLICKWSBLHJAZKKA");

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
    msg.setTimeStamp(0.7454781157870728);
    msg.setSource(30738U);
    msg.setSourceEntity(67U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(68U);
    msg.op = 237U;
    msg.actions.assign("SHVQRUNHLVJQOKCRYDBGFGNZYCPXSUXIQKUHISXMSEUAWXZXHZFRCSOZJUNHNWABWLKWAMCZWYPDQBOYBKPTDOQCGEAFEKOMFABZPGLPPMJMJOKMJITKCSFU");

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
    msg.setTimeStamp(0.27795119630317033);
    msg.setSource(2795U);
    msg.setSourceEntity(69U);
    msg.setDestination(12920U);
    msg.setDestinationEntity(132U);
    msg.op = 68U;
    msg.actions.assign("RECZLIXOHUOAVBJLZFH");

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
    msg.setTimeStamp(0.09061512031113472);
    msg.setSource(11602U);
    msg.setSourceEntity(107U);
    msg.setDestination(10871U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("AICXRPNYRYDBNZGBVBZEKMUPTGAKGRMHSHYBOLRANQGSAQMDPPQJUFIWCLKWSVBWACLTJZIVKKLIZXEBTIMERGAPOHTCPYZJCPAKGFEERSCCJLCEDUJUTFDWSITUICFHUMPNVFNJVWSDYRVVXZTJQZWOULQHNYHEKKMRSMPDOZFDSHONXIASGJBMERFBVWZYHKXO");

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
    msg.setTimeStamp(0.06297059899334945);
    msg.setSource(21617U);
    msg.setSourceEntity(3U);
    msg.setDestination(42747U);
    msg.setDestinationEntity(13U);
    msg.actions.assign("OHFWMDBDHCLBKWFPNJGYNHWNSQOZNJOZIHPMKQVTMCSQLWXMXFRKVKIVYHVYGALLXZNNGTFUBLLFPUWRHMSKJXAXDWHPXPEVATDLVVUSWDWUEEYREKGUCSIRROIKAURBQXQNFYGZAVAGJZWSNLSURDBMRXIXCCDASGKDIOCQEJMHQCCYHZAZQTUVJRCANPODWNUPTFISOPOEOGJPYMEF");

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
    msg.setTimeStamp(0.39130071202626315);
    msg.setSource(1780U);
    msg.setSourceEntity(54U);
    msg.setDestination(11282U);
    msg.setDestinationEntity(76U);
    msg.actions.assign("JQRQOPSABUEGTWBECELQOUAAZUHWRHBBYGQDVIFPKRJNGUMVFPXOYRUAATIATLXMCWWIGQDOQRDQSVQRMTTJPWFHXCBYNCUJFXGNNGNNHMYLPVKAK");

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
    msg.setTimeStamp(0.23887406397831878);
    msg.setSource(1874U);
    msg.setSourceEntity(193U);
    msg.setDestination(23341U);
    msg.setDestinationEntity(112U);
    msg.button = 200U;
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
    msg.setTimeStamp(0.3836923179206059);
    msg.setSource(10091U);
    msg.setSourceEntity(72U);
    msg.setDestination(40124U);
    msg.setDestinationEntity(33U);
    msg.button = 190U;
    msg.value = 162U;

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
    msg.setTimeStamp(0.8815283503197753);
    msg.setSource(28979U);
    msg.setSourceEntity(100U);
    msg.setDestination(39380U);
    msg.setDestinationEntity(144U);
    msg.button = 61U;
    msg.value = 41U;

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
    msg.setTimeStamp(0.04179050504323356);
    msg.setSource(46724U);
    msg.setSourceEntity(221U);
    msg.setDestination(40563U);
    msg.setDestinationEntity(27U);
    msg.op = 245U;
    msg.text.assign("ZUULBOYKYDULLJSRUNGYDVWPDAEEMJHUIQKCKWAYTFQDOAYVGEWWGHYOACBVXNNBHJDGGVPAYRYPHMPKBIQHPFTFXSDVSTVIFCCLHRLTLTRNRZOPKHCGLKQ");

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
    msg.setTimeStamp(0.4975876807572821);
    msg.setSource(7339U);
    msg.setSourceEntity(64U);
    msg.setDestination(17450U);
    msg.setDestinationEntity(50U);
    msg.op = 92U;
    msg.text.assign("ZOVYANGEPLGQZQGVDDSUXROPUYJPTNUNIBNUHGWHXNLCLCLTVTUXGVHIQRCVBPPMXONQDQAPOTOSTWEOHXPRMBXOSCFKAFDEZQSFD");

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
    msg.setTimeStamp(0.24818782628599834);
    msg.setSource(51422U);
    msg.setSourceEntity(92U);
    msg.setDestination(54404U);
    msg.setDestinationEntity(31U);
    msg.op = 207U;
    msg.text.assign("RIMGLVPQYJPIDDGWJSXARZHMGTUOKRSYGXVRCWTTNEOZKUFWCVRQIVBTOKVQWHCKPZUYYBLSABMJPOKTEXWKZGXSYFIPCZWPRPMFSLAQPEWJFHTNFQQRCOXJXVBUMCSIMKUHSO");

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
    msg.setTimeStamp(0.9805157416435341);
    msg.setSource(14211U);
    msg.setSourceEntity(150U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(67U);
    msg.op = 105U;
    msg.time_remain = 0.5210806531925875;
    msg.sched_time = 0.2222858734222125;

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
    msg.setTimeStamp(0.3010726287613662);
    msg.setSource(49043U);
    msg.setSourceEntity(219U);
    msg.setDestination(24218U);
    msg.setDestinationEntity(165U);
    msg.op = 226U;
    msg.time_remain = 0.607839625200727;
    msg.sched_time = 0.40195780091754996;

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
    msg.setTimeStamp(0.9248303734565722);
    msg.setSource(15105U);
    msg.setSourceEntity(188U);
    msg.setDestination(12499U);
    msg.setDestinationEntity(68U);
    msg.op = 192U;
    msg.time_remain = 0.746301217579645;
    msg.sched_time = 0.6153390359775138;

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
    msg.setTimeStamp(0.13691212492021987);
    msg.setSource(36963U);
    msg.setSourceEntity(143U);
    msg.setDestination(44277U);
    msg.setDestinationEntity(80U);
    msg.name.assign("PSBPTRCHFMRIOBFUAZUNHFVVOCVIEBRILZSRGAUAKTJAZIAWCCNBEZBJGQXLTOXTRDUNGZEDNOWTMSC");
    msg.op = 105U;
    msg.sched_time = 0.7108505532940871;

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
    msg.setTimeStamp(0.4620215008181404);
    msg.setSource(21943U);
    msg.setSourceEntity(204U);
    msg.setDestination(44128U);
    msg.setDestinationEntity(125U);
    msg.name.assign("PCXRJBOTSEQDURFVDQNSTGQJPCCXLVAJAIKJVIHBEPEEDOHSLKPUBGHGTIXYHBQPQSWTULBILDVRRBYLCGWARYOMFXWVUKXMDADCXLVGYPYHGKJQGJTOOQRNFSILWPNWMNPZNJFZLXJKAORPAZSUYTTHGMWFTVDZOIVEBMSBUBRWAIORKGFMQEFJQLCSTEAHEYWTJMCEDGVLNIY");
    msg.op = 134U;
    msg.sched_time = 0.8574724268357304;

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
    msg.setTimeStamp(0.10538826891385344);
    msg.setSource(23343U);
    msg.setSourceEntity(249U);
    msg.setDestination(39452U);
    msg.setDestinationEntity(20U);
    msg.name.assign("CFHAEDQIXADUMEPIKWTHXOLPZCTZPJNUIVVRQFEFKSRYYMXSCIKZJVWCTSRRGNGIXDHKGVAIZACLFYWOJWJUMOARNUYZSNTKTMQZYGNHXVRUQPQJHJHJGPVBBKYNOQWXKYHTMLGOFWJGAZLIOBNEZSHEMGXANTXOQBYBSZCJLWVECTGANLFXQLCWSFOEKPUCMFHSUVFYPMKRUTERSPDNAZYDBRUQXUMHDDCBGVQIILABDVJD");
    msg.op = 87U;
    msg.sched_time = 0.6446088072367062;

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
    msg.setTimeStamp(0.2683382145029196);
    msg.setSource(47112U);
    msg.setSourceEntity(106U);
    msg.setDestination(25480U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.997121766957855);
    msg.setSource(22169U);
    msg.setSourceEntity(30U);
    msg.setDestination(49710U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.3635517969232589);
    msg.setSource(12800U);
    msg.setSourceEntity(208U);
    msg.setDestination(55559U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.026237932983034562);
    msg.setSource(56367U);
    msg.setSourceEntity(197U);
    msg.setDestination(49412U);
    msg.setDestinationEntity(222U);
    msg.name.assign("SBYZJOCWBBFYLSZDCAPPGYNRQQQGFNBUSMYC");
    msg.state = 197U;

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
    msg.setTimeStamp(0.6991454635098251);
    msg.setSource(46097U);
    msg.setSourceEntity(46U);
    msg.setDestination(10402U);
    msg.setDestinationEntity(54U);
    msg.name.assign("HKUIPNOVGIJFBAROFRRHZQCVVBODTLQCQNWWXLWTZQAEDSRIATJKILUGOCGMHHMPIDKWUVSEBTWUFQYUMBBGFQVXYYJHDUCJEKLNRRNVLVZXJXEBEFBFOIPZTXAYVRQEQSMKVGDNISDQXWEDJHPMTFLKZSTLWUZWYHBJCNAMYAZ");
    msg.state = 159U;

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
    msg.setTimeStamp(0.1374171913612422);
    msg.setSource(25025U);
    msg.setSourceEntity(191U);
    msg.setDestination(30929U);
    msg.setDestinationEntity(208U);
    msg.name.assign("KVKNFOITHTPKGAFLOCRYTPCKCTPKRXSUCLYPJXBAHIWXGDIHXJGDULMSYWYABHFYJWVAPFBOYUEYZSLLVCHMEDW");
    msg.state = 228U;

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
    msg.setTimeStamp(0.12295343948300752);
    msg.setSource(8607U);
    msg.setSourceEntity(38U);
    msg.setDestination(30351U);
    msg.setDestinationEntity(219U);
    msg.name.assign("OZVYVLFJUAUSJJUIYREZZNXGOOMSNTHEWLGLXQAGGWENCURLRKEQCKAGXSWLQGYGBBOPKBSXHJLYGRQBEFEXRYDHTSFCOWZVEBHLDTTWJJWIRCDNSGVDOEPCRXEJMWBVPDKCVGYBIKIIRPMFFYFPKOFBDJKABMHOWBPYDSWPQHMNNOZFZXUCJURHDJWPTINQLYTMMKVLCAXMXZMAOSQUQQCZIDUIVFCAXDHRNZISAALUNZ");
    msg.value = 134U;

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
    msg.setTimeStamp(0.45700308051565897);
    msg.setSource(7912U);
    msg.setSourceEntity(88U);
    msg.setDestination(44228U);
    msg.setDestinationEntity(34U);
    msg.name.assign("XRDYJVNWLGODKMYCBQPRMKEPSRGLTWQRWAJZDTXLQUJRAQCBHBUNLPSFQWTDLFKPBGXJSRUIMNVCQSDGVONMFPDFCSKCUFUNGDFRWXSOWJBVCTOAZGHYANILQZZRKJYXBJNZAZODUCGTIYEHCRFLSELMZVFAHKXQMOEYCEOUHIEEAZEYEPK");
    msg.value = 222U;

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
    msg.setTimeStamp(0.522388453696641);
    msg.setSource(17392U);
    msg.setSourceEntity(227U);
    msg.setDestination(5436U);
    msg.setDestinationEntity(72U);
    msg.name.assign("TRUQLJMNOFGDLJCJWSNEVZMVTERYCJDKEHVIVNUDCSPKAQDWWSBQOWRFBILENZVSODADAPTKHWUZZUGZLYMSPXYMAUTGIPFXAIHOBDHBXMTR");
    msg.value = 150U;

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
    msg.setTimeStamp(0.060676840732565185);
    msg.setSource(38143U);
    msg.setSourceEntity(212U);
    msg.setDestination(50524U);
    msg.setDestinationEntity(117U);
    msg.name.assign("XBFXUQSWNJGQNQJEDROCXVMHFOUAHZMMLCFSAIMNOZLZGTRXRADMMBZKLLDQOZKTGEPESKIDMCFJTUZDASNGFCBBJWKSSFVEOMYTJDLNIPJRVCFCDMAYQIUYWVIPUVCBVSDLZCBXHSPWHAMSAIAONKXXGRYUJIERXQTUKKVONPKPNLTGQGWIVJTXWLWFEYIYHNBGVEHZWRTEYPPJTOYKUBQQNBJGUEYUWHRH");

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
    msg.setTimeStamp(0.42222896762535156);
    msg.setSource(6041U);
    msg.setSourceEntity(226U);
    msg.setDestination(54093U);
    msg.setDestinationEntity(43U);
    msg.name.assign("XQELWOBRPADVNQYDGOPDHSCXVPZNABSUYBWSFHAEJFNNIWJHAQRYLHTRTHDMKITJNJOOUIFEYWRCSXWXHUOVMVBMETDNGYTFGYMENVLAPRFWZXEVKYOTQRAVAXSEHJIAELRFHJQMSMWZULQZKGYSABCYSKQPGKSBFGYKRHLCMMGJBTLOLHWMNGBEOZRCBGLMXUDDTJWQKXALVJSPQDOPFJXDEIXKUZ");

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
    msg.setTimeStamp(0.6227261670834673);
    msg.setSource(16733U);
    msg.setSourceEntity(45U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(8U);
    msg.name.assign("NGSGDXPRJMWHKOSDUSJCPOPCZHCDQVPENLMZLEIBNOFKLBPXRWKYNOZNDQRULIQIUEROUEUXACVJRR");

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
    msg.setTimeStamp(0.5671351225198243);
    msg.setSource(28491U);
    msg.setSourceEntity(211U);
    msg.setDestination(46883U);
    msg.setDestinationEntity(64U);
    msg.name.assign("HMCMNVHRETLBARTPIFJFQCGCEMHUSXGEVMEFGYJXJSGWTSBCKOATIVOTGJJASZNMHTPSBQRQFYBXPKHEHGYMDIXINSTUKWUOPJHQXZKUGQFWVZDHOWXLENNDUVLVKLSTWWWJXD");
    msg.value = 17U;

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
    msg.setTimeStamp(0.1280026816453954);
    msg.setSource(30678U);
    msg.setSourceEntity(108U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(137U);
    msg.name.assign("HFWMORHPEHZAVGYHIMGSJKCTMSQOOCFBFQXVJXLRSVRLRRBNGNAAKDMOSJKIQUECRFZYNIILZYHZLVWTPBCLPNFNUYORWMGGSJUDPCOBQGMEMDFGVXPBRAKFNQHKKPDADSEUODPTAWAEJGUFTIPWYGETMLYPTDMKZXFNWUW");
    msg.value = 181U;

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
    msg.setTimeStamp(0.9088615399186262);
    msg.setSource(7316U);
    msg.setSourceEntity(150U);
    msg.setDestination(6883U);
    msg.setDestinationEntity(75U);
    msg.name.assign("EFLDOUODDAYZZLFNOIVCCVPZTCSAPZRKXFSLLXIHLMIXWQEWXEGHNTDBLNDYYOSTRGLWJYYEBFSKZMWMAUDUWIEIJR");
    msg.value = 105U;

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
    msg.setTimeStamp(0.8835094090818105);
    msg.setSource(21599U);
    msg.setSourceEntity(211U);
    msg.setDestination(50232U);
    msg.setDestinationEntity(69U);
    msg.id = 78U;
    msg.period = 1048627944U;
    msg.duty_cycle = 2352530905U;

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
    msg.setTimeStamp(0.5766275131075134);
    msg.setSource(8064U);
    msg.setSourceEntity(229U);
    msg.setDestination(59708U);
    msg.setDestinationEntity(61U);
    msg.id = 132U;
    msg.period = 1876870403U;
    msg.duty_cycle = 998274577U;

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
    msg.setTimeStamp(0.987428941989461);
    msg.setSource(12317U);
    msg.setSourceEntity(49U);
    msg.setDestination(14632U);
    msg.setDestinationEntity(82U);
    msg.id = 160U;
    msg.period = 4159232340U;
    msg.duty_cycle = 2644938048U;

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
    msg.setTimeStamp(0.6065789376788788);
    msg.setSource(58493U);
    msg.setSourceEntity(23U);
    msg.setDestination(58334U);
    msg.setDestinationEntity(6U);
    msg.id = 80U;
    msg.period = 1940844378U;
    msg.duty_cycle = 421508010U;

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
    msg.setTimeStamp(0.05714194934893846);
    msg.setSource(42161U);
    msg.setSourceEntity(69U);
    msg.setDestination(64407U);
    msg.setDestinationEntity(248U);
    msg.id = 181U;
    msg.period = 3203480893U;
    msg.duty_cycle = 4062845326U;

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
    msg.setTimeStamp(0.4273705890482655);
    msg.setSource(12695U);
    msg.setSourceEntity(103U);
    msg.setDestination(4016U);
    msg.setDestinationEntity(79U);
    msg.id = 233U;
    msg.period = 318047680U;
    msg.duty_cycle = 126941256U;

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
    msg.setTimeStamp(0.7256152277495459);
    msg.setSource(34006U);
    msg.setSourceEntity(154U);
    msg.setDestination(21493U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.8497160481936578;
    msg.lon = 0.748814231641649;
    msg.height = 0.5106889480050684;
    msg.x = 0.056420996439931925;
    msg.y = 0.015743793211693946;
    msg.z = 0.02364952614197202;
    msg.phi = 0.7197473327009215;
    msg.theta = 0.34534580058811737;
    msg.psi = 0.34002261278434587;
    msg.u = 0.7905106937180022;
    msg.v = 0.31158786410316963;
    msg.w = 0.13919183041773198;
    msg.vx = 0.6819813689679831;
    msg.vy = 0.4019400639672166;
    msg.vz = 0.8892915379021276;
    msg.p = 0.37916941611820243;
    msg.q = 0.713234194221627;
    msg.r = 0.23005634830536958;
    msg.depth = 0.5577636743164123;
    msg.alt = 0.6940622283559084;

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
    msg.setTimeStamp(0.7163427006877676);
    msg.setSource(11906U);
    msg.setSourceEntity(17U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.1201079319408449;
    msg.lon = 0.3794098673546089;
    msg.height = 0.24409805416685504;
    msg.x = 0.2922874459625052;
    msg.y = 0.5099411373197248;
    msg.z = 0.885985822563976;
    msg.phi = 0.9945722712596313;
    msg.theta = 0.56571723370356;
    msg.psi = 0.3035793322031791;
    msg.u = 0.09393899064506572;
    msg.v = 0.8861357143077192;
    msg.w = 0.8105063142463694;
    msg.vx = 0.36028216408862257;
    msg.vy = 0.17865077615892344;
    msg.vz = 0.8414727346766396;
    msg.p = 0.8785899080741063;
    msg.q = 0.9721088985729777;
    msg.r = 0.5314064777539476;
    msg.depth = 0.8748059334552615;
    msg.alt = 0.15685078411464215;

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
    msg.setTimeStamp(0.720275690782903);
    msg.setSource(55724U);
    msg.setSourceEntity(174U);
    msg.setDestination(21108U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.37657879404382055;
    msg.lon = 0.7202018262402857;
    msg.height = 0.44497640154516904;
    msg.x = 0.23390484468809747;
    msg.y = 0.7233356596189784;
    msg.z = 0.950832299438692;
    msg.phi = 0.41041341016888133;
    msg.theta = 0.31088445018899347;
    msg.psi = 0.7649626118981769;
    msg.u = 0.6732697950288848;
    msg.v = 0.12877647797040848;
    msg.w = 0.25911017723260443;
    msg.vx = 0.023751511983518547;
    msg.vy = 0.9054481176369666;
    msg.vz = 0.4389049777950672;
    msg.p = 0.20256472549561555;
    msg.q = 0.7120531733206887;
    msg.r = 0.30533176257260886;
    msg.depth = 0.2952258828476366;
    msg.alt = 0.014825011540626876;

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
    msg.setTimeStamp(0.993178752270333);
    msg.setSource(6588U);
    msg.setSourceEntity(84U);
    msg.setDestination(13670U);
    msg.setDestinationEntity(145U);
    msg.x = 0.6571309780307928;
    msg.y = 0.028258490526063107;
    msg.z = 0.10911355136763079;

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
    msg.setTimeStamp(0.623732577054482);
    msg.setSource(18640U);
    msg.setSourceEntity(219U);
    msg.setDestination(7872U);
    msg.setDestinationEntity(28U);
    msg.x = 0.7329790211874354;
    msg.y = 0.7325186775759162;
    msg.z = 0.04318680960506671;

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
    msg.setTimeStamp(0.07667143684489086);
    msg.setSource(9381U);
    msg.setSourceEntity(39U);
    msg.setDestination(13518U);
    msg.setDestinationEntity(88U);
    msg.x = 0.6788878984494897;
    msg.y = 0.781512215636221;
    msg.z = 0.7139013850724426;

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
    msg.setTimeStamp(0.1393427252564362);
    msg.setSource(27443U);
    msg.setSourceEntity(80U);
    msg.setDestination(34912U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7122180217757949;

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
    msg.setTimeStamp(0.702231584906889);
    msg.setSource(746U);
    msg.setSourceEntity(82U);
    msg.setDestination(20517U);
    msg.setDestinationEntity(133U);
    msg.value = 0.6538304635285712;

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
    msg.setTimeStamp(0.41527842332584);
    msg.setSource(1619U);
    msg.setSourceEntity(28U);
    msg.setDestination(14886U);
    msg.setDestinationEntity(47U);
    msg.value = 0.05449402444463414;

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
    msg.setTimeStamp(0.014401124654673025);
    msg.setSource(64836U);
    msg.setSourceEntity(80U);
    msg.setDestination(48076U);
    msg.setDestinationEntity(175U);
    msg.value = 0.6557635998410377;

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
    msg.setTimeStamp(0.8940551364725438);
    msg.setSource(17764U);
    msg.setSourceEntity(90U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(252U);
    msg.value = 0.5706241680904065;

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
    msg.setTimeStamp(0.16667943895878257);
    msg.setSource(28604U);
    msg.setSourceEntity(36U);
    msg.setDestination(13434U);
    msg.setDestinationEntity(48U);
    msg.value = 0.4574228101646468;

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
    msg.setTimeStamp(0.2362538648361172);
    msg.setSource(11192U);
    msg.setSourceEntity(28U);
    msg.setDestination(59552U);
    msg.setDestinationEntity(18U);
    msg.x = 0.6712057869501892;
    msg.y = 0.8414787023742629;
    msg.z = 0.10388576500757529;
    msg.phi = 0.48649341230748244;
    msg.theta = 0.5517841166286142;
    msg.psi = 0.6686132646417513;
    msg.p = 0.24565867728924562;
    msg.q = 0.7601586411684655;
    msg.r = 0.07620729128305992;
    msg.u = 0.7377769462474806;
    msg.v = 0.5161489398491724;
    msg.w = 0.7137163847284896;
    msg.bias_psi = 0.49958285569112415;
    msg.bias_r = 0.5899869143052896;

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
    msg.setTimeStamp(0.7586087883263815);
    msg.setSource(2036U);
    msg.setSourceEntity(159U);
    msg.setDestination(64537U);
    msg.setDestinationEntity(146U);
    msg.x = 0.2339972151335773;
    msg.y = 0.3109813399668687;
    msg.z = 0.8584193657451714;
    msg.phi = 0.016404901879500278;
    msg.theta = 0.46341997193133555;
    msg.psi = 0.4415846447235007;
    msg.p = 0.43052591666068885;
    msg.q = 0.051578039358624705;
    msg.r = 0.5767073144998646;
    msg.u = 0.7294532599461099;
    msg.v = 0.03627445876752555;
    msg.w = 0.7192474094162239;
    msg.bias_psi = 0.6660409719499775;
    msg.bias_r = 0.09207531789318624;

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
    msg.setTimeStamp(0.0030319087764216768);
    msg.setSource(12756U);
    msg.setSourceEntity(157U);
    msg.setDestination(20315U);
    msg.setDestinationEntity(190U);
    msg.x = 0.9055665719126277;
    msg.y = 0.5493711078087697;
    msg.z = 0.6668036746734642;
    msg.phi = 0.3649039582723136;
    msg.theta = 0.3125275360915031;
    msg.psi = 0.18168741271707733;
    msg.p = 0.11815667783421391;
    msg.q = 0.016189163544406582;
    msg.r = 0.13040111939060262;
    msg.u = 0.23107552543573373;
    msg.v = 0.5893225129349604;
    msg.w = 0.640876407921431;
    msg.bias_psi = 0.061178476342920285;
    msg.bias_r = 0.8918467384602293;

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
    msg.setTimeStamp(0.17220926593982355);
    msg.setSource(27712U);
    msg.setSourceEntity(222U);
    msg.setDestination(124U);
    msg.setDestinationEntity(10U);
    msg.bias_psi = 0.9093996635459374;
    msg.bias_r = 0.5505714875909896;
    msg.cog = 0.46634964689542713;
    msg.cyaw = 0.732569578051757;
    msg.lbl_rej_level = 0.800001783718046;
    msg.gps_rej_level = 0.06645415649457498;
    msg.custom_x = 0.5828302353190319;
    msg.custom_y = 0.7188410785375009;
    msg.custom_z = 0.9990645160882093;

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
    msg.setTimeStamp(0.9899211237360108);
    msg.setSource(28828U);
    msg.setSourceEntity(105U);
    msg.setDestination(45128U);
    msg.setDestinationEntity(84U);
    msg.bias_psi = 0.963744270740217;
    msg.bias_r = 0.35970044385559363;
    msg.cog = 0.5742713631208285;
    msg.cyaw = 0.8260783449136262;
    msg.lbl_rej_level = 0.11012829759444032;
    msg.gps_rej_level = 0.018987027437196158;
    msg.custom_x = 0.9293631003177713;
    msg.custom_y = 0.39088039041562317;
    msg.custom_z = 0.22767630500130842;

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
    msg.setTimeStamp(0.18999918999283893);
    msg.setSource(55708U);
    msg.setSourceEntity(211U);
    msg.setDestination(36199U);
    msg.setDestinationEntity(141U);
    msg.bias_psi = 0.7732995111010875;
    msg.bias_r = 0.3044027640151722;
    msg.cog = 0.3684151374600788;
    msg.cyaw = 0.2211149635540114;
    msg.lbl_rej_level = 0.27909973148777023;
    msg.gps_rej_level = 0.2098896661354308;
    msg.custom_x = 0.05475082533697073;
    msg.custom_y = 0.5726007552405558;
    msg.custom_z = 0.662065133370768;

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
    msg.setTimeStamp(0.8641854215375692);
    msg.setSource(3510U);
    msg.setSourceEntity(119U);
    msg.setDestination(23553U);
    msg.setDestinationEntity(106U);
    msg.utc_time = 0.574713549564118;
    msg.reason = 117U;

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
    msg.setTimeStamp(0.6634935248149945);
    msg.setSource(4615U);
    msg.setSourceEntity(19U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(245U);
    msg.utc_time = 0.8364713942664238;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.6640131297070351);
    msg.setSource(48322U);
    msg.setSourceEntity(21U);
    msg.setDestination(29173U);
    msg.setDestinationEntity(251U);
    msg.utc_time = 0.9342996599349097;
    msg.reason = 85U;

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
    msg.setTimeStamp(0.2940187463575731);
    msg.setSource(61152U);
    msg.setSourceEntity(223U);
    msg.setDestination(5745U);
    msg.setDestinationEntity(20U);
    msg.id = 31U;
    msg.range = 0.29710436504235405;
    msg.acceptance = 157U;

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
    msg.setTimeStamp(0.5289275301634451);
    msg.setSource(8275U);
    msg.setSourceEntity(139U);
    msg.setDestination(6859U);
    msg.setDestinationEntity(15U);
    msg.id = 91U;
    msg.range = 0.496335134999613;
    msg.acceptance = 95U;

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
    msg.setTimeStamp(0.5227017788556815);
    msg.setSource(43386U);
    msg.setSourceEntity(244U);
    msg.setDestination(20281U);
    msg.setDestinationEntity(19U);
    msg.id = 187U;
    msg.range = 0.9983309538696807;
    msg.acceptance = 25U;

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
    msg.setTimeStamp(0.33936368674657547);
    msg.setSource(28372U);
    msg.setSourceEntity(89U);
    msg.setDestination(51469U);
    msg.setDestinationEntity(133U);
    msg.type = 174U;
    msg.reason = 226U;
    msg.value = 0.06713130744802631;
    msg.timestep = 0.4000112968397388;

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
    msg.setTimeStamp(0.4489518608579576);
    msg.setSource(33351U);
    msg.setSourceEntity(80U);
    msg.setDestination(20131U);
    msg.setDestinationEntity(5U);
    msg.type = 15U;
    msg.reason = 229U;
    msg.value = 0.8832599667337259;
    msg.timestep = 0.6097054991006646;

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
    msg.setTimeStamp(0.614640475561911);
    msg.setSource(8148U);
    msg.setSourceEntity(6U);
    msg.setDestination(63296U);
    msg.setDestinationEntity(234U);
    msg.type = 182U;
    msg.reason = 135U;
    msg.value = 0.1315027290905464;
    msg.timestep = 0.30068204349546923;

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
    msg.setTimeStamp(0.5921119456979039);
    msg.setSource(63206U);
    msg.setSourceEntity(65U);
    msg.setDestination(15358U);
    msg.setDestinationEntity(232U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LEYQBHEXXETRFDZMAPFUZXBVBXOSJVRIYQCPNWRROAGBOCFNYKYGQJDUTOXHJCYGABNOK");
    tmp_msg_0.lat = 0.5788984750049925;
    tmp_msg_0.lon = 0.3073777553877599;
    tmp_msg_0.depth = 0.3466780892880118;
    tmp_msg_0.query_channel = 216U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 253U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9520482680900321;
    msg.y = 0.7722933145860521;
    msg.var_x = 0.08063704579796083;
    msg.var_y = 0.014769952205802683;
    msg.distance = 0.6306448370627432;

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
    msg.setTimeStamp(0.5502017831786865);
    msg.setSource(31858U);
    msg.setSourceEntity(115U);
    msg.setDestination(31671U);
    msg.setDestinationEntity(223U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KGQPTTCQISHMTMOACKGAILJMWMSFICVDIBXUAPPHUQFGKLENCJQEZFNPZJDZWQCPRBLFYLRLJCOHESRZDCMZVMEJJUBAGRAUZXQYHOXKWNJREJIEWITENRKFCGXJHROSNOYQWTIBL");
    tmp_msg_0.lat = 0.8981493643793799;
    tmp_msg_0.lon = 0.14150030679311443;
    tmp_msg_0.depth = 0.926611455429701;
    tmp_msg_0.query_channel = 176U;
    tmp_msg_0.reply_channel = 44U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8720003432923943;
    msg.y = 0.28441130674184545;
    msg.var_x = 0.7831618866711088;
    msg.var_y = 0.23366215583658223;
    msg.distance = 0.15868257176815737;

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
    msg.setTimeStamp(0.48691703945271647);
    msg.setSource(55742U);
    msg.setSourceEntity(179U);
    msg.setDestination(17070U);
    msg.setDestinationEntity(100U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CPHYMWMIQVSDEATJILRBJDMUXQHLOHRACWCIOJYNLYTONPGUSDPNKFOHOLFBGJBGMKKHZZEEKVDDIRVYHLHGYAIGXKUWKSRLKMRLXRNMLNGBDPBQOEXUZCRRPZFWNIZYYBWSVUFZITJBANFUMAPARZFRLVCGFTPXJSPUIHDZSKSVQBIGJEJTZETDHAAWXETNFPWFYC");
    tmp_msg_0.lat = 0.2998449591303405;
    tmp_msg_0.lon = 0.9440798066161504;
    tmp_msg_0.depth = 0.806394416138035;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 124U;
    tmp_msg_0.transponder_delay = 123U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8090322164270498;
    msg.y = 0.6687405986753138;
    msg.var_x = 0.18390392165985847;
    msg.var_y = 0.5532827010037306;
    msg.distance = 0.8734699733291655;

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
    msg.setTimeStamp(0.9517360017774894);
    msg.setSource(59771U);
    msg.setSourceEntity(70U);
    msg.setDestination(21938U);
    msg.setDestinationEntity(134U);
    msg.state = 206U;

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
    msg.setTimeStamp(0.8073237509849266);
    msg.setSource(64909U);
    msg.setSourceEntity(103U);
    msg.setDestination(35886U);
    msg.setDestinationEntity(78U);
    msg.state = 95U;

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
    msg.setTimeStamp(0.36214073276655256);
    msg.setSource(40735U);
    msg.setSourceEntity(3U);
    msg.setDestination(49561U);
    msg.setDestinationEntity(205U);
    msg.state = 32U;

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
    msg.setTimeStamp(0.44108569936536635);
    msg.setSource(2003U);
    msg.setSourceEntity(248U);
    msg.setDestination(28897U);
    msg.setDestinationEntity(154U);
    msg.x = 0.642913664954713;
    msg.y = 0.0010365795939601963;
    msg.z = 0.5436354212496166;

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
    msg.setTimeStamp(0.18402876024160975);
    msg.setSource(59609U);
    msg.setSourceEntity(129U);
    msg.setDestination(47799U);
    msg.setDestinationEntity(223U);
    msg.x = 0.7626928728937967;
    msg.y = 0.4514507743885132;
    msg.z = 0.35352439016960835;

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
    msg.setTimeStamp(0.5124176228258644);
    msg.setSource(54043U);
    msg.setSourceEntity(145U);
    msg.setDestination(60264U);
    msg.setDestinationEntity(254U);
    msg.x = 0.8557136790915377;
    msg.y = 0.7481386938654819;
    msg.z = 0.24733803572392288;

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
    msg.setTimeStamp(0.06654399620300833);
    msg.setSource(7753U);
    msg.setSourceEntity(153U);
    msg.setDestination(34267U);
    msg.setDestinationEntity(233U);
    msg.va = 0.0073695915253306765;
    msg.aoa = 0.04926222323023055;
    msg.ssa = 0.03484604815330361;

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
    msg.setTimeStamp(0.3818162602357774);
    msg.setSource(7194U);
    msg.setSourceEntity(49U);
    msg.setDestination(60020U);
    msg.setDestinationEntity(44U);
    msg.va = 0.3293449009168449;
    msg.aoa = 0.5887821840174714;
    msg.ssa = 0.8431291290652525;

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
    msg.setTimeStamp(0.40138075332492484);
    msg.setSource(62112U);
    msg.setSourceEntity(41U);
    msg.setDestination(229U);
    msg.setDestinationEntity(89U);
    msg.va = 0.5353309402024434;
    msg.aoa = 0.6929751053564451;
    msg.ssa = 0.06633170492645712;

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
    msg.setTimeStamp(0.810866782148764);
    msg.setSource(38047U);
    msg.setSourceEntity(29U);
    msg.setDestination(38144U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8752994675153162;

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
    msg.setTimeStamp(0.8223117165355558);
    msg.setSource(30767U);
    msg.setSourceEntity(206U);
    msg.setDestination(56807U);
    msg.setDestinationEntity(69U);
    msg.value = 0.600357501627823;

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
    msg.setTimeStamp(0.7047452339523598);
    msg.setSource(29066U);
    msg.setSourceEntity(99U);
    msg.setDestination(43954U);
    msg.setDestinationEntity(89U);
    msg.value = 0.20227854534526957;

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
    msg.setTimeStamp(0.827061555479182);
    msg.setSource(44760U);
    msg.setSourceEntity(210U);
    msg.setDestination(18141U);
    msg.setDestinationEntity(53U);
    msg.value = 0.61219450813517;
    msg.z_units = 50U;

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
    msg.setTimeStamp(0.8083145957942939);
    msg.setSource(50616U);
    msg.setSourceEntity(18U);
    msg.setDestination(27534U);
    msg.setDestinationEntity(115U);
    msg.value = 0.2773007449451498;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.49909425095223325);
    msg.setSource(44838U);
    msg.setSourceEntity(96U);
    msg.setDestination(6867U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6392822070204656;
    msg.z_units = 38U;

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
    msg.setTimeStamp(0.6484109508996875);
    msg.setSource(19388U);
    msg.setSourceEntity(52U);
    msg.setDestination(7835U);
    msg.setDestinationEntity(251U);
    msg.value = 0.5181267238335845;
    msg.speed_units = 104U;

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
    msg.setTimeStamp(0.8632147538031699);
    msg.setSource(20766U);
    msg.setSourceEntity(29U);
    msg.setDestination(23115U);
    msg.setDestinationEntity(220U);
    msg.value = 0.753279809767823;
    msg.speed_units = 39U;

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
    msg.setTimeStamp(0.34475181495354634);
    msg.setSource(43189U);
    msg.setSourceEntity(151U);
    msg.setDestination(47617U);
    msg.setDestinationEntity(41U);
    msg.value = 0.7149040334366897;
    msg.speed_units = 200U;

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
    msg.setTimeStamp(0.3698287505047293);
    msg.setSource(25855U);
    msg.setSourceEntity(237U);
    msg.setDestination(11471U);
    msg.setDestinationEntity(26U);
    msg.value = 0.24722356660285716;

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
    msg.setTimeStamp(0.6677096217016031);
    msg.setSource(8745U);
    msg.setSourceEntity(142U);
    msg.setDestination(56392U);
    msg.setDestinationEntity(242U);
    msg.value = 0.12489146359864411;

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
    msg.setTimeStamp(0.20707535487189588);
    msg.setSource(41608U);
    msg.setSourceEntity(233U);
    msg.setDestination(1326U);
    msg.setDestinationEntity(73U);
    msg.value = 0.2570979414236968;

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
    msg.setTimeStamp(0.9668905398717105);
    msg.setSource(34651U);
    msg.setSourceEntity(182U);
    msg.setDestination(22418U);
    msg.setDestinationEntity(77U);
    msg.value = 0.8746688122375651;

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
    msg.setTimeStamp(0.9277243870209998);
    msg.setSource(57612U);
    msg.setSourceEntity(23U);
    msg.setDestination(31324U);
    msg.setDestinationEntity(123U);
    msg.value = 0.27967284727276354;

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
    msg.setTimeStamp(0.6209223536179129);
    msg.setSource(32562U);
    msg.setSourceEntity(249U);
    msg.setDestination(52933U);
    msg.setDestinationEntity(22U);
    msg.value = 0.12443626820467646;

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
    msg.setTimeStamp(0.10495853276871969);
    msg.setSource(55608U);
    msg.setSourceEntity(74U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(1U);
    msg.value = 0.5052284276072766;

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
    msg.setTimeStamp(0.09118445600127723);
    msg.setSource(2733U);
    msg.setSourceEntity(105U);
    msg.setDestination(1099U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6328599887069939;

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
    msg.setTimeStamp(0.5490627040988105);
    msg.setSource(59780U);
    msg.setSourceEntity(98U);
    msg.setDestination(33937U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6524423258948268;

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
    msg.setTimeStamp(0.2870956225245924);
    msg.setSource(37550U);
    msg.setSourceEntity(117U);
    msg.setDestination(22119U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 2225711045U;
    msg.start_lat = 0.582174695382078;
    msg.start_lon = 0.9027844408326122;
    msg.start_z = 0.7145281061387142;
    msg.start_z_units = 232U;
    msg.end_lat = 0.9393560547152683;
    msg.end_lon = 0.08661782979894628;
    msg.end_z = 0.03868612715778086;
    msg.end_z_units = 16U;
    msg.speed = 0.1559650715095352;
    msg.speed_units = 15U;
    msg.lradius = 0.20174363433033826;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.2385442471726833);
    msg.setSource(62859U);
    msg.setSourceEntity(211U);
    msg.setDestination(6074U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 2115799428U;
    msg.start_lat = 0.4499313003962502;
    msg.start_lon = 0.5886055225611109;
    msg.start_z = 0.959442477315515;
    msg.start_z_units = 82U;
    msg.end_lat = 0.12943008499265685;
    msg.end_lon = 0.0511560168172599;
    msg.end_z = 0.9244655645367391;
    msg.end_z_units = 173U;
    msg.speed = 0.5780302522327974;
    msg.speed_units = 118U;
    msg.lradius = 0.16451473766899127;
    msg.flags = 250U;

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
    msg.setTimeStamp(0.5303621935581251);
    msg.setSource(36199U);
    msg.setSourceEntity(86U);
    msg.setDestination(11091U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 3188418250U;
    msg.start_lat = 0.40602326259503374;
    msg.start_lon = 0.6237070706948521;
    msg.start_z = 0.7126892542797126;
    msg.start_z_units = 99U;
    msg.end_lat = 0.12973727276643054;
    msg.end_lon = 0.4299299456172452;
    msg.end_z = 0.9527379368766955;
    msg.end_z_units = 150U;
    msg.speed = 0.9339165720355784;
    msg.speed_units = 86U;
    msg.lradius = 0.630598180341884;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.3457971778712011);
    msg.setSource(4075U);
    msg.setSourceEntity(87U);
    msg.setDestination(37982U);
    msg.setDestinationEntity(212U);
    msg.x = 0.957358794507506;
    msg.y = 0.21039928166995558;
    msg.z = 0.5334202684367928;
    msg.k = 0.7516563186185047;
    msg.m = 0.9425602427278712;
    msg.n = 0.135578896677353;
    msg.flags = 116U;

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
    msg.setTimeStamp(0.6662063297594186);
    msg.setSource(16417U);
    msg.setSourceEntity(83U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(196U);
    msg.x = 0.5572728589744278;
    msg.y = 0.7277815372377111;
    msg.z = 0.4966279856218483;
    msg.k = 0.25475750013991116;
    msg.m = 0.14196303999036264;
    msg.n = 0.5476531355291424;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.1946627036049161);
    msg.setSource(7414U);
    msg.setSourceEntity(97U);
    msg.setDestination(12249U);
    msg.setDestinationEntity(66U);
    msg.x = 0.1605766720102908;
    msg.y = 0.647902458538143;
    msg.z = 0.7365897707560579;
    msg.k = 0.7986941881724184;
    msg.m = 0.9640336809444031;
    msg.n = 0.3263313186738671;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.9780956521442067);
    msg.setSource(62318U);
    msg.setSourceEntity(181U);
    msg.setDestination(543U);
    msg.setDestinationEntity(244U);
    msg.value = 0.8288904580957513;

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
    msg.setTimeStamp(0.6495972413990583);
    msg.setSource(44764U);
    msg.setSourceEntity(218U);
    msg.setDestination(64817U);
    msg.setDestinationEntity(83U);
    msg.value = 0.11323614423381112;

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
    msg.setTimeStamp(0.6925971184538781);
    msg.setSource(59663U);
    msg.setSourceEntity(37U);
    msg.setDestination(43160U);
    msg.setDestinationEntity(145U);
    msg.value = 0.9042253297224762;

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
    msg.setTimeStamp(0.6904655698323887);
    msg.setSource(50315U);
    msg.setSourceEntity(104U);
    msg.setDestination(57141U);
    msg.setDestinationEntity(119U);
    msg.u = 0.29199831460412917;
    msg.v = 0.018482107423428262;
    msg.w = 0.2492847263206759;
    msg.p = 0.9445194462684541;
    msg.q = 0.7730569444744033;
    msg.r = 0.4864879639309365;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.049627028221251535);
    msg.setSource(48653U);
    msg.setSourceEntity(117U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(10U);
    msg.u = 0.9624458829271793;
    msg.v = 0.5477702504230839;
    msg.w = 0.9340420980167194;
    msg.p = 0.9285052098297144;
    msg.q = 0.4068789072389368;
    msg.r = 0.7920064546652238;
    msg.flags = 106U;

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
    msg.setTimeStamp(0.770839479116609);
    msg.setSource(10828U);
    msg.setSourceEntity(227U);
    msg.setDestination(50852U);
    msg.setDestinationEntity(191U);
    msg.u = 0.9087604604727192;
    msg.v = 0.4171365336196492;
    msg.w = 0.7732171048989621;
    msg.p = 0.09769869460106839;
    msg.q = 0.01059482100390885;
    msg.r = 0.9959877166229064;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.4948361961401885);
    msg.setSource(48512U);
    msg.setSourceEntity(131U);
    msg.setDestination(24361U);
    msg.setDestinationEntity(68U);
    msg.path_ref = 4078005692U;
    msg.start_lat = 0.1137328330787698;
    msg.start_lon = 0.1773873241564543;
    msg.start_z = 0.6285964305003079;
    msg.start_z_units = 213U;
    msg.end_lat = 0.29888409815544903;
    msg.end_lon = 0.5352846123647643;
    msg.end_z = 0.819201688162085;
    msg.end_z_units = 183U;
    msg.lradius = 0.16381174363270012;
    msg.flags = 175U;
    msg.x = 0.9307409265304104;
    msg.y = 0.12393772597872144;
    msg.z = 0.5127028716030446;
    msg.vx = 0.37449291807316254;
    msg.vy = 0.5794399166513569;
    msg.vz = 0.5962515560019951;
    msg.course_error = 0.601533745780016;
    msg.eta = 259U;

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
    msg.setTimeStamp(0.485634128589879);
    msg.setSource(15659U);
    msg.setSourceEntity(184U);
    msg.setDestination(46401U);
    msg.setDestinationEntity(226U);
    msg.path_ref = 2346779720U;
    msg.start_lat = 0.2764290560304644;
    msg.start_lon = 0.29637830203467874;
    msg.start_z = 0.11644601346032313;
    msg.start_z_units = 172U;
    msg.end_lat = 0.6272716000494124;
    msg.end_lon = 0.3107385377020587;
    msg.end_z = 0.453082915069855;
    msg.end_z_units = 3U;
    msg.lradius = 0.8092296858734132;
    msg.flags = 142U;
    msg.x = 0.7391814980437338;
    msg.y = 0.4007740204444381;
    msg.z = 0.8617611249050571;
    msg.vx = 0.7262631162530515;
    msg.vy = 0.6074212028852308;
    msg.vz = 0.36605819395332595;
    msg.course_error = 0.5233505731150132;
    msg.eta = 2469U;

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
    msg.setTimeStamp(0.7563672629320923);
    msg.setSource(41746U);
    msg.setSourceEntity(210U);
    msg.setDestination(50866U);
    msg.setDestinationEntity(179U);
    msg.path_ref = 241459497U;
    msg.start_lat = 0.8873173600154781;
    msg.start_lon = 0.16173225799626811;
    msg.start_z = 0.10528584187391687;
    msg.start_z_units = 111U;
    msg.end_lat = 0.8394908151791682;
    msg.end_lon = 0.9547808153496677;
    msg.end_z = 0.4937076153324692;
    msg.end_z_units = 237U;
    msg.lradius = 0.32327054396201726;
    msg.flags = 7U;
    msg.x = 0.0052091226309950445;
    msg.y = 0.7157078266733843;
    msg.z = 0.8505147564837341;
    msg.vx = 0.7855186158101327;
    msg.vy = 0.35228053375335067;
    msg.vz = 0.753049461322992;
    msg.course_error = 0.3318485612596128;
    msg.eta = 41404U;

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
    msg.setTimeStamp(0.4032216070488305);
    msg.setSource(50441U);
    msg.setSourceEntity(247U);
    msg.setDestination(21723U);
    msg.setDestinationEntity(14U);
    msg.k = 0.24457297761844254;
    msg.m = 0.20594192456351734;
    msg.n = 0.9233724956704613;

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
    msg.setTimeStamp(0.6570588917644973);
    msg.setSource(45870U);
    msg.setSourceEntity(140U);
    msg.setDestination(57646U);
    msg.setDestinationEntity(124U);
    msg.k = 0.7244086938109091;
    msg.m = 0.09795037911573323;
    msg.n = 0.6841574511193154;

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
    msg.setTimeStamp(0.356055572331325);
    msg.setSource(54700U);
    msg.setSourceEntity(186U);
    msg.setDestination(1538U);
    msg.setDestinationEntity(117U);
    msg.k = 0.43916239136484503;
    msg.m = 0.22493548423014598;
    msg.n = 0.5747155137959108;

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
    msg.setTimeStamp(0.8444082313301446);
    msg.setSource(7367U);
    msg.setSourceEntity(78U);
    msg.setDestination(35941U);
    msg.setDestinationEntity(153U);
    msg.p = 0.2974780713315356;
    msg.i = 0.7388848863434783;
    msg.d = 0.5086208846699121;
    msg.a = 0.9694013025796769;

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
    msg.setTimeStamp(0.8792025834064056);
    msg.setSource(44885U);
    msg.setSourceEntity(223U);
    msg.setDestination(3802U);
    msg.setDestinationEntity(65U);
    msg.p = 0.8553147466274812;
    msg.i = 0.00018377790668588911;
    msg.d = 0.12529878271276962;
    msg.a = 0.8586417001587789;

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
    msg.setTimeStamp(0.30329470159226);
    msg.setSource(33243U);
    msg.setSourceEntity(235U);
    msg.setDestination(31488U);
    msg.setDestinationEntity(88U);
    msg.p = 0.7010843944967194;
    msg.i = 0.7249368639550988;
    msg.d = 0.10555754000224582;
    msg.a = 0.12066925752578517;

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
    msg.setTimeStamp(0.858352070331634);
    msg.setSource(7449U);
    msg.setSourceEntity(184U);
    msg.setDestination(54047U);
    msg.setDestinationEntity(2U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.13074621426066746);
    msg.setSource(42994U);
    msg.setSourceEntity(179U);
    msg.setDestination(61962U);
    msg.setDestinationEntity(132U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.638916853243407);
    msg.setSource(24713U);
    msg.setSourceEntity(90U);
    msg.setDestination(57730U);
    msg.setDestinationEntity(242U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.42720855724892326);
    msg.setSource(40473U);
    msg.setSourceEntity(211U);
    msg.setDestination(54140U);
    msg.setDestinationEntity(165U);
    msg.x = 0.70481062910344;
    msg.y = 0.380629946883441;
    msg.z = 0.23543535282215045;
    msg.vx = 0.9105343826279505;
    msg.vy = 0.4518810151864139;
    msg.vz = 0.3873149134441437;
    msg.ax = 0.5416003824469702;
    msg.ay = 0.9874253172706314;
    msg.az = 0.5583854569512824;
    msg.flags = 16727U;

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
    msg.setTimeStamp(0.7463497291225271);
    msg.setSource(50188U);
    msg.setSourceEntity(126U);
    msg.setDestination(53426U);
    msg.setDestinationEntity(210U);
    msg.x = 0.771783229583991;
    msg.y = 0.9007009821450996;
    msg.z = 0.9132516945762367;
    msg.vx = 0.7266004408696315;
    msg.vy = 0.8166846075609832;
    msg.vz = 0.3885564319963789;
    msg.ax = 0.11710268748413422;
    msg.ay = 0.7090867090322432;
    msg.az = 0.36114177152922056;
    msg.flags = 3597U;

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
    msg.setTimeStamp(0.8305651237477055);
    msg.setSource(58940U);
    msg.setSourceEntity(208U);
    msg.setDestination(63725U);
    msg.setDestinationEntity(222U);
    msg.x = 0.5033932837321393;
    msg.y = 0.747616445115037;
    msg.z = 0.13904904912654115;
    msg.vx = 0.006954143183255934;
    msg.vy = 0.1932081359109108;
    msg.vz = 0.3508625481595887;
    msg.ax = 0.8207171339016419;
    msg.ay = 0.6293581790207525;
    msg.az = 0.9188818604118232;
    msg.flags = 21592U;

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
    msg.setTimeStamp(0.9197509741945152);
    msg.setSource(45172U);
    msg.setSourceEntity(221U);
    msg.setDestination(21113U);
    msg.setDestinationEntity(154U);
    msg.value = 0.6344355315934934;

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
    msg.setTimeStamp(0.12370912142856738);
    msg.setSource(53979U);
    msg.setSourceEntity(104U);
    msg.setDestination(41751U);
    msg.setDestinationEntity(169U);
    msg.value = 0.397949712343304;

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
    msg.setTimeStamp(0.5958144325153861);
    msg.setSource(1758U);
    msg.setSourceEntity(180U);
    msg.setDestination(63843U);
    msg.setDestinationEntity(105U);
    msg.value = 0.5821919684646124;

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
    msg.setTimeStamp(0.8554103232279178);
    msg.setSource(6018U);
    msg.setSourceEntity(32U);
    msg.setDestination(54179U);
    msg.setDestinationEntity(5U);
    msg.timeout = 9860U;
    msg.lat = 0.7074862663823541;
    msg.lon = 0.6319001339604242;
    msg.z = 0.6213932953064206;
    msg.z_units = 11U;
    msg.speed = 0.09514848093054418;
    msg.speed_units = 100U;
    msg.roll = 0.4224483051965321;
    msg.pitch = 0.14247306012981265;
    msg.yaw = 0.674352891638686;
    msg.custom.assign("GOTRFCYSVATZCYJZWEQQZFTDLWSHIQTNKKWEOXLFGNEWCMOXXNUOJIXXZMKBMRVQEDRNFVLUMSCWAIOWDMTNZVTRAINDNLUIJOJDKLSCBLABEYSGPEJIGJCUVOIWMLRXHHBORZFJATPXHKIFRBTPAKBQNXSYUUKPKSGTCKAGHDAQVOLWPEWSUENPUPEGPYDMZFPYGEUZVMZPNTOSQJLRYYZ");

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
    msg.setTimeStamp(0.02630983815380461);
    msg.setSource(42078U);
    msg.setSourceEntity(243U);
    msg.setDestination(36488U);
    msg.setDestinationEntity(146U);
    msg.timeout = 25363U;
    msg.lat = 0.09837873213666493;
    msg.lon = 0.2434712748549842;
    msg.z = 0.9385273652974222;
    msg.z_units = 204U;
    msg.speed = 0.0725907660254167;
    msg.speed_units = 4U;
    msg.roll = 0.44766805241168117;
    msg.pitch = 0.46233167231509276;
    msg.yaw = 0.7036897733486788;
    msg.custom.assign("JRFFVSSHLVOAQQNMJNBNICHCTFTBBBAZZCERIDXZEXTOBWVKVUNWMXUJCWAYEIXESZYLFPGYRXVJTPWROTPHGRYIKGIAMWLBAPXLQGJRRYKUGHZIYVGQDEUKFBMZWXQCIFSORXLJCJYHXCYQDROLLEPDUOMTTZAKASMMNWSTGPSODEMEKSSOAVQPVURULWTZDYOTPGDAGCFXIZBBQIJCFAGC");

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
    msg.setTimeStamp(0.9353414973837108);
    msg.setSource(10940U);
    msg.setSourceEntity(189U);
    msg.setDestination(35977U);
    msg.setDestinationEntity(40U);
    msg.timeout = 65481U;
    msg.lat = 0.9140516429892108;
    msg.lon = 0.6078191667124516;
    msg.z = 0.8909409810138662;
    msg.z_units = 139U;
    msg.speed = 0.36233514307032355;
    msg.speed_units = 215U;
    msg.roll = 0.7165767068852695;
    msg.pitch = 0.24399247867888385;
    msg.yaw = 0.6266885650361018;
    msg.custom.assign("KORWDJGOGMEXEHNASPLRORCJGBFITVHSQAXVXFNUHHHIMOYTQZVWLBZPITDYGGIPIHOWKNRRJYNZGTXAUQZWYPJNPLFTIZKXSFCQTGUSKALLSNTQWUJQBXTTMSVGESJMXPHLZYWWGAAMDEZLAROKDLBAWXVZECVYOUBCUCOOIJHMNDFUQFUDTNOQKFWQVBIXKCYAVCYPRGSEJ");

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
    msg.setTimeStamp(0.23269318888698987);
    msg.setSource(35159U);
    msg.setSourceEntity(207U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(158U);
    msg.timeout = 59004U;
    msg.lat = 0.8056048689176393;
    msg.lon = 0.705326710858331;
    msg.z = 0.22208075460845855;
    msg.z_units = 43U;
    msg.speed = 0.4820878816273997;
    msg.speed_units = 228U;
    msg.duration = 12256U;
    msg.radius = 0.2700747445119204;
    msg.flags = 117U;
    msg.custom.assign("SPMCPBFHLXHKYHVBX");

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
    msg.setTimeStamp(0.3720050957471668);
    msg.setSource(33404U);
    msg.setSourceEntity(217U);
    msg.setDestination(37551U);
    msg.setDestinationEntity(87U);
    msg.timeout = 7244U;
    msg.lat = 0.5810483001664896;
    msg.lon = 0.1954285089650294;
    msg.z = 0.5652883761318083;
    msg.z_units = 152U;
    msg.speed = 0.716688340092834;
    msg.speed_units = 27U;
    msg.duration = 34657U;
    msg.radius = 0.7479445630518496;
    msg.flags = 75U;
    msg.custom.assign("IAVXXLVDUWWOAILCUNROWCSQELKPKWVOREBKTQCWSRLHQPMLELHUAKSWVACDVQSFHDSOSKJOVRBPYNG");

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
    msg.setTimeStamp(0.01226626092145977);
    msg.setSource(46827U);
    msg.setSourceEntity(194U);
    msg.setDestination(28718U);
    msg.setDestinationEntity(133U);
    msg.timeout = 15291U;
    msg.lat = 0.7462954357028566;
    msg.lon = 0.8416354026493386;
    msg.z = 0.2722248715715957;
    msg.z_units = 232U;
    msg.speed = 0.4346017516493509;
    msg.speed_units = 163U;
    msg.duration = 7714U;
    msg.radius = 0.7100271670730739;
    msg.flags = 92U;
    msg.custom.assign("ZBILNGZTOAQADDAOBEJFMPIMXXNJFTSJHJEXXICGKSLCRCPRWVNVEDJSRIKHJWCZBAZLUKFRWHNLLFBPGBLVYRCIEPUFBZRLZYTYCJAQZCGISFUXTTNEGSMNJSEOMOIQQHNPAM");

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
    msg.setTimeStamp(0.3153186742187025);
    msg.setSource(30556U);
    msg.setSourceEntity(234U);
    msg.setDestination(26410U);
    msg.setDestinationEntity(209U);
    msg.custom.assign("NZXKOOLECRGCYXITQGADIXGPSNVHAYJCVLFZOWXXNSTFZTWLZACFZUUJQHCGDLHMXWGSZHQMRMYVQITBKUARPONQRSKBQIMPRBKVLTLWCFBPJHHWPUSGHDYEGRXJLXVDUJFUCHQUKRYBVAEUTZPHEKFNUIDJDVBQYBLPCNFMGKEERMHJJWVFBCSWNQSISGJZNIIDFODBVQVEWAKMTPMAWIEBEEADGZYDCO");

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
    msg.setTimeStamp(0.9772098384011437);
    msg.setSource(62252U);
    msg.setSourceEntity(240U);
    msg.setDestination(6058U);
    msg.setDestinationEntity(95U);
    msg.custom.assign("ULMVGMGNCEMVAJAJIZFCEGVWLKTZQNZTDOVUFZXBZKFOFYKIXP");

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
    msg.setTimeStamp(0.395911414143611);
    msg.setSource(51536U);
    msg.setSourceEntity(146U);
    msg.setDestination(8795U);
    msg.setDestinationEntity(185U);
    msg.custom.assign("AOJBRSSRXQLUKACMBQHGTRQATKGFGGJPYOTABMEFVWQXCEEQFKFPMO");

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
    msg.setTimeStamp(0.9609419985144569);
    msg.setSource(48663U);
    msg.setSourceEntity(212U);
    msg.setDestination(50409U);
    msg.setDestinationEntity(175U);
    msg.timeout = 38384U;
    msg.lat = 0.14037816627550181;
    msg.lon = 0.37617911640214474;
    msg.z = 0.8865864750205912;
    msg.z_units = 220U;
    msg.duration = 29904U;
    msg.speed = 0.5601523157535045;
    msg.speed_units = 86U;
    msg.type = 253U;
    msg.radius = 0.10482997736538979;
    msg.length = 0.8876390732935683;
    msg.bearing = 0.8505175443954242;
    msg.direction = 11U;
    msg.custom.assign("VZCBTOUYRIAJEYZHOCYIVSVRLOGYCDNITMSCEKFBYOBRFCHKVWOYEFHKEMBRNFUXHHQXERLQWMUSGFGZESIVRPXWKOEUHOXCPXVXMNIYUQKJFAGHXADASJEOJTQNHVURZBYWI");

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
    msg.setTimeStamp(0.45527168044991506);
    msg.setSource(9299U);
    msg.setSourceEntity(39U);
    msg.setDestination(9296U);
    msg.setDestinationEntity(215U);
    msg.timeout = 17410U;
    msg.lat = 0.591198466390352;
    msg.lon = 0.9152485238027958;
    msg.z = 0.9767794950171723;
    msg.z_units = 34U;
    msg.duration = 55062U;
    msg.speed = 0.6888241561156684;
    msg.speed_units = 37U;
    msg.type = 10U;
    msg.radius = 0.058161209801882996;
    msg.length = 0.7036940936039286;
    msg.bearing = 0.588290375557725;
    msg.direction = 179U;
    msg.custom.assign("KTZONPJXCQDWOMJA");

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
    msg.setTimeStamp(0.9180984345463052);
    msg.setSource(32967U);
    msg.setSourceEntity(74U);
    msg.setDestination(8415U);
    msg.setDestinationEntity(195U);
    msg.timeout = 50186U;
    msg.lat = 0.9086189667466813;
    msg.lon = 0.4423529306978634;
    msg.z = 0.3182340236336012;
    msg.z_units = 85U;
    msg.duration = 51559U;
    msg.speed = 0.8199210706149085;
    msg.speed_units = 81U;
    msg.type = 139U;
    msg.radius = 0.32118856535530205;
    msg.length = 0.3939073278981675;
    msg.bearing = 0.688238242414461;
    msg.direction = 38U;
    msg.custom.assign("HLXVWCHOTYUWHYAZKQCUBLQLGEPMXQBRVYJNUSQBHKRTBKSZ");

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
    msg.setTimeStamp(0.638467086918042);
    msg.setSource(27886U);
    msg.setSourceEntity(155U);
    msg.setDestination(9663U);
    msg.setDestinationEntity(247U);
    msg.duration = 10906U;
    msg.custom.assign("YAJWDBDUWIHVCSOSOITXLIBIMULDYXNBFCWIXDGMDXXECWOYRN");

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
    msg.setTimeStamp(0.3390194113910959);
    msg.setSource(22678U);
    msg.setSourceEntity(5U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(36U);
    msg.duration = 48655U;
    msg.custom.assign("LFLMFBSCYCAOGPYSFIUGOYQEFEXQJMWALNMTPOQTEGOZSSPSCTGDYRKPHXJTZAFSJNXWDJVXIKI");

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
    msg.setTimeStamp(0.7134605723305086);
    msg.setSource(47652U);
    msg.setSourceEntity(83U);
    msg.setDestination(1590U);
    msg.setDestinationEntity(226U);
    msg.duration = 37689U;
    msg.custom.assign("NRXOXPQTAFLHOHBLNSIVDYEBXHMKMQZLLMOAADFWOLLRPCMIOAUQQNDYZJTDSHCVZNREAITTKXDYMIKLGCGEVYGJECGSBFWSNSLSSRWYVXRBEPTSWZNVXQUCPUKETJAXIGHYGOIPONOKGQVIJWQKTMEVCUYUGJYZRIFVTQKXPUBBMHQKOBCTRWLCPFRVAFAWTEUHJDEDHILDWGZJ");

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
    msg.setTimeStamp(0.8132079521099845);
    msg.setSource(32726U);
    msg.setSourceEntity(110U);
    msg.setDestination(41439U);
    msg.setDestinationEntity(211U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.5653437536801189;
    msg.control.set(tmp_msg_0);
    msg.duration = 16494U;
    msg.custom.assign("PNGJYKQNDCBBCXUTMUATSOAFXRJBBOGFHVTZHXDIEKLEKIHGVKMZEZXHIPAFQLCRQNFLFOPKNTDUPOEZCJBEAHGJZISGRECUXMOISNZQWQAGLRQCVDOVFXFYQKMEKYARLUTBAFHYRQHPDUGOZSNLUVSBZWRVKSMFJVMUBBDPXZOTMVHANYROPUMLWDDNBEGIWYUSJVWYSRWSWLIYIEZPKCRMLXPJJFLTJTHADWIGGCNCNWIYQSPHQCMAX");

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
    msg.setTimeStamp(0.15556740567899352);
    msg.setSource(13761U);
    msg.setSourceEntity(38U);
    msg.setDestination(60707U);
    msg.setDestinationEntity(210U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.4778123226193033;
    msg.control.set(tmp_msg_0);
    msg.duration = 5407U;
    msg.custom.assign("NTJREIDZABQFHOBKZBMXTWMUYFLPWIPQMCQNEGJANOLFTAMPRUWIKOUHZFCKDEOPJFYAYVVWHSRKWQWPQMLCRRDWSVTAIVZNJHWGFSELVPEOYEYCWKLNDUKRQSXQOHHLAU");

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
    msg.setTimeStamp(0.8471379992522162);
    msg.setSource(13703U);
    msg.setSourceEntity(225U);
    msg.setDestination(43076U);
    msg.setDestinationEntity(233U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.406468015441352;
    msg.control.set(tmp_msg_0);
    msg.duration = 60671U;
    msg.custom.assign("GMWEQGHOKRVYXDDFXTAVFQJDKAZCCRLHNUPQXNNLSZLMFOVECLEWDEENMGOGGGSCNIEAYSMSWROCOJYWILWGKCQZAHJHKXPNDEJITBBUXUZHVHFQOYIVBCPWBIWRHYXRHQUBCDSZPQAJBJXNTTSATDJYOPNKLFUIVDEWXMIVLUREBYMYLANWUIRFJYIJZGPVRSZKMJBTHPAMS");

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
    msg.setTimeStamp(0.06488004814096537);
    msg.setSource(32191U);
    msg.setSourceEntity(241U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(240U);
    msg.timeout = 39350U;
    msg.lat = 0.9885961373736653;
    msg.lon = 0.42404376051800063;
    msg.z = 0.2425575301544738;
    msg.z_units = 15U;
    msg.speed = 0.07826092012057217;
    msg.speed_units = 208U;
    msg.bearing = 0.1233048440700576;
    msg.cross_angle = 0.7996786165328272;
    msg.width = 0.7532527606517474;
    msg.length = 0.44825718690186633;
    msg.hstep = 0.7074314129351063;
    msg.coff = 107U;
    msg.alternation = 222U;
    msg.flags = 61U;
    msg.custom.assign("XUEWMYIPNMSZEBHKACWOQETXOINULQOVPOTBLHIUKRPVJUHWHLPEAGQAZSPJAIHJJIHCAWBZZSVFNMIAMHDRHLBJULXFGFOKBAPXJSOCKHKPVYWUFVRZYGYYLPGRNZKNILDVEQRDX");

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
    msg.setTimeStamp(0.988487936109979);
    msg.setSource(59369U);
    msg.setSourceEntity(73U);
    msg.setDestination(51073U);
    msg.setDestinationEntity(192U);
    msg.timeout = 30561U;
    msg.lat = 0.4974084899888438;
    msg.lon = 0.5950148125513551;
    msg.z = 0.11106909743332061;
    msg.z_units = 247U;
    msg.speed = 0.1603029696426853;
    msg.speed_units = 230U;
    msg.bearing = 0.0871873119372707;
    msg.cross_angle = 0.203052257986287;
    msg.width = 0.27726284708436866;
    msg.length = 0.7377527567210891;
    msg.hstep = 0.14061029524915813;
    msg.coff = 221U;
    msg.alternation = 130U;
    msg.flags = 141U;
    msg.custom.assign("PZDJYWUXYZRXHOSRACJMZHUGLLPKEFFARURXNQEVSXXELYHOKEAOWVMNVGTTPFTHVONXIBAZTKQDDJSSKCNCIYYTBRVNRAOFTNMSIVPGDUILIWGQBYHCOEBQJJUHMSMYREZGXVZFKDLKXPCWTBUFOBHEWPRCBSGDCQQWHKAZLQCEFUQSLUGNHTAUZWFFDKFNBMKXGQIJNDOVLDRZCVPEWOQTICSPJAXMBMG");

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
    msg.setTimeStamp(0.5250826546543724);
    msg.setSource(56634U);
    msg.setSourceEntity(62U);
    msg.setDestination(23879U);
    msg.setDestinationEntity(111U);
    msg.timeout = 47270U;
    msg.lat = 0.8246268134754949;
    msg.lon = 0.7455168587939988;
    msg.z = 0.8884154203103016;
    msg.z_units = 74U;
    msg.speed = 0.06413395001307376;
    msg.speed_units = 190U;
    msg.bearing = 0.11232726137810789;
    msg.cross_angle = 0.1962704315308953;
    msg.width = 0.15096393229422322;
    msg.length = 0.2482592806408339;
    msg.hstep = 0.07979682431815094;
    msg.coff = 48U;
    msg.alternation = 203U;
    msg.flags = 153U;
    msg.custom.assign("EETUOTDAKWQQFCENMNBAIDWNACPCTZFBMBPPOTXBEHLCARSZBUAEXGRPOXNNYUJGEWFDSSOBZVTMTWWJIXHGYUFBCRUMFHMEYPJDJULJISZFXVGSYRLKHDVJKOEYTNZODOYLUERQH");

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
    msg.setTimeStamp(0.14013299738134388);
    msg.setSource(50078U);
    msg.setSourceEntity(139U);
    msg.setDestination(54568U);
    msg.setDestinationEntity(45U);
    msg.timeout = 4186U;
    msg.lat = 0.5110719743672036;
    msg.lon = 0.6675052648735864;
    msg.z = 0.4275234022692632;
    msg.z_units = 125U;
    msg.speed = 0.7371910548345216;
    msg.speed_units = 48U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.30957649492348494;
    tmp_msg_0.y = 0.827740631434309;
    tmp_msg_0.z = 0.32884503340694027;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IAYZOIRBWARALFBPFGUMGSFSCZIBZPOCTGDOPTMFDUGKQWJULTLTREDVBXTNMMIGSRSVHKJWUWUJFYWLUFGCXXOOFEZHYYHZZRHCCECCJYYBZVQEDRWVIDQLKVBTTZWKNMNHTUDVFACQONGDNXJNXPDJHJKQSBEGOGTQXZJJ");

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
    msg.setTimeStamp(0.7024418162086055);
    msg.setSource(28403U);
    msg.setSourceEntity(94U);
    msg.setDestination(64023U);
    msg.setDestinationEntity(43U);
    msg.timeout = 38812U;
    msg.lat = 0.4585597738336715;
    msg.lon = 0.20689289614700435;
    msg.z = 0.3229170926845557;
    msg.z_units = 226U;
    msg.speed = 0.18534450455018614;
    msg.speed_units = 67U;
    msg.custom.assign("TYGUPKLMADRPUTLDOCFQTNLHSMQIYPSMCGRHHGWMTCAUYJIAMBXQAODLATYTKWSVNCRHFASVILNJUNVBPHQCUODAPDSVZBEJIXFXQQKRYUJHHWBEJGXIXGTRREVNNZWVEISKUROJRZGTNKESOAXBEGFWYYZEQJDDOWFZTKJFMACEJXCGNHBVQOPOYQDGMQDGERWIUXWIKBLLVJMSWHPZNZFFOCWPKEUMN");

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
    msg.setTimeStamp(0.20349350752057116);
    msg.setSource(31936U);
    msg.setSourceEntity(90U);
    msg.setDestination(6065U);
    msg.setDestinationEntity(211U);
    msg.timeout = 48604U;
    msg.lat = 0.050324277107540394;
    msg.lon = 0.2772445260755735;
    msg.z = 0.6915101380202057;
    msg.z_units = 27U;
    msg.speed = 0.6134442913663446;
    msg.speed_units = 117U;
    msg.custom.assign("GYEIJWHCXOOHFXMNTCYGORRHETJSUSQQJGEDQLFYUAKURALKSWTUKFAYEXUBZFWBIVYMFZCJOTIMBSXWJBKRMZWEKDDKNMPLNLGTPGCRZBTYMSOERELLN");

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
    msg.setTimeStamp(0.48153064303626913);
    msg.setSource(6228U);
    msg.setSourceEntity(113U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(205U);
    msg.x = 0.28655998029496477;
    msg.y = 0.46037569487282926;
    msg.z = 0.9008751244131449;

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
    msg.setTimeStamp(0.4859655839050344);
    msg.setSource(1422U);
    msg.setSourceEntity(56U);
    msg.setDestination(12939U);
    msg.setDestinationEntity(54U);
    msg.x = 0.9596495220715296;
    msg.y = 0.8607948464070758;
    msg.z = 0.5500809878125557;

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
    msg.setTimeStamp(0.25561546750205133);
    msg.setSource(16792U);
    msg.setSourceEntity(100U);
    msg.setDestination(16191U);
    msg.setDestinationEntity(107U);
    msg.x = 0.16335607646845363;
    msg.y = 0.6907038410637165;
    msg.z = 0.611501822447334;

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
    msg.setTimeStamp(0.8791844579860708);
    msg.setSource(6965U);
    msg.setSourceEntity(63U);
    msg.setDestination(52886U);
    msg.setDestinationEntity(164U);
    msg.timeout = 42843U;
    msg.lat = 0.7510559195552772;
    msg.lon = 0.16945490045653333;
    msg.z = 0.5728736773199165;
    msg.z_units = 154U;
    msg.amplitude = 0.8462905663391331;
    msg.pitch = 0.9388566191514958;
    msg.speed = 0.5234239211670549;
    msg.speed_units = 205U;
    msg.custom.assign("MJBXSPCWKVVDTWPNYGJRQTZRMBPTZCNGZHUXVLBIVZRAYRPCBQGEEQSOJLSBQYDBHAVVYPKMPLRNZUUGWSETMLVWENUARTUUKGIHJXJQINWSBBOFEKKQTIXGOQAYGBGACMDRWLOSVDMLOXKWFUMSIOLADRTHYPAMQBHYFZXGADFNUFXRQFCUTCSZCITKQTPVFIAVYNIMJJHLEIWNAXMEHOZGEDZHOZWLHCIRSKXNXFFH");

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
    msg.setTimeStamp(0.2520751163661207);
    msg.setSource(23772U);
    msg.setSourceEntity(246U);
    msg.setDestination(4330U);
    msg.setDestinationEntity(16U);
    msg.timeout = 29572U;
    msg.lat = 0.5474596602346595;
    msg.lon = 0.17335698292688329;
    msg.z = 0.7051290843624126;
    msg.z_units = 66U;
    msg.amplitude = 0.8557724030311767;
    msg.pitch = 0.9789034315485295;
    msg.speed = 0.7664373149633937;
    msg.speed_units = 174U;
    msg.custom.assign("XGCHVPFJGZOODBKAKSZBGMSKOCHDNVEDXVBSXUOSXWYLRRRJHHIOREDHQNGQEUPEAUBUVDYYFZNRFIZGNGBACEZUJSMFWMJTVAMPFFYPHELMWTU");

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
    msg.setTimeStamp(0.5171275527047096);
    msg.setSource(44469U);
    msg.setSourceEntity(27U);
    msg.setDestination(39654U);
    msg.setDestinationEntity(250U);
    msg.timeout = 1223U;
    msg.lat = 0.4512581232968148;
    msg.lon = 0.307494982147017;
    msg.z = 0.36723298561811424;
    msg.z_units = 113U;
    msg.amplitude = 0.8428270430069321;
    msg.pitch = 0.02005133277365767;
    msg.speed = 0.8301449026525067;
    msg.speed_units = 66U;
    msg.custom.assign("SWXBWOTAIPLKLPLDIMVZODDNGQIMQWWRLBVUKDWVDQNLWAQRYRNUOELRMJGFXOOOHSJJCLKPZEAJYXKOIFEVHQBHFGMHDALHBVCRBTAJTOOETSLXKBMFYNLQZFMIZFAUYPGSZZESGCSGFVJGDBIYMTTSMRNGWYYQUKYNPCFHNHUDFCMXNBRXXKNTYXVSORJHZSEUMH");

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
    msg.setTimeStamp(0.9349754386472268);
    msg.setSource(38528U);
    msg.setSourceEntity(47U);
    msg.setDestination(24218U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.5909716964684172);
    msg.setSource(25862U);
    msg.setSourceEntity(81U);
    msg.setDestination(25224U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.6944351118527028);
    msg.setSource(38432U);
    msg.setSourceEntity(227U);
    msg.setDestination(51558U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.6696748463718748);
    msg.setSource(24678U);
    msg.setSourceEntity(238U);
    msg.setDestination(61429U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.1639516079651483;
    msg.lon = 0.9068353915799031;
    msg.z = 0.650137311297166;
    msg.z_units = 66U;
    msg.radius = 0.5607063146625226;
    msg.duration = 28337U;
    msg.speed = 0.35766525146651673;
    msg.speed_units = 246U;
    msg.custom.assign("JMNGOZYGKUZPXPPCJFUMAXPDUBE");

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
    msg.setTimeStamp(0.11107884192404227);
    msg.setSource(55716U);
    msg.setSourceEntity(38U);
    msg.setDestination(51041U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.26451966318707254;
    msg.lon = 0.14740118693003035;
    msg.z = 0.6177622474433293;
    msg.z_units = 221U;
    msg.radius = 0.9398522620189967;
    msg.duration = 50651U;
    msg.speed = 0.15881912121089847;
    msg.speed_units = 216U;
    msg.custom.assign("FBKJBDHZCMCASSUWPKKMDUF");

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
    msg.setTimeStamp(0.14812776310188758);
    msg.setSource(23069U);
    msg.setSourceEntity(181U);
    msg.setDestination(55606U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.6402728748928967;
    msg.lon = 0.3384461363347705;
    msg.z = 0.45482131561112793;
    msg.z_units = 56U;
    msg.radius = 0.32858406369638316;
    msg.duration = 43051U;
    msg.speed = 0.6608715261020219;
    msg.speed_units = 19U;
    msg.custom.assign("BJMACLRJVTWNSHHLQKCRTLHLSAKGTIAFTIOMKBBXHGZBWXZORFWAVJIPSQELJMKESQKYVEFDOZZNRQELUNSYXCEDCHRXQUFULOUVNDRWXHMSINKIAOKFOXMJIDYTPIUYTUOTPFWJPBGUUCQNHWZFT");

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
    msg.setTimeStamp(0.17213514551613296);
    msg.setSource(159U);
    msg.setSourceEntity(208U);
    msg.setDestination(47677U);
    msg.setDestinationEntity(156U);
    msg.timeout = 28662U;
    msg.flags = 187U;
    msg.lat = 0.7193667268322366;
    msg.lon = 0.7950499045871929;
    msg.start_z = 0.1538468133281713;
    msg.start_z_units = 118U;
    msg.end_z = 0.6873351452909197;
    msg.end_z_units = 87U;
    msg.radius = 0.7096025623172814;
    msg.speed = 0.6081628172599529;
    msg.speed_units = 114U;
    msg.custom.assign("YVJPSFZXGXVOGZYLWECNNUGPQDBUSVWGNFWDGJJUPVUESAAPCHIJFCGDZOWDDJYXNKEYGTHQINCONWDJTLSLCH");

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
    msg.setTimeStamp(0.6194468567526186);
    msg.setSource(37193U);
    msg.setSourceEntity(19U);
    msg.setDestination(19052U);
    msg.setDestinationEntity(214U);
    msg.timeout = 44400U;
    msg.flags = 140U;
    msg.lat = 0.40729384605318153;
    msg.lon = 0.6660943292336134;
    msg.start_z = 0.9197364492028531;
    msg.start_z_units = 145U;
    msg.end_z = 0.11850829003079699;
    msg.end_z_units = 77U;
    msg.radius = 0.13238080460353163;
    msg.speed = 0.7751298445669451;
    msg.speed_units = 10U;
    msg.custom.assign("LMAJQWMWVJQECAVOAEEFNGXHQUGWCDWITUBJUXSRIESDERACHE");

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
    msg.setTimeStamp(0.4394733027602049);
    msg.setSource(20120U);
    msg.setSourceEntity(16U);
    msg.setDestination(61519U);
    msg.setDestinationEntity(83U);
    msg.timeout = 36399U;
    msg.flags = 180U;
    msg.lat = 0.6363963105849627;
    msg.lon = 0.95653658113883;
    msg.start_z = 0.5004722228291801;
    msg.start_z_units = 159U;
    msg.end_z = 0.7247657990313686;
    msg.end_z_units = 18U;
    msg.radius = 0.20753113963793368;
    msg.speed = 0.9537559362237518;
    msg.speed_units = 94U;
    msg.custom.assign("FJSTWSKOZUXQNRVKDTCMIXTRWQVQSCHFCBJROIKGEEARMPXGLPSLPDHIKJYYYMETSLHAPAVAAHZASBYWTFRUPKPCVQVQDYOEUZJFDNWDJALCJBUSIDMZXXPUECKYNBHIBMLMWHQPLGIWTGWOQXNFEMUZV");

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
    msg.setTimeStamp(0.3131520183028085);
    msg.setSource(26307U);
    msg.setSourceEntity(89U);
    msg.setDestination(24370U);
    msg.setDestinationEntity(48U);
    msg.timeout = 58071U;
    msg.lat = 0.8712140321284185;
    msg.lon = 0.289151323309512;
    msg.z = 0.815795036137463;
    msg.z_units = 184U;
    msg.speed = 0.9912636756258193;
    msg.speed_units = 0U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.375143832824716;
    tmp_msg_0.y = 0.9697033431883391;
    tmp_msg_0.z = 0.018153698284400832;
    tmp_msg_0.t = 0.997022184931314;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DWXTTMPRVHSKNZUUUYDNXYMYYAHDEGJALGZOPTDLZRQNJB");

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
    msg.setTimeStamp(0.2132792552239855);
    msg.setSource(46034U);
    msg.setSourceEntity(236U);
    msg.setDestination(1644U);
    msg.setDestinationEntity(150U);
    msg.timeout = 7664U;
    msg.lat = 0.4844572755019253;
    msg.lon = 0.051816923565987216;
    msg.z = 0.6958643993404275;
    msg.z_units = 112U;
    msg.speed = 0.8569083534926005;
    msg.speed_units = 252U;
    msg.custom.assign("CNKXIHGHAPAYKZNHNQDRWFJIUGTUVHPYZXFWNHMXQMXHLATZPCIFWWAQKRYTODPRWZDICUNJVKBXPCSEWAILDTXXBMQFYTEUAJHEFZGGLVDYLWUPLOGCEMZKVNMQGCEVMGORIJBCMJKFTLKVRQIYLLSRSZDXDRNZJOTBVBYGNOXDTVBINSFSBSFEFPIAETMULJAVYUWIMOGEHURKGNHHJEBOBQOJW");

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
    msg.setTimeStamp(0.1707885968512446);
    msg.setSource(46959U);
    msg.setSourceEntity(181U);
    msg.setDestination(9956U);
    msg.setDestinationEntity(222U);
    msg.timeout = 37845U;
    msg.lat = 0.7514219625964524;
    msg.lon = 0.3489703056983745;
    msg.z = 0.26680294327469967;
    msg.z_units = 33U;
    msg.speed = 0.42964837036712256;
    msg.speed_units = 136U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8615521463510365;
    tmp_msg_0.y = 0.7326043864267525;
    tmp_msg_0.z = 0.229923722639375;
    tmp_msg_0.t = 0.09726812832133591;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QMTHORKOPIBLVQYFCCYULFXQDADAIQDPJVMHGWAFRJNSTMCSGYEOSKFOBOOYKKJZLCHNYQTKFTWHLZBZTEAYUZIVFQZFWGHKBRIPMLW");

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
    msg.setTimeStamp(0.9041094808299538);
    msg.setSource(65179U);
    msg.setSourceEntity(95U);
    msg.setDestination(23772U);
    msg.setDestinationEntity(18U);
    msg.x = 0.713937823875401;
    msg.y = 0.9165567708330795;
    msg.z = 0.0684736079831646;
    msg.t = 0.24958498906921167;

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
    msg.setTimeStamp(0.21230537241953795);
    msg.setSource(22184U);
    msg.setSourceEntity(101U);
    msg.setDestination(37065U);
    msg.setDestinationEntity(33U);
    msg.x = 0.6654230798046221;
    msg.y = 0.04849692527639016;
    msg.z = 0.0598299498499012;
    msg.t = 0.8388514142556076;

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
    msg.setTimeStamp(0.042155078061039575);
    msg.setSource(13775U);
    msg.setSourceEntity(18U);
    msg.setDestination(32120U);
    msg.setDestinationEntity(141U);
    msg.x = 0.9430226459054796;
    msg.y = 0.2666718338519519;
    msg.z = 0.7879110757658815;
    msg.t = 0.2777781712702124;

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
    msg.setTimeStamp(0.5639388239937441);
    msg.setSource(55428U);
    msg.setSourceEntity(114U);
    msg.setDestination(10650U);
    msg.setDestinationEntity(97U);
    msg.timeout = 56194U;
    msg.name.assign("MGVPJCXJHVCKTGBWUKBEZRJMTFYIRGPCKZZBMJKPMKUPYSWFQEVWUORCEEWNOUYKGVDQKAASLA");
    msg.custom.assign("TDPTHUUTLXGVDWYEPBNGAFKMPZISUVOXUSDNBILJVTNZGOHPHOYFGFNJGXRHJSREWXVBQMHPRQYZHJBRABEHONVDWHCTREUKMANIOETGSQUQRFCPTPCXBSSSCYJHAECJBNBZFQLYWVLPQLWNKUMWDCQDBUSWLKZOEYNDAXAJVFL");

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
    msg.setTimeStamp(0.8640965697950841);
    msg.setSource(40598U);
    msg.setSourceEntity(253U);
    msg.setDestination(45749U);
    msg.setDestinationEntity(201U);
    msg.timeout = 11458U;
    msg.name.assign("RGCWDQQIOXAEQDTYONKBSPIOWUKEYCXVIAZTRHMLEMZGLBSYJXQWFJRUXULNEYHCLAKPOLLFVDGSGFGXUBWOBLWGYMGSCFNQNYUKOTRWTIQURDDYHAXNAFPIWKHLSPSJUMBASCZSWLTRHVCCYRJJBQVMHSTGONAQDJMV");
    msg.custom.assign("MAIONTZOWZJWZJFJXWGCKNKROJTFZKHFRPVPYPGXZZXLSMISGVOMXNRBCBADPDDSCURRWQYFTTGE");

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
    msg.setTimeStamp(0.9986128141524642);
    msg.setSource(32399U);
    msg.setSourceEntity(2U);
    msg.setDestination(15259U);
    msg.setDestinationEntity(227U);
    msg.timeout = 49516U;
    msg.name.assign("KFEUEGSDBTHSQDOXSPVJYHGHZVGBJOVCTBYGRGMRCNSZCBTOCBEXMACPNSHPITRLZVYIFXHRMGRXEKXFOQUNLPAFNWTTISFZUVWBAQYFWPLSZELYSXZPYLCUNWIIYJPNDZGFHXLWDUKZQRWRKKJRCDGVDDLPUWKHXIVAXMEMOUUJBD");
    msg.custom.assign("PZDHDBUBMBTLSBIQPWDYYYQEFECQDJCVIOISCACUTOXUODYVZZVMSMFFXUTMDZYHNHSIAFSZPHWBWJUQOVXQEXNKZPTXJMMLVREGRVWFLCHSFKLPSIMIDWGCOUUBYKNGAGXWWLJVBLREJDZDHOSRGBMPOHMLTLOFKTRVPQALQHYXNATRSBEZJNRXBSKXGIIGLEWWAYRRPAUKHCAHUJNFVQEDJVEITNGJ");

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
    msg.setTimeStamp(0.8918875782588049);
    msg.setSource(21123U);
    msg.setSourceEntity(243U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.8011361012656755;
    msg.lon = 0.14931970592333965;
    msg.z = 0.936026912622442;
    msg.z_units = 236U;
    msg.speed = 0.149098494925045;
    msg.speed_units = 25U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45050U;
    tmp_msg_0.off_x = 0.51310723638164;
    tmp_msg_0.off_y = 0.5583412110914375;
    tmp_msg_0.off_z = 0.7760241138234466;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5682688645448297;
    msg.custom.assign("ZPWFVATCSIBVTVPXEDAGGMXTHPQFQLPGRQOWSIELADTJPFHPODRGAXHKQWINZQHUEKFYUGTIRTHVWMGSNNLOIGS");

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
    msg.setTimeStamp(0.525550818044767);
    msg.setSource(28592U);
    msg.setSourceEntity(254U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.0814703257886834;
    msg.lon = 0.3112845453942128;
    msg.z = 0.599190868358924;
    msg.z_units = 84U;
    msg.speed = 0.7541213098793339;
    msg.speed_units = 0U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64806U;
    tmp_msg_0.off_x = 0.8631893263949016;
    tmp_msg_0.off_y = 0.9307020763422462;
    tmp_msg_0.off_z = 0.7421530482649877;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.45986202073705296;
    msg.custom.assign("ERHPNWJIJOTDEWVFEPKZKBCTERQOGYTMAYAFGIHXLVHBELSIFIOIXQZLHDMYWSKOVBEUZQCUURRPXBIEZMVKATJBPJLTJMQGMYGQKAZQHFLJZYSLXDIKFVNFPY");

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
    msg.setTimeStamp(0.3711721402479715);
    msg.setSource(23217U);
    msg.setSourceEntity(1U);
    msg.setDestination(57038U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.5941283560171529;
    msg.lon = 0.737872712574065;
    msg.z = 0.46610815988366516;
    msg.z_units = 145U;
    msg.speed = 0.3454974775056867;
    msg.speed_units = 83U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29801U;
    tmp_msg_0.off_x = 0.7135449175272895;
    tmp_msg_0.off_y = 0.9726468919564345;
    tmp_msg_0.off_z = 0.7722776359006531;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5812552512519875;
    msg.custom.assign("PFQMSRNHHUWAKDSLJRCDLXQTXAZAWKPZBNFXBRIVTUSAXBMWNBIUEVSESFLMMGHTZZUKV");

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
    msg.setTimeStamp(0.4569295565073441);
    msg.setSource(50174U);
    msg.setSourceEntity(97U);
    msg.setDestination(49355U);
    msg.setDestinationEntity(188U);
    msg.vid = 8770U;
    msg.off_x = 0.27818674002752664;
    msg.off_y = 0.024277385669952523;
    msg.off_z = 0.033642695237204645;

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
    msg.setTimeStamp(0.988896058982419);
    msg.setSource(45821U);
    msg.setSourceEntity(14U);
    msg.setDestination(5729U);
    msg.setDestinationEntity(112U);
    msg.vid = 53460U;
    msg.off_x = 0.14222609247831908;
    msg.off_y = 0.4188276650031797;
    msg.off_z = 0.8783869017413308;

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
    msg.setTimeStamp(0.6318166062209211);
    msg.setSource(16941U);
    msg.setSourceEntity(225U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(22U);
    msg.vid = 51711U;
    msg.off_x = 0.3010458468764239;
    msg.off_y = 0.7717554340236388;
    msg.off_z = 0.09413479948337189;

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
    msg.setTimeStamp(0.5755300294413198);
    msg.setSource(49499U);
    msg.setSourceEntity(123U);
    msg.setDestination(20218U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.9757236197644413);
    msg.setSource(22359U);
    msg.setSourceEntity(200U);
    msg.setDestination(21145U);
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
    msg.setTimeStamp(0.7168519066744801);
    msg.setSource(32786U);
    msg.setSourceEntity(132U);
    msg.setDestination(898U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.4949975423590708);
    msg.setSource(6107U);
    msg.setSourceEntity(157U);
    msg.setDestination(39708U);
    msg.setDestinationEntity(59U);
    msg.mid = 50613U;

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
    msg.setTimeStamp(0.35387443026188925);
    msg.setSource(19279U);
    msg.setSourceEntity(192U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(66U);
    msg.mid = 15902U;

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
    msg.setTimeStamp(0.8688328295717549);
    msg.setSource(17536U);
    msg.setSourceEntity(155U);
    msg.setDestination(44396U);
    msg.setDestinationEntity(182U);
    msg.mid = 40728U;

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
    msg.setTimeStamp(0.19753067410084457);
    msg.setSource(23984U);
    msg.setSourceEntity(123U);
    msg.setDestination(45571U);
    msg.setDestinationEntity(64U);
    msg.state = 46U;
    msg.eta = 18394U;
    msg.info.assign("SQJBTTQXYHCKHMDEJSEOIBNPKQXZZVYXALFEBICDTPKDRHIUPKFDVZXQXPCZSWEFIIRSCUSVMQOFJAZJWSYBTGATDXDCREHWWQPUBNUSMWNXUNOJVKUUFYUGKGPVQGVYMJTBGKXUACNDHOBVNAOIIQXLZHOJGYJRRDHLARRGGTJZCYBPFFBIEELJROHWSLAXILMYSFGGPAMNUDWFLMP");

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
    msg.setTimeStamp(0.6560522328836733);
    msg.setSource(9459U);
    msg.setSourceEntity(177U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(91U);
    msg.state = 164U;
    msg.eta = 20874U;
    msg.info.assign("HFZEJZNUZXFLAMDPTILH");

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
    msg.setTimeStamp(0.37933354749695236);
    msg.setSource(60027U);
    msg.setSourceEntity(190U);
    msg.setDestination(11643U);
    msg.setDestinationEntity(238U);
    msg.state = 121U;
    msg.eta = 42853U;
    msg.info.assign("OVUWBRUNKQAGUKZHMLEBWDCFQBYBOHKPGSDMUMAKLFXIHIEJNFKWOVCVTWRVMPXMFQRLLTMTXTEYZAZTGOPUVPTYASKYTUGITDALQGWWSBPIPGCQQJTZJNXWAVFKXPVPRFEGSNBXECRUFZSJSWJQEJLILVHQRKYXGADIUYDQCDEURZMHBNAGUXMSDIYRJOZEOOTJCNPNIFXHLXLZVMSJLEHWBDNBHZIFMHKCJWPYASGYCCRBCVAOHSYNO");

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
    msg.setTimeStamp(0.7225512048479723);
    msg.setSource(25041U);
    msg.setSourceEntity(216U);
    msg.setDestination(63720U);
    msg.setDestinationEntity(85U);
    msg.system = 64234U;
    msg.duration = 62233U;
    msg.speed = 0.17277959354711248;
    msg.speed_units = 3U;
    msg.x = 0.4954485898710864;
    msg.y = 0.9741310226190093;
    msg.z = 0.2029248075824318;
    msg.z_units = 223U;

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
    msg.setTimeStamp(0.7475222476462385);
    msg.setSource(18570U);
    msg.setSourceEntity(107U);
    msg.setDestination(43190U);
    msg.setDestinationEntity(128U);
    msg.system = 50558U;
    msg.duration = 53640U;
    msg.speed = 0.2905971496332713;
    msg.speed_units = 45U;
    msg.x = 0.09207830512315607;
    msg.y = 0.23941236972474278;
    msg.z = 0.803524718944732;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.06464056589051503);
    msg.setSource(51588U);
    msg.setSourceEntity(173U);
    msg.setDestination(10163U);
    msg.setDestinationEntity(147U);
    msg.system = 56986U;
    msg.duration = 51351U;
    msg.speed = 0.29948288937987955;
    msg.speed_units = 75U;
    msg.x = 0.8771819445077247;
    msg.y = 0.3964178852342817;
    msg.z = 0.8719027517046931;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.7431365567244621);
    msg.setSource(61594U);
    msg.setSourceEntity(152U);
    msg.setDestination(278U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.790052834327936;
    msg.lon = 0.37045342919631696;
    msg.speed = 0.04368854066447991;
    msg.speed_units = 71U;
    msg.duration = 47750U;
    msg.sys_a = 30836U;
    msg.sys_b = 17015U;
    msg.move_threshold = 0.2975604501753216;

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
    msg.setTimeStamp(0.7758690524077589);
    msg.setSource(964U);
    msg.setSourceEntity(117U);
    msg.setDestination(19476U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.14397498266865882;
    msg.lon = 0.3899663088145897;
    msg.speed = 0.8048659931134341;
    msg.speed_units = 63U;
    msg.duration = 59585U;
    msg.sys_a = 7136U;
    msg.sys_b = 61307U;
    msg.move_threshold = 0.08543360391129406;

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
    msg.setTimeStamp(0.974112810109548);
    msg.setSource(51561U);
    msg.setSourceEntity(212U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.8972292182444851;
    msg.lon = 0.40990992187215525;
    msg.speed = 0.2536394348046419;
    msg.speed_units = 24U;
    msg.duration = 7938U;
    msg.sys_a = 50280U;
    msg.sys_b = 63668U;
    msg.move_threshold = 0.03926599603527414;

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
    msg.setTimeStamp(0.6486487466530794);
    msg.setSource(50176U);
    msg.setSourceEntity(48U);
    msg.setDestination(45138U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.9611145462462547;
    msg.lon = 0.4861455561925496;
    msg.z = 0.8566445140715501;
    msg.z_units = 198U;
    msg.speed = 0.7828240050766284;
    msg.speed_units = 159U;
    msg.custom.assign("UKBEZZLPDURJKINMVXALMYTLUTGVXDBQSSJIOXYRFZIPODSKZVFGCNNCGUXU");

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
    msg.setTimeStamp(0.2455835655540448);
    msg.setSource(39989U);
    msg.setSourceEntity(102U);
    msg.setDestination(3036U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.5871162290183611;
    msg.lon = 0.14378563894279617;
    msg.z = 0.9161653968133876;
    msg.z_units = 181U;
    msg.speed = 0.6275323076459999;
    msg.speed_units = 116U;
    msg.custom.assign("OHRKXMBNURHTKEVSWRAVMMHKRJUTECKPGUFDTISXEJPLWVACBZRLJJMUKOUPNGTFJHNOCVVDNNLKLPLHEGDCXCCYLPRPUEYQDQTQRZMLBQQOUGFGQPFWRAMNHOBHIKFDDSE");

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
    msg.setTimeStamp(0.9816183799535216);
    msg.setSource(58263U);
    msg.setSourceEntity(0U);
    msg.setDestination(29929U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.8002247486769455;
    msg.lon = 0.25626016508104477;
    msg.z = 0.43597836053084893;
    msg.z_units = 146U;
    msg.speed = 0.961619386885909;
    msg.speed_units = 41U;
    msg.custom.assign("SLZUZGDNBQPOAXXCNWHMRPBSQDMECPOVGMRJWHADJYRFRXQHWIBHEJBDSUTTAWOVEQKYFOBKHWCUUMQXPGTESXEQCFDKEPLBZGKLWTPPSSJNVEOMZUARUIYADOMCAPBJPYBZJBQTYRQMJDVIREXSFKATJYTLIYNONVFDXNKZBXSHLHURDIARKOGDGYACXLNUIQVFZPGWYYCUMCAIIRIMFNCLFLXQGTVFWLHCMVKVOTKEGSHJTUKFZENIZNHO");

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
    msg.setTimeStamp(0.13073952589853366);
    msg.setSource(48796U);
    msg.setSourceEntity(245U);
    msg.setDestination(4106U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.5845485716056367;
    msg.lon = 0.14987704340135666;

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
    msg.setTimeStamp(0.6592003853967381);
    msg.setSource(44876U);
    msg.setSourceEntity(152U);
    msg.setDestination(33840U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.8001763852478403;
    msg.lon = 0.8210433595574785;

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
    msg.setTimeStamp(0.18757806585000514);
    msg.setSource(60217U);
    msg.setSourceEntity(96U);
    msg.setDestination(51356U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.04150718173135137;
    msg.lon = 0.9588117177500615;

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
    msg.setTimeStamp(0.6541864558244292);
    msg.setSource(3812U);
    msg.setSourceEntity(163U);
    msg.setDestination(19204U);
    msg.setDestinationEntity(151U);
    msg.timeout = 58012U;
    msg.lat = 0.925999516225332;
    msg.lon = 0.5012959621679146;
    msg.z = 0.9006263097510193;
    msg.z_units = 48U;
    msg.pitch = 0.3515860359685491;
    msg.amplitude = 0.8446159144422345;
    msg.duration = 26401U;
    msg.speed = 0.7871106756161432;
    msg.speed_units = 210U;
    msg.radius = 0.05959214473229557;
    msg.direction = 230U;
    msg.custom.assign("TUOQMXGEXKYVGDLOPQUWPSCELCPPATTNIXIUPEASQQBDKMLRHGINZGYICCBFDDWHULWHLYFTJHMCIYYLMVFTKJERFSZHZ");

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
    msg.setTimeStamp(0.4101950210089993);
    msg.setSource(1853U);
    msg.setSourceEntity(215U);
    msg.setDestination(14332U);
    msg.setDestinationEntity(90U);
    msg.timeout = 21947U;
    msg.lat = 0.39545243671138475;
    msg.lon = 0.443670823452195;
    msg.z = 0.5149953774775524;
    msg.z_units = 30U;
    msg.pitch = 0.9147423908575849;
    msg.amplitude = 0.9362694194081768;
    msg.duration = 25730U;
    msg.speed = 0.10446439581348888;
    msg.speed_units = 82U;
    msg.radius = 0.8450172045478942;
    msg.direction = 169U;
    msg.custom.assign("WMSJYEQWQDYRBRDLPNVKXLEZOZAGXCGNMJITLMSFCJZMBTRHZJYCRNOGLGUIBSWKHYYKKZHVPBQAAEJVIUSVFWDGPPCYOIHIFNZITNVYCDOUBRALHPEEMDMQXSPFFCDAKXWBGTFENUCKCTLJZQXSCPLQJSOBOUYILPWRUJLIHFARYXBMRIVOWDJRKNETVAUUBOOTGRH");

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
    msg.setTimeStamp(0.9703609611278483);
    msg.setSource(10669U);
    msg.setSourceEntity(107U);
    msg.setDestination(47385U);
    msg.setDestinationEntity(171U);
    msg.timeout = 8295U;
    msg.lat = 0.5215522413293733;
    msg.lon = 0.34988310144966384;
    msg.z = 0.8127099535224092;
    msg.z_units = 200U;
    msg.pitch = 0.7285066165784038;
    msg.amplitude = 0.8099521568730991;
    msg.duration = 22388U;
    msg.speed = 0.8176081470466788;
    msg.speed_units = 241U;
    msg.radius = 0.3217217525303321;
    msg.direction = 228U;
    msg.custom.assign("XOOKEUGPDVHGUWABGPEZAUZTUQJMUSWCBZOQBCPFISXWEGZARNPMEJKMWLBFTBJOJLTOLXQS");

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
    msg.setTimeStamp(0.11180256987097859);
    msg.setSource(64300U);
    msg.setSourceEntity(39U);
    msg.setDestination(8513U);
    msg.setDestinationEntity(235U);
    msg.formation_name.assign("WJCYYWBBFBXJZIZSJFKZJFOICAAXWKAQPRLJHUSILCXDKOTYPSQGNXLADMSPPPGOIJOQSQYVWHBHHPJGLMANVCMWXUXAMTUHGDRNEWZMLIHXNNOTFXUAICMNVX");
    msg.reference_frame = 88U;
    msg.custom.assign("ZPTQZUJMRSTLSHTPFXSBHNZVKJATUJEKCYASFKLMMJAXTIELWMTKBNGVGUCPZINQPOQWVCAXDRBIJBFFUWBKHYGY");

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
    msg.setTimeStamp(0.46923088812854563);
    msg.setSource(11925U);
    msg.setSourceEntity(31U);
    msg.setDestination(57419U);
    msg.setDestinationEntity(90U);
    msg.formation_name.assign("RAZNXOUYKDTKPDLNWSFEMGBLPBXHZFXCQFXVJHQPXTDYPEPUZDTKATMHKXWOCQVSDRVPVAAHBWSNFVNKHCGZEKSQUNWBNZFWBLLVMLHFGEQLOYPITSXGLNRMYQMSKWQHUBWESQMEDTJOWCKCIIYYSUJVRUQHFBZSDRFKGNAKFZOEPVCXI");
    msg.reference_frame = 16U;
    msg.custom.assign("YFHUQSECHLGTRQVHJJCABXHJVPKSINIIEUOLXYFIMUIHIJRBEYDIZPZDKWMKMHFOELOFWGGBFYMDXVFLXHNYRZUOVCOVEAASVHVTZLLWUNJDGSQXUTLNCPQNWOBBDMPWINFBKNTSRGVWOKIKUOWPKZRTADKDXXFDKRHHNTMANGKAPCGJTERBQEPSAECOLWTUCRFGREZZBFBXQZNJMEYQVQYYOQZTJPAIJSMPVMAZLUMPSAYCSYGSD");

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
    msg.setTimeStamp(0.21594026644161324);
    msg.setSource(61517U);
    msg.setSourceEntity(178U);
    msg.setDestination(21595U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("RGXUHZFXRRHOKNWKA");
    msg.reference_frame = 115U;
    msg.custom.assign("UAQBMRHMTRTUETCADIXCRBNWLKXRFUZFJKAWJXBKROPESGJVWWHYMDDWQSXZEPRYAINGMLHCPJPEOGSMAYCGHNHEWSNSRIULIKELCVODABMFMLDAYZMWRIKAZXTPLBNOLKVDFQOVWXNITGEDQFVOUEVGJJLZQQIHNYWBPWFCDUSKZYETBTIBXGQBLHDVRNQXGYCCMUJSFYQJUUTVZAVPJAJOOYRNXNGOZHUXPFF");

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
    msg.setTimeStamp(0.34216339743103696);
    msg.setSource(56886U);
    msg.setSourceEntity(106U);
    msg.setDestination(33833U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("POMNPEEGFUHEDWXINLUFIDWLCFLXACJSRURDVGQCLIURNGUXPHWOLZTGKQXKXDPSRSKIFAJVGYOAFGJS");
    msg.formation_name.assign("PLLZIELLEGRJMEKKTCUBWXYDFMVBGYDYMOFQZVUA");
    msg.plan_id.assign("SFTVYLNAACGKDNIBFYAPVKOOMFDPSJITMVIZZNLFDVROCJEMHNNXLCZPRPZDYOLKXCSTQATBZWIBDBEXDWJJOTYQXWWPMWMTIAWQOMOLSIXAHFHRHEZUDHCFQYQLKVNYSAIUX");
    msg.description.assign("VYTERZYKMRFTTAAROSRWALIVEFFZWKIKJMOWFYZLKDIZZBAASQATGGYIVDYT");
    msg.leader_speed = 0.4273360013742096;
    msg.leader_bank_lim = 0.4776638235350268;
    msg.pos_sim_err_lim = 0.4824056700396704;
    msg.pos_sim_err_wrn = 0.24230339140293466;
    msg.pos_sim_err_timeout = 4163U;
    msg.converg_max = 0.6622313057577927;
    msg.converg_timeout = 30574U;
    msg.comms_timeout = 31387U;
    msg.turb_lim = 0.2618641637035741;
    msg.custom.assign("DWXUURYUGLOICRCRPZEWLLLDCQFFEGEZFYTZGH");

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
    msg.setTimeStamp(0.3755197803439252);
    msg.setSource(32485U);
    msg.setSourceEntity(22U);
    msg.setDestination(10123U);
    msg.setDestinationEntity(223U);
    msg.group_name.assign("QRSFMIDSCWFMABBPAOMJKDWEDYNJZXJDPKEWSFYTVUGKNK");
    msg.formation_name.assign("VUFNPHACMKXEAEWHRQEQQVQOFGFNJUKSVSNEVGJXSCIYKLZBCHBGAJXVWFURZXMIYDVBLHWROSYBCOPBXNKTXSKFTCBHJEZGUSHDSRWVTNMNEOBZBIZSARKDXAGPIPTVCFWUWCRZQKGATYQPOPUTZLYTDQWFBWIGDTHACERPWYLFYKLUNIOEXPJILECPDHYNJKJMQMXATQIYDUYGFLSGOMFWMQAJOLZHDSUTRRMBDJXLUHZLN");
    msg.plan_id.assign("GFYFFMOSRDDWKVLGYWBSVECJKXVTSELDQXUEPPFYYQBQCKXRNUKCUOFYUFOCXAGRSUEJNWAWKBMXTRKQDHJRBBLHQBOVEQEIBIYTQFSMDHPWKNUPSNAJJOXZNXTCITYACJWJSUAZXMZMZMXHYVAFUNBWSXGGLJUNEHRFBGSLTVPNKIADCZPZZOOODYCGVHHWRZFPIHIHPPOMGULWQMNEJTCNAIWJLDIVLBR");
    msg.description.assign("ZXGHWTXYHDLNSRCZKJGAGMUVYUJDWZHQIVRNHVJSVSKXABKDFJGIWPLWBCXGXATV");
    msg.leader_speed = 0.18775965091689528;
    msg.leader_bank_lim = 0.6129006106548763;
    msg.pos_sim_err_lim = 0.8826781398536298;
    msg.pos_sim_err_wrn = 0.2430247652193922;
    msg.pos_sim_err_timeout = 41053U;
    msg.converg_max = 0.9137491995061194;
    msg.converg_timeout = 47848U;
    msg.comms_timeout = 17669U;
    msg.turb_lim = 0.25028349322916554;
    msg.custom.assign("RIRDGULWWJMGBCDWNJYAWKUXMQZBPKJQKYZQRCIWDJYLFIILFPMSLUOZDECWVMDMEZLBCASGZBXWTTSXPSKRWATHNLEKXCQXTHJ");

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
    msg.setTimeStamp(0.4173281884623721);
    msg.setSource(10321U);
    msg.setSourceEntity(44U);
    msg.setDestination(43737U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("TAJAVLOCKXCDFFPFZRFTFGNNHXMTODPEMZWHIITEVGVQFVAFQJDAGSEULBWHHEDZPNBWEKMPNGHZGZKSRHSKVDOQCMZECIUYFWSIVKKVLSBIMRFCXXUJIQYZYGHSCMBVRXXTOUUYAXYFVBJAZRGINEKSGLELQAJBSTJNXKSPVADYRRLLASKJEMUEBRCPWOZJMU");
    msg.formation_name.assign("JXSOQJRGKGEIYRXWCKDSROQHXMSVHBADPAMJRRMXZAPVCHBFFSLWNLUWYRRFVFEUIYUKSISTSMNLTLNPNGGIUPWCKTOUVESGPUUZCTXEUZWVQBAADKPHRTEKTRHFLWJUOBJZTMFIBBAWOO");
    msg.plan_id.assign("ULBCPSWIZLCVYDRVAXMRAAFDDQWMKIHREYFKLGYUJGQNBOPUFWAGZDKSQWHPOORSMFMXZNSTUTOXNOFMJBVCBWEHDMQBNNUVFYJEDPAGHTXZKSU");
    msg.description.assign("GBIWBWINPQFIJITRUFDHNETSVORJYTIUAMUHKDACVKUZMKKVXAJOGVPYUCSKHBBZZGCTENXRBDJTVXQPODCNPHCMFHNLRYCUQXMANYZ");
    msg.leader_speed = 0.06392077982298827;
    msg.leader_bank_lim = 0.8882714317085362;
    msg.pos_sim_err_lim = 0.20677302464537395;
    msg.pos_sim_err_wrn = 0.777761669748648;
    msg.pos_sim_err_timeout = 17941U;
    msg.converg_max = 0.5051720986183204;
    msg.converg_timeout = 55369U;
    msg.comms_timeout = 20192U;
    msg.turb_lim = 0.7517118700218176;
    msg.custom.assign("EZAWGQPVYKFXSZLFOFUISDYSMVVKNXSKPHOXWJXGXOBENEZMDICRNBUBOLRYTYDOSMMPXRUZTGDLVVZEMKTDPCMZVFJIXWAPUKTONPEKJMCQCCDFKIUWQJTEZRIHGGFFNJBAIPREQDWQFHBNONUVOVEHTLKPGDAMAYSUTGXBCQAAQMEYCA");

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
    msg.setTimeStamp(0.98450198290456);
    msg.setSource(26906U);
    msg.setSourceEntity(73U);
    msg.setDestination(9523U);
    msg.setDestinationEntity(65U);
    msg.control_src = 355U;
    msg.control_ent = 73U;
    msg.timeout = 0.05587954268729323;
    msg.loiter_radius = 0.15674241117581067;
    msg.altitude_interval = 0.3316443679885758;

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
    msg.setTimeStamp(0.5445329415036747);
    msg.setSource(18830U);
    msg.setSourceEntity(192U);
    msg.setDestination(56205U);
    msg.setDestinationEntity(205U);
    msg.control_src = 25943U;
    msg.control_ent = 226U;
    msg.timeout = 0.15535457210705061;
    msg.loiter_radius = 0.6324338245361553;
    msg.altitude_interval = 0.7685747791268653;

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
    msg.setTimeStamp(0.7113979455892036);
    msg.setSource(44330U);
    msg.setSourceEntity(30U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(17U);
    msg.control_src = 13262U;
    msg.control_ent = 8U;
    msg.timeout = 0.25988021135853767;
    msg.loiter_radius = 0.4257511392254961;
    msg.altitude_interval = 0.2415816818068468;

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
    msg.setTimeStamp(0.5473858500644148);
    msg.setSource(27613U);
    msg.setSourceEntity(54U);
    msg.setDestination(46398U);
    msg.setDestinationEntity(239U);
    msg.flags = 170U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.44707215275082424;
    tmp_msg_0.speed_units = 30U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9930570496598763;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4625053466337934;
    msg.lon = 0.7828037349920786;
    msg.radius = 0.8658048465127118;

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
    msg.setTimeStamp(0.1303473328299436);
    msg.setSource(11003U);
    msg.setSourceEntity(86U);
    msg.setDestination(13296U);
    msg.setDestinationEntity(208U);
    msg.flags = 45U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2619292247539756;
    tmp_msg_0.speed_units = 75U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3752979710864346;
    tmp_msg_1.z_units = 243U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8133014436372473;
    msg.lon = 0.8335068140601753;
    msg.radius = 0.4020253459604831;

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
    msg.setTimeStamp(0.35165734970233153);
    msg.setSource(9450U);
    msg.setSourceEntity(225U);
    msg.setDestination(13850U);
    msg.setDestinationEntity(215U);
    msg.flags = 156U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.047444977950172995;
    tmp_msg_0.speed_units = 33U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8394325598665251;
    tmp_msg_1.z_units = 58U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.867720497815548;
    msg.lon = 0.8664431424314354;
    msg.radius = 0.9290634855936563;

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
    msg.setTimeStamp(0.4019184960406631);
    msg.setSource(2821U);
    msg.setSourceEntity(201U);
    msg.setDestination(7989U);
    msg.setDestinationEntity(54U);
    msg.control_src = 12651U;
    msg.control_ent = 20U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 4U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.15519806754321608;
    tmp_tmp_msg_0_0.speed_units = 67U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.09680991584833509;
    tmp_tmp_msg_0_1.z_units = 56U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5492858645143955;
    tmp_msg_0.lon = 0.790886190577317;
    tmp_msg_0.radius = 0.6455018837394931;
    msg.reference.set(tmp_msg_0);
    msg.state = 187U;
    msg.proximity = 51U;

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
    msg.setTimeStamp(0.15949504529101322);
    msg.setSource(6850U);
    msg.setSourceEntity(180U);
    msg.setDestination(60202U);
    msg.setDestinationEntity(23U);
    msg.control_src = 38667U;
    msg.control_ent = 13U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 33U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.29321233129242075;
    tmp_tmp_msg_0_0.speed_units = 226U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.38195571558569075;
    tmp_tmp_msg_0_1.z_units = 146U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8384628631450614;
    tmp_msg_0.lon = 0.6256676743069214;
    tmp_msg_0.radius = 0.053807138538539245;
    msg.reference.set(tmp_msg_0);
    msg.state = 248U;
    msg.proximity = 235U;

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
    msg.setTimeStamp(0.7745948415478379);
    msg.setSource(17556U);
    msg.setSourceEntity(94U);
    msg.setDestination(54173U);
    msg.setDestinationEntity(173U);
    msg.control_src = 14317U;
    msg.control_ent = 161U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 76U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9051175397909584;
    tmp_tmp_msg_0_0.speed_units = 210U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4161923193438095;
    tmp_tmp_msg_0_1.z_units = 116U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9195057752097849;
    tmp_msg_0.lon = 0.5085145376776598;
    tmp_msg_0.radius = 0.9126988992197428;
    msg.reference.set(tmp_msg_0);
    msg.state = 242U;
    msg.proximity = 10U;

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
    msg.setTimeStamp(0.1538227411630111);
    msg.setSource(23757U);
    msg.setSourceEntity(86U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(62U);
    msg.ax_cmd = 0.6894571272977756;
    msg.ay_cmd = 0.31530502675014316;
    msg.az_cmd = 0.9530197318946854;
    msg.ax_des = 0.8764472154349529;
    msg.ay_des = 0.4833683301025026;
    msg.az_des = 0.8739732805517039;
    msg.virt_err_x = 0.1978774693702069;
    msg.virt_err_y = 0.5393119004350369;
    msg.virt_err_z = 0.10299488211157204;
    msg.surf_fdbk_x = 0.35598462737608405;
    msg.surf_fdbk_y = 0.7886920879755314;
    msg.surf_fdbk_z = 0.9431994540877469;
    msg.surf_unkn_x = 0.13731232908323243;
    msg.surf_unkn_y = 0.9809795368396862;
    msg.surf_unkn_z = 0.9839286483440935;
    msg.ss_x = 0.49905974700713707;
    msg.ss_y = 0.8654710440847397;
    msg.ss_z = 0.03943944052764792;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BCOOTYMNGAKLJRUIXMEBFHLBRQQRHDWAJXYWUOWYYXGSJERCEVEKMJPIIVQKCDXKALTFZDDIVMYZBASEFRYDODKTHGGREKELCSOTDHPSMAJFRSXLTQGOQIJUFPWEEQTLNLWJUCVVUW");
    tmp_msg_0.dist = 0.4386896180371601;
    tmp_msg_0.err = 0.8352190170194093;
    tmp_msg_0.ctrl_imp = 0.4657942125021388;
    tmp_msg_0.rel_dir_x = 0.787623877960836;
    tmp_msg_0.rel_dir_y = 0.9779294026034118;
    tmp_msg_0.rel_dir_z = 0.21697996177600953;
    tmp_msg_0.err_x = 0.988487302738074;
    tmp_msg_0.err_y = 0.337462425168366;
    tmp_msg_0.err_z = 0.9800938813534747;
    tmp_msg_0.rf_err_x = 0.6930977476830972;
    tmp_msg_0.rf_err_y = 0.24685283007277536;
    tmp_msg_0.rf_err_z = 0.253571873710672;
    tmp_msg_0.rf_err_vx = 0.29190989065393047;
    tmp_msg_0.rf_err_vy = 0.857803176224159;
    tmp_msg_0.rf_err_vz = 0.9211772517626433;
    tmp_msg_0.ss_x = 0.07527623001913053;
    tmp_msg_0.ss_y = 0.8223013272991504;
    tmp_msg_0.ss_z = 0.3569105066065229;
    tmp_msg_0.virt_err_x = 0.9628445988170276;
    tmp_msg_0.virt_err_y = 0.41662260509995863;
    tmp_msg_0.virt_err_z = 0.9839223645267583;
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
    msg.setTimeStamp(0.804473956999284);
    msg.setSource(19985U);
    msg.setSourceEntity(61U);
    msg.setDestination(20995U);
    msg.setDestinationEntity(38U);
    msg.ax_cmd = 0.47939859704462173;
    msg.ay_cmd = 0.9030075564124729;
    msg.az_cmd = 0.9725671213978189;
    msg.ax_des = 0.7502033194316089;
    msg.ay_des = 0.4348728582728024;
    msg.az_des = 0.38504937460071786;
    msg.virt_err_x = 0.8404397656801863;
    msg.virt_err_y = 0.08322415195925004;
    msg.virt_err_z = 0.8809435059224581;
    msg.surf_fdbk_x = 0.3231646085445765;
    msg.surf_fdbk_y = 0.5165701914662102;
    msg.surf_fdbk_z = 0.7043677845689329;
    msg.surf_unkn_x = 0.3648863501152283;
    msg.surf_unkn_y = 0.43040153319694896;
    msg.surf_unkn_z = 0.2175425421455509;
    msg.ss_x = 0.2502932237831117;
    msg.ss_y = 0.093536116221134;
    msg.ss_z = 0.9274327570210503;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DBKFQIUKOTFCFRRGUBEGAIVBJFVVSOGZAANGHALRHOWJNYIEGRYSIFUGOPTDMQWMMDPMHIVWQOWLNJRYPKLXBIUZYBGTSVMMWTACAPIZTXRFDQJWXXEZKNCCBLKCJTINEEPCIBVMJLDFESSWBOOTHZDEFZFDXAYAYZO");
    tmp_msg_0.dist = 0.24568794685904793;
    tmp_msg_0.err = 0.5362214529220907;
    tmp_msg_0.ctrl_imp = 0.035501568606790324;
    tmp_msg_0.rel_dir_x = 0.6329691506275666;
    tmp_msg_0.rel_dir_y = 0.3826335131956722;
    tmp_msg_0.rel_dir_z = 0.2265366686639333;
    tmp_msg_0.err_x = 0.8035639303511513;
    tmp_msg_0.err_y = 0.9154412263736282;
    tmp_msg_0.err_z = 0.42093565308567626;
    tmp_msg_0.rf_err_x = 0.3791390143881235;
    tmp_msg_0.rf_err_y = 0.7534765548285846;
    tmp_msg_0.rf_err_z = 0.7659491684101847;
    tmp_msg_0.rf_err_vx = 0.908746619049801;
    tmp_msg_0.rf_err_vy = 0.5211999691101017;
    tmp_msg_0.rf_err_vz = 0.16107280848090633;
    tmp_msg_0.ss_x = 0.27968469928817297;
    tmp_msg_0.ss_y = 0.7408863285145074;
    tmp_msg_0.ss_z = 0.1351932535770961;
    tmp_msg_0.virt_err_x = 0.09340537975250718;
    tmp_msg_0.virt_err_y = 0.6203243735331858;
    tmp_msg_0.virt_err_z = 0.09832435950696883;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.123083271798192);
    msg.setSource(54769U);
    msg.setSourceEntity(186U);
    msg.setDestination(6872U);
    msg.setDestinationEntity(150U);
    msg.ax_cmd = 0.8807049909745515;
    msg.ay_cmd = 0.8687470148635263;
    msg.az_cmd = 0.8224773032962335;
    msg.ax_des = 0.414946614942451;
    msg.ay_des = 0.626938100446497;
    msg.az_des = 0.23201482277871843;
    msg.virt_err_x = 0.7938373982293487;
    msg.virt_err_y = 0.2600701766050564;
    msg.virt_err_z = 0.33002686557248484;
    msg.surf_fdbk_x = 0.7981229932195001;
    msg.surf_fdbk_y = 0.11110577828927304;
    msg.surf_fdbk_z = 0.004482436356449404;
    msg.surf_unkn_x = 0.578476743184817;
    msg.surf_unkn_y = 0.8907723016251573;
    msg.surf_unkn_z = 0.4262373427494005;
    msg.ss_x = 0.33155390403556506;
    msg.ss_y = 0.6864040097134991;
    msg.ss_z = 0.9969275126527051;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XXZKGJJVDSFHPBIWKXDRSOYXBOYTRFVMQDTJCVENOXFZKAEUYVGPJVXEJVUCOGUGNQIXTLBOQMDEPNYBJWTEEYWONQTSFLZAWLZZZSWMVGURPSQKAMRPIRJMLBIAVPTKKSGIUBFBEYCCLMKNLNZCXCLECDNGUADUAWDBQCDVZIUPCTBMHGHYAVHW");
    tmp_msg_0.dist = 0.5924191283287211;
    tmp_msg_0.err = 0.10801755241392508;
    tmp_msg_0.ctrl_imp = 0.5869816842713216;
    tmp_msg_0.rel_dir_x = 0.3352785951177486;
    tmp_msg_0.rel_dir_y = 0.48246188961545833;
    tmp_msg_0.rel_dir_z = 0.3201885221188556;
    tmp_msg_0.err_x = 0.13049374030829441;
    tmp_msg_0.err_y = 0.2456374155335832;
    tmp_msg_0.err_z = 0.37973484194737817;
    tmp_msg_0.rf_err_x = 0.6560980400383207;
    tmp_msg_0.rf_err_y = 0.1610455543295879;
    tmp_msg_0.rf_err_z = 0.8134619850181724;
    tmp_msg_0.rf_err_vx = 0.2669675704015195;
    tmp_msg_0.rf_err_vy = 0.9097999370836706;
    tmp_msg_0.rf_err_vz = 0.17256777231458087;
    tmp_msg_0.ss_x = 0.18518206737034282;
    tmp_msg_0.ss_y = 0.16261552537071522;
    tmp_msg_0.ss_z = 0.47288804866092193;
    tmp_msg_0.virt_err_x = 0.9476954444496027;
    tmp_msg_0.virt_err_y = 0.8334565557863652;
    tmp_msg_0.virt_err_z = 0.3135064202877954;
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
    msg.setTimeStamp(0.16544791959015603);
    msg.setSource(13549U);
    msg.setSourceEntity(211U);
    msg.setDestination(4348U);
    msg.setDestinationEntity(97U);
    msg.s_id.assign("DRRDIQZAPPBIGBKSYMKGFOWTUUITDJCVTXQCMPEEOYQTNGWQOZTEBAMSAYADJRZHMNDILCBZXNVO");
    msg.dist = 0.2294546772991627;
    msg.err = 0.5604897817809043;
    msg.ctrl_imp = 0.3950647001237001;
    msg.rel_dir_x = 0.4401907645618822;
    msg.rel_dir_y = 0.3195962272578894;
    msg.rel_dir_z = 0.36199891028291753;
    msg.err_x = 0.32188896668611455;
    msg.err_y = 0.8007015524125413;
    msg.err_z = 0.704249182031687;
    msg.rf_err_x = 0.7026287184085516;
    msg.rf_err_y = 0.8968035670796533;
    msg.rf_err_z = 0.48519364189116654;
    msg.rf_err_vx = 0.09205803905706778;
    msg.rf_err_vy = 0.22678557907842944;
    msg.rf_err_vz = 0.436836678025067;
    msg.ss_x = 0.11202242293060383;
    msg.ss_y = 0.8282261063797384;
    msg.ss_z = 0.0037041742541830125;
    msg.virt_err_x = 0.5115252427541601;
    msg.virt_err_y = 0.46978945491461765;
    msg.virt_err_z = 0.8974646350303487;

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
    msg.setTimeStamp(0.29060736975154433);
    msg.setSource(34205U);
    msg.setSourceEntity(164U);
    msg.setDestination(60413U);
    msg.setDestinationEntity(106U);
    msg.s_id.assign("VIRJFHCEWRRBTJSAKIBNLPBZHDOZODIVLMVZTWESQUGYSZDUYXTVCHWBUPACKACDRDPYIMGDSQXTKXOBKYGOXJMXOFTQZPSITPHJKKGMNUZUAPYUPE");
    msg.dist = 0.8304650379954687;
    msg.err = 0.08174970981529017;
    msg.ctrl_imp = 0.17661293570056025;
    msg.rel_dir_x = 0.09802040505088028;
    msg.rel_dir_y = 0.053687355933821346;
    msg.rel_dir_z = 0.3978963428937332;
    msg.err_x = 0.9482251151939498;
    msg.err_y = 0.6270440030965525;
    msg.err_z = 0.32184342825230017;
    msg.rf_err_x = 0.38099401326003424;
    msg.rf_err_y = 0.9938707873608339;
    msg.rf_err_z = 0.6556137275183248;
    msg.rf_err_vx = 0.3014814904307699;
    msg.rf_err_vy = 0.5642130147846156;
    msg.rf_err_vz = 0.5566869944462688;
    msg.ss_x = 0.08685069915411958;
    msg.ss_y = 0.8960570479247301;
    msg.ss_z = 0.09666093289835342;
    msg.virt_err_x = 0.12899563996327645;
    msg.virt_err_y = 0.8495258040469097;
    msg.virt_err_z = 0.17682406225842862;

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
    msg.setTimeStamp(0.22084707308959506);
    msg.setSource(1584U);
    msg.setSourceEntity(46U);
    msg.setDestination(32452U);
    msg.setDestinationEntity(99U);
    msg.s_id.assign("NUNEHCGQVJFGWXEBSQEXFZZLPXBUIATVLBBWSBJHEFIKSZAVLJDTPKIQCDYINEGCEFNDNQYIQFHQDXSKWRYMI");
    msg.dist = 0.20876256875073418;
    msg.err = 0.6411482161239265;
    msg.ctrl_imp = 0.5252146624241764;
    msg.rel_dir_x = 0.589011947020557;
    msg.rel_dir_y = 0.8980678233543347;
    msg.rel_dir_z = 0.07756848687425344;
    msg.err_x = 0.03524732959470145;
    msg.err_y = 0.7974945590383639;
    msg.err_z = 0.035057701146655185;
    msg.rf_err_x = 0.5997570550552405;
    msg.rf_err_y = 0.8163902025013668;
    msg.rf_err_z = 0.704710807758143;
    msg.rf_err_vx = 0.641005861312847;
    msg.rf_err_vy = 0.03015051341186903;
    msg.rf_err_vz = 0.4440349171786915;
    msg.ss_x = 0.6580140198416587;
    msg.ss_y = 0.4408117822578248;
    msg.ss_z = 0.9951909564150635;
    msg.virt_err_x = 0.2833112775343102;
    msg.virt_err_y = 0.9833826991708136;
    msg.virt_err_z = 0.6070748459969436;

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
    msg.setTimeStamp(0.2436950754531314);
    msg.setSource(24570U);
    msg.setSourceEntity(21U);
    msg.setDestination(31987U);
    msg.setDestinationEntity(107U);
    msg.timeout = 60343U;
    msg.rpm = 0.3656741902008952;
    msg.direction = 225U;
    msg.custom.assign("BQEIUBTZVQRWSXGQBJ");

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
    msg.setTimeStamp(0.8662432766681863);
    msg.setSource(28524U);
    msg.setSourceEntity(189U);
    msg.setDestination(43419U);
    msg.setDestinationEntity(214U);
    msg.timeout = 23568U;
    msg.rpm = 0.2700560859134028;
    msg.direction = 45U;
    msg.custom.assign("DGOWQWLBSYMXSCOMIPTJCBEQQXSBZRRNTPIOJGMAPCMOLBDALTEERIVIFYWLMPYPZSQAXHJE");

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
    msg.setTimeStamp(0.4831618699925797);
    msg.setSource(16718U);
    msg.setSourceEntity(241U);
    msg.setDestination(27542U);
    msg.setDestinationEntity(186U);
    msg.timeout = 44227U;
    msg.rpm = 0.2030929015987687;
    msg.direction = 51U;
    msg.custom.assign("NXZPNDQWPCEGFTWGILKVNKGOUJMXMSGVXKSZYMAGWCYOPJYAQUMCPDFCWNILIZCTFDNWJTIVTRIUFLHVMTTYWBBESQIPHOEXNQKXLJMDUDJYFETELAXLBVTDSOGAQODOXBXZTVEJPJOCCUAWCMKSFQOFRBCTHSRAYHHUBBGEPYEJYLPKXQZNUIRJIDOAZSHNQAWVKPHRVRDVAJFEWGQRAR");

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
    msg.setTimeStamp(0.08053729494211603);
    msg.setSource(33009U);
    msg.setSourceEntity(85U);
    msg.setDestination(44214U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("MHTMSYCNYLEONRSMJBXLQIIVCTEGUJXZMFCGFCUGIFUBHGKQBHVIOVZPNPATVPUYZHOFYAODIDZEOKLXZKJPBXDSUWXEMJWLCFGMDJJTSBWFQHWXKCWBWPAQDGASNMWQNOAHVQQJBBASDHIKVUHTKMXSZYTEBZGFHRALNRRUGAXNPIOGFIDTSPEQBMVWSPRVCTWJC");
    msg.type = 243U;
    msg.op = 246U;
    msg.group_name.assign("FJTQXSOXIKWVBJBUHVMUWMNCTHZLSVXLF");
    msg.plan_id.assign("HMCFQJCFXSJPDTARQQOCKIFLYNQGFAVZSEXVMDXKYC");
    msg.description.assign("MJBNEGFMXSSCUYKDZDSNLBRQFECJXNLSPSLSAO");
    msg.reference_frame = 23U;
    msg.leader_bank_lim = 0.5860685571001746;
    msg.leader_speed_min = 0.6743953702235796;
    msg.leader_speed_max = 0.913707543352269;
    msg.leader_alt_min = 0.9934946849008143;
    msg.leader_alt_max = 0.8554867331121067;
    msg.pos_sim_err_lim = 0.00884581028792697;
    msg.pos_sim_err_wrn = 0.7506691835038298;
    msg.pos_sim_err_timeout = 51458U;
    msg.converg_max = 0.8997250906966701;
    msg.converg_timeout = 63941U;
    msg.comms_timeout = 54818U;
    msg.turb_lim = 0.5448227099659362;
    msg.custom.assign("EITOLQIPSMEEPYCNZXBNBZJYJDPMKRLEFQQXZZCBKQSMAIWZYWTNRAEYCULFONSUTVWINKOMMFSFODTGJVPJWORPJWZAHXKQUFLIJIPVLDAOLHZTGWERHQNRHXASAFMSSLPWUMNIYGJQJUUTLNNMXRVDKXRGF");

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
    msg.setTimeStamp(0.5660588416544965);
    msg.setSource(7720U);
    msg.setSourceEntity(56U);
    msg.setDestination(4517U);
    msg.setDestinationEntity(138U);
    msg.formation_name.assign("DMUKFWWRCHVYYIMCAFUTLWNUDVUYLEGQYYTUDYJCOQPGNWBGDLEAAATJXLXEPZAAMNDTYZYFLIXKXSEADTIHZCOVFH");
    msg.type = 29U;
    msg.op = 77U;
    msg.group_name.assign("WGKRVOVPCBSRIZKYVFUGOXAMNGUZOGSGUMUQNPXWOITZIPCSSXNXIBMHTYBSHWADZRJTIHLTLOEWPRHVFTLIMHPBNHLGVMRHFJTRSXAHCQZNDVADJFIDADCULUNHKSXXOZIKVUKRAOTJGKBLQTJTFBDBXVCHERZIBPMYKAQNNNEXFUZJWFXMVGQWYPJSNAYCSEYCBROJQEWUOMJWZ");
    msg.plan_id.assign("UEYEJSPBIGBRWVKLCJETRIGGZCXTRNXZYAMSAMYTIBTWMXKUORVUEZFQSLMULW");
    msg.description.assign("PVPGZHLPJQRJJTTNYVMKTHJYCHBGAZUDOWFDDGWSPRYJSFLXGHUZVNUZQUIVTYHIRDKQGRTQAWEWCVYQIAYAKNEYYSWLZWTMXMNGMFQVCASVOCXOQPCKKZLXFAWFRBJGEBLZIIGSEJKOPOACQLNUMSDDFUOACGTOJIFOPINFNOIRBBHXMHWFRSE");
    msg.reference_frame = 134U;
    msg.leader_bank_lim = 0.8346864236700252;
    msg.leader_speed_min = 0.5851559292876918;
    msg.leader_speed_max = 0.12560924018339414;
    msg.leader_alt_min = 0.6601523627427037;
    msg.leader_alt_max = 0.5188833392928199;
    msg.pos_sim_err_lim = 0.019704971834450635;
    msg.pos_sim_err_wrn = 0.5627542446704744;
    msg.pos_sim_err_timeout = 56470U;
    msg.converg_max = 0.9330544290770911;
    msg.converg_timeout = 26401U;
    msg.comms_timeout = 18006U;
    msg.turb_lim = 0.17199546443920122;
    msg.custom.assign("IGLUVDFDKPLSXPFXCGRDVYBMURVQPHRPZXJKSECTAYYMJASUBMQFALGYWINQVJMRNRMQOCVXUBQVJDMBKNVXMZZEEYKEYHDGFEJEWIMGOQWLTHOHTVPWJEFZFUETRDRSFAGDSWLXNBHGHZUJSBWEIAFTOA");

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
    msg.setTimeStamp(0.5877935737964949);
    msg.setSource(65241U);
    msg.setSourceEntity(118U);
    msg.setDestination(51638U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("VPQSWQXYTMCYXQRZUGKGRIRWVXNXYKHPWNGZ");
    msg.type = 249U;
    msg.op = 86U;
    msg.group_name.assign("ECBWNWUONSXYKPFJFYVIBFCWLBHIVTTPWAZRMPYPFTLBASHYUEGVHQRHOIAGIBXMOZN");
    msg.plan_id.assign("JVLGNVDAPAFRFROZGWKXDLJMFXCYNWOJQGIISMUOAVLHDDDJCEOXCBNLUXUFYYEQPMZVWMKHLTJGLKOKUSOWSYASMPXDUZUBARGTUEUKD");
    msg.description.assign("QGGCXJDUYSFPBCCYQZTEXLGNCMQLZCQBOKASOCJODIHEIXGTFKOIPEVXQNJQRRJJEBRKRKPOKHHRIUPIIPSDQNTRUBDBZHNQJIVPANNMBBJLQADWYOUPS");
    msg.reference_frame = 197U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13496U;
    tmp_msg_0.off_x = 0.792467184348396;
    tmp_msg_0.off_y = 0.7032343619024264;
    tmp_msg_0.off_z = 0.5883899563780829;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.12044884629432717;
    msg.leader_speed_min = 0.21857338055644504;
    msg.leader_speed_max = 0.10818664494745789;
    msg.leader_alt_min = 0.7754397776860869;
    msg.leader_alt_max = 0.38774980113715596;
    msg.pos_sim_err_lim = 0.14558433053109376;
    msg.pos_sim_err_wrn = 0.002660665438784293;
    msg.pos_sim_err_timeout = 29715U;
    msg.converg_max = 0.5992692386971933;
    msg.converg_timeout = 16404U;
    msg.comms_timeout = 8776U;
    msg.turb_lim = 0.03059615091489365;
    msg.custom.assign("MPXXFQJQSYHCARONCWETJSJJOLGUEITWEBBGXKBKPBVIUFJQHRSKNONRCKYHYYDBVWMXPVNENRPDMHOMPRGDJJLTVQWXDPPLVGOLALSLICZIWCFZIBSFOWRLCXQSPOIALNGNKNEHGAKWBNEMZYUZKHJUHGVGDSVZGQIOUPTPAOTHHMYZQIQMJAEZEWITRUMAKZDRKBFCC");

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
    msg.setTimeStamp(0.08474311695980075);
    msg.setSource(17305U);
    msg.setSourceEntity(145U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(111U);
    msg.timeout = 2349U;
    msg.lat = 0.1261210585125191;
    msg.lon = 0.5588721613345196;
    msg.z = 0.10228374632333992;
    msg.z_units = 197U;
    msg.speed = 0.26552271730058796;
    msg.speed_units = 245U;
    msg.custom.assign("JLWGVCRXFLIFWIYMZIZKFSTWOVGYDDKEPAPZXNWNNBRFVODBYOCIDAMHJLEQTFIXPYKHJZXLHKZOUNZMOTKUELPDKZXDSJDQBBDUBOHFCQQHHOLBGOVIMCTSXDNMGHPZUOYDGVTVSVFSLGANCRSAJLSAUNTKCPRQPWXEUNREJZYPXUWCXQVAETLGQAVRBHJTPAKUBAZCSETYEIXMLYAMVUEIWYGOEW");

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
    msg.setTimeStamp(0.5530956370316182);
    msg.setSource(54479U);
    msg.setSourceEntity(96U);
    msg.setDestination(9723U);
    msg.setDestinationEntity(39U);
    msg.timeout = 8663U;
    msg.lat = 0.848069392461621;
    msg.lon = 0.8019001614325589;
    msg.z = 0.4580370761704601;
    msg.z_units = 123U;
    msg.speed = 0.8542619448927639;
    msg.speed_units = 234U;
    msg.custom.assign("VEMMXNZZFDJGHGEL");

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
    msg.setTimeStamp(0.5736882111792304);
    msg.setSource(35266U);
    msg.setSourceEntity(209U);
    msg.setDestination(54990U);
    msg.setDestinationEntity(216U);
    msg.timeout = 7418U;
    msg.lat = 0.7449638213855407;
    msg.lon = 0.6712069738458328;
    msg.z = 0.635610982046722;
    msg.z_units = 168U;
    msg.speed = 0.4762087159519228;
    msg.speed_units = 56U;
    msg.custom.assign("SDPDEWFRZCIPRICUQPYJDOHXDDIBJNCJOXRSESBGUMTEHEYTQYQXLRTEJJQMNFEJ");

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
    msg.setTimeStamp(0.060064839483923604);
    msg.setSource(64697U);
    msg.setSourceEntity(197U);
    msg.setDestination(37084U);
    msg.setDestinationEntity(230U);
    msg.timeout = 25892U;
    msg.lat = 0.8088791367594502;
    msg.lon = 0.2176051194055899;
    msg.z = 0.5101822358823218;
    msg.z_units = 36U;
    msg.speed = 0.05131608941678223;
    msg.speed_units = 237U;
    msg.custom.assign("HJTWBENCBOXHFYYWYRLDKKPVJVMUUAA");

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
    msg.setTimeStamp(0.8097809600627476);
    msg.setSource(50025U);
    msg.setSourceEntity(129U);
    msg.setDestination(30175U);
    msg.setDestinationEntity(147U);
    msg.timeout = 24927U;
    msg.lat = 0.05213905739143665;
    msg.lon = 0.1961862879562134;
    msg.z = 0.7063060232375287;
    msg.z_units = 206U;
    msg.speed = 0.6513221001490809;
    msg.speed_units = 149U;
    msg.custom.assign("RZYWQEXADMEXXRGPVPTHLYKCGPZEONDALBVZRDISHTSTIGTIECKWGXUWBPLZEJLYMJXSMNCATJNHXHPZGOCQFLMMQTYXFOKPINJNXKQQHCQTTIMZMWFZOQE");

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
    msg.setTimeStamp(0.2647621261348785);
    msg.setSource(50388U);
    msg.setSourceEntity(219U);
    msg.setDestination(42743U);
    msg.setDestinationEntity(214U);
    msg.timeout = 17312U;
    msg.lat = 0.20671413159399044;
    msg.lon = 0.6669938873749304;
    msg.z = 0.7038713383706151;
    msg.z_units = 124U;
    msg.speed = 0.11093982885663312;
    msg.speed_units = 48U;
    msg.custom.assign("AVSICIQTHFLMZNEAQSCFTGHICYGSKSZKKEKFAHUXLNBAJGNJLVOCRILPUBHHUXFTOAHDWLZLDSVFGQAZCIZLCGSMEGCSPRUAFAILDJIIOQJJYOTYLQHDTEEKBEKNYWQVPDYKWZERVUMRPPLWONMIGPWMYNZZJPIKOBNWSDHTOWSFUQMBSENRVJBN");

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
    msg.setTimeStamp(0.051481746060191846);
    msg.setSource(34474U);
    msg.setSourceEntity(25U);
    msg.setDestination(8742U);
    msg.setDestinationEntity(88U);
    msg.arrival_time = 0.8085415047054468;
    msg.lat = 0.9278296726173407;
    msg.lon = 0.7609361624513439;
    msg.z = 0.5604191126112109;
    msg.z_units = 232U;
    msg.travel_z = 0.31221974536155905;
    msg.travel_z_units = 69U;
    msg.delayed = 92U;

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
    msg.setTimeStamp(0.7380128629539535);
    msg.setSource(60915U);
    msg.setSourceEntity(187U);
    msg.setDestination(36495U);
    msg.setDestinationEntity(53U);
    msg.arrival_time = 0.19790683295718692;
    msg.lat = 0.3810039323337556;
    msg.lon = 0.6179085162730379;
    msg.z = 0.07670670778967625;
    msg.z_units = 146U;
    msg.travel_z = 0.7812191667937756;
    msg.travel_z_units = 206U;
    msg.delayed = 99U;

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
    msg.setTimeStamp(0.9840297701825119);
    msg.setSource(52563U);
    msg.setSourceEntity(5U);
    msg.setDestination(45730U);
    msg.setDestinationEntity(169U);
    msg.arrival_time = 0.015691066215476446;
    msg.lat = 0.8709189513635712;
    msg.lon = 0.040092424510789204;
    msg.z = 0.6812508093260932;
    msg.z_units = 235U;
    msg.travel_z = 0.6741157468207396;
    msg.travel_z_units = 100U;
    msg.delayed = 102U;

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
    msg.setTimeStamp(0.7521655968863064);
    msg.setSource(25417U);
    msg.setSourceEntity(124U);
    msg.setDestination(4344U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.6585677670970751;
    msg.lon = 0.78419946156828;
    msg.z = 0.37391758674172804;
    msg.z_units = 158U;
    msg.speed = 0.7427933519109517;
    msg.speed_units = 55U;
    msg.bearing = 0.8279704672739955;
    msg.cross_angle = 0.10618742617299959;
    msg.width = 0.3435855972834232;
    msg.length = 0.10071422022617815;
    msg.coff = 13U;
    msg.angaperture = 0.7456966378272877;
    msg.range = 31747U;
    msg.overlap = 166U;
    msg.flags = 222U;
    msg.custom.assign("QNRSDFWEGNWFNBCIUSGNXDAZOYVDBFZAJYYHBROLHMSRXKNDQHLQBUTPPSKTEPNWNKVUJBLOAXZCHVNCMOZHHIVNRBUBHDLXMLPUMUWHMMRMGDHYUEAFWILRFUXQZYVZSPWJZERAAFYIBFMQXIOXPKOVVLSDSIZTLKOEXGPLJAKGDFBCGKGSODUTEAYKEJYIHKWTIUXTFIXVJJPRTPQPFZINAJAOGTQVTEQQCOYYGM");

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
    msg.setTimeStamp(0.838722733087186);
    msg.setSource(42338U);
    msg.setSourceEntity(58U);
    msg.setDestination(8334U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.40885171492158123;
    msg.lon = 0.6763674239651357;
    msg.z = 0.5106334294045239;
    msg.z_units = 247U;
    msg.speed = 0.07484537714652428;
    msg.speed_units = 51U;
    msg.bearing = 0.01829478564661935;
    msg.cross_angle = 0.9378497214306137;
    msg.width = 0.7760589384467678;
    msg.length = 0.07231403095297584;
    msg.coff = 199U;
    msg.angaperture = 0.38775696355966227;
    msg.range = 20927U;
    msg.overlap = 162U;
    msg.flags = 252U;
    msg.custom.assign("RRUAAYMLDYHQEETHBCHTGZRBODGOQDXHUFMDMJMKTSIVZNSDYQYAVFNBZVJENQVDVRFDJXJDRCEDOGTICSWXCIEZANHYPCPUHDSWOYKASBISFBAFUUXNNZXZBKIGQNEVLQLGBXVNLTSFUJKUTSBIOGRQOGBCWPATRLHRMOK");

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
    msg.setTimeStamp(0.1561906810458944);
    msg.setSource(811U);
    msg.setSourceEntity(115U);
    msg.setDestination(60987U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.0701999884154414;
    msg.lon = 0.2407474138561424;
    msg.z = 0.942699213412183;
    msg.z_units = 173U;
    msg.speed = 0.6101589481774123;
    msg.speed_units = 72U;
    msg.bearing = 0.9963245182409685;
    msg.cross_angle = 0.2971319055840409;
    msg.width = 0.1521125904213102;
    msg.length = 0.16540344277657126;
    msg.coff = 160U;
    msg.angaperture = 0.028739505241427543;
    msg.range = 27005U;
    msg.overlap = 153U;
    msg.flags = 123U;
    msg.custom.assign("PCBVGISMCBCGOSFWNZMSMTVDUHVFSGJPBXNEECQRPFNUILJKRTGKZPYYOXZVLUVMBYRKELPUHNTAVCZLMBWIBOFODYDYE");

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
    msg.setTimeStamp(0.07102390116860158);
    msg.setSource(62443U);
    msg.setSourceEntity(181U);
    msg.setDestination(16498U);
    msg.setDestinationEntity(100U);
    msg.timeout = 21321U;
    msg.lat = 0.618416704818643;
    msg.lon = 0.9038993811838067;
    msg.z = 0.5810327447593648;
    msg.z_units = 110U;
    msg.speed = 0.583900379806841;
    msg.speed_units = 34U;
    msg.syringe0 = 179U;
    msg.syringe1 = 119U;
    msg.syringe2 = 99U;
    msg.custom.assign("JOLPNQLOSIVBLDVVCGOUHQRTBWIUVXEAHVGJKEIRZATCSLXDIMDHGOGYRJBJXJEXQHPPAAWCTNKYSPKZUXOJGBNTJJKWTUERKPWHGMSZFNCYSMDNXYKEMQZFMCNOPDOLYCZAUSGOKTGFIOBJMMVIUITNDFFUWQSGYQBXNZK");

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
    msg.setTimeStamp(0.002764114244060756);
    msg.setSource(40317U);
    msg.setSourceEntity(233U);
    msg.setDestination(47720U);
    msg.setDestinationEntity(97U);
    msg.timeout = 34880U;
    msg.lat = 0.4588751677462184;
    msg.lon = 0.7502785461743308;
    msg.z = 0.9730886086348507;
    msg.z_units = 176U;
    msg.speed = 0.9318475768877266;
    msg.speed_units = 66U;
    msg.syringe0 = 112U;
    msg.syringe1 = 211U;
    msg.syringe2 = 151U;
    msg.custom.assign("IPZPQHSIPNWBKIXIJWDOCKJEPSFWENXNJTKTIHNXBHPWOZMWNWGLODVXMRWACXKEQIMQDKQGGLUFYYFDJLTYUEKGUBSKNSRBKIVJBBYFBOVETFPHREGSTYRYSHDJABQFZSGJUPULVXXZEVRJZMOAZACTYM");

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
    msg.setTimeStamp(0.2486234394988729);
    msg.setSource(18398U);
    msg.setSourceEntity(130U);
    msg.setDestination(61225U);
    msg.setDestinationEntity(158U);
    msg.timeout = 4661U;
    msg.lat = 0.38472180062787653;
    msg.lon = 0.915904717597067;
    msg.z = 0.4721292054175973;
    msg.z_units = 193U;
    msg.speed = 0.8623463640014692;
    msg.speed_units = 241U;
    msg.syringe0 = 24U;
    msg.syringe1 = 106U;
    msg.syringe2 = 6U;
    msg.custom.assign("RFWAAYUDDGXIMFBZJLHMBEGOGWJLHYESMIQGDULSPUCPDHLKTHEDTYQRAPFLHEBBGROOVWWATFIJWUZYQSKFBQHRMORRAFRTMSVZACXBPVNHELVAINXKDCRLYWIQAOFLYBGOUZJDPVSQXEXAPELBKVFCYCMKHXOBNMZKBKTUXJHXRYZUSNMUSQWTTKWPYXNTSUIOSNRPSOJDNGNZQNTVCCGMFVGJZQJIVLEUKNHDVM");

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
    msg.setTimeStamp(0.7047026329662164);
    msg.setSource(63927U);
    msg.setSourceEntity(125U);
    msg.setDestination(35376U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.6634330728102396);
    msg.setSource(47109U);
    msg.setSourceEntity(145U);
    msg.setDestination(28995U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.23208552656581904);
    msg.setSource(39628U);
    msg.setSourceEntity(221U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.43286628698973784);
    msg.setSource(14536U);
    msg.setSourceEntity(61U);
    msg.setDestination(8109U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.38470943720460526;
    msg.lon = 0.631496200394652;
    msg.z = 0.37718824783031246;
    msg.z_units = 68U;
    msg.speed = 0.9616182476136228;
    msg.speed_units = 89U;
    msg.takeoff_pitch = 0.6652518159818357;
    msg.custom.assign("BJUEXDRGRPFABWDMDFYQAOKOTPVXKDYTETJECEKDPAWBAZJLZHPHLPJFYNZRNUJZCIMARMEZUHLLT");

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
    msg.setTimeStamp(0.5957695883316684);
    msg.setSource(64298U);
    msg.setSourceEntity(238U);
    msg.setDestination(36617U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.1309895460232976;
    msg.lon = 0.5778252957574227;
    msg.z = 0.348547181262161;
    msg.z_units = 213U;
    msg.speed = 0.5065614449151643;
    msg.speed_units = 8U;
    msg.takeoff_pitch = 0.3894319957653777;
    msg.custom.assign("XKRZRNTMDGDAWLAQSUFUHPPXEPOEJQVPXOEEUPWRCNQFRSGVJXFMRQWTFEYHJIOBSCAMDYVRQNHPLZIGDTVMIFTVAEWTJUBESKKZJZPTTKSLNTYXOXPBBRBDZMNZVXDGEIDVMNTQVLEMKUUTBHHHHXLNQKYYQU");

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
    msg.setTimeStamp(0.7402660413969603);
    msg.setSource(34074U);
    msg.setSourceEntity(81U);
    msg.setDestination(28347U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.7367310946214695;
    msg.lon = 0.7374396602375004;
    msg.z = 0.6986153936933932;
    msg.z_units = 65U;
    msg.speed = 0.10824573174738161;
    msg.speed_units = 225U;
    msg.takeoff_pitch = 0.31574280225217044;
    msg.custom.assign("WVJVKLNVXQXHNFLSPGNBCAVUOFULFZTQFCIZHBPEUPHFOMVOYWYPZINSZAFQCHZJSTWIWCRPYFTYTUALWABQKEILSAJWALHMYZCECRJFMRTGJESKQLRNDRCGUVGDYKARSYHKBIUBSEDNTBNBWBNGESXWOGLRWUPPTGDROLJUYPTTQKKMYCQOZIFJHGXPOVMUJZKVETXFAC");

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
    msg.setTimeStamp(0.9380147254532702);
    msg.setSource(21554U);
    msg.setSourceEntity(1U);
    msg.setDestination(957U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.6874216565852601;
    msg.lon = 0.8167073309522288;
    msg.z = 0.004461108473089892;
    msg.z_units = 108U;
    msg.speed = 0.1232047938455636;
    msg.speed_units = 75U;
    msg.abort_z = 0.4237793599036538;
    msg.bearing = 0.8123832083135695;
    msg.glide_slope = 219U;
    msg.glide_slope_alt = 0.003116452784214685;
    msg.custom.assign("NQEUQAANHHVMWLVDQLWXXKJYNZFLIMEKAEABBLSDNWDQJWUJSUMFPZPIXIGLQUNMGUDAPTSCVZRBAXJDVYLGXOGLEDIHBOAHSBMEGDPUJZRCJTH");

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
    msg.setTimeStamp(0.9436577365627647);
    msg.setSource(11679U);
    msg.setSourceEntity(49U);
    msg.setDestination(58980U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.4410453182939794;
    msg.lon = 0.08246894136093497;
    msg.z = 0.8222501838452726;
    msg.z_units = 140U;
    msg.speed = 0.7657924539971133;
    msg.speed_units = 90U;
    msg.abort_z = 0.5536237090142113;
    msg.bearing = 0.32431606253175527;
    msg.glide_slope = 227U;
    msg.glide_slope_alt = 0.4730640139658687;
    msg.custom.assign("BXRPTGZUTMNOAGEOWCZXJPMHJWCXANAPIUYELJGVCWWFHSCMLQIBSAZMIEZYXKHFKLRNSQBAUFBWDBXMOMTTTLMHGRNRTNKHHIEAIOIXEDLSRSQCUWOCIWZVLLZDSYCJEDMVEJNEYDFXLCQNQBGNOPYYAYFHZEPBYFPXFZTRLOIJMFOSDGSBHQVPBUWQAULEXKIGGONGTKWDVRTIUWDBJSMOZKUUKGQQUDCYTQPJVAARKHFVVKDRKCSFJX");

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
    msg.setTimeStamp(0.20266575721745517);
    msg.setSource(9690U);
    msg.setSourceEntity(244U);
    msg.setDestination(24110U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.2710321008599228;
    msg.lon = 0.09704569034107924;
    msg.z = 0.4859823967946113;
    msg.z_units = 192U;
    msg.speed = 0.4740347933791009;
    msg.speed_units = 158U;
    msg.abort_z = 0.529903374229467;
    msg.bearing = 0.5455144766004021;
    msg.glide_slope = 14U;
    msg.glide_slope_alt = 0.18555275023951245;
    msg.custom.assign("KQUGXVMEBSBWZSBHSEYRJJXQLDJWJIFXUNDNFGAJOABRQCNIIFMORQLTHBDEEBVETPYLUZZJKLIHPJCELPYKH");

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
    msg.setTimeStamp(0.9891658046355993);
    msg.setSource(29893U);
    msg.setSourceEntity(198U);
    msg.setDestination(45076U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.28501852617835566;
    msg.lon = 0.3753555242359443;
    msg.speed = 0.58632011170462;
    msg.speed_units = 121U;
    msg.limits = 209U;
    msg.max_depth = 0.4948919599642613;
    msg.min_alt = 0.9979652811663197;
    msg.time_limit = 0.6051461589360478;
    msg.controller.assign("KEQVJUGNQRLUWYAKGNGEXWLT");
    msg.custom.assign("IBXRUXVWCJKUOXIURVFQZXKVUUDFEHMYTXHLROLHPXHRAJBPQLYDSPYBZSJNJSWHXIGVKABDFQG");

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
    msg.setTimeStamp(0.6721512681619937);
    msg.setSource(18672U);
    msg.setSourceEntity(121U);
    msg.setDestination(59754U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.9475733428028033;
    msg.lon = 0.5064231434968901;
    msg.speed = 0.4059401864381573;
    msg.speed_units = 99U;
    msg.limits = 189U;
    msg.max_depth = 0.328890802477402;
    msg.min_alt = 0.019867400722449635;
    msg.time_limit = 0.5792993318699999;
    msg.controller.assign("NVWGQRLPJZKQQVOVRVOKNQDNIBOOCCMOARZLLEPVEMRVXQDSWDUTUFAEWUIKQPUJLYIRTTRCNIEHCVWMXBBPZOGHIDPXMPI");
    msg.custom.assign("AHVAGJFXUKWAHNVOXBPIWZUMZEMYWXETSAVYSYKLPMHCOGIIWJPOWESEECDZIXMAYKSDSGCWQHOANLWZUGHKNEHCJJULUHZKXPHZUTFFUDHNFGJTKBFBAMRRPLGRJZARKHTMNDDLWKMVLPLUEYSPGVZOUST");

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
    msg.setTimeStamp(0.2684010305885288);
    msg.setSource(35045U);
    msg.setSourceEntity(44U);
    msg.setDestination(53893U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.811111445805675;
    msg.lon = 0.09509780497002407;
    msg.speed = 0.2596478167579036;
    msg.speed_units = 55U;
    msg.limits = 168U;
    msg.max_depth = 0.378985090399648;
    msg.min_alt = 0.837442422750483;
    msg.time_limit = 0.8529007274457366;
    msg.controller.assign("CFUONTDHVWRPIKRPWPSMADBTPCLCSRXGQXWYLFFHQGKKJTRIPFXMTVUSRIDALCIBRTJOQUYELQKRNZJWHEISZIUNGBISTGLVTQNSMEJBGAQAGAAIMOXOIRDWYVSHNUVBKSAGFFXFQHZDJTTJBHUKBDPXD");
    msg.custom.assign("YSRKDNVWBRKXSKBZMIMIRUBXZJMNDSRUMNUFEPBGJCAOOPNRVZWTCEZDGTOCEZCICHQDSDJGIBGXHQXOXZBHSUAJTYDBORFPYQOENRDVDXIFZFRIUYVNLHVWLTGHFEQFXLLWYLRP");

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
    msg.setTimeStamp(0.13775275541174692);
    msg.setSource(14215U);
    msg.setSourceEntity(172U);
    msg.setDestination(36269U);
    msg.setDestinationEntity(193U);
    msg.target.assign("BOVEJLDTNPKTHLPXZFAWSDWRHFRPJEIHAXHRFUDAGJFAVXPQJZZTHLJSMFAGEBRMXKFKSQUTSACWKWGSABWWLIKQNGCGPQBLTKVHMZANBYQSKPRBJLZTLVVNRSISBXICAJDBIVIOJCFOYYXPNU");
    msg.max_speed = 0.24959969354323142;
    msg.speed_units = 116U;
    msg.lat = 0.557487020811337;
    msg.lon = 0.676241612357959;
    msg.z = 0.8805286083892621;
    msg.z_units = 117U;
    msg.custom.assign("HUGUMBQAAPBUIJSIMNWOR");

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
    msg.setTimeStamp(0.23954944762071073);
    msg.setSource(50415U);
    msg.setSourceEntity(71U);
    msg.setDestination(3023U);
    msg.setDestinationEntity(191U);
    msg.target.assign("TYPMRHPTIBUWEONRHPNLZJYCUFBIEQBKZLUYFJDD");
    msg.max_speed = 0.4880820317674661;
    msg.speed_units = 4U;
    msg.lat = 0.5379600178106567;
    msg.lon = 0.6627834296840799;
    msg.z = 0.9920878579396444;
    msg.z_units = 203U;
    msg.custom.assign("ZZRHDEYPRFTNOXPZJBJUFHBLVXYLLKDW");

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
    msg.setTimeStamp(0.40872272831706524);
    msg.setSource(21019U);
    msg.setSourceEntity(238U);
    msg.setDestination(20886U);
    msg.setDestinationEntity(161U);
    msg.target.assign("XESGLNHJVPZZMKKQVOXDFUTFLAYGTLLEFCUZYQDILKYWARGSSYJRZPYCYVNZNMGHWDCESIOMBUNTCTWTKPRIXYTWBMZYOGFSWQUYGHDESJKCJQPTDSGCGDLFSSRXCKCJBZBMKOOPBAIFBWOZJTWQQOMIQHOAFNYUEEAPLUQEPVHIONVVXKGCUTWBKIXXHWDXAHLAMMFRNDNMCEVGZRRINHJDMTRPXQBAUIVBNJH");
    msg.max_speed = 0.4831853167800657;
    msg.speed_units = 149U;
    msg.lat = 0.6885971480546325;
    msg.lon = 0.7162299001692845;
    msg.z = 0.41585648559749044;
    msg.z_units = 201U;
    msg.custom.assign("GHOMBOKGADRQMVXNEZBQHOSRBYCWLUKRCKXZSSBEJZMBPQYKFJMLZKFTSBFERVCFIWBLRVWXLHBJCMSPNSVLQZNYWTPPWUSOXTRDASUGBTGQRXMWZUCIOENPEIFWYKIOQNEAJMTIVRDVGHDJGYUINECQPHABPTZXDJCJVUKDEPYWLFORHTHFIZCACLJLDHADLNQVMXXWCNOYVUUKYTWGGOIZDANI");

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
    msg.setTimeStamp(0.7966379465153959);
    msg.setSource(2075U);
    msg.setSourceEntity(239U);
    msg.setDestination(36122U);
    msg.setDestinationEntity(142U);
    msg.timeout = 60624U;
    msg.lat = 0.02798901672885623;
    msg.lon = 0.008187378319398864;
    msg.speed = 0.18022898237918927;
    msg.speed_units = 164U;
    msg.custom.assign("LUIXDVWORHSIFEYUDUWDGUYZKPOTNQYSXUBZLEWEPNRZKJPFEJHSLYQFVBJHLZHABFXZHTMKSKJBNRFVAQNTHBVFOXFXTMBCOUCUKNVXIYBIBPMJJWOGDXLLGISEWWSWWLPQYTDCFDJOYMKORSARRRUGQGMWTJJEQCQDCHAEDEZSVOFUGRLHHZBPGSAXCDPIBKCRNOMNYZUOVZKIMGXAMXJNMGCVQYPQIALEAYCEHPZQAKWGTDMN");

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
    msg.setTimeStamp(0.7130366509914208);
    msg.setSource(54573U);
    msg.setSourceEntity(174U);
    msg.setDestination(15891U);
    msg.setDestinationEntity(118U);
    msg.timeout = 38365U;
    msg.lat = 0.7928173596623653;
    msg.lon = 0.7188431619989204;
    msg.speed = 0.01468387987174935;
    msg.speed_units = 159U;
    msg.custom.assign("ISSITJSIKBTVFVRHLHCSLYPIPTGMPHHVDRGXVYMFSNUFXMNCGQEJZQPGKCBVDOBMSYPBHDXFQZJAWMLECIEDNGPRXPJJDECWAWTBQQLOVZLYEQIKDEURRZATQIUYFWMBZNDGOON");

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
    msg.setTimeStamp(0.7559538191691403);
    msg.setSource(42533U);
    msg.setSourceEntity(124U);
    msg.setDestination(25988U);
    msg.setDestinationEntity(209U);
    msg.timeout = 11070U;
    msg.lat = 0.2803146580899776;
    msg.lon = 0.11004215363738634;
    msg.speed = 0.6917020903223579;
    msg.speed_units = 182U;
    msg.custom.assign("MCRBKWOEHSIOT");

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
    msg.setTimeStamp(0.01131874383815612);
    msg.setSource(3884U);
    msg.setSourceEntity(225U);
    msg.setDestination(43220U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.8285738474388695;
    msg.lon = 0.07749485841858916;
    msg.z = 0.6958078441522327;
    msg.z_units = 56U;
    msg.radius = 0.3642983890070012;
    msg.duration = 55892U;
    msg.speed = 0.5737184485217073;
    msg.speed_units = 178U;
    msg.popup_period = 14516U;
    msg.popup_duration = 48191U;
    msg.flags = 232U;
    msg.custom.assign("AKZOEBKHASHXQYVDXJPURGVCOPPVGKLQYZIBFSNZOAAIUPGMUHNTDUAQOCYSISZGYECTEQDJZDXYWFKOYOJIFDWMORKLYMEJUIYGEHBLTQLUQSVDFTGFJCOJQBPXTEIHLNVBZAPWHVUFCJFTWJIXQMKHZJBXGIYNCCNEMFRGAWJSPBWDUQZPHFUARSAVLGVKRKOMTSPETXYIEWMEHILODWDSLRMUBXZRR");

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
    msg.setTimeStamp(0.6650951975662089);
    msg.setSource(24620U);
    msg.setSourceEntity(100U);
    msg.setDestination(59149U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.63762278030255;
    msg.lon = 0.5788135992698912;
    msg.z = 0.4497498659976804;
    msg.z_units = 68U;
    msg.radius = 0.134829694606029;
    msg.duration = 10938U;
    msg.speed = 0.4814260376601368;
    msg.speed_units = 111U;
    msg.popup_period = 32904U;
    msg.popup_duration = 25773U;
    msg.flags = 9U;
    msg.custom.assign("GIWTAQYJBQTLBGTCSALOZVXBRAWXUNVRNNXIQHUPETUDSDGKPHKMFNFEOWSIJIWWDBDOLYGHLPMHQCPJOCIYKRLZAERLFYGCSYMBLWBJAXOFLBJOXCZDWAAFQGHEJXNKGARVSYXPSUF");

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
    msg.setTimeStamp(0.07839189994272433);
    msg.setSource(55824U);
    msg.setSourceEntity(115U);
    msg.setDestination(25023U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.060250257210148206;
    msg.lon = 0.07166638871539377;
    msg.z = 0.2623589792376744;
    msg.z_units = 186U;
    msg.radius = 0.22545913508298554;
    msg.duration = 9839U;
    msg.speed = 0.6217085754645318;
    msg.speed_units = 72U;
    msg.popup_period = 60012U;
    msg.popup_duration = 46318U;
    msg.flags = 98U;
    msg.custom.assign("OXCLAYTIKVNLMLEEXUZGXSXAUHETAVJTHKROJXMHWNAEMNSZTQLDUGWDNLDQDVAGSYNDIALEBQSXUYWNNKCXWRZBDTPEVCYBEIQNIBHAFCFCWQFZWPLIWPHZZPIJOJMMAXQOTROJGPUJDTHFLHNMRIKJPJUAKSBRCIFDVZUYPMSKSQHRVYFWFKDYMPTGEKXEZJQFVZBZV");

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
    msg.setTimeStamp(0.7587690679374574);
    msg.setSource(62103U);
    msg.setSourceEntity(124U);
    msg.setDestination(47967U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.8024457776223001);
    msg.setSource(33301U);
    msg.setSourceEntity(39U);
    msg.setDestination(23630U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.4113517208104539);
    msg.setSource(21101U);
    msg.setSourceEntity(233U);
    msg.setDestination(49248U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.5818218336182855);
    msg.setSource(9637U);
    msg.setSourceEntity(232U);
    msg.setDestination(33768U);
    msg.setDestinationEntity(217U);
    msg.timeout = 29986U;
    msg.lat = 0.3753274292816038;
    msg.lon = 0.5132681240479615;
    msg.z = 0.9268450414042279;
    msg.z_units = 200U;
    msg.speed = 0.5388673274942428;
    msg.speed_units = 248U;
    msg.bearing = 0.5689975905433889;
    msg.width = 0.9535664142926586;
    msg.direction = 78U;
    msg.custom.assign("QCFUFSNQPVWHNGZDNOXZLWJEJDXJATZMOQLNELXZBSWDFYQIAIGIBKDCBCRRBYOHKQCFPHTDGPDWSMFYFOEESKTUAUIVWVATHUVTNCDPRKSBHFSHVPKZVJGITVTSEDZCKPTJGRD");

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
    msg.setTimeStamp(0.6361788610918531);
    msg.setSource(2687U);
    msg.setSourceEntity(133U);
    msg.setDestination(34473U);
    msg.setDestinationEntity(65U);
    msg.timeout = 43381U;
    msg.lat = 0.8054417627008935;
    msg.lon = 0.19049556423306624;
    msg.z = 0.5284116756167032;
    msg.z_units = 5U;
    msg.speed = 0.31696530882159213;
    msg.speed_units = 21U;
    msg.bearing = 0.7726217482399231;
    msg.width = 0.7929050417135763;
    msg.direction = 162U;
    msg.custom.assign("GOAFSHBRGTGNZMVRQFPWZLOILNPFIQIDUYJSCCLVHVBDADTPAJCYBCRWAMECFJOIEWDXADELPQBQTEGQJTGAWU");

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
    msg.setTimeStamp(0.878750701890191);
    msg.setSource(49496U);
    msg.setSourceEntity(90U);
    msg.setDestination(30642U);
    msg.setDestinationEntity(162U);
    msg.timeout = 47453U;
    msg.lat = 0.243827821027103;
    msg.lon = 0.4777297421116269;
    msg.z = 0.16026891197127457;
    msg.z_units = 124U;
    msg.speed = 0.16178756002091332;
    msg.speed_units = 111U;
    msg.bearing = 0.4099310694802111;
    msg.width = 0.8450200349047728;
    msg.direction = 140U;
    msg.custom.assign("ITSLKELXHQWAYNNHQYZFFLRFBLDOGAFBOCROHMMGROWDOHHAOTUICLVKPHXIPYABJCZNHIZASFRIMOYSJXHYRDSVEGJRMWBVSREQNYTMUMXEPVJAZZOCEQNSSWMRWTADPTWLVFBUXNDVKKLIESBUCVSLTUATVPJGUQCXKRUWPDKLXQTXIRLNC");

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
    msg.setTimeStamp(0.8237809890519063);
    msg.setSource(17583U);
    msg.setSourceEntity(156U);
    msg.setDestination(40492U);
    msg.setDestinationEntity(210U);
    msg.op_mode = 47U;
    msg.error_count = 37U;
    msg.error_ents.assign("TWAZMWGYRHYIBIJXSAKVUXPBEQZKBYZPHTGNTMNTCVPWAXYQZWHCPUJKTKVEDIPLCXHLEPSHKJOXBNCJFZQVOUIMHTOKSEQSLVAABNOWRHBKYGIMOCLLFEDMIEAOLRGQNOZQGRTXKVZFKUFYVIPXSBFFWRMCUCANJUPNIHADQDSDPJCQISSWAVJGEL");
    msg.maneuver_type = 177U;
    msg.maneuver_stime = 0.6732868546551481;
    msg.maneuver_eta = 48674U;
    msg.control_loops = 5268544U;
    msg.flags = 125U;
    msg.last_error.assign("EMOAAFZQREKVNRHWSYLPFYQIUEUDLXFHZKNNMYSDOUXXPSMWBRHBYWNEOSDAJSQZGQEHVSBLRITJWEUDWIH");
    msg.last_error_time = 0.45538266524094484;

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
    msg.setTimeStamp(0.041165483976782324);
    msg.setSource(37437U);
    msg.setSourceEntity(117U);
    msg.setDestination(58793U);
    msg.setDestinationEntity(251U);
    msg.op_mode = 19U;
    msg.error_count = 69U;
    msg.error_ents.assign("SEZEXCRMHSOGWVOVAKUGEPPURVFSZRIGFFTVMUPQHFBZJZCIYYLPZCFACJ");
    msg.maneuver_type = 27948U;
    msg.maneuver_stime = 0.7223848668343721;
    msg.maneuver_eta = 26188U;
    msg.control_loops = 3590268568U;
    msg.flags = 218U;
    msg.last_error.assign("YSMKVQCUOWXRTUFWKYKDHECMVCEROPRSMJOPVNUILFQVJYBQEWNFMOGQSPQPOUEOSAELICEAJJWVVKPNIRKFLQOXPLTZDFPTGXPMGTTMEAARZJFDCRXVAUZVSPHSZZL");
    msg.last_error_time = 0.5504356930194586;

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
    msg.setTimeStamp(0.6302047295702463);
    msg.setSource(37256U);
    msg.setSourceEntity(248U);
    msg.setDestination(64494U);
    msg.setDestinationEntity(135U);
    msg.op_mode = 55U;
    msg.error_count = 156U;
    msg.error_ents.assign("YVGMWLBCFIRKNFSBIMKUQQUPVGDQGWZZUEJUIFCOQXNPPBWGTFLTDXAKDTCOEQKUFUMYVTBMPZYVBJLSHOBNNVVRJXFTWBDOKQHKBZJJEPNEMPLOZHNQHYSEGY");
    msg.maneuver_type = 58895U;
    msg.maneuver_stime = 0.8607759804954769;
    msg.maneuver_eta = 126U;
    msg.control_loops = 389724824U;
    msg.flags = 24U;
    msg.last_error.assign("WTHIXTDLDRCCGXSPTQZBKLSUFQGWTBXLZUSAFRQMDBNDYEIQFEKSGOEOXOXKZYQMIDMLGGDFPTOWODEPDUUVJUHSGPAFEWEJYEYKFQBRMHCYXCORIMBIGUIV");
    msg.last_error_time = 0.4898503618316713;

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
    msg.setTimeStamp(0.11860615082052728);
    msg.setSource(19470U);
    msg.setSourceEntity(16U);
    msg.setDestination(45944U);
    msg.setDestinationEntity(81U);
    msg.type = 128U;
    msg.request_id = 2857U;
    msg.command = 170U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.2265263671730342;
    tmp_msg_0.lon = 0.8445977472909618;
    tmp_msg_0.z = 0.5010761738680247;
    tmp_msg_0.z_units = 121U;
    tmp_msg_0.speed = 0.19011044404162247;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.takeoff_pitch = 0.649417887771796;
    tmp_msg_0.custom.assign("GWNFQXEFUPVQOGETUUSVAHERBGUKFDVMGRZGVYSNORKVVMLRRSEJNQCTZVIILFGOCCAFLTGCFMAPUABEFMLCRJSIHBGEBPHPCKROD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15603U;
    msg.info.assign("UZWIWTGJYVCMAURAROGOEQWCMPYMIUTVKRVNFGAABPHVHMFJINKMDLCZNCBXPELHFRLZVAZNDYBJCKUYLDWTSYXDLRQFJQLUBRNIFFPMQBVPYKRHDHDYEAEXCRBHINXOTPLMJUTATWGLSBKRVOTHE");

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
    msg.setTimeStamp(0.5620990378835992);
    msg.setSource(29058U);
    msg.setSourceEntity(31U);
    msg.setDestination(6000U);
    msg.setDestinationEntity(225U);
    msg.type = 57U;
    msg.request_id = 8695U;
    msg.command = 19U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.3288868488279878;
    tmp_msg_0.lat = 0.07624347185831415;
    tmp_msg_0.lon = 0.8500076870503352;
    tmp_msg_0.z = 0.7234883674971558;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.travel_z = 0.10603331812041039;
    tmp_msg_0.travel_z_units = 2U;
    tmp_msg_0.delayed = 17U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 65353U;
    msg.info.assign("DTJNDNOWGSXHRMTKVWXBESIPFUYJICNQQNXHHYGEUSUVNQOKJBCWRSWWIXIMAFWUWLERLUHFIRINKQPGFSSEEWAHXJHKYJQFRLLFRCSQPTNEAGXNOIXQTFCTDOCVGBOGGVHGVGYQLZRTJACPASCMOLPYVKMH");

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
    msg.setTimeStamp(0.24693763640497413);
    msg.setSource(27025U);
    msg.setSourceEntity(227U);
    msg.setDestination(65164U);
    msg.setDestinationEntity(205U);
    msg.type = 0U;
    msg.request_id = 33274U;
    msg.command = 198U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredThrottle tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3559076852439679;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 10852U;
    tmp_msg_0.custom.assign("SASNFAQKRGRMOKPCJYCQIKZOGKDHORXPWYUWQPZGUFBHQILGFEBGVOZCFVOBTTVYBMZPIISVXWXLDQFMSXRDUSVBZZYIEXILLHJUVNQMVMVRNDUTJZEEPSQWMPLTTOUKOFXHTLZFCXKCKSNCJFAPLVGMMPJLUQNYNAISFVNANGRWNJFBLJYHGRIXDUHCTMTSAQDTPWWAWCADJAEWYCDMO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47848U;
    msg.info.assign("BMGJJZARSAEDZRNJBUQXYSNJSXETVBPLRLCFQXWIEQDUSSEYFVLROWDXRTHHXTCQKNKHKQFGBDUNJZALWNTUGJIPFXIGMPDYWLPIMGSFPVIJAEOAYYBVDOGEOAZFIYIVLMDVTTZUOBEVMVKWRFWJSNLPMQTOMNDOENBARKDFRXHMYZOJRPUQKZAHCVCGZCSMTHIFUYXFDWHHPOGIIGCQLKCUSNCXQXLSRUBKBYACQBKLNATEPKWG");

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
    msg.setTimeStamp(0.08168428424311647);
    msg.setSource(63523U);
    msg.setSourceEntity(116U);
    msg.setDestination(22971U);
    msg.setDestinationEntity(107U);
    msg.command = 102U;
    msg.entities.assign("DQHMDKVKNMQEJPAPIMJKBOZITGBXVTUGVZFBBPSMSANPVOKRJAFWLPLRBPHNXEFKQTLIXSEMWTUDEWYYYYLIOWJXIHVMXDKUTOCBTYELIJAJWJQCZBCSHQAZFXPEFGRNOEJQAKQD");

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
    msg.setTimeStamp(0.0237915159349551);
    msg.setSource(39515U);
    msg.setSourceEntity(109U);
    msg.setDestination(40769U);
    msg.setDestinationEntity(52U);
    msg.command = 15U;
    msg.entities.assign("MAQPVZMVIYFPLUBVGCBHCETPUWLYODFCZHPNDXKKKRTCHBJKGZTUUYUJJVFBXWBKTEWZLOSICSUATDBQUMEEVJKUINGAMRPDRVNBRILJORFALONHOSANREXCVHYAHECNGRIAWCQXKBNSOBAXJ");

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
    msg.setTimeStamp(0.1499031065182863);
    msg.setSource(56124U);
    msg.setSourceEntity(88U);
    msg.setDestination(3954U);
    msg.setDestinationEntity(181U);
    msg.command = 149U;
    msg.entities.assign("CEXZGBLRCWBHPQANDUGKBOBIDVYTGONGRQJOK");

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
    msg.setTimeStamp(0.6431208988422387);
    msg.setSource(6978U);
    msg.setSourceEntity(150U);
    msg.setDestination(11384U);
    msg.setDestinationEntity(63U);
    msg.mcount = 209U;
    msg.mnames.assign("OYNKIAXTRSTOPPJZEEWDAVKLOUQQCWTSAMJSAPSOXMVXVDZIAGMPALWZUEWWFKMOGQLCMHMFHUZCHYZVNWTNFWVBURIKGXMYVRRCBGC");
    msg.ecount = 95U;
    msg.enames.assign("HXTKTKLRLSGIFUDABUWQKDOXRZEYLISZHZYVEJCNZRNIEVBFPVCIQYZJKDHTAAFNNBN");
    msg.ccount = 163U;
    msg.cnames.assign("LAZLQSNLMSLEYYPCJWNBJXHCIGWDRZKCNPOQJJTLFJWPADXYMBXJHGTYTPECQYWZLVVNOZBEEOWIZSWBXDLIJKPCCEDIEHCSUDFFSHKMPVUXMNPDIZRYKGQISBHSNEIUUTTPRHFTXBDARMXCQYKSQPVAHXRQLFHBRSBDYTKIOTHUQGEGGI");
    msg.last_error.assign("CLJZBXMVJBSCJZRAAELEAIDJRWGTRTNCDFDTITJOJYNOXPLPRWEAPXVDLMYRHWWQVFIETLFYVTAKEGZWCMKBUIWLOQ");
    msg.last_error_time = 0.6058310815446254;

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
    msg.setTimeStamp(0.41677602587959883);
    msg.setSource(37366U);
    msg.setSourceEntity(13U);
    msg.setDestination(38430U);
    msg.setDestinationEntity(227U);
    msg.mcount = 199U;
    msg.mnames.assign("NYNMNDCHTGMENIAPLZAOFHIHUVQXAXXLGFZINUVUJVWWMJHSCEDPOTKMPAODTMHPCBTWQLVHQOXWYRGXZWBYGQWBSQFLRFIJOAFFMRUDRSRGLSXKGUQRBWDGOLPVEEXJVJZZAAE");
    msg.ecount = 115U;
    msg.enames.assign("WUGDHVCPGLZWGOXAUKAPSWXQVBSBKAICAEVCMXNRWEFWRXEJOEVDDRLZANEBGAUNTSWDXJZUJJOVWRVVYREBQJZJDSKHMOOAFGYMMTDJPFKUPUIIYQRILWKEBPNGHXQTQGKUHCIATSLNMLRXHAEISUXTUYSNNOZYYQTFDKOLTTNPMBMQIZOMFFJMFZHJYBYGPVEHZMYIPPIKQODFWCTTXRCLOJQSQHCBALNLFDECRLVFYKGHBC");
    msg.ccount = 153U;
    msg.cnames.assign("YUSPFPHKODLALXXAVBUSUYCFTSGVJAZMPIXJUZRLIUCZIRDOWDFVJAEMQIUTAEPBIEXTNMQCPGGJWXXWVHVPCHRXETDEFAAUVDHZNUQOUBKAOPNSZBBFMVSILFYKHARXEWTHXLWRYZDOQNLLBFHRQDTBWEKGKCZCGYQJOEZBLAILSDMNORSWZBKQZKMPYRVQNLMRMGMHVGNXCTQOCJWFHFDCKISRVUKJGBCTYSIMHNKPPDOESYFOW");
    msg.last_error.assign("ZKRFTIQOIQMZYVOGYFWZJJYVGZDLUAAQQQTNAOXHBFVVLWKYCWPVRRERJNCCDMWHICUTMRSKOZHDGTAUTCMAGNEKNSXMGMNGQUZOLENLFUHMOKFEOESFLPZBDLEJRRCSDSNIVXSIDNCLIYSTNBBRWEEYPATIPACHPXJHJJCUGZTK");
    msg.last_error_time = 0.0925698696207925;

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
    msg.setTimeStamp(0.37269405490515173);
    msg.setSource(24955U);
    msg.setSourceEntity(111U);
    msg.setDestination(50770U);
    msg.setDestinationEntity(248U);
    msg.mcount = 54U;
    msg.mnames.assign("ELJPEEQRQPJDMKASWRQVZJNFRVMIMEKKJPAPJSKBDCWISRZHWOYAJEGUNRGFNDB");
    msg.ecount = 25U;
    msg.enames.assign("VJMKZLRCCSOIDBMAJRDNTTPRYYXLSELBUQQQJTOKORBYNGSOQPUAXVCXAJQHDSVFMNWYPGUMAMDAQMDJKVZSCHBTDPTDGPSKDNROLEZZEWZAGLOGFRGVOMQITOIUTEFTBEIBUJBWUCNXAKLUWEXIEHZYUYEUHHRSXWPJVLHCXIAFZTSZIPSCRRFWEDQPDEVKZXCBQGNHVJALPGJGFMFWGIRNCLOFSCLHWBNKTIKYXNHYVIOYWMBKVH");
    msg.ccount = 50U;
    msg.cnames.assign("WSZAOPORKYOLBHVMCNQZUGWEIRG");
    msg.last_error.assign("RBUGXROTDZQZALVOVXKFRCSGAFWRVGACPYLNEEYFTRHJJITPUCSZUGFXNYJUAWXJCHCLYHZERJWX");
    msg.last_error_time = 0.6766384552368919;

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
    msg.setTimeStamp(0.33433525431263555);
    msg.setSource(38396U);
    msg.setSourceEntity(25U);
    msg.setDestination(7696U);
    msg.setDestinationEntity(221U);
    msg.mask = 183U;
    msg.max_depth = 0.8214999958775929;
    msg.min_altitude = 0.28117978834341284;
    msg.max_altitude = 0.48229490090866367;
    msg.min_speed = 0.793050050082848;
    msg.max_speed = 0.4511400758581313;
    msg.max_vrate = 0.1679415771861108;
    msg.lat = 0.6363071041350084;
    msg.lon = 0.7472155534928296;
    msg.orientation = 0.2726415954324708;
    msg.width = 0.6798000566499126;
    msg.length = 0.16262317211456767;

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
    msg.setTimeStamp(0.13392638343415042);
    msg.setSource(37561U);
    msg.setSourceEntity(136U);
    msg.setDestination(60438U);
    msg.setDestinationEntity(165U);
    msg.mask = 62U;
    msg.max_depth = 0.4899248790799574;
    msg.min_altitude = 0.8093564074118821;
    msg.max_altitude = 0.5927364707941937;
    msg.min_speed = 0.8430346190154141;
    msg.max_speed = 0.519540787135926;
    msg.max_vrate = 0.5101977991452475;
    msg.lat = 0.8681420962130609;
    msg.lon = 0.9035644588487911;
    msg.orientation = 0.42643554501049563;
    msg.width = 0.18657838871145205;
    msg.length = 0.4787821303954688;

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
    msg.setTimeStamp(0.8115050794419294);
    msg.setSource(39028U);
    msg.setSourceEntity(26U);
    msg.setDestination(51489U);
    msg.setDestinationEntity(135U);
    msg.mask = 236U;
    msg.max_depth = 0.7361220669531695;
    msg.min_altitude = 0.49605675327978915;
    msg.max_altitude = 0.6774787084276177;
    msg.min_speed = 0.14661399530387142;
    msg.max_speed = 0.176468284305902;
    msg.max_vrate = 0.06423180405413509;
    msg.lat = 0.3599928351465276;
    msg.lon = 0.40505736205248133;
    msg.orientation = 0.6361773267338903;
    msg.width = 0.375001020805658;
    msg.length = 0.34894772070965696;

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
    msg.setTimeStamp(0.9498301389157048);
    msg.setSource(54457U);
    msg.setSourceEntity(199U);
    msg.setDestination(3899U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.03488311262644994);
    msg.setSource(44291U);
    msg.setSourceEntity(180U);
    msg.setDestination(33457U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.028426993756771823);
    msg.setSource(24443U);
    msg.setSourceEntity(78U);
    msg.setDestination(25797U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.7175522177433077);
    msg.setSource(58725U);
    msg.setSourceEntity(13U);
    msg.setDestination(64644U);
    msg.setDestinationEntity(8U);
    msg.duration = 64693U;

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
    msg.setTimeStamp(0.048337685928479535);
    msg.setSource(14857U);
    msg.setSourceEntity(128U);
    msg.setDestination(1035U);
    msg.setDestinationEntity(203U);
    msg.duration = 17849U;

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
    msg.setTimeStamp(0.30339204035479894);
    msg.setSource(3173U);
    msg.setSourceEntity(182U);
    msg.setDestination(31984U);
    msg.setDestinationEntity(81U);
    msg.duration = 37773U;

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
    msg.setTimeStamp(0.3350869394018239);
    msg.setSource(1165U);
    msg.setSourceEntity(243U);
    msg.setDestination(36707U);
    msg.setDestinationEntity(156U);
    msg.enable = 126U;
    msg.mask = 3957792900U;
    msg.scope_ref = 3995749182U;

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
    msg.setTimeStamp(0.6547289555671154);
    msg.setSource(40897U);
    msg.setSourceEntity(12U);
    msg.setDestination(44515U);
    msg.setDestinationEntity(222U);
    msg.enable = 77U;
    msg.mask = 3572695570U;
    msg.scope_ref = 3184009225U;

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
    msg.setTimeStamp(0.14226515311708554);
    msg.setSource(19198U);
    msg.setSourceEntity(96U);
    msg.setDestination(43830U);
    msg.setDestinationEntity(1U);
    msg.enable = 213U;
    msg.mask = 2431861794U;
    msg.scope_ref = 1488024605U;

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
    msg.setTimeStamp(0.6934318462343757);
    msg.setSource(31684U);
    msg.setSourceEntity(200U);
    msg.setDestination(834U);
    msg.setDestinationEntity(211U);
    msg.medium = 52U;

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
    msg.setTimeStamp(0.8280183197371573);
    msg.setSource(22937U);
    msg.setSourceEntity(206U);
    msg.setDestination(36972U);
    msg.setDestinationEntity(45U);
    msg.medium = 125U;

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
    msg.setTimeStamp(0.6740231272729738);
    msg.setSource(24055U);
    msg.setSourceEntity(185U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(199U);
    msg.medium = 190U;

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
    msg.setTimeStamp(0.13974095091564342);
    msg.setSource(4202U);
    msg.setSourceEntity(28U);
    msg.setDestination(34390U);
    msg.setDestinationEntity(3U);
    msg.value = 0.3343646062954069;
    msg.type = 243U;

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
    msg.setTimeStamp(0.7134093893596903);
    msg.setSource(26714U);
    msg.setSourceEntity(45U);
    msg.setDestination(35449U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9739269126989408;
    msg.type = 224U;

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
    msg.setTimeStamp(0.5850997999162647);
    msg.setSource(42581U);
    msg.setSourceEntity(248U);
    msg.setDestination(2446U);
    msg.setDestinationEntity(104U);
    msg.value = 0.659208382575385;
    msg.type = 167U;

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
    msg.setTimeStamp(0.22831372817281792);
    msg.setSource(50577U);
    msg.setSourceEntity(112U);
    msg.setDestination(59124U);
    msg.setDestinationEntity(170U);
    msg.possimerr = 0.6920870578875727;
    msg.converg = 0.08312269118769244;
    msg.turbulence = 0.128562972641736;
    msg.possimmon = 136U;
    msg.commmon = 90U;
    msg.convergmon = 94U;

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
    msg.setTimeStamp(0.7865098221729799);
    msg.setSource(42277U);
    msg.setSourceEntity(53U);
    msg.setDestination(51767U);
    msg.setDestinationEntity(173U);
    msg.possimerr = 0.5383975487976318;
    msg.converg = 0.2663698293571555;
    msg.turbulence = 0.9979542066603562;
    msg.possimmon = 109U;
    msg.commmon = 190U;
    msg.convergmon = 17U;

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
    msg.setTimeStamp(0.5961536350700298);
    msg.setSource(29406U);
    msg.setSourceEntity(186U);
    msg.setDestination(47325U);
    msg.setDestinationEntity(144U);
    msg.possimerr = 0.9575640460295032;
    msg.converg = 0.0402441141878519;
    msg.turbulence = 0.6701133506073463;
    msg.possimmon = 177U;
    msg.commmon = 133U;
    msg.convergmon = 239U;

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
    msg.setTimeStamp(0.1863212250973153);
    msg.setSource(45048U);
    msg.setSourceEntity(244U);
    msg.setDestination(8849U);
    msg.setDestinationEntity(60U);
    msg.autonomy = 84U;
    msg.mode.assign("IERKGSHDYIGLXSYBAIITBHBEJRRPKVQFDHDWOSTAIGFRZJDLWUFRRLUTDOAMPOEAYTFJGOLQYCCCAROIMJNXFSHUYTUKWQISUIVAUVOXDICKKYCCKJSZJNBXKLBRBWNXTGVFPZWJPPYQZXPAHULPXC");

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
    msg.setTimeStamp(0.29752619754366794);
    msg.setSource(1280U);
    msg.setSourceEntity(195U);
    msg.setDestination(25770U);
    msg.setDestinationEntity(191U);
    msg.autonomy = 238U;
    msg.mode.assign("GZISBPGOWXLQXMXNWEKOPTSYNAEFZABESNJYTMBHKFPTKGACQLYIFDSVHXQDZVYLNUINKWUEFABVKRABSIUUNIVPCHMVULPPONWTWGOSTLJLCWTKGDDZRPUZHTBRMBEVWKIHEDPDRMLSFUXXQZBMAHQFEQALOFKCGZPKRMBYMHCU");

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
    msg.setTimeStamp(0.15840360567073064);
    msg.setSource(45695U);
    msg.setSourceEntity(249U);
    msg.setDestination(60217U);
    msg.setDestinationEntity(253U);
    msg.autonomy = 181U;
    msg.mode.assign("ZTCIOJKGMVHNANACPNYWUIYUPTROTLDEOBDHEWSMGTZNUXSIHZHWOSVAQMRQQFPXNSDNZKOKBSGRPJJBFQZRVLRKVUAJBHJFWGDFYJKTXVDYLXBGXZTUJEGHZHCEGZLIMQMPECHEUPLHGPAEOVCMSVAPTTQOQIMXXSLKYRFQGHEIUWVNTLYBOJNYIIFWUCAPDAKRBDCBWXYKEYMSVAUBINTDJQ");

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
    msg.setTimeStamp(0.907988151218048);
    msg.setSource(1338U);
    msg.setSourceEntity(42U);
    msg.setDestination(45717U);
    msg.setDestinationEntity(74U);
    msg.type = 179U;
    msg.op = 35U;
    msg.possimerr = 0.3412317249878426;
    msg.converg = 0.18523185490885918;
    msg.turbulence = 0.7838205191957583;
    msg.possimmon = 247U;
    msg.commmon = 118U;
    msg.convergmon = 211U;

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
    msg.setTimeStamp(0.26546447185054334);
    msg.setSource(28059U);
    msg.setSourceEntity(33U);
    msg.setDestination(62012U);
    msg.setDestinationEntity(247U);
    msg.type = 166U;
    msg.op = 4U;
    msg.possimerr = 0.3264886456719719;
    msg.converg = 0.5655378203654006;
    msg.turbulence = 0.679209868656772;
    msg.possimmon = 69U;
    msg.commmon = 221U;
    msg.convergmon = 247U;

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
    msg.setTimeStamp(0.7526492347936368);
    msg.setSource(10939U);
    msg.setSourceEntity(98U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(183U);
    msg.type = 11U;
    msg.op = 147U;
    msg.possimerr = 0.8737560413850504;
    msg.converg = 0.23068691516082085;
    msg.turbulence = 0.8347745447495034;
    msg.possimmon = 11U;
    msg.commmon = 57U;
    msg.convergmon = 236U;

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
    msg.setTimeStamp(0.08757452590775483);
    msg.setSource(47766U);
    msg.setSourceEntity(239U);
    msg.setDestination(42289U);
    msg.setDestinationEntity(212U);
    msg.op = 93U;
    msg.comm_interface = 56U;
    msg.period = 60968U;
    msg.sys_dst.assign("WVELQDARRQYPLTKPVOAJZBIMLIFPQYWPWMCHNOZTR");

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
    msg.setTimeStamp(0.6814598301560438);
    msg.setSource(55224U);
    msg.setSourceEntity(251U);
    msg.setDestination(41388U);
    msg.setDestinationEntity(210U);
    msg.op = 76U;
    msg.comm_interface = 28U;
    msg.period = 28769U;
    msg.sys_dst.assign("HAEFSPXIALXZGATFCWKRAIIMMDLATWJJTNISYQMGLYGUAMIIVNAPTCDTBGHNKJNOSBHXWGHVJFRRYBCMSWVZVOABSQHFTNQBPJXERESYTHOYRLKMYQKLFIBHPCTOIFDDQUWVUQGZTHSCZPUVVPGEKXREHLWQJMCCWPVAODJJDZEKEKGMUTDFEAJICZFGON");

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
    msg.setTimeStamp(0.4372003970884598);
    msg.setSource(5503U);
    msg.setSourceEntity(101U);
    msg.setDestination(22073U);
    msg.setDestinationEntity(178U);
    msg.op = 158U;
    msg.comm_interface = 204U;
    msg.period = 29174U;
    msg.sys_dst.assign("XRJIHHORDFXRFCGZPBVHALTRSB");

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
    msg.setTimeStamp(0.7948536048654942);
    msg.setSource(36957U);
    msg.setSourceEntity(236U);
    msg.setDestination(25827U);
    msg.setDestinationEntity(191U);
    msg.stime = 3834901333U;
    msg.latitude = 0.894942341739088;
    msg.longitude = 0.2571556679757272;
    msg.altitude = 4089U;
    msg.depth = 64076U;
    msg.heading = 16739U;
    msg.speed = 27068;
    msg.fuel = 76;
    msg.exec_state = -78;
    msg.plan_checksum = 27210U;

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
    msg.setTimeStamp(0.001632872110109207);
    msg.setSource(20127U);
    msg.setSourceEntity(147U);
    msg.setDestination(28478U);
    msg.setDestinationEntity(250U);
    msg.stime = 132365972U;
    msg.latitude = 0.06742476974980738;
    msg.longitude = 0.9263962715774636;
    msg.altitude = 6313U;
    msg.depth = 55394U;
    msg.heading = 59989U;
    msg.speed = 15221;
    msg.fuel = -10;
    msg.exec_state = -115;
    msg.plan_checksum = 35223U;

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
    msg.setTimeStamp(0.49793479426899867);
    msg.setSource(47143U);
    msg.setSourceEntity(196U);
    msg.setDestination(48099U);
    msg.setDestinationEntity(231U);
    msg.stime = 559197223U;
    msg.latitude = 0.5837533131494708;
    msg.longitude = 0.050577192733739396;
    msg.altitude = 20084U;
    msg.depth = 55370U;
    msg.heading = 302U;
    msg.speed = -27102;
    msg.fuel = 32;
    msg.exec_state = 65;
    msg.plan_checksum = 52495U;

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
    msg.setTimeStamp(0.30883258799513413);
    msg.setSource(45552U);
    msg.setSourceEntity(137U);
    msg.setDestination(3391U);
    msg.setDestinationEntity(89U);
    msg.req_id = 36781U;
    msg.comm_mean = 146U;
    msg.destination.assign("NOUBBMSURLFCKOGTKVUOKQSPDBZQGTSEKTPUIBKXJEFFXBUQJMSQBHPWFIGFNUA");
    msg.deadline = 0.6972175143632362;
    msg.range = 0.7061933586082716;
    msg.data_mode = 240U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 182U;
    tmp_msg_0.flags = 109U;
    tmp_msg_0.description.assign("FUTCXLXFKYLWYLZHIQXRGGIPHQBENAWAJTGVOEOVYVGCAINSBJEDDZGADSSFV");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WBZPEKEKXRXESDSANIXJZICAWIBZXITYEOWIXNTBLNHFDNSMWDXCTMCXSGTKJWOLO");
    const signed char tmp_msg_1[] = {-117, 17, 122, -39, 63, -102, 52, 7, -26, -38, 88, 66, -120, 18, -6, 99, 94, -31, -52, -5, -22, 85, -20, -16, 65, -75, 103, 12, 38, 55, -31, 49, -16, 45, 15, -41, 48, -107, -74, -122, 15, 108, -40, -94, 75, 121, 6, -24, -97, -12, -78, -8, 24, 4, 38, 41, -15, -74, 10, 59, -93, -95, 55, -35, 22, 90, 6, 64, 42, 38, -127, 29, 34, 70, -82, -16, -94, 123, 1, 25, 37, -40, -25, -91, 112, 91, 41, -84, 104, -77, 95, -83, -76, -97, 15, -104, -87, 70, -123, -1, 23, -13, 93, 86, -71, -8, -15, -120, 48, 121, 25, 51, -11, 0, -128, 111, 30, 92, 66, -87, -51, 88, 47, -16, -74, 22, 50, 84, -36, -115, 24, 61, 14, 33, 65, -51, -37, -87, -43, -118, -24, 26, 80, 28, -84, -128, 97, 95, 31, -97, 97, -18, -46, -126, -86, -72, -77, 125, 93, -101, -9, -58, -52, -82, 11, 77, 17, -83, 120, -102, 62, 126, -79, 16, -33, 61, 101, 73, 25, -113, -89, -11, 107, 16, 89, 98, 126, 16, 89, 99, 59, 41, -46, -128, -74, 119, 111, -48, -7, 48, 87, 72, 78, -84, 102, 40, 20, -128, -82, 45, -7, 64, 9, -3, -8, -39, -106, 112, 35, -10, -70, -26, -112, 5, -117, -78, -89, -104, -124, -52, -123, -112, -7, 93, -105, -36, -126, -45, -19, 96, 64, 70};
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
    msg.setTimeStamp(0.881623561604828);
    msg.setSource(15017U);
    msg.setSourceEntity(34U);
    msg.setDestination(19213U);
    msg.setDestinationEntity(112U);
    msg.req_id = 18976U;
    msg.comm_mean = 3U;
    msg.destination.assign("RFSTUYMZNUEGOBBCFMLURKGCVMXVAJXSVDHUYOKFREGRAFOHCYVIBVMQVPLPURYMIWHKZQCYLNSYPGIBSXSYDINYTEXJFILHDFGQADPZYGOXWCIAQLHXLZZOKCSLWJURMCVNXJPXATATASEPVJTUBXWBQFTWKZHJBRAYBKPDCHZMBEOPFKWKRVWNQLLIEDJPAHOPMQWEDSWUOEZQTGWOENNKGULJTMGZFNITXUJIMFJHDBCDVCHNAQSODTSZKG");
    msg.deadline = 0.8978522462762291;
    msg.range = 0.15939169855810076;
    msg.data_mode = 228U;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 164U;
    tmp_msg_0.clock = 0.211095770200746;
    tmp_msg_0.tz = 99;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QCAWVXOQPPXXWGYYIYHGRGXQZKAJQYVZBKOVUAMRDVWARUTNQNOKGUORWMTRUOMCKDXPZMHYPWXSEULNNUSZUJIDIJCJGEIWBB");
    const signed char tmp_msg_1[] = {33, -38, 109, -99, 10, -71, -23, 29, 36, -68, 51, 54, -75, 19, -37, 43, 36, -116, -117, -81, -46, -102, 34, 44, -105, -86, -106, -79};
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
    msg.setTimeStamp(0.6040595914301575);
    msg.setSource(59324U);
    msg.setSourceEntity(143U);
    msg.setDestination(9511U);
    msg.setDestinationEntity(106U);
    msg.req_id = 47163U;
    msg.comm_mean = 28U;
    msg.destination.assign("URPRODWUSSWXBTTODSRJJRNXDZTQJIGXVYLYEGLFUPHDRWFESZGTHCLOWGQPCXGGJMJBANUUNTTBHYAIDBJYLNQZIPSEYEEIYYCOECAGAUMKXKXDFOKFMEZBFRUEJVVSVWASRYMMKSHNCLCJFVMSHZQIRQCUVKQTWALCAZWHZXBNKYUPNHNWGLV");
    msg.deadline = 0.7581690032264121;
    msg.range = 0.32822831740199676;
    msg.data_mode = 195U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 30966U;
    tmp_msg_0.custom.assign("FVKDTASSMMWOCCIIIUFVNDAUPMKXYGEBKJVQXHRGVZJMWVNBXDWEMOEULPUTC");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XRYXWKFJIIXKVHYWIWAEFNJWLUDLEMDGIURPRIOYIXTGBUUACVRJODNFMDFSXZEGAHUKCATPXXNDVAVADGAJYLKAUUTNFWHLSMLMXRZQVWZVKCDWYOUKPCBBIAUYZUNKLGGZHHQFPKMQBCQLTLXS");
    const signed char tmp_msg_1[] = {-125, 51, 118, 116, -62, 84, -52, -29, -60, -26, 79, 90, -104, -123, -91, -118, 116, 114, 82, -45, 29, -70, -67, -17, 44, -38, 6, -67, 54, -119, -5, -93, -46, 100, 110, 48, 11, -41, -96, -55, 109, -93, 119, 49, -31, 70, -105, 2, -18, -17, -56, 56, -4, -97, -105, 54, -124, 108, 66, -7, 88, -11, -85, 16, -119, -30, 51, 96, 97, -1, -17, 99, -81, 91, -119, -124, 20, -16, -88, 106, -128, 119, -61, 103, 70, 51, 9, 90, -49, 40, -121, 3, -18, 21, -97, 48, -77, 52, -106, 115, -126, 17, -102, 8, -14, 105, -64, 28, 92, -95, -92, -118, 121, -88, 36, 5, -9, 16, -45, 20, -2, 114, -7, -79, 14, 61, 38, 6, -35, -61, 86, -109, -106, 0, -58, 68, -122, -77, -29, -67, 86, 67, -92, -103, -72, 80, 102, 88, 6, -83, 15, -97, -2, -84, -2, 62, -73, 25, -5, -121, 118, 69, -40, -78, -77, 15, 93, 94, 58, -45, -123, -6};
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
    msg.setTimeStamp(0.6751806574705875);
    msg.setSource(54495U);
    msg.setSourceEntity(119U);
    msg.setDestination(53508U);
    msg.setDestinationEntity(44U);
    msg.req_id = 32932U;
    msg.status = 63U;
    msg.range = 0.5367313059915327;
    msg.info.assign("MSFJCOHIWBILCWPPLTMKMYZVDQAMLXLVJEXMTCSSQIFCPFTGOZUFYWUONGJBSQOCCONIZVEKEWZOUFSWSHHEGLUZYGZBJAKHBNMWUDOYYOKPHKONJJRIPMHFJGANYFHVKIDMFFXJBRRCSBYLACPTKPBEGKXWVRNGRWJRERQATVRVMYDQHDLPZYXTDITDHEQRLODUFQ");

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
    msg.setTimeStamp(0.7287929958434971);
    msg.setSource(60352U);
    msg.setSourceEntity(123U);
    msg.setDestination(43756U);
    msg.setDestinationEntity(176U);
    msg.req_id = 22278U;
    msg.status = 87U;
    msg.range = 0.8326643874112599;
    msg.info.assign("LFMZLQKKMIRAMNXBVDWZDXIDFXDQGKFODHJBBGVLUYEQBIFANOSYNCKOUQXEEIFQJASYOPZUSJHWKSKHJQVMUEVQTTELXSISCJSMOIIEZNSCCIATGY");

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
    msg.setTimeStamp(0.08083250693900956);
    msg.setSource(59319U);
    msg.setSourceEntity(99U);
    msg.setDestination(58358U);
    msg.setDestinationEntity(58U);
    msg.req_id = 17373U;
    msg.status = 16U;
    msg.range = 0.46150318027449366;
    msg.info.assign("WDGMDQBBYMUINTVHKCIZAMFPGOSUKXECXLL");

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
    msg.setTimeStamp(0.8210977867321141);
    msg.setSource(16688U);
    msg.setSourceEntity(200U);
    msg.setDestination(11719U);
    msg.setDestinationEntity(144U);
    msg.req_id = 29085U;
    msg.destination.assign("PYXACUZRQOCYIXWSWGVYUHMBTQZYSCPVHVLDKWVAALBPSMNJRHNZSEGZQPCMJGEEYMLIBDGDBKAIACMHTRZHSSZAJWILUXPIMIGHJVZNVEXWLFFJLEQZHFDZANIKJRIOPMTYGRAMUKBQXRGHVCUYLOMFXZCSYVCOAFIYDEPPWKNGR");
    msg.timeout = 0.42919777793679625;
    msg.sms_text.assign("YEFRLFBENLJCELRTBMDMVDV");

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
    msg.setTimeStamp(0.03336523143628878);
    msg.setSource(38608U);
    msg.setSourceEntity(130U);
    msg.setDestination(29999U);
    msg.setDestinationEntity(82U);
    msg.req_id = 5872U;
    msg.destination.assign("SXEQLUWDSTDLRJVOMFCNBJGVQWSZICFRTOTWHAHNYXLOKKYUWMDSQGCVWBMFPHRTEENEFFADEPLZLUMCPPFQUWIGUPQJGIMSAKTPIOEONCSHKXXXVTPBQGKTRMDHIUKLYLYCBLHRHJNKBWULONGOAN");
    msg.timeout = 0.4920780876155946;
    msg.sms_text.assign("MZFVOUESJXMTLTOPVDFTHVPHHNQSLPLGQQJKXEFQBCIQOODNQBWQCGDLFSVCTUTAWAYPBVFBHCINTVHDEOHLMSWGPDEKGOIFJWZRGPORCGYDHZTNEDFRDAPZYWTKRCALINUESELWCIPXYAZSTOCUUGLJVIXMZDYXWCHCNUVKSJIMDJKRNBBLRUWJGHSIWAMOXBYBKXBXJWFAQOZYYENGYBFEZVRKMHAFMMMZ");

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
    msg.setTimeStamp(0.90549964114869);
    msg.setSource(39398U);
    msg.setSourceEntity(161U);
    msg.setDestination(36001U);
    msg.setDestinationEntity(96U);
    msg.req_id = 41763U;
    msg.destination.assign("BBLMQEREXWCZVIGVJWMJFSQKUIVMNWEFKMTJNFUPLRXOQSNFMXXWFXZZYHQCPWUNKPQJOIGYTFCGEARFOI");
    msg.timeout = 0.5218859323533005;
    msg.sms_text.assign("XHWNSXBVGPBNEBDWRFMHQQDWESAFGATZWWHGOFEDAVORBMHTKEZLPPDKYBQDUCEMHJQBNUUTJGJQPRVEBXXVKOVBFDWYMYTISNWDWRYHCSULGFRWUYEGGYCPXXGHTOAMIUKNEFIMTQHIWHZKEPAOLKSNKERUVACHIBNPKIUCJVLFPORSJZUFZCTMSBC");

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
    msg.setTimeStamp(0.1401082504088883);
    msg.setSource(57560U);
    msg.setSourceEntity(183U);
    msg.setDestination(9694U);
    msg.setDestinationEntity(159U);
    msg.req_id = 11620U;
    msg.status = 246U;
    msg.info.assign("BTZPRHMYTZVZPVPCWHRXHUHXTAXSINBZJIQNSNNBBKQOIRINQWMOZPDIAKYFJJLCZLNIAVCYVAGDBBPUQDEKLFTKATVYLSRVWXEVONAROMVFYNRSFCXXLMDPR");

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
    msg.setTimeStamp(0.18097509482153618);
    msg.setSource(24090U);
    msg.setSourceEntity(246U);
    msg.setDestination(59549U);
    msg.setDestinationEntity(125U);
    msg.req_id = 31054U;
    msg.status = 163U;
    msg.info.assign("NPCPJHYVQDYCNSKIRCPOCBFWLIFOGXESUTRMFHTQNXSQZJOOMHFLOYCVCGIIZPABPRGBGGDHRKYVLZLZWIMFFSGUTRIJNMOJLSLGWNMXYOUADVUMEVSAQZBHNQXBFWJFRYZXJZLWIKJFESRNGYJZTEKTDATDHEUBFKMQUUVPWQPQI");

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
    msg.setTimeStamp(0.8202145124859872);
    msg.setSource(46523U);
    msg.setSourceEntity(11U);
    msg.setDestination(36721U);
    msg.setDestinationEntity(231U);
    msg.req_id = 5310U;
    msg.status = 232U;
    msg.info.assign("MHHUKVTPEFLCBIVMHZNRLYWGCJGNRQTDCVKPFJIFUSHJDOTXSUAKKNDXOSTJKXCAOXZCYGLIXAJKKPKEUSRDMIEYIIOXJZMYBXTEREXZIQGRIUKTYXWLZNVSLNYWNWSLRQFGAGABVSBNQOFZQDYNLFQTLAPISWCWGBENRBWPFJJPUTCQZIPBOHUJLDVRASVEBCKDMZLDBQHHYVYEMJRCDHMHMGUOOQUTWAPPWGROFXFTMDUAN");

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
    msg.setTimeStamp(0.8410375546155969);
    msg.setSource(43313U);
    msg.setSourceEntity(133U);
    msg.setDestination(59564U);
    msg.setDestinationEntity(87U);
    msg.state = 81U;

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
    msg.setTimeStamp(0.536589327692007);
    msg.setSource(45959U);
    msg.setSourceEntity(37U);
    msg.setDestination(38823U);
    msg.setDestinationEntity(4U);
    msg.state = 111U;

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
    msg.setTimeStamp(0.2519751436502581);
    msg.setSource(63972U);
    msg.setSourceEntity(43U);
    msg.setDestination(4820U);
    msg.setDestinationEntity(91U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.06797144001893551);
    msg.setSource(29636U);
    msg.setSourceEntity(146U);
    msg.setDestination(48195U);
    msg.setDestinationEntity(214U);
    msg.state = 176U;

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
    msg.setTimeStamp(0.3432647136163607);
    msg.setSource(9441U);
    msg.setSourceEntity(81U);
    msg.setDestination(34919U);
    msg.setDestinationEntity(102U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.6538944105160912);
    msg.setSource(27830U);
    msg.setSourceEntity(76U);
    msg.setDestination(61826U);
    msg.setDestinationEntity(232U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.448833157022667);
    msg.setSource(1927U);
    msg.setSourceEntity(137U);
    msg.setDestination(51525U);
    msg.setDestinationEntity(63U);
    msg.req_id = 23727U;
    msg.destination.assign("OWLNRDWYVWXGYMTUDHPMJCBCWNEAGCSFFZCIYEMLLDPBZFNXMKGXSLEWBUDTHXQQIZUFOZDOJRDUBIDXBVGTJRAJYKZJGL");
    msg.timeout = 0.24215003621704312;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.9974558337102045;
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
    msg.setTimeStamp(0.022883183628347736);
    msg.setSource(24470U);
    msg.setSourceEntity(18U);
    msg.setDestination(26606U);
    msg.setDestinationEntity(76U);
    msg.req_id = 40378U;
    msg.destination.assign("OLFLMDPFVDTVXQNVNWHQWRIVXQMMUIEKCPSVBDSEYMRJTYUUFIXIVNAHDZCXESZWGCBPBCKFYORQFZYYVLEJJNSOJRAZSJAVFSFLLTGCEDKGUMTQQRMYIT");
    msg.timeout = 0.9894658375499992;
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 55U;
    tmp_msg_0.file.assign("JBDPVHYAETHLJTPDFWSNCAEGFSJLZZSTFUXM");
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
    msg.setTimeStamp(0.29052604340249577);
    msg.setSource(12817U);
    msg.setSourceEntity(154U);
    msg.setDestination(50008U);
    msg.setDestinationEntity(105U);
    msg.req_id = 15658U;
    msg.destination.assign("EDAHZXRCKFMFOZBHBDFIJDSPVLUTDKYQZRPENIAGTMTPSLYOGYOKTTAEHZIKQCARBWERGLSDNPMFMSCJVUGDWNJPITWVCGSCZQNOYRZYUZMOLCIQEMUWWXGZFNKMJJADNTTBLNXQKBUAXWDEIRKOHJQSBIWUKREMFSBECOIMFHRNIQUOYXGYQYNYXJARUVFJOPVWGHBTOKHZGYQCPVRXSXTDGHASJBVKCCSVAVH");
    msg.timeout = 0.7242138147571959;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.44569922276755136;
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
    msg.setTimeStamp(0.5688040711059924);
    msg.setSource(18301U);
    msg.setSourceEntity(88U);
    msg.setDestination(62395U);
    msg.setDestinationEntity(62U);
    msg.req_id = 25652U;
    msg.status = 175U;
    msg.info.assign("HCMFCQAPINGLRYFUVQ");

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
    msg.setTimeStamp(0.9179939167315257);
    msg.setSource(42094U);
    msg.setSourceEntity(181U);
    msg.setDestination(49844U);
    msg.setDestinationEntity(221U);
    msg.req_id = 48616U;
    msg.status = 8U;
    msg.info.assign("VZEXIQDYDCUEXGTXCEOUFJVKCGGLCXEVYWXFXRDCTV");

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
    msg.setTimeStamp(0.639060366994052);
    msg.setSource(27034U);
    msg.setSourceEntity(169U);
    msg.setDestination(14804U);
    msg.setDestinationEntity(117U);
    msg.req_id = 22220U;
    msg.status = 130U;
    msg.info.assign("IYQYLEBNJADAVOPWACNKSZLRFCZCGMSYYAQBNMRXTPRUKDMWTJOMHCNGGJUXQIO");

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
    msg.setTimeStamp(0.344873810425089);
    msg.setSource(62537U);
    msg.setSourceEntity(125U);
    msg.setDestination(47747U);
    msg.setDestinationEntity(243U);
    msg.name.assign("FIGKLMXSRDJZINCESIQCMHSNYUAHVYGKPGAUUQ");
    msg.report_time = 0.7446217437250269;
    msg.medium = 246U;
    msg.lat = 0.05613829420131067;
    msg.lon = 0.2354067485930018;
    msg.depth = 0.12440550996648758;
    msg.alt = 0.39443091420262466;
    msg.sog = 0.7738719617231993;
    msg.cog = 0.4972676326337583;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.18599924249770738;
    tmp_msg_0.y = 0.3762755324255439;
    tmp_msg_0.z = 0.6739205574173005;
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
    msg.setTimeStamp(0.6679710224394156);
    msg.setSource(52975U);
    msg.setSourceEntity(48U);
    msg.setDestination(57813U);
    msg.setDestinationEntity(29U);
    msg.name.assign("ALWGIBQZODQPCWWDAXUTQQUJLSNIVYFHYGLRDVHXLQXPDFMXHGKTTZMQDOSGLSTXSQOFSXXOHVFDNEOKOKNOFHMDGBARNDKTWIEMVUAWAPJYRJBJCSXXIMHYUTEJVCISFCCBPLTLUPCVQHHVEEVAJFRJCFTOBNOMQJUYAVDBZKZSORWLBVPNWWRMGNKBHRCYYE");
    msg.report_time = 0.48168173084705723;
    msg.medium = 102U;
    msg.lat = 0.8760787214748776;
    msg.lon = 0.40993304140462994;
    msg.depth = 0.3463509873420687;
    msg.alt = 0.5397797030717693;
    msg.sog = 0.08831543888556737;
    msg.cog = 0.8951012916026285;

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
    msg.setTimeStamp(0.7675163020829495);
    msg.setSource(44585U);
    msg.setSourceEntity(229U);
    msg.setDestination(56170U);
    msg.setDestinationEntity(215U);
    msg.name.assign("WGOAVQLYTMDLWUHZUIWSDBRMLQTSKIMROYKUUYZXBFZTKSVNBIIZPXWNWLWJJPPOULEEVDDJGEJMWDNCOZWYMMDCBCOLPCAPHVCOKWTIEXFGNZGFVLBDAXERWSTSFKAJZVVJBRYSHCCOHNUROMECASPKMQQUUNFQTSHPPXURLHRGBHERFUNYMDQTARFQBKLPAQLGAKNETIINJRTZVXEX");
    msg.report_time = 0.037764983431089916;
    msg.medium = 30U;
    msg.lat = 0.2238472524686972;
    msg.lon = 0.6426579177564967;
    msg.depth = 0.2522944922292846;
    msg.alt = 0.023491764834473794;
    msg.sog = 0.8971502748187548;
    msg.cog = 0.8992940143743944;

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
    msg.setTimeStamp(0.9728060920298042);
    msg.setSource(42753U);
    msg.setSourceEntity(68U);
    msg.setDestination(63690U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.5672803651926979);
    msg.setSource(1315U);
    msg.setSourceEntity(178U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.5049519915244);
    msg.setSource(38833U);
    msg.setSourceEntity(10U);
    msg.setDestination(37364U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.11781080450294545);
    msg.setSource(7143U);
    msg.setSourceEntity(9U);
    msg.setDestination(63516U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("KQYKJEIKZITDJULAYCMOZVTCGLNXWJQHRNBSMNTDGRAGEMEDUUSOHOESOWHNFHJBMNLNJRUSQCBZZBVVQJBAPAFCKIVFYXEBBRLVCNWRRASMKHDKKTYUKJITIIMKZRWZPUPMNOSWWBMRXFGFYOXIHOJSGPA");
    msg.description.assign("WEQRSQZQLEWFBBJHLIJAYFMXESFPTCATWTDYMKSOSPKZPDCNDILIMHVIXBUCIPILHMIDNNLCHJEYDGOJZHZGDQBWVDKHNUDNAWG");
    msg.vnamespace.assign("MEQXAHUSXKGAWZDAMEYAUWNRJWDLXYRBSCYDPKXRNKNTCMUTCMQKCWIWYPPGRN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JQWATAXILIBEBNVNNHHKIFGEILEIQABYUSVFZXEQMNXIRDBAPUOIUORVVVLHNTVCCEGOAZZEWPBABCBVNCCPMYLSYTEFSQCWKXSEKLDHZQFJVOGF");
    tmp_msg_0.value.assign("PTTYIAQNZGTPWTNEYCUSXSHVYINYAJDALAIUQPYMKUANJXRWKKCQPHAGQXLXFVPEMBPQTXGNCJREUSJCPLLFNZVKIXUUUH");
    tmp_msg_0.type = 85U;
    tmp_msg_0.access = 79U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TTNNIUWIFPFQZEGOCFADZMGWMVCFAQGQRDDNRTYENVANQKBXCXREZKJZQXRROANXUWLHCQDUITGPEAIQLHKBEXYBLJCHIWOMYCHVCBINJLYGUHCIGIMLSKRZFYRTMDHDRKJYASPDQXUYBXRKWKOBVFBUPMTLTASZVUKBCUHVEWMLROVWVSGOJOKXTDPOWEHLEQFSGGLYUBPDZWOXSFSZPU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ARXDCLBCTEFDYCVKLOHBAYRPUWJSMSQGZWBUJANVAINFFCPBEDLGHRZQWNYIPVCOHQKZTRLBFPXLEHWUXKVJMSBEWTBJNGCNIQYDFLSOXRMAK");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.29463847514710506;
    tmp_tmp_msg_1_0.lon = 0.7775770915118264;
    tmp_tmp_msg_1_0.z = 0.29603731929258825;
    tmp_tmp_msg_1_0.z_units = 133U;
    tmp_tmp_msg_1_0.speed = 0.38175760952599036;
    tmp_tmp_msg_1_0.speed_units = 95U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.42488980991995984;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.5953800037453089;
    tmp_tmp_msg_1_0.polygon.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("QYXITNGKYQIQLRTSAFLDKITYVOQJUDSXLFXWXTHWSVSXWTGWRZNRDCBVFCQBTPHLXCOPRSOQEPTRZECLNEETUJIMVIQMASABNRWGZYSXKAHSUVTHWDEOYBPRCMEJYDBKUCPKNMZCEZPFVEPKDASMGGODVVEAXIJNRBANZDPAFDJRHZGJMRFMHJLLHYKUBTFIOBWHJYF");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RemoteCommand tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.original_source = 42580U;
    tmp_tmp_msg_1_1.destination = 33212U;
    tmp_tmp_msg_1_1.timeout = 0.23276417927430504;
    IMC::SaveEntityParameters tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.name.assign("SKEHILQEHEGMIXBSMVGOPJTBYNNQMUSBZTCEAHMHSWFPGOPJWJFROVCKXVAFCAUUOCSWCVBUTJHFRSDYQONTMLBEQYTA");
    tmp_tmp_msg_1_1.cmd.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TDTAJAEHEAPVMIFOVWBBDRZNCDKOMRLPFGLGZUFCLKKCMGWFEDWDIAVQRPJXDMRCIFOLRSMLWVIW");
    tmp_msg_2.dest_man.assign("ANKJBHHULJTUCQSLQFWCQKRILTEXBTNNNUOVRKPOFVSWRUGSFVTCNMACCSLHRDWWTJSYFYFGMWYEWAGEKGKAFIDASRYDDPAPJIIKZMZXBEUWBVEBNFONXGUOJMPBGMBWSAJUSVCZAROVXRFGYXHYSZZURRIEDIZQDOJYBHDAVKMUKQGVRJWHLJCKMPYNTCLQNOIPVZTIDCXMLOXEZZBHCIVXZU");
    tmp_msg_2.conditions.assign("WNOBZYEPBTXOZKQEAASFPARYWVNEYJJPKPRNGPEXRMWHPZDNBHSTGIGZTQJHDAHTXUQFYXIPYCVXLSZRJVOZJVDAFVZELLCKUEMKTUPGHIUQEKFNNDFDVRUMDYKBEOQARVLJSYAUBTRGHGWMDJHX");
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id = 49U;
    tmp_tmp_msg_2_0.angle = 0.630310202891988;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::RemoteCommand tmp_msg_3;
    tmp_msg_3.original_source = 24466U;
    tmp_msg_3.destination = 6412U;
    tmp_msg_3.timeout = 0.1620348377077092;
    IMC::IridiumMsgTx tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.req_id = 40765U;
    tmp_tmp_msg_3_0.ttl = 15576U;
    tmp_tmp_msg_3_0.destination.assign("NUKZHHWDLWPQHBKLOQQXNENUAOOWMAJXFOXTNEETZVZVPTRBGNDUYCFNXMJUCMSPTASIQKVDECBD");
    const signed char tmp_tmp_tmp_msg_3_0_0[] = {-73, 28, -42, 103, -57, 71, 98, -70, 47, -87, 68, -85, -93, -47, 5, -85, -68, 14, -61, 10, -6, -108, -114, -101, -97, -75, -66, 96, -98, -89, -124, -2, 106, -51, 88, -105, -55, 50, 6, -22, -19, 101, 70, -45, -114, -33, 8, 119, 101, 13, 67, -105, 89, -92, 24, -18, -11, 103, 106, -116, -38, -115, -99, 32, 20, -32, 22, 107, -118, -82, 63, 83, 79, 30, -37, 56, 123, -70, 42, -90, -100, 50, -46, -18, 32, 6, -104, -5, 31, 78, 20, -123, -47, -81, -113, 86, 29, 16, -72, -16, 36, -27, -28, -110, 116, -108, -57, -41, 2, 21, -79, -87, -15, -15, -80, 103, -31, 17, -27, -125, -24, -113, -20, 85, 26, 24, -126, 55, -23, -42, -32, 41, 16, 97, 88, 108, 9, -88, -77, 30, -7, 98, -76, 11, 19, 90, -50, 80, 69, 1, -128, 45, -26, -52, 82, 65, 39, 20, 44, -30, -5, 94, 115, 90, -107, -38, 108, 28, 73, 10, -14, 28, -43, 54, -69, -29, -71, 82, -77, -31, -71, -95, 75, 95, -43, 71, -40, -58, 64, 2, -13, 101, 74, 47, -83, -100, -42, -104, -120, -33, 75, -1, 28, 45, -46, -105, -29, 99, 89, -124, -104, 45, -117, -48, 113, -61, -124, 27, -64, -44, 4, 50, 90, 105, 91, -27, 115, 62, 95, 4, -113, 122, 42, 29, 75, -83, -62, -123, -87, 50, -95, 105, 27, 90, -14, 77};
    tmp_tmp_msg_3_0.data.assign(tmp_tmp_tmp_msg_3_0_0, tmp_tmp_tmp_msg_3_0_0 + sizeof(tmp_tmp_tmp_msg_3_0_0));
    tmp_msg_3.cmd.set(tmp_tmp_msg_3_0);
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.5559281814048275);
    msg.setSource(18303U);
    msg.setSourceEntity(40U);
    msg.setDestination(22688U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("NWDMEHKETGLLLGSXUDVSUAIZRZLWWKBLFBOXWMSDSPOZQPPFNUMHFTCHOSCAWLAROWAQWSZXKROSRAXFHKCXJTSHFICKDIOQDFJGDEKIJB");
    msg.description.assign("AINSJIOYCSBPUHFBQQDULTDNCPTWVHIVVFPCLLAZEEGTMRFBGBNVYVURUROPDVXIAQEXSEQKGLGOYWAJZAQMEMTSIDEZTRFGEF");
    msg.vnamespace.assign("FISBQCQOHVYVUTEJTOKLPHEEVHGLNYFAMAPDAIOYVOLXSTJTBLKKFHAJJ");
    msg.start_man_id.assign("XUCOAJTNOYBOVYOZEOUYGARJWZ");

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
    msg.setTimeStamp(0.801425309273847);
    msg.setSource(27477U);
    msg.setSourceEntity(173U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("SIIKSLOKFVJLGCMAOSQNHTQJWBSMTDWBHGFABPIPRTKNXRCQRGNHLTMMNBGWZAR");
    msg.description.assign("EYBNLOCIRMUWNETAIEJCBWJFAMDURSDTXCGVSFAYQVCYPPENTMTYMQRSUIPSKRKXHWBYWHPDIGMOKJUXPQOFKRPFCWSEKGWQIAVRRHMAIVQIHTQBXAVOCUYOGFTFKNXGHQSBXYWPUUIFDTCEMDHELKZVNBLNOIJHLAGGPTJZVLFJGVRXZNZVZLCGNOUMLZKADEXAQKZMNPHJIWGJAFHTOXVJZSUDLHCROKZEQZNWYBWLYSQEDYLBCSDDST");
    msg.vnamespace.assign("NKARZOURLJPMZRZKTNDTPCDKEZNBDTCDZCSZBASYJFTPFUBHREZKKQVNWJCOMWTYBFHEYHG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YPFMQNHSQNVVLIPQVQYRPSOWJZRHIOWWVGZCMHZTWIBVNRLZULONDXTFPNJTLKCZHSZJVNRWJJEFLDBOVIWWMGRARUGGCDYXZIUJCCBTLPSMBPUHDQEJKUGAAXMYRDHJEI");
    tmp_msg_0.value.assign("TJVABXNURDCKQEQSOUCPSBWPRFFLIXSIMGREZLHXWNPQKRMDHCDGBDMXQTOEKLUYWSJOKTNWVEPRMCGYYYNVMGKWTDQTFHOAKFZBICTJLJBQZLIAPWMMLURUEGEOJDKXWVYLBQZYVHXUXVAGIIEDEZVSJBTXRLAPSXKGQHHZWAHOIFHXHMNZYUMNUCVBCNRZFLFDJGEPWKPIVNYFGSGZFAVMH");
    tmp_msg_0.type = 25U;
    tmp_msg_0.access = 142U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DSMHATIEFOIDJYTSZGNRCKQDIERKMCRGYAYMBJKHPIDHMLZCW");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("APDAELCYYFEWMHKJIIQOUNVUHRVIIAYWGPNMLCOCSZDDPGJQYDIBMATAXNAINUSCJEXWEURFLRQWKPILRYXVDPIREXKTWODVIQGNUVJKVKGBKHCXEXQXVDSRTMPLM");
    IMC::Launch tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 613U;
    tmp_tmp_msg_1_0.lat = 0.217728992073142;
    tmp_tmp_msg_1_0.lon = 0.2021318244352408;
    tmp_tmp_msg_1_0.z = 0.25684034769107467;
    tmp_tmp_msg_1_0.z_units = 87U;
    tmp_tmp_msg_1_0.speed = 0.021648226520554648;
    tmp_tmp_msg_1_0.speed_units = 14U;
    tmp_tmp_msg_1_0.custom.assign("FEYYPULYRSYQFUWZPVFPEIFA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AllocatedControlTorques tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.k = 0.7084512320248996;
    tmp_tmp_msg_1_1.m = 0.14424738801750137;
    tmp_tmp_msg_1_1.n = 0.5537326700077533;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.701871829036842);
    msg.setSource(62104U);
    msg.setSourceEntity(62U);
    msg.setDestination(63409U);
    msg.setDestinationEntity(114U);
    msg.maneuver_id.assign("SFLTMNGKRTLWEXNCMWSHEHZAIENUPCFPORCATUOSKWRINTUJDJRSDGJQHKLTVQBPUFUZVKMAIAPZAIYFVZIXBUABVRFMIACOXDCZLSUGXXOYEIKHOLRGEBPKGLGPUYPYBZWXQJCJYDVQQFLBO");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 33000U;
    tmp_msg_0.name.assign("KGYGYNNSNQGNLIXTOQJIIDERMXUQTHXHODTHEVIKQGVMXTZHFPLDUYYOADRIZEUYAKWESSWVPWGBFXUSCRAMQOSUEBHFJVZNRDOPLQTETPIHTAGYRWDJBFHJLNUPIGHSJBLDLYJVUMLCVNHXPLDKS");
    tmp_msg_0.custom.assign("HHPKZBPUPWJPFJMSIRGAUXRVYLEUGNUIONDVNNZBCHMQMBJIQQEODENUCJWGGWSOTEXVEHCLCKNBVYWKKFLMXODRRADMKPJSEWXKNNLFHYXGXJLTPSKBTGRDYZZQEAVFVUGFYQCSSVJAHWTJAGOSCAYLDRMYOKDQMAMNVWQFODWMTHNZZTRE");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedState tmp_msg_1;
    tmp_msg_1.lat = 0.1007513171729133;
    tmp_msg_1.lon = 0.10219303614765929;
    tmp_msg_1.height = 0.9687846271566821;
    tmp_msg_1.x = 0.3344949909158448;
    tmp_msg_1.y = 0.019288865020941626;
    tmp_msg_1.z = 0.4456356986503548;
    tmp_msg_1.phi = 0.44371392126154685;
    tmp_msg_1.theta = 0.6789988167821321;
    tmp_msg_1.psi = 0.8692238239693424;
    tmp_msg_1.u = 0.5163340365992346;
    tmp_msg_1.v = 0.7604474199915628;
    tmp_msg_1.w = 0.9338303908333895;
    tmp_msg_1.vx = 0.49160781285423394;
    tmp_msg_1.vy = 0.32943612043800075;
    tmp_msg_1.vz = 0.13427016813450965;
    tmp_msg_1.p = 0.14125625571296663;
    tmp_msg_1.q = 0.6831818068247413;
    tmp_msg_1.r = 0.1368348627637237;
    tmp_msg_1.depth = 0.7769433732963859;
    tmp_msg_1.alt = 0.9739087557929037;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.855808999249912);
    msg.setSource(30308U);
    msg.setSourceEntity(14U);
    msg.setDestination(55705U);
    msg.setDestinationEntity(41U);
    msg.maneuver_id.assign("SOPXOGMOYOPJUAOGVFVVRYYXSIPELLITKZLNNOUEMMTMCSZQAIRWWADY");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.1313540085269368;
    tmp_msg_0.lon = 0.3712566571837792;
    tmp_msg_0.z = 0.9570664056726472;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.radius = 0.2516515699038412;
    tmp_msg_0.duration = 25913U;
    tmp_msg_0.speed = 0.7720124367231624;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.custom.assign("OFMIJUUXHRXHCRCSWOSGKCOSJXQWZCJKACZAPQLRGEREBMFOLJDBAITVTDYEGTZPBDVNIQZBWWGETFKBPXJPTPGLRTWITNMWAYRXMETXFLSFAZIXFZEUTZUTVWVMSAEBBYRNLMPMMKBPXAVSGDFVHQIHIQCQNWFLKLDRUODSOVUHUCGHDCBIWKDNJDQIKQZMSJGNLGYHYYQFBRUSANJIDNOPCUMOSQYNKEYLVAHOPEPUYNJJRKKZOGHWHE");
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
    msg.setTimeStamp(0.5447793069772124);
    msg.setSource(4567U);
    msg.setSourceEntity(77U);
    msg.setDestination(42717U);
    msg.setDestinationEntity(97U);
    msg.maneuver_id.assign("SATYDQIAESFNRMUGLZUYWYJAJFSINQUDHVRIKAYCTGXMTXAPRWFGIIFCCOCTXQCYJGCVWSBTDBPKHITJQJBNRVOHXKARNUFEAYDOQVZEZZVRJPCWKEFZZHNEQBLGZRIMLM");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 33012U;
    tmp_msg_0.lat = 0.5819332472928889;
    tmp_msg_0.lon = 0.32856346688224747;
    tmp_msg_0.z = 0.6125944728928867;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.amplitude = 0.5564420818751954;
    tmp_msg_0.pitch = 0.36403509788610144;
    tmp_msg_0.speed = 0.6845929261721795;
    tmp_msg_0.speed_units = 44U;
    tmp_msg_0.custom.assign("USHMZQBGVNIRZEYXVPSOXKTEDMIWIMRIYJORYKTQZYUNWUILXWESTAZLGTAZCWUKALCEHTVBNWPAMRCSFVLZQFPVHNPZYXIDQOSDEPAEEFOYYBZ");
    msg.data.set(tmp_msg_0);
    IMC::RemoteActions tmp_msg_1;
    tmp_msg_1.actions.assign("YHNEJTCPIYNABJFZPMGKOZVNFBVBMJTHDXYPUFVHXZQRAAZQERPNMQSXKXVNPKRLPGXRNVFELBGEPHGKGHIYWCDIVXABUDAEFJHETMTONCRMETZQFSWYUAAZBWXBETPNTZOQKFYUWJTVQJOOIXTNYMATHIAOBDGIPIOSZMWRRLDKWXLIHQLMMCWRJ");
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
    msg.setTimeStamp(0.37338098687991794);
    msg.setSource(24730U);
    msg.setSourceEntity(11U);
    msg.setDestination(11426U);
    msg.setDestinationEntity(18U);
    msg.source_man.assign("SULRBPBMXPAQRISWQRHSJJSOZJECLSFTQEQUNURNODLRDUWFVINPLEHMKDXAMVVCHZDGYTHEIVBCTZMPZZRBLXTITZVDVUXVAJGGWNZYUGMZCFWFIDRPTBCHPNAGKXNLEELAKIMPHKOIXYZPBIKJVRLOOXYMZHFOAEADWQVGQCUMYLTJUTQKTOGNWFHWWAYQUUYMNLBHQYBSPOESNSKXFRJJOFOCTMXDBIIWDSEJWKGP");
    msg.dest_man.assign("WLPPNXKQTBKFJTXZAEKSTRWPGYABSUMPOQAMVXQVLNOLSYSKWTMM");
    msg.conditions.assign("LGQOSUTBZYVDFJYBUENVTXMRXAUIWRLDDMBQVTJLNWJBDFSPOIWWTMKJPCHQASMXWQYEHRADXBPQYFTTYEWJNXLAOVHAXXCQFPKUPAONQYWKFZFNNIAFSRSMCLDBKHJVBBKKOJVNALXGOGLJSGCUCEUIIGIMPMNEHHFBGYJAMGPGUUZOGRVQDKKPWQPRZUQFFSDHVLYWCJZWIZSRXOYRBTUCNVXEVOSHEAIIRMCETTTPEZZCZSLDNMLEGK");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.6728648447806067;
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
    msg.setTimeStamp(0.10885564803839698);
    msg.setSource(4088U);
    msg.setSourceEntity(139U);
    msg.setDestination(858U);
    msg.setDestinationEntity(24U);
    msg.source_man.assign("JDRNOBFZKAFDEJPRKYFICROLNIJUGAGQMOTBCWZICTQMFRKLEILPABZPMZIMQVGATZFDKMSDTPCEDQGLCXKHYGMBIXQRVDYAGYAO");
    msg.dest_man.assign("NGSRBKJOYCUUKLOKMSURPZLOZLYKREPJABNHFRPBISYVDPQZRHQDAFSTYTCIDZHTPFZVCYQJDXXWVKUTWHGLMQTMLPWLFGSDFCCSKYNFLESHXY");
    msg.conditions.assign("HDMWTDYRBQUJDBIQVUUGHQQZPNEDIEUFTHRHPXQPMCSFCGOCKDPAHNSTYZQXMGYKAJNNWJAQHZQZNHEOJUJFMLAGWVPBBOPAKXIPXVRAANZXTSHMBVKCGMVQMYTELNECABIIWS");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 199U;
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
    msg.setTimeStamp(0.8357229143558449);
    msg.setSource(48348U);
    msg.setSourceEntity(242U);
    msg.setDestination(38468U);
    msg.setDestinationEntity(144U);
    msg.source_man.assign("FYVEPJCCXMHWYXRVICWUTNLZONLLORIXKAKWITMYPNNGYESGNAXHLAWITTLXGWBFHSYAYGNADECUDMVQOJCQMSUPPRWDYFNBLREMKJDJYEIDWQHAZZ");
    msg.dest_man.assign("FIEBCMDNCHTPOKQKZZFWDQJZAHFVVHPTLVQSKMXWRRVZAXNHZGKNPEJZVKGBPILVJHCNRWUYMUQBLUOQDOXTJETKNCZSHWSJAPLTRXO");
    msg.conditions.assign("ZBDWLNQNKBXIMUAEVLUPAUOHRAMMKZGAEYMQLCYMHYJRPTDJECFPNUOYVDHWMEJOXLPIRCXHSJRWVHGSHNUZIKGYFBLOTFIDBHQWLLUVSUPUKJDBWAJNICIGPCWAORSFOGCST");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 4118684909U;
    tmp_msg_0.messages.assign("QMXGKBDXYFDDNMMSPAMTKIFTIWFFDQUYBVUGARXBOZVUODWWEOHSMTNHKPPWTHYRKJGGWALIVTFLEHRWIEVVCLTKZXVJEECSNTXIYYNGSOARRUPLMXVRZIFOXBZZWGGBJGFZQK");
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
    msg.setTimeStamp(0.5895047183686832);
    msg.setSource(15214U);
    msg.setSourceEntity(221U);
    msg.setDestination(7831U);
    msg.setDestinationEntity(78U);
    msg.command = 190U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EHBTWSMJXFQCXLFSOMGUJGZQABDNDSGGGIBOCGXNVRTTQWOBFP");
    tmp_msg_0.description.assign("JDTAXYGBPFHYWWPWDCVUUPKQZGIVWML");
    tmp_msg_0.vnamespace.assign("PFSWUIAKGQAUYXMDBXUWXIURSDAONELBHCMHWZKNYAKODARQRGVOBYPGDIUYKVQRJKELLRVEZEHKXGXIZIBCAMGSBKRMEJZIJWVWFXUGUJFWTXQOSPOBFHNYELWFPSDC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XNEUCQOBFQTEHXRHNUNIPKUGTZFEBWVPDEQWZJPLGNYKBLQVCSDTKTIKLSVTGKUWSSPDMJRONRHAKIRYDCHOVGWFPXXHZEUOAVMFWFGVZEXIMZFCIFYREJNFWYOLACCUJUSQYCXKHICLAJRGQDRNSCKPHHBNYLMTADIBYRNRJPXQVGTWMMPWCSHBORYLIESAKDTSMZXJXGGMLGVUWZEQOOJITLAAKBFFLNMPZZYUJXOAUZBHDMQDTDPVI");
    tmp_tmp_msg_0_0.value.assign("NTWZRWQXKLUAEMJOHIYKJZSPZGDMSUCKXIEKSCYQOAUTLCMDZNWTORRIJUHAUQEVQNGIBPBOYRNQMTUMUCBZFGSVJGJNELQAPVGZYNQDEXRAAUFBALXFHDNHPXLCCFBIJZCZFWGKPHFPIYBDLCLFDDHOXMTEKADXGHFKUKITSYOJVRAZVQWFGKWDWMPBOEMJZMYUPVGGCVFVHVAJSLOXSESHNSELTTVRXSYYWRYNIQBPDQLJOITWRT");
    tmp_tmp_msg_0_0.type = 5U;
    tmp_tmp_msg_0_0.access = 125U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VQBHTZXENNPENVUFOQZDECIPHMCHKJGNNDKXZXTBGFQZXPKKGZFSOGKTEICOZYPFDPNRWDGIPVLUIMBGWOFWKILTLDYVKSFUZAIG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KDRGEZNRLYWDLOWOYWZKPGAPOEFJVYVQYIKVHJUELCIEDKTDXBNXONNCYTZKSASHEMYKFSDYAEWZUZLXCBXUIYBNARDLBUSPZZXHEMCAOTOMHMIWAUBTJGMVCGDZTQUNJBCYXVGMIRQZQAUJDNGTOLCNVGIQTBRKGWSO");
    IMC::Sample tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 29748U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.31910677227344486;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8781207522844907;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9148810226250516;
    tmp_tmp_tmp_msg_0_1_0.z_units = 61U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.48214318194639083;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 0U;
    tmp_tmp_tmp_msg_0_1_0.syringe0 = 237U;
    tmp_tmp_tmp_msg_0_1_0.syringe1 = 167U;
    tmp_tmp_tmp_msg_0_1_0.syringe2 = 66U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SFNHFTAGHKPZRBLSGYDLPQOVLFUAUOVNLCDAGWTTTMDSPNILHACIAUCRYRZCXEXAVMSNFPMWLQIIBCWDJEWYQYBSJZQIIXSQRUTEKEJMXZFBDCNHNQWVPBQHTFEEKHYGEQWIO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::VehicleCommand tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 228U;
    tmp_tmp_tmp_msg_0_1_1.request_id = 17698U;
    tmp_tmp_tmp_msg_0_1_1.command = 6U;
    IMC::Dislodge tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.timeout = 53901U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rpm = 0.40958791463770483;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.direction = 142U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.custom.assign("KCYJZTMLZSKNJAQXBFCNAGELGRLHGXLCITWKCRXYPDLNSLRUZYOODQPTOJTXYTKBCTFBDFIUYBREKUMQWXCWIPDJXXDSAFJFFXOMVRUECFQHVWYIFMPETUSEGLVKBEPTQOMUQMBINRONP");
    tmp_tmp_tmp_msg_0_1_1.maneuver.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.calib_time = 44681U;
    tmp_tmp_tmp_msg_0_1_1.info.assign("IERTKHCRRWFAMKTBDDKTDSUVHAFNBPCIBQNJMHRUOSLYEVOINXMUOUSGGTFFPYQTXXQFBHNXJKHXWTJZVDAXPEIQPLCOZWRRPGCSGEUIZTMKOEOCQLNOGRGBGJLHYYDHLUWQMWVRTHXAWBPFIPYQJJFKSNWOQZFMBCM");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredHeading tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.49040817788018287;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.20889160849319688);
    msg.setSource(32176U);
    msg.setSourceEntity(193U);
    msg.setDestination(56091U);
    msg.setDestinationEntity(155U);
    msg.command = 163U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PQXAWTVBJUKUFAXEDGDTXMDFLZJYNHRPJGVRPRUHSJCSSEGUVIFEHJLNKEWWLOCOMVCSLFXBDUPSMYGEEUZXHICYXIKOLDYRZVCLCQPMPVUHYWOHRIVFELCOSKPYKAKCPQYONHDIGBZJRESMGIKRZGBTNNIFJBQNQLXISVNPQKJXWTULICSEBHZMXVZGGFFDGA");
    tmp_msg_0.description.assign("MFHADJQIEYUYWJZNQKZOECWBXSJHPSQAGFVFFNUBIAPYRRXZNMFCKHEPTUKYSROCLTOTJFALZHSUEKECEIBZADPLQWMPGVONCDPRLKVNUOGUSPCLRMZI");
    tmp_msg_0.vnamespace.assign("CRTWQODHRIVFKBIFWUXQRJLHNRLNWPWHYJXRBDLGTTDIFNCKUJESXIWCQUEFJ");
    tmp_msg_0.start_man_id.assign("KIJFQNKZYNWMFUZPJZKTLKDZDSAEEMIEYWCUASVARIQECNTKAOYTCVOYRUPENXD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("PFKNJWWXTHDBJBYQVBRKTAZUZGGBFIVCDJJEPPEPALGMWSYHCFESHJVJDNCTTSYZUWRGPZRMPNMMIXIEQYLNZEVOLSORWMGWXUUACROLAJMECMTKEFJXGDXVUSNDVNNBKYCGLWGZVIKJIDYIHUUZAUNDHZUFIYDPTQFLWFLXXRXTQKOOHRGRQOEMVVEQQNPCIMAQFKOJOXQFHCVUA");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0710408593746007;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.09866849818193857;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7565821690470835;
    tmp_tmp_tmp_msg_0_0_0.z_units = 192U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7732090516782136;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 79U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.015015680118735886;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.786217873646717;
    tmp_tmp_tmp_msg_0_0_0.width = 0.41615869445805553;
    tmp_tmp_tmp_msg_0_0_0.length = 0.1762349647084911;
    tmp_tmp_tmp_msg_0_0_0.coff = 208U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.0063086314539790855;
    tmp_tmp_tmp_msg_0_0_0.range = 49106U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 214U;
    tmp_tmp_tmp_msg_0_0_0.flags = 118U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("EHNJVZGFKJAGZJWHAAMEHXCUGOXZLFOQLSZUIVRMDUUKUBZAJIWGHDLOTASUACSDEIBLLFPCZTKYUGYRITQTWSOCNEPJMTFMJBDPQBQSHBCWGLZEUNDKJFHXGXNLUNXVCHQIADWKPUMCOTVDWBSLOPPFHBZHXSYFKARHYEIVQXPWYDYPCJTZRPVGFMROSLSMXMQYZWESJETONBEOWVCIFIQVRKATORBXNRCQKXYINKGJNMVIV");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZSWMXRCQGOFDWOHNBAKGQCYRHGLXXHRRUUCQGAQTWKTIWTDORNOZCOBQHYMNYUXSBPLQPEUCAKHHQFQXFWMHPJGSTQYCNNZDZZNPLJXWMWAJJAEQBPLKXEUDXSTEXCZNXANVTJROIVGUJLRIR");
    tmp_tmp_msg_0_1.dest_man.assign("DVCHMIIPZNOZUJJDYXUANYCMYALAHBPSFRCMZGDUFFLTDZJMNWOBMDWEPTLOCBYRPGXKGRRXLMJEXXALGSTDXELEWZPBMVOXIKZCUZEPFSPJYK");
    tmp_tmp_msg_0_1.conditions.assign("MLELPXJZONLCYJOYJGRCTUXPSPPQMYYQWMXTGMYVZQQMEOIRSBGHPLDHRPNS");
    IMC::ControlLoops tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.enable = 234U;
    tmp_tmp_tmp_msg_0_1_0.mask = 3513075305U;
    tmp_tmp_tmp_msg_0_1_0.scope_ref = 3679004251U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.590963964027445);
    msg.setSource(51428U);
    msg.setSourceEntity(124U);
    msg.setDestination(3415U);
    msg.setDestinationEntity(67U);
    msg.command = 64U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("USDEKJKELYQEHHSMFWYQGJLXBMUHWGMZHYUBTEPWNKQIEOLXVNWBGNPUQFSAXZLOKIKNSLLNPODZNSBTHFNRBZLPXQBPTDCRFJDIIZPSXQODZCIFWUNVPVRAOMMVOYMXGUIVDTCRRWCMIIXEGTJKQKZCDLEYGOLCFBBAUGFHPAGJMAAURDKRHJRZBWRTMTYCTFUCEKFVTAIWGOZQDNAOLXVUJAVNJHJRICKBFPQVP");
    tmp_msg_0.description.assign("USAPAQBSETCJZOPEYIBPPGOXNYYTOXEGKKQOTQCJFYLODVALNEKBVCILPCZJXKJNNZGWHTOFIIZDTCOCHZGVBZCFHSKDEGKLHWMNIMLRRDMQXKUTWTXKYRPKUOTDWSIFDMYTLGHVANFLCSUEIZHLIEOPBVLRSHAXMUFJJBKIHXH");
    tmp_msg_0.vnamespace.assign("TLBSZPGPHMROATFSGHIIKEWVDHX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OWIFZBOUFXMZORBHRQSRNTEJKFDVDPFNHAAYOMGYTRNGVJYEGMPICREVIZIEJOQPRGLWSHRQNUMQMBGSOJZXJEXAKHYKSJGSBDWILBXCDVBXHDVXVEIYPCCOYOSBUXKDLECSAQELDDNWMF");
    tmp_tmp_msg_0_0.value.assign("MUXOLLOCGUXBRPTOAUHHXZYENFVBRAFSKBWWTGUOGTSTXNIPDNQORCFXCSTRTSMKQZVKLPDINVJXBUFEQUCLNMGCLOIAZDDJNUJSAERYCMBSUTJHWEAGYOLSKTSAWLWWPIJZONKQJMZQGPAKPGMUDDSPVDGWFDYQZKZICICPNBBREMHNIYMYJGERCIFG");
    tmp_tmp_msg_0_0.type = 78U;
    tmp_tmp_msg_0_0.access = 201U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LMGVEOFYQXYOSBISNVXXWWBXNLXQFFAALGBNMZFWRRHLYUPBRKWCCMBPWKRNPSZLZSHLSPUFCHJSTHZSAGIQVCUVHECWIKZRFXLAONGRCGNWKSOAYYIXYQKZQDTIBQJRMIYMYLFTEDKGUVJOJEDDEMOUJZCRPQ");
    IMC::UamTxFrame tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 4451U;
    tmp_tmp_msg_0_1.sys_dst.assign("ESPNIEFELVAXEJHAIRCEFPMRFOKKEVMQABJFBBRXFEULFUTMQQWVUDURLBNKCNLUKQSCMCZWBAKCXYJFWGVTXGVHOSEIPTQMXXGEDSLVHHJWYJLAGCTRMGKQTEVIUABWYZPLCUNPLTOPJANDQNHOTXWXIOODMYQI");
    tmp_tmp_msg_0_1.flags = 90U;
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {117, -94, -20, 32, -69, 101, 95, 7, 40, -57, -82, -60, -94, -121, -65, -60, -31, 39, 17, -57, 125, 111, -36, -56, 82, 18, -81, 17, -55, 19, 123, -12, -5, 73, 125, -105, 105, -10, 126, -29, 93, -79, -43, -32, -124, 122, -63, -99, -95, 63, -86, -8, 70, 6, -49, -100, 109, -14, 10, -57, -84, -79, 119, -93, -111, 80, 87, 78, 30, -48, 87, -71, -59, 123, -101, 65, -125, 101, 77, 124, 31, -2, -94, -8, 96, 38, -35, 40, 60, -99, 15, -95, -21, -55, -114, -60, 3, 93, -53, 11, 80, 111, 124, 45, 56, -107, 84, 71, 3, 80, 66, -94, 89, 93, 54, 81, -43, -44, -120, -82, -15, 97, 21, 51, 63, -37, 19, -100, 124, -125, 44, -68, 82, -115, -21, -8, 107, 8, -17, -82, -43, 58, -124, 123, 126, -110, 5, -15, 26, 36, -64, -65, 52, 77, 106, -26, 15, 94, 9, 57, 12, 112, 67, -40, -13, 42, 100, -103, -30, 8, 110, 113, -82, -77, 123, -97, -45, 43, -66, 21, -116};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.8530997088650296);
    msg.setSource(11712U);
    msg.setSourceEntity(1U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(243U);
    msg.state = 189U;
    msg.plan_id.assign("YDBXSRWVARFPWEDGBUHYFCLQGQRDXXXBVLKXZZSBPOCGIWGAPZDIUKTAGCICQQSSWEAVIHVYOEHADJRALQEBMMFXXSGFUOWFINSSLKWSLGHPSNN");
    msg.comm_level = 8U;

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
    msg.setTimeStamp(0.31115137242317226);
    msg.setSource(45483U);
    msg.setSourceEntity(120U);
    msg.setDestination(7712U);
    msg.setDestinationEntity(99U);
    msg.state = 138U;
    msg.plan_id.assign("VWHDFDFXWJEOFWOEOUYPDWYPOAYC");
    msg.comm_level = 116U;

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
    msg.setTimeStamp(0.1501442713330653);
    msg.setSource(41688U);
    msg.setSourceEntity(79U);
    msg.setDestination(22280U);
    msg.setDestinationEntity(32U);
    msg.state = 87U;
    msg.plan_id.assign("ZOKUPPIBNWSVLHDEEVAARFYSOZLTKCJHATBGEKQYITJXCFQDEPVFZMRMAWNLRIPDJMJQESGFUHLOZCXUBUYOHLGAHNV");
    msg.comm_level = 7U;

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
    msg.setTimeStamp(0.631088306094989);
    msg.setSource(51710U);
    msg.setSourceEntity(42U);
    msg.setDestination(25008U);
    msg.setDestinationEntity(32U);
    msg.type = 80U;
    msg.op = 132U;
    msg.request_id = 49465U;
    msg.plan_id.assign("ZMOTIYCSUMGLTENKXQDMPKEPDYVPPLAQJFVKTPWCGHZQOOJDOVKKISWLJSSDXHLFRRBZOGRAUICKOYAUJHZHAGAFYFBKHUERSJQBOUOEGWGERTIVHBKVLTWDIFXJVFWRDHTEUONXWCWNQXXCUFBLWVCZJYJAMBZVQGPXYDNQRYDLNABQMRZIBIEECTFCOASBMNQWCVRJINMIZXHLSVAYGKZ");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.6619961505882422;
    tmp_msg_0.v = 0.8596776657979261;
    tmp_msg_0.w = 0.7774871641360507;
    tmp_msg_0.p = 0.083036887835641;
    tmp_msg_0.q = 0.5422421264243926;
    tmp_msg_0.r = 0.2528350574855719;
    tmp_msg_0.flags = 114U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DLILJATCQALRLHFNERVLUWPQLLPUONMBEAUSKGVBSXAEXGPZODFHNVCGFTGWTCVNFXALUCSGSLUHYKFZQFBRZLBFSTAGBTJPUHNCYVHMTGSQYDIIBPPAJTHECVMNSEOUUMRDKMPCVRQHPZHWMXZIYWUEERSQJATKFEXOGJBWQYDQVJOZYQXMKBOKZDCQHSSVJYXIJYRPNZRKWRMMHOCAWDJKXMYJCOWWRUIYNDPXTDGFO");

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
    msg.setTimeStamp(0.08759232433504782);
    msg.setSource(40940U);
    msg.setSourceEntity(233U);
    msg.setDestination(4104U);
    msg.setDestinationEntity(193U);
    msg.type = 156U;
    msg.op = 223U;
    msg.request_id = 46480U;
    msg.plan_id.assign("KFGNCRAYYXZTQHBRNWHWJGENQIDEZGVBHSXIVRPQXTXNDVEYRPPMKTOGBXIUTJHVKLJUXOQWMCURFJISNAJHMDVSORDCWSMHQDLFSCOGLMDKUPUSJUGGEJPFVOAVHN");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 58U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ECVHJUENOLPHYDWSJOGHOZTMAKAHCQTYBPIUZYGZBMRKYJLJVLAHANORSJKQCDXRQFAXJRKJRDNNVUXYSSCZMXKUIMFPSJRVLJFOANTRUWXBIFFLTTTZSXWDDHJESBMVXGIBPENF");

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
    msg.setTimeStamp(0.6283164145882687);
    msg.setSource(1117U);
    msg.setSourceEntity(37U);
    msg.setDestination(40821U);
    msg.setDestinationEntity(226U);
    msg.type = 144U;
    msg.op = 79U;
    msg.request_id = 18847U;
    msg.plan_id.assign("TNIWNPRBGKWWWOHVYYAUOFYCWXHBHQUOTADGIKBUZTDNKBRSQAANJWPNOIHPXHQVSRLOOFJJMPRJCSIFDPZMRAXHIGHUYAEEFOGSQQZVBHJIJMDTJZCTAQNMSJAKQZOEFPTWBBBGNLRHRZLRMQUYKLXLBGSVTLDUEIXKRILVDUUCKAVTCMEYQUUTSLYVAWQCRKVWGCXXZFSPPNXVHIFFJSXEECMMCYCMEEDMKZZYTOYENLGIDPWGPFZO");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38301388261867253;
    tmp_msg_0.lon = 0.7579068526546124;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YXUANKLVXANECIQIOVNGSUOARPPAKPPVFGZDJTQKSZXOYPQG");

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
    msg.setTimeStamp(0.4063691943166843);
    msg.setSource(53852U);
    msg.setSourceEntity(64U);
    msg.setDestination(45200U);
    msg.setDestinationEntity(217U);
    msg.plan_count = 21245U;
    msg.plan_size = 2396535249U;
    msg.change_time = 0.8010602652466394;
    msg.change_sid = 52396U;
    msg.change_sname.assign("ACGJMQKYVLQVDPWJLWMFAWWOLYGPX");
    const signed char tmp_msg_0[] = {-56, -81, 100, -83, -50, 36, -105, -10, 49, -121, 13, 99, 88, -39, -105, -24, 105, 105, 3, 14, 37, -21, -34, 107, -6, -36, -62, 86, 102, 47, 88, -16, 11, -37, 76, -30, -17, 46, -39, 88, 42, -119, 52, -116, -102, 108, -1, -65, 16, 63, 0, -72, 95, 93, 0, 30, -29, 97, -86, -122, -98, 62, -32, -109, -123, 21, 18, -9, -57, -121, 115, 69, 109, -57, 24, 56, -117, 34, -127, -17, 5, 99, 124, -125, -17, -20, -44, 117, -78, -40, 62, -8, -112, 105, 9, 117, -126, 11, -6, 26, -87, -126, 101, -54, 68, 118, 22, 101, 73, 47, -108, 38, 2, 36, 19, -1, -42, -102, -84, 93, -48, -105, 100, 65, -16, 43, 24, 100, 14, 125, -122, 44, -24, 8, 79, -2, 111, 28, -76, -7, 49, 59, 5, 108, 102, 62, 16, -84, -40, 35, -34, 122, 79, 110, -111, -31, -108, 92, -109, 5, -59, -102, -27, -95, -85, -88, 68, -83, -79, -125, -118, -13, -120, 12, 98, 17, -15, 31, -44, 96, -124, -117, -12, 91, 97, 12, -74, 106, 73, -50, -83, -41, -61, -71, 10, 3, -103, 91, 78, 117, 45, -74, -108, 87, -94, -96, 76, -65, -42, 34, 0, -90, 7, -115, -86, -57, 35, 13, -77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.8486465891378112);
    msg.setSource(40821U);
    msg.setSourceEntity(93U);
    msg.setDestination(23855U);
    msg.setDestinationEntity(41U);
    msg.plan_count = 24217U;
    msg.plan_size = 3927431984U;
    msg.change_time = 0.24874314165558375;
    msg.change_sid = 55645U;
    msg.change_sname.assign("CXWUIKIVVVBUTKOMREDYRPTSDCAIYOBGSXHRBZNOWXBVSJQUHUNGRICGXPBGMIYDGOTLNENSRCFSCVILVOJESLLORRPFTBPTLCWFPNWQWYUQXG");
    const signed char tmp_msg_0[] = {83, -74, -17, -1, -12, 60, 75, -49, 99, -67, 116, -69, -62, 67, 56, -47, 39, -115, 67, -115, -104, 77, -83, 53, -84, -48, -53, 56, -55, -105, 123, 32, 99, 79, 82, 82, -127, 3, 114, -116, -74, 47, -93, 37, -97, -89, -18, -80, -104, 9, -60, 70, -108, -39, -11, -127, -62, 59, 85, 16, 67, 43, 63, 29, -78, -52, 61, -15, -34, -7, 41, 22, -28, 109, -56, -120, -120, 15, -4, -10, -37, 69, -23, 67, 47, 6, -125, 22, -44, -87, 108, 69, -29, 83, 69, 39, -25, -75, 120, -59, 68, -74, -122, 105, -34, 25, 53, 118, -83, 107, -55, -86, 49, 54, -119, 21, 29, 68, 62, 94, 89, 59, 102, 61, -61, 64, -62, 113, -24, -59, 120, -77, -9, -19, -62, 16, 43, 119, 6, 93, -47, -8, -64, 24, -25, -91, 70, -61, -31, 19, 30, 3, 123, 100, 52, 90, -20, -102, 99, -47, 83, -36, -25, -119, 126, 50, -71, -70, -117, -92, 104, -30, -101, -27, -49, -26, -125, -90, 37, 27, 52, 69, -46, -55, 36, -69, -6, 44, 32, 23, -55, 107, 7, 101, -125, -10, 4, -46};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FZCJHACSUYTCYGWHTLVXYMASGJFSPCIVTYWTFELCFXPNIMWKAXGJQGBTSCWUNAVQAXRAMDXINDJXFJDOCUPAVGKZZQUWQPENWFSCVZBNRJYDWITKXUUMZUYNJMOPKMKBDQIGSOQRLLBQFYQOFBEDRLTSEBLPLMDBHBPERZJDTRZNAIMXZFTDEQGEGYCKKWYESSLOJQYPIVVOVHHHRJVKWXOOMIHSUHRUHPKX");
    tmp_msg_1.plan_size = 26389U;
    tmp_msg_1.change_time = 0.13533841836208693;
    tmp_msg_1.change_sid = 55834U;
    tmp_msg_1.change_sname.assign("RRWGECOGSTBHNZLMEPIMZBKNLTZFNGJAHPYVZFCFRNVCPBPKEFHOWWT");
    const signed char tmp_tmp_msg_1_0[] = {-4, -53, -7, -17, -66, -93, 111, 62, 40, 57, 98, -6, -68, -100, 16, 118, -96, 123, -56, -66, 16, 96, -104, 46, -60, -95, -50, 84, -22, 78, 50, 55, -29, -99, -22, 49, 13, -103, -23, -79, -28, -15, 73, 92, 60, -1, 106, -26, 115, 50, 42, 29, -125, 54, -50, -115, -46, -124, 102, 89, -104, 118, 126, -59, 51, 119, -66, 9, -100, -122, -55, -25, 27, 118, -79, 38, 72, -74, 24, -101, -86, -102, -8, 83, -30, -34, -108, -102, -61, -100, -104, 15, -37, 68, 73, -64, -76, 18, -58, -31, 53, 19, -44, -61, 36, -85, -82, -50, 54, -44, 15, 112, 85, -8, 61, 92, -31, 24, 105, 5, 75, -80, -126, 48, 23, -127, -55, -66, 0, -109, 71, -38, 73, 112, 104, 123, -84, -117, -31, 36, -16, 86, 84, 94, -82, 59, 57, 69, 20, 49, -11, 6, 114, -2, -109, -43, -56, -122, -17, -98, -101, -108, -123, -35, -36, -5, 108, 9, 90, -78, -123, 56, 65, -3, 89, -70, 11, -83, -128, -75, -89, 4, -103, -56, -15, -95, 32, 120, -66, -32, 15, -89, 81, -24, 66, -17, -17, 39, 76, -52};
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
    msg.setTimeStamp(0.5020797847580015);
    msg.setSource(46118U);
    msg.setSourceEntity(138U);
    msg.setDestination(51422U);
    msg.setDestinationEntity(49U);
    msg.plan_count = 26739U;
    msg.plan_size = 358212547U;
    msg.change_time = 0.6209657735790867;
    msg.change_sid = 40830U;
    msg.change_sname.assign("LERDJUXMRHIIKBKIISSZGCMIOJBESANQCZPIAVEVWWVRLFSGYPYODZUWLTKPFPSGKFJNBBUHCCJTHDABDBCRTJQLQVGXRSOGQSVUZNTNUTAXKACNRGRLWMRHOYMUCFDIJHCMNVDVZXJKQMQXFKOGVCEDZEPIIBBNZAWARMOMZLVXV");
    const signed char tmp_msg_0[] = {48, 19, 62, -126, 125, 81, 15, 10, -91, -108, -51, 53, 20, 6, 94, 41, 100, -47, 29, 93, 8, -115, 108, -18, -16, -35, -90, -76, -83, -68, -117, 92, -58, -15, 21, -109, 113, -86, 73, 87, 10, 3, 65, -118, -82, -20, 24, -75, 119, 118, -38, -121, 33, -39, 94, -79, 93, -32, 50, 93, 12, 16, 47, 55, 17, 79, 122, -31, -110, 95, -6, 76, 70, -71, 55, 106, 39, 18, 67, -10, -3, 54, -87, -103, -53, -13, -36, -31, -69, -11, -123, 116, 116, -73, -102, -80, -30, -59, -100, 63, -75, -11, 16, -13, 14, 113, 36, -94, 75, -39, 93, -70, -50, -122, 42, -2, -23, 112, -117, -9, 115, 65, -60, 82, -48, -55, 79, 53, 109, 39, 101, 86, -103, -55, -6, -111, 102, 10, 30, -72, 104, -108, 56, 14, 89, -34, 79, -56, -1, 89, 3, -68, 59, -125, -76, 115, -121, -82, -19, -20, -85, -40, -87, -13, -64, 18, -69, -21, 20, -54, 1, 42, -83, 49, 122, 107, -56, 16, 39, -44, 109, -44, 70, 85, 82, -102, -59, -33, -50, -68, -9, -123, -34, 3, 46, -110, -115, 14, -68, 101, 88, 123, 22, 54, -60, 102, -76, 125, -126, 108, -48, -39, 50, -12, -125, 45, -124, 81, 23, 64, -122, -76, 72, 79, 14, 77, -17, 123, -97, 97, -104, -78, -99, -7, 46, 63, -26, -7, -97, 94, -117, -79, 83, 92, 68, -60, -115};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FLVOYSCGYPBPONGZUGICEJUNULTTZUCVEDRNBPFTUPMLAIVKYHMTKDCWSCRAFHHXBRWPIRNWVIBQDYHSOFHDPEBXMIOHFYPMAAGKSHSWSCALBIJMJUINPYKPOMEOVJQQBQAXSFGDVXLEPYQOFOVQCOTUGKXGHFYZCRARATWM");
    tmp_msg_1.plan_size = 51398U;
    tmp_msg_1.change_time = 0.8921197530911432;
    tmp_msg_1.change_sid = 64621U;
    tmp_msg_1.change_sname.assign("UWDNWLIYRQOOFCDAJOQMHFWBJDNMWMPPQJKZKTAYTOAQXRKUWVBNLHWIJKDHASKSEPLDEXCZHAXFTTCMRCECBUQACGZLUVHTLUGMHEYC");
    const signed char tmp_tmp_msg_1_0[] = {-48, 12, 77, 114, -58, 83, 104, 65, 108, 9, -53, -101, 85, -36, -104, -60, 106, -31, 101, 53, 21, -78, 31, 48, 42, 22, 52, -126, 1, -58, 16, -107, 7, -87, -64};
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
    msg.setTimeStamp(0.33259888505853086);
    msg.setSource(23499U);
    msg.setSourceEntity(107U);
    msg.setDestination(1298U);
    msg.setDestinationEntity(152U);
    msg.plan_id.assign("HKDXGTUTGNRKMAPPMQPKFYLIWESACFQMHBHGLWXZDRIIQNTQLHFFGIUVUWKBFBBEYTYTQJSBDCQZNVGNQJEHEHSJAJYCXDLIPSBBLKDZNXMMPJTDNIRDTDOAOCKUCESEHMFISOLWIRWFUWDAXXCHTBJMQJPEFGUYYTWJXISSFARYNKXSAJZCLKZKZFRZAREOVLGOXVCLURNYPRSOPMZHCVGVKUONLMDPVYGTZAMYJ");
    msg.plan_size = 9500U;
    msg.change_time = 0.9388499495543426;
    msg.change_sid = 26297U;
    msg.change_sname.assign("JUKZIXBRPQLNWJRZUFYTJULYNLTVOUPCIIVAMAGFGNWZKAQWPZMCOJXGACCJHRVTRQTSBKFOQZAPMSUNYDFCMEUEMGTCXYFLFSVAFIUQGZABEBWVJNHUVRMSSSAJWXHHPJKDILDAQZGTVITLNXZHOPVKMYRJLSDLEMCWQAOEXKDXBKLVDCLMHKEQBYTEXDFYQKYOTXGNBPOISRRFISDHRBHPEGCD");
    const signed char tmp_msg_0[] = {12, -102, 99, 59, -3, -127, 117, 81, 0, -93, -119, -20, -79, -86, 105, -41, -60, 61, -85, -81, -4, 78, 38, -92, -106, 98, 5};
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
    msg.setTimeStamp(0.5056851591792693);
    msg.setSource(26361U);
    msg.setSourceEntity(240U);
    msg.setDestination(37795U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("OQXQALFJACFIPOCRXMHPNFBSNMKQOCKIJGANVMIPWNPFDOUILJBLDYNPEISRDKZTWDHSKPOQIXEJKXRSAFQXQOV");
    msg.plan_size = 17508U;
    msg.change_time = 0.30584504109844857;
    msg.change_sid = 15758U;
    msg.change_sname.assign("FTJLGOYIDBHMNXVYZUKFYBNPPUMQUDFXXDAWVHOKVTXHVSOLPLAZSIDFWEGDWEKXZJNQFUZENVRDATDRIPPLROAHPFZJIONTXLYBTQVNXJUCO");
    const signed char tmp_msg_0[] = {15, 13, -44, -94, 118, -65, -43, 11, 36, 38, 12, -123, -128, -9, 53, 86, -91, 30, -85, -106, 48, -86, -78, -117, -31, 76, -97, 116, -75, 23, 58, 83, 76, -4, 16, -54, 81, -27, 86, -75, 59, -54, -41, -36, -54, 7, -52, 8, 59, -56, -18, -96, 63, 17, 25, -8, 57, 119, 82, 58, -117, 16, -39, 25, 26, -58, -62, -77, -56, -11, -99, 88, 92, 52, 69, -90, -100, -8, 109, -79, 111, 27, -53, 15, -3, -26, -49, -82, -4, -90, -76, -101, -38, 32, 83, 51, -26, 6, 118, -80, -27, -4, 125, -96, -21, -58, 116, 20, -62, -127, 3, 32, -127, 58, -82, 47, 126, -37, 19, 85, 100, -36, 114, 118, -34, -109, -88, 31, 86, 44, 104, 102, 19, -60, -98, -101, -65, 98, -81, -82, 37, 29, 117, 76, 100, -26, -57, 3, 26, -44, 2, -44, 90, -96, -15, -85, 87, 23, 35, 108, -46, 43, -28, 87, -110, -124, 121, 72, -108, 124, -117, -116, 78};
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
    msg.setTimeStamp(0.8496690629518341);
    msg.setSource(55513U);
    msg.setSourceEntity(217U);
    msg.setDestination(44454U);
    msg.setDestinationEntity(92U);
    msg.plan_id.assign("NUSUETNUQOHFKAFOXZOLUMIZWODTFYCBIGNCVTZKIFPOLTTEYRJXWND");
    msg.plan_size = 17847U;
    msg.change_time = 0.40648715380721123;
    msg.change_sid = 23282U;
    msg.change_sname.assign("KBNUIISVZGGNXXLBSMHANNXIKEGQZYQKGSXJQSPDAQHIGCWMMQNXGWPUBECPYKESRXXMAYVSJSJCEJTUVSVPMUAAOTKHBGCWLGCHQDSRLWFFKHKQWTTDPAIPZZWJETIEVZLYNVQVLJT");
    const signed char tmp_msg_0[] = {125, 125, 27, 30, 53, 64, -39, 41, 91, -53, -123, 33, 59, -100, -8, -117, 73, 108, 70, -89, 107, -128, -36, 5, -81, -9, 33, -34, 56, -14, -124, 75, 109, -113, 114, 84, -107, 85, 35, -23, 33, 15, -11, -96, -68, -115, -31, -63, 110, 20, -20, -35, 28, 124, -94, 114, -31, 66, -32, 81, 89, -47, 110, -80, -1, 48, -67, 76, -106, -34, -14, -35, 32, -123, -113, 48, -25, -56, -74, -2, -46, -5, 124, 40, 23, -43, -58, 81, 76, 13, 44, -1, -71, -76, -106, 100, 88, -113};
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
    msg.setTimeStamp(0.5096501035203382);
    msg.setSource(21489U);
    msg.setSourceEntity(78U);
    msg.setDestination(2699U);
    msg.setDestinationEntity(72U);
    msg.type = 149U;
    msg.op = 183U;
    msg.request_id = 30303U;
    msg.plan_id.assign("ISJTYJHNMUZKBZFTEEOYHJQTMHPKJCGBJVRILCMLSFBTHBIYTXDPZXRFPKPQPNYUKCPYASFKTHIDXSFUPNYHSFAYJLILAKCCHZSUREVWVUDOWOWAMNFOTEZZRBGUWMDGCGPXYFHBWVQTZJSOOQNEDCLNVDEKUMKDJLXLNQIAVPKXRMUIQZMWPMLACROGGXCUGNUAFYRBOJKIRXWDEATSCAIDNFBZ");
    msg.flags = 6065U;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.8162364275480974;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOFKYMBEWSYUXKPHHITKOGZTBFBAHVEZSBJLIVGWOCAIQWPMWPJRRCTWBQNYJOORCRWTIMBSEEPCPZVECGNUPWLAWU");

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
    msg.setTimeStamp(0.1320978703142467);
    msg.setSource(63301U);
    msg.setSourceEntity(30U);
    msg.setDestination(32476U);
    msg.setDestinationEntity(149U);
    msg.type = 61U;
    msg.op = 250U;
    msg.request_id = 49205U;
    msg.plan_id.assign("NYLJXXFVKWMJDRBCWWUEMRIXBYAKGIWBPKXBKWKVTZOHJLIGAFPNLSUCRHWQHLMHGPCQBTQSGMTUQSIJOFHJLJXMIUUVQWARQFEQEIOCCIEZSCVOUWSLQCRMXNCGZKMTGENOUKTSLZXPTOHWYZRVTPYBZUGCPNSTHDEDHMOVKOGPRPHVOBZNVEBJANKBZUYZYGRLDAQFQAHJWIFOSXVTLNDYNICAERPMEYDNKJUSIGMA");
    msg.flags = 27468U;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.7500810899367114;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KYYJMPDYNCFWTCESWLPTOGTTQRIKZDWYHXQNZAONLEEBVYGKQDDEHDPVJAVKMMPFMGXOGBWFRDIXDTXCWXIUHFUPRDTAHQEJLUSQMTIHYGQUQUPWARZBQOYGOUIUBNPKCHXDBCWOIMFMBZNSLEJZVPEBPZSQAGAZBOKHQINUEOLLAAVWKOVKTLYXCFFSRCXCKUGJ");

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
    msg.setTimeStamp(0.8860064245071885);
    msg.setSource(15150U);
    msg.setSourceEntity(233U);
    msg.setDestination(48259U);
    msg.setDestinationEntity(185U);
    msg.type = 144U;
    msg.op = 221U;
    msg.request_id = 63725U;
    msg.plan_id.assign("YLQWGYQAZSNSHVWJOZCLNVYDVOTQHFDDKVFSSWUIMACTJEINXAFLHLXYTWKBSCRQEHYQMLUUJVAEED");
    msg.flags = 65031U;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.536407285698109;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LUCVSHAAAJZROJDOXSNEKCYFCYUGBPJNVTWEJSPRRWCOEASSYFLFRSLWDQSLTNNGEALHWHBCHPTUFQEAWDMQOOUQUQHYJAPWDQSID");

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
    msg.setTimeStamp(0.48293330993515093);
    msg.setSource(24282U);
    msg.setSourceEntity(214U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(57U);
    msg.state = 173U;
    msg.plan_id.assign("ZPZZYVHQDTNWIHWDTIAIDGTFSXNQHEAKCYSIDERMEDUUXCZFNVVFZXGOLTEKBKPYXOXNWJQCKWOPXUBFHVJQRWQLSJJKEOYITPNOWHFMKEZHJOGMIIJ");
    msg.plan_eta = -1860993544;
    msg.plan_progress = 0.8185462620197275;
    msg.man_id.assign("GMCABRRHJESCIALZURQKV");
    msg.man_type = 59319U;
    msg.man_eta = -977548169;
    msg.last_outcome = 178U;

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
    msg.setTimeStamp(0.5676649589214442);
    msg.setSource(21095U);
    msg.setSourceEntity(165U);
    msg.setDestination(26546U);
    msg.setDestinationEntity(163U);
    msg.state = 168U;
    msg.plan_id.assign("KJLAGOYJULJANNYKXCWAEKQIZCUYRLKSOGXZBDEYTQAGSRMWTBMRXSUHDPNELKKRHCDBUACLMDJSOIFMVZVBNQE");
    msg.plan_eta = 1256407501;
    msg.plan_progress = 0.27315154236775707;
    msg.man_id.assign("YCWFDMBLCJSNXAHVMFRYIOJXPDAMXDRAHEPWARXWTAPWNRYBKRJYSZGMBXJTGELBLTPEHSWMCNBUAU");
    msg.man_type = 65331U;
    msg.man_eta = -1769334691;
    msg.last_outcome = 130U;

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
    msg.setTimeStamp(0.7426846343018005);
    msg.setSource(5486U);
    msg.setSourceEntity(183U);
    msg.setDestination(57195U);
    msg.setDestinationEntity(140U);
    msg.state = 233U;
    msg.plan_id.assign("UPWUFRWVWSONIHEDIKQVLJTLRSFCQDSKBZYVEMINKCYUVODVXHHZHRRTYDULKWOJVTSF");
    msg.plan_eta = 720239736;
    msg.plan_progress = 0.1620469031572117;
    msg.man_id.assign("DSHUXSIHBHSRTFLZDFYY");
    msg.man_type = 20625U;
    msg.man_eta = 1846128318;
    msg.last_outcome = 232U;

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
    msg.setTimeStamp(0.15070364488649446);
    msg.setSource(62926U);
    msg.setSourceEntity(131U);
    msg.setDestination(6180U);
    msg.setDestinationEntity(226U);
    msg.name.assign("HCJFPDETQRQGEFBJDKAQBHIYAQBKVOTLSZZFOWLESPRIPGUTEPAMCJNZINUPDTSNLACXFZVWHQAYJSJZVCZTAKNKQESQPELMBHMFYDUMUGWZKTNCHHKLOJWROCKEDOVOSOXGZANJNQUTAGOXYUYRTBZTUCHVWVLZWRIVENSBMULIUHXGXVYMTKNWBE");
    msg.value.assign("VPCXOTKGRBFGRJVQCBODRBCCCPRZJZIETLFFARLGPVUXCVIKHBBIOEHPCOTPYIQNLNBPVQWNELSZKNZYWNUTDDSWDWXEMLIUGVHEWVYVXITTAODCZQASRJGSVRHKYNHXDSFIFAWETMONZMPSSDOOSWYM");
    msg.type = 143U;
    msg.access = 65U;

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
    msg.setTimeStamp(0.2178229283143741);
    msg.setSource(16792U);
    msg.setSourceEntity(191U);
    msg.setDestination(27277U);
    msg.setDestinationEntity(112U);
    msg.name.assign("EYGVPSVQAKPAGCNMLNFQBBTNZVOOECGSGRPCUIWBGXZIJQWEAXZILYUYRHPXZCHNWHEKTZTWPNWSGYMVERXKOLHGLIPTKQAFMSQUJYFTIFJKUJXCZGOJJPLKCMXSPODBBVICCUWADWDQAVWQYKRESKVEAJGTABXNQPSRD");
    msg.value.assign("NDVPAGSABYKEXASQDLYRWUCOQMIUCBNTOFSJBOLFCRPIWCOAKHCZTFSYOQRDBDMTVAWPFREYOLRGVVVKLMHIWBGTOJYYTPWXIEWXAHVFUXKD");
    msg.type = 54U;
    msg.access = 0U;

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
    msg.setTimeStamp(0.34808939395235894);
    msg.setSource(60476U);
    msg.setSourceEntity(136U);
    msg.setDestination(1559U);
    msg.setDestinationEntity(211U);
    msg.name.assign("ALNDMZQFKKJGECQMGBVFEBITWQRCITPUMYIKBSFGGYLRMXGWGPCAFENLXMJVPUWYSFABLVJILGHQBWZHBPPZBWPDXOVICOHMNMASCQREDJBMXNQUREEIIORMUKINAUXVYAPOOWSCDSJCSJEW");
    msg.value.assign("SOZKCLURLLWEOLTFUZCMZMAMRUEAEXFPBSQNJFEHQHNGVRFATADGKOYBDHOFIVUFKRSCWDFONHSSBBXXAZKWHZEIUYKDZKGDQPNJINTVYJUCSBBAJQGQPRNYWZDYXCBAVLJLVNKOUWAONXMTCDSJOVKGXADGIMTPQRMMQHKQQDGSHMPJOVIDNREWCAYWNWBLTXZVSUYIMUPYRMTTHXEPGJFKHVPQRLVEXIPPZTCIJCB");
    msg.type = 30U;
    msg.access = 27U;

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
    msg.setTimeStamp(0.24625169646570255);
    msg.setSource(63540U);
    msg.setSourceEntity(100U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(25U);
    msg.cmd = 222U;
    msg.op = 54U;
    msg.plan_id.assign("ECWGHVPMJWCVFXAOUABAQYAYMQWQGURELKYBPNJRRZKCVOILQQVDMGCBSIYZMPHJSDRPBVWEKBJBASNTTLHHGSUAIEGBRLIGZEZDNAQSZJOZPNJURKYUERLDXZMOFHFXQJDCTZCHZVOUSOCTFWIDSKKTEDXOJNKDTLPMXGEQXXBMVPTSMBNWFWE");
    msg.params.assign("SIWFEPINYGVNCGEMGSDIUOJBHFJGKNKBPDOYFLWCRTOKZBYYGRQOANSMWVUCDPMHKOQVCWKLYQHLTKFNFNTVJRAPOWMPQCMIEQEGS");

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
    msg.setTimeStamp(0.146407847906605);
    msg.setSource(42383U);
    msg.setSourceEntity(200U);
    msg.setDestination(6255U);
    msg.setDestinationEntity(43U);
    msg.cmd = 86U;
    msg.op = 1U;
    msg.plan_id.assign("LWOSQNQGMRSNAUXPOCWAXBZODMBKKMCYTPRVWOENYHEIUHRRJTSMVITZLDBMSAIQQPLQVFAQPAXIYKWGTUZLDKNPAJZIEMAAFHRQXTEEJBEOFDVHTJJBMSOPOUFJSPICGNI");
    msg.params.assign("NFTHTMDZLJXB");

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
    msg.setTimeStamp(0.8515124233677899);
    msg.setSource(53969U);
    msg.setSourceEntity(214U);
    msg.setDestination(17132U);
    msg.setDestinationEntity(115U);
    msg.cmd = 62U;
    msg.op = 128U;
    msg.plan_id.assign("MFUDYSASTMHHYHEJFYPVAUIDXBVARXLKXLTGRJVUUFGNDGNLXXJAXCXQYERXCPOAGZUNVSMGOVZKVBZPTBMRHOHDKCYQBEYUAJSU");
    msg.params.assign("JNLYVJSXKMWGXRYBKYFEVU");

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
    msg.setTimeStamp(0.15091743069331354);
    msg.setSource(605U);
    msg.setSourceEntity(23U);
    msg.setDestination(46078U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("KERTBGYASVANBIQXYCFMPGHXGCTGTWDZKXJR");
    msg.op = 102U;
    msg.lat = 0.35142400859203937;
    msg.lon = 0.6689031134588269;
    msg.height = 0.35685746342063407;
    msg.x = 0.18339641278336738;
    msg.y = 0.23532483722442277;
    msg.z = 0.5182695569501609;
    msg.phi = 0.48047408891662924;
    msg.theta = 0.37313987904468926;
    msg.psi = 0.6221385355388175;
    msg.vx = 0.6720533337114211;
    msg.vy = 0.429383215393184;
    msg.vz = 0.7046103633039864;
    msg.p = 0.7084441847469791;
    msg.q = 0.06009760616324733;
    msg.r = 0.5680709569958287;
    msg.svx = 0.3010976237904389;
    msg.svy = 0.13714014097564498;
    msg.svz = 0.3883994551501637;

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
    msg.setTimeStamp(0.46330376374266313);
    msg.setSource(26422U);
    msg.setSourceEntity(153U);
    msg.setDestination(563U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("JEJCMDFVGLQTHWDZZDBSDPSJCNPHYKARFQGVZEYPTTPCFNYTTXKZYMPXZFSPGCOBWYIBLPFRHKTUOEEIIFOXAUKSDDHMVRFXOOJXCHGIKMWHKMQTRMRHOUWTVARWYEZAALVVYZMURJRXAWOYOQXFGXXKEKPMNEVKCCUFOAQEWSZYCNGQMBQVPTAL");
    msg.op = 61U;
    msg.lat = 0.5065962861513751;
    msg.lon = 0.02827054082043523;
    msg.height = 0.7284811876098364;
    msg.x = 0.3640910818331703;
    msg.y = 0.7158337131995366;
    msg.z = 0.7472167333574357;
    msg.phi = 0.6269915223391874;
    msg.theta = 0.7867887433113927;
    msg.psi = 0.17576636049330208;
    msg.vx = 0.7117938991176769;
    msg.vy = 0.5669195919994893;
    msg.vz = 0.6185944761772418;
    msg.p = 0.9873367155659204;
    msg.q = 0.054724260178823037;
    msg.r = 0.8463483579083404;
    msg.svx = 0.15263234059504238;
    msg.svy = 0.14123082536008502;
    msg.svz = 0.7167373971242142;

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
    msg.setTimeStamp(0.9336274384419021);
    msg.setSource(57755U);
    msg.setSourceEntity(84U);
    msg.setDestination(8206U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("EIJWOVSGAXPGJAIBDNIWRGKPMMLLRLVMXILTONAPZNWPODXSHTCISYKUEFXHZJHBHAQQPFTLGVWIKOSQLKAYXYLRRWMEKTLVUEVRCZDNFKAUVPOFBXYQSXPOUMUGDEBGCSFAIDUMPJLGFDHOQBQYRWGHBSZTBUVMFEOLZMCXYENQCTTSQRJWDJVGBZGWKTJYJMMQSCCFZUEPZHJHXBHFYDWAISNYVRKDWKIIYEAZEZNATQCJODF");
    msg.op = 150U;
    msg.lat = 0.515604037225304;
    msg.lon = 0.6945195575879289;
    msg.height = 0.8072409379452042;
    msg.x = 0.22037829017090615;
    msg.y = 0.40801068892784;
    msg.z = 0.9808797125292195;
    msg.phi = 0.3211781521638093;
    msg.theta = 0.5236833848802882;
    msg.psi = 0.5825084214048369;
    msg.vx = 0.7833411435194902;
    msg.vy = 0.17938135858869386;
    msg.vz = 0.9043322501074501;
    msg.p = 0.5352059286459606;
    msg.q = 0.6235930652695231;
    msg.r = 0.47040028876372764;
    msg.svx = 0.9940024133895929;
    msg.svy = 0.5476546217956074;
    msg.svz = 0.8001220500758588;

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
    msg.setTimeStamp(0.8065804533816769);
    msg.setSource(13055U);
    msg.setSourceEntity(231U);
    msg.setDestination(26347U);
    msg.setDestinationEntity(1U);
    msg.plan_id.assign("XFLCIATQBQRKIKHPZUTZWGRNOBXPWOLXRHSVWMBEKLJJSFYUQUCVQENQWEXOSKMYFWBXUFVDOZLEUHHLTNBSMVEMYMGDWMVRKSGIJGZGELCTEPNMNVLSMLUFIROINUHTRPZCCBCHVJFOKXBEFWFRMRIIDAXTPVDCEKQPPDMYNZXCGSKQHRBKSASNATJCEZJXJAOCYQ");
    msg.type = 233U;
    msg.properties = 4U;
    msg.durations.assign("OLUATLODYKKQAIJLVUFMTNSYBM");
    msg.distances.assign("JBGBWJESNBFQTNFEGPBATAVOFVXYGEHJRYJTNWYZLHZYXWPJMPTOIJHQEKNOXGFAKRHOTJVUIIDUEFDVZQISLFDGNPAUMJDUFCSVMDKYLKLLGFXDWCUDGXJLRRQEXYQMZQZBHTLGNESXVPOMKUVWRSSORHQFVUSDVDXIMTPAQHPECCCIYGAKRPWIBKAQMCUYNKHMWWPBWTYRCOXUCEBJQIMURCRESSMC");
    msg.actions.assign("MALEJRXFAHKYFYBXEXSJVRTNEEZKAPHSXOWWTTKMATRFEGJFKGZXPDVWHKHULMNFFKLQBWOYDXBDEMYZGEZEUKARLPFPQTHBSDCYDNPMOJXQWQCZGTQUCDWZDLQVITFMUJYUXARXPCJOALANQIGVKMGQVIIVBITGLSSCHCNMGHSAPRNIELBCUIHSSRHXRBVOVCTMSOUALUUPBKDORIPNGOYUWYJTZDJWOKNLDWNYF");
    msg.fuel.assign("FKQBELJLSBKGZUUCUJIYHKPQXZZAHWGBVASQNSJ");

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
    msg.setTimeStamp(0.6942227548434475);
    msg.setSource(3914U);
    msg.setSourceEntity(16U);
    msg.setDestination(27758U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("AUQWNMZGVNRVHONGERTVQAXQJBRBKBETMFIFWHJDRFPCTTDKRQEMTKLYSKKIDFGKJSQDFPZMNBZXUSHWSFJJRBOTLM");
    msg.type = 131U;
    msg.properties = 56U;
    msg.durations.assign("OVGQCQTSOPADCJVDOKMWTXVGHLFALUJQBNUUWBNYABSWHMVSXNLJPMKENBZKIMZWTNHEKPIXWKQYEIJSUJCZTRHYRNUWGVGIEQHYYOFOQLLXRPRKBXUBVHMGYNIGSKRLZSCCXIEFTNGQFAEFORJBSXTJAZCXWDOVSMYOJWLAZDPIOCFDCYODVFUHQXEAAGGUJZSDDPMLDLFCLTUVKJBBEPIHEFRTNYMRPZZCPM");
    msg.distances.assign("FPNQPSARIBNZTMUTMGUGIGVIOJYCZJOGCFLUHQQCHQHMBUJTPDOYXYZOSNRWVWX");
    msg.actions.assign("XDZNEKOSJVGRHBEBXAMOJQFBLRYORNZFOPZEPSOGFIAXWAMWANGRDLZWKWMGUMOMSUIEYVKKUOHKYXTWHKTACVAVNRIQGNSGLPCUTLCSCQHFRFCEKMEJQZTHAEWPXFYZUVIVIEVSBNTILDFLJYBYXTLY");
    msg.fuel.assign("AXKWDXZBSCLPSSYZLBFFROFVFTQYTIDHYHUHBGRMHSZQXHECSGPHLQPGBTRGNJQLQFPEXKUUJAMEJCWKZJHXALCXJWTNWKPTULYOMNROMGRVREKEREAOADIRCCGEXCYNDBYIFWNULNEYQORVOGIYDVMRFVBKIIFOXTWDIMGSPPVDOMBOLZJOJ");

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
    msg.setTimeStamp(0.23489553959430098);
    msg.setSource(33805U);
    msg.setSourceEntity(130U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("POTLULZCOULAPFXBTYZPKAAHSAIEIHIDRGVKXFXBPPWZFEWLDONCTZENFELRALAXCRIDBTWFHPIVNSMJBKQBUEQGXYSVQMKKAUKYUBZYDFVOYSIVDRSBFQGMMHPQIQRJUFYLNHXYJZNTCNCQBXUPWQO");
    msg.type = 38U;
    msg.properties = 202U;
    msg.durations.assign("DZQIAEKSLGDNOXABEJWIHWSGYRBIRLBNEFQULAQGLYDKIBEROIMFJVIKVHOVNLBTGMXZDKZ");
    msg.distances.assign("YVJLIOPLPXAWOHVHATETXZFDIUEKTGNZRWSIDMTZBVDEXWBVBUKXKMCYTEUWDVOKFJCJVSPKZZJDNGAHJSPIMNHQDROTMWANGKWGDQFFTHLJQYPSPQWZYUAKCLQSDHLSJTQAEZACDHQCRYVCXFBEUYFOIRGJWCTKUSMCKRRVFNBRLGCOFRUYPHAXTGIUWNOENKXBXBFOMSMLIZPBLSNLHYELDEMFHBIZQGROXQEJVVYYRNUNJZCPBISAGAPMXM");
    msg.actions.assign("WJYEVVSKGDUYDCPIMANSXWTCQAUFITTYQSWEODPDGFJWQXPIDSALWVRYZXTYARZNGRTMXXBLANJNPRMCJEZRMKCLBXCBSXLIFQKGCZNUKKUHMBSYJRGLALZLHMOZVYSRTJENCGTTBIQYREMXQTRUFSBKVEQVUFIBQGYF");
    msg.fuel.assign("WPETEFSFTQUCJOVZCG");

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
    msg.setTimeStamp(0.28348356955455667);
    msg.setSource(30582U);
    msg.setSourceEntity(172U);
    msg.setDestination(29099U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.686422958534403;
    msg.lon = 0.07664579718302766;
    msg.depth = 0.9161586374050318;
    msg.roll = 0.27541932582512596;
    msg.pitch = 0.7429615054239836;
    msg.yaw = 0.787917916186568;
    msg.rcp_time = 0.4137458907519752;
    msg.sid.assign("KOINMPYNXWRNLPHUVCAUCZILPAZUJICISTWBIZFTFGWSVYHAEUXGJOFBNGYVUAMTEBJGPSURTGHZFGDBARPIMMDUXQLQCVRIGNAEKKPTGQJQVHOMDNOXPSBMCEFHJOFWMJYHYEVDANKJCHUQAQLRKTAZVVWZXOYXLTIBNYWDBRXIFEIJGKSKQHORERLYJRCUBLKTMR");
    msg.s_type = 228U;

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
    msg.setTimeStamp(0.9807900774689217);
    msg.setSource(15563U);
    msg.setSourceEntity(52U);
    msg.setDestination(33462U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.07207622760331;
    msg.lon = 0.3183068587336805;
    msg.depth = 0.6049614351499457;
    msg.roll = 0.7450170040560301;
    msg.pitch = 0.8410427915598526;
    msg.yaw = 0.16571610837451867;
    msg.rcp_time = 0.5712751261218996;
    msg.sid.assign("BJOZVARMMFAHMJEZPTOMJGUCHRBHNUSGCXPKKRLIAGDUPOQNNRYBKVGQNXVYZSEIWSWPNFYZTOC");
    msg.s_type = 203U;

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
    msg.setTimeStamp(0.2978282732876225);
    msg.setSource(5704U);
    msg.setSourceEntity(8U);
    msg.setDestination(5072U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.7265352154787397;
    msg.lon = 0.8952417080686217;
    msg.depth = 0.6976570293907579;
    msg.roll = 0.8638226157855683;
    msg.pitch = 0.043269799302853795;
    msg.yaw = 0.8891015570263089;
    msg.rcp_time = 0.6525813929474481;
    msg.sid.assign("JVDVUEITPXIPBZGWFMDHJKIZZCOLKKENVDTFMQSNYGHLSFLWCTQVLRYXUGDMKJLOIYFCASIMKDNBMJAVTWHQEHCGXZALAGPRMRXXAEYNICONRPRNQZRAYWBMXBTQEOBITCOJEKLCHYDETFCIFDZCBIVIXZEGWFSOBDTGSJLHUYFKQWUVKRJQEWHUNNPPPFRXUEPORPPUYFAMQBNOHZBOTYLWSSJSUXRVMZMGSCATQNGK");
    msg.s_type = 140U;

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
    msg.setTimeStamp(0.43283522190037926);
    msg.setSource(25229U);
    msg.setSourceEntity(94U);
    msg.setDestination(6407U);
    msg.setDestinationEntity(40U);
    msg.id.assign("XTJCYOWMBKTDWQILQIHJCGQAXXBLDVOT");
    msg.sensor_class.assign("FQVZKYBYWPQGBCQYLXYGZJUOIIYLCKGUFTJKONCXPKJONSNNWHPVXEKXLLIMAQGVETDMDQHMZIZSDWBFMHQXZFUREINWACDEZYJBIAFLQOVSYKMXUHGZVJXJCX");
    msg.lat = 0.9775134795069971;
    msg.lon = 0.5403404063008501;
    msg.alt = 0.6560095104693907;
    msg.heading = 0.29674089154664285;
    msg.data.assign("NGHXEXHBLQHILHCJMFGPRHYAJXLVGOUWSDXITJTPEXDSRVZPKIOFBCZYTNQAYAVSZVWDHJNKAVKNGKZNQWFDEGQTJSRUXOAIWZMAVNSMPORILXJUOEVDUEKUTVRKHBSELKBPGQUTOBVRIDCILFB");

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
    msg.setTimeStamp(0.5512753927187982);
    msg.setSource(4730U);
    msg.setSourceEntity(202U);
    msg.setDestination(46375U);
    msg.setDestinationEntity(5U);
    msg.id.assign("HXYSYIRCFBUDCYHIZDLRKSURABWQGCZDJCTBWLGOGPNEDVFRQUMXOUBZKUOFIAPXVEBFJYSTHKIFFWIDUTNFSLGYNHBAJXREGWVRTQOJLCBG");
    msg.sensor_class.assign("ZGOSUWTOIRQSMEGYGGYIAVWVBIENDLCCFDWNRLXAKQRXSKQLCJYQRCZEUJIDBOJUOOSGUTJXWJBIEALANPDTMWUVWXBRRPGLNACBTWHFCQXPYEQCDIBGUAKDRHLTSISKDQKZNFPTELXBIYXMPBYHMFFVAMLORPMPF");
    msg.lat = 0.5958941134030731;
    msg.lon = 0.2297151875117628;
    msg.alt = 0.015991652164604964;
    msg.heading = 0.5801711034589004;
    msg.data.assign("INGXQRTZXLCEUWKIRUWCBFEIBRWSJZNCOZOBFHXYFVRLOXTVKNFFPGAHOMAPUJNCBJLECMGLKSYHDKQULEHOJNNPMDAOFIAQIAGREWDVHWLPYELJAISKKTSOMBYWJUDQILCWWSZJASPKBTENPMXWHMFDGZDESPJRWUKVHSVYTLHVFVYBHZNUQAXXF");

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
    msg.setTimeStamp(0.059252690236290984);
    msg.setSource(42236U);
    msg.setSourceEntity(40U);
    msg.setDestination(49317U);
    msg.setDestinationEntity(13U);
    msg.id.assign("VYIBPXUBQR");
    msg.sensor_class.assign("KLVPITJNEHPXJQYPVRTEMCJTKVMEDCYQOTGYZYCIIHCLBECMRWBYOHACIGKXOEDHPBAJKCSPXNFRLNFEAYOUEEFJOARFOUZWNRKZUUAZKUDSHMMRMWNHAWZGFPVPTKSUWJVYBAOIDDXHZOBPSYINSJTQVWUHDDRGZCWFIVMPFQNDXBBVPUNQBKBLGCRQHJZGFXVFBIEZGXSLSLTMDZKAXUTOYQGFMISGKOIQLRN");
    msg.lat = 0.4555739045130148;
    msg.lon = 0.7220463637723837;
    msg.alt = 0.909156264634911;
    msg.heading = 0.5904706320262415;
    msg.data.assign("CJQPYXTGZVQZABSJPOWTATZWAISLOFCLFUDBIVUDNNHSQFIFZAMXYRGKKNGUXFWUXBPLHOWFAKAYZHZGBIQQEEDKXXEQLUWKUNYIRMQJZYRFKNEBKGTQRVFCJVKSZRPPULPADOXGMJFNOWOHIXDMBVRULVCDYICZPYWRTATJCBLHGMSNKJAEBCLYUSMXPRHVEOSCVGAMH");

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
    msg.setTimeStamp(0.8172637941775363);
    msg.setSource(65505U);
    msg.setSourceEntity(134U);
    msg.setDestination(41338U);
    msg.setDestinationEntity(3U);
    msg.id.assign("RZKWSHTGCIDGIAFJMIDMWWJXRJIQKEQHXZSCQAARBTQNQACGBKBLTDUKCDRJRTKVKMOHZGOWTUREDEJRMLEOEOUACOGPXSZFLXSSTMWWSNCBPPUEXHIXMLAPRJWHUBVHNMPZHSYXEC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YGPZNAGQCVUDDGFNAVSXUCUITDJACNHVITKXKQYGLKVOAEADEMATFJCSPWTBMLVIVDNJKMTFPPGJYBRBRHQYJYCIUIHXRHXRDBFZ");
    tmp_msg_0.feature_type = 242U;
    tmp_msg_0.rgb_red = 103U;
    tmp_msg_0.rgb_green = 12U;
    tmp_msg_0.rgb_blue = 203U;
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
    msg.setTimeStamp(0.6200604695894304);
    msg.setSource(55366U);
    msg.setSourceEntity(26U);
    msg.setDestination(50807U);
    msg.setDestinationEntity(240U);
    msg.id.assign("NLMRMFQKEUHJQIPQJKERXSZKOVXUTCDNDZOMCLFLGGWDVIYPVPMSYULDFKCIFXZBYHQIGOOKSUBIWVPEZPNTBIOBWJAHABFYOAKECRIHKCWJUAFWBZBDSHQDNOMVDGRQLTHWQSGUMVRNYGJMMGDESPTHSXAXRWGRVC");

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
    msg.setTimeStamp(0.4235556337834978);
    msg.setSource(48728U);
    msg.setSourceEntity(220U);
    msg.setDestination(45542U);
    msg.setDestinationEntity(76U);
    msg.id.assign("YDHETAZVDKKXLXTZWPOUSEXTAMRHSEPVRPQZJOVLAR");

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
    msg.setTimeStamp(0.7448192511758606);
    msg.setSource(26159U);
    msg.setSourceEntity(197U);
    msg.setDestination(20009U);
    msg.setDestinationEntity(38U);
    msg.id.assign("CJNOFOKPYIKNPXCGASCDVQJNFYMIAFBUKSDQBFMYRIDYMTTYWCUSVURRRYKOPXSXWWJYEELMNZQAHRPJPPADRUHBINBXYRUOULHJFSUPVLVLOEWWMUEQJXZPZGDOREBHVYMLGKBANXOVGCWFQWBXMRFSXTNJQJEXBPZATFUWHKLMZFGKSVHKTAJLSLEMEEDNCGAORZAQCOKVIGHTDT");
    msg.feature_type = 52U;
    msg.rgb_red = 24U;
    msg.rgb_green = 169U;
    msg.rgb_blue = 139U;

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
    msg.setTimeStamp(0.3618807123702631);
    msg.setSource(2669U);
    msg.setSourceEntity(236U);
    msg.setDestination(28214U);
    msg.setDestinationEntity(204U);
    msg.id.assign("AXPFSHHLGVRJRMOEYMCSGTMAVXOHADCVZPQUMOKURNOZXSZXVVDGPLJYCRWTLZUBWWZTKTOKTFIHYYPQOKFPFORQHMCNEJBLYVMDGYTXKQMGJLDISROILKDDKNVWNJUUBGIJBCDPAXNENIAEISUSKVPWCZXWXPIBQECSRZWWQAHGNJYYVHSFYQVRNLAARQFHHNYONAEULJEJ");
    msg.feature_type = 7U;
    msg.rgb_red = 229U;
    msg.rgb_green = 122U;
    msg.rgb_blue = 87U;

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
    msg.setTimeStamp(0.6634125707711644);
    msg.setSource(64109U);
    msg.setSourceEntity(5U);
    msg.setDestination(44413U);
    msg.setDestinationEntity(246U);
    msg.id.assign("QHSMKTRTQKWNAXXRCZSYSBQRGHDTVXODGRBKKJEDTIUNKEAOOQSHFSOWJNUUHQFPPMELDVBMUJZNZRRKXCSKTAULYZJFFMCPMLXPUZREODWLBEGDEFQCEAVBVHJSZJDRKUGXCNBHHUIBAQJVCYWMBHKENFWXQPJNIAIBIJYEBMDATYXKYWYPPGGUVILNPOYAOF");
    msg.feature_type = 160U;
    msg.rgb_red = 117U;
    msg.rgb_green = 187U;
    msg.rgb_blue = 214U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.28553506511140947;
    tmp_msg_0.lon = 0.32996569377741647;
    tmp_msg_0.alt = 0.49930193169845094;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3948829114459742);
    msg.setSource(50511U);
    msg.setSourceEntity(79U);
    msg.setDestination(5083U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.2641262495957445;
    msg.lon = 0.4543996605616297;
    msg.alt = 0.06176849533484974;

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
    msg.setTimeStamp(0.19152242632332284);
    msg.setSource(3187U);
    msg.setSourceEntity(110U);
    msg.setDestination(25847U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.5945770624852647;
    msg.lon = 0.623021053118597;
    msg.alt = 0.23186043879621587;

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
    msg.setTimeStamp(0.4154772699313769);
    msg.setSource(13567U);
    msg.setSourceEntity(54U);
    msg.setDestination(45164U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.5614161080025948;
    msg.lon = 0.8297608607906735;
    msg.alt = 0.7722626195590697;

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
    msg.setTimeStamp(0.3665252362433806);
    msg.setSource(65018U);
    msg.setSourceEntity(67U);
    msg.setDestination(40432U);
    msg.setDestinationEntity(26U);
    msg.type = 28U;
    msg.id.assign("VFTYZLUPEKEGGXMNROSXSVBRIVNSBKNGIGQOBYQJLRDYIQNBQHEAJOWDLUMRXNVSYSPSCNZHTQWPPKKOFVAPLWIFQV");
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.10821334370739266;
    tmp_msg_0.type = 62U;
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
    msg.setTimeStamp(0.963106123187313);
    msg.setSource(46904U);
    msg.setSourceEntity(251U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(171U);
    msg.type = 126U;
    msg.id.assign("GMFXAPLCGXCXOWICUSUBAQYBYMCHMGHHFUBEUWFTWDQFTFZYDPGJEXURFKLVHCZGPETJNEIJXCDZATQAUGLFWVQRSRNMJSPXFSLEUKLLRNRAIBPBXPHYQVWSVKVDKKBPQWGOXIMDTGUALISKPPEADTKMRDBYWEZDSZRWJNQADVNGQQAOCZLUJSOTTNVPCLBIDH");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.9308453988609096;
    tmp_msg_0.lon = 0.1879676811296529;
    tmp_msg_0.depth = 207U;
    tmp_msg_0.speed = 0.7944688339332742;
    tmp_msg_0.psi = 0.2754152656760043;
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
    msg.setTimeStamp(0.6592948061968679);
    msg.setSource(18649U);
    msg.setSourceEntity(215U);
    msg.setDestination(64602U);
    msg.setDestinationEntity(59U);
    msg.type = 64U;
    msg.id.assign("PJXJXPSMVSITBHMPZXHNEVDQST");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 246U;
    tmp_msg_0.lon_gain = 0.1909145063378337;
    tmp_msg_0.lat_gain = 0.7984987828249847;
    tmp_msg_0.bond_thick = 0.2010278924104728;
    tmp_msg_0.lead_gain = 0.8719623851437275;
    tmp_msg_0.deconfl_gain = 0.8357847310716976;
    tmp_msg_0.accel_switch_gain = 0.0322321096182413;
    tmp_msg_0.safe_dist = 0.1631558683342781;
    tmp_msg_0.deconflict_offset = 0.17768235244426733;
    tmp_msg_0.accel_safe_margin = 0.3676670092084805;
    tmp_msg_0.accel_lim_x = 0.6158764782776899;
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
    msg.setTimeStamp(0.5810762430150443);
    msg.setSource(17076U);
    msg.setSourceEntity(78U);
    msg.setDestination(707U);
    msg.setDestinationEntity(83U);
    msg.localname.assign("BCEZQPEXIYHAQOSJIXAVKLLWNNSXQZGUAZPNCHFADORG");

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
    msg.setTimeStamp(0.5056572324252954);
    msg.setSource(39412U);
    msg.setSourceEntity(86U);
    msg.setDestination(23697U);
    msg.setDestinationEntity(1U);
    msg.localname.assign("HYXZQAECWESPYJOUVKXZLDEUWIGNRJPMDMKUDWXIPNGTGVKKGQQOGYKLWAMFPFVHAGXOZCKXIQGJNUQRNFIEBKNASTHXOAIIHDRIQWTDYCHUTFUGUJJZLOYSAARYKDPLEGFBTBYBEFIECZC");

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
    msg.setTimeStamp(0.6137323330019175);
    msg.setSource(33372U);
    msg.setSourceEntity(157U);
    msg.setDestination(47326U);
    msg.setDestinationEntity(131U);
    msg.localname.assign("FQXKQTIINKQTZQCZMYRGFNXEWRPOFAZGAPMLOTSMGGLHJKDXFXKCGODLFQUUBIAHAIDYCPUVTZWSLZLKELTESCPBHFUWUVYFHCJNWHDNYVWEOYTENCAMJUTELSUDHEXVCIBPZOMWMIXKJRJHWVAZVSZWAPKQLIAVPJCSENPGEBGMJYCLLHQUOIGZUDOAMVIRJFRKHG");

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
    msg.setTimeStamp(0.874829644838142);
    msg.setSource(45030U);
    msg.setSourceEntity(225U);
    msg.setDestination(9462U);
    msg.setDestinationEntity(13U);
    msg.timeline.assign("WROUKPJYMXNNDGJLSANVEGEMYHXGLSGEGVLWMDCZAVIABOXVZCKATVRYGFBYIHQZJWOFWOXS");
    msg.predicate.assign("TXMWKNGMMIGVTZFXALTHRZKPSUQBOYPNBAWYGDYDXPSDESHFRORLGROFIRMHNBNYDDIBHIGAUCEPEMGBKSLRXCVZVXXYKBWR");
    msg.attributes.assign("CCQXQRAOZGZYHEVHISOPMWAGIGEBIQVTZMCEWVTKBTJPXVHXJTL");

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
    msg.setTimeStamp(0.7497296430342741);
    msg.setSource(2311U);
    msg.setSourceEntity(67U);
    msg.setDestination(56998U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("YDZOTKBQFRCKGVGHLNOYUATYWTPEQXRMFTNEBOGDZNBPXDXWDVPZIUUQYFKXAUXJMFPCOMITRWXKSESASHPMLUOOYEXDVDWYGISSNOVBPCFGYJPIMKGWQPZHUHIEYCBEBKAHALMDWIJYKKTMBCVCQZYMXRGATNBROTLREDEGJFDHGZNUQITJLUZZCUJBISPNWULCMZA");
    msg.predicate.assign("YLWSJOFPXTTMMDWMRXOPGUUYUGOOJFQJOSZJRIJRKWNTZCWASYDHYVVFDMLXBVPHWNDIVZEXAHFUNEGKCDPECVTQNCDOBEWEGDWYMBPGIAACOZLKESZLLPREGACNZBVYLCEZKTIFVLUIFLSGPSWKPSQXTJFRGZKQZUBKRXJDKUNQLCRTCWQXHNAIIJORBRIRXBBNINSMNUDAVUVUWQ");
    msg.attributes.assign("EQTHNSOJVZNSQDRJZZUXHURBY");

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
    msg.setTimeStamp(0.059156871380440235);
    msg.setSource(28977U);
    msg.setSourceEntity(148U);
    msg.setDestination(2975U);
    msg.setDestinationEntity(237U);
    msg.timeline.assign("POIICEFLERLQZLHQIZIFSGANZPXFQMILAIKZUXUBLVETXKZYAVTWSOVTJZSGRLHAEQDJZPXCMTQQFMWDUMGQHWSLLWJMNOCREJGPKPWOUXH");
    msg.predicate.assign("QXVYBYSCLHTQVOEGJBWPXWJZHHOGHLJAFEFIKXTNHMXZRLTJQCZRDQAQCBSMAXFUJRVJOEMJRPJEBFBAUUAWNWVKXNPZREOYMYUXBRFCHQQILNRSIENIKCIFEZDPZNMPEWOTKUWGSQODBMMVSLDRIUPJAWCSWGGOVYVGDSUODGNWEHNYMLXNCAZMATUDCHPDLYKPVGIWISDTZFBPTNFJQYTCA");
    msg.attributes.assign("OGEBUEOBBFCPIBNMGKPHFTYCSNRTZYKKOMBFSGATXKRGTQYLYIYYFYLBFASJDVJUBSVANUDZJODAVATKWSNGETGLMSNRILSORVGHQQTTJEVXNDEHYWDFQTHGZQIEGUSKIACSAEJNLNBYXRLSGCWIPXZJMJPPFCFVRQKHHPIDMNTJJVJECZEVMCZIRLRZQDKWWLQLICQMDRZCVUVHHOBWHLRZMPUOEUAWKAYWXXPUONHIXADP");

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
    msg.setTimeStamp(0.9749741015453985);
    msg.setSource(17247U);
    msg.setSourceEntity(131U);
    msg.setDestination(9687U);
    msg.setDestinationEntity(18U);
    msg.command = 147U;
    msg.goal_id.assign("KNYRDTVDUFOSLMBIFLTXBESNSDKDDGUFXLNBRKAEYJQZUCSQPOSEWRQJIKRYCUHAUSDOWPJVQCGMIAWVUQSHPKXAJPNIZEMRQTMRNOXCZXBPWJWZAFGZ");
    msg.goal_xml.assign("MFTYNQVDFHKERDASDNRKQXZIBYBCKADAEKCGLZPXJBUQFOANTLPIJTYEDUIAGSVPKMHBFXEYOOSQXGMHVBOBYCEWCUSJMIXTDWQKOCMNTRAHZLSILBXJRNKBHIYAPWDUPZPLJWWLIDCVWWOHAZUSNPSZZLMUSVULBYQPOLZTNFIDKNLVKESQXNRVMTH");

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
    msg.setTimeStamp(0.5586299381554152);
    msg.setSource(32933U);
    msg.setSourceEntity(64U);
    msg.setDestination(17931U);
    msg.setDestinationEntity(116U);
    msg.command = 113U;
    msg.goal_id.assign("VBIUBNIMCTWEPQUILEDGYAFWISRQIPCTDNGFLREFADZCWCBRSXYBFDXLVZUEMTGZNKSBYODGBNVWFLEMIXBAU");
    msg.goal_xml.assign("YGQIOIXZHTDLSVUFLXBCYCLTFBIQJBIBBKPJEAKUUCTLMGVFINEIHCEVFWZRBVJOSFKTYZJPLBIDDMKOSRCGETNLPWETNXYACWWNRALRZ");

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
    msg.setTimeStamp(0.411352435396926);
    msg.setSource(47691U);
    msg.setSourceEntity(178U);
    msg.setDestination(53206U);
    msg.setDestinationEntity(59U);
    msg.command = 105U;
    msg.goal_id.assign("APMUSSCBPSURGYGKYKXWFMKUBTNVHCVPENJQVNNEQHSHTFDNNMBWQGCAFCIJAVATOVQFFHXXRYLUQHAGSKHHNSTIEWTYWGZXDERBQEFFFZLDRUDIBCJCDQOJWILMDJKLEAIRLUEXJXAKMLBFOQGAGKEHRZZRTOUDVCXRJZGUVOPPEMOXNWVKOSQMSMWIPMHKPLJPJYYGJZYYTCIYBZABVOSOORYWMBL");
    msg.goal_xml.assign("JEFCCTULAMZHRPXNXNOWHKCIHTYWSNVUBEDNXCZHGBBOAWEZXTHZBJSSWDPFGQFDEUMBYGPYQPQTARBTQNNPAZMIUWDGPCGRJFEIIKSKLJJRJLHWGUGYPVZTDXYYHBIUOCCYNIFGWXHQEPAEDSERFALRMMDGZWVDAKRDOVMAAJTVXQQYYMHTKFQHRUMTIIKSAZUQVWMELKCNRFZOJSXCMFNLOKOZBSVOCBLLTLBVPDPVKXUSE");

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
    msg.setTimeStamp(0.8539220224355513);
    msg.setSource(8311U);
    msg.setSourceEntity(213U);
    msg.setDestination(43019U);
    msg.setDestinationEntity(7U);
    msg.op = 128U;
    msg.goal_id.assign("KFTHBPBAWBZXVFNCPOXEGMZEQIBILYJMLKVRSIUVXRYAULATQTCTJJSFNDXESOFLWCEYXEKSHAZUOFGHKWYDAJBGXWLBAFNLFQMXRKMLVAMXSKKVTUWDDRMTMWCQCEYTDZPCJSGNOZFWIOEHMKDNDSUHIKJGBUURGSNZXEZPNPGQHBYCEUJROBPYUNWDYCHTTPAHAOEDBVOVXORTIVUIPJVQOSMQRWZZZRHCYASGNLYPQFJWQCDFIKQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SSWXVBQIIZPSVAFIYIJGOCFXIFQMTFXBZLAEFBYTTRDHDNXIVGUTPGGUQNGJBRREVKAWSQFJDLEEGPEDOHKUQZYXWCRVCMDWSLWWKRCNPLPNVSIJNNOMLDRQSQEATXCIQJLMZIOHAMBHOWQXDOAUNPAJNHORUVHIYMZELFVYZPNGDZKHWMTZJSWVWJYULCEXOUCBCYKNZHRMOAGRDAVDYK");
    tmp_msg_0.predicate.assign("CMYHWUPSJXHYQRUZSWHQEZJRSMEOHNUMHGLKAAJNPDFQYEEZIYSADJSJLKKBRPKIKBWIWZJXDRKTZSZJXUTNHLQEABRIFWFCOUNIPPBTFBKLWBZOAVGGYTGJXBQODOCMXVYQIKAWEUXPDUMPVWAAEYNSMDRUWTTLVMFHVTQSFBDDIIGMTVOCOLCDVXGYKE");
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
    msg.setTimeStamp(0.33487244435332897);
    msg.setSource(29005U);
    msg.setSourceEntity(27U);
    msg.setDestination(63290U);
    msg.setDestinationEntity(133U);
    msg.op = 172U;
    msg.goal_id.assign("LFIALFGJOSVLTVKBHYWGRJKRLXWOXUMBTOWOCVFWGKUZMVVUBSQNRJTMQNASJRSCQSXVDQWNTKQJEBJGCFHDQCPZEERMRZOYUTXHNGMVZOBYYDRXLSIMQDBPUPXFAOJXHSYPTEWFSCDITNJAPDXIYGUMCPLBLAYTGLQDKREFAWGCNWRZHKH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VXWPUQSRMXOKAWWIFFPQHIMNJPGFVQRMTGBQJXIGVWZFHHZHWQESLLDZBBQIAMUCJGMMRZHZAJOUFCTDWUORSEHQAVHRWNOBRCEORXSZTC");
    tmp_msg_0.predicate.assign("HCKMPGGRLLQXZDDIIEBEAUFSZCTVHVAXRURQPOBEOKWBJRTPKFTVVNLSGFFDIYIMHWMDCNCSONSWNPLMCEERAGRLAJQAEOFQDIVYLYJURSHZFWEMUGZHVQUUJPYVQLOFEFIBYWNLYHTPMHUDCBXNZYJWAFOXZWZVNVYKXETKOKBJQMJLOHQDHXSKBMWABDTBLZTSIGVO");
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
    msg.setTimeStamp(0.8207734176325148);
    msg.setSource(58309U);
    msg.setSourceEntity(6U);
    msg.setDestination(64449U);
    msg.setDestinationEntity(92U);
    msg.op = 207U;
    msg.goal_id.assign("KJNKKJAYTGWSIFGOPEUMDJUQNWIH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VGAZPPJMJGPRGWFLMBGVRNYRXPCSCHOAWDREFLAECWMUWIYTSONYFITXTEQXVGCUZUXUHQHQUPVZORDGLDMZXKAZKKOJNAMAODOYXTHICYXVFKSUKYBVLBLENCSRZVBLOLPDJNYSTFSKHSSNGRNQIPZJWADFTHNEEUHQJWKETFBNCTGBMIBQPTAJBJXWKDMEWCIYUDLOB");
    tmp_msg_0.predicate.assign("PUYLEOCTELCUFUQEDOIMODFTSFLBPJPCNEBJTINRHSCPGKGETNQPVSGDRKLCBLLMOKRXZWNCCDUEXDMHXYWBSQZYDNMOBEYZMHRFXVZCKQWHOJGKQNVTRYLPYXJKZKFOFZVQAFAOBRWXKWGYYMTUVNMGVWPSMKQGFSCRWGPIXZBHLALWNZNSGHSURJIMHRHHDXDQXIOBBQYJSRZEPUAYTIVWELQWTVJBCVMKAHXAZOSIFJAGNTADAAIP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MECRFWOZMUOXKGIFSMXNAEBYBCMQQBHBJELGEVUPIJTNGXGSXIBTQCQNXEYDXDIQOFWVRUKJIWMMMNOYEDYZNGYNGWAYZPADVQKBSATSFGODKOHIEFCASLROINKQJNPMVOJSILCTYYRLKVZTLBUBUXEEJTVWIULAAPUQWYDKHPXRAIZALKLVQHFZTRLWSWPUJNUOUHZWHOMDRZGMPPJVJECRBVLDHCZNDHATCFBCXKPTGHGHS");
    tmp_tmp_msg_0_0.attr_type = 158U;
    tmp_tmp_msg_0_0.min.assign("CHZIGRDTYVQLPTVUIQIWNPMWZHQYIKOEJLDRJRNMVXYQDFKZTXDBAJEMMFVQVMQTOEOUAGFCYESNZYMFAUPI");
    tmp_tmp_msg_0_0.max.assign("WGWQBAMFGCJZTZTJNHYUOCPDECVJEPXQNBKFSAXNXPYOEPRZIJFYRGQYSLHHSEFMVSVTYIRBLCNLMRGMDKQKZEEUDBAWNWVOWFFMYTIKSHRPDTOXFQHJBICSMLLKILDCOAREZCXMAYQAXINGZIVSREAUYDXAKOETBDULVYPDNXJFWAG");
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
    msg.setTimeStamp(0.9919861387977649);
    msg.setSource(1013U);
    msg.setSourceEntity(181U);
    msg.setDestination(5726U);
    msg.setDestinationEntity(192U);
    msg.name.assign("ISWVCCMYQEXZLQPUSUNAJNILMIDUWZQVBTPLFVKNRQAYBHYAABGPFTBVFWSSX");
    msg.attr_type = 174U;
    msg.min.assign("ENCJPAGBVQZBDEGVGMGKTERWYXOPNRCPUFSFDEBIGOJABEHSYDMRZUXKSWFCOMYXWDBFTRRKQDFLVGZM");
    msg.max.assign("AIESORBPJCMHBTSBDMAFLZLDGILDTHPGBNLWINFHIOUKQCUEVCTEFHQFSZNPHZCTNTQXHXPLTSHPDUYPMNNESUYJECZYLEMVORMRGBDXAYDLQWYUBMGRZXYYIOOKWSLSOLTKKRDWODGRXRSXFUAZQJTZKKKZOVKQWCFCAITJQUPURBSYPXGEAQRUWLWBOMVGSYPV");

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
    msg.setTimeStamp(0.29048070539612014);
    msg.setSource(3972U);
    msg.setSourceEntity(171U);
    msg.setDestination(43180U);
    msg.setDestinationEntity(109U);
    msg.name.assign("VXZIOYHGZQRWLYEZNXKJRSMLLVGCCSJUJLRNFFNEUCDPWZYPIBCHYNKGCWOWGABHOAOELW");
    msg.attr_type = 56U;
    msg.min.assign("ITLOQBNWNWRNXXITDNCJMJFIHXQUDUZKSKVQEBRYLUYWVXYWSDCPCOWGZNIERPBPBLCYBUEADGKSLDZFMQAFEYUCWHVTAWGYTVIKICPJXQULYRAEMRATXZMDBJPLTZQPXGDGFWOXFPZLDJUHJHETSSOKSMZYKRCLFKPQGFROTNXOBHWENQSHFZRBTMLSXOVEVIAGHFPQLJAIYV");
    msg.max.assign("OEPRIDCVYOWTZHABIXJFWFEEJWYIDQGXELOUCCBDPUQRTSKCASQIKKDVRUWNRYSLTLOSRCVPLCGGDEZUMAFYFGGHFVIW");

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
    msg.setTimeStamp(0.5533383983085148);
    msg.setSource(62718U);
    msg.setSourceEntity(180U);
    msg.setDestination(55912U);
    msg.setDestinationEntity(30U);
    msg.name.assign("HFXITKWUGDCIEZGPQXRXQAITYUWZUKANMNFVJSVJGBBVQEXWGGNAVESZMLAOZWVEKYBCYZHNPRFJPWXFEOGRZRCBKWDXERYMSSHWIYQDALVRCWTARXIVYUHMTTOOMISZCBFDNNQKKNVPPOILMEIDOYLEHVLTKBGCQDVPGSUQSUJEXRJCQGLJDDDHNSYBILBTJMYMYUQOFNHC");
    msg.attr_type = 119U;
    msg.min.assign("KWQECSCYGDZBEQILRKHVPNXEDKFYRVPLNWOYUDEAOFZACMOLWSNNJBDJWCDRIHJXQHXVRJXGSDZ");
    msg.max.assign("TCYPSPECPOURUHOFVBZNTOOKJYSNPBCVGOLDPMTJBIXNCKCMTTUOUPZAHMWTNMWJPIEUFXBTSCBBBQSXZAMRXBJLOSAWVFZRRKNUJYWIMAZZLHXTGMINTMXNRWBRXASHLQIDZOPAYSYMJNEDDEREULSWHAGOFQMKCWLDTNDF");

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
    msg.setTimeStamp(0.9292728387390217);
    msg.setSource(38981U);
    msg.setSourceEntity(14U);
    msg.setDestination(9213U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("URFRVQRVEHWPWGOGQWSZXGTYUFDBLZDRYZRMIPKHWUAEZMBSTLWPGIBINAOVSOCDOVGUKDBRINGWXSLYQFMHPMWSFOYWLOJUCJNGRAL");
    msg.predicate.assign("OGYVLBZBWYYLMEJPWEUKAZDCQUPPTTZRDMDAGJZCVZHIFSOQDXWYAYUZLVBDIDRMFNRUSLONIYHZXQERPCPFXBWUOCHSAUAHIDZKQHHRPOQEIVPBQQTDJEJFUNFOMQGFMGEXESSLYYKXUHFTKKMPLKQKIOJBGNVFNZORBSDVGCTEHULTTCJGXMWHIHSNTDWP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UMIMXJZQTBKSKLLOHVUL");
    tmp_msg_0.attr_type = 179U;
    tmp_msg_0.min.assign("SBSWIHZWUHEUNSOKPXQLDCBKHWCVSSNYILXVMWAABBEFFGJYPBHESARWDUVWYFHBORKWVBVGMVEGEPGYOSUGNTECAHUUFTRYEJXMNLODAGSUQXLXQHFYZDZKRAQYNBDHVYATSDZXCKIFMDJYMOZMUZOTTUJLQMIPOICIOAOESXGRYZGMPZLKX");
    tmp_msg_0.max.assign("ZHXWECNXPRWJTIGKSPPPWNXUIFGMVKQIUWGFIMEUHQDKOABKXBTIICQRSJCKBDZYQJZZDCTZDMGVAEZNSVHHLDABLTPIANLBQIEAWREVDRYRAOMLYYPHVBFUOSFXVEXCGALGCTEPWIOURKHOUZFJQYMOFJNLOCJFRWKPZMEPXVLODKKNNRVAJCTEHUBJQUSRTZNBCGXFJGTLYDAROSWMNSV");
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
    msg.setTimeStamp(0.9957746451664546);
    msg.setSource(26164U);
    msg.setSourceEntity(72U);
    msg.setDestination(29731U);
    msg.setDestinationEntity(76U);
    msg.timeline.assign("CLCURPIYNHZJWJOWGDHAXCBOQOXOGGFCJSTPOYSVPWVDVQSLSMIYAGCTFREAVIABNNHJICTRZQJCUHBMHLHAAGKFQRQBEO");
    msg.predicate.assign("STWUJYSVBUITIOZYGGSXAFECOXANLICM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PJDYZANSSXRQHKFWISMNYBGOHBFTIVEXPZMBLCGKGXCNFILZKZHBFGPIFOHLAQZVUNCTUTVLUMUH");
    tmp_msg_0.attr_type = 50U;
    tmp_msg_0.min.assign("LXRRHZMCPWMCTMVKNQIQGXFLGYNPQCOPKAFXUXSTNDSKSIFELHSZRREHEGRNLNWQDLCMPUOIYUNJRATAGTWRFZHDKMZJEBUPMFIASDVTWLMYAS");
    tmp_msg_0.max.assign("OGUIXBKXQHMBQFXYTIUZEWQGAEFETWZASXQEGMAFWVBJNCODL");
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
    msg.setTimeStamp(0.649890852362005);
    msg.setSource(44849U);
    msg.setSourceEntity(201U);
    msg.setDestination(12970U);
    msg.setDestinationEntity(88U);
    msg.timeline.assign("XCQPFLSECKVMDRZBKVGNXFGPBGDYHJKQOIZTAKOYUARYGHVABDIIIBXVGZAEA");
    msg.predicate.assign("QLHQTUZYAEOLDQJTSJVSUDMYEMAPBMUFGUHLHTKMRYUWUZTAHGDWVMNLDWSFWSTTZRSELPJHUOJVMFVSXFNNCBCYFQBEOUKIDDECZKDIRPQQENPBNVLGKGXFYFWYGLEJMXNHDOCEKEWORSTUNJTOJQLAAVPQVGOKAVKCXJBBQ");

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
    msg.setTimeStamp(0.020347352342616976);
    msg.setSource(55635U);
    msg.setSourceEntity(218U);
    msg.setDestination(57199U);
    msg.setDestinationEntity(247U);
    msg.reactor.assign("JNZUEBDJLHFGVOJGMTKKWINETNGSUIIUUHKZYYEGB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NKGEJLRYZZKIYRPAMHNQDEBSTBJSYOTV");
    tmp_msg_0.predicate.assign("TBWCKRNLSBHLSHVOKJBBQFIXRXSBECYFAOAXYFVRMTZISUVDYACYLVYPIFUTQKYLDOYAJUPBDI");
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
    msg.setTimeStamp(0.7817476710476094);
    msg.setSource(23236U);
    msg.setSourceEntity(7U);
    msg.setDestination(47613U);
    msg.setDestinationEntity(225U);
    msg.reactor.assign("XGRMOMSRPQTKRWFHHIHXPTEHCBOUGMWGABCOESBZEBVZKNJDLTQXXCOZNIFSVOUTQPMDNVCMTWFUYWXRXSLNSUDCANWBJJFGIXBGCHNJSJKWVEBPFHQDMKBSVLUWDUYGROPAWAEOUQQATYWQYKUDVEHIZLGDJVLKZEGUVFSFYAR");

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
    msg.setTimeStamp(0.5322838822370295);
    msg.setSource(51511U);
    msg.setSourceEntity(34U);
    msg.setDestination(39615U);
    msg.setDestinationEntity(227U);
    msg.reactor.assign("KWZOQVBDPUGGUFMADSNTJAOLICECFYFPGOJBWKAYFZNKGVEHHCDRBYHTMTHZSOBEXIJSRWWEHVCCCEHTRXYRKNLINKNFAQXTSRXKXLQPGFUNXMIDSHTWTNROCTYIEMUJJYXTCAQDIFIZIHWJGDEVAFSUTJGSQKVLMMQUQZZZAQWPJEDKRNRUBMZVGVPIUGJBLOLZVFJDKW");

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
    msg.setTimeStamp(0.4975742909575548);
    msg.setSource(10573U);
    msg.setSourceEntity(191U);
    msg.setDestination(17683U);
    msg.setDestinationEntity(238U);
    msg.topic.assign("FPGHXYNWRB");
    msg.data.assign("ONKFZTYSZBTLYEOPABIDARDXOMNHUDHDJNPKYCRPGJMMIUAALVJXSKZKWOJXELDMKBTQLHFUUIMETQXQIMZZSLJNGOMWKVYMQEBVMIWRCONSTEVCPCVSXWLYEWSHXZQITTFGBOTRCFKBAVY");

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
    msg.setTimeStamp(0.02227857151670576);
    msg.setSource(39091U);
    msg.setSourceEntity(85U);
    msg.setDestination(16327U);
    msg.setDestinationEntity(120U);
    msg.topic.assign("KRLRLGPMJVPLLNYAJHQHOCJYZZCSOYXYDXAALVVNMISIAHIFINJNRHEPVLPZZGGPPUISQ");
    msg.data.assign("GXSDFYYKJDECXAQBVGVVSVHRWTQTFAWDDYRAHHTZPTYQLCNKHESUOYTLSMQIWACQNUTZCEZCVRNKHFEUITUOGKSSEMXDMFLXBLZUZBGKGJZGWFTQPUYEBPIHPIPSLCORXUVBKNRJZWPMNMOFXJEJTJBJIQCVXUSIDIFREPNBAHHJYOANVBDDCSOHKLGYVMAXIIYCKOBMFRWBOK");

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
    msg.setTimeStamp(0.20177466982644243);
    msg.setSource(49287U);
    msg.setSourceEntity(173U);
    msg.setDestination(48136U);
    msg.setDestinationEntity(102U);
    msg.topic.assign("BXKYHVDNHXSQKJRBAHZPOEOFDMVCEYYRFAFLXMDEEBTPANUDQCMHOZJRLYIGUVCCFESAMHVRTLJWDEJMNMZBTLEOSWJXTUZXESGLUQOYHDBRRQXXCNKTAFAYVGIUOWKWSCTDRLIWZILPBOCNGXKQTGTWUNPRSKJPIKYUFZKZCTYAXIGMPBNSFWQPFADVQHJRXLRIOMVMHLUKSZLGVPUSVJWNDJNHTQDIWZ");
    msg.data.assign("BXQFXXCXBWNGNHEQI");

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
    msg.setTimeStamp(0.6645611171127801);
    msg.setSource(13884U);
    msg.setSourceEntity(150U);
    msg.setDestination(53115U);
    msg.setDestinationEntity(55U);
    msg.frameid = 27U;
    const signed char tmp_msg_0[] = {10, 62, -47, 0, 73, 14, -108, 84, 74, 116, 98, -92, -33, -92, 39, 104, 105, 112, 33, 87, -105, -51, 1, -57, 101, -54, 86, -84, -27, -107, 34, 60, -69, 87, 71, -57, -124};
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
    msg.setTimeStamp(0.8877488592921366);
    msg.setSource(14495U);
    msg.setSourceEntity(187U);
    msg.setDestination(46876U);
    msg.setDestinationEntity(218U);
    msg.frameid = 192U;
    const signed char tmp_msg_0[] = {89, -71, -33, 105, -42, -95, -32, -73, 104, -34, -113, -74, -52, -105, 3, 24, -44, 113, -60, 67, 15, 16, 84, -102, 110, -18};
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
    msg.setTimeStamp(0.6377396231102678);
    msg.setSource(1161U);
    msg.setSourceEntity(187U);
    msg.setDestination(38785U);
    msg.setDestinationEntity(30U);
    msg.frameid = 154U;
    const signed char tmp_msg_0[] = {-8, -96, -52, 89, 126, -27, 38, -106, -96, -38, 24, -101, 59, 66, -30, 92, 82, 23, -53, -7, -48, 10, 68, 24, -109, -46, 44, -75, -71, -26, -64, -38, 17, -11, 15, 54, 75, -50, -24, -126, -115, -30, 69, -124, -89, 117, -77, 60, -27, 68, -46, -33, 44, -109, -2, -84, -35, -108, 36, 21, 20, -33, 30};
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
    msg.setTimeStamp(0.1455035299784152);
    msg.setSource(15810U);
    msg.setSourceEntity(237U);
    msg.setDestination(13151U);
    msg.setDestinationEntity(106U);
    msg.fps = 136U;
    msg.quality = 214U;
    msg.reps = 80U;
    msg.tsize = 91U;

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
    msg.setTimeStamp(0.12329208927549662);
    msg.setSource(50848U);
    msg.setSourceEntity(75U);
    msg.setDestination(50556U);
    msg.setDestinationEntity(54U);
    msg.fps = 61U;
    msg.quality = 36U;
    msg.reps = 244U;
    msg.tsize = 182U;

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
    msg.setTimeStamp(0.2796020185346265);
    msg.setSource(11845U);
    msg.setSourceEntity(115U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(245U);
    msg.fps = 216U;
    msg.quality = 13U;
    msg.reps = 41U;
    msg.tsize = 208U;

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
    msg.setTimeStamp(0.11944207537394347);
    msg.setSource(28507U);
    msg.setSourceEntity(29U);
    msg.setDestination(44598U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.7646790008723447;
    msg.lon = 0.6791784824463662;
    msg.depth = 105U;
    msg.speed = 0.6449424697236149;
    msg.psi = 0.06384903033185663;

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
    msg.setTimeStamp(0.3877428685974783);
    msg.setSource(12072U);
    msg.setSourceEntity(229U);
    msg.setDestination(51313U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.6899339505936035;
    msg.lon = 0.3904779441089452;
    msg.depth = 222U;
    msg.speed = 0.7673498931749159;
    msg.psi = 0.35448560652059546;

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
    msg.setTimeStamp(0.3409548285542281);
    msg.setSource(6481U);
    msg.setSourceEntity(25U);
    msg.setDestination(10762U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.17501923217646143;
    msg.lon = 0.5135383343293949;
    msg.depth = 138U;
    msg.speed = 0.44951844777745287;
    msg.psi = 0.8334014861173963;

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
    msg.setTimeStamp(0.8607356375906474);
    msg.setSource(19267U);
    msg.setSourceEntity(73U);
    msg.setDestination(23964U);
    msg.setDestinationEntity(190U);
    msg.label.assign("MKSTVEIFLIKWHLYHVTODIYH");
    msg.lat = 0.337364846957551;
    msg.lon = 0.5872252248976944;
    msg.z = 0.3350780480686253;
    msg.z_units = 179U;
    msg.cog = 0.7922387227170705;
    msg.sog = 0.6521397989012087;

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
    msg.setTimeStamp(0.5560262039588513);
    msg.setSource(26122U);
    msg.setSourceEntity(222U);
    msg.setDestination(37054U);
    msg.setDestinationEntity(25U);
    msg.label.assign("ORMDAFEPIGYETUMZNSHBSQXSLAKGXVHZ");
    msg.lat = 0.08770451654443912;
    msg.lon = 0.6831835499808117;
    msg.z = 0.9735345820635989;
    msg.z_units = 76U;
    msg.cog = 0.06715101581761951;
    msg.sog = 0.44367559544500823;

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
    msg.setTimeStamp(0.07259415000634695);
    msg.setSource(51662U);
    msg.setSourceEntity(23U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(176U);
    msg.label.assign("MMSIHRGCGFXJNOFBDSTVBXQMOVVVCXIFSWOLDXUKBEUZWFYYCUMIXYDYNSPLNBMP");
    msg.lat = 0.7280965883887193;
    msg.lon = 0.8092213145287296;
    msg.z = 0.18768091166845713;
    msg.z_units = 191U;
    msg.cog = 0.5447259894624398;
    msg.sog = 0.015475325423488728;

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
    msg.setTimeStamp(0.3374883286517648);
    msg.setSource(4948U);
    msg.setSourceEntity(80U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(101U);
    msg.name.assign("UKIFQHGCGPZPBDQXJUTKGXDAL");
    msg.value.assign("HGPRYBSXPUHIMTJQFRYWAJVETYVULSBUUWIITFGJDZPDNTPACQTORRWTSVERLOQFFZPLGXDYJWZOMZVBKYZHDXQRAFDMSJVXUQKTCRFAUKJCDORVBYQXAGMUIMPEBHVKDDKYUOPFINKTHHHKBIASAGWBNRBEDQLAEEYKHZVP");

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
    msg.setTimeStamp(0.7204254618337972);
    msg.setSource(54970U);
    msg.setSourceEntity(13U);
    msg.setDestination(1547U);
    msg.setDestinationEntity(10U);
    msg.name.assign("AHGBBPTTWGMDMACRNQFZIYFJVBIBXLGMEDPKBHLGIVDJEHZFNWUNVLTOYHSERKTXFCXBJBNZTWGWXRXVRKKRDLMSPQHAFIMPJCPHCOYKNEQMJKGJFFAXQRYLLAXINHUMOEEEPAIUUFWQFERUYZMLCKGUMEHDSCESAGTUOVHNXOAGDWGPQTCINO");
    msg.value.assign("IFRVCHBNDVZQUMAMKWORQZYPBSFTOGWZCEUKHBIKBMOKAUPFJXJEMFWAUEYDBLKZAGYTUXUWOYLPOXMJVIXBGHBHOQISXEFMTYQQJRCGERDGXNTD");

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
    msg.setTimeStamp(0.07331302820699692);
    msg.setSource(12816U);
    msg.setSourceEntity(214U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(92U);
    msg.name.assign("JQRIJNHXYMHAEGKTLWMGRFKVQHPQGWRGUMOWVBDSBOSSOUBWGZSDVUBFZLLJNPXRCGAKWIZMFXRYVMZFXVBHRJAFIZPTCKEFDBPIQKMFFQENYPICGKGSAAYUNPTPCUTDNXELDWZKEQKOZYHMTHLUFUYLOEPSRLSYVTVHYDOARGQTAMJTEJISDJJQWXQ");
    msg.value.assign("NVGKMPJMCAXUTZIVAYGJCNZYOXPPFFXIVQKCSKQZHXHHAWTYVRMQUKAHGBEEXJWBFIWYGFGUONUBSWTIYXSRJHDSRQPPVESWDKKRITFJHQWAKOZUVFDELNOZXTGGLWEHNTPBRXYBBFICDTLUYMQZFJMDSLNXCEOGMFPKUOAGCBNLMVVCNLQBKPJOJYULSDRMCHREACDJOEPSJWDRZTAWMIZLGNZQTISLTBVZSIRUKHXFQYDEEAQOLNCPUYDM");

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
    msg.setTimeStamp(0.9188165117400725);
    msg.setSource(17898U);
    msg.setSourceEntity(186U);
    msg.setDestination(29632U);
    msg.setDestinationEntity(194U);
    msg.name.assign("KTWYJCQEILGNNEFDUCHFTGGSKRQOWGYGWZVAVLPEYTWNICCZFMRIPWIPYWSSGTODQMQLKIQXKJCMJRDEHRUQLHCFOGXFOUTJFRTYRCXBVZVDBPYVJWXAKXXRKZYPWEYABL");

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
    msg.setTimeStamp(0.14475731450962803);
    msg.setSource(63795U);
    msg.setSourceEntity(163U);
    msg.setDestination(30601U);
    msg.setDestinationEntity(41U);
    msg.name.assign("SNUICMFJYJUOZNRBWYJNQCTBSNPJHDZXTUUDRSQQFEECRVMCAOAKAEHQLDZVYBQIUYAPAJVXFWKNXANKIYFDOEILZHPUSIBGMGKYXXFZPKEXZLHRNMETSYCCCSNOTHLLWJLMWZGKVWHCBSOOVHTWMBTGEQSNFDPBQIFBUGTEIMLZXPYGAUEVRXOWHMKTHSDOIDLXXMRPJFPLGWFQZBTSQHZ");

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
    msg.setTimeStamp(0.19621005156136961);
    msg.setSource(53455U);
    msg.setSourceEntity(69U);
    msg.setDestination(15584U);
    msg.setDestinationEntity(178U);
    msg.name.assign("ZJKTFMLGHCLRMWEYZAOQKKOTHFMIZOULNWCNIGDKVBJIYIWHJXCQUBNDAMSKORXNYJL");

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
    msg.setTimeStamp(0.8070698833670864);
    msg.setSource(64065U);
    msg.setSourceEntity(235U);
    msg.setDestination(809U);
    msg.setDestinationEntity(125U);
    msg.name.assign("VGFDZDQGQVOABYGTHFKLMXFEPZSPOSWNAQQVPARVNYLUYPXMSNSRJPDCMZIOPVNRKCYWRUFUIQUBJHSYDDFKLCHFLDZVMJUYGGJOMZTWXCOFVPCIUTUWUYFPNANYKBCBQAYBQRTPLKJIEHOCPRQEVXTGFNZZDQUHGLITVRXNZLRYSSKXECBHBMSLWJGKIERNCBAXFDDKSWAZMSBGTTLKTOAODHWJCBXJGAELWRHINWAUIEXEIJMOXQZVT");
    msg.visibility.assign("PTDEJNYYTQFOCYXDIONBRJWMIXWUTESLRPKCFYKYUHXDYSPEJVKKSCWOOA");
    msg.scope.assign("ATWRJCTNXFNXRKQXVTSBBNNLFCMMHJZCWRHCSGDBUKMJLHXEPGIVQA");

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
    msg.setTimeStamp(0.9151189261473738);
    msg.setSource(9878U);
    msg.setSourceEntity(173U);
    msg.setDestination(17615U);
    msg.setDestinationEntity(254U);
    msg.name.assign("GHEFDNGZKCJCBVCXMARDNDRUDFDKKAISFOEQTADTZXWMHIKTHGOQUOVKGSKUGOWUQCXHLPLJGNAIUKLRZPWETOEFVPZRBISNBQMIENBXGBMYHQD");
    msg.visibility.assign("BTZUCZUVFVDQPUHIROSBKKFCCYLPJQKZRWRHDFJVATTGAFJSEWTGWSFOHLEVXNQPYSEJXNEETHMCIIEKONSZHXYKMDOCQUUFWDKZXZYPLQTALMYGXPVOJTZS");
    msg.scope.assign("YCZDZEFPNFVLCEGKERVXGUYOPVLEESQCODMQEZLENUALJYTANPGBZNWPXISYLQJWTKFAPJVHTIXHUPVHOVYTSSZDQXMKO");

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
    msg.setTimeStamp(0.7348317477937958);
    msg.setSource(2336U);
    msg.setSourceEntity(75U);
    msg.setDestination(15036U);
    msg.setDestinationEntity(53U);
    msg.name.assign("WGAXVWAIQVWXMYRGGIWVUXZNKKVOBFALAUYLCLOMEQTBCDJRVLDMIPAZPYRHYXBWGHMTQLVIHJQPMWUBKEWMZJNLXZNIKUQDSOFMGZHRFRSQPLQXTSMLNODETOKJPRIFBXJTQWJS");
    msg.visibility.assign("ABAYXFADBDWFPIWJXDPMECCNREBLNEPGUSLMTVJSNRNKLEQOMEGKJXQ");
    msg.scope.assign("ZZKJTAAKXQKRKXJXZZHHEDXKBBXJFWAOMJGOWUDFQDFCIEAMUTPYOFOEATIKGUPPYUMCOLLSWDWSIOGRNXEPDJURPUNMVJCCLYWRUHYBSHCILIMTQGRTCLFAUIIGVJXPLVHSNCDJWEARHPHEFZTYXTASDVRELABPFHWWMNVMYOUNOAQDOQHNELZSDNQFFVYQSQYNGKCGLIOXXMZYBWVVHUKMBDNPRGLJPVRJYTBIMEFSBGC");

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
    msg.setTimeStamp(0.8993617448697534);
    msg.setSource(35786U);
    msg.setSourceEntity(35U);
    msg.setDestination(41504U);
    msg.setDestinationEntity(46U);
    msg.name.assign("MOFKZCJOJRMAYQSXDT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SRMHNYTIZXYHVTZGVQUWJEHPVHLADZOGXEWMTPVCEPFJSHOTCXJSJYYZLQBOFHNAGBLJENGZRCOTBMFGXCQHSERARXUNWUMGOMDPPJNNDLWMHCOAXKKEMEHNDDWIEULQSOFBWECFZNIHYBDMZSQQVFTCW");
    tmp_msg_0.value.assign("SQYZUDZWTKEYGHMTSITYXUDLPQMGKAOXMYGWOIQLGVFVNRMNTPFUPFNTCIXBRMCIATZHIUQSHINPXTGWBIDQQVFEYFNVVGLLSPYYVKRCAKZUKENYFWX");
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
    msg.setTimeStamp(0.05182363382336952);
    msg.setSource(32631U);
    msg.setSourceEntity(226U);
    msg.setDestination(59329U);
    msg.setDestinationEntity(232U);
    msg.name.assign("YCNTMYGFASZIKVFOGOWBGDVZYRMALEPETVPMDDKNHULQOHCSEIGCUGXZDYQJQQAZSBQCWNWXFDOQXKGGVRROCRICRXPJJWNDWZPZLTMELNHWKYVGAMMCIQVYLBEQPYAJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WIBZSNEWANFLBEGDPOTDVVMCPEYZFGZRBYNPKORKXSASYOHDZRQCZOFAQGZEYGSIUQCWYKGHPJYEXBUVPKISTDHTTXJREQXFHLSKBUIFOLMYMMLNNOTDMQVYUVNKXTGXPFOEXSQCTUNRDCJPKWKUJCGZIHVFRJNZTVNJMCYZLHVMCUYRWLQGWUELSUQIQBUF");
    tmp_msg_0.value.assign("VJZOILRSKVLAH");
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
    msg.setTimeStamp(0.8374546718395008);
    msg.setSource(20697U);
    msg.setSourceEntity(221U);
    msg.setDestination(51873U);
    msg.setDestinationEntity(94U);
    msg.name.assign("SUWCXIEADZVNEHRXQVMDMDBIJNLINDPXUNKMRAOVEBAAPFFCKEKSUFUVEPTLAQBVNTIWMHYJJHOGJPCPTESHBGPPZUZUANIGWGVLSJRYZAWMODTRLYZSCUTWHSFJOTMWSSAUOFSXYHOXKWNGEYQKABLPOWVTTZMEDRONQDQLLZFNYZOGKESYCUYBQJHKRHMWKCQVIYCIADDGJNDGMXBCBKVIFOIXXQZZLGCLFPJTHUWYKFCQJP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QTBPLYLXTAWTMOLNKHZRBEDZNISMCKUDTDYASZKIIQMQUCIEPKTVJVXMFEPEKLHRNVVZPFTDRORZSXXNRAHFVGFONIKUXKKQMUXAYKOGHJCXBRJROCJEHMVZIDPMGGUXWGPCYRJSKBAUSVCG");
    tmp_msg_0.value.assign("FEMYJRAKMWTKFAKCIARDVPOEXGGYIPJIRDCRWQHXYWZZAPKUSPXSMTZHLZRNXDXIIYKOIOGWGVSGVNBKEEFBTROSJAVWQPZMJXYXVPSLMNVMJBYSTPLYMLURAEGXNJNAPSJEGCUUTQZFQQHBQHKRCKGUECTSHNDDUGLLEZWDQSWYCBCO");
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
    msg.setTimeStamp(0.007969057182731332);
    msg.setSource(34737U);
    msg.setSourceEntity(30U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(225U);
    msg.name.assign("GVZIMBVUTTEQYJAZPYHCYQXUBNGMTWGRQKKPKPFNSVFSBLFGDTOAOJMUHECOALGCEMWJJHUDEHPCCVOOINORLWZFRCZIUTKAUUOYAQRTAKTDFOZGAQNCTLWXVSHHCV");

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
    msg.setTimeStamp(0.4333214546928795);
    msg.setSource(47571U);
    msg.setSourceEntity(140U);
    msg.setDestination(60531U);
    msg.setDestinationEntity(31U);
    msg.name.assign("JEOMFRMOPTXMOHNSHEDVQFUECRKTYOSXKSAOJRKNXHEKGMGGABXLUPARMHELIEUWAOWDOUAUTMMFLLHSDYTTRIJBZWLPLECSKIZJVHNSNDCZPTTGXBYZAWXQLJUPYYSMHSJBDJDVLNORUUWGCZWCDQYMKDCXWFGJFYYHVXIUNYJOPIPRWPQVVZLSCQVNZQAIRHXGQJBHFAYUFOIKEVB");

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
    msg.setTimeStamp(0.10140491199714452);
    msg.setSource(15408U);
    msg.setSourceEntity(206U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(181U);
    msg.name.assign("BHFYZOLLRCZOQAQSBAHHNPKRNSMVWCAUCCAVWQIVPOKSITNNELXPOERRU");

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
    msg.setTimeStamp(0.8782301424369021);
    msg.setSource(57605U);
    msg.setSourceEntity(32U);
    msg.setDestination(37704U);
    msg.setDestinationEntity(146U);
    msg.timeout = 1661919956U;

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
    msg.setTimeStamp(0.2931489191355757);
    msg.setSource(48458U);
    msg.setSourceEntity(168U);
    msg.setDestination(23166U);
    msg.setDestinationEntity(229U);
    msg.timeout = 1839167862U;

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
    msg.setTimeStamp(0.6881918795775962);
    msg.setSource(61073U);
    msg.setSourceEntity(108U);
    msg.setDestination(47669U);
    msg.setDestinationEntity(154U);
    msg.timeout = 394177455U;

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
    msg.setTimeStamp(0.8471219549612562);
    msg.setSource(44260U);
    msg.setSourceEntity(247U);
    msg.setDestination(61651U);
    msg.setDestinationEntity(179U);
    msg.sessid = 1563998587U;

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
    msg.setTimeStamp(0.288378700972588);
    msg.setSource(29604U);
    msg.setSourceEntity(25U);
    msg.setDestination(8517U);
    msg.setDestinationEntity(103U);
    msg.sessid = 1803895848U;

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
    msg.setTimeStamp(0.48010342347577095);
    msg.setSource(59916U);
    msg.setSourceEntity(241U);
    msg.setDestination(4145U);
    msg.setDestinationEntity(84U);
    msg.sessid = 2826666631U;

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
    msg.setTimeStamp(0.007825408925761002);
    msg.setSource(39307U);
    msg.setSourceEntity(216U);
    msg.setDestination(15794U);
    msg.setDestinationEntity(155U);
    msg.sessid = 970826140U;
    msg.messages.assign("UNPUEAWWIAOTWPDCYDELPLCKJPUUTOOHKYTCTYDOIKVXAHYBPSLQUBQMDGAMROTHCEDJDYTZJIK");

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
    msg.setTimeStamp(0.29086976703488254);
    msg.setSource(37866U);
    msg.setSourceEntity(72U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(64U);
    msg.sessid = 3760465187U;
    msg.messages.assign("OXPLPHVSUOWDBCNAKLTMCJIGBSJIFTANALJZNXQUNHMOI");

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
    msg.setTimeStamp(0.8115618223717582);
    msg.setSource(52809U);
    msg.setSourceEntity(71U);
    msg.setDestination(504U);
    msg.setDestinationEntity(32U);
    msg.sessid = 71015761U;
    msg.messages.assign("JXFRTNOMFLCHGRQONKGVHPKEOQNWUPXWNFAZEIUUHKYKJTITPCFWSHLYHIRAPGZEHFTAMAMLJEXUUYZCRSGQQTDOORRYMVXPFBZSJZETXOXAJDJLEDMUCWAVHKEGGSGQWBWGOTDXWRCIYABKINPPLDVQJHFXDHLSZHLSAJNXVATLFVJXEOMVJNABBLQZIKGGQDYEPIYNSLVPCSWVZVNZZUYOCRDSMWUI");

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
    msg.setTimeStamp(0.11522636454537583);
    msg.setSource(16207U);
    msg.setSourceEntity(178U);
    msg.setDestination(37004U);
    msg.setDestinationEntity(185U);
    msg.sessid = 3674406974U;

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
    msg.setTimeStamp(0.6924806729946262);
    msg.setSource(55395U);
    msg.setSourceEntity(106U);
    msg.setDestination(55295U);
    msg.setDestinationEntity(13U);
    msg.sessid = 3553598049U;

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
    msg.setTimeStamp(0.6361410553845321);
    msg.setSource(4884U);
    msg.setSourceEntity(42U);
    msg.setDestination(23168U);
    msg.setDestinationEntity(61U);
    msg.sessid = 2514971202U;

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
    msg.setTimeStamp(0.6595118135363088);
    msg.setSource(18856U);
    msg.setSourceEntity(33U);
    msg.setDestination(51538U);
    msg.setDestinationEntity(71U);
    msg.sessid = 1253220334U;
    msg.status = 233U;

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
    msg.setTimeStamp(0.13093251209295953);
    msg.setSource(51708U);
    msg.setSourceEntity(132U);
    msg.setDestination(11304U);
    msg.setDestinationEntity(142U);
    msg.sessid = 1741857003U;
    msg.status = 237U;

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
    msg.setTimeStamp(0.38212587438245826);
    msg.setSource(42895U);
    msg.setSourceEntity(137U);
    msg.setDestination(39465U);
    msg.setDestinationEntity(187U);
    msg.sessid = 137719504U;
    msg.status = 224U;

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
    msg.setTimeStamp(0.9076814158064073);
    msg.setSource(31549U);
    msg.setSourceEntity(140U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(155U);
    msg.name.assign("UXRMMYMCGYOGCLSOKGPRIEJHAZHPJBMWRTNQPDDDORIWZFSKFVBWNWDVTRLJVDMEHZCXEKFRDFZMKPKZROUTXJGYETLXISTFHLKCQOIIVTIHZUFJEDDSRNLKYXSWVOOSHJZTCUSLEPZYFNKCFEWUWMUIAXZFLXAGBWNTUBN");

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
    msg.setTimeStamp(0.8546414052817756);
    msg.setSource(56749U);
    msg.setSourceEntity(44U);
    msg.setDestination(6578U);
    msg.setDestinationEntity(162U);
    msg.name.assign("NPIKHBFNFKUPURKWRMFXCUOQPWRHLGJNIQRITSNOBSRIXYRFJFNPMZYUVVYFESYEBUOXWHNZYYZKWZSFDTURJYOIIEAPXQLO");

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
    msg.setTimeStamp(0.7604368406765143);
    msg.setSource(4478U);
    msg.setSourceEntity(93U);
    msg.setDestination(34772U);
    msg.setDestinationEntity(159U);
    msg.name.assign("UCJVRGNHQAIJOVOSQXUIFOVCCGNBTBLZNYZYKRNFFPLHVVIOMKIORMBGGZRHBBCTXJDRKJAASONSSWGJLHAIUMTIYVWYEWWLMZVSIYKQZSEVXCGEMXTTFXKEWTGZCAHMJDOYWZPAEUMPDRLQRVZZMAUBAJFSMEQOGDQUJHUDRDVMNSPYLP");

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
    msg.setTimeStamp(0.7330180933577938);
    msg.setSource(26292U);
    msg.setSourceEntity(92U);
    msg.setDestination(53843U);
    msg.setDestinationEntity(30U);
    msg.name.assign("DQSRFXNTLCAQDXOUARWLJIJGXKBLZTLBUOPWRVQRXESVFXUIPVDGIGGMTKKMSXNREWEHGIGEUXHUWUDCLDHJTORESMZITWZHKOF");

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
    msg.setTimeStamp(0.40407133701781517);
    msg.setSource(21108U);
    msg.setSourceEntity(37U);
    msg.setDestination(63578U);
    msg.setDestinationEntity(80U);
    msg.name.assign("VGVXXQOSYUADNPXBTQHRVCEUQSTDHJNPRUMGIOFGMIPQAGVYARYFEVCPLJFCEVOBGKKBZUMDBAFIHAKSSIFYQTWLMNLYZXJ");

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
    msg.setTimeStamp(0.7389516903783864);
    msg.setSource(15666U);
    msg.setSourceEntity(136U);
    msg.setDestination(16343U);
    msg.setDestinationEntity(214U);
    msg.name.assign("AAWTUVYFVESRGKBBARTKBQMDDCOSRUJSIUEOKKRQOBMVFQUBEQEVVLOIBXLIHZBLCIZUTXWWCEMKJJVRDOROQUZOCHKHXMLNACLIGODJRSGNWJFFMLCSNYYZGMXVCNYHHFGQFJVSGMWZMCGETUREGZSDXFPZFYPAXCIPPBYJLIPWTTIXRCSWTDNTPHHLXAQXNROLUYEWWHKNJMDKIXPBS");

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
    msg.setTimeStamp(0.9751520306915461);
    msg.setSource(45214U);
    msg.setSourceEntity(237U);
    msg.setDestination(13126U);
    msg.setDestinationEntity(185U);
    msg.type = 217U;
    msg.error.assign("FUQOAFTCQABNAGDWTEHPXKZKRMWKMNBIQHWNFDJQASBYVRVNISANLMRRNTWRWDPVUTMBTBCALAIUOOYHSOGPFHTHNHGLQUGKZLBPHJZOGPPERYUOZIEGEJNZUIEMQCYYKVJQTOVTBIPEUGTJDFXEGPADMWURNKLMJXWLVDFWKESCJFQSYDOUXFXRAQCCSSIXZZLOWRPLCYGLIVYMADVBKPRTGXEKJSICJS");

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
    msg.setTimeStamp(0.8740417623033936);
    msg.setSource(4711U);
    msg.setSourceEntity(65U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(130U);
    msg.type = 119U;
    msg.error.assign("JTWKDVWFRIRSMXPBCGKYXUYYPDAGXOVDPMGKAKWDHIXJFEYEPVRHKLFNHIRKLOLOBUSVTNSVTNZHFRBDWSSGEJDYMYSZULCECJNNUHYMVOUGMFLIEZGLUTHMQTMPBDFFEQQAUCQRWQJADRPPACSPXAQCOIFJBDCTXOVSTHAXVEBKBGQPQIGYRGWZZTFLZCKIQKSTOMXXUYONICBAJEONPWLRBUWMTGWZHNUQ");

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
    msg.setTimeStamp(0.572678134463082);
    msg.setSource(22243U);
    msg.setSourceEntity(214U);
    msg.setDestination(15998U);
    msg.setDestinationEntity(54U);
    msg.type = 26U;
    msg.error.assign("HIQYWVMECZAQNBBRAOFLJTBXDZAVTFNFSJNQNFPTYTPARNXMZJMZIDDVNBFLYCCFNGETWVOPDLQAHOGJNPYGEEEFUHSQVTODEHTOCDESGFRQYJWJWIYMKPQULZSGCLXWEYLAWJROWDGBIURTVMRKOFOXLY");

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
    msg.setTimeStamp(0.3010099901001304);
    msg.setSource(9993U);
    msg.setSourceEntity(190U);
    msg.setDestination(32034U);
    msg.setDestinationEntity(126U);
    msg.seq = 25996U;
    msg.sys_dst.assign("BGYNQMJZXYXIOKPATNPACXLBBRKPQAWXYVKUUTLANQBIYJXZUOMGSJIRLNFKVBBZJIHCSWOHGDMUPDFNSSJCGHJWTXBDECANIGYHPMLZCTANSWZWVDBUHMFQIBHWLSHLZXFJWKRKUUYRTCGEHPRJATLQDHEGWBUZEQRYPCKGRXEFOFKITEFITYKCYFEDAJQNGMAQHVXFRGDLPNVXEFMOZKULIDONRCPZVOQWTIVMSOVSSVEP");
    msg.flags = 26U;
    const signed char tmp_msg_0[] = {-125, 73, -110, -35, -68, -32, 28, 54, -120, -18, 18, -61, -4, -121, -120, 25, -1, -116, 98, -128, -44, -23, 32, 87, -20, 113, 96, -54, 8, -63, -38, -120, -54, -8, 46, -5, 61, -43, -66, 13, 53, 12, 104, 15, 46, 53, 29, -103, 87, 33, -53, -84, -28, -114, 102, -71, -78, 28, 5, -117, -103, -69, -37, 12, 52, -29, -1, -65, -55};
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
    msg.setTimeStamp(0.35380219192368656);
    msg.setSource(1105U);
    msg.setSourceEntity(177U);
    msg.setDestination(36244U);
    msg.setDestinationEntity(78U);
    msg.seq = 55811U;
    msg.sys_dst.assign("NFQNGDVRHTRRSAMLIXMPMWSIYUGXPISKCTXCAZWCODARCEZJMDAMBWBWGHSFIYSWBODXNAXLGHQFCZYCGUBCEDKQXMZXRYUJUXJFUHDVVLVHIFTQCEXLZLQJJXZFOBYYJZOGOJJNSHTRVYJTLNVSIWFYVRSHWEBLEUQKORNKNDGUATNHTAMPENDPWERRGIPOZ");
    msg.flags = 140U;
    const signed char tmp_msg_0[] = {-91, -52, -53, 35, 97, 10, -48, -80, -2, 120, -40, 61, 72, -37, 40, 5, 59, -14, -8, -17, -40, -114, 20, 35, 122, -119, 17, -6, 118, 76, -5, -110, -93, -80, 3, -46, -46, -122, 25, -20, -94, -92, 43, -118, -75, 106, 84, 64, 40, 124, 102, 10, -69, 86, -28, 83, -54, 125, -3, 67, 111, -45, 22, 36, -11, -54, 60, 100, -1, -20, -36, 73, -38, 25, 82, -62, 120, 1, -70, -115, -95, 13, 49, 68, 101, -83, -62, 51, 49, -88, 61, 9, 53, 104, -12, -11, -100, -57, 22, -3, -68, 78, -19, 52, -18, -74, -33, 8, -15, 73, -73, -37};
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
    msg.setTimeStamp(0.8742809938805369);
    msg.setSource(12215U);
    msg.setSourceEntity(242U);
    msg.setDestination(41008U);
    msg.setDestinationEntity(227U);
    msg.seq = 47273U;
    msg.sys_dst.assign("DJHQPALGFKGEMVXAPZTRFORENSLLWAXAOXXCVEODTBPETWOBTFKJFJKJJCXBOIRCVWCDAWYSYPMGRGEWQBCZKQIDNVIDHHYALELBJEGSOXYM");
    msg.flags = 245U;
    const signed char tmp_msg_0[] = {91, -99, 15, -88, 5, -60, 107, -121, 88, 15, -22, 17, 122, -29, -84, -56, 87, -25, 13, -128, -49, -22, -21, 56, -15, -43, 34, 20, 7, 67, -38, 54, -75, -58, -36, -83, 56, -49, -11, 86, -11, -11, 71, 99, -98, -79, 12, -33, 40, -41, -12, -112, -46, 114, 112, 18, -98, -78, 100, -32, 12, 74, 112, -3, -78, -111, 36, -32, -112, 59, -6, 116, 67, 113, -59, 87, 105, 19, -25, -35, -10, -73, -44, 6, -1, -118, -61, 38, 68, -4, -30, -16, -74, 68, -92, -113, 78, 64, 21, -87, 6, -12, -85, -60, 40, -25, 87, -128, -75, 0, -118, -57, 44, -83, 68, 21, 83, -75, 22, -94, 81, 118, 98, 20, -98, 61, 14, -34, -32, -17, -26, -39, -115, 102, -99, 85, -63, 48, -35, 124, 26, -46, 43, 60, 111, 46, 60, -113, 67, 90, -17, -107, -83, -120, -69, -64, -27, 14, -69, -125, -97, -95, -88, -125, 12, -10, 117, -47, 109, -114, 36, -9, 7, 38, -100, 107, -30, 38, -16, -80, 126, 84, 54, -31, 102, 119, -69, -43, 67, 51, -118, 68, 125, 78, -102, -43, -4, -105, 0, -17, 74, 110, -125, -4, -46, -122, 7, -60, -18, 3, 77, 27, -100, 43, 118, -16, -16, -49, 76, 23, -89, -112, 88, 96, -89, -8, -37, -110, -33, 9, 82};
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
    msg.setTimeStamp(0.9875194488869873);
    msg.setSource(31270U);
    msg.setSourceEntity(37U);
    msg.setDestination(14425U);
    msg.setDestinationEntity(56U);
    msg.sys_src.assign("EQNXEXJLREXGOXSJSOPF");
    msg.sys_dst.assign("FQTNQCHDHNWVECLSBYYHLPHVZYRMWLYQYKFFZJMZOGLLGSXIDMUQGIGZBYOJYXPLACBZKAFBNKHEGMUTMSGQAVOLAUJKTJOSXSMTTZADNEIPKXKHTNAUFQIVGUPSPUESGSFDJRIOCKUICVBXTNSDYLOZDWPRQPRBOOYDVKECVEPIZHRFXXVWWAZJIPBZNJRAESXJJTVDAHXLCFBJRWGKRENCEVRELDFNUIFQPKBQWWGDMXM");
    msg.flags = 127U;
    const signed char tmp_msg_0[] = {94, 58, 12, 73, -95, -72, 112, 42, 98, -46, 18, 93, 102, -98, 53, -25, 51, -25, 45, 18, -30, 114, -64, 74, -27, 56, -82, 85, -7, 109, 93, -90, -64, 11, 6, -98, -34, 60, 7, -3, 63, -14, -33, 79, -79, 0, -31, -73, 85, 90, 42, -72, 49, -117, 74, 30, -127, 84, 103, -91, -50, -51, -62, -17, -67, 51, -32, 99, 101, 53, 1, -124, 56, -80, 3, 25, -125, 24, 76, -92, 113, 106, 17, 3, -58, 25, 37, -120, -95, 86, -97, -18, -48, -84, -71, 51, 124, 71, 115, -120, 26, -40, -75, 52, 2, -25, 105, 21, 3, -115, 57, -113, -90, 34, 50, 78, -22, 11, 60, -34, 107, -4, 7, 82, 65, -77, -15, -73, 30, 20, -28, -10, -116, -33, 42, -122, -14, 60, 41, 97, -59, -36, -104, 6, 38, -55, -82, 32, 102, -87, -123, -21, -45, -29, -37, 21, 48, -34, 4, -4, -13, 27, 7, 43, 114, 12, 5, 63, -49, -106, 66, -114, 27, 21, -41, 96, 95, -127, -31, 115, 76, 13, 60, -37, -31, 92, -49, -17, 62, 52, 117, 112, -57, 124, 90, -3, -111, -19, 91, -39, 81, 65, 15, -47, -56, 61, 82, -68, -14, 124, 100, -126, -95, -122, 66, -14, -76, -120, 20, -7, 42, -128, -67, 19, 125, -40, -9, 120, -56, -10, -120, -92, -48, 103, 93, 16, 29, 77, 102};
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
    msg.setTimeStamp(0.5505890096245566);
    msg.setSource(587U);
    msg.setSourceEntity(13U);
    msg.setDestination(14655U);
    msg.setDestinationEntity(206U);
    msg.sys_src.assign("RSBZNZFEMFOIWCKJNDBJQHXKOFCJCIHVZRZVATIGITEMWKMVYQQFGJLTWPLWVVKKCNDGLFQMENUXAHKDMGOWPQPBFXJBWDPUSINJYSNIJPKDUICURDACSMTXTRZSJHAFRUYZOXKQEGTNIFAMIJRBSO");
    msg.sys_dst.assign("FPYJYNABVJLGGSNFYAUKHXSVRJDSVQKKUHLPXARQQCMEPMOEPEHZTUMPVINIBVJIAEHJXZCUJWKOYZSKSZGUEADFXCBHLKBFFSSGMWYURYMVGTRDITXTHNVOILOBTWAKRIWCOIALHFQGWABQGZGZFZRCKRFKBMIWEQZXGWMOD");
    msg.flags = 91U;
    const signed char tmp_msg_0[] = {80, -97, 71, 66, 37, 99, 112, -35, 109, 1, 31, 16, -110, -78, 111, -125, 120, -12, -65, -96, -55, 74, -50, 101, 104, 114, -118, 96, 111, -35, 61, -66, 62, 106, 98, 73, 56, 58, 72, -97, 123, 45, 68, -14, 120, 82, 3, -64, -38, -22, -82, -9, 112, -46, -103, -64, 74, -48, 100, -94, 69, -73, -14, -58, 15, -44, 88, 11, -69, -13, 6, -13, 32};
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
    msg.setTimeStamp(0.15556751359176446);
    msg.setSource(62003U);
    msg.setSourceEntity(53U);
    msg.setDestination(53794U);
    msg.setDestinationEntity(146U);
    msg.sys_src.assign("RGWFNSKGBXMVQODRFWSVCIFDEVSPBEMTEXMTGH");
    msg.sys_dst.assign("SHAOITBHWQHHOYDLJNGPTKZJARCVECOEEGJGSTRQMMZXUIDECBWGSCPNKQPNJVRUASCYHSRVQVLDFZBXKKXZEXQBORSLQPZIWZYECUNHCFUGLSNFFJVLITCALFIICMEHQQKTCWXXYIVJHMDVJDOBBTBRKPNDBINJXSKEMLYYKYXPTEVSJOTMXHWAAU");
    msg.flags = 61U;
    const signed char tmp_msg_0[] = {-78, 89, -13, -88, 42, -67, 37, -62, 14, 104, -21, -98, -67, -108, -104, 66, -3, 39, -12, -84, 101, -16, 36, 123, 71, 96, 4, 31, 120, -30, -11, -22, -112, 103, 97, 83, 70, 52, 108, -1, 121, -106, 9, -24, 100, -81, 68, -114, -95, 118, 27, -52, -128, -118, 61, -73, -115, -101, 106, -33, 72, -62, -88, -47, -66, 90, 47, -88, -32, -30, 7, -113, 28, -121, 118, -69, -73, -7, 3, -56, 112, -77, -88, 24, 71, -42, -15, 126, 66, 98, -19, 75, -43, 80, -64, -120, -107, -78, 109, -30, 27, -57, 6, 114, -80, -36, -37, -23, -98, 105, -128, -73, 114, -30, -12, -8, -94, 45, 109, 3, 36, 28, 72, 9, 109};
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
    msg.setTimeStamp(0.7230772937284784);
    msg.setSource(42411U);
    msg.setSourceEntity(46U);
    msg.setDestination(3339U);
    msg.setDestinationEntity(80U);
    msg.seq = 62272U;
    msg.value = 87U;
    msg.error.assign("YCWHQEIPMYLFPJCRWMMEHNWBWMOQPITNFSOCEPDMFVXNHZKLDZKUIHLSSRNKFGGMFLTJMUOHIPCVRLPVHLLZFTKFJPCDVIETOJJUCDHKHPYVOQQG");

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
    msg.setTimeStamp(0.8681205000735196);
    msg.setSource(40877U);
    msg.setSourceEntity(92U);
    msg.setDestination(49506U);
    msg.setDestinationEntity(87U);
    msg.seq = 17014U;
    msg.value = 105U;
    msg.error.assign("WCVEYRDXLBXHPWRRUJWUZVGHNTIZSJIIGVLZPKQEFWLXXOBSLBTFIYJYUFBDGEOVMDQWFTGTAYQNJOXIHBUN");

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
    msg.setTimeStamp(0.613264087340152);
    msg.setSource(43779U);
    msg.setSourceEntity(53U);
    msg.setDestination(5068U);
    msg.setDestinationEntity(241U);
    msg.seq = 24150U;
    msg.value = 99U;
    msg.error.assign("NAWNDPOSDWIUYCADPJWJKHIMWSIPSVUMVMTBMWJVXDILPYGRFJHGCXROZRGGXFCLTEOBPLTAYGYJCENVVPWNAUTZSRLZSOTJLIKZEQQUEKDQLZRMLWMDWXIQHOMCDEKNCDLFFZVMOFHIOXYCNTMURYTBPPYKTHBORESRAPEIKTBEJYHWHQLVBAVGFZDJRAKGKNFBSBYX");

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
    msg.setTimeStamp(0.08268919191630764);
    msg.setSource(52056U);
    msg.setSourceEntity(86U);
    msg.setDestination(1403U);
    msg.setDestinationEntity(55U);
    msg.seq = 6775U;
    msg.sys.assign("MEAWDZTOTFDBBWGIPQJJLAHNHEHGBNXHQYDIIXPFSGJSRLCLHQRBC");
    msg.value = 0.41425125371894067;

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
    msg.setTimeStamp(0.6894163712161233);
    msg.setSource(15098U);
    msg.setSourceEntity(157U);
    msg.setDestination(50857U);
    msg.setDestinationEntity(103U);
    msg.seq = 2457U;
    msg.sys.assign("UOZRSVAWSBDYGLQKPELMHTRMKGWYQYLEQEBMXPZJINRCMUOITXADNMOCKNJLUEGJWSTIVEPUTBSRJLSFHAOSMZLFNGGCIDETPGMNKPBFAINDFJGBFNEXIFEJWFTMIQQIYKGUKDZYSXYHCESPDHB");
    msg.value = 0.17201440134589674;

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
    msg.setTimeStamp(0.07478811875349689);
    msg.setSource(6349U);
    msg.setSourceEntity(254U);
    msg.setDestination(22156U);
    msg.setDestinationEntity(82U);
    msg.seq = 18111U;
    msg.sys.assign("WQBTFPXENBJJRUMGQCUANPVFWJVYZEVGPMCRFEYNQROKJFEHYVZBUYTLTTHNGHYUDJSCZLWYPVGZNVESXELNMIHCXUDSORYRGDACFIX");
    msg.value = 0.3142970772946019;

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
    msg.setTimeStamp(0.8447152283134586);
    msg.setSource(36523U);
    msg.setSourceEntity(146U);
    msg.setDestination(17668U);
    msg.setDestinationEntity(55U);
    msg.seq = 2812U;
    msg.sys_dst.assign("TYTJCVBNGQXYJNWRNSQRCKUUAZGAXOLAZZNFJDYTDWSHPFUEEXWFSQSTXLDESLIQBGBIMAXNXAKNPGMKRWKPJHPLMBQWF");
    msg.timeout = 0.9703043363065326;

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
    msg.setTimeStamp(0.7740164905116);
    msg.setSource(24582U);
    msg.setSourceEntity(64U);
    msg.setDestination(63150U);
    msg.setDestinationEntity(22U);
    msg.seq = 16024U;
    msg.sys_dst.assign("IDHRGRZQUSHCOOTYUHYSOASBFGEQECVBIIVMTCQLQTTFLACZDDEWY");
    msg.timeout = 0.40639228879196443;

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
    msg.setTimeStamp(0.4717168079207078);
    msg.setSource(18479U);
    msg.setSourceEntity(28U);
    msg.setDestination(1501U);
    msg.setDestinationEntity(180U);
    msg.seq = 27845U;
    msg.sys_dst.assign("CMWIKYYLJEBRLXLJPNBGROGDMIYONIZDBMSQSQGTRUNZBNHHSKJSIHCZWVXPQTKYOBFYWVXQSAANUFAFGIPBAVLPDLEQKTTEUBMNROEJEAHZPSLLVXIFMZRRZGPGJDUDI");
    msg.timeout = 0.0759246483281979;

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
    msg.setTimeStamp(0.45855811203283714);
    msg.setSource(57049U);
    msg.setSourceEntity(99U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(231U);
    msg.action = 50U;
    msg.longain = 0.6222206490838362;
    msg.latgain = 0.6803389830861656;
    msg.bondthick = 281380377U;
    msg.leadgain = 0.3567124947996957;
    msg.deconflgain = 0.10672234546372905;

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
    msg.setTimeStamp(0.7280085917449296);
    msg.setSource(31871U);
    msg.setSourceEntity(96U);
    msg.setDestination(6867U);
    msg.setDestinationEntity(145U);
    msg.action = 227U;
    msg.longain = 0.5231570391716148;
    msg.latgain = 0.47768433333375104;
    msg.bondthick = 4162303456U;
    msg.leadgain = 0.918767456111744;
    msg.deconflgain = 0.8631112973413958;

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
    msg.setTimeStamp(0.22767225485904274);
    msg.setSource(40801U);
    msg.setSourceEntity(59U);
    msg.setDestination(19666U);
    msg.setDestinationEntity(76U);
    msg.action = 21U;
    msg.longain = 0.8632787950862797;
    msg.latgain = 0.4959564293293346;
    msg.bondthick = 3224892501U;
    msg.leadgain = 0.09259933295153011;
    msg.deconflgain = 0.8227254116133227;

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
    msg.setTimeStamp(0.00044733490814086174);
    msg.setSource(58679U);
    msg.setSourceEntity(186U);
    msg.setDestination(7042U);
    msg.setDestinationEntity(195U);
    msg.err_mean = 0.06430483344030269;
    msg.dist_min_abs = 0.46020476267296084;
    msg.dist_min_mean = 0.366012482206009;

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
    msg.setTimeStamp(0.5122163258281244);
    msg.setSource(16287U);
    msg.setSourceEntity(48U);
    msg.setDestination(3598U);
    msg.setDestinationEntity(54U);
    msg.err_mean = 0.6031060638856788;
    msg.dist_min_abs = 0.31788854690099866;
    msg.dist_min_mean = 0.9917524471553356;

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
    msg.setTimeStamp(0.827822687803435);
    msg.setSource(53321U);
    msg.setSourceEntity(162U);
    msg.setDestination(44748U);
    msg.setDestinationEntity(246U);
    msg.err_mean = 0.6175438004905518;
    msg.dist_min_abs = 0.5734370590350568;
    msg.dist_min_mean = 0.5720751276161777;

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
    msg.setTimeStamp(0.525021498242251);
    msg.setSource(14405U);
    msg.setSourceEntity(87U);
    msg.setDestination(13328U);
    msg.setDestinationEntity(205U);
    msg.action = 158U;
    msg.lon_gain = 0.12615795905113725;
    msg.lat_gain = 0.7917150188625427;
    msg.bond_thick = 0.2510248169978273;
    msg.lead_gain = 0.6236917930839977;
    msg.deconfl_gain = 0.7891278455033954;
    msg.accel_switch_gain = 0.1203886058507988;
    msg.safe_dist = 0.12717505266434315;
    msg.deconflict_offset = 0.235747014998968;
    msg.accel_safe_margin = 0.45275991301691343;
    msg.accel_lim_x = 0.38399787486125647;

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
    msg.setTimeStamp(0.9492184856004559);
    msg.setSource(18442U);
    msg.setSourceEntity(215U);
    msg.setDestination(50278U);
    msg.setDestinationEntity(250U);
    msg.action = 233U;
    msg.lon_gain = 0.3644426581920739;
    msg.lat_gain = 0.03732084113123324;
    msg.bond_thick = 0.5586308636205741;
    msg.lead_gain = 0.41802063060714156;
    msg.deconfl_gain = 0.050539079234023676;
    msg.accel_switch_gain = 0.01903525225089886;
    msg.safe_dist = 0.44428916867995183;
    msg.deconflict_offset = 0.5665822707365753;
    msg.accel_safe_margin = 0.7775221942140258;
    msg.accel_lim_x = 0.4710460832202711;

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
    msg.setTimeStamp(0.4835762364884133);
    msg.setSource(32030U);
    msg.setSourceEntity(85U);
    msg.setDestination(41346U);
    msg.setDestinationEntity(192U);
    msg.action = 135U;
    msg.lon_gain = 0.16290390855670156;
    msg.lat_gain = 0.2156292772636199;
    msg.bond_thick = 0.5789874474045199;
    msg.lead_gain = 0.9796759514191159;
    msg.deconfl_gain = 0.8503322178397212;
    msg.accel_switch_gain = 0.12259337466345333;
    msg.safe_dist = 0.3497827493463095;
    msg.deconflict_offset = 0.6089060775760459;
    msg.accel_safe_margin = 0.7196179222578808;
    msg.accel_lim_x = 0.7638634374297889;

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
    msg.setTimeStamp(0.11209021849798206);
    msg.setSource(38425U);
    msg.setSourceEntity(164U);
    msg.setDestination(2992U);
    msg.setDestinationEntity(167U);
    msg.type = 152U;
    msg.op = 6U;
    msg.err_mean = 0.4129050010674059;
    msg.dist_min_abs = 0.7137591850392403;
    msg.dist_min_mean = 0.12641284222128757;
    msg.roll_rate_mean = 0.6570485546551227;
    msg.time = 0.7299899643609368;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 34U;
    tmp_msg_0.lon_gain = 0.6759656801154773;
    tmp_msg_0.lat_gain = 0.9572687975634833;
    tmp_msg_0.bond_thick = 0.5560487402364462;
    tmp_msg_0.lead_gain = 0.7627408751048942;
    tmp_msg_0.deconfl_gain = 0.4657258593817408;
    tmp_msg_0.accel_switch_gain = 0.5742916244289542;
    tmp_msg_0.safe_dist = 0.6964173428759881;
    tmp_msg_0.deconflict_offset = 0.6761653834492676;
    tmp_msg_0.accel_safe_margin = 0.048000253241205604;
    tmp_msg_0.accel_lim_x = 0.43485858167581803;
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
    msg.setTimeStamp(0.40833545312810726);
    msg.setSource(21158U);
    msg.setSourceEntity(92U);
    msg.setDestination(14930U);
    msg.setDestinationEntity(63U);
    msg.type = 165U;
    msg.op = 110U;
    msg.err_mean = 0.4355172675051252;
    msg.dist_min_abs = 0.13774955532447042;
    msg.dist_min_mean = 0.9307625385046302;
    msg.roll_rate_mean = 0.62609798952056;
    msg.time = 0.5834569940585538;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 96U;
    tmp_msg_0.lon_gain = 0.2270153110576234;
    tmp_msg_0.lat_gain = 0.6323651916561789;
    tmp_msg_0.bond_thick = 0.272415003974675;
    tmp_msg_0.lead_gain = 0.383646016611886;
    tmp_msg_0.deconfl_gain = 0.9574334630897847;
    tmp_msg_0.accel_switch_gain = 0.24148160559172804;
    tmp_msg_0.safe_dist = 0.41799882927659937;
    tmp_msg_0.deconflict_offset = 0.22796991947026524;
    tmp_msg_0.accel_safe_margin = 0.7655555257350267;
    tmp_msg_0.accel_lim_x = 0.5873405494969638;
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
    msg.setTimeStamp(0.3466983835610208);
    msg.setSource(33818U);
    msg.setSourceEntity(92U);
    msg.setDestination(41253U);
    msg.setDestinationEntity(21U);
    msg.type = 188U;
    msg.op = 202U;
    msg.err_mean = 0.24834656355734452;
    msg.dist_min_abs = 0.15687266706823833;
    msg.dist_min_mean = 0.14572596514822034;
    msg.roll_rate_mean = 0.5637710051336069;
    msg.time = 0.3919215472138554;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 214U;
    tmp_msg_0.lon_gain = 0.5316932834295096;
    tmp_msg_0.lat_gain = 0.7000391211617293;
    tmp_msg_0.bond_thick = 0.1333171250662497;
    tmp_msg_0.lead_gain = 0.7506170465794448;
    tmp_msg_0.deconfl_gain = 0.08415727892195835;
    tmp_msg_0.accel_switch_gain = 0.4186115052995347;
    tmp_msg_0.safe_dist = 0.930462619242601;
    tmp_msg_0.deconflict_offset = 0.8949251938391006;
    tmp_msg_0.accel_safe_margin = 0.5728623473438399;
    tmp_msg_0.accel_lim_x = 0.6142974313358756;
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
    msg.setTimeStamp(0.10248016103633228);
    msg.setSource(1736U);
    msg.setSourceEntity(236U);
    msg.setDestination(14430U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.31885566514644015;
    msg.lon = 0.11912837657172504;
    msg.eta = 440058560U;
    msg.duration = 48596U;

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
    msg.setTimeStamp(0.8043552721407097);
    msg.setSource(43371U);
    msg.setSourceEntity(4U);
    msg.setDestination(21895U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.5232003265870854;
    msg.lon = 0.04315220312132284;
    msg.eta = 2124317993U;
    msg.duration = 30049U;

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
    msg.setTimeStamp(0.23789596930109458);
    msg.setSource(35603U);
    msg.setSourceEntity(101U);
    msg.setDestination(7341U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.39958685166762986;
    msg.lon = 0.028169086883127914;
    msg.eta = 185179459U;
    msg.duration = 60598U;

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
    msg.setTimeStamp(0.6280650022468731);
    msg.setSource(13855U);
    msg.setSourceEntity(150U);
    msg.setDestination(53975U);
    msg.setDestinationEntity(20U);
    msg.plan_id = 29657U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.2610224830119774;
    tmp_msg_0.lon = 0.9663332569631546;
    tmp_msg_0.eta = 3782310781U;
    tmp_msg_0.duration = 21659U;
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
    msg.setTimeStamp(0.04823246482545607);
    msg.setSource(28295U);
    msg.setSourceEntity(149U);
    msg.setDestination(5817U);
    msg.setDestinationEntity(22U);
    msg.plan_id = 5020U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.2786245986030095;
    tmp_msg_0.lon = 0.8648251913051282;
    tmp_msg_0.eta = 1526512230U;
    tmp_msg_0.duration = 42989U;
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
    msg.setTimeStamp(0.21679198468341654);
    msg.setSource(25016U);
    msg.setSourceEntity(86U);
    msg.setDestination(60411U);
    msg.setDestinationEntity(34U);
    msg.plan_id = 33382U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.1980828646554974;
    tmp_msg_0.lon = 0.825299446877947;
    tmp_msg_0.eta = 4061094702U;
    tmp_msg_0.duration = 5669U;
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
    msg.setTimeStamp(0.8711448979363595);
    msg.setSource(23625U);
    msg.setSourceEntity(51U);
    msg.setDestination(52611U);
    msg.setDestinationEntity(31U);
    msg.type = 14U;
    msg.command = 228U;
    msg.settings.assign("TCRFWJIIRXALMKBMHMLALXOGAQSTUMSCZDNJZCASWGFTUFMPZPEUKFVDJKJDCHOXWSOCLKGNRPEYBBQIALLYITEPYUBGQFHNALOLYNZWAUTXTBSVFRVVRYWBFTNNQHMOCRZVEJVBTYPGWW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 18754U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CPASLPJNEZONHGUUWJEIXOANJYVWDXIGTBTJCBXAWDAWYPFZCKGWMLRCL");

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
    msg.setTimeStamp(0.14215377027961384);
    msg.setSource(16993U);
    msg.setSourceEntity(150U);
    msg.setDestination(3703U);
    msg.setDestinationEntity(110U);
    msg.type = 36U;
    msg.command = 200U;
    msg.settings.assign("COCFZZYIUYYJBALOUTBHXGJMVWSTXDXDUIRZNXSVRQSCIVWBIDAAGKTDCODOGMIOLIDDGHWIRYKPLBPNSXEXLIQJYQSLRFTDEPRSTJBINNOCPPYAVRVBUHQYREGRJFDMMNSOJCPLKUFWSZAKCZOEZTFGZEHUVEDCERWKBNPNWEFFHEPQHSKTUKJKNPPYTWLLAQAGZQYHMUQMGULLOMFYCFVBRQWXAVIHMWMM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 56367U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3375262701775029;
    tmp_tmp_msg_0_0.lon = 0.7995634697073144;
    tmp_tmp_msg_0_0.eta = 3123359673U;
    tmp_tmp_msg_0_0.duration = 16200U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CQMFBWIVGNGYXSRUVNKZWYWLNVDLOHBEZIHEHXUIQCJJQGSPDTIDMLCSPUOMAJHEGXFMVYCTDCFHCXOGSMKWKYFUIWOLRNPHKVUQFYRLANRHLMBJWONZJTVSIXTUARFTDDLZOBXEEACRRIECAMVYFCLQHDVBAWXPZMTYNQOPDDQRMGLFSPKSZ");

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
    msg.setTimeStamp(0.8302140933530574);
    msg.setSource(56112U);
    msg.setSourceEntity(207U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(142U);
    msg.type = 105U;
    msg.command = 49U;
    msg.settings.assign("PRTPWQRMNXEZFERKWMQQJSBTCKHHXYXMSSSRWBLUQYJVEZDFAQYVXIMCXEDSNAPIBRF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40236U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DZJANSLTETCQOWUTEBKXUHNDZAHWLZPKMHXHPPEYZQZLSBWUDFHFAALSGLJUSISKVMYLCQRNYPVYKQHBNYHTGUCVIUDWAKOCOMPYIQJPUGCWFKOILEEJNJIBV");

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
    msg.setTimeStamp(0.3442912713809376);
    msg.setSource(52412U);
    msg.setSourceEntity(131U);
    msg.setDestination(13082U);
    msg.setDestinationEntity(89U);
    msg.state = 134U;
    msg.plan_id = 34807U;
    msg.wpt_id = 19U;
    msg.settings_chk = 39315U;

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
    msg.setTimeStamp(0.8825926593891774);
    msg.setSource(12913U);
    msg.setSourceEntity(172U);
    msg.setDestination(36956U);
    msg.setDestinationEntity(189U);
    msg.state = 122U;
    msg.plan_id = 23103U;
    msg.wpt_id = 146U;
    msg.settings_chk = 11554U;

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
    msg.setTimeStamp(0.16926142217144347);
    msg.setSource(28284U);
    msg.setSourceEntity(204U);
    msg.setDestination(2714U);
    msg.setDestinationEntity(57U);
    msg.state = 80U;
    msg.plan_id = 16849U;
    msg.wpt_id = 223U;
    msg.settings_chk = 56683U;

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
    msg.setTimeStamp(0.565611835411991);
    msg.setSource(37251U);
    msg.setSourceEntity(86U);
    msg.setDestination(60503U);
    msg.setDestinationEntity(182U);
    msg.uid = 58U;
    msg.frag_number = 34U;
    msg.num_frags = 219U;
    const signed char tmp_msg_0[] = {55, 13, 17, -53, 93, 108, -121, -25, 89, -45, 93, -4, 40, 75, 45, -101, -94, 78, -43, -95, 117, 77, -92, 76, -25, -41, -28, -22, -107, -15, -56, 79, 86, -38, 57, 37, -76, 21, 57, 36, -125, 35, 42, 46, -37, -35, 115, -9, 98, -101, 37, 78, 49, 101, -99, 88, 42, 33, -53, -6, 28, 88, -128, 113, 67, -42, 18, -6, -94, 3, -47, -50, 99, -90, -87, 44, 76, -107, 44, 68, -66, 75, -68, 87, 125, -122, -20, -11, 82, 105, 92, 79, 107, 2, -107, -81, -101, 9, -71, -25, 76, 76, 27, 45, -57, -37, 126, -36, 84, 54, 35, 23, -30, 87, -35, -2, 84, -88, -63, 53, 59, 35, -55, -49, -16, 99, 123, 114, 31, 12, 102, -84, -104, 51, -57, 31, 109, -123, -114, -31, -64, -128, 116, 104, 76, 47, 71, 50, 112, -63, 107, 79, 1, -15, -90, -29, -72, -53, -101, 44, -23, -105, 71, -34, 66, -111, -121, 120, 114, -22, -66, 98, 99, -62, 114, 113, 5, -99, 48, 115, -60, 24, 44, 70, -64, 55, 22, 46, -49, -13, 15, 15, 105, 93, -126, -69, 122, 93, -90, 67, -61, 95, -2, 77, 61, -124, 22, 12, 57, -74, 85, 6, -99, 3, -2, 83, 78, 33, -58, 115, 104, -98, 118, -93, -56, 87, 0, -84, -124, 35, 104, 0, 39};
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
    msg.setTimeStamp(0.46820470573687756);
    msg.setSource(61090U);
    msg.setSourceEntity(69U);
    msg.setDestination(17195U);
    msg.setDestinationEntity(75U);
    msg.uid = 64U;
    msg.frag_number = 204U;
    msg.num_frags = 185U;
    const signed char tmp_msg_0[] = {106, 10, 90, 87, 51, 42, 80, -88, -29, 83, -30, -91, -26, -92, 59, -121, -106, -95, -67, -20, -37, 24, 78, -104, -80, -17, 88, -111, 13, -71, -29, -108, -67, -119, 23, -123, 76, -53, 124, 3, 19, 107, 76, -91, -51, -24, 29, 36, 9, 89, -58, 72, -123, -3, 45, 41, -30, -62, -37, -116, 111, 54, 8, 25, 33, -74, 92, 76, -41, 101, -13, -78, 14, 46, -16, -88, 20, 59, -101, -21, 27, -70, 108, 51, -126, 7, -2, -74, -72, -109, 11, -45, -44, 79, 66, 40, 74, 15, -127, 33, 23, -21, -15, 102, 8, -40, 106, -49, -12, -87, 12, 1, -51, 82, 119, -55, -120, 121, -116, -64, 124, -25, -55, 111, 124, -97, 28, -115, -79, -60, -125, 23, -76, 104, 19, -124, 121, 38, -58, -81, -48, -67, -101, -64, -88, 9, -8, -19, -49, 19, -127, -19, -65, -73, -100, 35, -100, -116, -42, 121, 115, 123, 70, 126, 17, -16, 40, 52, 86, -1, 89, 73, 109, -89, -79};
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
    msg.setTimeStamp(0.7836462910617839);
    msg.setSource(48255U);
    msg.setSourceEntity(139U);
    msg.setDestination(27712U);
    msg.setDestinationEntity(72U);
    msg.uid = 202U;
    msg.frag_number = 15U;
    msg.num_frags = 19U;
    const signed char tmp_msg_0[] = {-34, 117, -35, -100, 113, 46, -82, 36, 76, 72, -60, 90, 123, -74, 28, -1, 87, 2, 36, 78, -57, 100, 50, -75, -89, 111, 81, 21, -20, -106, 43, 72, -60, -31, 37, 32, -100, 65, 8, 124, 123, 113, 31, -59, -52, 99, -76, -53, 77, 126, 37, 94, 116, 82, 7, -19, -3, -71, 62, -46, -90, -72, 3, -119, -22, -48, -31, 25, -65, 23, 37, -15, -82, 123, 73, 83, -112, 86, -58, -23, 45, -7, 69, -122, 115, -44, 28, 75, -40, 81, 124, -105, -48, -1, -120, 41, -121, -52, 95, 61, -124, 106};
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
    msg.setTimeStamp(0.28096110434135446);
    msg.setSource(55413U);
    msg.setSourceEntity(21U);
    msg.setDestination(59471U);
    msg.setDestinationEntity(122U);
    msg.content_type.assign("AKBDUWPOXPGYNRNMFPDPGLIIQEGNINSTWDLMMJCGVRUAYRXSJKTZCOOOHVNVZOKEDRHRRBZEXJHTGSVJIQAAUSJMRYSDDRFXXPNMQVKTIFFZESGEKPZPXVFLICZXDQCVLBXSWZFNTZNLGOYUNLBDFWWMVJEAAYWGWAIKIAIQLSFOIHZNGUPBTUYWTHBVWMJUETSLFBELXTMDKHJOALCFOQDEZCJHUQHM");
    const signed char tmp_msg_0[] = {-77, 29, -41, -95, -92, 105, 47, 81, 22, -109, -21, 112, 115, 6, 116, 9, -86, -58, -28, 55, 47, 7, -103, 1, -102, -103, -60, 14, -86, 114, -128, 33, 40, -108, -44, 118, -76, -72, 23, -25, 100, 15, 99, 73, -108, 119, 118, -10, 29, -114, 17, 60, 82, 23, -108, -23, -80, -83, -43, 92, 114, -89, -39, 120, 49, 43, 70, 0, 78, 70, 90, 0, -25, 69, 81, -75, -38, 33, 98, 80, 38, 65, -43, -6, 114, 94, 97, 41, 75, -6, 83, 104, -79, -22, 50, -122, -104, 74, 12, -38, -107, -116};
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
    msg.setTimeStamp(0.4662940804876654);
    msg.setSource(13588U);
    msg.setSourceEntity(42U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(120U);
    msg.content_type.assign("EWFVCCFIZHUKOBYJPDAWBMCTQMLSOGDEKRRBRWBJAWGCNFQSWHEXOHIFTHHGKHPMTSMEAIXVRXTNOYHHNUUZXKKNBITDZOMRKRHCBXCDNUDZYQJDVTLFKELWUZLINWGYCVRAPKLXLATPQRTWLPEXYSHTQGEJAUXGFOFNUPFJUJAVQQJQYCNVINZJWMOBZSDZUWIOVBVDCNKAZ");
    const signed char tmp_msg_0[] = {-91, -98, -79, 57, -20, -51, -82, 8, 77, 35, 69, -2, 54, 107, 114, -66, 100, -122, 115, 69, 73, -104, -6, 90, -71, -81, -45, 67, 85, -102, 107, -53, -20, -2, 1, -48, -101, 53, 54, 102, -39, -3, -89, 17, 43, 43, 105, 16, -9, -70, 126, -114, 103, -121, -2};
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
    msg.setTimeStamp(0.13394490951105942);
    msg.setSource(26850U);
    msg.setSourceEntity(212U);
    msg.setDestination(22858U);
    msg.setDestinationEntity(164U);
    msg.content_type.assign("VPXNOWNKJHRRHLYJQFBEICTYFISKKPHUVJSLFIOLKSKDGOZTGKNUALJPAMIPYQWVTBWYDJMJGGOWDMCFUQPCOVPHUTWBZLKUQYBNGUOZQZAZXRZJ");
    const signed char tmp_msg_0[] = {-118, -125, -59, 53, 85, 7, 50, 42, 115, 36, -10, -70, -125, 124, 35, 64, -38, 115, 123, 111, 32, -58, 41, 93, -94, 79, 96, 96, -61, -44, 94, -28, -126, -108, -50, 57, 35, 9, -58, 79, -49, -110, 89, 120, -100, 114, -44, -114, 118, 49, -85, -40, 10, 47, 5, -9, -25, -127, 20, 80, -121, -2, 48, -11, -48, 35, -40, -56, 90, -26, 66, -111, -81, -18, -54, 31, -3, -49, -69, -11, -122, -121, -18, 112, 24, -72, -114, 104, 63, -113, 108, -11, 63, 101, -83, -87, 78, 123, 0, -44, 19, 80, 3, -84, -6, -14, -58, 21, -113, 105, -27, 43, -78, -42, -59, -93, 68, -8, 33, -118, -8, 85, 95, -34, 103, -69, -99, -107, 2, 124, 24, 96, -22, -37, 22, -109, -66, -37, 12, -54, -95, 8, 51, 110, 97, 115, -62, 96, 82, -49, 4, -83, -21, -28, 0, -68, -95, -66, -17, 63, -48, -43, -85, -94, -106, 2, -78, -59, 122, -71, -20, 1, 26, 12, -100, -44, 90, 95, 61, -97, -91, 22, -71, -83, -90, -76, 108, 47, -35, 55, 49, -89, -88, -38, -18, 104, 83, 124, 38, 33, 49, -124, 73, 21, -11, 36, 62};
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
    msg.setTimeStamp(0.5880377371742084);
    msg.setSource(58291U);
    msg.setSourceEntity(44U);
    msg.setDestination(43763U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.7975975774254305);
    msg.setSource(65172U);
    msg.setSourceEntity(113U);
    msg.setDestination(65058U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.3578134225786418);
    msg.setSource(53032U);
    msg.setSourceEntity(80U);
    msg.setDestination(3071U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.2693217664912523);
    msg.setSource(8403U);
    msg.setSourceEntity(67U);
    msg.setDestination(19210U);
    msg.setDestinationEntity(239U);
    msg.target = 43388U;
    msg.bearing = 0.3665641780711303;
    msg.elevation = 0.16525400621234643;

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
    msg.setTimeStamp(0.015130540382827795);
    msg.setSource(45996U);
    msg.setSourceEntity(6U);
    msg.setDestination(57951U);
    msg.setDestinationEntity(126U);
    msg.target = 51875U;
    msg.bearing = 0.3194654000112722;
    msg.elevation = 0.13265749996260723;

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
    msg.setTimeStamp(0.14626607696039007);
    msg.setSource(64343U);
    msg.setSourceEntity(5U);
    msg.setDestination(59549U);
    msg.setDestinationEntity(95U);
    msg.target = 60072U;
    msg.bearing = 0.628702912580749;
    msg.elevation = 0.807852284492352;

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
    msg.setTimeStamp(0.213779636367184);
    msg.setSource(13408U);
    msg.setSourceEntity(139U);
    msg.setDestination(61803U);
    msg.setDestinationEntity(141U);
    msg.target = 49069U;
    msg.x = 0.8289732757101949;
    msg.y = 0.5272181439432166;
    msg.z = 0.9848956284256227;

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
    msg.setTimeStamp(0.9027542073151137);
    msg.setSource(3927U);
    msg.setSourceEntity(8U);
    msg.setDestination(3606U);
    msg.setDestinationEntity(27U);
    msg.target = 10819U;
    msg.x = 0.6416983081039022;
    msg.y = 0.2342536744946243;
    msg.z = 0.3069228507026798;

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
    msg.setTimeStamp(0.7451705387027389);
    msg.setSource(45588U);
    msg.setSourceEntity(119U);
    msg.setDestination(4809U);
    msg.setDestinationEntity(76U);
    msg.target = 17047U;
    msg.x = 0.4947031377292387;
    msg.y = 0.3104693619852734;
    msg.z = 0.11966961632348694;

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
    msg.setTimeStamp(0.007032674745928946);
    msg.setSource(5751U);
    msg.setSourceEntity(28U);
    msg.setDestination(37098U);
    msg.setDestinationEntity(88U);
    msg.target = 23992U;
    msg.lat = 0.8073258169822386;
    msg.lon = 0.05425852822080601;
    msg.z_units = 35U;
    msg.z = 0.7167249620467263;

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
    msg.setTimeStamp(0.09660038309051455);
    msg.setSource(47662U);
    msg.setSourceEntity(39U);
    msg.setDestination(20704U);
    msg.setDestinationEntity(225U);
    msg.target = 37562U;
    msg.lat = 0.6672583807806803;
    msg.lon = 0.260675966109046;
    msg.z_units = 144U;
    msg.z = 0.7209883068498372;

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
    msg.setTimeStamp(0.5297819039957194);
    msg.setSource(23795U);
    msg.setSourceEntity(228U);
    msg.setDestination(31271U);
    msg.setDestinationEntity(155U);
    msg.target = 57340U;
    msg.lat = 0.9924862153818204;
    msg.lon = 0.6673849219126133;
    msg.z_units = 213U;
    msg.z = 0.823393282077315;

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
    msg.setTimeStamp(0.19719295519528413);
    msg.setSource(13532U);
    msg.setSourceEntity(78U);
    msg.setDestination(51006U);
    msg.setDestinationEntity(53U);
    msg.locale.assign("KJVTQYEEGFRUHCXNKSBPHFHIZXEVAVAPXQDLRZAWHGTTRXGJZFUDCGEESYAOCPYRQTOOTUWVJTZGHSBSMODWACOSAEDGPIMFQEJLLFXUZBQKBTOINRVURFMJDMJYKDNTTPYIWWLIUKVZWMSGCCXIVPIOUQSFMBHZLSWVUUIXFTRIXCRJJRGAL");
    const signed char tmp_msg_0[] = {-77, -7, -46, -120, -56, -90, -85, -26, 26, 74, 63, -52, 50, 37, 80, 24, 115, -120, 47, 88, -59, 112, -122, 29, 86, -12, -1, -94, -17, 21, 110, -107, -50, -76, 68, -98, -79, 78, -114, 74, 85, -6, -53, 117, -13, -49, 67, 28, -113, -67, -108, -70, -107, 13, -99, -101, -121, -68, -95, -56, -34, 15, 64, 95, 11, 91, 26, -114, 62, 110, -120, 98, 77, 25, -6, -75, -96, 93, 111, -55, -67, 102, -119, 47, -10, 15, 68, 87, -54, 61, -92, 122, 80, 46, 116, 99, -119, 118, -49, 30, -96, 60, 56, 18, 108, -10, -109, 35, -34, 16, -58, 80, -53, 84, 20, -105, 26, 24, 35, -92, 56, -4, -121, -21, 102, -121, -51, -84, -88, 28, -28, 94, 24, -46, -35, 29, 10, 109, -97, 103, -124, 22, 111, -95, -118, 55, 60, 13, -64, -53, -81, 84, 6, 109, 52, 10, -27, -90, -115, -5, 95, -89, -98, 126, -20, -83, -6, 99, -125, 88, -114, -12, -93, -56, -71, 32, -52, -100, 15, 83, 57, 37, -1, -24, -52, 36, 61, -108, -27, -76, -79};
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
    msg.setTimeStamp(0.6987309472252746);
    msg.setSource(44583U);
    msg.setSourceEntity(113U);
    msg.setDestination(48013U);
    msg.setDestinationEntity(84U);
    msg.locale.assign("DQGNOABXEMRHMPVQIEOXWZVSOGBDCVJLWPDUVWRBFTASYMBAOFINFRYSDEWTSTIUQYBDETPWQZAXZOCIAZDIOHREHWNJSCLMKURKJCZZTHBLLT");
    const signed char tmp_msg_0[] = {-118, -108, -52, 88, 111, 21, -109, 8, 38, 107, -75, -83, 1, -79, -84, -93, 2, -104, -49, 62, 66, 95, 79, 51, -84, -114, -123, 123, -15, 120, 113, -78, -103, 109, -32, -97, -39, -5, -8, 26, 105, -7, 109, 83, -34, 40, 15, 122, -7, -25, 50, 92, 40, -61, -89, -17, -92, 30, -40, 78, 47, 7, 106, 108, 117, 83, -42, 87, 36, 5, -24, -121, 36, 39, -84, -74, 121, 8, -22, 8, 56, -76, 106, 2, 22, 110, -38, 30, -33, 126, -116, -19, 7, 79, -99, 46, -68, 76, 42, 65, -42, -56, -113, 108, -116, 59, -50, 61, 93};
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
    msg.setTimeStamp(0.339063330168343);
    msg.setSource(61277U);
    msg.setSourceEntity(49U);
    msg.setDestination(5997U);
    msg.setDestinationEntity(19U);
    msg.locale.assign("WSRCHURFHIU");
    const signed char tmp_msg_0[] = {-88, 90, -31, -99, 110, -17, 68, 112, 67, -96, 96, -109, -30, -100, -51, 12, 19, -8, -17, 121, -115, 111, 88, 47, -73, -8, 10, 39, -78, -2, -55, 98, 7, -2, 30, -74, 124, 80, 61, 107, 15, -53, 87, -12, 77, 91, 96, -72, -5, 15, -5, -100, -39, 117, 92, -4, -110, -88, 55, 83, 3, 67};
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
    msg.setTimeStamp(0.6788647544192323);
    msg.setSource(18989U);
    msg.setSourceEntity(249U);
    msg.setDestination(33133U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.15781261794823032);
    msg.setSource(8591U);
    msg.setSourceEntity(194U);
    msg.setDestination(33741U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.9164687414558109);
    msg.setSource(15000U);
    msg.setSourceEntity(126U);
    msg.setDestination(10135U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.5134125449833974);
    msg.setSource(11483U);
    msg.setSourceEntity(222U);
    msg.setDestination(47746U);
    msg.setDestinationEntity(97U);
    msg.camid = 181U;
    msg.x = 44690U;
    msg.y = 63015U;

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
    msg.setTimeStamp(0.26271344384598727);
    msg.setSource(31071U);
    msg.setSourceEntity(65U);
    msg.setDestination(6136U);
    msg.setDestinationEntity(218U);
    msg.camid = 229U;
    msg.x = 62555U;
    msg.y = 48168U;

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
    msg.setTimeStamp(0.5200125375369464);
    msg.setSource(47218U);
    msg.setSourceEntity(167U);
    msg.setDestination(1794U);
    msg.setDestinationEntity(97U);
    msg.camid = 211U;
    msg.x = 49623U;
    msg.y = 30325U;

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
    msg.setTimeStamp(0.037961380040774984);
    msg.setSource(51871U);
    msg.setSourceEntity(95U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(251U);
    msg.camid = 4U;
    msg.x = 49696U;
    msg.y = 62016U;

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
    msg.setTimeStamp(0.4806111888629565);
    msg.setSource(9556U);
    msg.setSourceEntity(153U);
    msg.setDestination(62022U);
    msg.setDestinationEntity(195U);
    msg.camid = 54U;
    msg.x = 25421U;
    msg.y = 60646U;

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
    msg.setTimeStamp(0.37359536720931363);
    msg.setSource(13220U);
    msg.setSourceEntity(184U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(87U);
    msg.camid = 183U;
    msg.x = 10866U;
    msg.y = 7975U;

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
    msg.setTimeStamp(0.45868528183362545);
    msg.setSource(25562U);
    msg.setSourceEntity(125U);
    msg.setDestination(19443U);
    msg.setDestinationEntity(53U);
    msg.tracking = 2U;
    msg.lat = 0.7544231418313605;
    msg.lon = 0.39653310531630614;
    msg.x = 0.0722261207778554;
    msg.y = 0.3958935950032476;
    msg.z = 0.0998845047432706;

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
    msg.setTimeStamp(0.9882562709237651);
    msg.setSource(46742U);
    msg.setSourceEntity(128U);
    msg.setDestination(63300U);
    msg.setDestinationEntity(49U);
    msg.tracking = 108U;
    msg.lat = 0.7331184949121141;
    msg.lon = 0.4274375417586729;
    msg.x = 0.3766513849189941;
    msg.y = 0.4457887753971559;
    msg.z = 0.648849294563118;

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
    msg.setTimeStamp(0.6501788780733873);
    msg.setSource(28429U);
    msg.setSourceEntity(212U);
    msg.setDestination(19373U);
    msg.setDestinationEntity(226U);
    msg.tracking = 4U;
    msg.lat = 0.5475582866600729;
    msg.lon = 0.9361028533533088;
    msg.x = 0.1567074337327985;
    msg.y = 0.8282630424249018;
    msg.z = 0.44990617300084856;

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
    msg.setTimeStamp(0.08545570968588811);
    msg.setSource(49727U);
    msg.setSourceEntity(119U);
    msg.setDestination(5223U);
    msg.setDestinationEntity(128U);
    msg.target.assign("LLRAOCPZLBEFPHQHMFRMMTIDSZRSFINGEQXPTDNRUVZCUYBGNMJTKAGOTGTPRIHMKNSAXVJVSYXZPBDOKHTBWPHOEPRCFFEGLGWDEFUGWUJIAUDNQLIEAQCWEVARDPUTREORDKYVLMCZVHMNFJYKKPABMOOWCLANVSXXYALZLUSJIQBCYUXJOBOUNIXKBKXDFGSBFMGIZAHKYQPYVFIXQJHWEBTVWY");
    msg.lbearing = 0.6236673060823604;
    msg.lelevation = 0.1902988042442294;
    msg.bearing = 0.5937104330613397;
    msg.elevation = 0.5586906088695507;
    msg.phi = 0.6499614533419653;
    msg.theta = 0.3664341612525087;
    msg.psi = 0.9088994168109229;
    msg.accuracy = 0.7586246551006901;

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
    msg.setTimeStamp(0.5728473730325215);
    msg.setSource(51291U);
    msg.setSourceEntity(127U);
    msg.setDestination(12333U);
    msg.setDestinationEntity(197U);
    msg.target.assign("DABFTLGCGCLWARBYZGOPHWETJOMVCQUKHNOKAXIZUKLMMXLKMBTLJKYOYYLRXLXNHRHFNIRHZXUHRCADHTXQJNXCPICFUFBWHNNUZVCOGIIUEGOCRKVGJWZQYOXDGKAEQZNNEBKLNFFKVQ");
    msg.lbearing = 0.21675064766827257;
    msg.lelevation = 0.8652560198957233;
    msg.bearing = 0.8871131594398357;
    msg.elevation = 0.4067241029788651;
    msg.phi = 0.9628513936041031;
    msg.theta = 0.059215127247707056;
    msg.psi = 0.02971184895204504;
    msg.accuracy = 0.6039871749125317;

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
    msg.setTimeStamp(0.6881294765764155);
    msg.setSource(48842U);
    msg.setSourceEntity(68U);
    msg.setDestination(49533U);
    msg.setDestinationEntity(186U);
    msg.target.assign("GODJUIWNDWYHJEZTRDKTHNMCLMPFLBOQZRPMHYCZCBZSAMCCSILDTTQROVJDAEXKKUMXWXCHPSKURBWVEBQNBADFZLPHRJOPPDKJEBVAAGWCAZTUGJTWVCIEUORVVTZSERGRFFFSMVBIRDBSWGOOQZAAAZVLUPKTZNMQ");
    msg.lbearing = 0.803033571582953;
    msg.lelevation = 0.15909638848365637;
    msg.bearing = 0.008029901561291464;
    msg.elevation = 0.539001465813646;
    msg.phi = 0.12160673740731687;
    msg.theta = 0.4220394892014403;
    msg.psi = 0.37318528584642774;
    msg.accuracy = 0.510227079415639;

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
    msg.setTimeStamp(0.6526419758947221);
    msg.setSource(50102U);
    msg.setSourceEntity(184U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(200U);
    msg.target.assign("FKCDSLHSDLBEEUAMDHZOYHFFCGMQVFGVBCWBPPWGYONOKVZIPYFDTTLECFMDTXPRMXPAZSXELMGCUBNRVDBJETRWPRBXSCYDSPJZMIIZFQFHYLGHIJWLOYUMZWJQKKIZRXTNQXAZRSKJKUPYRVATUQETGKHKIEXUASNLDHXPVTUSIUF");
    msg.x = 0.7514393177446257;
    msg.y = 0.5518372177857641;
    msg.z = 0.12160650326774713;
    msg.n = 0.6265419223494655;
    msg.e = 0.3741607443274988;
    msg.d = 0.23547951864274985;
    msg.phi = 0.21945185287227298;
    msg.theta = 0.671091224108005;
    msg.psi = 0.9096818381336396;
    msg.accuracy = 0.969576214116961;

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
    msg.setTimeStamp(0.7969753409862343);
    msg.setSource(59728U);
    msg.setSourceEntity(43U);
    msg.setDestination(32225U);
    msg.setDestinationEntity(137U);
    msg.target.assign("WRNWCXHJCSNBNGXSSVAXTUEWCFURUNFMBXUEYCWJP");
    msg.x = 0.6817683618809582;
    msg.y = 0.4750168330939508;
    msg.z = 0.2709647320999664;
    msg.n = 0.5897449936695218;
    msg.e = 0.9894369040204557;
    msg.d = 0.4400954025839947;
    msg.phi = 0.002869427319652007;
    msg.theta = 0.23105335941171756;
    msg.psi = 0.021221019393439677;
    msg.accuracy = 0.2603524813058312;

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
    msg.setTimeStamp(0.5902741719118636);
    msg.setSource(2198U);
    msg.setSourceEntity(108U);
    msg.setDestination(13911U);
    msg.setDestinationEntity(153U);
    msg.target.assign("ZRQNOGQFHGEYSBOBUCXFONQZPTZPMIAAVWLXYKVMMWYDWKSLUUXLLNMVUSDSDBTLZWHAX");
    msg.x = 0.29397064127096273;
    msg.y = 0.5746878617056013;
    msg.z = 0.7373549102902773;
    msg.n = 0.8569690115756794;
    msg.e = 0.4060660412797781;
    msg.d = 0.8457319001007676;
    msg.phi = 0.8969745469617211;
    msg.theta = 0.2630209851982319;
    msg.psi = 0.6882387402505802;
    msg.accuracy = 0.08745579843868423;

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
    msg.setTimeStamp(0.3947889972473869);
    msg.setSource(12064U);
    msg.setSourceEntity(96U);
    msg.setDestination(18446U);
    msg.setDestinationEntity(191U);
    msg.target.assign("IGPCVEAFTXGAYCCEOYBCBTJODXXITYYSLKFERWISANGPYLVFMFLXKJJLWKWXHTZGSFMSHLPTGXHDMQAEAESJOZAUVRHUWBWEKXZNSIJBPMRFSLIVMFYQXNJVGAMDZYCHOATJLFWDRMETWFNUPVHLQKHKDHJEGVBXUOT");
    msg.lat = 0.4900091070856042;
    msg.lon = 0.8312626173518008;
    msg.z_units = 226U;
    msg.z = 0.968177064046533;
    msg.accuracy = 0.25153650256873605;

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
    msg.setTimeStamp(0.44265893536586043);
    msg.setSource(52925U);
    msg.setSourceEntity(80U);
    msg.setDestination(5444U);
    msg.setDestinationEntity(159U);
    msg.target.assign("CKMSBDAJACHVXJRPKLWQJMFUXPGDQHKHEBMIGCTOXBUIOYOZQFLJASEJWEZNFHNTXUIIUAGYZPAOJFQHCSLGYRWZGVVSZPVNCPAXYDZMYQIMBWTSFVZNMUWLNMNSHP");
    msg.lat = 0.1203985196158267;
    msg.lon = 0.9014309527048862;
    msg.z_units = 152U;
    msg.z = 0.8841344550324022;
    msg.accuracy = 0.6751379414151952;

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
    msg.setTimeStamp(0.8772284761909713);
    msg.setSource(35722U);
    msg.setSourceEntity(90U);
    msg.setDestination(40460U);
    msg.setDestinationEntity(31U);
    msg.target.assign("PFXZQHEJXSZKUIFGAKCUUCWAHVPFUXPTZYYPWKAGKLRSIYBYXIHKVCHQFTUDIZEQQNQNHRDLOFVWTBJSUSULCQMBIETZZWPZRRVXVKZBMNJRALTVWXXIBAGIMWSAVFTDOJAHOOPPYMI");
    msg.lat = 0.9202561166365414;
    msg.lon = 0.45414684256681215;
    msg.z_units = 210U;
    msg.z = 0.9529009696314411;
    msg.accuracy = 0.03625398440063876;

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
    msg.setTimeStamp(0.7184676428284867);
    msg.setSource(28812U);
    msg.setSourceEntity(65U);
    msg.setDestination(60251U);
    msg.setDestinationEntity(212U);
    msg.name.assign("XGYOVPLYJHAJDIBSLMDWWXOKN");
    msg.lat = 0.35342257055731285;
    msg.lon = 0.5979150031052601;
    msg.z = 0.26842357413252593;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.6977192726698461);
    msg.setSource(50220U);
    msg.setSourceEntity(197U);
    msg.setDestination(49816U);
    msg.setDestinationEntity(248U);
    msg.name.assign("HZRXWNDGGNTWPKJNJASHILCIYETXOFMYAUSTZKNQYRTNRNNWOJNGOOKACFUVLVUQMQOZKHPKEFRWUBZCXPXHHQFAJQWGKDCGECFXLBOVBBRLKMDISBSPQBWXLADLSZIAZEOXHAESMYUYHCTABWIWDGLUVBTRMAHH");
    msg.lat = 0.9050729448422287;
    msg.lon = 0.2682565920325196;
    msg.z = 0.8800434079449202;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.6920633678885285);
    msg.setSource(31101U);
    msg.setSourceEntity(103U);
    msg.setDestination(25959U);
    msg.setDestinationEntity(242U);
    msg.name.assign("RDQOSZDNMAJACRDYTMVWNMH");
    msg.lat = 0.02105276684711732;
    msg.lon = 0.439949896918171;
    msg.z = 0.41891323701454053;
    msg.z_units = 236U;

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
    msg.setTimeStamp(0.3098790412684077);
    msg.setSource(787U);
    msg.setSourceEntity(202U);
    msg.setDestination(54501U);
    msg.setDestinationEntity(38U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.018229295961304626);
    msg.setSource(333U);
    msg.setSourceEntity(185U);
    msg.setDestination(43288U);
    msg.setDestinationEntity(121U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.7459583281815494);
    msg.setSource(64885U);
    msg.setSourceEntity(191U);
    msg.setDestination(61124U);
    msg.setDestinationEntity(181U);
    msg.op = 124U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JJNMOPUDTBIFPHZHTZJKQWMWCCWVSYJJXSKAGDTWQJSQOQLLANMHXODBTQMINAVJHXBUR");
    tmp_msg_0.lat = 0.23256857785622997;
    tmp_msg_0.lon = 0.1780785543011416;
    tmp_msg_0.z = 0.876253775799326;
    tmp_msg_0.z_units = 209U;
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
    msg.setTimeStamp(0.4635958809529661);
    msg.setSource(4302U);
    msg.setSourceEntity(99U);
    msg.setDestination(34696U);
    msg.setDestinationEntity(162U);
    msg.value = 0.716711730826152;
    msg.type = 131U;

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
    msg.setTimeStamp(0.8993269224797952);
    msg.setSource(35914U);
    msg.setSourceEntity(119U);
    msg.setDestination(41101U);
    msg.setDestinationEntity(194U);
    msg.value = 0.845446980581926;
    msg.type = 206U;

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
    msg.setTimeStamp(0.5373954953522067);
    msg.setSource(20517U);
    msg.setSourceEntity(66U);
    msg.setDestination(61262U);
    msg.setDestinationEntity(193U);
    msg.value = 0.32528926905713884;
    msg.type = 10U;

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
    msg.setTimeStamp(0.015652348488240042);
    msg.setSource(9005U);
    msg.setSourceEntity(52U);
    msg.setDestination(47980U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9314310351526455;

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
    msg.setTimeStamp(0.12259403004418612);
    msg.setSource(47442U);
    msg.setSourceEntity(234U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(44U);
    msg.value = 0.3751388586919546;

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
    msg.setTimeStamp(0.40567096309313455);
    msg.setSource(31555U);
    msg.setSourceEntity(167U);
    msg.setDestination(21672U);
    msg.setDestinationEntity(159U);
    msg.value = 0.1340274069741425;

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
    msg.setTimeStamp(0.8039172428008211);
    msg.setSource(45388U);
    msg.setSourceEntity(223U);
    msg.setDestination(47408U);
    msg.setDestinationEntity(166U);
    msg.timestamp_last_service = 0.8450940081321933;
    msg.time_next_service = 0.10902616465442105;
    msg.time_motor_next_service = 0.9581563905712368;
    msg.time_idle_ground = 0.9320003493965634;
    msg.time_idle_air = 0.5569084231252533;
    msg.time_idle_water = 0.9348487273569125;
    msg.time_idle_underwater = 0.9502367948444603;
    msg.time_idle_unknown = 0.6708387727307682;
    msg.time_motor_ground = 0.8793828450001491;
    msg.time_motor_air = 0.4432614684556009;
    msg.time_motor_water = 0.6201932016497077;
    msg.time_motor_underwater = 0.4431528420394313;
    msg.time_motor_unknown = 0.22171917960055698;
    msg.rpm_min = -15300;
    msg.rpm_max = 16608;
    msg.depth_max = 0.0970601939326513;

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
    msg.setTimeStamp(0.28146780196663757);
    msg.setSource(60784U);
    msg.setSourceEntity(228U);
    msg.setDestination(55473U);
    msg.setDestinationEntity(92U);
    msg.timestamp_last_service = 0.3705302412864997;
    msg.time_next_service = 0.02454884797456336;
    msg.time_motor_next_service = 0.21030450449103377;
    msg.time_idle_ground = 0.6657799726026238;
    msg.time_idle_air = 0.6349791996911248;
    msg.time_idle_water = 0.03479615656199875;
    msg.time_idle_underwater = 0.5567018602462609;
    msg.time_idle_unknown = 0.21372486482949105;
    msg.time_motor_ground = 0.8454510021781408;
    msg.time_motor_air = 0.24817065070192634;
    msg.time_motor_water = 0.28346960175164426;
    msg.time_motor_underwater = 0.8183049611585612;
    msg.time_motor_unknown = 0.48925028457856556;
    msg.rpm_min = 16503;
    msg.rpm_max = 6756;
    msg.depth_max = 0.6452698827267976;

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
    msg.setTimeStamp(0.6975946825045571);
    msg.setSource(24993U);
    msg.setSourceEntity(10U);
    msg.setDestination(59138U);
    msg.setDestinationEntity(170U);
    msg.timestamp_last_service = 0.9077044352150703;
    msg.time_next_service = 0.6589586639869223;
    msg.time_motor_next_service = 0.5493147881806573;
    msg.time_idle_ground = 0.9463504921329491;
    msg.time_idle_air = 0.2794507795040204;
    msg.time_idle_water = 0.6350919994923888;
    msg.time_idle_underwater = 0.07436844701977341;
    msg.time_idle_unknown = 0.2865898319690756;
    msg.time_motor_ground = 0.7821809055314014;
    msg.time_motor_air = 0.14872453847825784;
    msg.time_motor_water = 0.44255578363198655;
    msg.time_motor_underwater = 0.1883253416219921;
    msg.time_motor_unknown = 0.88377733776864;
    msg.rpm_min = -26514;
    msg.rpm_max = 4374;
    msg.depth_max = 0.7869324465129148;

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
    msg.setTimeStamp(0.5432373157816366);
    msg.setSource(1067U);
    msg.setSourceEntity(91U);
    msg.setDestination(50365U);
    msg.setDestinationEntity(223U);
    msg.severity = 36U;
    msg.text.assign("ZQHUTKPMEJPLMCACWQVHMXXBATDLQFYQXLAAQWNJYNBPTECJLAGWEOFEITAGFXIDXFUKATVNPPXEKSOKKGJWTZGDEYUDCWWMOZNYWUPHUIBRKMJUGNXBQIPNNRLLWMZCOLRKOOSZPBMVVODF");

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
    msg.setTimeStamp(0.4706166603551044);
    msg.setSource(39380U);
    msg.setSourceEntity(155U);
    msg.setDestination(30089U);
    msg.setDestinationEntity(140U);
    msg.severity = 208U;
    msg.text.assign("JUWLWSLFZABMIYBYKYYKBFAPUQYVZPGHWSDURPDPSIVIJLQMXVURPGTDZRTGEHGPLNXLIATVMTEEOWWFKUJBPEAEWCEMSAELTIBQBJNGCVNKDKHMVAHAXCXFCRLSQADRLIZOOJYRVYDFXWENYOQUTOWMKQCPGZVUDXNHHTGRZKKZNFDQCIYUL");

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
    msg.setTimeStamp(0.08667856636541993);
    msg.setSource(9292U);
    msg.setSourceEntity(27U);
    msg.setDestination(30207U);
    msg.setDestinationEntity(129U);
    msg.severity = 47U;
    msg.text.assign("OYZLUQDNUXBOARXESMVDZWQGBYDUWROPMRJNTIPDNMFUHXIBLRQTQNVQATJBLSZACCKOHTFMNOWZSTZXUEJOECBGHRJLUDSEUPZWUVGKJCIRFDWBIQKDMSCZIKMXTHENS");

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
    msg.setTimeStamp(0.6141453194573042);
    msg.setSource(39139U);
    msg.setSourceEntity(81U);
    msg.setDestination(2608U);
    msg.setDestinationEntity(93U);
    msg.channel = -47;
    msg.value = -1911539721;
    msg.gain = 88U;

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
    msg.setTimeStamp(0.7620728179544353);
    msg.setSource(13400U);
    msg.setSourceEntity(60U);
    msg.setDestination(39807U);
    msg.setDestinationEntity(136U);
    msg.channel = 107;
    msg.value = -430918878;
    msg.gain = 251U;

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
    msg.setTimeStamp(0.26782150395653814);
    msg.setSource(1435U);
    msg.setSourceEntity(52U);
    msg.setDestination(50640U);
    msg.setDestinationEntity(161U);
    msg.channel = 120;
    msg.value = -1047422213;
    msg.gain = 102U;

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
    msg.setTimeStamp(0.4760593569033805);
    msg.setSource(8593U);
    msg.setSourceEntity(213U);
    msg.setDestination(40189U);
    msg.setDestinationEntity(210U);
    msg.ch01 = 0.9670926861389009;
    msg.ch02 = 0.5712749108829523;
    msg.ch03 = 0.4174973963953694;
    msg.ch04 = 0.7606639661859567;
    msg.ch05 = 0.18738579393299604;
    msg.ch06 = 0.6059085280217977;
    msg.ch07 = 0.6298797810577059;
    msg.ch08 = 0.5897504325626274;
    msg.ch09 = 0.8846739629750228;
    msg.ch10 = 0.8457163160099973;
    msg.ch11 = 0.6346428727776355;
    msg.ch12 = 0.9080923699732655;
    msg.ch13 = 0.12548176800840238;
    msg.ch14 = 0.2886855930925294;
    msg.ch15 = 0.7820088519444344;
    msg.ch16 = 0.291798524631777;

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
    msg.setTimeStamp(0.7335311188381891);
    msg.setSource(40346U);
    msg.setSourceEntity(212U);
    msg.setDestination(9054U);
    msg.setDestinationEntity(80U);
    msg.ch01 = 0.17123718871405913;
    msg.ch02 = 0.6269852945031816;
    msg.ch03 = 0.028236416967272082;
    msg.ch04 = 0.9966101622351157;
    msg.ch05 = 0.724701504279952;
    msg.ch06 = 0.043983443323321825;
    msg.ch07 = 0.9080234003467693;
    msg.ch08 = 0.6829113707061307;
    msg.ch09 = 0.47365734414647176;
    msg.ch10 = 0.6442237889207585;
    msg.ch11 = 0.49410956283535923;
    msg.ch12 = 0.9651148168558795;
    msg.ch13 = 0.13867007549375898;
    msg.ch14 = 0.877504689733154;
    msg.ch15 = 0.19359425965728705;
    msg.ch16 = 0.16406182009316572;

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
    msg.setTimeStamp(0.38929959393783287);
    msg.setSource(65202U);
    msg.setSourceEntity(246U);
    msg.setDestination(15473U);
    msg.setDestinationEntity(164U);
    msg.ch01 = 0.3889405083055534;
    msg.ch02 = 0.9194624653300145;
    msg.ch03 = 0.12539407173093886;
    msg.ch04 = 0.44004828043372224;
    msg.ch05 = 0.31795361721684334;
    msg.ch06 = 0.0823545174035667;
    msg.ch07 = 0.8017142161890981;
    msg.ch08 = 0.7470790545468279;
    msg.ch09 = 0.47135058196835355;
    msg.ch10 = 0.20264194704225658;
    msg.ch11 = 0.45653725976127224;
    msg.ch12 = 0.6004953701232305;
    msg.ch13 = 0.7010387218916523;
    msg.ch14 = 0.866645352361751;
    msg.ch15 = 0.06555613491778611;
    msg.ch16 = 0.7207557385442244;

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
    msg.setTimeStamp(0.7968238307093668);
    msg.setSource(6580U);
    msg.setSourceEntity(198U);
    msg.setDestination(31805U);
    msg.setDestinationEntity(170U);
    msg.op = 163U;
    msg.lat = 0.3293703294428245;
    msg.lon = 0.7611503409879095;
    msg.height = 0.8440311658583627;
    msg.depth = 0.8498303964601113;
    msg.alt = 0.49019597352663224;

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
    msg.setTimeStamp(0.7920389017199978);
    msg.setSource(57358U);
    msg.setSourceEntity(157U);
    msg.setDestination(34331U);
    msg.setDestinationEntity(145U);
    msg.op = 20U;
    msg.lat = 0.7245292829676687;
    msg.lon = 0.5408015862179555;
    msg.height = 0.3191085904370562;
    msg.depth = 0.7176420906626446;
    msg.alt = 0.8163598562427985;

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
    msg.setTimeStamp(0.7235497768182683);
    msg.setSource(38480U);
    msg.setSourceEntity(236U);
    msg.setDestination(57554U);
    msg.setDestinationEntity(115U);
    msg.op = 245U;
    msg.lat = 0.14222333470802473;
    msg.lon = 0.2835064661811397;
    msg.height = 0.4514748975774503;
    msg.depth = 0.9542399434667208;
    msg.alt = 0.005985703297573419;

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
    msg.setTimeStamp(0.8207061634647476);
    msg.setSource(19493U);
    msg.setSourceEntity(184U);
    msg.setDestination(21957U);
    msg.setDestinationEntity(210U);
    msg.nbeams = 1U;
    msg.ncells = 242U;
    msg.coord_sys = 196U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.1638318017552215;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.6667467588641018;
    tmp_tmp_msg_0_0.amp = 0.6526606120485912;
    tmp_tmp_msg_0_0.cor = 130U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6924871240545749);
    msg.setSource(57168U);
    msg.setSourceEntity(176U);
    msg.setDestination(51273U);
    msg.setDestinationEntity(195U);
    msg.nbeams = 102U;
    msg.ncells = 139U;
    msg.coord_sys = 134U;

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
    msg.setTimeStamp(0.179745818736743);
    msg.setSource(27360U);
    msg.setSourceEntity(188U);
    msg.setDestination(10051U);
    msg.setDestinationEntity(115U);
    msg.nbeams = 79U;
    msg.ncells = 231U;
    msg.coord_sys = 160U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.19700653863689044;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.8138158189256051;
    tmp_tmp_msg_0_0.amp = 0.16406126212597505;
    tmp_tmp_msg_0_0.cor = 141U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.08293728612829265);
    msg.setSource(33778U);
    msg.setSourceEntity(144U);
    msg.setDestination(2841U);
    msg.setDestinationEntity(221U);
    msg.cell_position = 0.4333368103441517;

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
    msg.setTimeStamp(0.5792967781881657);
    msg.setSource(428U);
    msg.setSourceEntity(163U);
    msg.setDestination(63977U);
    msg.setDestinationEntity(82U);
    msg.cell_position = 0.41837855955899295;

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
    msg.setTimeStamp(0.16253111231904938);
    msg.setSource(29766U);
    msg.setSourceEntity(105U);
    msg.setDestination(4979U);
    msg.setDestinationEntity(175U);
    msg.cell_position = 0.7355833598977216;

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
    msg.setTimeStamp(0.07487722348025849);
    msg.setSource(6228U);
    msg.setSourceEntity(146U);
    msg.setDestination(49409U);
    msg.setDestinationEntity(223U);
    msg.vel = 0.8666300926366671;
    msg.amp = 0.20353186877450724;
    msg.cor = 187U;

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
    msg.setTimeStamp(0.3189376203349207);
    msg.setSource(37289U);
    msg.setSourceEntity(136U);
    msg.setDestination(21340U);
    msg.setDestinationEntity(142U);
    msg.vel = 0.5206217066075345;
    msg.amp = 0.2255237820497561;
    msg.cor = 142U;

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
    msg.setTimeStamp(0.7955763330147206);
    msg.setSource(38489U);
    msg.setSourceEntity(85U);
    msg.setDestination(59765U);
    msg.setDestinationEntity(130U);
    msg.vel = 0.6726568286567217;
    msg.amp = 0.11291747087275528;
    msg.cor = 160U;

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
    msg.setTimeStamp(0.829841941269793);
    msg.setSource(31474U);
    msg.setSourceEntity(81U);
    msg.setDestination(55842U);
    msg.setDestinationEntity(26U);
    msg.name.assign("KEZUQGSYNMHNOIRSPUPOWBASZOUCGEURLVLJRQTGCRQXHYFOFZTTTKXPZFLWBONIJZCWDRPMGQXPZVGQCYXBCSMEMKDJJBVKBCABHMLINDGHIWUFFVXYHYHRANCRJLOTUQAAEILICX");
    msg.value = 47U;

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
    msg.setTimeStamp(0.49209059315634496);
    msg.setSource(38836U);
    msg.setSourceEntity(221U);
    msg.setDestination(12696U);
    msg.setDestinationEntity(38U);
    msg.name.assign("FFYLYPCVLZTUCZUPD");
    msg.value = 20U;

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
    msg.setTimeStamp(0.25850911285417);
    msg.setSource(31629U);
    msg.setSourceEntity(151U);
    msg.setDestination(51732U);
    msg.setDestinationEntity(186U);
    msg.name.assign("NUJZRZBTXWSQVQWYUKNHVCHLRVNCCHRDPAIQPMSBGWREAZXLPYXXDJTIANDFSRDMBUYTWBYKGCIYKYJDHNCIQNXLMSZGVNAJQDDX");
    msg.value = 161U;

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
    msg.setTimeStamp(0.06253300648799065);
    msg.setSource(55775U);
    msg.setSourceEntity(50U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(213U);
    msg.name.assign("LTOHRVGKOEAQFPPIYBAMEZXVRCNMJDMNTXNWNFHLAZWFFFOSKARQYREGUPVPWTHZFSEYMTTNORUDEJGAUCMDSDK");

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
    msg.setTimeStamp(0.2102479398727839);
    msg.setSource(24129U);
    msg.setSourceEntity(10U);
    msg.setDestination(64252U);
    msg.setDestinationEntity(59U);
    msg.name.assign("JPJOOQAJMHBWDZWKMRUCWNXTPAXZGOHGGCUKZELOIUDKZGMBJHLDXLDCSWMWFQFAUDHDAUBFKVPWBIARVRGWMLXVELSSVMYXPHPILADNIOTQIUTDNTCAPVTETIURVRXBCNJQLNHRIPOYRVQCYYJZWOMXSDRFYWKPXZAPKIQERJHGZFEGTYAQ");

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
    msg.setTimeStamp(0.1998501943706471);
    msg.setSource(2606U);
    msg.setSourceEntity(190U);
    msg.setDestination(8649U);
    msg.setDestinationEntity(181U);
    msg.name.assign("SGWEIPWGWUVHUTWIORLBATNPZMHLJABEFYEMMQZTOEMNAJHEUUEZIGXUIGORMKQDHSSNZRCYUNXSXDLPSLITZMXSFGJAXDRTFDKIOAPKJBVL");

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
    msg.setTimeStamp(0.7737893164558002);
    msg.setSource(48708U);
    msg.setSourceEntity(57U);
    msg.setDestination(43699U);
    msg.setDestinationEntity(67U);
    msg.name.assign("COJRYHVSLRGBHXSCUQABNXTKYFKEAIXFCUJJFPGGERDEIGSRWYC");
    msg.value = 23U;

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
    msg.setTimeStamp(0.8351299675203414);
    msg.setSource(22014U);
    msg.setSourceEntity(165U);
    msg.setDestination(62906U);
    msg.setDestinationEntity(97U);
    msg.name.assign("NOJFQPBSGZDANCDXQRXLSCPHJKTNHGRIXWJJIRILZXWTQHCWVMJFRFUSEEALUQSGBFAHMSK");
    msg.value = 101U;

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
    msg.setTimeStamp(0.942305057186774);
    msg.setSource(309U);
    msg.setSourceEntity(197U);
    msg.setDestination(60936U);
    msg.setDestinationEntity(201U);
    msg.name.assign("UJJBOHTFVGPSAVKIOZNDXQYZDIPJOKSCMQQCCMPTLFZQNBMPRVSJYPDEVXPAVULLYTOLWTVDFXZWJHUQKYLSFEXMRHHQJKIHLXZOUKBUZPMTSZMO");
    msg.value = 99U;

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
    msg.setTimeStamp(0.694600295031389);
    msg.setSource(55129U);
    msg.setSourceEntity(23U);
    msg.setDestination(25623U);
    msg.setDestinationEntity(158U);
    msg.value = 0.676125318467957;

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
    msg.setTimeStamp(0.44351960477295493);
    msg.setSource(6391U);
    msg.setSourceEntity(106U);
    msg.setDestination(57258U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5822512333688745;

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
    msg.setTimeStamp(0.35836163346023386);
    msg.setSource(58297U);
    msg.setSourceEntity(92U);
    msg.setDestination(37158U);
    msg.setDestinationEntity(59U);
    msg.value = 0.24026731016949943;

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
    msg.setTimeStamp(0.04812857157387007);
    msg.setSource(50612U);
    msg.setSourceEntity(46U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(232U);
    msg.value = 0.07769923246355936;

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
    msg.setTimeStamp(0.07911297934086903);
    msg.setSource(63696U);
    msg.setSourceEntity(106U);
    msg.setDestination(62834U);
    msg.setDestinationEntity(124U);
    msg.value = 0.09261099220495883;

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
    msg.setTimeStamp(0.8091055629165101);
    msg.setSource(63889U);
    msg.setSourceEntity(139U);
    msg.setDestination(4384U);
    msg.setDestinationEntity(88U);
    msg.value = 0.698994865025933;

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
    msg.setTimeStamp(0.5861815518551864);
    msg.setSource(51172U);
    msg.setSourceEntity(142U);
    msg.setDestination(10842U);
    msg.setDestinationEntity(28U);
    msg.value = 0.8457432199011846;

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
    msg.setTimeStamp(0.41638935058530835);
    msg.setSource(14500U);
    msg.setSourceEntity(224U);
    msg.setDestination(35655U);
    msg.setDestinationEntity(19U);
    msg.value = 0.025294295804476175;

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
    msg.setTimeStamp(0.6668481286619813);
    msg.setSource(59484U);
    msg.setSourceEntity(185U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(207U);
    msg.value = 0.503229514528654;

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
    msg.setTimeStamp(0.2977893706813197);
    msg.setSource(6050U);
    msg.setSourceEntity(68U);
    msg.setDestination(30490U);
    msg.setDestinationEntity(34U);
    msg.restriction = 249U;
    msg.reason.assign("JMHCSFSZDIYFAGQFKRIYKPGNRFOMSFZBOBENHFSGRELRKMMPAPGZRHXOEYWNQDMYESIBGCDCYEBBCRORVKPZMRDSTNCQGPFHVJLKHQPWBPSUNWJITUQOOYGAMSBAZTOUTXLDFDILCXYGLJUQRLIUENQEULAQJLJWDXTAG");

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
    msg.setTimeStamp(0.10262010316342907);
    msg.setSource(59756U);
    msg.setSourceEntity(180U);
    msg.setDestination(38514U);
    msg.setDestinationEntity(1U);
    msg.restriction = 66U;
    msg.reason.assign("RHAKUBTLUERQFKGNLIAYQQWWUBHGJMDAFEXLGKAMHTCPAHOIICRGUXAZVUXAHHESBNOMVASVYSVTTLUBIOQCBRDROUGGZUPCKODVJXWDMSHJQWNHJHLKKCQMRTKIYCEDFPFUARJMFXYDXIBOJYDZSTFZQTNZMWWZOGOSCSMLNWCOYEBXSKPOWIYMGKGWVYLLXFDPYNBEJBNYQLPQFXARNEIGCDTJCEWVZPZSEV");

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
    msg.setTimeStamp(0.7463609553634074);
    msg.setSource(46632U);
    msg.setSourceEntity(63U);
    msg.setDestination(32215U);
    msg.setDestinationEntity(169U);
    msg.restriction = 228U;
    msg.reason.assign("AQSFHGFHCKHUWGZBYZUAFLWIZUNFNMDWVDSTEBCRGOPARINMPYQHVZEVGXTEAXXNKWFESBEOZIBYJTNYRLVADLUCZQHSDLNNLRYUGKMISXIMGPY");

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
    IMC::ConsensusPacket msg;
    msg.setTimeStamp(0.11009523685761302);
    msg.setSource(46391U);
    msg.setSourceEntity(115U);
    msg.setDestination(49409U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.8845430002420509;
    msg.lon = 0.5817653564727298;
    msg.z = 0.6803275509551804;
    msg.v_x = 0.18424335023048488;
    msg.v_y = 0.4062679491703216;
    msg.v_z = 0.8553283357636058;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ConsensusPacket #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ConsensusPacket msg;
    msg.setTimeStamp(0.7647892987895373);
    msg.setSource(50828U);
    msg.setSourceEntity(231U);
    msg.setDestination(35523U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.6470708846161515;
    msg.lon = 0.31141930209943147;
    msg.z = 0.9794500699271214;
    msg.v_x = 0.015299334317074864;
    msg.v_y = 0.835446022344955;
    msg.v_z = 0.8431422192132025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ConsensusPacket #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ConsensusPacket msg;
    msg.setTimeStamp(0.4316460543633702);
    msg.setSource(14790U);
    msg.setSourceEntity(73U);
    msg.setDestination(50286U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.8286943619474795;
    msg.lon = 0.06884089474635269;
    msg.z = 0.027980912452379325;
    msg.v_x = 0.7152740879023606;
    msg.v_y = 0.7554509213282682;
    msg.v_z = 0.6171084209122909;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ConsensusPacket #2", msg == *msg_d);
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
