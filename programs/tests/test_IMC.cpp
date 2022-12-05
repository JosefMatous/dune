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
// IMC XML MD5: 81a231ec258c74d260a4ec19beafc2c1                            *
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
    msg.setTimeStamp(0.5639733009203323);
    msg.setSource(64236U);
    msg.setSourceEntity(140U);
    msg.setDestination(40074U);
    msg.setDestinationEntity(15U);
    msg.state = 11U;
    msg.flags = 145U;
    msg.description.assign("WNJXCTWJWGWFARTXIJQPKMKMXZTVZBRDESCDWJORKVBHPPQFA");

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
    msg.setTimeStamp(0.6445822117639609);
    msg.setSource(56753U);
    msg.setSourceEntity(15U);
    msg.setDestination(9113U);
    msg.setDestinationEntity(212U);
    msg.state = 155U;
    msg.flags = 55U;
    msg.description.assign("TXKFMDOWHBQJFQZSDSCPTFSKGKMVFBCUYTMMPFGIPKICLSQEXPHOWGBMSESWRUAMWNGJEQJISNZBZK");

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
    msg.setTimeStamp(0.6635694534983222);
    msg.setSource(45360U);
    msg.setSourceEntity(187U);
    msg.setDestination(21644U);
    msg.setDestinationEntity(70U);
    msg.state = 0U;
    msg.flags = 3U;
    msg.description.assign("DBDZCEZPSCFEYCBQZRGNWMIKXFYUIMIYQAJOXEUJRKBTTWWUKOTNTCNNIJLRQHJQRIFSMZMQGAXMJGLVWSLFSPOMFSUYHGKZOUXBVTVILHTPLWDUU");

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
    msg.setTimeStamp(0.2730282740646678);
    msg.setSource(18879U);
    msg.setSourceEntity(29U);
    msg.setDestination(17092U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.2925300897214621);
    msg.setSource(2255U);
    msg.setSourceEntity(81U);
    msg.setDestination(15443U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.3632784063397416);
    msg.setSource(27553U);
    msg.setSourceEntity(94U);
    msg.setDestination(57878U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.5023882986311011);
    msg.setSource(24928U);
    msg.setSourceEntity(161U);
    msg.setDestination(16131U);
    msg.setDestinationEntity(67U);
    msg.id = 59U;
    msg.label.assign("BNTYHJKPKULGZKHKSFMIRXMFZBMZXKZVQGLAJSUNWNZGHHIHSLMYEWTAKSBASLVXDKZITCWJEBJRRBEZDLDRTDQTDGPMYQYIVAGDFCMBJPMOUGUALUVTHOXSZBRFAKUENUFCVCQSLFUXQON");
    msg.component.assign("VFFFTKQHTKBVLQVUXYXZHDHJLPXWGPILULPZZVKGXKFISSIXVQNZOZQOYCPY");
    msg.act_time = 61759U;
    msg.deact_time = 684U;

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
    msg.setTimeStamp(0.47469854581102255);
    msg.setSource(31792U);
    msg.setSourceEntity(204U);
    msg.setDestination(2782U);
    msg.setDestinationEntity(166U);
    msg.id = 219U;
    msg.label.assign("WTDRYCCBVVAPRAPQYYUZLFYDKBSCWJBZANGVSDDLHRGFLGSCFAZTLRJUMANTVHJPUQYEKIHXWXGOIXKVBGGBJHITVCWQZFVLNSSEKTLFXQQFGJKVHMBWEUPDQQNPAEPALIOZBGPCCROXCZPSKUXBINIHZZEPJQOXNJKQKUEMIARHHEJMXJXSTOEODIVHKOURYQLOFMDYE");
    msg.component.assign("LQBQFCXHFLTZZTOSDLFVYOMDHCCZTIRUIHAQMJVDUKTEZPHNKPSVCTKNZCIFQMXWRLLYGYZJXBHXEPWNEGCQJCQHTVJSRIHKXUUDBDKBHLYMYWIBFBOOOEZEEOPGORBEJIQXDCWAKUXLSSYGUNNNDVRRECDUAPLWACAXFNNIARLHUJMSSRMWFMPUBZFKNXVGAJPXRWGKASDTNJARMIQEGYUYWPLSZWOOOETAVYSVFKF");
    msg.act_time = 29959U;
    msg.deact_time = 15737U;

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
    msg.setTimeStamp(0.8796936693424885);
    msg.setSource(47521U);
    msg.setSourceEntity(223U);
    msg.setDestination(26712U);
    msg.setDestinationEntity(220U);
    msg.id = 238U;
    msg.label.assign("DMJWRFARTJNLBUHYMYVDQQCFXVCZMJFIIZKJCZTVVYEIOLMRYWZQOOHHWGBHDZWWDBPKDLBXASLAPSPCRSFPQZTTIYFHEXSKBKGFIXETCXSTNUGCRNJFGRGPUNMTMJBAQPLUWMOVPZBBJADIOPFLPIHFRNEEOZVQNVCMKHINAUPIGXUEOGGQDCLTADYSYLDBSBWXYMMANETQOXYKXKQWNTIZLGXRUHUSEEJJNKCUAVVJQ");
    msg.component.assign("IWUXRPVJAXCH");
    msg.act_time = 60867U;
    msg.deact_time = 29160U;

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
    msg.setTimeStamp(0.29077105315172824);
    msg.setSource(32915U);
    msg.setSourceEntity(181U);
    msg.setDestination(46274U);
    msg.setDestinationEntity(59U);
    msg.id = 37U;

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
    msg.setTimeStamp(0.6175590232156513);
    msg.setSource(9603U);
    msg.setSourceEntity(8U);
    msg.setDestination(21585U);
    msg.setDestinationEntity(171U);
    msg.id = 61U;

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
    msg.setTimeStamp(0.4719445827078701);
    msg.setSource(37032U);
    msg.setSourceEntity(87U);
    msg.setDestination(38929U);
    msg.setDestinationEntity(213U);
    msg.id = 136U;

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
    msg.setTimeStamp(0.8245954360414458);
    msg.setSource(49206U);
    msg.setSourceEntity(54U);
    msg.setDestination(40087U);
    msg.setDestinationEntity(70U);
    msg.op = 163U;
    msg.list.assign("JAHVXINJRIRCDDLGOEDFVZXXUBQSFRTKUQGWHIWALOJECAVBSMTEMEVZOXXXOVYMUMJNRTYHLJAZKEPKATSENWUTHKGNHLCJNRNCPLCQKTNFITRWYB");

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
    msg.setTimeStamp(0.03839117223412991);
    msg.setSource(64104U);
    msg.setSourceEntity(130U);
    msg.setDestination(11565U);
    msg.setDestinationEntity(152U);
    msg.op = 44U;
    msg.list.assign("CYGDOMZCKYIVUHAKCOZEREFELTCJHHWUVSZYXLWNFLFCLDZMQBJEJCEEKGHACZKPBRPUBXRVTHBSQELAHTYSTTWRLDZNNMQNDDWTWVWBBGPFJMJWMUOJPBQFIXRKYPIBUOIXIPOYCPDDMGTTLIMLWFJXQBNUARMSHUDPFOYEOKA");

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
    msg.setTimeStamp(0.6463938909545982);
    msg.setSource(3809U);
    msg.setSourceEntity(11U);
    msg.setDestination(61934U);
    msg.setDestinationEntity(10U);
    msg.op = 198U;
    msg.list.assign("VYNXXXHEHOVEGSWTIMDHEELMTQQAAPLFJOFLPBKKJAPMFCBTWVGGHICFLSPXRJUMTKCWUQTGPEIDHRUDRFGYL");

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
    msg.setTimeStamp(0.2525114732565319);
    msg.setSource(51385U);
    msg.setSourceEntity(221U);
    msg.setDestination(12270U);
    msg.setDestinationEntity(74U);
    msg.value = 53U;

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
    msg.setTimeStamp(0.7114757509587704);
    msg.setSource(2719U);
    msg.setSourceEntity(61U);
    msg.setDestination(39453U);
    msg.setDestinationEntity(249U);
    msg.value = 193U;

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
    msg.setTimeStamp(0.3394269288728169);
    msg.setSource(14168U);
    msg.setSourceEntity(154U);
    msg.setDestination(6633U);
    msg.setDestinationEntity(86U);
    msg.value = 33U;

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
    msg.setTimeStamp(0.2737000252010321);
    msg.setSource(36326U);
    msg.setSourceEntity(206U);
    msg.setDestination(28193U);
    msg.setDestinationEntity(18U);
    msg.consumer.assign("YCIPOIWTEWTJZBJVNLGFDQMRXNGWSGCOHHJPHTXLICAFSOBRUDXKHKIOQJEYXPCKBEYTYAYSUSZKWBJNYOUHAPPVXZFCVYBALSIMMUNHTGHLQPNJBIHFZXVLTJMRYNUGVEUDEZXNQMMCNKAHJWANQUMXLQPYQAEPFDSJGILZLETQECDOILWFLYKGEOAVGQXCOODWMHBRTIURKGRRZVBSTPSCIKVGVPMWWBKFUDDSDFFXF");
    msg.message_id = 65516U;

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
    msg.setTimeStamp(0.44878793664277716);
    msg.setSource(49329U);
    msg.setSourceEntity(7U);
    msg.setDestination(39234U);
    msg.setDestinationEntity(163U);
    msg.consumer.assign("TAIGHIMYIRDWATFHJARURQMCXCQASGWQCJTXWBTVNNOGOKTBEJKNJNFUBIKOTMLFNHRUYSAYVZQK");
    msg.message_id = 20156U;

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
    msg.setTimeStamp(0.8491675135603578);
    msg.setSource(26759U);
    msg.setSourceEntity(139U);
    msg.setDestination(49569U);
    msg.setDestinationEntity(101U);
    msg.consumer.assign("TZNSQCVQHMBLKMZFYLVSPRVOCJGXARABOJBQFUTYKDOGHOCJTKXLWRAICOAZMIRJENLIYRPBEGZUXJSDXTMTTMZM");
    msg.message_id = 64453U;

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
    msg.setTimeStamp(0.7246034032601946);
    msg.setSource(53705U);
    msg.setSourceEntity(233U);
    msg.setDestination(43143U);
    msg.setDestinationEntity(43U);
    msg.type = 153U;

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
    msg.setTimeStamp(0.09826807818208383);
    msg.setSource(54524U);
    msg.setSourceEntity(167U);
    msg.setDestination(36656U);
    msg.setDestinationEntity(1U);
    msg.type = 74U;

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
    msg.setTimeStamp(0.8249105953552667);
    msg.setSource(29580U);
    msg.setSourceEntity(114U);
    msg.setDestination(59634U);
    msg.setDestinationEntity(81U);
    msg.type = 81U;

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
    msg.setTimeStamp(0.8699189808793447);
    msg.setSource(5997U);
    msg.setSourceEntity(217U);
    msg.setDestination(18345U);
    msg.setDestinationEntity(121U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.02001116961198046);
    msg.setSource(30063U);
    msg.setSourceEntity(4U);
    msg.setDestination(41394U);
    msg.setDestinationEntity(100U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.3611559244481527);
    msg.setSource(36837U);
    msg.setSourceEntity(85U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(206U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.828466791589624);
    msg.setSource(16574U);
    msg.setSourceEntity(178U);
    msg.setDestination(52478U);
    msg.setDestinationEntity(231U);
    msg.total_steps = 7U;
    msg.step_number = 218U;
    msg.step.assign("JHLCWIJCCWIODDPOFRWZYGGOTAHZYCISIYFIYXNNBFCVXSAPXVXGVUDQLRTWADOHULYNRBUFHECPQS");
    msg.flags = 28U;

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
    msg.setTimeStamp(0.8444585459438176);
    msg.setSource(60248U);
    msg.setSourceEntity(75U);
    msg.setDestination(23658U);
    msg.setDestinationEntity(97U);
    msg.total_steps = 45U;
    msg.step_number = 57U;
    msg.step.assign("POUDXXPFNUAULNHGHLWAPLVPNGNDVCAXREBQBMLKXRFKECJCYQQHVZSDUOXVEMBZZWLJPQIDMNPTTMXEACCWYBLEJYKHEHMLHQTRJZTFGAICYBGGNILWBCVOYTMUKVYWFOBRQYTWVBQCPDOIGFJSYEJIMOUFM");
    msg.flags = 80U;

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
    msg.setTimeStamp(0.9008531459734184);
    msg.setSource(34766U);
    msg.setSourceEntity(205U);
    msg.setDestination(8742U);
    msg.setDestinationEntity(226U);
    msg.total_steps = 215U;
    msg.step_number = 56U;
    msg.step.assign("SRCFVBOCZNFHITXGTGDJKGLNTLMAPVDKEZDLPCJEQJNEMYWEHBPLUIXCAQQIXLWUULRVLQZSUHUFEMEXBYUKJBKDTMPPBSERXAIONMRITTTJGYFTCZVMVCRWZQQLBGOEXDFKGYOERFRAHYZAWXWP");
    msg.flags = 42U;

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
    msg.setTimeStamp(0.7547079748884039);
    msg.setSource(48914U);
    msg.setSourceEntity(103U);
    msg.setDestination(44741U);
    msg.setDestinationEntity(31U);
    msg.state = 158U;
    msg.error.assign("JUXJQQPDFVTOWVEGXLMLFMYFAYUWDYBRVCQCTOPYKEOUHNWWMDTKHUCKZIYAJWYVALIRGSZYVKAALDMIKNZFRDFDQXBXCTSFRIRMZZIHGCXGNVJJPBGYDIGNKINOSBOWSHYSPGWPOBXVTBAMXFKEFQBCQXKPPZEZMNZSJOEBVSLXQGHNWULDTCQXNHPRKZSCVNIBAVJMMSTANURROWHFIUQLQJELDOFCRTETJOKLAUJCAHE");

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
    msg.setTimeStamp(0.5233474616324417);
    msg.setSource(60481U);
    msg.setSourceEntity(123U);
    msg.setDestination(16643U);
    msg.setDestinationEntity(4U);
    msg.state = 236U;
    msg.error.assign("WXPXNJRLOGVNOSCVNVDJRQPGYQVZMUJMYHUFYEYBCBROGYAWOZHAWCHUFQBFTWIEXEIBGQUFUTRDUIJEWXSALDAWT");

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
    msg.setTimeStamp(0.9471086445594423);
    msg.setSource(1307U);
    msg.setSourceEntity(153U);
    msg.setDestination(14433U);
    msg.setDestinationEntity(173U);
    msg.state = 149U;
    msg.error.assign("NPZWIKCTFKUNGTPMERXILLRMYGEZNIYVCXQDIDOOQCPWZYBHVHLHPURMZQQPPMQYZWEYIKCRUQITASETPSMBIGJMJVWYBXDDKSKABLAPMRLEUQJAYKRONJMJUEIDRXSSDLLAOBWPRQLCAZEETXDBGIUCZFFTVWXKZZ");

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
    msg.setTimeStamp(0.8304284494681392);
    msg.setSource(25488U);
    msg.setSourceEntity(15U);
    msg.setDestination(23175U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.5314481422810133);
    msg.setSource(6193U);
    msg.setSourceEntity(78U);
    msg.setDestination(14335U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.8376608131100517);
    msg.setSource(36348U);
    msg.setSourceEntity(136U);
    msg.setDestination(25129U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.9948729898685441);
    msg.setSource(29648U);
    msg.setSourceEntity(105U);
    msg.setDestination(36727U);
    msg.setDestinationEntity(105U);
    msg.op = 188U;
    msg.speed_min = 0.5084789453212087;
    msg.speed_max = 0.988467146545383;
    msg.long_accel = 0.8268833746899144;
    msg.alt_max_msl = 0.5136251374841517;
    msg.dive_fraction_max = 0.3953717204578697;
    msg.climb_fraction_max = 0.058193137078033974;
    msg.bank_max = 0.029668879508405577;
    msg.p_max = 0.2007051647844279;
    msg.pitch_min = 0.3912754186349202;
    msg.pitch_max = 0.08542269012080417;
    msg.q_max = 0.9171645862172453;
    msg.g_min = 0.6074082086275927;
    msg.g_max = 0.10033541110352207;
    msg.g_lat_max = 0.47683786052710764;
    msg.rpm_min = 0.7488906992856392;
    msg.rpm_max = 0.5989281712889541;
    msg.rpm_rate_max = 0.02577528781900229;

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
    msg.setTimeStamp(0.6278103744008807);
    msg.setSource(23532U);
    msg.setSourceEntity(39U);
    msg.setDestination(17550U);
    msg.setDestinationEntity(6U);
    msg.op = 59U;
    msg.speed_min = 0.42630917547037883;
    msg.speed_max = 0.3620392273063231;
    msg.long_accel = 0.7427253222697535;
    msg.alt_max_msl = 0.05749799502551567;
    msg.dive_fraction_max = 0.259826547541546;
    msg.climb_fraction_max = 0.794604905406958;
    msg.bank_max = 0.2497850411694147;
    msg.p_max = 0.8035514198859616;
    msg.pitch_min = 0.550651524884235;
    msg.pitch_max = 0.16610618790080145;
    msg.q_max = 0.4609060603182952;
    msg.g_min = 0.5843867695060772;
    msg.g_max = 0.694689949272579;
    msg.g_lat_max = 0.5026834178657585;
    msg.rpm_min = 0.9447988521148644;
    msg.rpm_max = 0.6895446545550599;
    msg.rpm_rate_max = 0.7420884210291133;

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
    msg.setTimeStamp(0.687688890793237);
    msg.setSource(50889U);
    msg.setSourceEntity(106U);
    msg.setDestination(25089U);
    msg.setDestinationEntity(237U);
    msg.op = 114U;
    msg.speed_min = 0.28579373623545923;
    msg.speed_max = 0.8035193038053541;
    msg.long_accel = 0.8002102498498482;
    msg.alt_max_msl = 0.13517325972403338;
    msg.dive_fraction_max = 0.9309784039767334;
    msg.climb_fraction_max = 0.35843000362385835;
    msg.bank_max = 0.8063184804879904;
    msg.p_max = 0.8047250529617401;
    msg.pitch_min = 0.37716650036237553;
    msg.pitch_max = 0.571004542423797;
    msg.q_max = 0.5538643223393884;
    msg.g_min = 0.09127686092431697;
    msg.g_max = 0.8870615121889893;
    msg.g_lat_max = 0.6781141336228232;
    msg.rpm_min = 0.512634023019798;
    msg.rpm_max = 0.4274654786230453;
    msg.rpm_rate_max = 0.8164601904671247;

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
    msg.setTimeStamp(0.8746412590114044);
    msg.setSource(17690U);
    msg.setSourceEntity(152U);
    msg.setDestination(23015U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.7264291884332642);
    msg.setSource(38917U);
    msg.setSourceEntity(222U);
    msg.setDestination(34838U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.35093743230492513);
    msg.setSource(35453U);
    msg.setSourceEntity(202U);
    msg.setDestination(39233U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.5144434547081108);
    msg.setSource(29783U);
    msg.setSourceEntity(34U);
    msg.setDestination(35761U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.38417738740206864;
    msg.lon = 0.020181320714306006;
    msg.height = 0.47484299419159504;
    msg.x = 0.022703098468341176;
    msg.y = 0.4143043068597998;
    msg.z = 0.45884552289778413;
    msg.phi = 0.241794221110602;
    msg.theta = 0.845669009225334;
    msg.psi = 0.3722430535165142;
    msg.u = 0.38680801232001794;
    msg.v = 0.7283254888243529;
    msg.w = 0.22626871769550339;
    msg.p = 0.4846756334962464;
    msg.q = 0.1752222732194002;
    msg.r = 0.4674025792029338;
    msg.svx = 0.7385519204956381;
    msg.svy = 0.7418315366256244;
    msg.svz = 0.28357420315590587;

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
    msg.setTimeStamp(0.6784791818523088);
    msg.setSource(64923U);
    msg.setSourceEntity(252U);
    msg.setDestination(63151U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.729338292883508;
    msg.lon = 0.5591093786347444;
    msg.height = 0.3587102551478205;
    msg.x = 0.09306412501051708;
    msg.y = 0.03285069850566957;
    msg.z = 0.25924146490377975;
    msg.phi = 0.8350267387727962;
    msg.theta = 0.9169796575298415;
    msg.psi = 0.7720552840265351;
    msg.u = 0.6944060848406286;
    msg.v = 0.31263218403548465;
    msg.w = 0.3233622053665013;
    msg.p = 0.3166732290416582;
    msg.q = 0.6072741791555198;
    msg.r = 0.23194721486577408;
    msg.svx = 0.5769263349879037;
    msg.svy = 0.9968991146154491;
    msg.svz = 0.7410272676255423;

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
    msg.setTimeStamp(0.6033796873091967);
    msg.setSource(44485U);
    msg.setSourceEntity(250U);
    msg.setDestination(36568U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.8047057455654527;
    msg.lon = 0.5351647569165016;
    msg.height = 0.336503804933887;
    msg.x = 0.7473778556069001;
    msg.y = 0.3446489591303349;
    msg.z = 0.10699059326825067;
    msg.phi = 0.6772205179351517;
    msg.theta = 0.06300653026646674;
    msg.psi = 0.1891214545403067;
    msg.u = 0.3009071656740252;
    msg.v = 0.11181478687737578;
    msg.w = 0.2636462988310365;
    msg.p = 0.7283097622961158;
    msg.q = 0.7267513679022622;
    msg.r = 0.21045435116120015;
    msg.svx = 0.5637887666189185;
    msg.svy = 0.26434093276707216;
    msg.svz = 0.9359492496710726;

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
    msg.setTimeStamp(0.36397606548404826);
    msg.setSource(37148U);
    msg.setSourceEntity(14U);
    msg.setDestination(2964U);
    msg.setDestinationEntity(90U);
    msg.op = 31U;
    msg.entities.assign("GJQKPRXMNHSGFZZQWTEZNJAFCKMDDGVMLTOIDFIZVCGJDBWVWRRMXEGQNXMCGLENBOZCWQYMFALIYFFLRPYVRWUVVTXJHBUIKMZQWQBEUPUKZFWPOJHOBOSVHSYIYDKHLSPAORXWXUGJYGJLTKJAWSSNAKGPSXTPDGLTSDQKBABHCUHYEAUVOQRRMNNLZFWITULEALUSIPSDNKIDXIPOJXVBTB");

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
    msg.setTimeStamp(0.8019751441907934);
    msg.setSource(65346U);
    msg.setSourceEntity(207U);
    msg.setDestination(19U);
    msg.setDestinationEntity(82U);
    msg.op = 28U;
    msg.entities.assign("WLLJKNILNGCACJWWPYDGOVBVKSUJSCRTAYKRVEZZMZCLXPELCGYBVJIVODSFQYLFXRXMZUHOCBAWIZKTPJVHVIKFZTKVJBBDNQUGGEAMVJURFZCIRNIHNNMNFSHPGRUOOL");

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
    msg.setTimeStamp(0.700551330851647);
    msg.setSource(61189U);
    msg.setSourceEntity(6U);
    msg.setDestination(19225U);
    msg.setDestinationEntity(48U);
    msg.op = 33U;
    msg.entities.assign("WJJLUIZKYVJNNYSCRVAESXULSHKKAKJIIBWYHNOCJHIOHFRHCDFHBITBCYRPUDEZBYVWCFGYSEMSULDLDHWMONGCAKRTEPXGRDGEBEMBLZSMZFUWQFMQDNQVVUNIODQGFMNEZKJTCLRFGXUYRIYD");

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
    msg.setTimeStamp(0.6668981933738262);
    msg.setSource(32055U);
    msg.setSourceEntity(26U);
    msg.setDestination(17831U);
    msg.setDestinationEntity(93U);
    msg.type = 106U;
    msg.speed = 52808U;
    const signed char tmp_msg_0[] = {-11, 51, -60, 44, 60, -58, -76, -44, -15, -90, 113, -103, 109, -41, -46, 109, 13, 98, -46, 109, 113, 110, -76, -40, 10, -3, 57, 32, 64, 31, -115, -36, 109, -96, -41, 107, -3, -106, -52, 117, 9, 106, -96, -86, 98, -61, -48, 19, 78, 31, -26, -61, -102, -70, -119, -9, 118, -103, -128, 46, 13, 79, -100, 68, -7, 46, 39, -61, 35, 37, -53, 116, 87, -58, 16, 29, -108, 115, -101, 54, -47, -24, 69, -100, 22, 89, 108, 3, 34, -15, -1, 83, -57, -30, 26, 120, 66, 29, 20, 38, -106, -109, 94, 14, -92, -2, -66, -109, 15, -3, 3, -96, -90, -52, 95, 100, -64, 105, -87, 84, -111, -3, 105, 114, 47, -71, -98, 85, -68, -111, 14, -27, 69, -105, 36, 60, -113, 101, 106, 54, -57, 46, -5, 51, -5, -101, 25, -67, 62, 92, 104, -30, -66, 121, 102, 67, 92, -109, 92, 75, 61, 83, -45, 54, -51, 106, 6, -114, -109, -105, 108, 12, -104, 115, 52, -72, 6, 99, 84, 107, 113, -99, 110, -74, -40};
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
    msg.setTimeStamp(0.19543428507922744);
    msg.setSource(60350U);
    msg.setSourceEntity(159U);
    msg.setDestination(15297U);
    msg.setDestinationEntity(170U);
    msg.type = 74U;
    msg.speed = 49323U;
    const signed char tmp_msg_0[] = {53, -48, -115, 114, -99, 44, 111, -61, 35, 38, -50, 78, 31, -28, -21, 25, -14, 118, 126, 102, -41, -70, -57, 78, 21, 111, 15, -74, 27, 11, -52, -86, 116, 26, 65, -39, -15, 117, -31, 59, -91, 30, 7, 63, -67, 7, 16, 43, 13, 60, -37, 111, -88, -61, 61, -47, 86, 58, 20, -85, -85, -12, 112, -110, -117, 81, -80, -35, 53, 59, -109, 35, 103, 75, 78, 1, 39, -8, -74, 31, -65, 12, -41, -110, -19, -4, -76, 46, -121, 34, 36, -17, -88, 47, -21, 18, 23, 58, -125, -76, -122, -51, 24, 100, -106, -39, 78, -109, -52, 111, 28, 77, 53, -77, 99, -113, 5, -34, -37, 86, -40, 37, 83, 22, -49, -83, -102, 30, 5, 93, -54, -50, 71, 48, 116, -32, -125, -15, 117, -104, 67, -54, -19, -79, -14, 41};
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
    msg.setTimeStamp(0.550344895415444);
    msg.setSource(27102U);
    msg.setSourceEntity(201U);
    msg.setDestination(51905U);
    msg.setDestinationEntity(254U);
    msg.type = 172U;
    msg.speed = 38463U;
    const signed char tmp_msg_0[] = {-56, -60, 98, 5, 106, -24, -2, -101, 117, 100, -16, -30, -121, -82, 100, 100, 99, 53, 62, 67, 17, -38, -72, 25, 74, -117, 89, -102, 26, 86, 13, -18, 76, 66, 81, -114, -21, 118, -99, 121, -14, 60, -64, -119, 88, -67, 99, -55, 101, 100, 17, 43, 33, -66, -2, -96, -47, -117, 106, 52, 98, 38};
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
    msg.setTimeStamp(0.9547449288856897);
    msg.setSource(55601U);
    msg.setSourceEntity(161U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(129U);
    msg.op = 187U;
    msg.tas2acc_pgain = 0.36608770595459517;
    msg.bank2p_pgain = 0.0844543625790215;

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
    msg.setTimeStamp(0.32291511798043004);
    msg.setSource(42293U);
    msg.setSourceEntity(235U);
    msg.setDestination(5636U);
    msg.setDestinationEntity(228U);
    msg.op = 187U;
    msg.tas2acc_pgain = 0.5814783083821724;
    msg.bank2p_pgain = 0.8192456826408339;

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
    msg.setTimeStamp(0.9369588234759119);
    msg.setSource(45814U);
    msg.setSourceEntity(167U);
    msg.setDestination(48735U);
    msg.setDestinationEntity(177U);
    msg.op = 211U;
    msg.tas2acc_pgain = 0.19141823482319054;
    msg.bank2p_pgain = 0.29726723980090575;

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
    msg.setTimeStamp(0.06536451041171898);
    msg.setSource(12039U);
    msg.setSourceEntity(176U);
    msg.setDestination(12547U);
    msg.setDestinationEntity(242U);
    msg.available = 1764736839U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.03055402329441348);
    msg.setSource(10123U);
    msg.setSourceEntity(108U);
    msg.setDestination(50998U);
    msg.setDestinationEntity(32U);
    msg.available = 2568143003U;
    msg.value = 39U;

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
    msg.setTimeStamp(0.4259432885760047);
    msg.setSource(58068U);
    msg.setSourceEntity(190U);
    msg.setDestination(6627U);
    msg.setDestinationEntity(6U);
    msg.available = 3090388366U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.18308003343565804);
    msg.setSource(24473U);
    msg.setSourceEntity(134U);
    msg.setDestination(48943U);
    msg.setDestinationEntity(19U);
    msg.op = 52U;
    msg.snapshot.assign("JPSFZQCQWUCRPINQNNBXSLOQQZSYEOYDFWGVZTOJKDMBFZTWGWJSYJCXTIHCLEKVLHSEYMFKNBYTZTKOKFNIICFHRRQAMTOKVULKACFDNAKOROVXBZPZSFEBCUHDEVEA");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8580663846513076;
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
    msg.setTimeStamp(0.865842711715727);
    msg.setSource(46104U);
    msg.setSourceEntity(21U);
    msg.setDestination(42523U);
    msg.setDestinationEntity(3U);
    msg.op = 42U;
    msg.snapshot.assign("MUZVGSXRZEGIRSWKXTHSAQILLLTESYXXBVZWPOJVGVLI");
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 37527U;
    tmp_msg_0.type = 176U;
    tmp_msg_0.tow = 3221308872U;
    tmp_msg_0.base_lat = 0.44189613489746327;
    tmp_msg_0.base_lon = 0.2205024873578565;
    tmp_msg_0.base_height = 0.26516729942498174;
    tmp_msg_0.n = 0.11891268547096023;
    tmp_msg_0.e = 0.03098618935833497;
    tmp_msg_0.d = 0.8197216347248168;
    tmp_msg_0.v_n = 0.4204732233455183;
    tmp_msg_0.v_e = 0.5488788853570791;
    tmp_msg_0.v_d = 0.408630968678915;
    tmp_msg_0.satellites = 56U;
    tmp_msg_0.iar_hyp = 59072U;
    tmp_msg_0.iar_ratio = 0.755897063096828;
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
    msg.setTimeStamp(0.7429851309774537);
    msg.setSource(55973U);
    msg.setSourceEntity(215U);
    msg.setDestination(4843U);
    msg.setDestinationEntity(214U);
    msg.op = 155U;
    msg.snapshot.assign("HJGSCCNGUKJFCKEEYIEBJUDCXFWUXVPRJMQELJWEIFGSZMEHNTFGCSSLFIZOTLBQAHKWIXXGDUUPSUWHYKOEPLGMQOPLLAMNYTDSVRHDANWUWDQCLSMNLICVQPRTMBXMBPNMKQNGJYPXODVFVBXFYFZAVALEGZWOUATTCJKCTRZHOOZDDKRNSSOXZFKRIUXJRJOVUHTMQZE");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.7898638967801488;
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
    msg.setTimeStamp(0.08762576422709212);
    msg.setSource(55797U);
    msg.setSourceEntity(198U);
    msg.setDestination(1006U);
    msg.setDestinationEntity(205U);
    msg.op = 242U;
    msg.name.assign("LGETMUUTYKPLEKWGRVIYOSOFWQ");

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
    msg.setTimeStamp(0.20780050912224624);
    msg.setSource(49147U);
    msg.setSourceEntity(251U);
    msg.setDestination(23111U);
    msg.setDestinationEntity(98U);
    msg.op = 137U;
    msg.name.assign("JYVGKPTLUHLXDMYPYSZOUIYQLDTSRONZFKZUWISIISHIPXXZKNRXNEYFOVALOJQQQGWKRIDJNIEKZBTJCYKWDRRCHPNBJGFPECZWTAGD");

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
    msg.setTimeStamp(0.8018659104841609);
    msg.setSource(21501U);
    msg.setSourceEntity(157U);
    msg.setDestination(61344U);
    msg.setDestinationEntity(161U);
    msg.op = 108U;
    msg.name.assign("DJXFPVWOGSEFWREHFTOIWNS");

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
    msg.setTimeStamp(0.08504291537286102);
    msg.setSource(27464U);
    msg.setSourceEntity(109U);
    msg.setDestination(36070U);
    msg.setDestinationEntity(238U);
    msg.type = 164U;
    msg.htime = 0.8789712876394283;
    msg.context.assign("WKUCIBJMHMDVMXRWSQOV");
    msg.text.assign("IJAXOLLODOOKVLATEHSYYLVDHGPYPNTGFAAXNWCDMMNVZPRYBHHEWCNCYSFICWPVGEUCWBCITHUHKVSSYMTDNODANUVKGWYU");

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
    msg.setTimeStamp(0.725006031978445);
    msg.setSource(17163U);
    msg.setSourceEntity(43U);
    msg.setDestination(35767U);
    msg.setDestinationEntity(117U);
    msg.type = 39U;
    msg.htime = 0.4325234128315909;
    msg.context.assign("JBWMSXXMXZVSAHBFTLMWQGRWVGCWZBAUJJFLCQBTVTVTOUVUNZRIZVXJHFUQIYHDDQTQJXCDFRYFLUELNPKBCLRBDMYZYPEXCPYGLANVSNUPXJSANTGSJHBSSGREOKRCIZIIOLWGDWABCOPUKCWREOGWMALVXMWK");
    msg.text.assign("APWVDCNZYRHFLWMWBUIDBQRGODWELNJOJWKSEAEHASLDTVGPNQULSVHFZGMMUZCKQJIPXEQEAMAEOTZSRZXOKIYGFLCGBISCPTPDQMHISJCFRDMPVTFBVQOAZNPYGUTJQXXFBTNLXXCHXJONLMDQPUEKMBUHTBHZORSRUPGSSJZKGXBEWCYVSFAJTRTERKQJGVCYUIORIDCPWNLNZFWWAWUOUCLTIRHA");

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
    msg.setTimeStamp(0.348160587595681);
    msg.setSource(40630U);
    msg.setSourceEntity(145U);
    msg.setDestination(32697U);
    msg.setDestinationEntity(158U);
    msg.type = 154U;
    msg.htime = 0.9506568444637528;
    msg.context.assign("UJPRNHCWILRDTXFCYPVTZBZUASBMRDYRELYSPHRDOHFFYJQJHLRYBMSAGWNOXWBMHEGFIWODSVAYSRVPGKPQPFVEIKEROATPXPQBFGUOGLTVXZKQZJAHWKLTMOKNIYTGTUZMAACNZXVUWJLDEJCFQVJQBIJSWOKMUNJDYXAKQEJYHUWORGNDDINQXXAFNYPFLTCMEQMTSELWC");
    msg.text.assign("TBAZVYJIRGVJSNWNCAQKLXUPRRWMMHAFOZQOEWCBYCVITAREYJLMFBDIOLSILNTAQYJYCCZYNBKVPMHTWVKKORFFPOJINNRGHNKNUJZUXHODWGEFJPJFXPLNUAWZIMMCKELADPWETDGHSDXXCULGGWLXJVOAFIQESSDSSQEDLGQKIQAEMSIRRMTBVPST");

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
    msg.setTimeStamp(0.6035371721517193);
    msg.setSource(7567U);
    msg.setSourceEntity(209U);
    msg.setDestination(21228U);
    msg.setDestinationEntity(39U);
    msg.command = 135U;
    msg.htime = 0.06741903345856382;

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
    msg.setTimeStamp(0.23881961680356645);
    msg.setSource(20643U);
    msg.setSourceEntity(45U);
    msg.setDestination(39317U);
    msg.setDestinationEntity(100U);
    msg.command = 51U;
    msg.htime = 0.6645124378601566;

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
    msg.setTimeStamp(0.442530215797981);
    msg.setSource(47125U);
    msg.setSourceEntity(143U);
    msg.setDestination(11876U);
    msg.setDestinationEntity(183U);
    msg.command = 241U;
    msg.htime = 0.4452316815935673;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 36U;
    tmp_msg_0.htime = 0.3625573674660836;
    tmp_msg_0.context.assign("RFCQYMNLHDLIRXFYVWZPZGA");
    tmp_msg_0.text.assign("RCXBQSEBPZHVIYQFFDCRIHLSGXXTEMIOJO");
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
    msg.setTimeStamp(0.9367117600768337);
    msg.setSource(19996U);
    msg.setSourceEntity(227U);
    msg.setDestination(48449U);
    msg.setDestinationEntity(24U);
    msg.op = 32U;
    msg.file.assign("FABCWNWSFXKAOUDOQJHVGCLXTGNNZNANLTQMGOCULPNAAIRFFVGFXKTTSEDRAMDITYPOBLCBYDSTLUPVIYHQSQAHZCYXOBJFLOEHGQNRBARZXWIXCVSQYSEECYPHYSJZOAPLJRFSXMHRNYXMTQNDMKLWYBXJFKWUUGFEKOENGVUVEBECDGQRTIFVEUGGMRRHQKEZZMJCUUZPPAJXJOWLBDIDITUQDVCHHTDPZIWHWWZBMPLPJ");

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
    msg.setTimeStamp(0.24012784691605715);
    msg.setSource(16440U);
    msg.setSourceEntity(237U);
    msg.setDestination(11915U);
    msg.setDestinationEntity(252U);
    msg.op = 78U;
    msg.file.assign("OCXXEXRVUSLOFAHDTIBDMIFWLLZSYMSRRBQLMUFPPKMGWJWDLXTTEQNVJACHTAZEDIUFOOEPKZHIUNRVOHGTSMIFIWQWULPGWBZFRBVOSVHMPJUPZYXLDNNCYYXGPIGUXZSKKJVHBDULYVYRMYQPDZDOYWWVDCERNSNJJTNJI");

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
    msg.setTimeStamp(0.9040462709238094);
    msg.setSource(63687U);
    msg.setSourceEntity(73U);
    msg.setDestination(11431U);
    msg.setDestinationEntity(210U);
    msg.op = 178U;
    msg.file.assign("AOXEHZNCATLTJNBPWJERBHGJEIRUVVYMNNMAWXHKDUGSVVSBITFMPQLLHCYAZQYUSEODBKREZTJUXMBUMOZJJVOPZGYLTSZVPYKONXGAIBCZWDRYAEQUIWJKFSCYMWMKFTSWXQXODCFLXIUXPZNJQHHAQTRCHFXPMPQRELNIBEDRQNZXFDTTWLYAQGRKDLUQKGYWBPHAOTFDVIECPUHEFMSKDCOVOSZPG");

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
    msg.setTimeStamp(0.07517509268957734);
    msg.setSource(31116U);
    msg.setSourceEntity(182U);
    msg.setDestination(12166U);
    msg.setDestinationEntity(130U);
    msg.op = 39U;
    msg.clock = 0.7572006493572455;
    msg.tz = -29;

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
    msg.setTimeStamp(0.5585352145675969);
    msg.setSource(47160U);
    msg.setSourceEntity(230U);
    msg.setDestination(4105U);
    msg.setDestinationEntity(180U);
    msg.op = 71U;
    msg.clock = 0.25643094775869246;
    msg.tz = -7;

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
    msg.setTimeStamp(0.6226038811551039);
    msg.setSource(48761U);
    msg.setSourceEntity(73U);
    msg.setDestination(38362U);
    msg.setDestinationEntity(71U);
    msg.op = 123U;
    msg.clock = 0.5483802833237674;
    msg.tz = -17;

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
    msg.setTimeStamp(0.373891771947108);
    msg.setSource(35147U);
    msg.setSourceEntity(216U);
    msg.setDestination(16525U);
    msg.setDestinationEntity(245U);
    msg.conductivity = 0.5286296401325835;
    msg.temperature = 0.26048920517105345;
    msg.depth = 0.5888591308294677;

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
    msg.setTimeStamp(0.7437110410604371);
    msg.setSource(6521U);
    msg.setSourceEntity(141U);
    msg.setDestination(19693U);
    msg.setDestinationEntity(203U);
    msg.conductivity = 0.7785333793741173;
    msg.temperature = 0.5711026007639076;
    msg.depth = 0.38106026263000936;

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
    msg.setTimeStamp(0.2774131122371586);
    msg.setSource(43695U);
    msg.setSourceEntity(103U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(76U);
    msg.conductivity = 0.2047260428745893;
    msg.temperature = 0.5849932928646993;
    msg.depth = 0.15130076744608822;

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
    msg.setTimeStamp(0.4526026836973176);
    msg.setSource(44622U);
    msg.setSourceEntity(86U);
    msg.setDestination(31122U);
    msg.setDestinationEntity(94U);
    msg.altitude = 0.7320722406326445;
    msg.roll = 16369U;
    msg.pitch = 47353U;
    msg.yaw = 7052U;
    msg.speed = -7404;

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
    msg.setTimeStamp(0.12586496335365138);
    msg.setSource(21793U);
    msg.setSourceEntity(218U);
    msg.setDestination(32280U);
    msg.setDestinationEntity(36U);
    msg.altitude = 0.987363607093463;
    msg.roll = 27144U;
    msg.pitch = 3205U;
    msg.yaw = 53294U;
    msg.speed = -5805;

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
    msg.setTimeStamp(0.536407999968817);
    msg.setSource(52100U);
    msg.setSourceEntity(212U);
    msg.setDestination(2563U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.855568023594164;
    msg.roll = 50817U;
    msg.pitch = 24975U;
    msg.yaw = 44728U;
    msg.speed = -27723;

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
    msg.setTimeStamp(0.1349408081083917);
    msg.setSource(58549U);
    msg.setSourceEntity(122U);
    msg.setDestination(12765U);
    msg.setDestinationEntity(105U);
    msg.altitude = 0.8999996354857629;
    msg.width = 0.028828941597759727;
    msg.length = 0.21304084042886717;
    msg.bearing = 0.2486586257215212;
    msg.pxl = -24399;
    msg.encoding = 221U;
    const signed char tmp_msg_0[] = {97, 125, -98, -26, -65, 31, 88, 19, -128, 4, -50, 114, -25, 6, -38, -16, 7, 37, -72, 96, -75, 60, 26, 73, -75, -87, -80, -53, -6, -93, 81, -43, 0, -80, -108, 124, 55, -6, -19, -71, -71, -110, -68, 59, 52, 33, -108, -128, -39, 98, 25, 56, 90, -57, 68, 13, -35, -26, 79, -55, 106, 0, 0, 78, 13, -33, 10, -52, -123, 75, -99, 121, 68, -87, -13, -57, 110, 36, 13, -44, 122, -21, 44, -72, -24, 20, 94, 74, -38, 8, 53, 27, -46, -100, -96, -58, 3, 113, 62, -103, -91, 57, -119, 102, 15, 19, 79, -24, -9, 104, 50, -20, -77, -125, -125, 90, -103, 82, 73, -79, 32, -96, 33, -34, -44, 45, -68, 27, 72, -55, 15, 97, -42, -41, 91, 26, -68, -128, -94, 56, 86, -27, -79, 29, 89, 87, 43, -119, -83, -93, 101, 53, 43, 66, -11, 36, -76, 53, -25, -106, 17, 58, -92, 114, 39, -2, -72, -115, -12, 19};
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
    msg.setTimeStamp(0.30056967443212423);
    msg.setSource(48548U);
    msg.setSourceEntity(50U);
    msg.setDestination(3935U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.646124815515638;
    msg.width = 0.7628554413890225;
    msg.length = 0.23912957843444982;
    msg.bearing = 0.5184643804744244;
    msg.pxl = -16036;
    msg.encoding = 150U;
    const signed char tmp_msg_0[] = {51, -86, 7, -118, 87, -17, 59, 16, 16, -2, 9, 66, 86, -102, -108, -64, -36, -12, 31, -29, -35, -40, -37, -100, 101, -73, 110, -92, 77, 108, 114, -91, -98, -36, 5, 101, -54, 26, -128, 18, 84, 82, 1, -64, 73, 88, 76, 3, -113, -19, -12, -101, -123, 99, 116, 72, 56, 2, 109, 1, -90, 14, -86, -94, -122, -79, 17, 111, -52, -95, 45, 93, 69, -34, -2, -32, -105, 36, 101, 42, 34, -118, 12, -119, -60, -82, -57, 26, 101, -121, 71, -13, 46, -32, 13, 66, -122, -30, 23, -20, 63, -89, 34, -58, -67, -75, 114, 66, 124, -116, 123, 82, -83, -57, -110, 40, -24, 15, -17, 108, -37, -44, -32, -91, 85, 121, -55, -28, 53, -108};
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
    msg.setTimeStamp(0.7437758943119007);
    msg.setSource(51754U);
    msg.setSourceEntity(52U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(37U);
    msg.altitude = 0.40956577111546555;
    msg.width = 0.48371227504712777;
    msg.length = 0.32323529215370816;
    msg.bearing = 0.3269389935841499;
    msg.pxl = 32755;
    msg.encoding = 160U;
    const signed char tmp_msg_0[] = {33, -37, -34, 15, 48, -66, -24, 12, 39, -1, 54, 3, 70, -57, 119, -65, -89, 38, 60, 2, -108, -45, 104, 9, 73, -89, -76, 3, 83, 24, -127, -27, -48, -24, -99, -128, 31, -11, -35, 27, 125, 69, 80, -7, -68, -11, 123, -13, -15, 95, -102, -127, 7, 34, -118, 48, 115, -31, -83, -5, -73, -57, 91, -99, 47, 83, 74, -70, 114, 88, 89, -95, -54, 22, 108, 125, -79, 41, 54, 89, 80, -109, 35, -44, 5, -86, 56, -125, 115, 44, 35, 16, 43, 22, 100, 24, 88, 59, -63, 111, -81, -33, -104, 65, -65, -30, -15, -21, -101, 27, 65, 25, -108, -62, 107, 4, 7, 79, 82, -26, 34, 70, 64, 14, 79, 20, -1, -73, 119, -61, -105, 112, -125, -40, -105, -17, 108, 90, -67, -115, -119};
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
    msg.setTimeStamp(0.7304080117627595);
    msg.setSource(4037U);
    msg.setSourceEntity(165U);
    msg.setDestination(25920U);
    msg.setDestinationEntity(56U);
    msg.text.assign("SWZLDODECXOQUVVYPMXTZSAKGTLGFUDHWKJLUTFVHPXYRGBXBKSSITAHRCJSUEECAENQJCPVVNJZQEEWGJPICGRZHXY");
    msg.type = 208U;

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
    msg.setTimeStamp(0.6746043643172284);
    msg.setSource(46023U);
    msg.setSourceEntity(117U);
    msg.setDestination(32340U);
    msg.setDestinationEntity(123U);
    msg.text.assign("QYFTLEQYLYWJGUYAVFNQOFHKEUZWXZLROWRDQUJSROQGBBAIVEPTEPRAKYLMJCYAUOFHCXVPPMWWLGLGXORSMBDCFXZVTSKHXLKXOBPBONSSMGWOHODAUYIUCNKEFXLTNVIIZVUXCYHBAETQVVTDFDIJZUBTDNEQCGSWCMMGIPPCRTHZSZEGJK");
    msg.type = 45U;

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
    msg.setTimeStamp(0.8186412069890894);
    msg.setSource(42540U);
    msg.setSourceEntity(87U);
    msg.setDestination(34000U);
    msg.setDestinationEntity(232U);
    msg.text.assign("BMEQOVQHLXGXVMIRSPUBHOYIKYCJXPEZCFKNTCONBTVMMKTPFPPQLTEPMRXIDJRJWLAAVXTRDFGRUODHYFHTUAWBVGJJTPLXNSDSZWENVOGORNLLFPVCCOYKCMIHWCJZNKQVXAXRIUSLAGWDLMZTMSEULYZDYUEJKBIJIZQUVEEFNFWCBRMXWNGAYKAOHHDPUPJUYFYDQZABCYDTNHGSWQQHGSQSXTHBFKDQSUJVZKWAMGC");
    msg.type = 96U;

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
    msg.setTimeStamp(0.3731057025343727);
    msg.setSource(43027U);
    msg.setSourceEntity(38U);
    msg.setDestination(61784U);
    msg.setDestinationEntity(39U);
    msg.parameter = 79U;
    msg.numsamples = 20U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 63341U;
    tmp_msg_0.avg = 0.1498138451576415;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5703028806082859;
    msg.lon = 0.43788617541248587;

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
    msg.setTimeStamp(0.59380391401978);
    msg.setSource(20263U);
    msg.setSourceEntity(45U);
    msg.setDestination(20933U);
    msg.setDestinationEntity(245U);
    msg.parameter = 203U;
    msg.numsamples = 4U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 64044U;
    tmp_msg_0.avg = 0.8050435185935554;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7465324753067866;
    msg.lon = 0.6259223288005931;

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
    msg.setTimeStamp(0.5739134271760256);
    msg.setSource(17970U);
    msg.setSourceEntity(93U);
    msg.setDestination(63885U);
    msg.setDestinationEntity(86U);
    msg.parameter = 173U;
    msg.numsamples = 234U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 20512U;
    tmp_msg_0.avg = 0.199669690951362;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.729560329945096;
    msg.lon = 0.33301981733040087;

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
    msg.setTimeStamp(0.24093036706308668);
    msg.setSource(56930U);
    msg.setSourceEntity(99U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(8U);
    msg.depth = 14937U;
    msg.avg = 0.19677948348507568;

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
    msg.setTimeStamp(0.0361264710638598);
    msg.setSource(37861U);
    msg.setSourceEntity(125U);
    msg.setDestination(14260U);
    msg.setDestinationEntity(120U);
    msg.depth = 58041U;
    msg.avg = 0.33745852672219034;

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
    msg.setTimeStamp(0.15545051335292837);
    msg.setSource(49196U);
    msg.setSourceEntity(192U);
    msg.setDestination(63171U);
    msg.setDestinationEntity(195U);
    msg.depth = 60998U;
    msg.avg = 0.18330584622143864;

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
    msg.setTimeStamp(0.13238806949453052);
    msg.setSource(54975U);
    msg.setSourceEntity(134U);
    msg.setDestination(38638U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.9155889025592409);
    msg.setSource(25593U);
    msg.setSourceEntity(31U);
    msg.setDestination(14913U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.0989582859636472);
    msg.setSource(49898U);
    msg.setSourceEntity(135U);
    msg.setDestination(38594U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.9641664930541354);
    msg.setSource(60049U);
    msg.setSourceEntity(40U);
    msg.setDestination(45449U);
    msg.setDestinationEntity(86U);
    msg.sys_name.assign("WKMEXGXJTADYXLUWTSCVQLDSSRBMUBLLECVIDDBOSJIGZZVNWGUFFFSPCBQAEPMCALCEYVEPEDIMJEYZYMQVQKNNZTHPGRTKBTKRLHBOQHOQDIPAZZTQNAJWVUSCTPUXYXWLOWNHMOJQGWPAFSHXFUUDMSRQIDOFFYVWKHWXGRGUSCXNLBPNZJAKOBJKMVELKVGGALRQIPKFZBRIACEZTUIMYOTFNRHFCSJJHROVKMXNUIYXPW");
    msg.sys_type = 89U;
    msg.owner = 58931U;
    msg.lat = 0.08296816470193358;
    msg.lon = 0.49317756619799713;
    msg.height = 0.08388694130456553;
    msg.services.assign("IEVDAEFOMWPXRJHPNULAJRZHYYQDAUSTGWFZURJWQMSNEZTHYJRULQARHNPPKCCYNBKIRUPVAQQQGMLWDYATIGOOGNSTMIMVLGHIDREVKBESAQQFJXUHBVNGFOXMIKEVKSZOZVQYDOTZSHJBFNLEXDKUNBZQBFHFCWLGKOXMXU");

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
    msg.setTimeStamp(0.1636876539655311);
    msg.setSource(14135U);
    msg.setSourceEntity(242U);
    msg.setDestination(58780U);
    msg.setDestinationEntity(116U);
    msg.sys_name.assign("APPNLSSMNBIVQPYQ");
    msg.sys_type = 192U;
    msg.owner = 14898U;
    msg.lat = 0.7799617335315605;
    msg.lon = 0.4201808647310127;
    msg.height = 0.9944894337109831;
    msg.services.assign("GDJZROZTRKTQNAUJQKSAIDHTVWQPPWQCVRYRKOQPJDEZTNSRFHLLMRXLPMVMOKGAUFCQXCCAEVUIWZHIOLHIGWZTVPKKBLNHMTTUXELASEDJX");

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
    msg.setTimeStamp(0.01796971882431786);
    msg.setSource(32634U);
    msg.setSourceEntity(198U);
    msg.setDestination(13857U);
    msg.setDestinationEntity(23U);
    msg.sys_name.assign("QGCEUCERWEHYPPNLLJQMJKQQEIREBOONFCJNBRDGDNHQRQMCYXGZYFKJAEMXICOAV");
    msg.sys_type = 39U;
    msg.owner = 26153U;
    msg.lat = 0.12535477797799566;
    msg.lon = 0.31685682486401245;
    msg.height = 0.7684779139076698;
    msg.services.assign("YVGEMFDYWAYUIUMRUPLJMHCORTIBLCVYENWSDQTTGGMAVZOEFYNQKYVPMSLVCEVQRSEUGSOHCAKBXKTJSZIDGOHPWHJFYHIXXOQEVSPJUNQZSBDMUXCLRRNKPEHBQOMGNRRLFMXPAEBZWLGDMTUOLDFABFVSZAALTGFOFQUQNPMJBIDEDNCHQWHVNDEXAIWJBWPCZLHWTAIYSHRQRDJXFIKKJZNOVGXJYIIT");

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
    msg.setTimeStamp(0.36810277662651614);
    msg.setSource(27688U);
    msg.setSourceEntity(14U);
    msg.setDestination(61306U);
    msg.setDestinationEntity(81U);
    msg.service.assign("TWYMZSJCZORGAKHENQFM");
    msg.service_type = 40U;

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
    msg.setTimeStamp(0.6782224040570102);
    msg.setSource(59800U);
    msg.setSourceEntity(179U);
    msg.setDestination(11533U);
    msg.setDestinationEntity(76U);
    msg.service.assign("BDFWTRGWAKIYDWSEMVAKOLNGPLXFQJODSVHLGLXATIOTUCHIYHNIQHBIFUNYFWAPVJMRECZTGGSWEUIVSZGUP");
    msg.service_type = 118U;

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
    msg.setTimeStamp(0.7211627176594494);
    msg.setSource(1606U);
    msg.setSourceEntity(149U);
    msg.setDestination(35061U);
    msg.setDestinationEntity(10U);
    msg.service.assign("SQLBSTABERIBGOZNGZWPPIXQGQUIQFHLAXWOCHOOIAXUWFRYEKJHBYFGNKFVEKILXNNRSGXUPTPVHYEURBDCKCXVAVSADABEYPYCMMITMLJJJBGYXGJQUEZSGLWDTJFYXPELAGDZWZUUOCCSHSMFLRDQKOQWLIIHATZLNFQNDSZQOESMVNRXKKKFNTJAWRHT");
    msg.service_type = 91U;

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
    msg.setTimeStamp(0.2948437682248337);
    msg.setSource(56523U);
    msg.setSourceEntity(171U);
    msg.setDestination(48177U);
    msg.setDestinationEntity(107U);
    msg.value = 0.7880413984778598;

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
    msg.setTimeStamp(0.9055198205329003);
    msg.setSource(46730U);
    msg.setSourceEntity(98U);
    msg.setDestination(19107U);
    msg.setDestinationEntity(179U);
    msg.value = 0.8886083880923238;

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
    msg.setTimeStamp(0.9364214115896168);
    msg.setSource(30944U);
    msg.setSourceEntity(73U);
    msg.setDestination(10996U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8093959334674872;

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
    msg.setTimeStamp(0.9499163296790882);
    msg.setSource(44167U);
    msg.setSourceEntity(26U);
    msg.setDestination(65064U);
    msg.setDestinationEntity(158U);
    msg.value = 0.2204987456687213;

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
    msg.setTimeStamp(0.7891353572531404);
    msg.setSource(24406U);
    msg.setSourceEntity(232U);
    msg.setDestination(61237U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6215899899881915;

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
    msg.setTimeStamp(0.17907469023170042);
    msg.setSource(60987U);
    msg.setSourceEntity(76U);
    msg.setDestination(18578U);
    msg.setDestinationEntity(224U);
    msg.value = 0.43691610397919256;

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
    msg.setTimeStamp(0.9986275183285334);
    msg.setSource(9471U);
    msg.setSourceEntity(187U);
    msg.setDestination(56045U);
    msg.setDestinationEntity(193U);
    msg.value = 0.16896650194465546;

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
    msg.setTimeStamp(0.6902043619227001);
    msg.setSource(63873U);
    msg.setSourceEntity(177U);
    msg.setDestination(42652U);
    msg.setDestinationEntity(162U);
    msg.value = 0.6389660277941868;

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
    msg.setTimeStamp(0.2574989974604973);
    msg.setSource(50816U);
    msg.setSourceEntity(241U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(168U);
    msg.value = 0.0943582631287958;

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
    msg.setTimeStamp(0.4597586539061741);
    msg.setSource(25489U);
    msg.setSourceEntity(195U);
    msg.setDestination(48581U);
    msg.setDestinationEntity(132U);
    msg.number.assign("TCJAAETLNUPPBGJAOBMGVGOCEROFARCVXWWJLOEGOGKDXVY");
    msg.timeout = 32016U;
    msg.contents.assign("KJTHGMHGPUH");

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
    msg.setTimeStamp(0.8370863728926555);
    msg.setSource(35229U);
    msg.setSourceEntity(38U);
    msg.setDestination(53280U);
    msg.setDestinationEntity(58U);
    msg.number.assign("UCIZMAKYFMVIFUNFSMYLS");
    msg.timeout = 19622U;
    msg.contents.assign("PFBCCTSPHMWCQVUNMKMAYPGARPDRBAFIVMGJECWAXVQZHKXEFBUXYVNQRALYSLSJBWBOSJVYMTCXHRKUSFFLOIVYWJVXQYLGADHSXLTNTRQZKSKDBOQQGCUVERPZWDIEUINPWEYZLCWFGKXDHYNYQDRKO");

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
    msg.setTimeStamp(0.8479338432139099);
    msg.setSource(441U);
    msg.setSourceEntity(9U);
    msg.setDestination(16617U);
    msg.setDestinationEntity(205U);
    msg.number.assign("NHABCYIQKMVMUIZOPBBVRLZXTEBCIZJNBQSPODHUXWSFGNSQRGNBAVUHEQIQJZDAESWDEGAFZVBELXVFKZVQCIYAWXVFCZOOSPRPIOAXQLRUWCRDHAXEFGVDMLUTPKRWLDHSQEJNPMIDWFMGKGJMPRKZGTEUUCY");
    msg.timeout = 1704U;
    msg.contents.assign("SZLRJUXMAIVSTIWREKYOQQLCDJLEWUJRSULAFIIBZQYUEGZAVGIHHPFWOSNBXEYWMQMY");

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
    msg.setTimeStamp(0.4872836618007952);
    msg.setSource(61500U);
    msg.setSourceEntity(68U);
    msg.setDestination(30583U);
    msg.setDestinationEntity(125U);
    msg.seq = 3952827351U;
    msg.destination.assign("MLROKLTQLXYWRQSHZMVVUZYSKGPKOPYVCQMIMHTGOJJCQEHKNEURDACPTFEXGXJGTHGVUOOAHMEVURBSPINZY");
    msg.timeout = 36695U;
    const signed char tmp_msg_0[] = {-63, 2, 124, -7, 37, -47, 37, 76, 77, -60, -121, 12, -89, 120, 99, -112, 22, -108, -21, 113, -79, -82, -92, -119, -74, -69, 91, 1, 59, -36, -54, -48, -60, -51, 59, -95, -32, -66, -39, -17, -43, -9, 3, -118, 101, 53, 56, 50, 47, 48, 116, -101, -100, -27, -24, -107, -100, -38, -33, -76, -66, -11, 5, -30, 67, -80, -43, -30, -96, 36, -61, 118, -37, 91, -4, 11, 38, -16, -11, 47, 56, -27, -21, -32, -5, 126, 79, 56, 8, -107, 88, 12, 122, 107, -64, 115, -125, -75, -65, 54, -69, -85, -78, 13, -84, -103, 110, -67, -96, -115, 45, 125, -90, -107, 114, 112, 17, -108, 18, 13, 119, 93, 29, -30, 46, -20, 28, -119, 60, -1, 100, 118, 12, -65, -110, 51, 56, -85, 94, -23, -67, 87, -126, 116, 115, 63, -4, 19, 65, 37, -87, 87, -123, 18, -53, 14, -56, -26, 101, -30, 121, -39, -38, -46, -9, -44, 8, 13, 88, -40, 101, 66, -94, -109, 13, 23, -27, -79, -40, 35, 89, 116, -39, -40, 69, -1, 84, -17, -93, 90, -48, -126, 47, -16, 86, 95, -47, 90, -91, 110, 16, 95, -9, -48, 32, -56, 61, 110, -33, -116, 122, -63, 16, 38, 9, 52, -21, -128, 121, 90, 17, -50, -21, -38, 72, -118, 71, -70, 71, -73, -85, -56, 58, -118, 100, -59, -26, -93, -6, -38, 94};
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
    msg.setTimeStamp(0.8597049016008675);
    msg.setSource(26418U);
    msg.setSourceEntity(239U);
    msg.setDestination(61048U);
    msg.setDestinationEntity(238U);
    msg.seq = 1784237791U;
    msg.destination.assign("TOXFXICPVIRHJYFLTFIVDYPQWBSIKMOKACKHROTGOSCKEGDJLBRWNFSDCGPKUALEETIMYJJXQRFQZNWOXVDFNGLSWHWSYPJJCKINQAJYQAYPRHFDZXWTQLDUKZUPDMNZSYFUXWPOPMINNSRXDMBRCKMCLBZDTJTMUXBGNQRMWBBVGVYCLCUBWNOHEP");
    msg.timeout = 61387U;
    const signed char tmp_msg_0[] = {85, -79, 96, -27, -68, -93, -107, 57, 0, -21, 55, 30, -15, 124, -74, 98, -22, 77, 70, 72, -90, -34, 31, 1, -110, -38, 68, -78, -30, 61, 10, 80, 76, -117, 74, -12, -20, 97, 95, 4, 91, 96, 80, -116, -108, 30, -4, 11, 15, 25, 99, 109, 117, -68, 106, 94, -80, 35, -74, -61, -2, 55, 10, 65, 124, 58, 65, -41, 57, -6, 95, 66, -42, 122, -88, 48, 122, -16, 74, 84, 60, 96, -128, -128, -44, 3, -46, 37, -118, -54, -114, 85, 50, 96, -28, 93, -124};
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
    msg.setTimeStamp(0.583073023386137);
    msg.setSource(21909U);
    msg.setSourceEntity(175U);
    msg.setDestination(34242U);
    msg.setDestinationEntity(234U);
    msg.seq = 2925246790U;
    msg.destination.assign("XYHUTSVITITZMVLXSQLALPJDBODBHQCROHJBARQNVWHHQUARQMEOXSMSBDMCGUBPKTGUEFACWYMLSPYECCNVAFHEAOBKF");
    msg.timeout = 47817U;
    const signed char tmp_msg_0[] = {95, -115, -109, 78, -114, 80, 83, 78, 111, 30, -104, 76, -27, 113, -115, -46, 90, -22, 56, -91, -1, 101, -55, -83, -70, -116, 26, -121, -110, 48, 19, 112, 74, -61, 39, -104, 108, 103, -96, 88, -97, 31, -61, -64, -93, -22, -16, -18, -110, -11, 20, 109, 34, -23, 93, -6, 119, 11, 23, 64, 110, 12, 88, -97, -109, 37, -58, 73, -69, 114, -96, -50, 11, 59, -65, 14, -56, 34, -12, 46, 106, -79, 45, -65, -11, -57, -93, 71, -55, 4, -15, -50, -34, 85, -29, -58, 55, -108, -51, 5, 2, -109, 103, -51, -87, -64, 58, -47, 44, 84, 104, 32, -59, 60, 33, 73, -68, 47, 89, 75, 80, -111, 98, -114, 24, 40, -34, 77, -20, -25, -45, 12, -15, -4, -109, -123, 124, 69, -75, 82, 84, 1, 38, 33, -8, -72, 57, -27, 82, 0, 82, 20, -8, 9, 105, -5, -94, 29, -104, -27, 66, 30, -91, 98, 8, -105, -72, -33, -47, 41, -123, 53, -2, 41, -75, -52, -57, 124, -31, -15, -79, -125};
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
    msg.setTimeStamp(0.49966949155136586);
    msg.setSource(40045U);
    msg.setSourceEntity(234U);
    msg.setDestination(49589U);
    msg.setDestinationEntity(248U);
    msg.source.assign("MUPHUVWXLDHDLGPIGUZBCNXTVGQQRLBBIDJONMUJNNHZMEJGIYRNLRTBACIBVCH");
    const signed char tmp_msg_0[] = {-105, 102, 31, 52, 113, -71, -89, -126, 20, 50, -123, 97, -117, 99, -38, -14, 93, -115, 24, 45, 54, 121, -69, -33, -51, 47, -105, 124, 23, 92, 11, -53, 37, -82, -127, -83, -90, 42, 66, 107, -26, 31, 102, -114, -37, -94, -116, 70, -95, 70, 78, -21, -115, 78, 7, 93, -69, 29, 117, 51, 116, -84, -46, -43, 126, 59, 80, -23, 116, 55, 16, -12, 76, 3, -112, 87, 59, -59, -4, -49, 19, -19, 78, -25, -28, -58, 69, 29, 9, 41, 11, -61, -46, 106, 94, -28, 34, 89, -95, 36, -122, 108, -5, -53, 103, -1, 70, 8, 115, -86, 77, 33, 13, 101, 82, -118, -94, -93, -72, -87, -74, 77, 125, -76, 34, 84, 74, 67, 65, -128, 71, -116, -34, -93, 110, 118, 79, -25, -71, -99, 9, 44, -91, 34, -38, 13, 119, -32, -126, -96, 48, 47, -39, 120, 13, -90, 5, -87, -73, -110, 22, -35, 70, 44, -98, 32, -63, -70, 123, 79, -35, -37, 123, 69, -68, -91, -69, 112, -23, 89, -107, 101, -79, 66, 23, -52};
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
    msg.setTimeStamp(0.4682640894955682);
    msg.setSource(49809U);
    msg.setSourceEntity(226U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(239U);
    msg.source.assign("SDOVBLMDHOVENPJSANXZDGQPWFPFOLCESGTJMEMJDBWZUYCFYLLSCNTECZAFIRIGHKBMQHQWUPF");
    const signed char tmp_msg_0[] = {-114, 100, -96, -64, -100, -18, 114, -20, -111, 34, 67, 119, -63, 57, 103, 79, 112, -19, -123, 74, -92, -70, -3, 95, 64, -128, 122, 89, -35, -95, 69, -126, 13, -122, 29, -93, 115, 108, -24, -40, -55, -127, 121, -1, 107, 114, 84, 42, 37, -73, -90, 27, 112, 83, 52, 57, -88, -100, -21, -61, 12, 59, -127, -113, -15, 55, 117, -60, 103, 125, -99, -75, 113, 32, 11, 3, -29, 76, -126, 75, 85, 91};
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
    msg.setTimeStamp(0.41358177477435953);
    msg.setSource(31499U);
    msg.setSourceEntity(168U);
    msg.setDestination(60364U);
    msg.setDestinationEntity(219U);
    msg.source.assign("GJRHQTDZULIVMHYVAHLLFXJQWIOEDOBVDCWHQZSYXBRLTWNKDBJFGOYZPEQMJEYXERXKGIQKILWTWBZXJMGFKSFCPRDSAOMWPIWSAQSYZMPCPIIIUTOXGQVHCUJVPRSTMWSRBEANBGTNUQXQZNSDDKUAFMAEYLMVEPFTRFBXVHTBLGTEMXIR");
    const signed char tmp_msg_0[] = {-109, -22, -128, 113, -110, 111, 25, 102, -103, 99, -22, 60, -92, 103, 59, -73, 41, -44, -65, -21, -104, 75, 74, -126, -26, -40, -60, 13, -56, 8, 117, 11, -44, -39, 117, 85, 7, 100, -78, 43, 64, -52, 7, 0, -128, -93, -89, -51, -5, 17, -22, -38, -114, 107, 46, -113, 126, 50, 91, -116, -55, 87, -108, 60, 88, -101, 24, 2, 116, 1, -50, -126, -22, -102, -61, 12, -52, -60, 2, -80, -56, -40, 8, 57, -2, 76, 7, 80, -73, 25, 43, 121, 89, -100, 33, -82, -105, -14, 103, 24, -105, -79, 115, 78, 70, 17, -124, -18, -60, 60, 105, -13, 115, 98, 87, 75, -74, -89, -80, 101, -75, 108, 118, 9, 27, -62, 70, -80, 19, 24, 25, 117, -54, -119, -71, 85, 76, 73, 32, -115, -57, 76, -4, -17, 17, -114, -12, -124, -69, -83, -65, 35, 22, 89, -98, 28, 78, 25, 86, -19, -75, -59, 102, -72, -122, 65, -123, -38, 33, 47, 81, -26, 26, 47, -72, -120, 114, -57, 58, 65, 84, -38, 103, 30, 60, 120, -80, 66, 117, 75, -57, -48, 70, -61, 85, 51, 91, 35, 5, 3, -126, -100, -48, 7, 121, 113, -45, 6, 18, -56, -19, 80};
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
    msg.setTimeStamp(0.42887840236869634);
    msg.setSource(49800U);
    msg.setSourceEntity(41U);
    msg.setDestination(10981U);
    msg.setDestinationEntity(170U);
    msg.seq = 772238170U;
    msg.state = 22U;
    msg.error.assign("BYITLIXVSPAKDFKWBPRPDLIKNSSFKVTGYRBDEWTKWCIKRFDJVWEJPINRMPYVBAZNOLESFTMZHYNUGUTJCAOUXQKPGQOFHSYGFOYVPOIXPEFKJOZBMVRUZXJ");

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
    msg.setTimeStamp(0.22085790951370843);
    msg.setSource(43980U);
    msg.setSourceEntity(20U);
    msg.setDestination(60836U);
    msg.setDestinationEntity(40U);
    msg.seq = 3516526402U;
    msg.state = 227U;
    msg.error.assign("IOVCBRGPMGMNRCENUQPLJPTCFKFKVAEVIPQEQDJOKHZTGICVJYIMSXFVRWPKXA");

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
    msg.setTimeStamp(0.22932374463318528);
    msg.setSource(13507U);
    msg.setSourceEntity(226U);
    msg.setDestination(40278U);
    msg.setDestinationEntity(22U);
    msg.seq = 2405699459U;
    msg.state = 201U;
    msg.error.assign("EMHVUTCQESUUPARSIPLJBOPXKWKQGIRPFCZLCHSYZVWSYRUBEMAIIQZDAQEKOGEVOSUMRZGEFCROAFWWITKLDLPWNRKZYNBQJANYAGXVXMTOXAABONBOZGDHLTDFMMXGLWIDHZXKE");

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
    msg.setTimeStamp(0.43025632032162686);
    msg.setSource(57053U);
    msg.setSourceEntity(151U);
    msg.setDestination(13935U);
    msg.setDestinationEntity(177U);
    msg.origin.assign("XLKTBCNDBXBI");
    msg.text.assign("ZOOGTCEVXRFTCPCZMOHVZNAXNHZNRJJA");

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
    msg.setTimeStamp(0.5878701771253346);
    msg.setSource(19239U);
    msg.setSourceEntity(45U);
    msg.setDestination(43563U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("IKEMBAKPXWEBOKDHFVJRXWLGZWABANPMVBWJJAQPFEHZIWTYVXYQAWPQCBOFNHBEZUTOPGNLTHMXJPLVRTSASOCOLHKKQVFSXKYNLQDLDSZEGZCDRQMDGUSLFPMUJYXDIMXYFAOCBZZGOJNQEDMTZNZTQUWTSWDBXSYLCIVIJEJGUYPOHUPVRFYURRGYRMVBLKVKETNICXRIGHJRUMFUATKKNIN");
    msg.text.assign("XYGVVOLDCIZLPTFWFZUSVSNIONITHJJDZYJMNAZXXQCSHQWCKVGREEZOESOHPRGTQOVKMTNLPNCGMAPTLXRBAMWYRZDNZL");

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
    msg.setTimeStamp(0.8593779833171697);
    msg.setSource(65529U);
    msg.setSourceEntity(72U);
    msg.setDestination(62021U);
    msg.setDestinationEntity(29U);
    msg.origin.assign("OVWXBEUOJVTHITFMLSPRTKZGRIXETZKUPANNOLLEWCNXIRHDBNAEUPZMXOJPEJSQRTVWSUYICLRDIRPOUGYHURFYWUSPQNIVLGYKQCWDZBMGCFDWC");
    msg.text.assign("WFWTVJYYPMPDHFYHZQGDCMTZQP");

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
    msg.setTimeStamp(0.39180359175531343);
    msg.setSource(28979U);
    msg.setSourceEntity(102U);
    msg.setDestination(57456U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("EKIBVSWSORAJDGWLZYTGEMMADUJTWKQAXDXPAZGQRHXHJKALSXBVNNBBCVLMDPPUZRFBGQYEAOREKFAUOSSMFRMQKICSCGNPZDRPHILMNVEVLCQLWPACYQZOCIVXHTGVTOSWONWTNCUWVEFMBDDHWJZPUDJKMCVOZGOSXABFZNLBYFHEMYYCQKDJFYBUXTZUPGSTTXVBFOEPKJWEYTGLAHZFRMSXQNINDHNOJLHFIHRJKUTLPYIICYWEQ");
    msg.htime = 0.34165964438994;
    msg.lat = 0.8887505997002082;
    msg.lon = 0.9417887166608263;
    const signed char tmp_msg_0[] = {85, 10, 113, -58, 78, -127, 97, 3, -46, -81, -75, 72, 124, -79, 62, 58, 18, 126, 68, 1, 35, 108, -59, 51, 61, -80, 50, 78, 67, 91, 122, 36, -127, -44, 57, 100, 76, 67, 70, -85, 108, 103, 22, -100, 57, -93, -54, -75, 113, -27, 107, 102, 93, -21, -48, 91, 57, 107, -75, -94, 16, -70, -122, -17, 49, 107, 87, -112, -40, -107, -21, -112, 87, 35, 110, -59, -82, -119, -73, 3, 38, 57, 117, 118, -3, -70, 57, -23, 81, -68, -53, -64, -73, 27, -25, 77, -31, -14, -116, -51, -36, -32, 120, -86, 118, 24, 61, -94, -27, 3, 12, -80, -127, 76, -41, 16, -87, 17, 104, 52, -10, 88, 28, 55, -62, -36, 24, 30, 7, -50, -42, -85, -77, 72, -37, -44, 42, 94, 74, 120, 116, -90, -37, 126, 48, -91, 110, -76, -9, -70, 60, 83, -102, 22, 112, -43, 34, 36, -28, -29, 113, -74, -91, 75, -11, 30, -72, -41, 65, 55, 96, 32, 27, -4, -122, 121, -54, -124, -76, 2, 24, 35, -53, 10, 64, -109, -110, 48, 85, 5, -61, 69, -38, 54, -14, 119, -84, -36, -87, 29, -74, -2, -114, 91, 82, -81, -117, -13, -54, -112, -83, 17, -22, 83};
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
    msg.setTimeStamp(0.4755441693183714);
    msg.setSource(52008U);
    msg.setSourceEntity(165U);
    msg.setDestination(55511U);
    msg.setDestinationEntity(185U);
    msg.origin.assign("YLAIVMRAQZQFOKAMTSTRDMEFAGSLPCHHCMYVVJWDPDOHQLOIGGKSNNOSGPBCPCDJAQTN");
    msg.htime = 0.3597926425338265;
    msg.lat = 0.3807602422791154;
    msg.lon = 0.304663205693917;
    const signed char tmp_msg_0[] = {20, -4, -75, -112, 53, 76, 50, 123, -64, -64, 49, 14, 64, 55, 81, 4, -47, 100, 71, -115, -27, 102, 66, 98, -107, -127, -9, 1, -47, 116, 50, 33, 20, 33, 66, -31, 26, 31, 88, 125, 47, 96, -85, -23, 21, 21, 5, -39, -34, 22, -83, -56, 91, -28, -88, 13, -95, 52, 86, -6, -49, -107, 15, 95, 102, 93, -34, -122, 122, 76, -71, -94, -93, -127, 42, 107, -110, -57, 99, -108, 67, -101, -120, 112, 123, 105, 89, 80, 59, -37, -35, 84, -35, 86, -99, 84, -79, -86, -25, 80, -80, -52, 9, 29, -40, 102, 3, -116, -118, 48, 72, -48, 76, 82, 49, -94, 67, -118, -125, -53, -28, 98, 61, -105, 89, -27, -80, -10, 1, -125, -92, -48, -120, 86, 110, -117, -38, -111, -53, 60, 92, -17, -110, -54, -123, -126, -71, 107, -113, 18, 89, -107, 100, 90, -79, 49, 114, -45, 109, 66, -74, 125, -17, -6, 98, 97, 103, -114, -46, 114, 54, -116, 58, 45, -117, -98, 119, 16, 99, 17, 78, -46, -125, -110, 90, 67, 115, -27, 3, 15, -69, 68, -55, -59, 53};
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
    msg.setTimeStamp(0.472137555785731);
    msg.setSource(59796U);
    msg.setSourceEntity(187U);
    msg.setDestination(7499U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("NZJVPGSFHMMUAJPEVAHAVCDJWIPUPLZMECROVVE");
    msg.htime = 0.9910516860377995;
    msg.lat = 0.5706174224873022;
    msg.lon = 0.3733860850999565;
    const signed char tmp_msg_0[] = {-11, 12, 0, 106, 15, -48, -76, 82, 48, -94, -103, 63, -31, 110, 29, -99, -104, 105, 54, -92, -90, 27, -96, 107, -8, -38, -48, -112, 6, -67, 104, 31, 25, -125, -43, -105, 104, -101, -13, -111, 84, 58, 53, -67, 122, -80, 96, -58, -119, 16, -94, 62, 88, 32, 19, -47, -128, -63, 65, -31, 20, -16, -27, 83, 67, -73, 38, -91, -30, -82, -112, 109, -95, -43, -104, -63, -108, 53, -22, 44, -36, 65, 105, 46, -111, -102, 103, -23, -63, -46, 9, -23, 86, 72, -68, -79, 110};
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
    msg.setTimeStamp(0.30780789138882647);
    msg.setSource(311U);
    msg.setSourceEntity(124U);
    msg.setDestination(29799U);
    msg.setDestinationEntity(141U);
    msg.req_id = 58413U;
    msg.ttl = 9923U;
    msg.destination.assign("KXTJLPUACQPVLCQEJWOFWHNPDKUKKDVBFLDIYOMXNSOXWRPGBMCVUYOIKWZSYMUISYMHELEJDUOWRFGAAXDVPRBMFFOCKCRHNZCWZZBIQUISGNIDGNYHJLOQGBHCTHEYQVTYQBEPXJKCMSXSJZBNPCNWFEUIVRTYX");
    const signed char tmp_msg_0[] = {-83, 124, -66, -44, -125, -42, -75, -45, -40, -68, -73, 124, -44, -102, -38, 59, 40, -101, 45, -4, -80, 44, -78, 57, 89, -35, 14, 6, 28, 19, 57, -63, -41, -92, -86, 90, 87, -101, -48, -34, -104, 46, -42, -4, 121, -48, 111, -57, -115, 36, -70, 32, -54, 111, -74, -1, 74, -46, 42, -35, -102, 20, -84, -4, 86, 3, -13, 113, -37, -23, 20, 29, 70};
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
    msg.setTimeStamp(0.2329268016442776);
    msg.setSource(24227U);
    msg.setSourceEntity(116U);
    msg.setDestination(16757U);
    msg.setDestinationEntity(84U);
    msg.req_id = 2306U;
    msg.ttl = 65165U;
    msg.destination.assign("TWMZSJHIGETIOLWEXINCPMHGISXBDLWOWMGYOPUKSSZDQIOXARBKGLVZWZYZQEEEIUEQBIAXYVHMPQSLGUHDU");
    const signed char tmp_msg_0[] = {-113, 18, 42, 31, 16, -120, -8, 24, 36, -98, 122, 113, -86, -14, 113, -3, 107, 46, 11, 119, 111, -110, 87, 26, -80, -14, -21, 39, 119, 106, -34, -51, -52, -93, -68, -105, 99, -53, 1, -51, 41, -10, -116, 85, -122, 64, -42, 108, 55, -53, -94, -82, -32, 26, -66, -94, 14, 92, -23, -120, 86, 96, -95, 58, -12, -122, -13, 109, 63, 21, -43, 100, 39, 23, 57, 13, 81, -37, 84, -42, -96, -97, -125, -40, -44, -125, 64, -65, 12, 16, -22, 66, -32, 42, 82, 95, 60, 73, -1, 104, 43, 70, -124, -117, -73, 23, 38, -36, -83, 14, -8, -75, 29, 101, -122, 104, -105, 113, 93, 116, -62, 116, -103, 53, -23, -45, -12, 103, -33, -45, 120, -99, 62, 0, 40, -8, -35, -122, -108, 4, 42, -120, 125, 100, -18, -125, -123};
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
    msg.setTimeStamp(0.8699431869805184);
    msg.setSource(60627U);
    msg.setSourceEntity(198U);
    msg.setDestination(36995U);
    msg.setDestinationEntity(11U);
    msg.req_id = 55493U;
    msg.ttl = 45744U;
    msg.destination.assign("TTZSZIHLKPVGXMDFIBWHFQWBUSZHXWHUFRBSRMFIKDAWYZCNRJOBFBUUMFZLDDBHYMACPEQOLLUKZVYZKELQFHAEFAEYXTSTKPYIQPKFVGQDMOSLGXIJVNYCUITSCORAYOZXPMRMVFMRG");
    const signed char tmp_msg_0[] = {26, 72, -61, 84, 55, 104, -33, -38, 30, -40, -109, 1, -6, 17, -76, -35, -100, 50, 66, -57, 15, -64, -103, -3, -45, 25, -61, -61, -72, -67, -43, -120, 52, -43, 63, -75, -102, 101, -20, 11, -29, -48, -12, 123, -97, -36, 0, -128, -31, 94, -10, 16, 40, -67, 40, 33, 95, 95, -17, 114, 94, 8, 22, 107, -34, -79, -88, -87, -110, -69, -86, 40, -40, -37, 117, -18, 89, -118, 15, 116, 1, 119, -2, -37, 45, -97, 34, -115, -99, -85, -90, 82, -55, -34, -90, 81, -36, -100, -8, 70, -85, -124, 63, -70};
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
    msg.setTimeStamp(0.609430866384941);
    msg.setSource(25879U);
    msg.setSourceEntity(214U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(155U);
    msg.req_id = 10820U;
    msg.status = 103U;
    msg.text.assign("ZNSXYRYGURIMJOFWHPQKVABBOWGXKHUBEYEUALQNIHNDHRVCGMVEUORYUPKFIXTRJHWKPAJUQSSDLKIDOGVTNXGDPNOCGNRUQDLMLLIFQSNBCCQPSMOBTKGIWEKSZFQNAGEQZXHFAJYCJCLVWAATXGYVPIRCHPKFUXULTOEHIOMLWHKFXQVTJKFEVWFPMMZHDTDRWTMBWTRSJZTYZBIVWMXLNYOILABGYDJSDAFRYNCDAQEBOXSZPC");

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
    msg.setTimeStamp(0.5412554987721638);
    msg.setSource(24240U);
    msg.setSourceEntity(119U);
    msg.setDestination(49413U);
    msg.setDestinationEntity(225U);
    msg.req_id = 51776U;
    msg.status = 80U;
    msg.text.assign("PPFVQTOYZKYABGDBIEYPIQWLXNCTUWCKVZLPALFYSKCANEDJJSZANBYNHMEHFVJKQNHRVCYJMSFOWEFBTONELNPQKQBVQTZEOLYMAOLBSLRSHADHJCOWRCU");

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
    msg.setTimeStamp(0.8903546157826927);
    msg.setSource(51643U);
    msg.setSourceEntity(113U);
    msg.setDestination(47512U);
    msg.setDestinationEntity(223U);
    msg.req_id = 60876U;
    msg.status = 103U;
    msg.text.assign("CHNNAZXBEQVJAGWTENFSWOVCJIFWNYHQXYIMAVBKQFYHLERZNEGCPTVPMUTXUTASCBFDCPRDPSUJCKOKLLFQDGNDPYYSVEOWSWCUDOZQDAJLRAAHMYJGCMOCXZTVCRALRFQOGKSQMLSPAOPEOEBRYRKRTOJZKFQDUTGFWMMNQVLWPZDKVNLIPJWJHJJBKTBVRAOKIYXIHGQUBUMZEPSWFMIFHGXWVDXBKBEZNSTLBX");

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
    msg.setTimeStamp(0.2282263765898045);
    msg.setSource(47517U);
    msg.setSourceEntity(243U);
    msg.setDestination(23223U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("PYJMGGYWQOSTLOAOULADHFAIMSDPQQVXITBSEDFKDBWMOLSIVBWDTVORVGOHFRNBNBONAWZJBYVICQQJPXXQUAELWGCCOXHYFTEWXJTYHPANDKGWRJUCXCYNLBSXPIIHERIYQPMECNKFHCKODJIZRIXWVGTKZZJSLSRZMBWTQXMKGOJGMNMUERJZKFJKVEYLNFDWSYMUNSPPPMKTBQETGGHLRDVUHDQHYC");
    msg.links = 4067219563U;

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
    msg.setTimeStamp(0.07771508294395879);
    msg.setSource(65100U);
    msg.setSourceEntity(220U);
    msg.setDestination(63811U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("DONTJGJJXIOHTQPNPVJMHTNHALBXQSKPCUAECVLSLADXTWPQMDLRMYERMBIPHVMDXARHCFMRNZOBYYRFZNHXUBQTREJUTQFEZSUSLGRTICCHHLTUBKKWKKSCCSMFKICYRHTFKXODDOZPVFQUESIVBEBDBJFTHYZYDOJSOYXJYAVYGIGWEEMKZAIVAIAVZXXCGSNRWWODKLERGLXYJLOAGWUUMAIZOUPNGFZ");
    msg.links = 1044858963U;

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
    msg.setTimeStamp(0.5614307319411662);
    msg.setSource(60630U);
    msg.setSourceEntity(140U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(164U);
    msg.group_name.assign("ROFSSARYXXOYNLCDXBZYENLOTKULBWMHKJMVMNLZFLBSTYQPZKSVOXFPRHWUUCJFEGZJIGGUWIUXZMEKECNSY");
    msg.links = 3553734782U;

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
    msg.setTimeStamp(0.8023573290256344);
    msg.setSource(52411U);
    msg.setSourceEntity(9U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(66U);
    msg.groupname.assign("BDNUYCPPLWTIJJKHJQHWAEYZKJYOKDBSZMDBQMWLTVLFWCFGZGREAMXPXQTUHEXRNVPMJTDXRFTCUDCPUUEGWYHKUAKVIYVNJZHQDNDCFLTJOSFUHCXEGCMEAMOLTYZHZGWNFBMTMEXAIAFQIAMOLOSSQQOSYAKDJDILKSWKIGREFWXOXGHQCCEAVBIZLBY");
    msg.action = 239U;
    msg.grouplist.assign("VPKDYLXDGQBWFXVTYNHKOZTKDSNEWGUGUEXLOQLEBICNDUIMIOPMSSZCMSCSARNFKMFOJERBBGRORQHYGLBIOCGRCFPMMBQTJNPOZTGAPKLYPOAGXSHUEEOKUQWXEUCLZHSYRKJFMIBCXKZXWXUYBWASSBHIDWDAWTRJLPGGDNVNESQTITHACFNFOJIVMDWRTDANLAJRZUAPZVMTLHFVLZVYRMZPXYDFHICY");

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
    msg.setTimeStamp(0.1596821135518346);
    msg.setSource(53230U);
    msg.setSourceEntity(101U);
    msg.setDestination(29142U);
    msg.setDestinationEntity(204U);
    msg.groupname.assign("SNAYIIMIWGBSCPTNJRZJJROWELFMECIJTBHOFJMERVZWCKFQZKQGUSAIXVKIDPATYZHLDBLPHJVOUSBUHCYKNWWHUMTOBTZUBTXKKJCNXXMZVTGBEQFDDGCXSQXLEZYJAFMKVOFBQWHWYHWFCNQRNDUXEIDEJXZPEAHA");
    msg.action = 6U;
    msg.grouplist.assign("TESZWMMMJINBGNGDFSMCFYYOVRWHZHFZDKKBLATRUIMQFHGYTXJKWICDMLAPZXGUSHAEITSKPEJTVOPXYXSNQNUMRLEXCLBREMBNQNXVIVOKHCQCGFSTBTXDYDZOJVJYGWIAZZIKDLHHWAFKMUGCBNJUBYQPPOTEXALMHWQDFOEAIUDSCQSNVALZNHCYOLBZJNPIVWG");

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
    msg.setTimeStamp(0.5751753852353101);
    msg.setSource(52988U);
    msg.setSourceEntity(5U);
    msg.setDestination(46786U);
    msg.setDestinationEntity(17U);
    msg.groupname.assign("QZIOHVJDGIESXHPOKBKFCGYATZBWXPKSGHKAYBABSMYTNRJGGCEZWZIBFUPOVZXNFKHXOTASTNLHZSOETIYWZDRZRGYZNQAQTEANQVWDVKAFUDQPDCQFQBLWHNEKCZHYJSFTRMOQBRMRNFNLRJXAOWSAPLUMMIIYYGJWUMFALHYCPFTXGLMDJJIJYPDWTIVKC");
    msg.action = 201U;
    msg.grouplist.assign("BASKCWRMQIKXNMWCYCFNOAGXSMPBDKNWCZULIUJEHBQPRDEAZ");

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
    msg.setTimeStamp(0.931309792921961);
    msg.setSource(39146U);
    msg.setSourceEntity(209U);
    msg.setDestination(44482U);
    msg.setDestinationEntity(245U);
    msg.value = 0.11467229572550308;
    msg.sys_src = 21534U;

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
    msg.setTimeStamp(0.09188248670143373);
    msg.setSource(36069U);
    msg.setSourceEntity(239U);
    msg.setDestination(26115U);
    msg.setDestinationEntity(55U);
    msg.value = 0.32877619666755753;
    msg.sys_src = 30095U;

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
    msg.setTimeStamp(0.20833735512650164);
    msg.setSource(47042U);
    msg.setSourceEntity(166U);
    msg.setDestination(65U);
    msg.setDestinationEntity(149U);
    msg.value = 0.5606972991190293;
    msg.sys_src = 63253U;

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
    msg.setTimeStamp(0.8859493595073905);
    msg.setSource(63699U);
    msg.setSourceEntity(44U);
    msg.setDestination(26412U);
    msg.setDestinationEntity(240U);
    msg.value = 0.5441379743088186;
    msg.units = 208U;

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
    msg.setTimeStamp(0.07814006581331323);
    msg.setSource(47160U);
    msg.setSourceEntity(19U);
    msg.setDestination(28534U);
    msg.setDestinationEntity(184U);
    msg.value = 0.07724450775549874;
    msg.units = 203U;

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
    msg.setTimeStamp(0.9634652112221099);
    msg.setSource(42360U);
    msg.setSourceEntity(141U);
    msg.setDestination(1276U);
    msg.setDestinationEntity(19U);
    msg.value = 0.15098157925888656;
    msg.units = 73U;

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
    msg.setTimeStamp(0.2048497284160048);
    msg.setSource(34128U);
    msg.setSourceEntity(23U);
    msg.setDestination(47943U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.6240661176771466;
    msg.base_lon = 0.20382954897806793;
    msg.base_time = 0.16396965951260367;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 20508U;
    tmp_msg_0.priority = -8;
    tmp_msg_0.x = -1307;
    tmp_msg_0.y = -3798;
    tmp_msg_0.z = 22866;
    tmp_msg_0.t = 637;
    IMC::AssetReport tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RFOQODGOUWRGWMMENVYUWQYQZSLLHBXVJORFQAMVLQOFFBLYDGSXPKAHBZRWVGAKUJVOHJBCVMSPWPDIMPKVICCNYWJSDCKMRNP");
    tmp_tmp_msg_0_0.report_time = 0.6324412544413214;
    tmp_tmp_msg_0_0.medium = 20U;
    tmp_tmp_msg_0_0.lat = 0.9864583270071435;
    tmp_tmp_msg_0_0.lon = 0.5687824868569629;
    tmp_tmp_msg_0_0.depth = 0.7633776427152817;
    tmp_tmp_msg_0_0.alt = 0.7543045408385878;
    tmp_tmp_msg_0_0.sog = 0.07450020695462911;
    tmp_tmp_msg_0_0.cog = 0.6366614276775892;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2725503163427466);
    msg.setSource(74U);
    msg.setSourceEntity(215U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(113U);
    msg.base_lat = 0.5624127461050461;
    msg.base_lon = 0.5036864411731646;
    msg.base_time = 0.5591247566617297;

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
    msg.setTimeStamp(0.5677924534871615);
    msg.setSource(41941U);
    msg.setSourceEntity(112U);
    msg.setDestination(59705U);
    msg.setDestinationEntity(191U);
    msg.base_lat = 0.5241646259655368;
    msg.base_lon = 0.4228005687666522;
    msg.base_time = 0.43080253985415284;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 39181U;
    tmp_msg_0.destination = 57771U;
    tmp_msg_0.timeout = 0.7155157051044322;
    IMC::PWM tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 182U;
    tmp_tmp_msg_0_0.period = 63741616U;
    tmp_tmp_msg_0_0.duty_cycle = 3257588861U;
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
    msg.setTimeStamp(0.2526837616155193);
    msg.setSource(59636U);
    msg.setSourceEntity(244U);
    msg.setDestination(50227U);
    msg.setDestinationEntity(46U);
    msg.base_lat = 0.9177065184757425;
    msg.base_lon = 0.45216313692952237;
    msg.base_time = 0.5887902802468798;
    const signed char tmp_msg_0[] = {-83, -93, 11, -70, -36, 47, 110, -40, 24, -79, 49, -78, 78, -45, -87, -119, -87, -96, -37, -52, -88, 31, -111, 62, 66, 111, -16, -94, 74, 75, -118, 46, 0, 41, 116, 44, 11, -61, -110, 7, 82, -104, 19, -66, -25, 91, -12, -11, 66, 86, 87, -40, 30, -43, -96, -81, -8, 89, 26, 114, -18, 11, -84, -92, 60, -116, 38, 74, -42, -19, 50, 40, 126, 6, 44, 6, 52, 13, 86, -63, 101, -45, -26, -40, -28, -98, 6, -34};
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
    msg.setTimeStamp(0.08933310368818204);
    msg.setSource(58844U);
    msg.setSourceEntity(131U);
    msg.setDestination(45510U);
    msg.setDestinationEntity(59U);
    msg.base_lat = 0.4420070323341736;
    msg.base_lon = 0.9883212879398866;
    msg.base_time = 0.6594185986080797;
    const signed char tmp_msg_0[] = {72, 70, 124, 110, 69, -96, 83, -103, 47, 8, 0, -104, -44, -117, 45, -84, 80, -21, -45, 74, -1, -67, 84, -108, -48, 63, 57, 26, -64, -94, 49, -68, -83, -50, -120, -34, -106, 16, 11, 51};
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
    msg.setTimeStamp(0.2389177250865675);
    msg.setSource(13860U);
    msg.setSourceEntity(157U);
    msg.setDestination(23575U);
    msg.setDestinationEntity(123U);
    msg.base_lat = 0.6618708895401821;
    msg.base_lon = 0.01873828342753936;
    msg.base_time = 0.6725834398685305;
    const signed char tmp_msg_0[] = {50, -70, -128, 104, -66, 33, -96, -61, 55, 21, -53, -121, -106, -48, -110, -111, -121, 0, -52, -44, -70, -16, 19, -93, 18, -111, 104, -90, 55, 81, -115, 116, 20, -71, -77, 92, -117, -54, -48, -82, 10, -107, -37, 60, 66, 31, -63, -74, -98, 124, 52, 124, -18, -68, 106, -97, -30, 32, -122, 116, 70, -66, -24, -127, -57, 98, 100, 121, 88, 11, 114, 53, 1, -20, -28, -26, 18, -117, -52, 119, 85, 121, 89, -53, 4, 85, 62, -37, -73, 39, 15, -87, -82, -40, -121, 46, -65, 29, 30, 5, 125, 65, -57, -78, 113, -47, 9, -91, 57, -65, 10, 75, -94, 44, 115, -43, -41, -36, -86, 88, 84, 18};
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
    msg.setTimeStamp(0.1626069239065453);
    msg.setSource(44123U);
    msg.setSourceEntity(175U);
    msg.setDestination(17193U);
    msg.setDestinationEntity(110U);
    msg.sys_id = 31864U;
    msg.priority = -89;
    msg.x = -27438;
    msg.y = -20850;
    msg.z = 20931;
    msg.t = 29410;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.frequency = 1899331245U;
    tmp_msg_0.min_range = 6312U;
    tmp_msg_0.max_range = 43483U;
    tmp_msg_0.bits_per_point = 203U;
    tmp_msg_0.scale_factor = 0.7954140862570427;
    const signed char tmp_tmp_msg_0_0[] = {-64, -84, 48, 123, 126, -98, 1, -32, 106, 117, -116, -50, -3, -122, -7, -35, 95, 120, -17, 55, 10, 63, -41, 8, -26, -24, -87, -127, 36, 45, 74, -10, 44, 118, 116, 41, -54, -66, 2, 97, 36, -117, -81, 23, 40, 66, 21, -95, -8, -71, -37, 122, -61, -48, 111, 47, -8, 51, 35, 15, -40, 30, -61, -45, 119, -124, 28, -12, 108, 118, 104, 99, -48, -94, 52, 47, 43, 69, -44, 14, -43, 68, 88, 59, 5, -37, -63, 40, -82, 37, -79, -84, 27, -42, 67, 83, 52, -73, -34, 57, 114, 97, -6, -46, -77, -95, -21, 92, 98, -22, -41, -43, 6, -108, 109, 53, 59, 6, 84, 98, -71, 55, 91, -115, 10, -105, 23, -116, -111, -40, 60, 12, -63, -80, -81, -28, -71, 93, -96, 95, 56, 109, -73, 82, -72, 26, 8, -14, -79, -92, -81, 52, -35, -6, 71, -59, -90, -24, -121, -65, 78, -101, 116, -82, 81, -28, 39, -8, -103, -91, 58, -74, -50, 111, 43, -94, 59, -89, 12, -65, -36, -92, -11, -98, -35, 59, -116, 35, 98, 14, -84, 19, 40, 80, 89, 121, 4, 53, -8, -33, 121, 58, 55, 124, 118, 103, 83, -110, -63, -25, 44, -73, 105, -114, 92, 1, -6, 94, -91, 83, -91, -31, -70, -56, -51, -23, 116, -22, -6, -127, 113, -119, -105, 109, -79, -119, -79, -55, 89, -121, -62, 58, 37, 100, 23, -49, -86, -53, 122};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5832018043206424);
    msg.setSource(29143U);
    msg.setSourceEntity(233U);
    msg.setDestination(54458U);
    msg.setDestinationEntity(126U);
    msg.sys_id = 12687U;
    msg.priority = 67;
    msg.x = -28432;
    msg.y = 28576;
    msg.z = 31418;
    msg.t = 12434;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 29708U;
    tmp_msg_0.lat = 0.9316199779160371;
    tmp_msg_0.lon = 0.05171052997463488;
    tmp_msg_0.z = 0.9973080618426844;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.3882467964593421;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.duration = 20606U;
    tmp_msg_0.radius = 0.9051281331342194;
    tmp_msg_0.flags = 40U;
    tmp_msg_0.custom.assign("RDHAMVEDUMZSVZJWVZTCKQOJNWYXIKHFTWFRFUHRNBSKFEYLVXKNIMAVEBSZBMHLSOGTAFBHWRIHJPBNJDZWZPJKEUTDWYXPSXGALXNKDLPULDJVMFVLGYYZYPHIFJBLKNNMQVSOGKIYEEXUTUMFCATNIPMGXOEAIBQPEGIOTOGCQOTTLEUCCMPNDQGDORBHPAWRRCZUDAIILYEJZCQYVBRWZU");
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
    msg.setTimeStamp(0.41999015734514156);
    msg.setSource(58639U);
    msg.setSourceEntity(221U);
    msg.setDestination(7823U);
    msg.setDestinationEntity(27U);
    msg.sys_id = 1921U;
    msg.priority = -99;
    msg.x = -12475;
    msg.y = -29302;
    msg.z = 20808;
    msg.t = 17747;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("JMDVXOBEWFIUOKMFMPZXYTLWCGNBMCZUFCONNDJKSG");
    tmp_msg_0.op = 1U;
    tmp_msg_0.sched_time = 0.2876938785376013;
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
    msg.setTimeStamp(0.9009177077554488);
    msg.setSource(39612U);
    msg.setSourceEntity(93U);
    msg.setDestination(5204U);
    msg.setDestinationEntity(109U);
    msg.req_id = 27950U;
    msg.type = 2U;
    msg.max_size = 111U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5657395154485595;
    tmp_msg_0.base_lon = 0.6233072167720433;
    tmp_msg_0.base_time = 0.10950184458603285;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 53196U;
    tmp_tmp_msg_0_0.priority = -16;
    tmp_tmp_msg_0_0.x = -17347;
    tmp_tmp_msg_0_0.y = 1157;
    tmp_tmp_msg_0_0.z = 6422;
    tmp_tmp_msg_0_0.t = 17046;
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6588659321397263;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5849927897194257;
    tmp_tmp_tmp_msg_0_0_0.z = 0.19051131988648307;
    tmp_tmp_tmp_msg_0_0_0.z_units = 50U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.5986914377332851;
    tmp_tmp_tmp_msg_0_0_0.duration = 27427U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6288187799477433;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 142U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 32937U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 25285U;
    tmp_tmp_tmp_msg_0_0_0.flags = 33U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BTSNCAZXJQNJVEANCUVQGDXBZFVUGZEHTEDXSLAJOCPGLWMYEHFT");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.367538530828709);
    msg.setSource(32628U);
    msg.setSourceEntity(233U);
    msg.setDestination(30949U);
    msg.setDestinationEntity(218U);
    msg.req_id = 61058U;
    msg.type = 98U;
    msg.max_size = 4200U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8547406281664444;
    tmp_msg_0.base_lon = 0.2191294099501937;
    tmp_msg_0.base_time = 0.3502537999582246;
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
    msg.setTimeStamp(0.7045206570629473);
    msg.setSource(27260U);
    msg.setSourceEntity(225U);
    msg.setDestination(34843U);
    msg.setDestinationEntity(10U);
    msg.req_id = 27121U;
    msg.type = 131U;
    msg.max_size = 58932U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.19883477810602412;
    tmp_msg_0.base_lon = 0.856495653747468;
    tmp_msg_0.base_time = 0.5662142264731238;
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
    msg.setTimeStamp(0.5919211654383663);
    msg.setSource(34826U);
    msg.setSourceEntity(146U);
    msg.setDestination(20292U);
    msg.setDestinationEntity(70U);
    msg.original_source = 21652U;
    msg.destination = 24359U;
    msg.timeout = 0.4570368242795053;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.686082939817722;
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
    msg.setTimeStamp(0.07504767417295011);
    msg.setSource(37427U);
    msg.setSourceEntity(82U);
    msg.setDestination(37852U);
    msg.setDestinationEntity(175U);
    msg.original_source = 19760U;
    msg.destination = 55867U;
    msg.timeout = 0.08888077884974366;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 27156U;
    tmp_msg_0.status = 204U;
    tmp_msg_0.info.assign("XNLVBYXBISWQBFYOVERZXRIKYHMKDSATULFCUVYGGXRTSUUEMQZGUMFYCACJMPHJOIMDODLIZFRGKHVJIZBSZHZLWQCVTEZPBQMIOEWZOWBHCHNXYPNNILFRNCDGTJJJYASWIYHONTPQPRVAIWCEYBDAUFVFTBJTRMKCRDWPDMVAMJBPXNLEAPGBLHCVQXTSLANUOHSIEGAKGDCFSZSQOXJQKZEOELKKGKEDNUYDSWQGOUPTTNX");
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
    msg.setTimeStamp(0.9278757601270098);
    msg.setSource(5798U);
    msg.setSourceEntity(108U);
    msg.setDestination(20144U);
    msg.setDestinationEntity(130U);
    msg.original_source = 46404U;
    msg.destination = 59661U;
    msg.timeout = 0.7748576638615174;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 45964U;
    tmp_msg_0.x = 0.47665085273705365;
    tmp_msg_0.y = 0.0102197832972718;
    tmp_msg_0.z = 0.9883368996892389;
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
    msg.setTimeStamp(0.5804318214562658);
    msg.setSource(41346U);
    msg.setSourceEntity(67U);
    msg.setDestination(65467U);
    msg.setDestinationEntity(38U);
    msg.type = 203U;
    msg.comm_interface = 4703U;
    msg.model = 37212U;
    msg.list.assign("QQCZZLNHAOUPXMBDXIKXQCEMHXAYFDJZRKINIKYGOUHPRQHYEMLEASTQOCRGVHBEIDGRFJUGPTSQGVFPRPSHFWBXYEJCCORPBPYVQNKTTFUINCTWSWKROIRAVTMFSMZSNYUKTOLCCUXLJKZDRJVEWEVADBHZSIHSUKTGSWBAVJXQUBDBPAXNISYLIYLTYCCGEBNRJPOKBADQDFQGJLXHWDLLENDF");

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
    msg.setTimeStamp(0.07132907116995835);
    msg.setSource(12946U);
    msg.setSourceEntity(170U);
    msg.setDestination(52987U);
    msg.setDestinationEntity(117U);
    msg.type = 179U;
    msg.comm_interface = 12394U;
    msg.model = 39594U;
    msg.list.assign("HMWVLWGXZFGKEAFPTEBPHKVVDBBFXWVSDEOKMEBEOZUDGZZNKPNJRORYFWAIXRQLUXTDWYUTMRIHVUKWOFGYWZRAAEIYCXKLVCQZDCGJYKPDJGQT");

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
    msg.setTimeStamp(0.5146360348491005);
    msg.setSource(46872U);
    msg.setSourceEntity(108U);
    msg.setDestination(21053U);
    msg.setDestinationEntity(32U);
    msg.type = 98U;
    msg.comm_interface = 56097U;
    msg.model = 62204U;
    msg.list.assign("QOHCZKLRHRAPKTDZZ");

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
    msg.setTimeStamp(0.12067046569604878);
    msg.setSource(65476U);
    msg.setSourceEntity(235U);
    msg.setDestination(9138U);
    msg.setDestinationEntity(48U);
    msg.type = 220U;
    msg.req_id = 2845578066U;
    msg.ttl = 42842U;
    msg.code = 15U;
    msg.destination.assign("NDWRMFFJPHQORRNROTWHSONNSFEIWWTTEYLGBPIQAUOWMDFQRPHRVIILJERTVUCFLVUCXGPDVDKBLJAPPSFCKZVJQEUBKIGVSAXKPFLYADFQMMONYNMTZCSGAECQMTVVYTEMPJDWCNTMCKBIUXXIOZOYKOHVZDXYZJTQGBCMQIAHGJYXURY");
    msg.source.assign("VXEAIMKOTJHBEEPEDGWAXTLHTOKWCIXAYOBANNHGKFVQCKQGDCTPSHUAFBLVYIGZTNKYSDPNUFDCEHHJRIBJNQKFPXQPBJRTYMBZFLAGZEGNSGITQZUWPLAQOLLHPVJZRPIGRTBRYOVYSECXZJYBDWMZTECLKYJJNWPMDKONFRWOXSDXIIMOZYKUMCSHZUEM");
    msg.acknowledge = 188U;
    msg.status = 19U;
    const signed char tmp_msg_0[] = {-20, -34, -41, 26, 115, -60, 61, 45, 109, -127, -3, -101, -10, 20, 21, 69, -9, 120, -35, 97, 54, 54, 103, 68, -90, -100, -123, -20, 53, -13, 7, -82, 103, -125, 99, -46, -35, -21, 21, -75, -128};
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
    msg.setTimeStamp(0.39971758900737264);
    msg.setSource(49820U);
    msg.setSourceEntity(88U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(100U);
    msg.type = 33U;
    msg.req_id = 3035404780U;
    msg.ttl = 6979U;
    msg.code = 122U;
    msg.destination.assign("XTKFEPCDZQAGLVGYVMIELPHOSOKKHBUFFWNBWACGGIPKDXTNRZHYATHVBJ");
    msg.source.assign("WIYJVCTASHBSDORQIL");
    msg.acknowledge = 40U;
    msg.status = 67U;
    const signed char tmp_msg_0[] = {74, 75, 17, 60, 10, -44, 91, 14, -107, -20, 106, 11, 32, -104, 27, 59, -73, -91, -68, 60, 20, 79, -12, 115, 33, -71, -102, -111, -48, 26, 115, -9};
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
    msg.setTimeStamp(0.6525865269869934);
    msg.setSource(17472U);
    msg.setSourceEntity(113U);
    msg.setDestination(25121U);
    msg.setDestinationEntity(74U);
    msg.type = 215U;
    msg.req_id = 2147963898U;
    msg.ttl = 58762U;
    msg.code = 109U;
    msg.destination.assign("RLDDEGUVYFWXCTEIINUUCGXZTCTYKSZFGYRKWPAGYGPAZTDHPCBCMQTYVMARVSIXFDAFPYCWOQQZXELBVGJGWBHWJLQQGLCWSTEFUKDPASXDNWDYMKLRJFMIWAKQBIHFZUVMZCKOLHGUQFHDNRCJIKSLHRLKMJKRRXPPJHUEO");
    msg.source.assign("DJSOHDLWKDNCXERLVSNIRCGURUAHWUYYZAXSYEBQBEBBFMLCBAGEACLQCVKRSIJBXZUPWTCOLVNQWNPIYWFFNCXGSKEGTDJFBBHHOFPNYQYAXTMXOGTRHWAJWVAGITHRPOLDJMFMHSSYFIZFDRZQDANZXPYSBTPIUJQPTBWLECUVUOCZIZVDHNJGOUJXYILKI");
    msg.acknowledge = 68U;
    msg.status = 6U;
    const signed char tmp_msg_0[] = {-70, 7, 6, -109, 126, -71, 108, -41, 83, -87, -32, 9, 110, -102, -112, 22, 116, 116, 6, 54, -111, -89, 104, -44, 21, 107, 25, 36, 67, -16, -42, -21, -91, 117, 107, 16, 10, 77, -51, 84, -32, 23, 21, 91, -118, 96, 33, -127, 7, 7, 55, 114, -116, 113, 37, -6, -78, -83, -5, 80, -76, -4, 53, 107, 123, -40, 59, 60, 33, -107, -82, -13, 109, -14, -84, 69, -40, 70, -45, -91, -44, 25, -4, -121, -66, -95, -92, 93, 106, -103, 16, -3, 46, 8, -70, 0, 73, 3, 109, -127, 105, -85, -120, -107, -91, 47, 69, 113, 116, 43, 2, -21, 89, -35, -67, 98, 45, 3, 57, 6, 84, -31, 75, -103, -77, 15, 92, 73, -2, -75, 14, -19, 74, 113, -94, 31, 23, -14, -53, 18, -2, -112, 82, 116, 106, 112, 32, 108, -113, -32, -11, 39, -19, 43, 7, 105, 62, 91, 76, -115, -8, 100, -57, 31, 87, -125, -86, -55, -101, 112, 17, 40, -41, 66, -107, 60, -40, -42, -82, 20, 114, -43, 16, 12, 93, -44, -23, -49, 94, -36, 15, -116, -48, 22, 7, 116, 102, -82, 119, 72, -86, 97, -49, -21, 36, -73, -11, -11, 122, -71, -13, -30, 75, -121, 21, 6, 124, -44, 37, 121, -74, 11};
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
    msg.setTimeStamp(0.000625978962265461);
    msg.setSource(4771U);
    msg.setSourceEntity(19U);
    msg.setDestination(60568U);
    msg.setDestinationEntity(49U);
    msg.id = 24U;
    msg.range = 0.5092641060390247;

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
    msg.setTimeStamp(0.3144901298191678);
    msg.setSource(35061U);
    msg.setSourceEntity(17U);
    msg.setDestination(16461U);
    msg.setDestinationEntity(190U);
    msg.id = 127U;
    msg.range = 0.18221844760056694;

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
    msg.setTimeStamp(0.4401371995138522);
    msg.setSource(16056U);
    msg.setSourceEntity(172U);
    msg.setDestination(23863U);
    msg.setDestinationEntity(116U);
    msg.id = 106U;
    msg.range = 0.1950303016364412;

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
    msg.setTimeStamp(0.141500786395516);
    msg.setSource(25800U);
    msg.setSourceEntity(44U);
    msg.setDestination(63262U);
    msg.setDestinationEntity(39U);
    msg.beacon.assign("NWGKHFZINEGLNAHBYJVVNOMBOXQRTXWJRRLFEWDAHWECHSSYJCBGYECLKCXVYOXIPSRLOGOJ");
    msg.lat = 0.8772706336659598;
    msg.lon = 0.3548310767556231;
    msg.depth = 0.331198488422512;
    msg.query_channel = 191U;
    msg.reply_channel = 46U;
    msg.transponder_delay = 231U;

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
    msg.setTimeStamp(0.930215333069619);
    msg.setSource(50801U);
    msg.setSourceEntity(21U);
    msg.setDestination(47230U);
    msg.setDestinationEntity(84U);
    msg.beacon.assign("JWYXGIHIWSIQALORXJYHQMHZMRALRZZMTOHSTVCPODZJHNNEYVAXFXJEMETGFKDCEXKWLQJUUEBAVXEHJQVHUFOUPVNOCISXWDDYIIOLWMT");
    msg.lat = 0.11724137529015555;
    msg.lon = 0.14495510099030173;
    msg.depth = 0.6948201751358012;
    msg.query_channel = 135U;
    msg.reply_channel = 73U;
    msg.transponder_delay = 211U;

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
    msg.setTimeStamp(0.4174131731068226);
    msg.setSource(53100U);
    msg.setSourceEntity(16U);
    msg.setDestination(17828U);
    msg.setDestinationEntity(210U);
    msg.beacon.assign("BQSMXVUKKSQHAJGNTXVUUCCLRZQKPSXIFCNEAPLWIJGLHRYGDTTRBWLMSACIZUMUJOPDBOWDHZZYFPIINXAXFMQHUSSLJLFHNGBNYSBXOYWXZLLHDMCROKOSPHVRTLQYMZJXEMACPSPAHUHIEVOBNZKZFXDJQHPSKBPF");
    msg.lat = 0.3966776743761331;
    msg.lon = 0.35968233393001703;
    msg.depth = 0.8602200466528005;
    msg.query_channel = 142U;
    msg.reply_channel = 159U;
    msg.transponder_delay = 157U;

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
    msg.setTimeStamp(0.42775636863453614);
    msg.setSource(46956U);
    msg.setSourceEntity(145U);
    msg.setDestination(20713U);
    msg.setDestinationEntity(107U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.4535668646785509);
    msg.setSource(8889U);
    msg.setSourceEntity(114U);
    msg.setDestination(33145U);
    msg.setDestinationEntity(176U);
    msg.op = 5U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RNQGAMWCBBXGVOVLFDEVLFFDILMNYCAVVAFHQTMKQUMWTNOEZYTLJXEGFMBEZBVBUWUNEGRXYEVCOFGRHMCIYUEXSRLBVNDNPHCQQCLYSZBKSUAYYQKJBSCHSXIFQKZUNHBTLJXPYCMIJRQEPIOAPRLOZRSTXPLGWRTWHAIEWAFODKIAXUKZGPDETAXOGKSULHOBJNICTQKXJZHRYSHUWDMCJRONUZYIFQSZFTMMDKZTJPVJIDKGWP");
    tmp_msg_0.lat = 0.35979809399486207;
    tmp_msg_0.lon = 0.34713445670140486;
    tmp_msg_0.depth = 0.5969338946834436;
    tmp_msg_0.query_channel = 215U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 129U;
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
    msg.setTimeStamp(0.6808792446523382);
    msg.setSource(31934U);
    msg.setSourceEntity(85U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(173U);
    msg.op = 248U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ASMSYPVWVLUKQBHPYRJLGDVJGIAZGXQHYHFFCFOINWGKDCGFFFBVSSHSBGWEQTMYOATMEWPLVHQGIIQKYOXEWYVDUUNAWPAUCEOCMILKNBIFQVNHOURSURHAIMQLJOZQCDRRLRAGNRDXYEPADNIZKNMOZIQXYTZZKNKGPBRJETUKXTKFWUFDTEZEPMBCTUL");
    tmp_msg_0.lat = 0.23662873398544582;
    tmp_msg_0.lon = 0.17645678942124376;
    tmp_msg_0.depth = 0.10344283176181035;
    tmp_msg_0.query_channel = 119U;
    tmp_msg_0.reply_channel = 248U;
    tmp_msg_0.transponder_delay = 13U;
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
    msg.setTimeStamp(0.9280016153856894);
    msg.setSource(10070U);
    msg.setSourceEntity(184U);
    msg.setDestination(21852U);
    msg.setDestinationEntity(83U);
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 172U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("XQTRVAVWOIQXFTLBGSYUHODWWCMMACOIYQQVHXIVRDCGNALRUAEMNNYTYGNBQCNVZHUKEHIDWRSZHZEAPROFYOPFMRYRJORKBOFIDCCMLIGGOYGDGXLESYZZSOSDAPGZQUUHLNAUJTUTKOKX");
    tmp_tmp_msg_0_0.description.assign("AIQOVEHLYUKAJMEPPMSRNYCYJOROTGNGAZSKERHTHWGYGHVXXFVTTLKT");
    tmp_tmp_msg_0_0.vnamespace.assign("KBGXMGOEQXTKWYBFHNMBQQEOEATDUBCMUFVAOCZNGFARRCROTJAJORSRZWNDATMEBPMNPVLUPQDIEQQGPRRZ");
    tmp_tmp_msg_0_0.start_man_id.assign("WCBVVXRMGGRURAFABXMYFNPYLKWGJETGKIXRPYGQLSJLXHTIOBNCKFRZOEZMNINHHOOWEUPPUJNVNISYLRIMAGCHOWKBHFSBBLORHFTTVQWBKQHDQFJUJFYDVHRVECFXIUFIAJCQIBGQZUWUWXPHSTWAKTQPNVMPEZXOZDVRLAECESSOGOZCIUBUKNJLY");
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3065306579188777);
    msg.setSource(51444U);
    msg.setSourceEntity(120U);
    msg.setDestination(37343U);
    msg.setDestinationEntity(164U);
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("JNUDLYJIKWVBMUEVLINWDZWRQRVYMXVITBGCZLJDZPIJCGMVSSOJTARCGPRGXEJYHSMGHABLOFNONXSNZXLAIXC");
    tmp_msg_0.op = 54U;
    tmp_msg_0.lat = 0.20148132773143057;
    tmp_msg_0.lon = 0.015655565078247724;
    tmp_msg_0.height = 0.5589274470565421;
    tmp_msg_0.x = 0.28113325555764346;
    tmp_msg_0.y = 0.07799441737576196;
    tmp_msg_0.z = 0.26671134614629033;
    tmp_msg_0.phi = 0.07383496074825657;
    tmp_msg_0.theta = 0.05430296502081977;
    tmp_msg_0.psi = 0.7739182610060978;
    tmp_msg_0.vx = 0.6506980857457338;
    tmp_msg_0.vy = 0.44840845831805054;
    tmp_msg_0.vz = 0.31990693587875096;
    tmp_msg_0.p = 0.8482216985369102;
    tmp_msg_0.q = 0.055747271931640974;
    tmp_msg_0.r = 0.8509998332506303;
    tmp_msg_0.svx = 0.2942571779128267;
    tmp_msg_0.svy = 0.9247160367037444;
    tmp_msg_0.svz = 0.890884076864268;
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
    msg.setTimeStamp(0.30340743695606653);
    msg.setSource(32525U);
    msg.setSourceEntity(31U);
    msg.setDestination(31388U);
    msg.setDestinationEntity(22U);
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1424004055U;
    tmp_msg_0.destination.assign("VJUMVQROFNKNWJDXIWGLTHCRQUTQMXPTSGNPSOREAFFIBIWXGYEXPFICYXUXHSSRTHWGEQNDXNQGELFPQXFGTTBYMJUSWBZBKNVOFZKUOVYOFPHUDZYTHLOHPDCCVGWEDZMZBCBPIJRZILBXZYVKOOORCALHLKJMHKFWUIDUCJJYATEVDAPQUZFMPYBQJOATJSWNHDZSVSMCEGKXMARMAAURYCEKGLNBSHWSELDJZGVAQWEYRQKB");
    tmp_msg_0.timeout = 1156U;
    const signed char tmp_tmp_msg_0_0[] = {53, -123, -45, 36, -121, 7, 59, -121, -1, 18, 25, -17, -100, 16, -105, -56, 15, 50, 93, -21, 121, 46, -108, -95, -39, -51, 24, 66, 21, 27, 19, -82, -52, 71, 117, -106, -94, -100, 80, -84, 87, 87, -69, 88, 124, -74, 15, 103, -56, 120, 45, 3, 83, -69, -54, 107, 0, -70, -59, 90, 56, 76, -54, -49, -93, -86, -55, 40, 58, -99, -19, 117, 6, -7, -6, 80, -45, -69, -62, -90, 87, -35, -4, 113, 52, 53, -3, -41, 112, 38, -44, -27, 28, -61, -28, -106, 68, 59, -70, -116, -51, 83, 84, 58, -55, -56, 109, 73, -60, 82, 4, 7, 80, -49, 20, 80, 13, 8, 15, 117, 48, -46, -119, 14, -100, 11, 50, -90, -50, -114, -115, 27, 99, 70, -6, -118, -41, 29, 115, -101, 6, -77, 9, 104, -100, -55, 35, -29, -58, -49, -121, -58, 105, 71, -26, 2, -17, 36, -41, 29, 81, 11, 47, -97, -94, 119, 94, 68, 49, 114, 24, -22, -49, 56, 54, 59, 5, -89, -56, -108, 78, -71, -19, 110, 70, 54, 51, 22, -7, 47, -77, 90, 70, 42, -48, -30, -22, -105, 89, -59, -66, -60, -17, 21, 29, -118, 43, -99, -18, -98, 115, -97, 40, -18, -89, -1, -61, -114, -23, 76, 89, -128, -64, -3, -126, -39, 5, -75, -100, 101, -32, -77, -101, 45, -100, 43, -18, 11, 118, -25, 21, -106, -65, -24, -20, -58, -123, 28, 72, 117, 96, 113};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.647953050540795);
    msg.setSource(46194U);
    msg.setSourceEntity(172U);
    msg.setDestination(33487U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.15010820636873268;
    msg.lon = 0.3845844446131067;
    msg.depth = 0.8992081736845171;
    msg.sentence.assign("UVQPNBGKMSXVIQXAVJVSVJTYGEPROUEZFNIMEALQYIYYZOGDWQOSQCULHXUEUMIFBZWRAPDFAJHLKBBYTPIDDDWFGN");
    msg.txtime = 0.9644100397803792;
    msg.modem_type.assign("PGTWNDBNFMJHLZXHFODXZICCQXJRXOXETYYEDOKEICDSLQZBESMZWESABKICBCAPCKUUARLLKPLOUFZDBSQUUBSSKBGPMUOIFBJKQULYFDYDJAGQNIAEJRVJQWMCTVBYPFTMVXFGJMHZMIJNATKRXWWXOHXVIILAYEYKARSDNTPQEQZMEPZV");
    msg.sys_src.assign("WKEEJCVXXNXAOEKYKZKOTXPNQKNVQ");
    msg.seq = 14796U;
    msg.sys_dst.assign("JHIMMVOQFMONLAEPTKASXZMNUWVMYTVRLGXDCYNDIUPPKFZDDBHRHCEOCTKZNWOLICRWLMQAKFSDBYBQJWZTQGYQMMAUEORJEJWPISCSHLLRBALOWXFQWBTAGXNAXKFPSHQZJGJHAIIUHWGGSNSUBXENQZXDHDOYCRKOWGJBVERFIVFFFAJLLYJI");
    msg.flags = 99U;
    const signed char tmp_msg_0[] = {-84, -99, 94, 30, 108, -51, -28, 2, -111, 102, -80, -4, 6, -75, -44, -66, -92, -95, 105, -110, 9, -98, -28, -10, 105, 57, 59, -26, 5, -7, 40, -111, -89};
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
    msg.setTimeStamp(0.583977999798223);
    msg.setSource(25404U);
    msg.setSourceEntity(234U);
    msg.setDestination(40560U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.46240195920194915;
    msg.lon = 0.6359791025653377;
    msg.depth = 0.9596672957401271;
    msg.sentence.assign("GBCIFZBMIJHARRUFFHIOSQRKBNDQQLCLTPNKDEMRNSCYWCDVXQHQMTLZQKXUAOFVEHKWBLPKFAUSLPHHGJNWPU");
    msg.txtime = 0.12383086312933567;
    msg.modem_type.assign("PVCFCMCGOZZBWIZTNLTSUJZCPPQSSIFUXVOEEYBEQOHRDNXAILMGMUTQIRBOMLCQGMWVKEABHGXVQWVWDWTFYXANKNGVTZHOTPAHUYROJHREABATKGQKVLLAXNIGXUCSQBJUSVTKXLZJFKVYSFLWPSHZYYRQREOZWGDRHUJMMZHPJMTDJN");
    msg.sys_src.assign("NMHLEXTSZMRGDZUNPIPCJYHNOQZLVVVALPKOAEINFKHYJEMXZNWINKYMVHDEAGINTFXHORNFGBOUPBWKWWWZCPCASZRGRSYDMUJTRXDBETCCJKOXASVAXDBUJLCLYKCHYPJWVBHRAMTFDGAUQPQOV");
    msg.seq = 42116U;
    msg.sys_dst.assign("VQUMGEXMLCOFSKWJFCYCSNZQKWPQEAAIOHDGWMSUHWZRTAJGQZDAJDXBFQENKUNEC");
    msg.flags = 172U;
    const signed char tmp_msg_0[] = {97, -41, -94, 59, -71, -74, 0, -101, 18, 99, -125, 125, -15, 65, 59, -36, 17, 85, 35, 63, -30, 61, 105, -86, -83, 23, 92, -62, -55, -54, 100, 110, 94, 48, 19, 27, -64, 90, -67, -5, 55, 31, 7, -45, 105, -119, -128, -123, -83, -15, -122, -7, -116, -106, 109, 101, 65, 63, -15, 56, 44, 8, 124, 11, 46, 49, -123, 16, -43, 23, -124, 15, 65, 37, -20, 117, 107, 92, 73, 56, -73, 78, 92, 96, -72, -99, 92};
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
    msg.setTimeStamp(0.3141240874640966);
    msg.setSource(41553U);
    msg.setSourceEntity(219U);
    msg.setDestination(52522U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.9531350862599206;
    msg.lon = 0.6520916953172688;
    msg.depth = 0.7094695629462189;
    msg.sentence.assign("IRRTPXQPZBRSRQJVTZTNYPEWCHDYVUTYPHVBAJJSXFIEYLDMDOKQZIWSKYJMLRXNXLHCFJSETMOAOYEGYDDQWVLXNUNOKAHMNCKKOQPMISSKKIHHNUZWXTGBDWHZAUGEMEJHLLHULVPAPJIAPBNLY");
    msg.txtime = 0.15158774651241724;
    msg.modem_type.assign("TJKHNZBQRXYIXMQFYHPBPVEKISWTBQUTUZEOAACHRPFJYYQGGUIFPVFKMUXSAHDJTPCULMCBZVXEKBWGFLYGDBQBMJQZVEZJGIEFRHKUBLIIACRLEATTZSRCATXIYPHOLEWAOQN");
    msg.sys_src.assign("SRKOHATKCRAWPSYGNUHYDFLJGAALBDROVPXETJEWOSHSNKADVMRCQVOQHJPCCKOQETEZNJVXBHUTBVTQXINFVPJMKDKUIWURHPRFIBEHRQFSCBZCQUUZXRMFSNQAICGBDXKTWYWCGIFDEMUEGNTBUDQYQEZLKMOOMZHLLZFIZJAFBGWYSBYOJFOGLJPLAKMXXWJSIZEJCDVXDASUZVIXCMXNBYOMYDTR");
    msg.seq = 64832U;
    msg.sys_dst.assign("POATRBUWMMTBJMFMIXWUJSJGXRDFVARGNVAJQGYTPRXPSPTDVOJXUFPUJZNZNQJLDTKSAAIZIZSQFIWMVPDGEEZEPWLLNUYAZHHAKNIEJFHQWHIKLKSTBCKVODKLPTJHEGWL");
    msg.flags = 244U;
    const signed char tmp_msg_0[] = {-109, 44, -108, 82, 114, 59, -48, -49, -12, -110, 17, 75, -105, 64, 8, 11, 105, 61, -42, 103, 69, 102, 102, -56, 6, -64, -37, -84, -21, -8, -23, 37, 97, 93, 93, 15, 70, 3, 105, 5, 48, -109, 80, 0, 56, -46, -35, -9, -36, 36, -21, -37, -19, -79, -11, -22, 69, -114, -9, 82, 89, -21, -114, -51, 96, 87, 98, 74, 89, -111, -11, 50, 46, 7, -19, 88, -21, -93, 36, -121, 57, -97, -38, -128, -82, 0, -10, 115, -59, 86, -28, -39, -119, 89, 58, 110, 119, -20, -58, -41, 39, -17, 51, -91, -45, -100, -65, 104, -96, 24, 74, 100, 24, 103, 33, 100, 87, 69, 94, -72, 1, 21, -51, 35, -38, 26, 79, 103, -124, -77, 112, -118, -70, -112, -9, 44, -79, 10, 25, 79, 86, -48, -101, -13, 94, -34, 119, -20, 15, 69, 25, 5, 45};
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
    msg.setTimeStamp(0.5942053864815722);
    msg.setSource(63543U);
    msg.setSourceEntity(96U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(73U);
    msg.op = 199U;
    msg.system.assign("LMAQJFNYBOBLVMRRMUCRTZZVQILLVZOCCUEONHQDYCKILMYDFWQYJNWDEGZULCOJNLKPSUFBVMDSMQBPAZKZMOPHGDJRTXMUAERXPIPLWQDNHKQBETDEGNEPGIAYOITKHMXBYHAJWZXDDFRVPPZGSFJSGDEHIAQKLASTKNVWWITFXOUTTFCPNCTYVJGVMXNXHWSPHGYAOSCRFJJQXLBUCAOQZRFRUXRKEUSYTXKINEWZJGSUBASGKOB");
    msg.range = 0.5628431723553194;
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 1136205804U;
    tmp_msg_0.latitude = 0.35434867753916277;
    tmp_msg_0.longitude = 0.5753531066543336;
    tmp_msg_0.altitude = 51227U;
    tmp_msg_0.depth = 43661U;
    tmp_msg_0.heading = 50362U;
    tmp_msg_0.speed = -10722;
    tmp_msg_0.fuel = 34;
    tmp_msg_0.exec_state = -96;
    tmp_msg_0.plan_checksum = 17150U;
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
    msg.setTimeStamp(0.020071636592802977);
    msg.setSource(34970U);
    msg.setSourceEntity(51U);
    msg.setDestination(26950U);
    msg.setDestinationEntity(184U);
    msg.op = 154U;
    msg.system.assign("LQIRXQFXIIJEBMDVLUTZMHWJOOUCWBHSAEEATFVTNYGXJXWKCQELNSZCTAJVMACBAMCZKVFTAHQBFCWMJZBEASPWKYMISPXZLYLJDKLWIWGRXMOQGFGYRZDEZRPBQEWQOG");
    msg.range = 0.5264685077860652;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BXTYJYVGLLFQIJZKNXTMKPAQKLNJWYOTEGFEGAINLJPWRRYBKSKXPUVCTNNAPZFODZGROXGSCBJEEZOWDMVYUQHZIZGUVRLXFKSBQOMHFMOOURNQLRCZKIGDVCTSUTLLDGKAWPHSAHUCMCYVLJZEWSUIBHHCMKWOHWSVFYAMNUQHCXBWMASTPXTDUYGPJOSCTQYMQQFBJVWXGLDVNIFHWDDBDXRDKF");
    tmp_msg_0.value = 192U;
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
    msg.setTimeStamp(0.3332815452594504);
    msg.setSource(29893U);
    msg.setSourceEntity(15U);
    msg.setDestination(29784U);
    msg.setDestinationEntity(189U);
    msg.op = 216U;
    msg.system.assign("RNVVQBHZUWLCIXBSXIPKHDATXYBKZFJQGGLPUONNEAQYFNTCMLUSTUQWAXZITVPEEZSDQDSCIRVHKMOBYPNDJPXEPPGOAKXCDVWTVKRIJVFJMQBXTWSERRKSDLZVFXBSCZUGRJQVIPKEQAMH");
    msg.range = 0.8590974803091005;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.20053954480851388;
    tmp_msg_0.m = 0.41660538891621446;
    tmp_msg_0.n = 0.7760093532849168;
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
    msg.setTimeStamp(0.28224773020765137);
    msg.setSource(51586U);
    msg.setSourceEntity(85U);
    msg.setDestination(61269U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.6508398938387413);
    msg.setSource(8571U);
    msg.setSourceEntity(152U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.5266511936059193);
    msg.setSource(27778U);
    msg.setSourceEntity(62U);
    msg.setDestination(37151U);
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
    msg.setTimeStamp(0.9314329323482776);
    msg.setSource(35455U);
    msg.setSourceEntity(188U);
    msg.setDestination(5934U);
    msg.setDestinationEntity(235U);
    msg.list.assign("TBMQNXYHTDALWDINSCZTRSILZIOPOLYFOFZYACKVEMXFZRXQSJYEZVWNUNSXDTALVBLMHKMWYIZZBBVIVSKTACUYEHTAIJJUVUQYDXLHKBTRHDLDJEYFTEQWMCQVCDWRBAHCLJGMWNKRMRBLQUGFGGRFSIYPJNXKGGPZNCJPISZXGGOKXOQSHVHJPQCVFWRJZQALFXFNWBKCGGRYUBF");

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
    msg.setTimeStamp(0.24134460187965845);
    msg.setSource(34007U);
    msg.setSourceEntity(130U);
    msg.setDestination(2017U);
    msg.setDestinationEntity(93U);
    msg.list.assign("UENMWXDHAYXEWVREEKKPFTPCHNDEABUOKLVQUPUBAWDLAYA");

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
    msg.setTimeStamp(0.16279260101031345);
    msg.setSource(47256U);
    msg.setSourceEntity(114U);
    msg.setDestination(4225U);
    msg.setDestinationEntity(245U);
    msg.list.assign("GZUQELEJXKYNNQSSPCWPQDMUBBVNAYDROEFIMTCXDMVFBAJTGLQYETJIRAUBTIPXCNQFXPQGVZMCMKPUQWTVTBKLJHNSKHCUHMKGUJXLXLZA");

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
    msg.setTimeStamp(0.5570324769967944);
    msg.setSource(53894U);
    msg.setSourceEntity(149U);
    msg.setDestination(6114U);
    msg.setDestinationEntity(191U);
    msg.peer.assign("LHQAMWWUAFYSYHVLDFRVAREZEWPBVONSQXQEHRVLPMAAUZZDRIWMDHYWVVORWYNQUJKJPJJFDXGKCZIWGBYCGHFBHPZMCQLMCRKZSNOOVLSDFAA");
    msg.rssi = 0.17208462003966463;
    msg.integrity = 57689U;

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
    msg.setTimeStamp(0.041687690607714156);
    msg.setSource(29905U);
    msg.setSourceEntity(57U);
    msg.setDestination(49780U);
    msg.setDestinationEntity(202U);
    msg.peer.assign("XBNBEHKPZXZTBLXBOLGJYOETJWBXVDBCPSRIZFAWLEM");
    msg.rssi = 0.7820479108203932;
    msg.integrity = 18653U;

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
    msg.setTimeStamp(0.9623675494481557);
    msg.setSource(56281U);
    msg.setSourceEntity(83U);
    msg.setDestination(34856U);
    msg.setDestinationEntity(219U);
    msg.peer.assign("KYGZSGVZMQXQIIQPGOUKDQQHKAOSKBTZEVCQFXTKXABSNUXVNCHESSJWGOBIMUZMRIHIORVCIHWVZFUVXZRWHNRMATKACRFDEGDAKMEXBFJUEDHPLWALQDLJBYKPEYGCPJBJUBSJPTHAMLOEGYNPCYWSCDRTFEODNBZZURXPQVJPBLEMCLYO");
    msg.rssi = 0.8612771491601662;
    msg.integrity = 48374U;

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
    msg.setTimeStamp(0.16484491614191266);
    msg.setSource(35140U);
    msg.setSourceEntity(42U);
    msg.setDestination(62576U);
    msg.setDestinationEntity(77U);
    msg.req_id = 25486U;
    msg.destination.assign("FENCNKOAHPBWMCTWQTBQEBYJOSMORWXDHPIIFKCLAQNZYWIEPTKJVPVMRCGCZELEGTSUCMUDSVNCTJGOBLKSIPLJXKAVQAITBVSHGXNCHI");
    msg.timeout = 0.40787669001237425;
    msg.range = 0.1791227208102545;
    msg.type = 132U;
    IMC::CommRestriction tmp_msg_0;
    tmp_msg_0.restriction = 141U;
    tmp_msg_0.reason.assign("IZUMVTHZYXUAHENGATDRFNIRQVELG");
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
    msg.setTimeStamp(0.12185161433995895);
    msg.setSource(3786U);
    msg.setSourceEntity(203U);
    msg.setDestination(30965U);
    msg.setDestinationEntity(101U);
    msg.req_id = 13275U;
    msg.destination.assign("ZPSYUBYLFRXIDUIDQZWYJJEDEESFOEYHNWFSVMBAAREZCPSDHYDG");
    msg.timeout = 0.10622286993187424;
    msg.range = 0.7471429959608158;
    msg.type = 170U;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 6480U;
    tmp_msg_0.value = 249U;
    tmp_msg_0.error.assign("LMLYGZZGHBNUWKGMGPMSLQGPZPGQOCZKVOHMSBTWAOCAIXQUDKQFWDUQYZHGCFQKECEIUBPKEKKVUENQURSREHELXJMDJ");
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
    msg.setTimeStamp(0.028019088016552174);
    msg.setSource(23535U);
    msg.setSourceEntity(118U);
    msg.setDestination(52999U);
    msg.setDestinationEntity(119U);
    msg.req_id = 16024U;
    msg.destination.assign("XVKOGUSEMOYAVMHNOBSUXOYJQSMFRARBSKVQMFKTEYCK");
    msg.timeout = 0.6699391294276589;
    msg.range = 0.15934150603489472;
    msg.type = 151U;
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 17691U;
    tmp_msg_0.sys_dst.assign("QLIFWOZGJPYBTSCGMULZQGISTJRKVBWYJRLSOYFOAFIQSVJRLSXUSXTGTLNZUOSVQFCOVYHOODPTJYNJWDVSPKETCHPFNGNZZNYQFZAEPYDRJCRXAEMNIYQLWCJEOPWEQLDCGTVMZU");
    tmp_msg_0.timeout = 0.7683787578132965;
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
    msg.setTimeStamp(0.09368301749545171);
    msg.setSource(13482U);
    msg.setSourceEntity(211U);
    msg.setDestination(945U);
    msg.setDestinationEntity(101U);
    msg.req_id = 38602U;
    msg.type = 234U;
    msg.status = 156U;
    msg.info.assign("NCGRHGZQXPSZPRLCQCJFDWEEICSINYHWWHVVSHGHJEYXMHASFMTXRQOYXCGQFOSMGUUXWIXRJBWDQGKYFKSUVUNOUXJOYCKBMONEAYNBPOPPIUZFMZARDMYZJCHEKWODRKDVICHUJLBTFJMBTFCVVLXJBKORDEPIWPAXLYZKINZMSMKSZBUTUZPZISMADHNEGRKTTVOGLIGQVQDABSLAUPWDRFANBIYQL");
    msg.range = 0.8435894857118148;

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
    msg.setTimeStamp(0.6653718577224621);
    msg.setSource(60252U);
    msg.setSourceEntity(38U);
    msg.setDestination(64244U);
    msg.setDestinationEntity(245U);
    msg.req_id = 5944U;
    msg.type = 46U;
    msg.status = 116U;
    msg.info.assign("KDDNBPGWXOXXCQNBAYLBHUIXBDRROULUKHERQLJKJSGSWZCBJTQEUYPIQYPHVENFBHFEKNSALOYTYORHUVMVGPTJKCKMZOIIQIADNSVDRPKJNKRMXOFVKWBQCMVLFQPCHCXDXVE");
    msg.range = 0.24237069795237787;

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
    msg.setTimeStamp(0.018919505301544848);
    msg.setSource(38542U);
    msg.setSourceEntity(94U);
    msg.setDestination(48128U);
    msg.setDestinationEntity(115U);
    msg.req_id = 26846U;
    msg.type = 99U;
    msg.status = 209U;
    msg.info.assign("HYWFQIEMEDHRZHIITTXXAERLQBCFFNPJYPWGVFMOLUGSPNNSEXSXUQKMUSQWOBFMGVVCKLQONPWLFEBYSJZYNLHKGVASTNXXCWWAUJJGGTBQCD");
    msg.range = 0.09484916233526897;

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
    msg.setTimeStamp(0.4673062079446415);
    msg.setSource(43067U);
    msg.setSourceEntity(216U);
    msg.setDestination(10660U);
    msg.setDestinationEntity(176U);
    msg.value = -21160;

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
    msg.setTimeStamp(0.8630636478003704);
    msg.setSource(43416U);
    msg.setSourceEntity(126U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(154U);
    msg.value = -3937;

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
    msg.setTimeStamp(0.35123713979601023);
    msg.setSource(30342U);
    msg.setSourceEntity(180U);
    msg.setDestination(3054U);
    msg.setDestinationEntity(189U);
    msg.value = 16001;

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
    msg.setTimeStamp(0.5884097900962683);
    msg.setSource(23944U);
    msg.setSourceEntity(72U);
    msg.setDestination(58975U);
    msg.setDestinationEntity(47U);
    msg.value = 0.5823758182814641;

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
    msg.setTimeStamp(0.8557529661961638);
    msg.setSource(48264U);
    msg.setSourceEntity(183U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(155U);
    msg.value = 0.2792782121875167;

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
    msg.setTimeStamp(0.2418386481667203);
    msg.setSource(7692U);
    msg.setSourceEntity(118U);
    msg.setDestination(3960U);
    msg.setDestinationEntity(180U);
    msg.value = 0.8462650962191886;

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
    msg.setTimeStamp(0.013955099477103827);
    msg.setSource(17607U);
    msg.setSourceEntity(189U);
    msg.setDestination(65142U);
    msg.setDestinationEntity(2U);
    msg.value = 0.24210073223785356;

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
    msg.setTimeStamp(0.48770411147955706);
    msg.setSource(805U);
    msg.setSourceEntity(208U);
    msg.setDestination(7097U);
    msg.setDestinationEntity(246U);
    msg.value = 0.7372744417188817;

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
    msg.setTimeStamp(0.7542420664818115);
    msg.setSource(23225U);
    msg.setSourceEntity(44U);
    msg.setDestination(48169U);
    msg.setDestinationEntity(235U);
    msg.value = 0.8516910845376454;

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
    msg.setTimeStamp(0.8296544775297772);
    msg.setSource(8790U);
    msg.setSourceEntity(239U);
    msg.setDestination(63178U);
    msg.setDestinationEntity(2U);
    msg.validity = 56527U;
    msg.type = 139U;
    msg.utc_year = 63434U;
    msg.utc_month = 121U;
    msg.utc_day = 50U;
    msg.utc_time = 0.3681135242146345;
    msg.lat = 0.3129594766977575;
    msg.lon = 0.8848931034045863;
    msg.height = 0.4233679392071843;
    msg.satellites = 172U;
    msg.cog = 0.9349255770797967;
    msg.sog = 0.018992318992037904;
    msg.hdop = 0.4417054070677484;
    msg.vdop = 0.7573426711005966;
    msg.hacc = 0.6149664332410367;
    msg.vacc = 0.5681728234905573;

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
    msg.setTimeStamp(0.6001406762050624);
    msg.setSource(45953U);
    msg.setSourceEntity(161U);
    msg.setDestination(46950U);
    msg.setDestinationEntity(191U);
    msg.validity = 6755U;
    msg.type = 165U;
    msg.utc_year = 8861U;
    msg.utc_month = 198U;
    msg.utc_day = 20U;
    msg.utc_time = 0.735306989287835;
    msg.lat = 0.6676769272717684;
    msg.lon = 0.9747188560141008;
    msg.height = 0.6434329141059172;
    msg.satellites = 158U;
    msg.cog = 0.5251306034456027;
    msg.sog = 0.4538008234457027;
    msg.hdop = 0.6187202705125342;
    msg.vdop = 0.8274087325387018;
    msg.hacc = 0.7543341506350819;
    msg.vacc = 0.048971040249783715;

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
    msg.setTimeStamp(0.4179518548129805);
    msg.setSource(26481U);
    msg.setSourceEntity(74U);
    msg.setDestination(62293U);
    msg.setDestinationEntity(208U);
    msg.validity = 22424U;
    msg.type = 236U;
    msg.utc_year = 41574U;
    msg.utc_month = 40U;
    msg.utc_day = 13U;
    msg.utc_time = 0.4103912121018657;
    msg.lat = 0.4420306178147775;
    msg.lon = 0.9936199508512746;
    msg.height = 0.8629679410231182;
    msg.satellites = 148U;
    msg.cog = 0.754044245871038;
    msg.sog = 0.22952533626310878;
    msg.hdop = 0.02719235639486617;
    msg.vdop = 0.5052853552071175;
    msg.hacc = 0.34658286043027986;
    msg.vacc = 0.9494452900511849;

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
    msg.setTimeStamp(0.8162801375415116);
    msg.setSource(35439U);
    msg.setSourceEntity(14U);
    msg.setDestination(60734U);
    msg.setDestinationEntity(61U);
    msg.time = 0.8709227078958967;
    msg.phi = 0.7133062187061376;
    msg.theta = 0.5504836976220776;
    msg.psi = 0.5352573068830282;
    msg.psi_magnetic = 0.09371758522404727;

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
    msg.setTimeStamp(0.14061005320936082);
    msg.setSource(6532U);
    msg.setSourceEntity(30U);
    msg.setDestination(12368U);
    msg.setDestinationEntity(198U);
    msg.time = 0.42430807291554506;
    msg.phi = 0.43892287232191485;
    msg.theta = 0.27954080629094513;
    msg.psi = 0.7385176301779368;
    msg.psi_magnetic = 0.4213090278622996;

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
    msg.setTimeStamp(0.03136003438358825);
    msg.setSource(56118U);
    msg.setSourceEntity(56U);
    msg.setDestination(46134U);
    msg.setDestinationEntity(252U);
    msg.time = 0.8573040917607785;
    msg.phi = 0.2418226004703039;
    msg.theta = 0.6234298135140675;
    msg.psi = 0.7553350817461832;
    msg.psi_magnetic = 0.11439063740482924;

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
    msg.setTimeStamp(0.47175008284752185);
    msg.setSource(32341U);
    msg.setSourceEntity(76U);
    msg.setDestination(20977U);
    msg.setDestinationEntity(65U);
    msg.time = 0.06948067748783215;
    msg.x = 0.43152828589393766;
    msg.y = 0.903959235797482;
    msg.z = 0.9435390653901025;
    msg.timestep = 0.993044524241451;

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
    msg.setTimeStamp(0.27989598025958184);
    msg.setSource(2721U);
    msg.setSourceEntity(202U);
    msg.setDestination(15735U);
    msg.setDestinationEntity(219U);
    msg.time = 0.1998128731301192;
    msg.x = 0.8744666307983141;
    msg.y = 0.20971043905746778;
    msg.z = 0.09611519108527344;
    msg.timestep = 0.9809420123016386;

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
    msg.setTimeStamp(0.9857754120176692);
    msg.setSource(14960U);
    msg.setSourceEntity(192U);
    msg.setDestination(28005U);
    msg.setDestinationEntity(193U);
    msg.time = 0.18467875885841345;
    msg.x = 0.5016644866545328;
    msg.y = 0.684976162925766;
    msg.z = 0.6872298060223956;
    msg.timestep = 0.3333696941677061;

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
    msg.setTimeStamp(0.09986888244063208);
    msg.setSource(17058U);
    msg.setSourceEntity(199U);
    msg.setDestination(17874U);
    msg.setDestinationEntity(30U);
    msg.time = 0.5632834092939959;
    msg.x = 0.4116533012486552;
    msg.y = 0.021846082276359646;
    msg.z = 0.4858735679534695;

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
    msg.setTimeStamp(0.297034666917641);
    msg.setSource(1856U);
    msg.setSourceEntity(204U);
    msg.setDestination(17901U);
    msg.setDestinationEntity(111U);
    msg.time = 0.26247400206498217;
    msg.x = 0.9540008603542732;
    msg.y = 0.7111516018291201;
    msg.z = 0.47726953562571206;

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
    msg.setTimeStamp(0.9630501818997349);
    msg.setSource(31072U);
    msg.setSourceEntity(20U);
    msg.setDestination(10979U);
    msg.setDestinationEntity(172U);
    msg.time = 0.9110448216341219;
    msg.x = 0.5787149326272765;
    msg.y = 0.25149089164272165;
    msg.z = 0.4559028966629125;

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
    msg.setTimeStamp(0.028015483870666547);
    msg.setSource(30454U);
    msg.setSourceEntity(122U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(2U);
    msg.time = 0.7825790567003883;
    msg.x = 0.9387058209867403;
    msg.y = 0.9831629054812071;
    msg.z = 0.10891861183149654;

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
    msg.setTimeStamp(0.27787835610308087);
    msg.setSource(5972U);
    msg.setSourceEntity(167U);
    msg.setDestination(39383U);
    msg.setDestinationEntity(233U);
    msg.time = 0.5261088473727855;
    msg.x = 0.890934942490029;
    msg.y = 0.4570477233152618;
    msg.z = 0.5022610344960547;

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
    msg.setTimeStamp(0.2498574531006471);
    msg.setSource(37343U);
    msg.setSourceEntity(66U);
    msg.setDestination(36399U);
    msg.setDestinationEntity(96U);
    msg.time = 0.011863899379240594;
    msg.x = 0.30645369869011485;
    msg.y = 0.06314182852380112;
    msg.z = 0.08805246555744162;

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
    msg.setTimeStamp(0.3454988753504431);
    msg.setSource(22818U);
    msg.setSourceEntity(20U);
    msg.setDestination(12329U);
    msg.setDestinationEntity(114U);
    msg.time = 0.5466739481061376;
    msg.x = 0.6732085522648599;
    msg.y = 0.1551902664152477;
    msg.z = 0.07129165993139097;

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
    msg.setTimeStamp(0.7504310139594053);
    msg.setSource(58464U);
    msg.setSourceEntity(80U);
    msg.setDestination(11366U);
    msg.setDestinationEntity(169U);
    msg.time = 0.22143781755510517;
    msg.x = 0.4059113861767327;
    msg.y = 0.49996831572620515;
    msg.z = 0.8556303897464118;

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
    msg.setTimeStamp(0.7584656956918088);
    msg.setSource(15533U);
    msg.setSourceEntity(235U);
    msg.setDestination(37160U);
    msg.setDestinationEntity(61U);
    msg.time = 0.4332947374806254;
    msg.x = 0.07027896745904794;
    msg.y = 0.881760635411146;
    msg.z = 0.7738529334035351;

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
    msg.setTimeStamp(0.4216717230171526);
    msg.setSource(30163U);
    msg.setSourceEntity(103U);
    msg.setDestination(5475U);
    msg.setDestinationEntity(113U);
    msg.validity = 85U;
    msg.x = 0.4389502524819019;
    msg.y = 0.8344572471424554;
    msg.z = 0.660161102295437;

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
    msg.setTimeStamp(0.9499213940814865);
    msg.setSource(771U);
    msg.setSourceEntity(139U);
    msg.setDestination(31891U);
    msg.setDestinationEntity(121U);
    msg.validity = 195U;
    msg.x = 0.9811221051050967;
    msg.y = 0.5470107851159459;
    msg.z = 0.6537593099238976;

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
    msg.setTimeStamp(0.8948675332895516);
    msg.setSource(26427U);
    msg.setSourceEntity(19U);
    msg.setDestination(31590U);
    msg.setDestinationEntity(230U);
    msg.validity = 0U;
    msg.x = 0.7364619741499615;
    msg.y = 0.43764703587033604;
    msg.z = 0.08181935527834694;

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
    msg.setTimeStamp(0.7614230604497246);
    msg.setSource(62245U);
    msg.setSourceEntity(74U);
    msg.setDestination(24552U);
    msg.setDestinationEntity(118U);
    msg.validity = 13U;
    msg.x = 0.2550647328101967;
    msg.y = 0.3983763619680558;
    msg.z = 0.7594951900856867;

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
    msg.setTimeStamp(0.8269146423237117);
    msg.setSource(7491U);
    msg.setSourceEntity(169U);
    msg.setDestination(42815U);
    msg.setDestinationEntity(203U);
    msg.validity = 28U;
    msg.x = 0.046383290110850295;
    msg.y = 0.32898625337542653;
    msg.z = 0.5491627941118685;

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
    msg.setTimeStamp(0.24622214742540616);
    msg.setSource(491U);
    msg.setSourceEntity(25U);
    msg.setDestination(16624U);
    msg.setDestinationEntity(220U);
    msg.validity = 243U;
    msg.x = 0.15781561177349157;
    msg.y = 0.35042236516500735;
    msg.z = 0.5186044693530554;

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
    msg.setTimeStamp(0.8684695633306548);
    msg.setSource(40939U);
    msg.setSourceEntity(146U);
    msg.setDestination(30571U);
    msg.setDestinationEntity(218U);
    msg.time = 0.23342524385512597;
    msg.x = 0.12439220131850559;
    msg.y = 0.5549108801225572;
    msg.z = 0.12816424744813915;

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
    msg.setTimeStamp(0.2017869264000206);
    msg.setSource(7716U);
    msg.setSourceEntity(109U);
    msg.setDestination(29824U);
    msg.setDestinationEntity(165U);
    msg.time = 0.663590154340176;
    msg.x = 0.022515674819012843;
    msg.y = 0.9813101867933153;
    msg.z = 0.09014585638581041;

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
    msg.setTimeStamp(0.2842697161633875);
    msg.setSource(59329U);
    msg.setSourceEntity(162U);
    msg.setDestination(31128U);
    msg.setDestinationEntity(205U);
    msg.time = 0.911849611523849;
    msg.x = 0.4343605362237247;
    msg.y = 0.4848478024348435;
    msg.z = 0.9030993098961108;

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
    msg.setTimeStamp(0.9505710173414633);
    msg.setSource(42345U);
    msg.setSourceEntity(41U);
    msg.setDestination(26775U);
    msg.setDestinationEntity(189U);
    msg.validity = 228U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8129303150741983;
    tmp_msg_0.y = 0.3721995894191784;
    tmp_msg_0.z = 0.8666001170584361;
    tmp_msg_0.phi = 0.0952703392776374;
    tmp_msg_0.theta = 0.29524930016676576;
    tmp_msg_0.psi = 0.8093113329748435;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9301570496859902;
    tmp_msg_1.beam_height = 0.9101950645200259;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.07039331839292684;

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
    msg.setTimeStamp(0.9522196244094504);
    msg.setSource(47136U);
    msg.setSourceEntity(110U);
    msg.setDestination(4208U);
    msg.setDestinationEntity(80U);
    msg.validity = 211U;
    msg.value = 0.7373932550165034;

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
    msg.setTimeStamp(0.01818417316721832);
    msg.setSource(138U);
    msg.setSourceEntity(200U);
    msg.setDestination(59646U);
    msg.setDestinationEntity(81U);
    msg.validity = 107U;
    msg.value = 0.5123228859254094;

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
    msg.setTimeStamp(0.6043479013436535);
    msg.setSource(22091U);
    msg.setSourceEntity(140U);
    msg.setDestination(12648U);
    msg.setDestinationEntity(189U);
    msg.value = 0.723751221353761;

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
    msg.setTimeStamp(0.5982190710054323);
    msg.setSource(59979U);
    msg.setSourceEntity(131U);
    msg.setDestination(52813U);
    msg.setDestinationEntity(156U);
    msg.value = 0.875328545652292;

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
    msg.setTimeStamp(0.029581774394902283);
    msg.setSource(18788U);
    msg.setSourceEntity(159U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(239U);
    msg.value = 0.4241470867000545;

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
    msg.setTimeStamp(0.7531975488400695);
    msg.setSource(61266U);
    msg.setSourceEntity(180U);
    msg.setDestination(43822U);
    msg.setDestinationEntity(50U);
    msg.value = 0.3357435865427162;

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
    msg.setTimeStamp(0.20333778241814138);
    msg.setSource(24919U);
    msg.setSourceEntity(68U);
    msg.setDestination(50959U);
    msg.setDestinationEntity(174U);
    msg.value = 0.5124524781145671;

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
    msg.setTimeStamp(0.5755421063316166);
    msg.setSource(65074U);
    msg.setSourceEntity(183U);
    msg.setDestination(25595U);
    msg.setDestinationEntity(67U);
    msg.value = 0.2292746478380956;

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
    msg.setTimeStamp(0.18154230236953217);
    msg.setSource(22468U);
    msg.setSourceEntity(221U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(135U);
    msg.value = 0.3056697725902774;

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
    msg.setTimeStamp(0.6536819407474588);
    msg.setSource(38130U);
    msg.setSourceEntity(16U);
    msg.setDestination(60710U);
    msg.setDestinationEntity(235U);
    msg.value = 0.957531438103403;

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
    msg.setTimeStamp(0.16216898728558848);
    msg.setSource(38089U);
    msg.setSourceEntity(61U);
    msg.setDestination(10741U);
    msg.setDestinationEntity(75U);
    msg.value = 0.1387722392616294;

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
    msg.setTimeStamp(0.2507014616228632);
    msg.setSource(23571U);
    msg.setSourceEntity(109U);
    msg.setDestination(49731U);
    msg.setDestinationEntity(21U);
    msg.value = 0.4161926093718227;

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
    msg.setTimeStamp(0.4268226333394487);
    msg.setSource(5068U);
    msg.setSourceEntity(234U);
    msg.setDestination(30401U);
    msg.setDestinationEntity(55U);
    msg.value = 0.19299736798044798;

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
    msg.setTimeStamp(0.3237399210337897);
    msg.setSource(60303U);
    msg.setSourceEntity(166U);
    msg.setDestination(39621U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6884616419980131;

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
    msg.setTimeStamp(0.061439957330683304);
    msg.setSource(16928U);
    msg.setSourceEntity(2U);
    msg.setDestination(39466U);
    msg.setDestinationEntity(131U);
    msg.value = 0.8219985098469885;

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
    msg.setTimeStamp(0.898683610258196);
    msg.setSource(61953U);
    msg.setSourceEntity(1U);
    msg.setDestination(53116U);
    msg.setDestinationEntity(225U);
    msg.value = 0.9043939930267707;

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
    msg.setTimeStamp(0.23574302688214976);
    msg.setSource(58344U);
    msg.setSourceEntity(248U);
    msg.setDestination(13706U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5307857643785687;

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
    msg.setTimeStamp(0.9314039304947835);
    msg.setSource(24943U);
    msg.setSourceEntity(156U);
    msg.setDestination(63686U);
    msg.setDestinationEntity(6U);
    msg.value = 0.4134657136881772;

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
    msg.setTimeStamp(0.00504422772815416);
    msg.setSource(53529U);
    msg.setSourceEntity(187U);
    msg.setDestination(45776U);
    msg.setDestinationEntity(217U);
    msg.value = 0.8051638001538696;

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
    msg.setTimeStamp(0.20330003946562436);
    msg.setSource(2642U);
    msg.setSourceEntity(76U);
    msg.setDestination(6745U);
    msg.setDestinationEntity(237U);
    msg.value = 0.3525300127515597;

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
    msg.setTimeStamp(0.6042528783702978);
    msg.setSource(24679U);
    msg.setSourceEntity(237U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5237538839427662;

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
    msg.setTimeStamp(0.6156904892803517);
    msg.setSource(30967U);
    msg.setSourceEntity(206U);
    msg.setDestination(62940U);
    msg.setDestinationEntity(58U);
    msg.value = 0.4233644604392133;

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
    msg.setTimeStamp(0.6853180192289261);
    msg.setSource(29477U);
    msg.setSourceEntity(156U);
    msg.setDestination(55629U);
    msg.setDestinationEntity(127U);
    msg.value = 0.8035218480896522;

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
    msg.setTimeStamp(0.5576543494400809);
    msg.setSource(35875U);
    msg.setSourceEntity(126U);
    msg.setDestination(15771U);
    msg.setDestinationEntity(243U);
    msg.value = 0.6377103991073114;

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
    msg.setTimeStamp(0.7537336255083362);
    msg.setSource(1777U);
    msg.setSourceEntity(65U);
    msg.setDestination(28802U);
    msg.setDestinationEntity(239U);
    msg.value = 0.03693629853219538;

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
    msg.setTimeStamp(0.00831269683530389);
    msg.setSource(30507U);
    msg.setSourceEntity(66U);
    msg.setDestination(62134U);
    msg.setDestinationEntity(248U);
    msg.value = 0.4813965653655857;

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
    msg.setTimeStamp(0.18156742957952754);
    msg.setSource(60068U);
    msg.setSourceEntity(80U);
    msg.setDestination(39295U);
    msg.setDestinationEntity(173U);
    msg.direction = 0.7558590426446172;
    msg.speed = 0.8891740141239449;
    msg.turbulence = 0.5382643049317315;

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
    msg.setTimeStamp(0.09759087576567516);
    msg.setSource(28388U);
    msg.setSourceEntity(92U);
    msg.setDestination(49570U);
    msg.setDestinationEntity(116U);
    msg.direction = 0.29529240994330164;
    msg.speed = 0.3224166086649972;
    msg.turbulence = 0.780666754121813;

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
    msg.setTimeStamp(0.42066060158726404);
    msg.setSource(25416U);
    msg.setSourceEntity(103U);
    msg.setDestination(53430U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.23739142746617092;
    msg.speed = 0.518916940570086;
    msg.turbulence = 0.7617762292026599;

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
    msg.setTimeStamp(0.49305054047306573);
    msg.setSource(31854U);
    msg.setSourceEntity(136U);
    msg.setDestination(8506U);
    msg.setDestinationEntity(126U);
    msg.value = 0.31815078095837057;

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
    msg.setTimeStamp(0.1628459275874108);
    msg.setSource(5966U);
    msg.setSourceEntity(48U);
    msg.setDestination(24650U);
    msg.setDestinationEntity(187U);
    msg.value = 0.600391549996225;

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
    msg.setTimeStamp(0.32928427245128267);
    msg.setSource(3248U);
    msg.setSourceEntity(68U);
    msg.setDestination(39292U);
    msg.setDestinationEntity(16U);
    msg.value = 0.2149083408721555;

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
    msg.setTimeStamp(0.3059549442924949);
    msg.setSource(5811U);
    msg.setSourceEntity(126U);
    msg.setDestination(16824U);
    msg.setDestinationEntity(189U);
    msg.value.assign("PZBEGIZASPWTHLJTISVOSCGUKTXXMOBUPYUTSPNKVFWVBGRYWZNSDLOFAGSHQPZOKDJDTLFKSAFLRAAVXKXHGNSGBIVZLDZWDQXGAYXJEFIHCVBWQIEDXPHWBEPNIQBDZVQCILVBQOMYKERRYKPJNTMFXLGHSROJ");

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
    msg.setTimeStamp(0.019489421063466073);
    msg.setSource(11947U);
    msg.setSourceEntity(73U);
    msg.setDestination(30668U);
    msg.setDestinationEntity(133U);
    msg.value.assign("XUOFCHPSKIYTBOMRAMWFLEPBMEPUXYWMHAVCSDLISIWDOGKNYZDXUGRCETMNROTLADJGBARFHXPVTWUWLDUALTBUMRZIVZHVKIVGOBVPOQZFCSBWITLVQKXZTHGJFNQOJGKEGEKXLBF");

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
    msg.setTimeStamp(0.04067363609735675);
    msg.setSource(57900U);
    msg.setSourceEntity(48U);
    msg.setDestination(23137U);
    msg.setDestinationEntity(137U);
    msg.value.assign("KQCOWLJNSTCSUANHJTPMHNIUBLHABGYIUQMKODIWZKZXDWAHRNSHSAVMEREMRQHLYWUZJOAYIJKUFZQCYOCCVCTRIRWATTWVTAHEEJUQIEDJNULIXPJMLCDUVPKVPRDAOKFBPIJKCIDGFYBFYKGHZFMSOQGBXVMMOPFBXWSQEBORZRYDWBXEFXFOFYLHCYTSVBTGGQBOENFERPYVLWVLZJTZRGVXUZDMGJUNHDNGXLAQLPXTMSK");

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
    msg.setTimeStamp(0.3534139608658148);
    msg.setSource(29478U);
    msg.setSourceEntity(228U);
    msg.setDestination(5988U);
    msg.setDestinationEntity(11U);
    const signed char tmp_msg_0[] = {-47, 102, -106, 65, 19, -8, 42, 30, -52, -53, 43, 55, -56, 121, -104, 81, -96, 119, -8, 3, -80, -63, 16, 37, -26, -44, -118, -127, 7, -14, 118, -34, 113, -96, 71, 34, 78, 67, 48, -120, -95, -107, 27, 84, -101, -59, 89, -35, -118, 35, 56, 15, -80, 71, 122, -103, -10, 95, 58, -92, -65, -24, 114, -11, 104, -58, 113, 10, 1, -24, 111, -25, -125, 62, -104, -45, 34, 26, 29, 114, -53, -3, -42, -57, 114, -100, -110, -108, 56, 0, 70, 61, -105, 70, -32, -28, -58, 72, -67, 97, 88, -50, -84, -68, -118, -65, -108, -92, 104, 117, 16, 54, -127, 34, 103, -93, 63, 88, 85, 4, 95, 126, -48, 118, 21, -76, 52, -66, -82, -22, 15, 80, 14, 95, 79, -105, -96, 73, -65, -91, -6, -98, 121, 106, -7, -70, 125, 75, 116, 11, 22, -124, 34, 29, -69, -50, 100, 19, 28, -125, -52, -102, -48, -36, -92, 22, -65, 94, -102, -102, -59, 18, 17, 62, 38, -88, -119, 94, 52, 126, 49, 124, 90, 51, 93, 97, -32, 14, 21, 42, -46, 13, 69, -116, 114, -68, 41, 19, -66, -61, 114, 12, -3, 45, 79, 35, 109, -84, -70, 15, -68, -39, 85, -4, 12, 34, 99, 75, 19, 31, 12, -119};
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
    msg.setTimeStamp(0.977211477398852);
    msg.setSource(49904U);
    msg.setSourceEntity(237U);
    msg.setDestination(9664U);
    msg.setDestinationEntity(194U);
    const signed char tmp_msg_0[] = {-12, 98, -49, -42, 2, -120, 14, 60, -10, 70, -16, -86, -26, 93, -115, 91, -69, 47, 121, 4, -99, -53, 91, -18, -18, -122, 19, 85, -92, -76, -74, 126, 112, 96, -95, -69, -17, 120, 90, -28, -42, -128, 9, -108, 75, 12, 51, 73, -75, -64, 68, -93, -108, 16, 115, -46, -93, -99, 27, -80, -27, 109, -22, -62, -36, 90, -40, -17, 3, -72, 29, -125, -49, 126, -85, -23, 32, -103, -30, -64, 53, -1, 69, -44, 29, 66, -13, 23, -108, -18, 110, 113, -38, 124, 35, 19, -4, -28, -85, -25, -122, 74, 126, 60, -75, 85, 4, -102, -25, 76, 26, 125, 59, 54, -40, 40, -119, -45, -91, -98, 54, -125, 107, -13, 81, -50, 10, -32, -113, -110, -112, -86, -72, -105, 8, 28, 94, 86, 9, 13, 122, -110, 44, -59, 36, -12, -105, -48, 125, -9, 86, -66, 7, 49, 111, 123, -25, 72, -92, -20, 20, 14, 121, -76, 97, -118, 61, 14, 117, -53, -31, 68, -84, 84, 78, 114, -43, -69, 2, 24, 100, 81, -51, -53, -31, 66, -101, 91, -40, -45, 65, -83, 8, 9};
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
    msg.setTimeStamp(0.2399192091102199);
    msg.setSource(53581U);
    msg.setSourceEntity(105U);
    msg.setDestination(14760U);
    msg.setDestinationEntity(171U);
    const signed char tmp_msg_0[] = {92, -12, -49, -16, 21, -79, 74, -92, -91, 121, -10, -3, 104, 93, 40, 104, -88, -102, 10, 41, -53, 48, 3, 64, -114, 34, -41, 80, -13, 20, 14, 125, -91, -54, -121, -4, 111, 76, -114, 93, -31, 2, 86, -54, 62, -56, -101, 91, 80, -91, 88, 77, -123, 84, -4, 46, -128, -82, 76, -12, -122, 110, -48, -5, -16, 13, 45, 104, -60, -87, -25, -83, -127, 115, -47, -62, 30, -42, 117, -57, -49, 39, 122, 25, -76, 32, -96, 41, 57, 88, -72, -127, 109, -69, -94, 105, -39, 50, -97, 84, -64, 31, 88, -110, 14, -106, 13, -106, -64, 4, -57, 67, -58, -30, 47, 82, 91, -57, 82, 20, 96, -62, -61, -36, -109, 102, 113, -11, 5, -85, -126, 78, 7, -71, -105, 18, 5, -85, 107, 121, 123, -11, -22, -55, -93, -69, -37, -60, 96, 23, -126, 41, 75, -87, 109, -31, -18, 45, 1, 15, -1, -36, -54, 59};
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
    msg.setTimeStamp(0.07582357162660092);
    msg.setSource(6499U);
    msg.setSourceEntity(8U);
    msg.setDestination(13198U);
    msg.setDestinationEntity(38U);
    msg.value = 0.5189230519897665;

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
    msg.setTimeStamp(0.8768705760936099);
    msg.setSource(52638U);
    msg.setSourceEntity(40U);
    msg.setDestination(49812U);
    msg.setDestinationEntity(58U);
    msg.value = 0.37884280746753896;

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
    msg.setTimeStamp(0.0710820487888667);
    msg.setSource(54468U);
    msg.setSourceEntity(245U);
    msg.setDestination(48371U);
    msg.setDestinationEntity(240U);
    msg.value = 0.15497302542160063;

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
    msg.setTimeStamp(0.3866827987143636);
    msg.setSource(27207U);
    msg.setSourceEntity(107U);
    msg.setDestination(61627U);
    msg.setDestinationEntity(228U);
    msg.type = 90U;
    msg.frequency = 1344596653U;
    msg.min_range = 26831U;
    msg.max_range = 52499U;
    msg.bits_per_point = 134U;
    msg.scale_factor = 0.7481324665381839;
    const signed char tmp_msg_0[] = {24, 81, -104, -31, 53, -45, -31, -48, 11, 45, -81, 84, 55, -10, 49, -38, 116, 16, -103, 35, 121, 85, 59, -19, -120, 18, -117, 6, 47, -27, 112, 7, -79, -43, 109, 30, -118, 102, 106, -60, 77, -33, -19, -61, -128, 16, -92, -15, 39, -70, 83, -49, -55, 120, -6, -72, 114, -60, -64, -43, -116, 76, 21, -71, 68, 98, 104, -99, -47, 69, 97, 88, 103, -20, 51, 23, 54, -86, -80, 2, -62, -128, 119, -63, 76, -34, -114, -102, -93, -9, -40, -42, 27, -3, 125, 33, 55, -95, -64, -26, 37, 87, 47, -24, 29, -73, -6, 122, -88, 110, -91, -29, 107, -91, -39, -40, 18, -126, 66, 34, -91, 8, 124, 27, -87, 15, 63, 112, -15, -39, -55, 102, -17, -89, -11, -57, 115, 81, -32, -45, 101, -103, 57, -67, 94, 107, -24, -87, -37, -37, 99, -41, 45, 58, -67, -107, -59, -78, 78, 90, 109, -120, 49, -100, -16, 115, 33, -70, 114, 43, -40, -51, -17, 78, -26, 112, -109, -28, -33, -51, -43, 87, -33, -118, -72, -91, 3, -12, 22, -120, 107, 0, 114, 60, 59, -5, 48, -81, -32, -29, -59, 98, -91, -82, -55, -92, 115, 8, -20, -117, 9, -52, 66, -99, 35, 112, -78, -100, -94, -126, -35, 58, -116, 25, -112, -19, -116, -120, -30, 67, 35, -84, -22, 109, -80, -78, 47, -1, -47, -73, -94, 86, -26, -46};
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
    msg.setTimeStamp(0.3117006561859562);
    msg.setSource(16341U);
    msg.setSourceEntity(252U);
    msg.setDestination(58799U);
    msg.setDestinationEntity(38U);
    msg.type = 70U;
    msg.frequency = 1296337019U;
    msg.min_range = 13248U;
    msg.max_range = 36906U;
    msg.bits_per_point = 125U;
    msg.scale_factor = 0.9421624768489478;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.021768884886730788;
    tmp_msg_0.beam_height = 0.7271341192523068;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {48, 47, -56, -32, -104, -123, 18, -90, -111, -6, 7, 69, 10, -108, 93, 72, -39};
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
    msg.setTimeStamp(0.0817217944147931);
    msg.setSource(28084U);
    msg.setSourceEntity(99U);
    msg.setDestination(38181U);
    msg.setDestinationEntity(42U);
    msg.type = 229U;
    msg.frequency = 1824333231U;
    msg.min_range = 56985U;
    msg.max_range = 23446U;
    msg.bits_per_point = 9U;
    msg.scale_factor = 0.9723898107021851;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.34037256619851963;
    tmp_msg_0.beam_height = 0.013576131290958027;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-20, 114, 38, 46, 35, -62, 57, -13, -17, -115, -22, -108, -40, 98, 23, -114, -53, 122, 125, 117, -8, 10, 10, 14, 57, 65, 113, 67, -3, 59, 8, 52, -21, 117, -15, 45, -38, 51, -14, -117, -16, -127, 57, -59, 50, 15, -48, 43, -84, -39, -3, -106, -34, 49, -72, -71, 48, -59, -102, 95, 125, -86, -123, -105, 75, 6, -17, -94, 42, 63, 37, -22, 126, -8, -9, -124, -46, -106, 18, 20, -23, -29, 21, -124, -70, 93, 40, 44, -126, 50, 125, 35, 79, -3, 2, -21, -30, -6, -44, 50, 39, 123, 73, 89, 40, -7, 33, 21, -46, -82, -73, -23, 85, 6, -62, 119, -60, 11, -53, 50, 54, 84, 98, -79, 86, 97, -99, 74, 72, 96, 42, -103, 96, 54, -16, -5, -26, 48, 21, 0, 60, 38, 117, -96, 9, -82, -107, -90, -58, -9, 29, -43, 35, 30, 35, 87, 30, 121, -6, -32, 43, 98, 107, 49, -122, 3, -25, 90, -111, 111, -11, -83, 8, -14, -65, -30, 94, 117, 121, -44, 84, 113, -34, -39, -37, 55, -4, 66, 36, -55, 61, 42, 1, -46, 76, -37, 78, 103, 7, -29, -76, -99, -66, -52, -12, 39, -73, -127, 89, 79, 20, 58, 85, 18, 61, -123, -126, -33, 32, -14, -54, -18, -99, -10, -123, -17, -120, 50, -33, 50, 52};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.9882137264149697);
    msg.setSource(19166U);
    msg.setSourceEntity(25U);
    msg.setDestination(17971U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.408903002275949);
    msg.setSource(9167U);
    msg.setSourceEntity(205U);
    msg.setDestination(41805U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.7880257352856821);
    msg.setSource(4121U);
    msg.setSourceEntity(43U);
    msg.setDestination(5889U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.002857359127056869);
    msg.setSource(20105U);
    msg.setSourceEntity(125U);
    msg.setDestination(59369U);
    msg.setDestinationEntity(97U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.3323780563741042);
    msg.setSource(52736U);
    msg.setSourceEntity(143U);
    msg.setDestination(2020U);
    msg.setDestinationEntity(47U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.08106653867619384);
    msg.setSource(61017U);
    msg.setSourceEntity(222U);
    msg.setDestination(20836U);
    msg.setDestinationEntity(76U);
    msg.op = 16U;

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
    msg.setTimeStamp(0.6803907817329697);
    msg.setSource(19506U);
    msg.setSourceEntity(43U);
    msg.setDestination(49682U);
    msg.setDestinationEntity(20U);
    msg.value = 0.48499578012115385;
    msg.confidence = 0.6913368873435819;
    msg.opmodes.assign("XTLPHSGCKFBRLROHMGLZZYKKTIWNMGUPIIWOBSDSTFMOBIJFB");

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
    msg.setTimeStamp(0.7544534091745475);
    msg.setSource(47476U);
    msg.setSourceEntity(202U);
    msg.setDestination(10150U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8236156989347212;
    msg.confidence = 0.14852061016225226;
    msg.opmodes.assign("SNKBXVXVFVGELGHTOALQDCAYCFPEKGJVBPLCPCYORBLTMSCNRCFYEXYWMWSDJDBJLNPZPSGERTXIXZVXFNNFKORAHDAYOFHMPODKNLTPIAEGNWVUTHGKSMRYTQQUPGEMJDHOKQORUHURUFTAEQMOJUILKZGVMVXYRKPMFCBHZBHWVWAJXQTJWDZZHZRLAXDOQJRSUB");

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
    msg.setTimeStamp(0.49242700260623884);
    msg.setSource(16528U);
    msg.setSourceEntity(245U);
    msg.setDestination(442U);
    msg.setDestinationEntity(193U);
    msg.value = 0.5939049037498084;
    msg.confidence = 0.3359883589425291;
    msg.opmodes.assign("VRZIAVIFAEGMHXDHTYJGQSFWTMLGRTJUSKGNMDOPGHBWHKDNSFYLMNQKCZATDIODEBEVSIPZOXZCCPIXJDMQLHBGHZMNVBDC");

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
    msg.setTimeStamp(0.9393935106969646);
    msg.setSource(18637U);
    msg.setSourceEntity(155U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(56U);
    msg.itow = 2145251302U;
    msg.lat = 0.39090371791378564;
    msg.lon = 0.6183772527563146;
    msg.height_ell = 0.9373018750626393;
    msg.height_sea = 0.8077745111972897;
    msg.hacc = 0.11821382573390748;
    msg.vacc = 0.22471326601751762;
    msg.vel_n = 0.08398977972160049;
    msg.vel_e = 0.2197026508497234;
    msg.vel_d = 0.17577254251521734;
    msg.speed = 0.32669430392881005;
    msg.gspeed = 0.8388872200491438;
    msg.heading = 0.18319788484696553;
    msg.sacc = 0.9946296151076799;
    msg.cacc = 0.6214504848033932;

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
    msg.setTimeStamp(0.5956840860853241);
    msg.setSource(10277U);
    msg.setSourceEntity(112U);
    msg.setDestination(41713U);
    msg.setDestinationEntity(78U);
    msg.itow = 548410751U;
    msg.lat = 0.9946176409338;
    msg.lon = 0.0479566159990642;
    msg.height_ell = 0.6155850843924188;
    msg.height_sea = 0.9921698092301623;
    msg.hacc = 0.0670522206770332;
    msg.vacc = 0.5831177551469199;
    msg.vel_n = 0.7004124743595066;
    msg.vel_e = 0.22658354578253193;
    msg.vel_d = 0.8326802794796205;
    msg.speed = 0.5733773028963507;
    msg.gspeed = 0.7836729640417203;
    msg.heading = 0.8369655520122917;
    msg.sacc = 0.6834905066334005;
    msg.cacc = 0.562983786086133;

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
    msg.setTimeStamp(0.32261696849242527);
    msg.setSource(13934U);
    msg.setSourceEntity(37U);
    msg.setDestination(51019U);
    msg.setDestinationEntity(211U);
    msg.itow = 2706885108U;
    msg.lat = 0.5939009354783988;
    msg.lon = 0.042647152341557915;
    msg.height_ell = 0.2816026088770013;
    msg.height_sea = 0.11518039199980545;
    msg.hacc = 0.5423898382908044;
    msg.vacc = 0.6821769370725016;
    msg.vel_n = 0.05678707636017133;
    msg.vel_e = 0.06424589331262276;
    msg.vel_d = 0.3003463931633902;
    msg.speed = 0.8911483878239536;
    msg.gspeed = 0.8121080824965848;
    msg.heading = 0.3152863204798457;
    msg.sacc = 0.8629370409312505;
    msg.cacc = 0.6616577945944355;

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
    msg.setTimeStamp(0.3156872081433233);
    msg.setSource(40765U);
    msg.setSourceEntity(239U);
    msg.setDestination(41697U);
    msg.setDestinationEntity(207U);
    msg.id = 27U;
    msg.value = 0.5293785961739752;

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
    msg.setTimeStamp(0.37741263550398363);
    msg.setSource(2257U);
    msg.setSourceEntity(60U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(231U);
    msg.id = 187U;
    msg.value = 0.6722039233778052;

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
    msg.setTimeStamp(0.7521197842282272);
    msg.setSource(57803U);
    msg.setSourceEntity(232U);
    msg.setDestination(46936U);
    msg.setDestinationEntity(150U);
    msg.id = 185U;
    msg.value = 0.3869745186881246;

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
    msg.setTimeStamp(0.524079899936444);
    msg.setSource(5501U);
    msg.setSourceEntity(82U);
    msg.setDestination(57331U);
    msg.setDestinationEntity(29U);
    msg.x = 0.39989997010601064;
    msg.y = 0.8641761141569813;
    msg.z = 0.7613152853954454;
    msg.phi = 0.3957009326934853;
    msg.theta = 0.4382947735561137;
    msg.psi = 0.9711279511465479;

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
    msg.setTimeStamp(0.6657301847259621);
    msg.setSource(4944U);
    msg.setSourceEntity(61U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(11U);
    msg.x = 0.92304300447654;
    msg.y = 0.6017125101013463;
    msg.z = 0.8969534350289904;
    msg.phi = 0.3239442008200838;
    msg.theta = 0.1663778094645998;
    msg.psi = 0.4261138607628272;

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
    msg.setTimeStamp(0.7581592453362177);
    msg.setSource(12062U);
    msg.setSourceEntity(222U);
    msg.setDestination(22344U);
    msg.setDestinationEntity(53U);
    msg.x = 0.21107345117992815;
    msg.y = 0.17346539253008997;
    msg.z = 0.35319057037943413;
    msg.phi = 0.8929474070900115;
    msg.theta = 0.10527912683504881;
    msg.psi = 0.5262352804330833;

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
    msg.setTimeStamp(0.9717762235783388);
    msg.setSource(39652U);
    msg.setSourceEntity(84U);
    msg.setDestination(27673U);
    msg.setDestinationEntity(240U);
    msg.beam_width = 0.41214078325779735;
    msg.beam_height = 0.5934942955125675;

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
    msg.setTimeStamp(0.8265401598603349);
    msg.setSource(10904U);
    msg.setSourceEntity(52U);
    msg.setDestination(37984U);
    msg.setDestinationEntity(85U);
    msg.beam_width = 0.9993243978155694;
    msg.beam_height = 0.8133416940457723;

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
    msg.setTimeStamp(0.9738152498736306);
    msg.setSource(33602U);
    msg.setSourceEntity(67U);
    msg.setDestination(62146U);
    msg.setDestinationEntity(43U);
    msg.beam_width = 0.5439651417964434;
    msg.beam_height = 0.6385769088633255;

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
    msg.setTimeStamp(0.5298336323866075);
    msg.setSource(3242U);
    msg.setSourceEntity(5U);
    msg.setDestination(1869U);
    msg.setDestinationEntity(39U);
    msg.sane = 219U;

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
    msg.setTimeStamp(0.6053866023780311);
    msg.setSource(41946U);
    msg.setSourceEntity(30U);
    msg.setDestination(1239U);
    msg.setDestinationEntity(11U);
    msg.sane = 122U;

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
    msg.setTimeStamp(0.4084849525858837);
    msg.setSource(59876U);
    msg.setSourceEntity(7U);
    msg.setDestination(63476U);
    msg.setDestinationEntity(252U);
    msg.sane = 52U;

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
    msg.setTimeStamp(0.99527053710042);
    msg.setSource(20798U);
    msg.setSourceEntity(253U);
    msg.setDestination(50031U);
    msg.setDestinationEntity(53U);
    msg.value = 0.4547979220666809;

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
    msg.setTimeStamp(0.5639447999289205);
    msg.setSource(28122U);
    msg.setSourceEntity(248U);
    msg.setDestination(19691U);
    msg.setDestinationEntity(140U);
    msg.value = 0.013257214351763302;

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
    msg.setTimeStamp(0.12744752637267576);
    msg.setSource(51414U);
    msg.setSourceEntity(91U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(12U);
    msg.value = 0.8939293817643889;

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
    msg.setTimeStamp(0.09120122606529257);
    msg.setSource(4684U);
    msg.setSourceEntity(67U);
    msg.setDestination(28845U);
    msg.setDestinationEntity(177U);
    msg.value = 0.07870867261043246;

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
    msg.setTimeStamp(0.5850195645035103);
    msg.setSource(36377U);
    msg.setSourceEntity(69U);
    msg.setDestination(19509U);
    msg.setDestinationEntity(70U);
    msg.value = 0.6277365338132824;

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
    msg.setTimeStamp(0.11208100228333295);
    msg.setSource(26775U);
    msg.setSourceEntity(144U);
    msg.setDestination(53250U);
    msg.setDestinationEntity(54U);
    msg.value = 0.9794248092613861;

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
    msg.setTimeStamp(0.18838022985823633);
    msg.setSource(9200U);
    msg.setSourceEntity(139U);
    msg.setDestination(45895U);
    msg.setDestinationEntity(184U);
    msg.value = 0.67979663987063;

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
    msg.setTimeStamp(0.3233862462986793);
    msg.setSource(12354U);
    msg.setSourceEntity(133U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(92U);
    msg.value = 0.3813102970143306;

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
    msg.setTimeStamp(0.39199756189975077);
    msg.setSource(60074U);
    msg.setSourceEntity(38U);
    msg.setDestination(19573U);
    msg.setDestinationEntity(162U);
    msg.value = 0.20019984789971035;

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
    msg.setTimeStamp(0.4309698293499289);
    msg.setSource(56275U);
    msg.setSourceEntity(157U);
    msg.setDestination(45413U);
    msg.setDestinationEntity(138U);
    msg.value = 0.19604832195797572;

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
    msg.setTimeStamp(0.7338245165334903);
    msg.setSource(44207U);
    msg.setSourceEntity(205U);
    msg.setDestination(28228U);
    msg.setDestinationEntity(32U);
    msg.value = 0.09475989597118673;

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
    msg.setTimeStamp(0.7828915304919518);
    msg.setSource(28872U);
    msg.setSourceEntity(108U);
    msg.setDestination(1122U);
    msg.setDestinationEntity(62U);
    msg.value = 0.8735212452778822;

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
    msg.setTimeStamp(0.4505958928464754);
    msg.setSource(58748U);
    msg.setSourceEntity(128U);
    msg.setDestination(60737U);
    msg.setDestinationEntity(106U);
    msg.value = 0.34541739936263827;

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
    msg.setTimeStamp(0.6541509981853001);
    msg.setSource(16105U);
    msg.setSourceEntity(222U);
    msg.setDestination(42376U);
    msg.setDestinationEntity(244U);
    msg.value = 0.2539318377108035;

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
    msg.setTimeStamp(0.4126334282087287);
    msg.setSource(29809U);
    msg.setSourceEntity(97U);
    msg.setDestination(60749U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6757440772914675;

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
    msg.setTimeStamp(0.15426353870084253);
    msg.setSource(60236U);
    msg.setSourceEntity(132U);
    msg.setDestination(45302U);
    msg.setDestinationEntity(25U);
    msg.value = 0.7786335346803398;

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
    msg.setTimeStamp(0.10308124700576904);
    msg.setSource(29323U);
    msg.setSourceEntity(238U);
    msg.setDestination(52573U);
    msg.setDestinationEntity(225U);
    msg.value = 0.32703024007345194;

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
    msg.setTimeStamp(0.01556247427377333);
    msg.setSource(39515U);
    msg.setSourceEntity(28U);
    msg.setDestination(31057U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7821728875082036;

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
    msg.setTimeStamp(0.9910087411469104);
    msg.setSource(30242U);
    msg.setSourceEntity(238U);
    msg.setDestination(24600U);
    msg.setDestinationEntity(244U);
    msg.value = 0.7112814373890448;

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
    msg.setTimeStamp(0.26100632581306127);
    msg.setSource(29247U);
    msg.setSourceEntity(4U);
    msg.setDestination(26702U);
    msg.setDestinationEntity(252U);
    msg.value = 0.9466089505701079;

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
    msg.setTimeStamp(0.14135765296878888);
    msg.setSource(39640U);
    msg.setSourceEntity(17U);
    msg.setDestination(30962U);
    msg.setDestinationEntity(12U);
    msg.value = 0.3264152910927919;

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
    msg.setTimeStamp(0.5392013024142804);
    msg.setSource(20991U);
    msg.setSourceEntity(207U);
    msg.setDestination(27988U);
    msg.setDestinationEntity(111U);
    msg.value = 0.6025718013731848;

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
    msg.setTimeStamp(0.8737503533962524);
    msg.setSource(46363U);
    msg.setSourceEntity(219U);
    msg.setDestination(2319U);
    msg.setDestinationEntity(48U);
    msg.value = 0.89550151028139;

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
    msg.setTimeStamp(0.2574347069699934);
    msg.setSource(60169U);
    msg.setSourceEntity(193U);
    msg.setDestination(11106U);
    msg.setDestinationEntity(92U);
    msg.value = 0.19757304606784631;

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
    msg.setTimeStamp(0.5519574026351786);
    msg.setSource(31711U);
    msg.setSourceEntity(153U);
    msg.setDestination(61739U);
    msg.setDestinationEntity(146U);
    msg.validity = 40631U;
    msg.type = 47U;
    msg.tow = 2696401848U;
    msg.base_lat = 0.6575954482928026;
    msg.base_lon = 0.5282285007969804;
    msg.base_height = 0.5185876207915762;
    msg.n = 0.526276044184746;
    msg.e = 0.5981855681980888;
    msg.d = 0.05487340820832087;
    msg.v_n = 0.16044374162470532;
    msg.v_e = 0.8811893621780281;
    msg.v_d = 0.7692699002029482;
    msg.satellites = 145U;
    msg.iar_hyp = 23786U;
    msg.iar_ratio = 0.06901708558673025;

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
    msg.setTimeStamp(0.16713171546468697);
    msg.setSource(20203U);
    msg.setSourceEntity(141U);
    msg.setDestination(62384U);
    msg.setDestinationEntity(188U);
    msg.validity = 37679U;
    msg.type = 49U;
    msg.tow = 1731870193U;
    msg.base_lat = 0.029571980693281708;
    msg.base_lon = 0.6731357756255976;
    msg.base_height = 0.9140643750694786;
    msg.n = 0.11253337185678103;
    msg.e = 0.9011054255598598;
    msg.d = 0.9878230561936284;
    msg.v_n = 0.8994898289812897;
    msg.v_e = 0.6597908764499008;
    msg.v_d = 0.834788110661982;
    msg.satellites = 189U;
    msg.iar_hyp = 29051U;
    msg.iar_ratio = 0.6041292171505335;

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
    msg.setTimeStamp(0.7415294538289763);
    msg.setSource(44900U);
    msg.setSourceEntity(167U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(21U);
    msg.validity = 4350U;
    msg.type = 101U;
    msg.tow = 959741550U;
    msg.base_lat = 0.26484059296129814;
    msg.base_lon = 0.09035787200236345;
    msg.base_height = 0.29863809886777637;
    msg.n = 0.35604594375574405;
    msg.e = 0.4447524259441974;
    msg.d = 0.8588916914930621;
    msg.v_n = 0.1661120291020356;
    msg.v_e = 0.7828738495847796;
    msg.v_d = 0.9063632413291405;
    msg.satellites = 116U;
    msg.iar_hyp = 33130U;
    msg.iar_ratio = 0.8958041979636593;

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
    msg.setTimeStamp(0.6499442973914237);
    msg.setSource(8538U);
    msg.setSourceEntity(133U);
    msg.setDestination(37662U);
    msg.setDestinationEntity(145U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.04503717165596699;
    tmp_msg_0.lon = 0.5118460413439989;
    tmp_msg_0.height = 0.6378987635495452;
    tmp_msg_0.x = 0.6395979934983242;
    tmp_msg_0.y = 0.7482958555916621;
    tmp_msg_0.z = 0.5940497647697607;
    tmp_msg_0.phi = 0.8444306071652086;
    tmp_msg_0.theta = 0.7524739538160349;
    tmp_msg_0.psi = 0.4053304714431426;
    tmp_msg_0.u = 0.5914240851976802;
    tmp_msg_0.v = 0.22900755340134693;
    tmp_msg_0.w = 0.2011107080815654;
    tmp_msg_0.vx = 0.40179493555726864;
    tmp_msg_0.vy = 0.40604580955423986;
    tmp_msg_0.vz = 0.9119099108870545;
    tmp_msg_0.p = 0.8554124239142805;
    tmp_msg_0.q = 0.5879595136681037;
    tmp_msg_0.r = 0.6658921940812944;
    tmp_msg_0.depth = 0.132963125237623;
    tmp_msg_0.alt = 0.007131065694070848;
    msg.state.set(tmp_msg_0);
    msg.type = 118U;

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
    msg.setTimeStamp(0.4632737342215081);
    msg.setSource(59287U);
    msg.setSourceEntity(174U);
    msg.setDestination(42815U);
    msg.setDestinationEntity(166U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.033817062650569496;
    tmp_msg_0.lon = 0.7255726753455572;
    tmp_msg_0.height = 0.25365287222829924;
    tmp_msg_0.x = 0.2439041220579763;
    tmp_msg_0.y = 0.5787628963751812;
    tmp_msg_0.z = 0.9988058282003883;
    tmp_msg_0.phi = 0.34541631648744253;
    tmp_msg_0.theta = 0.3369584734746983;
    tmp_msg_0.psi = 0.9792375612383672;
    tmp_msg_0.u = 0.5576851593019105;
    tmp_msg_0.v = 0.5888844795161845;
    tmp_msg_0.w = 0.7954595131825511;
    tmp_msg_0.vx = 0.622749624775634;
    tmp_msg_0.vy = 0.3945598611432345;
    tmp_msg_0.vz = 0.23419956588524782;
    tmp_msg_0.p = 0.8304776115216772;
    tmp_msg_0.q = 0.7329626016250884;
    tmp_msg_0.r = 0.6823959197092135;
    tmp_msg_0.depth = 0.9937270200494311;
    tmp_msg_0.alt = 0.07806398317536922;
    msg.state.set(tmp_msg_0);
    msg.type = 28U;

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
    msg.setTimeStamp(0.4860867964134997);
    msg.setSource(9036U);
    msg.setSourceEntity(84U);
    msg.setDestination(40158U);
    msg.setDestinationEntity(37U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4912198122570526;
    tmp_msg_0.lon = 0.8635465165247705;
    tmp_msg_0.height = 0.6523847068907558;
    tmp_msg_0.x = 0.03377887964277071;
    tmp_msg_0.y = 0.09899674343798581;
    tmp_msg_0.z = 0.5400929164674667;
    tmp_msg_0.phi = 0.7503128373902258;
    tmp_msg_0.theta = 0.4190335694474949;
    tmp_msg_0.psi = 0.6480175581945097;
    tmp_msg_0.u = 0.8875010686036663;
    tmp_msg_0.v = 0.8216721737895294;
    tmp_msg_0.w = 0.3176190651875237;
    tmp_msg_0.vx = 0.5960062372749376;
    tmp_msg_0.vy = 0.9315385506974584;
    tmp_msg_0.vz = 0.5859895128315468;
    tmp_msg_0.p = 0.7636316957886705;
    tmp_msg_0.q = 0.3078639961815417;
    tmp_msg_0.r = 0.8929588930967134;
    tmp_msg_0.depth = 0.27472207743140986;
    tmp_msg_0.alt = 0.21503825185511716;
    msg.state.set(tmp_msg_0);
    msg.type = 121U;

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
    msg.setTimeStamp(0.8144262041399506);
    msg.setSource(49809U);
    msg.setSourceEntity(237U);
    msg.setDestination(57128U);
    msg.setDestinationEntity(82U);
    msg.value = 0.3650751555816786;

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
    msg.setTimeStamp(0.37051459163638234);
    msg.setSource(9383U);
    msg.setSourceEntity(38U);
    msg.setDestination(16030U);
    msg.setDestinationEntity(134U);
    msg.value = 0.43937810531480803;

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
    msg.setTimeStamp(0.7609006631038053);
    msg.setSource(22948U);
    msg.setSourceEntity(210U);
    msg.setDestination(52275U);
    msg.setDestinationEntity(129U);
    msg.value = 0.009298422347328694;

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
    msg.setTimeStamp(0.4347810029769956);
    msg.setSource(7848U);
    msg.setSourceEntity(97U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(185U);
    msg.value = 0.7985484118799112;

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
    msg.setTimeStamp(0.5072136474395437);
    msg.setSource(38995U);
    msg.setSourceEntity(244U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(85U);
    msg.value = 0.30043750996522833;

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
    msg.setTimeStamp(0.2320026479557642);
    msg.setSource(9018U);
    msg.setSourceEntity(23U);
    msg.setDestination(49964U);
    msg.setDestinationEntity(78U);
    msg.value = 0.17359328350812708;

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
    msg.setTimeStamp(0.18388250575828768);
    msg.setSource(8648U);
    msg.setSourceEntity(34U);
    msg.setDestination(15303U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9100456956063875;

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
    msg.setTimeStamp(0.005373817433627304);
    msg.setSource(54392U);
    msg.setSourceEntity(5U);
    msg.setDestination(25357U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9209293727681286;

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
    msg.setTimeStamp(0.5962817092779653);
    msg.setSource(42558U);
    msg.setSourceEntity(141U);
    msg.setDestination(37624U);
    msg.setDestinationEntity(199U);
    msg.value = 0.1065178659704934;

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
    msg.setTimeStamp(0.4565014844073798);
    msg.setSource(46537U);
    msg.setSourceEntity(139U);
    msg.setDestination(12894U);
    msg.setDestinationEntity(205U);
    msg.value = 0.4315053600510407;

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
    msg.setTimeStamp(0.523660332214257);
    msg.setSource(23554U);
    msg.setSourceEntity(155U);
    msg.setDestination(24744U);
    msg.setDestinationEntity(238U);
    msg.value = 0.997867367966448;

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
    msg.setTimeStamp(0.9208362739347137);
    msg.setSource(38012U);
    msg.setSourceEntity(105U);
    msg.setDestination(7317U);
    msg.setDestinationEntity(147U);
    msg.value = 0.04221988376622643;

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
    msg.setTimeStamp(0.28921437280557394);
    msg.setSource(43614U);
    msg.setSourceEntity(145U);
    msg.setDestination(14767U);
    msg.setDestinationEntity(247U);
    msg.value = 0.9323411273452942;

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
    msg.setTimeStamp(0.6584213379944107);
    msg.setSource(37633U);
    msg.setSourceEntity(152U);
    msg.setDestination(13484U);
    msg.setDestinationEntity(153U);
    msg.value = 0.8386912968768154;

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
    msg.setTimeStamp(0.43214498432545856);
    msg.setSource(54823U);
    msg.setSourceEntity(167U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(41U);
    msg.value = 0.977905793048149;

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
    msg.setTimeStamp(0.5910879978469253);
    msg.setSource(19534U);
    msg.setSourceEntity(223U);
    msg.setDestination(58650U);
    msg.setDestinationEntity(117U);
    msg.id = 86U;
    msg.zoom = 231U;
    msg.action = 137U;

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
    msg.setTimeStamp(0.6296660331415785);
    msg.setSource(59557U);
    msg.setSourceEntity(42U);
    msg.setDestination(45729U);
    msg.setDestinationEntity(156U);
    msg.id = 212U;
    msg.zoom = 210U;
    msg.action = 52U;

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
    msg.setTimeStamp(0.14276410861326483);
    msg.setSource(9697U);
    msg.setSourceEntity(13U);
    msg.setDestination(10263U);
    msg.setDestinationEntity(231U);
    msg.id = 210U;
    msg.zoom = 75U;
    msg.action = 145U;

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
    msg.setTimeStamp(0.32215216367153854);
    msg.setSource(58717U);
    msg.setSourceEntity(193U);
    msg.setDestination(30135U);
    msg.setDestinationEntity(5U);
    msg.id = 56U;
    msg.value = 0.6166830029484959;

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
    msg.setTimeStamp(0.08889552972506076);
    msg.setSource(41018U);
    msg.setSourceEntity(253U);
    msg.setDestination(18980U);
    msg.setDestinationEntity(98U);
    msg.id = 219U;
    msg.value = 0.1287128341930861;

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
    msg.setTimeStamp(0.8953390437012889);
    msg.setSource(63091U);
    msg.setSourceEntity(157U);
    msg.setDestination(63969U);
    msg.setDestinationEntity(254U);
    msg.id = 67U;
    msg.value = 0.6030224531581619;

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
    msg.setTimeStamp(0.1825550072102069);
    msg.setSource(8239U);
    msg.setSourceEntity(33U);
    msg.setDestination(28523U);
    msg.setDestinationEntity(179U);
    msg.id = 247U;
    msg.value = 0.08607003843270311;

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
    msg.setTimeStamp(0.640829133297756);
    msg.setSource(8210U);
    msg.setSourceEntity(6U);
    msg.setDestination(26927U);
    msg.setDestinationEntity(102U);
    msg.id = 57U;
    msg.value = 0.5963201908631891;

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
    msg.setTimeStamp(0.32539244377852405);
    msg.setSource(55127U);
    msg.setSourceEntity(34U);
    msg.setDestination(45545U);
    msg.setDestinationEntity(168U);
    msg.id = 222U;
    msg.value = 0.0460273844973097;

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
    msg.setTimeStamp(0.6313111736927358);
    msg.setSource(17027U);
    msg.setSourceEntity(70U);
    msg.setDestination(48901U);
    msg.setDestinationEntity(166U);
    msg.id = 61U;
    msg.angle = 0.49044192134274556;

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
    msg.setTimeStamp(0.6286362503521326);
    msg.setSource(46800U);
    msg.setSourceEntity(251U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(79U);
    msg.id = 52U;
    msg.angle = 0.2563114896511717;

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
    msg.setTimeStamp(0.7596863501970758);
    msg.setSource(53438U);
    msg.setSourceEntity(27U);
    msg.setDestination(20664U);
    msg.setDestinationEntity(52U);
    msg.id = 95U;
    msg.angle = 0.5282717076340339;

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
    msg.setTimeStamp(0.39423941409339913);
    msg.setSource(12711U);
    msg.setSourceEntity(252U);
    msg.setDestination(26785U);
    msg.setDestinationEntity(5U);
    msg.op = 185U;
    msg.actions.assign("CLLHOJYHKUAAPDWXQOELWHSZFMHUJFCECLKTJRXISXUMASVJETAYPQIKDDCQTLAAFWMUZLNEVYTORLLCIGWGSIJVVXWVCURPUERVUOYXGBEAFAGYYGBYNPUZTZWFSXHGXZ");

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
    msg.setTimeStamp(0.04588780596557207);
    msg.setSource(22844U);
    msg.setSourceEntity(104U);
    msg.setDestination(4104U);
    msg.setDestinationEntity(86U);
    msg.op = 31U;
    msg.actions.assign("GPAAUCJWULOMWIIQJBWEKQAGEVOJKMIGQHMVDXPUQRKCGWSKZAPFCRVLJUIPKNJRDPCRVCFTDBHXLXLYBOALBRWBHGJFOXIBZJIHIDYJUHDJYTGOMWDRNEFNONTGZEXSWSPVCKVQNGRNEOMPFTYWLZZATSOAKDBXCPFPFRCHUL");

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
    msg.setTimeStamp(0.9003851574071828);
    msg.setSource(54516U);
    msg.setSourceEntity(79U);
    msg.setDestination(28335U);
    msg.setDestinationEntity(110U);
    msg.op = 91U;
    msg.actions.assign("KBPPIMPXIYYSZIJCXGPFAIJCVBQACASBZMGE");

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
    msg.setTimeStamp(0.42986855891540965);
    msg.setSource(26528U);
    msg.setSourceEntity(241U);
    msg.setDestination(22359U);
    msg.setDestinationEntity(8U);
    msg.actions.assign("KEXAVIRJMMUOGYHKKECMFICLJAFGPSEZPYXYHDTYPBDXNQDRLKWJFUERQT");

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
    msg.setTimeStamp(0.681052140857459);
    msg.setSource(30785U);
    msg.setSourceEntity(213U);
    msg.setDestination(53663U);
    msg.setDestinationEntity(180U);
    msg.actions.assign("SZYIWLNCEZHJBBXLKTWJMATMXZZQWFYLBHUJPAVOFGKXTKOKQGXAORAILLNFDYTONCVXGVKNSYWBQBIFWZMGVCLFYHRTUJUQRSUZWWLIEODWMFMGNHUJDOOZYBDOIHSHRJQSUKRESDAIIKYPTUIGBSCCDEGRMPJDCSVRTKPXXIOSFGCPEZCNXEIEVMSDXFQDBRJVYBTFNNR");

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
    msg.setTimeStamp(0.4856535094889898);
    msg.setSource(34789U);
    msg.setSourceEntity(200U);
    msg.setDestination(43437U);
    msg.setDestinationEntity(182U);
    msg.actions.assign("GQFJMWOCIXZIPIFNZZJEZITMWALRAWRBIYBUCLREGHCYUWKUKOVGOYTVDMRYDFDAVLSNYLEOCQPWSYETGHYCMWKVKDGFBEQNDMQAQTOBOGXNPSXDLNVLPYUGXBCMPCESHOKLPYJZDPINCAVRQEWDMTJFQXIFKAFUDKLRGKCZIJQPIZJMSZVXGHHCQMBRTXHSWVUFOTFNRVKTBAXJIZBEMARLSPEJULS");

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
    msg.setTimeStamp(0.9560928111093491);
    msg.setSource(62281U);
    msg.setSourceEntity(13U);
    msg.setDestination(35172U);
    msg.setDestinationEntity(78U);
    msg.button = 67U;
    msg.value = 193U;

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
    msg.setTimeStamp(0.3753946460815605);
    msg.setSource(6441U);
    msg.setSourceEntity(189U);
    msg.setDestination(26992U);
    msg.setDestinationEntity(243U);
    msg.button = 128U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.041391838708225936);
    msg.setSource(15543U);
    msg.setSourceEntity(132U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(57U);
    msg.button = 251U;
    msg.value = 40U;

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
    msg.setTimeStamp(0.5181760452396944);
    msg.setSource(56727U);
    msg.setSourceEntity(152U);
    msg.setDestination(45974U);
    msg.setDestinationEntity(251U);
    msg.op = 44U;
    msg.text.assign("NWKEAVOVPYBXMQYMXQODZEQFJGUDLJBGLFHLAGSCZSIRYOWKMWFYKOHPSUYRXYPPXINWMNCGCWRKILACIFDNZLEFBJIEQZQRTEPIOVRXLOSKMCTTVWTLBCDVAJNZZJVMBGJSDINYFAXHOZSRKUGVUEZCUNHRLXABRQSPWXECAQPOHADSK");

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
    msg.setTimeStamp(0.9244953463123703);
    msg.setSource(30777U);
    msg.setSourceEntity(3U);
    msg.setDestination(7987U);
    msg.setDestinationEntity(63U);
    msg.op = 237U;
    msg.text.assign("JTAIBPADRYMKORSBQJJMYMNETWIBJRZWHUKGNSNVHOIYVOVEMWHJYELXRCGBEPZMGEOCODXEHUZNFNWWZZURWTXMLFZMDOCWNMURKKVDYLVLBSTORDASVKLPAMDDUWSTFQESVYUHUHGZPFXFKLYMVKPFQTWNBCPSSOZBRIFIASAJQLAGKXIAPGNLAGTFZTVYNCFAIWOFEDBCKUXGQECNRHHHUBOXPQDLBQXPYJJYIKC");

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
    msg.setTimeStamp(0.06935729680268132);
    msg.setSource(6655U);
    msg.setSourceEntity(168U);
    msg.setDestination(57350U);
    msg.setDestinationEntity(37U);
    msg.op = 41U;
    msg.text.assign("VUKXVFKKEUQGUMPAKJWIFWGOFTGAEWLXPXZZHXJRWMDUECAQPIUYZEZHJIYBSTKPOCWNNTFLIXUDCRRFRBLMZTRZKAHDWWOHJNMJFJDEMRMQRXUVSVJSKLGITYMPDOBHVWLLLUPDVBJYODNASAWIEFASECSZIVBBKTSXITNQMRQHNNQGJBNBJZKMVTODNOQIYEHLFPHLONYKYASHYQRBVACTOQUGPMYDDFRCYWSGGGAXEFHGEXLCVCXCSQU");

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
    msg.setTimeStamp(0.8420477583373575);
    msg.setSource(28823U);
    msg.setSourceEntity(83U);
    msg.setDestination(43286U);
    msg.setDestinationEntity(158U);
    msg.op = 211U;
    msg.time_remain = 0.3528111844495656;
    msg.sched_time = 0.7165584794493445;

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
    msg.setTimeStamp(0.3196733585741923);
    msg.setSource(40861U);
    msg.setSourceEntity(19U);
    msg.setDestination(36757U);
    msg.setDestinationEntity(238U);
    msg.op = 174U;
    msg.time_remain = 0.07818891461261157;
    msg.sched_time = 0.7995429994778959;

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
    msg.setTimeStamp(0.051693912059673996);
    msg.setSource(61607U);
    msg.setSourceEntity(87U);
    msg.setDestination(13618U);
    msg.setDestinationEntity(130U);
    msg.op = 1U;
    msg.time_remain = 0.7780421940113783;
    msg.sched_time = 0.10140022789120573;

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
    msg.setTimeStamp(0.08437294278673513);
    msg.setSource(53639U);
    msg.setSourceEntity(11U);
    msg.setDestination(60262U);
    msg.setDestinationEntity(159U);
    msg.name.assign("LDLKBNAOMHRUWGUYGEFSVJBOHFDHKCFRVZZWPPNUUCVEWJXRVTGBXDTCSOIDVKUEMOSQEXPAQGZJZNNSNHJBGHTZMWFASWHRGPUUYYOARGYCMJBYNHOHWDMGMOZNJQTJZLRTKDYSRXLZEAICFLCRCZYWKWLIVDLWABONMIEPUYWBIFQBPTGVKPRXIFPXQJKQ");
    msg.op = 59U;
    msg.sched_time = 0.7676364238564015;

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
    msg.setTimeStamp(0.07219819778131964);
    msg.setSource(45693U);
    msg.setSourceEntity(178U);
    msg.setDestination(13870U);
    msg.setDestinationEntity(195U);
    msg.name.assign("FYLVXMYMHZFRCZQEHWNMYKLITQJWCFSJPZHBTDGWWKUYVETIURAMSGWXCXRVTMTULFROVKPZLJNNLZUNVMONRIVTRUSYFJDFOUCDFOGWKAAASWFMGEQGOGNNPZLPMBZKYNWRBCZKTZFDXIEIAKTMNMDPJYDWIVHYXQLFEHVTBESOLSOZCJUGHQSQXJDWNBBSC");
    msg.op = 39U;
    msg.sched_time = 0.41847993824730656;

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
    msg.setTimeStamp(0.3522047574585573);
    msg.setSource(7850U);
    msg.setSourceEntity(232U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(193U);
    msg.name.assign("QREZFEYGCBQJVUKCWGQNRFISKVOSXKZREMNMDMEXQQWTXBAODATOSVGCULQCPLKBFOTVFOSRMRIFDLWHURKTANUZTZKXOYXACVMHSNXJEWDEFJFNEBGCMWAJJCUHIPGWKQZNJHLJRVPSBHUQEMPVAPRTZBWLOZKUGHYDAJFYO");
    msg.op = 231U;
    msg.sched_time = 0.0009977229205236915;

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
    msg.setTimeStamp(0.9059180754976659);
    msg.setSource(21816U);
    msg.setSourceEntity(17U);
    msg.setDestination(44121U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.8487400755492422);
    msg.setSource(43731U);
    msg.setSourceEntity(45U);
    msg.setDestination(49283U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.9251450053760322);
    msg.setSource(37946U);
    msg.setSourceEntity(41U);
    msg.setDestination(58578U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.127168296797446);
    msg.setSource(26417U);
    msg.setSourceEntity(96U);
    msg.setDestination(49634U);
    msg.setDestinationEntity(230U);
    msg.name.assign("OPWCPGBCJTWQUZNPDFTUHXZYVGCNQDPSUACCXWAZGPFCTWXAPGKGPKVITSZXOUQGKLZKAFUWATLZTSYGBYUAVHJSTROVCBMIFRPJOLRLZQYVBCQVDLMVULEYBJWNEVFMOUFJSVHNJEKUNKBZHFH");
    msg.state = 75U;

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
    msg.setTimeStamp(0.6007951619663279);
    msg.setSource(3705U);
    msg.setSourceEntity(124U);
    msg.setDestination(9452U);
    msg.setDestinationEntity(113U);
    msg.name.assign("SFDMKDFIWDLWRGYCMOXCEXUPCFSWJECJNNHWETISAMOZLKYGBPHIVXHJZTMYNTWGQGBHLPCHZONRTSUIYNEOQOBFFDYNWYOALNZASDHVXEKQJERXFBLCBCOLQGRAQTIDVUKSBCILUSHSBXUJRTHAVMDPJYZWRPUUEZLVGAUFLHVYGIPZKFNQIQVICZKAARBBTVMPJDOUEKDQVQGYPWREJQWKOTRNRZMXIFKNMCLTPXSDWGXB");
    msg.state = 120U;

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
    msg.setTimeStamp(0.4552849819900353);
    msg.setSource(3711U);
    msg.setSourceEntity(10U);
    msg.setDestination(60557U);
    msg.setDestinationEntity(252U);
    msg.name.assign("CETTAJEFXZDDBANGWIMXHIDBVZRYWPQEEMUYLUMSZFYPSJSAZUNCCOLGHFVVAGECAGLHJWPHJICOBSDJXGVPQIQQRYDXIWFXODHJSJAFFDIZTQTIQRCNHSUSGBTJRLLRCXGCQYQLNOZNTKOSTVVOGQEKJYWNPXPLOUUEMTWQDHKKLMXLMYNYIU");
    msg.state = 177U;

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
    msg.setTimeStamp(0.7647635222333049);
    msg.setSource(62235U);
    msg.setSourceEntity(3U);
    msg.setDestination(28607U);
    msg.setDestinationEntity(15U);
    msg.name.assign("PQWSBWLSDIZXMQIGKGABPJUCWNQKIUAEDSFOBLVWOHSUDEHQJTWFRJGEKLBRBYDYFRQBPVFDMBPUOLNTOCCGUKEYORWLGDQHVGFDRH");
    msg.value = 77U;

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
    msg.setTimeStamp(0.2688356118227202);
    msg.setSource(42454U);
    msg.setSourceEntity(65U);
    msg.setDestination(15192U);
    msg.setDestinationEntity(105U);
    msg.name.assign("JWSGYCFNOPXESFZRFZNGVHDOVPPOCCJYYECQWJFZEBVCVKIXITVLUBDSKKKOANGDPRITUELCSOIJYPUUIBZLHJZXZLWITOJAMHNBDUEWGJQYAZBQGKKVMHXHNTAFZMAPGFDVHPRBIAJLDWLQQXTTWGOLYQQFCJAMJRXN");
    msg.value = 200U;

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
    msg.setTimeStamp(0.5527468052125277);
    msg.setSource(37217U);
    msg.setSourceEntity(103U);
    msg.setDestination(17843U);
    msg.setDestinationEntity(13U);
    msg.name.assign("LIVEEYFYKWQDOXEPDGOBYAAWENPOTAFTKIZFBATXGEWHZYCDTNEVPOTLQURGDQMYPEHZRRWJVVOBJFFUBAHZWIKIUEDSONCBIWHMBFXZVJXSDNU");
    msg.value = 198U;

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
    msg.setTimeStamp(0.9045518630721103);
    msg.setSource(39026U);
    msg.setSourceEntity(8U);
    msg.setDestination(63974U);
    msg.setDestinationEntity(179U);
    msg.name.assign("WCUKDHKAOMRGCDTCABEMEPAEMIQSFLZUXDEADGFLVDFJFWBCTJDENJOXDXNOFKHNNINEJVJXACGQQYZZSYHXTCJZSSTXBGMUKTIYBAPNMMUYREVOHFLQZPXSPLVGCZPGHLJKRJAMOEGRUYQKTZHWLORQTUNPISRBDXXTKAGLARFGBWVLLKYYNQNWUMYDQBSQCVPCOVWHETHFGZOSWVKEKIDUFUSMZOURLPXMYIOPJIWWAHCBZV");

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
    msg.setTimeStamp(0.7073116496687502);
    msg.setSource(46466U);
    msg.setSourceEntity(191U);
    msg.setDestination(4301U);
    msg.setDestinationEntity(159U);
    msg.name.assign("IZQOALJJEHAJJRQBNDIHCBLMHITGGPRPYHCSTSLQWFTSCEIPRYCMQRNZEAXIWHYWZJJZBZQUEXBWOQRKGKKVRZHCUDZARLMXPIOKYFWUSACMTYXDVYFLNGHDBQTODGZDGZMITZGJVMEMFFFLTCFQUSEXVEVTUPAWNROUUPQFJGVNRIPSKBPDWKUGYWHCMOCVYAOMHKUDBL");

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
    msg.setTimeStamp(0.3426122580851223);
    msg.setSource(53885U);
    msg.setSourceEntity(45U);
    msg.setDestination(62270U);
    msg.setDestinationEntity(45U);
    msg.name.assign("ZTIDPZCLPQVZRNGMBXUBUKOLEGNAPAPDBLVTZJKGTSVZMSTYPWMEZQXKLKTPNYEIOYOPHYEKHLBUOHFQEGRKBDGFULHQNAFYLVDUECDARBCXIKGSCQTYFSJFRPXFYHWNIYHNJMWSRIIXJHJGCFAEBRSUOGUMSLENVKYUOUKASBXAV");

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
    msg.setTimeStamp(0.9850188517591538);
    msg.setSource(41632U);
    msg.setSourceEntity(235U);
    msg.setDestination(1558U);
    msg.setDestinationEntity(107U);
    msg.name.assign("ESWABNWPMTWRQDLQXDENXCKLDCOTIRBHHTVXCDRYLJABCNLZSFAPQCJKIFWFCROCOIPWHIZIFYKNVBPYIFJTUVGLWTURSQNJMGXUENEGKTXUHFIYVCMFGGRZUGEBGRIR");
    msg.value = 221U;

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
    msg.setTimeStamp(0.007761966561975031);
    msg.setSource(59871U);
    msg.setSourceEntity(154U);
    msg.setDestination(3823U);
    msg.setDestinationEntity(42U);
    msg.name.assign("NOXKQCSDOJQARRQEGBJNAFL");
    msg.value = 36U;

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
    msg.setTimeStamp(0.7007688813841577);
    msg.setSource(5187U);
    msg.setSourceEntity(239U);
    msg.setDestination(48420U);
    msg.setDestinationEntity(140U);
    msg.name.assign("WOSBVQZSPCPERLEDHJBCGYNWAHRDBPMOVJIJRMMHNTPVYZUWCVGWULTJDYTVPZLNGZOSKZHRHNCODWAEFIMTFTXNSKHOYHMQXBKZKOFUZEULCNPPOLWIIPAGQ");
    msg.value = 123U;

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
    msg.setTimeStamp(0.5904914324048746);
    msg.setSource(17333U);
    msg.setSourceEntity(9U);
    msg.setDestination(13891U);
    msg.setDestinationEntity(184U);
    msg.id = 219U;
    msg.period = 3141241757U;
    msg.duty_cycle = 2403470167U;

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
    msg.setTimeStamp(0.800751989704593);
    msg.setSource(52571U);
    msg.setSourceEntity(55U);
    msg.setDestination(41561U);
    msg.setDestinationEntity(182U);
    msg.id = 148U;
    msg.period = 981052924U;
    msg.duty_cycle = 2706993079U;

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
    msg.setTimeStamp(0.9291853527927105);
    msg.setSource(36469U);
    msg.setSourceEntity(8U);
    msg.setDestination(56577U);
    msg.setDestinationEntity(114U);
    msg.id = 224U;
    msg.period = 2162541737U;
    msg.duty_cycle = 1561158781U;

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
    msg.setTimeStamp(0.9013197091328132);
    msg.setSource(11248U);
    msg.setSourceEntity(178U);
    msg.setDestination(32873U);
    msg.setDestinationEntity(10U);
    msg.id = 100U;
    msg.period = 3366205093U;
    msg.duty_cycle = 3492830457U;

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
    msg.setTimeStamp(0.6722468617323998);
    msg.setSource(57364U);
    msg.setSourceEntity(155U);
    msg.setDestination(61888U);
    msg.setDestinationEntity(124U);
    msg.id = 72U;
    msg.period = 3191612049U;
    msg.duty_cycle = 2555863345U;

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
    msg.setTimeStamp(0.8135055965913774);
    msg.setSource(35672U);
    msg.setSourceEntity(248U);
    msg.setDestination(59628U);
    msg.setDestinationEntity(153U);
    msg.id = 79U;
    msg.period = 2801218585U;
    msg.duty_cycle = 2558145618U;

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
    msg.setTimeStamp(0.49891980289103555);
    msg.setSource(43712U);
    msg.setSourceEntity(35U);
    msg.setDestination(43929U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.3251885880863836;
    msg.lon = 0.17053458962344947;
    msg.height = 0.3754024688721018;
    msg.x = 0.38326133115972427;
    msg.y = 0.01105110426238698;
    msg.z = 0.27528030111232404;
    msg.phi = 0.11174820872947;
    msg.theta = 0.8941238606329277;
    msg.psi = 0.8572153293903871;
    msg.u = 0.9439486635250628;
    msg.v = 0.5836877996775605;
    msg.w = 0.21328869757888191;
    msg.vx = 0.9560440258126934;
    msg.vy = 0.6531747964838814;
    msg.vz = 0.8322428897916457;
    msg.p = 0.8305464331870461;
    msg.q = 0.5365548447739584;
    msg.r = 0.15853499350618672;
    msg.depth = 0.8749369591111534;
    msg.alt = 0.38011508818604434;

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
    msg.setTimeStamp(0.8401630215603454);
    msg.setSource(45246U);
    msg.setSourceEntity(176U);
    msg.setDestination(29347U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.44544492040004435;
    msg.lon = 0.7657595950423448;
    msg.height = 0.07086350269627428;
    msg.x = 0.9321148719054686;
    msg.y = 0.8355348924035;
    msg.z = 0.36940194954866423;
    msg.phi = 0.563526798147404;
    msg.theta = 0.08814599538279777;
    msg.psi = 0.7656883999585736;
    msg.u = 0.4092653855660796;
    msg.v = 0.13963383583231115;
    msg.w = 0.4183634644331229;
    msg.vx = 0.026942543069909064;
    msg.vy = 0.2712178945710497;
    msg.vz = 0.5495223262128408;
    msg.p = 0.0762409971478204;
    msg.q = 0.9372917480133479;
    msg.r = 0.3650745149004939;
    msg.depth = 0.5555316025864669;
    msg.alt = 0.17816633524237624;

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
    msg.setTimeStamp(0.8497278210227245);
    msg.setSource(59927U);
    msg.setSourceEntity(81U);
    msg.setDestination(60108U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.7127987913775672;
    msg.lon = 0.7344420292325474;
    msg.height = 0.05542168436218298;
    msg.x = 0.06315676890324196;
    msg.y = 0.34583867980070426;
    msg.z = 0.014606112382581027;
    msg.phi = 0.1778230178587995;
    msg.theta = 0.9614229158300831;
    msg.psi = 0.7617742579749273;
    msg.u = 0.35615962659176525;
    msg.v = 0.4740472080632345;
    msg.w = 0.8769234430423237;
    msg.vx = 0.5748973653189934;
    msg.vy = 0.47154309596458577;
    msg.vz = 0.9196131395058561;
    msg.p = 0.9761169951979113;
    msg.q = 0.8214732185336904;
    msg.r = 0.7783508643037526;
    msg.depth = 0.8282428121340535;
    msg.alt = 0.5583527975951247;

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
    msg.setTimeStamp(0.7181917646969355);
    msg.setSource(41616U);
    msg.setSourceEntity(230U);
    msg.setDestination(4423U);
    msg.setDestinationEntity(197U);
    msg.x = 0.9490635235821766;
    msg.y = 0.5792484653628749;
    msg.z = 0.9245630510849921;

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
    msg.setTimeStamp(0.09583420145198673);
    msg.setSource(23799U);
    msg.setSourceEntity(80U);
    msg.setDestination(46816U);
    msg.setDestinationEntity(133U);
    msg.x = 0.45725605590403695;
    msg.y = 0.09934068898686832;
    msg.z = 0.2634691170403567;

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
    msg.setTimeStamp(0.519985291281969);
    msg.setSource(1296U);
    msg.setSourceEntity(25U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(123U);
    msg.x = 0.9719026726235152;
    msg.y = 0.6594806973431182;
    msg.z = 0.5105385660430981;

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
    msg.setTimeStamp(0.12416360411243377);
    msg.setSource(21173U);
    msg.setSourceEntity(32U);
    msg.setDestination(46130U);
    msg.setDestinationEntity(140U);
    msg.value = 0.7423263909721746;

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
    msg.setTimeStamp(0.0633586345540883);
    msg.setSource(35211U);
    msg.setSourceEntity(36U);
    msg.setDestination(39716U);
    msg.setDestinationEntity(118U);
    msg.value = 0.6038696693509114;

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
    msg.setTimeStamp(0.5483095584441762);
    msg.setSource(5766U);
    msg.setSourceEntity(133U);
    msg.setDestination(16231U);
    msg.setDestinationEntity(188U);
    msg.value = 0.11199385336619094;

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
    msg.setTimeStamp(0.42566128594185304);
    msg.setSource(2945U);
    msg.setSourceEntity(23U);
    msg.setDestination(33584U);
    msg.setDestinationEntity(47U);
    msg.value = 0.711890448972466;

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
    msg.setTimeStamp(0.4577693367827378);
    msg.setSource(62024U);
    msg.setSourceEntity(100U);
    msg.setDestination(40561U);
    msg.setDestinationEntity(16U);
    msg.value = 0.6953748912677409;

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
    msg.setTimeStamp(0.991122201316624);
    msg.setSource(53892U);
    msg.setSourceEntity(131U);
    msg.setDestination(49171U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5197410003177677;

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
    msg.setTimeStamp(0.1654243112286944);
    msg.setSource(14142U);
    msg.setSourceEntity(191U);
    msg.setDestination(42999U);
    msg.setDestinationEntity(42U);
    msg.x = 0.07488679210490501;
    msg.y = 0.19528876019864472;
    msg.z = 0.4607719749894207;
    msg.phi = 0.9551596662680981;
    msg.theta = 0.9811220332204992;
    msg.psi = 0.2074785649371882;
    msg.p = 0.13872748612264574;
    msg.q = 0.1520910257111041;
    msg.r = 0.9216489735362882;
    msg.u = 0.2794146021157674;
    msg.v = 0.22989570546548554;
    msg.w = 0.6891429766505476;
    msg.bias_psi = 0.9032018002653652;
    msg.bias_r = 0.20992868849127455;

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
    msg.setTimeStamp(0.7098086680414316);
    msg.setSource(32382U);
    msg.setSourceEntity(99U);
    msg.setDestination(11691U);
    msg.setDestinationEntity(110U);
    msg.x = 0.7379251122204927;
    msg.y = 0.760856396609169;
    msg.z = 0.8530537418453082;
    msg.phi = 0.5274473719052147;
    msg.theta = 0.2785173360083282;
    msg.psi = 0.9470953472998367;
    msg.p = 0.410178285360706;
    msg.q = 0.6897002492850554;
    msg.r = 0.9352026362479924;
    msg.u = 0.19633816816190086;
    msg.v = 0.2292581765536672;
    msg.w = 0.9540131481768661;
    msg.bias_psi = 0.30345532648520845;
    msg.bias_r = 0.7699769000673851;

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
    msg.setTimeStamp(0.6414834484547167);
    msg.setSource(27648U);
    msg.setSourceEntity(14U);
    msg.setDestination(58212U);
    msg.setDestinationEntity(99U);
    msg.x = 0.1473850266761343;
    msg.y = 0.5335304028067749;
    msg.z = 0.8874514217829162;
    msg.phi = 0.9107092457569385;
    msg.theta = 0.6655454271384865;
    msg.psi = 0.7418899755423508;
    msg.p = 0.7851355231174763;
    msg.q = 0.17568082982765798;
    msg.r = 0.8393560914758315;
    msg.u = 0.7488457281362437;
    msg.v = 0.3390535789175759;
    msg.w = 0.6682492049301073;
    msg.bias_psi = 0.1867951860505891;
    msg.bias_r = 0.7705246547273937;

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
    msg.setTimeStamp(0.7737169751898518);
    msg.setSource(7568U);
    msg.setSourceEntity(102U);
    msg.setDestination(86U);
    msg.setDestinationEntity(141U);
    msg.bias_psi = 0.9498341781982494;
    msg.bias_r = 0.6847461164615454;
    msg.cog = 0.42625124012858473;
    msg.cyaw = 0.9152182323295162;
    msg.lbl_rej_level = 0.06433467594221531;
    msg.gps_rej_level = 0.2449721092628857;
    msg.custom_x = 0.7669611022841547;
    msg.custom_y = 0.38531423310135404;
    msg.custom_z = 0.13764192092291794;

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
    msg.setTimeStamp(0.43806585337061854);
    msg.setSource(14903U);
    msg.setSourceEntity(138U);
    msg.setDestination(37133U);
    msg.setDestinationEntity(123U);
    msg.bias_psi = 0.553499405145665;
    msg.bias_r = 0.6501871872160302;
    msg.cog = 0.1670246904640854;
    msg.cyaw = 0.2754971890456194;
    msg.lbl_rej_level = 0.7571838545136583;
    msg.gps_rej_level = 0.3885374182631627;
    msg.custom_x = 0.5084011852709176;
    msg.custom_y = 0.4394334283414363;
    msg.custom_z = 0.9677179700932036;

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
    msg.setTimeStamp(0.16462322938700502);
    msg.setSource(60396U);
    msg.setSourceEntity(253U);
    msg.setDestination(5684U);
    msg.setDestinationEntity(230U);
    msg.bias_psi = 0.3752411260833187;
    msg.bias_r = 0.8514337309208806;
    msg.cog = 0.5902365672523442;
    msg.cyaw = 0.8002359619728081;
    msg.lbl_rej_level = 0.7481589748473907;
    msg.gps_rej_level = 0.21720526391477835;
    msg.custom_x = 0.260010365348734;
    msg.custom_y = 0.20690366578936392;
    msg.custom_z = 0.9046683878571942;

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
    msg.setTimeStamp(0.08760818263184011);
    msg.setSource(55404U);
    msg.setSourceEntity(181U);
    msg.setDestination(47940U);
    msg.setDestinationEntity(90U);
    msg.utc_time = 0.2041847832433229;
    msg.reason = 214U;

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
    msg.setTimeStamp(0.613919037277064);
    msg.setSource(16310U);
    msg.setSourceEntity(232U);
    msg.setDestination(25422U);
    msg.setDestinationEntity(106U);
    msg.utc_time = 0.43363303339749604;
    msg.reason = 193U;

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
    msg.setTimeStamp(0.050483387281780034);
    msg.setSource(62217U);
    msg.setSourceEntity(137U);
    msg.setDestination(28138U);
    msg.setDestinationEntity(184U);
    msg.utc_time = 0.4741570054031091;
    msg.reason = 58U;

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
    msg.setTimeStamp(0.8265019531142539);
    msg.setSource(53568U);
    msg.setSourceEntity(1U);
    msg.setDestination(3824U);
    msg.setDestinationEntity(94U);
    msg.id = 43U;
    msg.range = 0.2777893574595458;
    msg.acceptance = 6U;

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
    msg.setTimeStamp(0.39170564705769784);
    msg.setSource(10572U);
    msg.setSourceEntity(162U);
    msg.setDestination(55157U);
    msg.setDestinationEntity(108U);
    msg.id = 211U;
    msg.range = 0.7469984199707026;
    msg.acceptance = 36U;

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
    msg.setTimeStamp(0.2502034395270416);
    msg.setSource(42667U);
    msg.setSourceEntity(62U);
    msg.setDestination(8629U);
    msg.setDestinationEntity(243U);
    msg.id = 219U;
    msg.range = 0.2708004434262503;
    msg.acceptance = 58U;

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
    msg.setTimeStamp(0.32840366167583424);
    msg.setSource(43085U);
    msg.setSourceEntity(181U);
    msg.setDestination(16534U);
    msg.setDestinationEntity(175U);
    msg.type = 147U;
    msg.reason = 199U;
    msg.value = 0.8219415229790874;
    msg.timestep = 0.0703946116072085;

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
    msg.setTimeStamp(0.06503125185440661);
    msg.setSource(10558U);
    msg.setSourceEntity(126U);
    msg.setDestination(49583U);
    msg.setDestinationEntity(116U);
    msg.type = 107U;
    msg.reason = 50U;
    msg.value = 0.4415151208634488;
    msg.timestep = 0.6892211482196372;

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
    msg.setTimeStamp(0.14023468607416034);
    msg.setSource(60868U);
    msg.setSourceEntity(178U);
    msg.setDestination(19322U);
    msg.setDestinationEntity(54U);
    msg.type = 254U;
    msg.reason = 50U;
    msg.value = 0.371295107937741;
    msg.timestep = 0.37904318452606023;

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
    msg.setTimeStamp(0.12107742301176727);
    msg.setSource(8175U);
    msg.setSourceEntity(13U);
    msg.setDestination(44081U);
    msg.setDestinationEntity(151U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KFJZCHPDDILRDCAFLKAFITZVONYHJHDKDPSCJJHFANOHJSVIJOLYTBRQKTKWXBGESZPYKTVSRDGTGAIGQGICWPDWSFQQRUONPWHZQBYQNFSNZPXLDRCUKMAJLGZBGAYLBHXLSXFETXBPUNEMABWZCDMTOLWVCGDJEGXXWMHWEBMOMZQTBULYVEOVXCIRIMUFSYQXHANLM");
    tmp_msg_0.lat = 0.2971817867334745;
    tmp_msg_0.lon = 0.9416354810298423;
    tmp_msg_0.depth = 0.0982029859944955;
    tmp_msg_0.query_channel = 254U;
    tmp_msg_0.reply_channel = 106U;
    tmp_msg_0.transponder_delay = 57U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.49934032687672003;
    msg.y = 0.6355743120196475;
    msg.var_x = 0.8967252262472379;
    msg.var_y = 0.10507767793475475;
    msg.distance = 0.4886708397215608;

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
    msg.setTimeStamp(0.06536975851907145);
    msg.setSource(37199U);
    msg.setSourceEntity(83U);
    msg.setDestination(34187U);
    msg.setDestinationEntity(80U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MKIGOLKHVDRHDCXFTMLRRVSYNINZHVNAKJJVWTIFBRUSNDGXUNMUQFTWXHCJLMSTWKIBUOOJGMWQBSFYIELUNPXBZOGCLSPREAQRZARXYKCXQOJSOFFSHVDBPPREVZAJTPNQROEKNKH");
    tmp_msg_0.lat = 0.5051918079029851;
    tmp_msg_0.lon = 0.8776042324488451;
    tmp_msg_0.depth = 0.9710907996430845;
    tmp_msg_0.query_channel = 96U;
    tmp_msg_0.reply_channel = 252U;
    tmp_msg_0.transponder_delay = 128U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.984863565627728;
    msg.y = 0.5603024640961397;
    msg.var_x = 0.2892635403514716;
    msg.var_y = 0.12019153565654839;
    msg.distance = 0.40754405682665784;

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
    msg.setTimeStamp(0.6829143265709616);
    msg.setSource(52099U);
    msg.setSourceEntity(229U);
    msg.setDestination(61661U);
    msg.setDestinationEntity(36U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YTZALAJJFFNPRGSPTGWBBENDVIGMVICOPKVVMQEVUHRGCFTVUXQKGJOTVYUXZOUWHKKRPTFPNITEAERELTHZMMNJYWZQDANGXTGDQUMXFIQJZUAXDIKONSPIBFVKDMCEEFWWBYPOIULMOBMJATLZKKHLPIGNWWUZFCQQMIKSYGVDEBWXDNYHXECOCSLXZDAEH");
    tmp_msg_0.lat = 0.15500240937498033;
    tmp_msg_0.lon = 0.7089640665231092;
    tmp_msg_0.depth = 0.7984503114092413;
    tmp_msg_0.query_channel = 71U;
    tmp_msg_0.reply_channel = 61U;
    tmp_msg_0.transponder_delay = 167U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8491040802416547;
    msg.y = 0.4444017443843765;
    msg.var_x = 0.805509046226205;
    msg.var_y = 0.21303178432140946;
    msg.distance = 0.30830111229975543;

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
    msg.setTimeStamp(0.44632508628265943);
    msg.setSource(40991U);
    msg.setSourceEntity(81U);
    msg.setDestination(16484U);
    msg.setDestinationEntity(58U);
    msg.state = 220U;

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
    msg.setTimeStamp(0.7370306698093426);
    msg.setSource(31446U);
    msg.setSourceEntity(37U);
    msg.setDestination(37136U);
    msg.setDestinationEntity(44U);
    msg.state = 247U;

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
    msg.setTimeStamp(0.39342344931250806);
    msg.setSource(25163U);
    msg.setSourceEntity(150U);
    msg.setDestination(47816U);
    msg.setDestinationEntity(27U);
    msg.state = 95U;

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
    msg.setTimeStamp(0.3028411352296905);
    msg.setSource(63851U);
    msg.setSourceEntity(188U);
    msg.setDestination(38117U);
    msg.setDestinationEntity(224U);
    msg.x = 0.534368413386183;
    msg.y = 0.2937876112852543;
    msg.z = 0.45951437350106483;

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
    msg.setTimeStamp(0.38895785777065683);
    msg.setSource(8416U);
    msg.setSourceEntity(18U);
    msg.setDestination(31956U);
    msg.setDestinationEntity(167U);
    msg.x = 0.8300511014658534;
    msg.y = 0.850896902807739;
    msg.z = 0.09056495349191529;

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
    msg.setTimeStamp(0.5883429742762363);
    msg.setSource(18188U);
    msg.setSourceEntity(36U);
    msg.setDestination(39944U);
    msg.setDestinationEntity(237U);
    msg.x = 0.051682083882304;
    msg.y = 0.9955801580677827;
    msg.z = 0.8555086458935622;

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
    msg.setTimeStamp(0.5507786238887675);
    msg.setSource(53018U);
    msg.setSourceEntity(46U);
    msg.setDestination(30497U);
    msg.setDestinationEntity(78U);
    msg.va = 0.4779615395806527;
    msg.aoa = 0.7810213274552115;
    msg.ssa = 0.02746638258564338;

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
    msg.setTimeStamp(0.32952661438995046);
    msg.setSource(55897U);
    msg.setSourceEntity(241U);
    msg.setDestination(13154U);
    msg.setDestinationEntity(204U);
    msg.va = 0.03231861364397548;
    msg.aoa = 0.48248965348417383;
    msg.ssa = 0.1964234604735775;

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
    msg.setTimeStamp(0.15476547676193897);
    msg.setSource(18770U);
    msg.setSourceEntity(152U);
    msg.setDestination(10311U);
    msg.setDestinationEntity(137U);
    msg.va = 0.18138505937656368;
    msg.aoa = 0.4653052578911543;
    msg.ssa = 0.525384185426308;

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
    msg.setTimeStamp(0.6601190288418184);
    msg.setSource(104U);
    msg.setSourceEntity(52U);
    msg.setDestination(15314U);
    msg.setDestinationEntity(238U);
    msg.value = 0.4706204485901083;

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
    msg.setTimeStamp(0.6937308820938253);
    msg.setSource(27941U);
    msg.setSourceEntity(100U);
    msg.setDestination(32581U);
    msg.setDestinationEntity(83U);
    msg.value = 0.27223167737424603;

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
    msg.setTimeStamp(0.8160216660465887);
    msg.setSource(353U);
    msg.setSourceEntity(26U);
    msg.setDestination(8987U);
    msg.setDestinationEntity(51U);
    msg.value = 0.3922867272236622;

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
    msg.setTimeStamp(0.03474542627858224);
    msg.setSource(64900U);
    msg.setSourceEntity(110U);
    msg.setDestination(16363U);
    msg.setDestinationEntity(133U);
    msg.value = 0.17616474769549373;
    msg.z_units = 43U;

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
    msg.setTimeStamp(0.7071934817241982);
    msg.setSource(49092U);
    msg.setSourceEntity(175U);
    msg.setDestination(33783U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8282460412248444;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.01908134089635527);
    msg.setSource(10914U);
    msg.setSourceEntity(73U);
    msg.setDestination(10866U);
    msg.setDestinationEntity(57U);
    msg.value = 0.6106800047406834;
    msg.z_units = 81U;

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
    msg.setTimeStamp(0.7486137776342942);
    msg.setSource(32078U);
    msg.setSourceEntity(213U);
    msg.setDestination(12765U);
    msg.setDestinationEntity(91U);
    msg.value = 0.43945739296434017;
    msg.speed_units = 49U;

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
    msg.setTimeStamp(0.0586444782605019);
    msg.setSource(4252U);
    msg.setSourceEntity(185U);
    msg.setDestination(22318U);
    msg.setDestinationEntity(100U);
    msg.value = 0.03310442897058652;
    msg.speed_units = 53U;

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
    msg.setTimeStamp(0.6079021609942671);
    msg.setSource(52808U);
    msg.setSourceEntity(216U);
    msg.setDestination(19173U);
    msg.setDestinationEntity(147U);
    msg.value = 0.757826283083649;
    msg.speed_units = 251U;

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
    msg.setTimeStamp(0.2848944307774788);
    msg.setSource(38328U);
    msg.setSourceEntity(154U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(62U);
    msg.value = 0.40345614901358595;

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
    msg.setTimeStamp(0.7797555350912289);
    msg.setSource(4613U);
    msg.setSourceEntity(234U);
    msg.setDestination(31622U);
    msg.setDestinationEntity(151U);
    msg.value = 0.3915156895580568;

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
    msg.setTimeStamp(0.38509123104040965);
    msg.setSource(64741U);
    msg.setSourceEntity(43U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(138U);
    msg.value = 0.7373270675365683;

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
    msg.setTimeStamp(0.641099902259156);
    msg.setSource(10007U);
    msg.setSourceEntity(110U);
    msg.setDestination(46859U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9518639031061246;

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
    msg.setTimeStamp(0.9265939465483385);
    msg.setSource(12057U);
    msg.setSourceEntity(9U);
    msg.setDestination(26683U);
    msg.setDestinationEntity(171U);
    msg.value = 0.21791909897331574;

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
    msg.setTimeStamp(0.9084817268048981);
    msg.setSource(20929U);
    msg.setSourceEntity(55U);
    msg.setDestination(22339U);
    msg.setDestinationEntity(171U);
    msg.value = 0.25029561797309485;

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
    msg.setTimeStamp(0.06861110457022124);
    msg.setSource(53214U);
    msg.setSourceEntity(247U);
    msg.setDestination(51502U);
    msg.setDestinationEntity(77U);
    msg.value = 0.3969542850950093;

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
    msg.setTimeStamp(0.2854333175166198);
    msg.setSource(14585U);
    msg.setSourceEntity(249U);
    msg.setDestination(4214U);
    msg.setDestinationEntity(24U);
    msg.value = 0.36018672292548604;

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
    msg.setTimeStamp(0.6258084204061922);
    msg.setSource(42575U);
    msg.setSourceEntity(20U);
    msg.setDestination(27909U);
    msg.setDestinationEntity(155U);
    msg.value = 0.120347379690111;

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
    msg.setTimeStamp(0.046643351583231074);
    msg.setSource(23449U);
    msg.setSourceEntity(125U);
    msg.setDestination(19242U);
    msg.setDestinationEntity(24U);
    msg.path_ref = 1519367835U;
    msg.start_lat = 0.8021245479708735;
    msg.start_lon = 0.030188380102843526;
    msg.start_z = 0.4719394053650362;
    msg.start_z_units = 20U;
    msg.end_lat = 0.46394048362789686;
    msg.end_lon = 0.8729283189453708;
    msg.end_z = 0.7130879824386165;
    msg.end_z_units = 88U;
    msg.speed = 0.7738458251169585;
    msg.speed_units = 1U;
    msg.lradius = 0.43739981373198056;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.8267862490368233);
    msg.setSource(12974U);
    msg.setSourceEntity(193U);
    msg.setDestination(51255U);
    msg.setDestinationEntity(202U);
    msg.path_ref = 3265796297U;
    msg.start_lat = 0.26211838155729916;
    msg.start_lon = 0.8062880072769073;
    msg.start_z = 0.9983153372158418;
    msg.start_z_units = 195U;
    msg.end_lat = 0.8743216794869374;
    msg.end_lon = 0.9674463780695314;
    msg.end_z = 0.23686788556433003;
    msg.end_z_units = 30U;
    msg.speed = 0.020492102230660447;
    msg.speed_units = 132U;
    msg.lradius = 0.21266082887579707;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.47089091557044993);
    msg.setSource(2316U);
    msg.setSourceEntity(81U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(160U);
    msg.path_ref = 1362808732U;
    msg.start_lat = 0.8329405713798813;
    msg.start_lon = 0.4846419845416039;
    msg.start_z = 0.21741915752727625;
    msg.start_z_units = 113U;
    msg.end_lat = 0.08491568866610832;
    msg.end_lon = 0.17065541694360797;
    msg.end_z = 0.9606864357132407;
    msg.end_z_units = 100U;
    msg.speed = 0.185167205384012;
    msg.speed_units = 156U;
    msg.lradius = 0.9167529167635988;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.9513679462074891);
    msg.setSource(43888U);
    msg.setSourceEntity(252U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(186U);
    msg.x = 0.9735309260222921;
    msg.y = 0.4585147085036969;
    msg.z = 0.4777240632770754;
    msg.k = 0.9297043271267592;
    msg.m = 0.3774162212226104;
    msg.n = 0.6866604563476114;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.8943352953433917);
    msg.setSource(48187U);
    msg.setSourceEntity(23U);
    msg.setDestination(830U);
    msg.setDestinationEntity(48U);
    msg.x = 0.7071689714041695;
    msg.y = 0.07283996529893855;
    msg.z = 0.9818711024547533;
    msg.k = 0.9782448586688731;
    msg.m = 0.08983640790228731;
    msg.n = 0.093606799056138;
    msg.flags = 174U;

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
    msg.setTimeStamp(0.20928008554523403);
    msg.setSource(19755U);
    msg.setSourceEntity(89U);
    msg.setDestination(13167U);
    msg.setDestinationEntity(229U);
    msg.x = 0.4616431698583411;
    msg.y = 0.19959491606833035;
    msg.z = 0.6536058072824552;
    msg.k = 0.24440348394348665;
    msg.m = 0.24183974777192907;
    msg.n = 0.8968380997734196;
    msg.flags = 60U;

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
    msg.setTimeStamp(0.5625469458906982);
    msg.setSource(22211U);
    msg.setSourceEntity(207U);
    msg.setDestination(21595U);
    msg.setDestinationEntity(233U);
    msg.value = 0.452048220888176;

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
    msg.setTimeStamp(0.9013631420795609);
    msg.setSource(36221U);
    msg.setSourceEntity(244U);
    msg.setDestination(55391U);
    msg.setDestinationEntity(90U);
    msg.value = 0.4932786901886347;

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
    msg.setTimeStamp(0.9202771051275069);
    msg.setSource(54327U);
    msg.setSourceEntity(248U);
    msg.setDestination(45443U);
    msg.setDestinationEntity(95U);
    msg.value = 0.25521476026632806;

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
    msg.setTimeStamp(0.304056949310495);
    msg.setSource(25605U);
    msg.setSourceEntity(44U);
    msg.setDestination(5976U);
    msg.setDestinationEntity(73U);
    msg.u = 0.1499446078483242;
    msg.v = 0.24340462671713603;
    msg.w = 0.45983796186729076;
    msg.p = 0.5576232576292501;
    msg.q = 0.8142394089456286;
    msg.r = 0.2755294709943099;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.21454268910971575);
    msg.setSource(40178U);
    msg.setSourceEntity(6U);
    msg.setDestination(33746U);
    msg.setDestinationEntity(36U);
    msg.u = 0.2588905227795827;
    msg.v = 0.28071031497234733;
    msg.w = 0.5706972786861173;
    msg.p = 0.7138620576027709;
    msg.q = 0.4608873356053331;
    msg.r = 0.5467429274521939;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.1850456050964373);
    msg.setSource(35919U);
    msg.setSourceEntity(43U);
    msg.setDestination(3471U);
    msg.setDestinationEntity(39U);
    msg.u = 0.19155660582526568;
    msg.v = 0.6212286277210981;
    msg.w = 0.02332970664414913;
    msg.p = 0.20393554933352964;
    msg.q = 0.5601141100453259;
    msg.r = 0.14967037281057283;
    msg.flags = 23U;

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
    msg.setTimeStamp(0.05213878430408503);
    msg.setSource(12900U);
    msg.setSourceEntity(122U);
    msg.setDestination(14012U);
    msg.setDestinationEntity(201U);
    msg.path_ref = 861068383U;
    msg.start_lat = 0.27462636820884667;
    msg.start_lon = 0.9283310516322111;
    msg.start_z = 0.09903175729491465;
    msg.start_z_units = 156U;
    msg.end_lat = 0.8064619425907336;
    msg.end_lon = 0.2615483539302704;
    msg.end_z = 0.5957441461384069;
    msg.end_z_units = 174U;
    msg.lradius = 0.6429645809965164;
    msg.flags = 237U;
    msg.x = 0.35702843044220367;
    msg.y = 0.48820470476247213;
    msg.z = 0.3213903827372704;
    msg.vx = 0.6579487692170926;
    msg.vy = 0.13345399081537046;
    msg.vz = 0.22111635502850646;
    msg.course_error = 0.7770976729287569;
    msg.eta = 20358U;

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
    msg.setTimeStamp(0.06391185662889465);
    msg.setSource(30821U);
    msg.setSourceEntity(222U);
    msg.setDestination(58491U);
    msg.setDestinationEntity(35U);
    msg.path_ref = 2336552968U;
    msg.start_lat = 0.15397085192495552;
    msg.start_lon = 0.4288219444279403;
    msg.start_z = 0.12272498005819732;
    msg.start_z_units = 230U;
    msg.end_lat = 0.06745959695507231;
    msg.end_lon = 0.17046379674663992;
    msg.end_z = 0.21283518692445014;
    msg.end_z_units = 253U;
    msg.lradius = 0.6793772651241089;
    msg.flags = 74U;
    msg.x = 0.49100342335364755;
    msg.y = 0.32389216419080535;
    msg.z = 0.8177972577867985;
    msg.vx = 0.25947774517628885;
    msg.vy = 0.9395339174030254;
    msg.vz = 0.04224294098546666;
    msg.course_error = 0.18552864326907093;
    msg.eta = 16553U;

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
    msg.setTimeStamp(0.8720396516931491);
    msg.setSource(25104U);
    msg.setSourceEntity(7U);
    msg.setDestination(7543U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 3735432915U;
    msg.start_lat = 0.727888970261547;
    msg.start_lon = 0.5338983950230071;
    msg.start_z = 0.42007029323004863;
    msg.start_z_units = 189U;
    msg.end_lat = 0.3997036613363377;
    msg.end_lon = 0.3807470541371837;
    msg.end_z = 0.1958776021222589;
    msg.end_z_units = 39U;
    msg.lradius = 0.3690413025708753;
    msg.flags = 108U;
    msg.x = 0.6920035246198686;
    msg.y = 0.15148201920531557;
    msg.z = 0.4079276162444535;
    msg.vx = 0.9775748526061206;
    msg.vy = 0.7999332812359807;
    msg.vz = 0.6376127187611822;
    msg.course_error = 0.3695095861289537;
    msg.eta = 27636U;

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
    msg.setTimeStamp(0.44318777138783505);
    msg.setSource(57173U);
    msg.setSourceEntity(227U);
    msg.setDestination(40974U);
    msg.setDestinationEntity(166U);
    msg.k = 0.6931464921483768;
    msg.m = 0.09987393722209137;
    msg.n = 0.8352509676763711;

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
    msg.setTimeStamp(0.719907640276398);
    msg.setSource(43417U);
    msg.setSourceEntity(147U);
    msg.setDestination(35738U);
    msg.setDestinationEntity(150U);
    msg.k = 0.21909007196335728;
    msg.m = 0.3917358517039188;
    msg.n = 0.2700289438925123;

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
    msg.setTimeStamp(0.7316064368925124);
    msg.setSource(26403U);
    msg.setSourceEntity(81U);
    msg.setDestination(1352U);
    msg.setDestinationEntity(237U);
    msg.k = 0.5547364768709271;
    msg.m = 0.8704368194714274;
    msg.n = 0.6318640012437905;

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
    msg.setTimeStamp(0.584107641012731);
    msg.setSource(60194U);
    msg.setSourceEntity(26U);
    msg.setDestination(34508U);
    msg.setDestinationEntity(238U);
    msg.p = 0.4703513934348973;
    msg.i = 0.9410402729774148;
    msg.d = 0.3687558975304096;
    msg.a = 0.187386687187989;

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
    msg.setTimeStamp(0.8599716061549361);
    msg.setSource(63605U);
    msg.setSourceEntity(126U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(181U);
    msg.p = 0.8521472591455648;
    msg.i = 0.7715830058334511;
    msg.d = 0.2654403753633935;
    msg.a = 0.8522977131137235;

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
    msg.setTimeStamp(0.5352592021266607);
    msg.setSource(16066U);
    msg.setSourceEntity(202U);
    msg.setDestination(18318U);
    msg.setDestinationEntity(177U);
    msg.p = 0.38808176225107405;
    msg.i = 0.42354298591278905;
    msg.d = 0.04579545112865946;
    msg.a = 0.9583755972044515;

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
    msg.setTimeStamp(0.1918569029672318);
    msg.setSource(24247U);
    msg.setSourceEntity(33U);
    msg.setDestination(13054U);
    msg.setDestinationEntity(209U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.26268621214507604);
    msg.setSource(55237U);
    msg.setSourceEntity(207U);
    msg.setDestination(40836U);
    msg.setDestinationEntity(136U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.9619399515173905);
    msg.setSource(26740U);
    msg.setSourceEntity(241U);
    msg.setDestination(64857U);
    msg.setDestinationEntity(39U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.19861184949442412);
    msg.setSource(10368U);
    msg.setSourceEntity(25U);
    msg.setDestination(34423U);
    msg.setDestinationEntity(72U);
    msg.x = 0.7510527213819355;
    msg.y = 0.5626020918381105;
    msg.z = 0.6058044252683292;
    msg.vx = 0.7206665403155064;
    msg.vy = 0.6648430636852968;
    msg.vz = 0.580354628551741;
    msg.ax = 0.49981710891168085;
    msg.ay = 0.045055521567822665;
    msg.az = 0.4931115553424621;
    msg.flags = 29066U;

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
    msg.setTimeStamp(0.5059752742548493);
    msg.setSource(34367U);
    msg.setSourceEntity(160U);
    msg.setDestination(64015U);
    msg.setDestinationEntity(103U);
    msg.x = 0.25166200059428123;
    msg.y = 0.6020574064835339;
    msg.z = 0.8653277693345723;
    msg.vx = 0.09135913683009389;
    msg.vy = 0.09690536282536177;
    msg.vz = 0.28205213974293486;
    msg.ax = 0.5052988603326221;
    msg.ay = 0.6212141094249845;
    msg.az = 0.9670055682607142;
    msg.flags = 18383U;

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
    msg.setTimeStamp(0.5909225205487121);
    msg.setSource(40442U);
    msg.setSourceEntity(41U);
    msg.setDestination(65438U);
    msg.setDestinationEntity(137U);
    msg.x = 0.9354211258567641;
    msg.y = 0.9481039225290917;
    msg.z = 0.09984993102608686;
    msg.vx = 0.8721684362352204;
    msg.vy = 0.4224237549961748;
    msg.vz = 0.11987827251991168;
    msg.ax = 0.48993491058167704;
    msg.ay = 0.04174358513340792;
    msg.az = 0.9403460901202102;
    msg.flags = 55502U;

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
    msg.setTimeStamp(0.3757014969322495);
    msg.setSource(22024U);
    msg.setSourceEntity(78U);
    msg.setDestination(32286U);
    msg.setDestinationEntity(204U);
    msg.value = 0.7437841827191091;

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
    msg.setTimeStamp(0.9068954387179553);
    msg.setSource(57415U);
    msg.setSourceEntity(215U);
    msg.setDestination(41052U);
    msg.setDestinationEntity(135U);
    msg.value = 0.6165821767119178;

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
    msg.setTimeStamp(0.06713063015813914);
    msg.setSource(16028U);
    msg.setSourceEntity(91U);
    msg.setDestination(50632U);
    msg.setDestinationEntity(195U);
    msg.value = 0.22418390005973698;

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
    msg.setTimeStamp(0.5206569033207322);
    msg.setSource(15324U);
    msg.setSourceEntity(90U);
    msg.setDestination(42970U);
    msg.setDestinationEntity(102U);
    msg.timeout = 8304U;
    msg.lat = 0.3064111978570684;
    msg.lon = 0.46661770431882155;
    msg.z = 0.5065026233485751;
    msg.z_units = 94U;
    msg.speed = 0.4656097616032905;
    msg.speed_units = 173U;
    msg.roll = 0.48246468007581145;
    msg.pitch = 0.1674136188158688;
    msg.yaw = 0.27907898961964783;
    msg.custom.assign("ZTDIZOTPRDNQXXWYSVSKQKFUGDIBONUMDLYRNROOZFOAYIRXGD");

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
    msg.setTimeStamp(0.31244151244506124);
    msg.setSource(34185U);
    msg.setSourceEntity(188U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(191U);
    msg.timeout = 59759U;
    msg.lat = 0.8015277443503152;
    msg.lon = 0.21365045267347982;
    msg.z = 0.28986394676500415;
    msg.z_units = 71U;
    msg.speed = 0.12951431751261622;
    msg.speed_units = 144U;
    msg.roll = 0.5769618187551326;
    msg.pitch = 0.22116983161651238;
    msg.yaw = 0.2771571366728707;
    msg.custom.assign("BITYSTRTGHLNYQKEDGPXQOENGDPEVNTJKMJIGCBZHZWPPPQWDRWOHJULJOWQMSADFZFVHURXCNKRRLJBREQNHOMSMYXPXADTYTFZKEHECRWBOEKPSFHBWERYMCVUXXAMZIDQHL");

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
    msg.setTimeStamp(0.3561078628581942);
    msg.setSource(57043U);
    msg.setSourceEntity(176U);
    msg.setDestination(55887U);
    msg.setDestinationEntity(145U);
    msg.timeout = 724U;
    msg.lat = 0.9546379401951629;
    msg.lon = 0.1719938324409357;
    msg.z = 0.6089663043799083;
    msg.z_units = 244U;
    msg.speed = 0.9339882324479826;
    msg.speed_units = 166U;
    msg.roll = 0.8178764306635368;
    msg.pitch = 0.17068237943152642;
    msg.yaw = 0.4548318065099345;
    msg.custom.assign("BYOHDZRCBDPIRTAPDBUYUUAYDZQFAJYZXCKWKDMAKECIWMKNTDQXPI");

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
    msg.setTimeStamp(0.4220488863406471);
    msg.setSource(36268U);
    msg.setSourceEntity(197U);
    msg.setDestination(21696U);
    msg.setDestinationEntity(196U);
    msg.timeout = 15382U;
    msg.lat = 0.6410390475438767;
    msg.lon = 0.4054613781373211;
    msg.z = 0.7818870713821858;
    msg.z_units = 16U;
    msg.speed = 0.8360833947877323;
    msg.speed_units = 20U;
    msg.duration = 9057U;
    msg.radius = 0.9640103583689555;
    msg.flags = 8U;
    msg.custom.assign("FJYLCCCMSIGWSNAXBKNAGTWBWSJFLPQJYOCAGFNSDHRARJRQBKZVUDSUIKAJSANKJVOLRNEIQENGUZWLBJHMWPVLBRPCOMQIBEDLYEEODHEMSVTPNQITAHCMNQGTEUCEH");

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
    msg.setTimeStamp(0.5964927548254748);
    msg.setSource(58108U);
    msg.setSourceEntity(141U);
    msg.setDestination(44014U);
    msg.setDestinationEntity(201U);
    msg.timeout = 54884U;
    msg.lat = 0.6670213197412986;
    msg.lon = 0.9791082416805582;
    msg.z = 0.5556162763521403;
    msg.z_units = 114U;
    msg.speed = 0.09258904782342314;
    msg.speed_units = 158U;
    msg.duration = 16163U;
    msg.radius = 0.18807874808277047;
    msg.flags = 102U;
    msg.custom.assign("WRCBZXSFHESNJDULMDKWYZLBNDBMWGTGCNKGQROIQNKLXEHBKNABZJEVPCRZQBITWRODDLHIZYNVJKAAOPLENMMMGMHCFTTJXUOYSDEFAPPXFRPVONGBCFNWWBPWHDXHWUTCIYIECUQOAZJZZLFJR");

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
    msg.setTimeStamp(0.09963709650696606);
    msg.setSource(9155U);
    msg.setSourceEntity(224U);
    msg.setDestination(12431U);
    msg.setDestinationEntity(153U);
    msg.timeout = 1018U;
    msg.lat = 0.22810105149527526;
    msg.lon = 0.4335271428147822;
    msg.z = 0.7023779510330178;
    msg.z_units = 135U;
    msg.speed = 0.829925505022336;
    msg.speed_units = 229U;
    msg.duration = 53960U;
    msg.radius = 0.784149628818582;
    msg.flags = 4U;
    msg.custom.assign("ZQMWFOZRMOPJXLTIYJTJLWSGMYGKAUDUFNTWDBVPGGMQAVSOKCAPYSFZKWTBNUJECBTXMNINYOJVVOEJHRUHLBNWBGWXJKYXVK");

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
    msg.setTimeStamp(0.554141895320862);
    msg.setSource(18883U);
    msg.setSourceEntity(223U);
    msg.setDestination(62783U);
    msg.setDestinationEntity(199U);
    msg.custom.assign("KVNCOMZWROHPCYYXJRULQXJJJYGQHVJMQTOBLNICYSFGTKFDPPJHUWQZLTYZDETCB");

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
    msg.setTimeStamp(0.17271359031878075);
    msg.setSource(21869U);
    msg.setSourceEntity(137U);
    msg.setDestination(43626U);
    msg.setDestinationEntity(171U);
    msg.custom.assign("AQOKMTNSJZRTXBMLCTHJYCMKTYPNTKXQJXEXBHFHNYIYIODSBYBSQJLWAHWYMJPNZSXGKQBSGSQRDVFNLPIUEJYSUPEXUWMWIGTQKGUHOLOLHRFPZZAOUZIGRWNKFDGMIOCQZLECJCSVTYUDIKODOLPJFFLJGTVVBBJCLNFBAGVDMWOEKAIHEKZXABYPMVPQWXNVUA");

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
    msg.setTimeStamp(0.5611703733975842);
    msg.setSource(56863U);
    msg.setSourceEntity(215U);
    msg.setDestination(65018U);
    msg.setDestinationEntity(29U);
    msg.custom.assign("NOHCTKUFWTWIHDSOREPDLUDXLQTWSJIESKYPGEHZZCHDYYBQXYSBVSDOHFFNASEYKXURIDMZTNPFNQGJCACIVZIZDEPZOYOMVXXZ");

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
    msg.setTimeStamp(0.017402071560374655);
    msg.setSource(54599U);
    msg.setSourceEntity(86U);
    msg.setDestination(33501U);
    msg.setDestinationEntity(89U);
    msg.timeout = 62294U;
    msg.lat = 0.2745199417404893;
    msg.lon = 0.21003965746177478;
    msg.z = 0.5049820889606543;
    msg.z_units = 98U;
    msg.duration = 23299U;
    msg.speed = 0.9460080659812886;
    msg.speed_units = 161U;
    msg.type = 163U;
    msg.radius = 0.6808153108783878;
    msg.length = 0.800688612296096;
    msg.bearing = 0.8536567364124449;
    msg.direction = 116U;
    msg.custom.assign("UDXHQEZZECCOCCADWATRPNGWAUUTKHDXSYUVJFFSZAKUNJXSWPEGYLSHHQPLDUKDOTPAVJXVJUHIZLXYRBTBIBTLNFNKAOPCWG");

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
    msg.setTimeStamp(0.3757302648297789);
    msg.setSource(39142U);
    msg.setSourceEntity(147U);
    msg.setDestination(245U);
    msg.setDestinationEntity(98U);
    msg.timeout = 44476U;
    msg.lat = 0.5295747946806195;
    msg.lon = 0.05601504415655911;
    msg.z = 0.017490259452785928;
    msg.z_units = 179U;
    msg.duration = 62768U;
    msg.speed = 0.9778741991899979;
    msg.speed_units = 234U;
    msg.type = 69U;
    msg.radius = 0.43986156906820684;
    msg.length = 0.03855511906776221;
    msg.bearing = 0.7830349532703362;
    msg.direction = 86U;
    msg.custom.assign("FJTFEYYLIIHNWDTRHX");

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
    msg.setTimeStamp(0.9418917819841912);
    msg.setSource(15497U);
    msg.setSourceEntity(253U);
    msg.setDestination(29530U);
    msg.setDestinationEntity(210U);
    msg.timeout = 5181U;
    msg.lat = 0.14967549360585197;
    msg.lon = 0.5721424536725417;
    msg.z = 0.45249822302539233;
    msg.z_units = 83U;
    msg.duration = 5848U;
    msg.speed = 0.8155550735654611;
    msg.speed_units = 60U;
    msg.type = 4U;
    msg.radius = 0.7713609572227282;
    msg.length = 0.6097434265896535;
    msg.bearing = 0.420013873368952;
    msg.direction = 118U;
    msg.custom.assign("GKUQVHYTFNXVDYLGIBYCRPWWBCGTSKWXTKJUBNUNZZMZALZTOPDYTSKVRPGLXBKQQOPAPNEHLMHMFJRUOFIYQCFNXIBMPGEQUDEAQCGHSEZGDLDKTHYLVYVDECSUMNXBEGQXRDQDMLPFCANNVOIYMALRATEZZBZAHKXIIVFWFJEJIXHELORVORUVOCYWWNFCJSFKSIHTBRSIBPLUOSKNFVPZY");

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
    msg.setTimeStamp(0.5272127132515213);
    msg.setSource(46195U);
    msg.setSourceEntity(231U);
    msg.setDestination(6004U);
    msg.setDestinationEntity(174U);
    msg.duration = 53200U;
    msg.custom.assign("MNIAURXOFHIBYVCHQTYUWCIFCSUXDTLPBQCYKZMOCYAVDOYTYIKOXJLARJPANXQGYIWVEFXYLRQTXAGPTFLVDFBHDDJ");

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
    msg.setTimeStamp(0.1421973115865579);
    msg.setSource(12869U);
    msg.setSourceEntity(108U);
    msg.setDestination(10706U);
    msg.setDestinationEntity(217U);
    msg.duration = 21643U;
    msg.custom.assign("GPZODSAMMGBPCPQSTFOQIFRIVBTSUIXDWMESLIP");

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
    msg.setTimeStamp(0.31127772785613705);
    msg.setSource(36747U);
    msg.setSourceEntity(158U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(65U);
    msg.duration = 25163U;
    msg.custom.assign("VGCWSTPUYGXQWDHQSXZSMDOIGZORLKDNOTSVMKFTWUFQXYRBKMDPIPLTBTAFEZLAHSLNCLYYCXKXJDPJJVEIPEJQGAVIMPZUZYCRNMJCLBBVUQBNCGJDRWOUQTEPELIUGYWASRUWBMHQWYDIHDFEMKOBILAUJBENFTXOWHJXEHNNHUS");

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
    msg.setTimeStamp(0.9620147732708698);
    msg.setSource(8960U);
    msg.setSourceEntity(191U);
    msg.setDestination(29817U);
    msg.setDestinationEntity(114U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1378577933U;
    tmp_msg_0.start_lat = 0.8302494746533432;
    tmp_msg_0.start_lon = 0.1457278900811949;
    tmp_msg_0.start_z = 0.2945525773726291;
    tmp_msg_0.start_z_units = 10U;
    tmp_msg_0.end_lat = 0.9959790007563234;
    tmp_msg_0.end_lon = 0.7251645203509391;
    tmp_msg_0.end_z = 0.18995539919641768;
    tmp_msg_0.end_z_units = 32U;
    tmp_msg_0.speed = 0.1510061047477057;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.lradius = 0.04948127879000341;
    tmp_msg_0.flags = 8U;
    msg.control.set(tmp_msg_0);
    msg.duration = 5393U;
    msg.custom.assign("UDWHJLBHNVNXPCLANDQDKLGVDRPIYMABMSHJVHTBXJZTKLEEZRANXLTKFYJYAMIVUKJGCCSDFOEUVZKPLOVYPEQZILBXAUYGLEIFMMRGHVRWJQOZWQTDRSQIQDBDWSSUFOCWYOWPQRQSIOCHOPUCWM");

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
    msg.setTimeStamp(0.39049828961100697);
    msg.setSource(12242U);
    msg.setSourceEntity(230U);
    msg.setDestination(41319U);
    msg.setDestinationEntity(138U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.531508243126937;
    msg.control.set(tmp_msg_0);
    msg.duration = 32602U;
    msg.custom.assign("ZOUESHLWZMFACCBZYHKPRXO");

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
    msg.setTimeStamp(0.6627736531881785);
    msg.setSource(24855U);
    msg.setSourceEntity(106U);
    msg.setDestination(50405U);
    msg.setDestinationEntity(158U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.815716560768441;
    tmp_msg_0.z_units = 242U;
    msg.control.set(tmp_msg_0);
    msg.duration = 49853U;
    msg.custom.assign("UEVSBBRQZUFRHINFOWLLHXOKUIYBSVFWVQIOWVPJSETPJOVJFBCJLIRVXUBATGRLYXYKNTDUNLPNWCUECLYWJBSQGHYGWIXIAFCHKRRAJNYVQQXFINMPCLENSDWZWTRHDDKLYNPCGXBKT");

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
    msg.setTimeStamp(0.34795365532812217);
    msg.setSource(50466U);
    msg.setSourceEntity(220U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(226U);
    msg.timeout = 63518U;
    msg.lat = 0.5805198408211866;
    msg.lon = 0.7060879861839702;
    msg.z = 0.0614371884500875;
    msg.z_units = 100U;
    msg.speed = 0.47917506174750224;
    msg.speed_units = 66U;
    msg.bearing = 0.18356488744808697;
    msg.cross_angle = 0.530219225028182;
    msg.width = 0.026329762329884154;
    msg.length = 0.6952985486445358;
    msg.hstep = 0.35610787008644373;
    msg.coff = 71U;
    msg.alternation = 192U;
    msg.flags = 188U;
    msg.custom.assign("PJTCDLEHUCYLAZWGULKBNPBIEWRXRYDOIZFNLAAYPZPWYATBDVUQFWINSMIFAFMMRFITWJKBTXEMRPXFWJRCRUQGSOBJRAAPVMNTUYCXCNKVIJGGFHJUKBMKWE");

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
    msg.setTimeStamp(0.8817726391502658);
    msg.setSource(39785U);
    msg.setSourceEntity(142U);
    msg.setDestination(20884U);
    msg.setDestinationEntity(235U);
    msg.timeout = 819U;
    msg.lat = 0.8961702925297855;
    msg.lon = 0.07087536404451478;
    msg.z = 0.7272899979814558;
    msg.z_units = 32U;
    msg.speed = 0.3685440985751298;
    msg.speed_units = 107U;
    msg.bearing = 0.1599783575248378;
    msg.cross_angle = 0.9465777458292061;
    msg.width = 0.13639583942091882;
    msg.length = 0.7399735622110497;
    msg.hstep = 0.36126964727304933;
    msg.coff = 111U;
    msg.alternation = 100U;
    msg.flags = 59U;
    msg.custom.assign("TNRCDKFCTQYESESVGWTUMXHZFDWIWCOBYKXHUJDMHVMPZNGNMPKPWGXJZCGCAYNIRLAHHJJBBDBYIXLYPBCAHTKRSMAARNJEIPJBYFVJBGTDODAXKUXGEEWQVDUBFKPVTCEBKCNSAKLUFASUOLQLL");

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
    msg.setTimeStamp(0.7192748325582605);
    msg.setSource(9000U);
    msg.setSourceEntity(82U);
    msg.setDestination(55189U);
    msg.setDestinationEntity(132U);
    msg.timeout = 52911U;
    msg.lat = 0.07225080950903162;
    msg.lon = 0.6295773101653843;
    msg.z = 0.3176906083314541;
    msg.z_units = 15U;
    msg.speed = 0.9992811931889272;
    msg.speed_units = 248U;
    msg.bearing = 0.04097444595945465;
    msg.cross_angle = 0.18924449887789185;
    msg.width = 0.06945731536704136;
    msg.length = 0.60140588825278;
    msg.hstep = 0.4028966656263355;
    msg.coff = 131U;
    msg.alternation = 252U;
    msg.flags = 34U;
    msg.custom.assign("DPSWIZMMDWLGBTBSOZKTENRGNUYFFNRMCFCTBAYSFFJOQHXJVWIKECQOVYBMGTHVDSEDIXHXYPJEGBCYDYBSSMUUFIUGGRVIIUIBNZXAHVQEGQRZHDRUJGMVOGNFXTUZZVWQOYOWEZPTIPDWFKKKXHRXBREEALDERSLACXQMAAJLKDVPRHICT");

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
    msg.setTimeStamp(0.22563215782459412);
    msg.setSource(61007U);
    msg.setSourceEntity(212U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(145U);
    msg.timeout = 33616U;
    msg.lat = 0.4179599874026485;
    msg.lon = 0.7323423053927981;
    msg.z = 0.13458142114635085;
    msg.z_units = 148U;
    msg.speed = 0.4988992783295152;
    msg.speed_units = 123U;
    msg.custom.assign("SDUOCRNFBWJVJITCIRRAZIOFUBVCKWUVTNAYFJYONGUQWMGWBZVLRCPNICBLBLWMLSETHSDPTKQTCJQQKMZDCGGLEXEOAESDPMBUOHRXGVPOLMIMDWHDYDZYKHVKZKKHEFLUQLOXAFTQFTKGLYNJANIBSHUYGIBXSYSRBWWJJFEFUKSLHNXNDQTCPAYMGUDRJVSPXTXNVAFZIQZYAOXPYOSHVUZAQTJXPMVARBEEDZEP");

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
    msg.setTimeStamp(0.23498025522000054);
    msg.setSource(48649U);
    msg.setSourceEntity(254U);
    msg.setDestination(3333U);
    msg.setDestinationEntity(143U);
    msg.timeout = 1935U;
    msg.lat = 0.6596184393042644;
    msg.lon = 0.30308261582142315;
    msg.z = 0.39330664704318963;
    msg.z_units = 105U;
    msg.speed = 0.8587946203932325;
    msg.speed_units = 18U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.21468120285551073;
    tmp_msg_0.y = 0.32228581686381275;
    tmp_msg_0.z = 0.703156854400265;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DAKRMXXNVABUFWLCHXZYQTRUSJGUOJTUBDTLFYXZVAXROTPINOBJHCALOEGPGIKHXYNOPVQOYGTQFTASFEBSYZAFWWZRYBIUMMSDVRQIJCENFUGLXSACHRDMEASLUKSQZPGHPGJEPZDYHWSDTQDPTJKQZMIBGCJJACJFUCOWVEHRBKTIEXWNNLBFIHXMKGGLYDIUNBWQRFOPRQWDVEKLUDWIOMPVZAMLWZCJ");

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
    msg.setTimeStamp(0.02386929485503475);
    msg.setSource(16201U);
    msg.setSourceEntity(181U);
    msg.setDestination(20899U);
    msg.setDestinationEntity(181U);
    msg.timeout = 53457U;
    msg.lat = 0.8628704568353398;
    msg.lon = 0.4726590190367894;
    msg.z = 0.18088042558795858;
    msg.z_units = 210U;
    msg.speed = 0.3992403923412604;
    msg.speed_units = 215U;
    msg.custom.assign("VMRIHXRPOPPPZYNCDNWLIVIWSKHQWAGLLJGAQXAYFCVVNMHERSWFVLESFULFYSHKZMTKDOBTJJXZBMUNIQIXGD");

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
    msg.setTimeStamp(0.5561257170136417);
    msg.setSource(60720U);
    msg.setSourceEntity(7U);
    msg.setDestination(57900U);
    msg.setDestinationEntity(194U);
    msg.x = 0.3843830864627047;
    msg.y = 0.9378746470769305;
    msg.z = 0.14606017535418503;

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
    msg.setTimeStamp(0.2453739886238886);
    msg.setSource(30188U);
    msg.setSourceEntity(9U);
    msg.setDestination(37191U);
    msg.setDestinationEntity(39U);
    msg.x = 0.3123325211982255;
    msg.y = 0.04618326136541284;
    msg.z = 0.5586866258553792;

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
    msg.setTimeStamp(0.5114662873745067);
    msg.setSource(55220U);
    msg.setSourceEntity(137U);
    msg.setDestination(61790U);
    msg.setDestinationEntity(190U);
    msg.x = 0.6983388538855891;
    msg.y = 0.0655385536119808;
    msg.z = 0.9561070567027447;

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
    msg.setTimeStamp(0.7369332033627519);
    msg.setSource(32595U);
    msg.setSourceEntity(221U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(218U);
    msg.timeout = 58050U;
    msg.lat = 0.19153239334018413;
    msg.lon = 0.47092460868953223;
    msg.z = 0.3654633273910213;
    msg.z_units = 75U;
    msg.amplitude = 0.31088573315268064;
    msg.pitch = 0.3811104389700555;
    msg.speed = 0.3875779723603918;
    msg.speed_units = 238U;
    msg.custom.assign("XWENKISRRATBOQHWVVBSSYJLRDZGMCWSKGPNKYYNEWGROURFPJKHNZFXIUUNUEQLOSBLBPSVLSJGZLJMXMHIDIZSCJXDVXDLKFCDNHLZAVBAEIJJIVUBTBMAAWUCXFOLWDVDJWSOUXPBKQCGYHMCPSTMXEYRVQDNAUTOEZZAWTQMBRHDGHWKIRMQJUAPMPKFIQHXLIPYCFZKZPAZKOEEAHQUDNJTFGVQINGTFRCECBHQTT");

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
    msg.setTimeStamp(0.01289967724066643);
    msg.setSource(27510U);
    msg.setSourceEntity(16U);
    msg.setDestination(56835U);
    msg.setDestinationEntity(107U);
    msg.timeout = 35901U;
    msg.lat = 0.8402305309162861;
    msg.lon = 0.8160539222829157;
    msg.z = 0.7519182742023778;
    msg.z_units = 191U;
    msg.amplitude = 0.03004667249213333;
    msg.pitch = 0.660159334048835;
    msg.speed = 0.10902129113757064;
    msg.speed_units = 230U;
    msg.custom.assign("BEXKGZTBIOXGRBCYWQQUIKOMUVQIBVEZBHIBIBPDIXTPSJULTJHSJACUPDXZTOYCPFVWDRPAMLFNXCOEIHYRKMGGENKLEFGZWLWHUSYJTXMOCLRMTDELDAAORWKTZHRYAXETJWSCPLXZKCLUKMNQFBNFIBZZOVOPJZMJCYAMWANZJAGXGDFHAYIEFSYNUWNXNGQCFQFHIYVVVASJHBGPQKOHN");

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
    msg.setTimeStamp(0.10513225050288799);
    msg.setSource(20024U);
    msg.setSourceEntity(228U);
    msg.setDestination(27335U);
    msg.setDestinationEntity(14U);
    msg.timeout = 15375U;
    msg.lat = 0.6128427146715578;
    msg.lon = 0.32630106191959163;
    msg.z = 0.7006373909565791;
    msg.z_units = 4U;
    msg.amplitude = 0.2728656811944431;
    msg.pitch = 0.8133330747369418;
    msg.speed = 0.3038395651844884;
    msg.speed_units = 89U;
    msg.custom.assign("RAWEFPYOCCHBUGIVRHVCGPFJMAAFSXKGPVXBSKZXIMUSEDSREGEHXZOFPINRQZFDGUHDLWATRDVESQQXIXJNXRBCTHCGYNFJQIIKPSMPXACDYWMPJVOIO");

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
    msg.setTimeStamp(0.5440786093508243);
    msg.setSource(17663U);
    msg.setSourceEntity(132U);
    msg.setDestination(47720U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.9907266517285644);
    msg.setSource(43054U);
    msg.setSourceEntity(144U);
    msg.setDestination(41190U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.3338449189741233);
    msg.setSource(26632U);
    msg.setSourceEntity(150U);
    msg.setDestination(58481U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.27721283313448497);
    msg.setSource(5468U);
    msg.setSourceEntity(240U);
    msg.setDestination(34109U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.2909026114515382;
    msg.lon = 0.02151319360711712;
    msg.z = 0.03772711042152643;
    msg.z_units = 242U;
    msg.radius = 0.5406338648317085;
    msg.duration = 15485U;
    msg.speed = 0.908332780770957;
    msg.speed_units = 96U;
    msg.custom.assign("ZLKFZYUGJXQHLYAHDIRTYVUXITDIKLBHATXBNABZGVNIDYXKMXWSZQRSSLXSOGMRXHNAZURMJWMJCLGDUKWFHPQAUUMGUCDSRVEOEIXSAOIRJYGZLZVBQVJCDHBWMNXIKBSIONELTWBRCWAKLAIMPQUMGCVEWEWWGHFRPDMKDYTQBPEEDAGTSMFHVCTSCFNKELJTZXJOFHYRFLOHNOK");

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
    msg.setTimeStamp(0.7027821910551226);
    msg.setSource(34722U);
    msg.setSourceEntity(22U);
    msg.setDestination(43363U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.8798586388613933;
    msg.lon = 0.670604992283026;
    msg.z = 0.3292183537353802;
    msg.z_units = 242U;
    msg.radius = 0.7735387388595104;
    msg.duration = 47891U;
    msg.speed = 0.8668360026999252;
    msg.speed_units = 11U;
    msg.custom.assign("LUCKCXXBCABYZWXHQHOTHZFWCOPYGFKLSBJMPHWTPMIIEQWQAOYKAHVKZJPHFFVATBAINDEGDRZUXPQWVMLYDSMJQKRVEQ");

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
    msg.setTimeStamp(0.7382101679565694);
    msg.setSource(26244U);
    msg.setSourceEntity(240U);
    msg.setDestination(63926U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.8480161397332925;
    msg.lon = 0.22917846608176884;
    msg.z = 0.6002034530726511;
    msg.z_units = 137U;
    msg.radius = 0.753859241115499;
    msg.duration = 51967U;
    msg.speed = 0.9798360763606828;
    msg.speed_units = 156U;
    msg.custom.assign("ZLTJJEQPDGWNXLQBTCNSEABDQXKKKUNPFWJBQJQLTUORCYYSTLNDDHBMNKXJCHJEZZDVATWFQCORLQZGBDZUIJAFFXOMBBHXSWNIK");

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
    msg.setTimeStamp(0.4043116677562052);
    msg.setSource(22832U);
    msg.setSourceEntity(196U);
    msg.setDestination(4731U);
    msg.setDestinationEntity(17U);
    msg.timeout = 27875U;
    msg.flags = 48U;
    msg.lat = 0.8500339417925612;
    msg.lon = 0.7992058801189937;
    msg.start_z = 0.9374862774183519;
    msg.start_z_units = 106U;
    msg.end_z = 0.7091738800747724;
    msg.end_z_units = 119U;
    msg.radius = 0.17928443621492762;
    msg.speed = 0.9540011139891903;
    msg.speed_units = 106U;
    msg.custom.assign("CQLGRMCNCRYJLISBQMYSZOFTZPRTLAKWVSQHFBOTNMLFVZACEQOXFTXFRGMHLEIKTXXOTRVDUKOMJNKUFVCEBSUWYWLQWMCJSDJMXRJPIPCPYUIXOGYEFHVQQEJRIEVXSANRZHKF");

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
    msg.setTimeStamp(0.05709882991799997);
    msg.setSource(7837U);
    msg.setSourceEntity(151U);
    msg.setDestination(102U);
    msg.setDestinationEntity(221U);
    msg.timeout = 3217U;
    msg.flags = 89U;
    msg.lat = 0.227913502245506;
    msg.lon = 0.7581431158863262;
    msg.start_z = 0.614509688847694;
    msg.start_z_units = 244U;
    msg.end_z = 0.7852554836675215;
    msg.end_z_units = 168U;
    msg.radius = 0.3726550418619513;
    msg.speed = 0.5590168960203753;
    msg.speed_units = 176U;
    msg.custom.assign("WXBMDDXXOQXNMPMORHSFDIYRXQEIHTKVWNTSIMGHEKEUHAICZFVJZPECZAKNOPXARBIYOZDNOLUKVLHNRFTFLCDYZCJQSUDPBNUQSMGWCNPYVSLJALSORKOLXQMAUGZNJEDTCPHOBSATULDWEKEYIIUWWKKENPVVJVMIXHVFJYQYQCUDSZLMAPBMUGBBJYZTTNGHCLDRJGYPHUWOIGXWATFTERK");

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
    msg.setTimeStamp(0.3022537213666483);
    msg.setSource(49154U);
    msg.setSourceEntity(254U);
    msg.setDestination(16833U);
    msg.setDestinationEntity(68U);
    msg.timeout = 63690U;
    msg.flags = 146U;
    msg.lat = 0.754751674223054;
    msg.lon = 0.45316104938570656;
    msg.start_z = 0.39146879729068407;
    msg.start_z_units = 29U;
    msg.end_z = 0.15567428400478012;
    msg.end_z_units = 242U;
    msg.radius = 0.5157339496432827;
    msg.speed = 0.01907834538914177;
    msg.speed_units = 96U;
    msg.custom.assign("CDALJJJBHGPRKNAGDFFDDTKNOIEXHMNPJRVELITYTJWTOMIBLYYUUFLG");

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
    msg.setTimeStamp(0.04307495211687418);
    msg.setSource(32591U);
    msg.setSourceEntity(101U);
    msg.setDestination(36902U);
    msg.setDestinationEntity(76U);
    msg.timeout = 43008U;
    msg.lat = 0.9807597754278197;
    msg.lon = 0.4557816133114684;
    msg.z = 0.7150838199956349;
    msg.z_units = 163U;
    msg.speed = 0.4631411783583964;
    msg.speed_units = 144U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7457734263953023;
    tmp_msg_0.y = 0.8926578008078428;
    tmp_msg_0.z = 0.7658681821491076;
    tmp_msg_0.t = 0.6001673974450333;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AWKTGFKYDLNURRLMCCXABFUNEYPNGZKRGVLVZMHBHNAJTROLPRKEUGLXWDMYLSBIDHGZZKYJBPPEEPQQSKRZXOXRJEFFEH");

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
    msg.setTimeStamp(0.5169482740779849);
    msg.setSource(23729U);
    msg.setSourceEntity(40U);
    msg.setDestination(5206U);
    msg.setDestinationEntity(179U);
    msg.timeout = 7736U;
    msg.lat = 0.09333489325870092;
    msg.lon = 0.03968550635887502;
    msg.z = 0.6718734932117343;
    msg.z_units = 168U;
    msg.speed = 0.741843171138943;
    msg.speed_units = 251U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.13478830926497676;
    tmp_msg_0.y = 0.4154810293163882;
    tmp_msg_0.z = 0.24866565874285218;
    tmp_msg_0.t = 0.006777767889175723;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XTDLDISPCLDGDXJGJQPTRJEKDNPFVUCFPKEGMKLCXEQEWJMIFRKFLGYATGQNRCUVZSBGSTBXNSWVQEWHXISMJNQACVFLZDHUFQPZRFJCOLRWOEHNKYSUSKJHTPBOBMY");

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
    msg.setTimeStamp(0.41837749925856105);
    msg.setSource(49583U);
    msg.setSourceEntity(43U);
    msg.setDestination(10934U);
    msg.setDestinationEntity(125U);
    msg.timeout = 12584U;
    msg.lat = 0.4973220604719768;
    msg.lon = 0.0713419717418553;
    msg.z = 0.7325925758883155;
    msg.z_units = 189U;
    msg.speed = 0.20403768038766268;
    msg.speed_units = 148U;
    msg.custom.assign("ORRERQXNTAKCJMWNHVCRLCDVGJRIMOJDTUXBZHUUESJKCIPBAJSEIIGXUQFRPWTJDFAUSSAHKWEOHKTNJEXLCRGNHWAPAGIPRUCVTRWMQSBCZQAIGPOZOFDSVLUZKQF");

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
    msg.setTimeStamp(0.04827018285503104);
    msg.setSource(63590U);
    msg.setSourceEntity(113U);
    msg.setDestination(61426U);
    msg.setDestinationEntity(249U);
    msg.x = 0.06761824726706389;
    msg.y = 0.37093608471751505;
    msg.z = 0.20947167956133927;
    msg.t = 0.9152478737068416;

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
    msg.setTimeStamp(0.7709330508678873);
    msg.setSource(21169U);
    msg.setSourceEntity(252U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(210U);
    msg.x = 0.6278786508041828;
    msg.y = 0.9176598942467572;
    msg.z = 0.9025642118530494;
    msg.t = 0.911456235357658;

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
    msg.setTimeStamp(0.6766816302553476);
    msg.setSource(65321U);
    msg.setSourceEntity(180U);
    msg.setDestination(40754U);
    msg.setDestinationEntity(157U);
    msg.x = 0.15972168057781377;
    msg.y = 0.6736916161186007;
    msg.z = 0.5263995464170396;
    msg.t = 0.665469277805386;

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
    msg.setTimeStamp(0.40189942633763875);
    msg.setSource(38617U);
    msg.setSourceEntity(97U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(182U);
    msg.timeout = 47788U;
    msg.name.assign("TJRRKRXWZGZWUUZXNASCWLUEIOOUJAOCIJITRKSECAPCNICTDDNKUFQLWNQNPHREIVXZZPRCRTFHXPZVCSBSFOSUNXTTSMGQOJFZVXTFJLWQOCVLGHSRHEHOAPJGMKNHUAIDKDTHGBNCGVPALKLVZKWFUQGYYHBQYDGRPIEEDQBJTOYDMQYYY");
    msg.custom.assign("GSNYTOVCGYQSZJFUWQFYBQQLMSAGIHWYGESAKLMDXBPMNTBLBTOYYYPNGPEEIRHDCONZRIXNHJZQOWWFKVUAIOIRYKOAUEETLVTPQVUAUSVIRBYKHWXJHFENUDVTMRUBFRXWNAEDMXVDJZXMLPLZHMRBBIKLFLCCPDMDUWJXHUSJGKSYFSZBLRAMXPGDCWSGCCIWKBOZNDEAXSOOQTHJHCZFPQQCEHNVKKAJNITFXZTFTLPPGJOWAQJVUKZRR");

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
    msg.setTimeStamp(0.7557098252497394);
    msg.setSource(13804U);
    msg.setSourceEntity(158U);
    msg.setDestination(52415U);
    msg.setDestinationEntity(155U);
    msg.timeout = 45336U;
    msg.name.assign("WHHYIJJFKDHKOKLFSPKLRBZJQCPIXBKAFBJBHSYXTVRCDWKPEQWPQXTZQWRCMPLCVSUBXXMTHQRZGUGJIVITTPIHALZVIUGBGCXBYIBJVLSYOPASWTEPLLDWVANXAAHKOFGGNEMWMYNRTMSWEOUIXNRKZJBQJRNCVTXLNDSSRGGYNAYZPYOUQUHOFYMCJDZQALEFMNOHQTLHNCVEFYWFKEBNSFOTUFRK");
    msg.custom.assign("PQWVUOXTEVGWZRGZNARSDALOUCFIKMDWIORHVIRECMPQNCIGDWCGXEOWMUPOVOLDXUWZWRZHHTJCSIVKQJANYBTYX");

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
    msg.setTimeStamp(0.16084468282179354);
    msg.setSource(61087U);
    msg.setSourceEntity(48U);
    msg.setDestination(36479U);
    msg.setDestinationEntity(188U);
    msg.timeout = 3075U;
    msg.name.assign("QGBIDXHSEURHOANAVBRALQZRYMIZQBNH");
    msg.custom.assign("IGIVTKRIPAJSLMXSEAXBSFAGHCTPRWOZHDBOJROPKVFPPXAZIPQYEIFSPEFHUXFECPMRYGKAXFLHOJZDDQIFNU");

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
    msg.setTimeStamp(0.5371700615711036);
    msg.setSource(36589U);
    msg.setSourceEntity(183U);
    msg.setDestination(18160U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.7319731415288271;
    msg.lon = 0.38878831866755237;
    msg.z = 0.7953659707565612;
    msg.z_units = 62U;
    msg.speed = 0.40981880978257335;
    msg.speed_units = 135U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.10409436925099347;
    tmp_msg_0.y = 0.5636656767397373;
    tmp_msg_0.z = 0.9172119871854051;
    tmp_msg_0.t = 0.34813401668729926;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.430271823810653;
    msg.custom.assign("UNMEITYBLOOTKREOFWAKVELYNFFMLCZUSAXRXOSXHQYNMCGXSTBUVEIFIDLFIUWGCNHOCHWCAEIQCMYWKJZ");

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
    msg.setTimeStamp(0.30936213055685047);
    msg.setSource(36166U);
    msg.setSourceEntity(250U);
    msg.setDestination(16191U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.6290108810200047;
    msg.lon = 0.9910257762808999;
    msg.z = 0.1996799898917445;
    msg.z_units = 118U;
    msg.speed = 0.5704282322178956;
    msg.speed_units = 245U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.785054056956763;
    tmp_msg_0.y = 0.4996071516875984;
    tmp_msg_0.z = 0.6874498967046901;
    tmp_msg_0.t = 0.14388162718845487;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 47232U;
    tmp_msg_1.off_x = 0.6027457615039461;
    tmp_msg_1.off_y = 0.8544280881043165;
    tmp_msg_1.off_z = 0.13050401519628219;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7942587815309134;
    msg.custom.assign("FIPSBXGAZCWVXYPHXUMSMHHDKBIUTBUKOLDXORLVVYXMRVEPNWFTEYFJQAFDWTAXLEGCAXBHRFYMKOSENHVNURYDCMOUGSNTCIZQVFLWRFPDRCIACVJZMYBY");

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
    msg.setTimeStamp(0.6015923303010282);
    msg.setSource(49018U);
    msg.setSourceEntity(235U);
    msg.setDestination(12595U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.06783623185752319;
    msg.lon = 0.3105913972952553;
    msg.z = 0.7181179179342311;
    msg.z_units = 254U;
    msg.speed = 0.5087196330452783;
    msg.speed_units = 242U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.19555584361334366;
    tmp_msg_0.y = 0.11123907397815302;
    tmp_msg_0.z = 0.25537170315545965;
    tmp_msg_0.t = 0.5813367696974162;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9882658858172955;
    msg.custom.assign("OUBTUYELMFPPSOSMDSDNKXUQYOXPWVIKLHHMASXFEUCKWFILHQWQZFNCRKFQGAYNJCJABOSYVBHFZVTIDEHGDSZBXUKABCJKWUIFHNBXRDEWMLUOFJRRMDWZIHJRTNAMPVREXCTIRYPNTPZQCLSWNGBUKUVGKABHODOBZLQPVFSQJEYBCGLTZQYPI");

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
    msg.setTimeStamp(0.5026427723994656);
    msg.setSource(39315U);
    msg.setSourceEntity(112U);
    msg.setDestination(45806U);
    msg.setDestinationEntity(35U);
    msg.vid = 53956U;
    msg.off_x = 0.8374439781851537;
    msg.off_y = 0.18012746757646447;
    msg.off_z = 0.0892391842881235;

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
    msg.setTimeStamp(0.25273409544506376);
    msg.setSource(57872U);
    msg.setSourceEntity(175U);
    msg.setDestination(37978U);
    msg.setDestinationEntity(247U);
    msg.vid = 14270U;
    msg.off_x = 0.0480713448554827;
    msg.off_y = 0.2011862188409803;
    msg.off_z = 0.08866462137752451;

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
    msg.setTimeStamp(0.7563369187043757);
    msg.setSource(10256U);
    msg.setSourceEntity(152U);
    msg.setDestination(5807U);
    msg.setDestinationEntity(246U);
    msg.vid = 22357U;
    msg.off_x = 0.6594398419460415;
    msg.off_y = 0.42521552389593964;
    msg.off_z = 0.42042465095658965;

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
    msg.setTimeStamp(0.4615541978860417);
    msg.setSource(25491U);
    msg.setSourceEntity(230U);
    msg.setDestination(35935U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.3719654919415234);
    msg.setSource(22527U);
    msg.setSourceEntity(34U);
    msg.setDestination(34546U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.9250043634119642);
    msg.setSource(58065U);
    msg.setSourceEntity(231U);
    msg.setDestination(42775U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.21674729262802994);
    msg.setSource(20166U);
    msg.setSourceEntity(104U);
    msg.setDestination(25134U);
    msg.setDestinationEntity(115U);
    msg.mid = 48003U;

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
    msg.setTimeStamp(0.6768340147699633);
    msg.setSource(56995U);
    msg.setSourceEntity(156U);
    msg.setDestination(60989U);
    msg.setDestinationEntity(118U);
    msg.mid = 12025U;

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
    msg.setTimeStamp(0.09973058150557179);
    msg.setSource(49408U);
    msg.setSourceEntity(26U);
    msg.setDestination(25190U);
    msg.setDestinationEntity(172U);
    msg.mid = 36903U;

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
    msg.setTimeStamp(0.3176498601769505);
    msg.setSource(40386U);
    msg.setSourceEntity(48U);
    msg.setDestination(8014U);
    msg.setDestinationEntity(46U);
    msg.state = 20U;
    msg.eta = 22681U;
    msg.info.assign("GCLCRSYMRPFKFUPLBDANMYOOCXESQXBFCHDCGOPPNKIPJASR");

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
    msg.setTimeStamp(0.2522244977909187);
    msg.setSource(57538U);
    msg.setSourceEntity(10U);
    msg.setDestination(29280U);
    msg.setDestinationEntity(145U);
    msg.state = 237U;
    msg.eta = 13377U;
    msg.info.assign("BOLGVDHIQIVLFBYKRVLGMTSDCBNCBRWLH");

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
    msg.setTimeStamp(0.41153234849841536);
    msg.setSource(37225U);
    msg.setSourceEntity(207U);
    msg.setDestination(22154U);
    msg.setDestinationEntity(189U);
    msg.state = 29U;
    msg.eta = 19557U;
    msg.info.assign("QEIVLJDCDYCILLQACAEDLZPUXYEKMLHZJRHARMHJTQHFUXCNMEZVEOKVYWKTATKIMZTGZQASTQPFUKUXPJFHKQZQGGUFXKYZIVAEXWKOMNXBVNYMWWRWSIBHXGNGXTIBBZCNSSAWRWWOPJDSILCXD");

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
    msg.setTimeStamp(0.32595157997068025);
    msg.setSource(39747U);
    msg.setSourceEntity(137U);
    msg.setDestination(49239U);
    msg.setDestinationEntity(242U);
    msg.system = 15204U;
    msg.duration = 28359U;
    msg.speed = 0.5277963211590192;
    msg.speed_units = 212U;
    msg.x = 0.6774105975367247;
    msg.y = 0.17313526274087332;
    msg.z = 0.029999908778179818;
    msg.z_units = 250U;

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
    msg.setTimeStamp(0.6683753728218886);
    msg.setSource(3251U);
    msg.setSourceEntity(39U);
    msg.setDestination(49350U);
    msg.setDestinationEntity(243U);
    msg.system = 45805U;
    msg.duration = 19595U;
    msg.speed = 0.7680006503962336;
    msg.speed_units = 193U;
    msg.x = 0.05817522019642685;
    msg.y = 0.6373506942183573;
    msg.z = 0.3732117379693002;
    msg.z_units = 150U;

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
    msg.setTimeStamp(0.86202056102786);
    msg.setSource(34833U);
    msg.setSourceEntity(153U);
    msg.setDestination(57735U);
    msg.setDestinationEntity(239U);
    msg.system = 16674U;
    msg.duration = 24322U;
    msg.speed = 0.5313566401453116;
    msg.speed_units = 137U;
    msg.x = 0.21147989377780518;
    msg.y = 0.04707317275791356;
    msg.z = 0.8783438932803076;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.1567161079917747);
    msg.setSource(46957U);
    msg.setSourceEntity(149U);
    msg.setDestination(30887U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.32689384767235385;
    msg.lon = 0.9138576627731142;
    msg.speed = 0.1512879520118292;
    msg.speed_units = 219U;
    msg.duration = 52692U;
    msg.sys_a = 54773U;
    msg.sys_b = 57587U;
    msg.move_threshold = 0.9727305403169384;

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
    msg.setTimeStamp(0.9887014940961315);
    msg.setSource(1360U);
    msg.setSourceEntity(16U);
    msg.setDestination(44708U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.4467517051281432;
    msg.lon = 0.09689379473361281;
    msg.speed = 0.9474216889240612;
    msg.speed_units = 208U;
    msg.duration = 16211U;
    msg.sys_a = 12482U;
    msg.sys_b = 45747U;
    msg.move_threshold = 0.7587351830876853;

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
    msg.setTimeStamp(0.2532203465979401);
    msg.setSource(18692U);
    msg.setSourceEntity(113U);
    msg.setDestination(21155U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.5214972455044011;
    msg.lon = 0.5747686723351025;
    msg.speed = 0.2745411083601432;
    msg.speed_units = 137U;
    msg.duration = 9248U;
    msg.sys_a = 35439U;
    msg.sys_b = 25889U;
    msg.move_threshold = 0.516088025736886;

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
    msg.setTimeStamp(0.6366393540034749);
    msg.setSource(48157U);
    msg.setSourceEntity(220U);
    msg.setDestination(28005U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.8111774344013841;
    msg.lon = 0.11692454055774693;
    msg.z = 0.20050845936041173;
    msg.z_units = 215U;
    msg.speed = 0.8151161894014681;
    msg.speed_units = 46U;
    msg.custom.assign("RIDSZHLXFZECWVKYRAGSNMJMCZQCXCTCKEGNBBGCTHICVLCTMTJRXKUBIEUMZYRTSOKGEJYHLDZXCUILRGAEJFNUVBFNDWZWQYHWAPQFBVXVLSDWKKNGUWFXILMHXAYIBWIBOXWOIAQQULOAZDWADVPYZXHEVOHDYGUGFTAKZRPSHPFHKBJNJSPEVUBQBFQGEDQZEKJRNFOWMPMVRMTOPMNPVLJOITJINRLEQXUPAYRQGPLO");

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
    msg.setTimeStamp(0.6990887114206705);
    msg.setSource(9530U);
    msg.setSourceEntity(11U);
    msg.setDestination(58370U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.9423757050453986;
    msg.lon = 0.05739101659992385;
    msg.z = 0.13849813151060064;
    msg.z_units = 140U;
    msg.speed = 0.9000680504790138;
    msg.speed_units = 5U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2951089694006117;
    tmp_msg_0.lon = 0.8500526949516942;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FQITALTSCCGQJLJGXSKMYLSSPQMRCJZCAARFTFDLJOCPFXXUTBHDEHRGKVOBEHTLUFNBSYSBVUFUVLMAWGKYPTEDUKDGOSBRKBMZJMELFAGIPWPDIJIOWNLUEUYYRQQNVSKWTIMWXQPRGVUVNNFJZOVZTXTZBZKXGABNRAFOLDGWXL");

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
    msg.setTimeStamp(0.7092029685383333);
    msg.setSource(38077U);
    msg.setSourceEntity(128U);
    msg.setDestination(24481U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.4993188719577253;
    msg.lon = 0.6680829858699479;
    msg.z = 0.874398011735693;
    msg.z_units = 204U;
    msg.speed = 0.9371984324608899;
    msg.speed_units = 168U;
    msg.custom.assign("DHPOUJCLPLANAEFFZYIIESCYYIEHWZWTVUIFTZNBHLRVBKQIAZVQFMJFAWYYHKBYOQOXKPMSXQSBXGDDTHRVIYZSONJYHVVZJCGBPRVCXFIPYMHXTRENDJXAKKCNDMQPMTUGAWVBGTLQUMIXKWJOTCZFV");

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
    msg.setTimeStamp(0.22014584345388044);
    msg.setSource(3600U);
    msg.setSourceEntity(4U);
    msg.setDestination(43335U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.6486118644546877;
    msg.lon = 0.725798043674835;

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
    msg.setTimeStamp(0.4900497010903134);
    msg.setSource(41798U);
    msg.setSourceEntity(137U);
    msg.setDestination(36418U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.2066066423648485;
    msg.lon = 0.24120789041369195;

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
    msg.setTimeStamp(0.962243528872728);
    msg.setSource(296U);
    msg.setSourceEntity(62U);
    msg.setDestination(13340U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.8190379114113162;
    msg.lon = 0.6648069607188388;

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
    msg.setTimeStamp(0.29111775296157494);
    msg.setSource(52585U);
    msg.setSourceEntity(232U);
    msg.setDestination(54020U);
    msg.setDestinationEntity(206U);
    msg.timeout = 53442U;
    msg.lat = 0.004344633105212714;
    msg.lon = 0.7427758855001303;
    msg.z = 0.23071327408692366;
    msg.z_units = 212U;
    msg.pitch = 0.7906085964745307;
    msg.amplitude = 0.5520296666254656;
    msg.duration = 43372U;
    msg.speed = 0.9938929274408366;
    msg.speed_units = 69U;
    msg.radius = 0.8018435129193651;
    msg.direction = 203U;
    msg.custom.assign("AJQTONAFEGPFYGNBCLWGOVRCSCYQKJZBDNYRNLRMNBOUESCXTKJUGXE");

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
    msg.setTimeStamp(0.4344583279286848);
    msg.setSource(32259U);
    msg.setSourceEntity(79U);
    msg.setDestination(4448U);
    msg.setDestinationEntity(11U);
    msg.timeout = 57093U;
    msg.lat = 0.042302675877536;
    msg.lon = 0.19325362836938165;
    msg.z = 0.7504775760100407;
    msg.z_units = 100U;
    msg.pitch = 0.0766463264016144;
    msg.amplitude = 0.6580445323505141;
    msg.duration = 29837U;
    msg.speed = 0.06151942471923311;
    msg.speed_units = 74U;
    msg.radius = 0.5819319972774175;
    msg.direction = 128U;
    msg.custom.assign("XLIOYXTLSMBZLPIADHDHFACAAMQWTGYOZYSLNQFXIXSINJDGRCQOASYTVWUYVUFMQKMGRSMIRSKFPNBYTQOSVQYJWGEDGYEBGXLITNDNBJHREFHKTBNOOJFMLVJRIWZPK");

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
    msg.setTimeStamp(0.2758006368690872);
    msg.setSource(51903U);
    msg.setSourceEntity(48U);
    msg.setDestination(37353U);
    msg.setDestinationEntity(183U);
    msg.timeout = 46009U;
    msg.lat = 0.14198651043934563;
    msg.lon = 0.6133525878178088;
    msg.z = 0.809029037606767;
    msg.z_units = 167U;
    msg.pitch = 0.25643651157498326;
    msg.amplitude = 0.5137388510758546;
    msg.duration = 47303U;
    msg.speed = 0.3512432332917834;
    msg.speed_units = 106U;
    msg.radius = 0.171063018789802;
    msg.direction = 200U;
    msg.custom.assign("YEYMXNQAPJRUCXRNWWWDUGZBIXTVMXTUCTKDJWNWFHXQIRFJLPVDBAKJWHHSMYCLFNQWGCJEYSUXLAISSLFJILZNZBVDUHPSCHEZZUPXMROXNEIGHROOQDINAOTCQOLPRAMNPNIMFKQODTCTYVEKJRQXKKN");

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
    msg.setTimeStamp(0.6728271306411023);
    msg.setSource(30583U);
    msg.setSourceEntity(34U);
    msg.setDestination(30061U);
    msg.setDestinationEntity(199U);
    msg.formation_name.assign("GXSOCFOMHIEHNUCLDAOROHQHVXFNCQFXLWQSTSNMYLRJUGNICQPYNIREEXCNOTUSLRLZJYLFKPDPHSENTVSYSJOEHTBMSZBXNCUDAJRWAIEAUPIBTEHWAKZKZIHIFSVDVWWAVOVFOYDPBGCRBHMLXDOMBEUFELGRKIWBZWXZFCVGAOXGNTYUDPKJ");
    msg.reference_frame = 113U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15078U;
    tmp_msg_0.off_x = 0.2689638419194823;
    tmp_msg_0.off_y = 0.5169170557977657;
    tmp_msg_0.off_z = 0.703373406497816;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TQHKLJCGBWWQQQETKAIYHMMHDPYNBTKKRRCIOODSJMAUKHMVFYPUBVLSHUPEJENFLXHURIAJJXDQDBROMLILZVZIRFNSHTGBGWTEAP");

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
    msg.setTimeStamp(0.3401353769436257);
    msg.setSource(48564U);
    msg.setSourceEntity(149U);
    msg.setDestination(48895U);
    msg.setDestinationEntity(126U);
    msg.formation_name.assign("DEXUZHCSPFXSEQJZLTUETMXAPSSGTMDIOOQVBHVBUGLFOMEKYNHZEIYWNYSTQFHRVNEGACJMKWMVTSFRAKQCHCROVYFVFNIODEVKBGPBGOCANRJUFNGPRFGIZBLEWBOSNNQWZVJDLGXIWUYRXLOC");
    msg.reference_frame = 223U;
    msg.custom.assign("TXFTYZWCEIFUPIQBAENNJAKFAQ");

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
    msg.setTimeStamp(0.6420050403393929);
    msg.setSource(45545U);
    msg.setSourceEntity(221U);
    msg.setDestination(65274U);
    msg.setDestinationEntity(207U);
    msg.formation_name.assign("PLRIWCVZKMFWDEKVCJDAFIVDIBQCUZTWSRUEFNMLMHTEARHFNRPNLLREQXFFLSCYVVXUNAHUTDPPOFCMQBGIHYOWWVXQTYYOQAYUJBTWGQSLJGQUMKWRLYDOAQVXVJILMULFKFQKCZOPEUJAAIDHNZMIOKGMESOZAZLTXPBRHJJARBGVZBKJXYYBFSBHEIDGNKVGWXMHKATHXOXOQSJOUESSTDYI");
    msg.reference_frame = 232U;
    msg.custom.assign("BIFETJNHDDHW");

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
    msg.setTimeStamp(0.6068081139028024);
    msg.setSource(34197U);
    msg.setSourceEntity(107U);
    msg.setDestination(50562U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("RTTBJDIQKPQSQNAIQMRDLVEGCQUYPMTWUMANABGWTCGEUSCEZUIHFXJLXNGAWEZIZSSWRIRUIPEHQYGRAELKO");
    msg.formation_name.assign("HHULIPIGKBWYCPLCIBINYFRQMZNXGAVDKSTHJ");
    msg.plan_id.assign("YVPDEDQLJXWSONDVZAZUQUFAENAYAWFEOSUONLPCCLIROUWPYJIBDGJERXVDBOTSSRMGTYXPEIHCNDYYCHWPYVFGJALAKZZZMVIAQNETHTRWBXMILPCIHVCPLJITFSVZBZMATFXUMOOOFRPHHUDKOKCQJFRDOJZRQHKMJSABKJNGGTMNURSSXNQCHXHBLXYFFFQCKSMGGBMZNWLTYVQXIKRPUJNVPLAKUISRWUGGKXELCBBITE");
    msg.description.assign("JBDTPXFYBMWWGRCVYBSXTCIYWYRRMEPBUMGL");
    msg.leader_speed = 0.8777848433647882;
    msg.leader_bank_lim = 0.07319059970227626;
    msg.pos_sim_err_lim = 0.3270664722330049;
    msg.pos_sim_err_wrn = 0.9885990125104492;
    msg.pos_sim_err_timeout = 15166U;
    msg.converg_max = 0.7457670246473063;
    msg.converg_timeout = 21011U;
    msg.comms_timeout = 50242U;
    msg.turb_lim = 0.8993270730088597;
    msg.custom.assign("EKFLDFLVRXZNKURNQFHYKHVOOATWANRDFOGNIRMQXVUJGLGQWACFZFHWQOURUIPQVBEQLYPRABVWHIJNPXVJSMKCWDQTWTSYDLWSFOPDVEIGPLGBZBYR");

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
    msg.setTimeStamp(0.43188362512726397);
    msg.setSource(4104U);
    msg.setSourceEntity(104U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("DWLDURFNJVOYNCPKZFGCFDWRGYMXNIBSHRHXNYRSEEBMHKAKGJOSKJHOALAGTTUBNCHQCZUHOESHWHILNMDCNQXXVOSZBJQPTRWPVYAVSUIKUQJSJOTOCKXFFARIAGPZMKVLZGGDDVVSUBXPMIMPWQVIPFITOETHBIJALCZFXQQPQEKAZYGPECRXWDMTGAZXEIEWLMYBRSWPDZYZLTKFVQFKR");
    msg.formation_name.assign("BBDZLPIMXPUQPQOKTPHOLYMBIMKRGXFHDOEZTPREDEMBUCEEQZSJJUZANQEJLTTGMHRXJJSKUGHSCJAIBRDXMNWRPNRTAVLSCZVOQHNWOJAPIDFYLWAXLYIMHGQFNYWOEBUUJMQWXHRJTCNMKEVCQNWKLZAYCIXVVGLVDETBKOQANCIQFFXSRGE");
    msg.plan_id.assign("BDGZXGTOBBOCFJQIGUSQCWREUPQWKFWHMFHQYJHEVWUWFXQLRCCLPDCIKDAPEIWZZCAQISMZCNILSWTTICRXDXAMFDVDKPG");
    msg.description.assign("XMSKIWICUBHCBFTWPPAZQNNMRJXHUQYIQDQBFHZDEXCLDPGPKIOZSWFGUMVAFNJGOQABARLYPGEBYSCFNXKHGRVDOUYTTSHUMDYMVIOAZMWFKVXVDINSORVHRDEBOVOXQWLCRSLABJKFPAQEIWHEXJYUZTUSZCQZIKTPZRPTAIKJHNUYNVLJCENEXMNLVTDOKTPEW");
    msg.leader_speed = 0.18256411549454699;
    msg.leader_bank_lim = 0.5635059641818893;
    msg.pos_sim_err_lim = 0.4737039243819292;
    msg.pos_sim_err_wrn = 0.5282987767522094;
    msg.pos_sim_err_timeout = 23248U;
    msg.converg_max = 0.8303723370634697;
    msg.converg_timeout = 62977U;
    msg.comms_timeout = 39181U;
    msg.turb_lim = 0.5766831717223283;
    msg.custom.assign("BIORYJQHTFJBYSPYIWWSLQXXVWDTMWDZPYGQUWUIUBCTDZVNKPTCTTRQSBBEOHHRWHQSAEYCLJDDFLSVKYZJFPJAMMUMVFZZOESHLROHUTQFXVUNHTHZRKZXOJAAQEQMJOWEAPRPBPNBFRKVCZFHGSNAJSKAYPGAFGJEWOLUXMPQMJCZRYEWQXBXOUUMLKGMXKEICXVNHRDIG");

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
    msg.setTimeStamp(0.9133988480035685);
    msg.setSource(55053U);
    msg.setSourceEntity(218U);
    msg.setDestination(8598U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("YUJPVXARWYTDRKPCKEWXZGLHICQDSJNZOGZUTLILWJMBKJZBSBVSRNAFRPUKEAONBNPJDITIFOIFHKQEQXQEXESCBRZFZMQ");
    msg.formation_name.assign("SMOFSOYIMKYKGSDATBJRLFQTFRHYI");
    msg.plan_id.assign("EMLTKRHGOHAEHGWOPVGBMJUOISEKJWVBCEXWAYDWVCTGRMWNPTITBZSCSLYJSRNDTYLCZJQHNAZQXYYPLDOPSBGUXTCDIPXDXEAGFADFQAHVQKIHCKYJENCUZLKWZDWVLYAPPOMPOEVKYXFTFPUGRJQUJXORHYLZNEIENWLTRUTUKYVAILJXKVIMAHFHRFTNZZBMDMDZIIGSPZJCGFOMLRG");
    msg.description.assign("TVUJJXMGOHLWRMBFMGGOYYWONMHGCDNCXIYENQAKWBPTQSELXBSFOZJSISDDSHKWABBNHYWQZOBTWAJHBDVRNFHXUVGRKWUIYOKUSCZCNRFLNVXYAIQETVSQVBCVCGJXA");
    msg.leader_speed = 0.25684983696542407;
    msg.leader_bank_lim = 0.8881480956646507;
    msg.pos_sim_err_lim = 0.160642738208844;
    msg.pos_sim_err_wrn = 0.6736208724289174;
    msg.pos_sim_err_timeout = 58850U;
    msg.converg_max = 0.40973256551509585;
    msg.converg_timeout = 9659U;
    msg.comms_timeout = 35094U;
    msg.turb_lim = 0.3751145356887088;
    msg.custom.assign("QVRTUSOVQXJIEWFCVHCEYZAKLJMPBMRCBRTPGEDDSFLWTUORSQJBLYUOZPAYGSCHBWYEFZWDPWILVZNXNXQFAFUHSWYIVJMGPVTKQOKLCGJUUUELOEKGEJZMUDLAGII");

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
    msg.setTimeStamp(0.2204526549768503);
    msg.setSource(37726U);
    msg.setSourceEntity(120U);
    msg.setDestination(12516U);
    msg.setDestinationEntity(178U);
    msg.control_src = 50475U;
    msg.control_ent = 125U;
    msg.timeout = 0.282965094157269;
    msg.loiter_radius = 0.10259408564837136;
    msg.altitude_interval = 0.8736785743621811;

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
    msg.setTimeStamp(0.18015975146043506);
    msg.setSource(31235U);
    msg.setSourceEntity(217U);
    msg.setDestination(24005U);
    msg.setDestinationEntity(9U);
    msg.control_src = 52109U;
    msg.control_ent = 26U;
    msg.timeout = 0.3756930832376659;
    msg.loiter_radius = 0.3720658102269171;
    msg.altitude_interval = 0.8933227522899029;

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
    msg.setTimeStamp(0.9276641722614446);
    msg.setSource(26467U);
    msg.setSourceEntity(46U);
    msg.setDestination(49254U);
    msg.setDestinationEntity(247U);
    msg.control_src = 41510U;
    msg.control_ent = 93U;
    msg.timeout = 0.7522664699806221;
    msg.loiter_radius = 0.7334999967826321;
    msg.altitude_interval = 0.5054698774460542;

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
    msg.setTimeStamp(0.17650135898632702);
    msg.setSource(43086U);
    msg.setSourceEntity(39U);
    msg.setDestination(23111U);
    msg.setDestinationEntity(24U);
    msg.flags = 59U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4049324812402252;
    tmp_msg_0.speed_units = 121U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3212052226808182;
    tmp_msg_1.z_units = 170U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9639657207983694;
    msg.lon = 0.8246784263510477;
    msg.radius = 0.6003337560884932;

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
    msg.setTimeStamp(0.5370408143167656);
    msg.setSource(26894U);
    msg.setSourceEntity(20U);
    msg.setDestination(27208U);
    msg.setDestinationEntity(114U);
    msg.flags = 211U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8359705227951901;
    tmp_msg_0.speed_units = 46U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.03233410349571153;
    tmp_msg_1.z_units = 248U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.357973423723981;
    msg.lon = 0.736876446713462;
    msg.radius = 0.9760943989611557;

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
    msg.setTimeStamp(0.754038742134007);
    msg.setSource(14025U);
    msg.setSourceEntity(81U);
    msg.setDestination(42733U);
    msg.setDestinationEntity(211U);
    msg.flags = 237U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3303888013266596;
    tmp_msg_0.speed_units = 9U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8801238399313098;
    tmp_msg_1.z_units = 220U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5685583637888443;
    msg.lon = 0.58051573804046;
    msg.radius = 0.40911115510322804;

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
    msg.setTimeStamp(0.5605774415963105);
    msg.setSource(36183U);
    msg.setSourceEntity(164U);
    msg.setDestination(11504U);
    msg.setDestinationEntity(138U);
    msg.control_src = 36064U;
    msg.control_ent = 206U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4112035828083267;
    tmp_tmp_msg_0_0.speed_units = 195U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.06587436820186021;
    tmp_tmp_msg_0_1.z_units = 67U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9126585469243991;
    tmp_msg_0.lon = 0.6994831272391625;
    tmp_msg_0.radius = 0.8260485605621709;
    msg.reference.set(tmp_msg_0);
    msg.state = 113U;
    msg.proximity = 213U;

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
    msg.setTimeStamp(0.6022301045231367);
    msg.setSource(13688U);
    msg.setSourceEntity(5U);
    msg.setDestination(47704U);
    msg.setDestinationEntity(70U);
    msg.control_src = 13277U;
    msg.control_ent = 3U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 170U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6617682445996944;
    tmp_tmp_msg_0_0.speed_units = 150U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.844850003538482;
    tmp_tmp_msg_0_1.z_units = 98U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6618738885063211;
    tmp_msg_0.lon = 0.5691358735821735;
    tmp_msg_0.radius = 0.559299623600428;
    msg.reference.set(tmp_msg_0);
    msg.state = 140U;
    msg.proximity = 249U;

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
    msg.setTimeStamp(0.9549252582435754);
    msg.setSource(54258U);
    msg.setSourceEntity(113U);
    msg.setDestination(1831U);
    msg.setDestinationEntity(72U);
    msg.control_src = 57409U;
    msg.control_ent = 150U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 123U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7269540276242329;
    tmp_tmp_msg_0_0.speed_units = 247U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.33548325862705297;
    tmp_tmp_msg_0_1.z_units = 94U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.08921719360025482;
    tmp_msg_0.lon = 0.20965392656802317;
    tmp_msg_0.radius = 0.836855065174994;
    msg.reference.set(tmp_msg_0);
    msg.state = 168U;
    msg.proximity = 60U;

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
    msg.setTimeStamp(0.002001087704408877);
    msg.setSource(23318U);
    msg.setSourceEntity(191U);
    msg.setDestination(39256U);
    msg.setDestinationEntity(96U);
    msg.ax_cmd = 0.6283282359999808;
    msg.ay_cmd = 0.9115996396884606;
    msg.az_cmd = 0.006115095761075606;
    msg.ax_des = 0.728745744771036;
    msg.ay_des = 0.007007604801036682;
    msg.az_des = 0.0943949556039494;
    msg.virt_err_x = 0.2015846862279227;
    msg.virt_err_y = 0.4415902082158991;
    msg.virt_err_z = 0.25004448821688907;
    msg.surf_fdbk_x = 0.5530030459223718;
    msg.surf_fdbk_y = 0.5180266319601375;
    msg.surf_fdbk_z = 0.5727872133775351;
    msg.surf_unkn_x = 0.49231424468232077;
    msg.surf_unkn_y = 0.5218466882957669;
    msg.surf_unkn_z = 0.9888866414302304;
    msg.ss_x = 0.062258243955874315;
    msg.ss_y = 0.5287934058284862;
    msg.ss_z = 0.6193833300412436;

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
    msg.setTimeStamp(0.870389116309671);
    msg.setSource(65443U);
    msg.setSourceEntity(175U);
    msg.setDestination(23216U);
    msg.setDestinationEntity(225U);
    msg.ax_cmd = 0.6715928367003074;
    msg.ay_cmd = 0.882824677670279;
    msg.az_cmd = 0.21069249912136667;
    msg.ax_des = 0.32942940675412136;
    msg.ay_des = 0.3552489991248027;
    msg.az_des = 0.21921042795363554;
    msg.virt_err_x = 0.5372803580428102;
    msg.virt_err_y = 0.2771550544153575;
    msg.virt_err_z = 0.7093080801703243;
    msg.surf_fdbk_x = 0.5470048170027779;
    msg.surf_fdbk_y = 0.9658238093199141;
    msg.surf_fdbk_z = 0.39959200248754;
    msg.surf_unkn_x = 0.9191100256788626;
    msg.surf_unkn_y = 0.06427395984850126;
    msg.surf_unkn_z = 0.5717688339790933;
    msg.ss_x = 0.15007115599971133;
    msg.ss_y = 0.9090109366388355;
    msg.ss_z = 0.2147142552632023;

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
    msg.setTimeStamp(0.06573907241041854);
    msg.setSource(64185U);
    msg.setSourceEntity(116U);
    msg.setDestination(59318U);
    msg.setDestinationEntity(114U);
    msg.ax_cmd = 0.821571548599866;
    msg.ay_cmd = 0.41399873634971707;
    msg.az_cmd = 0.10698667805427287;
    msg.ax_des = 0.7669294162569387;
    msg.ay_des = 0.8064848510395514;
    msg.az_des = 0.6326992438447538;
    msg.virt_err_x = 0.25070987388838406;
    msg.virt_err_y = 0.4824050689134719;
    msg.virt_err_z = 0.17825056531883932;
    msg.surf_fdbk_x = 0.44407513429373346;
    msg.surf_fdbk_y = 0.2958817323929608;
    msg.surf_fdbk_z = 0.9946666394477519;
    msg.surf_unkn_x = 0.9092144308998871;
    msg.surf_unkn_y = 0.4100989942692638;
    msg.surf_unkn_z = 0.3317805248687842;
    msg.ss_x = 0.6660251104873668;
    msg.ss_y = 0.5842841462936853;
    msg.ss_z = 0.19188649132184343;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PSXEHRYWAPKWQTALFLQWIWPXTTMWFQANRDLOPTDEYGOZRPYCEYILJNBRZRHINJMMFIDYYVGNDQOUSKMBBHTMQDNJOJKJSNGZXHJJKAHASMSSVCWPBZOCNTCUDMWAGYXBGRXVZVVEIDKAEEEQCYUUZBHLZOKVMBSPUTUCQSELOHGULYCAZLLSBXZFLUJVRDRXFXYQJCKEMIFNC");
    tmp_msg_0.dist = 0.400491048365064;
    tmp_msg_0.err = 0.6622289645911742;
    tmp_msg_0.ctrl_imp = 0.08356622593435636;
    tmp_msg_0.rel_dir_x = 0.12008946841131696;
    tmp_msg_0.rel_dir_y = 0.8758751026853306;
    tmp_msg_0.rel_dir_z = 0.4158316171076377;
    tmp_msg_0.err_x = 0.42539644485954586;
    tmp_msg_0.err_y = 0.9435846031953719;
    tmp_msg_0.err_z = 0.4593619076400647;
    tmp_msg_0.rf_err_x = 0.32312865551416337;
    tmp_msg_0.rf_err_y = 0.9457049537161344;
    tmp_msg_0.rf_err_z = 0.7287998493901975;
    tmp_msg_0.rf_err_vx = 0.9173027613254536;
    tmp_msg_0.rf_err_vy = 0.31573736109147466;
    tmp_msg_0.rf_err_vz = 0.6259266592989211;
    tmp_msg_0.ss_x = 0.8325983955128163;
    tmp_msg_0.ss_y = 0.31389327906069653;
    tmp_msg_0.ss_z = 0.3224532051048542;
    tmp_msg_0.virt_err_x = 0.6664795421289278;
    tmp_msg_0.virt_err_y = 0.18352257529942306;
    tmp_msg_0.virt_err_z = 0.7809353014999733;
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
    msg.setTimeStamp(0.12314890489702557);
    msg.setSource(63061U);
    msg.setSourceEntity(98U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(34U);
    msg.s_id.assign("EHTSMDJIERCHUYRQCXBENHGDIHSVKWGCYOEQAPLBQAXIAUXONUZGMQFLOIJTGRJFWBEVJ");
    msg.dist = 0.22678787935867561;
    msg.err = 0.4122081603078366;
    msg.ctrl_imp = 0.9592238353749605;
    msg.rel_dir_x = 0.1145292073764913;
    msg.rel_dir_y = 0.5205904896615728;
    msg.rel_dir_z = 0.6722104958330961;
    msg.err_x = 0.7657102215591107;
    msg.err_y = 0.5020864165895007;
    msg.err_z = 0.6539943495938645;
    msg.rf_err_x = 0.11939862487849584;
    msg.rf_err_y = 0.054720078200159894;
    msg.rf_err_z = 0.2519341212613093;
    msg.rf_err_vx = 0.36489270723945366;
    msg.rf_err_vy = 0.35870767924871216;
    msg.rf_err_vz = 0.7724710158448789;
    msg.ss_x = 0.4659337584592952;
    msg.ss_y = 0.814159999294237;
    msg.ss_z = 0.955890163119999;
    msg.virt_err_x = 0.5992842189150812;
    msg.virt_err_y = 0.5631406877931543;
    msg.virt_err_z = 0.090224890773831;

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
    msg.setTimeStamp(0.24991565963823104);
    msg.setSource(35175U);
    msg.setSourceEntity(170U);
    msg.setDestination(14909U);
    msg.setDestinationEntity(162U);
    msg.s_id.assign("YSGMTGALSQDWGPNYEPVRSCFRYQQKHKFSCYITVFNROHPTGYRUTZPHWIUCZIUMKMKXOVGCOPQSXNAHWDQSSSBQJMDJATEGNEEJVDAKZNWCVYLKZETUNYIEVAXLPDIMADZOBXDEHJLBLHGDWKTFMRQHELNUBLIFJZQKPKVWFUBUYORPUYNANDFVHBBZJICEIQZBKOLUVTNJIFPXJLOSOLAXHWWTPMCEFAJCATOHGFXR");
    msg.dist = 0.037155479900926824;
    msg.err = 0.8782041584093899;
    msg.ctrl_imp = 0.17575740607847656;
    msg.rel_dir_x = 0.5398986095377802;
    msg.rel_dir_y = 0.23781672761202144;
    msg.rel_dir_z = 0.9057598563531056;
    msg.err_x = 0.3239242411696629;
    msg.err_y = 0.9229722172731533;
    msg.err_z = 0.1244668267194542;
    msg.rf_err_x = 0.8958237698019135;
    msg.rf_err_y = 0.8619033990235541;
    msg.rf_err_z = 0.8594957053277377;
    msg.rf_err_vx = 0.10581871891802552;
    msg.rf_err_vy = 0.020217929467046925;
    msg.rf_err_vz = 0.10350928803150983;
    msg.ss_x = 0.5682623344373715;
    msg.ss_y = 0.8786818256355438;
    msg.ss_z = 0.23845210671317396;
    msg.virt_err_x = 0.6177160483831527;
    msg.virt_err_y = 0.7964535174439344;
    msg.virt_err_z = 0.29357510797693753;

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
    msg.setTimeStamp(0.9950083720247836);
    msg.setSource(64182U);
    msg.setSourceEntity(64U);
    msg.setDestination(31431U);
    msg.setDestinationEntity(82U);
    msg.s_id.assign("XKWJQSEGTTXWIIHCFBABUZUYXGJBOZGCARJNPOLMHYUGOYOTGNYSATMOPKKIKYUDHDUNEMAPKFBNOCGZFSQMPKEKROFDTUPJLENAXHLZPJRVBCBEJJFFADQOGLPEQHIVQTIZWJGSGRYDEZCVYXRXNTMYVFKANTALXZSNN");
    msg.dist = 0.7245618242840601;
    msg.err = 0.6653786658094321;
    msg.ctrl_imp = 0.803328083829927;
    msg.rel_dir_x = 0.36529832489411507;
    msg.rel_dir_y = 0.05479082814606828;
    msg.rel_dir_z = 0.22975376966624317;
    msg.err_x = 0.404245298633928;
    msg.err_y = 0.6395403152754484;
    msg.err_z = 0.9419439995857627;
    msg.rf_err_x = 0.16286654896903852;
    msg.rf_err_y = 0.2202046507208929;
    msg.rf_err_z = 0.8652126640738002;
    msg.rf_err_vx = 0.6865344659510451;
    msg.rf_err_vy = 0.5750240304245307;
    msg.rf_err_vz = 0.174438496995161;
    msg.ss_x = 0.7745427496684759;
    msg.ss_y = 0.6794949819929179;
    msg.ss_z = 0.18984716863893314;
    msg.virt_err_x = 0.7536268701539199;
    msg.virt_err_y = 0.9102663275747015;
    msg.virt_err_z = 0.009924410510153692;

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
    msg.setTimeStamp(0.539594656548911);
    msg.setSource(51297U);
    msg.setSourceEntity(126U);
    msg.setDestination(5591U);
    msg.setDestinationEntity(115U);
    msg.timeout = 17003U;
    msg.rpm = 0.13048109978299105;
    msg.direction = 196U;
    msg.custom.assign("RQQTJVYTRHIXIMEZGBSDWDZKGRIBBKLNYNCFDRCPSEIHNMYMAJTYWXRNJGCSHWHBIALNNJIGBWMATZAXLCIBIMZMUURHEYEQYNWWXJKJDVGWVEYXFEDOMFOFVPVAPPZTCKWFXGVGQJYXSLMSHUCEDQVHQJHLTZUDSFZOISFVYXPAFWTUEANCGTLORNKOPOQHXCFYKJJKO");

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
    msg.setTimeStamp(0.9820913830291771);
    msg.setSource(43731U);
    msg.setSourceEntity(93U);
    msg.setDestination(775U);
    msg.setDestinationEntity(43U);
    msg.timeout = 47240U;
    msg.rpm = 0.3881848289243739;
    msg.direction = 212U;
    msg.custom.assign("BPJREGZEHBUQNWPOFSWTYNFUQRXHPXMRAPIMYKFVUMFEIFIQEBBQSTPDXJRWMTATWCYNCCXDLDHSAOTRSRWCICBESVJIGKSHDJGNUMDNKZGUJXXQHDAWMUTZJLVXGKTSGMCYAWECVOUVOFNJQJRLMRLUYIAMXSLVBECNLLTRLZAZZPFFIEYZODKOSWVZQORGUCNABOHWOCHFEDKIAYNZPYQLNDQGXKVTKOWBUVHELIJK");

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
    msg.setTimeStamp(0.0029962657611058985);
    msg.setSource(30406U);
    msg.setSourceEntity(73U);
    msg.setDestination(18118U);
    msg.setDestinationEntity(49U);
    msg.timeout = 61129U;
    msg.rpm = 0.5786869191990242;
    msg.direction = 23U;
    msg.custom.assign("MGKDOJZRYSMONXRQHODVCKZLBFHQVUKYOACBPBWGMLSREHWTNSSXSDUVHMHTZDRZFI");

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
    msg.setTimeStamp(0.990131634751581);
    msg.setSource(43047U);
    msg.setSourceEntity(251U);
    msg.setDestination(34208U);
    msg.setDestinationEntity(7U);
    msg.formation_name.assign("LQREXCLPGJZUQIHDITOUNOCNPHVSZLDNQWCKKIGSFMUIOSYRAIKRUCBPHTBEBSWXYQDKOHPAZLBPBRGEVIXDVGWFUFLXVHTNBRSTTMUOATZNLJJLQYFSYNSGVPBLVDFBRMDCJFWUUVWMHMLUKDTDXEZOVYGAHBDZRXEWAFJRMHWIYASC");
    msg.type = 143U;
    msg.op = 81U;
    msg.group_name.assign("PTCGLDMNDTVKQEKJMAORTVHAFYDFMVPHPWSMHQWCRLXEVKHJUKRWXLUBJFZDCDUTSMRQFEIIHJVNBJPEYLYCKLNDSHBXIKWASRGAEGMOZGNFWXYFVRJ");
    msg.plan_id.assign("ZVHMKOGTYXBVCTFWVGGSAINCMRAZRQILRSCGXOPWJQUKXMTCFKBCLBLYNDMGIDILPNYMSPDYWUSRZYTWDBXOASOQVPREEAIIPBGYHZNPSUPZCNHMORFFUFKJQJTVBATVODHEGAIXLARFNNENWELSZMETJZKTOORHWBKEJRJGQAXFPPUQSGYINZWQKUDECKQBTBKQIVFDDHHMLCPACLGEWXJMFBLOSNYXUJZQVHIXHMJKLYJFZWR");
    msg.description.assign("NUKTDWZXROIMYUWQBPTSLDLYGIKWYOELYVOGMVCRFIDTHAHTNGN");
    msg.reference_frame = 86U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39475U;
    tmp_msg_0.off_x = 0.5203833242475717;
    tmp_msg_0.off_y = 0.7148811748860598;
    tmp_msg_0.off_z = 0.4188345794410907;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.19782264203571787;
    msg.leader_speed_min = 0.7311522815847677;
    msg.leader_speed_max = 0.9599087200168414;
    msg.leader_alt_min = 0.6467211563195292;
    msg.leader_alt_max = 0.8682497515595363;
    msg.pos_sim_err_lim = 0.8103241691835549;
    msg.pos_sim_err_wrn = 0.08027805020263745;
    msg.pos_sim_err_timeout = 18533U;
    msg.converg_max = 0.33574117401424286;
    msg.converg_timeout = 41614U;
    msg.comms_timeout = 40978U;
    msg.turb_lim = 0.9805332870917915;
    msg.custom.assign("NRJVJBHNWCLYOPWNFZNUSMYVQAGLELPERLFAIFHBHHFQSIGFGCHMOISGKNCGEDJJVFVSM");

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
    msg.setTimeStamp(0.500445110567559);
    msg.setSource(62544U);
    msg.setSourceEntity(6U);
    msg.setDestination(42842U);
    msg.setDestinationEntity(73U);
    msg.formation_name.assign("VRDAQNKQVWXVYGOAUWHPCWCSAXBKROFLNYRDIKHKADSSBDDCTHBFEGNYZVIMAYRLWIEONMTXFIHCMLOABMGYXFOAYQUBGVTTHZJRHTGFVGIRJXMTSKPHKZCSNTBBPOZYWCIWYVAKZOAUCIZIQMCFXXDENNLFMUWPYT");
    msg.type = 196U;
    msg.op = 239U;
    msg.group_name.assign("HLVYJITTNHEFJWKCYUAVXDXIPLNRXSWLZUWHBZMGOZAVBAOZVNUVIRVKICTSFIAYZUGDOFLYSSHZCCQCPJHPESUXKDSQHQ");
    msg.plan_id.assign("YKEXKTWPVHRILOYAZNJZXWIMDLDMUNFKEWAFHOKUVBPCHBEKLUIBXLQAQSWYJDAVPSHTXCAQZDRPDZTVLUINZIMTUBPDGHWYHTFIPPNBGATGZJAOMPDIAYHBYDLSESVZGCSWWKVQFJFMQQEKGRHUULBYKRTMSGDBZYEYXMCOXMCKEOIURTOVBM");
    msg.description.assign("TFZBVCPPIHZIJTVKSZXGNRTIAQNELRKUZVEWCKWMVIGPGNGSUUTKZDDVXDSOBBLARQXUWDNTYXEGGSVFPWWDLARRLXMNFYCOBKQCOIEXPQSAKQAGWMQRJVUWBKEFOEERDKXYQDGUZHTTFJHHHAOHHTGBOXOCMIQIYDNEFNAYRMCYNMZCLEBISVVJKPQLMSCRHLCFJJJABUTJIMOBVFLZDMERCDFUZUSLPGHYAY");
    msg.reference_frame = 138U;
    msg.leader_bank_lim = 0.17098940506946414;
    msg.leader_speed_min = 0.03526757090469579;
    msg.leader_speed_max = 0.28897748424541836;
    msg.leader_alt_min = 0.0018517446074189925;
    msg.leader_alt_max = 0.7249909651199286;
    msg.pos_sim_err_lim = 0.10814225544265021;
    msg.pos_sim_err_wrn = 0.22326854489726078;
    msg.pos_sim_err_timeout = 44875U;
    msg.converg_max = 0.711828469412655;
    msg.converg_timeout = 46867U;
    msg.comms_timeout = 18210U;
    msg.turb_lim = 0.9357686621448813;
    msg.custom.assign("LKJFRUSTWXBRARZXELRPLZNDTQTWRABGLQKNCTZJRYXZCQMFDYHNSHJJVHGTMMYYCOWSDPNAFZCEZQKEWYDSPLPDHQNISRZIDTCDYWGPXWNVZLAATIXDZFBFIJCAKHMZMSROWNJJNDBICICY");

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
    msg.setTimeStamp(0.20882202611997314);
    msg.setSource(30310U);
    msg.setSourceEntity(199U);
    msg.setDestination(45275U);
    msg.setDestinationEntity(170U);
    msg.formation_name.assign("LUKBXOFHOVLIQAYMDHONUONOWQXQIQDEZJRTCGIYKMBBQPEINNVHVCPNEPPJSJHXAAYVFQRKGHTIEXDXJRXHKMULSSZLTRSJBCDGOUQTDXUGWNFTU");
    msg.type = 103U;
    msg.op = 105U;
    msg.group_name.assign("JFNXTJLKSPCMXAGFLKAN");
    msg.plan_id.assign("BMIWVBMEQBKOXZQQUQCNKDFPNQSRGKIVHEEYNXNCDMTSYZFIPLEWAXEGKVPTSBLKLNGACDDNAAZGPJFLSXNRLAIKLFHWZZPRDUJRMVLMGTYOOWOBLYCZRRTPDIXSBMEJXQTFHVQGFWVUHVGCAKAJVNKUWPWMIDPTXCTGDIRSFOCPHAOYPUEJUQQMBBRSIHSHFCLRIYWOMOFSCJA");
    msg.description.assign("VFOMZYBNSWSAJBBGNDKVZPCANPYGOQTKLEIUJFWDHBFMVHDIHZWSUIXKSX");
    msg.reference_frame = 67U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2233U;
    tmp_msg_0.off_x = 0.966207792763472;
    tmp_msg_0.off_y = 0.8454046094747129;
    tmp_msg_0.off_z = 0.6127827297022908;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9321438844196897;
    msg.leader_speed_min = 0.21361109082469043;
    msg.leader_speed_max = 0.8090569478048806;
    msg.leader_alt_min = 0.6194670031146527;
    msg.leader_alt_max = 0.01965042946952056;
    msg.pos_sim_err_lim = 0.3284672737855635;
    msg.pos_sim_err_wrn = 0.3449018457852955;
    msg.pos_sim_err_timeout = 11508U;
    msg.converg_max = 0.22440004141629144;
    msg.converg_timeout = 1932U;
    msg.comms_timeout = 42605U;
    msg.turb_lim = 0.2776595541546708;
    msg.custom.assign("ROUAEVXKGZIEFNUDIGBUPKHSOPCGMNBWEHLRYEPYOMMSOWIS");

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
    msg.setTimeStamp(0.263625468646291);
    msg.setSource(33360U);
    msg.setSourceEntity(84U);
    msg.setDestination(36888U);
    msg.setDestinationEntity(143U);
    msg.timeout = 58874U;
    msg.lat = 0.7765140477643215;
    msg.lon = 0.43650549270225925;
    msg.z = 0.2555992055452241;
    msg.z_units = 238U;
    msg.speed = 0.4371657573653335;
    msg.speed_units = 148U;
    msg.custom.assign("CPXATLKDNELVFZJEGUWCHOGWOCIUSPJPACCZTMEQFSZNDTISXURSGSBTLBYNULNBYOYRZZLEJQBRGZRIJCSXBCDOUDEBMACQMIWEDGDJLLVXNPPTUIRDVRFYMFYBOQAUGADKKLPHVJIEGHHBHXBQNYKFZI");

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
    msg.setTimeStamp(0.6615613099909685);
    msg.setSource(29395U);
    msg.setSourceEntity(227U);
    msg.setDestination(43597U);
    msg.setDestinationEntity(99U);
    msg.timeout = 18633U;
    msg.lat = 0.31375259541149214;
    msg.lon = 0.44424107462575635;
    msg.z = 0.24841810459502156;
    msg.z_units = 30U;
    msg.speed = 0.6244753265188318;
    msg.speed_units = 161U;
    msg.custom.assign("OHDIPDZDUTJEQJQTNSAV");

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
    msg.setTimeStamp(0.6226557530283076);
    msg.setSource(43404U);
    msg.setSourceEntity(128U);
    msg.setDestination(24327U);
    msg.setDestinationEntity(135U);
    msg.timeout = 17503U;
    msg.lat = 0.25852501023604946;
    msg.lon = 0.7945223423771172;
    msg.z = 0.6124078579334403;
    msg.z_units = 47U;
    msg.speed = 0.7530530014768654;
    msg.speed_units = 29U;
    msg.custom.assign("SGNBONMSIYFUZIWDFMXULBUTZHGDKBMPTOLQLNRIFUETQGCMWMJVDRHAINHLDOKEONQQXCHMKAUPTJUVVQYDYGHEDWBXMWYHWJWODGKNZRGJPOTQVDRRQBESIFYMIZFKIWWHPXCORSJXFBAERVAVVEZONSWLLOEACTVQMCTSAFHUQZUEGQJBLCBPGTKNSLHYGKBSECPWYA");

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
    msg.setTimeStamp(0.479423384634197);
    msg.setSource(26552U);
    msg.setSourceEntity(143U);
    msg.setDestination(47581U);
    msg.setDestinationEntity(246U);
    msg.timeout = 46538U;
    msg.lat = 0.34081428401892144;
    msg.lon = 0.055489109423754734;
    msg.z = 0.31631485505875745;
    msg.z_units = 163U;
    msg.speed = 0.6838398672630537;
    msg.speed_units = 253U;
    msg.custom.assign("HFDQCAZMPHHXXXZRLTAAYBLXOUYWUFBCDBWDDFKULPYMUEIFLZAUSQSJOORNCJGIQIVWLNSUQOKEOSKKLZFMNYJNRVTJPP");

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
    msg.setTimeStamp(0.5334273292690608);
    msg.setSource(5002U);
    msg.setSourceEntity(241U);
    msg.setDestination(63025U);
    msg.setDestinationEntity(6U);
    msg.timeout = 64565U;
    msg.lat = 0.356387893041087;
    msg.lon = 0.08786214838174733;
    msg.z = 0.9722431274334594;
    msg.z_units = 33U;
    msg.speed = 0.7042608749795495;
    msg.speed_units = 254U;
    msg.custom.assign("EFDLGXLZITHIDGKWAKFXSBDCAXKZNBFPSOMFGSLRNRHJUZVIAPMLPPITTYMGIZTECSZCSCMHBNWYUQDKNYGQOVRZKHTEBEYILWEJT");

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
    msg.setTimeStamp(0.3570914951104922);
    msg.setSource(26253U);
    msg.setSourceEntity(54U);
    msg.setDestination(34016U);
    msg.setDestinationEntity(70U);
    msg.timeout = 10367U;
    msg.lat = 0.10102033679670719;
    msg.lon = 0.3933453872304319;
    msg.z = 0.6593234348941156;
    msg.z_units = 132U;
    msg.speed = 0.7844786945085958;
    msg.speed_units = 182U;
    msg.custom.assign("NLXFXJUOQA");

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
    msg.setTimeStamp(0.5634652257243205);
    msg.setSource(32935U);
    msg.setSourceEntity(174U);
    msg.setDestination(19260U);
    msg.setDestinationEntity(234U);
    msg.arrival_time = 0.08549737300954718;
    msg.lat = 0.6274302096243636;
    msg.lon = 0.7725927361363564;
    msg.z = 0.22549447976431858;
    msg.z_units = 51U;
    msg.travel_z = 0.5702591613460332;
    msg.travel_z_units = 108U;
    msg.delayed = 151U;

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
    msg.setTimeStamp(0.7614255089232931);
    msg.setSource(48344U);
    msg.setSourceEntity(9U);
    msg.setDestination(57220U);
    msg.setDestinationEntity(31U);
    msg.arrival_time = 0.3348874070249712;
    msg.lat = 0.5091179851767407;
    msg.lon = 0.33219324451589605;
    msg.z = 0.08921781672316398;
    msg.z_units = 115U;
    msg.travel_z = 0.5826455128997412;
    msg.travel_z_units = 179U;
    msg.delayed = 179U;

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
    msg.setTimeStamp(0.19490235458485827);
    msg.setSource(56790U);
    msg.setSourceEntity(231U);
    msg.setDestination(13617U);
    msg.setDestinationEntity(231U);
    msg.arrival_time = 0.36868252712554284;
    msg.lat = 0.7518725300424842;
    msg.lon = 0.7478547271031725;
    msg.z = 0.9688366183685699;
    msg.z_units = 169U;
    msg.travel_z = 0.22086526894450953;
    msg.travel_z_units = 166U;
    msg.delayed = 121U;

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
    msg.setTimeStamp(0.0681210004028091);
    msg.setSource(251U);
    msg.setSourceEntity(109U);
    msg.setDestination(3739U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.4940754626204904;
    msg.lon = 0.6774760974724664;
    msg.z = 0.592847732323071;
    msg.z_units = 131U;
    msg.speed = 0.17143884662597653;
    msg.speed_units = 62U;
    msg.bearing = 0.4946310993602261;
    msg.cross_angle = 0.8619319832165652;
    msg.width = 0.4814612592615586;
    msg.length = 0.6097369181973951;
    msg.coff = 0U;
    msg.angaperture = 0.3157930361468879;
    msg.range = 11934U;
    msg.overlap = 71U;
    msg.flags = 10U;
    msg.custom.assign("OLMIIXRAPFCTAYFTJDRGKTQKUBRSHTJKULHKPWCVYRRQXJWODTPNOULQZEMQGNIUDRHCWSCWEFPJLMWNZNGYHMFHYUFKWFMQCOIFNONBJUWKHTDYBIVZKHFNTDPWNBPDSVGETPMAZVTIMVZXKZILZYRIFSAHXYKLYYXVAGULXNCEJBQXOQJSQSRZFCTLVEGDLJOSGASDRBUYSOPDKZAEWCJP");

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
    msg.setTimeStamp(0.06422791038240383);
    msg.setSource(4678U);
    msg.setSourceEntity(188U);
    msg.setDestination(55777U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.3357642426912826;
    msg.lon = 0.8150629774888158;
    msg.z = 0.6005000782288327;
    msg.z_units = 87U;
    msg.speed = 0.6368173707685544;
    msg.speed_units = 35U;
    msg.bearing = 0.41122456970216115;
    msg.cross_angle = 0.2616657808637953;
    msg.width = 0.9893392539726443;
    msg.length = 0.8292346167572379;
    msg.coff = 165U;
    msg.angaperture = 0.4355791706894635;
    msg.range = 54966U;
    msg.overlap = 219U;
    msg.flags = 13U;
    msg.custom.assign("DEJSOHMPJIMRLADFVOEKHLSTFEACFZMITJBQTKDIPSMGNXGKDDRJTOTEYMSOCCURCQPPQURGBYRVAWWIUIYXFTKGNKKSPNRDQVCNLNZMOEAKWUWLQCGZGUVZTBLTRBVOGIHIYJGVULQGOXCNHRBZFUIPQVUOHVMLBPFJBKWWZIBAAYSPPAXZNNEQJXFYBOZVYK");

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
    msg.setTimeStamp(0.2655258409808432);
    msg.setSource(9222U);
    msg.setSourceEntity(206U);
    msg.setDestination(30257U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.4339245967454032;
    msg.lon = 0.4243866914437525;
    msg.z = 0.8524746935996256;
    msg.z_units = 14U;
    msg.speed = 0.7870532329867023;
    msg.speed_units = 136U;
    msg.bearing = 0.415625932061799;
    msg.cross_angle = 0.40664188601603724;
    msg.width = 0.41120396328226316;
    msg.length = 0.020031149902692835;
    msg.coff = 158U;
    msg.angaperture = 0.4904499768119246;
    msg.range = 35016U;
    msg.overlap = 166U;
    msg.flags = 147U;
    msg.custom.assign("ECBZTVOCPSSAJHNHEZNZYANMJJFOODVAHXUTPJAMFYBLFOWJBUCWSIADXXUXSIFKAYLLZXMNYVLYZUNATRZDHKYHQKVNKOQSQVIARJISFVVXVEBUXRPAXDWWGRM");

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
    msg.setTimeStamp(0.506638147515318);
    msg.setSource(45965U);
    msg.setSourceEntity(41U);
    msg.setDestination(42525U);
    msg.setDestinationEntity(77U);
    msg.timeout = 35733U;
    msg.lat = 0.14887953687107214;
    msg.lon = 0.40875956414135783;
    msg.z = 0.5908854522625303;
    msg.z_units = 26U;
    msg.speed = 0.4463374970376065;
    msg.speed_units = 80U;
    msg.syringe0 = 160U;
    msg.syringe1 = 72U;
    msg.syringe2 = 179U;
    msg.custom.assign("AWZLYQBZVOUHASDCCWRURCMSKONBOQMEYNYNWBKBFSCRUBZSSCARMTFMFEVSXHJAPVIQBGILWXMRZRJUPDJFWKQKDVYOXWEAUHLJENMCV");

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
    msg.setTimeStamp(0.29679843971382835);
    msg.setSource(63470U);
    msg.setSourceEntity(87U);
    msg.setDestination(38165U);
    msg.setDestinationEntity(31U);
    msg.timeout = 47554U;
    msg.lat = 0.07141742128948625;
    msg.lon = 0.8627591386106064;
    msg.z = 0.48912776411707093;
    msg.z_units = 186U;
    msg.speed = 0.5173575690405313;
    msg.speed_units = 226U;
    msg.syringe0 = 70U;
    msg.syringe1 = 42U;
    msg.syringe2 = 55U;
    msg.custom.assign("SWRWJNYDEBSXTZFUHGLQLVTIFAHFOAEYUFKYSKWBATEBRJSLYUMQZAQNNPAVVCOZIWZEOEWRWILHMDXBNGGFQVNKLTBVULUPXANZTBPTOWQCSXWGCLJKNCVGJMJJYTGKEBXWMBNOPKRDXDMAYXYQITPEVFZPIOMYKVYRPEJHOHGSRIPFQXHVKRPIAFDDJKCUUCMWSQHCGDIGGM");

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
    msg.setTimeStamp(0.1303610687612976);
    msg.setSource(52453U);
    msg.setSourceEntity(132U);
    msg.setDestination(57560U);
    msg.setDestinationEntity(119U);
    msg.timeout = 31959U;
    msg.lat = 0.9878076124637295;
    msg.lon = 0.023085022953885037;
    msg.z = 0.8828740070265777;
    msg.z_units = 106U;
    msg.speed = 0.5252046206970893;
    msg.speed_units = 247U;
    msg.syringe0 = 95U;
    msg.syringe1 = 113U;
    msg.syringe2 = 191U;
    msg.custom.assign("XUJIKCNOWOJVQJUJTQROFBWHNLSFGJVHLRNAMDENVWNNIDDIYRTZUHJROSAOKASCPIOPCGTOEBYBCDLFPAPGRUUECTVGQSPEYXRWHYAZOCDGX");

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
    msg.setTimeStamp(0.3336253330163089);
    msg.setSource(62512U);
    msg.setSourceEntity(5U);
    msg.setDestination(51478U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.9776011840613549);
    msg.setSource(62241U);
    msg.setSourceEntity(1U);
    msg.setDestination(61873U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.9476724358350916);
    msg.setSource(5859U);
    msg.setSourceEntity(238U);
    msg.setDestination(11337U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.8986277210529705);
    msg.setSource(37317U);
    msg.setSourceEntity(192U);
    msg.setDestination(3715U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.65666856219773;
    msg.lon = 0.8403955857521693;
    msg.z = 0.5408117634916508;
    msg.z_units = 150U;
    msg.speed = 0.3069394901916159;
    msg.speed_units = 158U;
    msg.takeoff_pitch = 0.8484040208820272;
    msg.custom.assign("BFJYNTYJACCBIZHOXELBCEUVAFWIXWQPCMSKTPVHOBUXSYUDGRJFCMWSKMRAKYANSJZRLKNCZYZABGCYGCJITBCAHQJFHNMODPTDXGSERHMXZVJLZSAIQDVXKREKVBUVYIOEXUJKDKUOLONMFMTHWIWLALZNQDNWBIFPFDKIIHMEHDWTBVRMUZPNQ");

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
    msg.setTimeStamp(0.19205810632644282);
    msg.setSource(10945U);
    msg.setSourceEntity(253U);
    msg.setDestination(10769U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.5140720357371777;
    msg.lon = 0.7663464228604373;
    msg.z = 0.07750949543856844;
    msg.z_units = 69U;
    msg.speed = 0.2612448895828119;
    msg.speed_units = 228U;
    msg.takeoff_pitch = 0.5853025100813818;
    msg.custom.assign("LEWICPWNEETACQOIZEEUPRZZFRIHWDIGFOTXXVEYGGNHCFGSPRFORBDKSDPKJHPMJIFCJHQSULIDGREDDTTTPQONTKIBLIIBQZGEDKSXVRQXGUQQNYYADHRTSODVMTCPAYVWJXPZXKALBCRDBAOFBWZWMVKNLNAXBXIOSQYSZUNPVUZYFWXHLNLQUQELKYUWSYWOVCENJRBTUVFKFZ");

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
    msg.setTimeStamp(0.5026247928005698);
    msg.setSource(23934U);
    msg.setSourceEntity(39U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.8586066747717367;
    msg.lon = 0.8495666134230148;
    msg.z = 0.2022605192238891;
    msg.z_units = 146U;
    msg.speed = 0.08262570024058513;
    msg.speed_units = 164U;
    msg.takeoff_pitch = 0.27572033445105837;
    msg.custom.assign("JPYLFHVRUELMVVGKAYMCNQLDIUEIGIXCPHNCRKLJQPXVWUZVAMOPDIDUOVNNOSBFXMZDSGJHZEDYOAYWVECYPBYJGSZU");

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
    msg.setTimeStamp(0.6783238492390772);
    msg.setSource(22464U);
    msg.setSourceEntity(111U);
    msg.setDestination(8841U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.23017800329779925;
    msg.lon = 0.4878221471325702;
    msg.z = 0.8796229384040732;
    msg.z_units = 66U;
    msg.speed = 0.1918101719147951;
    msg.speed_units = 80U;
    msg.abort_z = 0.39099870203549303;
    msg.bearing = 0.512698952924585;
    msg.glide_slope = 70U;
    msg.glide_slope_alt = 0.012685612965995463;
    msg.custom.assign("JXKDWHTCCVDVQNRMNZUJHLVGBHRJQNKWRURMNHQTGQIESXXEMGOONITFGFAIIVFOOLXAIRLCVVBNXSCQMKBFEKRQKAJONVZCGUZCDJPNUW");

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
    msg.setTimeStamp(0.2642159135446104);
    msg.setSource(24667U);
    msg.setSourceEntity(240U);
    msg.setDestination(11409U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.6861748528943965;
    msg.lon = 0.24798431985714908;
    msg.z = 0.32605039295520444;
    msg.z_units = 244U;
    msg.speed = 0.7096610766965549;
    msg.speed_units = 15U;
    msg.abort_z = 0.5636532533110402;
    msg.bearing = 0.674200727657771;
    msg.glide_slope = 28U;
    msg.glide_slope_alt = 0.47913159752661005;
    msg.custom.assign("YSVNPSIYCRVHEHGRTBNDSAXWPKIKPLEHQBXFMCQVUEDOIQGTQOXUWJQXHAJCYEBJVILPJJTHIGMGXESLFSDAWDDXKOQKJSCTDIQFRBZBNUXSKBJWPDNZMDNJAFEYPFLN");

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
    msg.setTimeStamp(0.5742256855270527);
    msg.setSource(40710U);
    msg.setSourceEntity(153U);
    msg.setDestination(22343U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.2628038225806577;
    msg.lon = 0.4958831619459334;
    msg.z = 0.4968015568222085;
    msg.z_units = 235U;
    msg.speed = 0.2565853640078559;
    msg.speed_units = 246U;
    msg.abort_z = 0.3592164346148369;
    msg.bearing = 0.08434262331875153;
    msg.glide_slope = 249U;
    msg.glide_slope_alt = 0.7753780422710738;
    msg.custom.assign("BBPQWXNNCELETPCFIKYWLEMTMDGYTBOPCGHUSWFXMCYSHJSICQCXVIJUFJMQUTDDBGYLPFRODLAGRIJOPWAPYPDVWINCHLBPGAAFJXEGKTNARWJZXERVKZRTVYHSUCYSIFOGADOQRFJUXZRQVUUMAMDLZ");

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
    msg.setTimeStamp(0.3319957740199072);
    msg.setSource(43533U);
    msg.setSourceEntity(145U);
    msg.setDestination(57890U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.05826708147467641;
    msg.lon = 0.9301455301922142;
    msg.speed = 0.29980418687058075;
    msg.speed_units = 37U;
    msg.limits = 111U;
    msg.max_depth = 0.9635558005951868;
    msg.min_alt = 0.20043514445577382;
    msg.time_limit = 0.5199188109373089;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3647695169678079;
    tmp_msg_0.lon = 0.6909223695445109;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FXHSNQZDRXXUYHSEBGNLVGAHSCFFNTPHEHSZNWGUIPEVNFJZHONROLKMBUWIZUOHOSAQEMJBCDYXQAPYIPHWVCMLAUTZFYODWYRVKSIIKICGOZFTXYBDHWMWTMVBAJYKDENPRWNNPTJQODBJLYTSOUQFDDPRRGVMEPOLFVKTLYACXJRRZLIJCPKCBJSWAQSLFWGZMELDGGXDXWVTIKVPCIUJMIRXFQGQANURBATJSEGCZBYHK");
    msg.custom.assign("EBRPKYAWCOADDUQFNUBXCCLLZIRSQPBHQRSOQIANIIHPYGWUPRWPESBHEUYVGJSXZKVGCZIDWPJMEMZJDGWNUTORYJHTEJVASLRVNBSQZARXDDNECMAQTHNUUASTCVSSOEGKFNOBRVXRQLKX");

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
    msg.setTimeStamp(0.6593388815623723);
    msg.setSource(18665U);
    msg.setSourceEntity(151U);
    msg.setDestination(49624U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.8346555192310869;
    msg.lon = 0.7634246455652324;
    msg.speed = 0.11197943978272173;
    msg.speed_units = 16U;
    msg.limits = 204U;
    msg.max_depth = 0.996738224406819;
    msg.min_alt = 0.08614844786149845;
    msg.time_limit = 0.3765687482060496;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7750004825483595;
    tmp_msg_0.lon = 0.8807302715247927;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("LPACBFBVOXHXCYLPFDQWVRTRSXZDYKNIKIOCRYBSZVAGAPQMNNBIVBU");
    msg.custom.assign("ZPVMWICKCZIYSFOPXLWHNRKENNTYIZWAKHBXPFVARMMBCPEKBHZOWHPVYCVXQVMCDKJFHIQOFAGANCAUYMHERLLOBSZZMLROQNYJJFVNCLHUOQJPWYJQDFAPCISTGLSKGXZRMYFXITRPFQXBPOUEGKEPETZSHLDFJGNCUYLOJSBGSXQ");

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
    msg.setTimeStamp(0.36699927583700975);
    msg.setSource(15496U);
    msg.setSourceEntity(247U);
    msg.setDestination(10215U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.40890947038951686;
    msg.lon = 0.9820995277433137;
    msg.speed = 0.06602216395575078;
    msg.speed_units = 236U;
    msg.limits = 168U;
    msg.max_depth = 0.27823819490916124;
    msg.min_alt = 0.006645993524207583;
    msg.time_limit = 0.04822684497421692;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.04209341219778895;
    tmp_msg_0.lon = 0.378437165633275;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GEDGONNUCRWSAVPNJKNRMSIODHQESXHJPDZNJSZYVJXIFWLDVYMJVGEW");
    msg.custom.assign("JYDPECMLAZYDGQNZIINPQKVURIWPRTLOZJIAKSECXUTCQUSCYPMWAJWTTMNSGAKGIZHKDMQVYEFNAHTQWRGFAQRFCDUDKMXPOKSJEHTJZJTFIIZLYFYVDWTFEHQUGJOCJNERWCZXJLP");

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
    msg.setTimeStamp(0.17457281108535727);
    msg.setSource(270U);
    msg.setSourceEntity(37U);
    msg.setDestination(13275U);
    msg.setDestinationEntity(83U);
    msg.target.assign("KBRMGDEFAGRMYVQLHNBOPCYFYEYWDUZXXECSVCCQZINYSHNECGUXJGPSQNSPPRBQMEHUZTQBOISWVOMBIKBUOKKVBTCFMUVTALJFLIKTRPSSMUC");
    msg.max_speed = 0.39897169040116387;
    msg.speed_units = 38U;
    msg.lat = 0.7343588083482352;
    msg.lon = 0.2815574941522565;
    msg.z = 0.5807147007136019;
    msg.z_units = 183U;
    msg.custom.assign("PBFESCZYIPJZPNDQVDQCSICYCGXAIDBTDTBAMEVKKCLQGLFBRKMBYEVZSSKOTAKYAMOCLUMFVRHPSLFSHJWBXVNURUJDQYVOFNUDYKXZSXOVELXTVPJZKFOWPAQSCWVHHHGLZLZBJNUSGNCUNRBDQVPXIFIINEIRWXITADXDELT");

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
    msg.setTimeStamp(0.28492890578139995);
    msg.setSource(7931U);
    msg.setSourceEntity(246U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(92U);
    msg.target.assign("NAUXDHQYSCQOMOJWOWXODPLHGUIFJMLTVSFBCYCRILKAIETCOFENJFUZVUEVDFHXIHAGPMBSIQKCIKURKCXZGMQEMVXWRDPQZWRYEOGRKWXVPPHHWLKGAUNNBDDSDBSWOIUKPRVJHTNQKLJOTNWYOXMMBFSDAXVVRMOLQI");
    msg.max_speed = 0.8568521679797501;
    msg.speed_units = 136U;
    msg.lat = 0.3309838683558678;
    msg.lon = 0.3381920339022868;
    msg.z = 0.7316441963972665;
    msg.z_units = 237U;
    msg.custom.assign("DGADUZKLZEVULNXAPPNRYFRENUCAYTERJSGMUOLOEXQAMBFOQOFTQYWXXVYCZEHYFGPHEUNZZVHPMKVTSASQYFUYVEFMP");

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
    msg.setTimeStamp(0.5006255078327002);
    msg.setSource(54708U);
    msg.setSourceEntity(153U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(130U);
    msg.target.assign("DZJRKUFGWZBVEHVOFNMJXCLTAXQKQWCCQPFPHEOKQFYRYZBUYZTRJVPFLAXDTPSYPUEFTTQWMCSEGWBZOOMXUXUNUEFY");
    msg.max_speed = 0.037034040981725025;
    msg.speed_units = 141U;
    msg.lat = 0.6639514403881889;
    msg.lon = 0.13753185856498407;
    msg.z = 0.19681400480792843;
    msg.z_units = 166U;
    msg.custom.assign("HRFPIZDNQKCOMDZFFYALFVRFMZMLQDBJJEOQICTPLNKBHQNZCUXQXFVDCAMPGMQXTIGMJAJUIRRCWSGJEWBZLDVUHXOKKGVPHSQFJIVBHUBSYROCQNJHAOWONDRNZWNCPZBFLHUCPYALKSYXYBXGALGZPHRDVARTHATOETPXEGKCKVWPIVHMJMI");

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
    msg.setTimeStamp(0.9463435524785935);
    msg.setSource(63721U);
    msg.setSourceEntity(142U);
    msg.setDestination(62833U);
    msg.setDestinationEntity(220U);
    msg.timeout = 30596U;
    msg.lat = 0.6947803761703224;
    msg.lon = 0.9914822612640869;
    msg.speed = 0.21115441745121655;
    msg.speed_units = 189U;
    msg.custom.assign("COWVYCODKWEFDANRTMBZMDSELICSZRHWXYHKKUFPELOUTZJISFOHHHWBANCRJXBYVPXHDODLPILRCXLYWAPMZNCYMRDVQJPQLKFSSXAVARLGEIGFJQJTCPGJRWTTTLZHSRXREBZDUSZQIDYNNKQANHAGHIBWVBGNUMXTGFXRLBYWTIPMVPUVEEAZQJGZFNMHQNPZSCTNULOQPMKFOAFWUBXSITCYCMAYUMJOXSIKVEBJKUQEEDGGIOWQDJOYG");

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
    msg.setTimeStamp(0.4963109444910817);
    msg.setSource(27065U);
    msg.setSourceEntity(62U);
    msg.setDestination(11117U);
    msg.setDestinationEntity(182U);
    msg.timeout = 30760U;
    msg.lat = 0.6314098690752014;
    msg.lon = 0.7855392154541211;
    msg.speed = 0.05983408204779339;
    msg.speed_units = 133U;
    msg.custom.assign("SCOGQUTTIERXEHIFNLBZLCLPOYSDT");

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
    msg.setTimeStamp(0.23514527794614126);
    msg.setSource(30269U);
    msg.setSourceEntity(69U);
    msg.setDestination(60094U);
    msg.setDestinationEntity(217U);
    msg.timeout = 34336U;
    msg.lat = 0.4411227740905751;
    msg.lon = 0.09160447217495649;
    msg.speed = 0.9513385708421116;
    msg.speed_units = 101U;
    msg.custom.assign("MHLAMQJFEKXNHDIRXZIUZFODVBYPVDWABKEWELUKBKMMVWCTPDKIUVDVBABOOJHIPMIQN");

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
    msg.setTimeStamp(0.1818436756528542);
    msg.setSource(42204U);
    msg.setSourceEntity(125U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.45134481507267343;
    msg.lon = 0.12031141669491441;
    msg.z = 0.8751515861037732;
    msg.z_units = 85U;
    msg.radius = 0.24241790972591848;
    msg.duration = 57807U;
    msg.speed = 0.3973229709566012;
    msg.speed_units = 74U;
    msg.popup_period = 59608U;
    msg.popup_duration = 21642U;
    msg.flags = 76U;
    msg.custom.assign("RPHPQBOGEYLFVQNRXBGJRCUSEKRFVTPNNWHHOSALLZSOMCCZFQANHACCYBMCGDDEZFHEAXVDAGFFWUOPONIJYWPDBCXUBUDEAQURVTSEXLMKZSTMQCQEHVPTYXIYJQWSLBNTZDKUYCZAVSAFHXUHCKMDOZWUTYSMEITTWYUFKAGXBLGNQTMOAIL");

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
    msg.setTimeStamp(0.17472240512673587);
    msg.setSource(24433U);
    msg.setSourceEntity(121U);
    msg.setDestination(33380U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.8425766584275045;
    msg.lon = 0.9274204062220197;
    msg.z = 0.7182233075891409;
    msg.z_units = 138U;
    msg.radius = 0.2762828730203878;
    msg.duration = 41100U;
    msg.speed = 0.8847116501497013;
    msg.speed_units = 41U;
    msg.popup_period = 33367U;
    msg.popup_duration = 44829U;
    msg.flags = 38U;
    msg.custom.assign("RMAXWBQGMTGQCFSLEWOTHPAFHNXHWWZBVPVEZDKIZLPWTEMTSYUKFSDSJGPWPQKFKTCUAPGTOFGQCUMPIGAHZONVZBBXSALBMOVRRQIOVNUPRVYWUXMDIZYIDJOYLKCNNYDIYJDRMOFJDKIXFULERFNPWHXARYZRSTAJAOCOIMLTTHVNBHBUCXMAVKGGWCGLXSHTSDZYJXKLRSEUQFZ");

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
    msg.setTimeStamp(0.6624983370793174);
    msg.setSource(36466U);
    msg.setSourceEntity(107U);
    msg.setDestination(32225U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.45036669327465073;
    msg.lon = 0.8682860658669035;
    msg.z = 0.4732239289525467;
    msg.z_units = 206U;
    msg.radius = 0.056248087397449464;
    msg.duration = 44477U;
    msg.speed = 0.5732496447673986;
    msg.speed_units = 113U;
    msg.popup_period = 2719U;
    msg.popup_duration = 44886U;
    msg.flags = 200U;
    msg.custom.assign("ECTVTPJAVHXJWBMXQPROVCURRUBYWZLOJGSCFFOGRVBUCPUOKPKQJUAWKHJJTXKEDECFNXEDJCWFJUHTEWPIVTIDONRQZNYTIIZBSKDGLHCQKYLSZRXOEGMKNPLMIBEZBIFYQBKGFWKSQVGLAAGFRXZIMHTFQPXTSZXDYLOSYMQXHSVUVMHYTBWMVYTIQPJOWMWCNLRAAMNDLNDAPDNYOGXARFUSZARDGMAEOKBLZICZJVNHWDSBQEFICHPGL");

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
    msg.setTimeStamp(0.14337224713663665);
    msg.setSource(56358U);
    msg.setSourceEntity(73U);
    msg.setDestination(61526U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.8456266599067461);
    msg.setSource(53089U);
    msg.setSourceEntity(40U);
    msg.setDestination(10571U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.5894244888611508);
    msg.setSource(11222U);
    msg.setSourceEntity(5U);
    msg.setDestination(44032U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.5896754608985241);
    msg.setSource(42566U);
    msg.setSourceEntity(4U);
    msg.setDestination(9557U);
    msg.setDestinationEntity(70U);
    msg.timeout = 45498U;
    msg.lat = 0.8865084099824784;
    msg.lon = 0.3877530430214172;
    msg.z = 0.7204970547603642;
    msg.z_units = 31U;
    msg.speed = 0.3555515012269572;
    msg.speed_units = 223U;
    msg.bearing = 0.9644481927147235;
    msg.width = 0.12827947268920425;
    msg.direction = 243U;
    msg.custom.assign("SDAXYRUJXWLXRNSGXPJSCYYBSXGYULPQJEQRHBHT");

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
    msg.setTimeStamp(0.7723771806867595);
    msg.setSource(54156U);
    msg.setSourceEntity(194U);
    msg.setDestination(10688U);
    msg.setDestinationEntity(95U);
    msg.timeout = 21321U;
    msg.lat = 0.901947470493508;
    msg.lon = 0.04018437309157563;
    msg.z = 0.26510780654506294;
    msg.z_units = 78U;
    msg.speed = 0.7580954240308642;
    msg.speed_units = 2U;
    msg.bearing = 0.5583829005935094;
    msg.width = 0.9133852670653189;
    msg.direction = 222U;
    msg.custom.assign("LNOYXSIOJUSMIYFBARHBXQXOQBDOTGZAEXEPLGDUAJSCNOTSWOFCKAYSLLDYUBWQOKDHRYKEMXVXYHRGETLVIQIRDCCWWRLHBWBKRJKPWJYDZCLVGBTOBRENTTMHD");

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
    msg.setTimeStamp(0.3922064189618889);
    msg.setSource(50250U);
    msg.setSourceEntity(153U);
    msg.setDestination(27842U);
    msg.setDestinationEntity(171U);
    msg.timeout = 52236U;
    msg.lat = 0.2949937855091197;
    msg.lon = 0.7793123877843542;
    msg.z = 0.9648303675187643;
    msg.z_units = 254U;
    msg.speed = 0.833753979197566;
    msg.speed_units = 199U;
    msg.bearing = 0.4006800413082954;
    msg.width = 0.31780778993231973;
    msg.direction = 108U;
    msg.custom.assign("NRUTMMMIIDZJCZMD");

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
    msg.setTimeStamp(0.3927616254658214);
    msg.setSource(21815U);
    msg.setSourceEntity(184U);
    msg.setDestination(40898U);
    msg.setDestinationEntity(101U);
    msg.op_mode = 182U;
    msg.error_count = 64U;
    msg.error_ents.assign("WPCBRMIFOCCWUMZOEXYUBGQMYZBEPKSCBTADJLMIFDWBIZKIQUPVVNWZZQQHNTJTTYJBWMSPL");
    msg.maneuver_type = 32396U;
    msg.maneuver_stime = 0.6010173235580506;
    msg.maneuver_eta = 11121U;
    msg.control_loops = 1195889713U;
    msg.flags = 216U;
    msg.last_error.assign("VIYUYNXJTEISTGOREIANMMHWFVHCXXRALXULOONPLGJOKDKGURYCZILYEVXQCLQXKSUHYAQTQDHZBTUDBICCNDAIFKSTDLQSOHWPESTYMSHNCRAEDCBPIIFBJOWVBDGYUFVVGJZWFVKOQSQRLNDEVAEFINBXKYVZQUGBOWJWEADGJMLANWFNFFYHU");
    msg.last_error_time = 0.6918633483335567;

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
    msg.setTimeStamp(0.12357843635268329);
    msg.setSource(29449U);
    msg.setSourceEntity(138U);
    msg.setDestination(17518U);
    msg.setDestinationEntity(77U);
    msg.op_mode = 225U;
    msg.error_count = 209U;
    msg.error_ents.assign("LTLAJSWHEELXOIHZKOXRGHYMPPZAZHEMSZIDXYFRSFAMJKPXWZFGHSXLTJVBWEMKICFVPOFAIQNBRANKNJUHXEHBEJJDOVKKQZQQLRLNFDRGGCWQUSUUABYMVUHQCXYDPBWQHJVMMAGTYJUPSVZPFEWWNDUAORNOH");
    msg.maneuver_type = 15196U;
    msg.maneuver_stime = 0.24503805682926827;
    msg.maneuver_eta = 27847U;
    msg.control_loops = 3979649236U;
    msg.flags = 232U;
    msg.last_error.assign("GVHRUVPGQHWHEQDMCMTNBTPKGXTGXVZIYUJENXVLJVPCQWFTWMJMREFXIAROQFWIJCSVOHOFUCJXHOLZQIJHLCZZ");
    msg.last_error_time = 0.26174450631613;

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
    msg.setTimeStamp(0.5678874950909978);
    msg.setSource(33226U);
    msg.setSourceEntity(59U);
    msg.setDestination(26787U);
    msg.setDestinationEntity(127U);
    msg.op_mode = 13U;
    msg.error_count = 49U;
    msg.error_ents.assign("KLPFBSTZTBFHZHDMFZLYJMWYTGXMPHICRTXNFDIDPHKACYAPFZ");
    msg.maneuver_type = 11496U;
    msg.maneuver_stime = 0.6822065609780033;
    msg.maneuver_eta = 9636U;
    msg.control_loops = 571719529U;
    msg.flags = 247U;
    msg.last_error.assign("CXKVDDYWKYLHXZCQFVJECLPSORCYXHBGRDXEEHDZHFQZRJVLCKNEIMOAAJQWBGWRCWZQGTOUOEKSNSIBAAMRWWJYVSIUMXQNZJESUVPBNLMLTRIWJIOKAGTBLVDQYJIOGWRPUHOXBBMUNQMMFRXGNRQDTVZBCIWZLHXHIKFRYQPSAPJVEP");
    msg.last_error_time = 0.24065148960392513;

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
    msg.setTimeStamp(0.1324342812422682);
    msg.setSource(56424U);
    msg.setSourceEntity(127U);
    msg.setDestination(38561U);
    msg.setDestinationEntity(139U);
    msg.type = 70U;
    msg.request_id = 40232U;
    msg.command = 191U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 36594U;
    tmp_msg_0.lat = 0.7719499431150545;
    tmp_msg_0.lon = 0.058726156040159516;
    tmp_msg_0.speed = 0.5998845130544529;
    tmp_msg_0.speed_units = 96U;
    tmp_msg_0.custom.assign("CWUGIEYYCLOQWADKJRXEULKRXAMKFNJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50755U;
    msg.info.assign("UQWFKUHVJDDKUJCBKANOUDIUHJKOTHGNQXZAONRGRZGJMZFFXECIYDTMFAAIZHARIXWQYIMNYFPPAKKRILKJQKWHHCGCTQSPCUBXKLFGHJCOVZZLJRNSRXAWXQPUBZCYSQFSRTBGAIWWYELRPDRVAOOVUYTQTSIMNCDXVOVMOXGEGYJSZWRLELBVKXBMSDPPVFEBLXDOWPDYJVSLULPMEJQCTEMMVOC");

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
    msg.setTimeStamp(0.8333221547852603);
    msg.setSource(8109U);
    msg.setSourceEntity(152U);
    msg.setDestination(10370U);
    msg.setDestinationEntity(93U);
    msg.type = 28U;
    msg.request_id = 45753U;
    msg.command = 14U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 39664U;
    tmp_msg_0.lat = 0.9181701314905187;
    tmp_msg_0.lon = 0.31381823831664946;
    tmp_msg_0.z = 0.43882053522370146;
    tmp_msg_0.z_units = 30U;
    tmp_msg_0.speed = 0.4655228081888868;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.duration = 12203U;
    tmp_msg_0.radius = 0.8132624352992223;
    tmp_msg_0.flags = 116U;
    tmp_msg_0.custom.assign("KMBPVIHOWBEZKVFNRGKATVGUJDNGAYYZTJDWFQZKSCHEYISLEMCCRSIHHJUXLQRAOJDFQAXUOICMOXXZYKMVDISPZNNRDTMQTSLEAHOCQDLBPDXRNQSSGGKFC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26191U;
    msg.info.assign("IJSLEBYQFAFZXOKOHWGOZNGUXWJKMXRRPCMZUSYMNXFMDUMENZLNVTMIJSMWKWHGYTGREFKDPWNDKFCBLINIQHPQUUOCTLSQINTEYWRVKLHDFUAXVLLEZPWXJTOQJPIWXREEASOASBUCXVBLSHTYZKAKVVRK");

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
    msg.setTimeStamp(0.2049568411750231);
    msg.setSource(31136U);
    msg.setSourceEntity(185U);
    msg.setDestination(2062U);
    msg.setDestinationEntity(134U);
    msg.type = 215U;
    msg.request_id = 53931U;
    msg.command = 29U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 36807U;
    tmp_msg_0.lat = 0.9145065983322689;
    tmp_msg_0.lon = 0.7783452702323207;
    tmp_msg_0.z = 0.2591814527962554;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.speed = 0.5475749558049827;
    tmp_msg_0.speed_units = 128U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.08771913616960214;
    tmp_tmp_msg_0_0.y = 0.9200002026395266;
    tmp_tmp_msg_0_0.z = 0.07287870409054764;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("DEOZVRMITSUHPRTNMHWOPNWFPYNFKYKLIHROWAPGDVJKWQNQFBSXBTVUFSIWIJWVBJCTEYCTNQVTCHKQWFXHLSJBGLLAKKECJYTRXDGRLENTPAOQHGEDEHGJZDLNWWANFQBDKPUBGBOMAIUSTREDPZHKXHKQNZFGFCURCIVRMJKBVOOYFGLZCPY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30645U;
    msg.info.assign("WTHEHCPGWUPBNKZTDMRXWDBGQMFBDSZLWFQALIKCXALLXZIEZVGRYMFZSUQGHKSATNHZMSD");

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
    msg.setTimeStamp(0.5819959711615335);
    msg.setSource(22122U);
    msg.setSourceEntity(253U);
    msg.setDestination(6825U);
    msg.setDestinationEntity(129U);
    msg.command = 1U;
    msg.entities.assign("WYYDUHHMJZEBNDSZPILPXUMVLTKKMEPPHYZCQFWVULJLGGVSHEUIADXIAXFHBOSFODNFKYINKYYENHRWQCOTLGZNQVEPZGSWQROOJTAG");

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
    msg.setTimeStamp(0.6696504617488476);
    msg.setSource(28824U);
    msg.setSourceEntity(110U);
    msg.setDestination(24703U);
    msg.setDestinationEntity(129U);
    msg.command = 75U;
    msg.entities.assign("MVFPSDWNNAYCSUJHUJHXCJOOHEHFBXSGHDQAMCULQOILLNSQLQMERWDLPTLHPHUTEGKYBIJVGGAUFKXFDKSJWIPKPTZUYXNRYVSCAPU");

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
    msg.setTimeStamp(0.6573242244749793);
    msg.setSource(49257U);
    msg.setSourceEntity(135U);
    msg.setDestination(37524U);
    msg.setDestinationEntity(51U);
    msg.command = 207U;
    msg.entities.assign("MWBFHDXEBQDBTPHFTIIYTFISQCMBUCHWOPNIROGAGUFRTNULGXPTLCZVKESNZVHCDGNIKYTBICIIZORUBMELAGARLAUSBJKJWKYOOSKSMALVLVPBQFWYXJSOLJUCRZCNLQUVMNNOZAMFT");

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
    msg.setTimeStamp(0.6156921074696166);
    msg.setSource(381U);
    msg.setSourceEntity(81U);
    msg.setDestination(53881U);
    msg.setDestinationEntity(79U);
    msg.mcount = 205U;
    msg.mnames.assign("VEFJNNVZRURZUFLUHDGKBBSMXBRVYUOBWKBMTSXXUPYSRIMAFFNQXAJDDTCQMMCDYGOPOEVYKUKVMCXBIPHHOMWSPDPCVNENNSVLGXBOTJOGQGLWQAQUAGNHULTJPLCSCJIWDIKCTGOAJFWMFKFOFZRIYABLQLGXZXIMGSGLWHMZCPIWELBYYVIFOQQPNEDWSZEOFTTHLYEJABKKCACIJHKYRREEUVHDRRNE");
    msg.ecount = 152U;
    msg.enames.assign("THACSRPWRDFNCEAROEUXBTBEGWFXXKYHVWQUYIWBNZZFTZATXGMZDLHOETFOLSOBXWRMSHEVIMWJGJUJADFMZZPKXBUDSETJDFZDAQXQKPGCBRBYISHEGNBNMSLCOAPKINTGKSKCRUYJCXIXIIPLVIWYLOVULGT");
    msg.ccount = 218U;
    msg.cnames.assign("WFGIEIHPVLIFEEGLHTGVRAFFWDRYJETEPJDLPTKAWCXRBRGJFCOZOVNOFHEKKONXWLOMSRAAMTEMHUCPXIPLOUZABNSCSUKNZJPQLQVCKIHRSUYQMNDNOYZMWWVVJHERCIIUSPJZYWETNQBBPRQGAXAAAAVDGFVTVHOB");
    msg.last_error.assign("PPQZDSTLQOOPYQOXPJAZGNMYVZNPMYTVJLAFTQXBIGDPMNCIQERXNFFALEREUHSBFHEZVLHLCBXKSKJCGKSWEQKOMHMRJKRUCYUSFETAKZVOICFBQCLIBWFVNHRWINVDHTNGAWVOOMZSEUMVBJLUCLPDHAXWOQJIKFHJWELQZZYTYFRGUXGIMRGGTFENXJE");
    msg.last_error_time = 0.33101519338029417;

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
    msg.setTimeStamp(0.8884871033181918);
    msg.setSource(65354U);
    msg.setSourceEntity(172U);
    msg.setDestination(61808U);
    msg.setDestinationEntity(59U);
    msg.mcount = 129U;
    msg.mnames.assign("TMPSGRIZJXYBJLYNHKRVNOEGATFGWHAOSPHUZMPGUWPVNQVLFWCSOD");
    msg.ecount = 10U;
    msg.enames.assign("VBFLOAAIFHCMHYRLUERBISPTBDWGOAGPJGCNDHYVUUFIEJSJPUGNHXNKOAWDFCSRUKTBHVMPXHHWHQTDCGMSQAZJCMJMTEPXVSQETYSECQXZGDUYKMWFOBCILFGNJGJHKXZJSKKINMGXQBPYWMRTRFNOITKVQYCZDZPWBOFXNQHJBYQSWKPAVEENCUWXAIVDMWFLOIUUZAAZEOYRLOLVNDDZILRXSUQCKIYVWZPVJGEBNFOXTRLLMTL");
    msg.ccount = 206U;
    msg.cnames.assign("OEROIXKUSEUHQDILQKPVZCFOACZCFHOSLJQZQWCSDCBFMEFQYEVLUIONVAUCTNMPWRTRSBMWEBUPGDXXHHYNGLG");
    msg.last_error.assign("SPSVUQFIWEPQYK");
    msg.last_error_time = 0.2554163833210755;

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
    msg.setTimeStamp(0.6827889506236563);
    msg.setSource(56519U);
    msg.setSourceEntity(249U);
    msg.setDestination(57483U);
    msg.setDestinationEntity(240U);
    msg.mcount = 249U;
    msg.mnames.assign("OHIKGHLYIFTNKSMQOAATDNLEOHKTWQWKQJCDQZEBUIJZBABAIGYPMGKDDAESVQKDNDZHCMNDAJRURPEZSXTGMCUBBXISSTFJVHRVWWEHUNLAQFNIOYDKBUUWROOPLQTYYDUETGCTXLPB");
    msg.ecount = 4U;
    msg.enames.assign("QXRMNPDZSOVZIUYQRTUOLCFZNVWZRWECOFQKVVIAUYFTAVHCMRRGUSWGDAVDTOMSCBPDSHGEVHLLMFB");
    msg.ccount = 21U;
    msg.cnames.assign("GIDXGNTRMFKDJDYWRY");
    msg.last_error.assign("GHMXCVVIBGWCJFDMSWSRRPNHWXVISOIDODCXKPASKWXANWHVXZFELGAIDIKHUSJVLUFENYFUGOQEGXSIYNNWYVRKNMZTPAFQZVSMEIFUHQWJIBLBMYQORTQBMPCEAZBDQKVNGRZFBYATPYZBYMWCUNGYHHEHKCBGOLJLHEMZAKUMUTJPUYPRAQTX");
    msg.last_error_time = 0.5417231840791591;

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
    msg.setTimeStamp(0.9025814126601114);
    msg.setSource(46178U);
    msg.setSourceEntity(90U);
    msg.setDestination(26946U);
    msg.setDestinationEntity(165U);
    msg.mask = 187U;
    msg.max_depth = 0.5146994694843147;
    msg.min_altitude = 0.7140672491941294;
    msg.max_altitude = 0.17315893198360754;
    msg.min_speed = 0.763122369531259;
    msg.max_speed = 0.6732957654744463;
    msg.max_vrate = 0.4310165225990621;
    msg.lat = 0.2751536112329003;
    msg.lon = 0.4545723433568787;
    msg.orientation = 0.6918266183677869;
    msg.width = 0.09547220533090628;
    msg.length = 0.9656867929088511;

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
    msg.setTimeStamp(0.2603502916946332);
    msg.setSource(42348U);
    msg.setSourceEntity(169U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(157U);
    msg.mask = 51U;
    msg.max_depth = 0.9030843851509887;
    msg.min_altitude = 0.24715670930667377;
    msg.max_altitude = 0.7415374771043208;
    msg.min_speed = 0.9355737704079264;
    msg.max_speed = 0.9716126198581949;
    msg.max_vrate = 0.11045730487033634;
    msg.lat = 0.9993164921627944;
    msg.lon = 0.16745699583332174;
    msg.orientation = 0.6323402397532011;
    msg.width = 0.00295724352097404;
    msg.length = 0.5993168295378253;

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
    msg.setTimeStamp(0.6611552895562509);
    msg.setSource(16968U);
    msg.setSourceEntity(137U);
    msg.setDestination(23370U);
    msg.setDestinationEntity(141U);
    msg.mask = 135U;
    msg.max_depth = 0.25338466645249613;
    msg.min_altitude = 0.5357110758601378;
    msg.max_altitude = 0.6693333404931712;
    msg.min_speed = 0.1934051199457636;
    msg.max_speed = 0.6591089799390545;
    msg.max_vrate = 0.39589676108041283;
    msg.lat = 0.894809476982012;
    msg.lon = 0.05088490349085284;
    msg.orientation = 0.2683771654557632;
    msg.width = 0.2751631250102967;
    msg.length = 0.2925487678496135;

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
    msg.setTimeStamp(0.5710651994528547);
    msg.setSource(63481U);
    msg.setSourceEntity(150U);
    msg.setDestination(5109U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.13220036202126062);
    msg.setSource(26546U);
    msg.setSourceEntity(23U);
    msg.setDestination(11733U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.8268804542331623);
    msg.setSource(14422U);
    msg.setSourceEntity(68U);
    msg.setDestination(15995U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.08742162191225122);
    msg.setSource(32593U);
    msg.setSourceEntity(142U);
    msg.setDestination(51303U);
    msg.setDestinationEntity(21U);
    msg.duration = 61705U;

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
    msg.setTimeStamp(0.7958402655310787);
    msg.setSource(49011U);
    msg.setSourceEntity(211U);
    msg.setDestination(28485U);
    msg.setDestinationEntity(182U);
    msg.duration = 24608U;

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
    msg.setTimeStamp(0.7968723435822387);
    msg.setSource(40830U);
    msg.setSourceEntity(14U);
    msg.setDestination(19161U);
    msg.setDestinationEntity(26U);
    msg.duration = 12469U;

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
    msg.setTimeStamp(0.6824479184000568);
    msg.setSource(55697U);
    msg.setSourceEntity(155U);
    msg.setDestination(2463U);
    msg.setDestinationEntity(110U);
    msg.enable = 201U;
    msg.mask = 1754425519U;
    msg.scope_ref = 2937033590U;

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
    msg.setTimeStamp(0.025587167695560575);
    msg.setSource(42233U);
    msg.setSourceEntity(157U);
    msg.setDestination(36157U);
    msg.setDestinationEntity(84U);
    msg.enable = 201U;
    msg.mask = 3676286838U;
    msg.scope_ref = 430704476U;

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
    msg.setTimeStamp(0.1733549626518056);
    msg.setSource(14017U);
    msg.setSourceEntity(9U);
    msg.setDestination(50300U);
    msg.setDestinationEntity(133U);
    msg.enable = 94U;
    msg.mask = 1774286179U;
    msg.scope_ref = 2432616627U;

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
    msg.setTimeStamp(0.027030714399854716);
    msg.setSource(61061U);
    msg.setSourceEntity(135U);
    msg.setDestination(13099U);
    msg.setDestinationEntity(44U);
    msg.medium = 105U;

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
    msg.setTimeStamp(0.6581978529389656);
    msg.setSource(16075U);
    msg.setSourceEntity(233U);
    msg.setDestination(26765U);
    msg.setDestinationEntity(27U);
    msg.medium = 16U;

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
    msg.setTimeStamp(0.223030179183476);
    msg.setSource(16502U);
    msg.setSourceEntity(47U);
    msg.setDestination(29771U);
    msg.setDestinationEntity(34U);
    msg.medium = 249U;

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
    msg.setTimeStamp(0.5611062226218101);
    msg.setSource(1732U);
    msg.setSourceEntity(188U);
    msg.setDestination(44606U);
    msg.setDestinationEntity(142U);
    msg.value = 0.8465153437811559;
    msg.type = 212U;

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
    msg.setTimeStamp(0.3078388096368998);
    msg.setSource(18465U);
    msg.setSourceEntity(98U);
    msg.setDestination(45316U);
    msg.setDestinationEntity(30U);
    msg.value = 0.24938667379075785;
    msg.type = 193U;

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
    msg.setTimeStamp(0.27291695403831173);
    msg.setSource(20109U);
    msg.setSourceEntity(4U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(97U);
    msg.value = 0.3670261534208845;
    msg.type = 210U;

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
    msg.setTimeStamp(0.13071215279484083);
    msg.setSource(25138U);
    msg.setSourceEntity(195U);
    msg.setDestination(17479U);
    msg.setDestinationEntity(190U);
    msg.possimerr = 0.6681519284677835;
    msg.converg = 0.14165746364705178;
    msg.turbulence = 0.7998267383948745;
    msg.possimmon = 39U;
    msg.commmon = 63U;
    msg.convergmon = 118U;

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
    msg.setTimeStamp(0.6977860403118673);
    msg.setSource(61517U);
    msg.setSourceEntity(248U);
    msg.setDestination(51827U);
    msg.setDestinationEntity(131U);
    msg.possimerr = 0.5235679157954088;
    msg.converg = 0.0753741842521145;
    msg.turbulence = 0.2764152108030008;
    msg.possimmon = 84U;
    msg.commmon = 163U;
    msg.convergmon = 134U;

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
    msg.setTimeStamp(0.10857206155403987);
    msg.setSource(14855U);
    msg.setSourceEntity(45U);
    msg.setDestination(52870U);
    msg.setDestinationEntity(18U);
    msg.possimerr = 0.20739421587217244;
    msg.converg = 0.41691386315353407;
    msg.turbulence = 0.7974103165878059;
    msg.possimmon = 13U;
    msg.commmon = 190U;
    msg.convergmon = 139U;

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
    msg.setTimeStamp(0.4824993243198944);
    msg.setSource(12138U);
    msg.setSourceEntity(112U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(127U);
    msg.autonomy = 245U;
    msg.mode.assign("JRDEXCLCWAXFDJSOOYDFRBGYJPUPKROIJLIIXDWUYMFXAOBAAFVDTFDPGKPTTISCBMPPALNJIIZWXOEGLOG");

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
    msg.setTimeStamp(0.49044469293928405);
    msg.setSource(32372U);
    msg.setSourceEntity(237U);
    msg.setDestination(40218U);
    msg.setDestinationEntity(125U);
    msg.autonomy = 95U;
    msg.mode.assign("HMMOCFYOSXTDQHPYJVPZZAXSAIWHTFMYNOHGAOETVWLPLHAUFRJBSEQVQHPRVXAFJUIHBJAKXMXWFKZMNFECWYYSWTGRZBSOQTCRBTUBPJLVBRYSJYLURBWAWMAEEVOTDUYKKCCDKPMQBLCNGGGISXJGDHRPDZONEFKWIUVJSNDDRLUGCYCIKDNNTHLIOFLIGXRQCBZXQGPEYTDQAVZNTRUKISQKGOCEVQSOMEAIMXFINJEZHJ");

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
    msg.setTimeStamp(0.08592259215790288);
    msg.setSource(39508U);
    msg.setSourceEntity(163U);
    msg.setDestination(26706U);
    msg.setDestinationEntity(190U);
    msg.autonomy = 66U;
    msg.mode.assign("BAORPZLFXUQMYYOCIUGDTIDHXOEFHAQSMDJKHQXAXTOPARJIHCVJ");

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
    msg.setTimeStamp(0.3497763114843019);
    msg.setSource(25334U);
    msg.setSourceEntity(87U);
    msg.setDestination(50970U);
    msg.setDestinationEntity(121U);
    msg.type = 133U;
    msg.op = 138U;
    msg.possimerr = 0.9757372078976947;
    msg.converg = 0.6757169538203226;
    msg.turbulence = 0.6300590334261656;
    msg.possimmon = 138U;
    msg.commmon = 160U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.6536446890937313);
    msg.setSource(50802U);
    msg.setSourceEntity(122U);
    msg.setDestination(12919U);
    msg.setDestinationEntity(210U);
    msg.type = 208U;
    msg.op = 35U;
    msg.possimerr = 0.5494646443243644;
    msg.converg = 0.19964722380906164;
    msg.turbulence = 0.46142626385046226;
    msg.possimmon = 246U;
    msg.commmon = 30U;
    msg.convergmon = 103U;

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
    msg.setTimeStamp(0.5947128963142703);
    msg.setSource(29362U);
    msg.setSourceEntity(85U);
    msg.setDestination(21820U);
    msg.setDestinationEntity(207U);
    msg.type = 183U;
    msg.op = 79U;
    msg.possimerr = 0.6157523143833687;
    msg.converg = 0.2399115711619143;
    msg.turbulence = 0.4238769500197186;
    msg.possimmon = 200U;
    msg.commmon = 27U;
    msg.convergmon = 69U;

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
    msg.setTimeStamp(0.10641095471950568);
    msg.setSource(7578U);
    msg.setSourceEntity(245U);
    msg.setDestination(49218U);
    msg.setDestinationEntity(83U);
    msg.op = 62U;
    msg.comm_interface = 16U;
    msg.period = 60069U;
    msg.sys_dst.assign("GJQJMYJEHASSUPKWBXFPLMJYAIHLFKRWLRRCGKWZAIJDZUZKOXEBOLRVCFVMYVCCKKDIXJMSNWLXANPGVIQHTWRUJTSOQHZFZMUQQWTQFBBTAWFPLTROIAVETN");

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
    msg.setTimeStamp(0.4292350464834461);
    msg.setSource(3375U);
    msg.setSourceEntity(152U);
    msg.setDestination(2428U);
    msg.setDestinationEntity(25U);
    msg.op = 222U;
    msg.comm_interface = 225U;
    msg.period = 31519U;
    msg.sys_dst.assign("KUJMESYMFANXMYGFTDBTSLWUNHTUXYEDVKINAXMERECQDFOBOIBAKAICGGCIMMQF");

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
    msg.setTimeStamp(0.9840417989583796);
    msg.setSource(34512U);
    msg.setSourceEntity(210U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(117U);
    msg.op = 248U;
    msg.comm_interface = 94U;
    msg.period = 7571U;
    msg.sys_dst.assign("QWDLMXBZITAQXXZICDUKNTYGLMNDJEVVBKCMOHRVXGWAIHUXGHVDAIQPEPFFEKHFNBOPTJMYZYAOEUTZDWCYZSIWZLSEJIJTUMRCIENROAWHVUDLJXVYCFJFWTYZKLSOATAWCFOJKHOSXGYIYJKPCTXQSELDNGZDNDLBHBHKQDRLNPBBNIACFSHLXKGWRSZTUBMEAXUVGNKAGULVQRMKGQCJHPMBYBOFMMGQWJSQPSERRSQZW");

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
    msg.setTimeStamp(0.11330164124579434);
    msg.setSource(59929U);
    msg.setSourceEntity(12U);
    msg.setDestination(21494U);
    msg.setDestinationEntity(122U);
    msg.stime = 4209579968U;
    msg.latitude = 0.7590514178608918;
    msg.longitude = 0.3299569120851671;
    msg.altitude = 3505U;
    msg.depth = 38655U;
    msg.heading = 7450U;
    msg.speed = -16260;
    msg.fuel = 24;
    msg.exec_state = 79;
    msg.plan_checksum = 15881U;

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
    msg.setTimeStamp(0.14801885262534364);
    msg.setSource(52065U);
    msg.setSourceEntity(11U);
    msg.setDestination(3573U);
    msg.setDestinationEntity(201U);
    msg.stime = 51478844U;
    msg.latitude = 0.2681696033467229;
    msg.longitude = 0.19302681270740363;
    msg.altitude = 44163U;
    msg.depth = 6648U;
    msg.heading = 40185U;
    msg.speed = -14248;
    msg.fuel = -109;
    msg.exec_state = 35;
    msg.plan_checksum = 35371U;

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
    msg.setTimeStamp(0.3063053007485411);
    msg.setSource(16668U);
    msg.setSourceEntity(32U);
    msg.setDestination(29331U);
    msg.setDestinationEntity(118U);
    msg.stime = 4125716445U;
    msg.latitude = 0.6298779516938354;
    msg.longitude = 0.5748491365460405;
    msg.altitude = 32189U;
    msg.depth = 28857U;
    msg.heading = 63199U;
    msg.speed = 17477;
    msg.fuel = -27;
    msg.exec_state = 100;
    msg.plan_checksum = 34638U;

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
    msg.setTimeStamp(0.38885788930815235);
    msg.setSource(50208U);
    msg.setSourceEntity(218U);
    msg.setDestination(54159U);
    msg.setDestinationEntity(174U);
    msg.req_id = 10021U;
    msg.comm_mean = 45U;
    msg.destination.assign("PPECQWCMVHMYUKXMUZYTVLAWJSSGTOUZEGIVQGBXNPCQZFMIDSNYGKTMTEVNESEYZXHILWRTCNVBBRAMHOVDJLYADWSNOXOBIYPFLKTQLFBLXJXOTCKFPDFLPKJPHUDQCZVSNI");
    msg.deadline = 0.09248047561376205;
    msg.range = 0.19079368350522363;
    msg.data_mode = 207U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.561017295455007;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WUCEPKOHUWANWNYFZJPDVCJRZRCXMUUTLDDXISVFFHLACSXFRPOQUYTIHJIVBBIEMRZTXDUYOHOSJITZAY");
    const signed char tmp_msg_1[] = {-117, -70, -65, -6, -37, -28, 39, -44, 71, 23, 1, -113, -2, -53, 11, -6, -56, -53, 49, -74, 58, -127, 41, 65, -9, -9, 118, 61, -103, 22, 6, 95, -64, 45, 51, -107, -67, 121, 108, -100, -43, 69, -113, -128, -26, -94, 42, -52, 89, -12, 76, -34, 52, 93, -93, -72, -38, -100, -18, 107, -6, -34, 51, -11, -29, 120, 120, 44, -77, 26, 84, -112, 79, -56, -74, 41, 121, -9, 56, 71, 26, -127, 2, 72, 115, -49, -105, -113, 20, -22, 11, 51, 38, -24, 49, -99, -24, -56, 109, 58, 15, -127, 85, 105, -40, 125, -71, -124, -108, 50, -40, -83, -7, -66, 33, 51, -8, -128, 116, -117, -61, 58, 97, 85, 108, 2, -106, 79, -38, 116, 81, -11, 2, -24, -78, -85, -94, -32, -46, 28, 65, 21, -38, 101, 9, 74, 84, 109, 91, -2, -116, 59, 57, -61, -44, 103, -109, -113, 83, 75, 18, -6, -64, 5, -1, 6, -35};
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
    msg.setTimeStamp(0.05972210102127706);
    msg.setSource(59516U);
    msg.setSourceEntity(92U);
    msg.setDestination(50423U);
    msg.setDestinationEntity(49U);
    msg.req_id = 4962U;
    msg.comm_mean = 215U;
    msg.destination.assign("PPTIJLNHNRBNIWZIKCKMWVLQBOAFWUGGSTCNGOOFWXMKFOUXYR");
    msg.deadline = 0.2813300776650325;
    msg.range = 0.9048712381517866;
    msg.data_mode = 5U;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 40215U;
    tmp_msg_0.lat = 0.11292809205244303;
    tmp_msg_0.lon = 0.30065550989305656;
    tmp_msg_0.z_units = 166U;
    tmp_msg_0.z = 0.8771495007345018;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("COGWNIPWEKRAGZUNEMMPUXJAYRSVOELGFADWCKOZNDFVRHJHMBBMQLHRBKWKENTIFDWCSMALUPQYDDCJFBIFRMDCQOSGPQHGEGAZLQOSZFTYNTUXGKAAJCPYWTFNFJRDGWUDYMWYOLYBBJVZSEVIZJQIKYJVKIEHKRCOIZRNXTHTUIYLIZKWZUTAAMOXXQFLVNXNDUJPUCVEXPPHKQXFTVMIAYVBLTOTWSBPUNQBGM");
    const signed char tmp_msg_1[] = {-88, 3, -95, -44, -98, 9, 78, -101, 120, 19, -117, -13, 36, 116, -78, -82, -94, -109, -70, 1, 46, -34, -128, -53, 10, -96, -96, 20, 113, 17, 78, -111, 28, -32, -59, 85, 88, -3, -87, -85, -102, -3, 76, 75, 88, 123, -26, -36, -4, 62, 20, -39, 117, 124, -94, -39, 16, 72, -85, 105, -100, -63, 104, 65, 100, -63, -3, 73, -109, -13, -32, -85, 109, 82, -128, 50, -83, -125, 115, 92, 103, -34, -3, 43, 51, 79, 9, 6, -6, -119, -124, 31, 112, -35, 112, -104, 42, 8, 42, -22, -45, 63, 108, -71, -108, 109, -39, 83, -105, -29, -26, 105, 95, -71, 98, -55, 18, -18, -7, -126, -100, -77, 13, 81, -8, -56, -64, -103, 49, 126, 0, -91, -71, -78, -17, 34, 110, 59, 34, 60, 72, -41, -88, -7, 89, -52, -67, -64, 110, -113, 25, -73, 25, -122, 24, 116, -75, -113, -56, 12, -99, 58, -16, 64, 7, 6, -120, -72, 94, 85, -86, 95, 96, -109, 83, -26, -45, -6, -104, 2, 45, 67, -53, -114, -61, -55, -65};
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
    msg.setTimeStamp(0.5720476876820608);
    msg.setSource(5298U);
    msg.setSourceEntity(80U);
    msg.setDestination(6488U);
    msg.setDestinationEntity(182U);
    msg.req_id = 48126U;
    msg.comm_mean = 162U;
    msg.destination.assign("EAIAFQWYTXOBRVUNTGEUIOSCKCOYDPVKPOZXFLGNQGVIJHDSTWBM");
    msg.deadline = 0.406257248318597;
    msg.range = 0.6139051869079275;
    msg.data_mode = 52U;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.9327408815383554;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GLTOZQAYPSLYCQMESKLXWHFGVVLFLGOEXSLWJUDBIKWJGMXITSUTFIRMXIUTVGMIGXJAUVPW");
    const signed char tmp_msg_1[] = {108, 93, -59, 74, 103, -28, 20, -96, -72, 82, 8, -124, 21, 113, 11, 23, -111, 46, -32, -22, 33, -27};
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
    msg.setTimeStamp(0.05055880288484771);
    msg.setSource(45424U);
    msg.setSourceEntity(213U);
    msg.setDestination(34791U);
    msg.setDestinationEntity(4U);
    msg.req_id = 19857U;
    msg.status = 69U;
    msg.range = 0.7821900954007733;
    msg.info.assign("DZQSDRNDMFCVVVGMYUMBRDLWVRNROADIHZLPQIXBAWIYLAHKSIUQJKZSMOEPGQVGIUOYJXYEFNHCSPFQJQWVOVBLLCTKSTEHXRZNFPOTBEFNHPLWASKIKFQITNWIEKMTGKLTYPNQCYERSFVUWYYOJZBODALTAWJWRJAGJAOJCNXMNFNFGHWPVUXYKHSBGMRMBTZZUZGWEDS");

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
    msg.setTimeStamp(0.9162507597233697);
    msg.setSource(15556U);
    msg.setSourceEntity(186U);
    msg.setDestination(43080U);
    msg.setDestinationEntity(169U);
    msg.req_id = 12533U;
    msg.status = 113U;
    msg.range = 0.6914616075028336;
    msg.info.assign("YDWHLZRKNXDLBBDEZMEBTFSFVMUMJHOZMIBVJKB");

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
    msg.setTimeStamp(0.3432110737114028);
    msg.setSource(37011U);
    msg.setSourceEntity(118U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(26U);
    msg.req_id = 55377U;
    msg.status = 148U;
    msg.range = 0.2863657117045034;
    msg.info.assign("DNWJMSSFBOAQKPYTZMBLHEFGGZIPHJXCGFUSITZHOJGBQAHGLCJRWVOOVDFQKYEVCYYAISZXVKQDSONYYXKMYKNTVLRCZWKHNAFSUTOPWMLFUIQGXFLERGADPNUYTKD");

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
    msg.setTimeStamp(0.4400554666132055);
    msg.setSource(18092U);
    msg.setSourceEntity(54U);
    msg.setDestination(14118U);
    msg.setDestinationEntity(92U);
    msg.req_id = 55890U;
    msg.destination.assign("TWLHMCXWZLGUDJQLGJQONOBVNVCFWZVOIHIVFIJDRVFZWRRP");
    msg.timeout = 0.018814706818392923;
    msg.sms_text.assign("HGUMHWXABWHWVYGIRNCQCOHPBJJDZTDWIFEAQNZJRYJHEKBNZKEROPRFFUVKFLQGRCYMTQNLUVKTJIOXGPLZXHUSCYIEAMHMDPWXEDSVVUVCEQZTIXHTZYHDFXNATOJDULIYQSMDNOGYOZBPUIRGCXEFNJTZSWJBGYFLAAJZRWGLPRASVFCDBKTYWGKQJHPONPUGQQRDAAEZMIEQFSP");

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
    msg.setTimeStamp(0.005245705909706411);
    msg.setSource(20559U);
    msg.setSourceEntity(182U);
    msg.setDestination(116U);
    msg.setDestinationEntity(22U);
    msg.req_id = 62340U;
    msg.destination.assign("YTCBEUCJHZYCZAIVVRHBFQMZJNSELWDNNOBFHCYLPIVVJSRAX");
    msg.timeout = 0.680053462121551;
    msg.sms_text.assign("DRGAMRLIWKYIWWVDIQFEUDXXPYFVOLGLMQYTGSGOVWCPPSBTJRQNEEWDQBTSKILWARRMORFHKIBAXQVJEBTXNBHGRNKBTMYDCHKWIFHWHTFHUZJPKQPZDTNLZYRZAUOAJSMUIAMQZGEMMCKFAFHVVVIOPPXZPJQGEKLECLAIJLCTYJHXLGBFUOMFONGSDDJJYNNHJBCATLZKECSZBSFZDXYWXSWEKCCASXUNUZHO");

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
    msg.setTimeStamp(0.27767297502271404);
    msg.setSource(44813U);
    msg.setSourceEntity(98U);
    msg.setDestination(48715U);
    msg.setDestinationEntity(40U);
    msg.req_id = 3304U;
    msg.destination.assign("JYHMFBJCNKROLBYCLXHTDZWQZENFRSBOSKLUQAYOAYKGSLRWIAZWIFMJQUNMUEPCGQUKIVLQOQOIRFJWEEJYFCWVSWHMTEMYAPXVRQPPSYDZDBPIAFOCVDKSGGAXNCKZWECPKHOUNQSRAMFVLOBNGHUTLXVFYHTJHGPBATJCZWBSXNNYIHUMPALRCRTVPDVEGJRM");
    msg.timeout = 0.2822566526942223;
    msg.sms_text.assign("DPRIPQIBZMHGIDEARMNNPGXEI");

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
    msg.setTimeStamp(0.5236475895836704);
    msg.setSource(59905U);
    msg.setSourceEntity(157U);
    msg.setDestination(42230U);
    msg.setDestinationEntity(55U);
    msg.req_id = 36124U;
    msg.status = 209U;
    msg.info.assign("YJCXGHMSTVJPDDIAZQXKVRPRUQ");

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
    msg.setTimeStamp(0.3528111584162531);
    msg.setSource(20393U);
    msg.setSourceEntity(165U);
    msg.setDestination(5902U);
    msg.setDestinationEntity(214U);
    msg.req_id = 21106U;
    msg.status = 124U;
    msg.info.assign("UQRBSZBVVQZRHLMPMGVFRPWDTJOPACADEGFXZQFBBMLCDETWUDNFPLZHEXRNKHCJISDVVSGKPFCNDSOQUELJKYJQWEXTWYKZCWQAOMHKIETDALYGREAMYBEWSNBJMXHEIWKNOFYSHMSUXXFTPGJYSRLUVYGJAIKAKLUXIBGQUCKNHOIVMNHOOGYUNFALWZYHNJWTIXIKBRTCLLPVICGSDAZZNVUBYCPJCTOF");

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
    msg.setTimeStamp(0.07832786757176524);
    msg.setSource(49180U);
    msg.setSourceEntity(145U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(240U);
    msg.req_id = 29787U;
    msg.status = 207U;
    msg.info.assign("RLEGSBWJJMRKTKUZVEBWVNNTIYHU");

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
    msg.setTimeStamp(0.22484848497367094);
    msg.setSource(64327U);
    msg.setSourceEntity(185U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(70U);
    msg.state = 134U;

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
    msg.setTimeStamp(0.6415381355479599);
    msg.setSource(4190U);
    msg.setSourceEntity(216U);
    msg.setDestination(5811U);
    msg.setDestinationEntity(238U);
    msg.state = 96U;

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
    msg.setTimeStamp(0.3125136670229327);
    msg.setSource(19980U);
    msg.setSourceEntity(50U);
    msg.setDestination(14999U);
    msg.setDestinationEntity(109U);
    msg.state = 121U;

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
    msg.setTimeStamp(0.4925351729296237);
    msg.setSource(26308U);
    msg.setSourceEntity(114U);
    msg.setDestination(61183U);
    msg.setDestinationEntity(242U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.8978698564347808);
    msg.setSource(52792U);
    msg.setSourceEntity(250U);
    msg.setDestination(729U);
    msg.setDestinationEntity(27U);
    msg.state = 29U;

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
    msg.setTimeStamp(0.19518987227696838);
    msg.setSource(55433U);
    msg.setSourceEntity(86U);
    msg.setDestination(17796U);
    msg.setDestinationEntity(38U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.7010945616658643);
    msg.setSource(49079U);
    msg.setSourceEntity(0U);
    msg.setDestination(27686U);
    msg.setDestinationEntity(160U);
    msg.req_id = 42923U;
    msg.destination.assign("FGCOIGMOBNVQLRNGGZIKWXEJSTKCPBHMPMCSJQAOJLORAYXEFPRVBAZQCTTZKIYEXVYEVUNLEQNLHMKMYTWPNBDKZLXUERNUSCOVVXSCJURNUYRQIZQBKBKRFQRUHDTVSIAQGPDVZKOGEMO");
    msg.timeout = 0.4291892562683609;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 41680U;
    tmp_msg_0.status = 57U;
    tmp_msg_0.range = 0.012108042987986067;
    tmp_msg_0.info.assign("BSBGSPOBXJYJJYHHNODRAYUDBLZXMFTPJARMMGJLBUSVWLAUCMNXKIPAWKHIKIUHZVURLJXXTHUYNMRBQKPWOKNUNRYSEVNQQGQSPNGACNWQTVSZFZSVUXEWFVYCUWDDZQDNITGRVHRFFEBXVFOLSIJBTJQVXCJKGHLHOCIFZWOPZOHLWWKTRTCIFQFIMOBCACEPAMODCKTIYEJ");
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
    msg.setTimeStamp(0.962939330625743);
    msg.setSource(48279U);
    msg.setSourceEntity(252U);
    msg.setDestination(39937U);
    msg.setDestinationEntity(19U);
    msg.req_id = 54348U;
    msg.destination.assign("ODDQJRUSZKUTBKIVXEICHZHFTVBYPRJGJPXXCLRFRGLGMIOQWYRMXSJXY");
    msg.timeout = 0.7801962167638659;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 124U;
    tmp_msg_0.lat = 0.3508534611039956;
    tmp_msg_0.lon = 0.03282798518637353;
    tmp_msg_0.x = 0.6642445360215641;
    tmp_msg_0.y = 0.6533954509727605;
    tmp_msg_0.z = 0.35237944092851803;
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
    msg.setTimeStamp(0.24781416972357073);
    msg.setSource(3187U);
    msg.setSourceEntity(75U);
    msg.setDestination(39755U);
    msg.setDestinationEntity(251U);
    msg.req_id = 38449U;
    msg.destination.assign("LVJYFTROXQJWZNGFBMUGDUGSKPJCLELRHIYFWLCFUATNRVOBXENBEHTASJKDCLXSYPNMGN");
    msg.timeout = 0.7327129136605244;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.33135962656561224);
    msg.setSource(19275U);
    msg.setSourceEntity(148U);
    msg.setDestination(54102U);
    msg.setDestinationEntity(24U);
    msg.req_id = 27615U;
    msg.status = 197U;
    msg.info.assign("VASZGOSUJPARSQZEFYTEDITDBMHDLTUYQCLAVQRNDCZVIMHKWVMUPJQLZZLLFNFZIOKKJMSGUAGYQKCXBZCSQDJDVUEXQMWONXHDNHKNVOLLJJYBELGRIPNWCCHXVPPMEAQQGPRFHRFFSKJSOHRIAGTLRUFMXNWTNEXWBEUOSAOALJNOCBHYH");

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
    msg.setTimeStamp(0.034590323509482546);
    msg.setSource(22763U);
    msg.setSourceEntity(68U);
    msg.setDestination(6533U);
    msg.setDestinationEntity(41U);
    msg.req_id = 61808U;
    msg.status = 123U;
    msg.info.assign("CGKCTWWRKOAUMJIGJLFNFYUPYQJZRVLYIMZXVBDNVCVLDUOMGIHXHZPOMBZINQFPRHNLKGQUOSASSTRCHIEPVLZSVJ");

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
    msg.setTimeStamp(0.46311885680272535);
    msg.setSource(4028U);
    msg.setSourceEntity(138U);
    msg.setDestination(8216U);
    msg.setDestinationEntity(130U);
    msg.req_id = 35488U;
    msg.status = 191U;
    msg.info.assign("XKIKPFLLHEJIYWUFPECHTOEXSBXHQGDEZLWVCWHSLUNDHEQFQBLIYGFDTMKTYXRDEXRONBSOEYRNRAUYTVAQKCRBZMWSXIDRUPHIYOYSMBKTAFIKKAGTJMWTZIXCFRDYPVWAUWDQSXPCJIKRSVGCKUOCQLBEODHSALNLHNWOAOPHEJVUVQNRYEGBIQFSFDSAZGUJ");

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
    msg.setTimeStamp(0.8418920067161665);
    msg.setSource(26268U);
    msg.setSourceEntity(164U);
    msg.setDestination(1753U);
    msg.setDestinationEntity(169U);
    msg.name.assign("EXJLWPKEDMBJHKCGHLSRDUPWNCRABDPFQTIJQZJKLAXEXAAUXEVIOMUVVMCMTQSLUKAAMNPXMNFFRKCPEGDJXLOEYZODULFUMPTUQWBNVNTGAAHBYBPUTRSQCRDCGVNOBFXPTZWYJTCQPCQZDTLRYMOGYPXIZJGIBRINHNMKBQQDTUJAWXSBIYAIYUKZEKOGHOFRGVZRSZENTWOWWWFBCYKDJYGRLWFZQHCSH");
    msg.report_time = 0.3523934650621007;
    msg.medium = 87U;
    msg.lat = 0.7655964774003424;
    msg.lon = 0.15742191360182511;
    msg.depth = 0.14827266547072637;
    msg.alt = 0.7027660519175827;
    msg.sog = 0.4180325453186129;
    msg.cog = 0.3603776492157035;
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 17U;
    tmp_msg_0.plan_id = 8177U;
    tmp_msg_0.wpt_id = 70U;
    tmp_msg_0.settings_chk = 53080U;
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
    msg.setTimeStamp(0.9576028156861564);
    msg.setSource(23418U);
    msg.setSourceEntity(194U);
    msg.setDestination(22525U);
    msg.setDestinationEntity(90U);
    msg.name.assign("WKUNQACZRSBQYFXQQBBDKOCRLAGQSRDPSMLCVBMRBHVLLLJSTUAPJMXAZFABWNQDKJRTZTHGZPTAPCYUIVAEZEMWUFVUHYFBNZDGKTPHESCKCOXHOYXZHRHOKWYUJSDOM");
    msg.report_time = 0.8899923485931309;
    msg.medium = 64U;
    msg.lat = 0.15338400823550158;
    msg.lon = 0.9254042186320115;
    msg.depth = 0.7151902142023668;
    msg.alt = 0.9966850371106527;
    msg.sog = 0.05001945874289471;
    msg.cog = 0.6263214300782624;
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("CQBQCFTZKZBCWDMQRXL");
    tmp_msg_0.value = 141U;
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
    msg.setTimeStamp(0.7964787886625064);
    msg.setSource(7502U);
    msg.setSourceEntity(162U);
    msg.setDestination(58027U);
    msg.setDestinationEntity(214U);
    msg.name.assign("BWQHDSOXSGCFWCVHSPEKOPAQSAOYVUYRXVZJBKTEPOVEBRCAIRKXJGDOPLQLPZFBSFZHDDUQSHMCMZGRTYPRUBSLJXCBOICLERTCBOXOUJJKECHMIANLVCTLT");
    msg.report_time = 0.9714974886300319;
    msg.medium = 62U;
    msg.lat = 0.5590077330841402;
    msg.lon = 0.16727210355408684;
    msg.depth = 0.47498954106044056;
    msg.alt = 0.17927668234794825;
    msg.sog = 0.7771670682870668;
    msg.cog = 0.614523447608458;

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
    msg.setTimeStamp(0.665407621018279);
    msg.setSource(21825U);
    msg.setSourceEntity(58U);
    msg.setDestination(33529U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.9945424889424828);
    msg.setSource(41067U);
    msg.setSourceEntity(220U);
    msg.setDestination(37656U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.05468854963088898);
    msg.setSource(57825U);
    msg.setSourceEntity(159U);
    msg.setDestination(37887U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.5469524458526488);
    msg.setSource(36335U);
    msg.setSourceEntity(57U);
    msg.setDestination(16450U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("SUOECWUZFBZDQNRQIFFYVAJNLIAJMJWHSLVZTXGZQFJUBVYLJSHAXKKZAOBJTOQCHZCWGGFHIXMRNUJBJXNHCWAOEKRPRCVVTSUAQPLISJIYPKILFCDO");
    msg.description.assign("WYFEGIRCCPFRTZZXEVXYURMPKYODDBQKWLJCOGSEJCISDTXKWLMRHZGVFRDOJEBTYMUBKZUIXRFVWAAXHJWWAYZNJKQUHUZOHHPAYFLWXBELHTNODDLILSMXKQGNSPNUROMCPCOFCNGIGNLSJBEPJMIGHTANZGUYQDQWSSVTLNYFZATVVZN");
    msg.vnamespace.assign("CPPVOZOOVGFLTERCUDWQGNJOWEFCZWZWXTWORAUHABSSHXQFWZJEADFMGWYXNXSMVPCPJAXULGLLAUVDKJYLPBMTLKXMIVCVEKKVCBHWEXFMUQSOIADOSEMZIPZMK");
    msg.start_man_id.assign("MIKQTMZAIXFWSWMBVWKLBPJNJDWQXQAITLLCOVGFUUEJTLITSDSZERSCMJTYJFQHRAFEDWGBYRRHFAHTQQNZUNQMKLQVBEATPLIKVTISMYOAUIOSWCRJKOPCRDVBMHXOSAUGZJDBWEVFZYXYFYEZXYVDOZFGSLUNXTAQBYPUIWCECPMVHSJQUWNBOIUBOGPJMSNURNGZCHWHJKZKOPVBFZDNCHGFDDEGILELEYRGMKHXVNXPDXARTOKRLXGK");
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.11446779896722947;
    tmp_tmp_msg_0_0.lon = 0.45374768675168575;
    tmp_tmp_msg_0_0.height = 0.1129657835467256;
    tmp_tmp_msg_0_0.x = 0.43992117937002695;
    tmp_tmp_msg_0_0.y = 0.5769685056945087;
    tmp_tmp_msg_0_0.z = 0.611518061800367;
    tmp_tmp_msg_0_0.phi = 0.07107514091787015;
    tmp_tmp_msg_0_0.theta = 0.2435464647173502;
    tmp_tmp_msg_0_0.psi = 0.13735188834223055;
    tmp_tmp_msg_0_0.u = 0.4890894273914904;
    tmp_tmp_msg_0_0.v = 0.33140839639846675;
    tmp_tmp_msg_0_0.w = 0.6375916903648291;
    tmp_tmp_msg_0_0.vx = 0.5192684863971172;
    tmp_tmp_msg_0_0.vy = 0.724856366768583;
    tmp_tmp_msg_0_0.vz = 0.37618581370024895;
    tmp_tmp_msg_0_0.p = 0.6628586462350551;
    tmp_tmp_msg_0_0.q = 0.22055033705467553;
    tmp_tmp_msg_0_0.r = 0.8460777305039577;
    tmp_tmp_msg_0_0.depth = 0.7970907462845398;
    tmp_tmp_msg_0_0.alt = 0.2611592004449115;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 252U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.812875752863502);
    msg.setSource(23704U);
    msg.setSourceEntity(11U);
    msg.setDestination(22744U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("QSAVNQXUEEVSRIFFQUKHUJELLRGKYAXKTCSJQUMHATDKIZVJLGFDIOCMQPEVMYZKHJQMDCKJGZFMOXYLOCJBNLHURZTLZACTDSKOTNHWWHIPAXBJABVRWSJIPYXSSZBXBOTIUVUPDUZNNRNSGECNFYOQOOTKMFHXWJGCYPBDZXVYCPVIFMIQCZNIHGVHCPBDWEDLKUXFNLDJQYDAREQOEW");
    msg.description.assign("JCNYJXQHJWEVKZTIBMAUJOTDDZVVWNHRXGXPRJWSLFTHYGTLQZXHTZYCIRAZAIFXPWNIO");
    msg.vnamespace.assign("OAABPYNSYFATSTDRFRHPFSXHKUNSIWQSPQZJYODKOXNBYBHHFBDGIRLRPVFLMLEVALZGFAPMQELOWNFJTWUHRTGCGGMNDVNSVIJTUJDCATRLQCOETUURWOYYHWKDHGJVCIZELWCYXMXUZTJPEUMJVIVCZWDGEOMAWIATOZQDCX");
    msg.start_man_id.assign("HGQGDQPKLBCFDGEFKJCAIOACWPYQPUKAUOVXKPZULWQTTCSXHZNWCJGHRRGONTRKXNMJOFIPIUFIFKQOTRSPVTVSMASRJWRYCXZWHTSGKSITHOLSEOQNLVBWBARCJFHEPFGUKPNXMNY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YDXRLMZIPBADXSBNCRLDPYDFNZGVNMOKKAJYKITEXGALKTPTAWNIASEJATSHLUQMWOYMVJOQLFWIFZDFUHHXHWJUTWNMOUYYTXCK");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 25929U;
    tmp_tmp_msg_0_0.lat = 0.5661985548778163;
    tmp_tmp_msg_0_0.lon = 0.10674300504547607;
    tmp_tmp_msg_0_0.z = 0.5804627015248364;
    tmp_tmp_msg_0_0.z_units = 241U;
    tmp_tmp_msg_0_0.speed = 0.09105242784898615;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_tmp_msg_0_0.custom.assign("WKOEWLOVAGLTKBGQCOQKPESGDLCBV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LblRangeAcceptance tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 146U;
    tmp_tmp_msg_0_1.range = 0.7036868580166384;
    tmp_tmp_msg_0_1.acceptance = 38U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::FormationEvaluation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 149U;
    tmp_tmp_msg_0_2.op = 128U;
    tmp_tmp_msg_0_2.err_mean = 0.037768664216037195;
    tmp_tmp_msg_0_2.dist_min_abs = 0.2053312680820445;
    tmp_tmp_msg_0_2.dist_min_mean = 0.9262500898518864;
    tmp_tmp_msg_0_2.roll_rate_mean = 0.7757346409871073;
    tmp_tmp_msg_0_2.time = 0.4165695363181936;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.action = 178U;
    tmp_tmp_tmp_msg_0_2_0.lon_gain = 0.6803791037458602;
    tmp_tmp_tmp_msg_0_2_0.lat_gain = 0.8618144449794481;
    tmp_tmp_tmp_msg_0_2_0.bond_thick = 0.23916152697844695;
    tmp_tmp_tmp_msg_0_2_0.lead_gain = 0.3420706255909607;
    tmp_tmp_tmp_msg_0_2_0.deconfl_gain = 0.6063036810179071;
    tmp_tmp_tmp_msg_0_2_0.accel_switch_gain = 0.46020596826389604;
    tmp_tmp_tmp_msg_0_2_0.safe_dist = 0.9459119973876605;
    tmp_tmp_tmp_msg_0_2_0.deconflict_offset = 0.7178847756668921;
    tmp_tmp_tmp_msg_0_2_0.accel_safe_margin = 0.8318030883250639;
    tmp_tmp_tmp_msg_0_2_0.accel_lim_x = 0.6729692749122241;
    tmp_tmp_msg_0_2.controlparams.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("RAKZXUMKBANZETYWUAGGQCGYKDSWJIVHVHXKRWYFTRKSOKFEQSMGFLKPWZQIIDHKCRDYBACNJIFGMNANFJSVUTUNOFQWEGJOBFIQCEXCDPAFVRKNBHOPTREILXQNIDOHCGYCILSWDPDPZJXP");
    tmp_msg_1.dest_man.assign("NZXVVOQBIZPAWXHAE");
    tmp_msg_1.conditions.assign("BDWQYESXSUNFMCWQWZMGLCORXYDJFKUDYYYVRNLQEETBPHNOJRXGNMXSLAAQYWMZCHFQPZJVKENNUHIGNFTSXLKFHRGCRDZGHWIDA");
    IMC::ExternalNavData tmp_tmp_msg_1_0;
    IMC::EstimatedState tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.80079547565237;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.12227735365425907;
    tmp_tmp_tmp_msg_1_0_0.height = 0.12292295662149844;
    tmp_tmp_tmp_msg_1_0_0.x = 0.9954933529631048;
    tmp_tmp_tmp_msg_1_0_0.y = 0.9075413277840351;
    tmp_tmp_tmp_msg_1_0_0.z = 0.43403233546105235;
    tmp_tmp_tmp_msg_1_0_0.phi = 0.07907553857346128;
    tmp_tmp_tmp_msg_1_0_0.theta = 0.9996019924538179;
    tmp_tmp_tmp_msg_1_0_0.psi = 0.6224597297799743;
    tmp_tmp_tmp_msg_1_0_0.u = 0.7324025340050866;
    tmp_tmp_tmp_msg_1_0_0.v = 0.3611093271406447;
    tmp_tmp_tmp_msg_1_0_0.w = 0.653677902921084;
    tmp_tmp_tmp_msg_1_0_0.vx = 0.0402841490532303;
    tmp_tmp_tmp_msg_1_0_0.vy = 0.3514214256775854;
    tmp_tmp_tmp_msg_1_0_0.vz = 0.10114446702497093;
    tmp_tmp_tmp_msg_1_0_0.p = 0.5566917099515958;
    tmp_tmp_tmp_msg_1_0_0.q = 0.1789810278223466;
    tmp_tmp_tmp_msg_1_0_0.r = 0.4965155133620034;
    tmp_tmp_tmp_msg_1_0_0.depth = 0.46626868226575313;
    tmp_tmp_tmp_msg_1_0_0.alt = 0.6059879779912729;
    tmp_tmp_msg_1_0.state.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.type = 4U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::ExternalNavData tmp_msg_2;
    IMC::EstimatedState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.3677781472599372;
    tmp_tmp_msg_2_0.lon = 0.24390163316444802;
    tmp_tmp_msg_2_0.height = 0.22537728565643167;
    tmp_tmp_msg_2_0.x = 0.48999724934260447;
    tmp_tmp_msg_2_0.y = 0.17330081184147672;
    tmp_tmp_msg_2_0.z = 0.7119983372487174;
    tmp_tmp_msg_2_0.phi = 0.9597289429337673;
    tmp_tmp_msg_2_0.theta = 0.23908540229662312;
    tmp_tmp_msg_2_0.psi = 0.06947964836133791;
    tmp_tmp_msg_2_0.u = 0.288740057105186;
    tmp_tmp_msg_2_0.v = 0.10077111157630325;
    tmp_tmp_msg_2_0.w = 0.4832119698181504;
    tmp_tmp_msg_2_0.vx = 0.014204361050618064;
    tmp_tmp_msg_2_0.vy = 0.021615987454741137;
    tmp_tmp_msg_2_0.vz = 0.29645087550052296;
    tmp_tmp_msg_2_0.p = 0.7140888678925582;
    tmp_tmp_msg_2_0.q = 0.6362183867189279;
    tmp_tmp_msg_2_0.r = 0.04570932269018191;
    tmp_tmp_msg_2_0.depth = 0.7224184042216139;
    tmp_tmp_msg_2_0.alt = 0.23705156123520943;
    tmp_msg_2.state.set(tmp_tmp_msg_2_0);
    tmp_msg_2.type = 20U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.911331701324465);
    msg.setSource(2380U);
    msg.setSourceEntity(94U);
    msg.setDestination(20595U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("GCOXWFLKABACREIVWIKVUTNXGUQFNNUUUCNQTVEUFVLQEGRZBLAQMDAWBBBGHXHTKATBEGFDBMLLUPPVMEYFGIEYNZBWCFLWACDSJJCHXCPTSZNKDDEXMLWKARTCUJKQMYQWPTJJOSJPVEMYQSAMYOHAZGNEZDEHQIWJFONZSV");
    msg.description.assign("XWNIWRTJPIOQJAIDPKPBEFYCLRGOVYXAKTHCGWV");
    msg.vnamespace.assign("SEOLWGFTEVDEYFJWXCSBIHQYOAKEGYCWHPBACVXKQUREUSRNBCAHQNXMXTYIQHOJKFCRIFOTHZMAXGAPJIBPLISSDAJHDFZMZMB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OSBTHUZDCQQUHSODEIKPHQMXPPEMFIAOALTNNMWXFEDSMJLLWFHFRJNC");
    tmp_msg_0.value.assign("MKONDRAVIABSGBRPTEBAHBAMRDMLNFPSOJIZZUGUWZUQEJHFXWUKM");
    tmp_msg_0.type = 207U;
    tmp_msg_0.access = 45U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TGIRYQZAZMTZCIKHOAIUCWYMHTRUTCZJAGFFANTELSFQYLQZYBRGCBUMAQSGDZAIUJDYENWXOQKFIZITEHUXQGSZTGVIJIWSDYCFBXD");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LGYILAKAQWUKTBXOYSDDCKSLTNGNHFIDXJQPIVBJZGPKCMKUASDIAJGTCYTGXVWTBUGEUKKRMEIZXQQJVMWYUQBHFZIRNWIPRIDZCEYAEZJNOKMBCCHVPLATWMPAVRQHDVWXEZEEFMORNXSTDWYNPKCLEARRFIFWGUZEGPYGHXNUSMUNXFPSQMDROPCTGVJLVKZOFTFNADMJCVWDJYBYLHJBUPJSYV");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 52703U;
    tmp_tmp_msg_1_0.lat = 0.15930831624077346;
    tmp_tmp_msg_1_0.lon = 0.7902268758592963;
    tmp_tmp_msg_1_0.z = 0.14587577437224042;
    tmp_tmp_msg_1_0.z_units = 239U;
    tmp_tmp_msg_1_0.speed = 0.35529561439083757;
    tmp_tmp_msg_1_0.speed_units = 162U;
    tmp_tmp_msg_1_0.duration = 7168U;
    tmp_tmp_msg_1_0.radius = 0.8776501730064317;
    tmp_tmp_msg_1_0.flags = 227U;
    tmp_tmp_msg_1_0.custom.assign("FNDMZWTCQSITGEOQQWYCHDHZWTKGSICHEKFXXEIHXXJZTDMQXJPLPZJHETSWLGMCQIRUYMASAYABWPRERVEASCHGYLYUJXPKWNLRBVSOXLFDYQBRMHFIHVVBGIQECLAODWJEOGYUYVVKZSUUZJADUDZDIHEOTLEOWPFK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("XGFAKZKZBTJLKPOHHRXVJOJYMZBKWGVKJQKRMYDCGWKLIUAEQPLICXHUHMYGLGHKEOXBOCMXVRUVQLTVWWK");
    tmp_msg_2.dest_man.assign("IWSSFRCFUPPKTTBRWYOOMHISXNRL");
    tmp_msg_2.conditions.assign("DFZXRHONLLCUMVKYHDOEUNAJYZPUXHMOEMKFSBHBZQSXUQMTOGNRERZPDAVLMEAJORKDBHIDWIHVSIFCVXHTIZKWHBMJIZYLYTQZRCMMPNFESDBUPNDU");
    IMC::EulerAngles tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.time = 0.7672588449048983;
    tmp_tmp_msg_2_0.phi = 0.4899345669864952;
    tmp_tmp_msg_2_0.theta = 0.3599361768244226;
    tmp_tmp_msg_2_0.psi = 0.6321800504818718;
    tmp_tmp_msg_2_0.psi_magnetic = 0.7803576364358368;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::ReplayControl tmp_msg_3;
    tmp_msg_3.op = 148U;
    tmp_msg_3.file.assign("DHTUUQYZGAXIONHDPIFFVYLLEVICRQXUXOPPLWUCVSHOAOXWWIGCWSJBSIKVAFMDEHTLDXQJDRQWALUOHFJMBXQNLTFHZZELPLNPYRXCIWGNKVVFHA");
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
    msg.setTimeStamp(0.00853106563610817);
    msg.setSource(31564U);
    msg.setSourceEntity(150U);
    msg.setDestination(20838U);
    msg.setDestinationEntity(184U);
    msg.maneuver_id.assign("KUVBHGYQNGJPNMCAHDLDLFHXBKANOORQCLXMNELNZQIYFNVLVTWLYZEQCPBJXKWVJSQKUULROOWHAGAFTNSCPKPZJU");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.24134440953442748;
    tmp_msg_0.lat = 0.39702021857486114;
    tmp_msg_0.lon = 0.2500979711340776;
    tmp_msg_0.z = 0.2686647100710514;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.travel_z = 0.42431302407778826;
    tmp_msg_0.travel_z_units = 101U;
    tmp_msg_0.delayed = 97U;
    msg.data.set(tmp_msg_0);
    IMC::CoverArea tmp_msg_1;
    tmp_msg_1.lat = 0.1595541575177014;
    tmp_msg_1.lon = 0.060687727161677585;
    tmp_msg_1.z = 0.5191181794115314;
    tmp_msg_1.z_units = 92U;
    tmp_msg_1.speed = 0.8718839047434305;
    tmp_msg_1.speed_units = 214U;
    tmp_msg_1.custom.assign("HCFVTOEPUKDVQULBSFJLYROHYFXKHHVGYKEEEZQUO");
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
    msg.setTimeStamp(0.17311891678180535);
    msg.setSource(19447U);
    msg.setSourceEntity(18U);
    msg.setDestination(43596U);
    msg.setDestinationEntity(226U);
    msg.maneuver_id.assign("KEWIUPERQXFRULUQARUHPEFMOHOZTXSKBDZBUZGAEWHATMMLTMDKFITOAJJVIIRYCPXMNSQSXLPKYDKPOYVNLNHIKIABMDARKEPJCVOYYCBIGOLQSKLBNGNJDGKFYVJUHZJWQEOROMLAREVJBGCUNNUIDTVGMXAJZOFPPRLKVQFAUHAWMBUDH");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 10034U;
    tmp_msg_0.lat = 0.2592377773118343;
    tmp_msg_0.lon = 0.9706367053008187;
    tmp_msg_0.z = 0.37562015659210324;
    tmp_msg_0.z_units = 8U;
    tmp_msg_0.duration = 41055U;
    tmp_msg_0.speed = 0.8342833387283348;
    tmp_msg_0.speed_units = 252U;
    tmp_msg_0.type = 13U;
    tmp_msg_0.radius = 0.03263348761164908;
    tmp_msg_0.length = 0.13437870034259813;
    tmp_msg_0.bearing = 0.8803427987134036;
    tmp_msg_0.direction = 19U;
    tmp_msg_0.custom.assign("GQGGRWIMXYYQPBOICODKBRPHUPBAGASSNILXLPZKEWHROFIAFSCKNMOLQDJTBAEHTFXZCDATYGWVEYIVFXSXBDMVTAPPAUDBFMRUVJSJEGVSFBKVJTVAOKDANYRHUMHMCOUDJVQUOKLZRNLMNZMOIWQLJLXCTONTTJNVUNURMHFSNRWZZEQYQFBSQJIVWPNXYRLEYXKBFWBELQHHZJXHZAPKDHCOEPYSLZIRQU");
    msg.data.set(tmp_msg_0);
    IMC::ArmingState tmp_msg_1;
    tmp_msg_1.state = 61U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FollowReference tmp_msg_2;
    tmp_msg_2.control_src = 34184U;
    tmp_msg_2.control_ent = 190U;
    tmp_msg_2.timeout = 0.5583493015914885;
    tmp_msg_2.loiter_radius = 0.5905814598366989;
    tmp_msg_2.altitude_interval = 0.8328121368214847;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3799382609634596);
    msg.setSource(33484U);
    msg.setSourceEntity(156U);
    msg.setDestination(64046U);
    msg.setDestinationEntity(117U);
    msg.maneuver_id.assign("BRCRDULXKAFHXIZMACKMZHUUBRWMDDHEACUIORELEPOJHFRWYHBHIVZDICIQQGHLKHWKSR");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 18264U;
    tmp_msg_0.custom.assign("YONKQQYGMQZIDHVMOPSFOULTGDTYVWVBCVHBBCVAENBLWJGJDITOJREZHQNRSXPULKBJEKKGHCTUFNUYJLLMSDNPTAUCTZIBAFFCRJWQYXMSMUAXKHEGXZZZWPFRYNSXIFVCWMYDOQOEAKCSJLDWWRMFTILZXPITZHRDXVR");
    msg.data.set(tmp_msg_0);
    IMC::LblRangeAcceptance tmp_msg_1;
    tmp_msg_1.id = 76U;
    tmp_msg_1.range = 0.6636539736661495;
    tmp_msg_1.acceptance = 36U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::HistoricTelemetry tmp_msg_2;
    tmp_msg_2.altitude = 0.2695109448353278;
    tmp_msg_2.roll = 36114U;
    tmp_msg_2.pitch = 12425U;
    tmp_msg_2.yaw = 33047U;
    tmp_msg_2.speed = 1352;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3571090800143314);
    msg.setSource(37601U);
    msg.setSourceEntity(138U);
    msg.setDestination(59916U);
    msg.setDestinationEntity(212U);
    msg.source_man.assign("EEEQKQIHWDHKYBZJSJWRAMSLKEGDNFDVFFYUXJORPGSRGKSDXVXCUMPIUCVPMUYILUTTHYGWMTTTZAPYCRYNPSOKAPJYSYVFEMJLXOMLBKXPKDOTEYZBWCEGFFXZNBGPGIEYQQTLTKJALSHAHRCSDICPFVVAZQRUJRZFRNRMLXVLQHDOOUMMTZPZBWHCXCDGJNUINZGHQXEIAV");
    msg.dest_man.assign("KVGHEDTADZESLCRPNMFOKSXSRNWBYAWFBLZNFCFEMQUOGTAMIXUTOPIMUJMDDEBLWWTQIFOYFISHBGMHEGITZOPHGWXTUHRCVVHNXCDRPCBVKHPQUZFBXZKBGAAJSELXIVWOFCHMQTCUEJNTRMMVQJIBGHDEDAGZVWWZUWRFXASAQHQSPLXTZSYYKDCBKYYLLNWLSARAKJOLXYQSRJMEDFUOPXPRJNCZIITNOUOVGULJBKINKKE");
    msg.conditions.assign("BDJTXQNSKENUZMCEXNLWPKVYBDITNFEAJJEGCDJVSICPZTUEYXSDATTNJVKDFRCFQGXXLFSOEOEHAMQFOYCRKINYUBSAOLLRBQSTYFHTMIZDRWJHCVRZLMRIUUHBJLTZQWWSAVLAYHBWAPZGVPBGDQ");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 57016U;
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
    msg.setTimeStamp(0.7715320305352797);
    msg.setSource(59724U);
    msg.setSourceEntity(151U);
    msg.setDestination(26961U);
    msg.setDestinationEntity(73U);
    msg.source_man.assign("VPECPYDUHJTFMKJQJAHCILNTYZGSBFJ");
    msg.dest_man.assign("UKYONTFYMZVVPOCCMALFTAHYXUKZSQGKEVILSEJHFUVQHZJPQFLCEAKBAGYZJYIGLWDYMPQYCQPHSISIKSFCHUADVEJGMXCJIVIDWNUUGQTKLOYJRMEXMZXCAGUCEDBCRSMIMNBWDKJTKODEFNXUIHTWRCEBFVWNFBWDRPWZXSHDEJWABXWQZUZTPPMKOHZ");
    msg.conditions.assign("XALIZHYUSKZQTNASLKUESGMZLFYGRGTAMXJOIIFCBDXRNXKUWZXOYZCMNEPWMHANBYTVLFWRICIPCFMLBLKRNDSFYJSPCRRBKCAKWFSDTOHTXGWZAPOWEFVOXJCHMHVOHCPZEULQGKJGWDDLQLIEYEBBBWPHMFXZSDJGOQRNMVJXKJUBTUVQAVIJBTNYEEOPJVGWGPQQXFFUH");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 57322U;
    tmp_msg_0.lat = 0.11572505192751914;
    tmp_msg_0.lon = 0.3293195249640344;
    tmp_msg_0.z = 0.3636247541381946;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.speed = 0.48072714709004905;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.bearing = 0.21416420188687524;
    tmp_msg_0.cross_angle = 0.3338072081325184;
    tmp_msg_0.width = 0.9912635727719248;
    tmp_msg_0.length = 0.6010083533313035;
    tmp_msg_0.hstep = 0.25676657925657564;
    tmp_msg_0.coff = 208U;
    tmp_msg_0.alternation = 44U;
    tmp_msg_0.flags = 209U;
    tmp_msg_0.custom.assign("LZUPQRYUMHQGQSQFWVKTXRNOTTYBZGNGADBYHFVSRDOUGBWINZCXAIBPICSBEREUGIAWOZTELFPJVPXFAYCOJGDEAVZPHIHLTFGLSCYDHFUKXUYGKHECFCKTLNXCSCQEHIJKLEKDJLONMGBMQCWWOATHYVUDPSXXYSKIASMDDJPHEZBMSEPUSTIVNOQVRXFOFLWTNVFAPZBVMAZ");
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
    msg.setTimeStamp(0.8191195044710337);
    msg.setSource(28598U);
    msg.setSourceEntity(30U);
    msg.setDestination(33381U);
    msg.setDestinationEntity(191U);
    msg.source_man.assign("XLAUBZCKNGOBIXVENFRLJUVNJBRRVBOKJYQXZSQ");
    msg.dest_man.assign("XCQYUFLUDHDDQXQZFKIIWMTMGOKSGVHSNMLJAWXWZZINLKYKOJBAGH");
    msg.conditions.assign("YRRQQVHNAWQODKJMWHEULJGLCEOEDRKYVKHSFRIZOCDPLPBSAXXFONFZTVABAGEPLICTMYWYZZOWLUPGKPEVNBFCTWWHQXJLTUKMXYJVEOKUCGUDUFKCANDUHQGERUUFTYIMXKXJYQCCSSRDSMBAZLJFVNVWFZATHFIJDUHIRHFDXGIOKVWONRRLTBINWYHLOGMGVBIS");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.05246170575673581;
    tmp_msg_0.speed_units = 221U;
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
    msg.setTimeStamp(0.4532739478481713);
    msg.setSource(13606U);
    msg.setSourceEntity(132U);
    msg.setDestination(30690U);
    msg.setDestinationEntity(113U);
    msg.command = 59U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HBXDPBQQSLWIPFZFRHK");
    tmp_msg_0.description.assign("WBKBCFCHWHBMJPNNFLTWRAOGSQZAQVEAWFCIZHRBNOOEITSVNZOLHXUJPQKMMIXPEXYBESVGKPQZXOQCWWAJLSFQZRTFRQECIREPHNHLMSMNVJORIABDWFJCXLZPUBXZVVADLUDGIRLDCIKLTZWSW");
    tmp_msg_0.vnamespace.assign("AXHAWIVFBTWEUAMDZTOPLDDSEBJMNMOXNHENLJYDDHAYPCMRXJRMIMQTOCRJCXTGPUREVZFBCW");
    tmp_msg_0.start_man_id.assign("QBRUXKQRHRAVIXKCJJYMCBVHCRZSVISFIJBAXUHEYKUEERMNBOOEJVQAWRCOV");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SYCPZMEIMCDABKCZRJPKAQTOYYWSULZMQCSCUJJFQCXWVSLBIVDFPFINRRDRAFOFATJXTIZFJQMFZBSJMMTKWLKMEGBMOLOTNOVRUHNSWWGXXNEYFGXWUPWBKBQLYHVUSWZJDYAZJWBQEEUETDSRLOXDYNRXPVVSPARETHQWHYVCTYZIPOTAMHIMYZDGIHQJHIHNLHRVKZXEPQGFVLCRPCNAGU");
    tmp_tmp_msg_0_0.dest_man.assign("FMAKOBGDFTPAYIIGMWRLMXZSLDORFQVTJXUJKCMZCYQTUNITVXOPJAMXLQKDFNBBPYWQZVOBWPRURLCZWSITODYFWDLETIVUPMOSLASJKCEXKEUO");
    tmp_tmp_msg_0_0.conditions.assign("RQTBFIOHLQMMJFSEZGQDWGISETCAIHXEPZTMUABELTEFCRDPKFPABVWCUHUCXKGMARYODQVOMJNDWQQISXKTKTQFVULVYENDEKQXBMHQVNBEFSRCXWYJIHBIBVLCSZUODVHDFYLTZDNUGHGRJNRNUKIKXOJTEUNWDJNPCALRLHWTZWYDLKOSGXXYJPVPPPSC");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6230253601451351);
    msg.setSource(20161U);
    msg.setSourceEntity(218U);
    msg.setDestination(15957U);
    msg.setDestinationEntity(204U);
    msg.command = 172U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JWPSGKWQRKRWIRBDLGQVCPYFJABSQFPGUTDLDMGV");
    tmp_msg_0.description.assign("SXDWTGYURMBVTIRLCXEGNMRMXSOJYFCMGVPFVMWCLXMTNQBIHCUNVKISQATLQSZJJWUIHPQOQZUPREHGHCFLKXHBZMHXZZWOJRFEVYBIDMYTWKPKQRHDAOEWIFBXGXOAJYYQVMYJFQRQZFGAFYETVNOLWUSLTPDHNDSNNIUAYLVSRDDJ");
    tmp_msg_0.vnamespace.assign("TLRVFNTLMLQX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FSLIIVNHONXBELKEUYPAMGQCLSBCNKDKHNUXYQWVMKEIRZVTYOYRSURXBKEOTZXZIHTGWKGUWEXJLJJBDATQZEUNCSKCF");
    tmp_tmp_msg_0_0.value.assign("TGXEYZJUDHZSUFPTLLRITGJWJLCXQCKFSXYWVZQMSYBXTHLEIPMVEFBBVKBAELYQCINNHHMLYRFNXNIWPAUGDNJEZGRMEIFRKQOKEKRWDBUFQVFIZFRMRXPAMGRDAMSPZBDFQUZKWOZUHSCVLLCCYBITLEHQXAXTZQAXPNPBJFPAWZGVHOONBGWBHSXWCWYCSOJUAKJQMDLOOC");
    tmp_tmp_msg_0_0.type = 91U;
    tmp_tmp_msg_0_0.access = 188U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OPPDMNCZBHVFNIASBLVVMJHJYWXKTYQHMTWUJRPJIPHRBSGYDLFFKLZJQIOIWXQARFDNFIINJSIGGVYZTSKDVCOUZVQOPGPWBBMBXBUDMKSFCSMXXETKLQOVUUPRDKNFWDZMTQCREIFBEOQATBZQXACCWCVPR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EVEYJAZCIKJBGURYNXZRRKJMNLJHXNYSWEPZUFBJWODPQWTRROFVUKIMHUMQSQBMOITYXCLYLRLOTAZDISTCADLCTKPCXNVVBZQPHKHFYYWZDFRNGFXGMIZVOMPXKRANP");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.target.assign("LPIXNBIJHMWVWCPFFDJVLUJITYMJFKCIBUMOOWWGZYTUCVLZXANXUIPAKNCYUDQGFEIBLRRPXQQVDEOMVBMEGWNSIKXYUW");
    tmp_tmp_tmp_msg_0_1_0.max_speed = 0.5514672182388188;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 167U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9644816895387165;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.05653140209797036;
    tmp_tmp_tmp_msg_0_1_0.z = 0.45070338383223585;
    tmp_tmp_tmp_msg_0_1_0.z_units = 79U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SZEYTEPNWCWXWHPLPXMNZSVGQSCFVDZXLALBLQMDNRNILQQGEJOYOAGPKIALMAGSSCTIJOKDDUOFNDIZHOONARTWPVWJYDJNBRFYBUJZVAGLPUTBCERULRHIJEPSFQSQDDMEPEKMAZGCXBKVLCGSFQIUUORXYPFEIBIHXATVNBKBRKJHWSZRYBCCQHMROUHKYVFZFIVIKZJBPRVZHJGGXTOKUKHS");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DataSanity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.sane = 72U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::CoverArea tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.9136081296474337;
    tmp_tmp_msg_0_2.lon = 0.6136351439616015;
    tmp_tmp_msg_0_2.z = 0.6110101887010081;
    tmp_tmp_msg_0_2.z_units = 95U;
    tmp_tmp_msg_0_2.speed = 0.1967060490006215;
    tmp_tmp_msg_0_2.speed_units = 27U;
    tmp_tmp_msg_0_2.custom.assign("PLQRFVUFSWADOIQADJOYAQUCCAYSKGNLQJZDHFONHEANRIYDZJPZTUXCUCHVNNGQVAYRINNVBHFANFYKRXVCX");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.3461139814158246);
    msg.setSource(10041U);
    msg.setSourceEntity(138U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(249U);
    msg.command = 121U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FKBIVAXLYKRWBTEHITYLYNIBPRJCZOALOETZSOGDMNTFHYXDIDMVVLGJBERLCERQMAUZRZZKEVPWSDGMAQJWRNLMOGHNSQESICQXSQRGKKWEQCUZIFJWMRPXFTUAGOIHZMPNCWJMKMHJYSFEKHTBLYWCVUXOTVHOUIWXCNPIWQQFZVOHUUUBXORNSJDDZPHXQ");
    tmp_msg_0.description.assign("ERHPJPUMNQNECZAYVTHUWXZHGTZGCSPXISQIONKOXVDLTJGSPTAGUSGKITUGAFOYBRKESWSABBWJOOTMINDMBCBLJMRMDSUQNLVRTAUCDCEVBTKYWPOWRVPFQDZCVQYKFEXUAQXLEHNIXBZDLXLRFPYMVEBGZTHFZIHPIQMMWDPSPNBLAXQWLUSYZRRFMOMJSYONUVWGI");
    tmp_msg_0.vnamespace.assign("TKPKGDQVUPMWRDCUDFPXKVBYMXVGDBFAYUCYCAFLYIDFMOMSBJTYZDZKNOELEOCMQQBITPRKZGWASWTJXJTVILKTZANGCLQJOXCKXILYKJWWSOSBLVOZELIBWPHINPHEUNSYNRHJHGHSJOMNIYEYBWVJODSUIIZAASUTHXOYRF");
    tmp_msg_0.start_man_id.assign("EBYNRLTJDWYHFRENQSLIRQMSABXNLHHUUDXZCVZFLAJTPGOZJIYTEZNTJELEOPFOCVNXRUQXWBMKZLSWMIFMYH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("OMAHGMDMMRFHSRE");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4227715185166667;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.014776693837768695;
    tmp_tmp_tmp_msg_0_0_0.z = 0.02535427737327034;
    tmp_tmp_tmp_msg_0_0_0.z_units = 90U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8739541952405091;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 190U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.6465198669108135;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.025736489948159136;
    tmp_tmp_tmp_msg_0_0_0.width = 0.39632833659197597;
    tmp_tmp_tmp_msg_0_0_0.length = 0.4839289269366768;
    tmp_tmp_tmp_msg_0_0_0.coff = 147U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.41162591882524624;
    tmp_tmp_tmp_msg_0_0_0.range = 50490U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 201U;
    tmp_tmp_tmp_msg_0_0_0.flags = 196U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YQGUVTFANVDDORBDCUVWCJAXYSJMATIJATREYKCZCBBIAPYSSOKVQLRZVDVKHMYDAS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MSFKROWNAUERCSFZLNCVHAYVAPYBOPNUSMWHMLPHIXPYVFGTKXFDNJAFWLKUDKREZWUULITWGQOGYGGQIHOIVEESOGEDRUYOHARSQPQPGQSNZLRBXDUWUBQDYDPDIJIEPSTPLLEZXZFWKHZMECMFXAAQTNJXJUZDRIBGINGBBCTFYBCCCIA");
    tmp_tmp_msg_0_1.dest_man.assign("WGOSBUHKORGIEZMLJEIOJKVUQAXJVCAHVZNITVYQIMZQDTJWUPNOALBNHKXMEHJPSCYZYOBBULUJASFTMIWEDWLTSDGWLXHMJNZFQFRCBOQIDRVTZSZZLQWSRCNNBCRIUPPPEIPAVBMWHKOXAYZUOSNJZGTKEIIMUHAQFTEGEXSTYWCNXRPERYTQCFAXXUGDRXGGDADBHGJOXNFWD");
    tmp_tmp_msg_0_1.conditions.assign("PMCIOOWFSIZUGFQEJBBCJPKNEUMKYQRLRUMNLHEKXCWYTJRVTNYWJSUNTYMPGGBOUMFITQDZSRPQZNBIBJCHPYYGSOUDIAQTRAORIPTRXNIFGDORVCFYLVXEIJPBEOUWZJDV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.2378267636054211);
    msg.setSource(29616U);
    msg.setSourceEntity(242U);
    msg.setDestination(63566U);
    msg.setDestinationEntity(90U);
    msg.state = 137U;
    msg.plan_id.assign("ACAYMXNNBYRUXURFUVHOCVCSVYYGUHIKNWOYLKPUSUJGMUSEAWWYWKFEVRLJMQNDHKSZIJZOTFUAQTDLETQOBJPQEKSDTEBITJJGICFXDBDGUNOXXLQTFOVEKCWTKCGDBDIONKWJCLPCXVHZWQMXYVMSBRTLFHPIOKBDXUR");
    msg.comm_level = 166U;

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
    msg.setTimeStamp(0.39169182260838775);
    msg.setSource(40081U);
    msg.setSourceEntity(97U);
    msg.setDestination(20175U);
    msg.setDestinationEntity(149U);
    msg.state = 153U;
    msg.plan_id.assign("VXQWRFJJSABIDTLSCRUWZCYYSMRMMLOWLRGEYWECJLNIUJJIJXAGHAZUQKUBTZFBNSFTQYWNDPYRGGIYZCESYKPE");
    msg.comm_level = 61U;

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
    msg.setTimeStamp(0.3872104532976217);
    msg.setSource(39370U);
    msg.setSourceEntity(105U);
    msg.setDestination(64038U);
    msg.setDestinationEntity(248U);
    msg.state = 82U;
    msg.plan_id.assign("VNSEIEGLOHDWVSKYFRCYNAQVGMYIANJQAHQPPFPTIACDOSOGEFTJHZULZMBJFHIRSXWVVKSWUGHLZIYDLJIVFWOKMYEXXBHDCXINPSLXXXODJAWREJKHDWFGKSARBENZRYRWLMOHBZAAZUXBAMDSVPTKPIMGLYMFQTCLMZSCDQCRVNKIPUXBQKOGZEYWCRCUTTLUXEGBOPOIUWCWKS");
    msg.comm_level = 142U;

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
    msg.setTimeStamp(0.5547874499362064);
    msg.setSource(44749U);
    msg.setSourceEntity(60U);
    msg.setDestination(57915U);
    msg.setDestinationEntity(15U);
    msg.type = 173U;
    msg.op = 65U;
    msg.request_id = 54765U;
    msg.plan_id.assign("GWPALQTXRZPWHACJROZFFMSPLMZXFICDKIWNQAOPSNVJHWBVNXRMYFREFCSTDYFKQVCHIQLMKNIVWIDYYAULJWUTOSQVQHHNSWNWQTAICKBUDLLPGTREJFECEUSMKXNU");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 209U;
    tmp_msg_0.value = 0.84236596310626;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IBDZTDLPYQUSZJNMZRMUNCNAARWBXXWDXPKEJCIBLLAIEDSQRRRSLFZISHYJAUMWGKVHUEFYGBMFQBCUXZIKIWVYTKHOPCABGRPATNDYGBFYKFCCYNPFEXIGUOOEPOQJFJEJSAOVOKANRLXHPWSQLJKCQIDROKVVVUYELDYDYWPQXQPZWGRGHPVTCHQCEBCSTOTVNNUJIMAGSOLLJHDV");

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
    msg.setTimeStamp(0.14629176852027914);
    msg.setSource(32013U);
    msg.setSourceEntity(86U);
    msg.setDestination(61812U);
    msg.setDestinationEntity(139U);
    msg.type = 246U;
    msg.op = 85U;
    msg.request_id = 16453U;
    msg.plan_id.assign("MWOUCDZZVOYBMDKNWVFWXFYLRAMXJFKYPDKTFOGTRZQCPYFYCJINFQPASOTSNUNJNQKMUIRZGCXKGCSHQKZTQWBYIFFZXDOZPAELVBHTQGIJEEYLLHBDARSGJLXJQZOWIBGFSCPGDEKUWLDACEMVSVJOVLUJTAWXGRETJWSNSORTZMBWIXTVYQHMMHSHXKNAXNINIIRPRBLUIMUPTUAOYPORVEBQCBPELJHC");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 253U;
    tmp_msg_0.value = 0.6311077912391485;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SVPPFMKBQZA");

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
    msg.setTimeStamp(0.0812341138403685);
    msg.setSource(63943U);
    msg.setSourceEntity(183U);
    msg.setDestination(30850U);
    msg.setDestinationEntity(126U);
    msg.type = 82U;
    msg.op = 176U;
    msg.request_id = 50439U;
    msg.plan_id.assign("REBFRVVIWIFCSWYAAWEUZUXZJYJIOGQKPOOCBMQAMFSCJAZNVOSTQUNFNGMUTDFQEXPDEEZRKZWGDXSOKWXFDDHFJVKHKPHADGHGAPSAAJPMQGTCTERXCYBREASGDNIDHBJHIMWITFHJFELPUZMDKRQLIBVPUOPTFKBWEXGWSECXIHAYRYNW");
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 51507U;
    tmp_msg_0.destination.assign("XRIRYKSBFSPAWZJKLYVTZWBRAMIXTEBXNODUTVCUAFLLKHMNNICQQOVTZORYOENJCFGYPDNILHAAWLKQGJXQTBMFHVEEAQBSSUWZRNLKAEDXHTSSUNGIEFPMPDMKKOHDTUQNHHYRWVCIDLGWFVYNZICSZJJJUJEXZMFMDHPBRFNAIEDVOOCTOBUUDLDWBCEYKJ");
    tmp_msg_0.timeout = 0.19563416304744174;
    tmp_msg_0.range = 0.5805311651737277;
    tmp_msg_0.type = 86U;
    IMC::PlanDBInformation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("MPMONCJDJRYFJNDYZNKAZPYBWTIZIKQDCFXPQUGCLKXTLHYTXHUSRDYJ");
    tmp_tmp_msg_0_0.plan_size = 39193U;
    tmp_tmp_msg_0_0.change_time = 0.6304478589865612;
    tmp_tmp_msg_0_0.change_sid = 16517U;
    tmp_tmp_msg_0_0.change_sname.assign("NJWZTEBWWGGUYSXDVFMMFZQCJERZLHGHNOEKFUSNOSJGPRPZGQYVYAFYKHTXZFRBMIIIHSSHLAK");
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {118, -42, -74, 122, -46, 61, 124, 101, -18, -95, -97, -14, 36, 111, -7, 19, -19, -39, 45, 117, -16, 112, -98, -96, -113, -124, -1, -121, -11, -60, 28, -66, 103, -26, 106, -69, -40, 105, 32, -127, -59, 58, 85, -15, -54, 122, 14, -24, -89, 60, -18, -13, 86, -91, 26, -24, -25, -67, -123, -75, -10, 40, 0, -58, -8, 14, -122, 61, -53, -65, 34, 36, 33, -51, 104, 10, 66, 41, 29, 9, 57, 125, -113, 71, 109, 59, -46, -39, 9, 55, 26, 72, 34, 9, -79, 66, -39, 52, 24, -2, -44, 50, 43, 27, 124, 77, -36, -106};
    tmp_tmp_msg_0_0.md5.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JQQDJVBXSTNUJUEALMOOITSSCQMBGEGFLMYOYJVRIXOYQKESYULUCWUVLARBICGQAGODNZCLZXQBQBIZMFSHAZMLNCJDVWGNZHTPSESEMTDOLTDFTAQEDGQANSENRUGIGOEUYPTMYI");

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
    msg.setTimeStamp(0.2287564270224527);
    msg.setSource(29489U);
    msg.setSourceEntity(106U);
    msg.setDestination(33353U);
    msg.setDestinationEntity(44U);
    msg.plan_count = 9763U;
    msg.plan_size = 2140184230U;
    msg.change_time = 0.2258677954419025;
    msg.change_sid = 14093U;
    msg.change_sname.assign("SEMCMDTYAA");
    const signed char tmp_msg_0[] = {-64, 57, 101, -79, -9, 19, -18, 51, -109, -24, -125, -111, 47, -78, -16, 89, -33, -81, 116, -1};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BNXXUEGSLRWUKNNJUFCPSTJXXLMZXVWNUDUBHJWOTAAFRTHVPZVQNZYJAVDKIAWOWJJMYUMCFIOBQSZASCAVGZIJOYVHSEYPIIIDPJTFYFBUTBMHZFRMTYEYENACBNRARPUKPKGPQCLSWLVC");
    tmp_msg_1.plan_size = 1981U;
    tmp_msg_1.change_time = 0.4466771405543343;
    tmp_msg_1.change_sid = 5008U;
    tmp_msg_1.change_sname.assign("VDMKZTXWUN");
    const signed char tmp_tmp_msg_1_0[] = {-4, 30, -69, 72, 74, -104, -13, 27, 29, -66, 118, 49, -85, 116, 63, 17, -49, -42, 16, -40, -85, -68, -127, 123, 126, 121, 41, -19, 77, -111, -46, 64, 13, -63, -65, -59, -59, -16, -89, -60, 99, -14, 100, 97, 39, 13, 85, 114, -62, -17, 33, -79, 85, -15, -121, 14, -20, 58, -107, 111, -48, -65, -1, 6, 82, -96, 74, 58, -67, 93};
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
    msg.setTimeStamp(0.15027503563450306);
    msg.setSource(34096U);
    msg.setSourceEntity(85U);
    msg.setDestination(55650U);
    msg.setDestinationEntity(95U);
    msg.plan_count = 14736U;
    msg.plan_size = 3415742590U;
    msg.change_time = 0.007135217862106691;
    msg.change_sid = 43147U;
    msg.change_sname.assign("AHNEVRDAOJDOVHSCHAQQWPLKMTZBMDPXVSMBDRHFOQRNXVTVTUCLZZZUZYOTFTJJRWUUBXKIHYZGQPNYLDFXLLFIKZAAXW");
    const signed char tmp_msg_0[] = {41, 13, 106, -35, 3, 124, -36, -59, -61, 106, -103, -80, -5, -50, 32, 99, 15, -35, -37, -94, -9, 67, -5, 15, 102, 17, 61, 100, 123, 77, 50, -128, 62, -16};
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
    msg.setTimeStamp(0.8628580460408289);
    msg.setSource(42452U);
    msg.setSourceEntity(206U);
    msg.setDestination(1659U);
    msg.setDestinationEntity(4U);
    msg.plan_count = 58051U;
    msg.plan_size = 1359461954U;
    msg.change_time = 0.9788162442907418;
    msg.change_sid = 34607U;
    msg.change_sname.assign("SSSDALRFRDETFADGQHETJBKMNAGJVWHVDUXZIYYFZLJIQKLKMSYBGHAOOQRWEGZVFNNHOZVBDZJZEXDMXGZTPMUDFWTYOUSBCMGVUIHERPKLFPEVXQQJCIIYLADQJJSRLNNVKDACIQARSTKFUBXTJZANEVVKHPDZQKLUOBJMRPSYPOMRNLETUXFCBUHNPMSYMYCIWIOUBXSO");
    const signed char tmp_msg_0[] = {-11, -102, -51, 78, -26, 52, 40, -47, -9, 117, 99, -22, -78, -30, -91, -71, 87, -87, -34, 7, 12, -36, 19, -103, -18, 112, 113, 100, 110};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CXKBGEAPYYVU");
    tmp_msg_1.plan_size = 33780U;
    tmp_msg_1.change_time = 0.8577230299532025;
    tmp_msg_1.change_sid = 7070U;
    tmp_msg_1.change_sname.assign("XVSUALNWIYZZBXBMTDFABXNQFAWKJGKVJGHLQOOTIQEZWRDWBY");
    const signed char tmp_tmp_msg_1_0[] = {-61, 115, -84, 44, -51, -127, 25, 112, 36, -45, -9, -67, 45, 126, -42, 125, -11, 122, 106, 122, -94, 39, -4, -84, 74, 86, -33, 31, 98, 33, -6, -23, 68, -42, -17, 8, 72, -6, 85, -95, 103, 31, -72, -99, -100, 60, 1, -93, -60, 108, -47, 85, -108, -16, -83, -94, -77, -110, 112, -98, -47, -107, -83, -68, 63, 86, 111, 123, 81, 29, 4, 99};
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
    msg.setTimeStamp(0.6365535383337757);
    msg.setSource(6140U);
    msg.setSourceEntity(115U);
    msg.setDestination(16402U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("CGOSCLIUBFXVODUKZHPKVNPMRMUFLDQLQTNSFXMAYXBKMISYRGOKBMDUDHYTEMCSQNJPQWCKNLOXTNPAZHOJTABJZHZAYKMJRJBAYAEGBQCTPWKIZEPNNPVMTFXQVPJZFEXYWBVWYQSORGRZODGIGAGZNJGEQUKEMAHLTPX");
    msg.plan_size = 20446U;
    msg.change_time = 0.5045018975380874;
    msg.change_sid = 12817U;
    msg.change_sname.assign("JQKXMSGXGFEBCWACNBZLBZIOIAHRDSZXFHDIUGURJSLORFNNJKYZI");
    const signed char tmp_msg_0[] = {8, -120, -119, 27, -88, 19, 115, 30, -58, 58, -3, 40, -90, 104, 43, 24, 104, 108, -10, 52, 5, 116, 50, 33, 85, -126, -42, -10, -121, 71, 20, -88, -41, 120, -95, 95, -47, -85, -55, 62, 65, 32, 45, 22, -119, 101, 110, -36, -1, 7, -15, 72, -114, 101, 55, -29, 18, 8, -16, 57, 23, 67, 27, 21, -106, 10, 49, 86, 98, 119, 74, -9, -94, -46, -45, -85, -76, 34, -43, 108, -41, 123, 108, -44};
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
    msg.setTimeStamp(0.09943368296866029);
    msg.setSource(24405U);
    msg.setSourceEntity(169U);
    msg.setDestination(26144U);
    msg.setDestinationEntity(109U);
    msg.plan_id.assign("KGVGPSESFLMRTYEQIJZLLHSLXYBFANFIDBSPAMUSVBTFSWXRZFGAICOQDOLPCVOJKBEDECNMEMDRMZABMNCLSLAIUI");
    msg.plan_size = 43723U;
    msg.change_time = 0.9462746886721497;
    msg.change_sid = 11504U;
    msg.change_sname.assign("WIUXWVOAWIXXGODFJBJANCLMVHDMDKKKYFOHYOBWZKDUMNIYJGYXMOMBZSMLYORILSNYHFRLOWOPWSUVUNEOUTGCUKQTJTIAZRDSFZSFUABDUEQXQHVDJWRSRRMZQLPDYYNSQHGHVJKEKOHTABGHGGTQAPBNYBEUHLWXCQVEGTLKTFCJPEFIRCCKMRHVBGSREQPCNWXRLDAEWMCEXSPVIGJBLJPICQMIFNZZZPCDVAVAXE");
    const signed char tmp_msg_0[] = {-48, 11, -6, -54, -94, 93, 79, -4, -25, -15, -45, -124, 86, -19, 22, 115, 28, -90, -119, -87, 101, 64, 61, 75, -1, 95, -121, -4, -14, 121, 116, 114, 64, 67, 0, 20, 8, 126, -120, 95, 100, 108, -59, 10, 107, -69, -3, -51, -104, 102, 85, 38, -18, -89, 82, -18, 12, 14, 70, -41, -14, 93, -26, 46, 100, -23, 40, 48, 84, 84, -44, -34, -106, -97, 90, 123, 82, -98, -120, 54, 1, 77, 88, 66, -37, 72, 36, 14, -12, 88, 15, 59, -128, 51, 25, -62, 75, 66, -55, 73, 3, -59, 10, 22, -29, -50, 38, 110, -39, -100, 52, -106, -104, -123, -97, -67, 64, -17, -66, -74, -67, -29, -43, -21, 4, 14, 40, 46, 119, -60, -114, -103, 85, 35, 9, -22, 3, -106, -23, -11, -87, -2, -12, -79, -39, -1, -10, -90, 79, -28, -43, 14, 45, -46, 121, 104, -82, 115, -81, -4, 91, 121, 10, 61, -90, -123, 104, 55, -119, -46, 118, 33, 47, -102, -105, -67, -70, -107, 29, 113, -124, 95, -77, 38, 87, 120, -8, 107, -9, -107, -65, -120, -98, 19, 98, 22, 23, 27, 77, -7, -95, -59, 77, -110, 46, 0, 45, -11, -103, 116, -96, 16, 37, -93, 35, -86, 108, 101, -77, 60, 125, 68, 60, -8, -40, 69, 73, 115, -45, -21, -7, 105};
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
    msg.setTimeStamp(0.2646684940771421);
    msg.setSource(61047U);
    msg.setSourceEntity(105U);
    msg.setDestination(4040U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("XCTJMSVTTLJVBZNKXBZVBWKKQHMGBUUAPKNUPQAYOYXRKXOCEGAJPIQIDPFILMFCLHOOODJSCWLPLEMVIZFENPHXJKSHEYRFWDMXQNICZIBHJSGKXHQIMWURAGQZJHRBSTRWCOOVEDXMMPVDYZPRACJTLJYFPWCNQSUAFYDSTVKUBHVBGWORUTYHRUTBCKQMFHT");
    msg.plan_size = 8167U;
    msg.change_time = 0.10066110328606948;
    msg.change_sid = 11694U;
    msg.change_sname.assign("ZOCEIITLJVYPSSQKIHTBHGKAGACCMDALFWEVNO");
    const signed char tmp_msg_0[] = {-96, 94, 72, -96, -72, 80, 85, -34, 16, -103, 112, -21, -19, 114, -41, 123, -8, -100, -85, 44, 106, -109, -71, 89, -34, 43, 102, -85, -11, -51, -14, -45, 18, -1, 92, -117, 117, 38, -125, 123, 51, 84, -43, 120, -63, -55, -91, 109, -106, -114, 68, -35, 73, -45, 37, 55, 69, 121, 24, 99, -72, 58, 1, 93, -100, 118, 108, -63, -84, 89, 96, 58, 9, -122, -3, -122, -74, -17, 93, -95, -45, -18, 123, 35, -42, 78, -120, -47, -4, -37, 56, 88, 103, -99, -52, -113, 34, 60, 34, -101, 86, 31, -79, -98, -22, -109, -81, -74, 45, -4, -10, -127, -82, -42, -19, 3, 2, -33, -3, -29, -50, -117, -27, 51, -35, -57, 45, 107, 4, 117, 109, 100, 124, -45, -32, -107, 2, -123, -80, -115, 108, 100, 112, 29, 54, -98, -57, -67, -109, 84, -40, 113, -22, 83, 95, 40, -107, -21, 69, -67, 122, 54, -103, 67, 3, -85, 4, -30, -112, 37, 80, 34, 54, 41, -100, 87, -26, 23, -53, -18, -22, -29, -53, -69, 37, 32, 43, 6, 33, -26, -32, -97, 45, 57, -40, 4, -56, -30, -107, -17, 24, 96, 36, 22, -117, -113, 77, -78, 93, -85, 24, -29, 93, -50, -125, 105, 119, 48, -95, -115, 125, -47, -35, 48, -57, 93, -98, -72, 45, 59, 98, 117, -4, -79, -66, -10, 100, -5, -11, 60, 113, 80, -67, -58, 79, -96, -35};
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
    msg.setTimeStamp(0.5577226323941917);
    msg.setSource(15271U);
    msg.setSourceEntity(19U);
    msg.setDestination(47792U);
    msg.setDestinationEntity(148U);
    msg.type = 105U;
    msg.op = 96U;
    msg.request_id = 33195U;
    msg.plan_id.assign("UYAXEGJDQDIGYKIQQASIMJYNWANLSQTLLQILLBNNZREFZOP");
    msg.flags = 7453U;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 27305U;
    tmp_msg_0.destination = 25768U;
    tmp_msg_0.timeout = 0.7001906577973351;
    IMC::RemoteActions tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.actions.assign("CPTRKGEOYOGXSRRCNKQTMMHXWZVYDZSZHKIUPNSJVBZAQNGAWDMQFHLYPQAGIBYERSLBOJEPIVCXZLIPWQNJMMKPQTVJFACRERBVUDXSTIHWJFMKRDDCSDCRKJHBHVKE");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ICHLRJONUSXGAOZKCZZDXEYSFBCMICBYQUMLHDJAESZUGEKSPGMISNVTDGGLQMAFKNXMBTHEWQQLJKRVVVFHMSVNPKPMGDEQJPHZWNBHISUALWGU");

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
    msg.setTimeStamp(0.32467015808159005);
    msg.setSource(26157U);
    msg.setSourceEntity(190U);
    msg.setDestination(30543U);
    msg.setDestinationEntity(240U);
    msg.type = 172U;
    msg.op = 217U;
    msg.request_id = 49979U;
    msg.plan_id.assign("LKGGASGJLNTBYXEVQNXVBHTZNCCYKOQRLRKWCOHRJRTVEIXGGYORIEQYKKBREKDAGMVMPENGDQHCAZDXJSZYJCYBREIJMLZBWPTHJMOUVYQSBNQPXDTATHIFRLSVLHGUUNSGFVSDACNBXWVJFPMKAUCEOMEZDCOUQJZPFKPJPPBODZLZHZWIQPGXTHIPWMVSRSAFABFITWNMI");
    msg.flags = 29279U;
    IMC::GpioState tmp_msg_0;
    tmp_msg_0.name.assign("HEWPLRMXFNQLMYIEQONDDYPGOUFHTFGYSCFAQGVHXXEHAXYCLEWTVACYSKKIWRZKDDNPZKBUDMRSKCLBQMMPPAPYRLBEKQPAIGIJX");
    tmp_msg_0.value = 236U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BRHQJELFBXEPHTIGXRNCVRLIEFFOSKIWBBJQESYDSWXSBQCXZRNQHZKDYQSWPNUKAPXYZPGWYNJDDWRLSZBDECAMZTAAKRHAIVCPUIJGRSGNYYWAOCTOFCNAGLPFNZPYFOMMCTSOKMPEQZMPAMXZCUWHVWNOLZHFKIKKXOXQUVUGFVGHJMDRJTHLVYMTCZOVJUKMTLDTJIHWBGONIEUVAE");

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
    msg.setTimeStamp(0.709926193443291);
    msg.setSource(20943U);
    msg.setSourceEntity(254U);
    msg.setDestination(49946U);
    msg.setDestinationEntity(165U);
    msg.type = 209U;
    msg.op = 26U;
    msg.request_id = 22313U;
    msg.plan_id.assign("QZFIWUICEQEKYXOJICXJOQVIWPNSNOMTUNGPMPTHCJQZOBCOHVMMNIWUAPNVJQNXSPPYWRJCQZLVYMHRRHMFCSTVLUWUXYLGYDARTKZKHQWFIQRUMFSTSUDALJBIECYRDWEMCEVBBYSOZBRNLFKGBKRUHHLAVTDGGNZCZGPQGGSXGWIDMFSFLKXNAUDPXSEHAAJBTEYTBVETIZXOZEYWRDFMAHOLADYPFJWVKKAOKGLKDQPRJ");
    msg.flags = 23662U;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("WOCBBIICSZGZZPTMZKMOIKQQHYHVFYBCSSUQAGWCUPDOQMFFMSVVEPAJUFAYTJNQCYBEPYVUZEDFQCDRJYVKTHXGUDRKHHPDDGFQKJNMNXSVMUJTOWXURKEELTGLJHBRWROLOLDYNIPWIMLS");
    tmp_msg_0.rssi = 0.6649460273775711;
    tmp_msg_0.integrity = 58672U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FOYGIEZIGVWGEVMXCCQZVJ");

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
    msg.setTimeStamp(0.8654462547854571);
    msg.setSource(51614U);
    msg.setSourceEntity(25U);
    msg.setDestination(26780U);
    msg.setDestinationEntity(37U);
    msg.state = 230U;
    msg.plan_id.assign("TOJYWVZQGRPDYZYTORVTQVEAHFDHRGACXFSSRIJSQKSCEFBTISFZNZBIYPIITCDLCTUUTZGAC");
    msg.plan_eta = 910412112;
    msg.plan_progress = 0.9134259989380998;
    msg.man_id.assign("KHATTSOFDGXADNSVGUELQAJWLGIZKADSZHXWTCPEPEHICODOYSCORIPVTQNTVVUCLBZKNWXUDRBEB");
    msg.man_type = 15333U;
    msg.man_eta = 1790380124;
    msg.last_outcome = 192U;

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
    msg.setTimeStamp(0.9694971196312396);
    msg.setSource(8678U);
    msg.setSourceEntity(169U);
    msg.setDestination(61119U);
    msg.setDestinationEntity(251U);
    msg.state = 203U;
    msg.plan_id.assign("QTGXYGDAETDEMLCQGFOSSQGYHUPADXTTXHVHMDQIURYPUAXRRTFUIMNPYPOJAPMIZ");
    msg.plan_eta = -1811228836;
    msg.plan_progress = 0.9980186478984018;
    msg.man_id.assign("YACWRRHEZWSKSYEZUQLNPUGNJLPQBQSGTRPBRHBAHUWK");
    msg.man_type = 28710U;
    msg.man_eta = 133092619;
    msg.last_outcome = 36U;

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
    msg.setTimeStamp(0.24176116920671809);
    msg.setSource(40552U);
    msg.setSourceEntity(16U);
    msg.setDestination(46395U);
    msg.setDestinationEntity(31U);
    msg.state = 154U;
    msg.plan_id.assign("XUKRQDDBNOCYILUGVSUGIIYACGMWZZPDQSFFTWIT");
    msg.plan_eta = -1278656425;
    msg.plan_progress = 0.7605485946985516;
    msg.man_id.assign("SJCALSVFVENTOKYWFWWKPGJMVVLISXXASBNYPGRFUNPEFIPZRBQOHUHILZQGKDDHBZGAARNZCTHSJDQEAJJQSOCWMGDDWAETGXOTOVINBKSQXKYTVHRTUZEXMDLXLDRHZO");
    msg.man_type = 33461U;
    msg.man_eta = 464815545;
    msg.last_outcome = 214U;

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
    msg.setTimeStamp(0.7708376879891785);
    msg.setSource(42466U);
    msg.setSourceEntity(228U);
    msg.setDestination(47957U);
    msg.setDestinationEntity(13U);
    msg.name.assign("XIHDUNQJBJGTCAJLZTZVGXPGPLBMWTBMZUZEAMMRECDIRWYUJTOWMOODCSFWRTYSHTODKAVTQKSOBFVIZBJSECYUSCEUARKSERXZWIULHMNIJIJ");
    msg.value.assign("AEMYCIGYGJTNBHDKHURYAPBOZXXIIBYWCISPLYMQ");
    msg.type = 203U;
    msg.access = 147U;

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
    msg.setTimeStamp(0.4418696669513137);
    msg.setSource(19346U);
    msg.setSourceEntity(136U);
    msg.setDestination(51879U);
    msg.setDestinationEntity(205U);
    msg.name.assign("ETQNDQYKZPYRCGXTRENUDXVYSUCHBJUPUASFFCADTSSNXVKVOWZYDVTKWPBMIEKCDMESMBXIQWOYXIEEAHIJUWYXZAPWKKXSLTVORKXYBNNIHGDNMUAUNEFCVEWPFHETMDFZWBPOUVWDLZNFQRZJPACYJRYBXLDLQGVTNBTZLJJGHIXHFRKJGAQMMCUSZVGQPQHCMDRJFCUWHAHQYLRACGPKORZHGJAJILSBVGIORBLLSQTGIMPF");
    msg.value.assign("TKSGYJAKFNDPQBOSICTMIHJXBEMIVAKDZVZUJYLPGNUJXBBWGZPAISBJPTZEGHGWHFMNABANAMENFDLKVVBGCXTWNYRVNAYZRULRDJFZ");
    msg.type = 187U;
    msg.access = 103U;

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
    msg.setTimeStamp(0.45220553052110557);
    msg.setSource(33034U);
    msg.setSourceEntity(42U);
    msg.setDestination(8713U);
    msg.setDestinationEntity(45U);
    msg.name.assign("OKYFLFUAXBXPSUZBALXDRIMTCSTORELJPWVLHVESTDXBLKWYAFXDOGLQPZWYGWVZYQNDIAPTMBFEDWVJOLKUYCEOMZIFSSGHVXGWOPOGGKQTDPVKVSMXMXRHPNKTJDYQPGRROZIIMAUQNRFHHWCWHMYZUXFITTCS");
    msg.value.assign("TYITFYGVADZIOTBBVRVPEFQWGCPEUVULPEVBIKDUMWUNWGTPSXNVYRTOODLUQXZNMFCJFJQWHDXJSEQANFIZCQUEKHWPOSIGMZPXKCJRMFSOSILDYEJSNHXEWHNKGQQJHWROYOXTZUAFCFGRUMADZIPBTLH");
    msg.type = 107U;
    msg.access = 176U;

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
    msg.setTimeStamp(0.9773355624227317);
    msg.setSource(14717U);
    msg.setSourceEntity(48U);
    msg.setDestination(43526U);
    msg.setDestinationEntity(68U);
    msg.cmd = 247U;
    msg.op = 237U;
    msg.plan_id.assign("WXBAFKGWJLALGOWLTRRCNZIGWIVROJWZAUGZNNYVBHQYYTDCSFTEODMSVRHPXYQZDZUFHUCKTQSADWOVJTUNRSRZAUNBTLFOKGKHKMEEONJCAOGWNRQUPYITBPHKJBKVGVXQAQOLEFURMEYZJCHYQNFLSLPDZJBPUFXEXXXMPD");
    msg.params.assign("TOJRCKFBOJBAVNWMQQSSBJZCBEDYCPZPQUCMYANTDHAWSCGDESMTWCIHL");

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
    msg.setTimeStamp(0.2047566617269958);
    msg.setSource(137U);
    msg.setSourceEntity(123U);
    msg.setDestination(50679U);
    msg.setDestinationEntity(192U);
    msg.cmd = 131U;
    msg.op = 172U;
    msg.plan_id.assign("JQAFRNKKDHULZGUPTSVJTGF");
    msg.params.assign("DRGRXDJVHPCBSMXIJKZCY");

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
    msg.setTimeStamp(0.6054355317375061);
    msg.setSource(62322U);
    msg.setSourceEntity(236U);
    msg.setDestination(2482U);
    msg.setDestinationEntity(183U);
    msg.cmd = 58U;
    msg.op = 119U;
    msg.plan_id.assign("DPCUNOJXOAXIQCRGGJSNFLDOHEYYVRDHUPJBTMGBAQVOYYTEAZOUZIAIZNYQXQVMPTJBTNSBTRZHMZNSOFFEWCPPLVMVMSIYKCXDQWIJOFTMMFHLRBUQUFWSOQAFCBLUOSKMXAFEUHJESJOHYNWIDDKEWHGHUJHS");
    msg.params.assign("EJQICPMCKKNSGJUDTWPAEKWDMLXFXVJGGLOZRBNDNMOBQNRKKBSKZ");

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
    msg.setTimeStamp(0.21907544768801568);
    msg.setSource(9245U);
    msg.setSourceEntity(2U);
    msg.setDestination(3874U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("QRBUPOSGDKESRZIJIIIRKYWIUSSVXWLZJZTWYUWCVWGEKJBDTYGJYVQGOIOAXHGCRUUWNNIAHHATMFYHHHSFRNVXFMRANBJSJQZTUAFUMVPCLVHYBLLYFOJFGEKKULDPKDPRWDVBKOPGPMQPADTRYBPBDMTXBGTNBLLMSMLSSCXHCHNLKUNOICWJJXXQMFVGEZQDXTMBMRKFOHZEWWEOTFAORZNDICZVLTYKCCXIXNGPOQQ");
    msg.op = 70U;
    msg.lat = 0.6124901235449337;
    msg.lon = 0.4055375499829872;
    msg.height = 0.9557977827423514;
    msg.x = 0.800428845383463;
    msg.y = 0.34155436969810604;
    msg.z = 0.8591691159696039;
    msg.phi = 0.7073424153826408;
    msg.theta = 0.3991442465915861;
    msg.psi = 0.5014052204276858;
    msg.vx = 0.8277992512343377;
    msg.vy = 0.13979173264479294;
    msg.vz = 0.989591527659575;
    msg.p = 0.29922440761750835;
    msg.q = 0.42180020952615893;
    msg.r = 0.9824313376118321;
    msg.svx = 0.7946874879205216;
    msg.svy = 0.7755133320095554;
    msg.svz = 0.5762334272248326;

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
    msg.setTimeStamp(0.4821158118661083);
    msg.setSource(19200U);
    msg.setSourceEntity(34U);
    msg.setDestination(55189U);
    msg.setDestinationEntity(92U);
    msg.group_name.assign("QSTQISTFZECWDWHCSGEPYXJGWKRJAZBSAKKFABKOWXQWVKECORNYQOXOSXCVKRQHLILFSZA");
    msg.op = 114U;
    msg.lat = 0.17403639164232287;
    msg.lon = 0.17583101143611757;
    msg.height = 0.2836440983976152;
    msg.x = 0.9909886937230008;
    msg.y = 0.606008082309349;
    msg.z = 0.9808082117629375;
    msg.phi = 0.9714662384644304;
    msg.theta = 0.07105489621498351;
    msg.psi = 0.3757519586866568;
    msg.vx = 0.2305762220725993;
    msg.vy = 0.13064245825310505;
    msg.vz = 0.3108146173782551;
    msg.p = 0.4812342519067384;
    msg.q = 0.3821821390879132;
    msg.r = 0.8372942966852552;
    msg.svx = 0.19821262164290598;
    msg.svy = 0.7544047384070846;
    msg.svz = 0.4047987674220854;

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
    msg.setTimeStamp(0.7853571846552982);
    msg.setSource(37620U);
    msg.setSourceEntity(65U);
    msg.setDestination(49482U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("YONJSYPTLBTZDCPGBWSESKENOVZUDZJXQCWUVEBXATQFMEAHATVMLKBLDAICHFLLAAHEQWVYHXNSKWSNOPFGPKQIXBRURPPCKOGVGBRKWYTSDYLAPAWPILDMRVFEJUGVGAFMZHFHCBJUCFKMAYIVRICUNIBTTLJZXWGUEXVHBXN");
    msg.op = 72U;
    msg.lat = 0.39189050205948617;
    msg.lon = 0.5572805180254733;
    msg.height = 0.48350931922957674;
    msg.x = 0.4940944938278351;
    msg.y = 0.7862696311222522;
    msg.z = 0.09232438851440061;
    msg.phi = 0.47522503094672186;
    msg.theta = 0.37815169859802433;
    msg.psi = 0.20581368342586315;
    msg.vx = 0.919805258739958;
    msg.vy = 0.9928812195723253;
    msg.vz = 0.0053562507266589066;
    msg.p = 0.4692230411380416;
    msg.q = 0.036647991387434575;
    msg.r = 0.3869568599330643;
    msg.svx = 0.21579484768452584;
    msg.svy = 0.6824931723144263;
    msg.svz = 0.6304493147743322;

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
    msg.setTimeStamp(0.4881542897923252);
    msg.setSource(10438U);
    msg.setSourceEntity(115U);
    msg.setDestination(4461U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("INEATBNNXYNSWGUWVWTCRHYKMTMQPTBPLSAWNDCXFVBOIYRLXSKFGMYMVUWGRGCUBAZZJCPJHQQPZDOEQHXFSPOQYLCSGRJUBRZSCCFEGVKYPYMQKVSSWORWLUQGPMLVETZJXDAFUSLCAPCJWDNODI");
    msg.type = 202U;
    msg.properties = 174U;
    msg.durations.assign("EUWWHYILXSSTPNNEHAYUGLDGDIYVHCKKMKWUJXGHOCAMCATQSBMRLMEGMZIVCJXCNOHTRNIFRFVOQMSFZEIFCUJAPKHEYRZVDGKBJDXASFPDRMCKZAMZKWHOKDBUPELSEI");
    msg.distances.assign("TQRLGBMFLHXZFIOBQHYOPIZUXLFCXMNNUIDBMGVDOIFCLBRHOSLJVYEZTRZGMTHEIUQXJWGYSLMVHOGOKAHIGKCHVIRFJOKDBEZHVETVMYDUSWPVQQMEPPFZSPYDKCUWBKUCUJSCNDMGSNYEEMLSPRCKPUYWUSNCKAXNEWAKUFKTPNVDPOZDONWNV");
    msg.actions.assign("EGLOFYQZRFJDSEPAHKMSSYWIIUPYDBUDOIGHOCXQWAERGPKFOKSEJLZLTBVQNVXCEUCQYTXYEXOQTNUHYGOVEFYPWCRFIGRRSQLZBMKBXRA");
    msg.fuel.assign("EXWSCTLUAXNLZK");

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
    msg.setTimeStamp(0.5179965757391032);
    msg.setSource(46691U);
    msg.setSourceEntity(186U);
    msg.setDestination(26708U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("FTJUYSSRALBJGCBSMXTIDQDLHLKIMRVWBZWYKAOPGVQZAQXWDDBGLHZZHCPCNNHHBGNDTCYEE");
    msg.type = 181U;
    msg.properties = 6U;
    msg.durations.assign("LSVUDKRRZDOTFMVBLLPCICSCKNYMZQFAWVFKSGERIBXWJLCXNPSMHUMJYLGPMIRGMXXOFTDKPFULAJCBFARPZNLSTEQHZXNNPQBMSHDRQSGIFGJEGIXOVPYEQVAMEKFNOBYOYPQAAGLHCXDHRZOLWWSDFWTWIWBIBVIKWUTVZJBAJ");
    msg.distances.assign("MMNPBNXJGRDHKRXHEZYRANXQOWVPOVE");
    msg.actions.assign("FFSVQEIGLBWCEDFWNFJLSKCKQKTEYCAMOGARJYHJGKHPWYMIZZTGDQMJZMYNGJJVVBLZERKJXPGGZETGTIAOCVFPXWSHTPUWPDFULBDQHDESKMRTYFRFWUBBCZAOYWVUWJIPAQUYKRNSORHVRGBXIEFNETQTEDTBNCMQUYXBNAZIYVMZHUISSOKUBUZOTZVH");
    msg.fuel.assign("KMWIBCBYLGLXCGPJQECBTNOWBYOWBOKICYPGAMGMFJUOZSWDVSNJSBOAVRHVXQKUKRRXTTRILOQUVBZIQELFJVXWCOLQUBDMPGSTMQLXJGZLVHNPINZHBNADCYFTPGOYHRDKHZDHUMHJZATAVNZYNUHDWWSFVXSUSKHZYAXIVUKEHNYWTSXEXDPFLMQNGPVWDCOAEGRRTEKZ");

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
    msg.setTimeStamp(0.7184021245825545);
    msg.setSource(50127U);
    msg.setSourceEntity(176U);
    msg.setDestination(29207U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("OFNSNHUEOFGFKECTCDRABTUQFDKWOMBJWPGCORGHGVW");
    msg.type = 34U;
    msg.properties = 105U;
    msg.durations.assign("AHIDTOMWNTEINWXFNPICXMONPQQXTJVTSYGTEAWUHRMDPUZWZKQLQRCYBKMPZEFBPVBUVFWIPTDJIZJRPQGZWIFRYBKCCVCFBLYSOIKJXUTAXLEQAVYBRLHVEHYPOBWUPCJGNBRFLKHXEGDQDHCZEQDZMDNRGOOXEOXALVUFMDJISXIRCSLNFKAZKSVJ");
    msg.distances.assign("GKUDENWEPKKENHDOLRIAOCUQGFVKMRJZIDLZLIMDXOCTYACUYIZIUFNHRHBTXFUGQUCJGRZYMBEOKUPDYXGDIQHINZSTAQPZCBLIPTV");
    msg.actions.assign("GDHRDFSKLKLGSXZWVCMJRICWVYILFZFOCBHRBZVEBUFVFSRRIAZLUVEVCFYIOXBKTZXWWHCREFJUDUCTSCJDAXLMBLSKGOVDXPPQVPUJNLRRAENXSDNGLAEHKLHDQITIJMGZAYURJCMPKOBYUFQQQSUQXQBKJNHTBWQMWZLAHMTXUYZBYTXTGAPEPPMHANOSEUYDNAKZBPPJNHGWEYZYJFCKIGXTOMMCJOPIIRHKOIGMQODYQWFTEANO");
    msg.fuel.assign("KUVAQRDWMMYMKMZRJJRTVUELOCOTBIINFPKEZJDPEBDOJLAUCFXFFULISASXXHSNSZTIPVPFMHKIRWOBJGGKYZGKQHGYHXZYO");

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
    msg.setTimeStamp(0.5136170752405603);
    msg.setSource(6116U);
    msg.setSourceEntity(137U);
    msg.setDestination(39442U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.911864013270928;
    msg.lon = 0.8852593807706135;
    msg.depth = 0.5290072470276103;
    msg.roll = 0.5447035910351913;
    msg.pitch = 0.7701949001599389;
    msg.yaw = 0.9530268193803458;
    msg.rcp_time = 0.5189002840923836;
    msg.sid.assign("PHRGGLBPPZXMNCFLQCCQFQLVCZKLIBLAEMPFIPRGQWWYUDEUTHBRVHSADEASOUTGSRVABYVHFHQOFPIXMVMKVXYLRLSZXMLXBIGOCAZRRNJBJIIYKHAMUSCZYRWQYFSKDHNDOIFPNPEDD");
    msg.s_type = 91U;

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
    msg.setTimeStamp(0.49092480691388174);
    msg.setSource(43748U);
    msg.setSourceEntity(107U);
    msg.setDestination(57937U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.06845471891003618;
    msg.lon = 0.15154969774813798;
    msg.depth = 0.37554314362382546;
    msg.roll = 0.25870666322130764;
    msg.pitch = 0.42246060483059267;
    msg.yaw = 0.11136926295223848;
    msg.rcp_time = 0.10042183812059091;
    msg.sid.assign("JGUBDMRYQHSOXAHIKPAZKEQOFXVRNXDPYLPZSKPQDJXNZOKMOIVJBDMRWJKWVBSZGPMVNRWNUCOADHAATNCOJHUFZGDZTQWGECKAIHGIVBMTLVDQCIBTBGEIFVKMFUSQONBXTYZTLFNOYIZBHSQLMRYHJUNEAWMECMYNQNVXPEOHWWWXCCJDKJKHBGHXFOEBFCQMFCLGLLSIDZYGUPIULATSYERUXPZSRRRRWCASPEVGILP");
    msg.s_type = 222U;

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
    msg.setTimeStamp(0.8806638520186421);
    msg.setSource(48010U);
    msg.setSourceEntity(230U);
    msg.setDestination(54704U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.6866752196993142;
    msg.lon = 0.780121806748569;
    msg.depth = 0.08210136051324568;
    msg.roll = 0.21750561595005902;
    msg.pitch = 0.5042864877985287;
    msg.yaw = 0.7532905537887228;
    msg.rcp_time = 0.8852686787980542;
    msg.sid.assign("RGXEMHVPDQFPANJWDEUSLDEZKBVMIQXLCASWHFTIVMWICEKLFOVGZGJURZROYBUAEOUPGORISJUQIDXFLI");
    msg.s_type = 52U;

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
    msg.setTimeStamp(0.7666668826885931);
    msg.setSource(61682U);
    msg.setSourceEntity(213U);
    msg.setDestination(37576U);
    msg.setDestinationEntity(122U);
    msg.id.assign("RFEOSRYNSNPCIRARUSGLQAJLBKXFGIZYFDFEUTJEZUXMJUQEDQSEWDUPCPFPWMQBLSZBHUBL");
    msg.sensor_class.assign("HNJMNVOYFLGHOFSQRUWJHWERKZNIZDSRMTISUKNWBAGUICSHXWCKKFFOEVYOTXURGLQMLXUGQDJFCRQAYZLMEHWQAXOOXCZYDGSRDPJPSJBSIZDXII");
    msg.lat = 0.40978793058761875;
    msg.lon = 0.11206045272278087;
    msg.alt = 0.12624134309168855;
    msg.heading = 0.9294727356747678;
    msg.data.assign("DBTZPMSROWLWBLXLJBKPOZNTSVPZUJFZYUMGYOIGNRXCOXNZXQCTGMESXRWDWNRAQGFCMTZGCNODMZASVJKREZAAJVNRCOUPJDYAQLFAPIQFPIOZJHULWREDAGMQKKNBFFCVOVEDBUHSITFRHQKYLQJTHBJNTYSEEJGCQNUGEXHBSVBOTQSVD");

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
    msg.setTimeStamp(0.4771636287146035);
    msg.setSource(32950U);
    msg.setSourceEntity(210U);
    msg.setDestination(6597U);
    msg.setDestinationEntity(126U);
    msg.id.assign("ZAFDMOHEANYIDMUBPGAFWFYQNMSGMAVHECRPTESLRTWUOXTIGADPQOZOLMHUKHNSIOIBLKZCXQVDVJPAXSUZYNTQMZPYREYWGPGKKIXJVVMEWLKPANAXQVLOVYFWVRBCGCMLDJYWGYERJULZUHDTQFIGJICDJSFZEJRAOIYKJNL");
    msg.sensor_class.assign("GSJCUQTETIZRQHTGBXBEMXFPQRZPWWJLZTKJOGLHLYLZUMIPIFSTMNUZPMCRSIRNHJQUIOUXBGUJORAQEFWVWMCAWYQDFXTSHFXHNWPZGLEEPZJLRMXBQETYRFGXCEYDJYUHBCVDKSKTJESFCXNLIVZUDDIPTCWSD");
    msg.lat = 0.7997336106962257;
    msg.lon = 0.3219577217577432;
    msg.alt = 0.9730142192671217;
    msg.heading = 0.6061790472016132;
    msg.data.assign("BNJJYNBVBFYMSSUNKGCRSW");

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
    msg.setTimeStamp(0.7497795984674561);
    msg.setSource(31211U);
    msg.setSourceEntity(149U);
    msg.setDestination(14190U);
    msg.setDestinationEntity(126U);
    msg.id.assign("ILLOTVIGBQJEDFTZKSRFTDKROVRRDLIMPXKEOBQBVPGJGW");
    msg.sensor_class.assign("YJFGYJBBJINZUSOWXANIHSWJUDGKHLLGEDCTFFLQNSOUGPOKMLBCOKXXPBRVGSOCRJKQXNSEZBOHXAAUTWUDIANLXVNUEZKHDWZUJXEEIAIMFYRFWHQSAKRPNBMNYWPOFTSMZBYRWWHOSMFQOTJYLHBCEBVNTQAIMAGCQVRKWCZHXDGDHZRYVDMUILWJKOTLZPPF");
    msg.lat = 0.4591506096354039;
    msg.lon = 0.8639809569510764;
    msg.alt = 0.7068450450290338;
    msg.heading = 0.7284776646751522;
    msg.data.assign("HYUUMTNPNUFDIBWHCQVNENLGJUFCMFHXOJJEEWHKGRPXUFZLQLRVZRONLBIXTCERLVNMVSESDDC");

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
    msg.setTimeStamp(0.5359478165877292);
    msg.setSource(46994U);
    msg.setSourceEntity(167U);
    msg.setDestination(59530U);
    msg.setDestinationEntity(210U);
    msg.id.assign("KGFFYCTBCGGRYSHDIUPTTFCTHDFAARNJKLRIAZKPQYPZILBHOOQCSGZYCKDQDIAJUXMBEFRXSRJLEURMEVXUYVSCVQXNTHIEEZYFSPKVOVMGYNWSLEMOVPJMNBKBOCHMLGQDAYAWOFCN");

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
    msg.setTimeStamp(0.7884469754952547);
    msg.setSource(33042U);
    msg.setSourceEntity(177U);
    msg.setDestination(61621U);
    msg.setDestinationEntity(148U);
    msg.id.assign("MNWPJHXIBLFYJKNWEVXZUDFIWCQKUERQOWHJUKH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ENFFADCBXRMJTNXGEBDQYEQOJJJTLSDFGZSPIQOEVUGRLBBCCPGJIYLEHNUMOLGEGSRMKRZVXVUDHFTMCUCQPJIQVZZIYNHUZHIDMNUQOJUPDKTELADWIHCXT");
    tmp_msg_0.feature_type = 145U;
    tmp_msg_0.rgb_red = 78U;
    tmp_msg_0.rgb_green = 89U;
    tmp_msg_0.rgb_blue = 12U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9658357023113218;
    tmp_tmp_msg_0_0.lon = 0.8409007651197041;
    tmp_tmp_msg_0_0.alt = 0.19358284923131397;
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
    msg.setTimeStamp(0.6446072096384571);
    msg.setSource(18512U);
    msg.setSourceEntity(193U);
    msg.setDestination(5730U);
    msg.setDestinationEntity(107U);
    msg.id.assign("RARWXHZDHFBTQLEW");

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
    msg.setTimeStamp(0.3636753378958374);
    msg.setSource(20893U);
    msg.setSourceEntity(78U);
    msg.setDestination(50078U);
    msg.setDestinationEntity(246U);
    msg.id.assign("YISIQKDOYLCXDMMHEFXSGTRHIKKOSKVKWRYDZSLMFMGZAUUSWPWQTIVHPOMJYQBBYGZQCVRTCPSHFENHXXGNTMUUBBLFZDRTEZMMGGUHLXLVJOJRQTTIWGGLWEIKHWMBEERJDZPPRILABWBRTEQSNJWZQFXODSCEEWXBCACSJROADPJDAJGVDZQFROCTANPOKVENFPAYTYVIFUHPBYNXALKWQCVVYPBSHQUJINUCKYHMKANXLNZFDXJIVOAF");
    msg.feature_type = 175U;
    msg.rgb_red = 8U;
    msg.rgb_green = 38U;
    msg.rgb_blue = 128U;

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
    msg.setTimeStamp(0.04357911202204723);
    msg.setSource(2245U);
    msg.setSourceEntity(22U);
    msg.setDestination(56818U);
    msg.setDestinationEntity(150U);
    msg.id.assign("RVKJJWAJNHRNVUEIKHVKKKEALGZRJBQXQTBYJZD");
    msg.feature_type = 228U;
    msg.rgb_red = 85U;
    msg.rgb_green = 193U;
    msg.rgb_blue = 217U;

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
    msg.setTimeStamp(0.4215959620382701);
    msg.setSource(15037U);
    msg.setSourceEntity(35U);
    msg.setDestination(3747U);
    msg.setDestinationEntity(94U);
    msg.id.assign("SMKPZTZBLPWZDCOYABTCWREDUGLZFTBFBMLLJOWWNXQKDACQCPGMXZQSXCYYXZNIHHPBVYHUCMMMWUK");
    msg.feature_type = 84U;
    msg.rgb_red = 27U;
    msg.rgb_green = 69U;
    msg.rgb_blue = 181U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3488942987963384;
    tmp_msg_0.lon = 0.7977076647764213;
    tmp_msg_0.alt = 0.46898320280985295;
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
    msg.setTimeStamp(0.13920905695208285);
    msg.setSource(32368U);
    msg.setSourceEntity(37U);
    msg.setDestination(41492U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.13804352592040037;
    msg.lon = 0.4904028096138153;
    msg.alt = 0.39591680412831964;

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
    msg.setTimeStamp(0.5977010472755048);
    msg.setSource(50398U);
    msg.setSourceEntity(250U);
    msg.setDestination(50362U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.6070092489506517;
    msg.lon = 0.7293364754334192;
    msg.alt = 0.21277194272515298;

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
    msg.setTimeStamp(0.18839856287247103);
    msg.setSource(47615U);
    msg.setSourceEntity(30U);
    msg.setDestination(42435U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.16876387330062714;
    msg.lon = 0.7926712297296132;
    msg.alt = 0.4675668324064869;

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
    msg.setTimeStamp(0.4199932722822364);
    msg.setSource(27066U);
    msg.setSourceEntity(213U);
    msg.setDestination(54806U);
    msg.setDestinationEntity(240U);
    msg.type = 244U;
    msg.id.assign("PFWSLNRPMHODVLZUZSKNJACJDSSJKZUBDPNWCZQFUGZQJGRKJLMYMQCWYGTRCXABHIKSOTBMHIARYAOBXWLEQTWEYVOIVALZLDUNFPECNXTWZSDHUTWFRVROGITMNKDDGBUGPKICZMRBGASWWIQXLTEMEFJZELVRO");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.041767257979453576;
    tmp_msg_0.lon = 0.8384183941600998;
    tmp_msg_0.speed = 0.9917058551601281;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.limits = 172U;
    tmp_msg_0.max_depth = 0.43473033440395203;
    tmp_msg_0.min_alt = 0.7716567694799522;
    tmp_msg_0.time_limit = 0.3020888892077769;
    tmp_msg_0.controller.assign("OZPGRCKMDQEZVJVKITQYDBYMMFLRBFIFSJEWPCHPDDKSECHXNVXCNZZUFEXKONSELJQJHIIARGQXJTGMGLQGIRWWMJMHAXEHZQGYDPDOGYNNSVAZWHYFHTQCXCMWTTUVNIUEBQCPTKSGKALTTPZCZUVFLOURMPXXWO");
    tmp_msg_0.custom.assign("WSLHUEPWDLSWHEBBPTRTIANID");
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
    msg.setTimeStamp(0.589518839099821);
    msg.setSource(51765U);
    msg.setSourceEntity(154U);
    msg.setDestination(32738U);
    msg.setDestinationEntity(129U);
    msg.type = 161U;
    msg.id.assign("GNSCXAIEJVAGFYOFMYLJXHGIJCWVCEDNVNERSGZDZCTSBJKORTWGMABRPSKFOQWWEHIYIGUXKUUCESRPQ");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 56950U;
    tmp_msg_0.control_ent = 22U;
    tmp_msg_0.timeout = 0.01788674703315707;
    tmp_msg_0.loiter_radius = 0.8894023495618917;
    tmp_msg_0.altitude_interval = 0.9830820396064376;
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
    msg.setTimeStamp(0.3594009275557727);
    msg.setSource(28961U);
    msg.setSourceEntity(211U);
    msg.setDestination(46645U);
    msg.setDestinationEntity(17U);
    msg.type = 157U;
    msg.id.assign("KAHKTCCMCPWYOPIPUMNZBCKDSTEXVUGPMDXUMLQUANUUETGFIOWINQSZVCXMQSDWIVNPVLJVVRAAZGUSDWLFDZ");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 40541U;
    tmp_msg_0.lat = 0.8150055179072653;
    tmp_msg_0.lon = 0.9346120497452313;
    tmp_msg_0.z = 0.9332552366511268;
    tmp_msg_0.z_units = 59U;
    tmp_msg_0.speed = 0.003636607472132236;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.bearing = 0.9697354813247611;
    tmp_msg_0.width = 0.9305210699763051;
    tmp_msg_0.direction = 49U;
    tmp_msg_0.custom.assign("JZZNMABCNPCGARBECGQCMTFJQVFQMUMLKPUSEZXDFXJWIHMWKVWDXGOSMJPKQXVFETWTURIIHFFLRPDQYSFREALCBCWHKEPYLJYVSBSWOVHIHYEDXASXDBFRGKLSNQGKGNLPAAUMVOULNZGTWDFCXCSDUVJSUZTQVVYEWVPWGREOQELXFIXKHTC");
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
    msg.setTimeStamp(0.5256047146264441);
    msg.setSource(42346U);
    msg.setSourceEntity(88U);
    msg.setDestination(56896U);
    msg.setDestinationEntity(200U);
    msg.localname.assign("BMQDSYIEARKOQGWHNPSOGRUPKYVTJJDACUFN");

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
    msg.setTimeStamp(0.9578803596467944);
    msg.setSource(58819U);
    msg.setSourceEntity(190U);
    msg.setDestination(62101U);
    msg.setDestinationEntity(156U);
    msg.localname.assign("GSGJGSXKPNZPAIPSRAAWRJDHEFOTYSZPXTCMBHVMDEFWRQTNDHATTD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ENNGXDMDGNQAWCFBLUKYRUUFFRDIZJUFRRZP");
    tmp_msg_0.sys_type = 92U;
    tmp_msg_0.owner = 37984U;
    tmp_msg_0.lat = 0.5688630544911774;
    tmp_msg_0.lon = 0.5393760398641321;
    tmp_msg_0.height = 0.035794360712000706;
    tmp_msg_0.services.assign("LCKWJNGFILEEFCUHMMDYKIXNJOUZKHEJXDQNMVRVRYALCBNZPYUSPLWADJUAWQMZHLPDRREDDPXICVJSGTMRYFMGFXAKSNIWBELOJSTPWVJVHOURDQFWHWUKTOSEGIQXXRJSBFJZDPLBIXWHTC");
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
    msg.setTimeStamp(0.8613673950516703);
    msg.setSource(4201U);
    msg.setSourceEntity(93U);
    msg.setDestination(41843U);
    msg.setDestinationEntity(119U);
    msg.localname.assign("WZNYGJHVTLRPMYBUXUJTMCHOYQRNAPWRLUWKDMJGZFCXXADNMZQPIVWGXWZTETNJNOSKTIHY");

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
    msg.setTimeStamp(0.6152981987474232);
    msg.setSource(14021U);
    msg.setSourceEntity(39U);
    msg.setDestination(59433U);
    msg.setDestinationEntity(25U);
    msg.timeline.assign("AZMRIMJYBRGVPHYJRSXWCPXLKMAQ");
    msg.predicate.assign("ZJYZGEWIWCRLTEEVSSIALMIWWMZLVXPCXBOJPMBAUHTHRCZJUUULUQNOOUVHKUCXXYSFDYNAFITWCNFNDAXQVXYFZTCBSDPWLJKDPJGGAMTVOFWRHQZGKSJOJHFBIBMCUYRGYKZQNRHSJIXMJEBDEQLSNNFCWBUADLRAODWGQPRLZKGXQOTRHEGNYHQAI");
    msg.attributes.assign("UHFEENXKYDUPQPARVETRPWLIZUHZYMDKIWYZFQAJHUDFANDUSLLCJWGEMOWALRXGSCZVYCONCAYDHSQBMDFNIQXPVEJXLRAKFBXJVVSAIJTIZHQJHOMJOWHAFROYPXKEMU");

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
    msg.setTimeStamp(0.2912591190298909);
    msg.setSource(59291U);
    msg.setSourceEntity(39U);
    msg.setDestination(47043U);
    msg.setDestinationEntity(132U);
    msg.timeline.assign("XUMJWOZFDUXCIDGKEIIWUSNYKGBHKMVXZVITZASGMHLGTRUFMPBRENXAC");
    msg.predicate.assign("WONRCFLSYSVMGXMEOTWMHPZNIVUWBTJBHEBYCKNACQMIQMCBAUJMXOOVCLKTUZFJUIPDPAHHEIGKIZWRXFLLNOXLFNYNTMIYTGKWVHWBVY");
    msg.attributes.assign("VPTYVCWMBALGJSKRGBAUNBIGYIDKMXUNGDLYPMQQPBSAMLDXRLEGAOFNVHABBWCTRWMLJFUIZIFYNXGENHZGZKDIRJQCDJZUOOZXUBQZCKWSEHLFXEEJOGJVYUSUM");

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
    msg.setTimeStamp(0.1690411996514224);
    msg.setSource(47505U);
    msg.setSourceEntity(185U);
    msg.setDestination(62619U);
    msg.setDestinationEntity(137U);
    msg.timeline.assign("MHSCBYMZWNZGSJOPJUKUSPPWJSURDHGSFMBSVQCAYDLRDQLIUJFLWUHPCSTWARLXRRRPEKELVQQJZXDIKBWYQSIULNWVFRWOEIBCODZWBJGVOHCBBMKFZBKNXEUTSZDFPNEZXJVCQHBFAODVNPBLUECORMDOHJFMUGPYQ");
    msg.predicate.assign("PHRTQDYQIOELCFTSWYIDGMZRLAQIWDTFFGSASMBTIJUHWVNETBHCZLSVSEOFDDXQVLBRLMNDRKMGWXNXVWJUDSFBZACPBNPJEMPSOMPLOJTJXXMYJIZIX");
    msg.attributes.assign("YUIANZYMEAONGXKXQMHOKQU");

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
    msg.setTimeStamp(0.026258674290659423);
    msg.setSource(15130U);
    msg.setSourceEntity(241U);
    msg.setDestination(60795U);
    msg.setDestinationEntity(182U);
    msg.command = 170U;
    msg.goal_id.assign("QFHZXENPQOPXCCGLOACGCBUASNDYJVYMJZATYHAQGNEFIZNGLRV");
    msg.goal_xml.assign("QOGLEGIJRRXNVKAVUYGKAJNPOTJKRAQPEOIINJIDVMPGIBFMGPPOXEBGCVRXNSPGLQSJZKTOGFHNHMTHEAKDUKXMIMFYZVNEEBUWRURJASWWZYIDXHQWVTLXCMDHLKWZNGLIWQPETZBETNWDITJRSOJAFQMDALFUIBTONDNWLZMYSRYUTVJWXEHVQUPBFOQYYEFOPKQCOYSDJUSHFVKBBCATHLSRMBASUUPSYQCWHDFXAVZLM");

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
    msg.setTimeStamp(0.48255125925017006);
    msg.setSource(20160U);
    msg.setSourceEntity(62U);
    msg.setDestination(58497U);
    msg.setDestinationEntity(8U);
    msg.command = 165U;
    msg.goal_id.assign("SCJMSRNDHBNSGVEETOWMFLOPWYXWHVWVSKTOPWHZAMNGBRXSHLCUKCCQJUJDYGZOJBZDTRJXNUQNQRHHTSWAIDCGTMFFIPSYJCEENZRZAPABRJBGANGJCVYKCKAFZQFLVRHWWZYODFTICYDIHGLSRIOSUMDXPMIBGYFKUEEMTIZLOOGKWQENYUXULXXRPAXPLDFLVFYZKTUVHIVKECALLVMPVOABODTBEMIBRWBPPKJMHQSZEQNNUQAQ");
    msg.goal_xml.assign("JFXILWHGOZMNLMZAHBZCKTQAODMLSZZWOCATFFEGYJROAFKVPNAHYWXJSLQNX");

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
    msg.setTimeStamp(0.012449762676411846);
    msg.setSource(34817U);
    msg.setSourceEntity(68U);
    msg.setDestination(15198U);
    msg.setDestinationEntity(118U);
    msg.command = 4U;
    msg.goal_id.assign("EAGJXGJVNUHJJUDSKYWVFZBQODIMEWSPZFHTTXIIDQNCORAWFUDLOWAUKQHAVUUMLXQTYMREBPNHOPBNQADMGYLKIYRKEZEWLDQJGWLCTCFNQUOJAJXCASZMPHCXVIQPXMRKMHYKKBPNFXVRUSYAZYPMRGRCBR");
    msg.goal_xml.assign("HEXTAXIKKEDKAJJIWOPDUKBGPTEQCNMUELAPSBOVNVBHCGUBGZJJLCKIENNMFTKDPMIRASQSWNWVWTHSHFXAATXGFCHFWAUOZVHPFRVVDGIZBUURNGRDVTSXXETYSGEXOJDCZBCYAMCAQSNQRULRGZWYGYKOBYZYSNIZNRXDBJYJCPNXOGSUYSMJTRDHVQDOWKKDELQVHLUFEVFHPYIBOCZQROPMOUMFLTIMM");

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
    msg.setTimeStamp(0.05425165791591702);
    msg.setSource(24292U);
    msg.setSourceEntity(228U);
    msg.setDestination(14747U);
    msg.setDestinationEntity(229U);
    msg.op = 157U;
    msg.goal_id.assign("VDBXKVSBABWNOPB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XSEEBVJIPOYHONBJFTAPNWWGSVZZJGYMHQGOSSBQRUUQSMKWDLCLNFUVQHXGHZEFRZBUUNTXRDMDZKQRWWCPHFQKOUDSYAOVDRTLIPTPMORVDSFBXJPNYADIYFFUTVVBJFWARGDLPFCCYGVQKJDOBHHCZUXTETBQLVWSWEZBPGXMWNAKYHVXMMKZCNMCACJ");
    tmp_msg_0.predicate.assign("BEFKELKQWAOGWMZVEJKUDVORJVIQPOPJLSMHTULXNVSTIYFL");
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
    msg.setTimeStamp(0.5142887790715092);
    msg.setSource(21292U);
    msg.setSourceEntity(194U);
    msg.setDestination(32590U);
    msg.setDestinationEntity(173U);
    msg.op = 126U;
    msg.goal_id.assign("AYCPDCORIOYSISTNSALXLXDDHHZGZQJBCGDEQMYPKGLPDFHNBMQYPMSUJCCBMIPWFKVAFVMFGSGDXGDBORWAMEVSVRYRESGOASAVIMHUOXJOUVZONANELOPBEXCEEWAHYZAYPUFZSKGGKYAFVDXIJMMBZILDHNINKFFLFZUBWQPWMCQKHEHIWJCWVFBRPLXTJPLTBHXUXKNCTUXURROTUEICHWSVDQJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HMXTNXPYAVFEDUWANFSMAQODWNRKCPGFZWJYQLFTELOLJJNDRVXHSDRGVBTXZZOTEUIWYQETMIQVNSJUPBCEIFZYZWXJNXBYOFHRBSKGLFMTARUDRISCQLNZDROJAMMAJKLHBKSTGQLWWBUMVVBYVYEPHBKHMQGQTMPKJURIVIUZXHZCKOLHGCXPLFXNIVZBYCANSGJYEOACOWQYUESUPEFDBFHKHZPGAEVGIOD");
    tmp_msg_0.predicate.assign("MIRAEHNDRXIDTSMJZHYOZSAMVHXNWTCIRDTTPPAMQKLAUYSEOGWJVBFKXGYWEH");
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
    msg.setTimeStamp(0.6221180926286837);
    msg.setSource(4296U);
    msg.setSourceEntity(5U);
    msg.setDestination(29972U);
    msg.setDestinationEntity(29U);
    msg.op = 61U;
    msg.goal_id.assign("KBQVKPUTAFCPXOWKPKUVEIOAUOCAZOXYIPSSACNFWPHZRQVLFTEVAT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FYABBNKFNDEDVLYKRBDIBHNCJDRJUVPVRSBBLYFRXTI");
    tmp_msg_0.predicate.assign("XQIQSMLGMP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TFZCGCLQPBPXCXTWOZKBSPTMAIWPQNVOPJVZLUSFHGJGBHPTHTIOWWVEYWXKFCSQUFRDDPYSRNJLZALNUSXXXEHDRWBEVXKSIDEMSHGVIDZVPFXZJYLHUFIARRYKTUGTVUWLYTFMGJJBSENLLURPHNCHKBCNQGNSBAMKCOJFMMOYIRGZFJTIKHEDOARQCUJQEANLDYGW");
    tmp_tmp_msg_0_0.attr_type = 99U;
    tmp_tmp_msg_0_0.min.assign("VFALMJKSKDPZCCLRDEIUGOO");
    tmp_tmp_msg_0_0.max.assign("RCKXSGQVKYGGUCAWSBUVRDTWAIIRAAAIXGHFDSNOOSRQAPPKKFSQVRVMLJRUTPZLZHILNZHYUYTY");
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
    msg.setTimeStamp(0.3206432521181837);
    msg.setSource(44765U);
    msg.setSourceEntity(167U);
    msg.setDestination(42164U);
    msg.setDestinationEntity(247U);
    msg.name.assign("ZBKDQMPMEHJKNROQHQRCDNSTEKXGCGCEYXGZHVRURVOOCVFPJYKYIKFYCMBUHQRNTXVTSXPLILUYFCIIZZSBILQVYNFDSEZNOVBGOCDLLKHJJBJWAILZTIVPAYOXWUGSTXJHYSUTOJAMQBXNJALPKIEQTQWFXGPPMAKIUNECQDHBDWVCFTORIPFNWSKXZTYARFELTOHALRSMDBRFWWJB");
    msg.attr_type = 198U;
    msg.min.assign("TCDGQBZVXTQHALASPYJWMNEXSGYCHFBVTUZFKKEZXMOIAOJJGCG");
    msg.max.assign("UXPKLWPHYPIYTAJLGDOXDSPZCGITCRGBMORAXONQVZZJHMMQRZQQDYJKQXQBCXMEKNGUJOTIGYCFN");

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
    msg.setTimeStamp(0.015289448139076733);
    msg.setSource(64703U);
    msg.setSourceEntity(95U);
    msg.setDestination(42479U);
    msg.setDestinationEntity(163U);
    msg.name.assign("NESWQZDKHZDQOKXIYBUDSAPVO");
    msg.attr_type = 83U;
    msg.min.assign("VSOZKZWGOEECQNQPFCEHYGMRVJRRXLLTGVZIZKHBCCHDIM");
    msg.max.assign("EJPVCBXFCBJIDGQUGYLHXERILMXNDBADZDNRVZAMLUGSFJIOPJGAQFXJKERCFQOCJWCDIQUSPFGHXQYYRAZZKDHWSMRFJTLMTSSXQIXRRYBOL");

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
    msg.setTimeStamp(0.04079978885784885);
    msg.setSource(17843U);
    msg.setSourceEntity(89U);
    msg.setDestination(15020U);
    msg.setDestinationEntity(243U);
    msg.name.assign("JKRZJIXFSPWXMWFUAPCJXQCQZFGCLVWNWGECNNOTJHPDQYQOFMKGFTNYTEYEMKJHFYZELBVUBIIGBMDJUSWWETUXGADBHOYSIMGXDSDPCETVKLMESJATYMKZLLHKZAPBFQUADPPHXORYACQAVM");
    msg.attr_type = 240U;
    msg.min.assign("QPHLNPNUJTGUQLONDEIBKSEVBNRILRWIGLVBSGETXTGZYACDO");
    msg.max.assign("RPZRKVTANIICLRRFHCYTAEQCZQTLNBYHXXJEOXHBDWUBFZPYWEAOIOQZPFBOMPYOVSNSHIETQA");

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
    msg.setTimeStamp(0.275205418246782);
    msg.setSource(46653U);
    msg.setSourceEntity(205U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(26U);
    msg.timeline.assign("CYFSHBSCCYXQUORPVMTNSWJVTXWQUGIEPTIFPICQBKPYGZZEFRNWWBEKIOXJFGMBQOFMSNJCADURHIUXDRSAYAGHAILHCHYFJSDOOJBZWHIFFUAMPINMTSLJWEFDDKMTRYNNLEPYCPKMHPXAECGBOLAXRYVYSOPBLQ");
    msg.predicate.assign("ZKVFRIONDFWBXCDZEUTIUW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YLVTAMYWAKFHDQTRPUPNUYPFSJCVLEKW");
    tmp_msg_0.attr_type = 86U;
    tmp_msg_0.min.assign("OLAMWCZUULIZYJVQKAVOHWQPBFXFILHIAFLCAOSLRVCQMZRJFNJYMIPNMEZZWBCPQFJVDEADAYLOFSKHDFCEXRGGVFOFJNUWKHQPXUCJLOMYHXCNSJKSSHGYGDGKGJTYWBIPULHBPNBAIUQLSCREDVEYPBMVBRKSDEUZBYGSNKUTKKFINKEWOTWMDOQXATVUTDYZNCIPMITJGTOCNWARTZHNRELXOHXPMSDMVIVTRXREWSZHPB");
    tmp_msg_0.max.assign("BAOCMPCRYKREWGZMFTFEPNLDIFQFNQNXRITPASUTGHWGZRLXIJJLEGVWTIXYZPFNSSEPBKVTQXOWKMBBYWUUOHZUSHJQMBUSVCBYTLIXDEKMVDJSOMCYKSWDMFRXVLQFHHDAFHCALHRTVTQGSUBLKDAOBDMRGQANYGLPJYNIXCEGUKONTRWHWURKPCMXTQVOXYJZEDIFAAB");
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
    msg.setTimeStamp(0.40974021241088465);
    msg.setSource(23409U);
    msg.setSourceEntity(165U);
    msg.setDestination(52569U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("LVZTMYMZGPNSTHZERKYFEKWBMBCVWHPDOZPCMZAKIWUYIQDFIKLQMIUXQFIGTXQDFJMQAZCGRYCXVJRNIIEGRQFSJYSNEBHQCFWTDBVRQPKMSXGUACMVOAKDOPJMNVRYJCBZBHVIRXNHWLNHPEPQFTWEGDOGANWWOBLENISAJRIBSLDVDLGOXPUBKSQNSZRKHUVYYTBM");
    msg.predicate.assign("PIANFPJYMRQMJJRXWZXAXRCYUZQSFFJISUGZYLZMXLJDWWCBEAHMCAQRMOFBEJZTGFZBPNGGNURBMUOVGMWLATZVJURIWVOLPCKHQZJNDSDIOTIAOUZRTUGEACTNFKTVKITKLBLTMQBBYYDLYIABUOSFKWDRPRPNSAQCDHYEVXDNWSGFRHHEQFMUEPSKCFBMKQQDHNVCHPLHCVEDAIJYXHNWYOOVXICEIKXK");

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
    msg.setTimeStamp(0.3671924311817345);
    msg.setSource(42977U);
    msg.setSourceEntity(25U);
    msg.setDestination(35780U);
    msg.setDestinationEntity(85U);
    msg.timeline.assign("IFUSEQGSDCZQCBQLIUKIWMSGUVNEHCEOZLGD");
    msg.predicate.assign("ESRCKXLXHNRSDJKWCYBPGJSLTDALGFQJIFOGSWZIPYXIEAWHNUFQCLMJVOHOIOMUTEYEWAFOWVZVHZGDENESSSDRZCEAEXKNQROUBZUXMBZNRVXJEOPKHKPDQHDIGYVPCMRALVMZVJYKBLPQO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VXODYOOQLPRQTKPZXIWBNXQQZWDNNIKVIRTJCRDVEIAWLYQSNFFSFVADGIRDLMHPMTVCUNHJIZXYRTBOQBHUFBCZHSTIFPMUAHJTFAQEXYNAZEWPLSSFPJHEZWRCOVNDMOPGNXXLKKXZMEVHKLFTGMOBVCUJUAMSQSGYDWYWEKYGTRZYGAEIYBUUDELFICDSCGOKGVDJAHZZWG");
    tmp_msg_0.attr_type = 66U;
    tmp_msg_0.min.assign("KKMZSVSFSJAIDMDEOCYHBCCTCUPUIHJEPRXZNYLQNTNDGOLFURCKNHBYAJHJBDBQJWIGTWMPHJQDAAJEBSMQPTPYCMAUBKRFWOCOIXYWUFQZNPPNHZRXH");
    tmp_msg_0.max.assign("KACSUKQRPFYLISYEXMBBEPTYDFWZSVUPXIHOPGNZDHDERVCLWWACIAXFUBBKDMQJUWHOHMQNRLKGAGJLCGMY");
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
    msg.setTimeStamp(0.4572296955503894);
    msg.setSource(24287U);
    msg.setSourceEntity(67U);
    msg.setDestination(36U);
    msg.setDestinationEntity(177U);
    msg.reactor.assign("EBAVDACLBMQDYSQXMVNGOJJRYIUMZWGPXDQSOKHAGCXRDXTNPEONMLNCUIMEFUSAHHROVEIVYCRIIMZFSWSDQZGWJFWWEGNVTCXJYBLLJOBRUAZLDCTHKPKMOXSQUYQZOWPPIHMFZDLYGTWKLSKKPEXJPLPTRJFWXMOIDXTZDQCSHTRFIEJBKVBSBUKGVIZMYYURKWHGOHTJHEIVDTAFPZQNYBKQGUU");

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
    msg.setTimeStamp(0.8620566617864689);
    msg.setSource(46074U);
    msg.setSourceEntity(202U);
    msg.setDestination(11309U);
    msg.setDestinationEntity(79U);
    msg.reactor.assign("RLCYLBPKSEBKKZHZGVLQXSNKZMCDSMABTZQWAZNCTRVSWNARHGVFPHZDQSJH");

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
    msg.setTimeStamp(0.09913470550835402);
    msg.setSource(6860U);
    msg.setSourceEntity(87U);
    msg.setDestination(43251U);
    msg.setDestinationEntity(162U);
    msg.reactor.assign("HMMBXZABHUOPXFZSKBNCHNEJAPPDFMWJUZIEAQXHEZTYIVBRNRDLMVTXCLIKMDCTDYICPDGEVTOZAYWNPGDFMIHUHAEQWQVGPNTVNILWHUEXSWSGUGRBTE");

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
    msg.setTimeStamp(0.2737940792482102);
    msg.setSource(7105U);
    msg.setSourceEntity(30U);
    msg.setDestination(53017U);
    msg.setDestinationEntity(95U);
    msg.topic.assign("GSRUAFBWOEURRWLZZGIBJQLLDQKZLUEDMWEMMPJHVLPPPSBHPZJYNWXPOJOVMBAXASCECBYQUDNHUBBKRISXRYUKRTXAPZMDQAFDCRHHNSGTCSCIAZESQAATKIYOYNUNGTZBFMTOOKTJGKVC");
    msg.data.assign("EZKMHPKJLRFYYHRDQQQAEPCNEAAAOEHBPTPLASDRMZVYOLGZAOVFVCIRNHTEHUCJKIBGLQMKUNFXRASXLICKMXSKCIBALUVDYWJMCFWJTXJBDDVDLOXSYYTZZKUWAUJSQIODCNWGIZEBXNIFBBPTQZMTFPDXOTXPNSQGYLUPBQTGUGCHRZPSLRRHUHDWESFGNKJRKBQCXWYWOKG");

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
    msg.setTimeStamp(0.4860356028715198);
    msg.setSource(63380U);
    msg.setSourceEntity(106U);
    msg.setDestination(26532U);
    msg.setDestinationEntity(76U);
    msg.topic.assign("DEEDZYPQFRFHQAJKISUYXVOISDZPCBSKTWYBQGALPFSHOCRMHUUVUAJTLWWMPDFHFMEICZGXVNRNPWMWJZSDAYVUKJIGYISDPEAPACKLPAWOFORXRUKGBXANYDBKEVUIGBNJLNSEWTLZHDIHCQGBVPFRQYJEOQCARX");
    msg.data.assign("FFLSAOTONMEJVNZHUFUDXAWDOVDOOPADHSJHLZCWBJPBZKOIJVUNZYAGUIXBLQVQEYBMGDXTQYEHJYLSHWGQKLYUMWXQNLTJNQGAFPBXXOSKGXVNWCVHCISZKBJRDARCMIPMIMDVKEETZMIUGQXMVCPGBYKHNQURYZDGFNZTCDQWTFRRTEAFBOIWURPRGSIRFLYTPEJAZAYKQLKBCCVPFJNLBVY");

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
    msg.setTimeStamp(0.7318024934343252);
    msg.setSource(22758U);
    msg.setSourceEntity(229U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(161U);
    msg.topic.assign("PALJSGCARUIGAZRCOLEDLAHPZFHKHISPBJFQXHJRXJNZRMHHBVOGIUFKS");
    msg.data.assign("WNKDGQCGHOUTPHHFYX");

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
    msg.setTimeStamp(0.6173629772350927);
    msg.setSource(56554U);
    msg.setSourceEntity(77U);
    msg.setDestination(39735U);
    msg.setDestinationEntity(189U);
    msg.frameid = 54U;
    const signed char tmp_msg_0[] = {-95, 125, -105, 87, -127, -90, 37, 64, -60, 79, 6, 34, -108, 73, -55, 47, 78, 0, -2, 31, -115, -82, 67, -51, 94, 99, 53, -25, -82, 118, 47, 54, -118, 47, -1, -66, -33, -55, -1, 91, 91, 25, 65, 125, 121, -25, 11, 6, 123};
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
    msg.setTimeStamp(0.9989262775826022);
    msg.setSource(55532U);
    msg.setSourceEntity(165U);
    msg.setDestination(26401U);
    msg.setDestinationEntity(197U);
    msg.frameid = 106U;
    const signed char tmp_msg_0[] = {22, -114, 105, 65, -98, -89, 19, -67, -28, 122, 63, -10, 53, 110, -73, 77, 85, 126, -29, -52, 105, -95, -102, -26, 90, 100, -26, 80, -19, -45, 123, -8, 53, 23, -73, -101, 29, -52, -74, 0, 66, -71, -29, -4, -13, -67, 74, 11, 91, -22, -65, 95, 14, 39, -15, -21, 24, -94, -45, 64, -14, -49, 59, 2, 52, -13, -114, -92, 103, -13, 53, -26, -44, 39, 77, 24, 20, 116, -61, -21, -123, -44, -99, -46, -76, -65, -54, -95, -52, 83, 88, -1, -35, 26, 50, 44, -78, 61, -75, -71, 51, 1, -17, 4, 34, -125, 68, 108, 20, 22, 0, -38, -92, -46, 68, -90, 96, 78, -6, 23, -40, -54, 67, -31, -31, -71, 114, -65, -69, 6, 11, 55, -46, 97, -48, -49, 114, -64, -3, 87, 35, 76, -23, -19, 35, 116, -105, 9, 105, -120, 17, 12, -52, 117, -72, 111, -70, 27, 41, -85, -74, 26, -33, -92, -1, 84, -112, -81, 80, 39, 119, -79, 107, 116, -41, 80, -125, -72, 111, 69, -106, 85, 56, -4, 106, 81, -94, 58, -23, 59};
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
    msg.setTimeStamp(0.6781855853062905);
    msg.setSource(62458U);
    msg.setSourceEntity(132U);
    msg.setDestination(25775U);
    msg.setDestinationEntity(14U);
    msg.frameid = 88U;
    const signed char tmp_msg_0[] = {-87, 89, -20, 49, 27, 111, -64, 55, -92, 6, 96, -1, -46, 77, -47, -109, -16, -124, -104, -76, 62, 87, 28, 69, -128, 1, 7, 30, -124, 4, 124, -43, -92, 2, -10, -46, -65, 30, 66, 29, 67, 97, 93, 70, -48, 70, 91, 108, -7, -1, 21, 45, -103, -123, 36, 74, 48, -126, -44, -25, 40, -71, 47, -89, 50, -111, 98, -77, 107, -59, 13, 66, -16, -100, 81, 106, 76, 66, 113, -93, -88, 84, 82, 16, 109, 29, -41, 95, 57, 118, 6, -69, -59, -4, 20, -22, 98, 121, -22, -82, 75, 94, 6};
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
    msg.setTimeStamp(0.5587619595678306);
    msg.setSource(60378U);
    msg.setSourceEntity(241U);
    msg.setDestination(7402U);
    msg.setDestinationEntity(229U);
    msg.fps = 240U;
    msg.quality = 44U;
    msg.reps = 117U;
    msg.tsize = 108U;

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
    msg.setTimeStamp(0.0020576317302140046);
    msg.setSource(60317U);
    msg.setSourceEntity(69U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(164U);
    msg.fps = 54U;
    msg.quality = 129U;
    msg.reps = 11U;
    msg.tsize = 196U;

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
    msg.setTimeStamp(0.5391934753800619);
    msg.setSource(15719U);
    msg.setSourceEntity(146U);
    msg.setDestination(21167U);
    msg.setDestinationEntity(62U);
    msg.fps = 243U;
    msg.quality = 132U;
    msg.reps = 37U;
    msg.tsize = 141U;

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
    msg.setTimeStamp(0.7897717667316122);
    msg.setSource(3695U);
    msg.setSourceEntity(10U);
    msg.setDestination(41000U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.9462490257906745;
    msg.lon = 0.10453851545866866;
    msg.depth = 238U;
    msg.speed = 0.3162303267751817;
    msg.psi = 0.12130055602322565;

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
    msg.setTimeStamp(0.1651641739256613);
    msg.setSource(38926U);
    msg.setSourceEntity(43U);
    msg.setDestination(49792U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.9587173079981087;
    msg.lon = 0.08186687999487574;
    msg.depth = 185U;
    msg.speed = 0.3102899633487116;
    msg.psi = 0.39259221527476285;

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
    msg.setTimeStamp(0.6465512339434054);
    msg.setSource(34082U);
    msg.setSourceEntity(132U);
    msg.setDestination(23627U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.2436072863578188;
    msg.lon = 0.7094291349148663;
    msg.depth = 179U;
    msg.speed = 0.9470063445685302;
    msg.psi = 0.06984948528530288;

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
    msg.setTimeStamp(0.9145352147663408);
    msg.setSource(9456U);
    msg.setSourceEntity(10U);
    msg.setDestination(52720U);
    msg.setDestinationEntity(13U);
    msg.label.assign("RRVKKSQRMORRXNTCYCTRIVFNUTXTPFDULEIRLYJNBAMKSCEWTQATSMXTWKZPWHNGCONUQPBJLDTCLPECZWASZBBGZFHUTNJGI");
    msg.lat = 0.21327288531790312;
    msg.lon = 0.8607001747936655;
    msg.z = 0.14735544864926542;
    msg.z_units = 90U;
    msg.cog = 0.44001496997245404;
    msg.sog = 0.2210599640850035;

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
    msg.setTimeStamp(0.2868952493969107);
    msg.setSource(19964U);
    msg.setSourceEntity(246U);
    msg.setDestination(40891U);
    msg.setDestinationEntity(90U);
    msg.label.assign("ELSDZBOCDRVNWXPIJGXNIJIHAOKBUMTBIUAJYSZWFQJFVZBLAAQRKNQQZWPKCFXYSROPELAHNJFFFCWRPZDWWQZTODPKBAGWOBJXKZFRVEVCQOCDBRJOUEUXTBTGSSVCNDYFMMXNTGAYHGSYDMLQCBNNHXYCSENLZYZRGLVJMKGYOIKWUGPLMXHAPZHVKIIKFIYEUQBARCPGMHLUTNDIMLPHDMSOTJVQRHWFLEQSGAOVIJVPDTUEY");
    msg.lat = 0.8133343647043025;
    msg.lon = 0.23392426438018643;
    msg.z = 0.46715075553794505;
    msg.z_units = 175U;
    msg.cog = 0.031653639806414224;
    msg.sog = 0.8601667879800518;

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
    msg.setTimeStamp(0.03014212851957565);
    msg.setSource(2083U);
    msg.setSourceEntity(91U);
    msg.setDestination(44560U);
    msg.setDestinationEntity(71U);
    msg.label.assign("DFIFXOLFMYWYBJGQUVOWCWYNRDZEANERKSGLICXJOVECSKZPTXFBBRLRUMYYTEXXVRDGFDSLSJHIOGOGNCEAVSGKUDALAHTZZNTOMXJCCXAZFUITAFZWIZHWVHASYRDPPQVHGBCUAEDSTWPEFZJVKQBHLMUDHFQVKSWJFMPICL");
    msg.lat = 0.4137462969696596;
    msg.lon = 0.412100548430109;
    msg.z = 0.6225312690981395;
    msg.z_units = 118U;
    msg.cog = 0.02541472106333753;
    msg.sog = 0.6068444057449249;

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
    msg.setTimeStamp(0.9414568465213988);
    msg.setSource(18014U);
    msg.setSourceEntity(92U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(50U);
    msg.name.assign("MIIGRINZMWYCZ");
    msg.value.assign("CBVGKDPRZGAMOWZSQXUQAVXPIXHHIJZLIKGHYZRKFEFPOYNUXYDSPQRSAETLWUFFQMXBNJZFZWDNLRMHKBDQYFEQR");

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
    msg.setTimeStamp(0.9396701686310693);
    msg.setSource(55187U);
    msg.setSourceEntity(245U);
    msg.setDestination(48500U);
    msg.setDestinationEntity(163U);
    msg.name.assign("LASUQUHEEWVKOWSLEWWTMOXUAIEQUMYYTOPNDPQHKZDPDDIPLUJZPIKCSABIACRXCRGTFYUVZDANPPVCSHB");
    msg.value.assign("ZNXHZUKVSCKLQPAPZZOEMLMJGYYKJJQKRIXSLRGBPACPPMDQQEBRFMQTEYKWOHSWNGVJTFOIPWUBAJHAQYWUERVVAKOALETNGZMJTUZNOYFTBWIGXLSRXJVYQHHCFNRIFUMQIBCVMVLXIRXBTJVYDEDESGAGKLMUADGWSRECFENJUBDHNXFOHOHPBGTXM");

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
    msg.setTimeStamp(0.20242954540581326);
    msg.setSource(9249U);
    msg.setSourceEntity(145U);
    msg.setDestination(35670U);
    msg.setDestinationEntity(252U);
    msg.name.assign("RWHDQCEBFJWMWSPCOXWCGTXTISHMITBYUEVTDKQXUADEXYMOHEDQKBSQXLGEFEPZKQURFPJRVIQLQRWMKYLESWSNVAYGMYILQYWUGKZSDBLLDHUFHZBVMSPZYZIOHLZMCGJQXFNOCPDVIJNANJVNKFUGPWCLIPSONKRXJN");
    msg.value.assign("FCHPQRJSSIHCNYFKNQBPRDKDWOJWWWRUQSXOYLTEJPCTXMGHGYUISJODEPOAVERLXETIKSDCHVLAGZPFYJIPUNOTWUAIWQWSETFXVKERKBGMDMGHROHSNJRHLVZGMHBTBCOJZZZLYFYWRKRESMADKJHYLMYNGZMACUXZPFXUIMCJONNONQPMVALLZHMPCUQBFXAAFAZXBLDIXFTCIXYYEGT");

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
    msg.setTimeStamp(0.258859862083167);
    msg.setSource(30642U);
    msg.setSourceEntity(170U);
    msg.setDestination(41326U);
    msg.setDestinationEntity(78U);
    msg.name.assign("QSPVALTOTOBCJZFTQFIJSGBYXZMXFWOZWLDQMKTPXGPESJOXZHBUCSCGDQAZXJSVPXIHWAGJVKUBQPAEKMEJLCZMNBUNMLHFLYIWHFROYYKFOWXPNYKEAFVATCZJRRBWDIMIRSIARNCQLXBXONNGAHVWIHAHBDTEIESSHBNTPCBKGSGKQKWRRNZDJMDUCPPF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GDMZORFFFDEOHWUVPNNGDKSGOYTFHHHHHJLSQSXIIRNYOVQQAVUPBCWKTNRAPVMCJXXPUAJNFUZRUXKDUZNHBJIYITQYEAEMOOKWRICSDAWBLBYLPKJZVZWQYCFNSWBTWCOTSAGGPZSHXQVMNDTMOLZBLMXCCEMCSPKXMPNHEBTEQVRFBQXAXGDZWXZWKKKDEVLEB");
    tmp_msg_0.value.assign("BUORYZJCAJSFGIIEZMVZUNLAXSHFBRTPALKOPFSCIQWGRJUFMCGOOBGKDQIINXTDPLQYPGSVEWYURFXPMOKQHBYAGPXJVHBBIKEPNYGOHSPTMLORSWNRAMMTCOMVTAEJPHDYVCVXNEYRODRVQXXZHMEBBTCGLYNCADETTQUDNDWJYSGWFSNKMHHFOMNARXQKIAUCJWQZIEBEFUYZGIDZCIKVWJVBLJQTULXJL");
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
    msg.setTimeStamp(0.48446366322626044);
    msg.setSource(39796U);
    msg.setSourceEntity(242U);
    msg.setDestination(15673U);
    msg.setDestinationEntity(204U);
    msg.name.assign("AXZRBUGOIDEWUHGSLVSTVEAWMXNFPHYQVITXULONSFBLPGBIJEZKGPHYOAYQRTCKBMTGVSHVKLJUWJTZLSSOFUVWMKZKQXEYRGUZTTBQXXNRVDYMFYBGRQAOZUSDMMERSEENPUTVDXIADNHLEDCALACZNFQZGROFCJTJDJKNWZOFYCWEHDSOFFUUSLRAQYKMWEDBVJCDFBPGPLPAKWJXKOHCNIXJHIKNLVTQZIIQBOMJHIMGWQYCIANRYPBW");

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
    msg.setTimeStamp(0.42417428795796674);
    msg.setSource(12624U);
    msg.setSourceEntity(37U);
    msg.setDestination(37849U);
    msg.setDestinationEntity(63U);
    msg.name.assign("VQXDASZGHBVGDFWPPAYYDYUTLIJUOLGKSICARZWIWJYXKBCUEDMCMIPBAKTIFOOPHNMLJRNMUKTMOUQAQWXJUEIMPJNSTQRCREBXNZICNUAPSVWZEQLOBMZRQXPMVEIYGFSYOGJOPFJFLJNIFOHZTKTKQLGKHYFNSDAEUEHLDLZZPWBFJBWMHCBOLRWHVSERVGHBSQBHXJNCTGXTUDTESKNRCVLCVKRXYDDEQGPINVOCQAZFRTDHYXGSXZMVA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TOENANXAQGOEGTXGJPDPXCHRBKQRTHVLVVHOLZESIAMWKRCTCTXSGORFJUJISH");
    tmp_msg_0.value.assign("CKEBTAJDAUXCN");
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
    msg.setTimeStamp(0.17249122593030108);
    msg.setSource(10383U);
    msg.setSourceEntity(117U);
    msg.setDestination(43699U);
    msg.setDestinationEntity(204U);
    msg.name.assign("QQVSSHURLOIWJQJPTOCOWNGKVDCGWZRDFYGUGUBIUFUKXQZMRSDIQPFLMTDWGXZPPNSHWEMJXVEBDEJSBKITVVAFMBQIZYYCCLDFERETNCMCMXXYPYZJADPOBGVFPUEQVXKMBTFTGFKYZWNARIPIJOW");
    msg.visibility.assign("LPIJMMGLMGPJUFOVJOJKZHYLSWOYAMSNKCKBNHSJRWTTEZXIPEWDLJQOLUYDBQNLAIGDOQPCCBDTUTUPJXZGENKCQYAHBANPTVFOVOVWSHKFGLSRKUMRRXNPCMCTIFBZBKSPVTXEVDARSUQSHBVBELHRZCCIAXNJZYMIEDVWWIFXVOOYQIMQYJXFBPHVTCNNEMZAARIFMKJXWBHDFSGEFHXGUQGNX");
    msg.scope.assign("LDJQLKBUDAWSFYXCVBSXWOIVCCJJKQIBGVEDHGTRLMDPATXGFTDNLQTLWHGCUAZVSYSYMZUKSOIFYXOPNERBZAJBIJLKPRFQFMREZKPCDGPBHXABNHOAUOAGDLNFUGUMZITSEILEYRPMXNCXVFEXRETNRMWJSHJSXNDKJPQPKKQQQZJOAZDYVWNWFFTWYTWCRKQELRXMBGZBVS");

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
    msg.setTimeStamp(0.49000134441181475);
    msg.setSource(61823U);
    msg.setSourceEntity(100U);
    msg.setDestination(53635U);
    msg.setDestinationEntity(85U);
    msg.name.assign("KEKVCARFVRVEFICYLNUOCRYQVDUIHGNVRWAEFWWOLMTAOSNKDIFQSQPPJIZLYMEMZBYBHTSJUJAPBRHPUQJASUZGMCNCMRJBZZETNUQJTBWFOJBNXHZSWYJRZUTGLDQRLXDWMNOWYGVPKTMNGGDMKBTSGDQXMRPOIFFCODHXQBVKGVXKAJKCKYFTXMYHJEOXWAPHDIHQDWZPASEFHNETCISCLTOIW");
    msg.visibility.assign("SUYSIYYTEFYQKGSCKHLJUAWNBUTPNTHDNJFOAMUWFGPVZVENLTMIFPTNEOBZVSVNVNMGZWKHQXKRKCIWFWFRDLHKIZDSJOCJQUJELAINBRLMRZMANDAPMOKQHLTOVFDFXTLISYHBEYMUEZBJYPAVCXJGQHGFQQBVCCQBGRHLREIDZJRVUXJOQTXXAWYIYWGPWEPPBRBUEDSFSDOLAGPXGXKIKROMHNCCUVADWOZQDZTXHXGW");
    msg.scope.assign("QADJPCYFZMUNOCZXLHTNGFKDAMASBCURY");

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
    msg.setTimeStamp(0.1169450838704077);
    msg.setSource(34809U);
    msg.setSourceEntity(168U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(32U);
    msg.name.assign("VKLGNFDOWDQESIDJPVYFVXMUBNRIEQYERABMTXGBLLNYTDVAQCIORWMNIETLQKYGVCNRJYWBPHYEAAZXXSKZKVMUZHUZOFDGOFALSTSXFSVCYNUJCBUSGTUJEMIWQPNEHIQKUAFRFOPGDZZMXLMUWPBOIBXLDHJKWOUOYDXWSRWXWWJETHLSBEQOJRCHENQTRPQZK");
    msg.visibility.assign("DOVFJNVRVKCAXJXKQGBVOPWGZRDPHWFFNTXEYZMBKSDJTCNEISVEDCGRWGIVZOVCSNLHOQYUDYBILMIWRMDTTNSKZZYNHQCLYPJMBWUMYGDWPLLUINUQQQLSW");
    msg.scope.assign("CLEVZMSICDBKESAYVNJYZXZLEYBRHFKDGZXJKDNUVOCIDMDOAVYFFJNMGXKTBHPEQVSIHSPNQQNODWDPUJATBRSCGISPGRPTGPDPNARZWLICENHITYFBUCGOWXGMDVWSCKBAOKZHFMOULWUBRTYOIOIYYEQVNXSCYUHYZGGMMAXLUFQKRKKRTKRXUEZLXWAHEHROJIFJWSMXWIVHLWBAGE");

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
    msg.setTimeStamp(0.1163551723762819);
    msg.setSource(11848U);
    msg.setSourceEntity(139U);
    msg.setDestination(20947U);
    msg.setDestinationEntity(79U);
    msg.name.assign("KBVTPGXQIIZCLNWGZUGYHRCVXGIBCWKJYYOSWETSNVAJTMJWHHKSLOFKZAMDIUCZUNSVBNLLW");

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
    msg.setTimeStamp(0.8592505669326508);
    msg.setSource(22272U);
    msg.setSourceEntity(120U);
    msg.setDestination(42454U);
    msg.setDestinationEntity(35U);
    msg.name.assign("OURFZXYYGGIJAGMKNOKAHBJTHXSZFKPPNPACXAVULVEHMLUHDWYPQWOGSCNCOHHJLCFVFXYWSJFBQBOODEGMJSRAEDPYYEBWOYRQXPPBTLJHDBZCKKF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TAFBSOASYADSCSMCKJXGBLOTJBGUEBBNNKQLFONZZVLYWGOFWZKTAAHKFULTRBGSOEPMHPMKIL");
    tmp_msg_0.value.assign("BNTYQTRXEBQVYBSJIBMMCJBLDOPPDFZRHASQTVVSXFSQUDKMPLHXPJTDCFFUMXULYDNVXYYXLVGNWPRPRPRFIYLMGEVFLHTCDBGWNHIZNWJJPOMHQKSOHKOYWCTGWDGKKIFZNUXKMETZGZOBRALAENZXCEKJYUHGKTIOAMAVWHNSFIIVUHRSEDGIEAUWFLSWRQISKWCURZGPYMABAZCFDQUUYSTPHLBJJMXZEQORZVLKNOGIEBANJODCW");
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
    msg.setTimeStamp(0.13340755040732366);
    msg.setSource(5637U);
    msg.setSourceEntity(197U);
    msg.setDestination(27882U);
    msg.setDestinationEntity(224U);
    msg.name.assign("NMDDZJHFYPJSQCQDASZRPYGTCEVUHHUREFXOKAZDRCMEWPMFLTCJESVZWWEIGXBCWQKDAXGVZWRHSTJPUGHKSSWHMNLZUDBTCCNIVUDTXBYPWALPZGRKGMNICOPYFZGTRHUIQHING");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YANIHMMDHSPZGTMRGOVEOGDFCLYQQLFDUGUZBOTYQREQRXOFHXFHIISDRDRLDCIVSHCUPLMPTBOTESQEJKNAVYJIIBYNDGPQQGBFCZGXKEAFWAJTDRKTNYMJWEPAAAZWPLMGCWTKZILDWVFYOMJKLMXNWWMEPNUUA");
    tmp_msg_0.value.assign("JSLBQBFPAZBVOFQKRNTHYSDBFJPONMXHMLBWNIYCMOEAIZDRCMNISGOKEGBANVEKQNYOXUIMBGVWRKCTEOFNIVLJCVHLHTAENPQMJXIPRJKGGAWWOTZJSTFUUXWGLPZMRGQYVKKPUAZDHDVJRYJQHSLRSCCIILWFKTQYULHEXYGHOMXCRTFRPWARPKTBSXLXQAOCPDMQEJZBEYMFAJUK");
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
    msg.setTimeStamp(0.08316800263681978);
    msg.setSource(58817U);
    msg.setSourceEntity(50U);
    msg.setDestination(19939U);
    msg.setDestinationEntity(25U);
    msg.name.assign("AILNPYCOKHQGSZFGBPLYDBSZIFMVBWAYNNFKXPAYKXKQAUBFUZUSWXWKIRKMUJRGDMSXUOQEGMCTVYAFZRDXIDJBEITTSBAPADPQERKZSSJDGZMLQVOX");

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
    msg.setTimeStamp(0.8065772138517413);
    msg.setSource(6292U);
    msg.setSourceEntity(253U);
    msg.setDestination(30504U);
    msg.setDestinationEntity(157U);
    msg.name.assign("WFVZFZZLBQASUPPRVSWEHCSORXUYXUSAPYVYRSDNPUTBUWCMYLEHIMRFUAKZEENXVDUPLUVKIXVEKDOMYZXPKXGVIMPMDOGBXEDNKYTNHFDDEJLDGQTCJNJZOKJFKABVRNTKHBWHBEIJQOIEYOYFTJJXBYRFCSUAGBIVJCBCGMVTHONNMJDWTWGTLZTQCCFIWOLNGO");

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
    msg.setTimeStamp(0.3446551068271406);
    msg.setSource(56479U);
    msg.setSourceEntity(117U);
    msg.setDestination(36870U);
    msg.setDestinationEntity(90U);
    msg.name.assign("DCLMAZFQJCERKYOSJMHFCMWYJCTUVHHRHPVZADTJ");

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
    msg.setTimeStamp(0.4001487033798141);
    msg.setSource(13719U);
    msg.setSourceEntity(218U);
    msg.setDestination(50428U);
    msg.setDestinationEntity(133U);
    msg.timeout = 351794551U;

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
    msg.setTimeStamp(0.6513114213355137);
    msg.setSource(1719U);
    msg.setSourceEntity(3U);
    msg.setDestination(5886U);
    msg.setDestinationEntity(250U);
    msg.timeout = 1946811899U;

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
    msg.setTimeStamp(0.9607766019188627);
    msg.setSource(39655U);
    msg.setSourceEntity(118U);
    msg.setDestination(57698U);
    msg.setDestinationEntity(247U);
    msg.timeout = 1241486647U;

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
    msg.setTimeStamp(0.3180997709688844);
    msg.setSource(41558U);
    msg.setSourceEntity(58U);
    msg.setDestination(58270U);
    msg.setDestinationEntity(150U);
    msg.sessid = 1223470777U;

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
    msg.setTimeStamp(0.26729371810003144);
    msg.setSource(54781U);
    msg.setSourceEntity(16U);
    msg.setDestination(38064U);
    msg.setDestinationEntity(242U);
    msg.sessid = 2193005696U;

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
    msg.setTimeStamp(0.9890164377515667);
    msg.setSource(33995U);
    msg.setSourceEntity(13U);
    msg.setDestination(30369U);
    msg.setDestinationEntity(195U);
    msg.sessid = 3188689446U;

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
    msg.setTimeStamp(0.5036838555988954);
    msg.setSource(42317U);
    msg.setSourceEntity(117U);
    msg.setDestination(53221U);
    msg.setDestinationEntity(3U);
    msg.sessid = 887263745U;
    msg.messages.assign("BKYFZJVRLTURJVYXJSAXDIPQ");

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
    msg.setTimeStamp(0.5510068525789438);
    msg.setSource(25389U);
    msg.setSourceEntity(55U);
    msg.setDestination(29209U);
    msg.setDestinationEntity(147U);
    msg.sessid = 3664582321U;
    msg.messages.assign("YOMBNYJTNRFGMEBMVMSCTIWCRBFGUATJBDCUKNXGDQAVMRSHZJHVESLMSSRGGZKEXMUQWVWHUMWPSHEJREFRKWDKWWJMVVJLCZDRHPRZGJKTNALJCAXPX");

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
    msg.setTimeStamp(0.15455480127298737);
    msg.setSource(16324U);
    msg.setSourceEntity(242U);
    msg.setDestination(34646U);
    msg.setDestinationEntity(40U);
    msg.sessid = 1062984462U;
    msg.messages.assign("IUSSXWYQBDMNFIJHGEFNBZMCNOSBIVCNPPJAMTTZRFORFHZAHVWLJXULLGPBWMPOUEBYYMWXSGIPJKUPWTBSSWYNIDJZLOUZBGQFVPHJKQUNRSMOMYXEKYCPIHDBGRDAZAZGKCBQEXNEIUSFACVDWQTRYGKDAHXZAMLWQHZFIRJRPRQRPGDATLCOKHRTFEEVUDUWTVOBNXT");

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
    msg.setTimeStamp(0.3776181246569086);
    msg.setSource(2821U);
    msg.setSourceEntity(98U);
    msg.setDestination(57236U);
    msg.setDestinationEntity(15U);
    msg.sessid = 2886289697U;

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
    msg.setTimeStamp(0.011439051535111044);
    msg.setSource(26121U);
    msg.setSourceEntity(235U);
    msg.setDestination(58768U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1869999434U;

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
    msg.setTimeStamp(0.16292720416691964);
    msg.setSource(65194U);
    msg.setSourceEntity(105U);
    msg.setDestination(57099U);
    msg.setDestinationEntity(248U);
    msg.sessid = 2228365048U;

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
    msg.setTimeStamp(0.2931314083104505);
    msg.setSource(34909U);
    msg.setSourceEntity(206U);
    msg.setDestination(21249U);
    msg.setDestinationEntity(167U);
    msg.sessid = 2366673510U;
    msg.status = 91U;

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
    msg.setTimeStamp(0.12186747319165347);
    msg.setSource(54428U);
    msg.setSourceEntity(46U);
    msg.setDestination(61576U);
    msg.setDestinationEntity(133U);
    msg.sessid = 471515888U;
    msg.status = 109U;

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
    msg.setTimeStamp(0.7760752228126285);
    msg.setSource(35029U);
    msg.setSourceEntity(99U);
    msg.setDestination(49717U);
    msg.setDestinationEntity(58U);
    msg.sessid = 735079833U;
    msg.status = 53U;

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
    msg.setTimeStamp(0.6338814701509267);
    msg.setSource(19615U);
    msg.setSourceEntity(145U);
    msg.setDestination(11941U);
    msg.setDestinationEntity(42U);
    msg.name.assign("WNEXCIMOQPADRXZTHFFKEGVHJMXYRCVDSIPZFUIOXMDYLJXGWNSZCCJNCONWOLRMZCODYGPAPVLITFKHBIIKBBUJLGLFTKXFFPPAWVLYKHLNINUKQSMNAQEUZUZKEMYELPTRVECZVXPBSPGUVQQJFQBSGANOSOBTDZQEJDMOTXAJWTFHOXMCKBQSXSHZGKMWWRCRTAG");

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
    msg.setTimeStamp(0.06842904741407685);
    msg.setSource(3238U);
    msg.setSourceEntity(241U);
    msg.setDestination(47800U);
    msg.setDestinationEntity(87U);
    msg.name.assign("PYHRIEUAGSQIZPOTWLVPSBVEILCMCJCCLEWQYJVNYZAMZJGQMYVCFUNHDGDQHDJQDBUOUTIFBNZTVOPRKPBPJMLUKWZPSIGBNHBKHJDVSETIGFVWVYRAOREBDUVFXLNYOWZFSTNXQSEUXZADHKLQPDRFACFJECMXKISFSKTTAIKOFRFXRX");

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
    msg.setTimeStamp(0.6990218114291854);
    msg.setSource(27702U);
    msg.setSourceEntity(43U);
    msg.setDestination(3405U);
    msg.setDestinationEntity(166U);
    msg.name.assign("PGJPWZMNXGBVNARTWFAJEZUYEFMQFLIHQLVNOSRRPIEMBMOKEONAECCSASAEYUXZWYGDLFUUURTHGYYRBRHQHHWCSCWKOMEDGNTCGUSXWUAJJGDUXLPJXBVKXHIJKLDPSXXT");

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
    msg.setTimeStamp(0.18749033286185302);
    msg.setSource(57718U);
    msg.setSourceEntity(249U);
    msg.setDestination(4150U);
    msg.setDestinationEntity(100U);
    msg.name.assign("NWBAQAYGWNQDOSLCYQUUKFIMIZQBIAEFZVACOORIMQOXTCQCNZJTTUKGCEKNLEHADBFXPRLJZWLZCEUFAWKIDNRGISASCDZEDXMFKYZJDQORZBHRVZNTNHJJLKTWFSOSOZILCJEJADPPEAJVMXMVNITPHBPSODYGHRLPYDTKXFKWTU");

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
    msg.setTimeStamp(0.40164946138614155);
    msg.setSource(40113U);
    msg.setSourceEntity(8U);
    msg.setDestination(40556U);
    msg.setDestinationEntity(226U);
    msg.name.assign("RXFHLABNHVBNIUJLKMAMSYVSLCUGCRBVXDQBJSMETXPCWRUWAOLZGEWTBXFMMFUSZUMUJYZOBRCCNMGGIKLNROGFDHQTXDZNMUSFERABSHQIOEFTRHTSYNTKRSYZOQYVDCCVJVVNQSQLALZWKOKDHXOELIHLVXYPAEKFPXRJUJQHBPHOTTYJAGXWDWJWKPGFNIYFVDOAIJZPM");

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
    msg.setTimeStamp(0.9841757843782067);
    msg.setSource(64399U);
    msg.setSourceEntity(72U);
    msg.setDestination(39127U);
    msg.setDestinationEntity(94U);
    msg.name.assign("AKWSCBEJAIIXBPFFUTLAMHTZJPHXZYAJOMIJCVBXGOYCIUJIREMZHDGSWLLGDZCGEVBTVZSIOTOQVXETUTGLMMCFNDJIQNKKHMVDWFSANFHLISWGAQPFNBMEDLARWIABHGRVWOQREOWCFGIRYDQFMQOYYKUWKDRFPFNAGETBSAWNPQTXUNHRZYJLTDQLY");

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
    msg.setTimeStamp(0.2661549468144093);
    msg.setSource(54831U);
    msg.setSourceEntity(43U);
    msg.setDestination(22388U);
    msg.setDestinationEntity(174U);
    msg.type = 254U;
    msg.error.assign("UDZPGAYWMTJJRTAHVGVCBHHYVUWZOYGIFJRBHQHTAUCTNUOSDXQMKYYIMPJSERTXELOWGZIROVNLYMSPQVJLFLBHQMXQTXQGODDEFIEWNCNCTJWAXKXSZKAVPQ");

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
    msg.setTimeStamp(0.3004785546746589);
    msg.setSource(40005U);
    msg.setSourceEntity(163U);
    msg.setDestination(16418U);
    msg.setDestinationEntity(121U);
    msg.type = 177U;
    msg.error.assign("QPSCJUWXEYXTPZOCXKSSWUURYOCMOLWAYKTWNAPFITWLUYDNPOXGGXNGCPIKVZNZITRYWDTIUERNZQF");

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
    msg.setTimeStamp(0.9293109167368044);
    msg.setSource(58143U);
    msg.setSourceEntity(191U);
    msg.setDestination(42356U);
    msg.setDestinationEntity(195U);
    msg.type = 119U;
    msg.error.assign("LDPUOLLLIUVNXBSVRRXTLZQVMWX");

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
    msg.setTimeStamp(0.5892116094011579);
    msg.setSource(6450U);
    msg.setSourceEntity(62U);
    msg.setDestination(59857U);
    msg.setDestinationEntity(8U);
    msg.seq = 33268U;
    msg.sys_dst.assign("FDNKDQYXTOHKXWBHBNBOIXRMZDJFHXUFAJYLMVUSUWJDQOEFJVBTYAIYRPHFISPZAEAASZBGMZQTKBGVSYMMUDTACDTZWSQRLWAPQTCLENZRKEWSCBEHXDS");
    msg.flags = 72U;
    const signed char tmp_msg_0[] = {83, -45, 43, -68, 114, 49, -25, -51, -29, 80, -13, 87, 31, -22, 80, 82, -45, 22, 57, -83, 72, -38, 20, -32, 62, 86, 47, 49, -76, -125, -92, -97, -125, 97, -98, 3, -106, -36, -54, 39, 90, 61, -33, -48, 108, -49, -36, 112, 111, -82, 49, -83, -90, -82, 124, 96, 60, 64, -12, -53, -67, 126, -2, -36, 126, -84, -86, -48, -7, 35, -89, 20, 61, 86, -71, -50, 41, 68, -98, 118, -61, 58, -57, 105, 90, -29, 1, 104};
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
    msg.setTimeStamp(0.42446960322217464);
    msg.setSource(19062U);
    msg.setSourceEntity(65U);
    msg.setDestination(50233U);
    msg.setDestinationEntity(229U);
    msg.seq = 54274U;
    msg.sys_dst.assign("ZQNJDVGDJCJHOTFZXMQMORSDQQMRFRXNSNLRQCELFPDDEUMJUVPYRSMBZDTOAVFBLOLYBCCHNCQPFVFEKUKRAEFTZYZQGWKOTYVFKZZXUPXFEQOPEGXCWYTMHLPKCCVOM");
    msg.flags = 29U;
    const signed char tmp_msg_0[] = {-127, -74, -86, -122, 6, -16, -21, -48, 73, -91, 65, 120, 103, -1, -14, -94, -94, 70, 120, -109, 104, 35, 71, 76, -66, -23, -46, 36, -13, 82, -33, 9, -17, 79, 125, -46, -53, -31, 87, 84, -35, 116, 62, 60, -48, 32, -103, 126, -17, 93, 93, 48, -111, 28, 55, 92, 29, -77, 39, -94, 22, 64, 69, -28, 92, -14, 114, -36, -123, 25, 2, -19, -54, 53, 39, -100, 55, 70, 94, 81, -77, 52, -111, -107, -82, -15, 54, 95, 1, 39, -57, 59, 32, -9, 111, -15, 100};
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
    msg.setTimeStamp(0.63234702732361);
    msg.setSource(54755U);
    msg.setSourceEntity(43U);
    msg.setDestination(54801U);
    msg.setDestinationEntity(177U);
    msg.seq = 6924U;
    msg.sys_dst.assign("XCTAEIOBWAAYETPTLIGBGSEELUQNBKOSOQRLZUJMAHCAUKYNWHFFKBXYMMBVUOEDIQRYSSGIQWHGNRKQFGLJFVIKZZHERHBPPLYMODWNGJFLVHXQEVASQZWONKTC");
    msg.flags = 168U;
    const signed char tmp_msg_0[] = {117, 31, -33, -115, -104, 121, -4, 36, -17, 74, 90, 83, -23, -121, 103, -96, -61};
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
    msg.setTimeStamp(0.8448461160092847);
    msg.setSource(20687U);
    msg.setSourceEntity(123U);
    msg.setDestination(55835U);
    msg.setDestinationEntity(72U);
    msg.sys_src.assign("DDPWUCRJDJISMNOVTNGONISUKHJQWTIVHQCGIJJQABABTGGTLPCCYEOZXGCLGWI");
    msg.sys_dst.assign("HQDPGXVBGOEMPRFRRBANVVXRPVNPDZHLIGCTPDNURHBVFPJJXHZPMWHLGJNVTJTCIUWOLTMALKVOINMKGLRSAANRXCAIMEFULGCSUXGKSOJSWOYAKLQ");
    msg.flags = 16U;
    const signed char tmp_msg_0[] = {-67, -116, 123, -112, -93, -111, 64, -89, -28, -98};
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
    msg.setTimeStamp(0.34432602786595434);
    msg.setSource(13416U);
    msg.setSourceEntity(211U);
    msg.setDestination(51300U);
    msg.setDestinationEntity(44U);
    msg.sys_src.assign("ATJDHATIPNRKPDVOEOPULOUFHSZYSTXEZMIWVHZWVWFJOAUECTBSOUYWPJQIGXSHAQBJMECPAZFREDJXDLRQELDKJNLYABCMWHWSHKKFOYUJHNNNJMXFDRCKUZZEOFIXENJSBMHMVSZXGXVEAPIFGKTYRYKWPNYISHKIGCFTQCGVOGGCS");
    msg.sys_dst.assign("JKKEWDULDTRICSMMPANWKWRDLTJPSNIQKOBJWUPIQAMXTAULQTTCZNKKBJXIEFZIERSGLSQWHEWHIVIVYDBGFGFOLFGVHASCLFFPWYAJDBVZZDMGSXDEGVMYJRYATFNNHJDRCEPEUMBOBYCSLUHZYXKQOOKXNQPXDXIUSQPRZPTAGQJFPNMLFAHYIXOMRONKGDOWXOZCYANCYLEMZBVTWVMZHZOXCUN");
    msg.flags = 107U;
    const signed char tmp_msg_0[] = {55, -108, -55, 105, 35, -76, -28, 11, -111, -82, -51, -42, 44, 71, -123, -89, -26, 40, -124, -10, -95, -126, 77, 33, -73, 90, 50, 113, 13, -101, -40, -120, 57, -110, 119, 34, -17, 82, -89, -15, 101, -62, -18, 30, -9, 26, 0, -106, -119, -34, 103, -58, 86, 119, -3, -89, -60, 69, 43, -92, -121, 89, 106, -49, 117, -49, -42, -28, -43, 66, 3, 76, -68, -51, -58, 50, -60, 66, 75, 76, -16, 89, 66, 64, -18, 81, -95, -48, 98, -60, -127, 114, 14, -72, -66, -111, 16, 83, 0, -7, -98, 52, 18, -128, 30, -115, 55, -113, 112, -12, -61, -81, -100, -30, -78, -82, -115, -125, -80, 14, -4, -97, 120, 95, -102, 107, -26, -37, -101, 93, 91, -11, 72, -62, -35, -56, -48, -81, 105, 25, -96, -50, -58, 67, -85, -80, -44, -8, 76, -53, 118, 110, -81, 109, 48, -4, 50, -42, -68, 25, -52, 34, -63, 2, 120, 71, 74, -101, 67, -36, 126, -41, -114, 111, -11, -14, -118, 5, -67, 113, -93, 35, -40, -101, -42, -51, -52, 31, -101, -10, 2, -46, -28, 11, 71, 8};
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
    msg.setTimeStamp(0.20934816969402792);
    msg.setSource(23884U);
    msg.setSourceEntity(196U);
    msg.setDestination(6364U);
    msg.setDestinationEntity(61U);
    msg.sys_src.assign("BAUSFSUUMARDFGSMWWUMFBCFSNNAFABRGBXGIEXGNRLYLNPUQZAJSWYITZEWCXWRJNPYBJEEIOMHCZCYMXKXFZDQWYIOXBMCQRVJCWAGIJVKRGPAAFKOBUYLOTJJZVCTOHFFPFRIJTEOHDVBVDDZZGWVNQHTMTPUGNQQSAUKNXD");
    msg.sys_dst.assign("GWYYSSOXIKRVAAAKIQRSTGPVJWMGBZFFJLWXHVFDCBMIDKIPWEFRZOBMCNFDKSNBHAHOCJACCNBKEQFRMRTWDRZQKHQDTDAGEETXNISIREOLOXPDYVMWWTQBISJXGTVYNJRCDBPAHVZQVJAEMPZWULOUDVXZJXUNJJFSTHYJTSOPKUYFMLMRQKXQLULZLHMZHTOEUYGOMGP");
    msg.flags = 37U;
    const signed char tmp_msg_0[] = {119, -42, 13, -1, 115, 99, -115, 61, 83, -49, 32, 93, -113, 3, -103, 43, -53, 44, -117, 100, -35, -27, 57, 57, 47, 46, 104, -124, 9, -119, 4, -38, 24, 116, -93, 69, -14, 10, 117, -36, -3, 57, -8, 13, -102, 32, -112, 104, 9, 37, -21, 34, 124, -57, 40, 7, 108, 110, 70, -39, 4, 6, 47, 104, -52, -20, -75, -68, 54, -26, -5, 79, -113, -96, 79, -113, -32, -68, -59, -87, -93, 45, 6, 59, 8, 69, -116, -11, -113, 111, -72, 53, 115, 37, 107, -11, 56, -95, -41, 29, 15, -89, -112, -11, 119, 112, -109, -30, 122, 56, -45};
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
    msg.setTimeStamp(0.6040588559696591);
    msg.setSource(36827U);
    msg.setSourceEntity(226U);
    msg.setDestination(38614U);
    msg.setDestinationEntity(163U);
    msg.seq = 2036U;
    msg.value = 19U;
    msg.error.assign("LGEYNCAJZTAVZRDVKIHNYZMMKVRCXBISDICOTFPSFMCLOIOQZHMPIEWBFILSRCKSTGJTWJPMLQPXRXOMBPOQADGWFWJEDUTUXMCQSOERQPEWEADWVHCLVDOVJMALBFUDGASRBOVSJHCUZOKMEFKKFQQST");

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
    msg.setTimeStamp(0.06316365251759892);
    msg.setSource(6336U);
    msg.setSourceEntity(167U);
    msg.setDestination(1294U);
    msg.setDestinationEntity(150U);
    msg.seq = 16113U;
    msg.value = 153U;
    msg.error.assign("UHFQTVRNFAQFLJSNAGPDMDDUKASHZLNIEEFCPBMEVJHBULNJPWUSYFWBWNRIRQCOTAXGYRMEAONLDEIAAYZZMEKGUVNWCDOAQSBYSEZCHOIJDPNHOBOXOXSDRNHHJQTUEXBDWOXYMRWVFLKPBREXZKRVZSYJQJJAISXTVRLKTLGMCLYVTOCSPWQRUYFKAXQIOJFDIICMUWHBJPGQGFLWHZGGETXYUKSIYMCKPZZCPKTVQCITLG");

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
    msg.setTimeStamp(0.5364983891916638);
    msg.setSource(13384U);
    msg.setSourceEntity(127U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(92U);
    msg.seq = 32496U;
    msg.value = 141U;
    msg.error.assign("ROHDLNNYUTFFLJIUDQZTJTICCBOXXWURPSSNBAPXXKIDRPZFLXLNHJHBYCVBPYAORJCPSLFGDMLWGBAMNSGEBVKERUKICKRVMZMJQRQQNSOUVDORWTHMTRSJWAIGYPSDTKDXZLPLWCFEYCJEUGHYBKNUHLVQTEFFWPPYBTGXVAZGJWOHXDFNSLANZBIQAOIQFMITVJO");

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
    msg.setTimeStamp(0.4851524906369371);
    msg.setSource(25010U);
    msg.setSourceEntity(36U);
    msg.setDestination(50756U);
    msg.setDestinationEntity(133U);
    msg.seq = 10002U;
    msg.sys.assign("BNGKHUTITCPROPMXEIMHOOKHDTAWKOVYZBMWZZDCFCTEIJSBSXPFRVVCOTWKQZIXEWQBJJENAJUFGROHVAFVEHRZXKMYYLWVZVBPDDWGMRDSCYLPVMAUTOISJYXSFKBHPDDAWLFQPLDSCMVZCOMNDGNCLYKSESUDRMWELQRTNQIXYOJFLUFGXBUJBYQHRSSEBWNQZCNTUKUIBKKYGFGQZGALYUL");
    msg.value = 0.4233147528808846;

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
    msg.setTimeStamp(0.31328666109586456);
    msg.setSource(65399U);
    msg.setSourceEntity(238U);
    msg.setDestination(36443U);
    msg.setDestinationEntity(183U);
    msg.seq = 5692U;
    msg.sys.assign("GFXXZLYJEJMRQOWKLMTOKAWVQFWE");
    msg.value = 0.4224259762400234;

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
    msg.setTimeStamp(0.36900634660778553);
    msg.setSource(46257U);
    msg.setSourceEntity(177U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(48U);
    msg.seq = 657U;
    msg.sys.assign("OUKWYVACLVLPDMTKVRKEWRVQGZHURVABSNYAQZFNICHSETHTXEOMHDNIPKAHYCTWUUOHGQFRQVGSEWNKWYFUTHQMNJCPPVRETJHBGDKPPJAYHILGCOLPFVITZGHZMZWFSPT");
    msg.value = 0.9156184278679389;

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
    msg.setTimeStamp(0.9184920711126825);
    msg.setSource(30171U);
    msg.setSourceEntity(87U);
    msg.setDestination(63965U);
    msg.setDestinationEntity(67U);
    msg.seq = 44408U;
    msg.sys_dst.assign("DINLTFSZGMZKBEQNAXBFGXMIPUJTNHKDPVKEWMUOXEOBNHUROAQDFPOOLQV");
    msg.timeout = 0.5868599984709872;

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
    msg.setTimeStamp(0.12599309686324012);
    msg.setSource(50650U);
    msg.setSourceEntity(203U);
    msg.setDestination(49167U);
    msg.setDestinationEntity(145U);
    msg.seq = 26283U;
    msg.sys_dst.assign("VHGLYSZYHTHMJBHEVQSLAWTTQZZNOKXDDMFLWKJOZUUN");
    msg.timeout = 0.8712471945541771;

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
    msg.setTimeStamp(0.9693837354183821);
    msg.setSource(65419U);
    msg.setSourceEntity(96U);
    msg.setDestination(21380U);
    msg.setDestinationEntity(143U);
    msg.seq = 39672U;
    msg.sys_dst.assign("HKFEUOBTNOSWOHCJIJYRKILEUMEQVKQKHGOJAHVOFDUPZHXCZFLRPYZEFYCCFLZGRRHXXBODZDQBRIXYVWSAKMCVUYTGCGBPSBLTDBRJFWIFLMQYTJLUVUPDBMXNDWXDEPYMZYWVQOWTBSZMU");
    msg.timeout = 0.5308074033198098;

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
    msg.setTimeStamp(0.44537930927697233);
    msg.setSource(17210U);
    msg.setSourceEntity(165U);
    msg.setDestination(15478U);
    msg.setDestinationEntity(172U);
    msg.action = 210U;
    msg.longain = 0.9493099033929359;
    msg.latgain = 0.717269237232413;
    msg.bondthick = 2044750315U;
    msg.leadgain = 0.791357177350735;
    msg.deconflgain = 0.7851964825405907;

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
    msg.setTimeStamp(0.15952962380629665);
    msg.setSource(62941U);
    msg.setSourceEntity(102U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(107U);
    msg.action = 58U;
    msg.longain = 0.28338845423106596;
    msg.latgain = 0.30248985390405103;
    msg.bondthick = 2821366283U;
    msg.leadgain = 0.18182001042165896;
    msg.deconflgain = 0.017027714705282193;

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
    msg.setTimeStamp(0.5741877269214555);
    msg.setSource(27883U);
    msg.setSourceEntity(5U);
    msg.setDestination(21599U);
    msg.setDestinationEntity(16U);
    msg.action = 201U;
    msg.longain = 0.789604380728994;
    msg.latgain = 0.16898529617786417;
    msg.bondthick = 3951720652U;
    msg.leadgain = 0.8479837971427724;
    msg.deconflgain = 0.7710178710767988;

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
    msg.setTimeStamp(0.8306632801088601);
    msg.setSource(24486U);
    msg.setSourceEntity(154U);
    msg.setDestination(17059U);
    msg.setDestinationEntity(128U);
    msg.err_mean = 0.43966757306741355;
    msg.dist_min_abs = 0.9809360263221447;
    msg.dist_min_mean = 0.36060733717959803;

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
    msg.setTimeStamp(0.9747293074943152);
    msg.setSource(4077U);
    msg.setSourceEntity(246U);
    msg.setDestination(71U);
    msg.setDestinationEntity(107U);
    msg.err_mean = 0.25988925246304306;
    msg.dist_min_abs = 0.20667254290483306;
    msg.dist_min_mean = 0.3808544810905955;

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
    msg.setTimeStamp(0.255203445576043);
    msg.setSource(37914U);
    msg.setSourceEntity(228U);
    msg.setDestination(57454U);
    msg.setDestinationEntity(80U);
    msg.err_mean = 0.7107214629449712;
    msg.dist_min_abs = 0.5313718308795682;
    msg.dist_min_mean = 0.5927546958233959;

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
    msg.setTimeStamp(0.192971793936771);
    msg.setSource(61046U);
    msg.setSourceEntity(108U);
    msg.setDestination(34958U);
    msg.setDestinationEntity(203U);
    msg.action = 74U;
    msg.lon_gain = 0.18461919123914783;
    msg.lat_gain = 0.07947842327315713;
    msg.bond_thick = 0.19251708653203736;
    msg.lead_gain = 0.32474604655250217;
    msg.deconfl_gain = 0.15472240922429892;
    msg.accel_switch_gain = 0.8171700388325905;
    msg.safe_dist = 0.18569558929946695;
    msg.deconflict_offset = 0.24141203985223925;
    msg.accel_safe_margin = 0.35268986346991105;
    msg.accel_lim_x = 0.5271861507373666;

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
    msg.setTimeStamp(0.685764448166867);
    msg.setSource(49078U);
    msg.setSourceEntity(151U);
    msg.setDestination(31831U);
    msg.setDestinationEntity(12U);
    msg.action = 177U;
    msg.lon_gain = 0.8952207272786249;
    msg.lat_gain = 0.31189586669130953;
    msg.bond_thick = 0.7734756990431978;
    msg.lead_gain = 0.06778723923685259;
    msg.deconfl_gain = 0.2092838911454039;
    msg.accel_switch_gain = 0.009144424044227328;
    msg.safe_dist = 0.2548743291220129;
    msg.deconflict_offset = 0.0758267130250615;
    msg.accel_safe_margin = 0.8737014021691768;
    msg.accel_lim_x = 0.38791530104533867;

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
    msg.setTimeStamp(0.4820114107845124);
    msg.setSource(60921U);
    msg.setSourceEntity(195U);
    msg.setDestination(60971U);
    msg.setDestinationEntity(41U);
    msg.action = 193U;
    msg.lon_gain = 0.4426999296707319;
    msg.lat_gain = 0.2959517623903908;
    msg.bond_thick = 0.6458314097150654;
    msg.lead_gain = 0.877651468440373;
    msg.deconfl_gain = 0.7672586743459585;
    msg.accel_switch_gain = 0.21799697315833244;
    msg.safe_dist = 0.1772167625208314;
    msg.deconflict_offset = 0.6378250843353094;
    msg.accel_safe_margin = 0.7261563287956823;
    msg.accel_lim_x = 0.7422399821103048;

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
    msg.setTimeStamp(0.03029249944433765);
    msg.setSource(18144U);
    msg.setSourceEntity(184U);
    msg.setDestination(19558U);
    msg.setDestinationEntity(225U);
    msg.type = 175U;
    msg.op = 70U;
    msg.err_mean = 0.8379166050475751;
    msg.dist_min_abs = 0.2498316288148773;
    msg.dist_min_mean = 0.4222544337780113;
    msg.roll_rate_mean = 0.0033926832597802603;
    msg.time = 0.07655369072996143;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 104U;
    tmp_msg_0.lon_gain = 0.2539699111530723;
    tmp_msg_0.lat_gain = 0.10169940229630536;
    tmp_msg_0.bond_thick = 0.47205888688626785;
    tmp_msg_0.lead_gain = 0.6706522244922031;
    tmp_msg_0.deconfl_gain = 0.5622615761655094;
    tmp_msg_0.accel_switch_gain = 0.273779503665718;
    tmp_msg_0.safe_dist = 0.3188751120849891;
    tmp_msg_0.deconflict_offset = 0.3193400677899151;
    tmp_msg_0.accel_safe_margin = 0.5473927871439488;
    tmp_msg_0.accel_lim_x = 0.2764168340290185;
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
    msg.setTimeStamp(0.035564337868199125);
    msg.setSource(321U);
    msg.setSourceEntity(230U);
    msg.setDestination(32813U);
    msg.setDestinationEntity(12U);
    msg.type = 72U;
    msg.op = 145U;
    msg.err_mean = 0.5564643074670074;
    msg.dist_min_abs = 0.02323580090405042;
    msg.dist_min_mean = 0.4017246692312215;
    msg.roll_rate_mean = 0.03223013034526645;
    msg.time = 0.46302212819282607;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 131U;
    tmp_msg_0.lon_gain = 0.007652434844556688;
    tmp_msg_0.lat_gain = 0.9904197025888185;
    tmp_msg_0.bond_thick = 0.06274428209386029;
    tmp_msg_0.lead_gain = 0.6090123836238293;
    tmp_msg_0.deconfl_gain = 0.9823163280114824;
    tmp_msg_0.accel_switch_gain = 0.12648506157081152;
    tmp_msg_0.safe_dist = 0.036741484671769076;
    tmp_msg_0.deconflict_offset = 0.25986740480668;
    tmp_msg_0.accel_safe_margin = 0.955342822537073;
    tmp_msg_0.accel_lim_x = 0.3260379690620374;
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
    msg.setTimeStamp(0.4384022985114848);
    msg.setSource(27327U);
    msg.setSourceEntity(151U);
    msg.setDestination(7561U);
    msg.setDestinationEntity(35U);
    msg.type = 59U;
    msg.op = 187U;
    msg.err_mean = 0.22508884860186973;
    msg.dist_min_abs = 0.9409239461936731;
    msg.dist_min_mean = 0.7424799794876528;
    msg.roll_rate_mean = 0.2720043320245663;
    msg.time = 0.8310316011247065;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 210U;
    tmp_msg_0.lon_gain = 0.6597771303089675;
    tmp_msg_0.lat_gain = 0.17754619612473288;
    tmp_msg_0.bond_thick = 0.18082958846153796;
    tmp_msg_0.lead_gain = 0.979391641914556;
    tmp_msg_0.deconfl_gain = 0.5092066173090635;
    tmp_msg_0.accel_switch_gain = 0.3655784529682672;
    tmp_msg_0.safe_dist = 0.4517146121821066;
    tmp_msg_0.deconflict_offset = 0.4033108821864029;
    tmp_msg_0.accel_safe_margin = 0.8880857832960941;
    tmp_msg_0.accel_lim_x = 0.43596165021094435;
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
    msg.setTimeStamp(0.83519601654931);
    msg.setSource(12091U);
    msg.setSourceEntity(31U);
    msg.setDestination(36318U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.9101064679149433;
    msg.lon = 0.12645335285228299;
    msg.eta = 1084305695U;
    msg.duration = 56792U;

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
    msg.setTimeStamp(0.07774495837557693);
    msg.setSource(43877U);
    msg.setSourceEntity(67U);
    msg.setDestination(42080U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.178231469624619;
    msg.lon = 0.50899045631892;
    msg.eta = 1221761428U;
    msg.duration = 976U;

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
    msg.setTimeStamp(0.026427362701721302);
    msg.setSource(63435U);
    msg.setSourceEntity(52U);
    msg.setDestination(1248U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.1858931483858539;
    msg.lon = 0.09135003897599037;
    msg.eta = 339309270U;
    msg.duration = 4000U;

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
    msg.setTimeStamp(0.6078607685808429);
    msg.setSource(28009U);
    msg.setSourceEntity(105U);
    msg.setDestination(58883U);
    msg.setDestinationEntity(27U);
    msg.plan_id = 38162U;

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
    msg.setTimeStamp(0.9266633640667998);
    msg.setSource(55896U);
    msg.setSourceEntity(52U);
    msg.setDestination(18990U);
    msg.setDestinationEntity(149U);
    msg.plan_id = 33006U;

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
    msg.setTimeStamp(0.9487323283646945);
    msg.setSource(19262U);
    msg.setSourceEntity(97U);
    msg.setDestination(48611U);
    msg.setDestinationEntity(211U);
    msg.plan_id = 6780U;

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
    msg.setTimeStamp(0.38603953352184217);
    msg.setSource(30756U);
    msg.setSourceEntity(140U);
    msg.setDestination(31088U);
    msg.setDestinationEntity(150U);
    msg.type = 218U;
    msg.command = 131U;
    msg.settings.assign("FAEJKWWUVZTZPYAWGWAMJPRDLQDLGXDFGIFLHCNCXTKXRTJXZDBQSHVOATTYNKIYFBUNFDMCYSXMUSLZFZWDLCYKJFUVYLKCBJCF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 13039U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3341472355134121;
    tmp_tmp_msg_0_0.lon = 0.9454371103563181;
    tmp_tmp_msg_0_0.eta = 3952295870U;
    tmp_tmp_msg_0_0.duration = 63543U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DLXSBNMGSTQYSQDUZCFAAIZUPZETEFXODDQAGQHHVVY");

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
    msg.setTimeStamp(0.7082736175897393);
    msg.setSource(61180U);
    msg.setSourceEntity(84U);
    msg.setDestination(990U);
    msg.setDestinationEntity(70U);
    msg.type = 155U;
    msg.command = 74U;
    msg.settings.assign("IRLGDMQTRSCVFVCNDQHODQVOTPGOMXLGAXMJUATDDCPATWSRBGHNWXNCZCRPEBULGTSSFMVUNWFLXFBRKHPWMIIJZZOUIAVBBJYFYEUPITZTNEIXENSGKZVPIVIOIWZNVZH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8600U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8358748770922066;
    tmp_tmp_msg_0_0.lon = 0.28232215733330346;
    tmp_tmp_msg_0_0.eta = 3962452450U;
    tmp_tmp_msg_0_0.duration = 16742U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BULFFYKMJVSPKBSTHXVWYMFJAAIGNKLMGJKURNFPCMENLNSFXCUHBXWPIZICEHLXEQZALBVNDSVPHAIYWOHROTHFOZVFVRUABRSKMZDQGKSQVZASXTFIRBAZWEEAATOJDDRTXPOOQTPNRZSJPHUMYWVJSYCHXQJCCKGMXIZGKOBRUUYUTOWCIIQGLDZYJBNUGDCCWMADMTNLYJQPMTQYKGLQOWBOFQZHYWKF");

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
    msg.setTimeStamp(0.9465742446291084);
    msg.setSource(31525U);
    msg.setSourceEntity(1U);
    msg.setDestination(42225U);
    msg.setDestinationEntity(231U);
    msg.type = 252U;
    msg.command = 58U;
    msg.settings.assign("FUSCZDFELGQMZKYFAMEACUYLXEFIXEKRNKSHQGWRPCACPEJSKRTPYNUMQOPGDATOTAJYJSDBJEJSRLSWPRGYSOLWSGSXDUDZKDMSXEOPVCANNOLCHDDXFVHTFUAUBBCIBOVHKMQVLURWXGNTTIJFVIHBUHQNCZPMBEOUEZBFOBWXQTVJMOOMGLQDLZBYVLRAAIAYNXHNKZZLHJINWIYGTMYVKGHNIRUQWWEJRHFICJPYDKM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 55991U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4188960621597052;
    tmp_tmp_msg_0_0.lon = 0.9767944919031224;
    tmp_tmp_msg_0_0.eta = 507978873U;
    tmp_tmp_msg_0_0.duration = 30549U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JLUJJFGELADIZNKWBBUWXWFNCXQWKQQQQEOWELGCTXHZUYJOIJZZWXVFXYFJVOEDNAMEZY");

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
    msg.setTimeStamp(0.07092741475066344);
    msg.setSource(64129U);
    msg.setSourceEntity(115U);
    msg.setDestination(4158U);
    msg.setDestinationEntity(38U);
    msg.state = 235U;
    msg.plan_id = 33982U;
    msg.wpt_id = 140U;
    msg.settings_chk = 34657U;

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
    msg.setTimeStamp(0.508311022643731);
    msg.setSource(26237U);
    msg.setSourceEntity(177U);
    msg.setDestination(40014U);
    msg.setDestinationEntity(13U);
    msg.state = 110U;
    msg.plan_id = 64393U;
    msg.wpt_id = 103U;
    msg.settings_chk = 42861U;

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
    msg.setTimeStamp(0.3354079233550087);
    msg.setSource(38432U);
    msg.setSourceEntity(47U);
    msg.setDestination(515U);
    msg.setDestinationEntity(165U);
    msg.state = 5U;
    msg.plan_id = 64760U;
    msg.wpt_id = 38U;
    msg.settings_chk = 14709U;

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
    msg.setTimeStamp(0.8733116644464954);
    msg.setSource(8574U);
    msg.setSourceEntity(152U);
    msg.setDestination(24366U);
    msg.setDestinationEntity(173U);
    msg.uid = 86U;
    msg.frag_number = 109U;
    msg.num_frags = 28U;
    const signed char tmp_msg_0[] = {28, -73, 97, 4, 14, 109, -109, 32, 106, 0, 54, -76, 41, 65, -88, 35, -5, -70, -4, 72, 79, -25, -120, -86, -62, 9, -22, 89, 26, 35, -85, 120, 70, -2, -35, -87, 25, 37, 99, -121, 34, -32, 117, 50, 95, -83, -88, -87, -124, 81, -56, 86, 99, 48, 100, 59, -19, -7, -100, -4, -93, -4, -101, -15, -100, -59, -119, -114, -89, 7, 55, -92, 78, -10, -92, -61, -24, 46, -48, 6, 81, 57, -18, -4, 52, -4, 82, -82, -107, -55, 26, 49, -88, 78, -35, 37, -24, -87, 119, -83, 88, -46, 74, -84, -126, 38, 117, 105, 117, -13, 52, 16, -24, -46, -86, -54};
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
    msg.setTimeStamp(0.5135518464661631);
    msg.setSource(47652U);
    msg.setSourceEntity(49U);
    msg.setDestination(42763U);
    msg.setDestinationEntity(112U);
    msg.uid = 45U;
    msg.frag_number = 94U;
    msg.num_frags = 157U;
    const signed char tmp_msg_0[] = {76, -18, -81, -36, -74, 93, -5, -109, -56, -80, -126, 74, 42, -42, -16, -44, -109, 2, 17, -5, -94, -74, 3, -66, -105, -4, -4, 45, 93, 99, 101, -112, -21, 19, 7, -44, -116, 117, 94, -81, -14, -115, 7, 58, -28, -75, 82, -77, -31, 66, 110, -93, -55, -40, 59, 36, 1, -121, -8, -33, -106, -17, -121, 122, -32, 78, -81, -47, -123, -110, 38, -33, 105, 40, -23, -108, 116, -97, 57, 79, -73, -17, 45, 14, 67, -13, -57, 113, -75, 0, 45, 38, -96, -61, 56, -35, -21, -100, -100, -116, 81, 101, 47, -15, -107, 6, -19, 39, 25, 119, -9, -54, -100, 72, -117, -125, 112, 88, -57, -57, -43, -11, -23, 18, -40, -76, -52, 14, -21, -30, -123, -71, 50, -100, -6, -30, -52, -70, -7, -112, -44, -51, -107, 36, 5, -77, 101, -17, 58, -28, 111, 122, -25, -78, -108, 122, 87, -39, -4, -124, 26, 60, -69, -1, 81, -105, 60, 114, -65, -5, 14};
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
    msg.setTimeStamp(0.3959598378582224);
    msg.setSource(12418U);
    msg.setSourceEntity(97U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(106U);
    msg.uid = 34U;
    msg.frag_number = 139U;
    msg.num_frags = 47U;
    const signed char tmp_msg_0[] = {-53, 22, -61, 88, 31, 44, 116, 72, 101, -96, 83, -3, -120, 16, 52, -119, 1, 99, 118, -127, 106, 99, 95, -101, 26, 113, 119, 63, -65, 5, -59, -27, -26, -108, 96, -52, 104, -109, -27, 125, -96, -35, 22, 70, 45, 117, -69, -47, 80, -60, 3, 115, 12, -5, 47, 89, -26, -113, -103, -117, -20, 15, -38, 102, -108, 68, -39, -65, 117, 57, 15, 5, 75, -19, -31, 2, -75, 33, -116, 7, -55, -12, -15, 4, -68, 118, 101, -78, 66, 33, -114, -42, 33, 35, 23, 68, 65, 15, -120, -37, -124, -17, -29, -106, 116, -43, 105, 9, 64, -82, 36, 59, -37, -3, 6, -14, -90, 75, -13, -106, -71, 36, 40, 68, 21, 113, -18, -107, -81, 37, -9, -112, 101, -93, -94, -81, -117, 15, 82, -84, 49, 89, -110, -88, 52, 18, -74, 75, 76, 55, 4, 111, 45, 27, 107, -87, 69, 103, 96, 122, -79, -51, 82, 80, -99, -49, 114, 104, -80, 98, -121, 6, 118, 11, 97, 54, -82, -128, -13, -118, -41, 5};
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
    msg.setTimeStamp(0.6536176251615902);
    msg.setSource(7233U);
    msg.setSourceEntity(136U);
    msg.setDestination(49617U);
    msg.setDestinationEntity(119U);
    msg.content_type.assign("BXTBVJRPXJSEDXZSMAVATXHLISQGZUJZEPNDPHRJGOQSPNRXFMEYYUYEWMRCFMEJNWUGRDPVTCFPGHFXKZNOUEOBMHZZQYKOCKTVEKCLWGFFYBEXOJCUUUZAJVDTQGBECPBOKDBUUAFHLOIONFTICBAQSDQWKXSXTPGRDYSLWYSNVLTHMIXGNQIAUAVCBI");
    const signed char tmp_msg_0[] = {-121, 43, -48, -98, 24, 95, 98, 13, 124, 55, 57, -25, 38, 97, -59, 99, -96, -73, 88, 38, 70, -64, -61, 113, 93, 28, 98, 94, -66, -99, -66, -75, -41, 84, -19, -91, -92, 70, -58, -69, 33, -87, 97, -103, 28, -24, -1, 15, 15, 89, -51, 50, 118, -45, -61, -46, -86, 4, 123, 85, 5, 118, -123, -63, -35, -113, 105, 74, 101, 85, -89, 7, -101, -114, 49, 85, 105, -11, -128, -47, -33, 50, -37, 31, 80, 109, 63, 44, 125, 66, -6, -4, 59, -66, 116, 113, -36, 81, 104, 107, -60, -83, 33, 57, -23, 93, -66, -15, 124, 83, 89, 44, -58, -71, -36, -7, 59, 71, -112, -28, 3, -81, 29, -110, 84, -32, -72, 61, -80, -23, 14, -112, 53, 114, 31, 66, 61, -92, 99, 63, -71, 29, -77, 56, -65, -23, 116, -70, 55, -33, 55, -22, -31, -45, -1, 69, 37, -64, -14, -85, -115, 12, 24, -18, 113, -19, 77, 92, -97, -122, -95, 72, 125, 78, 1, -106, 109, 61, 61, 66, -72, 53, 98, 39, 113, -46, -12, 125, -69, -124, 33, -41, -113, 80, 113, -113, 97, 43, 88, 5, 9, -20};
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
    msg.setTimeStamp(0.8355034072460568);
    msg.setSource(59814U);
    msg.setSourceEntity(129U);
    msg.setDestination(44798U);
    msg.setDestinationEntity(33U);
    msg.content_type.assign("SJGOADNYWQEJTIRYAERMYQBMEUXUODIQTWYHBVZSVIQAOZAZSUFJAWJPJBPFGZUGBGODJUELGXEEZXSRIMOOMGAL");
    const signed char tmp_msg_0[] = {-54, -79, -61, 49, -63, 109, -3, -76, -121, 41, 48, -89, -75, -41, -56, -91, -58, 49, 85, -123, -111, 8, -29, 87, 122, -33, 89, 7, -75, 34, 69, -84, 2, -56, -25, 107, -61, 12, -39, 3, -48, -8, -93, 97, -15, 55, -80, -76, -126, -87, -5, -120, -86, -44, 24, 31, -63, -116, -98, -62, 38, -48, 116, -119, -22, -107, 72, -15, -110, -12, -51, 28, 124};
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
    msg.setTimeStamp(0.46416291198169535);
    msg.setSource(10942U);
    msg.setSourceEntity(120U);
    msg.setDestination(50344U);
    msg.setDestinationEntity(162U);
    msg.content_type.assign("FECGLDBGJLMYPZGFROKTNZYFPNQHJFTOKPWHUKEGIHHGZAMZZCWPZWNQLRNGUFFGUBPUBFNGBYCTXDMUSEJAOHIDVRSAHBSSUXJMQLQCTSAKZEIPKHXVYEYJEDCRVTLJSZNBMIBAFBUMXWOTSKZBPKQNQZCDRIKLXUIV");
    const signed char tmp_msg_0[] = {4, 94, 45, -56, -104, -46, -13, -64, -104, 120, -105, 13, -100, -119, 29, -68, 70, -88, 60, -9, -28, 98, 118, 86, 70, 29, 96, 68, -54, -15, -74, 78, -79, 88, -68, 7, 108, -46, 53, 32, 81, -30, 115, 47, -13, 48, 72, 1, -103, -108, 9, -100, 94, 4, 59, 44, -62, 61, 86, -30, 44, -64, 82, 65, -57, 12, 12, -1, 28, -76, -50, 24, 43, -19, -22, -59, 22, 22, -15, -90, -11, -85, -23, -125, 108, -123, -61, -17, 52, -60, 66, 23, 112, 91, -89, 79, 89, 112, 117, -119, -70, -108, -32, 117, 30, 87, -23, -73, -101, -37, 15, 88, -24, -53, -119, 78, -115, -23, -39, 61, -2, -73, -14, -20, 118, 6, 49, 48, -90, 0, 84, -78, 15, -123, -114, 51, -114, 54, -114, 54, 43, -59, -36, -5, -51, -58, 1, -35, -105, -97, -24, 11, -70, 69, 90, -83, -56, 80, -80, 42, -74, 67, -48, -55, 21, -6, -43, -110, -39, 36, -112, -42, 110, -66, -127, 80, 51, 79, -114, -120, 38, -6, -87, -121, 1, -4, -110, 21, -125, -11, 0, 4, 35, -74, -47, -73, 123, 36, 26, -96, 96, 125, -12, -39, 100, 56, -45, 120, 12, 120, -49, 2, -47};
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
    msg.setTimeStamp(0.7672809074197563);
    msg.setSource(18693U);
    msg.setSourceEntity(129U);
    msg.setDestination(63177U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.36386043317688255);
    msg.setSource(52818U);
    msg.setSourceEntity(45U);
    msg.setDestination(46803U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.26093051085858565);
    msg.setSource(29340U);
    msg.setSourceEntity(178U);
    msg.setDestination(39113U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.9991356127162145);
    msg.setSource(27354U);
    msg.setSourceEntity(145U);
    msg.setDestination(201U);
    msg.setDestinationEntity(101U);
    msg.target = 21186U;
    msg.bearing = 0.789505468645335;
    msg.elevation = 0.7351325912125739;

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
    msg.setTimeStamp(0.39136876076275906);
    msg.setSource(44167U);
    msg.setSourceEntity(63U);
    msg.setDestination(30832U);
    msg.setDestinationEntity(131U);
    msg.target = 1347U;
    msg.bearing = 0.46006074472775693;
    msg.elevation = 0.8575043761537932;

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
    msg.setTimeStamp(0.21342289463517117);
    msg.setSource(5633U);
    msg.setSourceEntity(98U);
    msg.setDestination(25725U);
    msg.setDestinationEntity(98U);
    msg.target = 23946U;
    msg.bearing = 0.8006649858951055;
    msg.elevation = 0.7716556647903647;

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
    msg.setTimeStamp(0.860622946649583);
    msg.setSource(49346U);
    msg.setSourceEntity(23U);
    msg.setDestination(58866U);
    msg.setDestinationEntity(208U);
    msg.target = 31653U;
    msg.x = 0.6030001352478479;
    msg.y = 0.19120794829809928;
    msg.z = 0.3893295459852487;

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
    msg.setTimeStamp(0.2327203154316363);
    msg.setSource(52975U);
    msg.setSourceEntity(65U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(228U);
    msg.target = 46657U;
    msg.x = 0.38391124304355173;
    msg.y = 0.0670737334106688;
    msg.z = 0.42033290169179427;

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
    msg.setTimeStamp(0.7227625590497306);
    msg.setSource(993U);
    msg.setSourceEntity(136U);
    msg.setDestination(20561U);
    msg.setDestinationEntity(192U);
    msg.target = 50902U;
    msg.x = 0.6488930037088068;
    msg.y = 0.04754383091636738;
    msg.z = 0.36440397126315005;

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
    msg.setTimeStamp(0.01702106904863021);
    msg.setSource(11249U);
    msg.setSourceEntity(201U);
    msg.setDestination(30926U);
    msg.setDestinationEntity(162U);
    msg.target = 27934U;
    msg.lat = 0.8926529200395817;
    msg.lon = 0.7566898025916097;
    msg.z_units = 169U;
    msg.z = 0.6892727633639115;

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
    msg.setTimeStamp(0.28709075991167854);
    msg.setSource(50492U);
    msg.setSourceEntity(239U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(159U);
    msg.target = 58190U;
    msg.lat = 0.6863239037339565;
    msg.lon = 0.6623714096704352;
    msg.z_units = 220U;
    msg.z = 0.8519349206918279;

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
    msg.setTimeStamp(0.931350418032376);
    msg.setSource(43073U);
    msg.setSourceEntity(225U);
    msg.setDestination(51949U);
    msg.setDestinationEntity(109U);
    msg.target = 11192U;
    msg.lat = 0.8731794483849867;
    msg.lon = 0.6931795109519333;
    msg.z_units = 96U;
    msg.z = 0.7719661111050371;

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
    msg.setTimeStamp(0.952694216249536);
    msg.setSource(36571U);
    msg.setSourceEntity(253U);
    msg.setDestination(17912U);
    msg.setDestinationEntity(157U);
    msg.locale.assign("JGEPNTUPUWDTMWIMMOKHDTJBXGGQWRCKFPVYDHHUZVKJYRYYUALIAMXDMVKWYLWQHBQXKTEJXNYXAGAGROOECAMJMXDZQUVASNNMRUFWDCSLHHJXLQOFLQEIWEWVTSSOBGORRQLFNMIVBCRCFWEFNKNHZZIT");
    const signed char tmp_msg_0[] = {51, 65, -107, -9, -30, 54, 49, -80, 7, -103, -39, -23, 98, 79, 120, -15, 10, 119, 12, 49, 70, -53, -44, -47, 34, 16, -128, 125, -3, 25, 105, -32, -83, -45, 115, -39, -78, -21, -6, 25, -10, -79, 48, 27, 48, 50, 118, -74, -12, -85, -46, -17, -76, -41, 25, 13, 72, 6, -90, -108, -100, -28, 29, -74, -71, 10, 103, -27, -115, 124, -109, 45, -58, 3, 120, 89, -90, 62, -19, 89, -77, 54, 47, 4, 27, 47, 89, 40, -63, 23, 49, -38, -65, 55, 75, -89, 74, 30, -89, 43, -36, -38, -67, 99, 9, 85, 55, 95, 104, -70, 63, -16, 52, -33, 40, 32, 108, -8, 23, -109, 32, 43, 57, -52, 30, 22, -67, 83, 69, 126, -121, 108, 119, -91, -6, -71, 89, 67, -33, 23, -83, 109, -65, 119, 101, 67, -88, 99, -14, -58, -81, 14, -45, -102, 49, -21, -2, 122, 62, -13, -52, -125, 70, -79, -114, 61, -3, -57, -91, 108, 24, -35, -5, -118, -22, 111, -32, -49, 124, -112, 107, -54, 70, -34, 32, 117, -106, 87, -81, -74, 15, 109, -2, -16, 93, 62, -83, -31, -115, 124, 52, 96, -2, 96, -103, -116, -1, -63, 15, -86, 125, -22, -28, 13, 121, -96, -33};
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
    msg.setTimeStamp(0.80456029380118);
    msg.setSource(19722U);
    msg.setSourceEntity(116U);
    msg.setDestination(34253U);
    msg.setDestinationEntity(189U);
    msg.locale.assign("VJOXHFBPXPCRGLTCWTERIEPSKHNYWQPFEBQVRMWHBEQZVZCBWMOCYDHSHEMFTIIKCGDSYZBFEPGTPGNADMNFZGLWLIYZKUYOWZCZEITSJYRHOODQSHMWUYFEMQSGWLIIKJVWE");
    const signed char tmp_msg_0[] = {-101, 108, 38, 30, -86, 5, -102, 58, -114, 59, 23, -59, 123, -73, 17, -49, -101, -79, -116, 70, 52, 85, -127, 0, -1, 54, 11, -118, 126, 117, 89, 114, 93, -101};
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
    msg.setTimeStamp(0.11526711547878155);
    msg.setSource(44079U);
    msg.setSourceEntity(162U);
    msg.setDestination(4257U);
    msg.setDestinationEntity(69U);
    msg.locale.assign("NQYYHVPRWMACLJGKXDMVBBIDSSTPBCZEEYDVQTKRLSPZQDAARQGJEIBIBRXICWONZXGUVADAGJTPOBZMFFWMAHGXZHJSEMSWBTCLKMKXOHNLDMDLTHXVIWMRWYFCGBZUE");
    const signed char tmp_msg_0[] = {-124, 96, -7, -56, 20, -94, 122, 114, -9, 121, 74, -9, -120, -89, -9, 34, -111, 50, -9, -53, -64, 107, 45, -108, -73};
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
    msg.setTimeStamp(0.07601799150672905);
    msg.setSource(62818U);
    msg.setSourceEntity(248U);
    msg.setDestination(21047U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.8223612211416392);
    msg.setSource(45665U);
    msg.setSourceEntity(59U);
    msg.setDestination(36893U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.9887847996526555);
    msg.setSource(26460U);
    msg.setSourceEntity(117U);
    msg.setDestination(30494U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.6898074908408321);
    msg.setSource(27928U);
    msg.setSourceEntity(87U);
    msg.setDestination(21424U);
    msg.setDestinationEntity(124U);
    msg.camid = 117U;
    msg.x = 51937U;
    msg.y = 38345U;

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
    msg.setTimeStamp(0.035037671502287315);
    msg.setSource(47215U);
    msg.setSourceEntity(168U);
    msg.setDestination(10113U);
    msg.setDestinationEntity(147U);
    msg.camid = 67U;
    msg.x = 41761U;
    msg.y = 64977U;

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
    msg.setTimeStamp(0.5185894378864987);
    msg.setSource(16985U);
    msg.setSourceEntity(216U);
    msg.setDestination(38908U);
    msg.setDestinationEntity(122U);
    msg.camid = 239U;
    msg.x = 46260U;
    msg.y = 4559U;

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
    msg.setTimeStamp(0.5580755290116055);
    msg.setSource(38535U);
    msg.setSourceEntity(113U);
    msg.setDestination(55449U);
    msg.setDestinationEntity(28U);
    msg.camid = 130U;
    msg.x = 33167U;
    msg.y = 58947U;

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
    msg.setTimeStamp(0.6135403490911213);
    msg.setSource(671U);
    msg.setSourceEntity(44U);
    msg.setDestination(24085U);
    msg.setDestinationEntity(89U);
    msg.camid = 141U;
    msg.x = 34888U;
    msg.y = 39794U;

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
    msg.setTimeStamp(0.7840734062106955);
    msg.setSource(54494U);
    msg.setSourceEntity(6U);
    msg.setDestination(33823U);
    msg.setDestinationEntity(117U);
    msg.camid = 246U;
    msg.x = 2421U;
    msg.y = 60533U;

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
    msg.setTimeStamp(0.5116261003816162);
    msg.setSource(24930U);
    msg.setSourceEntity(242U);
    msg.setDestination(8141U);
    msg.setDestinationEntity(102U);
    msg.tracking = 190U;
    msg.lat = 0.22344750585000095;
    msg.lon = 0.06991719281337216;
    msg.x = 0.3308096445900748;
    msg.y = 0.8215843279667325;
    msg.z = 0.9572803856545432;

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
    msg.setTimeStamp(0.3219060631691042);
    msg.setSource(11195U);
    msg.setSourceEntity(43U);
    msg.setDestination(41515U);
    msg.setDestinationEntity(56U);
    msg.tracking = 198U;
    msg.lat = 0.9790678717182557;
    msg.lon = 0.07581665938339377;
    msg.x = 0.717634564465923;
    msg.y = 0.0871408051070024;
    msg.z = 0.981188953116254;

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
    msg.setTimeStamp(0.902470487893507);
    msg.setSource(34399U);
    msg.setSourceEntity(123U);
    msg.setDestination(16844U);
    msg.setDestinationEntity(86U);
    msg.tracking = 185U;
    msg.lat = 0.32555636070354554;
    msg.lon = 0.043186308893532144;
    msg.x = 0.7544079116240798;
    msg.y = 0.8417128919647583;
    msg.z = 0.933872021408889;

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
    msg.setTimeStamp(0.8276611564618084);
    msg.setSource(54656U);
    msg.setSourceEntity(43U);
    msg.setDestination(7933U);
    msg.setDestinationEntity(156U);
    msg.target.assign("SYXBHPRGBRDXOAOMDMIFJHUEUBYIOQBVHEXXFNNNXLEOYWLTDEDWAQOENCLGXYFQUUFCLCAMMEFVKNGWDVVQYHZBVQYPQGZUADJXGKVNISNVGYPBATPFWRPITNRGCDSTAKZNJBQCTCRUWAEISM");
    msg.lbearing = 0.9377877285178191;
    msg.lelevation = 0.595666626280292;
    msg.bearing = 0.3196135029704732;
    msg.elevation = 0.8984023550641465;
    msg.phi = 0.8594677196778513;
    msg.theta = 0.5514939707774007;
    msg.psi = 0.666207263584294;
    msg.accuracy = 0.5432674409626226;

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
    msg.setTimeStamp(0.11258643247739142);
    msg.setSource(14594U);
    msg.setSourceEntity(103U);
    msg.setDestination(16908U);
    msg.setDestinationEntity(177U);
    msg.target.assign("YDGHESWWRLJCHYVIQAMBZJQZFJYPPXSUMLGXXVOPANPWENCNQWDRSBVWGUOZJRJODDSERFRNPXCPTUCEHHVFTAVYTFXELQGBJVAKHZOKDMLDISFYFCDKBOAKHEVLSWTZSMAIWWZTAYJNRAQQMKVMEGMNXYSIUFQRBCUHVJGHRDBYKKGZWMLBEIOATQCNNNHUGIUPTZTSGRCXJODHDOIEIXFIVFKOLCTZYYSAPEBQMXTIXOKCNMP");
    msg.lbearing = 0.6881166245214676;
    msg.lelevation = 0.8400906661939892;
    msg.bearing = 0.09356782550682552;
    msg.elevation = 0.8505404316501649;
    msg.phi = 0.32909735860180656;
    msg.theta = 0.900759192618165;
    msg.psi = 0.904308635302965;
    msg.accuracy = 0.6145318937451322;

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
    msg.setTimeStamp(0.6989110535692044);
    msg.setSource(62165U);
    msg.setSourceEntity(54U);
    msg.setDestination(25794U);
    msg.setDestinationEntity(101U);
    msg.target.assign("MIGVSHJSSFTZLVOLIYYNJRUZKBUVUSGPUIYFLMMWAATDZNXXDKJNYKCHPUDBVRRTFMMOFBAEWGRWHIEGYVEOSPEXLXBHCAYQPEOQPPVXTJHCCKBBTFIJQVXLWPTLRZEEZZWWOMAFIQWDMNLNOFZKUGGCBMTSRKEYDPNHRKARNFUTCO");
    msg.lbearing = 0.9717529850668992;
    msg.lelevation = 0.5868792245952981;
    msg.bearing = 0.6141545231458613;
    msg.elevation = 0.46887224430906616;
    msg.phi = 0.18764478238508298;
    msg.theta = 0.9104920907700654;
    msg.psi = 0.14712814278120256;
    msg.accuracy = 0.4545626050663576;

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
    msg.setTimeStamp(0.4536210483913272);
    msg.setSource(49686U);
    msg.setSourceEntity(158U);
    msg.setDestination(14301U);
    msg.setDestinationEntity(152U);
    msg.target.assign("HBRDKAQQUVHTULQEOTPCGMWGDZFOMFVXTMWWWDWESHXSAIXRWERSZHZYVMILYLCENOHSLOPJQJVENOXYNBFUGAKFZNNLNZMKVUUWCBGHWJYZDHUDHMKCXKGJKJNIUBLLTXNYRRJIFXDIPQ");
    msg.x = 0.17463127140153278;
    msg.y = 0.08124947851448028;
    msg.z = 0.5686953248937237;
    msg.n = 0.3819853077659079;
    msg.e = 0.5164865954859315;
    msg.d = 0.247758612810014;
    msg.phi = 0.47995014717516293;
    msg.theta = 0.13470161984609164;
    msg.psi = 0.9562605772503276;
    msg.accuracy = 0.7823188541586524;

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
    msg.setTimeStamp(0.08941834987388464);
    msg.setSource(1056U);
    msg.setSourceEntity(221U);
    msg.setDestination(27366U);
    msg.setDestinationEntity(248U);
    msg.target.assign("ZEAXVNNUXMXEEENRSALJYTSUZRKAPSOWDHCQBYQNQEFVYROSDVZJIAUUFJSBIQHSGVJPTYP");
    msg.x = 0.13317821549180342;
    msg.y = 0.30296247462659;
    msg.z = 0.32830818844543785;
    msg.n = 0.3387523443386683;
    msg.e = 0.8544442710725096;
    msg.d = 0.42459310105576586;
    msg.phi = 0.9023178373140136;
    msg.theta = 0.9532213833013805;
    msg.psi = 0.6618859035902795;
    msg.accuracy = 0.39918984323959283;

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
    msg.setTimeStamp(0.961434559505132);
    msg.setSource(56080U);
    msg.setSourceEntity(55U);
    msg.setDestination(49911U);
    msg.setDestinationEntity(240U);
    msg.target.assign("UVBLFPOBCSRUNHJANSDJCTBUXWRUVMLPVHJZOHWTGYWLYEYXIOPPSDNXGZQKTDTBJWKACRDMAGJGXWIFGNKMPGYTXQPTTBJQQHIQUBZOBKUEKHNYMKGEMVZODIDGEDYZLXJNHKUCFVIMUEYCADWXRTTLRFMUSXVFYKJISSV");
    msg.x = 0.24713943194956256;
    msg.y = 0.7350210887828406;
    msg.z = 0.5740370029705578;
    msg.n = 0.9800672612572007;
    msg.e = 0.37033385530098717;
    msg.d = 0.4378162421254571;
    msg.phi = 0.3007625310929326;
    msg.theta = 0.6689987709915578;
    msg.psi = 0.7837267559386645;
    msg.accuracy = 0.9724136440615211;

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
    msg.setTimeStamp(0.9428954195795748);
    msg.setSource(24667U);
    msg.setSourceEntity(146U);
    msg.setDestination(2358U);
    msg.setDestinationEntity(155U);
    msg.target.assign("BPUCXAAXYFQPKHAJLYGVGZLIUERGSXKNNDBHAVVCVMRJITDNVYANXYHLNRFOCPIWKNWHFTOHCWHUUCSSAOLYCVPTHGRPFIAGYTMQKVFWHEMSQHEQMSKBPRDFBRPDXTMMRYQIISEUYJKUPECEIZQJQYWGGPMZWEWYQEVILWBOGDRBRSZZFNCVKGZQTDEBKJLFLQXUTBXVOASACSONU");
    msg.lat = 0.4238229076910601;
    msg.lon = 0.42607918605863004;
    msg.z_units = 159U;
    msg.z = 0.35919079372365903;
    msg.accuracy = 0.12594425098299433;

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
    msg.setTimeStamp(0.011570457486223984);
    msg.setSource(46012U);
    msg.setSourceEntity(68U);
    msg.setDestination(4047U);
    msg.setDestinationEntity(238U);
    msg.target.assign("DLOFACNCAQVNWUGKZQKHITFPJAZXYSTRJTIOHMMSQZNLXAAXBGHLKJRBXDWIWRVCENQCZBDXOONMGYRMYPUQ");
    msg.lat = 0.5275820208120748;
    msg.lon = 0.7478991815701174;
    msg.z_units = 171U;
    msg.z = 0.020935415357631548;
    msg.accuracy = 0.8797237932617785;

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
    msg.setTimeStamp(0.6392813725444386);
    msg.setSource(31397U);
    msg.setSourceEntity(146U);
    msg.setDestination(44534U);
    msg.setDestinationEntity(127U);
    msg.target.assign("AJFMTSROFXKVNATJOADSAIYTWECNUDXMJEEZLOVDDKNFSFYFLSJGG");
    msg.lat = 0.4220455669267875;
    msg.lon = 0.054994649020819075;
    msg.z_units = 100U;
    msg.z = 0.3150795196276064;
    msg.accuracy = 0.34393257885261597;

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
    msg.setTimeStamp(0.5028785684789421);
    msg.setSource(30600U);
    msg.setSourceEntity(10U);
    msg.setDestination(2892U);
    msg.setDestinationEntity(31U);
    msg.name.assign("GSVVDFMPQQMEFHSQKNUARYRVSSWGJTCBKNCSGAUFFISMNOVPRZMVC");
    msg.lat = 0.5965469787471251;
    msg.lon = 0.5977796631892697;
    msg.z = 0.6279568249642796;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.15658001718425818);
    msg.setSource(206U);
    msg.setSourceEntity(69U);
    msg.setDestination(34604U);
    msg.setDestinationEntity(129U);
    msg.name.assign("WDOXHDTILCRYQSFBDMTRESBVLICCQCURUPZZGMUPDKMMROXVKRUUZSAXKG");
    msg.lat = 0.5680316454566752;
    msg.lon = 0.07147207687518686;
    msg.z = 0.595721289804716;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.5843017388990265);
    msg.setSource(45790U);
    msg.setSourceEntity(156U);
    msg.setDestination(44452U);
    msg.setDestinationEntity(83U);
    msg.name.assign("BZEOPUNDFNOGVULLIJMOZUKEBUZCTGGJVUHVMJTMRBZFKNFYPWLRZEDSPVERKTNIQBAMYMEL");
    msg.lat = 0.6373749702676592;
    msg.lon = 0.517860389516888;
    msg.z = 0.24312089224669597;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.1565655901613212);
    msg.setSource(58113U);
    msg.setSourceEntity(100U);
    msg.setDestination(10882U);
    msg.setDestinationEntity(152U);
    msg.op = 161U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VXRTQXNGNDSKVDAKCUWNQMOSTWLGYWUBDHRJOJYKQJFBMMYQFXFBTZJQAJFHIRTAZTFQYKCEPDEZGEQNMHUSBELGAGYIBRRVPHMNEDEULGKSXIWOFOXLYPIWTFXIRYMDY");
    tmp_msg_0.lat = 0.6051966887491708;
    tmp_msg_0.lon = 0.7890486134940586;
    tmp_msg_0.z = 0.27666843394273033;
    tmp_msg_0.z_units = 33U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2907823291441961);
    msg.setSource(45502U);
    msg.setSourceEntity(213U);
    msg.setDestination(42343U);
    msg.setDestinationEntity(186U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.040325595427894156);
    msg.setSource(48331U);
    msg.setSourceEntity(32U);
    msg.setDestination(37380U);
    msg.setDestinationEntity(102U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.6900380862891872);
    msg.setSource(20402U);
    msg.setSourceEntity(178U);
    msg.setDestination(24915U);
    msg.setDestinationEntity(138U);
    msg.value = 0.41110284083004645;
    msg.type = 222U;

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
    msg.setTimeStamp(0.05606064536858024);
    msg.setSource(4576U);
    msg.setSourceEntity(122U);
    msg.setDestination(53955U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8378410910742694;
    msg.type = 83U;

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
    msg.setTimeStamp(0.053228551542951696);
    msg.setSource(60108U);
    msg.setSourceEntity(44U);
    msg.setDestination(13025U);
    msg.setDestinationEntity(74U);
    msg.value = 0.7244480209411637;
    msg.type = 21U;

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
    msg.setTimeStamp(0.6346733552538354);
    msg.setSource(46410U);
    msg.setSourceEntity(160U);
    msg.setDestination(55509U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0917457543000244;

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
    msg.setTimeStamp(0.8228452424237309);
    msg.setSource(52727U);
    msg.setSourceEntity(95U);
    msg.setDestination(21730U);
    msg.setDestinationEntity(207U);
    msg.value = 0.3207273940313221;

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
    msg.setTimeStamp(0.4579929911948689);
    msg.setSource(55730U);
    msg.setSourceEntity(128U);
    msg.setDestination(55573U);
    msg.setDestinationEntity(33U);
    msg.value = 0.9159803093379619;

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
    msg.setTimeStamp(0.9651929385054518);
    msg.setSource(57245U);
    msg.setSourceEntity(118U);
    msg.setDestination(33539U);
    msg.setDestinationEntity(120U);
    msg.timestamp_last_service = 0.47629782717789393;
    msg.time_next_service = 0.11804222060891256;
    msg.time_motor_next_service = 0.8233626837701861;
    msg.time_idle_ground = 0.056974240492473016;
    msg.time_idle_air = 0.5043316437611027;
    msg.time_idle_water = 0.416478713116609;
    msg.time_idle_underwater = 0.7355588352459441;
    msg.time_idle_unknown = 0.6439125308231929;
    msg.time_motor_ground = 0.5222086393553736;
    msg.time_motor_air = 0.34956635656303503;
    msg.time_motor_water = 0.15065380835395126;
    msg.time_motor_underwater = 0.8509244441804201;
    msg.time_motor_unknown = 0.9609270248478935;
    msg.rpm_min = -25591;
    msg.rpm_max = -11019;
    msg.depth_max = 0.7927338368177745;

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
    msg.setTimeStamp(0.29410045642232163);
    msg.setSource(25310U);
    msg.setSourceEntity(224U);
    msg.setDestination(54423U);
    msg.setDestinationEntity(180U);
    msg.timestamp_last_service = 0.047657614736038356;
    msg.time_next_service = 0.7021753791464643;
    msg.time_motor_next_service = 0.1547346298869915;
    msg.time_idle_ground = 0.9425235988268389;
    msg.time_idle_air = 0.880745656881665;
    msg.time_idle_water = 0.3665081973886093;
    msg.time_idle_underwater = 0.4679199425344518;
    msg.time_idle_unknown = 0.04563097526289395;
    msg.time_motor_ground = 0.728651795772373;
    msg.time_motor_air = 0.7956966081256772;
    msg.time_motor_water = 0.6506675043756137;
    msg.time_motor_underwater = 0.19048976806398632;
    msg.time_motor_unknown = 0.026357358103705875;
    msg.rpm_min = -9281;
    msg.rpm_max = 11618;
    msg.depth_max = 0.12709111192422684;

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
    msg.setTimeStamp(0.9426554803983566);
    msg.setSource(10857U);
    msg.setSourceEntity(141U);
    msg.setDestination(40393U);
    msg.setDestinationEntity(41U);
    msg.timestamp_last_service = 0.3690890423692348;
    msg.time_next_service = 0.5230191403974455;
    msg.time_motor_next_service = 0.33799240293603783;
    msg.time_idle_ground = 0.6670592662831614;
    msg.time_idle_air = 0.20528038411209515;
    msg.time_idle_water = 0.00014828831108559815;
    msg.time_idle_underwater = 0.7423196069641826;
    msg.time_idle_unknown = 0.3922039350065222;
    msg.time_motor_ground = 0.20097504106208985;
    msg.time_motor_air = 0.8762164024465471;
    msg.time_motor_water = 0.8216081106155505;
    msg.time_motor_underwater = 0.015531093724692635;
    msg.time_motor_unknown = 0.7458887337889641;
    msg.rpm_min = -13563;
    msg.rpm_max = -3925;
    msg.depth_max = 0.5951515108973803;

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
    msg.setTimeStamp(0.7697423461846362);
    msg.setSource(5609U);
    msg.setSourceEntity(246U);
    msg.setDestination(30008U);
    msg.setDestinationEntity(40U);
    msg.severity = 181U;
    msg.text.assign("DKYGJJYWLLHQDDEKNMD");

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
    msg.setTimeStamp(0.763799366346972);
    msg.setSource(39329U);
    msg.setSourceEntity(219U);
    msg.setDestination(26261U);
    msg.setDestinationEntity(220U);
    msg.severity = 151U;
    msg.text.assign("PPJHAKWFKNSGKULBHVWUMKACRAGZIMOAWYZLRRSYJXC");

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
    msg.setTimeStamp(0.9169555869070682);
    msg.setSource(36450U);
    msg.setSourceEntity(183U);
    msg.setDestination(24624U);
    msg.setDestinationEntity(128U);
    msg.severity = 177U;
    msg.text.assign("CQATAZUZEZMJVTNDBATOQZNJLJGOEWPHLJOBWSANLQPHHDPGPQNCOKCDODHEEXRVRZLEMKSVJWUOSTECKGPVNFZKVEEMRIXJWACEAONSTORUOPGQIUYIIKZIMRIXSKCQCHTMHWBUFAFGJUWTHHFIXXYASJLI");

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
    msg.setTimeStamp(0.04705333888575003);
    msg.setSource(48025U);
    msg.setSourceEntity(223U);
    msg.setDestination(45282U);
    msg.setDestinationEntity(157U);
    msg.channel = -115;
    msg.value = 1426176245;
    msg.gain = 37U;

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
    msg.setTimeStamp(0.6934910689516898);
    msg.setSource(22180U);
    msg.setSourceEntity(125U);
    msg.setDestination(22275U);
    msg.setDestinationEntity(223U);
    msg.channel = 70;
    msg.value = 1562056548;
    msg.gain = 97U;

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
    msg.setTimeStamp(0.384963312169736);
    msg.setSource(33613U);
    msg.setSourceEntity(74U);
    msg.setDestination(49470U);
    msg.setDestinationEntity(37U);
    msg.channel = -19;
    msg.value = 152000905;
    msg.gain = 93U;

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
    msg.setTimeStamp(0.8277291243180246);
    msg.setSource(8314U);
    msg.setSourceEntity(106U);
    msg.setDestination(9931U);
    msg.setDestinationEntity(157U);
    msg.ch01 = 0.5688872982745826;
    msg.ch02 = 0.9962584724675261;
    msg.ch03 = 0.0827402594875849;
    msg.ch04 = 0.6466301916834294;
    msg.ch05 = 0.03410750666189144;
    msg.ch06 = 0.29568502709206623;
    msg.ch07 = 0.3717018669435186;
    msg.ch08 = 0.9007340887120314;
    msg.ch09 = 0.070068724451119;
    msg.ch10 = 0.8040216700367452;
    msg.ch11 = 0.03718178801904182;
    msg.ch12 = 0.6065993788051096;
    msg.ch13 = 0.4651413888808319;
    msg.ch14 = 0.16738824630052918;
    msg.ch15 = 0.40655929043569816;
    msg.ch16 = 0.2751523508905348;

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
    msg.setTimeStamp(0.24998583870734947);
    msg.setSource(51023U);
    msg.setSourceEntity(95U);
    msg.setDestination(2944U);
    msg.setDestinationEntity(215U);
    msg.ch01 = 0.9064914204327179;
    msg.ch02 = 0.8470932774205412;
    msg.ch03 = 0.24053436135997408;
    msg.ch04 = 0.42389633739489385;
    msg.ch05 = 0.19857608769430424;
    msg.ch06 = 0.8957076234630466;
    msg.ch07 = 0.11816746060245131;
    msg.ch08 = 0.9312371738204606;
    msg.ch09 = 0.6907590825883994;
    msg.ch10 = 0.9359556429526005;
    msg.ch11 = 0.7423115312776201;
    msg.ch12 = 0.7109169321059238;
    msg.ch13 = 0.9339286205564513;
    msg.ch14 = 0.1537326586778004;
    msg.ch15 = 0.8605018353178868;
    msg.ch16 = 0.23775300128537358;

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
    msg.setTimeStamp(0.2126606379538043);
    msg.setSource(59577U);
    msg.setSourceEntity(209U);
    msg.setDestination(65159U);
    msg.setDestinationEntity(207U);
    msg.ch01 = 0.9199764560055835;
    msg.ch02 = 0.5987217162361952;
    msg.ch03 = 0.19846573396785194;
    msg.ch04 = 0.21900419403019877;
    msg.ch05 = 0.32637376187822487;
    msg.ch06 = 0.36177812340135773;
    msg.ch07 = 0.7867473416546986;
    msg.ch08 = 0.009487010139364038;
    msg.ch09 = 0.03135289869111746;
    msg.ch10 = 0.8061791891639661;
    msg.ch11 = 0.8043682593296956;
    msg.ch12 = 0.4519550887956749;
    msg.ch13 = 0.8931294472316651;
    msg.ch14 = 0.8834402472589619;
    msg.ch15 = 0.9669874305006412;
    msg.ch16 = 0.67591886603975;

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
    msg.setTimeStamp(0.1403347195252711);
    msg.setSource(4405U);
    msg.setSourceEntity(53U);
    msg.setDestination(61545U);
    msg.setDestinationEntity(189U);
    msg.op = 18U;
    msg.lat = 0.407621536626537;
    msg.lon = 0.06968119666014916;
    msg.height = 0.7217936023204181;
    msg.depth = 0.00925045009490777;
    msg.alt = 0.8763197018549652;

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
    msg.setTimeStamp(0.5010056519996309);
    msg.setSource(19593U);
    msg.setSourceEntity(120U);
    msg.setDestination(32615U);
    msg.setDestinationEntity(28U);
    msg.op = 87U;
    msg.lat = 0.27377673925549906;
    msg.lon = 0.4556997264775856;
    msg.height = 0.059008322322935736;
    msg.depth = 0.5762266000442404;
    msg.alt = 0.5815409135809911;

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
    msg.setTimeStamp(0.03823180579047647);
    msg.setSource(26206U);
    msg.setSourceEntity(202U);
    msg.setDestination(52392U);
    msg.setDestinationEntity(154U);
    msg.op = 173U;
    msg.lat = 0.5478664882605547;
    msg.lon = 0.8676775365386581;
    msg.height = 0.467096870337148;
    msg.depth = 0.6571684428266461;
    msg.alt = 0.22639820312334236;

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
    msg.setTimeStamp(0.9699667690502317);
    msg.setSource(22335U);
    msg.setSourceEntity(203U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(254U);
    msg.nbeams = 70U;
    msg.ncells = 30U;
    msg.coord_sys = 160U;

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
    msg.setTimeStamp(0.9277412840528148);
    msg.setSource(6762U);
    msg.setSourceEntity(138U);
    msg.setDestination(4387U);
    msg.setDestinationEntity(5U);
    msg.nbeams = 82U;
    msg.ncells = 88U;
    msg.coord_sys = 201U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5843523534696154;
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
    msg.setTimeStamp(0.16665259368446872);
    msg.setSource(31782U);
    msg.setSourceEntity(142U);
    msg.setDestination(28207U);
    msg.setDestinationEntity(86U);
    msg.nbeams = 47U;
    msg.ncells = 147U;
    msg.coord_sys = 211U;

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
    msg.setTimeStamp(0.7623531820158062);
    msg.setSource(34051U);
    msg.setSourceEntity(215U);
    msg.setDestination(52495U);
    msg.setDestinationEntity(206U);
    msg.cell_position = 0.6548683197105419;

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
    msg.setTimeStamp(0.199508740208434);
    msg.setSource(22956U);
    msg.setSourceEntity(33U);
    msg.setDestination(37513U);
    msg.setDestinationEntity(21U);
    msg.cell_position = 0.7738370621354008;

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
    msg.setTimeStamp(0.7540692689750792);
    msg.setSource(18465U);
    msg.setSourceEntity(19U);
    msg.setDestination(12228U);
    msg.setDestinationEntity(4U);
    msg.cell_position = 0.5309463626593206;

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
    msg.setTimeStamp(0.13406766472739395);
    msg.setSource(35642U);
    msg.setSourceEntity(211U);
    msg.setDestination(59142U);
    msg.setDestinationEntity(158U);
    msg.vel = 0.09478502979330883;
    msg.amp = 0.9441675949737172;
    msg.cor = 145U;

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
    msg.setTimeStamp(0.014732536030115262);
    msg.setSource(19652U);
    msg.setSourceEntity(145U);
    msg.setDestination(48769U);
    msg.setDestinationEntity(121U);
    msg.vel = 0.4209995516059811;
    msg.amp = 0.49513667036812425;
    msg.cor = 68U;

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
    msg.setTimeStamp(0.5013557347463213);
    msg.setSource(62482U);
    msg.setSourceEntity(186U);
    msg.setDestination(10133U);
    msg.setDestinationEntity(121U);
    msg.vel = 0.43271286480645077;
    msg.amp = 0.6640420828480055;
    msg.cor = 22U;

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
    msg.setTimeStamp(0.18431987313008757);
    msg.setSource(1498U);
    msg.setSourceEntity(84U);
    msg.setDestination(61527U);
    msg.setDestinationEntity(8U);
    msg.name.assign("QSKEWJLCFJWTFHORONUKHROJURBQIRSXWDIALYUXXJKGMMXLETNGIIJCAVSHZYJQBCHKOVPUCLZMSPDWJGOZJSBZANECUUPOPNAGKMMXLEASYVQTRTAOUGQLVVDYRDJYHCHGSKZRPPEVDFICFVVQCFTANBWSTXSLMKXTERXQXYBHGPFNFIZZQXWMDWCEMIVUPOGNQIBLHAKQTILYWGDZ");
    msg.value = 160U;

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
    msg.setTimeStamp(0.7011164001469118);
    msg.setSource(13984U);
    msg.setSourceEntity(198U);
    msg.setDestination(9036U);
    msg.setDestinationEntity(208U);
    msg.name.assign("YPETCFGPGIUDYLEYUVPEFOVCQHLTWXZPJEVYCRAMEBLTNBEDZYFBUXSDIRIHNWAWJYERVXRFPGLQMBBMKOLLYIARONSRETSYDECWLTAUQQDHRMWCPSKVTSVNSMPGOMARRBOJCSGGZKBYGXKBQJNJJFCWITNQFOKZHSCZTADXULWOLZZKPNBVSIUKJOUDZHJMDMSDKY");
    msg.value = 90U;

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
    msg.setTimeStamp(0.8625511246644091);
    msg.setSource(39903U);
    msg.setSourceEntity(133U);
    msg.setDestination(31535U);
    msg.setDestinationEntity(117U);
    msg.name.assign("UGBPLRDGFTNMYZRNCITSJOREUKOLJLBXTTVBALPAHKIXSFUZVDVYDOYZAAEFJGENWGJHFLNKGTVHGPUBZOPMPKIYWQHLHJZIXMDPQURCDGWAXVYHHJQGMEOLOEQXFCKCFEWHPGSJYUDSFKZBXWVZISYBTCUOPOWMMYRYMWXDKPWNABIJLKCEDJHMSMSQOSLMUNZANZQRVEDZGR");
    msg.value = 238U;

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
    msg.setTimeStamp(0.494401582211504);
    msg.setSource(682U);
    msg.setSourceEntity(35U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(204U);
    msg.name.assign("ZIUMQLDIWHHRXQFXVGALEINOZHTTQRNYPETAYVQUPWGLXKHPVMCYXPNUJVVLCSDXCSKBUCESGJQRCNNWHYPDQQMSLOIMAHYATROZJMKAHDUVMTFKGRXXQKGDVYVNBEEJDEAUDHUMOKOTFCJMOVISLCBDCZFNNHUFANYRBBFCI");

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
    msg.setTimeStamp(0.10008501635406031);
    msg.setSource(38678U);
    msg.setSourceEntity(193U);
    msg.setDestination(52969U);
    msg.setDestinationEntity(97U);
    msg.name.assign("PFGJSQUIBYONYJXHDASTDNZXJYSPNTCQOGQWXMTRRHVIRBSTWSRNUPYXLFWGHFJEJFLQQZCIIVMBCRSPHERZZENFQDTVJCXYERLKINVVZTUECXZDOAIBOXMFQCWZUGYKPHMLWHTGLDPQPBSAMYDAJYKBQELMHOBDCYBHVLDBOJOWMYJUINUGKNAZWPSWKOTKZFEGNTACMUPFVDLONKLEUALARAVMOIEFU");

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
    msg.setTimeStamp(0.818766553774702);
    msg.setSource(35167U);
    msg.setSourceEntity(218U);
    msg.setDestination(23370U);
    msg.setDestinationEntity(162U);
    msg.name.assign("AKRBWLFAHZWNBXNMMOTVTUDQLKYLUAXMCYPXUHYVYRFOIXSAJUQDDUKJURMZXJGMZBYSKZIXWDVBCMQOHFSECHFJSRXTSOMPPXNZOQJCSIOJQHZQEWGDRCUETTLUKKYNHCDRVYMFP");

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
    msg.setTimeStamp(0.8420412215114426);
    msg.setSource(31710U);
    msg.setSourceEntity(122U);
    msg.setDestination(9385U);
    msg.setDestinationEntity(194U);
    msg.name.assign("QWRTNQUSPJHKEWXBPQIOUTCMXKLMKHNLEAGJHPR");
    msg.value = 77U;

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
    msg.setTimeStamp(0.7362904434863785);
    msg.setSource(10997U);
    msg.setSourceEntity(103U);
    msg.setDestination(22312U);
    msg.setDestinationEntity(209U);
    msg.name.assign("XXAIDHDXROFPGXPHTGZYTWDAJKOFHIEHYQOAMUCEHWQNEDJRKCWKAXEDLUVULVFYMSMETZWWYGIQPNVEWTAQHPRDQAZYIWFKVNZQOTPRRVFFKGBMDTLRUVZPXRKHUUFHGJMDZBIKBBOMIBKRCIBMFSFCJPSKUSYAVN");
    msg.value = 41U;

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
    msg.setTimeStamp(0.7316868411848978);
    msg.setSource(63686U);
    msg.setSourceEntity(17U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(117U);
    msg.name.assign("QGWZCXATFPWZMMTSVUCOFTKYDXFRWHCZENPLFLCVPXQIDWEBIVDIYDYJCZMQBZJCHKJAAWBBXDUUZHQRMINMALVJNLFRFXOJSLCBGCOKPMWIJKHWFXS");
    msg.value = 188U;

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
    msg.setTimeStamp(0.5991645799781928);
    msg.setSource(52935U);
    msg.setSourceEntity(73U);
    msg.setDestination(53250U);
    msg.setDestinationEntity(64U);
    msg.value = 0.3242517348238999;

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
    msg.setTimeStamp(0.8595183357828585);
    msg.setSource(53049U);
    msg.setSourceEntity(103U);
    msg.setDestination(63866U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8185658132131871;

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
    msg.setTimeStamp(0.375635676302537);
    msg.setSource(10653U);
    msg.setSourceEntity(139U);
    msg.setDestination(42160U);
    msg.setDestinationEntity(233U);
    msg.value = 0.8455335937648718;

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
    msg.setTimeStamp(0.3501380999601724);
    msg.setSource(49288U);
    msg.setSourceEntity(221U);
    msg.setDestination(16154U);
    msg.setDestinationEntity(33U);
    msg.value = 0.546757087034836;

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
    msg.setTimeStamp(0.9775830024599613);
    msg.setSource(62497U);
    msg.setSourceEntity(217U);
    msg.setDestination(59834U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8303487512514215;

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
    msg.setTimeStamp(0.08551946585088144);
    msg.setSource(46988U);
    msg.setSourceEntity(189U);
    msg.setDestination(29760U);
    msg.setDestinationEntity(226U);
    msg.value = 0.44572737719191313;

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
    msg.setTimeStamp(0.7584256931132567);
    msg.setSource(60697U);
    msg.setSourceEntity(206U);
    msg.setDestination(10041U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7800954416326957;

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
    msg.setTimeStamp(0.4508875450370923);
    msg.setSource(61399U);
    msg.setSourceEntity(228U);
    msg.setDestination(8482U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8384975545800599;

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
    msg.setTimeStamp(0.38847519512109374);
    msg.setSource(27594U);
    msg.setSourceEntity(39U);
    msg.setDestination(65315U);
    msg.setDestinationEntity(194U);
    msg.value = 0.08326737395488826;

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
    msg.setTimeStamp(0.8704239926081094);
    msg.setSource(4348U);
    msg.setSourceEntity(90U);
    msg.setDestination(19383U);
    msg.setDestinationEntity(165U);
    msg.restriction = 26U;
    msg.reason.assign("FEBKQQNRQODVCWMLFMTDNRNEDXOTZXYEJBLXRUVHSVJINZHBFUTCFJHUQVXUKCVTBTOGUCFQSEADURXBZOJKICTLATVKLAXZPWNPSGSSKVKFGUWYYGCYFUSDCMNIEFNLMABMGQLSXZWRGELW");

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
    msg.setTimeStamp(0.8519484274347662);
    msg.setSource(11237U);
    msg.setSourceEntity(135U);
    msg.setDestination(42329U);
    msg.setDestinationEntity(15U);
    msg.restriction = 250U;
    msg.reason.assign("MNWJHZHCDBKOOUHTYPVWKVOLHHEDJJPWQPTXOMXCDBAMJGMENTCRMZXFIUCEUGWBSUXDQGSSXGQVCXZSKFGGUHPFKCGFNDM");

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
    msg.setTimeStamp(0.794979873980725);
    msg.setSource(15981U);
    msg.setSourceEntity(251U);
    msg.setDestination(55231U);
    msg.setDestinationEntity(28U);
    msg.restriction = 241U;
    msg.reason.assign("VXLUEHVUDGLMLCUIRBOYYGSOOQEGGRNJUZVHYTFOPIYNUPXYAQHXDXPLFTZEKBMIEWGOCMZKSCYDWFBBHGTLBESXRQQOLBRWEGSOCBJFPZAGSWLRQKPJLFTCTCIJXKHYVJQBTZXTEDFIVDWIGQNMCPADHALSNUHUHUAZNKAMNSQCVMLIKCQWKBYZKZRPMJYXFNTMVAQRAWAPDKDDRROWPIUCTTOMDOGBIU");

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
    msg.setTimeStamp(0.10499167646470986);
    msg.setSource(3498U);
    msg.setSourceEntity(108U);
    msg.setDestination(50266U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.6320640758500907;
    msg.lon = 0.12639789263892776;
    msg.v_x = 0.24149970710895108;
    msg.v_y = 0.13341303089461887;

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
    msg.setTimeStamp(0.40825604992286135);
    msg.setSource(34688U);
    msg.setSourceEntity(106U);
    msg.setDestination(32946U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.3377107340898313;
    msg.lon = 0.38361473681233815;
    msg.v_x = 0.6695578005279231;
    msg.v_y = 0.8475145686377281;

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
    msg.setTimeStamp(0.049838723838955934);
    msg.setSource(39244U);
    msg.setSourceEntity(243U);
    msg.setDestination(24725U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.760221609698802;
    msg.lon = 0.9788438731119737;
    msg.v_x = 0.27903806483368054;
    msg.v_y = 0.1456798455657572;

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
