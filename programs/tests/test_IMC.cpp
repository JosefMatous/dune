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
// IMC XML MD5: 7cd8ebaaac0b3dd6956f7e8f4162291b                            *
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
    msg.setTimeStamp(0.5986459061045346);
    msg.setSource(23415U);
    msg.setSourceEntity(227U);
    msg.setDestination(29000U);
    msg.setDestinationEntity(73U);
    msg.state = 125U;
    msg.flags = 210U;
    msg.description.assign("GNMUNCSGCYRVFRDGJTMYISBWCFIGZOPYKQZVZWVMHXBUZDRHVACHVJHHDRINKOLYAIPYBXJHJMPEOXSEIBNJPLIWNKZWLTXEJJLGDZHALZKYTSWIERIVUSDFKDP");

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
    msg.setTimeStamp(0.3789469761714429);
    msg.setSource(10223U);
    msg.setSourceEntity(163U);
    msg.setDestination(57617U);
    msg.setDestinationEntity(230U);
    msg.state = 163U;
    msg.flags = 132U;
    msg.description.assign("JWVCWWQTJIHYYUAVBCGCEKHDLMJBPORXJONGZFRGPMN");

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
    msg.setTimeStamp(0.467343093129987);
    msg.setSource(25320U);
    msg.setSourceEntity(14U);
    msg.setDestination(7741U);
    msg.setDestinationEntity(242U);
    msg.state = 202U;
    msg.flags = 198U;
    msg.description.assign("ZZMSKHKEJMBYOVAOFNDMRHAIFDGPIUALPBLFSHDATXWOIYRMVVKHMNTIJXHTIACPFDTAXFPCXKLYMRQGYKGQGYNESDYXFEOLWSFCQSLRUCSUHXKCVQOIWXVKDBRAICQIHGFQS");

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
    msg.setTimeStamp(0.939607272311245);
    msg.setSource(23785U);
    msg.setSourceEntity(247U);
    msg.setDestination(2837U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.5412261879963923);
    msg.setSource(28061U);
    msg.setSourceEntity(159U);
    msg.setDestination(58884U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.357303221348815);
    msg.setSource(38909U);
    msg.setSourceEntity(253U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.42892278646579274);
    msg.setSource(8702U);
    msg.setSourceEntity(165U);
    msg.setDestination(18959U);
    msg.setDestinationEntity(247U);
    msg.id = 246U;
    msg.label.assign("DJVOPQYOXVWJJBVAHVZTQDWBCTDMGUNBEYKGCDVQYPATSUFSFMNHOEKMIPXWSZYRRTXCDDRGAMRYQAPPXNNLXNHGCLTHJCTIGDFJSFLTBVUMSFJQZUUW");
    msg.component.assign("FIDOBMIVKWYNEMVGQVQNPZHQIULVGLYEJPBWTWHZSOTCFNXXCCDALBLJ");
    msg.act_time = 52100U;
    msg.deact_time = 6387U;

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
    msg.setTimeStamp(0.8270635360477435);
    msg.setSource(10920U);
    msg.setSourceEntity(148U);
    msg.setDestination(50119U);
    msg.setDestinationEntity(136U);
    msg.id = 108U;
    msg.label.assign("KULHYNQFGVVETMSMFAJDFOQUKPURCESBMFQWBQ");
    msg.component.assign("YFZGLMLFQRULBYNIPSEVUXORVWGKRSGOAVIAJLHIQYRMTEOKUHOZJRVWBXPCMCPYFVFNXVHAIDSTCODVUDAAMQACTDONCUFYVCDJLTZWGRWVZJKLNYXPXEG");
    msg.act_time = 56189U;
    msg.deact_time = 51406U;

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
    msg.setTimeStamp(0.2022093639660607);
    msg.setSource(57218U);
    msg.setSourceEntity(82U);
    msg.setDestination(32546U);
    msg.setDestinationEntity(74U);
    msg.id = 116U;
    msg.label.assign("VCKWHLVIKBKNZXAYAANXKNQEFUVGRJUVFWHUUZPQSXMISHPHIHSZITBMTWLJAKSMYYCVKHGPTROMLSGMUCEZOPDQSXXYDNUAIFBGKNJDUJGLMZRPGESSTOZSFWHLRDABKEUWBWLJCCFEKGCDVDDTLQDIROVQJZRWEXVIQNPOQQUGXBBFAFCIP");
    msg.component.assign("AQMEGAWBJAZEQORUFSXCQHLWOEHXUAFGTYIJIMYJJLWHKZNSDFBUGUATDOOUTVDTBIVCFWPMQINUKPJEGHLACHLZRDBJAXCQMSKNTCVPMDPARRDZGMRJDPEGXFXUNNHOHGNKOBRFNUEYYRFXHPNVHPWAVISBGQLPWJKTILBTTAYGYETYBCMQZYMIRSPJMSNYLVOLZCLDMYIFLSKZQDBWWVCKFDUHXWXPQEGRBQXFOCTKVVSKE");
    msg.act_time = 59797U;
    msg.deact_time = 21741U;

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
    msg.setTimeStamp(0.7823784285755726);
    msg.setSource(59002U);
    msg.setSourceEntity(139U);
    msg.setDestination(8901U);
    msg.setDestinationEntity(14U);
    msg.id = 60U;

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
    msg.setTimeStamp(0.3068811569026675);
    msg.setSource(21133U);
    msg.setSourceEntity(27U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(176U);
    msg.id = 140U;

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
    msg.setTimeStamp(0.6580983689205592);
    msg.setSource(866U);
    msg.setSourceEntity(211U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(230U);
    msg.id = 36U;

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
    msg.setTimeStamp(0.3874717407593119);
    msg.setSource(54128U);
    msg.setSourceEntity(75U);
    msg.setDestination(56057U);
    msg.setDestinationEntity(177U);
    msg.op = 25U;
    msg.list.assign("FDANKIXTJCWRIOEHYZOXPXLLCRZO");

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
    msg.setTimeStamp(0.09580139325624426);
    msg.setSource(23577U);
    msg.setSourceEntity(228U);
    msg.setDestination(51102U);
    msg.setDestinationEntity(93U);
    msg.op = 7U;
    msg.list.assign("YGPNIQGZBSXHMXRKTRTXYTZRHEEWBDJDCUVYVBMNAWVMNGBCNWAVUZJGOXCJQHFPDRJKKMBSXMSDHUEAHJSXWRLROGYZAQDYGCCXCIRZTELUATPKNPOTWZDTPWEKNOFYOLHEUPZKQFUYVFKGRIWVSQQHVOTNDPNVUMHAVBQCOHMAIFLSBSZNPUBLFPKNIWQGFBLCHTILXTAEJFDAQUIG");

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
    msg.setTimeStamp(0.17702832823206405);
    msg.setSource(50154U);
    msg.setSourceEntity(174U);
    msg.setDestination(30709U);
    msg.setDestinationEntity(220U);
    msg.op = 63U;
    msg.list.assign("CZOWLHBMXOTUJVLKLSMIBBYMDKRPCSDLYUOKDIGWONEGLHGAUXKLHBEKATLQGHXTOWHFXRUQOBVAOCWFQQUXJYOZPNNTEWJMKUJUDSSTFGQJJFAPHBYZBJTTWDQXDTWWGKVDXGGXCNZTKSGMELSDCMNZVLJVCNRYZKWGMAZEPHPJUDESHFJPYQPAPRATYFRSCECYAEFXBMLVRVQVERWMZUFIRIUAEZCBKIQS");

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
    msg.setTimeStamp(0.6734247238183287);
    msg.setSource(45008U);
    msg.setSourceEntity(224U);
    msg.setDestination(17078U);
    msg.setDestinationEntity(241U);
    msg.value = 209U;

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
    msg.setTimeStamp(0.9416004435347306);
    msg.setSource(1030U);
    msg.setSourceEntity(59U);
    msg.setDestination(25302U);
    msg.setDestinationEntity(131U);
    msg.value = 209U;

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
    msg.setTimeStamp(0.42644043219146344);
    msg.setSource(55737U);
    msg.setSourceEntity(41U);
    msg.setDestination(2906U);
    msg.setDestinationEntity(196U);
    msg.value = 119U;

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
    msg.setTimeStamp(0.40960753069383127);
    msg.setSource(5185U);
    msg.setSourceEntity(232U);
    msg.setDestination(10845U);
    msg.setDestinationEntity(7U);
    msg.consumer.assign("AGJMGBMVQMXNCPQQKHXKLSDIPRZEXRGENUYCSVZBRTRPFFXCVOSKAFBADZHTMKAQCWUIZLZEKQVOGVXFYPIUS");
    msg.message_id = 46230U;

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
    msg.setTimeStamp(0.8872478293396026);
    msg.setSource(56032U);
    msg.setSourceEntity(156U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(126U);
    msg.consumer.assign("JEDVLPWZQECOSYQXSDKMCKBVHHMDRDRLPXAMF");
    msg.message_id = 58019U;

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
    msg.setTimeStamp(0.3393401526334343);
    msg.setSource(48994U);
    msg.setSourceEntity(24U);
    msg.setDestination(11303U);
    msg.setDestinationEntity(101U);
    msg.consumer.assign("XRZOWDSQOKYQVNEERVBDLSJAMFUHROAUEAANNCZGKTELJWCFGAZFGGNZLIPEBCPXWXUJVPNFLTYITKJEDMJMKQZJHJWVHRUTIXGXBITAZGMOVIKDMSRHFTNPBURFGHYPZUCPTBLQSKXSEDULDYSEVYVCQHDNYCONOGDSYFEZSFCJXQYDNQKAIRLFTJHB");
    msg.message_id = 57581U;

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
    msg.setTimeStamp(0.6146578933117646);
    msg.setSource(22241U);
    msg.setSourceEntity(30U);
    msg.setDestination(18259U);
    msg.setDestinationEntity(205U);
    msg.type = 81U;

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
    msg.setTimeStamp(0.9917585937002797);
    msg.setSource(62074U);
    msg.setSourceEntity(37U);
    msg.setDestination(62334U);
    msg.setDestinationEntity(217U);
    msg.type = 196U;

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
    msg.setTimeStamp(0.30055660041681365);
    msg.setSource(14013U);
    msg.setSourceEntity(24U);
    msg.setDestination(25243U);
    msg.setDestinationEntity(98U);
    msg.type = 35U;

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
    msg.setTimeStamp(0.04762224331028175);
    msg.setSource(22126U);
    msg.setSourceEntity(25U);
    msg.setDestination(20765U);
    msg.setDestinationEntity(180U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.12294137532040406);
    msg.setSource(36955U);
    msg.setSourceEntity(153U);
    msg.setDestination(5179U);
    msg.setDestinationEntity(71U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.29609879436372155);
    msg.setSource(15824U);
    msg.setSourceEntity(157U);
    msg.setDestination(1675U);
    msg.setDestinationEntity(147U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.20390110588706534);
    msg.setSource(54570U);
    msg.setSourceEntity(50U);
    msg.setDestination(6497U);
    msg.setDestinationEntity(44U);
    msg.total_steps = 133U;
    msg.step_number = 237U;
    msg.step.assign("ICZYGFFQLSNQDGONCJUYXFV");
    msg.flags = 152U;

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
    msg.setTimeStamp(0.9037682797925827);
    msg.setSource(47052U);
    msg.setSourceEntity(235U);
    msg.setDestination(11382U);
    msg.setDestinationEntity(27U);
    msg.total_steps = 62U;
    msg.step_number = 106U;
    msg.step.assign("JGLXRBYESBTTAYICYXPVNBZAUSSZWKHKYAMORWIUEIJMDCQHODEINQKPNJTWDGVUEEHDPOMFCNQMCPPGQNYMFKEFBHIWULECVZWUAPXXRHWOTSNXDGRMSAPVHFOQAZLTLDXSLQRSGVVIJUHIEDCMIFBKMAGZJBJHFSVXOYTKSZPUKTSTLCGWNKPDBJOYATKNRTUQMCWQDCLRAVDJFWQOKMROLZVWZEHYFGROGHJCUXJP");
    msg.flags = 158U;

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
    msg.setTimeStamp(0.4000598480868415);
    msg.setSource(20897U);
    msg.setSourceEntity(149U);
    msg.setDestination(34596U);
    msg.setDestinationEntity(78U);
    msg.total_steps = 34U;
    msg.step_number = 160U;
    msg.step.assign("GFTCKEZMIDJBFDSXPPNRDGRZLFTDMQDBEIZTFNGGHHQWUASTQNZVJDANMYDHJTOTBBQAZBEGEROWSYGXATEBYCXNBCUWYCOIHCGRTWOIVWXAHMRWLHQZIUALXXNFNLVZTRENKIOSUAKULXJMUSFMJPOAUKYSMJYCPKLBMVWLJHVHKOZESVXFBYJGQCSJVWVQIFI");
    msg.flags = 111U;

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
    msg.setTimeStamp(0.28978198546545453);
    msg.setSource(8372U);
    msg.setSourceEntity(223U);
    msg.setDestination(8237U);
    msg.setDestinationEntity(249U);
    msg.state = 39U;
    msg.error.assign("TJWJTGADOTUQORHEYAINOJRVCVSQJHLYUEKGCRVRIHAENSVOTNLEYQBQKSBOXIJUQCKMVBXWZVEMUPDEDKRMGHIPPFLMJXLBAARRBGNJDIMDSHEZVHSEJPKYBQWNZMYDLYKDOPGYWXJCVGUWSTCNTQWCIBGRLTLTBZHPYTQXLO");

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
    msg.setTimeStamp(0.5581769582460968);
    msg.setSource(46207U);
    msg.setSourceEntity(216U);
    msg.setDestination(23241U);
    msg.setDestinationEntity(181U);
    msg.state = 41U;
    msg.error.assign("POIIDUEPIDQKCOGQCWLXANXFCWASJDMSYXAWJZGMCNLGJN");

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
    msg.setTimeStamp(0.5880147626080016);
    msg.setSource(24165U);
    msg.setSourceEntity(170U);
    msg.setDestination(49567U);
    msg.setDestinationEntity(192U);
    msg.state = 160U;
    msg.error.assign("OZSMDEBSVEVHXSYMSBHJTUDCDVHH");

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
    msg.setTimeStamp(0.2638956386891964);
    msg.setSource(23237U);
    msg.setSourceEntity(60U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.9995145137414466);
    msg.setSource(52686U);
    msg.setSourceEntity(124U);
    msg.setDestination(52167U);
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
    msg.setTimeStamp(0.49397696543822733);
    msg.setSource(27067U);
    msg.setSourceEntity(217U);
    msg.setDestination(54903U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.6582035034289141);
    msg.setSource(11943U);
    msg.setSourceEntity(244U);
    msg.setDestination(51836U);
    msg.setDestinationEntity(25U);
    msg.op = 206U;
    msg.speed_min = 0.3764864833750161;
    msg.speed_max = 0.3315313960748496;
    msg.long_accel = 0.045389391102292787;
    msg.alt_max_msl = 0.5321510922371663;
    msg.dive_fraction_max = 0.3201032944051849;
    msg.climb_fraction_max = 0.6626150226603928;
    msg.bank_max = 0.16272275405013437;
    msg.p_max = 0.6712611949627251;
    msg.pitch_min = 0.20698514461516648;
    msg.pitch_max = 0.014785665989159757;
    msg.q_max = 0.458624604430106;
    msg.g_min = 0.35896483983158745;
    msg.g_max = 0.5080038678635264;
    msg.g_lat_max = 0.8206780349024891;
    msg.rpm_min = 0.9732395974532928;
    msg.rpm_max = 0.7616482227278665;
    msg.rpm_rate_max = 0.8128223922948011;

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
    msg.setTimeStamp(0.8141507824960683);
    msg.setSource(15257U);
    msg.setSourceEntity(120U);
    msg.setDestination(35586U);
    msg.setDestinationEntity(157U);
    msg.op = 170U;
    msg.speed_min = 0.3158592484216257;
    msg.speed_max = 0.044644674844235066;
    msg.long_accel = 0.7349747059192097;
    msg.alt_max_msl = 0.15641897263113247;
    msg.dive_fraction_max = 0.13791992535495;
    msg.climb_fraction_max = 0.7476784692208379;
    msg.bank_max = 0.5762936612879387;
    msg.p_max = 0.9915421995738937;
    msg.pitch_min = 0.5401260218545473;
    msg.pitch_max = 0.39961961419679715;
    msg.q_max = 0.44278778905855576;
    msg.g_min = 0.7794075080190008;
    msg.g_max = 0.38879957255332953;
    msg.g_lat_max = 0.3848677690133897;
    msg.rpm_min = 0.08577516892364268;
    msg.rpm_max = 0.3129433839107648;
    msg.rpm_rate_max = 0.27089586908749397;

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
    msg.setTimeStamp(0.49985362161142555);
    msg.setSource(6500U);
    msg.setSourceEntity(144U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(139U);
    msg.op = 137U;
    msg.speed_min = 0.5902604785705882;
    msg.speed_max = 0.013585386417974021;
    msg.long_accel = 0.18960247938071284;
    msg.alt_max_msl = 0.1299310064489334;
    msg.dive_fraction_max = 0.8467258280841814;
    msg.climb_fraction_max = 0.6473678615945342;
    msg.bank_max = 0.015959453833015558;
    msg.p_max = 0.9468021696026077;
    msg.pitch_min = 0.10183171749326558;
    msg.pitch_max = 0.927522173027533;
    msg.q_max = 0.2995862679079846;
    msg.g_min = 0.2829320090236288;
    msg.g_max = 0.9326119176040543;
    msg.g_lat_max = 0.6701803687240964;
    msg.rpm_min = 0.5624617468172034;
    msg.rpm_max = 0.7165112627053446;
    msg.rpm_rate_max = 0.45537953584008883;

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
    msg.setTimeStamp(0.486382736987217);
    msg.setSource(60253U);
    msg.setSourceEntity(34U);
    msg.setDestination(6839U);
    msg.setDestinationEntity(222U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7397516758363479;
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
    msg.setTimeStamp(0.8510583394270759);
    msg.setSource(48612U);
    msg.setSourceEntity(80U);
    msg.setDestination(42839U);
    msg.setDestinationEntity(160U);
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("AWXHREAHIHZLPXBOWJLAUDLMICYEGCPFCKD");
    tmp_msg_0.op = 100U;
    tmp_msg_0.sched_time = 0.21791430834443493;
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
    msg.setTimeStamp(0.9580248996665517);
    msg.setSource(19229U);
    msg.setSourceEntity(229U);
    msg.setDestination(42504U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.4586816415205337);
    msg.setSource(12057U);
    msg.setSourceEntity(148U);
    msg.setDestination(29978U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.9578154114480598;
    msg.lon = 0.9661889144666166;
    msg.height = 0.5319868231572699;
    msg.x = 0.7300132228423544;
    msg.y = 0.2113317578109677;
    msg.z = 0.8462732268979606;
    msg.phi = 0.789600400240803;
    msg.theta = 0.9752677932952727;
    msg.psi = 0.49860709709908957;
    msg.u = 0.690070831687484;
    msg.v = 0.7164839901725858;
    msg.w = 0.6992779517362862;
    msg.p = 0.6773269091562693;
    msg.q = 0.478266430196974;
    msg.r = 0.22508422999877453;
    msg.svx = 0.5252462470285185;
    msg.svy = 0.5299688638609323;
    msg.svz = 0.2318114851940808;

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
    msg.setTimeStamp(0.5233026544318631);
    msg.setSource(3313U);
    msg.setSourceEntity(163U);
    msg.setDestination(17494U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.4963743085046962;
    msg.lon = 0.6506870978379867;
    msg.height = 0.34666924385764775;
    msg.x = 0.8414239767817518;
    msg.y = 0.7877661031185382;
    msg.z = 0.7338876602878376;
    msg.phi = 0.4536552264942515;
    msg.theta = 0.5490778602001335;
    msg.psi = 0.48637951115871003;
    msg.u = 0.337163620283116;
    msg.v = 0.36135823549379453;
    msg.w = 0.3384377819503299;
    msg.p = 0.8830027293319;
    msg.q = 0.9334586573857242;
    msg.r = 0.6011147598027267;
    msg.svx = 0.6239664496074872;
    msg.svy = 0.8385925143925855;
    msg.svz = 0.05344715485048479;

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
    msg.setTimeStamp(0.49541777121662955);
    msg.setSource(15250U);
    msg.setSourceEntity(120U);
    msg.setDestination(60067U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.1338981197285819;
    msg.lon = 0.5782719705757774;
    msg.height = 0.18450166052959027;
    msg.x = 0.7061118209642452;
    msg.y = 0.163034210230372;
    msg.z = 0.9784535929764807;
    msg.phi = 0.836193284677583;
    msg.theta = 0.060232680006285344;
    msg.psi = 0.4193926107936695;
    msg.u = 0.14170954095718513;
    msg.v = 0.6257887204014855;
    msg.w = 0.40182222690101943;
    msg.p = 0.7282122087592914;
    msg.q = 0.7088791028392195;
    msg.r = 0.02706394158221259;
    msg.svx = 0.44619350145114056;
    msg.svy = 0.2503294238196052;
    msg.svz = 0.9774109856106308;

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
    msg.setTimeStamp(0.6905527773911971);
    msg.setSource(47194U);
    msg.setSourceEntity(124U);
    msg.setDestination(48400U);
    msg.setDestinationEntity(179U);
    msg.op = 206U;
    msg.entities.assign("TMZNQLMBADRFEXHSTPDRHDGZ");

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
    msg.setTimeStamp(0.4513440571759413);
    msg.setSource(25967U);
    msg.setSourceEntity(110U);
    msg.setDestination(17397U);
    msg.setDestinationEntity(213U);
    msg.op = 225U;
    msg.entities.assign("MBURIDRWKGJFUJWLRTSVCPCIQASTALZJCOHOCJRBRZHMMBTUDAVALZAWAWBNEGKDPVUWBXPHENSEKYXUUBMKIPSFJOOQBKFJRSYJNEVSLTKYQYZQBEITKYXKQVBQQCXKOXNPMGVHQTPLKFFYGZALNJIUDHCWODYDPGTFFDEMFLAR");

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
    msg.setTimeStamp(0.18612808389918156);
    msg.setSource(47419U);
    msg.setSourceEntity(191U);
    msg.setDestination(61242U);
    msg.setDestinationEntity(121U);
    msg.op = 166U;
    msg.entities.assign("DDEBMYSUNQZXFQKSUHBSYMFQGA");

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
    msg.setTimeStamp(0.8332284158457477);
    msg.setSource(10377U);
    msg.setSourceEntity(183U);
    msg.setDestination(24358U);
    msg.setDestinationEntity(158U);
    msg.type = 203U;
    msg.speed = 983U;
    const char tmp_msg_0[] = {-111, -118, 97, 14, -32, 13, -114, -127, 85, -113, -26, 93, -126, 112, -126, -67, 65, -44, -92, -88, 29, 79, 59, 39, 82, 48, 18, -111, -93, 48, -51, -16, 5, -92, -28, -68, -20, 113, 98, -63, 29, 26, 29, 95, 115, 97, -19, 85, 81, -29, 109, 101, 116, -24, -16, -71, 96, -9, 98, -101, -80, -64, 29, -125, -94, -45, 50, 99, -66, -10, 62, -10, 98, 116, 32, 76, -19, -58, -57, 21, 93, -45, -106, 114, -72, -116, 117, -83, 116, -46, 117, -32, 93, 126, -26, 1, -15, 40, -111, 99, -94, -119, 82, 124, -64, -85, 78, -59, 7, 3, 64, 65, 120, 5, -103, 72, 38, -102, -64, 14, 120, 95, -10, 123, 87, 60, 104, -69, -18, 72, 110, -17, 51, -39, -100, -109, 14, -81, -69, -72, 37, 39, -66, 102, 60, -79, 23, -22, 121, -84, -107, -32, 33, -2, -102, 32, 85, 29, -46, -2, -11, 36, -11, 56, 52, 17, -108, 27, 101, 115, -66, 16, -44, -13, 96, 43, -118, -117, 83, -59, -8, -93, -18, 79, -36, 79, -128, -78, -83, 33, 22, 77, -125, 9, -119, -38, 65, -70, -40, -6, 70, -50, 118, -102, -89, -4, 124, -99, -69, -63, 110, -10, 79, 112, -63, 40, -10, 38, 15, 3, 92, 3, -128, 49, -108, -6, -127, -107, 61, -96, -76, 51, -37, -84, 31, 80, 15, 126, -113, 5, 108, 96};
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
    msg.setTimeStamp(0.3474668288072037);
    msg.setSource(10615U);
    msg.setSourceEntity(216U);
    msg.setDestination(60323U);
    msg.setDestinationEntity(151U);
    msg.type = 207U;
    msg.speed = 44567U;
    const char tmp_msg_0[] = {-67, 59, 105, -14, 57, 42, 115, -27, -60, 85, 84, 16, 113, -97, 116, 14, -65, 89, 120, -41, -44, 48, 35, 78, 116, 126, 88, -41, -127, 125, -109, 12, 106, -125, -10, 0, 19, -79, 82, -23, -29, -56, 19, -35, 15, 22, -32, -108, 111, 38, 81, 41, -61, -61, -20, -102, 4, 35, 6, -113, 66, 88, 6, 48, 72, -106, -27, -102, -111, 37, -82, -29, 105, -114, -51, -71, -9, -106, -106, -35, 91, 99, 21, -99, -109, -15, 99, 14, -94, -70, -79, -104, -53, -51, -110, 82, 98, 95, -86, 121, -112, -15, -58, 93, -50, -98, 12, 48, 122, 22, 84, -15, -125, -40, -38, 38, -103, 102, 93, -66, -1, 11, 64, -117, 61, -33, 57, -56, 96, -79, 120, 87, -72, 91, -25, 52, -43, -51, -1, -8, -94, -5, 86, -24, -8, -47, 78, 56, -46, 84, 8, 94, -63, 45, -110, 31, -63, -107, -9, -36, 31, -103, -40, 60, 40, 54, 120};
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
    msg.setTimeStamp(0.8663302933699757);
    msg.setSource(50831U);
    msg.setSourceEntity(177U);
    msg.setDestination(48631U);
    msg.setDestinationEntity(154U);
    msg.type = 35U;
    msg.speed = 8810U;
    const char tmp_msg_0[] = {22, -27, -45, 78, 70, -10, -124, 61, 103, 122, -90, -49, -83, 2, -30, 4, 40, -1, -3, -55, 94, 11, -81, 81, 76, 55, 85, -117, -69, -50, -116, -4, 36, 92, 117, -114, -84, -45, -59, 31, 60, -21, 75, -40, 43, 12, -92, 26, 105, -87, 122, 107, 28, -123, 55, 107, 74, -22, 50, 79, 26, 61, 11, -49, -76, -79, 49, -104, -56, -67, -4, -101, 37, -100, 52, 122, -119, -97, -124, 86, 116, 47, 63, -114, 27, 14, 100, 94, 35, 5, 68, 76, 122, 96, 62, -107, -6, -57, -41, 9, 95, 38, -113, -80, -86, -104, -103, 104, 24};
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
    msg.setTimeStamp(0.6397933040996966);
    msg.setSource(42156U);
    msg.setSourceEntity(3U);
    msg.setDestination(6264U);
    msg.setDestinationEntity(170U);
    msg.op = 177U;
    msg.tas2acc_pgain = 0.653887845804279;
    msg.bank2p_pgain = 0.821757413704632;

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
    msg.setTimeStamp(0.9933349930657197);
    msg.setSource(1744U);
    msg.setSourceEntity(103U);
    msg.setDestination(10449U);
    msg.setDestinationEntity(180U);
    msg.op = 167U;
    msg.tas2acc_pgain = 0.9435060812789092;
    msg.bank2p_pgain = 0.00731764908457555;

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
    msg.setTimeStamp(0.9292870724891357);
    msg.setSource(40011U);
    msg.setSourceEntity(154U);
    msg.setDestination(46448U);
    msg.setDestinationEntity(211U);
    msg.op = 146U;
    msg.tas2acc_pgain = 0.08448244918686654;
    msg.bank2p_pgain = 0.8299754336902426;

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
    msg.setTimeStamp(0.6965383476676024);
    msg.setSource(10053U);
    msg.setSourceEntity(65U);
    msg.setDestination(17598U);
    msg.setDestinationEntity(252U);
    msg.available = 2803254730U;
    msg.value = 165U;

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
    msg.setTimeStamp(0.8745805181674967);
    msg.setSource(24560U);
    msg.setSourceEntity(134U);
    msg.setDestination(10540U);
    msg.setDestinationEntity(156U);
    msg.available = 3029858481U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.8873368540236872);
    msg.setSource(47672U);
    msg.setSourceEntity(142U);
    msg.setDestination(30489U);
    msg.setDestinationEntity(44U);
    msg.available = 2762746937U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.8597737806094763);
    msg.setSource(14354U);
    msg.setSourceEntity(227U);
    msg.setDestination(54854U);
    msg.setDestinationEntity(247U);
    msg.op = 1U;
    msg.snapshot.assign("PAPZHWTASZJUFZFEXDCJISZNIGTNYIOGQGQLPHYMLABOKUUMXGCUCJBOIYNNIFZPJXOMQBCNNOAHBFDMSBNAKFDBDBMHECMGVRYGCVWDEOVVVJVMYVOQPLT");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0008222835171732834;
    tmp_msg_0.y = 0.798589587777454;
    tmp_msg_0.z = 0.3951805535725219;
    tmp_msg_0.phi = 0.23671168401311526;
    tmp_msg_0.theta = 0.6744576426423009;
    tmp_msg_0.psi = 0.9840938813038499;
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
    msg.setTimeStamp(0.9766930182246364);
    msg.setSource(18618U);
    msg.setSourceEntity(113U);
    msg.setDestination(50350U);
    msg.setDestinationEntity(100U);
    msg.op = 198U;
    msg.snapshot.assign("ITKWUGOMSEGRYIOFCMEUODKEKILOJYLECGQNZDWFGPMZ");
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 40U;
    tmp_msg_0.lat = 0.22305122149330847;
    tmp_msg_0.lon = 0.8348995230593299;
    tmp_msg_0.x = 0.11915948490481587;
    tmp_msg_0.y = 0.8720948702880414;
    tmp_msg_0.z = 0.6613301588296988;
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
    msg.setTimeStamp(0.4607105805345568);
    msg.setSource(41621U);
    msg.setSourceEntity(195U);
    msg.setDestination(28524U);
    msg.setDestinationEntity(140U);
    msg.op = 165U;
    msg.snapshot.assign("MKVHHYBRBRQNTYYOENXMCKSGSZSQMOHNRLFFCLEKJXMBVNZZDISIDPQOTNUMAVFUGAZFDFLDDPWYXKNIQSAGXZPLHEIPVMMTUOPILRWWCXHVWTOFEEQXXIBCTTHUHW");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1972036108U;
    tmp_msg_0.state = 176U;
    tmp_msg_0.error.assign("TKNUTKUIQRIBPTJTVXUXBBZDLDNMWPZQBF");
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
    msg.setTimeStamp(0.08018375548866497);
    msg.setSource(32425U);
    msg.setSourceEntity(249U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(83U);
    msg.op = 124U;
    msg.name.assign("JVTITDJLOLAHJVXLDNMFBNREXEBZNCJKUGDFWCDJBBBPMIWXDWAXOVNMPUDOGHCRGYDSVWPYPIWFZQYFBZHQZAETPAJBKJSRGMINNXQLUKQLHLSZXFPNRJH");

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
    msg.setTimeStamp(0.4313823472919256);
    msg.setSource(45795U);
    msg.setSourceEntity(111U);
    msg.setDestination(13299U);
    msg.setDestinationEntity(40U);
    msg.op = 42U;
    msg.name.assign("OJGCDMVEPNGQKMOSUNUQYILUVTGZGPIGZNESYBNHZWWMGONOEFRLVQNBKFAWACNRAHGVDGCBFQDTVEUHDTPRSCOLABIXSHPCPFBKFWRHFKUTZUGPXYQAWCTDBKMSMMHCVXFHMNKTRLFXQH");

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
    msg.setTimeStamp(0.6291197442660682);
    msg.setSource(55146U);
    msg.setSourceEntity(237U);
    msg.setDestination(7651U);
    msg.setDestinationEntity(233U);
    msg.op = 13U;
    msg.name.assign("BJKJHHWODHDXEOPIHXKYKUJSNXPYUAD");

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
    msg.setTimeStamp(0.8378459189367526);
    msg.setSource(41771U);
    msg.setSourceEntity(94U);
    msg.setDestination(16064U);
    msg.setDestinationEntity(101U);
    msg.type = 85U;
    msg.htime = 0.6999931511898839;
    msg.context.assign("JMTCQMQAIWDRZLMWIDFHKJKWIRQZSITCALUTLRKSCYSVBWPGCSWAZINQESTDBCHUCAVMPTIDBERXBYZOEFZFPRTVOENJEBGQULAYXMNGGOONPVUBIHSGXGOYLTLUUHOSDOZXEAGZLB");
    msg.text.assign("WZOPMBRSWZBJQCUXBZPLEIYANOGJUVIUGFXYDKAVCADKRLGKECJFILJFHEFZPXMQULAKAKFWOYAJMHKNQGYCOQKFRRJJCGUDEOERXTHOITHZVLZPTGPHDCSDZKIZNVVTWTENVIVCTGPSCLRQPWTQJFU");

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
    msg.setTimeStamp(0.7501881618518128);
    msg.setSource(32144U);
    msg.setSourceEntity(225U);
    msg.setDestination(13053U);
    msg.setDestinationEntity(148U);
    msg.type = 215U;
    msg.htime = 0.307922683147155;
    msg.context.assign("QYLHICHQPVZIIZROWKTDEBHPJSVMJEXECVSQJ");
    msg.text.assign("NEOHKJCANYGCSTSLQPHFKMPFKWZJFVLRJKGPZXWRHIHCEQCBALWZKWIPQCJTJRMYTVKFRNMEOBRXARLYDOTDZTMJYOVEWVMGNTVEIHDVIEUXFYLLDLUQXLAIDYAEGAGVRUCLSEOZKDOOQXDHIFICNMUJIABTUXHOYPGXUNINGKRLORWSFPECFWDKIWMQVPFFZHQQXWTBBH");

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
    msg.setTimeStamp(0.356190199204919);
    msg.setSource(3574U);
    msg.setSourceEntity(103U);
    msg.setDestination(38476U);
    msg.setDestinationEntity(226U);
    msg.type = 116U;
    msg.htime = 0.29191666191262333;
    msg.context.assign("RZDCMGATYTANOGZ");
    msg.text.assign("CQDZIQHKMRQWCFRUKCOHTVWZMYLVJSLQZIWBZBCNVULNSOGAVAIBYOULYOKUESOPRYDSDGFMZEDEXDMFTPOPALJGPNNBSISRDLDVTAQDCIHMMHBPYUFKOPTJSWRZECRXWVHBBMFWCLOBNZWJEHUEVNPEJWWGZXLNQAGEXATUJGUSNKGVRGARUXUAIGTTHOXMJIBVNFKJQTKZEAESFWQPJBLLTGJKIIYYDMKDHFRQZPFATYKXSPVCRYQXCCH");

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
    msg.setTimeStamp(0.9949848998245626);
    msg.setSource(30559U);
    msg.setSourceEntity(185U);
    msg.setDestination(59075U);
    msg.setDestinationEntity(15U);
    msg.command = 105U;
    msg.htime = 0.7207559182077412;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 76U;
    tmp_msg_0.htime = 0.20292537877643257;
    tmp_msg_0.context.assign("ITIIDVDIIEANLPDBYAVRHOOFCFVOGTGDSLGUPYWPXQS");
    tmp_msg_0.text.assign("RNPHIOTYWMJJRNNXHDVWKEISSTCECDFLFOPKGMFSRGJNXEPVXREMGMUGULDBACDISKYGFVCZAQBZPOETJAXVEQMSZKRBNTVTOHHQNFOEIZLNMGYWKSCCJHUURRHDFNIBVDFTFUABOXQDHBPLPEYPYOLFPUMRYSBZGKUTPIGWDCWMADLBZIJWHLZWNFAYXOVGUAZOQXQZIKEQSEVQOCMIXZABLYVBUSCKTKJKTQPTAWWGVXCWHUJJ");
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
    msg.setTimeStamp(0.0504207902045577);
    msg.setSource(24897U);
    msg.setSourceEntity(44U);
    msg.setDestination(60386U);
    msg.setDestinationEntity(100U);
    msg.command = 134U;
    msg.htime = 0.754381744087567;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 11U;
    tmp_msg_0.htime = 0.7277784537412105;
    tmp_msg_0.context.assign("KTDMCGMWQFPPEENBRIBNHWGEOAXKSDXQIBGUKRKSTUZHEKUFNOOXDPJBZDOKLATHMNMCYRGUWIJZSOPGSHIXLQOBKPNROSKTHJDRVVBNDGJRYWIJUEUSCHLTQNRWVVGOFEAXAUHLAICZYJJWZXFAYBHPQTMNYILKYWLRDBESXMNRXDZANALITFCOZYVWSQZTPSQVBFOFXTVAMCUZAECQBVLPFIFCGZCEMVHQLP");
    tmp_msg_0.text.assign("AYWQAKBZVQINQAJSFLCQNOXJODUOPOCOGBKPACKACTBJMWSEWMYYKUDFHMPOZVBGVQQZMHCERPRGGKJJVLVXOTAOWPNXLZTEBHEJZLWCESHHSXYSVPLSJYFPZJUMFGZVZKUIMQVXSMXCEYVXA");
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
    msg.setTimeStamp(0.34099191794520467);
    msg.setSource(15852U);
    msg.setSourceEntity(79U);
    msg.setDestination(10033U);
    msg.setDestinationEntity(201U);
    msg.command = 244U;
    msg.htime = 0.2202964611021545;

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
    msg.setTimeStamp(0.7496021157540705);
    msg.setSource(57473U);
    msg.setSourceEntity(4U);
    msg.setDestination(35215U);
    msg.setDestinationEntity(225U);
    msg.op = 175U;
    msg.file.assign("JBSMXLZQQTYKXYSKYQROSAYGQQCGETYEOIIGMPUNZDXJWFDBZHCVNPPBPOIFZTRDPFJPUTOAFZGHHXLNJVEVTILYGSQVFWJQCYXKVSWJMMNOULIZDRVUJ");

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
    msg.setTimeStamp(0.8949514945656963);
    msg.setSource(4306U);
    msg.setSourceEntity(138U);
    msg.setDestination(8117U);
    msg.setDestinationEntity(86U);
    msg.op = 160U;
    msg.file.assign("ADLAESFTQQBQHVGPRGKRLUCMKIKFQLDNJMOJDJGUSVAEPYXHIBFMUWBOAIJVRFENLQXYUDGJEPYVMZJSUGLZTSRMKPZXGNOPKSVOYWCTUZUCJKFNCHYOWCGHOGHKIBWSDUZDSKEJJXFUNBYFLUD");

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
    msg.setTimeStamp(0.4790188487393975);
    msg.setSource(60381U);
    msg.setSourceEntity(132U);
    msg.setDestination(7050U);
    msg.setDestinationEntity(50U);
    msg.op = 175U;
    msg.file.assign("KGIVODLLNAKCWYPRRFAZKROCUEOHEXMZIVPQPGGYXZSSIHSBPQYSGZLKTFMJEZTQMWDWNMOBXFLVSJTBIREAFSN");

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
    msg.setTimeStamp(0.0347370696256013);
    msg.setSource(10636U);
    msg.setSourceEntity(171U);
    msg.setDestination(53534U);
    msg.setDestinationEntity(125U);
    msg.op = 100U;
    msg.clock = 0.2735281128609819;
    msg.tz = 125;

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
    msg.setTimeStamp(0.42660962137704617);
    msg.setSource(61485U);
    msg.setSourceEntity(160U);
    msg.setDestination(12245U);
    msg.setDestinationEntity(135U);
    msg.op = 199U;
    msg.clock = 0.6243438737933784;
    msg.tz = -124;

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
    msg.setTimeStamp(0.6674851720826711);
    msg.setSource(16301U);
    msg.setSourceEntity(228U);
    msg.setDestination(12360U);
    msg.setDestinationEntity(211U);
    msg.op = 168U;
    msg.clock = 0.5743376409440359;
    msg.tz = -18;

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
    msg.setTimeStamp(0.0034757591913316954);
    msg.setSource(31129U);
    msg.setSourceEntity(66U);
    msg.setDestination(63525U);
    msg.setDestinationEntity(101U);
    msg.conductivity = 0.6501298756876694;
    msg.temperature = 0.7574577627011386;
    msg.depth = 0.5909452123502802;

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
    msg.setTimeStamp(0.8938407768920513);
    msg.setSource(10230U);
    msg.setSourceEntity(33U);
    msg.setDestination(43094U);
    msg.setDestinationEntity(24U);
    msg.conductivity = 0.1445616738883413;
    msg.temperature = 0.49995248858020236;
    msg.depth = 0.6800744294965728;

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
    msg.setTimeStamp(0.9699831701430273);
    msg.setSource(18509U);
    msg.setSourceEntity(108U);
    msg.setDestination(12873U);
    msg.setDestinationEntity(154U);
    msg.conductivity = 0.699407050779085;
    msg.temperature = 0.33005006009283144;
    msg.depth = 0.41703990947963054;

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
    msg.setTimeStamp(0.09352629743172369);
    msg.setSource(33032U);
    msg.setSourceEntity(19U);
    msg.setDestination(21284U);
    msg.setDestinationEntity(250U);
    msg.altitude = 0.2617245114966782;
    msg.roll = 34751U;
    msg.pitch = 63881U;
    msg.yaw = 25930U;
    msg.speed = 31774;

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
    msg.setTimeStamp(0.6397673831840471);
    msg.setSource(55710U);
    msg.setSourceEntity(202U);
    msg.setDestination(64505U);
    msg.setDestinationEntity(212U);
    msg.altitude = 0.9352917913384736;
    msg.roll = 24264U;
    msg.pitch = 53085U;
    msg.yaw = 44337U;
    msg.speed = -25875;

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
    msg.setTimeStamp(0.3526298739958672);
    msg.setSource(24678U);
    msg.setSourceEntity(231U);
    msg.setDestination(54901U);
    msg.setDestinationEntity(114U);
    msg.altitude = 0.22833891313796428;
    msg.roll = 47636U;
    msg.pitch = 58069U;
    msg.yaw = 53385U;
    msg.speed = -4091;

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
    msg.setTimeStamp(0.038897916869954585);
    msg.setSource(39099U);
    msg.setSourceEntity(139U);
    msg.setDestination(27678U);
    msg.setDestinationEntity(30U);
    msg.altitude = 0.4591040838586028;
    msg.width = 0.18452522500562807;
    msg.length = 0.8357115231083291;
    msg.bearing = 0.6874062188684752;
    msg.pxl = 6565;
    msg.encoding = 135U;
    const char tmp_msg_0[] = {-105, 23, -67, -75, 125, 97, -109, -87, 126, 90, 103, 81, 21, -121, 119, 91, 119, 123, 61, 112, 39, 115, 57, 77, 4, -124, -112, -27, 100, 19, 114, 117, 18, 51, 96, -60, -97, -113, -51, -27, -103, -118, -80, 85, -117, 33, -60, -26, 59, 73, 92, 61, 53, 62, 10, 115, 41, 90, -119, -25, -128, -89, -58, -35, 82, 93, -63, 113, -50, 97, -41, -84, 24, -107, -104, 12, 77, -39, -120, 4, -3, -48, -77, -22, 121, -47, -80, -32, 110, 27, -29, -98, 51, 79, -109, 48, -57, 1, -60, 35, 64, 66, 19, 54, 93, -34, 46, 25, -97, 100, 59, -29, -61, 76, 115, -112, -54, -3, 13, -96, -127, -77, -67, 51, -34, -39, -39, -20};
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
    msg.setTimeStamp(0.7336731180312117);
    msg.setSource(64913U);
    msg.setSourceEntity(206U);
    msg.setDestination(53544U);
    msg.setDestinationEntity(50U);
    msg.altitude = 0.962795080555141;
    msg.width = 0.5732180128098698;
    msg.length = 0.01808014214143483;
    msg.bearing = 0.24384286282175682;
    msg.pxl = 16669;
    msg.encoding = 156U;
    const char tmp_msg_0[] = {-107, -81, -108, -115, -10, 109, -83, 74, -17, 29, 32, 123, 21, 10, 63, 76, 95, -104, 73, -80, 78, 105, 29, 93, -113, -90, -2, -70, 89, 4, -97, -49, 82, -44, 59, -121, 119, -48, -20, -122, 4, -109, -37, -116, 11, 74, 33, 117, 117, -24, -83, -53, 54, -85, -16, -114, -67, 107, 78, 52, 109, -30, -20, 7, -16, -31, 43, 22, 66, -67, 111, 87, -112, -106, -122, -74, -47, 85, -111, 92, 15, -122, -17, 31, -90, 83, -53, -73, -116, -121, -85, -88, 25, -42, 80, 42, -102, 118, 77, 117, -114, 107, -33};
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
    msg.setTimeStamp(0.040609222569967574);
    msg.setSource(34796U);
    msg.setSourceEntity(251U);
    msg.setDestination(64477U);
    msg.setDestinationEntity(102U);
    msg.altitude = 0.944470580683883;
    msg.width = 0.08245051174579743;
    msg.length = 0.1501422859365753;
    msg.bearing = 0.1995818625567497;
    msg.pxl = 18177;
    msg.encoding = 173U;
    const char tmp_msg_0[] = {39, 70, 59, -66, 97, -116, 36, 110, 88, -57, 59, -116, -14, 13, -25, -96, 111, -59, 36, -53, 117, 15, -49, -74, -23, 100, 30, -107, -88, -29, -67, 66, 110, -89, 31, 78, -79, -32, -96, -16, -40, -41, -29, -61, -4, -71, -80, -59, 20, 9, 93, 60, -93, -6, 71, 85, -128, -34, 59, 60, 54, -45, -108, 77, 87, 101, -79, -87, 124, 36, 72, -113, 18, -51, 88, 44, -76, -116, 102, 94, 75, -7, 74, -20, -46, 45, 3};
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
    msg.setTimeStamp(0.2034375910489824);
    msg.setSource(24450U);
    msg.setSourceEntity(160U);
    msg.setDestination(52647U);
    msg.setDestinationEntity(29U);
    msg.text.assign("MRJYYSADLOFTEOKBZSVUDWOHYPDIQOZREJHOHIKGDXFDEAGIQUXCSLAFUKBSDWJWTBGMFQDPAEBIXSCPMOWHNEJXUBUQTIIMZFCNHBHJYKPGBUNRPPGVWCWAHXEFTVUNRMOLTMAKCXGVNYQTRWRZHLKZPXGNQTDVDBMKCVKBQMTCTZIMDHYSTJQILGEWGULNXRIAQJPNNOHCWZJLUYYSFSSVROKCSQKVYPFFLAYZX");
    msg.type = 196U;

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
    msg.setTimeStamp(0.9199548740897479);
    msg.setSource(64337U);
    msg.setSourceEntity(77U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(129U);
    msg.text.assign("MDQCLLDFUEQIEDTU");
    msg.type = 120U;

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
    msg.setTimeStamp(0.4917454609973132);
    msg.setSource(28712U);
    msg.setSourceEntity(206U);
    msg.setDestination(14909U);
    msg.setDestinationEntity(207U);
    msg.text.assign("UPSFVXGYKSXGQCQECTXHZPKBHHSLOQEZIBOEWNOFJJNUZTZHXSBGHLAXQTGMIFMOYYKUHKRVSRD");
    msg.type = 28U;

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
    msg.setTimeStamp(0.015583679567319986);
    msg.setSource(5406U);
    msg.setSourceEntity(103U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(30U);
    msg.parameter = 1U;
    msg.numsamples = 42U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 65058U;
    tmp_msg_0.avg = 0.3209609254869148;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7941500481284414;
    msg.lon = 0.760332992975649;

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
    msg.setTimeStamp(0.09442306385361854);
    msg.setSource(61914U);
    msg.setSourceEntity(31U);
    msg.setDestination(51948U);
    msg.setDestinationEntity(77U);
    msg.parameter = 29U;
    msg.numsamples = 78U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 34709U;
    tmp_msg_0.avg = 0.3245025824332347;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.01985260153657964;
    msg.lon = 0.021199671646132567;

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
    msg.setTimeStamp(0.16036644204833395);
    msg.setSource(56494U);
    msg.setSourceEntity(210U);
    msg.setDestination(28954U);
    msg.setDestinationEntity(219U);
    msg.parameter = 56U;
    msg.numsamples = 189U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 21325U;
    tmp_msg_0.avg = 0.37209232633700406;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.028127508313408378;
    msg.lon = 0.8189983042814788;

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
    msg.setTimeStamp(0.7331781406862575);
    msg.setSource(759U);
    msg.setSourceEntity(155U);
    msg.setDestination(38635U);
    msg.setDestinationEntity(38U);
    msg.depth = 3615U;
    msg.avg = 0.22324775715636613;

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
    msg.setTimeStamp(0.05442936242556917);
    msg.setSource(27962U);
    msg.setSourceEntity(96U);
    msg.setDestination(43059U);
    msg.setDestinationEntity(214U);
    msg.depth = 34937U;
    msg.avg = 0.55043846424753;

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
    msg.setTimeStamp(0.15499614497885938);
    msg.setSource(44290U);
    msg.setSourceEntity(39U);
    msg.setDestination(17335U);
    msg.setDestinationEntity(2U);
    msg.depth = 707U;
    msg.avg = 0.1634333914099002;

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
    msg.setTimeStamp(0.1846423142742104);
    msg.setSource(61928U);
    msg.setSourceEntity(14U);
    msg.setDestination(53827U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.7804109602770692);
    msg.setSource(7749U);
    msg.setSourceEntity(134U);
    msg.setDestination(7121U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.8172903456261378);
    msg.setSource(6828U);
    msg.setSourceEntity(190U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.8784052436085483);
    msg.setSource(22398U);
    msg.setSourceEntity(6U);
    msg.setDestination(40572U);
    msg.setDestinationEntity(235U);
    msg.sys_name.assign("XLBPOWQQGEFBLYNWDDEWUVHPDIKBIYQBVTAQXKVGCASELGPYGXLZSTWVDMZERGDRUYIUSOFQMNBEIZYLTGZTNSFSFUSDBGMCECXOYUAZTAMVACJOOCQSHLCXZROCYPHJHXORPQGJAWCHKHODMBKIWKHGCWLEEHIRTDPLVFMDTMDLYRVSTFLKZEXVJEPMPJTXPUJKHWUIQNRMYXBSRQRRONIWJ");
    msg.sys_type = 84U;
    msg.owner = 31585U;
    msg.lat = 0.42593223235611;
    msg.lon = 0.3842798081211116;
    msg.height = 0.45913896112069397;
    msg.services.assign("GFXBNAFNUAZDTJPRLCDALEKKMPBEDBIHXXSMUKZRVHADBSILHCUVUDAXPTRIXJOCDKQZFEUYNEWFYIOVGDNYLHLFPCPHAMENRBIRFGMQLROSLDYJGRQHCHAECGWVFPSNMYQWYFXVYGLMIWKWBHETVJYSBZSVGTNZGOSRHUBOKEVPRZKMIWMZGTAWKSATCIEQJQTVOHPXYQLONRQUGMJOTLBWTJETQAWJNFCK");

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
    msg.setTimeStamp(0.5683651629123732);
    msg.setSource(43559U);
    msg.setSourceEntity(47U);
    msg.setDestination(18584U);
    msg.setDestinationEntity(144U);
    msg.sys_name.assign("FWQHSHVISPWDSCQYMIJOLJECIQKBAGDUVUCMKLXOACCTYHBGXZZFEEXDAASATSXRVZOQCGHVRLGEJIJNVRRYFLXJTMGROEXNBPQUWBQQGXVBSTKFFPPGVVZAMWM");
    msg.sys_type = 0U;
    msg.owner = 16472U;
    msg.lat = 0.5248181136107714;
    msg.lon = 0.09417475355357885;
    msg.height = 0.5105097001295456;
    msg.services.assign("XVSQLSFZRXWIAUIFPQSCMWZYVNCBROGARMJWPZSOBTFOINKYXJRZWZDAYGYHPXLWAMNSWETXHNIDUSMQIRIQ");

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
    msg.setTimeStamp(0.8932825834057767);
    msg.setSource(53990U);
    msg.setSourceEntity(236U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(143U);
    msg.sys_name.assign("HIEWVZTBKEDDAMUBBEVCAYDKNPQHEPFLAPJMIGNAOQOEKRIEXZNIHXHCYRFAXZBMXPQMFNCRSLQWQHDMSJHVFGBYSHKTOSRGOGUAWSWGWGPUTDVPXRWDVWNYVLRMCBALIEU");
    msg.sys_type = 115U;
    msg.owner = 47729U;
    msg.lat = 0.9514850670462157;
    msg.lon = 0.8629804869084472;
    msg.height = 0.7928553898614079;
    msg.services.assign("IEAWPSFVUYVITJRXKJKGEWKOJNSFPC");

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
    msg.setTimeStamp(0.28652580914088643);
    msg.setSource(59779U);
    msg.setSourceEntity(175U);
    msg.setDestination(2069U);
    msg.setDestinationEntity(109U);
    msg.service.assign("PFFNJLLCOEEAREZTWVRBGHLRTTAQXHUXYDCZBYREFXGGMDKABIZJZSPCTWYQRIFKXDNBCGPRANFASMUJWUHGKNUPEBYKMZQXOHWNEUXULMTFZRLQHSJDYCFLEOUAVGOQTMDVFPUUVWCDKZYAAQGHWYIHILJANPQSVRBMVCMWSJOCQRNXKEXSTOMIRSBXJJNXFZTOUCGDFKLJIOMBVYBEGQQWKTLNSPJPSSBKLHIDYZOHKWPWYDCDV");
    msg.service_type = 143U;

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
    msg.setTimeStamp(0.8531342465047496);
    msg.setSource(5255U);
    msg.setSourceEntity(3U);
    msg.setDestination(43478U);
    msg.setDestinationEntity(145U);
    msg.service.assign("PPLRBUOGLHTHEFFZEJUIQNQBAKPISKCUHUTZOSEAEXOGISTUFNBZQMYOXYFFBLYMZW");
    msg.service_type = 137U;

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
    msg.setTimeStamp(0.956484507300393);
    msg.setSource(6717U);
    msg.setSourceEntity(214U);
    msg.setDestination(44490U);
    msg.setDestinationEntity(235U);
    msg.service.assign("CSEACTHVBADFLIJTDOLHLFZSFGFKMWJNEFGIAQVPASLLBTHHPVIQSUQGEMDHQWPNEDPAVYGTUPBOWNZUCDOCZXTYRIVDQRYOCFZJREZGMOILRYQXFKPNDQQCVUKJBZYNRAXWLJYGVCQKPHWHWCNSTUEXPXDAITUOJOGBPUENXUARODSVNYIXKMTZNGMNBLCKBL");
    msg.service_type = 211U;

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
    msg.setTimeStamp(0.3429705684564919);
    msg.setSource(32540U);
    msg.setSourceEntity(247U);
    msg.setDestination(52842U);
    msg.setDestinationEntity(135U);
    msg.value = 0.12932368423883644;

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
    msg.setTimeStamp(0.20516544589849983);
    msg.setSource(23034U);
    msg.setSourceEntity(231U);
    msg.setDestination(28670U);
    msg.setDestinationEntity(64U);
    msg.value = 0.6801327355074958;

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
    msg.setTimeStamp(0.989393008416045);
    msg.setSource(5581U);
    msg.setSourceEntity(80U);
    msg.setDestination(49986U);
    msg.setDestinationEntity(97U);
    msg.value = 0.8890332490817011;

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
    msg.setTimeStamp(0.06312627390798708);
    msg.setSource(25216U);
    msg.setSourceEntity(29U);
    msg.setDestination(39529U);
    msg.setDestinationEntity(128U);
    msg.value = 0.26019319016404774;

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
    msg.setTimeStamp(0.03228065999869478);
    msg.setSource(55321U);
    msg.setSourceEntity(225U);
    msg.setDestination(44381U);
    msg.setDestinationEntity(218U);
    msg.value = 0.45532570374231585;

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
    msg.setTimeStamp(0.8590338345166997);
    msg.setSource(63229U);
    msg.setSourceEntity(107U);
    msg.setDestination(12940U);
    msg.setDestinationEntity(110U);
    msg.value = 0.22698628924964837;

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
    msg.setTimeStamp(0.33931524050299633);
    msg.setSource(8716U);
    msg.setSourceEntity(170U);
    msg.setDestination(16076U);
    msg.setDestinationEntity(119U);
    msg.value = 0.7715817636594986;

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
    msg.setTimeStamp(0.6046314130830597);
    msg.setSource(49822U);
    msg.setSourceEntity(99U);
    msg.setDestination(37454U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9482315032083146;

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
    msg.setTimeStamp(0.7636609429936623);
    msg.setSource(38007U);
    msg.setSourceEntity(46U);
    msg.setDestination(65033U);
    msg.setDestinationEntity(206U);
    msg.value = 0.6276996937883743;

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
    msg.setTimeStamp(0.41050097991373624);
    msg.setSource(17910U);
    msg.setSourceEntity(170U);
    msg.setDestination(31957U);
    msg.setDestinationEntity(13U);
    msg.number.assign("BRSILFEFYUYFXHBZLUJPIFPSHXMTALIDLTN");
    msg.timeout = 53468U;
    msg.contents.assign("FVYPNMBSDHRZBWPBNJAZZGVDUFHJOANETCXGGTCTYROXTESTQAM");

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
    msg.setTimeStamp(0.4292433546797464);
    msg.setSource(26061U);
    msg.setSourceEntity(136U);
    msg.setDestination(33403U);
    msg.setDestinationEntity(193U);
    msg.number.assign("GULVEWPBBRESKDKKLPDZOFIALVMXENCSPQSCFHZQZTJVBWTSWHCNOCKFMIJWXRPWKUDFVLEWCKCAYLTHFHGPXZNIFQYUVNAGGQRPHQTUMGJJJMTXPOITGLVTZQWEGBUDJVGMOYALDBYYXWKVPOISCSXMQQNUEQNKGJRERYAZHOBCYBKXCT");
    msg.timeout = 56147U;
    msg.contents.assign("YCVNNCDUBTVTTSRUNTKPDJJGMHEQLNGMXOTBYHAUPAFWBOGIOVNKWOERLWGYDADPVVBNNFYTMSESDTUFQSWVSQCMRSKBZUOAVVYNJRFEORKWPGOZHSQEHXMLJAZWPPXYJXCYIUMPQXWDBGLLYZYUHNEBQEGFFUHYWLKFA");

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
    msg.setTimeStamp(0.5741038786158676);
    msg.setSource(1949U);
    msg.setSourceEntity(80U);
    msg.setDestination(24409U);
    msg.setDestinationEntity(136U);
    msg.number.assign("ISCLSPLDYCVYZWOMMHBLAQZOFMORDLZORENZORBJTWKFIFDNBVIPIYXTPLEEXBHMIPFGKEUKNVVLCTVVHBJIUEWBSQTYJZLRMLGINMYXRHKAXCJDBZFENUGQGHRKEIGZASRAMWKHNQNVEFWYHJKFGCLVCJFBOXX");
    msg.timeout = 57773U;
    msg.contents.assign("FOZJGPFPWYBLZDMUHBGWYTVPWHLNJMTYZBHNIFFNDIRBXELKGKDDCWCJNNHWIIDHXDRGAZKOCL");

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
    msg.setTimeStamp(0.17806798980336058);
    msg.setSource(11783U);
    msg.setSourceEntity(190U);
    msg.setDestination(20967U);
    msg.setDestinationEntity(2U);
    msg.seq = 35986417U;
    msg.destination.assign("PDRIGZKXDLCPCPUTOZVUSYTXLVRCNNBFYUEYSFKOZQGSWBARNTEJQCLWMHMEAJNGBRVTOKCFIOYHIXLUBKKBF");
    msg.timeout = 49901U;
    const char tmp_msg_0[] = {-121, 78, 102, -81, -125, 99, -25, 76, 85, 117, 77, -4, 57, 1, 15, -105, -40, -7, 30, -29, 30, 101, 48, 118, -19, 23, -100, -14, 87, -83, -122, 41, 54, 89, 45, -5, 123, -53, -35, 24, 83, -75, 44, -41, 56, -106, 27, -40, -29, 36, 102, 7, -63, -110, -67, -102, 14, 50, -120, 87, 41, 92, -123, 103, -75, -76, 18, 101, -66, -25, 123, -52, -111, 50, -7, -6, 85, 34, 6, -16, 0, 112, -72, 75, 52, 69, -102, 63, -57, -111, -44, 121, -46, 55, 20, -62, -9, -33, 17, 34, -15, -46, 26, 19, 126, -117, -24, 41, -48, 23, 93, -68, -1, 112, 111, -48, 89, 13, 1, 50, -95, -88, -117, -127, -95, -15, -66, 81, 3, 53, -54, -110, -119, 80, 93, 76, 1, -62, -48, -2, -128, -78, 14, 45, -125, -68, -103, 95, -46, 45, 63, -109, -11, 122, -59, -91, 37, 8, -1, -16, 80, 12, -54, -51, 10, 13, 49, 77, -7, 117, 13, -97, 126, 68, 55, -100, 54, -35, -100};
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
    msg.setTimeStamp(0.7104393238066484);
    msg.setSource(9971U);
    msg.setSourceEntity(23U);
    msg.setDestination(15052U);
    msg.setDestinationEntity(202U);
    msg.seq = 4243280835U;
    msg.destination.assign("ESAIWGCFEYMKYKGECHGYWSNZWBLCKLATYTTKIBNCJDN");
    msg.timeout = 25886U;
    const char tmp_msg_0[] = {85, -63, -26, 15, -19, -39, -97, -74, -84, -92, 30, 37, 11, -74, -82, -43, -93, 48, 10, -91, -93, -6, -87, -75, 68, -76, -24, -90, 58};
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
    msg.setTimeStamp(0.5338107239737243);
    msg.setSource(16155U);
    msg.setSourceEntity(138U);
    msg.setDestination(20352U);
    msg.setDestinationEntity(72U);
    msg.seq = 683143655U;
    msg.destination.assign("HDGSVTUOOLFEGHZIDFXSLAEXUHHADKMBSYZVBUQCKVKXKTCYUZCAGJCPZZKACHNYBEOIPQXRATVJSYJLCVMMNKBFEJFTXILJHSGAEVYLYSYPYOLWGIBC");
    msg.timeout = 19001U;
    const char tmp_msg_0[] = {34, -127, 40, 77, 80, 124, 123, -47, 71, -106, -32, -127, 107, -112, -15, -22, -113, -105, 31, 6, 9, -26, -115, 22, -66, 115, -107, -41, 78, 91, 85, 111, 93, 66, 101, 56, 76, -109, -22, 116, 59, 33, 45, 7, -50, -124, 53, -13, -113, -26, 105, -27, -15, -76, 10, 64, 43, 49, -89, 17, 125, 67, 23, 56, -12, -44, 99, -23, -95, 104, -16, -113, 61, 38, 107, -98, -67, -66, 70, 18, -76, 43, -35, -34, -92, 41, 57, 67, -116, 70, 61, 119, -95, 89, 115, 1, -91, 34, 111, 61, 109, -16, -74, 20, -9, 64, 66, -45, -38, 2, 60, -48, 87, -114, -94, 18, 21, -76, -33, -13, 59, -42, -111, -48, -99, -4, 28, 68, 9, -79, -28, 126, 8, 82, -46, 4, -104, 103, -57, 126, -21, -34, -94, -96, 0, 122, 9, -20, 47, -45, -27, -110, -57, 63, -12, -60, 125, 64, 5, 3, 120, 74, 15, 93, 96, -102, -25, -101, -91, -69, -104, 12, 82, 43, -101, 43, -59, -69, -58, -35, 125, -114, -73, -8, 44, -26, -11, -21, -65, -43, 65, -58, -92, 99, -26, -73, 115, 52, 17, -95, 78, 60, 57, 30, 96, 96, 118, -86, -101, -38, -91, 44, 124, -33, 65, 116};
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
    msg.setTimeStamp(0.8404569578136277);
    msg.setSource(4743U);
    msg.setSourceEntity(97U);
    msg.setDestination(1613U);
    msg.setDestinationEntity(72U);
    msg.source.assign("JUKEDGHYTFTUHCWCVHSPZBFGNPSMHRSEXUQCMATOYAXTOORPCIBDELWBXEOJGMCVQDUZTGJYVSVOXYXBGYNCFRTVWBMSZMELTFNRYQZKWJWF");
    const char tmp_msg_0[] = {-126, -73, -41, -43, 61, 63, -1, 23, 81, 71, 79, -50, 8, 2, -89, -25, 79, 119, -67, 25, 31, -8, -103, 91, 16, -110, -13, 120, 27, 19, -74, 104, -6, -127, -45, 110, 111, 38, -66, -81, -16, -99, -28, -76, 24, 4, 50, 71, -14, 47, 48, 26, 89, -39, 73, 69, 40, 113, 86, -67, -5, 110, -123, 105, -107, 78, 52, 76, -43, 116, 93, -31, 2, -68, -78, 73, 99, -44, 92, 85, 105, -112, -125, 47, -104, 40, 65, 115, 89, 28, -82, -12, -25, -37, -16, 0, 103, 67, 42, 14, -22, 53, 123, -67, 38, 24, -123, 45, -32, 38, 25, 105, -73, 103, -103, -84, 34, -103, 106, -75, 1, 28, -33, -69, 30, -8, 34, 15, 116, 68, 90, 31, 24, 7, 11, 17, -11, 90, 97, -52, 27, -32, -71, -21, -125, -6, -51, -103, -28, -23, -4, 82, -46, 26, -81, -35, -24, -90, 22, -121, -68, 103, 121, -10, -54, -81, 1, -109, -11, -16, -66, -38, -20, 39, -74, -83, 53, -26, 5, -9, -89, -98, -48, 111, 3, 69, -6, 25, 76, 37, -20, -64, -102, 62, -17, 41, -31, 86, -41, -76, -101, 49, 122, 121, 19, 10, -26, -47, -109, -55, -117, -45, 54, 97, -59, -44, 71, -100, 11, -47, -38, 56, -76, 97, 12, -42, 80, -113, 118, 107};
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
    msg.setTimeStamp(0.16834853158129193);
    msg.setSource(13714U);
    msg.setSourceEntity(232U);
    msg.setDestination(40518U);
    msg.setDestinationEntity(197U);
    msg.source.assign("BCFXSJWGARNOPTZASSGYWAEROIIEAKKZLUXHMFLUDTAYWRDHCQUBEPIMQVVDKJIYTTJMPUMNWPVRMJOFMSHZAQWGYYAOBHAPVKVZKYXCQMMGPFLEXJKBNGIRLUJDZJUVDORFTRQLDKKSTXYINONCTLUCLJFCNYFGOXONHNCBXFQH");
    const char tmp_msg_0[] = {-48, 32, 89, 70, -2, -3, -72, -93, 60, 14, 29, -13, 31, 55, -20, 25, -78, 78, -30, -58, -107, 17, -19, -128, -27, -115, 56, 95, 102, -4, -44, -90, -107, -82, -40, -90, 25, -54, 40, -92, 10, -125, -56, -122, 5, 44, 114, -30, 50, 12, -106, -51, -49, 15, -57, 105, 87, 30, -30, -18, -81, -68, -79, 41, -22, 31, -29, 114, -38, -12, -32, -124, 46, 32, -83, -39, -13, 33, 32, -100, -11, -2, -42, -123, -9, 24, 66, 102, -113, -4, 68, 116, -64, -33, -86, -73, -82, -95, 26, 30, 115, -78, 106, 20, 18, 114, -91, 83, -8, -73, -4, 37, -19, -77, -54, 77, 8, -15, -125, 89, -22, -34, -78, 54, 0, 14, -49, 31, 50, -39, -77, 54, -62, 78, -45, 46, -26, 113, 89, -16, -34, 122, -125, 92, -105, -52, -36, 45, 73, -19, -93, -79, -5, -5, -20, -77, -91, -39, -70, -108, 124, 27};
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
    msg.setTimeStamp(0.6310583137151985);
    msg.setSource(2563U);
    msg.setSourceEntity(155U);
    msg.setDestination(64320U);
    msg.setDestinationEntity(152U);
    msg.source.assign("HNHTUCFPEDTJHXQCCRWJCLBBXMEYULAULQKLAQHPFTMUAFXKZXOGNQSPRFQUQJDKQHOYDTUSRCVRUPQKLTAXHXCIRBNODOEZBSYIDKERNGCJHQPVXWKRXTIMFTEHVLYFLBOSIBZEALBWSIJTGOLUCHZNEPZFANB");
    const char tmp_msg_0[] = {62, 2, 113, 109, 55, -126, -72, -19, -97, 97, -23, 15, -89, 24, -18, 123, 67, -114, -63, 78, -117, -31, 35, -22, -23, 118, 6, 61, -78, -34, -105, 47, 70, -79, -113, 63, 106, 104, -91, 33, 67, -54, 79, -32, -101, -85, 84, 121, 44, 82, 67, -114, 77, -11, 118, 67, -99, 50, -71, 55, -93, 57, -118};
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
    msg.setTimeStamp(0.08899977993241692);
    msg.setSource(30024U);
    msg.setSourceEntity(251U);
    msg.setDestination(18985U);
    msg.setDestinationEntity(161U);
    msg.seq = 2932115883U;
    msg.state = 36U;
    msg.error.assign("SLQBXDVYLOXIBMMHUOCKOXVYDNVIQWMDOREHAKVZSIJHSUBUFKKZVYFJODMLRNAXNFHAIWRLTINKNWEYPAJKHDRMIGHUZCOPTGGTRXPIQLTFZYHYMKQBZNGUXXTIWNGJLAJDXHZUJSSPF");

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
    msg.setTimeStamp(0.4787774559893835);
    msg.setSource(8665U);
    msg.setSourceEntity(22U);
    msg.setDestination(17078U);
    msg.setDestinationEntity(3U);
    msg.seq = 1352137391U;
    msg.state = 194U;
    msg.error.assign("EPJZUNQNLTWLVQVFTCJYMNLGUIBCUJANKNLPFCAKCSEWZURTRISSZTEUIZNAHCPGVHCYTKQOZWMMVHXATSRVUBKBPFOKHQAAOFFBSGKGTVRIAIFSVWGMEPRHUMJDCRRYGOSDBXMNBQPNJFQTEYJWKGZDMYCYHHGZHQLNAYMIIALZROG");

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
    msg.setTimeStamp(0.6233978149141728);
    msg.setSource(46233U);
    msg.setSourceEntity(147U);
    msg.setDestination(26964U);
    msg.setDestinationEntity(29U);
    msg.seq = 3114600166U;
    msg.state = 16U;
    msg.error.assign("DYMDOKVZMUJATKZNIRQCSHNFYCNBVORSDHHAKEVEGSGWPQOUYPBGZYJDDJIOUBFWUGEOWBXPHWMCSEUKFYJXXQXCWIDMJERFRBDUYKCGNQEXPXRBAESVTVIRNBXXJRMBQHSSXLUOUPYELFIAHMPETLQRPBNCCJK");

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
    msg.setTimeStamp(0.16065084548298747);
    msg.setSource(59521U);
    msg.setSourceEntity(73U);
    msg.setDestination(9445U);
    msg.setDestinationEntity(183U);
    msg.origin.assign("WFAOMXYQNKUNXNCJLQWRYDKNLZGHFFUGZSCSAWQNJBZOBAJFTWGOTCSHUAQWGTBJZWNIBZIAPUSVERWGGQLMZUIAPIZQPHCNEHIYEMSCVZUPEQMMYKMFHDPOYMQZUYCALFJGKTREULDFOL");
    msg.text.assign("LPINEOPWPWECYOOLGMXKSIJSILIHSORBTEYSTBLCHQTUKCLPVCTPZFAOYAHRIMVLUQVFGKOPCBCDMWNTUMTBMUUWZNSAORKNYQRTSXNDYPNLIBZROKXCCTJHDPFEDNPUNGWPFMGDJQUJDZVEDVZURGRHHHRJYSMWAXDAGKAS");

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
    msg.setTimeStamp(0.2695649992142267);
    msg.setSource(57190U);
    msg.setSourceEntity(98U);
    msg.setDestination(13786U);
    msg.setDestinationEntity(249U);
    msg.origin.assign("ZWZWKMFJHBAYARRGOHHYWDQQZURCWXIZIRMMOCIIYSVGEWOOQXJCQUKCSFQVNUXTTGLXFEROUIRLBMHUDAFTHIRXDVEPEQSDEKNNBSOYFNSPWYBSFGRPKCYTLZAUAWJFTBONXYJCSPDLVIMB");
    msg.text.assign("DUABEDUGLJNOMCSDZRQXRZIDYUOXGGGMCQUVLYFKWYXXJYEFBNWUKCUFVTMEPIOUMGPNGSKHKYFGSQLISJJITYFOWPWJWSAJZUHFBMBEECBFCMFZ");

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
    msg.setTimeStamp(0.8091721105454228);
    msg.setSource(30394U);
    msg.setSourceEntity(130U);
    msg.setDestination(33792U);
    msg.setDestinationEntity(43U);
    msg.origin.assign("MCYNCXBJOD");
    msg.text.assign("NZILQJVAMCROTWWITZSUMGFWJGFCGOCVNEXIJRXJZNEOBIFKXQCXOJTQJRFYMRYQCYLWPCDXJPHIVBFPVIDQJSRGPNXPGHVYCETGCTUAIOSQKEMYBHOESQCSPSLRRPUIJHGTLAYKDKBZMWHNUIOJFAYETRKAZGYSHMXBLNMEWHLVDHWHFFTGAZUWQUELQAMIMPOUPNLRFUTYSKYMZBSHABLFLKZVGCXVBDTZDPDEWEWVUOKBOXXUKARDKSN");

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
    msg.setTimeStamp(0.2763823860487119);
    msg.setSource(22828U);
    msg.setSourceEntity(156U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(3U);
    msg.origin.assign("QIULINGSLRMGDXPESKYMMZDNFIVGMBCLHKANCQZJDESAWYGKOBQRTOWYKNZUPZWLCFBYYHTVMLGKAAMOUHPXGQQXUVUXRMZWTRWEBZAHTUAKFYPSYUZPQKLRAOYMJXLZNFDDSIHHETBJOEZIHFRCKGGTDPQIKXHDXETBFZLJDCOLYBOFIJOSBNQULEFUNNCRUTSBEAWVVGMJVEMXXNDWOWVIVRDNAXCQHSFHPCJCPOJ");
    msg.htime = 0.4860256978425622;
    msg.lat = 0.19290537809223574;
    msg.lon = 0.5927321010223076;
    const char tmp_msg_0[] = {-100, -120, -47, -14, -127, -115, 80, 34, -113, -112, -69, 63, -114, 37, -85, 112, 124, -122, -5, 88, -11, -89, 18, -2, 100, 75, -95, -16, -89, 19, -37, 16, 71, 60, -41, 106, 120, -80, -33, -30, 42, -48, 8, -55, -48, -13, 72, 125, -87, -21, -39, -104, 1, 70, 48, 42, -9, -74, -80, -32, -104, 16, -47, 80, -9, -125, -79, -95, -52, 106, 75, -76, 40, 24, -15, -64, -112, 88, -111, 52, 108, -22, 11, 126, -33, -15, 68, -74, 67, -56, -54, 93, 27, 111, 81, 43, -97, 87, -59, -109, 122, -60, 117, -10, 42, 58, 31, 25, -19, -75, 81, -111, 119, 118, -48, 14, -86, 124, 77, -44, 9, -9, -33, -128, 90, -37, -24, -12, 92, 13, 61, -69, -90, 18, -114, -95, -53, 11, -48, 36, -25, 73, 67, 98, -9, -71, -8, 47, -93, 13, 125, 32, 87, -117, -46, 61, 113, 33, 27, -65, 92, -115, -48, -4, 0, -1, -50, -73, 4, 55, 86, -97, 122};
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
    msg.setTimeStamp(0.04665417963066942);
    msg.setSource(8622U);
    msg.setSourceEntity(180U);
    msg.setDestination(20897U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("KSLNQBHMAFVDBMSEDWQPQCWREWOGVQJAJHLPDQSJXPFKUJQDPUZOMFZBPMPLEQSUKHETXFBNFDZUNLHWCZNMWXBGJHAOAIRNFYRHUBPPVDIXVSKPEEQRPXUCBAIDTTGAIDBVLIXKUSKLTKOAWYUGYMQITODFCSGRMVYOKSIHRWGYKCSAZZOGHIZRGWMKFVAYRUNTCEJVNN");
    msg.htime = 0.48597565840842816;
    msg.lat = 0.6245492754073761;
    msg.lon = 0.318256064122337;
    const char tmp_msg_0[] = {-61, -114, -60, 100, 2, 110, 63, -7, 47, -84, 58, -68, -44, -8, 107, -64, 65, -19, -101, -70, 98, -98, -39, 42, 103, 113, -100, -1, -15, 73, 69, 7, 40, 109, 23, 34, 87, -48, -50, -75, 123, -107, 47, 43, 11, 34, 119, -104, 88, 99, -107, -119, -27, -100, 13, 55, -69, 25, -7, -85, 106, -82, -75, 9, 80, -31, -55, 80, -97, -43, -24, -128, -8, 93, 99, 100, -101, -52, -14, 53, 21, -35, -9, 126, -43, -50, -99, -117, 9, 107, 33, -92, 77, 116, -115, 74, -94, 34};
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
    msg.setTimeStamp(0.13915722794918794);
    msg.setSource(63843U);
    msg.setSourceEntity(43U);
    msg.setDestination(36973U);
    msg.setDestinationEntity(51U);
    msg.origin.assign("YFQBEGPWHEMBINWGGXRSQQIANZGKVNULZEAXJKDLQFRCVTYQFZACDTMFYPVUMAOJFMWJDUIACNLLOEZLHHNLTLWXFSEVHGSOBCAJRTWJCLQZSJSOPERCJYMSHBTXVTRNVOOTKDXPUHDEQPPABJEOOFCAVRXWWUFKSYKAYBOVIZMMPIHULYPAUIRGYWHISHGZKCBYVMPKSKYTIG");
    msg.htime = 0.0952943749637375;
    msg.lat = 0.33209688534506854;
    msg.lon = 0.8106169248846875;
    const char tmp_msg_0[] = {-77, -117, -64, 93, -73, -6, 65, -4, 106, 47, 21, -126, -24, 1, 63, 6, -79, -3, 82, 82, -67, -13, -121, -40, -61, 5, -101, -60, 5, 66, 24, -124, -91, -37, -27, -29, 120, 40, 34, 28, -84, 30, 119, -37, -49, -27, 125, 70, 23, -11, -91, -45, 43, 95, 29, -82, -24, 77, 3, -125, -57, -112, -87, 87, 58, 102, 101, 29, -66, 7, 48, -21, 105, -40, -87, 90, 60, -86, 63, -110, 79, 109, 51, -119, 23, 18, 14, -53, 52, 64, 22, 95, -14, 39, -48, 6, 71, 80, -84, 21, -96, -104, 79, 52, -74, -63, 88, 18, -4, 108, 115, -17, -1, 44, -125, -53, 75, -85, 28, 24, 110, 57, 12, 92, -117, 73, -72, -66, -34, 46, -46, -29, 87, 64, 36, 123, -9, -49, 42, 53, 110, 56, -123, 51, 39, 107, 48, 104, 124, 54, -18, 115, 19, 6, 111, 57, 55, -35, 106, -53, 74, -114, 36, -73, 89, 81, -83, 35, -112, 34, 2, 24, 92, -121, 56, 63, 61};
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
    msg.setTimeStamp(0.36980512593726844);
    msg.setSource(4117U);
    msg.setSourceEntity(201U);
    msg.setDestination(57627U);
    msg.setDestinationEntity(104U);
    msg.req_id = 11276U;
    msg.ttl = 56709U;
    msg.destination.assign("UFGYBUSXJURGCCWYIWIGEONXMGBNJNWOOVCWDFZMVUZEAXZBMDIRHTGZFPECUBIVYILSNSJKRDYVCXKTRGASDSZYNREPOCXUPJPOUBOATRVDKEHIHYOQQWCLFTPQDXSYJLLNKQPSQRZBYQOAYRHMUWKAXJBCZHKDFTBXZTWG");
    const char tmp_msg_0[] = {-118, 25, -39, 99, 60, -115, -117, -63, 111, 13, 8, -73, -50, -37, -45, 11, 64, -46, 62, -86, -103, -50, 124, 84, 21, 108, 64, 48, -34, 82, -29, -87, -63};
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
    msg.setTimeStamp(0.03377734548765976);
    msg.setSource(2823U);
    msg.setSourceEntity(165U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(237U);
    msg.req_id = 42646U;
    msg.ttl = 63530U;
    msg.destination.assign("EQBRSGSOKRPFWZMVAPKMFEMTEHMMDBQDNJPVCXYULEJCOLBGSVKABLCWKFIDTUVSZVLYVLHYKJTCZURKAYJNWJJJIFSKSNYNUDIUDEHVNMYGQPZWIAGCNLCQTYMXYBUEWBBRQFALTNAT");
    const char tmp_msg_0[] = {54, -43, -70, -71, 64, 3, -58, -40, -25, -33, -33, 99, 108, -7, -103, 108, -66, 122, 11, -7, -37, -115, -45, 100, 20, 89, 14, 74, 117, 58, 53, 85, -114, -26, -62, 17, -75, -35, -99, 119, -34, -33, -63, 118, 57, 7, 126, 36, -35, -99, 29, 22, -116, 98, 60, -66, -8, -46, -127, 98, -95, 50, 14, -8, -80};
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
    msg.setTimeStamp(0.8952685631596491);
    msg.setSource(26159U);
    msg.setSourceEntity(140U);
    msg.setDestination(11795U);
    msg.setDestinationEntity(38U);
    msg.req_id = 9878U;
    msg.ttl = 37542U;
    msg.destination.assign("HFKOVPTMOLZOUDMMRSIKVJTSTXUNKJXLUFVHTVCYSOROYZVYNBDWEZRMHUKEETGCNWTMKAMEAKVQCIROPZRTYCXCRZYHJODNUHHZTIBMESCLSVJZQJPWFSAQGBNGOFEDDMCKPGPLHDNQGPFEXKMDQAOQWYNQWDGPZHBAEIVMGICCQCTFXLXJSHWHFFG");
    const char tmp_msg_0[] = {-38, -101, -86, -88, 111, 28, 124, 42, -65, 68, -42, 15, -74, 22, 34, 34, 90, 29, -52, 109, 42, 26, 94, -1, -106, -64, -9, -123, 25, 18, -20, 107, 24, 77, -5, -93, 6, 12, 19, 45, 111, -110, 59, 58, 94, -94, 0, -66, -94, 23, 86, -39, -70, -102, 23, -16, -28, 28, -66, -104, -56, 8, -4, -81, -40, 93, -110, -78, -59, -39, 95, -23, -12, -104, -68, 112, -104, 61, -47, 25, -125, 57, -13, 122, 32, 123, -15, 52, 90, 57, -23, -44, -46, -61, -88, 114, 23, 122, 66, 114, -77, -36, -48, -11};
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
    msg.setTimeStamp(0.6647981117345388);
    msg.setSource(10659U);
    msg.setSourceEntity(54U);
    msg.setDestination(9206U);
    msg.setDestinationEntity(251U);
    msg.req_id = 45640U;
    msg.status = 24U;
    msg.text.assign("MLVYVECTSFXAIRTWGDNCOEKAKMBLHNAOAWURSYJFYSBHM");

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
    msg.setTimeStamp(0.2957576219601924);
    msg.setSource(33538U);
    msg.setSourceEntity(40U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(147U);
    msg.req_id = 43887U;
    msg.status = 162U;
    msg.text.assign("VORDQXNGGXDBLTFYSQBVBJFOXAZKGKDNOUUKIYPFZYEAREAXHKTADWTILKYHBAWQDTIUYSLYWYFIOTUSOVGQUNHHNEXCJQWSBZZHTZIAOAUATZCKPMAPGWQBCMESLUUJJAORFLJMYVTSKGHEPCBWHMSCRZNGMNMEJDZ");

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
    msg.setTimeStamp(0.3831938684197508);
    msg.setSource(14994U);
    msg.setSourceEntity(74U);
    msg.setDestination(16682U);
    msg.setDestinationEntity(149U);
    msg.req_id = 2513U;
    msg.status = 61U;
    msg.text.assign("VXVYXLDTPEDWIYUXBKKSQJFMWPDMRDNKASWYTLAAGHPPUFZZSHIXWJELM");

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
    msg.setTimeStamp(0.21724493806262868);
    msg.setSource(12068U);
    msg.setSourceEntity(138U);
    msg.setDestination(29214U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("VTLRAVGMSEUOXWLWXLIOQYIMNPYBCMTBYZNJBFZKXWCG");
    msg.links = 515597456U;

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
    msg.setTimeStamp(0.613710439862788);
    msg.setSource(51769U);
    msg.setSourceEntity(11U);
    msg.setDestination(51777U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("WPJUSYGECFAGKYJFGPQTHENWGBKGXDYRTHVPMCMPRSJOBDWNYCOULYGFDUVBPDZMABJQPHMMIIKFIHUWAZOBUVCBZNZKITAECYNPWVQHLHRZAJAEOWBILXJOESSWTGAVLYSQUJYRXBQMSDQUFCEZASWQLKTCAAIKZKWOXOOPJGXMZNNZCESHDENMXVOLLGVQRQON");
    msg.links = 885495894U;

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
    msg.setTimeStamp(0.4605095168369746);
    msg.setSource(42682U);
    msg.setSourceEntity(193U);
    msg.setDestination(16263U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("WVKDHFSETQFWTIBLYCHRHDMTXPWNKPHYXOLPTRVLYNUPOVHMRYOKDAUQVYAGUAQZXCNJGADKUQDFFYINBWUSZNGLURAJJSQBJGMLFPYYXJICSRHLGSWMRZBJIVASBEUEONJJFUDZSBLIXGTFZLWMIXPSBLDRLFGMNQODYAVHCZVEQBKNIGEZKYQZIQJWRCPVFTGHEDEKUWCXEI");
    msg.links = 3993570183U;

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
    msg.setTimeStamp(0.7741242659455447);
    msg.setSource(576U);
    msg.setSourceEntity(236U);
    msg.setDestination(61383U);
    msg.setDestinationEntity(154U);
    msg.groupname.assign("JHNEBBXKRMOTVXIKTNMVOCSBVWJZOYEEZWKYKHLPDSWJYLTOCUJQAGJHGBXYBJDDRYCXQUDYUGAETIUUHCTDGOBUXQYSLTQOANVVJFJRLVPNRMDRWHKMPULSGJDSHRODRPWLOUREVYZYXFKZGZEAIPNAZICKKACQCFNFCMAHILRYKMTMNWWLJSZIHWSIXXMPTSUDEEBFEAFPIFILQNGQBXQFCZSEMABX");
    msg.action = 189U;
    msg.grouplist.assign("CPBOPSURCSLDGYUDCJTHTSJBRRTDJGIGMEJQIVUZIYECVHMTMAXVBQIQFKVJFBEXLGCQLVUNYITBHYYDDHXKCXNIKQZMGAGOQEBNGJUFWZOMESLLIKUABWWPUZCZNWVYOAOKLJCNLXGXQUFOTSEJMWPCMWPGWMMESABZVHFSHPPXHRXVJZKEFIDSHOZNSDKPPTQTQAIFFDZRLWKWRDHKBOJNENGHAQRRYOVT");

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
    msg.setTimeStamp(0.19516150343163163);
    msg.setSource(542U);
    msg.setSourceEntity(24U);
    msg.setDestination(29870U);
    msg.setDestinationEntity(89U);
    msg.groupname.assign("XBZADFIVYBUYJOPOSPGXGWFWASOUMDPEJKHJKHIIUKNLMIWSMPUIZYCJJFXGYWVLPXNTTZRPBUCPDIKHHOZTSBQOZKZFETOCVATJFVVJLUVBEZFGJXUHIOSCNTRMEKXRCSVWQGTDZRWBOAYLGLOPNGQQNKRRGKQWL");
    msg.action = 22U;
    msg.grouplist.assign("MRBFYVJEOHRJDDLFQDMYWKADOZEXCEBMNTEFCYAWAEJORVPKTMHMVIOBVFGLOGEOUZSXLTTCRUTJXANGPNYSWIBHDFWQVHFQPNNXIZDKTNTXHLKL");

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
    msg.setTimeStamp(0.9440032251191067);
    msg.setSource(31211U);
    msg.setSourceEntity(245U);
    msg.setDestination(15439U);
    msg.setDestinationEntity(133U);
    msg.groupname.assign("HZNQRQBJYMVUUGSYUGVHJMJERYOXOTKDBWYVKZZIVKSMSOLVPSWMXYDFIDMCNJXGQCRRBTWPYNDKCNYRYBZXXHOACSEHGWSXCHDIKNOFJVEBKWINHIUEDHJWPFJLQYFSABKABVKRWRMLKEPPTQUFYTASAEDGAVMNJCREDGOFBVLEUQNISUOXLPTTCWUOAAZWZZVTCLNXPB");
    msg.action = 159U;
    msg.grouplist.assign("QSBBHCIUPIVTGJQGNLAWXBDWZYRFBOSIUKNJTJKPMQZXSXKQQOTKYNXEXGWMJZIZNUCSSJUWKHOLLOTTLSCDVNFUPTBYHZETOGALP");

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
    msg.setTimeStamp(0.8251063991509628);
    msg.setSource(63455U);
    msg.setSourceEntity(37U);
    msg.setDestination(50141U);
    msg.setDestinationEntity(118U);
    msg.value = 0.6443467297274895;
    msg.sys_src = 36481U;

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
    msg.setTimeStamp(0.00992306518376962);
    msg.setSource(25200U);
    msg.setSourceEntity(71U);
    msg.setDestination(37579U);
    msg.setDestinationEntity(250U);
    msg.value = 0.35758737859176415;
    msg.sys_src = 24484U;

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
    msg.setTimeStamp(0.7952089578633375);
    msg.setSource(37801U);
    msg.setSourceEntity(76U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(9U);
    msg.value = 0.654116779839218;
    msg.sys_src = 32409U;

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
    msg.setTimeStamp(0.3725136004256896);
    msg.setSource(1641U);
    msg.setSourceEntity(122U);
    msg.setDestination(40670U);
    msg.setDestinationEntity(27U);
    msg.value = 0.13684986260222765;
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
    msg.setTimeStamp(0.19453669609957858);
    msg.setSource(45206U);
    msg.setSourceEntity(34U);
    msg.setDestination(10148U);
    msg.setDestinationEntity(173U);
    msg.value = 0.9575859925343222;
    msg.units = 247U;

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
    msg.setTimeStamp(0.8971217410054515);
    msg.setSource(26477U);
    msg.setSourceEntity(189U);
    msg.setDestination(6228U);
    msg.setDestinationEntity(109U);
    msg.value = 0.6160357550989964;
    msg.units = 7U;

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
    msg.setTimeStamp(0.8729879311912248);
    msg.setSource(4080U);
    msg.setSourceEntity(134U);
    msg.setDestination(31741U);
    msg.setDestinationEntity(8U);
    msg.base_lat = 0.5968825775037521;
    msg.base_lon = 0.9048086460458544;
    msg.base_time = 0.1545686203573451;

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
    msg.setTimeStamp(0.7869255336492091);
    msg.setSource(44258U);
    msg.setSourceEntity(171U);
    msg.setDestination(42281U);
    msg.setDestinationEntity(79U);
    msg.base_lat = 0.28890334773546855;
    msg.base_lon = 0.17600097458505093;
    msg.base_time = 0.591409866737998;

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
    msg.setTimeStamp(0.39738076158211333);
    msg.setSource(54141U);
    msg.setSourceEntity(212U);
    msg.setDestination(486U);
    msg.setDestinationEntity(219U);
    msg.base_lat = 0.39579524496043994;
    msg.base_lon = 0.5365317184664504;
    msg.base_time = 0.5077538776576563;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 28882U;
    tmp_msg_0.priority = 74;
    tmp_msg_0.x = -30520;
    tmp_msg_0.y = -11248;
    tmp_msg_0.z = 24638;
    tmp_msg_0.t = -13056;
    IMC::LogBookControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 188U;
    tmp_tmp_msg_0_0.htime = 0.06508071829560469;
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 222U;
    tmp_tmp_tmp_msg_0_0_0.htime = 0.22555148282252757;
    tmp_tmp_tmp_msg_0_0_0.context.assign("LAEDRBHIBPFBRMMZFMOZAKIVXMDBCTWGRLNGXJPPJWYGTEUBVYZFHSWHPQUWQXBKJQOCDUESEIACZNNS");
    tmp_tmp_tmp_msg_0_0_0.text.assign("PEZHVMEMUXZKNDPTOBMCYQPQFVRUXVVYKYZICCIMBMREJRXWKFBNXEUAZKQTPSTJCXDUWDDERJGFNFGUTFALVSG");
    tmp_tmp_msg_0_0.msg.push_back(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.03631596352126154);
    msg.setSource(63681U);
    msg.setSourceEntity(254U);
    msg.setDestination(19262U);
    msg.setDestinationEntity(10U);
    msg.base_lat = 0.3900616699685293;
    msg.base_lon = 0.8261716861116293;
    msg.base_time = 0.4046069691261769;
    const char tmp_msg_0[] = {92, 64, 107, 73, -35, 113, -36, -113, -43, -50, 103, 38, -87, 62, 33, -124, 103, -58, -3, 84, 3, 87, 45, 67, 64, -87, 43, -115, 55, 98, -118, -16, 87, 92, -73, 13, 96, -71, -66, -26, -55, 95, -18, -25, 97, -97, -128, 7, -16, 30, -2, 73, 37, 96, -51, -15, 49, 125, 85, 19, -24, -68, -88, -76, -52, 33, 64, -61, 111, -52, -25, -38, -121, 72, -117, 110};
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
    msg.setTimeStamp(0.29462712064094176);
    msg.setSource(63892U);
    msg.setSourceEntity(174U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(162U);
    msg.base_lat = 0.8060424902706474;
    msg.base_lon = 0.4541281362431696;
    msg.base_time = 0.04537511690513785;
    const char tmp_msg_0[] = {31, -90, -107, -17, -74, -45, -26, -94, -15, 38, 47, -87, -80, 68, -44, 71, -48, -5, -18, 81, -26, 37, 101};
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
    msg.setTimeStamp(0.17414648307299252);
    msg.setSource(50740U);
    msg.setSourceEntity(55U);
    msg.setDestination(62723U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.4206821433824328;
    msg.base_lon = 0.32382765716562;
    msg.base_time = 0.6003076907493907;
    const char tmp_msg_0[] = {-58, -85, 121, 64, 101, 38, 104, 118, 54, -28, -65, -64, 14, 38, 60, -83, -61, 97, -100, 39, 43, 66, -78, -7, 92, -86, 69, 42, 116, 101, 106, 96, -21, -122, -103, -102, -102, 102, -78, 124, -33, 108, 31, 82, -57, 13, -70, 99, 66, -63, -19, -83, 65, -86, 79, 84, -52, 125, -15, -58, -83, 114, 99, -105, 53, 81, -48, -41, -62, -109, -55, -59, 105, -21, -113, -10, -70, -94, -7, -50, 2, 86, 20, 8, -46, 4, 59, -120, 115, 35, -109, -15, 73, 95, 126, -19, 52, 8, -75, 103, 58, -36, -83, 2, 62, -35, 97, 101, 95, -20, -4, -59, 23, -114, 50, -9, 58, -18, -88, 4, 10, -80, 42, -109, -26, 78, 18, -110, -25, 100, -61, 44, -8, -11, -16, -36, -91, 42, -66, 15, -33, 61, -95, 10, 109, -92, 123, 119, 52, -74, -62, -31, -77, 19, 0, 45, -73, 91, 58, -90, -46, -92, 40};
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
    msg.setTimeStamp(0.5562414003164503);
    msg.setSource(13872U);
    msg.setSourceEntity(155U);
    msg.setDestination(50670U);
    msg.setDestinationEntity(33U);
    msg.sys_id = 64933U;
    msg.priority = -19;
    msg.x = 794;
    msg.y = 14587;
    msg.z = 8974;
    msg.t = 30275;
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.8798580236513263;
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
    msg.setTimeStamp(0.4665911792898372);
    msg.setSource(39560U);
    msg.setSourceEntity(247U);
    msg.setDestination(31723U);
    msg.setDestinationEntity(166U);
    msg.sys_id = 7755U;
    msg.priority = 27;
    msg.x = 11675;
    msg.y = -12191;
    msg.z = 18381;
    msg.t = -22212;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 172U;
    tmp_msg_0.speed_min = 0.1560475630885929;
    tmp_msg_0.speed_max = 0.17403107424045094;
    tmp_msg_0.long_accel = 0.6541972510601196;
    tmp_msg_0.alt_max_msl = 0.9057282277937975;
    tmp_msg_0.dive_fraction_max = 0.8623516272280182;
    tmp_msg_0.climb_fraction_max = 0.8457522230778675;
    tmp_msg_0.bank_max = 0.4753258687904838;
    tmp_msg_0.p_max = 0.690778428927086;
    tmp_msg_0.pitch_min = 0.6252942725650911;
    tmp_msg_0.pitch_max = 0.7431612655404184;
    tmp_msg_0.q_max = 0.8285331495750758;
    tmp_msg_0.g_min = 0.5851310137763382;
    tmp_msg_0.g_max = 0.6595371388290218;
    tmp_msg_0.g_lat_max = 0.028405153385101745;
    tmp_msg_0.rpm_min = 0.41796688178073405;
    tmp_msg_0.rpm_max = 0.0664896424470055;
    tmp_msg_0.rpm_rate_max = 0.5878572104893994;
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
    msg.setTimeStamp(0.7226759395288019);
    msg.setSource(23678U);
    msg.setSourceEntity(65U);
    msg.setDestination(46430U);
    msg.setDestinationEntity(94U);
    msg.sys_id = 53129U;
    msg.priority = -127;
    msg.x = -7817;
    msg.y = 32427;
    msg.z = -23340;
    msg.t = 5188;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 616548648U;
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
    msg.setTimeStamp(0.1319100606504403);
    msg.setSource(49032U);
    msg.setSourceEntity(214U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(42U);
    msg.req_id = 60684U;
    msg.type = 252U;
    msg.max_size = 33876U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9622898486384679;
    tmp_msg_0.base_lon = 0.7054756764935604;
    tmp_msg_0.base_time = 0.1481576150105569;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 22577U;
    tmp_tmp_msg_0_0.priority = 114;
    tmp_tmp_msg_0_0.x = 6146;
    tmp_tmp_msg_0_0.y = -18609;
    tmp_tmp_msg_0_0.z = -7115;
    tmp_tmp_msg_0_0.t = 7739;
    IMC::ButtonEvent tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.button = 128U;
    tmp_tmp_tmp_msg_0_0_0.value = 35U;
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
    msg.setTimeStamp(0.04837732961151586);
    msg.setSource(8443U);
    msg.setSourceEntity(76U);
    msg.setDestination(28673U);
    msg.setDestinationEntity(84U);
    msg.req_id = 61455U;
    msg.type = 44U;
    msg.max_size = 56001U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7863848671870467;
    tmp_msg_0.base_lon = 0.5582826812945902;
    tmp_msg_0.base_time = 0.5083178865779062;
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
    msg.setTimeStamp(0.2928636202699527);
    msg.setSource(35178U);
    msg.setSourceEntity(68U);
    msg.setDestination(35287U);
    msg.setDestinationEntity(28U);
    msg.req_id = 54393U;
    msg.type = 240U;
    msg.max_size = 42510U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5397010184726567;
    tmp_msg_0.base_lon = 0.14763973070453784;
    tmp_msg_0.base_time = 0.7986286586723588;
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
    msg.setTimeStamp(0.9085438440267907);
    msg.setSource(62610U);
    msg.setSourceEntity(66U);
    msg.setDestination(29721U);
    msg.setDestinationEntity(50U);
    msg.original_source = 49897U;
    msg.destination = 43807U;
    msg.timeout = 0.1072439883316133;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HNIIFSGRNYBLBFUCITULHMOVZAHURUMNTKNKHVNYJQYVEAASZOAADUIBHJQWVFFDICHLFVDP");
    tmp_msg_0.feature_type = 254U;
    tmp_msg_0.rgb_red = 80U;
    tmp_msg_0.rgb_green = 70U;
    tmp_msg_0.rgb_blue = 27U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9192236456712695;
    tmp_tmp_msg_0_0.lon = 0.8939970064800925;
    tmp_tmp_msg_0_0.alt = 0.822846200492187;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5570604870583797);
    msg.setSource(48599U);
    msg.setSourceEntity(28U);
    msg.setDestination(3282U);
    msg.setDestinationEntity(90U);
    msg.original_source = 48467U;
    msg.destination = 52130U;
    msg.timeout = 0.5789141422818791;
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.32049713530573865);
    msg.setSource(61779U);
    msg.setSourceEntity(26U);
    msg.setDestination(27162U);
    msg.setDestinationEntity(37U);
    msg.original_source = 31202U;
    msg.destination = 57768U;
    msg.timeout = 0.9295086792293751;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.9983250267301781);
    msg.setSource(33050U);
    msg.setSourceEntity(178U);
    msg.setDestination(1424U);
    msg.setDestinationEntity(0U);
    msg.type = 21U;
    msg.comm_interface = 18883U;
    msg.model = 26337U;
    msg.list.assign("DFPIAZDLLFZRWGFPWIGWSJOACVSOQIFEHPBZTNEQHGCUHTSMUWRQYYVTSPYDDEQNSZMMPAAJQMOVRYVTJ");

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
    msg.setTimeStamp(0.015086889153192673);
    msg.setSource(20349U);
    msg.setSourceEntity(88U);
    msg.setDestination(5080U);
    msg.setDestinationEntity(136U);
    msg.type = 111U;
    msg.comm_interface = 38734U;
    msg.model = 25156U;
    msg.list.assign("JNUMLDSOEDECHYETMCYNQTARGPZBWLBPEFWUQCQBWLNCETLZOHHYGDATMAFYTSJWIOOXSQGXWAPDQBTUGRLKJRNPMEOGVPNTCI");

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
    msg.setTimeStamp(0.23250813912150448);
    msg.setSource(37099U);
    msg.setSourceEntity(21U);
    msg.setDestination(39985U);
    msg.setDestinationEntity(56U);
    msg.type = 240U;
    msg.comm_interface = 6955U;
    msg.model = 45133U;
    msg.list.assign("SRQKCZZSOWMCIEVUIZQYBVBVCWBAXHNCBSCTMJIFROSFWGEHEXWYLDQVLIPMYPJHQBZGQHGKMVEGVPPJDHUBMFJLTHFFNRCYMVZXZHKEWAYEQRFSLAAVOUGGOKTXNQRDIWYXLGGTUKZYFKSAWKQLLWPTDIJXJRTTTPSNPFBDXACBONB");

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
    msg.setTimeStamp(0.5623232610635489);
    msg.setSource(20395U);
    msg.setSourceEntity(215U);
    msg.setDestination(37289U);
    msg.setDestinationEntity(60U);
    msg.type = 12U;
    msg.req_id = 1763717355U;
    msg.ttl = 32686U;
    msg.code = 53U;
    msg.destination.assign("PGTZDVUKJBNUBMCBBHOPFEKXGFQWWRYBHSLJUQLNUROGE");
    msg.source.assign("KBAEVNYUFEWYRXBYTFBKJTKIMJUZFMLBAGUIDWTWTWIDWQSZAXRHCS");
    msg.acknowledge = 172U;
    msg.status = 223U;
    const char tmp_msg_0[] = {21, -84, 40, 20, 69, -24, -57, 125, 37, -69, -93, 79, 41, 83, 79, 120, 71, -58, 48, -88, -53, -89, -80, -115, -51, -18, 74, -43, 46, -111, -93, 60, 4, 118, -59, -85, -37, 34, 114, -35, 106, -38, -71, -122, -89, -62, -77, 64, 39, 52, 68, 74, 12, 7, -50, -76, 38, -119, 104, -17, -128, 68, -5, -67, -122, 38, -69, 58, -58, 101, -62, 108, -36, 86, 58, 29, 92, 55, 16, -26, -76, 83, -85, 124, 17, 7, -26, 58, -47, -19, -100, 45, 86};
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
    msg.setTimeStamp(0.10009626713799669);
    msg.setSource(14477U);
    msg.setSourceEntity(5U);
    msg.setDestination(43345U);
    msg.setDestinationEntity(48U);
    msg.type = 226U;
    msg.req_id = 3328871946U;
    msg.ttl = 15483U;
    msg.code = 97U;
    msg.destination.assign("TPFNSWWWXEBNCCJTSAWHYHUQUKZIEJEDMWUNIZRCUSLOOKDIRCVUJFNMEVVOFHMREVB");
    msg.source.assign("YJQAKNVXKPSTANHOWHDKXEXOEP");
    msg.acknowledge = 21U;
    msg.status = 143U;
    const char tmp_msg_0[] = {-31, -94, -102, -50, -56, -15, -116, -95, -42, 103, 84, -24, -111, 88, -45, -105, -101, -95, -108, 21, 63, -29, -49, -16, 40, 117, -30, 119, -54, -1, -74, -43, 104, 47, -78, 79, 67, -99, 82, 125, 54, -66, -68, 110, -44, 111, 24, 47, -13, 91, 77, -74, -104, -97, -79, -27, -98, 53, -89, 123, -28, 46, 122, 82, 99, -86, 10, 115, 70, 73, 51, 100, 49, 25, -70, 84, 28, -4, 43, 38, -116, 8, -64, 5, 94, -84, -38, -28, 30, -69, -41, 96, 20, 44, -40, -20, 4, -81, -77, -128, -53, 17, 11, 74, 73, 47, 20, 50, -59, -117, -89, 27, -1, 91, -67, 14, 124, -112, 113, 37, -20, 120, -95, 60, 115, -115, -65, 42, -105, 110, -68, 91, 88, -118, 111, -116, 27, 55, 95, -15, 38, -21, -46, -19, 44, -10, -51, -86, 113, 32, -105, -71, 47, 70, -30, 7, -92, -76, -4, -12, -70, 19, -3, 104, 40, -70, 15, -83, -20, 81, -126, 0, -107, 59, 45, 4, -8, 102, -46, 5, -124, 116, 79, 98, 25, 120, -15, -74, 44, 10, 2, -2, -121, -80, -29, -24, 35, 72, 12, -102, -53, -73, 46, 115, -52, 46, 16, -25, -59, 34, 20, -84, -121, 85, -95, 52, 69, -24, 115, 62, 26, 11, -124, -6, -100, -126, -8, -76, -115, -84, 98, -34, 106};
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
    msg.setTimeStamp(0.13057407782689578);
    msg.setSource(54523U);
    msg.setSourceEntity(235U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(246U);
    msg.type = 167U;
    msg.req_id = 2400661139U;
    msg.ttl = 17186U;
    msg.code = 133U;
    msg.destination.assign("GLJNTVAQKFXREXCWEPSRRTOOCPGHSLRXBZOHGFNZEYYPTUHNRRDBGUTXWFYJJJKIARV");
    msg.source.assign("KNNQYFZCRWLSYRRZPJQWBRKRBGXMPLETOPCWQGUNJJXBYPCMOOEATXUUMQOVHVLDICHQLKVOJYYXDEQTJUUWIQ");
    msg.acknowledge = 110U;
    msg.status = 1U;
    const char tmp_msg_0[] = {9, -98, 121, -73, -86, 115, -44, 20, 31, 74, 125, -39, -108, -118, 93, -19, 82, 122, -14, -45, 38, -22, -96, 4, 106, 80, 99, 95, 29, 124, -21, 55, -90, -62, 75, 122, -26, 107, 110, -70, -86, -94, 95, -41, -122, -30, 121, 75, -76, -82, -89, 107, -41, -4, 45, -2, 125, -31, 30, -57, 85, -80, -38, 80, 18, 11, -18, -117, -27, -4, 19, -89, -119, 123, 76, 84, -19, -22, 64, -64, -54, -103, -5, -37, 67, -35, -111, 70, 71, -42, -66, 83, -50, 112, 46, -53, -56, 60, -13, -104, 109, 5, -19, 97, 76, -81, 25, -45, -39, 55, 79, -2, 3, 17, 45, 54, 125, 37, -120, 103, -61, -70, -73, 113, 79, 110, -119, -80, 65, -82, 45, 107, 12, -79, 19, -85, 53, -96, -32, 25, 68, 69, 51, 97, 101, -5, -60, -32, -83, -24, -88, 69, -10, -93, 120, -39, -11, 43, -21, 105, 11, 28, 25, -113, 3, -65, 82, -83, 109, 48, -22, -64, -98, 30, -118, -25, 76, -58, -4, -100, 5, -42, -22, -35, 119, 21, 116, -119, 110, 95, -47, 68, 58, -24, 12, 47, 85, 113, 51, 102, -98, -58, -79, -84, -87, 91, 104};
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
    msg.setTimeStamp(0.9784702205682437);
    msg.setSource(55457U);
    msg.setSourceEntity(137U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(66U);
    msg.id = 69U;
    msg.range = 0.4174377231484748;

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
    msg.setTimeStamp(0.14539543890959716);
    msg.setSource(18866U);
    msg.setSourceEntity(162U);
    msg.setDestination(44284U);
    msg.setDestinationEntity(109U);
    msg.id = 211U;
    msg.range = 0.14588900650829417;

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
    msg.setTimeStamp(0.35556072264562644);
    msg.setSource(36880U);
    msg.setSourceEntity(169U);
    msg.setDestination(12317U);
    msg.setDestinationEntity(175U);
    msg.id = 101U;
    msg.range = 0.9843824131083461;

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
    msg.setTimeStamp(0.4987352124747326);
    msg.setSource(8541U);
    msg.setSourceEntity(50U);
    msg.setDestination(37782U);
    msg.setDestinationEntity(96U);
    msg.beacon.assign("DJXHZFHUIXYJCIQDBODXOOBNTXUKORUSETLEQWGLROFTFVWQTXHPGAUBCGQTPFKLINHYACYOWAWPTBXGLCREUEJLBUJZMYYOEPJZSECOSYXVAEAMTYQYNIGCGGVTUVNQFCLLDLGYVEOVMSCDPHDKDDMZLXWTRIFDISGWENFJFHSPZNSB");
    msg.lat = 0.6170117387225164;
    msg.lon = 0.6142130344575908;
    msg.depth = 0.059401818732058076;
    msg.query_channel = 235U;
    msg.reply_channel = 227U;
    msg.transponder_delay = 220U;

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
    msg.setTimeStamp(0.46491196289205605);
    msg.setSource(58244U);
    msg.setSourceEntity(221U);
    msg.setDestination(3059U);
    msg.setDestinationEntity(20U);
    msg.beacon.assign("XMJSSUZNABOSWUHPNAIYXNGDHABVNPXPGQJBNLZSWXTASRUEIKHQZLJCIAPEFWUOZWWELVOE");
    msg.lat = 0.15109857313764652;
    msg.lon = 0.8236033179988557;
    msg.depth = 0.45565603019339274;
    msg.query_channel = 237U;
    msg.reply_channel = 110U;
    msg.transponder_delay = 27U;

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
    msg.setTimeStamp(0.3276560770626915);
    msg.setSource(35669U);
    msg.setSourceEntity(193U);
    msg.setDestination(49127U);
    msg.setDestinationEntity(167U);
    msg.beacon.assign("BNYWVBUYYZWXTZZTGUALKCLPOGDJPKEXSSVJLGTITWIKBQUAPHGHFBVFXNSTCCWFRUJXVSPHMCLGCXODLMAUHSJLUOQWQBIQERWFBNTBAVYFAPWOZYKRFHDPKFOLHZTGQYDUIDWDHEJWZICQNZDJONJMOOLLARFSEVUMRKTVMQXCZBEKOZMFKRQIRUXAQYSMTAXBUFEPZQVWEVICX");
    msg.lat = 0.5983510604616589;
    msg.lon = 0.4026757673097754;
    msg.depth = 0.04580852907359556;
    msg.query_channel = 17U;
    msg.reply_channel = 246U;
    msg.transponder_delay = 131U;

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
    msg.setTimeStamp(0.8597119926410837);
    msg.setSource(43908U);
    msg.setSourceEntity(76U);
    msg.setDestination(9392U);
    msg.setDestinationEntity(229U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.022324115792766497);
    msg.setSource(36134U);
    msg.setSourceEntity(198U);
    msg.setDestination(28485U);
    msg.setDestinationEntity(27U);
    msg.op = 242U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IJJZDFGWSRSONLAHAWQNMKWQXRIJBUFDLRAFZYWQMUMWQYOJHQIDVUCABXHRZTMGMCSHVMFPKXWYVGDEFCBWHBTSEXXMXRQSZNYBOYNHKBKUMEFGIWLUPVJQ");
    tmp_msg_0.lat = 0.9887824999961762;
    tmp_msg_0.lon = 0.24300003590597774;
    tmp_msg_0.depth = 0.37014110205863515;
    tmp_msg_0.query_channel = 126U;
    tmp_msg_0.reply_channel = 55U;
    tmp_msg_0.transponder_delay = 166U;
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
    msg.setTimeStamp(0.7529281735791428);
    msg.setSource(14937U);
    msg.setSourceEntity(101U);
    msg.setDestination(41939U);
    msg.setDestinationEntity(78U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.17432647618223007);
    msg.setSource(46354U);
    msg.setSourceEntity(117U);
    msg.setDestination(36388U);
    msg.setDestinationEntity(107U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5969402032781245;
    tmp_msg_0.lon = 0.29636411202902324;
    tmp_msg_0.height = 0.33896895488066947;
    tmp_msg_0.x = 0.16886777081571258;
    tmp_msg_0.y = 0.11335699640894314;
    tmp_msg_0.z = 0.9134170840033574;
    tmp_msg_0.phi = 0.8611431934391381;
    tmp_msg_0.theta = 0.5781994482435535;
    tmp_msg_0.psi = 0.14235008205129585;
    tmp_msg_0.u = 0.5643254266374317;
    tmp_msg_0.v = 0.9624461150778729;
    tmp_msg_0.w = 0.3523721522594253;
    tmp_msg_0.vx = 0.928992967089773;
    tmp_msg_0.vy = 0.5813469885485048;
    tmp_msg_0.vz = 0.7953698127530666;
    tmp_msg_0.p = 0.2541733692025081;
    tmp_msg_0.q = 0.18132599615108025;
    tmp_msg_0.r = 0.38719986973676535;
    tmp_msg_0.depth = 0.4134784009782537;
    tmp_msg_0.alt = 0.5637505225673372;
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
    msg.setTimeStamp(0.22344235916831168);
    msg.setSource(21068U);
    msg.setSourceEntity(84U);
    msg.setDestination(3514U);
    msg.setDestinationEntity(167U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.3550010951581152;
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
    msg.setTimeStamp(0.1417471728225903);
    msg.setSource(4417U);
    msg.setSourceEntity(6U);
    msg.setDestination(41036U);
    msg.setDestinationEntity(152U);
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.4412504151170429;
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
    msg.setTimeStamp(0.6220537694037419);
    msg.setSource(33306U);
    msg.setSourceEntity(190U);
    msg.setDestination(5313U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.8981615756857159;
    msg.lon = 0.6510010331077776;
    msg.depth = 0.2037880331012285;
    msg.sentence.assign("ZYGHOGBABIEVHCQJZCVKQERKVIYQBAXRPXPGBYYUMSMGMYIVTTXNIONNHRFLODVZWJCRNRELVRQYLYCMJLPNZOXFPRJZUDCUAOSICALKJIKZHUPVLUUHHZTQIHWGNNEXWSLXMPFTMDLTHDMISDCNMKPYXGQHJEFJWTCDKTSAZBEWKTXLIDSDQKSYEJWBXVAPWUEWPOFCPAMKBFHODCGEGBGQUUXSGWARFNBOAQNFTWUYZTBJIVDKJOZMEF");
    msg.txtime = 0.41151917220783996;
    msg.modem_type.assign("SXUWAGTDZTYRQMPDXINNVJROEZQRQKDRFGHSSAFQJFSCCRLOSTTKQFJZOSQOXFIPMFWMRADDTMXMKDAGJPSIJKBKVUSCPYZCGDEHAUQYGZHOITIVCMXBHUAVRWQADYXGWNPNPJNKJOOCTDZZBSPRONXULBHIXLWBVCBALELVWUYLEBMAQRNNFWKTVFBGMKWLGUZQYLEXLWTAZIVYOPZEVI");
    msg.sys_src.assign("VXJCYHPKPNAZBMXCHLWYRHQDMHXHTOCLYRTVAAGULCMSLFWJICARUKUOZXNPUIETWERCLGAKBYFBJFNEBFHXKO");
    msg.seq = 24548U;
    msg.sys_dst.assign("WSENCVQWJOBRYCCOBVQUDPPFSKSOHRLCUBPCDTZNOQZEWWXUHCILFKAMQGDYWEXYJQPSWLNQXIRXDDZMLVMJRHAAIDWSUMOTAORSNJXDUQIGKBMGDXWTCCZVALVIAAETNVRNNOAFZXGPKGHKIXVBYTYOZK");
    msg.flags = 205U;
    const char tmp_msg_0[] = {91, -3, -73, 100, 72, -115, 4, 49, 75, -80, 111, 56, -51, -103, 11, 99, 17, 103, -34, -58, 0, 47, -124, -99, 50, 18, 54, 9, -74, 7, 84, 117, -55, 86, -25, -9, -112, -122, 123, 38, -100, -52, 60, -64, -20, -120, -68, 52, 57, -127, 48, -112, 65, -95, -113, -107, -66, 116, -93, 92, 99, -21, 122, 54, -34, 18, -27, -96, -82, -3, 67, 124, 103, -75, -18, -43, -79, 115, -61, 6, -115, -118, -70, 29, 3, 65, -47, -51, 3, -51, 4, 69, -116, 121, -121, -24, 1, 113, 4, -84, -87, 114, 119, -68, 119, 84, 48, -79, -69, 101, -88, 56, -124, -126, -111, 61, 118, -116, -46};
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
    msg.setTimeStamp(0.31557546455767316);
    msg.setSource(59288U);
    msg.setSourceEntity(56U);
    msg.setDestination(5752U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.9408227654250717;
    msg.lon = 0.5672850018554058;
    msg.depth = 0.38454344588669087;
    msg.sentence.assign("JOBXAKYLPESDCEUIRLRTJENAFOTZQDBEZRKYBXHWFIKIFHHRNIXVEQMHUCRUA");
    msg.txtime = 0.2987000924872004;
    msg.modem_type.assign("CXVOFHQGQIGNWQEJMAWBISKXPGVNHRYUGPHEK");
    msg.sys_src.assign("EUOJEIMYJBJFXAKQZPVH");
    msg.seq = 63443U;
    msg.sys_dst.assign("DRNUTJZERWUTIVKROHCHXEGBQNDMQGABPIHWQPNKEFHMWWEXSBOVMMKDMUBYSZZWPQFYROYGNJQKXEKTJOMGDDURSCISZJYKJWP");
    msg.flags = 181U;
    const char tmp_msg_0[] = {-79, -79, -127, 56, -14, -97, 125, -28, 85, 66, -123, -74, -52, 46, 23, 69, -73, -5, -27, 31, 43, -45, 37, 111, 110, 21, 57, 36, 16, -18, 19, -36, 52, -14, 42, 29, 89, -101, -17, -77, 106, -36, -65, 115, -21, 58, 91, 3, 20, -85, -127, -29, -17, 121, 103, 3, -30, -7, 65, -30, 43, 93, 77, -124, -42, 91, -28, -21, 84, 124, 118, 46, -78, 39, 99, -63, 92, -108, 106, 125, 116, 84, 96, 1, 116, 65, -34, -79, 122, -122, -86, 71, 86, -115, 11, 92, 55, 2, 125, 126, 38, -99, 100, 76, 25, -75, 25, 3, 11, -96, -30, 79, 16, 31, -71, 113, 33, 33};
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
    msg.setTimeStamp(0.8832555383119338);
    msg.setSource(9110U);
    msg.setSourceEntity(155U);
    msg.setDestination(42593U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.9023556673609847;
    msg.lon = 0.9242664445892713;
    msg.depth = 0.8206550334092255;
    msg.sentence.assign("ZEYMCGYMZEVMVZLTLKBPCLLAHIDUQRYJYXRWONKATCOPKPBRVCIZPSPHORXTWHRMXNGAIHYSKXAYJDHLNINRFIOUPBDZSQANLMMTKQHIVQPYPIBAJBGBOVGFXJNQMFTFOSOSDODFTETRQECVZUJIUIKHWJBXZSRXWNGADXBPVZUUFAQNTEFFMACNUKKCKPDVYLEXEIGLZOHDRCUJTQEFMCBSNBTMWDWWUHOQWLKYJZSFJYSCGULVRGJSAXWVDW");
    msg.txtime = 0.23923005227329108;
    msg.modem_type.assign("OURYFGNALWLICCLMUJPOFKZDMFGSSANECBYVSXMYXPTQCHEONFGDVPVIDMETUJIZQKJJEQTKBWTKVAYPVNXLPGLBMTXNBYPHAAWQECENFYDRVWIUUOGIKIQHJELWAIHMZSZMOJCKGFSFKBQGUONCBPCBHNWIOSAKJDDKSYXASORCMQQVSUPRMXFGZLWFMWRXBEBDNQCHHIZEWSVBLEXUTGWTLIHNUHYUXDJHFTDYAPTAZOVKD");
    msg.sys_src.assign("QHPIPJLSUPZHVVLNPOTQWJQAPKCCFZBBBRUVSKXEORDZGQGKTDUZTLTSQXZXMLDCCYAHMKCNCEYWYMPWVKWTJGBRSSEDEEWDNRNTTXZKAMZCGOLCUZHJJNLAQSMNHSNVZRQJYFEVHLLCNMGLDKERBQIFMAYBBVGURFYVALIEUIDFXWOGRHFRIYQOOECXFFHXTIK");
    msg.seq = 59964U;
    msg.sys_dst.assign("DDLCNRPAJZCJBOMZPLBVTBPKUMCSYDIRQUYRRFNWHAJCTDNUUWWXEACRKMNYGHLXFTFVQQVPLAHIWLKT");
    msg.flags = 178U;
    const char tmp_msg_0[] = {124, 111, -79, 1, -79, -22, 3, 32, 117, 107, 32, -21, 63, 39, -67, -42, 66, -115, -96, -62, -53, -40, -74, 99, 47, 22, 10, -6, -86, 120, 15, 66, 33, -91, -54, -88, 46, 86, 93, -65, 117, 109, 31, 38, -127, -62, -53, -3, 83, -32, 74, -84, -57, 51, -74, 65, 3, 34, 50, 62, 85, -84, -112, -106, -36, -52, -23, -113, 47, 24, -76, -20, 121, -38, 86, -72, 67, -55, 75, 8, 99, 90, 77, 26, 26, 109, -60, 106, -74, -111, 77, 18, -54, 75, -88, 84, -100, 75, -95, 110, -30, -24, -91, 91, -107, 40, 39, -22, -104, -95, 69, -21, 46, -41, -22, -83, -86, 89, -74, -56, -119, -120, -70, 69, 67, 76, 35, 38, 67, -91, -7, -68, 74, 29, 53, 110, -93, -102, -46, 48, 115, -70, -112, -55, 98, 52, 45, -85, 112, -36, 59, -16, -65, -13, -48, 59, 23, -122, 123, -124, -103, -68, -117, -78, -45, -93, 37, -100, -33, -39, -48, 16, -71, 118, -13, 123, -32, 77, -60, 124, -67, -47, -34, 23, -100, -59, 106, -64, -83, -12, 29, 106, 100, -117, 32, -24, -4, -25, 0, 24, 70, -13, -109, -43, 60, -127, -87, 114, 48, 110, 56, -15, -68, 57, 2, 27, 11, -90, 119, 65, -31, -102, 92, 78, -68, -104, 30, 108, -21, 18, 97, -56, 125, -29, -82, -84, -73, 70, 12, -117, 19, -102, 20, 82, 92, 83, 55, -3, 11, 14, 4};
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
    msg.setTimeStamp(0.9227003588453223);
    msg.setSource(64114U);
    msg.setSourceEntity(239U);
    msg.setDestination(33252U);
    msg.setDestinationEntity(0U);
    msg.op = 150U;
    msg.system.assign("RZXLSDYWINAVAGRAHGUNPSVBXDHMHCEILGAGNRKUBXBZYPBMTDWBVNEORCAUOAIFWMISOFZSNGYYUVWWTYOPUBLUPBIMOJLQQTIDDQCCPQPJNVWYHDYZEFZPXJAELXMFFHXQKNVZYXEMQCKRSZDHOCKBGOETVVTMRWQCZKHTTWXVKIWZCIOSEMGJRLRXJKPGMOHHS");
    msg.range = 0.7250677735890578;
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 49201159U;
    tmp_msg_0.latitude = 0.05305808231823117;
    tmp_msg_0.longitude = 0.47040723861107026;
    tmp_msg_0.altitude = 50304U;
    tmp_msg_0.depth = 25321U;
    tmp_msg_0.heading = 44242U;
    tmp_msg_0.speed = -15630;
    tmp_msg_0.fuel = -109;
    tmp_msg_0.exec_state = -5;
    tmp_msg_0.plan_checksum = 47364U;
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
    msg.setTimeStamp(0.004205692341127554);
    msg.setSource(30339U);
    msg.setSourceEntity(25U);
    msg.setDestination(18173U);
    msg.setDestinationEntity(237U);
    msg.op = 121U;
    msg.system.assign("ZCADNVVEQCSTNYHIUPNQDWFFFSTZ");
    msg.range = 0.6271251412188246;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 61U;
    tmp_msg_0.flags = 179U;
    tmp_msg_0.description.assign("CATRXOOQSOWZJLYFUJFJPUVTHYQHFOVDISTZDBACPXDLSVLDHAUMDWLWRGVWJIAFOQ");
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
    msg.setTimeStamp(0.1929864008410831);
    msg.setSource(28153U);
    msg.setSourceEntity(48U);
    msg.setDestination(5111U);
    msg.setDestinationEntity(121U);
    msg.op = 200U;
    msg.system.assign("GYQYTYQHRFTJGHPKULQMBMVWEFPFKCAJNQSLZJZBWQRRWXODGIHRVKEKVUWCDUVYWTROUGLVAKMFZIWHVPGXIAKGUXXZCQCDRSZCZYNJOCDHHJPUULUSBMSRKHLFIEBMPBHBPEDUENDHQMVOSGUQJRABDNIDDNIJAMRMCOVNXPJQCNITOQEWAHBAYSLZKWXYIOXNTWGFBVMYFEIXLZTMRDEFPZOG");
    msg.range = 0.2283081231657561;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 178U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7419692329181531;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5420781047035004;
    tmp_tmp_msg_0_1.z_units = 80U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.06010640236305709;
    tmp_msg_0.lon = 0.9487370865910673;
    tmp_msg_0.radius = 0.42252233055222144;
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
    msg.setTimeStamp(0.8054938662020636);
    msg.setSource(50916U);
    msg.setSourceEntity(154U);
    msg.setDestination(33462U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.09092342926073593);
    msg.setSource(4324U);
    msg.setSourceEntity(1U);
    msg.setDestination(54701U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.948469172522309);
    msg.setSource(6806U);
    msg.setSourceEntity(208U);
    msg.setDestination(19370U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.2912445767447496);
    msg.setSource(1484U);
    msg.setSourceEntity(27U);
    msg.setDestination(59177U);
    msg.setDestinationEntity(245U);
    msg.list.assign("WNHEZLTQVJKPSXXTLTDKJDDEMRKOXCNGONVFKJINWCWCMXLOXQEGTMEVUYIDXTCRHKZCQIPDZNKTMQZBRITPZGLYLQSPPPYZOOSUROFCDWJRFBWPYYPNJVUELYBBWYXYGWEYTGIHLRZEBLAGUNRACFAPCEDIBCZGRUWUXKOGNRUDJHOLVBHSIHRADMKQBGQMSZIFFJVMMH");

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
    msg.setTimeStamp(0.5776926293627288);
    msg.setSource(19796U);
    msg.setSourceEntity(173U);
    msg.setDestination(32926U);
    msg.setDestinationEntity(7U);
    msg.list.assign("OAWNBKWIAFTOJZUVZRTTAGIPQMYFDPQHUMAHCOJYDLLKEEWYRJNILXCPTIAKPJNNOXGIKNRVTXHSBALMKAHQCWZQLFGTEPCFOCPESVNYAMSORSZGIPJWUJZMTRDHQYEOQGCXKW");

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
    msg.setTimeStamp(0.639453975866192);
    msg.setSource(12750U);
    msg.setSourceEntity(92U);
    msg.setDestination(60393U);
    msg.setDestinationEntity(197U);
    msg.list.assign("AYTWWDNTBKTJKLPFPVRXHIRNNDOUXBYZMSZGHYGAKJLOFRSAWHBUJJFLPZUBMPSNMUNKXEQROPNSGJEBQHSWJOFBBQJJYJLDVRPNPFTETGDSXKURHIVMCQVLWHAATLIIXVAMKRAYBYHFODYUVAZWCVEVWFFQMGCPQAWSUSIONGZCMSUTPKSLHTOXAZMQECVEWBCUIGFDOIYGJKZLFXEY");

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
    msg.setTimeStamp(0.21622250044426905);
    msg.setSource(2462U);
    msg.setSourceEntity(97U);
    msg.setDestination(58151U);
    msg.setDestinationEntity(228U);
    msg.peer.assign("KAOTXHPRLAVBNTDWPUPVLVJTJROREGAMFGEXGYINAGIPETDBFVCOJQZURHMSFGENBEVCSBSOYJSXFOZSHYRVJSLIKBALUWWJLBMKHGVACEXWXNMFJXYJDVSKYYIBHQDOTHILPWZGWVDNNYXCZGQBNEQKDUBOEDNCMDRFSCRQCRPLLFUKUCTFIEAZBQMKZHETFPJQLOMVMUGUXASQWFRPZTQHKTIXKQJYAOCYUYWHLTWODAIGNZUZIKCRHZ");
    msg.rssi = 0.5273418145563258;
    msg.integrity = 39737U;

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
    msg.setTimeStamp(0.6373997854532418);
    msg.setSource(3237U);
    msg.setSourceEntity(82U);
    msg.setDestination(38267U);
    msg.setDestinationEntity(38U);
    msg.peer.assign("WGOLXCJHPQUHEVZGBYAXXLXJFGIEHAYQHYWDHNQKEUASQWUIK");
    msg.rssi = 0.19088694354645752;
    msg.integrity = 7664U;

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
    msg.setTimeStamp(0.6954752419768336);
    msg.setSource(56119U);
    msg.setSourceEntity(81U);
    msg.setDestination(23523U);
    msg.setDestinationEntity(76U);
    msg.peer.assign("GIZSQAMEYOKBAMVFQFUYKGMAFXKCGXMIXJFWQD");
    msg.rssi = 0.9028143456298481;
    msg.integrity = 39794U;

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
    msg.setTimeStamp(0.02960894577653006);
    msg.setSource(55286U);
    msg.setSourceEntity(109U);
    msg.setDestination(55503U);
    msg.setDestinationEntity(88U);
    msg.req_id = 24385U;
    msg.destination.assign("VMBYGCKWHVDPZEQBPSPEIYKCITTDUAQPBYEYIOANJNGPVTAMVRUNORSMUFCUXXTCXFRXPFYKKXXGTBIVZOAYAVUFAILQISZJCZETSLHNILWLCLGRDWINAJJDGKOVECGFKNPBEGMNGDNT");
    msg.timeout = 0.7114813856846804;
    msg.range = 0.4682359617753873;
    msg.type = 47U;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("BVPOGDRYHHZVMXEAXBXDGDTAGRPJPESUFWFITWIIWBDPJTKACYZRTFG");
    tmp_msg_0.sys_dst.assign("SIXTVJJZWNEGWTSLWSNAUGWWHEAQHJHPKFMXFPKWROOPUPYDRWHDFJLPYIOUJQZHGZTXTLMRMXRJWXCCJUQHUEACNAGUNCXIRZWSYYACRFEXZOBSBESOOTMHYYXADKDVNUAZABOJKIMU");
    tmp_msg_0.flags = 40U;
    const char tmp_tmp_msg_0_0[] = {-30, 30, 84, 18, 24, 108, -10, -81, 22, 86, -88, 121, -73, -63, -104, -4};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.31510904063603173);
    msg.setSource(51817U);
    msg.setSourceEntity(159U);
    msg.setDestination(50813U);
    msg.setDestinationEntity(38U);
    msg.req_id = 52176U;
    msg.destination.assign("LYBSJAVYEREOAWQKPTXLUPYOBQVUXDNGUOHAUWOCROBTGVNPRPGMFEFHVXMWFLKMCURFROGNLIWVJDYWYUKSIEDYOMZYDZNPHCVDIECHUJMOIPVGQJAANMPSSECDSDALZWNGHKHWBBZKRAONZQKNLGTIASGCJJPFWHLSHYXPGLVIZKXSMQTDBIMTFQJI");
    msg.timeout = 0.26133262809746516;
    msg.range = 0.2023687053560057;
    msg.type = 76U;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 64727U;
    tmp_msg_0.status = 6U;
    tmp_msg_0.info.assign("VYPLJAMDSUWIFPOKENKFDYUQGSISNXUMMJHVJGZJASBMETAIYKGTDPTKFZPBHRGLYNEWNXZ");
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
    msg.setTimeStamp(0.9232422497660017);
    msg.setSource(23255U);
    msg.setSourceEntity(209U);
    msg.setDestination(38230U);
    msg.setDestinationEntity(147U);
    msg.req_id = 35518U;
    msg.destination.assign("SPJQZOVJBTIYELPZJOVNKGJCIEAEVOPFTSDSBRCMAYBQRTUQKBFCBQZKAPRTWLKQBVIFHKDIHZICGFWHMXMXXDZFXLUUGBNFTELMWWSRGSDFJLOETFSGHUTCI");
    msg.timeout = 0.2247494822028514;
    msg.range = 0.46870797185132573;
    msg.type = 163U;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 50900U;
    tmp_msg_0.plan_size = 3856488551U;
    tmp_msg_0.change_time = 0.13756223323929428;
    tmp_msg_0.change_sid = 3627U;
    tmp_msg_0.change_sname.assign("UKUNBZBJRQGPQBGEKAPWDFTWTOKBJZOXSYYUBSQHOQDNMMIUCMCVTQDPFUMKXTSPSCNIGICSEYTXOJRYPJIZOJOJDCOHNNFHQPHGZEMEFZIVKAAGKNXOAHEZALCHVPZVIIWZJMXBEDNLMFDFULFLYTRKBIBAZSOBRRVCLWYXEBQRSLFWOYGVVQDWURXHYVYAAHXNLHGXEJ");
    const char tmp_tmp_msg_0_0[] = {111, -117, -126, 125, 96, 86, -103, -3, 38, 15, -14, 29, 33, 113, 12, -26, 0, -92, 7, -82, -102, -60, 125, 29, 53, -99, 2, -29, 5, 51, -26, -65, 24, -69, 100, -10, -77, -127, 17, 119, -26, -112, 83, 4, 119, -116, 30, 61, 49, -18, 125, -3, 106, -41, -51, 28, 5, 92, -46, 123, -11, -119, -29, 58, 106, 37, 56, -3, 122, 14, 69, 6, -61, -96, -71, 63, 122, -33, 64, 94, -73, 4, 43, -123, 106, -76, 72, -49, -101, 19, 27, -60, 120, 10, 8, 105, 57, -93, -113, -59, -55, 29, -78, 79, -17, 44, -72, -83, 123, -1, -55, 103, 5, -46, -87, 113, 119, 25, 3, -105, 85, 28, -62, 63, -13, -96, 69, 65, 105, 108, 16, 36, 63, 125, 84, 122, -97, 107, -81, -20, 101, -75, -5, -52, 96, -34, -108, -100, 47, -3, -94, 34, -87, 90, -11, -24, 24, 61, -37, 53, -85, 13, -100, -126, 71, 5, -62, 108, 6, 92, 112, 85, 30, -112, 44, -8, -83, 37, -100, -59, -7, 114, -101, -11, -19, -124, -14, -58, 34, 120, 89, -59, 106, -6, 68, -47, 120, -82, -90, 115, -99, 91, 72, 15, -89, 21, 91, -98, -120, -99, -106, 27, 63, 52, 49, 66, -68, 123, 104, 29, 64, -41, 84, -87, -31, 88, 38, 96, -49, 55, -66, 105, -81};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("BIAUIKQYJSBJGXCHILUHYJGQNURNCRONNWPZWEBTJOSKSAVVKFERIXSRWOYOAYWDFPFNBSHNKYMXVQYIYGCVEWOMAULPJFOBIGDDOQLPATCLCRZZABIDEOXQTURYTMCEFSMPTJDMOGHRXKZYFDWEMVRZCWQAWZPEDHLUMETKWDMCATNVSTNXXLAVZJFXMPSRHKLLTQAGVDCHXPJYDKUHFB");
    tmp_tmp_msg_0_1.plan_size = 20157U;
    tmp_tmp_msg_0_1.change_time = 0.07580847919586209;
    tmp_tmp_msg_0_1.change_sid = 53601U;
    tmp_tmp_msg_0_1.change_sname.assign("ONRVPLZLUOURSBSUYETADNNQSUHZEHBPIOWIAKLJRUYQFAHSEKPHWOKXPDNIDQBQGGC");
    const char tmp_tmp_tmp_msg_0_1_0[] = {45, -47, 0, 18, 112, 82, -41, 65, -79, -51, 9, -14, 77, 75, -76, 58, -2, -81, 90, 10, -34, -5, -106, -16, 36, -118, -128, -27, -96, -71, -20, 115, 95, -79, -63, 51, 83, -98, -96, 40, 118, 115, -50, -5, 65, 54, -102, 69, -84, -59, 69, -80, -81, 74, -79, 31, -10, 38, 112, -29, 10, -30, -71, -63, -95, -61, -16, 46, 47, -112, -70, -27, -22, 25, -23, -117, -25, 59, 70, 17, 77, 123, 51, 30, -6, 53, 9, 76, 54, 67, 55, 78, -126, 86, -105, -7, -122, 93, 19, 91, -78, 85, -37, 121, 78, -85, -43, -107, -66, -49, 4, -114, 86, -108, -68, 67, -127, 1, -121, -32, -29, -84, -42, 73, 53, -6, 47, -74, -110, 12, 93, 37, 65, 18, 26, 9, 5, 23, -52, 47, -46, 102, 68, 93, 69, -74, 85, 47, -50, -42, 14, 103, -101, 6, 76, 122, -42, -58, 20, 22, 83, -63, -37, 87, -37, -26, 3, 8, -9, 73, 25, -23, 3, -113, 41, -127, -81, -107, -126, -62, -60, 57, 37, 52, -23, 81, 12, -68, -29, 67, -1, 22, -54, 36, -73, 7, -126, -45, 55, -122, -124, -70, 48, 52, 76, -49, -1, -76, -103, 111, -39, -57, -106, 126, 74, 19, -97, 30, -122, 123, 26, 117, 87, -45, 61, 39, -89, 32, 29, 68, -30, 30, 26, -86, 55, 118, 20, -95, 96, -115, 124};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.5597936497386732);
    msg.setSource(56090U);
    msg.setSourceEntity(50U);
    msg.setDestination(24713U);
    msg.setDestinationEntity(124U);
    msg.req_id = 65015U;
    msg.type = 191U;
    msg.status = 254U;
    msg.info.assign("JLIFZWRQCPICPPXKVSFZRVIA");
    msg.range = 0.506412847542456;

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
    msg.setTimeStamp(0.31919444900702776);
    msg.setSource(22189U);
    msg.setSourceEntity(189U);
    msg.setDestination(27001U);
    msg.setDestinationEntity(31U);
    msg.req_id = 34565U;
    msg.type = 206U;
    msg.status = 95U;
    msg.info.assign("XLCZMJYGALNHNKROUBFRNLTOKYTKHRKGOTZWAVSJYXFTFXPZDIFBPQVCZJEZPPYVYMUMIATBRLVUBAQMQUDGLRLXZPHW");
    msg.range = 0.5967032922033937;

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
    msg.setTimeStamp(0.6794651162557044);
    msg.setSource(39599U);
    msg.setSourceEntity(247U);
    msg.setDestination(1284U);
    msg.setDestinationEntity(143U);
    msg.req_id = 3512U;
    msg.type = 109U;
    msg.status = 112U;
    msg.info.assign("KQHNWGLBUFUFJIQZTMJHZNGDYJDABCBOTQNXJOWIKBFUISEFVCKPMEXCASUOURDVAYMSVWRNGBGEJZJOGYLXGCNYARBOWYFDTDHUIYQGQPAPLVXMKLJIKPHAWZMCMKIQ");
    msg.range = 0.3294679196228163;

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
    msg.setTimeStamp(0.15957550011777932);
    msg.setSource(15187U);
    msg.setSourceEntity(193U);
    msg.setDestination(20088U);
    msg.setDestinationEntity(6U);
    msg.value = 15944;

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
    msg.setTimeStamp(0.5446638660855504);
    msg.setSource(60091U);
    msg.setSourceEntity(89U);
    msg.setDestination(15667U);
    msg.setDestinationEntity(188U);
    msg.value = -5671;

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
    msg.setTimeStamp(0.025348114950696443);
    msg.setSource(41780U);
    msg.setSourceEntity(6U);
    msg.setDestination(11278U);
    msg.setDestinationEntity(117U);
    msg.value = 14503;

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
    msg.setTimeStamp(0.01269551011122394);
    msg.setSource(59758U);
    msg.setSourceEntity(168U);
    msg.setDestination(7874U);
    msg.setDestinationEntity(76U);
    msg.value = 0.27732971058365485;

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
    msg.setTimeStamp(0.32974696995487685);
    msg.setSource(57663U);
    msg.setSourceEntity(114U);
    msg.setDestination(49531U);
    msg.setDestinationEntity(5U);
    msg.value = 0.8066348214726198;

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
    msg.setTimeStamp(0.787087340124769);
    msg.setSource(57002U);
    msg.setSourceEntity(177U);
    msg.setDestination(60623U);
    msg.setDestinationEntity(79U);
    msg.value = 0.2509272036193634;

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
    msg.setTimeStamp(0.7650351651975159);
    msg.setSource(45943U);
    msg.setSourceEntity(240U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(28U);
    msg.value = 0.7428494690458027;

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
    msg.setTimeStamp(0.6758268334985672);
    msg.setSource(35832U);
    msg.setSourceEntity(61U);
    msg.setDestination(287U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0036602878004282635;

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
    msg.setTimeStamp(0.8670787723382058);
    msg.setSource(12756U);
    msg.setSourceEntity(36U);
    msg.setDestination(37860U);
    msg.setDestinationEntity(164U);
    msg.value = 0.531091829801501;

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
    msg.setTimeStamp(0.30868394282110645);
    msg.setSource(50826U);
    msg.setSourceEntity(229U);
    msg.setDestination(50779U);
    msg.setDestinationEntity(233U);
    msg.validity = 16854U;
    msg.type = 149U;
    msg.utc_year = 38853U;
    msg.utc_month = 37U;
    msg.utc_day = 143U;
    msg.utc_time = 0.9375591920997081;
    msg.lat = 0.2805233747516751;
    msg.lon = 0.27088817999365467;
    msg.height = 0.27468531896247195;
    msg.satellites = 143U;
    msg.cog = 0.1358859315933263;
    msg.sog = 0.4841295188942303;
    msg.hdop = 0.19179376466063014;
    msg.vdop = 0.5452690587176036;
    msg.hacc = 0.533212074076156;
    msg.vacc = 0.8695052664714608;

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
    msg.setTimeStamp(0.6808743271537638);
    msg.setSource(9445U);
    msg.setSourceEntity(125U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(116U);
    msg.validity = 35699U;
    msg.type = 152U;
    msg.utc_year = 64881U;
    msg.utc_month = 13U;
    msg.utc_day = 167U;
    msg.utc_time = 0.17109067692855529;
    msg.lat = 0.8950071365021485;
    msg.lon = 0.7325864356938169;
    msg.height = 0.8780928932225974;
    msg.satellites = 120U;
    msg.cog = 0.8324872375828366;
    msg.sog = 0.9821464947826178;
    msg.hdop = 0.7472415149178718;
    msg.vdop = 0.2397164062957916;
    msg.hacc = 0.6305741318060267;
    msg.vacc = 0.49368652635562815;

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
    msg.setTimeStamp(0.6219370838992492);
    msg.setSource(10788U);
    msg.setSourceEntity(47U);
    msg.setDestination(20523U);
    msg.setDestinationEntity(97U);
    msg.validity = 63561U;
    msg.type = 77U;
    msg.utc_year = 56385U;
    msg.utc_month = 184U;
    msg.utc_day = 181U;
    msg.utc_time = 0.1488577473853735;
    msg.lat = 0.5957858029956181;
    msg.lon = 0.7243482211458174;
    msg.height = 0.06571854376497177;
    msg.satellites = 44U;
    msg.cog = 0.7621951980536635;
    msg.sog = 0.19558610816779687;
    msg.hdop = 0.6253300601285168;
    msg.vdop = 0.858926600579094;
    msg.hacc = 0.10263148139106715;
    msg.vacc = 0.4228636576860866;

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
    msg.setTimeStamp(0.5380400150438812);
    msg.setSource(11033U);
    msg.setSourceEntity(252U);
    msg.setDestination(6969U);
    msg.setDestinationEntity(63U);
    msg.time = 0.6775487491938528;
    msg.phi = 0.8259804598830327;
    msg.theta = 0.43863071910154483;
    msg.psi = 0.9780814025944994;
    msg.psi_magnetic = 0.76753703501271;

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
    msg.setTimeStamp(0.48804351277043223);
    msg.setSource(32035U);
    msg.setSourceEntity(233U);
    msg.setDestination(22564U);
    msg.setDestinationEntity(254U);
    msg.time = 0.40145058037884584;
    msg.phi = 0.3447481841729343;
    msg.theta = 0.8626252789824822;
    msg.psi = 0.03994921707138721;
    msg.psi_magnetic = 0.06542783007945507;

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
    msg.setTimeStamp(0.023436949051064082);
    msg.setSource(34857U);
    msg.setSourceEntity(143U);
    msg.setDestination(555U);
    msg.setDestinationEntity(189U);
    msg.time = 0.5186730367769878;
    msg.phi = 0.5243383783135378;
    msg.theta = 0.5596200870645281;
    msg.psi = 0.17908301753779743;
    msg.psi_magnetic = 0.5298245386730112;

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
    msg.setTimeStamp(0.14683118828866515);
    msg.setSource(18545U);
    msg.setSourceEntity(108U);
    msg.setDestination(20342U);
    msg.setDestinationEntity(51U);
    msg.time = 0.06970686845477436;
    msg.x = 0.2779704050801498;
    msg.y = 0.7174988087037846;
    msg.z = 0.48993502932433997;
    msg.timestep = 0.9260036674885351;

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
    msg.setTimeStamp(0.7247725416784148);
    msg.setSource(36988U);
    msg.setSourceEntity(51U);
    msg.setDestination(19266U);
    msg.setDestinationEntity(142U);
    msg.time = 0.9728149406328798;
    msg.x = 0.8312584032276701;
    msg.y = 0.0399182286252695;
    msg.z = 0.04459197441386309;
    msg.timestep = 0.2477189992911446;

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
    msg.setTimeStamp(0.2624929033287515);
    msg.setSource(47130U);
    msg.setSourceEntity(13U);
    msg.setDestination(39084U);
    msg.setDestinationEntity(159U);
    msg.time = 0.019018859262486254;
    msg.x = 0.19689264456811073;
    msg.y = 0.05173713786592937;
    msg.z = 0.9167261452758375;
    msg.timestep = 0.16148950738448586;

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
    msg.setTimeStamp(0.7585400138981836);
    msg.setSource(20964U);
    msg.setSourceEntity(127U);
    msg.setDestination(15683U);
    msg.setDestinationEntity(37U);
    msg.time = 0.8744557236311271;
    msg.x = 0.6224421984373564;
    msg.y = 0.22330355194778895;
    msg.z = 0.9750231678473177;

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
    msg.setTimeStamp(0.30574348838505805);
    msg.setSource(33739U);
    msg.setSourceEntity(66U);
    msg.setDestination(39340U);
    msg.setDestinationEntity(249U);
    msg.time = 0.9791760567957515;
    msg.x = 0.9613629543319029;
    msg.y = 0.4447068404843678;
    msg.z = 0.9297403289272482;

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
    msg.setTimeStamp(0.8650376363499596);
    msg.setSource(46442U);
    msg.setSourceEntity(28U);
    msg.setDestination(32517U);
    msg.setDestinationEntity(12U);
    msg.time = 0.7924542873216347;
    msg.x = 0.37741030698560585;
    msg.y = 0.21314026235129446;
    msg.z = 0.13071952501360062;

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
    msg.setTimeStamp(0.677495525776279);
    msg.setSource(50178U);
    msg.setSourceEntity(245U);
    msg.setDestination(65363U);
    msg.setDestinationEntity(77U);
    msg.time = 0.7840636767810207;
    msg.x = 0.4543319017034385;
    msg.y = 0.5239154193205874;
    msg.z = 0.3417890982150643;

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
    msg.setTimeStamp(0.23573910715085455);
    msg.setSource(61033U);
    msg.setSourceEntity(109U);
    msg.setDestination(27276U);
    msg.setDestinationEntity(152U);
    msg.time = 0.3965886338824357;
    msg.x = 0.8071979701809223;
    msg.y = 0.8046796516731587;
    msg.z = 0.21078198169504714;

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
    msg.setTimeStamp(0.9334830413616996);
    msg.setSource(19416U);
    msg.setSourceEntity(195U);
    msg.setDestination(39480U);
    msg.setDestinationEntity(153U);
    msg.time = 0.8170953765816693;
    msg.x = 0.1556128612696943;
    msg.y = 0.18483178349921114;
    msg.z = 0.6892748782734403;

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
    msg.setTimeStamp(0.5152995876358684);
    msg.setSource(14484U);
    msg.setSourceEntity(179U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(78U);
    msg.time = 0.09645057458637418;
    msg.x = 0.5196791164846151;
    msg.y = 0.1265003868797797;
    msg.z = 0.5283328323228269;

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
    msg.setTimeStamp(0.4493781226087865);
    msg.setSource(21530U);
    msg.setSourceEntity(248U);
    msg.setDestination(13761U);
    msg.setDestinationEntity(91U);
    msg.time = 0.5408228823019463;
    msg.x = 0.9077196771168417;
    msg.y = 0.8551384368435659;
    msg.z = 0.3649012818231151;

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
    msg.setTimeStamp(0.015766787572283447);
    msg.setSource(19994U);
    msg.setSourceEntity(58U);
    msg.setDestination(63841U);
    msg.setDestinationEntity(81U);
    msg.time = 0.02485534667178857;
    msg.x = 0.4651158294016403;
    msg.y = 0.5514484279706846;
    msg.z = 0.46593103374587164;

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
    msg.setTimeStamp(0.48084131146053954);
    msg.setSource(53205U);
    msg.setSourceEntity(214U);
    msg.setDestination(56324U);
    msg.setDestinationEntity(217U);
    msg.validity = 44U;
    msg.x = 0.055039918455822456;
    msg.y = 0.5535220940057205;
    msg.z = 0.3312348329226593;

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
    msg.setTimeStamp(0.11354729214879578);
    msg.setSource(47922U);
    msg.setSourceEntity(13U);
    msg.setDestination(4482U);
    msg.setDestinationEntity(48U);
    msg.validity = 121U;
    msg.x = 0.34667583268845137;
    msg.y = 0.19544608336083036;
    msg.z = 0.15332029665336955;

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
    msg.setTimeStamp(0.7434781228042683);
    msg.setSource(10618U);
    msg.setSourceEntity(72U);
    msg.setDestination(53032U);
    msg.setDestinationEntity(80U);
    msg.validity = 248U;
    msg.x = 0.570783331640415;
    msg.y = 0.8693103362179425;
    msg.z = 0.8294715097022237;

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
    msg.setTimeStamp(0.6687118327381893);
    msg.setSource(62853U);
    msg.setSourceEntity(79U);
    msg.setDestination(22156U);
    msg.setDestinationEntity(152U);
    msg.validity = 228U;
    msg.x = 0.8349436862401268;
    msg.y = 0.7415994899589256;
    msg.z = 0.024924375535704923;

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
    msg.setTimeStamp(0.06647569041786272);
    msg.setSource(60345U);
    msg.setSourceEntity(212U);
    msg.setDestination(30359U);
    msg.setDestinationEntity(145U);
    msg.validity = 124U;
    msg.x = 0.8817834551764073;
    msg.y = 0.8392040249830671;
    msg.z = 0.3645166041900467;

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
    msg.setTimeStamp(0.05198893037878605);
    msg.setSource(8339U);
    msg.setSourceEntity(164U);
    msg.setDestination(45728U);
    msg.setDestinationEntity(177U);
    msg.validity = 192U;
    msg.x = 0.24370335866235382;
    msg.y = 0.7472827740924353;
    msg.z = 0.7848889333046492;

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
    msg.setTimeStamp(0.7485335966535274);
    msg.setSource(39695U);
    msg.setSourceEntity(31U);
    msg.setDestination(18399U);
    msg.setDestinationEntity(88U);
    msg.time = 0.05243100791607769;
    msg.x = 0.005688333059360895;
    msg.y = 0.7546068667816723;
    msg.z = 0.010968248952678228;

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
    msg.setTimeStamp(0.24709893951112172);
    msg.setSource(50891U);
    msg.setSourceEntity(126U);
    msg.setDestination(30946U);
    msg.setDestinationEntity(22U);
    msg.time = 0.6869519003924661;
    msg.x = 0.5464436940918539;
    msg.y = 0.8527395421748281;
    msg.z = 0.755536302239696;

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
    msg.setTimeStamp(0.28844292403771654);
    msg.setSource(22047U);
    msg.setSourceEntity(163U);
    msg.setDestination(61254U);
    msg.setDestinationEntity(213U);
    msg.time = 0.21166553114732667;
    msg.x = 0.4299364923172234;
    msg.y = 0.4770393243550217;
    msg.z = 0.4960194260836539;

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
    msg.setTimeStamp(0.3061267127166747);
    msg.setSource(40176U);
    msg.setSourceEntity(28U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(100U);
    msg.validity = 98U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5808697407698051;
    tmp_msg_0.y = 0.4880549507474601;
    tmp_msg_0.z = 0.6648492877027592;
    tmp_msg_0.phi = 0.19126499091064963;
    tmp_msg_0.theta = 0.7415287329534442;
    tmp_msg_0.psi = 0.5320632667358267;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5325558273281126;
    tmp_msg_1.beam_height = 0.33662760907059797;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.2213620371851922;

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
    msg.setTimeStamp(0.6556897557209858);
    msg.setSource(41086U);
    msg.setSourceEntity(7U);
    msg.setDestination(41289U);
    msg.setDestinationEntity(48U);
    msg.validity = 159U;
    msg.value = 0.6596657618927377;

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
    msg.setTimeStamp(0.08392265643502728);
    msg.setSource(1352U);
    msg.setSourceEntity(213U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(192U);
    msg.validity = 190U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9424131858894038;
    tmp_msg_0.beam_height = 0.9251218197578414;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.07102125899660072;

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
    msg.setTimeStamp(0.8902775466118819);
    msg.setSource(9158U);
    msg.setSourceEntity(59U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(109U);
    msg.value = 0.32146111568103697;

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
    msg.setTimeStamp(0.13707077966069925);
    msg.setSource(42499U);
    msg.setSourceEntity(6U);
    msg.setDestination(32495U);
    msg.setDestinationEntity(39U);
    msg.value = 0.862375770623303;

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
    msg.setTimeStamp(0.8343986789779321);
    msg.setSource(47874U);
    msg.setSourceEntity(142U);
    msg.setDestination(31684U);
    msg.setDestinationEntity(197U);
    msg.value = 0.11581273178840779;

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
    msg.setTimeStamp(0.4630853987958239);
    msg.setSource(45941U);
    msg.setSourceEntity(188U);
    msg.setDestination(40661U);
    msg.setDestinationEntity(75U);
    msg.value = 0.4406144897426669;

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
    msg.setTimeStamp(0.2208403357268972);
    msg.setSource(11580U);
    msg.setSourceEntity(179U);
    msg.setDestination(36096U);
    msg.setDestinationEntity(66U);
    msg.value = 0.28495283503322477;

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
    msg.setTimeStamp(0.20253343482624064);
    msg.setSource(49803U);
    msg.setSourceEntity(170U);
    msg.setDestination(3447U);
    msg.setDestinationEntity(25U);
    msg.value = 0.31269418487242107;

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
    msg.setTimeStamp(0.9274322085158963);
    msg.setSource(56539U);
    msg.setSourceEntity(121U);
    msg.setDestination(8249U);
    msg.setDestinationEntity(65U);
    msg.value = 0.45107144796864096;

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
    msg.setTimeStamp(0.0585115019320781);
    msg.setSource(9145U);
    msg.setSourceEntity(207U);
    msg.setDestination(8181U);
    msg.setDestinationEntity(169U);
    msg.value = 0.21092684317390387;

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
    msg.setTimeStamp(0.548213854809103);
    msg.setSource(56974U);
    msg.setSourceEntity(140U);
    msg.setDestination(23816U);
    msg.setDestinationEntity(219U);
    msg.value = 0.1363152072779793;

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
    msg.setTimeStamp(0.1677297150231516);
    msg.setSource(31120U);
    msg.setSourceEntity(248U);
    msg.setDestination(16458U);
    msg.setDestinationEntity(247U);
    msg.value = 0.7148869482462766;

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
    msg.setTimeStamp(0.5447652636960431);
    msg.setSource(48247U);
    msg.setSourceEntity(9U);
    msg.setDestination(35625U);
    msg.setDestinationEntity(72U);
    msg.value = 0.7520833705658585;

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
    msg.setTimeStamp(0.42063391555789875);
    msg.setSource(40509U);
    msg.setSourceEntity(136U);
    msg.setDestination(33064U);
    msg.setDestinationEntity(154U);
    msg.value = 0.3673505416670392;

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
    msg.setTimeStamp(0.6022156148777943);
    msg.setSource(24704U);
    msg.setSourceEntity(206U);
    msg.setDestination(8155U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9511903911803026;

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
    msg.setTimeStamp(0.0051966768669824415);
    msg.setSource(3330U);
    msg.setSourceEntity(116U);
    msg.setDestination(28890U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2741783426619431;

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
    msg.setTimeStamp(0.498763577297612);
    msg.setSource(24848U);
    msg.setSourceEntity(146U);
    msg.setDestination(40845U);
    msg.setDestinationEntity(174U);
    msg.value = 0.9306926013200232;

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
    msg.setTimeStamp(0.8859979143806908);
    msg.setSource(56416U);
    msg.setSourceEntity(81U);
    msg.setDestination(27763U);
    msg.setDestinationEntity(110U);
    msg.value = 0.30715805129866536;

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
    msg.setTimeStamp(0.8150484725838325);
    msg.setSource(33281U);
    msg.setSourceEntity(125U);
    msg.setDestination(5595U);
    msg.setDestinationEntity(12U);
    msg.value = 0.823992438923744;

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
    msg.setTimeStamp(0.6216110732557992);
    msg.setSource(58560U);
    msg.setSourceEntity(180U);
    msg.setDestination(4796U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5702704817391229;

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
    msg.setTimeStamp(0.9747307214629392);
    msg.setSource(24400U);
    msg.setSourceEntity(194U);
    msg.setDestination(30840U);
    msg.setDestinationEntity(130U);
    msg.value = 0.5710404601170462;

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
    msg.setTimeStamp(0.19267503560483368);
    msg.setSource(26723U);
    msg.setSourceEntity(62U);
    msg.setDestination(11150U);
    msg.setDestinationEntity(244U);
    msg.value = 0.17840593878288868;

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
    msg.setTimeStamp(0.36131048159529633);
    msg.setSource(37365U);
    msg.setSourceEntity(36U);
    msg.setDestination(33725U);
    msg.setDestinationEntity(249U);
    msg.value = 0.5264002394198716;

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
    msg.setTimeStamp(0.3216121645924541);
    msg.setSource(53414U);
    msg.setSourceEntity(227U);
    msg.setDestination(50944U);
    msg.setDestinationEntity(157U);
    msg.value = 0.3914415507954584;

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
    msg.setTimeStamp(0.31418262955562615);
    msg.setSource(21090U);
    msg.setSourceEntity(32U);
    msg.setDestination(40621U);
    msg.setDestinationEntity(156U);
    msg.value = 0.21461957888046734;

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
    msg.setTimeStamp(0.8230153907073474);
    msg.setSource(21081U);
    msg.setSourceEntity(200U);
    msg.setDestination(8525U);
    msg.setDestinationEntity(213U);
    msg.value = 0.2826174449485779;

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
    msg.setTimeStamp(0.9123786247937198);
    msg.setSource(44328U);
    msg.setSourceEntity(176U);
    msg.setDestination(15979U);
    msg.setDestinationEntity(55U);
    msg.direction = 0.28162837017730025;
    msg.speed = 0.4766974590410339;
    msg.turbulence = 0.5568650299327237;

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
    msg.setTimeStamp(0.2701361134116229);
    msg.setSource(63814U);
    msg.setSourceEntity(236U);
    msg.setDestination(46095U);
    msg.setDestinationEntity(10U);
    msg.direction = 0.529696710728146;
    msg.speed = 0.9409992301761485;
    msg.turbulence = 0.1796014778525581;

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
    msg.setTimeStamp(0.7501895295230429);
    msg.setSource(31569U);
    msg.setSourceEntity(216U);
    msg.setDestination(8348U);
    msg.setDestinationEntity(100U);
    msg.direction = 0.854323948553666;
    msg.speed = 0.17140510208443194;
    msg.turbulence = 0.5540522433068529;

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
    msg.setTimeStamp(0.7923322460884619);
    msg.setSource(40381U);
    msg.setSourceEntity(46U);
    msg.setDestination(8039U);
    msg.setDestinationEntity(30U);
    msg.value = 0.7421000727998913;

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
    msg.setTimeStamp(0.2479487744963047);
    msg.setSource(7616U);
    msg.setSourceEntity(35U);
    msg.setDestination(15329U);
    msg.setDestinationEntity(223U);
    msg.value = 0.6755128351159648;

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
    msg.setTimeStamp(0.6132040469782238);
    msg.setSource(60141U);
    msg.setSourceEntity(132U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(69U);
    msg.value = 0.970300138115225;

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
    msg.setTimeStamp(0.34179874066241445);
    msg.setSource(53036U);
    msg.setSourceEntity(244U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(235U);
    msg.value.assign("JJVHERWBHAZHDMHFALXIXGYEJBSBGZMVZHOFAATWMXDODQQOQMPOKHWCIAKYSLEPOJLOYXRVXXGDWDCNJELOGPTRWUBCSBSQTESUKRIRYUNTRCHZZMRTDQQJQPSSUPZHBSAESIOYKMI");

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
    msg.setTimeStamp(0.39564046959072685);
    msg.setSource(12125U);
    msg.setSourceEntity(77U);
    msg.setDestination(22594U);
    msg.setDestinationEntity(45U);
    msg.value.assign("TSCYYDTHZEAKKUITABHTFYHMLMZGUQVFPFTATIDIKSUXVNCZYINELRONTSZILXJOXITGWNQVCOYAOLHMJEBBVPQW");

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
    msg.setTimeStamp(0.13196629541239757);
    msg.setSource(64383U);
    msg.setSourceEntity(46U);
    msg.setDestination(15772U);
    msg.setDestinationEntity(70U);
    msg.value.assign("VGMJRCOSUPCFNAZGGINJSHRXQFPTTBFHODHVIMNJZFIUOMORENNAFIFZMDEEYEBFHCIWIQTPAJDVYRAZ");

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
    msg.setTimeStamp(0.8072007704193183);
    msg.setSource(62280U);
    msg.setSourceEntity(54U);
    msg.setDestination(61543U);
    msg.setDestinationEntity(61U);
    const char tmp_msg_0[] = {-77, 121, -114, 55, 0, -34, 100, 108, 122, 9, 37, 58, 72, -8, 92, -36, -54, 66, -85, -107, -8, -29, 45, 14, 92, -78, -89, 31, 106, -82, -69, -92, 45, 77, -78, -119, -114, -38, 58, 103, 60, 36, -109, 119, -6, -46, 34, 76, -65, -76, -87, 94, 107, -74, -104, 31, 37, 84, 109, 110, -48, -122, 26, 101, -117, -7, 31, -117, 96, 63, 10, 45, 42, 36, -64, -88, -56, -18, -16, -96, -122, 90, 57, 33, -28, 16, -91, -106, 38, 38, 101, -124, -39, -124, -7, 53, -75, -7, -79};
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
    msg.setTimeStamp(0.7092960188572169);
    msg.setSource(19125U);
    msg.setSourceEntity(16U);
    msg.setDestination(59341U);
    msg.setDestinationEntity(141U);
    const char tmp_msg_0[] = {-94, -107, 12, 56, -82, -121, -5, 64, -32, -45, 85, 118, 87, 71, 71, -79, -100, -47, -28, 126, -80, -89, -90, -106, -38, 79, -2, -26, 76, -9, 42, 34, -100, 52, -72, 17, -4, -57, 99, 7, -23, 100, -7, -92, 76, 19, -63, 38, -116, -42, 25, -3, -116, 36, -78, -123, 48, 30, 37, 121, 52, 105, -123, -104, 40, 67, -111, -116, 116, 111, 99, -74, 99, 17, -113, -86, -7, -43, 53, 52, 4, 5, 22, -32, 96, 0, -69, -1, 81, -27, -101, 60, -54, -44, 109, 18, 36, 42, -59, 102, 39, 124, 109, 58, -61, -106, -52, 35, -20, 14, 35, 69, -111};
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
    msg.setTimeStamp(0.6519080898966899);
    msg.setSource(51063U);
    msg.setSourceEntity(194U);
    msg.setDestination(183U);
    msg.setDestinationEntity(147U);
    const char tmp_msg_0[] = {92, 19, 70, 13, 117, 119, 58, -111, -125, -123, 34, 97, 88, -4, 117, -128, -16, -36, -63, -21, 82, -82, -99, 1, -67, 1, -30, 118, 72, -81, -107, 39, -40, -107, 92, 114, 87, -76, 119, 22, 61, 28, -59, -48, 51, 122, 43, -93, 102, 109, -19, -118, -59, 69, -117, 108, 115, -26, -105, 29, -29, -2, -104, -2, -62, -87, 9, 75, -112, 61, 19, -101, 22, 16, 44, 36, -21, 32, -11, -113, 6, 115, 30, -123, -55, 34, 75, -15, 59, 30, -48, 88, -68, -63, -86, -54, -17, -9, -51, -2, 17, 8, -59, -32, -59};
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
    msg.setTimeStamp(0.157276712515101);
    msg.setSource(35893U);
    msg.setSourceEntity(105U);
    msg.setDestination(31878U);
    msg.setDestinationEntity(126U);
    msg.value = 0.30467307064174454;

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
    msg.setTimeStamp(0.18502356367250106);
    msg.setSource(6195U);
    msg.setSourceEntity(17U);
    msg.setDestination(21803U);
    msg.setDestinationEntity(217U);
    msg.value = 0.9526458437637247;

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
    msg.setTimeStamp(0.5802769652065548);
    msg.setSource(12405U);
    msg.setSourceEntity(124U);
    msg.setDestination(41796U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5543052434176107;

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
    msg.setTimeStamp(0.8859216744465368);
    msg.setSource(6107U);
    msg.setSourceEntity(211U);
    msg.setDestination(63933U);
    msg.setDestinationEntity(152U);
    msg.type = 159U;
    msg.frequency = 2186374814U;
    msg.min_range = 13548U;
    msg.max_range = 27319U;
    msg.bits_per_point = 24U;
    msg.scale_factor = 0.1554247887202409;
    const char tmp_msg_0[] = {-65, 73, 5, 73, -21, 109, -52, -24, -10, 126, 123, -122, 96, -35, 68, 25, -3, -69, -1, -56, -82, 77, 78, 89, 112, -77, -103, -10, -5, 19, 30, -107, 73, -125, -37, 105, 45, -126, -16, -102, 57, 12, -43, 121, 100, -38};
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
    msg.setTimeStamp(0.0829730688784035);
    msg.setSource(58880U);
    msg.setSourceEntity(203U);
    msg.setDestination(627U);
    msg.setDestinationEntity(115U);
    msg.type = 72U;
    msg.frequency = 3959144962U;
    msg.min_range = 29628U;
    msg.max_range = 5779U;
    msg.bits_per_point = 252U;
    msg.scale_factor = 0.5586835338677315;
    const char tmp_msg_0[] = {101, -110, 66, 87, 43, 4, 103, -72, 120, -42, -25, -118, -20, 12, -38, 46, -97, -113, 86, 25, -52, 35, 111, -10, 72, 52, 120, 123, 27, 88, 76, -102, -110, -100, -83, -10, 89, -72, 85, 59, -50, 117, 21, 26, 24, -121, -9, 89, -6, -108, -8, 108, 101, 57, -75, -47, 88, 21, -14, -43, -9, 74, -40, -40, 86, 105, 110, -80, 49, -75, -9, -125, -75, 2, 98, -82, 87, 93, 110, 0, 102, -16, -106, -122, 95, 98, 101, -98, -25, 52, 76, -111, 43, -63, -8, -60, -22, 33, 16, 106, 125, 124, -117, 4, -101, 95, -31, 84, 1, 75, -15, -111, 120, 51, 26, 60, 1, 121, -43, 82, 18, 7, 48, -120, 36, -38, 112, -20, -84, -19, -89, -97, 125, -15, -102, -125, 19, 115, -120, 114, 77, -60, 26, -116, -68, -24, 30, 98, -68, 89, 45, 10, 48, -118, 61, 43, 68, 36};
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
    msg.setTimeStamp(0.7341211660301384);
    msg.setSource(4950U);
    msg.setSourceEntity(173U);
    msg.setDestination(7036U);
    msg.setDestinationEntity(25U);
    msg.type = 162U;
    msg.frequency = 874240847U;
    msg.min_range = 32068U;
    msg.max_range = 42612U;
    msg.bits_per_point = 122U;
    msg.scale_factor = 0.19362835715063975;
    const char tmp_msg_0[] = {-95, -80, 11, 89, -37, 12, -39, 88, -61, 60, -108, -29, -15, -117, -59, -124, -20, 107, -20, 18, -2, -116, 44, -30, 30, 60, -125, -95, 55, 27, -23, -84, -124, -121, -59, 19, -67, -7, -100, -89, -56, 100, 48, -82, 109, -39, -56, 77, 12, 104, 89, -12, 27, -116, -10, 121, 84, -38, 56, -91, -17, 111, -22, 88, 76, -17, -38, 119, -3, 110, -90, -48, 112, -111, 47, 23, 10, -9, -23, 30, -126, -39, -91, 22, -91, -38, -99, 39, 57, 55, 98, -73, -112, 51, -33, 12, -83, -2, -5, -46, 28, -12, -110, -5, 119, -37, -13, 49, 43, -10, 60, -17, 62, 23, -55, -105, -21, 86, 32, 0, 101, 91, 45, 58, -90, -31, 39, 81, 90, -11, -126, -120, 57, -58, 92, 87, -43, -86, -10, -44, -24, 46, 101, 32, 62, -55, -10, 104, -4, -29, -26, 54, 32, -123, 30, 86, -118, -106, 89, 27, -9, 29, 112, 87, 75, 49, -39, -35, -24, -66, -39, -8, 104, -124, 4, 11, 27, 44, 98, -77, 32, 88, 94, -44, -65, 4, -54, 40, 122, -25, -29, 114, 18, -11, 35, -91, -26, -120, -102, -14, -97, 43, 78, -72, -15, -94, -50, -24, 60, 0, -20, 88, 49, -43, 38, -88, -91, -72, -48, -115, 90, -50, 31, 115, -58};
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
    msg.setTimeStamp(0.4077778558741334);
    msg.setSource(7501U);
    msg.setSourceEntity(141U);
    msg.setDestination(20514U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.33938469757670786);
    msg.setSource(23481U);
    msg.setSourceEntity(157U);
    msg.setDestination(16300U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.14160040020742626);
    msg.setSource(63117U);
    msg.setSourceEntity(150U);
    msg.setDestination(43304U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.7318716815159386);
    msg.setSource(44577U);
    msg.setSourceEntity(55U);
    msg.setDestination(49910U);
    msg.setDestinationEntity(135U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.9942151148181155);
    msg.setSource(4407U);
    msg.setSourceEntity(5U);
    msg.setDestination(39199U);
    msg.setDestinationEntity(128U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.5371110719621136);
    msg.setSource(21093U);
    msg.setSourceEntity(27U);
    msg.setDestination(33607U);
    msg.setDestinationEntity(251U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.9231011322056051);
    msg.setSource(15846U);
    msg.setSourceEntity(235U);
    msg.setDestination(5121U);
    msg.setDestinationEntity(29U);
    msg.value = 0.8192451650597677;
    msg.confidence = 0.3428650182442752;
    msg.opmodes.assign("RBOWEYYZJDCCXHIOGMYBOZCJOXRFFQETHJAWNEAKGMVCEUHXBIPUEZSPJQDDTKXEYLYLZRISRSLIW");

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
    msg.setTimeStamp(0.6951869415413924);
    msg.setSource(25739U);
    msg.setSourceEntity(98U);
    msg.setDestination(59401U);
    msg.setDestinationEntity(235U);
    msg.value = 0.510309619138963;
    msg.confidence = 0.9274983370128422;
    msg.opmodes.assign("TATAIYECHWYOHMZJLJCVTUPJZUI");

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
    msg.setTimeStamp(0.865624279773259);
    msg.setSource(13442U);
    msg.setSourceEntity(175U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8246134451560689;
    msg.confidence = 0.927420270107685;
    msg.opmodes.assign("UYPQTCVXMOXJCXETBEEQVZKTOMWBRUTLYTXAQTJGOLDHGYGRAZZKVSBWFGFUOGCRVLUSYIIXSAIXQNEBENPTQWMZDLHWSFOGQBYFUFLPPHCJSAOJJMFZUDQNSPPHAKHGKDYRAPAIWKXSVFYCKZMATGVZOPWCTAJRSDZUWSNXHENVCOZXIQNF");

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
    msg.setTimeStamp(0.406940717309507);
    msg.setSource(65472U);
    msg.setSourceEntity(77U);
    msg.setDestination(40844U);
    msg.setDestinationEntity(123U);
    msg.itow = 1509808413U;
    msg.lat = 0.2064213581085591;
    msg.lon = 0.732899941970006;
    msg.height_ell = 0.6831474949997522;
    msg.height_sea = 0.6631616549256811;
    msg.hacc = 0.6779891093799344;
    msg.vacc = 0.9876066449109502;
    msg.vel_n = 0.4450396015774697;
    msg.vel_e = 0.7437669438192269;
    msg.vel_d = 0.9963297062500145;
    msg.speed = 0.7633236392187418;
    msg.gspeed = 0.9862486092453345;
    msg.heading = 0.6286511393007749;
    msg.sacc = 0.20105745737557756;
    msg.cacc = 0.4476663563992347;

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
    msg.setTimeStamp(0.07723499836790226);
    msg.setSource(9885U);
    msg.setSourceEntity(115U);
    msg.setDestination(9481U);
    msg.setDestinationEntity(80U);
    msg.itow = 1639442923U;
    msg.lat = 0.3088430879725047;
    msg.lon = 0.3256147086857296;
    msg.height_ell = 0.9405683233180826;
    msg.height_sea = 0.149969559123037;
    msg.hacc = 0.03457577542405377;
    msg.vacc = 0.4410635453588957;
    msg.vel_n = 0.20113291313774506;
    msg.vel_e = 0.27908202884223166;
    msg.vel_d = 0.840963295798648;
    msg.speed = 0.8126158326613784;
    msg.gspeed = 0.5049882562313471;
    msg.heading = 0.4277570902100172;
    msg.sacc = 0.07359207745238239;
    msg.cacc = 0.39907873892953283;

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
    msg.setTimeStamp(0.6679174012715053);
    msg.setSource(3174U);
    msg.setSourceEntity(235U);
    msg.setDestination(20577U);
    msg.setDestinationEntity(222U);
    msg.itow = 3508736483U;
    msg.lat = 0.4188648138630984;
    msg.lon = 0.7310794753373516;
    msg.height_ell = 0.7596827625305699;
    msg.height_sea = 0.3417405305662239;
    msg.hacc = 0.6200323429786913;
    msg.vacc = 0.7031549771780512;
    msg.vel_n = 0.9530805538966908;
    msg.vel_e = 0.5653240287116058;
    msg.vel_d = 0.8923949174973906;
    msg.speed = 0.04962505677014728;
    msg.gspeed = 0.5274011333459093;
    msg.heading = 0.0539697181311547;
    msg.sacc = 0.04976271681969624;
    msg.cacc = 0.9873387744009626;

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
    msg.setTimeStamp(0.5724152526788409);
    msg.setSource(33593U);
    msg.setSourceEntity(84U);
    msg.setDestination(17974U);
    msg.setDestinationEntity(88U);
    msg.id = 133U;
    msg.value = 0.7911170036041486;

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
    msg.setTimeStamp(0.4315184502221239);
    msg.setSource(35310U);
    msg.setSourceEntity(186U);
    msg.setDestination(64189U);
    msg.setDestinationEntity(28U);
    msg.id = 7U;
    msg.value = 0.37962738149359054;

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
    msg.setTimeStamp(0.5122734018498497);
    msg.setSource(62663U);
    msg.setSourceEntity(121U);
    msg.setDestination(28413U);
    msg.setDestinationEntity(184U);
    msg.id = 248U;
    msg.value = 0.07625023025703503;

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
    msg.setTimeStamp(0.642898703074042);
    msg.setSource(63542U);
    msg.setSourceEntity(157U);
    msg.setDestination(11552U);
    msg.setDestinationEntity(180U);
    msg.x = 0.3953644271250141;
    msg.y = 0.337094935761986;
    msg.z = 0.48443010772705586;
    msg.phi = 0.7732481380194062;
    msg.theta = 0.8630436668596919;
    msg.psi = 0.6632532212808744;

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
    msg.setTimeStamp(0.92468955499498);
    msg.setSource(42258U);
    msg.setSourceEntity(218U);
    msg.setDestination(44162U);
    msg.setDestinationEntity(115U);
    msg.x = 0.8177014104181819;
    msg.y = 0.1418386757302862;
    msg.z = 0.4429599417378356;
    msg.phi = 0.10771569702003125;
    msg.theta = 0.161147887353285;
    msg.psi = 0.7285984508813769;

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
    msg.setTimeStamp(0.72515537428785);
    msg.setSource(4023U);
    msg.setSourceEntity(75U);
    msg.setDestination(39015U);
    msg.setDestinationEntity(88U);
    msg.x = 0.6123966671638874;
    msg.y = 0.6614626488875412;
    msg.z = 0.6214106239014999;
    msg.phi = 0.18695467670738886;
    msg.theta = 0.41975079705741747;
    msg.psi = 0.8826226850098772;

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
    msg.setTimeStamp(0.04604365693927759);
    msg.setSource(58336U);
    msg.setSourceEntity(58U);
    msg.setDestination(22815U);
    msg.setDestinationEntity(111U);
    msg.beam_width = 0.7546010196121582;
    msg.beam_height = 0.6034897554011879;

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
    msg.setTimeStamp(0.5220265964743354);
    msg.setSource(62055U);
    msg.setSourceEntity(14U);
    msg.setDestination(6776U);
    msg.setDestinationEntity(219U);
    msg.beam_width = 0.2036869586441129;
    msg.beam_height = 0.8124893859157453;

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
    msg.setTimeStamp(0.28155340420023334);
    msg.setSource(26373U);
    msg.setSourceEntity(201U);
    msg.setDestination(49735U);
    msg.setDestinationEntity(30U);
    msg.beam_width = 0.07802848691716169;
    msg.beam_height = 0.014590351677258528;

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
    msg.setTimeStamp(0.8479260937815424);
    msg.setSource(56185U);
    msg.setSourceEntity(3U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(235U);
    msg.sane = 120U;

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
    msg.setTimeStamp(0.11008763686682199);
    msg.setSource(36970U);
    msg.setSourceEntity(245U);
    msg.setDestination(8520U);
    msg.setDestinationEntity(163U);
    msg.sane = 141U;

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
    msg.setTimeStamp(0.8724421139538737);
    msg.setSource(4191U);
    msg.setSourceEntity(231U);
    msg.setDestination(56402U);
    msg.setDestinationEntity(130U);
    msg.sane = 125U;

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
    msg.setTimeStamp(0.25846922289465246);
    msg.setSource(46665U);
    msg.setSourceEntity(161U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(153U);
    msg.value = 0.1734536804385376;

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
    msg.setTimeStamp(0.8611601301413123);
    msg.setSource(63556U);
    msg.setSourceEntity(47U);
    msg.setDestination(38758U);
    msg.setDestinationEntity(178U);
    msg.value = 0.19224793093504255;

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
    msg.setTimeStamp(0.3064044722970478);
    msg.setSource(17050U);
    msg.setSourceEntity(161U);
    msg.setDestination(19852U);
    msg.setDestinationEntity(162U);
    msg.value = 0.1303743134952544;

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
    msg.setTimeStamp(0.7903345377408562);
    msg.setSource(52814U);
    msg.setSourceEntity(234U);
    msg.setDestination(49185U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9876798731977339;

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
    msg.setTimeStamp(0.25419799912941554);
    msg.setSource(64559U);
    msg.setSourceEntity(171U);
    msg.setDestination(12565U);
    msg.setDestinationEntity(19U);
    msg.value = 0.13523513776629936;

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
    msg.setTimeStamp(0.09727524019727762);
    msg.setSource(29894U);
    msg.setSourceEntity(75U);
    msg.setDestination(58001U);
    msg.setDestinationEntity(157U);
    msg.value = 0.23961452594170618;

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
    msg.setTimeStamp(0.02933238250719361);
    msg.setSource(24189U);
    msg.setSourceEntity(211U);
    msg.setDestination(51676U);
    msg.setDestinationEntity(224U);
    msg.value = 0.8194840856115827;

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
    msg.setTimeStamp(0.5912462830567708);
    msg.setSource(52213U);
    msg.setSourceEntity(21U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(172U);
    msg.value = 0.07571385510308937;

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
    msg.setTimeStamp(0.25844132882023807);
    msg.setSource(51135U);
    msg.setSourceEntity(218U);
    msg.setDestination(36808U);
    msg.setDestinationEntity(84U);
    msg.value = 0.5517002234603522;

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
    msg.setTimeStamp(0.3591514451785045);
    msg.setSource(61586U);
    msg.setSourceEntity(214U);
    msg.setDestination(53210U);
    msg.setDestinationEntity(188U);
    msg.value = 0.557676970281899;

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
    msg.setTimeStamp(0.182506713894528);
    msg.setSource(45172U);
    msg.setSourceEntity(82U);
    msg.setDestination(16214U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8179075123591477;

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
    msg.setTimeStamp(0.8274320403917377);
    msg.setSource(45291U);
    msg.setSourceEntity(48U);
    msg.setDestination(25041U);
    msg.setDestinationEntity(217U);
    msg.value = 0.4515260397848778;

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
    msg.setTimeStamp(0.040495927719353064);
    msg.setSource(61424U);
    msg.setSourceEntity(6U);
    msg.setDestination(46522U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5241255796316376;

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
    msg.setTimeStamp(0.6766800469775234);
    msg.setSource(7820U);
    msg.setSourceEntity(23U);
    msg.setDestination(31U);
    msg.setDestinationEntity(28U);
    msg.value = 0.822912704559043;

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
    msg.setTimeStamp(0.46658099956033827);
    msg.setSource(62739U);
    msg.setSourceEntity(14U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6983324873386512;

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
    msg.setTimeStamp(0.9872672061866926);
    msg.setSource(2541U);
    msg.setSourceEntity(228U);
    msg.setDestination(37406U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5684649292657136;

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
    msg.setTimeStamp(0.649396648816628);
    msg.setSource(62455U);
    msg.setSourceEntity(38U);
    msg.setDestination(48414U);
    msg.setDestinationEntity(241U);
    msg.value = 0.47914861822566723;

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
    msg.setTimeStamp(0.08326556039971322);
    msg.setSource(16168U);
    msg.setSourceEntity(254U);
    msg.setDestination(2063U);
    msg.setDestinationEntity(254U);
    msg.value = 0.38652902354685326;

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
    msg.setTimeStamp(0.08735352568774712);
    msg.setSource(16873U);
    msg.setSourceEntity(102U);
    msg.setDestination(22956U);
    msg.setDestinationEntity(56U);
    msg.value = 0.20498477920496905;

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
    msg.setTimeStamp(0.28528604363997034);
    msg.setSource(18470U);
    msg.setSourceEntity(119U);
    msg.setDestination(38405U);
    msg.setDestinationEntity(138U);
    msg.value = 0.9203489517582489;

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
    msg.setTimeStamp(0.5572928338971708);
    msg.setSource(36726U);
    msg.setSourceEntity(20U);
    msg.setDestination(14061U);
    msg.setDestinationEntity(208U);
    msg.value = 0.2646585229551234;

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
    msg.setTimeStamp(0.3739138012205123);
    msg.setSource(45487U);
    msg.setSourceEntity(0U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(41U);
    msg.value = 0.27365452471778073;

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
    msg.setTimeStamp(0.7126322304486923);
    msg.setSource(9810U);
    msg.setSourceEntity(151U);
    msg.setDestination(35103U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0343625727885819;

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
    msg.setTimeStamp(0.7014142451751579);
    msg.setSource(38417U);
    msg.setSourceEntity(93U);
    msg.setDestination(1243U);
    msg.setDestinationEntity(139U);
    msg.value = 0.08545112066163474;

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
    msg.setTimeStamp(0.9075436943524404);
    msg.setSource(61805U);
    msg.setSourceEntity(242U);
    msg.setDestination(27805U);
    msg.setDestinationEntity(214U);
    msg.validity = 65480U;
    msg.type = 245U;
    msg.tow = 3791120120U;
    msg.base_lat = 0.969264575223173;
    msg.base_lon = 0.6343943505083696;
    msg.base_height = 0.09157563177798067;
    msg.n = 0.8464531664630025;
    msg.e = 0.6143042544800585;
    msg.d = 0.5172626466920451;
    msg.v_n = 0.0859757926157888;
    msg.v_e = 0.7147154221965626;
    msg.v_d = 0.6629023915546159;
    msg.satellites = 176U;
    msg.iar_hyp = 35227U;
    msg.iar_ratio = 0.2343621457280164;

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
    msg.setTimeStamp(0.6316441819015394);
    msg.setSource(31942U);
    msg.setSourceEntity(41U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(42U);
    msg.validity = 61919U;
    msg.type = 125U;
    msg.tow = 2612768138U;
    msg.base_lat = 0.7452137240949149;
    msg.base_lon = 0.5709099563542532;
    msg.base_height = 0.7772161888889552;
    msg.n = 0.6493222155735805;
    msg.e = 0.5934317373296464;
    msg.d = 0.995457051913952;
    msg.v_n = 0.8729020617354528;
    msg.v_e = 0.6295213662066339;
    msg.v_d = 0.6076692923130973;
    msg.satellites = 244U;
    msg.iar_hyp = 45238U;
    msg.iar_ratio = 0.046131246594906306;

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
    msg.setTimeStamp(0.7407419293121476);
    msg.setSource(53020U);
    msg.setSourceEntity(181U);
    msg.setDestination(50140U);
    msg.setDestinationEntity(179U);
    msg.validity = 36313U;
    msg.type = 101U;
    msg.tow = 228956947U;
    msg.base_lat = 0.051851783750800906;
    msg.base_lon = 0.22590516599537325;
    msg.base_height = 0.8602594812251187;
    msg.n = 0.3728511556052936;
    msg.e = 0.9543803886123463;
    msg.d = 0.7947607253745805;
    msg.v_n = 0.40918811895212726;
    msg.v_e = 0.22368215404503844;
    msg.v_d = 0.7512494827734978;
    msg.satellites = 211U;
    msg.iar_hyp = 47173U;
    msg.iar_ratio = 0.4464104570258923;

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
    msg.setTimeStamp(0.4745281156481841);
    msg.setSource(1984U);
    msg.setSourceEntity(42U);
    msg.setDestination(57528U);
    msg.setDestinationEntity(214U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3324507705639924;
    tmp_msg_0.lon = 0.7390790940943843;
    tmp_msg_0.height = 0.38339932353537953;
    tmp_msg_0.x = 0.5279620242018112;
    tmp_msg_0.y = 0.04261162329983159;
    tmp_msg_0.z = 0.8888962577431393;
    tmp_msg_0.phi = 0.6242767274428175;
    tmp_msg_0.theta = 0.15531861034125494;
    tmp_msg_0.psi = 0.8070439359265277;
    tmp_msg_0.u = 0.4477725985293082;
    tmp_msg_0.v = 0.06169178020051269;
    tmp_msg_0.w = 0.4958530348784377;
    tmp_msg_0.vx = 0.5774381369240417;
    tmp_msg_0.vy = 0.9402121422257084;
    tmp_msg_0.vz = 0.731355423419346;
    tmp_msg_0.p = 0.39028003159608426;
    tmp_msg_0.q = 0.7394017170660581;
    tmp_msg_0.r = 0.44994882913611345;
    tmp_msg_0.depth = 0.6113344212752335;
    tmp_msg_0.alt = 0.41294677767140087;
    msg.state.set(tmp_msg_0);
    msg.type = 177U;

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
    msg.setTimeStamp(0.008647022138479676);
    msg.setSource(44369U);
    msg.setSourceEntity(39U);
    msg.setDestination(15897U);
    msg.setDestinationEntity(245U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.07941679080474273;
    tmp_msg_0.lon = 0.43078851407049434;
    tmp_msg_0.height = 0.1975148590368878;
    tmp_msg_0.x = 0.3804791336872875;
    tmp_msg_0.y = 0.16207786713369465;
    tmp_msg_0.z = 0.49571931126747704;
    tmp_msg_0.phi = 0.9120170880955731;
    tmp_msg_0.theta = 0.1370481174485667;
    tmp_msg_0.psi = 0.6843076770019749;
    tmp_msg_0.u = 0.5815665989835275;
    tmp_msg_0.v = 0.8997584880232329;
    tmp_msg_0.w = 0.414109383714643;
    tmp_msg_0.vx = 0.9273296889353466;
    tmp_msg_0.vy = 0.8511063840240951;
    tmp_msg_0.vz = 0.9058169653641733;
    tmp_msg_0.p = 0.968917253326549;
    tmp_msg_0.q = 0.6771054083869713;
    tmp_msg_0.r = 0.44672291423046784;
    tmp_msg_0.depth = 0.9309700903204486;
    tmp_msg_0.alt = 0.9553382041876208;
    msg.state.set(tmp_msg_0);
    msg.type = 156U;

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
    msg.setTimeStamp(0.8521807277500337);
    msg.setSource(4802U);
    msg.setSourceEntity(46U);
    msg.setDestination(60677U);
    msg.setDestinationEntity(92U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.10471694985990387;
    tmp_msg_0.lon = 0.5770940409559799;
    tmp_msg_0.height = 0.25218555203222603;
    tmp_msg_0.x = 0.18486033231230958;
    tmp_msg_0.y = 0.9652038598719932;
    tmp_msg_0.z = 0.6549455215858757;
    tmp_msg_0.phi = 0.5579745788747685;
    tmp_msg_0.theta = 0.8330930221000252;
    tmp_msg_0.psi = 0.4611329745147068;
    tmp_msg_0.u = 0.9265927848256182;
    tmp_msg_0.v = 0.4801802501194484;
    tmp_msg_0.w = 0.403663121001437;
    tmp_msg_0.vx = 0.46717440997722093;
    tmp_msg_0.vy = 0.4452458464326109;
    tmp_msg_0.vz = 0.6974495963014942;
    tmp_msg_0.p = 0.3280271341544482;
    tmp_msg_0.q = 0.5029835519635101;
    tmp_msg_0.r = 0.0018703067576861798;
    tmp_msg_0.depth = 0.12437129260674151;
    tmp_msg_0.alt = 0.035342234681329354;
    msg.state.set(tmp_msg_0);
    msg.type = 162U;

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
    msg.setTimeStamp(0.4809382852206282);
    msg.setSource(33216U);
    msg.setSourceEntity(222U);
    msg.setDestination(56292U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9072565681196578;

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
    msg.setTimeStamp(0.689919591565554);
    msg.setSource(26637U);
    msg.setSourceEntity(250U);
    msg.setDestination(50021U);
    msg.setDestinationEntity(95U);
    msg.value = 0.06608696222070254;

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
    msg.setTimeStamp(0.24183767408733547);
    msg.setSource(54780U);
    msg.setSourceEntity(137U);
    msg.setDestination(54442U);
    msg.setDestinationEntity(92U);
    msg.value = 0.1904889630464961;

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
    msg.setTimeStamp(0.06247024685641489);
    msg.setSource(41399U);
    msg.setSourceEntity(187U);
    msg.setDestination(27517U);
    msg.setDestinationEntity(200U);
    msg.value = 0.09036134665425455;

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
    msg.setTimeStamp(0.4117438981313647);
    msg.setSource(65370U);
    msg.setSourceEntity(186U);
    msg.setDestination(51812U);
    msg.setDestinationEntity(161U);
    msg.value = 0.04432252549033344;

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
    msg.setTimeStamp(0.9401704189807972);
    msg.setSource(26359U);
    msg.setSourceEntity(223U);
    msg.setDestination(43084U);
    msg.setDestinationEntity(147U);
    msg.value = 0.3396467722682296;

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
    msg.setTimeStamp(0.6580993812000657);
    msg.setSource(12544U);
    msg.setSourceEntity(40U);
    msg.setDestination(21097U);
    msg.setDestinationEntity(31U);
    msg.value = 0.11901608086754645;

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
    msg.setTimeStamp(0.9702614066937637);
    msg.setSource(23655U);
    msg.setSourceEntity(41U);
    msg.setDestination(11228U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5168014048943208;

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
    msg.setTimeStamp(0.6083378928977091);
    msg.setSource(49347U);
    msg.setSourceEntity(96U);
    msg.setDestination(28775U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8645018991734679;

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
    msg.setTimeStamp(0.24902983937614753);
    msg.setSource(48471U);
    msg.setSourceEntity(79U);
    msg.setDestination(34116U);
    msg.setDestinationEntity(166U);
    msg.value = 0.4143770639456519;

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
    msg.setTimeStamp(0.8246248664150012);
    msg.setSource(53684U);
    msg.setSourceEntity(241U);
    msg.setDestination(48950U);
    msg.setDestinationEntity(238U);
    msg.value = 0.320946012075052;

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
    msg.setTimeStamp(0.5123839761005212);
    msg.setSource(36695U);
    msg.setSourceEntity(249U);
    msg.setDestination(4934U);
    msg.setDestinationEntity(45U);
    msg.value = 0.7950015416048408;

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
    msg.setTimeStamp(0.8128955428188672);
    msg.setSource(34885U);
    msg.setSourceEntity(201U);
    msg.setDestination(12415U);
    msg.setDestinationEntity(136U);
    msg.value = 0.5555726528471355;

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
    msg.setTimeStamp(0.03528175740860706);
    msg.setSource(55032U);
    msg.setSourceEntity(168U);
    msg.setDestination(17832U);
    msg.setDestinationEntity(210U);
    msg.value = 0.9167625906280862;

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
    msg.setTimeStamp(0.2896270433407362);
    msg.setSource(48105U);
    msg.setSourceEntity(135U);
    msg.setDestination(21512U);
    msg.setDestinationEntity(17U);
    msg.value = 0.39995627788101296;

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
    msg.setTimeStamp(0.5720696632700034);
    msg.setSource(33490U);
    msg.setSourceEntity(249U);
    msg.setDestination(54318U);
    msg.setDestinationEntity(251U);
    msg.id = 105U;
    msg.zoom = 124U;
    msg.action = 25U;

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
    msg.setTimeStamp(0.052428689683885255);
    msg.setSource(23400U);
    msg.setSourceEntity(231U);
    msg.setDestination(23481U);
    msg.setDestinationEntity(213U);
    msg.id = 2U;
    msg.zoom = 75U;
    msg.action = 213U;

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
    msg.setTimeStamp(0.8958869134141303);
    msg.setSource(26150U);
    msg.setSourceEntity(39U);
    msg.setDestination(7914U);
    msg.setDestinationEntity(64U);
    msg.id = 70U;
    msg.zoom = 187U;
    msg.action = 249U;

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
    msg.setTimeStamp(0.37642771903798955);
    msg.setSource(20374U);
    msg.setSourceEntity(186U);
    msg.setDestination(23060U);
    msg.setDestinationEntity(56U);
    msg.id = 122U;
    msg.value = 0.96814233419137;

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
    msg.setTimeStamp(0.1707327375940756);
    msg.setSource(60501U);
    msg.setSourceEntity(252U);
    msg.setDestination(13768U);
    msg.setDestinationEntity(123U);
    msg.id = 198U;
    msg.value = 0.5458508508712284;

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
    msg.setTimeStamp(0.4560919449352261);
    msg.setSource(62399U);
    msg.setSourceEntity(63U);
    msg.setDestination(38572U);
    msg.setDestinationEntity(85U);
    msg.id = 7U;
    msg.value = 0.1992872254821546;

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
    msg.setTimeStamp(0.2671433853654933);
    msg.setSource(41379U);
    msg.setSourceEntity(215U);
    msg.setDestination(1210U);
    msg.setDestinationEntity(65U);
    msg.id = 217U;
    msg.value = 0.2688339237965456;

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
    msg.setTimeStamp(0.16778023561849198);
    msg.setSource(33679U);
    msg.setSourceEntity(34U);
    msg.setDestination(30857U);
    msg.setDestinationEntity(156U);
    msg.id = 137U;
    msg.value = 0.7550020019479595;

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
    msg.setTimeStamp(0.04310878269241658);
    msg.setSource(44674U);
    msg.setSourceEntity(161U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(103U);
    msg.id = 240U;
    msg.value = 0.4837954515136109;

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
    msg.setTimeStamp(0.7948288317336919);
    msg.setSource(23089U);
    msg.setSourceEntity(56U);
    msg.setDestination(56425U);
    msg.setDestinationEntity(144U);
    msg.id = 22U;
    msg.angle = 0.9941909753782827;

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
    msg.setTimeStamp(0.8415978855985049);
    msg.setSource(6360U);
    msg.setSourceEntity(193U);
    msg.setDestination(51186U);
    msg.setDestinationEntity(194U);
    msg.id = 198U;
    msg.angle = 0.19413379351582627;

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
    msg.setTimeStamp(0.7273448983017647);
    msg.setSource(12259U);
    msg.setSourceEntity(78U);
    msg.setDestination(41045U);
    msg.setDestinationEntity(211U);
    msg.id = 248U;
    msg.angle = 0.7216591570559354;

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
    msg.setTimeStamp(0.7263907889070371);
    msg.setSource(42693U);
    msg.setSourceEntity(229U);
    msg.setDestination(15050U);
    msg.setDestinationEntity(13U);
    msg.op = 54U;
    msg.actions.assign("VNTZUMGJXHTWDYGOMKRAKQVQSSUDAQCWIKLOYNNFHZJDVQELZXOOCGJTBIWEVTEVBEUOGRNHPCDWXAHIMNRLYHYGYPHMEIFRPXVFMYQZUXNANLRLHOCKQEIAQPJIUFTOCDKVAEOOCOSTSMYAZYQJFYCRJMRMHYFZIWBDNHGXQFSBQSLLXTUTLFVAHVSBRNUPRFCDBEJEBPMFVZMTPPJRDACXBGLKWWDIJJDBKXIBGWWZKUKLG");

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
    msg.setTimeStamp(0.8490142436648075);
    msg.setSource(10547U);
    msg.setSourceEntity(90U);
    msg.setDestination(53409U);
    msg.setDestinationEntity(59U);
    msg.op = 167U;
    msg.actions.assign("SDQQHIXNNWUUMJTACBEGKCXCDVCKKAQFILONVUZZAFUUUKTCI");

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
    msg.setTimeStamp(0.9273614411789897);
    msg.setSource(62476U);
    msg.setSourceEntity(220U);
    msg.setDestination(5360U);
    msg.setDestinationEntity(244U);
    msg.op = 161U;
    msg.actions.assign("OBYIZTDCTLXJXDUPHTTTTKRFRAWPCGQTDBJFTGJBPAZHOFLMKUNMUXEVWSVQPECQGOOVFXSLKNWOFVHYFNLRBYSQLEKMUPTHWIQQNASBEYPMZSAZQHMEWQRYAZALUWNCSEOSCODRRNLJCZBKG");

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
    msg.setTimeStamp(0.21758490390590568);
    msg.setSource(20635U);
    msg.setSourceEntity(110U);
    msg.setDestination(63928U);
    msg.setDestinationEntity(127U);
    msg.actions.assign("FPLBFBZOHMTDQTRAFOHOYMYEACTHSSRHULCZVHNTLYKBWDDDAWWLPRDFZFVKRTUSUSNBYYDXWUDZV");

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
    msg.setTimeStamp(0.8219888683853062);
    msg.setSource(14146U);
    msg.setSourceEntity(229U);
    msg.setDestination(7225U);
    msg.setDestinationEntity(202U);
    msg.actions.assign("CGWYFZAHXRJBKJSYAFLYNBHQDXVQLYPJEIYXTEDBE");

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
    msg.setTimeStamp(0.8654223390551357);
    msg.setSource(47274U);
    msg.setSourceEntity(166U);
    msg.setDestination(47384U);
    msg.setDestinationEntity(230U);
    msg.actions.assign("VVOVLBUKBXLEXODAEONMPWXOMCAKMJIEQOOWMPNGXRFCSKKDNFLUCQQSUGQZNLFWYHCFJQAWBNYFETVPINXZWCWIIHAYTMEQZGHAIKEMRLXEZYPOZKJMRQLHYIWURPJCVZHGVWDRTKNDHQDJXZSYSRUTSPHTCGDNNRZUFDCTDSVIGLKZJGOLSPZFGWFMQUEVDVJ");

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
    msg.setTimeStamp(0.0705781545377887);
    msg.setSource(1661U);
    msg.setSourceEntity(155U);
    msg.setDestination(27993U);
    msg.setDestinationEntity(86U);
    msg.button = 187U;
    msg.value = 181U;

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
    msg.setTimeStamp(0.9891131339588963);
    msg.setSource(24677U);
    msg.setSourceEntity(153U);
    msg.setDestination(56171U);
    msg.setDestinationEntity(249U);
    msg.button = 242U;
    msg.value = 73U;

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
    msg.setTimeStamp(0.6134775485260647);
    msg.setSource(40846U);
    msg.setSourceEntity(231U);
    msg.setDestination(52421U);
    msg.setDestinationEntity(2U);
    msg.button = 198U;
    msg.value = 220U;

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
    msg.setTimeStamp(0.7171170808075596);
    msg.setSource(3582U);
    msg.setSourceEntity(70U);
    msg.setDestination(13078U);
    msg.setDestinationEntity(53U);
    msg.op = 167U;
    msg.text.assign("CLZXGWQIFRDLATFTJYHMDUMAWCPXSEMKUNWMOTCQKYDGUVOVDBNYZKOZKPSTZXRPDFTXOGHNJKRDQJOAFHBBMNAUXVXTGSTPXJMEQQYQBVOBFIKAANTEPWDGPEFBAGYUWETSRDEOPHLFHWYVJXIEZWSHOUYFZCXPKCAFGIGDKHCGMZNSZUQPBHOVXTRIBKQUHJLYIRSRCWPEJZCINRUBDIVCLLOVJFELRMLJVNSIQLYKAIEVWBGJZRLSUAH");

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
    msg.setTimeStamp(0.5740344969222492);
    msg.setSource(1047U);
    msg.setSourceEntity(80U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(159U);
    msg.op = 111U;
    msg.text.assign("FQPKZVZHJAWJJEBBAFIKGVRULRLWZADYGLATIAPUNWZNBIAKWHELTSMFVETYAXTWDBXGOAXXXXUPCJBNPPYNNZJCHFBPOJNEVBEIRESSXOOEEQWMPWZGKXSYOWTYMOSJZFV");

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
    msg.setTimeStamp(0.03953270845717305);
    msg.setSource(13427U);
    msg.setSourceEntity(197U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(212U);
    msg.op = 164U;
    msg.text.assign("FEALVZKGSWGKZGIEGMJZSKZRXZJHKY");

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
    msg.setTimeStamp(0.20655158864460754);
    msg.setSource(16082U);
    msg.setSourceEntity(22U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(82U);
    msg.op = 148U;
    msg.time_remain = 0.8071393988822244;
    msg.sched_time = 0.8891830365889655;

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
    msg.setTimeStamp(0.6365632570617825);
    msg.setSource(6252U);
    msg.setSourceEntity(253U);
    msg.setDestination(50817U);
    msg.setDestinationEntity(198U);
    msg.op = 150U;
    msg.time_remain = 0.3783583976954883;
    msg.sched_time = 0.6360793575017085;

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
    msg.setTimeStamp(0.9640221990826818);
    msg.setSource(12025U);
    msg.setSourceEntity(18U);
    msg.setDestination(16891U);
    msg.setDestinationEntity(200U);
    msg.op = 100U;
    msg.time_remain = 0.7549672854510678;
    msg.sched_time = 0.6951226730259193;

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
    msg.setTimeStamp(0.3576024388737997);
    msg.setSource(11465U);
    msg.setSourceEntity(254U);
    msg.setDestination(12294U);
    msg.setDestinationEntity(153U);
    msg.name.assign("IIVCKGEWWXKFBJNUTPDFHXJVUAMMBXDPQHVECRIOZSHOYDSSFKGQXABQLALGYTAQTLILDWTBHERROG");
    msg.op = 14U;
    msg.sched_time = 0.628978662659748;

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
    msg.setTimeStamp(0.5811911153958204);
    msg.setSource(14217U);
    msg.setSourceEntity(36U);
    msg.setDestination(7511U);
    msg.setDestinationEntity(191U);
    msg.name.assign("QXPMFVHYSLBOMDJNTWZNBONSSTUFDPRRUHXSIKXWLAJQVCVSQMPXCRNAKPYIWXLUKKDIEJMYMNPEZOGOXHFRSFDDGBOKWFNQYGIHEVIFNOGJMJGUHJWAOYPSZTGEEMDHLIDIZLCHWRZSQJOYTNATWYBLWSURCOGCAYMAQBZPLTVYRGKTONPBALEXEVQPUCQCBJJM");
    msg.op = 6U;
    msg.sched_time = 0.24045497407605132;

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
    msg.setTimeStamp(0.9807726839134994);
    msg.setSource(46655U);
    msg.setSourceEntity(204U);
    msg.setDestination(7692U);
    msg.setDestinationEntity(134U);
    msg.name.assign("NGYGVRSJDVKTSMOFRLYOIZPORNHGKOCTJONYKJDXAVBAMPQRPEKUQLDKQVHTCQHWGKCVNULWPABVBDNRIWGLTLBHZUSHUREUWSORYYIKJSQRHQNBQJTYHPYSZJKZTFIZQDVPPADAMDYMHXJXWOTAICUGGEULFR");
    msg.op = 61U;
    msg.sched_time = 0.44775162786303346;

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
    msg.setTimeStamp(0.7896394386505958);
    msg.setSource(47536U);
    msg.setSourceEntity(110U);
    msg.setDestination(61144U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.3591707440570657);
    msg.setSource(51064U);
    msg.setSourceEntity(164U);
    msg.setDestination(38096U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.851851496979169);
    msg.setSource(56016U);
    msg.setSourceEntity(171U);
    msg.setDestination(60275U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.6666276058489179);
    msg.setSource(44082U);
    msg.setSourceEntity(205U);
    msg.setDestination(43112U);
    msg.setDestinationEntity(37U);
    msg.name.assign("ZJOSTQXBNZFWDVLTEHWDLFQMSGSIRTYZDWVYRYMIEQMCPETWVUJXXKQQLWHPZEQGNYOQPOJVTEEKDFJXBRAKDYADUXMQRTINSHUIFEMHPCWJCFYCRGKXNZMCNFLQIMUKNVWLMSUWDSIBRFZLUUYBNVPAIXAPMTYSXDLFJFOAGCSRCDLITQBKYJBINVTHRBSPYWCELLHHOKRCRHJAOMONZHWBJKSDOGZNBCGXBAGG");
    msg.state = 94U;

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
    msg.setTimeStamp(0.29021702885101874);
    msg.setSource(59292U);
    msg.setSourceEntity(231U);
    msg.setDestination(6878U);
    msg.setDestinationEntity(84U);
    msg.name.assign("LUVFZYKEVXKQWUMGIRYGQCRWBSONAVRALBLDPOUIQJFPVMQWOCAOXMIKDBYJNEJTVKDZIQBIBSJIOHCPEGCUFAKPZHZWHOIXRYSXTPGKJKRFFHMTQ");
    msg.state = 243U;

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
    msg.setTimeStamp(0.5262365352067511);
    msg.setSource(14821U);
    msg.setSourceEntity(226U);
    msg.setDestination(25316U);
    msg.setDestinationEntity(115U);
    msg.name.assign("XMBINTOZBCPJDCTIFPZIDLQLFORRMJDABKTWMGDGSQEZSZAGEWJERHUTFXIXEJQXQKXUSQGYHKJLDELRGWICDLLYMXEUHWVNYIRNIUXKUGWVCZYYTLWCXBWIIOYNZJRMEFSXJNHASSHGPDKWHDYUKBAHKAHMVSUVHFFVUTGAPKMNYNCQLZPOAFMPUGVRTSVFAQJANDJIQCGONYCPOOC");
    msg.state = 42U;

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
    msg.setTimeStamp(0.9145690108828914);
    msg.setSource(28265U);
    msg.setSourceEntity(176U);
    msg.setDestination(47637U);
    msg.setDestinationEntity(121U);
    msg.name.assign("NKDKIQTVKOVXWXEMHXYIQTNTNXNGYVYGKRAZNHOVNWIAUZOMICVZCGBGZECDXPZYGYJYZWCJNINYSOKMUWPQWBKTALXCUFDQJHEDEKMHTNQSZGDCZCIWASNJOHD");
    msg.value = 236U;

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
    msg.setTimeStamp(0.17921676973545264);
    msg.setSource(22179U);
    msg.setSourceEntity(41U);
    msg.setDestination(46956U);
    msg.setDestinationEntity(11U);
    msg.name.assign("YXBEVWCZCMUKMSLVRXIBBQEZWSEASJNUNTMTHGFZJBHFCYTCERHMQODFKPLVRMTWIZDLUSPIDNHAGPLIXXIDBPCATALEEAWFBQKSSAFKRGREMKDEZOCAVZNWIDNGXUJOYYMOMKWWZUQPBIDHNMRLQIUSFSAOPWQEXVPJIVZDPGYQKNWFYXBXRKCOXNYKGTSRZJ");
    msg.value = 249U;

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
    msg.setTimeStamp(0.09975626215061562);
    msg.setSource(40926U);
    msg.setSourceEntity(54U);
    msg.setDestination(18500U);
    msg.setDestinationEntity(109U);
    msg.name.assign("KXYBWFSSPUJYLPTXJZIEHBPVWPEJZZONCLPNJCGMZPZNIGQUSFKQITLJWVGNJILAKQUXXCPAYFRVVQTBDAWHAIOHDZODMJEFRVCTHMOCFQCUWMAQYKETLNEMDRPEYGKSNJERIBFYGXVGYISHKOXRZQUDKHCBMMKUSQCNUDOBAZTDRGFEPO");
    msg.value = 108U;

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
    msg.setTimeStamp(0.7954910437720352);
    msg.setSource(28595U);
    msg.setSourceEntity(55U);
    msg.setDestination(57472U);
    msg.setDestinationEntity(223U);
    msg.name.assign("AAZTMPFKMNSXRALPZPSJHMOKUIIMOECWWSQOQRFXHOUTAXCXQFCDCCZKQYBVTDJJLTWTHGGIYJRLQKTBUDHOSUBTJRIOWPNIWNIWDIYYBURAVEFHKDSXRLAUYONFDAVKCLUBQKNEJCPDKZRSUMZUMNXSGDSXWAVPBTRFEWFZCCJNPKNSYAJCZHBFQONLIBKH");

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
    msg.setTimeStamp(0.4622964138383783);
    msg.setSource(27497U);
    msg.setSourceEntity(237U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(54U);
    msg.name.assign("JMXIJIPZWMXSPRYDZNSBULYJTGZEFPYQLYRCODKHVKWKCDUMMOSUNOWLHTVCVJFROIKRTUQYGMFNIAQQTZDFNYBYKOPBGXDCQVBGEBBGHYFAYTSHTX");

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
    msg.setTimeStamp(0.5271440640005237);
    msg.setSource(33382U);
    msg.setSourceEntity(172U);
    msg.setDestination(30389U);
    msg.setDestinationEntity(237U);
    msg.name.assign("YFOQNMWDPHOINKEKIRDNSDNOELCWNLKYYXHWIPEZOMMTCNYKTTOZDSVBSBGNBIQQQCMVZZJMTZNJHS");

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
    msg.setTimeStamp(0.9982890604129582);
    msg.setSource(65528U);
    msg.setSourceEntity(128U);
    msg.setDestination(57024U);
    msg.setDestinationEntity(46U);
    msg.name.assign("CELDMUIRNVDUBSTABEUBJUXVVNDRGZEGCHALSUPKMEJAGGAQZSAWYNKOIFCYHKBZWZQBQTLXDTWYPQVBCJLTMVFYHLPAYMLPEBOVQKHESNYLJMFWRYKBIWQDOSKKKXIFNVUHCRIPFCJDMPHZXWYOENFAHRTNOXJWDUURKFZTJHRTGXMREPCGMLSVKCLFTHHGYQAO");
    msg.value = 116U;

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
    msg.setTimeStamp(0.6998202290328214);
    msg.setSource(21542U);
    msg.setSourceEntity(75U);
    msg.setDestination(29656U);
    msg.setDestinationEntity(31U);
    msg.name.assign("NNGPSLIBXDDTIMFHVOBAUQABLCIIYHGWSHVNKDIMNOMCOASYUJLNTFPFXCMPALSOMXTLNJCFLTYNVOBZLZFEDQGKUHZHRKFTXQYDXFSCTGVGOISMJTQWYQOYXOBBYBGSSDEDMYARPQREVPZRXZWJRETCPIEUAXUWIVCEBWZUUP");
    msg.value = 101U;

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
    msg.setTimeStamp(0.9074233630664893);
    msg.setSource(47777U);
    msg.setSourceEntity(38U);
    msg.setDestination(4247U);
    msg.setDestinationEntity(190U);
    msg.name.assign("LWQXANECVTUKXJRWSODGFWYJQWOGXSJOERSFADQBTKBHTAILFXLFFAAFUDGQCSINUWWOKVNUVPEOJSZESJLZGRMPBVD");
    msg.value = 91U;

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
    msg.setTimeStamp(0.11548658983658155);
    msg.setSource(54011U);
    msg.setSourceEntity(61U);
    msg.setDestination(17072U);
    msg.setDestinationEntity(237U);
    msg.id = 43U;
    msg.period = 4074169177U;
    msg.duty_cycle = 558087842U;

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
    msg.setTimeStamp(0.35317576911184567);
    msg.setSource(61981U);
    msg.setSourceEntity(212U);
    msg.setDestination(2825U);
    msg.setDestinationEntity(96U);
    msg.id = 55U;
    msg.period = 2654119908U;
    msg.duty_cycle = 2834496167U;

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
    msg.setTimeStamp(0.40022612282175984);
    msg.setSource(57536U);
    msg.setSourceEntity(68U);
    msg.setDestination(57885U);
    msg.setDestinationEntity(252U);
    msg.id = 202U;
    msg.period = 4157012502U;
    msg.duty_cycle = 2919977053U;

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
    msg.setTimeStamp(0.10573682225088465);
    msg.setSource(53533U);
    msg.setSourceEntity(244U);
    msg.setDestination(50451U);
    msg.setDestinationEntity(250U);
    msg.id = 113U;
    msg.period = 3328426962U;
    msg.duty_cycle = 274288189U;

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
    msg.setTimeStamp(0.08274064778965773);
    msg.setSource(45642U);
    msg.setSourceEntity(81U);
    msg.setDestination(30966U);
    msg.setDestinationEntity(181U);
    msg.id = 101U;
    msg.period = 3076820076U;
    msg.duty_cycle = 3614452808U;

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
    msg.setTimeStamp(0.6298224747982455);
    msg.setSource(12788U);
    msg.setSourceEntity(79U);
    msg.setDestination(37404U);
    msg.setDestinationEntity(43U);
    msg.id = 235U;
    msg.period = 901009901U;
    msg.duty_cycle = 1517666393U;

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
    msg.setTimeStamp(0.2612374580538752);
    msg.setSource(12203U);
    msg.setSourceEntity(75U);
    msg.setDestination(56598U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.15540193208176645;
    msg.lon = 0.016562144361044973;
    msg.height = 0.3531885839250609;
    msg.x = 0.9661798704471791;
    msg.y = 0.49571073798663967;
    msg.z = 0.5662629708436677;
    msg.phi = 0.6720921144192079;
    msg.theta = 0.7199545608935807;
    msg.psi = 0.719760589623369;
    msg.u = 0.7779744238955522;
    msg.v = 0.5400138685735901;
    msg.w = 0.6600753169737273;
    msg.vx = 0.015891041155048358;
    msg.vy = 0.607182799115;
    msg.vz = 0.9513829863768665;
    msg.p = 0.13588313055333268;
    msg.q = 0.42523699538820325;
    msg.r = 0.7798679763265598;
    msg.depth = 0.36244052795407067;
    msg.alt = 0.7640947196881129;

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
    msg.setTimeStamp(0.753820272847091);
    msg.setSource(31789U);
    msg.setSourceEntity(156U);
    msg.setDestination(3460U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.34041477004684106;
    msg.lon = 0.1408701952452588;
    msg.height = 0.30979853011591274;
    msg.x = 0.7378083063319034;
    msg.y = 0.09137251721709638;
    msg.z = 0.24559419711086505;
    msg.phi = 0.8085426085685361;
    msg.theta = 0.9863974610534452;
    msg.psi = 0.037792877571104944;
    msg.u = 0.7433488389773503;
    msg.v = 0.8566243498950589;
    msg.w = 0.7005774346120317;
    msg.vx = 0.6386837027317241;
    msg.vy = 0.5921858531015263;
    msg.vz = 0.571844576463414;
    msg.p = 0.1739045888563273;
    msg.q = 0.5185821748416248;
    msg.r = 0.32418167628530725;
    msg.depth = 0.2713784944636186;
    msg.alt = 0.049088924227035036;

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
    msg.setTimeStamp(0.36267099344042164);
    msg.setSource(41795U);
    msg.setSourceEntity(128U);
    msg.setDestination(12412U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.30500933809808006;
    msg.lon = 0.8743097999067749;
    msg.height = 0.1682208894843461;
    msg.x = 0.4711372888187155;
    msg.y = 0.05364671783446051;
    msg.z = 0.6964725251116153;
    msg.phi = 0.9901834268398743;
    msg.theta = 0.9461784254103921;
    msg.psi = 0.6774915613409574;
    msg.u = 0.25595482145064685;
    msg.v = 0.05068603612713951;
    msg.w = 0.23019499427083656;
    msg.vx = 0.20052598081221207;
    msg.vy = 0.08717036414922252;
    msg.vz = 0.884246262959428;
    msg.p = 0.29638922537452883;
    msg.q = 0.5826929561872812;
    msg.r = 0.013141588928379577;
    msg.depth = 0.9437021221839919;
    msg.alt = 0.4426975036055869;

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
    msg.setTimeStamp(0.06042828808213885);
    msg.setSource(47809U);
    msg.setSourceEntity(55U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(181U);
    msg.x = 0.01577444605776246;
    msg.y = 0.1822011614388458;
    msg.z = 0.9477431527763011;

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
    msg.setTimeStamp(0.3335328208726175);
    msg.setSource(3751U);
    msg.setSourceEntity(42U);
    msg.setDestination(1668U);
    msg.setDestinationEntity(194U);
    msg.x = 0.1603536433739886;
    msg.y = 0.09062158454277469;
    msg.z = 0.992349193862252;

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
    msg.setTimeStamp(0.5959534134088413);
    msg.setSource(22887U);
    msg.setSourceEntity(210U);
    msg.setDestination(8131U);
    msg.setDestinationEntity(27U);
    msg.x = 0.31452308518266114;
    msg.y = 0.7582071295827189;
    msg.z = 0.4986343225282748;

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
    msg.setTimeStamp(0.7347797056549935);
    msg.setSource(12065U);
    msg.setSourceEntity(153U);
    msg.setDestination(5593U);
    msg.setDestinationEntity(119U);
    msg.value = 0.3537208113061956;

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
    msg.setTimeStamp(0.1920380460807678);
    msg.setSource(27882U);
    msg.setSourceEntity(26U);
    msg.setDestination(40879U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9025958159655255;

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
    msg.setTimeStamp(0.19709563165672794);
    msg.setSource(43214U);
    msg.setSourceEntity(86U);
    msg.setDestination(3819U);
    msg.setDestinationEntity(227U);
    msg.value = 0.7717678268436491;

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
    msg.setTimeStamp(0.46070421650118776);
    msg.setSource(1572U);
    msg.setSourceEntity(10U);
    msg.setDestination(4978U);
    msg.setDestinationEntity(60U);
    msg.value = 0.7695973809332051;

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
    msg.setTimeStamp(0.22361165214281475);
    msg.setSource(45682U);
    msg.setSourceEntity(165U);
    msg.setDestination(1727U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8004300859781815;

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
    msg.setTimeStamp(0.41480883844515715);
    msg.setSource(56808U);
    msg.setSourceEntity(164U);
    msg.setDestination(40908U);
    msg.setDestinationEntity(223U);
    msg.value = 0.47713771230191393;

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
    msg.setTimeStamp(0.16071345301442186);
    msg.setSource(8955U);
    msg.setSourceEntity(163U);
    msg.setDestination(29017U);
    msg.setDestinationEntity(93U);
    msg.x = 0.26060898650444875;
    msg.y = 0.9020405684073176;
    msg.z = 0.37298372994602524;
    msg.phi = 0.04630726450914824;
    msg.theta = 0.245322237034292;
    msg.psi = 0.3763955622280183;
    msg.p = 0.3057547390056621;
    msg.q = 0.3972616252321117;
    msg.r = 0.47478721333300955;
    msg.u = 0.2354622533416204;
    msg.v = 0.6622100605037736;
    msg.w = 0.7394119629534884;
    msg.bias_psi = 0.6218767251719491;
    msg.bias_r = 0.46116103855638346;

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
    msg.setTimeStamp(0.23530096187279614);
    msg.setSource(40348U);
    msg.setSourceEntity(212U);
    msg.setDestination(452U);
    msg.setDestinationEntity(112U);
    msg.x = 0.22925164651723307;
    msg.y = 0.04794724626142299;
    msg.z = 0.5386645718548823;
    msg.phi = 0.794771078743372;
    msg.theta = 0.05377175400603684;
    msg.psi = 0.002125340122804964;
    msg.p = 0.04524361811608668;
    msg.q = 0.6865578819175762;
    msg.r = 0.4461476896836054;
    msg.u = 0.12398199993263159;
    msg.v = 0.3596457918309236;
    msg.w = 0.4375476382903132;
    msg.bias_psi = 0.8799042490398579;
    msg.bias_r = 0.6766938894846576;

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
    msg.setTimeStamp(0.2043631171340533);
    msg.setSource(57995U);
    msg.setSourceEntity(246U);
    msg.setDestination(15201U);
    msg.setDestinationEntity(225U);
    msg.x = 0.4713011355648308;
    msg.y = 0.22963312076225617;
    msg.z = 0.24194626222919913;
    msg.phi = 0.3789738312266009;
    msg.theta = 0.3896129531306447;
    msg.psi = 0.6950074915194504;
    msg.p = 0.3993462381921372;
    msg.q = 0.6387014104539828;
    msg.r = 0.17492124721759705;
    msg.u = 0.295055936386051;
    msg.v = 0.8186547393848844;
    msg.w = 0.5670974489412002;
    msg.bias_psi = 0.8390318122604368;
    msg.bias_r = 0.6552943628118546;

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
    msg.setTimeStamp(0.8604264607709741);
    msg.setSource(35023U);
    msg.setSourceEntity(13U);
    msg.setDestination(11436U);
    msg.setDestinationEntity(170U);
    msg.bias_psi = 0.5689804320451101;
    msg.bias_r = 0.9796345418268649;
    msg.cog = 0.6385482349901528;
    msg.cyaw = 0.39352526990586134;
    msg.lbl_rej_level = 0.3297140251720606;
    msg.gps_rej_level = 0.5846488781988655;
    msg.custom_x = 0.6901561435673075;
    msg.custom_y = 0.07280221836471168;
    msg.custom_z = 0.39183998565777356;

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
    msg.setTimeStamp(0.7401745767350654);
    msg.setSource(49159U);
    msg.setSourceEntity(213U);
    msg.setDestination(44448U);
    msg.setDestinationEntity(171U);
    msg.bias_psi = 0.6457983580904213;
    msg.bias_r = 0.08475017766926185;
    msg.cog = 0.937963064361638;
    msg.cyaw = 0.3969454787024539;
    msg.lbl_rej_level = 0.5366617005316396;
    msg.gps_rej_level = 0.1803336122553092;
    msg.custom_x = 0.9789566926331534;
    msg.custom_y = 0.16546806815046344;
    msg.custom_z = 0.17011135811640665;

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
    msg.setTimeStamp(0.5544049832164843);
    msg.setSource(28982U);
    msg.setSourceEntity(99U);
    msg.setDestination(4381U);
    msg.setDestinationEntity(178U);
    msg.bias_psi = 0.17440653153914654;
    msg.bias_r = 0.31079082825149584;
    msg.cog = 0.09188937997736002;
    msg.cyaw = 0.475827964842909;
    msg.lbl_rej_level = 0.4357848486033602;
    msg.gps_rej_level = 0.3622530868899714;
    msg.custom_x = 0.7619042438643231;
    msg.custom_y = 0.8558187694555164;
    msg.custom_z = 0.2504349185956579;

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
    msg.setTimeStamp(0.8788365286289901);
    msg.setSource(53045U);
    msg.setSourceEntity(250U);
    msg.setDestination(5781U);
    msg.setDestinationEntity(45U);
    msg.utc_time = 0.7194636177867023;
    msg.reason = 154U;

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
    msg.setTimeStamp(0.5391178281031712);
    msg.setSource(45746U);
    msg.setSourceEntity(181U);
    msg.setDestination(3342U);
    msg.setDestinationEntity(161U);
    msg.utc_time = 0.6087021495508613;
    msg.reason = 95U;

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
    msg.setTimeStamp(0.4670367897367491);
    msg.setSource(26596U);
    msg.setSourceEntity(148U);
    msg.setDestination(62956U);
    msg.setDestinationEntity(114U);
    msg.utc_time = 0.0643339057802852;
    msg.reason = 229U;

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
    msg.setTimeStamp(0.8004267002266438);
    msg.setSource(1047U);
    msg.setSourceEntity(179U);
    msg.setDestination(40773U);
    msg.setDestinationEntity(2U);
    msg.id = 86U;
    msg.range = 0.3213470988830136;
    msg.acceptance = 179U;

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
    msg.setTimeStamp(0.201830565282338);
    msg.setSource(27296U);
    msg.setSourceEntity(203U);
    msg.setDestination(7252U);
    msg.setDestinationEntity(86U);
    msg.id = 244U;
    msg.range = 0.8886007727865742;
    msg.acceptance = 55U;

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
    msg.setTimeStamp(0.822578872210588);
    msg.setSource(788U);
    msg.setSourceEntity(142U);
    msg.setDestination(7912U);
    msg.setDestinationEntity(73U);
    msg.id = 24U;
    msg.range = 0.7388316946848484;
    msg.acceptance = 219U;

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
    msg.setTimeStamp(0.2901902303953745);
    msg.setSource(1269U);
    msg.setSourceEntity(204U);
    msg.setDestination(35522U);
    msg.setDestinationEntity(113U);
    msg.type = 33U;
    msg.reason = 97U;
    msg.value = 0.71380950612652;
    msg.timestep = 0.40214090939103486;

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
    msg.setTimeStamp(0.9039382785629629);
    msg.setSource(48828U);
    msg.setSourceEntity(129U);
    msg.setDestination(56912U);
    msg.setDestinationEntity(28U);
    msg.type = 50U;
    msg.reason = 54U;
    msg.value = 0.06417321323591407;
    msg.timestep = 0.5516809827227929;

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
    msg.setTimeStamp(0.13001196242808155);
    msg.setSource(50750U);
    msg.setSourceEntity(21U);
    msg.setDestination(26965U);
    msg.setDestinationEntity(174U);
    msg.type = 9U;
    msg.reason = 253U;
    msg.value = 0.7124188908372995;
    msg.timestep = 0.547300889076432;

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
    msg.setTimeStamp(0.21100111294862367);
    msg.setSource(24239U);
    msg.setSourceEntity(202U);
    msg.setDestination(4167U);
    msg.setDestinationEntity(43U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LVWZALXMZYTUNOJTYUDNCOEUPHSKNYENSFGLCSVWRWSPHNOBKSFJAJTGTNOKAVTAIBNTILPJQRXBRVMFTHVIUHDNKPACZIEHHEOBKQBLKQPMKCAGIIRQWWDARZNEXZDUFPOJIWHOFRGYKPZPLQZPHALWNSDQDAUYTXMAFFBHFCYMYKSZGIUDCWQRLTXGSQGVTUJYHZEBLGJEPVXGCWOCMXECUQOYBWFVGMIMDJQBLDIRJDXJEUVKE");
    tmp_msg_0.lat = 0.08387007975920935;
    tmp_msg_0.lon = 0.1943424628403183;
    tmp_msg_0.depth = 0.3760163969239052;
    tmp_msg_0.query_channel = 77U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 187U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7058099850834281;
    msg.y = 0.39261193023231544;
    msg.var_x = 0.3041131595529398;
    msg.var_y = 0.7369047576046317;
    msg.distance = 0.06950730069867572;

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
    msg.setTimeStamp(0.3104381175309452);
    msg.setSource(19284U);
    msg.setSourceEntity(104U);
    msg.setDestination(21314U);
    msg.setDestinationEntity(212U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DBOCNJTJVSESYSWEHPKJPJIREANONCHYNBRBDXQTSWGGYUTIADPKRDUVIALFCECXBGBJWTHPOZLGCHRINBKRFYETTUZMXGAWMENCMFUDCOYKPQLPACLIXVIEPBQINLKUDTXQDZTWACFBGSITFOYWSESVHVANP");
    tmp_msg_0.lat = 0.3230048892842743;
    tmp_msg_0.lon = 0.19359147199685345;
    tmp_msg_0.depth = 0.7315606814717122;
    tmp_msg_0.query_channel = 9U;
    tmp_msg_0.reply_channel = 140U;
    tmp_msg_0.transponder_delay = 151U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5934596036526177;
    msg.y = 0.7902204867213628;
    msg.var_x = 0.4901235886814478;
    msg.var_y = 0.9242009702988929;
    msg.distance = 0.7132112999378077;

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
    msg.setTimeStamp(0.31745470116646524);
    msg.setSource(4686U);
    msg.setSourceEntity(238U);
    msg.setDestination(37377U);
    msg.setDestinationEntity(57U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LDQCNBYWOBYMEAZMVGFORKHEIZTNFAYJUYDKWN");
    tmp_msg_0.lat = 0.2572431878436374;
    tmp_msg_0.lon = 0.6545341282136106;
    tmp_msg_0.depth = 0.8488206475289354;
    tmp_msg_0.query_channel = 25U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 197U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3158506903524748;
    msg.y = 0.053542832603928;
    msg.var_x = 0.5293672829344385;
    msg.var_y = 0.6211060698887584;
    msg.distance = 0.08719628811672697;

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
    msg.setTimeStamp(0.36888278956342213);
    msg.setSource(57971U);
    msg.setSourceEntity(96U);
    msg.setDestination(30043U);
    msg.setDestinationEntity(192U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.8369936395937657);
    msg.setSource(16630U);
    msg.setSourceEntity(150U);
    msg.setDestination(42125U);
    msg.setDestinationEntity(45U);
    msg.state = 117U;

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
    msg.setTimeStamp(0.3848832253587816);
    msg.setSource(38613U);
    msg.setSourceEntity(199U);
    msg.setDestination(60258U);
    msg.setDestinationEntity(226U);
    msg.state = 4U;

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
    msg.setTimeStamp(0.10633999160012242);
    msg.setSource(47512U);
    msg.setSourceEntity(119U);
    msg.setDestination(27823U);
    msg.setDestinationEntity(226U);
    msg.x = 0.8341733308845529;
    msg.y = 0.7012706413717213;
    msg.z = 0.659222443342606;

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
    msg.setTimeStamp(0.9962827762173232);
    msg.setSource(61137U);
    msg.setSourceEntity(215U);
    msg.setDestination(76U);
    msg.setDestinationEntity(165U);
    msg.x = 0.44432914045014615;
    msg.y = 0.369837715609733;
    msg.z = 0.6229052933087244;

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
    msg.setTimeStamp(0.397155139873164);
    msg.setSource(59123U);
    msg.setSourceEntity(126U);
    msg.setDestination(38248U);
    msg.setDestinationEntity(191U);
    msg.x = 0.8828623445691527;
    msg.y = 0.8182544608030659;
    msg.z = 0.005117718594621512;

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
    msg.setTimeStamp(0.29440098103359635);
    msg.setSource(53883U);
    msg.setSourceEntity(63U);
    msg.setDestination(52618U);
    msg.setDestinationEntity(185U);
    msg.va = 0.6996486507227622;
    msg.aoa = 0.20553525025178287;
    msg.ssa = 0.543440238049461;

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
    msg.setTimeStamp(0.6615690866462817);
    msg.setSource(64002U);
    msg.setSourceEntity(2U);
    msg.setDestination(855U);
    msg.setDestinationEntity(161U);
    msg.va = 0.5404929276834372;
    msg.aoa = 0.7708165437315886;
    msg.ssa = 0.12254199598887372;

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
    msg.setTimeStamp(0.013972124371070649);
    msg.setSource(9528U);
    msg.setSourceEntity(31U);
    msg.setDestination(43846U);
    msg.setDestinationEntity(105U);
    msg.va = 0.13920127046796926;
    msg.aoa = 0.995280595910403;
    msg.ssa = 0.3197009179200456;

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
    msg.setTimeStamp(0.6740060838516151);
    msg.setSource(34783U);
    msg.setSourceEntity(88U);
    msg.setDestination(24928U);
    msg.setDestinationEntity(181U);
    msg.value = 0.9931815172869423;

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
    msg.setTimeStamp(0.46046905380433256);
    msg.setSource(23511U);
    msg.setSourceEntity(78U);
    msg.setDestination(46166U);
    msg.setDestinationEntity(251U);
    msg.value = 0.7872170559095432;

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
    msg.setTimeStamp(0.2610332797355934);
    msg.setSource(538U);
    msg.setSourceEntity(78U);
    msg.setDestination(52370U);
    msg.setDestinationEntity(114U);
    msg.value = 0.5646077477605709;

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
    msg.setTimeStamp(0.73841233903739);
    msg.setSource(61626U);
    msg.setSourceEntity(239U);
    msg.setDestination(45338U);
    msg.setDestinationEntity(16U);
    msg.value = 0.18658661621903772;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.899084192149753);
    msg.setSource(2709U);
    msg.setSourceEntity(203U);
    msg.setDestination(33090U);
    msg.setDestinationEntity(135U);
    msg.value = 0.785041088704114;
    msg.z_units = 174U;

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
    msg.setTimeStamp(0.9129841395999523);
    msg.setSource(28162U);
    msg.setSourceEntity(103U);
    msg.setDestination(14887U);
    msg.setDestinationEntity(110U);
    msg.value = 0.879429371900477;
    msg.z_units = 186U;

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
    msg.setTimeStamp(0.4935056194902535);
    msg.setSource(40231U);
    msg.setSourceEntity(82U);
    msg.setDestination(62225U);
    msg.setDestinationEntity(46U);
    msg.value = 0.4061696173875;
    msg.speed_units = 43U;

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
    msg.setTimeStamp(0.9409454940527204);
    msg.setSource(20384U);
    msg.setSourceEntity(224U);
    msg.setDestination(22826U);
    msg.setDestinationEntity(2U);
    msg.value = 0.23864516259061408;
    msg.speed_units = 172U;

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
    msg.setTimeStamp(0.5434591290834763);
    msg.setSource(10733U);
    msg.setSourceEntity(106U);
    msg.setDestination(55463U);
    msg.setDestinationEntity(42U);
    msg.value = 0.8782069586420702;
    msg.speed_units = 137U;

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
    msg.setTimeStamp(0.4579134364901738);
    msg.setSource(64187U);
    msg.setSourceEntity(87U);
    msg.setDestination(21153U);
    msg.setDestinationEntity(213U);
    msg.value = 0.8190136421396526;

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
    msg.setTimeStamp(0.6111435341991069);
    msg.setSource(2939U);
    msg.setSourceEntity(134U);
    msg.setDestination(4172U);
    msg.setDestinationEntity(49U);
    msg.value = 0.09908492131496749;

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
    msg.setTimeStamp(0.9981328581199803);
    msg.setSource(57148U);
    msg.setSourceEntity(206U);
    msg.setDestination(55268U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6985912353129774;

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
    msg.setTimeStamp(0.7228635355157165);
    msg.setSource(53219U);
    msg.setSourceEntity(81U);
    msg.setDestination(33901U);
    msg.setDestinationEntity(45U);
    msg.value = 0.4453667218743086;

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
    msg.setTimeStamp(0.9545580846115309);
    msg.setSource(39526U);
    msg.setSourceEntity(70U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9077504123034472;

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
    msg.setTimeStamp(0.0345338439165539);
    msg.setSource(43173U);
    msg.setSourceEntity(145U);
    msg.setDestination(19774U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9390832649417711;

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
    msg.setTimeStamp(0.17485714161443666);
    msg.setSource(38751U);
    msg.setSourceEntity(184U);
    msg.setDestination(31368U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9233381119908335;

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
    msg.setTimeStamp(0.5897550336729664);
    msg.setSource(48812U);
    msg.setSourceEntity(20U);
    msg.setDestination(29302U);
    msg.setDestinationEntity(84U);
    msg.value = 0.23859687668521012;

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
    msg.setTimeStamp(0.7754348199064922);
    msg.setSource(59937U);
    msg.setSourceEntity(240U);
    msg.setDestination(16482U);
    msg.setDestinationEntity(168U);
    msg.value = 0.5077116135755643;

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
    msg.setTimeStamp(0.6637158318187432);
    msg.setSource(39661U);
    msg.setSourceEntity(102U);
    msg.setDestination(63066U);
    msg.setDestinationEntity(58U);
    msg.path_ref = 2327361208U;
    msg.start_lat = 0.8000409796010038;
    msg.start_lon = 0.5093537318742856;
    msg.start_z = 0.10639703494782049;
    msg.start_z_units = 189U;
    msg.end_lat = 0.7788959448681457;
    msg.end_lon = 0.25865697351724715;
    msg.end_z = 0.808166991130395;
    msg.end_z_units = 106U;
    msg.speed = 0.2861770353126821;
    msg.speed_units = 82U;
    msg.lradius = 0.9604626438569496;
    msg.flags = 22U;

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
    msg.setTimeStamp(0.32640925862890613);
    msg.setSource(549U);
    msg.setSourceEntity(220U);
    msg.setDestination(52030U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 2545911292U;
    msg.start_lat = 0.5227422901158705;
    msg.start_lon = 0.2869317989831831;
    msg.start_z = 0.46085892453665644;
    msg.start_z_units = 104U;
    msg.end_lat = 0.1323650337388136;
    msg.end_lon = 0.9333421070966257;
    msg.end_z = 0.2993006272473032;
    msg.end_z_units = 121U;
    msg.speed = 0.4640455776737229;
    msg.speed_units = 238U;
    msg.lradius = 0.04321818388437504;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.12425140513380428);
    msg.setSource(56807U);
    msg.setSourceEntity(103U);
    msg.setDestination(20994U);
    msg.setDestinationEntity(209U);
    msg.path_ref = 3053216587U;
    msg.start_lat = 0.781610804473224;
    msg.start_lon = 0.9333463050131378;
    msg.start_z = 0.5192349575091461;
    msg.start_z_units = 244U;
    msg.end_lat = 0.0559419040976854;
    msg.end_lon = 0.5767086453402271;
    msg.end_z = 0.976563087505976;
    msg.end_z_units = 190U;
    msg.speed = 0.4684327270414236;
    msg.speed_units = 228U;
    msg.lradius = 0.21322040075662507;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.7821124015539546);
    msg.setSource(55805U);
    msg.setSourceEntity(224U);
    msg.setDestination(33284U);
    msg.setDestinationEntity(134U);
    msg.x = 0.17280776876672188;
    msg.y = 0.8779555199154221;
    msg.z = 0.5312067721248277;
    msg.k = 0.7461791768959898;
    msg.m = 0.5589633073850317;
    msg.n = 0.13885381621999404;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.47975989479267345);
    msg.setSource(38647U);
    msg.setSourceEntity(51U);
    msg.setDestination(10176U);
    msg.setDestinationEntity(252U);
    msg.x = 0.7380162132576793;
    msg.y = 0.07327224461180637;
    msg.z = 0.8987168264463204;
    msg.k = 0.13057097510969207;
    msg.m = 0.8020556036628586;
    msg.n = 0.6235592188089569;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.6758076444064939);
    msg.setSource(61640U);
    msg.setSourceEntity(171U);
    msg.setDestination(6425U);
    msg.setDestinationEntity(251U);
    msg.x = 0.3935441692038849;
    msg.y = 0.09138715226825633;
    msg.z = 0.0061554600647740765;
    msg.k = 0.0025347288166190918;
    msg.m = 0.48093535798535747;
    msg.n = 0.41662397610836843;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.6836043530166687);
    msg.setSource(28777U);
    msg.setSourceEntity(241U);
    msg.setDestination(994U);
    msg.setDestinationEntity(86U);
    msg.value = 0.46784669075368834;

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
    msg.setTimeStamp(0.036185776721615825);
    msg.setSource(13955U);
    msg.setSourceEntity(73U);
    msg.setDestination(31500U);
    msg.setDestinationEntity(11U);
    msg.value = 0.43361020563247943;

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
    msg.setTimeStamp(0.7347261552035441);
    msg.setSource(34837U);
    msg.setSourceEntity(208U);
    msg.setDestination(48504U);
    msg.setDestinationEntity(180U);
    msg.value = 0.7860731981538454;

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
    msg.setTimeStamp(0.003025954377037343);
    msg.setSource(65097U);
    msg.setSourceEntity(59U);
    msg.setDestination(25155U);
    msg.setDestinationEntity(142U);
    msg.u = 0.7947008328836681;
    msg.v = 0.8014061540383949;
    msg.w = 0.2946262817528854;
    msg.p = 0.8402010367634964;
    msg.q = 0.7093038042909562;
    msg.r = 0.3736873099988023;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.28352704447878196);
    msg.setSource(33161U);
    msg.setSourceEntity(222U);
    msg.setDestination(56084U);
    msg.setDestinationEntity(213U);
    msg.u = 0.49798846843088185;
    msg.v = 0.352712513142837;
    msg.w = 0.6699408864241176;
    msg.p = 0.19792196921807226;
    msg.q = 0.8569821587355897;
    msg.r = 0.2987075012609046;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.5130644367002545);
    msg.setSource(32242U);
    msg.setSourceEntity(191U);
    msg.setDestination(26351U);
    msg.setDestinationEntity(7U);
    msg.u = 0.5140852311550572;
    msg.v = 0.6598810393583269;
    msg.w = 0.13250561013455542;
    msg.p = 0.14240980087432686;
    msg.q = 0.6281207506416838;
    msg.r = 0.24943345959656305;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.6667892640889267);
    msg.setSource(33320U);
    msg.setSourceEntity(64U);
    msg.setDestination(19961U);
    msg.setDestinationEntity(123U);
    msg.path_ref = 2967890982U;
    msg.start_lat = 0.0679520850532892;
    msg.start_lon = 0.6225817573398902;
    msg.start_z = 0.9400895231316565;
    msg.start_z_units = 231U;
    msg.end_lat = 0.13492676356285938;
    msg.end_lon = 0.00539198877196545;
    msg.end_z = 0.32731608838327775;
    msg.end_z_units = 243U;
    msg.lradius = 0.7933855942208042;
    msg.flags = 98U;
    msg.x = 0.8345620589448693;
    msg.y = 0.06542529836028899;
    msg.z = 0.3771641316098673;
    msg.vx = 0.05871939923225955;
    msg.vy = 0.0010106646107653772;
    msg.vz = 0.751639900673915;
    msg.course_error = 0.4082573967205546;
    msg.eta = 7341U;

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
    msg.setTimeStamp(0.6532295533100247);
    msg.setSource(25245U);
    msg.setSourceEntity(224U);
    msg.setDestination(63107U);
    msg.setDestinationEntity(65U);
    msg.path_ref = 3961005626U;
    msg.start_lat = 0.4643567077637607;
    msg.start_lon = 0.3597123080945648;
    msg.start_z = 0.6148088704055528;
    msg.start_z_units = 56U;
    msg.end_lat = 0.7779328496984612;
    msg.end_lon = 0.6934929445741549;
    msg.end_z = 0.6660854715875238;
    msg.end_z_units = 14U;
    msg.lradius = 0.052306223381099026;
    msg.flags = 0U;
    msg.x = 0.5030108282538285;
    msg.y = 0.20917702329848453;
    msg.z = 0.0876348785883978;
    msg.vx = 0.5934712569257068;
    msg.vy = 0.23144033626082827;
    msg.vz = 0.1726439705836783;
    msg.course_error = 0.7840010969451566;
    msg.eta = 15831U;

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
    msg.setTimeStamp(0.0953913927660539);
    msg.setSource(23245U);
    msg.setSourceEntity(68U);
    msg.setDestination(38186U);
    msg.setDestinationEntity(121U);
    msg.path_ref = 94237820U;
    msg.start_lat = 0.045877160796395144;
    msg.start_lon = 0.5783875309571861;
    msg.start_z = 0.03366591092845328;
    msg.start_z_units = 35U;
    msg.end_lat = 0.8904682141696889;
    msg.end_lon = 0.43210398653180027;
    msg.end_z = 0.8438828492717283;
    msg.end_z_units = 61U;
    msg.lradius = 0.9827022083888719;
    msg.flags = 113U;
    msg.x = 0.2239043273305431;
    msg.y = 0.5929250656245764;
    msg.z = 0.22841317951479045;
    msg.vx = 0.23678654056259618;
    msg.vy = 0.5624390831155895;
    msg.vz = 0.8082204343743441;
    msg.course_error = 0.7610300159135752;
    msg.eta = 41293U;

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
    msg.setTimeStamp(0.7893980395344062);
    msg.setSource(25019U);
    msg.setSourceEntity(30U);
    msg.setDestination(27562U);
    msg.setDestinationEntity(92U);
    msg.k = 0.9039411858133043;
    msg.m = 0.12774236088568425;
    msg.n = 0.8393027632559311;

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
    msg.setTimeStamp(0.6692591683757431);
    msg.setSource(39802U);
    msg.setSourceEntity(150U);
    msg.setDestination(46354U);
    msg.setDestinationEntity(239U);
    msg.k = 0.015376114489700443;
    msg.m = 0.7046193602162029;
    msg.n = 0.1541740618056877;

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
    msg.setTimeStamp(0.4072438052601882);
    msg.setSource(1816U);
    msg.setSourceEntity(236U);
    msg.setDestination(12143U);
    msg.setDestinationEntity(236U);
    msg.k = 0.4234520300559036;
    msg.m = 0.701833994064412;
    msg.n = 0.5248828707793846;

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
    msg.setTimeStamp(0.35043384909019537);
    msg.setSource(20951U);
    msg.setSourceEntity(75U);
    msg.setDestination(29955U);
    msg.setDestinationEntity(178U);
    msg.p = 0.14642337469307176;
    msg.i = 0.5787995545700123;
    msg.d = 0.9840645884146476;
    msg.a = 0.12978105178409005;

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
    msg.setTimeStamp(0.2235661663116545);
    msg.setSource(52337U);
    msg.setSourceEntity(171U);
    msg.setDestination(58268U);
    msg.setDestinationEntity(22U);
    msg.p = 0.8587785933380595;
    msg.i = 0.25592403823520427;
    msg.d = 0.9332908471272097;
    msg.a = 0.037587194679025604;

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
    msg.setTimeStamp(0.5641144876857883);
    msg.setSource(37684U);
    msg.setSourceEntity(109U);
    msg.setDestination(46679U);
    msg.setDestinationEntity(252U);
    msg.p = 0.18183406603225438;
    msg.i = 0.44892294301765046;
    msg.d = 0.3380440505378365;
    msg.a = 0.02857605306693678;

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
    msg.setTimeStamp(0.6531606147922404);
    msg.setSource(5553U);
    msg.setSourceEntity(100U);
    msg.setDestination(2706U);
    msg.setDestinationEntity(222U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.4406909983811098);
    msg.setSource(63791U);
    msg.setSourceEntity(100U);
    msg.setDestination(22513U);
    msg.setDestinationEntity(74U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.720215160385936);
    msg.setSource(60522U);
    msg.setSourceEntity(234U);
    msg.setDestination(5174U);
    msg.setDestinationEntity(193U);
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
    msg.setTimeStamp(0.2959450232196629);
    msg.setSource(1655U);
    msg.setSourceEntity(125U);
    msg.setDestination(5740U);
    msg.setDestinationEntity(214U);
    msg.x = 0.8659289964657947;
    msg.y = 0.8354190401654136;
    msg.z = 0.6079736059783406;
    msg.vx = 0.33199545211892467;
    msg.vy = 0.8302363515964817;
    msg.vz = 0.5920123584557231;
    msg.ax = 0.3873078343215465;
    msg.ay = 0.2136011976423533;
    msg.az = 0.6284683502903617;
    msg.flags = 60033U;

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
    msg.setTimeStamp(0.6547971489853995);
    msg.setSource(9652U);
    msg.setSourceEntity(139U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(203U);
    msg.x = 0.8429712843206404;
    msg.y = 0.9171341623930767;
    msg.z = 0.7507608004998554;
    msg.vx = 0.013416621034503695;
    msg.vy = 0.4228319236418028;
    msg.vz = 0.6830313545270486;
    msg.ax = 0.5058787997176835;
    msg.ay = 0.4602326597903533;
    msg.az = 0.43801343714671714;
    msg.flags = 17503U;

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
    msg.setTimeStamp(0.40372503632466983);
    msg.setSource(21672U);
    msg.setSourceEntity(117U);
    msg.setDestination(58430U);
    msg.setDestinationEntity(60U);
    msg.x = 0.7944890440620066;
    msg.y = 0.8465298335128114;
    msg.z = 0.19685076403329704;
    msg.vx = 0.33704246522039494;
    msg.vy = 0.1845096504672905;
    msg.vz = 0.1523220446095621;
    msg.ax = 0.3473860792119825;
    msg.ay = 0.65107130140532;
    msg.az = 0.7449996759390995;
    msg.flags = 21224U;

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
    msg.setTimeStamp(0.15208724883470925);
    msg.setSource(51766U);
    msg.setSourceEntity(158U);
    msg.setDestination(43706U);
    msg.setDestinationEntity(240U);
    msg.value = 0.8125208108985157;

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
    msg.setTimeStamp(0.8492115044109031);
    msg.setSource(56754U);
    msg.setSourceEntity(57U);
    msg.setDestination(23536U);
    msg.setDestinationEntity(234U);
    msg.value = 0.07708691542896373;

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
    msg.setTimeStamp(0.6800897593580049);
    msg.setSource(64587U);
    msg.setSourceEntity(169U);
    msg.setDestination(16958U);
    msg.setDestinationEntity(242U);
    msg.value = 0.27825545806700636;

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
    msg.setTimeStamp(0.9257924034304403);
    msg.setSource(52203U);
    msg.setSourceEntity(137U);
    msg.setDestination(63103U);
    msg.setDestinationEntity(129U);
    msg.timeout = 11377U;
    msg.lat = 0.16511197666048227;
    msg.lon = 0.1979924209722903;
    msg.z = 0.10293206410169498;
    msg.z_units = 40U;
    msg.speed = 0.36827605398339414;
    msg.speed_units = 43U;
    msg.roll = 0.7692390958024701;
    msg.pitch = 0.6003616054928049;
    msg.yaw = 0.1318752406618826;
    msg.custom.assign("YSFHEXTSEGQBIRTVPCOPRTWKLAZLLMTEWEGAIFNBSGEMDDFZNOJQXIKJPOYCCDMJRXEWJCXYLBRMKAGWLRFAJMVUYDDBCSMNIUVSXTZXKVNZRIIALNOLKOIUMLUD");

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
    msg.setTimeStamp(0.0629641823262006);
    msg.setSource(26991U);
    msg.setSourceEntity(134U);
    msg.setDestination(14826U);
    msg.setDestinationEntity(51U);
    msg.timeout = 11762U;
    msg.lat = 0.502967860341137;
    msg.lon = 0.7985570046206111;
    msg.z = 0.7325502013203196;
    msg.z_units = 108U;
    msg.speed = 0.13399453360329416;
    msg.speed_units = 116U;
    msg.roll = 0.688872177022701;
    msg.pitch = 0.9863797342088488;
    msg.yaw = 0.4267206203054892;
    msg.custom.assign("VPOJOQXLRHXSOYDXCUVEOVVPKJWQKIZSEVCHVEMTVIEGKJFFGLSIZJFHODNZGQNPDZXBXCKQARHVGYQKUREOHMRBDLCPJAQIBSZRDUGFPCURTWQBPSZRYSLHKFSUMEGOFEFWDYBNUBMMEJZBAMPNDJCCTWJRWWSTGAAHYLLAUJTLGQNBVUHIYXNTNYJFMNILWCKAMMCLEQIUYICM");

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
    msg.setTimeStamp(0.3397021152583154);
    msg.setSource(4956U);
    msg.setSourceEntity(133U);
    msg.setDestination(39188U);
    msg.setDestinationEntity(158U);
    msg.timeout = 9249U;
    msg.lat = 0.47479314158180386;
    msg.lon = 0.1991153333027339;
    msg.z = 0.6617257563062839;
    msg.z_units = 37U;
    msg.speed = 0.5064038308808742;
    msg.speed_units = 190U;
    msg.roll = 0.3930031347537145;
    msg.pitch = 0.2618201280884038;
    msg.yaw = 0.8468090971444583;
    msg.custom.assign("TKNNHQLUNDRDMYCDKNSBHOBALQTQIOMPTEJBDEXZGSBINYVRRANMEWAIXOGUZUZGZNEWCMZDQJVJSHKKYXYVJKEVWBIGFJXWSDWFAMXJDFSTPGOVAFPEQPAUAPKLHCIZUFHPCRLDYCGYRKLAIOQXRUFGTEAJCPUKMQVSPZTWMCRVDWFIMZLSJBJZSSKWOOBLOWCOLYGHYRPKWILFEUJDHUHVBZTNOXMRTFGEQIYRBMHGNTBAVXQTEICYNX");

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
    msg.setTimeStamp(0.9007978775878875);
    msg.setSource(62050U);
    msg.setSourceEntity(254U);
    msg.setDestination(9493U);
    msg.setDestinationEntity(209U);
    msg.timeout = 45666U;
    msg.lat = 0.5838978172976381;
    msg.lon = 0.2822182018217885;
    msg.z = 0.238339433430089;
    msg.z_units = 89U;
    msg.speed = 0.7009428503762075;
    msg.speed_units = 224U;
    msg.duration = 48759U;
    msg.radius = 0.03437311428680179;
    msg.flags = 193U;
    msg.custom.assign("VZCOVLXMKTDFSTJJUMCYJBQULWCAAKMVVBEFZUXNBMMQSADGODCQMQPGVIBOZGHPBZYVMXORRPHIAXLWDPDEWGBNYGGAULUZIBNRJIASXBZGDIHAQLPWLVHNYMXWNHWWDJKEIXSUOIHQJLLFTYWTNKJFI");

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
    msg.setTimeStamp(0.6807659415547843);
    msg.setSource(12137U);
    msg.setSourceEntity(98U);
    msg.setDestination(26477U);
    msg.setDestinationEntity(102U);
    msg.timeout = 30970U;
    msg.lat = 0.25214439989024906;
    msg.lon = 0.37766841802954065;
    msg.z = 0.23226454613670489;
    msg.z_units = 196U;
    msg.speed = 0.12154736417675394;
    msg.speed_units = 152U;
    msg.duration = 44345U;
    msg.radius = 0.7144261458215952;
    msg.flags = 243U;
    msg.custom.assign("IMOFXILSMAPTNVBCBGFSVRAQOXUETHXFNDKHOKAUWDQSSHTOLUQTVVGQYBNKYVWTYBNMZEVZCDNCCVCWYKMXAPNMVPDBSVIUPPJSBFGCBHEOHZXF");

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
    msg.setTimeStamp(0.04897400889468129);
    msg.setSource(2724U);
    msg.setSourceEntity(105U);
    msg.setDestination(43304U);
    msg.setDestinationEntity(15U);
    msg.timeout = 1615U;
    msg.lat = 0.0960016261829264;
    msg.lon = 0.6632197862060178;
    msg.z = 0.39550983510480076;
    msg.z_units = 208U;
    msg.speed = 0.08726443406794404;
    msg.speed_units = 76U;
    msg.duration = 43699U;
    msg.radius = 0.09715498326221672;
    msg.flags = 156U;
    msg.custom.assign("YPPSKINLGCAPBOBOIHCJHYLVBNRWDVMJERRSCCPVMGJSUMDOJWTIZPFEAHHYTQUXYLOQISVPLFZFMBGUBYNTQKZK");

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
    msg.setTimeStamp(0.3173607126027488);
    msg.setSource(5692U);
    msg.setSourceEntity(216U);
    msg.setDestination(8082U);
    msg.setDestinationEntity(247U);
    msg.custom.assign("OEMWKMCIJQAXZOMFPIJDNDFMLVFVAAS");

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
    msg.setTimeStamp(0.3209749167461551);
    msg.setSource(63137U);
    msg.setSourceEntity(4U);
    msg.setDestination(1819U);
    msg.setDestinationEntity(185U);
    msg.custom.assign("AVFNLWZMYVCVNGPGPDHYQXKUAEKBRSPLTSSWOGGSZVARDHWJNH");

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
    msg.setTimeStamp(0.34716543046694315);
    msg.setSource(5352U);
    msg.setSourceEntity(151U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(243U);
    msg.custom.assign("UHHWGOAUGCFFASVBUJMFEBYJASVDUCYPZFGDAETWGMBKMEBEHMYEWGLOCHQCRYBBOTLKJOCMNKWYNMQ");

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
    msg.setTimeStamp(0.692597856156196);
    msg.setSource(54949U);
    msg.setSourceEntity(127U);
    msg.setDestination(33314U);
    msg.setDestinationEntity(55U);
    msg.timeout = 27704U;
    msg.lat = 0.12680769567898897;
    msg.lon = 0.5025142734544643;
    msg.z = 0.06969338414575788;
    msg.z_units = 212U;
    msg.duration = 37579U;
    msg.speed = 0.02309284930370159;
    msg.speed_units = 161U;
    msg.type = 103U;
    msg.radius = 0.6056404778611452;
    msg.length = 0.3204934686046893;
    msg.bearing = 0.9780243075751859;
    msg.direction = 231U;
    msg.custom.assign("JCOGDYUQVFIPGJSMRETATMLWNVGYUQVVXYZNVISSBHEEILUNJPAOBDABFZHXNXGHXFEQYHTBMYOLKKDZSYWBQZQPRCUQRTVFDPJXZEUKUWSNKDLK");

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
    msg.setTimeStamp(0.5377120410727052);
    msg.setSource(37763U);
    msg.setSourceEntity(219U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(144U);
    msg.timeout = 13990U;
    msg.lat = 0.15527712155319473;
    msg.lon = 0.8323488604727625;
    msg.z = 0.4682693903529541;
    msg.z_units = 142U;
    msg.duration = 57709U;
    msg.speed = 0.48151006932132545;
    msg.speed_units = 199U;
    msg.type = 55U;
    msg.radius = 0.9337160513401253;
    msg.length = 0.1726305017043981;
    msg.bearing = 0.3127513145949553;
    msg.direction = 154U;
    msg.custom.assign("IQFCCNLRJFYEDAGVVQVTCWZKPNINPVLXAGDRVWZMWMRXQKWNOUVTPUBGUIYTECOSB");

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
    msg.setTimeStamp(0.6818119653179181);
    msg.setSource(52591U);
    msg.setSourceEntity(108U);
    msg.setDestination(53861U);
    msg.setDestinationEntity(169U);
    msg.timeout = 27966U;
    msg.lat = 0.15899267895523073;
    msg.lon = 0.5531587866882316;
    msg.z = 0.11412984692120098;
    msg.z_units = 227U;
    msg.duration = 18519U;
    msg.speed = 0.7571647316073261;
    msg.speed_units = 121U;
    msg.type = 242U;
    msg.radius = 0.18786086452881534;
    msg.length = 0.003103588393048584;
    msg.bearing = 0.011667793098427137;
    msg.direction = 213U;
    msg.custom.assign("GBCJFAJWEPJROJBBOYMFVSXHBYHNILPBGNCXVIAPXET");

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
    msg.setTimeStamp(0.6366683234321262);
    msg.setSource(37823U);
    msg.setSourceEntity(9U);
    msg.setDestination(58120U);
    msg.setDestinationEntity(173U);
    msg.duration = 12233U;
    msg.custom.assign("RGCUAPWDVJGBIRBFTXBNGZNGKYBZOWJJYRPDGDPGJEQTVTIRZIKZNCITUVPQHFNXFRDLSQWIEDYWAQRSCMBUMFEOWIMLYHHHBVUWEDJKPZOVFHQCUDANMLUVEYCLPAFIEESFUOOMCTCXQLMLFWLNRATUDKJXJKBXDKHSENAYHKVVDAXSHFYPIFUSKRGNMALWESRWMQSHKSTQJCCIALYGQTTWX");

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
    msg.setTimeStamp(0.29346746636782317);
    msg.setSource(64676U);
    msg.setSourceEntity(48U);
    msg.setDestination(52755U);
    msg.setDestinationEntity(241U);
    msg.duration = 10785U;
    msg.custom.assign("HWMIAJRRCGVGGQUUZVEIGQXIJSLUKNHYVISEOKPCU");

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
    msg.setTimeStamp(0.9304665518814339);
    msg.setSource(7078U);
    msg.setSourceEntity(20U);
    msg.setDestination(10689U);
    msg.setDestinationEntity(167U);
    msg.duration = 50760U;
    msg.custom.assign("IBFAXVFYNXHHQYGKUVCHYJTWRHNXOBMCATTBHMTHUZAICSFPXNTRQLZT");

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
    msg.setTimeStamp(0.0939671638173466);
    msg.setSource(38389U);
    msg.setSourceEntity(99U);
    msg.setDestination(15889U);
    msg.setDestinationEntity(64U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5078623646390027;
    tmp_msg_0.speed_units = 100U;
    msg.control.set(tmp_msg_0);
    msg.duration = 64531U;
    msg.custom.assign("DQDKHYRVDRZPFMYSHJEAMTKZPYEQFGZBYOZSEQNZQXLIFLWANMTQOLCGNMQJQZBPZETJFBSUIHPAUCGVGPOXAGPIDMMCKDTCCELRWLXXDGHXKSPVLEESASUTERIVCIVBUXGCNNKDSKBPRQHYUOLJHWPQNNGYIDBSUKEOREBFWIJTAJRKQBWXJHDWKMOWFLVALSCUHBOJWYMUTXNZ");

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
    msg.setTimeStamp(0.28682469379930886);
    msg.setSource(11383U);
    msg.setSourceEntity(220U);
    msg.setDestination(9151U);
    msg.setDestinationEntity(190U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.21442024921009661;
    msg.control.set(tmp_msg_0);
    msg.duration = 28816U;
    msg.custom.assign("GDBIYESWCFYJAKJLTGVNQXPRUNUPENKFYSRZDAOZFPACIZAJQJCQROAEYYVJLWQLHOMNXHJEVSVBGFTSXZJMBILEAUFKPENISBMNFIHOKHDQGYVMEDBVSDAOXZRJHCURKRIFCPPLWBFWKJGM");

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
    msg.setTimeStamp(0.661126167434789);
    msg.setSource(10808U);
    msg.setSourceEntity(39U);
    msg.setDestination(27569U);
    msg.setDestinationEntity(142U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3329060765U;
    tmp_msg_0.start_lat = 0.046234795301341225;
    tmp_msg_0.start_lon = 0.3567353956548708;
    tmp_msg_0.start_z = 0.594388370222427;
    tmp_msg_0.start_z_units = 59U;
    tmp_msg_0.end_lat = 0.544539443659109;
    tmp_msg_0.end_lon = 0.12140149827945756;
    tmp_msg_0.end_z = 0.3101351250540503;
    tmp_msg_0.end_z_units = 168U;
    tmp_msg_0.speed = 0.27282487285559864;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.lradius = 0.6001733874600019;
    tmp_msg_0.flags = 161U;
    msg.control.set(tmp_msg_0);
    msg.duration = 60249U;
    msg.custom.assign("QGFULUDHIXHGHWQXGHLNWCR");

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
    msg.setTimeStamp(0.20968024365487103);
    msg.setSource(47590U);
    msg.setSourceEntity(235U);
    msg.setDestination(12422U);
    msg.setDestinationEntity(190U);
    msg.timeout = 42250U;
    msg.lat = 0.7207222058982359;
    msg.lon = 0.5588001460627594;
    msg.z = 0.8092296866000246;
    msg.z_units = 115U;
    msg.speed = 0.37443527183993786;
    msg.speed_units = 31U;
    msg.bearing = 0.950986510661508;
    msg.cross_angle = 0.5099210727302634;
    msg.width = 0.23141087629968937;
    msg.length = 0.6963015227177125;
    msg.hstep = 0.686418173965706;
    msg.coff = 12U;
    msg.alternation = 70U;
    msg.flags = 43U;
    msg.custom.assign("YPAMMULCXYWIMVJJNAAZLBIGALKTVPUVHRTOMFZFCPYKWRPYFLQFUKYSGKPOQPWIZFAVDXYEBYZZUTCOLSBQXVRVTGICWEQANKJLNBEQEJFGTMHOUAEXXBSEPFXZINIW");

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
    msg.setTimeStamp(0.7534270504782716);
    msg.setSource(26861U);
    msg.setSourceEntity(102U);
    msg.setDestination(33824U);
    msg.setDestinationEntity(92U);
    msg.timeout = 59305U;
    msg.lat = 0.9651789917832181;
    msg.lon = 0.2628825826416832;
    msg.z = 0.1771130524021285;
    msg.z_units = 20U;
    msg.speed = 0.5133957121167227;
    msg.speed_units = 15U;
    msg.bearing = 0.3542692079652279;
    msg.cross_angle = 0.3024070319696518;
    msg.width = 0.17743685416995225;
    msg.length = 0.9323549866174784;
    msg.hstep = 0.3597470613111342;
    msg.coff = 219U;
    msg.alternation = 65U;
    msg.flags = 56U;
    msg.custom.assign("CWYKZTPJDJUMJAGPQHROCSRZMEDRYAMCTYFCKEKIUXVZVKLVHQVTFBEQHTYIIVNIUOOASLXVYJHHWYSKONFUHPLEDEWTXHNASVWOGJULQPKFSNBPJKINMUGKMCORIUXRBLCDDAOVBAEXIFSGMBBYULLVRZHXMBFCQANSEODPQNIORZBAUMGPWTN");

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
    msg.setTimeStamp(0.4479013011871038);
    msg.setSource(26540U);
    msg.setSourceEntity(79U);
    msg.setDestination(20757U);
    msg.setDestinationEntity(41U);
    msg.timeout = 13664U;
    msg.lat = 0.4613998316682971;
    msg.lon = 0.5632090043350773;
    msg.z = 0.2583650696180937;
    msg.z_units = 13U;
    msg.speed = 0.9029674045445164;
    msg.speed_units = 80U;
    msg.bearing = 0.2195021153174337;
    msg.cross_angle = 0.5109858459515358;
    msg.width = 0.8098633490125899;
    msg.length = 0.642947656753986;
    msg.hstep = 0.9607133091462469;
    msg.coff = 249U;
    msg.alternation = 215U;
    msg.flags = 39U;
    msg.custom.assign("SXCNYLVQAPCNIRNEFORHDJBHDIPGKJUROFSJKDQHBXZIQVDBDSBYYWVOMSMLMWTJAHZEPPUVFFZUFIFIOOWPLQNQXTKNITPWKXYGYLJVYVHMUKGWCYERTCKIAZOEDOPUJJCCFSSXWMQGLOALNLEVNRSSZTUGLKOBQZRDFQRIXFDBQOYBEJRAHTRBZGBYUWCGAPHAWGWTIMUMXHXKD");

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
    msg.setTimeStamp(0.9954509759233169);
    msg.setSource(18898U);
    msg.setSourceEntity(231U);
    msg.setDestination(58545U);
    msg.setDestinationEntity(214U);
    msg.timeout = 6504U;
    msg.lat = 0.5206229375903408;
    msg.lon = 0.979190468389886;
    msg.z = 0.811208838925122;
    msg.z_units = 217U;
    msg.speed = 0.19373713397820758;
    msg.speed_units = 77U;
    msg.custom.assign("OEEJITHBHHOUSYBMGLYVGFBVQPEJZEXTCNVAOCSGIMCCEOVLRHMHGRYJADJANEFRTUMKVPLDYKULUZWKCOGSKURXXMEPYQALQWRTXQZGXSSFZDUVFDAIWGQINNJZDKCJBRNPIZCRJFBAWIZFVDKJMGUVHDTBLDHKFELJZWYEIXJCCXTWANQFNHPPQWHONBWRIGNMSMULOYRKNACQPADIBOZAVVWEQSSMDLHSYITUYFORXTKOYGKQPTL");

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
    msg.setTimeStamp(0.16182311548029615);
    msg.setSource(54270U);
    msg.setSourceEntity(198U);
    msg.setDestination(13495U);
    msg.setDestinationEntity(217U);
    msg.timeout = 23983U;
    msg.lat = 0.4240005628528126;
    msg.lon = 0.2529359694858607;
    msg.z = 0.3482672146646919;
    msg.z_units = 39U;
    msg.speed = 0.5972460651801446;
    msg.speed_units = 233U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8359089180268932;
    tmp_msg_0.y = 0.02699393651490789;
    tmp_msg_0.z = 0.2734766026632539;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OPDGDMGZIMHUQQKJTFGJYZSBJGCSSK");

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
    msg.setTimeStamp(0.2542593674980491);
    msg.setSource(65033U);
    msg.setSourceEntity(86U);
    msg.setDestination(3771U);
    msg.setDestinationEntity(85U);
    msg.timeout = 59147U;
    msg.lat = 0.0061341734754989385;
    msg.lon = 0.43556828014252524;
    msg.z = 0.5095610914776276;
    msg.z_units = 212U;
    msg.speed = 0.08681692245932626;
    msg.speed_units = 144U;
    msg.custom.assign("ZYNDFXRBLYBHCUPOZYAKJCHFSNSMXTAIZMTMDPPKVWDACEJRZVQGGWLIOISWDLOANHGGRIUFBBSKRYRQOJLBDWONDQQUPGGFFZTKMEYHGUVSKZDFXNXMTIQBMZHKHTADONLUNFLDATVIBZJEJSWKLCFHXGLIOJCMRYONMSEVYU");

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
    msg.setTimeStamp(0.49058569746033387);
    msg.setSource(13817U);
    msg.setSourceEntity(84U);
    msg.setDestination(47143U);
    msg.setDestinationEntity(62U);
    msg.x = 0.9088716894006998;
    msg.y = 0.6728005275065241;
    msg.z = 0.06012587113480583;

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
    msg.setTimeStamp(0.43840312719258423);
    msg.setSource(56376U);
    msg.setSourceEntity(28U);
    msg.setDestination(43748U);
    msg.setDestinationEntity(12U);
    msg.x = 0.8294201680760028;
    msg.y = 0.8395913151528802;
    msg.z = 0.9397398061081451;

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
    msg.setTimeStamp(0.6540043944244166);
    msg.setSource(8699U);
    msg.setSourceEntity(120U);
    msg.setDestination(10478U);
    msg.setDestinationEntity(51U);
    msg.x = 0.13964854733839382;
    msg.y = 0.4597996233946251;
    msg.z = 0.3580448409278283;

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
    msg.setTimeStamp(0.22178857409976382);
    msg.setSource(22780U);
    msg.setSourceEntity(54U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(59U);
    msg.timeout = 54254U;
    msg.lat = 0.45559697871990845;
    msg.lon = 0.44808933681785446;
    msg.z = 0.43155238829554476;
    msg.z_units = 96U;
    msg.amplitude = 0.8663348629380284;
    msg.pitch = 0.8990565969174652;
    msg.speed = 0.17024184355921645;
    msg.speed_units = 102U;
    msg.custom.assign("RHIGULXMJBSYODOJENDMAWHHGRSJDTLBCHAUOMYIFHUFDXIXYLIYUCWUUPXDAOKITCRWYJCBQRCWQSMDGKKQENZBSFPFTQBKZBASVBDYRDFJWPOVNJHTRQLIVCLB");

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
    msg.setTimeStamp(0.4199835550461998);
    msg.setSource(25903U);
    msg.setSourceEntity(236U);
    msg.setDestination(30052U);
    msg.setDestinationEntity(187U);
    msg.timeout = 58999U;
    msg.lat = 0.6222124204891215;
    msg.lon = 0.13241118714800704;
    msg.z = 0.1791729631566349;
    msg.z_units = 250U;
    msg.amplitude = 0.027021324911030042;
    msg.pitch = 0.37333714138939833;
    msg.speed = 0.7435504035714328;
    msg.speed_units = 254U;
    msg.custom.assign("NYKREWOEPZWMGGWJDSZZGZTUDLAEH");

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
    msg.setTimeStamp(0.891490365803402);
    msg.setSource(44664U);
    msg.setSourceEntity(126U);
    msg.setDestination(26794U);
    msg.setDestinationEntity(207U);
    msg.timeout = 63767U;
    msg.lat = 0.4619434336589775;
    msg.lon = 0.13618628573782987;
    msg.z = 0.2752080953744932;
    msg.z_units = 213U;
    msg.amplitude = 0.5518819503799619;
    msg.pitch = 0.27854015777613905;
    msg.speed = 0.2949205552163172;
    msg.speed_units = 148U;
    msg.custom.assign("DFKLXOFGSJMNABIJBSHDOCJLDZBTAZLHPFKWGNQLRXCUKYILPRIUKHIMNMRIDFIL");

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
    msg.setTimeStamp(0.325831391281201);
    msg.setSource(64154U);
    msg.setSourceEntity(76U);
    msg.setDestination(3062U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.7171694997431026);
    msg.setSource(47265U);
    msg.setSourceEntity(176U);
    msg.setDestination(28672U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.47780347699848236);
    msg.setSource(24417U);
    msg.setSourceEntity(155U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.7126446010651059);
    msg.setSource(59903U);
    msg.setSourceEntity(173U);
    msg.setDestination(45624U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.07798986814255038;
    msg.lon = 0.3485971836722378;
    msg.z = 0.15095076866458645;
    msg.z_units = 128U;
    msg.radius = 0.3944346925462776;
    msg.duration = 32499U;
    msg.speed = 0.2409065344396355;
    msg.speed_units = 248U;
    msg.custom.assign("DPYWFZLUGGFJEEKGDUWUKCCOQWLUWOVAXCBBWNUWHVJQRAVBMSKTZXCAKNHICVKCLHEFXEZWEQIMEIZUUAQJMLGMJRHTPRFRWOMKOOPTCAQMXSUBGTGFMFZALRAASXTTTDKWPTCGSQLZHXDLPYY");

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
    msg.setTimeStamp(0.20049713892085508);
    msg.setSource(9735U);
    msg.setSourceEntity(177U);
    msg.setDestination(29691U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.40943221206204916;
    msg.lon = 0.49902820648688484;
    msg.z = 0.104581823805307;
    msg.z_units = 122U;
    msg.radius = 0.9573281013747722;
    msg.duration = 44102U;
    msg.speed = 0.5873602227461814;
    msg.speed_units = 206U;
    msg.custom.assign("WIUSSCGOAFIKGXYMBQCYNVHFINPHEOVJRSFRYURTDNPBSYYGUHFGAYGJSMBQEOZKZDACTFVIVWWMUIFXMLXBSCKDHGLGYUQALGJCKLYHPWNXPZRHQOJDVTAVYRMLVJPPPVRBOZIDFNBXJNQXTARBJZHTEUOZSPDJAURMNCDIHWWWWILAWTOEDGBENKMKWSNAKFCZLUZNSFMGTRAHHZBCJOCUEERZOBLKTFQMXPTOVQXLQL");

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
    msg.setTimeStamp(0.042776284106107676);
    msg.setSource(36421U);
    msg.setSourceEntity(56U);
    msg.setDestination(60125U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.03208169273905315;
    msg.lon = 0.6901140025426709;
    msg.z = 0.4731093045510265;
    msg.z_units = 2U;
    msg.radius = 0.2852851118070041;
    msg.duration = 62392U;
    msg.speed = 0.8252895542005005;
    msg.speed_units = 110U;
    msg.custom.assign("PWHOZLJLGFBKFCAZDZTQZYSUSWKPJMRCQVTYHOISPKJYTHCMMOOVNQWACUBWPOKLIUIZEGHHPSGEJFSVXFVBEMUSJJHZFBEWJCERL");

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
    msg.setTimeStamp(0.6248362296552051);
    msg.setSource(62458U);
    msg.setSourceEntity(112U);
    msg.setDestination(61311U);
    msg.setDestinationEntity(23U);
    msg.timeout = 42960U;
    msg.flags = 26U;
    msg.lat = 0.7433222065480185;
    msg.lon = 0.377581447759623;
    msg.start_z = 0.47498612529065987;
    msg.start_z_units = 186U;
    msg.end_z = 0.22668039117857386;
    msg.end_z_units = 209U;
    msg.radius = 0.8079085074517648;
    msg.speed = 0.587202748426688;
    msg.speed_units = 17U;
    msg.custom.assign("LCNAJOFBXRTLAMUMRSPBEQFSOVEEFIUQSVAKDDSLGCDXOGKCDZFSGUVBOLBWUDYBZBLSPMTZWWIRADYYTSPOSWIMJTGOCRFSTKUMQEKXZGMGHQZZLEEHWCRVQICGEZYNFETVXLRGIHNVCWAUYZXYFVAYKQKMXTXQJHHTXPRPHMYKLAHZFPKNWEIPEWJOXJTQXWUNJFBHZNOCSCAVYJLDUGNBLDHPRWJOIIAMRDHPGMQD");

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
    msg.setTimeStamp(0.32852266001000563);
    msg.setSource(53308U);
    msg.setSourceEntity(67U);
    msg.setDestination(15949U);
    msg.setDestinationEntity(202U);
    msg.timeout = 24402U;
    msg.flags = 216U;
    msg.lat = 0.13303016382661914;
    msg.lon = 0.6019967268015742;
    msg.start_z = 0.714566802532029;
    msg.start_z_units = 227U;
    msg.end_z = 0.6485038293876462;
    msg.end_z_units = 112U;
    msg.radius = 0.7156622254556309;
    msg.speed = 0.8323058288035563;
    msg.speed_units = 118U;
    msg.custom.assign("NEBBODJFQGOATMHLNWRMYTJHRTAGCZUFVCJGWCBBXRTVKUQWAAEINEGEGYQGKOOJSHSSDUWCP");

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
    msg.setTimeStamp(0.0687454390246337);
    msg.setSource(58481U);
    msg.setSourceEntity(223U);
    msg.setDestination(61685U);
    msg.setDestinationEntity(0U);
    msg.timeout = 7212U;
    msg.flags = 134U;
    msg.lat = 0.24838279795947038;
    msg.lon = 0.19889505088259363;
    msg.start_z = 0.31731703490435836;
    msg.start_z_units = 1U;
    msg.end_z = 0.4035055100723779;
    msg.end_z_units = 81U;
    msg.radius = 0.5117830246353402;
    msg.speed = 0.18723437105571084;
    msg.speed_units = 51U;
    msg.custom.assign("YFFLNSVVRHXUUTTOCKRVMJTEESNARQDCQBJARACDUQRUDMDLJYPPAQWEQLIFGGXHRWLKUGFUAFGXOJWITWDHVZAWVAJEFGFTMYOKBIOBVIYSLPLKKPNVZCJNTPVLXYQHPWHBKKEOMDWNZWBIEOXMKZLDAIGAPRHXZHVZBHGSHJPPKSGYMMMJKDYNNCFDLNEUQXYNCOJZCMBIGWCTTNXTQAEWSTSSIOUYBQQ");

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
    msg.setTimeStamp(0.7808350074496271);
    msg.setSource(64139U);
    msg.setSourceEntity(10U);
    msg.setDestination(2557U);
    msg.setDestinationEntity(178U);
    msg.timeout = 59707U;
    msg.lat = 0.10526543533921406;
    msg.lon = 0.687512485294436;
    msg.z = 0.09035735679099777;
    msg.z_units = 234U;
    msg.speed = 0.9132978166090391;
    msg.speed_units = 96U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6476207173950692;
    tmp_msg_0.y = 0.855691525071005;
    tmp_msg_0.z = 0.7193423048463677;
    tmp_msg_0.t = 0.8921031327669375;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GDMGZLHZXMYBDECMDUAWCJBPPYZSPXFDKHLJTAPUVAGSWYWVRTJLHGZONOBUWKIGIUQXOCLTUEMWXDBFFRSGMUDRACJOFVAEJZRSKEDCOQGJHVRLWWSDZKIYVRMBKHEDROEHNWALHTTBXNIGWQPXTJOIYFCSKUPFUCALMNZGJNAOWECNTQCMXPENTMJQVZAZPAETEGHHSXTBBSFJCKSBBQYYUMKQYFPOLHNVXILFNR");

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
    msg.setTimeStamp(0.9965004736789156);
    msg.setSource(63599U);
    msg.setSourceEntity(179U);
    msg.setDestination(56335U);
    msg.setDestinationEntity(175U);
    msg.timeout = 24671U;
    msg.lat = 0.34163026820557785;
    msg.lon = 0.8090247000647375;
    msg.z = 0.9315349498925777;
    msg.z_units = 36U;
    msg.speed = 0.9694158963208472;
    msg.speed_units = 130U;
    msg.custom.assign("UJSFUFWORVWIFMGXHXBVFWQVGMAWASYAVVXGWXQUGUAPCSOXWHIHJWYALFUPUGCERHNSQQJPYRDDLEFXKDRUKZCYBPXCTIVSGCFMPHLZNDXTOJZSMPTTFSDLITWCKNHJDAIAGKEKEQ");

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
    msg.setTimeStamp(0.10266399059617692);
    msg.setSource(32293U);
    msg.setSourceEntity(231U);
    msg.setDestination(18880U);
    msg.setDestinationEntity(16U);
    msg.timeout = 57570U;
    msg.lat = 0.8241350728530924;
    msg.lon = 0.3039170078642006;
    msg.z = 0.07434178803570535;
    msg.z_units = 41U;
    msg.speed = 0.7334579387825215;
    msg.speed_units = 197U;
    msg.custom.assign("WDMDCBGGOFRATWXFJMKZDCUONSQMMJIOJZRZTPCKUSLPAQYOYHCUJOJIDFQKXYGZFANHVTLWPIMOLSHNXJVSAHNQRNXVJUZJLPBFOQBCCZVMKYBSWEIWEVTBIEQNGLFRZNSMEYDDFCQZEDNUACHUNWLX");

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
    msg.setTimeStamp(0.26997767723390065);
    msg.setSource(39276U);
    msg.setSourceEntity(9U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(125U);
    msg.x = 0.8371985432546118;
    msg.y = 0.20096470309896253;
    msg.z = 0.2267775972076811;
    msg.t = 0.06299343191841711;

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
    msg.setTimeStamp(0.11388570260541941);
    msg.setSource(49055U);
    msg.setSourceEntity(230U);
    msg.setDestination(39985U);
    msg.setDestinationEntity(201U);
    msg.x = 0.46941771588397874;
    msg.y = 0.09868906734055294;
    msg.z = 0.3893378889377247;
    msg.t = 0.39919823085161776;

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
    msg.setTimeStamp(0.11059507085134812);
    msg.setSource(58085U);
    msg.setSourceEntity(167U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(36U);
    msg.x = 0.2571728527834902;
    msg.y = 0.5226463545231579;
    msg.z = 0.7200501475155683;
    msg.t = 0.30394442406543287;

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
    msg.setTimeStamp(0.6468042563050526);
    msg.setSource(40868U);
    msg.setSourceEntity(230U);
    msg.setDestination(24237U);
    msg.setDestinationEntity(96U);
    msg.timeout = 59089U;
    msg.name.assign("FQJSHBLAOVADSIHQSAENRCIVCIIUDUGBIBECEGPHAMUSVQAAPENGDSEZWYYTSFDZMQTXEPRRCORXIFGTRHLJFMYYXHJMKWCEQYPQFVVRFT");
    msg.custom.assign("RDQPBENDGZZLHJUUUZIRSPIKEXDAOTLSKVMZKHLLAUNXABPICQUVDXPOHFKLYQWTIMWWYMCBCGRNNUBPBEHTBGQPFNFGKQI");

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
    msg.setTimeStamp(0.5301596040354042);
    msg.setSource(11820U);
    msg.setSourceEntity(105U);
    msg.setDestination(20660U);
    msg.setDestinationEntity(186U);
    msg.timeout = 10816U;
    msg.name.assign("WGFUHJQGXETNOMYZKAMXCUJECCNALGMBHXWTWNGZFXIIAFUYKPQPRDPJJIINFBGWBRGWPHJVNQJEZYQYBFCEALOAKMNZCXEHIQFSMSXBFOEYKHXCOFODVGRTZZQKTPRUTIJDEVMWLMHYVSKMBHZDWAYZHCKIOJRWSIOSLZXRQOTUNENWVBDSGVJELCVUPUPQLQCURPPBBRQAUDKFYCXDOLUHTGVSDSSRARMYNNPIB");
    msg.custom.assign("SMYZOAEKKQXNUPGOZBNUMNWWHMATELYNDGNLYZIHWYRHUDVYJEQAIAUIRZHXYZVLQGJPXILHCEWRVSOJZHBRUCPEFWLGEZSRHCTOLQWVPPDMTKLJVCTKFAEXUWVJDWQKFCXIPCRYSXGMJIKRRVCHXDSAXTTNFYDNRGBGTBQWQMGXJZFOQCCFBNUPATVNKYPKEHDLATDJCSBBIILEFSHFSDOJBVYXKTEF");

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
    msg.setTimeStamp(0.8137026401555599);
    msg.setSource(6753U);
    msg.setSourceEntity(216U);
    msg.setDestination(33785U);
    msg.setDestinationEntity(79U);
    msg.timeout = 29978U;
    msg.name.assign("JXMJWNNJILBZQXHQROGKTQUDYGLAHEYTHPNKIDWOSWHPUCMEAXVYJIRRVOKYVFGZXHIDUDDCXGCNBKFIUVFUDGQNQELXKIVDKZEIUVWBOZCFRAQYXDPQSPMPKFFSBPWVBMGMTMQMSXWOKSOXFLHYQAUBZYNFLEHLCJTAFANIYGTVCZMHJZJYAZBLACHJWBC");
    msg.custom.assign("WXXDKJVGJXTBRHFUYIHDCBWCQFLMSXGDLUNU");

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
    msg.setTimeStamp(0.37418698510112713);
    msg.setSource(12417U);
    msg.setSourceEntity(89U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.7851457899307558;
    msg.lon = 0.22619452133860196;
    msg.z = 0.7293460157665774;
    msg.z_units = 38U;
    msg.speed = 0.9621328438890373;
    msg.speed_units = 99U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.04337426934967192;
    tmp_msg_0.y = 0.9110850025244573;
    tmp_msg_0.z = 0.7551020858046442;
    tmp_msg_0.t = 0.9528194253247931;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5801706297859384;
    msg.custom.assign("LNUDHSSIIFMBWSSRONORFYNTNRLPHFEOVJXMMQGEVTBXKJPFXQXKANNAWRCPYPVJNKQMQVGJUGUXLACEIMFZFHIEHACARLXPXGQQYXOAWMJVECOLKOTPECLWAYGFTUHLDDABVWBEKONZFLRHJYGCQCRWGTJWBYXGTHTIPDLORZWDUYTJVZZFZRPUVOMUJZONDKGCE");

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
    msg.setTimeStamp(0.3230901943304373);
    msg.setSource(27873U);
    msg.setSourceEntity(129U);
    msg.setDestination(48794U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.572021982544953;
    msg.lon = 0.6207520676027428;
    msg.z = 0.3480189939664229;
    msg.z_units = 88U;
    msg.speed = 0.8090596087768012;
    msg.speed_units = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10888U;
    tmp_msg_0.off_x = 0.15296263749550398;
    tmp_msg_0.off_y = 0.6539422071144744;
    tmp_msg_0.off_z = 0.15587615285888956;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6738286659816304;
    msg.custom.assign("PIBDOQPFLRLCCAMXOSJGDUENGQZHYEFSERPEMPOLRVMWI");

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
    msg.setTimeStamp(0.13643244255955145);
    msg.setSource(33745U);
    msg.setSourceEntity(48U);
    msg.setDestination(14407U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.41622508750710985;
    msg.lon = 0.9389970665493106;
    msg.z = 0.7661492590359579;
    msg.z_units = 151U;
    msg.speed = 0.9828388864340846;
    msg.speed_units = 47U;
    msg.start_time = 0.03933765713416437;
    msg.custom.assign("FXXDFGZIJMI");

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
    msg.setTimeStamp(0.9503787136131966);
    msg.setSource(21660U);
    msg.setSourceEntity(17U);
    msg.setDestination(814U);
    msg.setDestinationEntity(153U);
    msg.vid = 27916U;
    msg.off_x = 0.607501267207405;
    msg.off_y = 0.4746296824494307;
    msg.off_z = 0.1371788219768073;

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
    msg.setTimeStamp(0.0034072459012879364);
    msg.setSource(59389U);
    msg.setSourceEntity(192U);
    msg.setDestination(25707U);
    msg.setDestinationEntity(43U);
    msg.vid = 34694U;
    msg.off_x = 0.3408745871131277;
    msg.off_y = 0.6642343403386467;
    msg.off_z = 0.3303351656375173;

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
    msg.setTimeStamp(0.8753023526598362);
    msg.setSource(46174U);
    msg.setSourceEntity(208U);
    msg.setDestination(17998U);
    msg.setDestinationEntity(19U);
    msg.vid = 58910U;
    msg.off_x = 0.4060940860769595;
    msg.off_y = 0.3928783216573256;
    msg.off_z = 0.15752006426646126;

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
    msg.setTimeStamp(0.7303773817135497);
    msg.setSource(6711U);
    msg.setSourceEntity(156U);
    msg.setDestination(52493U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.4284688662980497);
    msg.setSource(57273U);
    msg.setSourceEntity(217U);
    msg.setDestination(35412U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.49086834071776964);
    msg.setSource(45287U);
    msg.setSourceEntity(226U);
    msg.setDestination(17864U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.6659830427315769);
    msg.setSource(11733U);
    msg.setSourceEntity(119U);
    msg.setDestination(63868U);
    msg.setDestinationEntity(229U);
    msg.mid = 58603U;

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
    msg.setTimeStamp(0.9312248962568118);
    msg.setSource(1376U);
    msg.setSourceEntity(122U);
    msg.setDestination(9655U);
    msg.setDestinationEntity(198U);
    msg.mid = 37832U;

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
    msg.setTimeStamp(0.353845513710102);
    msg.setSource(63060U);
    msg.setSourceEntity(94U);
    msg.setDestination(51809U);
    msg.setDestinationEntity(146U);
    msg.mid = 41587U;

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
    msg.setTimeStamp(0.087820144250221);
    msg.setSource(10287U);
    msg.setSourceEntity(229U);
    msg.setDestination(3802U);
    msg.setDestinationEntity(171U);
    msg.state = 108U;
    msg.eta = 23729U;
    msg.info.assign("DKUGQZDIRBUVZMYIGCSYVGBAWBDWHXICYQFVBACRINXWSPWLOEUHWWIAOEJQGVUBJMMDFGXOQUXXXJMFSZLBMNASMZGCPNQVZKTOEFNCVFTWPPNITJJNEA");

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
    msg.setTimeStamp(0.32564661075657664);
    msg.setSource(62196U);
    msg.setSourceEntity(123U);
    msg.setDestination(36672U);
    msg.setDestinationEntity(249U);
    msg.state = 194U;
    msg.eta = 45109U;
    msg.info.assign("IOVYCSHWBUXCLTDCVHUXREPSDGGLDAQIHDWTWAPKFUISHMAAZKSENTINKFIGRMOHNMXORVBUAIMPCOQMQFWZNZJPELDOMKHLCHSOXRUIPJBMKJKVKGBDTVEYDXBNYDZETTJXUJGFJVCVYXCMNRNFOVCGWESTTTAPEQLXPUNHJNYILDQQWGFYGZEVZPBFSOWYGTMWIULLUYXVJZJAFZAGPOEQR");

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
    msg.setTimeStamp(0.23020262740707986);
    msg.setSource(16835U);
    msg.setSourceEntity(85U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(88U);
    msg.state = 33U;
    msg.eta = 22367U;
    msg.info.assign("JBPYOTQLUKSCSRJVZEEFZZXZUMCXZGNGOJWLRMXOQATSADLQRYKSSZASGFUCHBRHZZWELXLICFHWARUOBYMODIDBOMDTWYTYTJBVHKPBXNGWOGGGCHBPZMRURJYVVNCICUKPJURXGRINPUXQVNXIWOQAUSIFVNWAQKTOHLDGPKTWQADDJCLMMMLJH");

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
    msg.setTimeStamp(0.5825402216895457);
    msg.setSource(50026U);
    msg.setSourceEntity(7U);
    msg.setDestination(8965U);
    msg.setDestinationEntity(102U);
    msg.system = 44046U;
    msg.duration = 55602U;
    msg.speed = 0.8781030816315619;
    msg.speed_units = 69U;
    msg.x = 0.037583132420357046;
    msg.y = 0.8781242922462456;
    msg.z = 0.023917071105122867;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.3207518079826428);
    msg.setSource(34661U);
    msg.setSourceEntity(198U);
    msg.setDestination(58845U);
    msg.setDestinationEntity(25U);
    msg.system = 33821U;
    msg.duration = 4613U;
    msg.speed = 0.1812442395063285;
    msg.speed_units = 97U;
    msg.x = 0.9494943642713508;
    msg.y = 0.32275612251522046;
    msg.z = 0.012721348411900646;
    msg.z_units = 235U;

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
    msg.setTimeStamp(0.5037365486015662);
    msg.setSource(32587U);
    msg.setSourceEntity(224U);
    msg.setDestination(20375U);
    msg.setDestinationEntity(219U);
    msg.system = 18837U;
    msg.duration = 45711U;
    msg.speed = 0.7474468571067744;
    msg.speed_units = 147U;
    msg.x = 0.20126685925639654;
    msg.y = 0.24395791639314612;
    msg.z = 0.4946122313528716;
    msg.z_units = 154U;

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
    msg.setTimeStamp(0.06659548276534577);
    msg.setSource(54289U);
    msg.setSourceEntity(160U);
    msg.setDestination(7375U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.47924423082551415;
    msg.lon = 0.7589937342395129;
    msg.speed = 0.45160584292441996;
    msg.speed_units = 127U;
    msg.duration = 31444U;
    msg.sys_a = 10114U;
    msg.sys_b = 54209U;
    msg.move_threshold = 0.5002463301141133;

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
    msg.setTimeStamp(0.10998529981315563);
    msg.setSource(45589U);
    msg.setSourceEntity(151U);
    msg.setDestination(12718U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.7364225093150297;
    msg.lon = 0.8034854348570172;
    msg.speed = 0.5520121195610852;
    msg.speed_units = 155U;
    msg.duration = 16316U;
    msg.sys_a = 48557U;
    msg.sys_b = 16307U;
    msg.move_threshold = 0.8213383022868792;

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
    msg.setTimeStamp(0.5442366279206174);
    msg.setSource(60900U);
    msg.setSourceEntity(232U);
    msg.setDestination(5426U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.6769413959520701;
    msg.lon = 0.5613099716089953;
    msg.speed = 0.40612660747827434;
    msg.speed_units = 97U;
    msg.duration = 32058U;
    msg.sys_a = 60652U;
    msg.sys_b = 24213U;
    msg.move_threshold = 0.7252112163724018;

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
    msg.setTimeStamp(0.3974481952649499);
    msg.setSource(32175U);
    msg.setSourceEntity(17U);
    msg.setDestination(46710U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.5247392888984056;
    msg.lon = 0.216928075202921;
    msg.z = 0.29770371811457574;
    msg.z_units = 127U;
    msg.speed = 0.4194715154171582;
    msg.speed_units = 58U;
    msg.custom.assign("XXPMYECZQSTVYEPJQPAKFFDEBZQNULISUTEK");

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
    msg.setTimeStamp(0.8349155736200626);
    msg.setSource(11947U);
    msg.setSourceEntity(8U);
    msg.setDestination(62623U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.5941582023976614;
    msg.lon = 0.9585703917785553;
    msg.z = 0.10419980212189417;
    msg.z_units = 13U;
    msg.speed = 0.5646765387922164;
    msg.speed_units = 132U;
    msg.custom.assign("NVQHZRQNKVYKPEXAXGKKWWSJTQQJVJUHUYJQKSWSYGNJYYTALRWGDMFQIODPDAIYXEHPVAPUASHTXDGLX");

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
    msg.setTimeStamp(0.8621955773369404);
    msg.setSource(64119U);
    msg.setSourceEntity(52U);
    msg.setDestination(10318U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.8388953873355901;
    msg.lon = 0.19072940138770256;
    msg.z = 0.8108891189798504;
    msg.z_units = 184U;
    msg.speed = 0.13026645069275877;
    msg.speed_units = 105U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.40571213671937145;
    tmp_msg_0.lon = 0.3286856637640384;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VOWTBHVUWYUHPXSJJBZABOFIMMNDOLPQJEXKBQIPHDEUOEFHUGGSYLYATYXMVQWHFDEQMJUIAUKSDGFTOWYTPLBCANBVWJKVBJTZERSQOXNLXIAZDOVIUQEQIVDCOJSZL");

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
    msg.setTimeStamp(0.9501473144653269);
    msg.setSource(14538U);
    msg.setSourceEntity(76U);
    msg.setDestination(49440U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.620893632109361;
    msg.lon = 0.5823504421174146;

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
    msg.setTimeStamp(0.4265758987434205);
    msg.setSource(64990U);
    msg.setSourceEntity(198U);
    msg.setDestination(46904U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.22695057140030572;
    msg.lon = 0.40678368226939987;

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
    msg.setTimeStamp(0.10767875394497695);
    msg.setSource(25112U);
    msg.setSourceEntity(230U);
    msg.setDestination(5881U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.44768163695207397;
    msg.lon = 0.2869942685095177;

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
    msg.setTimeStamp(0.26332511111534473);
    msg.setSource(5389U);
    msg.setSourceEntity(118U);
    msg.setDestination(44291U);
    msg.setDestinationEntity(108U);
    msg.timeout = 38101U;
    msg.lat = 0.40249168686896586;
    msg.lon = 0.9082019960519412;
    msg.z = 0.1014673062603274;
    msg.z_units = 130U;
    msg.pitch = 0.15687116767632114;
    msg.amplitude = 0.7438120271643436;
    msg.duration = 55429U;
    msg.speed = 0.3786313267673973;
    msg.speed_units = 119U;
    msg.radius = 0.7632114688728351;
    msg.direction = 251U;
    msg.custom.assign("KNKPBECRUHPHBXIWTIYVMCYMTFHZDLECYWMFFSWPISFHUSMSBOSJOTZKYKVJZNKGUMRJRVNVCWKXWALCBJDBAUO");

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
    msg.setTimeStamp(0.07566800950845032);
    msg.setSource(3492U);
    msg.setSourceEntity(126U);
    msg.setDestination(32138U);
    msg.setDestinationEntity(36U);
    msg.timeout = 14665U;
    msg.lat = 0.731831952092918;
    msg.lon = 0.4910711176782582;
    msg.z = 0.6184785724544605;
    msg.z_units = 71U;
    msg.pitch = 0.8156234628613377;
    msg.amplitude = 0.4323328675855904;
    msg.duration = 63322U;
    msg.speed = 0.1965609457712142;
    msg.speed_units = 191U;
    msg.radius = 0.6094755010585498;
    msg.direction = 160U;
    msg.custom.assign("UEKUJWQXPRGTPLHXKIAMNKYTBVXDKHCJAELUFIADHUYLVGMYJZCUOWCCTVFWREIODUNKSAJZEBMBQSUTNIRDPORZDRQAMMCVDKYGJVBWEXPYODJGRDQKFSFCMKEZIHHUJPEQNHQASVOCIYLZJES");

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
    msg.setTimeStamp(0.5469436711728961);
    msg.setSource(49777U);
    msg.setSourceEntity(50U);
    msg.setDestination(60658U);
    msg.setDestinationEntity(9U);
    msg.timeout = 32381U;
    msg.lat = 0.39920313315747114;
    msg.lon = 0.05455362033005218;
    msg.z = 0.31736823210537524;
    msg.z_units = 82U;
    msg.pitch = 0.7110139574172583;
    msg.amplitude = 0.34902295247877335;
    msg.duration = 38591U;
    msg.speed = 0.9735379991798575;
    msg.speed_units = 199U;
    msg.radius = 0.5758148063930338;
    msg.direction = 5U;
    msg.custom.assign("MPFBLDSRPKIECEDXIHUCZCXWZZLYMGIQF");

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
    msg.setTimeStamp(0.3060302046801957);
    msg.setSource(3257U);
    msg.setSourceEntity(172U);
    msg.setDestination(13819U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("BKPCBNZELCZVZIJYYUHBLFZNTXAHUADMWOMDAFWUNDXMEEICXHOFKFJACSPARISPGOMVKGCEZXCAUNHOUSGTVTDGRHBKGORSSLQBFKHWTPMTGAWPTQGYHVFWQUVBGUKZDMYLMAZVWWBEHQXBJIJSTOOCLJWKTRYKWQEQYQXRJLXL");
    msg.reference_frame = 249U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16384U;
    tmp_msg_0.off_x = 0.8157519623668765;
    tmp_msg_0.off_y = 0.7104030411407205;
    tmp_msg_0.off_z = 0.348193838141831;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CFQUUXVDJRDFEYMKKWJTUWNFNYETNLLXUQYDTIMAIJQILIMFKAUBAQHWMRHGCMIHVMGDJIQENVLPHDWYASNSNRHLBXVRGF");

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
    msg.setTimeStamp(0.6442183121692171);
    msg.setSource(29685U);
    msg.setSourceEntity(52U);
    msg.setDestination(60497U);
    msg.setDestinationEntity(107U);
    msg.formation_name.assign("OTWWFLSHLENWPDEYFMSXHDFWYTPMUNDNSVWIEXUYRRUAOUVOGKNVHYHBYIANFRXQIVKBKQWFRIJCKJAQMQV");
    msg.reference_frame = 16U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64421U;
    tmp_msg_0.off_x = 0.8825753975353642;
    tmp_msg_0.off_y = 0.47874564226054106;
    tmp_msg_0.off_z = 0.44462305415332815;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GMOLNHMWVOGVXPUTEOWJBTEUNXXKGXPQGPUBRNJQAUXDEEUKLWIVKRVDXHGTCTMCAVPTHBRZYHECJWATMRRUFFSUIZLBNACFYZPIDQTQHNJYIPDQGBLKWXIEAIVBTWYIDYOCTGOSEJWIEOFFMNLQCAGTMKKCSZOFQPVIHUKNBKJYQSGDHADDKLZFPLEAMHRNYJMMPWRCUXYDVLLWOQSSYRGCLYFOZZRHSNJSEXAFFOIXRPVSWH");

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
    msg.setTimeStamp(0.28507125318110627);
    msg.setSource(23862U);
    msg.setSourceEntity(253U);
    msg.setDestination(16500U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("VLRWJCQSCELGHNWWUBFYNZCUMQVNMOQPZYUUTJLLI");
    msg.reference_frame = 63U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37259U;
    tmp_msg_0.off_x = 0.8985907189596063;
    tmp_msg_0.off_y = 0.40059812315125487;
    tmp_msg_0.off_z = 0.21042125552099433;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QXJQSUGTFDJCQOEFFRUQMBRODRAODAKIEOZEJNUYUVEMZJDRJBXYSFEDKGAOSUCOPFXIPIHXVRAAWRAUSLVFMTYQCLIKVLTUDZNWHOFLIKNWJFQTCMLZZRTQIHGPZWIFZPLYRPITCZDWSKNSRBJYOHENIXQSHYWMHTGBVMJLVHLJBYYEMVSYQPAEPPPBSVEVLCZCVUNLSKFMYKGGMKHGHANBXBKUWXMGEAWOTDINKUWTXNG");

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
    msg.setTimeStamp(0.5465333709312657);
    msg.setSource(24463U);
    msg.setSourceEntity(84U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(92U);
    msg.group_name.assign("QQZFSHICGKFNDFWABYVHSETRVPADQANCTWCEMTVMJMRSIDNCUYABUTMBMMOCHEJNXQYUAHWPSZLQXJVIJNZIBJXHYCRRMNIKRGDCGJGVHNBVKBFZTQHYFLSOZWRXOWOJQOVAKZHSK");
    msg.formation_name.assign("OZYLTZFXOCCSFPUGYBCVDBMOTJVPOAUMZVLTSNBAHNOGESZYPWHOXXISXVEMFBDOLXKGEVUKRTDPQMSJJUORHNGEFDHDWXLJJGPBANZAQMEAZCWKVKDTPILEEZQPVSMTIAAXGVUCUYLYETR");
    msg.plan_id.assign("AAZPDGGVCQBLVPEDQHAXHCQEWDVYYLVQJTIIKGJFPTSSULSAXJEQSMKFGYIWUKRTZOXCYGYGCOQBXIDMZDVKPARHPXLIUHO");
    msg.description.assign("TPUHDCCNCWVLTZYGLQFYFTUAJUWQDNBSF");
    msg.leader_speed = 0.032473449558609535;
    msg.leader_bank_lim = 0.47298966377733764;
    msg.pos_sim_err_lim = 0.028477394132987888;
    msg.pos_sim_err_wrn = 0.6434445006096567;
    msg.pos_sim_err_timeout = 31360U;
    msg.converg_max = 0.5512421449154105;
    msg.converg_timeout = 10676U;
    msg.comms_timeout = 65487U;
    msg.turb_lim = 0.6877724896751398;
    msg.custom.assign("WRWNUJRHREBBZAIWQYSJXNUHCBGSZKRPGVOSGOJUUORTYWSPXHTQGTXUJARPEGTBZIIAFCZQPWVTHAWDKVQHGSAKTDYLIRCMBXRAOFLNBTFFZLYCDBIHFYYULEDQTKUQHOLEZZZOOPGKMELMPJCMUEDDIICYHJFJASZKBYWCGWMIDPOAEPIEFCMONBVDKKNXFNYVQHHMIFWMVQVSFLLQDTG");

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
    msg.setTimeStamp(0.8162387681135708);
    msg.setSource(38074U);
    msg.setSourceEntity(247U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("TMQOMMWLJLNBCDTFIBDNKYERAHJQVVZFVHRWUFHWNOBJNDMJHESQUIKVGESRFPGZOCPNDCVT");
    msg.formation_name.assign("LBSJGYHQAVQHPGPDYMUQGBIKPLNAHWAVPYQFAYIUOXMGFRNRBEPTXOIXWNHEWHMJBIOJSMZKTOZXLTVKDPHFGVWGRZXUHXGYVPFWJSEKNJCQCZEDBUTATPCZEVOPLSQWVNMDCFBSIOUDYCYAHDWFVIWBGKLZLCJKYITBXAJXRZFFXIUJCSTOD");
    msg.plan_id.assign("KCPLUFGOUJTQKVWTFPCENPXSGLPQKFAHRJYDUKEUNXIUBDAYEGLCBANQJLSNRIASBUPTMOEJNQDVFBWYDSWMGVCJGUPTYBONZLQEZJZKWTROKCQIASCIAQEKVQILQWUFHSNBXXNFWIMHCSFIOPXLCIIAMGVRXCPZXTOJTMOJPDRVYKVRSHOMAMZDZEHXHMFRVR");
    msg.description.assign("JTMGXVNSOSTRWPKDIPZJZITULFMSJSNZVRLCWFPQGHTMTLAOEM");
    msg.leader_speed = 0.7166163218396939;
    msg.leader_bank_lim = 0.23976874151711136;
    msg.pos_sim_err_lim = 0.8909942124239711;
    msg.pos_sim_err_wrn = 0.034592916726375544;
    msg.pos_sim_err_timeout = 61498U;
    msg.converg_max = 0.6294134310770564;
    msg.converg_timeout = 2549U;
    msg.comms_timeout = 25948U;
    msg.turb_lim = 0.7557815188002039;
    msg.custom.assign("EGQYDLNEZWGTWHTWFCCBUESGKQSFXATTTLLSUKJQQKJXTSLXGULKBXDIRMZSWHQHSKVROHBPGEYAVNNDMQZXIHLYQHZZYOCWIRVMCEGVMEXXNCJJVYTYVSRNYIPRFPIPOWPSAIWVBJNLKLAUGUHWFSEVZJUOOFUZQIDPYLZAWMGVHCEZPABNYCJLDKKAFCMSYJAXUWPDGBAZQFFKDDIMONOBOORHJBNBMQNIBJRUEEMRVHXPTFD");

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
    msg.setTimeStamp(0.9812584477523948);
    msg.setSource(10208U);
    msg.setSourceEntity(39U);
    msg.setDestination(33994U);
    msg.setDestinationEntity(15U);
    msg.group_name.assign("TWWSUVVEPYZQTIJIVNKMITXFCBZJVXXUZMOPNXMIJIJHACNEYQPSRRLPMQRMOOLKKUDDIJLJIKPKUYMUASZUFJNUEJOCYBXNOBBDLPBGWGHWHDWATARNKMQFRVIVGHAODSJSLQDOTNFMRZLYCXERBWBWTPGLXHHANYODCCEVYIRPLHKXNZFSEWMFAGCTS");
    msg.formation_name.assign("EQPVPXXYFIBRRFKDESAFBHQUKTBYQJTSIJPXFCAKDNBQNQEOGPKDVZGMEULZINIVJMCVBWCPNDMNMDRRAIUPSLUUJHYTLXJFJYYXEGUCJIMIKGFDOTTVSRABFAKGWHYSADQSXVLGOKCCISHLVTVDKNORBNLQOWYSZAYVIWENFNRTUPZWWLCTXWWUVHJGKXEYTCHPBZERRMUCXOMGLZOHWNSJPFZO");
    msg.plan_id.assign("PAFQTZIPIRLXYQOWHKEAWJFEUKETZMRUCVZUYPIYVUWVIPEOECWXYKRGWKNQFPRDWJGOLZJNMJXBDJKYBNF");
    msg.description.assign("CPBMTWTBQKLAWFEZDZTXZICSUNMZSAGLYFNYMNMAZPBIVEUIISOBFVXRUEQPYHWAGAPLRKTIGICDJTWEYCUOPZQNOMFPVARKNURLMRKUPSLXSUZGIYN");
    msg.leader_speed = 0.9881230278755613;
    msg.leader_bank_lim = 0.24135044901079195;
    msg.pos_sim_err_lim = 0.7277108196564437;
    msg.pos_sim_err_wrn = 0.6947986739874185;
    msg.pos_sim_err_timeout = 25866U;
    msg.converg_max = 0.7262418277176331;
    msg.converg_timeout = 55566U;
    msg.comms_timeout = 10978U;
    msg.turb_lim = 0.09662686018729327;
    msg.custom.assign("SXIEOMNSAUUHUEOPJWYKHVVUMOGFIWHWXJWCJFZYXPOXRJFDFSPOGPWAEBLGYLTEGMLMPVDGGJRHFZRFSHOZE");

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
    msg.setTimeStamp(0.3812789519965166);
    msg.setSource(10132U);
    msg.setSourceEntity(219U);
    msg.setDestination(30462U);
    msg.setDestinationEntity(23U);
    msg.control_src = 37602U;
    msg.control_ent = 137U;
    msg.timeout = 0.37965908208740884;
    msg.loiter_radius = 0.469455574183836;
    msg.altitude_interval = 0.22317245227258764;

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
    msg.setTimeStamp(0.17071767229121404);
    msg.setSource(60816U);
    msg.setSourceEntity(99U);
    msg.setDestination(17047U);
    msg.setDestinationEntity(172U);
    msg.control_src = 272U;
    msg.control_ent = 100U;
    msg.timeout = 0.3683753707051728;
    msg.loiter_radius = 0.8456071834921717;
    msg.altitude_interval = 0.973992148889836;

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
    msg.setTimeStamp(0.8026021750841379);
    msg.setSource(17305U);
    msg.setSourceEntity(60U);
    msg.setDestination(62500U);
    msg.setDestinationEntity(106U);
    msg.control_src = 42924U;
    msg.control_ent = 204U;
    msg.timeout = 0.1321664914765882;
    msg.loiter_radius = 0.40022005850589004;
    msg.altitude_interval = 0.5200424027620513;

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
    msg.setTimeStamp(0.3308447446258278);
    msg.setSource(31716U);
    msg.setSourceEntity(145U);
    msg.setDestination(8378U);
    msg.setDestinationEntity(130U);
    msg.flags = 211U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46079124927597637;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6839599830941627;
    tmp_msg_1.z_units = 33U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.36937268633070697;
    msg.lon = 0.3442703483904489;
    msg.radius = 0.36900974363049965;

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
    msg.setTimeStamp(0.8289307247295288);
    msg.setSource(42447U);
    msg.setSourceEntity(228U);
    msg.setDestination(99U);
    msg.setDestinationEntity(81U);
    msg.flags = 194U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.10398581220920633;
    tmp_msg_0.speed_units = 166U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7043160943387543;
    tmp_msg_1.z_units = 106U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.13903113808894108;
    msg.lon = 0.467315129223262;
    msg.radius = 0.1943181762914753;

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
    msg.setTimeStamp(0.8725609332635273);
    msg.setSource(7059U);
    msg.setSourceEntity(174U);
    msg.setDestination(20308U);
    msg.setDestinationEntity(30U);
    msg.flags = 112U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.570108712768772;
    tmp_msg_0.speed_units = 63U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5644469381715957;
    tmp_msg_1.z_units = 182U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5774400164147965;
    msg.lon = 0.8373075736150705;
    msg.radius = 0.5623872813441269;

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
    msg.setTimeStamp(0.6961398847318269);
    msg.setSource(64074U);
    msg.setSourceEntity(46U);
    msg.setDestination(64017U);
    msg.setDestinationEntity(34U);
    msg.control_src = 46212U;
    msg.control_ent = 141U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 44U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.784448156018125;
    tmp_tmp_msg_0_0.speed_units = 135U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.464628673214057;
    tmp_tmp_msg_0_1.z_units = 13U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.21341744165839283;
    tmp_msg_0.lon = 0.20794705761012666;
    tmp_msg_0.radius = 0.011916024344671539;
    msg.reference.set(tmp_msg_0);
    msg.state = 18U;
    msg.proximity = 77U;

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
    msg.setTimeStamp(0.7812898534318257);
    msg.setSource(37869U);
    msg.setSourceEntity(81U);
    msg.setDestination(30194U);
    msg.setDestinationEntity(150U);
    msg.control_src = 51383U;
    msg.control_ent = 202U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 74U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8330192539355298;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.1390255807193902;
    tmp_tmp_msg_0_1.z_units = 127U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7214588718888983;
    tmp_msg_0.lon = 0.2408290563475609;
    tmp_msg_0.radius = 0.08012881951485595;
    msg.reference.set(tmp_msg_0);
    msg.state = 37U;
    msg.proximity = 41U;

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
    msg.setTimeStamp(0.211106434776001);
    msg.setSource(64200U);
    msg.setSourceEntity(229U);
    msg.setDestination(11061U);
    msg.setDestinationEntity(210U);
    msg.control_src = 48189U;
    msg.control_ent = 172U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 254U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5479985784551394;
    tmp_tmp_msg_0_0.speed_units = 15U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7425173422551953;
    tmp_tmp_msg_0_1.z_units = 132U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3031567129896682;
    tmp_msg_0.lon = 0.2892897294964544;
    tmp_msg_0.radius = 0.813817936053095;
    msg.reference.set(tmp_msg_0);
    msg.state = 152U;
    msg.proximity = 65U;

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
    msg.setTimeStamp(0.4685150280935948);
    msg.setSource(15358U);
    msg.setSourceEntity(49U);
    msg.setDestination(8798U);
    msg.setDestinationEntity(192U);
    msg.ax_cmd = 0.4406500228514687;
    msg.ay_cmd = 0.18525727702864825;
    msg.az_cmd = 0.2461330109292914;
    msg.ax_des = 0.3631914843564027;
    msg.ay_des = 0.3375889876175455;
    msg.az_des = 0.5749673229487643;
    msg.virt_err_x = 0.44268575336445914;
    msg.virt_err_y = 0.07055184011948445;
    msg.virt_err_z = 0.6807910785951522;
    msg.surf_fdbk_x = 0.23559197581293312;
    msg.surf_fdbk_y = 0.41778877890405663;
    msg.surf_fdbk_z = 0.8485436537371298;
    msg.surf_unkn_x = 0.555293437189373;
    msg.surf_unkn_y = 0.18748014934593438;
    msg.surf_unkn_z = 0.899316166928836;
    msg.ss_x = 0.8710271401879074;
    msg.ss_y = 0.4790667275662378;
    msg.ss_z = 0.7716327216075245;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PVOHJBTXQGLTHDOOLGCU");
    tmp_msg_0.dist = 0.7759689687620036;
    tmp_msg_0.err = 0.6942156264139686;
    tmp_msg_0.ctrl_imp = 0.17993812664425346;
    tmp_msg_0.rel_dir_x = 0.7818869652424714;
    tmp_msg_0.rel_dir_y = 0.34684579455079234;
    tmp_msg_0.rel_dir_z = 0.1520131739600612;
    tmp_msg_0.err_x = 0.853802087311685;
    tmp_msg_0.err_y = 0.46492128508931063;
    tmp_msg_0.err_z = 0.7882174278226128;
    tmp_msg_0.rf_err_x = 0.8488409766646918;
    tmp_msg_0.rf_err_y = 0.01035911411469248;
    tmp_msg_0.rf_err_z = 0.1582997635417589;
    tmp_msg_0.rf_err_vx = 0.43024478774996144;
    tmp_msg_0.rf_err_vy = 0.9415162656121144;
    tmp_msg_0.rf_err_vz = 0.18623230675719937;
    tmp_msg_0.ss_x = 0.013156185389339048;
    tmp_msg_0.ss_y = 0.8817686847714599;
    tmp_msg_0.ss_z = 0.7310392222078465;
    tmp_msg_0.virt_err_x = 0.4464957739671843;
    tmp_msg_0.virt_err_y = 0.8270242115471471;
    tmp_msg_0.virt_err_z = 0.10970120323837884;
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
    msg.setTimeStamp(0.03241704239283327);
    msg.setSource(48608U);
    msg.setSourceEntity(185U);
    msg.setDestination(9986U);
    msg.setDestinationEntity(50U);
    msg.ax_cmd = 0.9835289519636145;
    msg.ay_cmd = 0.5495199767308099;
    msg.az_cmd = 0.07313448449650906;
    msg.ax_des = 0.11703525335306186;
    msg.ay_des = 0.640205636662999;
    msg.az_des = 0.6876009864916104;
    msg.virt_err_x = 0.9143949979502599;
    msg.virt_err_y = 0.977481969038439;
    msg.virt_err_z = 0.8405565640391132;
    msg.surf_fdbk_x = 0.7780439765632665;
    msg.surf_fdbk_y = 0.8109691138389798;
    msg.surf_fdbk_z = 0.15501580198191678;
    msg.surf_unkn_x = 0.47704210423961224;
    msg.surf_unkn_y = 0.22659656554519336;
    msg.surf_unkn_z = 0.8957691425988246;
    msg.ss_x = 0.7118319150743726;
    msg.ss_y = 0.35162858052583623;
    msg.ss_z = 0.39964144491984044;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OGIREYMLZJUCSHDXCFMJQKCGBIEAYALVOYJWRDHEOFOUQWBTLNZOXXTKIGHUNKZYZTYTWRZIKPKEBCIBLVHNVBWQLYJKSIBEMZXVQSEQWGVONXYOARBSMJCPCVOFEQXHVHZNVYQTZGBYARFTPHRTLFAMBWYFDIIVTHDMLADWMUUNEXHKJPXUPJCFWCPQPBGUOMDPUJPUWENGLRIANQLXWLMVEKSSNSDAUSTCFKZQAJASZRGMDICGXDHTFSDOG");
    tmp_msg_0.dist = 0.8045616323948894;
    tmp_msg_0.err = 0.4397911018679568;
    tmp_msg_0.ctrl_imp = 0.7458806627707457;
    tmp_msg_0.rel_dir_x = 0.18283972741754384;
    tmp_msg_0.rel_dir_y = 0.9541684654584953;
    tmp_msg_0.rel_dir_z = 0.07252580526599695;
    tmp_msg_0.err_x = 0.003007488749780962;
    tmp_msg_0.err_y = 0.3017015104035725;
    tmp_msg_0.err_z = 0.839726760871774;
    tmp_msg_0.rf_err_x = 0.9088791920101569;
    tmp_msg_0.rf_err_y = 0.1967306899731589;
    tmp_msg_0.rf_err_z = 0.5929243079659071;
    tmp_msg_0.rf_err_vx = 0.10687061269919396;
    tmp_msg_0.rf_err_vy = 0.22692937304155036;
    tmp_msg_0.rf_err_vz = 0.689733985984237;
    tmp_msg_0.ss_x = 0.6700479433814213;
    tmp_msg_0.ss_y = 0.31165047379973954;
    tmp_msg_0.ss_z = 0.5428879367573346;
    tmp_msg_0.virt_err_x = 0.7789059809756921;
    tmp_msg_0.virt_err_y = 0.6659957121051865;
    tmp_msg_0.virt_err_z = 0.327335201644087;
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
    msg.setTimeStamp(0.569684586088519);
    msg.setSource(54938U);
    msg.setSourceEntity(45U);
    msg.setDestination(26124U);
    msg.setDestinationEntity(176U);
    msg.ax_cmd = 0.5862181231413861;
    msg.ay_cmd = 0.7337659880012423;
    msg.az_cmd = 0.311211372941708;
    msg.ax_des = 0.5934029411195265;
    msg.ay_des = 0.2808991194761876;
    msg.az_des = 0.6477318222674505;
    msg.virt_err_x = 0.17387297956524317;
    msg.virt_err_y = 0.9897870470996766;
    msg.virt_err_z = 0.8775480690344302;
    msg.surf_fdbk_x = 0.8663012209243792;
    msg.surf_fdbk_y = 0.590872589422088;
    msg.surf_fdbk_z = 0.9103642203996117;
    msg.surf_unkn_x = 0.0652620278975754;
    msg.surf_unkn_y = 0.655010605195776;
    msg.surf_unkn_z = 0.625484570461136;
    msg.ss_x = 0.9905365415493262;
    msg.ss_y = 0.3114432589293761;
    msg.ss_z = 0.6862876736090108;

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
    msg.setTimeStamp(0.22750797243834764);
    msg.setSource(39703U);
    msg.setSourceEntity(174U);
    msg.setDestination(38566U);
    msg.setDestinationEntity(167U);
    msg.s_id.assign("OCYIFGXKYIGJWUYTPGOCWTFAGRSZVYTSQBDRRMWEQJARYHHPWFHLSNHVLCLJAKONIOUZWCDDWNNCFBYYBLKIEJEQTKVMMMZYKHROMXPLD");
    msg.dist = 0.051036570875163445;
    msg.err = 0.22979319247343455;
    msg.ctrl_imp = 0.7022040274754806;
    msg.rel_dir_x = 0.8093891612609184;
    msg.rel_dir_y = 0.1928959899603978;
    msg.rel_dir_z = 0.15351209340541183;
    msg.err_x = 0.8738431559594974;
    msg.err_y = 0.6557675489741429;
    msg.err_z = 0.8077601844414453;
    msg.rf_err_x = 0.26507009116213676;
    msg.rf_err_y = 0.13936969510308372;
    msg.rf_err_z = 0.08272239375551471;
    msg.rf_err_vx = 0.8668715400276582;
    msg.rf_err_vy = 0.7880161130858999;
    msg.rf_err_vz = 0.37616120196600944;
    msg.ss_x = 0.5513430465249103;
    msg.ss_y = 0.22849095132351227;
    msg.ss_z = 0.23675449032614293;
    msg.virt_err_x = 0.7219191454044251;
    msg.virt_err_y = 0.39615095365322706;
    msg.virt_err_z = 0.7964799136247925;

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
    msg.setTimeStamp(0.7178467484457547);
    msg.setSource(49281U);
    msg.setSourceEntity(235U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(212U);
    msg.s_id.assign("AKZCAGIVPRTKQBRXEFJFUQEPWPVVGNQVAWQETSZZLZIVIABWEOSTTFYTZGVHDXPTRLDLGPUEULXJPMHMFWHO");
    msg.dist = 0.14496401606170606;
    msg.err = 0.5918102937136729;
    msg.ctrl_imp = 0.5793169765765165;
    msg.rel_dir_x = 0.6021872060140016;
    msg.rel_dir_y = 0.6547324612175552;
    msg.rel_dir_z = 0.9523259171817731;
    msg.err_x = 0.6881235867531809;
    msg.err_y = 0.1553908518682816;
    msg.err_z = 0.9211971562641027;
    msg.rf_err_x = 0.853492272062946;
    msg.rf_err_y = 0.6226272148109211;
    msg.rf_err_z = 0.2949379236206371;
    msg.rf_err_vx = 0.7633578452698188;
    msg.rf_err_vy = 0.2107033872742461;
    msg.rf_err_vz = 0.5967669559687439;
    msg.ss_x = 0.6402717151048511;
    msg.ss_y = 0.6878984679421961;
    msg.ss_z = 0.08547994211660337;
    msg.virt_err_x = 0.6644117968000187;
    msg.virt_err_y = 0.6818596874170352;
    msg.virt_err_z = 0.5571809282768995;

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
    msg.setTimeStamp(0.4689606409445157);
    msg.setSource(42993U);
    msg.setSourceEntity(230U);
    msg.setDestination(64867U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("ARQUMCGNIMVAGZFZMDWXBIQDGXJQZZKHRGNAKPTZPYHOUCJJYLJJIYVLIAEIPYNSVRSDOCZPWWWSKRURIQGKTHENVWDWSSDMTDNSIVMYYDUFOZFQKKVHXHUYTPGXQXEKHFJIJWJKERAEXMPASALQRZXOFTONVWLFMUFPBXHBBFLDMYHTCEOBHTOGNN");
    msg.dist = 0.45126764329985414;
    msg.err = 0.6312684984673296;
    msg.ctrl_imp = 0.7667884934243113;
    msg.rel_dir_x = 0.17630058514616742;
    msg.rel_dir_y = 0.9548794748927614;
    msg.rel_dir_z = 0.45891463909257113;
    msg.err_x = 0.5377834860281752;
    msg.err_y = 0.37696153634114704;
    msg.err_z = 0.6074987588351295;
    msg.rf_err_x = 0.63330740099123;
    msg.rf_err_y = 0.4176547309646933;
    msg.rf_err_z = 0.0693395963790463;
    msg.rf_err_vx = 0.32043796244348466;
    msg.rf_err_vy = 0.9282045568620075;
    msg.rf_err_vz = 0.4155268559210463;
    msg.ss_x = 0.8161008372108254;
    msg.ss_y = 0.22586824947771722;
    msg.ss_z = 0.5705765413609277;
    msg.virt_err_x = 0.707927379693089;
    msg.virt_err_y = 0.09403586390063279;
    msg.virt_err_z = 0.08794907770385663;

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
    msg.setTimeStamp(0.5279161089882806);
    msg.setSource(64723U);
    msg.setSourceEntity(63U);
    msg.setDestination(34292U);
    msg.setDestinationEntity(116U);
    msg.timeout = 16694U;
    msg.rpm = 0.0730409353687923;
    msg.direction = 39U;
    msg.custom.assign("PUCRJUPAFOTQEILBOGSCVOMLNDEMXCQIRTKYFVNRFYOWHITZBCBQOGZMAKDFYWAOFXYVUCTMJKJWVPYVTAANAAHJEROZJGUQMAGEFZAZSZUEDXVQDCPZBELUKJHIJNKWQRGSLSCIVHHPQPSHQGGZHXYSFIBSULXHMSRUTDGKNMUNDQJJTTTKYPXRLDDNEYNGZAXIFC");

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
    msg.setTimeStamp(0.30464571907758464);
    msg.setSource(53079U);
    msg.setSourceEntity(16U);
    msg.setDestination(28454U);
    msg.setDestinationEntity(81U);
    msg.timeout = 53489U;
    msg.rpm = 0.3130260800724415;
    msg.direction = 69U;
    msg.custom.assign("QKQQMKOOCVBDYOSMREHECXEUILUGLZXDCKCJRNASNQCOSGGIWWVXBZZQXTQNOLDHVBNVEZBTKARZAFPMFRWATMZHJRDGAUIFSJSLROFGRAQEIUFVLSWIIPCTKEEWYYWTSKVNLKOLRVXEYNIPTMMUNYIJHVTQEZUZMDBWANIAVHFMAGQJMJHDCYRPDJLOHIKQYVYFWGBYTFPJREOKWLXHFPGBNNUGCOBMXTDBXCDSPSXZSP");

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
    msg.setTimeStamp(0.755019080552045);
    msg.setSource(28042U);
    msg.setSourceEntity(130U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(157U);
    msg.timeout = 48845U;
    msg.rpm = 0.9046352353094358;
    msg.direction = 122U;
    msg.custom.assign("IQRWIORBNJAOYMOSLWSXJYUWHQGWZHVXDZVNGXFUGQU");

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
    msg.setTimeStamp(0.11274823700027603);
    msg.setSource(20585U);
    msg.setSourceEntity(91U);
    msg.setDestination(55341U);
    msg.setDestinationEntity(222U);
    msg.formation_name.assign("WNKKQWMQFSWTIKTSGZBRDDWNLSYSAYMORRULFIYPOGDTQJPTAFEKRVZRXVHRWHTQVPLNDGTSFZAAVGZOVMYVFLAGXYSZTPXHHLBDMIGSKRFHIIFFCWCNELONWUHIYNQZQJCJVEASJMKKNJEMORUYKCFUFCHOZXSVJGMKUAMMCHPJBCYDCEOCBRXWQBGVBWJNRXAMEINPEEBTLNBPZJXZOLUJYDABUTDSOQPQIHYTXLBUWXDUEHPO");
    msg.type = 95U;
    msg.op = 249U;
    msg.group_name.assign("TYYHMBCCMZQESYWFASPOJIOLVUJNNKQKLRRGGPWEYXIQIBBHJYQHSXMTAZWULKATFGILTKTARQELIGASPJZFZCYKIAWOHJDGILYUMHRJAKOBZIZCUTNPDVGJQYEXKNVPNOULDJFTNTPUTGWODQCBMXVWMYEKZEGNZSWVRFDLQOWKRFUPVMWKXSGHROCOQOPZSNJPAALUDMXCIMCCNXEDEFCNEDF");
    msg.plan_id.assign("LDXBTSCSCHIPWVRRFIKSAAFQUFSNHETLUGCDLGBTFRDVYPSMOCLHHVPPMOBAZSUVJNOKHDUWVEYYQYJOCJRKFNVIDWMSJMXQZRLMCYTPORODTKHOYXGLQPKJNLSSFKAGDXYJBQGCRCAFBIEEJZBEHIZFYIVDDFTECWBOLZVGIHBVXCQTJYJZGFE");
    msg.description.assign("RILOAZFUIRLTEPVQRKYMXNJFPMENTXUVVOJUYAKXIHQWPNXDPCLBNGSTASGFKDMHHYWQQSKVDEBACXRRQKFDUIWPAMOWDOGTQBWPEYTOVTHVZXN");
    msg.reference_frame = 43U;
    msg.leader_bank_lim = 0.0922092286892523;
    msg.leader_speed_min = 0.11808728362625309;
    msg.leader_speed_max = 0.9741228787593346;
    msg.leader_alt_min = 0.22144674000591502;
    msg.leader_alt_max = 0.09752115198120848;
    msg.pos_sim_err_lim = 0.37667615796934395;
    msg.pos_sim_err_wrn = 0.24664723037309255;
    msg.pos_sim_err_timeout = 1297U;
    msg.converg_max = 0.2979927877952562;
    msg.converg_timeout = 42875U;
    msg.comms_timeout = 17313U;
    msg.turb_lim = 0.4745733729136741;
    msg.custom.assign("MINSSYVDROPVUMGOLPKBRAZKXTRMXIPQGHLQXFOSCBKJXDCDEAYNFFQRLDZAREWBOEUBMPURBFWHAIQBLVSKMXZKKICLJKNYZNFPGJNETAECIVFBANHFJHBSROWUDJNILWVYALTSYFMSCASUJGUYCIXTXDAUZHYPVZLSWEOMHHQLOTWQZWGCDETTXCEAOBTFUMJSORKPVQDWNGZUQFLREDP");

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
    msg.setTimeStamp(0.6469569866538398);
    msg.setSource(2836U);
    msg.setSourceEntity(159U);
    msg.setDestination(60770U);
    msg.setDestinationEntity(147U);
    msg.formation_name.assign("WENJXTFIRCZTAGNLDZRNNMQRUYLBXMHQMNZOVAEREWNWRUEIXKKJHUFZMQQIRLOHPUPPEYADACXMYWYYWYQPSITRKRJEQSXHKCVDRVYJGZKFQHAOSNTCLDPWSCULLBJMDHSOGKTFGQWAATSKVCPKBVDKVZMOXMBETQDBUFLFKBIOAHMIFGWYNDTFWUBQBNYOJNPOXZAGAEJXEDDUUHELFSPSOCYIBGGCTMTHLCOGRSFCJIVPHUVXPXZ");
    msg.type = 241U;
    msg.op = 7U;
    msg.group_name.assign("RSIQJRMFYGAWWJFNQBDHOAGPPGBKZRV");
    msg.plan_id.assign("EHMPQNMWJBGSTBIDEQNERMWUQQBRRQWCGPZYWMIGGLDKOIQWEASZPVNYXROHPVESBXQCBSLXUIGXOKDJZKQIHGOJVCNPSSGYDUZNFPXFNARKAVBGRNJXVKUTLEXTUDRVTCYZIODIXSLULWFJHCJFBXFANJVWYYHOUMPFCTGTAMKJUQZCVHPDZSRIHMSIYZHCAOCUULKNWDKHEARRIKJ");
    msg.description.assign("VRSFBDHBDJPTWHFIGNLTZKKVYCYXNWGNRWRSXKPXMEIIQSIYSJVTQMQRJ");
    msg.reference_frame = 203U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38606U;
    tmp_msg_0.off_x = 0.3560722530733388;
    tmp_msg_0.off_y = 0.18004477137136876;
    tmp_msg_0.off_z = 0.07523676879583197;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7621742605876096;
    msg.leader_speed_min = 0.8329918098265758;
    msg.leader_speed_max = 0.6222136568078768;
    msg.leader_alt_min = 0.8104535009415322;
    msg.leader_alt_max = 0.7803659490371763;
    msg.pos_sim_err_lim = 0.0022549479429024855;
    msg.pos_sim_err_wrn = 0.6554238165502138;
    msg.pos_sim_err_timeout = 3500U;
    msg.converg_max = 0.8174779183522863;
    msg.converg_timeout = 60894U;
    msg.comms_timeout = 39271U;
    msg.turb_lim = 0.9796959288774486;
    msg.custom.assign("UFQUDWZULMMLLEINZK");

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
    msg.setTimeStamp(0.22876689722231924);
    msg.setSource(23051U);
    msg.setSourceEntity(209U);
    msg.setDestination(37487U);
    msg.setDestinationEntity(132U);
    msg.formation_name.assign("ERNUGAUCIBYFTSYMN");
    msg.type = 90U;
    msg.op = 225U;
    msg.group_name.assign("HIBNZUTRCYOQMDFTKJLZXGJOEAQBECDBRLEAXRIIWQRBKKBFSPXNFXDSBTSCLRAJSWWFMBZUXNSWZQMSLBUMTEWXIVNIXSMYXUNJLVFPVUZNWHGVPTKHWCAXIMVPOIRPPRDS");
    msg.plan_id.assign("EPVNIKUKGACBFFEINXSTGRIGPANKYQHMKNSMDKVULIPSCIZPALMQVGHZCYMHGMZNTVWHJUAWB");
    msg.description.assign("MHWZKADMNLGPWGLRFTMTCQBINDYCCODDJUEOCSQADFMUOQAYRFSVILTYLOLIWDKEKEPNJYQTFYERBJXBRWPVKUDHXGCHRXPPJSGUXAOUOPNIZQJDUBBKNGBVOPIXCSVSWKFHTRYMZSIEROLWHIZIJCWYKWBCZYFSUHTTIJDPDGA");
    msg.reference_frame = 248U;
    msg.leader_bank_lim = 0.6667512600807853;
    msg.leader_speed_min = 0.09827055119488459;
    msg.leader_speed_max = 0.776467463279357;
    msg.leader_alt_min = 0.8600244267600468;
    msg.leader_alt_max = 0.11993554336229206;
    msg.pos_sim_err_lim = 0.713931581652187;
    msg.pos_sim_err_wrn = 0.05625562723177413;
    msg.pos_sim_err_timeout = 4574U;
    msg.converg_max = 0.7965816141335328;
    msg.converg_timeout = 62331U;
    msg.comms_timeout = 60931U;
    msg.turb_lim = 0.8841744624837126;
    msg.custom.assign("AVQZNQWDZSOPVREMMSJBCWOOAXVQYYOLELBJBPLZGWVLPSCMFLFLNQPAADHFW");

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
    msg.setTimeStamp(0.5206222916053027);
    msg.setSource(57755U);
    msg.setSourceEntity(13U);
    msg.setDestination(30155U);
    msg.setDestinationEntity(136U);
    msg.timeout = 48741U;
    msg.lat = 0.3446337780363581;
    msg.lon = 0.6070961156330962;
    msg.z = 0.09133436667845818;
    msg.z_units = 65U;
    msg.speed = 0.13919490526577583;
    msg.speed_units = 157U;
    msg.custom.assign("FWSSUCVLGFRLVMJOXPMIIFYTFBZFPETQULUSFISJGRRDLOTSXEVQIBTXEEZLDUWDIFBJGXDFGCZWUYOAGKPOVKSZNHROAGOCYHUKSUWQFLDMAQDNJWU");

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
    msg.setTimeStamp(0.14411674630653448);
    msg.setSource(3413U);
    msg.setSourceEntity(175U);
    msg.setDestination(22375U);
    msg.setDestinationEntity(209U);
    msg.timeout = 2158U;
    msg.lat = 0.9727018973145707;
    msg.lon = 0.20310782542605643;
    msg.z = 0.6422746089221374;
    msg.z_units = 51U;
    msg.speed = 0.42347333351272676;
    msg.speed_units = 65U;
    msg.custom.assign("HPPRNTCXRVMMWYAHEIOCOZXYCIQLUZVFVWJVGH");

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
    msg.setTimeStamp(0.8188788056442197);
    msg.setSource(57177U);
    msg.setSourceEntity(101U);
    msg.setDestination(37261U);
    msg.setDestinationEntity(175U);
    msg.timeout = 55269U;
    msg.lat = 0.14484787976324642;
    msg.lon = 0.4684811802606278;
    msg.z = 0.619777319777744;
    msg.z_units = 99U;
    msg.speed = 0.12305708221971112;
    msg.speed_units = 104U;
    msg.custom.assign("HKKHZPHIOIVPLTNRZLFLDUZWGFVOWYGNLKZUSBPMNJASESKADSHSHJVXTAVVBCOEWFLMMMMLIMWNOBRERUFGKPTRMBXUXUXICYFENXJGVHFGSCNOLCDECCHJLLAUKOWQRJZCDYBBUIJAIONWAQIPTDQTIYWDSAASTOFREZXYMKMPPZYVQGRMHETRXGGZQOFPXSZIYGVY");

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
    msg.setTimeStamp(0.15001451018177647);
    msg.setSource(63137U);
    msg.setSourceEntity(83U);
    msg.setDestination(32059U);
    msg.setDestinationEntity(169U);
    msg.timeout = 36859U;
    msg.lat = 0.20028156872296388;
    msg.lon = 0.22245990587987974;
    msg.z = 0.29104275913957056;
    msg.z_units = 144U;
    msg.speed = 0.6194636449187899;
    msg.speed_units = 203U;
    msg.custom.assign("ROOSPJUWMEMPWULUEEKTGGKAXJTWX");

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
    msg.setTimeStamp(0.9377747346015743);
    msg.setSource(34945U);
    msg.setSourceEntity(8U);
    msg.setDestination(3357U);
    msg.setDestinationEntity(47U);
    msg.timeout = 20765U;
    msg.lat = 0.773255837503677;
    msg.lon = 0.9622671375989458;
    msg.z = 0.923523349558206;
    msg.z_units = 185U;
    msg.speed = 0.1948558437501796;
    msg.speed_units = 184U;
    msg.custom.assign("ESLZVHYNIUEXKJWYVOBSBVLCXDGYKSWZKOABBXOILRPBHTLCZOMATNQCXWYDYCEHHXDFARBVPQGEQXMUFNZVDBLXYHMPRJOGSCUYJYATIWQGLEANDLFMJSWVZLGDIRESQSJNDDPZPPQURWCRXRJLJGVVCUOFPMRKGEKIZKWWDXAGCANBNECPUSTHZZTQYCBFIEFTIQDOAVPVIMKFO");

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
    msg.setTimeStamp(0.3358264058168754);
    msg.setSource(12452U);
    msg.setSourceEntity(194U);
    msg.setDestination(21080U);
    msg.setDestinationEntity(172U);
    msg.timeout = 43655U;
    msg.lat = 0.3825984249922818;
    msg.lon = 0.3572036554202882;
    msg.z = 0.75880036153646;
    msg.z_units = 151U;
    msg.speed = 0.7917154487987508;
    msg.speed_units = 52U;
    msg.custom.assign("DUGVQIMRBKGDLOGDCHZISESGMAHPLUYYBSKBIMQFUBKEPDNDQNKNWSATLAWJBHQTOBKAJQZLISFGCTWYVERNHNVPWY");

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
    msg.setTimeStamp(0.8503733618239115);
    msg.setSource(62343U);
    msg.setSourceEntity(248U);
    msg.setDestination(9226U);
    msg.setDestinationEntity(130U);
    msg.arrival_time = 0.8785185771799522;
    msg.lat = 0.49704192813411463;
    msg.lon = 0.13436404123232282;
    msg.z = 0.5647212930076514;
    msg.z_units = 231U;
    msg.travel_z = 0.7956357082058575;
    msg.travel_z_units = 68U;
    msg.delayed = 253U;

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
    msg.setTimeStamp(0.025215172352403448);
    msg.setSource(60727U);
    msg.setSourceEntity(224U);
    msg.setDestination(7635U);
    msg.setDestinationEntity(116U);
    msg.arrival_time = 0.36555670097551474;
    msg.lat = 0.9652968120166046;
    msg.lon = 0.18717645033674757;
    msg.z = 0.3040734670540566;
    msg.z_units = 78U;
    msg.travel_z = 0.5051521667506647;
    msg.travel_z_units = 57U;
    msg.delayed = 145U;

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
    msg.setTimeStamp(0.8649014687986581);
    msg.setSource(21189U);
    msg.setSourceEntity(18U);
    msg.setDestination(14072U);
    msg.setDestinationEntity(187U);
    msg.arrival_time = 0.29583996746019126;
    msg.lat = 0.14961777880058447;
    msg.lon = 0.9193947696540733;
    msg.z = 0.389598597996875;
    msg.z_units = 99U;
    msg.travel_z = 0.9368715339041301;
    msg.travel_z_units = 219U;
    msg.delayed = 42U;

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
    msg.setTimeStamp(0.16914268834832658);
    msg.setSource(60327U);
    msg.setSourceEntity(175U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.22065079470660554;
    msg.lon = 0.5737112358527771;
    msg.z = 0.8788622418076193;
    msg.z_units = 161U;
    msg.speed = 0.20650741371492098;
    msg.speed_units = 201U;
    msg.bearing = 0.2647431838161187;
    msg.cross_angle = 0.140325226443219;
    msg.width = 0.5883817091298291;
    msg.length = 0.09616953879667556;
    msg.coff = 92U;
    msg.angaperture = 0.7498471253409911;
    msg.range = 52664U;
    msg.overlap = 1U;
    msg.flags = 146U;
    msg.custom.assign("FJTFHFEFOSXPBVAODABZIUPFMCXVWYSXGSRAWCGZKKTNGPDNDZPGBHSFZYSADUZPUMRUYLQNLXCJOMIGKILYZPOSHFXQPQKXSEWYGKHMVVOYECJJCUNHBTWDBWTTECDARIDAIRZXMFEGGHZJMWZMFKHPXIQQCRISNOJXUESOEBARVXKVNKENZMNUMRIQTBQFTDWVRJHEWLASLUJRLLGTVPTP");

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
    msg.setTimeStamp(0.017456230723480348);
    msg.setSource(24425U);
    msg.setSourceEntity(146U);
    msg.setDestination(13052U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.5311061695459117;
    msg.lon = 0.7705277124101217;
    msg.z = 0.3794847272701587;
    msg.z_units = 186U;
    msg.speed = 0.16879213992719344;
    msg.speed_units = 38U;
    msg.bearing = 0.5689926048302205;
    msg.cross_angle = 0.4627044897961722;
    msg.width = 0.7778808457001116;
    msg.length = 0.6574689898065764;
    msg.coff = 69U;
    msg.angaperture = 0.2523703046833642;
    msg.range = 498U;
    msg.overlap = 162U;
    msg.flags = 123U;
    msg.custom.assign("BQZTMARJQCOGCDSOKXWLSHPBEUZEULLZCYXLIYSCTJUYYZWHGINUXRJRJWYOYVMQYIXEVIHIRWQHXFLQMFXPTMOTLMKWEABFVIFHIZS");

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
    msg.setTimeStamp(0.04023427793207812);
    msg.setSource(14872U);
    msg.setSourceEntity(140U);
    msg.setDestination(46244U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.8250760201791372;
    msg.lon = 0.3205976368927915;
    msg.z = 0.7051505322428261;
    msg.z_units = 135U;
    msg.speed = 0.4859153620038996;
    msg.speed_units = 62U;
    msg.bearing = 0.5081902636520692;
    msg.cross_angle = 0.22989292220145596;
    msg.width = 0.10389265580469276;
    msg.length = 0.7785832017809606;
    msg.coff = 173U;
    msg.angaperture = 0.16718640039738197;
    msg.range = 29407U;
    msg.overlap = 224U;
    msg.flags = 180U;
    msg.custom.assign("DQCQEOVMRLZREBFWWAISTKCHTZAXSGCMYGSZDRGNPARDNHCSTE");

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
    msg.setTimeStamp(0.053002954549598025);
    msg.setSource(44350U);
    msg.setSourceEntity(161U);
    msg.setDestination(25336U);
    msg.setDestinationEntity(163U);
    msg.timeout = 20814U;
    msg.lat = 0.7573357176816978;
    msg.lon = 0.9012742246732569;
    msg.z = 0.700591344152609;
    msg.z_units = 252U;
    msg.speed = 0.7499758759781835;
    msg.speed_units = 213U;
    msg.syringe0 = 172U;
    msg.syringe1 = 188U;
    msg.syringe2 = 197U;
    msg.custom.assign("BTJISEWTZNZYVYWKNWYJNKAWYVYSYBNQUUGSVXNKRCRDTRFAHMCQEIOOMXEJZ");

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
    msg.setTimeStamp(0.5105811573713415);
    msg.setSource(48632U);
    msg.setSourceEntity(8U);
    msg.setDestination(42353U);
    msg.setDestinationEntity(106U);
    msg.timeout = 42918U;
    msg.lat = 0.20045456528699823;
    msg.lon = 0.974390507215777;
    msg.z = 0.7067180096416462;
    msg.z_units = 121U;
    msg.speed = 0.008973956949549722;
    msg.speed_units = 139U;
    msg.syringe0 = 70U;
    msg.syringe1 = 63U;
    msg.syringe2 = 180U;
    msg.custom.assign("BKTVKTUMOBXESZPYSXYQOGSHJQFRECNYXUNWIWDJIUDICGJLGOCZXTJPV");

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
    msg.setTimeStamp(0.7931487311728402);
    msg.setSource(19719U);
    msg.setSourceEntity(204U);
    msg.setDestination(22893U);
    msg.setDestinationEntity(30U);
    msg.timeout = 17607U;
    msg.lat = 0.724646155616667;
    msg.lon = 0.6772669663731068;
    msg.z = 0.4577155684728882;
    msg.z_units = 214U;
    msg.speed = 0.8778915169873905;
    msg.speed_units = 151U;
    msg.syringe0 = 221U;
    msg.syringe1 = 110U;
    msg.syringe2 = 28U;
    msg.custom.assign("WDHLTNZSTNWDEOBEAWWXZYZJSSGKBTZNPRQMXFSOHZVCXITEQPVRCEGJPICPQCGUFUFRBTHLFCLJCSINHIYVSKJMUINOYRONFNHFDDBEKAMZLIMDMXYXAEPPZRBI");

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
    msg.setTimeStamp(0.29799692941308664);
    msg.setSource(9855U);
    msg.setSourceEntity(253U);
    msg.setDestination(28194U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.6889344339495984);
    msg.setSource(13908U);
    msg.setSourceEntity(169U);
    msg.setDestination(19148U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.2646691315096471);
    msg.setSource(15165U);
    msg.setSourceEntity(27U);
    msg.setDestination(48605U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.6042959415012525);
    msg.setSource(34354U);
    msg.setSourceEntity(166U);
    msg.setDestination(54021U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.12489714788250927;
    msg.lon = 0.9937004462690905;
    msg.z = 0.5490041185508879;
    msg.z_units = 170U;
    msg.speed = 0.6871479585028475;
    msg.speed_units = 180U;
    msg.takeoff_pitch = 0.4463024460757873;
    msg.custom.assign("ZBMSYOCXGIYLQYWIFIXUNUYRBZBEVSSNAQQEOSNUAENYUNJTSTGDCHEQLFBCAZKCRYZXMSXFUWILOTKJMDATPHHJGXDMCCPQIESUXMDJFGMJMRSEFTKFILEYZHGYNBQVYUUWGIRBZBKLDCHSLVUBLHDWPKMHTPGJNIDTVOZVMPIJUWN");

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
    msg.setTimeStamp(0.9348102599628724);
    msg.setSource(48955U);
    msg.setSourceEntity(151U);
    msg.setDestination(16742U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.738916525486364;
    msg.lon = 0.8979019975595081;
    msg.z = 0.9633746722856972;
    msg.z_units = 184U;
    msg.speed = 0.6022350621098829;
    msg.speed_units = 96U;
    msg.takeoff_pitch = 0.3581538355497407;
    msg.custom.assign("ICAZMAKAXFONMPYSZFGJCHOEDOLXNRGCXACHWSMSUDAKONXFQJRNZDUPEJPYBWCFSOVFIBDBBDURVYRXSKTFKDBXJWXACBKZPTEGIPSOPBQYOXDHUJKMTLYZRSICWZTWQUQLSJDAMGRQEJGEUZTXYFILURHGQVUGNNJBUILFKNJTGCTVNRILL");

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
    msg.setTimeStamp(0.922397060081928);
    msg.setSource(5908U);
    msg.setSourceEntity(203U);
    msg.setDestination(41333U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.5336254259851142;
    msg.lon = 0.9589683019084555;
    msg.z = 0.07082636932048514;
    msg.z_units = 233U;
    msg.speed = 0.9698932966480208;
    msg.speed_units = 70U;
    msg.takeoff_pitch = 0.8433347945341022;
    msg.custom.assign("EKLNYGIKZMRINBQZOIBMAUIUZNTDHQPQMFYOBLIADCXDXPPBJIHYSHWCVCRJTXQRWNXUHXRHHDTGEVJNKWQZWLGDTLTZMUIABEJYKSPFEFUCOPRDSKCVEWNNRFSABRWUBHGKSFPDQJOMPXFCAOUSAIWLNYAVGXRQVSYPVOWUUZVZXDQOGBIQMH");

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
    msg.setTimeStamp(0.5617549372127343);
    msg.setSource(43817U);
    msg.setSourceEntity(87U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.4100670889267455;
    msg.lon = 0.5492159452396577;
    msg.z = 0.6432623413354399;
    msg.z_units = 46U;
    msg.speed = 0.8489178681598202;
    msg.speed_units = 39U;
    msg.abort_z = 0.2130835430740411;
    msg.bearing = 0.4768954451615727;
    msg.glide_slope = 91U;
    msg.glide_slope_alt = 0.9852963264231013;
    msg.custom.assign("MWIMHIGALMTEFKRNGSJKDMABSQJICVMWJKAKICNLXZVSUAZXLQWJKYUHPYJDDLECOBRGKYVERVRRTAUTGASIABGXJEHPPRMNOZRTQVWJZ");

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
    msg.setTimeStamp(0.72002820696775);
    msg.setSource(20804U);
    msg.setSourceEntity(2U);
    msg.setDestination(10510U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.12663171180862687;
    msg.lon = 0.9342636168966552;
    msg.z = 0.5750018037236994;
    msg.z_units = 243U;
    msg.speed = 0.07413746613272665;
    msg.speed_units = 242U;
    msg.abort_z = 0.16952598951329834;
    msg.bearing = 0.23473949476061684;
    msg.glide_slope = 3U;
    msg.glide_slope_alt = 0.2972415322023879;
    msg.custom.assign("NCQOTVNLOPTUWHAGDEYTVXOTJEYJEOTQDMVQGFJQYWMEVOSBIIVAHHRJNHKBNZPAIQOPXKMCBFKERGBPNLLWFIPSSCOYAXRTUOBRZQVQWHLHNPIRWMVVYQJWRSIGZZGPRYAEGUYOJMNJISNEYVSDUEFAMSLTUEKLJHAYGGDCKVDZUMCQXRFDCBDXSEIWXFUFXCN");

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
    msg.setTimeStamp(0.17078642473451733);
    msg.setSource(54442U);
    msg.setSourceEntity(140U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.2140997172307847;
    msg.lon = 0.5124077859496949;
    msg.z = 0.4341827899187033;
    msg.z_units = 50U;
    msg.speed = 0.7695186369397109;
    msg.speed_units = 83U;
    msg.abort_z = 0.7761474561080081;
    msg.bearing = 0.38184632585083667;
    msg.glide_slope = 213U;
    msg.glide_slope_alt = 0.34339700702647746;
    msg.custom.assign("VNGKFVCTXSHIEJZINVIFBFCOKOCMTWEGWYDZGEUVZBPNUIOXXJQKLODGAZWXVPHCBMBYSMLJX");

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
    msg.setTimeStamp(0.42676382169445226);
    msg.setSource(44277U);
    msg.setSourceEntity(213U);
    msg.setDestination(48606U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.3578594832420955;
    msg.lon = 0.10506809086718771;
    msg.speed = 0.04980579148207809;
    msg.speed_units = 12U;
    msg.limits = 106U;
    msg.max_depth = 0.07178248271881915;
    msg.min_alt = 0.1254848224873799;
    msg.time_limit = 0.07008201970062056;
    msg.controller.assign("SHMCVRCHFCAVWMGAIPMHQKRQVENLYASXTHNRJRLGLAAVUXOZJNHFFCWWSZISPVATHULAUEEIKEDMRMYHPIGKURCJJPJIKCZFBYUWLGDCRVTOOFPQKKFZXNDRDLFZXQBWMB");
    msg.custom.assign("ZPFPQXZLBUKEGSTITXPRSQXEDYOMRMNLPRLRZYKIQDLPOHCESFHATCABVNVQCBGBWBDZXIWVEJNHQDAQWFNQUIEFTJTIIXUDCYNCZMKJQJWIUXYDANPAWUEGSOQOPYBEMJVGDLBTYFUFBNKBLMFJRHVKYFARNCGCEUM");

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
    msg.setTimeStamp(0.25127708587445285);
    msg.setSource(59679U);
    msg.setSourceEntity(253U);
    msg.setDestination(17878U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.9267219103259596;
    msg.lon = 0.8794219131255385;
    msg.speed = 0.9838246247225864;
    msg.speed_units = 218U;
    msg.limits = 204U;
    msg.max_depth = 0.8300183108582392;
    msg.min_alt = 0.8122283846208116;
    msg.time_limit = 0.46729288423323423;
    msg.controller.assign("UAZEIIFYQDRTLILIBTWGOHWSJDRTXFNNRZAAKWVTMUNLBZYAV");
    msg.custom.assign("VZXAKGOCJLBHJDHCMLDRKYCJEHKYFVUXLMPKYGENFEMPWOVWOCUQSSVZVEAHXTHMBN");

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
    msg.setTimeStamp(0.7863489907615547);
    msg.setSource(32671U);
    msg.setSourceEntity(85U);
    msg.setDestination(40152U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.38275980163230605;
    msg.lon = 0.8703605235789117;
    msg.speed = 0.3474596248648888;
    msg.speed_units = 115U;
    msg.limits = 29U;
    msg.max_depth = 0.3307575835638993;
    msg.min_alt = 0.31984732920405157;
    msg.time_limit = 0.24959262408391236;
    msg.controller.assign("GLKXGWCDGBTNCYTGGXMJHVOPZKQKXFZTSPNWVZFESLZBBLUIQSNVAIZCAPSUIFUZLMCLCOKDFVLVCMXUGFXJQBDPBLDTZKEJUSIKITPWHSORVCDIPERNMLYXBRONKYAOIBARZPYHVMYFMRQBSNVMULNMUJDDHESEAQPWJQJTBTNNOOJEOXAZFEHGFCQKTWJMBRH");
    msg.custom.assign("PJSUNNHGLNYGPDIHBYYXLVUTLRX");

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
    msg.setTimeStamp(0.7653981499488034);
    msg.setSource(24003U);
    msg.setSourceEntity(55U);
    msg.setDestination(29759U);
    msg.setDestinationEntity(39U);
    msg.target.assign("YZFOSNUVLYJOIWPXBMYGHYTWYISZTKUEQARAVRXPOFGTWZLCWEHFECQKCIEJYSKQDZJIBVLLBKNFMFUUMMAKGOQHLCDAOQYFJMVZNAGTMRYRIPXXFORVLFSHCNTGNCKYW");
    msg.max_speed = 0.6014930657228343;
    msg.speed_units = 54U;
    msg.lat = 0.43393116658694075;
    msg.lon = 0.186903258174005;
    msg.z = 0.46754098534397026;
    msg.z_units = 18U;
    msg.custom.assign("JIYCKDZAOAFOUHRJZLNQVIJBWHGFPEKNXTZIWRKHKFOAJETSHDTVMWHHZTRZSUZKDVQX");

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
    msg.setTimeStamp(0.0583607263835052);
    msg.setSource(13069U);
    msg.setSourceEntity(246U);
    msg.setDestination(52749U);
    msg.setDestinationEntity(133U);
    msg.target.assign("WRAOSTVLIQCZPXXKXRNINKIRRKBMCAEIMMTIYWFQKLZEYGBSCYKGXEWXRIGLVRLGHCZBWQKSXSHMQVQAJOVZMPSVWSEYBCVZDTVBJTCJMUHDJNMUZMASUEROEGIWJHNTQEDBZZSBFVQVDEGXTUOYWZNIFGPCXGDPFLOBYFUHFOLHPBOHEONYBORSKAJGLPPLPJJYUDAWFKAMAMPPIVNODUDDRTFUCKZUDFEIJCTNQFALTCHKNX");
    msg.max_speed = 0.49712366137472885;
    msg.speed_units = 18U;
    msg.lat = 0.6110478296302005;
    msg.lon = 0.011085550907216413;
    msg.z = 0.7390019622428916;
    msg.z_units = 160U;
    msg.custom.assign("NXUWXWNVELGEQINIVNLISDNYTQGRPXSNZUWMJOUJYJTHODULRIGPGEPOPDIPDPLKZMFERSATRQCTZKYMFGYBCBEOUVJDYHWSTHGTFUUIZKKXKEHSYYUTDNHJWHDOIVQNVBVFCMRATZALLEOQXDCMEFVOZWGMEWFXKAWEZVMKAZFCJTZYOHSHQFUQCIMLCPAKVNPBYOKJXAXBQPNHSFSJJHOMRBRUVSFBDGIPIQYAGBTSW");

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
    msg.setTimeStamp(0.1562831371131873);
    msg.setSource(27974U);
    msg.setSourceEntity(181U);
    msg.setDestination(42417U);
    msg.setDestinationEntity(151U);
    msg.target.assign("KAXMPIZECHVTFGYNODXLGYQEEMYMRZWOLFVHTNJZWWDZSHEMMFNRQWOEKNZXLGOTVLNEADRHJNXTNMKTMBPLARRWTDLWHJTLAYCZZQDDTIJULLWMIUXRPCFZGOFYKFGPTWCKYIUABBEDQGIJCHISBRABAYJZRPIKQUPEBVGKBSAA");
    msg.max_speed = 0.2955194416244301;
    msg.speed_units = 226U;
    msg.lat = 0.22075016696799066;
    msg.lon = 0.8065174443451053;
    msg.z = 0.27396727791401243;
    msg.z_units = 161U;
    msg.custom.assign("MUDIRDHLNLUKHVPRMIQDKRGGQQZAZTXPGEAYHUXDBGIBLMNRIMSKIQHBWTNXFXQTCBXTZVJKBUWMAISEJWHEMUWWYCVWXZFLJCSDGGCGSOUOPKPYCEBYLRLFIRTBZYXNECZZNVJNTMCIKHJYZH");

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
    msg.setTimeStamp(0.9211765371231044);
    msg.setSource(14462U);
    msg.setSourceEntity(171U);
    msg.setDestination(17306U);
    msg.setDestinationEntity(9U);
    msg.timeout = 22255U;
    msg.lat = 0.5198488001587014;
    msg.lon = 0.9571826049522192;
    msg.speed = 0.752451218472586;
    msg.speed_units = 63U;
    msg.custom.assign("MXVZTUTAEANPEHROEMSTYRLODFAFDOBPFHYRQZUAJSHYVWDKSDAZXGIULZWBOPWNPFXGLNGOTHKEOBVXBNNMZZCQQIKJDPMYRUSRONCCSJIKYWIMNTFIAVSRHATMMHUKPUPQKVGXWDFRKDLXTLPUQYJASAZGRCYWGHVSELKOZMJIHGVB");

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
    msg.setTimeStamp(0.6250018872035776);
    msg.setSource(49804U);
    msg.setSourceEntity(203U);
    msg.setDestination(18627U);
    msg.setDestinationEntity(9U);
    msg.timeout = 56061U;
    msg.lat = 0.12529352845991792;
    msg.lon = 0.9237897238188345;
    msg.speed = 0.5837531497749703;
    msg.speed_units = 179U;
    msg.custom.assign("ZTRRDZSMYJWNXPGHPUFLNYKPTMLCVTVVETQQZBEHXWILPKQFLGSZAKGJFLPTMSAYKNRZSJJXYBEWQCXPBVGXKCDNEZOJCCBEBZBACBV");

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
    msg.setTimeStamp(0.051103536469071065);
    msg.setSource(56840U);
    msg.setSourceEntity(55U);
    msg.setDestination(10880U);
    msg.setDestinationEntity(76U);
    msg.timeout = 6626U;
    msg.lat = 0.5594321952533744;
    msg.lon = 0.7365341569043102;
    msg.speed = 0.9347357160952752;
    msg.speed_units = 159U;
    msg.custom.assign("EBUQJEXJHDHIECWTSWGUNQKKTSXULANQWSIHGMCFMPVTBURDVANHKQGLJEIYYYCBUURGVIDSJKOWIPBLSAJKGZOCKUOGGRLDVMXISHFQNJGVDTWIPVMXLFKDZKPUSPZABWEYFNQCRJAZOYVEPCTTPBEXTNAHOWHQOGIZ");

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
    msg.setTimeStamp(0.3627806262976344);
    msg.setSource(43253U);
    msg.setSourceEntity(241U);
    msg.setDestination(30434U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.9584961077151831;
    msg.lon = 0.5355112529505943;
    msg.z = 0.383968161814798;
    msg.z_units = 245U;
    msg.radius = 0.49569541763118663;
    msg.duration = 8863U;
    msg.speed = 0.3004695121059493;
    msg.speed_units = 224U;
    msg.popup_period = 38939U;
    msg.popup_duration = 62687U;
    msg.flags = 130U;
    msg.custom.assign("EPFGUOVUMMOPHVOZOPRNSSLBJUYTHEEGXIAZPQZJNFJTCZBDYWQAEVTZYNFTIBPTCGNXQMBCKFDKIEUSSWSYVYSDIKKGEAIWIVCYBCQDDSHIAQREPDTGWMAPDUZAYGJENPFHOWYWVWEQLVCMHYMKQKXXLITXTDSCCSZXBQUCCJRBMFGMJMODRHHXFTBQLRRDARLRONJJLAK");

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
    msg.setTimeStamp(0.08475346359232094);
    msg.setSource(2410U);
    msg.setSourceEntity(2U);
    msg.setDestination(5986U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.2852429882243891;
    msg.lon = 0.5180304280110304;
    msg.z = 0.06941104001651521;
    msg.z_units = 75U;
    msg.radius = 0.05080447607661576;
    msg.duration = 7284U;
    msg.speed = 0.9629835558980758;
    msg.speed_units = 233U;
    msg.popup_period = 17134U;
    msg.popup_duration = 45482U;
    msg.flags = 99U;
    msg.custom.assign("NXSPFNJKXSTCIBNZAAXYUVVNTBTMDXQYRFDPLDHKPFQHQKGIAIDKSCWBBYHAUSGELWPI");

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
    msg.setTimeStamp(0.7905266821638967);
    msg.setSource(37044U);
    msg.setSourceEntity(38U);
    msg.setDestination(10344U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.7092547908972454;
    msg.lon = 0.7992783620285471;
    msg.z = 0.30484316338322603;
    msg.z_units = 95U;
    msg.radius = 0.9071116268061892;
    msg.duration = 30597U;
    msg.speed = 0.31438822684145284;
    msg.speed_units = 41U;
    msg.popup_period = 61991U;
    msg.popup_duration = 43992U;
    msg.flags = 31U;
    msg.custom.assign("LZNNTDVBXFJUMDORMFKNSOVJFXQUKOGPTYSVGBEKTRYBWLEGIFNIXDVICI");

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
    msg.setTimeStamp(0.6110905359882707);
    msg.setSource(21500U);
    msg.setSourceEntity(206U);
    msg.setDestination(8290U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.518788573557193);
    msg.setSource(63385U);
    msg.setSourceEntity(229U);
    msg.setDestination(25903U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.07562859678608425);
    msg.setSource(55400U);
    msg.setSourceEntity(28U);
    msg.setDestination(21794U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.03841429686966791);
    msg.setSource(6924U);
    msg.setSourceEntity(176U);
    msg.setDestination(29630U);
    msg.setDestinationEntity(162U);
    msg.timeout = 62002U;
    msg.lat = 0.8048069961256652;
    msg.lon = 0.25096058629509943;
    msg.z = 0.6610684881502193;
    msg.z_units = 75U;
    msg.speed = 0.018555773787123364;
    msg.speed_units = 247U;
    msg.bearing = 0.34846774516909085;
    msg.width = 0.21081893752117808;
    msg.direction = 165U;
    msg.custom.assign("TOCNGIWCQDKIGFFJDDLPQPBQCREDJVFYUTCJTVMSYRCSLVOGZGRAJDKUQKHOECMVPEEJCL");

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
    msg.setTimeStamp(0.8472396896795771);
    msg.setSource(27793U);
    msg.setSourceEntity(151U);
    msg.setDestination(7466U);
    msg.setDestinationEntity(160U);
    msg.timeout = 39789U;
    msg.lat = 0.32726942567087614;
    msg.lon = 0.8374255564422411;
    msg.z = 0.4432593323381534;
    msg.z_units = 245U;
    msg.speed = 0.189398847626427;
    msg.speed_units = 184U;
    msg.bearing = 0.01867454532126822;
    msg.width = 0.32523177192271957;
    msg.direction = 58U;
    msg.custom.assign("BLWBHWNYDUELLIGSQIGHOQPKIQORAFJUZIKADLFHSJWCZPBAEFUMTXCESXABWZRHBVGGJXNHUMYOKWPQFERAMYVWIXVZDZMFNLODNGFTQXDICIERBFAJPBTPPHTIDKLYLMYNSJAOKQQRCIEEZJAJDVKAJTNTQPMHCENSOXRHYRQMYJRDNOCOVPLKBBXGUXETGSKFCLJPZRTNXYIOUKSTVFW");

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
    msg.setTimeStamp(0.47054124827145993);
    msg.setSource(42313U);
    msg.setSourceEntity(222U);
    msg.setDestination(13071U);
    msg.setDestinationEntity(176U);
    msg.timeout = 32322U;
    msg.lat = 0.372021941894088;
    msg.lon = 0.03707287460592035;
    msg.z = 0.005327535317212528;
    msg.z_units = 17U;
    msg.speed = 0.5314624197519747;
    msg.speed_units = 184U;
    msg.bearing = 0.3513491289130245;
    msg.width = 0.6370850195634319;
    msg.direction = 150U;
    msg.custom.assign("JHIXQURKCMOYTSSDDZYBWYIFOHKOYDPRFKEEXKGRJQQBVFTAFIBEJVIFEAZYMMYNJVAAOXDHHRSRYKBZWRMNSCBLHPLYUVUGGCNBZFHGDGDS");

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
    msg.setTimeStamp(0.602710407572186);
    msg.setSource(46226U);
    msg.setSourceEntity(122U);
    msg.setDestination(31255U);
    msg.setDestinationEntity(8U);
    msg.op_mode = 144U;
    msg.error_count = 84U;
    msg.error_ents.assign("RCHAARCFCNHMQEWHBLTRBLQIFZHLXQPAASFJRXWDWZNSOITZWDEXJACZICNVVDMJPNRQFIVYTJUBPLHGBJEEBGNUKLLGYYOEDVYQNKBOKDYDKPXWSDLJOSBGAJCMNYGPHTIKIMNKUFCIHGWUAYUPFKVARLMOJIBUMRTSOCMKXOYFVGZNWBGVUEEMTOXFMUREAKMQGSFIUQOSQULYPCXEVTLHKVJTZN");
    msg.maneuver_type = 16157U;
    msg.maneuver_stime = 0.17156068413349912;
    msg.maneuver_eta = 32130U;
    msg.control_loops = 3955004783U;
    msg.flags = 106U;
    msg.last_error.assign("THHHOPRCUDJNTQXWWMZVQYZYKGBACYLHXXRVPIMXSIKIRSNSNURZJOCEHROJOIBZBYWXAYZXEUEAJSJEPRQELIESNDNIPQWFGBQPKMABMZRFLQPYCCBSGKGOFTGSDHZVHBFGLJMGDUMTDRBELICKXVKHLKTUWHFVDOLXMWTTJCKUTWZMZCFFOKSBBOUGJPY");
    msg.last_error_time = 0.5139540998563409;

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
    msg.setTimeStamp(0.824890166515922);
    msg.setSource(35581U);
    msg.setSourceEntity(103U);
    msg.setDestination(61829U);
    msg.setDestinationEntity(118U);
    msg.op_mode = 20U;
    msg.error_count = 210U;
    msg.error_ents.assign("GJPEWHLKAFUUWJHGCXILMJYKYBNQXHBKNGRLDDAAPRWTTZOMOLNJCIYHEPFZMIOCCVQKOETEFRQGVDRDZIMNPVXDAYWWMHZYYRAQQEKIJXPRJVIHKGXNWXHEUECTGFJQDSKWSAKXRBMBZRUICOIJYACTGRXMLXVUGNUBB");
    msg.maneuver_type = 22793U;
    msg.maneuver_stime = 0.8276546277965193;
    msg.maneuver_eta = 56992U;
    msg.control_loops = 1272951525U;
    msg.flags = 0U;
    msg.last_error.assign("ASUDXJIZZYETVVEXFLPFJGLDCUGHVAJCCOTAPPWLOABJYUUSKZWKFTZHIBQHQJCYVULGROSCNYXFKVUMGYQQRKXDWKZOYTPAESLTLZYTRAIMZRDTMJZBHBCNXVEGS");
    msg.last_error_time = 0.89481462242156;

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
    msg.setTimeStamp(0.7353096829196911);
    msg.setSource(24964U);
    msg.setSourceEntity(252U);
    msg.setDestination(64294U);
    msg.setDestinationEntity(175U);
    msg.op_mode = 65U;
    msg.error_count = 53U;
    msg.error_ents.assign("JPHEJAENGOLHUXTZVEUZ");
    msg.maneuver_type = 20344U;
    msg.maneuver_stime = 0.5805208860142251;
    msg.maneuver_eta = 45126U;
    msg.control_loops = 3308229403U;
    msg.flags = 15U;
    msg.last_error.assign("XTHIBYDITVDEGLYQ");
    msg.last_error_time = 0.8707586075056083;

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
    msg.setTimeStamp(0.40758121398753666);
    msg.setSource(44045U);
    msg.setSourceEntity(224U);
    msg.setDestination(31771U);
    msg.setDestinationEntity(73U);
    msg.type = 5U;
    msg.request_id = 19346U;
    msg.command = 174U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 18521U;
    tmp_msg_0.lat = 0.7713643873133688;
    tmp_msg_0.lon = 0.9486947090030231;
    tmp_msg_0.z = 0.9881650736239487;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.speed = 0.09265703470671027;
    tmp_msg_0.speed_units = 140U;
    tmp_msg_0.roll = 0.6463657969269115;
    tmp_msg_0.pitch = 0.593239131173381;
    tmp_msg_0.yaw = 0.34104494880084557;
    tmp_msg_0.custom.assign("CPHFUIIEUARNCHXJNGYCVIQWVHFHJCVLDQMIGLHSVJEWSLEOXATKWFKBRZPBMBQZOMADOWVPFFFA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37191U;
    msg.info.assign("HKHCZUHZNXIFJTAKMPREHYUFQURMBXGIGPKTHTYWTKQTCRQTDJEOONDPPVNMXLSXIKGLNGRUCNPBNOUFVBVJPGYOEPTZYBQAOVQNKPUZVYAWYMDYZLGT");

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
    msg.setTimeStamp(0.14611549383479716);
    msg.setSource(12589U);
    msg.setSourceEntity(100U);
    msg.setDestination(36973U);
    msg.setDestinationEntity(231U);
    msg.type = 24U;
    msg.request_id = 21184U;
    msg.command = 54U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.5647457781691285;
    tmp_msg_0.lon = 0.6894032744706393;
    tmp_msg_0.z = 0.5423264382799486;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.radius = 0.9886014713215227;
    tmp_msg_0.duration = 5316U;
    tmp_msg_0.speed = 0.7629958431907728;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.custom.assign("GSJLTVSGIRGNDUAHOTDPQNYYKNXNLMLDVOWSPCHISPQEXNNJWQTPXCCOZBMUIDOMFTCPOEVECKSWYADBRDAAAEENWKKOZMLKLWXFITCVOZWWMLZRUNFBJRGPJXZPIUSUJKDLQPHFATEVMIXDTOBTWGZZRKHMJKQSBVRGFEHMWJDL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61734U;
    msg.info.assign("NWOXOCONPGHQXX");

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
    msg.setTimeStamp(0.6567151227679461);
    msg.setSource(53556U);
    msg.setSourceEntity(166U);
    msg.setDestination(60959U);
    msg.setDestinationEntity(41U);
    msg.type = 47U;
    msg.request_id = 61317U;
    msg.command = 32U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.7595211152103705;
    tmp_msg_0.lon = 0.031073849493891137;
    tmp_msg_0.z = 0.8990940990308105;
    tmp_msg_0.z_units = 196U;
    tmp_msg_0.speed = 0.23169391336823109;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.abort_z = 0.3858508947151337;
    tmp_msg_0.bearing = 0.13400831897367038;
    tmp_msg_0.glide_slope = 72U;
    tmp_msg_0.glide_slope_alt = 0.6594023897816931;
    tmp_msg_0.custom.assign("WXCHMZLWOAUWENFQBRGHLIDEWH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59518U;
    msg.info.assign("ZABNEAJZOEXOMXWLGXUWGJACDWVQCKDMFMMFKQFNCCFEVNEGDIWRVOHPEUBKRVTQHYAYRHOJZYSBGFQKHPGVSRLMQBMMYVHHSDUOXRHTHGBQXVBOZXDFCYNTSTXTNVAISJJTQCMUJLOZGXOVINLYYIPIDWQTGLBYKAFJRDUREIMJNQGRXWSEIUPNVLIPHXPCOW");

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
    msg.setTimeStamp(0.15462379390425163);
    msg.setSource(25139U);
    msg.setSourceEntity(61U);
    msg.setDestination(63704U);
    msg.setDestinationEntity(1U);
    msg.command = 120U;
    msg.entities.assign("KQWXUSFJKJDEDPSCPTUXMSVKRHURQOODBKAAXYRELRMFECGNPKZSFQOCQMNNRIFOMANXVHVGVZZVCNPBOVPHMPPZGCYKSBGYQJBKHHXYLLYGZYBBNUWAKJIFQHQWNIWGILYPVBROTXBXMHVAZFEVRYAWSCTDACFDQETJIDEZLTWIJRLMBSXCZ");

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
    msg.setTimeStamp(0.7768321176040057);
    msg.setSource(1899U);
    msg.setSourceEntity(11U);
    msg.setDestination(15599U);
    msg.setDestinationEntity(230U);
    msg.command = 224U;
    msg.entities.assign("WKQLIIFIZLRZNHTKCCUKEYLDHJKCVGJFPZDWNMAJSCNKOCFTLURDZYVZELMUNFDGYGTEQGSHTLWUWPHCORRFAIFCITEMOUWUEDMTSEQSYBGBIQBBZTNGDOHXSQPJAOXY");

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
    msg.setTimeStamp(0.8040197173275966);
    msg.setSource(44218U);
    msg.setSourceEntity(25U);
    msg.setDestination(1474U);
    msg.setDestinationEntity(39U);
    msg.command = 146U;
    msg.entities.assign("IUDPUFQYWLALMYRIAZIHIOJQWWOZJMVTUHEHTBZEFWVQIRSDBJLPAENBJXISKDCYRHTOPOUBWFHEPCDWGBMPNVKPOGWYPRROQAMYYSIXLYGXNKFZTGHGFGTOZNHDIBKKOTUGRRTBMUXJSALDQIWTHQLRBTNUJVPXVULPESSEXKFMGFCUDZRTIOMYVGQCMDFCZAMQECHXVKSNJHNPUQVKDFSZWRNBSJCALCGVXEXYNNKXSAELE");

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
    msg.setTimeStamp(0.2046225616520062);
    msg.setSource(3837U);
    msg.setSourceEntity(103U);
    msg.setDestination(53770U);
    msg.setDestinationEntity(204U);
    msg.mcount = 139U;
    msg.mnames.assign("KRGXMUOBDIVRLKFSOHKUJPYLBVFGABABKZIWLMGHPKDVOHVBFRBEHISPAFUNZQVTAQPXEQLCFEUTLBMVWETPPMGXJGRZQKWLDAQWDYYJIETONTSVAOFNCIGSJDUCCDJHLCYQQTPWGFNINHQFHDBJUYMPENDENAXMRZYYDANXIBUQMMLHCZPVFSEM");
    msg.ecount = 125U;
    msg.enames.assign("CFOLIUPYHXIOEHE");
    msg.ccount = 247U;
    msg.cnames.assign("XXWCZPBTIREWAXKNSHAVLNMKIOEUBYWIRHLPBZJYIKFRISQRJMOJDKGGKQDVGSGHVZFIMWEDZDPPFEVFNPFDGDGOJBUOKMXNWYFRLUZANLRXVNYWSBVABGSGSHOPLSKCCAFMMQZZTYLEAVODQCOJHWQJSZDSQEHPEWHUCMITTXBNVTEQFPBATWFTAYJPNGKINKXLHOYQHYMLMCE");
    msg.last_error.assign("HQDEJIKSNKWZSAUGEJWCYPPMJOTGKZRFBILJSSOSEIQYLTVUZNNCDVADNQTHZETFPQAAOGMTCNTJXWLUXIWVHVUGPUJBUZMCNMWSEMXTVXOANLRLDGQZPGSEAGXOMYYMLIRQLNFVRXUBCJYHCFNHFCPDEEYVQYHFYHMXELSORIURQVWKAKDLRVXGBFCOXQKHYJWPFZGGIDCBTRBFJKASBPZJPOAOIZLWDEB");
    msg.last_error_time = 0.01588453036574322;

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
    msg.setTimeStamp(0.10902566387304313);
    msg.setSource(3957U);
    msg.setSourceEntity(237U);
    msg.setDestination(62332U);
    msg.setDestinationEntity(220U);
    msg.mcount = 50U;
    msg.mnames.assign("ROTIQVRRXEFXYJKFICBESYBAZENOTBNIXCIQZUNDIJANSWODPJULYKVZPKPYDWWQVLXORNNMHVPGMGTLSBICHGWFBYJUAEGDQRTZDLWFAHDUTOSPBHWFMEJSXMXSKKODQHOCVGJVYARTCYAVMKECGSVPITNLEU");
    msg.ecount = 10U;
    msg.enames.assign("GOBDYKUUQKVIBCOVCXDXCDTWYJGYAFOUDIILUBVQIXKROFPMFGYSRBATWGNVMOEPGLVIVZCLHSAWVUOMTKTFFEWWSWAHJFKHJMGWGBQSCZGJUCNRNJMDQCCHDJXKTCOKQQANSYXPUJE");
    msg.ccount = 33U;
    msg.cnames.assign("CIUBFUPKXSLBDAFPSPHADIKEXNBQSAOEHTQSMZYXRRYRSSYFGEJYWGFNVGMWVTNJPFYWPHRMZGYECHLCXKMDRJBKQEHNWWWRKAWDKNFALJFIMTMPQJECLZNOQFAIBTSWAVRLCUZVJNOS");
    msg.last_error.assign("BTNXSGFHHIQZANWXDMOZUZWTYELK");
    msg.last_error_time = 0.7141185372719899;

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
    msg.setTimeStamp(0.2227353406888677);
    msg.setSource(65141U);
    msg.setSourceEntity(49U);
    msg.setDestination(28199U);
    msg.setDestinationEntity(26U);
    msg.mcount = 112U;
    msg.mnames.assign("SMKLLSPNFISGGITJBONMXRQJHXJGRYEIVVDHNGFGFIVWOMKDIHBLVYCCWFRFLELOTDCUVUZMACHSEDFJZKHKKAITSPVQXWMCYJFDWHLWWTRQBAPDDCPGLOOJMVQCQAMMBQUUEVXTLYYHSURKEGRBOUTXSBOTXPGSAWZPNWYENZFMUBLRWGGYAPVHJBRWTKZDQIQXNINIMJASPZXAPZJEXOENYBHXQUAKNLDOPATZFCKY");
    msg.ecount = 94U;
    msg.enames.assign("DLBHXNWTGYWTZMXITKWNSBXLPXEUBLFSAITHUAJPZCFSLSSGBEEAVTOKAIGEKLKUWUCGHDMOORNZDFHKTOHQAWNRFDHXTBSCCDGYFDDJJRXYITNVNYCJBZVYQDYLZQLEPXRQNFUKJQRGMKCKCWTMYCUWYZUWJVLAFOTEORVAQVSPUPIRHSLPRMPQIYHEGMPNCDKPQMRVZAMFHXYEPUJKFZSDXIWZWCG");
    msg.ccount = 65U;
    msg.cnames.assign("PLBCAFNJFAAAPMJZGMDHNIDEFKSFNEHAYQCCYMNPCGOIBQXKNBSMZFSTWKZPKCWUJGQTVLVDSQEJRLNQSVRUWIIGOGOYXDRMLEJWJNLGCEUIPTAFZADRZSFEYHCYDXCCTDRTRNOMWHWGUPLLOKIOMVNOMGRYWPKESHIHVKGHVBBXWLQ");
    msg.last_error.assign("GEWTJBPDXACILZYQQOSQTTYPCGSMAMLISCETXH");
    msg.last_error_time = 0.8053004504016311;

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
    msg.setTimeStamp(0.9800652842666833);
    msg.setSource(9609U);
    msg.setSourceEntity(243U);
    msg.setDestination(51614U);
    msg.setDestinationEntity(135U);
    msg.mask = 122U;
    msg.max_depth = 0.7593281209459499;
    msg.min_altitude = 0.7911308897418131;
    msg.max_altitude = 0.8738117054262693;
    msg.min_speed = 0.9557408768453585;
    msg.max_speed = 0.193035083317451;
    msg.max_vrate = 0.9214888579186415;
    msg.lat = 0.5212262906230152;
    msg.lon = 0.5345045100144348;
    msg.orientation = 0.5656005216231641;
    msg.width = 0.49836280189884574;
    msg.length = 0.2779562549640635;

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
    msg.setTimeStamp(0.04306610818565548);
    msg.setSource(48308U);
    msg.setSourceEntity(233U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(233U);
    msg.mask = 54U;
    msg.max_depth = 0.15114923762721344;
    msg.min_altitude = 0.5755759633502686;
    msg.max_altitude = 0.8597054517349023;
    msg.min_speed = 0.7593989960373357;
    msg.max_speed = 0.8712702857383446;
    msg.max_vrate = 0.2997357155840513;
    msg.lat = 0.9835893985564125;
    msg.lon = 0.38233184510087526;
    msg.orientation = 0.03528570399048636;
    msg.width = 0.6246295698865877;
    msg.length = 0.9596463203979381;

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
    msg.setTimeStamp(0.7825284502243783);
    msg.setSource(6806U);
    msg.setSourceEntity(189U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(203U);
    msg.mask = 38U;
    msg.max_depth = 0.48527963132765983;
    msg.min_altitude = 0.05594705305231795;
    msg.max_altitude = 0.9575406816190608;
    msg.min_speed = 0.7592002298808608;
    msg.max_speed = 0.1888257514675099;
    msg.max_vrate = 0.7416001051197604;
    msg.lat = 0.2877407849146869;
    msg.lon = 0.9799850694183285;
    msg.orientation = 0.6779149732882215;
    msg.width = 0.8370722739604738;
    msg.length = 0.46020030342723384;

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
    msg.setTimeStamp(0.4332437303289377);
    msg.setSource(22548U);
    msg.setSourceEntity(61U);
    msg.setDestination(14481U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.1300525637592056);
    msg.setSource(4340U);
    msg.setSourceEntity(98U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.08637248878773884);
    msg.setSource(37485U);
    msg.setSourceEntity(139U);
    msg.setDestination(54263U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.3239403115963022);
    msg.setSource(34987U);
    msg.setSourceEntity(179U);
    msg.setDestination(13270U);
    msg.setDestinationEntity(226U);
    msg.duration = 2462U;

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
    msg.setTimeStamp(0.7544936148454732);
    msg.setSource(41716U);
    msg.setSourceEntity(170U);
    msg.setDestination(17524U);
    msg.setDestinationEntity(240U);
    msg.duration = 18367U;

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
    msg.setTimeStamp(0.6283791156069507);
    msg.setSource(1383U);
    msg.setSourceEntity(199U);
    msg.setDestination(21404U);
    msg.setDestinationEntity(90U);
    msg.duration = 35680U;

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
    msg.setTimeStamp(0.7324540081358841);
    msg.setSource(42273U);
    msg.setSourceEntity(131U);
    msg.setDestination(16592U);
    msg.setDestinationEntity(136U);
    msg.enable = 236U;
    msg.mask = 98801844U;
    msg.scope_ref = 3748027223U;

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
    msg.setTimeStamp(0.1859130779265491);
    msg.setSource(5818U);
    msg.setSourceEntity(191U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(144U);
    msg.enable = 130U;
    msg.mask = 593777640U;
    msg.scope_ref = 2784727883U;

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
    msg.setTimeStamp(0.9438333464332398);
    msg.setSource(54964U);
    msg.setSourceEntity(168U);
    msg.setDestination(6942U);
    msg.setDestinationEntity(46U);
    msg.enable = 209U;
    msg.mask = 3326926447U;
    msg.scope_ref = 633735210U;

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
    msg.setTimeStamp(0.7510338412397544);
    msg.setSource(29688U);
    msg.setSourceEntity(164U);
    msg.setDestination(6852U);
    msg.setDestinationEntity(174U);
    msg.medium = 83U;

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
    msg.setTimeStamp(0.28113528127827525);
    msg.setSource(33113U);
    msg.setSourceEntity(92U);
    msg.setDestination(10292U);
    msg.setDestinationEntity(208U);
    msg.medium = 23U;

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
    msg.setTimeStamp(0.7420237277938795);
    msg.setSource(3535U);
    msg.setSourceEntity(220U);
    msg.setDestination(34459U);
    msg.setDestinationEntity(105U);
    msg.medium = 82U;

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
    msg.setTimeStamp(0.3427876362164515);
    msg.setSource(10854U);
    msg.setSourceEntity(53U);
    msg.setDestination(60414U);
    msg.setDestinationEntity(143U);
    msg.value = 0.9452764060541852;
    msg.type = 24U;

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
    msg.setTimeStamp(0.690947122032807);
    msg.setSource(52602U);
    msg.setSourceEntity(93U);
    msg.setDestination(46319U);
    msg.setDestinationEntity(24U);
    msg.value = 0.753074554364568;
    msg.type = 103U;

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
    msg.setTimeStamp(0.2925534241767084);
    msg.setSource(47496U);
    msg.setSourceEntity(117U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(8U);
    msg.value = 0.28423213018675364;
    msg.type = 244U;

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
    msg.setTimeStamp(0.5499414004808505);
    msg.setSource(31564U);
    msg.setSourceEntity(79U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(104U);
    msg.possimerr = 0.4382605573501692;
    msg.converg = 0.4889932931069968;
    msg.turbulence = 0.5202691592741322;
    msg.possimmon = 128U;
    msg.commmon = 175U;
    msg.convergmon = 16U;

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
    msg.setTimeStamp(0.8140989989774141);
    msg.setSource(3206U);
    msg.setSourceEntity(3U);
    msg.setDestination(55344U);
    msg.setDestinationEntity(58U);
    msg.possimerr = 0.22993014229016162;
    msg.converg = 0.5492531919483795;
    msg.turbulence = 0.6129840848665373;
    msg.possimmon = 211U;
    msg.commmon = 23U;
    msg.convergmon = 124U;

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
    msg.setTimeStamp(0.4442645355778936);
    msg.setSource(30419U);
    msg.setSourceEntity(159U);
    msg.setDestination(60919U);
    msg.setDestinationEntity(91U);
    msg.possimerr = 0.20399724648505424;
    msg.converg = 0.8497507041853577;
    msg.turbulence = 0.448879180442037;
    msg.possimmon = 217U;
    msg.commmon = 10U;
    msg.convergmon = 67U;

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
    msg.setTimeStamp(0.8935223354589646);
    msg.setSource(4580U);
    msg.setSourceEntity(17U);
    msg.setDestination(29532U);
    msg.setDestinationEntity(214U);
    msg.autonomy = 253U;
    msg.mode.assign("CSLXSIXCYDOADQOWRSQAGDKABBQZRMYGVLANPKFMWYKCCGUELEQTMVKSXXMWIOTXNULXABJIRVJBCLVHVCOFPOWTWGKVWKNCYPENWULDHBMIYGAFCSZODTAUTHHQWVGPSPQKZFEFIYABEUZTPFWQEVTXUDHISJTBRBYHGJOGDOZZHUVOSEYGTXLMUDNONPGTHMWZQINMQBE");

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
    msg.setTimeStamp(0.8006581619465873);
    msg.setSource(47874U);
    msg.setSourceEntity(66U);
    msg.setDestination(49499U);
    msg.setDestinationEntity(9U);
    msg.autonomy = 80U;
    msg.mode.assign("SFIRHFZVCSTJKCNQTKYLXERAFZQHIDBEHKVRDMDIWVXYADBNJZOGAPAUBQGGHBJXOJERBDIIZVCKNUYWZUTEKFOKWAJUAFAMVXZHRWVCQJCQKTTYCNPBHXWCYHUWSLJYOFMELXMWTQXHEAPSMXPTNLHOLQZSO");

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
    msg.setTimeStamp(0.8737235986755422);
    msg.setSource(11597U);
    msg.setSourceEntity(228U);
    msg.setDestination(9147U);
    msg.setDestinationEntity(223U);
    msg.autonomy = 101U;
    msg.mode.assign("YOHKMCTNAVJFGSRRJBTKJTPCPWENXLZVZCUQKWLAYVHGACXRAWVEIZVSWDLNQRJBZSMPXUFHBDTBAEMFWEUWRPNCQNRXDFJXMVYIHDHPUDFETUSMBBTHLURFKPNDELSWDPREMSDPNZLIJOJVXGPAKCCZKNOAFHZCAFWYTLEBSMGQQLIXNMYR");

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
    msg.setTimeStamp(0.31528465846659603);
    msg.setSource(17775U);
    msg.setSourceEntity(77U);
    msg.setDestination(1487U);
    msg.setDestinationEntity(254U);
    msg.type = 224U;
    msg.op = 148U;
    msg.possimerr = 0.5935959699703436;
    msg.converg = 0.37801422791765626;
    msg.turbulence = 0.10871279075396945;
    msg.possimmon = 12U;
    msg.commmon = 148U;
    msg.convergmon = 213U;

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
    msg.setTimeStamp(0.535165627273941);
    msg.setSource(22658U);
    msg.setSourceEntity(51U);
    msg.setDestination(21781U);
    msg.setDestinationEntity(217U);
    msg.type = 85U;
    msg.op = 225U;
    msg.possimerr = 0.22993587747913136;
    msg.converg = 0.06138529847460816;
    msg.turbulence = 0.7765949702305557;
    msg.possimmon = 97U;
    msg.commmon = 61U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.685822092427301);
    msg.setSource(9474U);
    msg.setSourceEntity(79U);
    msg.setDestination(22188U);
    msg.setDestinationEntity(246U);
    msg.type = 144U;
    msg.op = 142U;
    msg.possimerr = 0.015667512874605327;
    msg.converg = 0.8753640780527119;
    msg.turbulence = 0.5908853479345996;
    msg.possimmon = 247U;
    msg.commmon = 159U;
    msg.convergmon = 31U;

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
    msg.setTimeStamp(0.10631861362437733);
    msg.setSource(44191U);
    msg.setSourceEntity(222U);
    msg.setDestination(28751U);
    msg.setDestinationEntity(10U);
    msg.op = 233U;
    msg.comm_interface = 25U;
    msg.period = 22062U;
    msg.sys_dst.assign("XANXIYGLIKCDXUYNODHVJKKQCLEVXMBNFVCJBVDHSQHMDWMXXBAAMANRYRLWZHMHRCBKIBYGMCOSZAJWUQGJFNNHKBAWPDCSYOKSBBFXTMDDDOIRMBNWTEUJAXDUEGBUSQCLUUKMAZKVYZEOEPIZGEZVQYXLQCPXILVPPHRFTFJS");

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
    msg.setTimeStamp(0.7491471557577337);
    msg.setSource(30251U);
    msg.setSourceEntity(34U);
    msg.setDestination(40799U);
    msg.setDestinationEntity(159U);
    msg.op = 237U;
    msg.comm_interface = 89U;
    msg.period = 3846U;
    msg.sys_dst.assign("IAAFWOPFFRQGBVUGWFSPNDWRMJQUZPOEPAWECJUWWMCVLBEMLUOVSFOYHJVILMTTXQRNPCJABRQJKYSUECPXMTLRHRCDKMPSQZDYYMCVFHYHWZGZIIVDGTEJRBJBQHDHCEXUGLELVFSKSOKOLTPSSQXGNJYQYMPHDGIGBAEXCMWXQIFJHCKFTRINUAABOZXKGKLURNNLASYZLWAOOXWMZKCIXNQKBNZDHHY");

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
    msg.setTimeStamp(0.4043051211860865);
    msg.setSource(53201U);
    msg.setSourceEntity(228U);
    msg.setDestination(45882U);
    msg.setDestinationEntity(74U);
    msg.op = 38U;
    msg.comm_interface = 156U;
    msg.period = 9013U;
    msg.sys_dst.assign("ZGIYLBJTTGLKLWCNSYZWTDFPCAOTWUSAQQASFTIAUEYRFVTVVMLMLKQBHBMEFNYOCDSHCBDDQBPKGBSWOFEFUNIIOJGUEUUWHLWMNKLNMHJIDRXZYJGBSRHEMRXNQBTBQQUQYSUWOFMKLT");

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
    msg.setTimeStamp(0.3528011699734801);
    msg.setSource(48227U);
    msg.setSourceEntity(35U);
    msg.setDestination(29766U);
    msg.setDestinationEntity(157U);
    msg.stime = 1049374597U;
    msg.latitude = 0.5695756427812257;
    msg.longitude = 0.862126554825135;
    msg.altitude = 9035U;
    msg.depth = 36380U;
    msg.heading = 31313U;
    msg.speed = 27335;
    msg.fuel = 102;
    msg.exec_state = -50;
    msg.plan_checksum = 56107U;

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
    msg.setTimeStamp(0.3303822726380057);
    msg.setSource(29805U);
    msg.setSourceEntity(163U);
    msg.setDestination(22272U);
    msg.setDestinationEntity(78U);
    msg.stime = 2245576982U;
    msg.latitude = 0.8848222382866474;
    msg.longitude = 0.7999627416150583;
    msg.altitude = 2535U;
    msg.depth = 4356U;
    msg.heading = 42825U;
    msg.speed = 27275;
    msg.fuel = -40;
    msg.exec_state = 94;
    msg.plan_checksum = 46708U;

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
    msg.setTimeStamp(0.5922861088855338);
    msg.setSource(21059U);
    msg.setSourceEntity(218U);
    msg.setDestination(10955U);
    msg.setDestinationEntity(122U);
    msg.stime = 62693064U;
    msg.latitude = 0.6050127797459887;
    msg.longitude = 0.9285872906580566;
    msg.altitude = 56407U;
    msg.depth = 17397U;
    msg.heading = 20682U;
    msg.speed = 29803;
    msg.fuel = -110;
    msg.exec_state = -53;
    msg.plan_checksum = 33784U;

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
    msg.setTimeStamp(0.38359409704823866);
    msg.setSource(9010U);
    msg.setSourceEntity(191U);
    msg.setDestination(10408U);
    msg.setDestinationEntity(45U);
    msg.req_id = 427U;
    msg.comm_mean = 195U;
    msg.destination.assign("QIVAVJIUMBYIMETIANQBWUFCLHWUNVMGCHFZXXQWKLQVLPWRYPSQEAULMPXNUBNRRTZPZCQKCODSGZAMPXPZUORQDKVSYVYGJTAVGAIKLNI");
    msg.deadline = 0.8261872909580554;
    msg.range = 0.2637942156353714;
    msg.data_mode = 197U;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("OKJGMRMOGAFXAFPXOIEJWCRBZKFHVNFMDRJOSYUBTUXIYRDIWSGBLRZEMFGMHQVQKTODTOLFCWKPASTXZOHWCHGSQXWLDOASAXBQTNRYUMRKYJWJBTPBMPINIUDMSDADGHAVUGKKGLDXKMTWRZNPISJEZLSYBUCGCZHPQYSVCYELCMZUEVOERYHNRKGNLQBFICAVAIQEENINULKZHNVJQSJJPDBVFCEBFFXQPHZYHWOVD");
    tmp_msg_0.message_id = 61020U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SZZMSGTPNQFKFLRYXDHEMVFHBUFGMFQGHOXPNSEUTCVCDYKIKWCJEDOLGNCMNARFNWJIHOPCUJWSAXDLXIJLYRIOCVWJKZSTDSVVTWWDPXTCBUHBJNSXJFABEWMYQIIZPBQZETUMHXDOPAGVDRSEMTOSJLYYUIUPVLWBRPTNKECQALHERWBKVNRCZARHTKRIFYVDXEMIQWKUBPZKAOLGZLQSAEBQBVGKQFZZGCNMYROHTLOAFDPQIUHJXMJO");
    const char tmp_msg_1[] = {-98, 10, -106, -26, 48, 112, -73, 53, -8, 84, -107, -87, -112, -31, 1, -66, -38, 74, -69, 63, 26, 12, -121, -45, 4, -85, 49, -112, 75, 51, -84, 66, 32, -50, 120, 55, -29, 40, -84, 60, -91, 13, 117, -7, -98, 11, 2, -64, 84, -79, 24, 125, -99, -58, 116, 79, -46, 118, 5, 119, 54, -10, -117, -111, 53, 7, 7, 101, -24, 76, 29, 120, 41, 57, 80, 118, -72, 13, -113, -103, -109, 1, -100, 79, 45, -75, 100, -12, 98, 35, -99, -10, 68, -82, -14, -76, -29, 104, 98, 38, -38, -7, 1, 52, 25, -85, 51, 108, 20, -128, 42, -120, -74, 115, -33};
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
    msg.setTimeStamp(0.08916727696168791);
    msg.setSource(44429U);
    msg.setSourceEntity(117U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(164U);
    msg.req_id = 1681U;
    msg.comm_mean = 252U;
    msg.destination.assign("TGXCEZZWVTMAIYEGDLQQNLHFNXPOUUQJLVYEBTDQPJXNXVQZVMOOUXLYYCJGYDKFUGXSOUWNKIVNMTLSDKSKKCTOGHSEPFXMRKSBFKCEAWTDIMCWZFBYICPVICNOHIPISNRJMBHVRXHLIHPGGBWWAZYUGOGIDSQNANQLNAHWTSRZLEPVCFETSEJUKPFDJUMAZSFQCDYFOCXWUQDFHYJRKZWYHRJVABRLMRGRBBT");
    msg.deadline = 0.12120343952275003;
    msg.range = 0.3470093167227474;
    msg.data_mode = 97U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.856547182019241;
    tmp_msg_0.lon = 0.37552209525833;
    tmp_msg_0.z = 0.24421768858128412;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.radius = 0.8054414305121057;
    tmp_msg_0.duration = 60762U;
    tmp_msg_0.speed = 0.22686068207060606;
    tmp_msg_0.speed_units = 219U;
    tmp_msg_0.popup_period = 21517U;
    tmp_msg_0.popup_duration = 2080U;
    tmp_msg_0.flags = 179U;
    tmp_msg_0.custom.assign("ANRTEHHXHMMKSFMIFCPPNFWJUGIZPPTJARDVGEJDSVCBEEEZCUMYTOBQLXWJYKKZRYTCURXVPAQLAHZIWWLXJLJMAZYIXAOOTNGSNHLVTSIKKEWXTKBFXGANVOJJQWFCHXEDWDQTIDRSRANWIUMMUHKBLDUNVVZKIRYFCQBK");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XIHGOWBUYBCBFFVJVSTAFCULRGSYIHOQOSOZCK");
    const char tmp_msg_1[] = {30, 76, 87, 80, 30, 8, -114, 81, -37, 23, -114, -102, 105, -55, -11, -90, -55, 9, 108, 73, 93, 109, -1, -44, 57, -112, 123, 65, 81, -68, -111, 99, -113, -15, -24, -31, -109, 54, -29, 1, 25, 115, -123, 109, -69, -53, 10, -10, 78, 7, -114, 117, -9, -86, -127, 99, 27, 81, -69, -98, -107, -53, -101, -40, -86, 55, -85, -67, 103, -54, -114, 35, -62, 10, -12, 31, 52, 50, 17, 12, -63, 78, 77, 23, 90, -5, -13, 73, 15, -119, -96, -91, 74, -123, -111};
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
    msg.setTimeStamp(0.4286133522629717);
    msg.setSource(39347U);
    msg.setSourceEntity(160U);
    msg.setDestination(31804U);
    msg.setDestinationEntity(245U);
    msg.req_id = 44186U;
    msg.comm_mean = 153U;
    msg.destination.assign("HCFDFDNMHHEYNQPMCRBJVEOGHQJEANEVXZXYMBEIQRBYHRJYHADVAUCVKRPSEUWZIRDNUOEAOTPONNHKSCWSZTVPFORPJAAXSBACXYWFLLYXIYSJZSLULLRGTEWTUIUCIPVYBRLQMGMZPWZXXKSASGFUTEKXN");
    msg.deadline = 0.42144599231611923;
    msg.range = 0.5356432878183673;
    msg.data_mode = 27U;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 21210U;
    tmp_msg_0.status = 34U;
    tmp_msg_0.range = 0.8045911017285687;
    tmp_msg_0.info.assign("ZSSXUUMLFKPAABMXHWGJNLGVYRAZNXIWRDZNBYKDIRTOSGCQRHHRPSIBXCJOIQHFZVTSYFTTHRMYEDLCULOIHBSNOKHT");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SQOKGKMSEXQQDURNYNTKSHCDQELDUGEKYNGYRUZVPSNWWHBRKBMRXHJWHKAZLLXGFICJPGBKHFVYRZFTYAWNMSODHILRQHDEBUXABLOFRTCPFQXPAZLGUBZNZCJGZYMLAEVJRZD");
    const char tmp_msg_1[] = {-51, 73, -95, -47, -22, -18, 93, -9, -48, -77, -96, 101, 11, 101, -60, -49, -90, -121, 8, 65, 7, -97, 103, -31, 25, -82, -60, -76, -119, 82, -63, 106, -113, -20, -105, 14, -124, 30, 41, -66, 18, -128, 107, -121, -33, -63, -33, -114, -90, 2, 14, -93, -98, 47, -36, 83, -88, -113, -128, -57, -67, -89, 42, -95, -36, -65, -77, -95, 68, 76, -46, 56, -37, 62, -50, 105, 28, -19, -75, -60, 95, -97, 119, 121, 47, -30, 33, -46, -69, 30, 11, -59, 116, -85, 100, -94, -23, -70, -128, 61, -7, -61, -77, -26, 115, 11, -73, -56, 17, 85, -123, 71, -54, 19, -66, 37, -104, -122, 57, 74, -18, 8, 33, -21, 95, -128, -125, 73, 54, -116, 100, -22, -73, -64, 39, 49, 47, -99, -52, 39, 97, -75, -9, 71, -38, -41, -31, -53, 82, -2, -58, 115, -18, 103, 13, -21, 25, -92, 94, 102, 97, -116, -108, -22, 44, -57, 111, 2, 21, 94, 70, 4, 72, -49, -12, 25, 93, -122, 112, 26, -128, 108, -103, 16, -93, 112, 110, -26, 119, -122, -38, -28, -44, -92, 76, -33, 81, 27, -42, -128, 26, -69, 25, 63, -8, 13, -124, -126, 57, 46, 39, 73, 3, 27};
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
    msg.setTimeStamp(0.015498423098166403);
    msg.setSource(59703U);
    msg.setSourceEntity(217U);
    msg.setDestination(10947U);
    msg.setDestinationEntity(92U);
    msg.req_id = 18607U;
    msg.status = 222U;
    msg.range = 0.24269147644277766;
    msg.info.assign("GOOQQKZBPSUVCJWFJNNVOUEXIEQDBFDELTPHEHLYYEERBIENVLFJSFJLGMXQZWJRSAIWFTXSUIKPQYOYKRVKKJZGYTRNRCYPJXOBCGBDSHJXOLPSILCYZCYGXPMWFNTZBZSTZQDFXLCNSPTMAHZVEOEUHGQCLWLPDGVOAHRVMMKQAKAIFPDIHJOQNKBLTUWWSCYTZA");

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
    msg.setTimeStamp(0.9023182627017473);
    msg.setSource(17989U);
    msg.setSourceEntity(60U);
    msg.setDestination(58748U);
    msg.setDestinationEntity(4U);
    msg.req_id = 13126U;
    msg.status = 160U;
    msg.range = 0.5937871560541503;
    msg.info.assign("JJUGPCPDFJKDYNLRTDXWMYFSWLOXPLEMBPLXVAEBAHAPZTDHHXSRZIBY");

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
    msg.setTimeStamp(0.8047083944000667);
    msg.setSource(54391U);
    msg.setSourceEntity(77U);
    msg.setDestination(50480U);
    msg.setDestinationEntity(232U);
    msg.req_id = 41307U;
    msg.status = 129U;
    msg.range = 0.3042289901545676;
    msg.info.assign("CTMERRMRVRYRZOFSJYICS");

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
    msg.setTimeStamp(0.7635217829576001);
    msg.setSource(24070U);
    msg.setSourceEntity(119U);
    msg.setDestination(59118U);
    msg.setDestinationEntity(178U);
    msg.req_id = 35113U;
    msg.destination.assign("SGEGTIMJPDDOKNXRUKGQENLKOPLXKHZVOHYYYTXSKSBPAIBORIVZLQJRRUFTLELMBHGPGZBYFTWWWCZSUVBHFLJRCOSOOWWQQDQSVIXCBAMEIMVJCGMBMUCZVVLROTDXEQYATOFEASIPHNIOTKDRNRCUBYZBYVJMYRAUDIWHKKFFMUPDALHGQJQNYVPB");
    msg.timeout = 0.28278971109621565;
    msg.sms_text.assign("FEFQGHZOHPLPYUBYTXJXIQYYZXDOEXADOSDBEBLAVLFDFVBWCSHXURRJMNANOTMRPUWLJRIWXEWBRPYLNMIEJOGAYZAZKGHDOCQWFJDHBTZBJMDLIQBKZYRANEDZCMFTSGAW");

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
    msg.setTimeStamp(0.43812042962901565);
    msg.setSource(6483U);
    msg.setSourceEntity(0U);
    msg.setDestination(54423U);
    msg.setDestinationEntity(161U);
    msg.req_id = 40535U;
    msg.destination.assign("XUSTMPQIQULTIXHKGTWCGTAXALCCUGNGGUSDZSYURDJMWCNDGVLWEJVZDKOFECVSXTUZAFDHVMXQMGQJICWOBIJFJESTZPCLHWSDUGRHARUIMPEHZRQXPNXWTFFBAKFBYHEKFXDSNOHPAPOBSBAVFMYVHJJAIKDTIVWYHURPZPVIL");
    msg.timeout = 0.02171414351352363;
    msg.sms_text.assign("AQBPJUSPJPXFLMOSRRKKCAMGDCVKETZGIRXHRLBTBBRTVQDPEXJWHEWDLKVPMXVRIKYVCXIPHFJOZYYEITSWUCNAQYNTWBMYUGYMHTTWPHVFFADJWMVFOYUGRKXVQHQIJELXKOAMNQIWLHOSUVZDTPCRNQPYNPAFGRKJMICDOLTDYOJZIUZGFULFAFTLREQSSIQDLFGSNJEHU");

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
    msg.setTimeStamp(0.506000475912797);
    msg.setSource(28708U);
    msg.setSourceEntity(1U);
    msg.setDestination(3553U);
    msg.setDestinationEntity(156U);
    msg.req_id = 33813U;
    msg.destination.assign("XAQOUQNGWPNCWDJJGYMEIPKXWNBXVNWJYZEPXBBTAOAEXJPEWHHNANRPTYESQKTABELVFJLXCHXBLMGKQYOOLFKIDFPQPV");
    msg.timeout = 0.0352918617563428;
    msg.sms_text.assign("VANZNTXICAANEZLLJYEKGODPIRPIMUEXVZPHRQCUDBWXWOGMNLWSCXSWJEIQKVWUFZIKXQWSLPOBSCAGBSTLGXEEDQICPMVPYTJRUOEEVKTWBHQKYERFBNSDQQYJTZIJJRBFYRXDHBSOMDIHXWNFZORIYVMOKNFFXTVJOHRWPGGOD");

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
    msg.setTimeStamp(0.7171957653966403);
    msg.setSource(47040U);
    msg.setSourceEntity(173U);
    msg.setDestination(27535U);
    msg.setDestinationEntity(34U);
    msg.req_id = 12060U;
    msg.status = 237U;
    msg.info.assign("KUZDKTAUKULXVEQEORYCMCWREKWX");

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
    msg.setTimeStamp(0.6975088898905493);
    msg.setSource(64969U);
    msg.setSourceEntity(42U);
    msg.setDestination(23235U);
    msg.setDestinationEntity(73U);
    msg.req_id = 46824U;
    msg.status = 189U;
    msg.info.assign("YBEQVMKEEOHBXKUCBRTPQZLUVLOGZZINQOZAVHIYNCPAFJBCRTEPRWWEMCVMASDRUHXRHZFHWXSQLXFESVEGTWCMOSMYPVHGFCDPLACDRBGSSZGUUTCXVGWDDTYAQXUIPMLKRZQSIAYNAJ");

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
    msg.setTimeStamp(0.8973924130995289);
    msg.setSource(30992U);
    msg.setSourceEntity(39U);
    msg.setDestination(45978U);
    msg.setDestinationEntity(216U);
    msg.req_id = 4440U;
    msg.status = 229U;
    msg.info.assign("BWOSTDQULVQJYUWIPGGVEXKTPCHOQHXJFFBBQIRILEBIRDNVFSZKQTVPBHBTKSFGUUGWZBAEGBOMDNIIAEDMYNMGKLCVOLUQUMFWXVUHPLKLWDILWR");

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
    msg.setTimeStamp(0.40959168382121625);
    msg.setSource(24297U);
    msg.setSourceEntity(2U);
    msg.setDestination(13332U);
    msg.setDestinationEntity(188U);
    msg.state = 169U;

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
    msg.setTimeStamp(0.868678794045046);
    msg.setSource(7993U);
    msg.setSourceEntity(179U);
    msg.setDestination(16756U);
    msg.setDestinationEntity(43U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.609860697369249);
    msg.setSource(16804U);
    msg.setSourceEntity(204U);
    msg.setDestination(32060U);
    msg.setDestinationEntity(143U);
    msg.state = 50U;

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
    msg.setTimeStamp(0.5805135268386917);
    msg.setSource(13976U);
    msg.setSourceEntity(52U);
    msg.setDestination(63441U);
    msg.setDestinationEntity(30U);
    msg.state = 109U;

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
    msg.setTimeStamp(0.9532254562361007);
    msg.setSource(42198U);
    msg.setSourceEntity(79U);
    msg.setDestination(47488U);
    msg.setDestinationEntity(177U);
    msg.state = 168U;

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
    msg.setTimeStamp(0.7763975858607772);
    msg.setSource(46968U);
    msg.setSourceEntity(188U);
    msg.setDestination(19301U);
    msg.setDestinationEntity(90U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.4370728713037627);
    msg.setSource(5580U);
    msg.setSourceEntity(146U);
    msg.setDestination(34562U);
    msg.setDestinationEntity(18U);
    msg.req_id = 31921U;
    msg.destination.assign("IZXLZHGGYWCSZUQHJIYQKTDJZDATASBNKYSHZDQCGBQIRLNEEMUWAOWGRGZYBTJWCTRDTGMUVCGJPOSNIWYTQLSRXBYEMVXEXPHIPWGVMPPUFNBZMYSJKNYFVSESAXRFYBNQJIIOFKYMNXBHDWJAZXCPUHZWHLEVRVMMWMXAOAOQGARLOTUBLLUFQPROKKWCBAHPJDQXAKFDEEVJJOVNBMQTUHOHOICCFKIFXSCDL");
    msg.timeout = 0.4289536239876821;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 18472U;
    tmp_msg_0.destination.assign("WEFJSMAHUCNGLYILSPAJGQNQFUKBFFLLLCEAIXALNKXMQAGJZNLNWGDMPRZJSVUIWCRHPHOYRWSNKWCQQNUHMCVUYIDBUBTQESNHBMPQDPUESVXZPIKICIKN");
    tmp_msg_0.timeout = 0.5555562750012192;
    IMC::SessionSubscription tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 2904714165U;
    tmp_tmp_msg_0_0.messages.assign("KKJLSMTJLEYIQEFNOATERBTDOSMMBZDYFYWPGTUVBRUHXZWRRJM");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.679668343361);
    msg.setSource(35433U);
    msg.setSourceEntity(229U);
    msg.setDestination(16379U);
    msg.setDestinationEntity(107U);
    msg.req_id = 40350U;
    msg.destination.assign("YIADRFXATTDZSQJWJCLYQAECZYFOWGUIHDAOONOQXALAYPLVBQVTLWCJMRTZUOTHOKSBNKQNGMHVMPRGDBWSRBUJPFWRPKGDVXRRRZOVWZMBJIUBJBSLGHYYGFYSKYJUKUBCVVZPRG");
    msg.timeout = 0.529395257929018;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("UWCKSMUDEWNHASICECRYNTQOTTRK");
    tmp_msg_0.timeout = 50002U;
    tmp_msg_0.contents.assign("EWMMLCTOJAGACVMAKECNLYLWSMYIQEDXPOYNCBODJFTTBOZVWLCNPFQKGFETIYLIAVSWJQXKFRJEZRNPTKQLIBKOPSNECPQBADUUTIVKHZHIURVLJZDHSGFE");
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
    msg.setTimeStamp(0.047338104984110174);
    msg.setSource(56552U);
    msg.setSourceEntity(128U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(176U);
    msg.req_id = 55602U;
    msg.destination.assign("LGNONIXYUUXWPVPYJXMHVGPTHMBKUTGCRTIYCBZXFSWFZCIPOMOWZTCNDFOBPOQWLTGHQBVXPVYILWQMIQAXKBKSIZJWCKCLQUOXEFJJOKTCJXEOHWUYGYADEAPSADVRFYZAHBWRMK");
    msg.timeout = 0.01535311406064821;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.19742319207883152;
    tmp_msg_0.y = 0.5143425465034633;
    tmp_msg_0.z = 0.32464784069299457;
    tmp_msg_0.k = 0.7042604425489345;
    tmp_msg_0.m = 0.5473975157703219;
    tmp_msg_0.n = 0.7575156902319592;
    tmp_msg_0.flags = 74U;
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
    msg.setTimeStamp(0.10881174577128794);
    msg.setSource(6452U);
    msg.setSourceEntity(116U);
    msg.setDestination(15608U);
    msg.setDestinationEntity(214U);
    msg.req_id = 53508U;
    msg.status = 53U;
    msg.info.assign("CWXMXKEUSVHKQISEZMHZRGUNAYDVGOZMWABYJNUFFQFXGCRR");

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
    msg.setTimeStamp(0.8785859890595671);
    msg.setSource(49844U);
    msg.setSourceEntity(72U);
    msg.setDestination(15731U);
    msg.setDestinationEntity(158U);
    msg.req_id = 2405U;
    msg.status = 249U;
    msg.info.assign("MJGIOJELCLBGZARSQCIYYIGDOWDOGPHBRLFWTHDKOXXSGQVYQKZFFLOJEANPPXDQUSVTMTMRJNPMCLBHNEUKXJAEXXPYWKAMWUZUSFRYPRTHIMUDBUNZVYQJAGHMODFJFQQEVQCGCKGVNUNIDKAEFXYWSIMNSOJTAXHBXLPWRWRX");

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
    msg.setTimeStamp(0.09087381530733107);
    msg.setSource(15357U);
    msg.setSourceEntity(114U);
    msg.setDestination(61069U);
    msg.setDestinationEntity(5U);
    msg.req_id = 21104U;
    msg.status = 217U;
    msg.info.assign("AEXNOHEDFYXZPONNFPRGGKCBLKIUPWTVUUHXWAYKPEHSCGQLDIKCUOAEALSDQYFLFJLGAJK");

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
    msg.setTimeStamp(0.9238879743332435);
    msg.setSource(31958U);
    msg.setSourceEntity(16U);
    msg.setDestination(26030U);
    msg.setDestinationEntity(77U);
    msg.name.assign("ETOBTFTUYMFLPLEKFGSZIJQNREAOMMDIWDUHVQNDGLQIZSYRMOGNTCGYUMDZQXPDGPCPTRBJHEHOFEELLDXXCJXINBAEINFPONVHZSMOBJAQAMUTCXACWFSGKKTBNMRZZBAQPEWYUFMSKRDZQBJBJIUTXZVWXBYRRPASQTCHUVXKOKGWAVDJDYUAEGFBCIHQCIJ");
    msg.report_time = 0.46740303324289656;
    msg.medium = 134U;
    msg.lat = 0.9973833401548986;
    msg.lon = 0.5569156847308733;
    msg.depth = 0.7006500847552464;
    msg.alt = 0.48588572798548046;
    msg.sog = 0.14010828767050865;
    msg.cog = 0.7233091276819563;
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.1769226036987983;
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
    msg.setTimeStamp(0.4707173813817992);
    msg.setSource(20566U);
    msg.setSourceEntity(229U);
    msg.setDestination(22635U);
    msg.setDestinationEntity(102U);
    msg.name.assign("WQYITJHOWLKFDGXSDQZROCALRXEXUPAIBTGKNCOIFILMIMOZDWVTGDQIMRQBIEWJMIQNEWHBIOJCEUSBAPWTERDBBHEMHVEWZFAFGFASEJCKRCNMVQSQYVJPYDMAJFNCVYYSADGSOHNXDMCZPAVUUKIGNVABCHQQJYPCWKDGQLUVXKLZKUSJCTLHFPSSRTRGNHDMYUBXGTONYBETLAKT");
    msg.report_time = 0.5669554166590343;
    msg.medium = 97U;
    msg.lat = 0.06236868386167882;
    msg.lon = 0.9159843890051429;
    msg.depth = 0.7581517079415895;
    msg.alt = 0.012639975151477079;
    msg.sog = 0.6309989733334678;
    msg.cog = 0.5011360900650614;

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
    msg.setTimeStamp(0.5831031187543736);
    msg.setSource(50331U);
    msg.setSourceEntity(146U);
    msg.setDestination(35569U);
    msg.setDestinationEntity(11U);
    msg.name.assign("AYNSTVJMSQNKMPPGFYFIJLRLOBHLLCUTGMSIUABJNBWTADGXDWOUFZVCKZBGJGPFLXBTHWNSOYEMSRTKNEZ");
    msg.report_time = 0.3064748811871475;
    msg.medium = 21U;
    msg.lat = 0.9775151382428595;
    msg.lon = 0.5664201506015988;
    msg.depth = 0.5507678064192596;
    msg.alt = 0.8979517573254527;
    msg.sog = 0.3518783527077951;
    msg.cog = 0.9735037665422669;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.7680471105602119;
    tmp_msg_0.lon = 0.5900854167918985;
    tmp_msg_0.z = 0.559757222047458;
    tmp_msg_0.z_units = 204U;
    tmp_msg_0.speed = 0.7685052414712272;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.bearing = 0.5898467561670014;
    tmp_msg_0.cross_angle = 0.6580586912132956;
    tmp_msg_0.width = 0.6927790734028759;
    tmp_msg_0.length = 0.08222586856206526;
    tmp_msg_0.coff = 122U;
    tmp_msg_0.angaperture = 0.5008838651608087;
    tmp_msg_0.range = 15080U;
    tmp_msg_0.overlap = 169U;
    tmp_msg_0.flags = 169U;
    tmp_msg_0.custom.assign("XLUCMPZRPORGDTWTVYJQVFQKRIQGDSPKIGJEKXBNNMWUUXBOQBZYZUIDLNPSEXYMLINFWVCYQSGOYTXOWUBSEATFRKCXMIHCVFAYUTBOISJFVHMEJKUBFKSPQRVHOLY");
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
    msg.setTimeStamp(0.20370360770502893);
    msg.setSource(9130U);
    msg.setSourceEntity(147U);
    msg.setDestination(29695U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.3979085220205112);
    msg.setSource(46090U);
    msg.setSourceEntity(77U);
    msg.setDestination(11840U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.5436417502453469);
    msg.setSource(48991U);
    msg.setSourceEntity(159U);
    msg.setDestination(14571U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.9757697065336822);
    msg.setSource(35011U);
    msg.setSourceEntity(64U);
    msg.setDestination(12390U);
    msg.setDestinationEntity(83U);
    msg.plan_id.assign("MPGDKEWHRYASPRLILDFWHCCLMDMXSSUGPNCVIGFFUIOZAZVZCLXAKVXGYMBDZFAXNBVYQIRNHARCTKMBAWBXFTVOLYSKZNZGAHHBVDXDPOELCNKGEMASOSRKLQYXUSKNTFFPERLOQHVGANTH");
    msg.description.assign("JNGJUPHHWYUBEYIKPIZZVSNKEFNOCPFSZDRBIQJYJFSPWUVXSMMOIVCUIFBZOVYBDBOTCPWAYTEFYCGIEONRHCDUKXCBUYXKDEHTBXBTGJNFOSLKIPLAEZGCHASVYXXGAJGNWQFXKIMKQPDQRNXLBCUHFXWVQPHHTJDIZQQEKMTRRLTWWFBHONRNAEIAAALRHEWQSLUEACJ");
    msg.vnamespace.assign("OKVFUIRBISSMCTWNYKBAWTMSEUZPTARMNPOLTSDXRHJUFZXGJANCWQJYVXSFUBTOMYNRFXBQHCHRIBNZVRDZGXLTEISAOXMZZHTSPHKEVJEGSDCZAVXXQAWGYQHVLMPQLCIJCWSTDIWZYOLLNASAKLCMKCKHFHGNKVVWDRLROUNEYRNPIWTDAVXQEQPIQMOMHQIEMBYXHBEKACDGIPGJZBVGYQDLCDJOOBPFEKYFLUFRFWDTJGOWPJUE");
    msg.start_man_id.assign("MRHPXDBHKHYBIEJVWDXKJDHOMHUISUQEYNE");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("CIIKNCARGFQKYNKOJRSIZZWOMVUFGNBWFKXTXAIPPCDHAWXHIPQQETDXOWOOKEETGOMJNEVQEYLDCQPIHXLDZPXJHGQFGMZZBUQMHQZVTDSGELCEFUNXVQWNBUFYNERRSBRZZXRYVGGDRYWMVLWBFMSACGBKGQXPUWTYOTHVUZJUBEYAJSOSSSASLPLPSYVWMFVNAIFJVJNRPILEDYRCLBIBADHDJMZAUTMCP");
    tmp_msg_0.dest_man.assign("LORALUVJSAMENWJPKALHQTXSWROCVPFVFJZLHYBLZVFMYQFKWUFNBMGRVSGOMCBINBQNISZAAQUPCJLRDIYUDIIBEZNXHMZFIRDCXHWAEUYLQXJTHOOTPTWEGDNYKJQDRUGWDYZANEWTNLTTJQUUCEECPZKSMPOCUHKSSYXBVHYOVTVFSUFWLXASQGNSWXTIBPHBMGXCVMEEACMZFODEOMRXHFG");
    tmp_msg_0.conditions.assign("HWNYCJBDQGEUJXIBYAUOGOPJHLKDQIRVVCKRTEYQTGQNZBMWDDFLPAOEUAKAENVSVVXHWIFSXMEMQZMFTHPOPUJUNWFITXJOPDSCGULDNPWLZJBHZCMMSSTRCMH");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Map tmp_msg_1;
    tmp_msg_1.id.assign("RWTIYSNGWLNSXZQLQPZNSYPRWHXRAFVKMBBIEATWOZSDGMEBDWHDDENUFYRXIWGMBJTNGZQLHAXPPKLUVMSELUGVCOYGXKQXYPKLNCFKAAKDVHGZYDVMWZGKUWVBVDYMUTOFBKRTALZUFOMGHBMVCSJJJBUJTVIOSIZAJFOXOIPXBCQ");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8949800724247163);
    msg.setSource(56527U);
    msg.setSourceEntity(214U);
    msg.setDestination(13027U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("BJCKAYRWXCSFTAADJECNBEWZOBAWAOOYAXBKYLGTNF");
    msg.description.assign("IRJSBMAAKJZKPIAWCPCRCXAUHUIIBDFZZKULUVKBXIAMTNXEQMNAYGKJHSWOWLCHWWTLFGHYJZCTVPDBGEQRNMCZZHIH");
    msg.vnamespace.assign("VOKAQNQWXFOAKLRZKDRRB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IRYSRNGGGDJRKBALLXFKVNFWNBYPQQFYJMHTFHRBRUVPSHOXTEJSTZTEPAGABNYOLHEZSSMMDVXMIACMILEWNEMXJBRKAZAQCDWCLCVRVLLZMICEUYLIPXKEXIKAGZJDVXWPXN");
    tmp_msg_0.value.assign("HMTSLYJHTNVKDPSZDEHGQTFLQRVDJENJFPZVE");
    tmp_msg_0.type = 249U;
    tmp_msg_0.access = 1U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FSVYNZBPEMCICRWVTDQGZZULKNCPJLQBVYECAZXPXEHNWRPRQLXTJWOJJHIHHCYYBVDKFUFYOKWOZKQXWHWNWOLGHROJNKUQILPPOXIFEGZ");
    IMC::VelocityDelta tmp_msg_1;
    tmp_msg_1.time = 0.2784299450974659;
    tmp_msg_1.x = 0.4549350372093891;
    tmp_msg_1.y = 0.5939115494745368;
    tmp_msg_1.z = 0.18285837759052637;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DepthOffset tmp_msg_2;
    tmp_msg_2.value = 0.16444709198493257;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.7191352453891914);
    msg.setSource(13339U);
    msg.setSourceEntity(251U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("HULVZBFYAKWDZIAAVWBYEOFWRDVDRYWRLODTSKSFPUZQTEIRADGHHLOGWSJXZCOHPCAJTFKFPRSUUPXZGFRVYVDDTQHOLPEMVLJWVVSLXKZDCEDXOJBYHAJMCYKQFRMXQNYBINPJJNCQNMMCBSMFHGIXEINIMENKMHCWIUWDOTJYUECTECQKVSPKABXUZQGRGAJURGZSCLINZKBGATKUQLI");
    msg.description.assign("DDFBCFNLGXMSHYCMGXZQZCTJRUNSWONUBB");
    msg.vnamespace.assign("FSOLDUWCHQNXHIAYJFETRCCZJAVZXQLELIYETXUGGGRSJQHRRJDQTVQREOUNCPFZXMBMWDYPTPVGKPEPXGUHROJBQRZOAWNNOQAFLLHQLTFZRNXHDGAMTJPKLNJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SIOLKMAKZRRTPFMNVQNWVKRBGSZTLBGGISDTYMGFNLUGBTEFVQXOUUOEOPQRMHUPPXLIWJHVBFAHICQJRVMUXXZMDJEXBHNVASWUOCLURIFFCGPOYUYTBHZYBSMJWZDCNZXKDAEJRWKTAAUBHWPCWKDNSVFHDJBYKXCRCRDFDMJ");
    tmp_msg_0.value.assign("NYBIOKEGNBOAVDTWDFBRXLXGTW");
    tmp_msg_0.type = 99U;
    tmp_msg_0.access = 141U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UQIMFCIGSBXWRPVKKPLGWJDZZBYXOQMRJWHVZSQGZKLIZKQQANWBDKHAYCYYWERVEDPEGJLOBSHNXIGRNAXMPFDFGLUPLUJJTCEEOYLEROCUWK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("REHQNKIHZATRLIRYKCJUVYAOLWNBIPQFXOSZFVWOHTZEOYTYQKMYFIAAPXLWWPQLLJEAJDUSXJKSE");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.906924511089387;
    tmp_tmp_msg_1_0.lon = 0.377837010775821;
    tmp_tmp_msg_1_0.z = 0.361106106383681;
    tmp_tmp_msg_1_0.z_units = 100U;
    tmp_tmp_msg_1_0.speed = 0.2489320098449055;
    tmp_tmp_msg_1_0.speed_units = 160U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.15626232185654998;
    tmp_tmp_tmp_msg_1_0_0.y = 0.40080009329705746;
    tmp_tmp_tmp_msg_1_0_0.z = 0.7687479315007414;
    tmp_tmp_tmp_msg_1_0_0.t = 0.1282898327579921;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.36710382920239804;
    tmp_tmp_msg_1_0.custom.assign("ENAXRYFHVWJJGFSIZKKFHDJLPMWDRFYPORLTTIZRECILBPZSMHYHFSVYNLNFUMKNBNYSIGIASLHCCEKDEMCZSFRZUIPOCYYJGEMUOGJLQO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::UsblConfig tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 130U;
    IMC::UsblModem tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.name.assign("DZGWGTTPSXUUBLOPCXJELJHGEVFQQKYKTJPUTWBNVZSHSMMOEITZDNM");
    tmp_tmp_tmp_msg_1_1_0.lat = 0.30879107405104733;
    tmp_tmp_tmp_msg_1_1_0.lon = 0.08544072755447119;
    tmp_tmp_tmp_msg_1_1_0.z = 0.011026721113062687;
    tmp_tmp_tmp_msg_1_1_0.z_units = 133U;
    tmp_tmp_msg_1_1.modems.push_back(tmp_tmp_tmp_msg_1_1_0);
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
    msg.setTimeStamp(0.3039618342696053);
    msg.setSource(41611U);
    msg.setSourceEntity(76U);
    msg.setDestination(43726U);
    msg.setDestinationEntity(112U);
    msg.maneuver_id.assign("LKEPOAVETSRJJUGDJDVKABFSNRNFSNAHTMLXCHEMEPFONIJUWKFQFGNHSGRKLE");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 65203U;
    tmp_msg_0.lat = 0.908448689543845;
    tmp_msg_0.lon = 0.8328173615282042;
    tmp_msg_0.z = 0.5865619195051861;
    tmp_msg_0.z_units = 11U;
    tmp_msg_0.speed = 0.008859339560037371;
    tmp_msg_0.speed_units = 123U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.014717683052329456;
    tmp_tmp_msg_0_0.y = 0.26935811011658894;
    tmp_tmp_msg_0_0.z = 0.39005882512357704;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("NAFCUMCOOXVUSBKXZNQQPJLVPOQNVNJZLHERGOVWVTOJRYRPEPZDCNAGRDCHWLKETPESUYIUKMLEJWUWZZYBRYSSRABIHHLRFTPDCQZXRDLJQBDWZWLHWTNAFTEUEKMIKICAGHNAGKNHYQMXJLNFQIUMBHTWQANROZTVVFLGCVYTUADJDEIIGCMWSPAIPTSPBFXYAJOZKKEBMMBDQUUVFMSWLXXGDFYJGDVKJCXXGKIOFRCYIPMBSTSFXZBHQG");
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
    msg.setTimeStamp(0.764402335038115);
    msg.setSource(65041U);
    msg.setSourceEntity(84U);
    msg.setDestination(1037U);
    msg.setDestinationEntity(175U);
    msg.maneuver_id.assign("TVKEFQFYMCJVNVEGKDNOIPKULQLANCEVKRBHHQUJUDPFZBCQMKSTVILACGNRKX");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.1669969844646193;
    tmp_msg_0.lon = 0.8729216093782582;
    tmp_msg_0.z = 0.708589661344411;
    tmp_msg_0.z_units = 232U;
    tmp_msg_0.speed = 0.21603522537831454;
    tmp_msg_0.speed_units = 97U;
    tmp_msg_0.takeoff_pitch = 0.6364177099876881;
    tmp_msg_0.custom.assign("RYQONRBISEXMAEILKOSVOTPLMVWNMMVNFSLWUMPJZBBWIWVUYUCXOFABDOJYFTHRJXNPKWKPHHISJPQMFAAHUGGHDJBWUGXTCGLZSDIJNTPCPKIXSQVKAWHWAEIHRZLGNJFRZPQZCCLUDPECQBLLRJISVGVDNEGEFRUXXSGVMTRYELIQEFCCSHAYXTPYFZLOOOQAJAR");
    msg.data.set(tmp_msg_0);
    IMC::FormCtrlParam tmp_msg_1;
    tmp_msg_1.action = 44U;
    tmp_msg_1.longain = 0.3278393595496829;
    tmp_msg_1.latgain = 0.8230458124794051;
    tmp_msg_1.bondthick = 3225334822U;
    tmp_msg_1.leadgain = 0.522611591591145;
    tmp_msg_1.deconflgain = 0.6966341974616486;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LeakSimulation tmp_msg_2;
    tmp_msg_2.op = 58U;
    tmp_msg_2.entities.assign("OOINURMRGWNGCWJYXMBXECPMGJHBVYWLDOMDTCPHDUFUEZKAMGPBTEHPLQVXEMWXAOSAYIZEVZYRYVBSWSTJGOSQQDGZONUIBTKWFSQLMJPRECOCFKYIKQVHVTCRQNXIBN");
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
    msg.setTimeStamp(0.7087056542469754);
    msg.setSource(35828U);
    msg.setSourceEntity(78U);
    msg.setDestination(22848U);
    msg.setDestinationEntity(125U);
    msg.maneuver_id.assign("FPKMUBIEFOFKVITUGLCQMNLWZYXPWUZTXENWTWDZQGPKKGUNHILJVNYEEVUZVSHLXMCQTDIBHDHTADGRFBDMMZQCBOVQCAOAUPMBSXSKGJPTZY");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.9738653484683895;
    tmp_msg_0.lon = 0.2812092499680987;
    tmp_msg_0.speed = 0.27135708483093535;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.limits = 162U;
    tmp_msg_0.max_depth = 0.3618911027419852;
    tmp_msg_0.min_alt = 0.7343069406068181;
    tmp_msg_0.time_limit = 0.9693023257983167;
    tmp_msg_0.controller.assign("BXGHALJGFXENRUSNQPPTASTLYWMDHCLSUBPTTQNBWNAO");
    tmp_msg_0.custom.assign("PSAGGWTPDQND");
    msg.data.set(tmp_msg_0);
    IMC::ManeuverDone tmp_msg_1;
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
    msg.setTimeStamp(0.9625755270623749);
    msg.setSource(29382U);
    msg.setSourceEntity(152U);
    msg.setDestination(17789U);
    msg.setDestinationEntity(244U);
    msg.source_man.assign("QZFBWHCCHSKEIBUJYHDWSGAPOCWEUJBQQLPMRDTAYQJZTKNTMORZOOHAHKPSJRYGNTGZOWUEBYBXTAULIZAYWTIVNZVVURATNJGWFQXZLBEPCYSDXLKRFMHCHGIXJVRUFMLOIQOIXMONKWYCPVQKFKIDAVNTRKSCNVVBGAYITPFNILTBBXSMLEFACDDLYESUZPSVEGXFQNDECUMKQRBEUSNHUPDOWHYLZSMFWXXZRGHJJIELMFDJOJVXMDW");
    msg.dest_man.assign("RVZCPIPGXSLOSBRYDVSFGEBQBOTMGWPIHBUYJN");
    msg.conditions.assign("AHMXGOJYTHZNOSUAYJRSNCGEZXWWVGHFSOFZBCHFMSRXGQDMBZCEPKPRBAWZLTQBKISHXICTYVFECIUEIZNGQXFLNTNUDFPGUWRZZQQQHOPWAPYZKUTHVXPXYJCFLOMUCBSX");

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
    msg.setTimeStamp(0.8893208111569844);
    msg.setSource(9132U);
    msg.setSourceEntity(236U);
    msg.setDestination(57450U);
    msg.setDestinationEntity(147U);
    msg.source_man.assign("NWMJWOBNEIYLJCWCYUEHQSQJPYNWJIQEVCUDOTTHGVUTJVJPMMVHQAKCFRANKVYGSYICTJDVTCFDRBNPGA");
    msg.dest_man.assign("RADHTAWNOZKFIDNSNSDDSPRCHPEJENJZXHSYPSWNKUCYAQMLTBRPZGTHTIBLUUQUFGMDYZDOLRCCQVPKKVZCZTVLJEYFQOBRTRGSKHPGIAHKVHNDULMSMNKUUYUQIGPLAJBQXNBJJGJMGVFWXWBEIPIBSCKIWDLBFAAMQTEVGGQOBEJMHWOTCFFWFNCXAJNWAZEMHMODEYHDFTXIVQYZWKYZCEEOWRIIXXV");
    msg.conditions.assign("ACBDVHZNCIBRKFSYDEDLARQNHXTYTXETMHOQWPTHRR");

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
    msg.setTimeStamp(0.9618688818241081);
    msg.setSource(51739U);
    msg.setSourceEntity(59U);
    msg.setDestination(47383U);
    msg.setDestinationEntity(104U);
    msg.source_man.assign("HGKMABVENDMGSEKTOLUELMZIAZROFBTUZEASCHOIWDNXAZMPWMBKNCHWBBPTXEXUGTJRASNJDWWGCRFTQDSRDRJEPLLUMWVKKPXPYFSCUSUEITLLLUXDCJUASRJNBTVLQDMGRJZEMYQFIXGIYYSRGEPMWPFQFVANYIYCXKMPDQYAFLTYGWNLPHHOUBNKZTXOFKQHZFVVJQIWCYXCHFORYDOKDHAPVQKGBZINCQIVXSRUVZOSBNGBHQ");
    msg.dest_man.assign("OVOAUODLJDSUEKIPSCBNPXSDMQWUCWFDTBQMOYGSQYQGMHAQBRYHYTASOU");
    msg.conditions.assign("MKTPSDFTPQPUXBKWIBZMRANCMBUTAOGMBROLECIZIEDIPHKRVHEMAQUXCBCIGZYLNKFLXTDFUVBKKAOUWZCZOQSHNCARGJNZUGEQRYDYILDMXBWDEVTJEZCNWWEIPOJXGQRLGSBBDHSXLHNEAFOCJLVPUVQWHOPAGLVGGHEQYKRHYHJJCQWKZJTALOHSZFFMIDONJTGISXTLPZNYQJFWXJNIYUXYVVKRADPWSQMNYB");

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
    msg.setTimeStamp(0.16964484960909532);
    msg.setSource(31116U);
    msg.setSourceEntity(8U);
    msg.setDestination(34181U);
    msg.setDestinationEntity(73U);
    msg.command = 96U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OUMYWCAKVIBSMSUSLDWRGLUXYLDJAIZQGQCHNCKQPMKXVOENEXWMKCINDHZGSOTXMEIBFPXFCSUXOIYTZERTGVQDEPKOQWRUDNAVNUQJULJ");
    tmp_msg_0.description.assign("ZYALNCXILQEHCOIUYATLP");
    tmp_msg_0.vnamespace.assign("PWSNLCUAKMPCKSCFBNPWJOHIRWXLBCBLBPMLZDWFTMQYVVOUEEQBNLXVISTGROLBHWSKKLLCQDNSZKYNNVEJGHYMWAMKYXRPKBDPEPWYOEHJYYSCTTQDFPTHMIEDFTIBCXSDUGKGZPZGUAFAFACWEVTZAKFGPADXROGDZWQDNULMVTOIJTXJJ");
    tmp_msg_0.start_man_id.assign("OWBTSUFTAVNXGDOERGNSOEBOOYJDENPLETCPTKDOMSWDKWHDLVPGCHHBTILVWBLOBLLLZUHYKVDAWPNITBYPFAUFHRMZQNRLJSWQJGOMTYZDTDGUECCGGNFIVWJGCYGVXJMERXZHQJRAMMRXWKSFMIOZISSPIVDGMORQZNAHSSXPAUNCARPYRXKNFWUNVQQACBMVLIUBBHKYCUKEZFQQY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IRCKYSMDJRZEXSEQVYKSVBXFIBQSJYPSZZCWJBTXDGKHBRDFUJIUAAZKNNLQNFVDCQAQDZGAXSLONMLSUALQKPPWCCJAJOPHPFBMUIVEBEYZCDEVTJGDUYLNHWYHWOODKOYGQMONPEYEMBTVIXITNTCSPTHULLGRGEHTYIAFUQXATSBJCXKWTWGCZROJLHNEQAZUPNURMAVIMRYFVDGVZWLFRKWWIFWNKSGHDHMFMIMXKORPHRTQVUOEJOB");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 45282U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HOQWDVDHVQTTBFOUIRIYCCPLAPUBYZGILNEQMKBFZPYJXQCOJAYSAP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 60614U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.02730484172402381;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.5924537377234141;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.5491474179212679;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::EntityParameters tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.name.assign("MPMOUWKPYXTZJETRSKCATXGWXLSJEVCJDZQNMZLQFRKYGBKSFZHQHBIDFHPQTUMRCOILEBLYPPNGPIJHYQXVPFRLOVACELVYR");
    IMC::EntityParameter tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.name.assign("MTURTUWWWCQYBZYLLXNOQMGJTRIDXDRECQYADXXFOAMKJPAYFSAOBNUJNJJCLGLKESZOHHBGPUCWBTQUAQEFNXVCROTTJCNYMMTIXVHIBICKPEWBQGLRHKMTGYHGZRPDEPMZLELAKVVZOQHCKZYWUBQFSNDLDFESWUDTLPDSRGEEVCNHACXRZRKSJWDAVBWFIZAXSHFSFISPBBILIOPJNIUFRVNTXEQYDJVHGVYHOVMSMY");
    tmp_tmp_tmp_tmp_msg_0_0_2_0.value.assign("GAKJLEWTDGOPTBZQEKZUHKAOVNFSSUNSAWQXKRVAHOYMBYKDPNDWDUWDIZPFVLLBFVZXPEQMQZXOYFTYNLSVMTTAXIIQHLRUGUFMWFSGEYFXBHKGJPPACJQBMAQHPIFKLLIEYCSGJEYKYBVNICEVNHDBIGIYWNPASBHWLZMJSYUCTBERJJSJQDOBQTCCTFIOWOCELHMCNURHXWDHX");
    tmp_tmp_tmp_msg_0_0_2.params.push_back(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FJVZUYHJVWKAIIYDCDUJRWUSCUYYESXDSUKOANULGQCGPTTQNNJDAXQTNKVLLBGA");
    tmp_tmp_msg_0_1.dest_man.assign("CABLKPVFHUWHOLTVXVQXXYXCXVWRXNAWYSNPGGIUNESDWMTSFOIEHCLWJMLMHVPUPFZOISIDSFFCNORMQEBJNJKYKQ");
    tmp_tmp_msg_0_1.conditions.assign("LVCOSRHSNLWNMRIUSLKCFEVVNDKEMUOWZFDLQAVFXPARSRNRPGHQGOG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Launch tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 61867U;
    tmp_tmp_msg_0_2.lat = 0.4026012377940982;
    tmp_tmp_msg_0_2.lon = 0.4734758097749665;
    tmp_tmp_msg_0_2.z = 0.13781185415495278;
    tmp_tmp_msg_0_2.z_units = 108U;
    tmp_tmp_msg_0_2.speed = 0.783009087743478;
    tmp_tmp_msg_0_2.speed_units = 218U;
    tmp_tmp_msg_0_2.custom.assign("SEUCRSIZXONFZWNOGLUAYIPOCCHLQWALPUKKUZIAYHSKAYTMKVVSBTPSRFG");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FluorescentDissolvedOrganicMatter tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.802817319725121;
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
    msg.setTimeStamp(0.9054988139552511);
    msg.setSource(64879U);
    msg.setSourceEntity(187U);
    msg.setDestination(995U);
    msg.setDestinationEntity(98U);
    msg.command = 107U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NHNLTOCKQXDIJSBUCRUHWQEIKGWFEMYLXQPLUCGCASGDDZPKTSYMJUONZWSXAGRLQKNQESHBCARLRFQBZWFVELTEZFAXMVONLSWFKJBGPVVIODFLYSWJPCTFFBRXXCYJHVEODLBUNWMQHARKEMGDUKJEKZFYKC");
    tmp_msg_0.description.assign("EDJRMUSYWTTARSOYZODOMQQHMTYKLRYBIOATFELSZTGBRPRGMMPCDAKOGAYMTBCVUUVXATIILFVCXSLMJBXWIZSNIGJNQEADNKFOYCCZGLKCDLVNNBOZJYZEVIQQLSKAZYIBTSGCAECIRPXTJPIDVNXPWGKGRCJZWY");
    tmp_msg_0.vnamespace.assign("JTTHSNLEYFNCRGGZECZQMSWCAYZMJMELUMRHOBREICPBHWQHENGJYORYPVXWKADYMENWAXHFTYPVKWGKWACNCHQQILXDRM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DNWCBKNYGLFZIQWSQOCVZBCJQCGSGUIIXPGTEYKJVMLUSRXUWFJRXLEORHGTDKEANKFZBPCZKQJDIZBBNHXBJQ");
    tmp_tmp_msg_0_0.value.assign("UDGGVCETVJPMDXURLANFASQQOOHQBGHHBZCMIWPSDTVSIRLUKEQKZIOOCFZB");
    tmp_tmp_msg_0_0.type = 126U;
    tmp_tmp_msg_0_0.access = 165U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SZYQAIXBRVNRGKOMMPJAIYLYFMDTOHGCUXGIUFOHOLTVJBBMDJGWYSKWRDANNHRKCMTVLWTLSVOWQPEFFRESYRMQFXXRRBWZASGKJBOKOKMXNVPDCNWNXACLDKISHWPIIGCCZKTFQHYZUZLESEFX");
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
    msg.setTimeStamp(0.19387996396917717);
    msg.setSource(54488U);
    msg.setSourceEntity(44U);
    msg.setDestination(53571U);
    msg.setDestinationEntity(222U);
    msg.command = 111U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MKRJRIKEBOVPUKPNGMDBFYWYBBHLTLHVAAEOEZGAQVTZUQDGKCIQZCSUTRMGRDCOALPLTAMYIPPYJWDXVOIALJENEZJT");
    tmp_msg_0.description.assign("EXZQTXPDJUUHNHMVPPEAQOLWSPRPZSEWEDGJDFMFUQJUIEGOHKMEPCUVNSXGDYFNGFCYYLOXKWMOZSQKVRZHXQOVODSMKTWBDTBKOSAHSXJCLSZHLXBABOYWAXIUGJBYHHIRTNJIDNFRTHTKCQZMWIDCPBKCLDJCKIJLEAAPCBWIMYY");
    tmp_msg_0.vnamespace.assign("KSRNHXSOICFKYLKGQGJQBVTDPMFAJVMBCNQQYBADMJKBLVVFGWMSXJDSDIUDIDZDZNYSKHUWATLFOJYLIPRKOAFWAVKECUAQLVINTAGCIPQPJNUVRHXLCTYLFOOBMOKEUBQHEAHRNXEZFJYPWTHWZWYREAMXNWEPXEGHRZZBWZYUSJUBUGDFQTEUYPB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SBMFHYPQWCHDPUVOXITKXPEXWXWGQDHTSESDHDFZQJHVAFSPVLUSXKDINGWOGGNIJHKWXFX");
    tmp_tmp_msg_0_0.value.assign("RGNWPAQPCBPXVMJYSXBNDDKTEYKZWYQVMFROSCDKEJSHDXMHNIPPVWIWMRUERNCACTOLVOHLKWZTTPHYXJAZGDMZFTIYCGBYNMQXWOWGVUXUUJVLHYBVZKRTAZJFTLUFILONVZBMBMMOESYWIUFJBJNRV");
    tmp_tmp_msg_0_0.type = 64U;
    tmp_tmp_msg_0_0.access = 198U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RVPAJUBRXOGCMCTWVGOQJNMHQEHRDDIPQGLEGIYZJMNPYUGACJKWZSNBOZPXXNFXALQZVMGIFKOWAMTUNCEFRSTBHIOWWEQREXCBMCXZVXATRSYLTUKCMXVUCQWYIKSHOUBGJDSVJBPEWKJHQNIVFTMWLNIKAUXEVLYISYSCBBTYNDWEBPELUFRVOSYOMHLPAKAEKDDGDDAOQJUZAPTLNFQLDHZFQFGHTXYISZRY");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MILAAVMJSOUVFOZEAZCVNWDYYHGPHUWGHNMOAYCQIYKWPUSLZSJKBCXELXSKT");
    tmp_tmp_msg_0_1.dest_man.assign("FLZYQWYNMYLDKWJVURJUKCOLHIWAQHIPTOQEPGSISYJZBBWSGDELSTJRBCNYTKHAQTNNGIDOFRLQORCD");
    tmp_tmp_msg_0_1.conditions.assign("NQSJLVXRDOUAVCZCNUUEBDWZKNVKBFEBCYZUUGBDZHPVRIFEVNPOEOETCFZRXJYTXQGJQNFZWJCGVIOLHUXFKYMPCBLSICWETIDCIDGAUWRFAZEGMFIHJNKNAVAHTDDUXJOHMSEJBQBQLRSHQBKRZPAYLPMOBIRDVJULQHOOMAHYMBLLLPFGCGMTZKTWMXJAWYYXFKOPDKSQGFQHWWMNGSPVS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EmergencyControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 65U;
    tmp_tmp_msg_0_2.plan_id.assign("OBWGCEZMWSMPVRDUZPOKPMFOLYKFLMZLOXRQVCGJQZWTROQJIMGABGDFB");
    tmp_tmp_msg_0_2.comm_level = 67U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::ServoPosition tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 164U;
    tmp_tmp_msg_0_3.value = 0.98491460485202;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.03885055553772199);
    msg.setSource(12311U);
    msg.setSourceEntity(78U);
    msg.setDestination(10295U);
    msg.setDestinationEntity(204U);
    msg.state = 47U;
    msg.plan_id.assign("PLDJMQTCBYLTISCRNXDNUEVMKKNQYAHUEXVYLKPJMMPMXLCNZCAYORQIOOIAQLZAXNVYTEERPRQVHTQMMAREWGXBZRHIFGZJBHGOMSIFCETSBVGTDQJGRVQBSEWFZGWHXNVHLHFBYNQFZVETPIXVOLIDOUXMNBSRWOLWFYJWCFYCJGDHYUSDKSAHOFPJGYWSKZBVUIJZFUCDXDIPEWGBKSBGRAPTWWTST");
    msg.comm_level = 81U;

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
    msg.setTimeStamp(0.7986002916263876);
    msg.setSource(6548U);
    msg.setSourceEntity(151U);
    msg.setDestination(3797U);
    msg.setDestinationEntity(12U);
    msg.state = 191U;
    msg.plan_id.assign("CJSFLNCXVGUTRUZIRFFGICFZOLQRDXREQLXCAENIWPLOZSGJXHAMKDKKQNMXWTFLCLGBPEZJVXLUHARVMYEVDGCEMXSAXNTHJTZVHYTWYJBJAUBHGEWYUDSDFUPBTQOBMDIOOWIOYABHEPNBFNOSDCULKIZSSOWQSHNFMARHQGIZVQEXNPGIJJTVMVYEBAQIMTKQYWVNR");
    msg.comm_level = 118U;

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
    msg.setTimeStamp(0.003610401713966538);
    msg.setSource(8899U);
    msg.setSourceEntity(169U);
    msg.setDestination(31227U);
    msg.setDestinationEntity(124U);
    msg.state = 218U;
    msg.plan_id.assign("HHQXAPJZSIKORQIXQOHYLFUUDCZLNXRUWRBNYUKQIZOSKWZCEDTPCSBYYPPQDQTCLEXDMELDAUJVZTNUYIEWGUFCTKLOOYFAIRGNWOGOTCNGBEJDMCGFTQIBZTFZ");
    msg.comm_level = 199U;

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
    msg.setTimeStamp(0.9169567386277632);
    msg.setSource(64658U);
    msg.setSourceEntity(40U);
    msg.setDestination(44274U);
    msg.setDestinationEntity(112U);
    msg.type = 208U;
    msg.op = 141U;
    msg.request_id = 53124U;
    msg.plan_id.assign("RUZUCELAJKELQRUOGHQFRBNXKUFBTOQXDNSEJLPZTDACMSIJEVROVFZHLOTYOXIIFCAXBYHMCWIWPJFOIPBHXSBZUQUAVOWCNYKFUDYIZMZMLWWKNUUSVCGYNJYNDHEGKHFVGHBZUGLKGQPWJAIYKRAVLAGLJNW");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 71U;
    tmp_msg_0.lon_gain = 0.5025350583359214;
    tmp_msg_0.lat_gain = 0.4924241703486162;
    tmp_msg_0.bond_thick = 0.9175694136987462;
    tmp_msg_0.lead_gain = 0.14835110674384078;
    tmp_msg_0.deconfl_gain = 0.10753871041628338;
    tmp_msg_0.accel_switch_gain = 0.0040612835090552135;
    tmp_msg_0.safe_dist = 0.19962894522260388;
    tmp_msg_0.deconflict_offset = 0.6092441271761987;
    tmp_msg_0.accel_safe_margin = 0.7383358277758849;
    tmp_msg_0.accel_lim_x = 0.06764476969757405;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DLMUPJWSPHVGOQULOCVTOXZMJNLQANLUMJBIGDUUHRZWDBIQWGOHRAB");

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
    msg.setTimeStamp(0.18903781885549942);
    msg.setSource(65438U);
    msg.setSourceEntity(26U);
    msg.setDestination(57538U);
    msg.setDestinationEntity(11U);
    msg.type = 226U;
    msg.op = 153U;
    msg.request_id = 18724U;
    msg.plan_id.assign("TMGJSWCXTIKLFXLSWBPYGIPAFKDSCQKUSNQXLMUV");
    IMC::Pulse tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LJDHOADVCTMUEIFEUCYRSXIAIVWLMMSHSYTLXNBUTCSGFWYHKFNBYFUCEEDAOUITBL");

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
    msg.setTimeStamp(0.6902423414817884);
    msg.setSource(43396U);
    msg.setSourceEntity(44U);
    msg.setDestination(57004U);
    msg.setDestinationEntity(223U);
    msg.type = 240U;
    msg.op = 52U;
    msg.request_id = 39390U;
    msg.plan_id.assign("LFYQRPKMSDEOJVKZXZYNATCGUSCDFQVEXFSTYLVXLEVIHVTXJBONQOUVMGRCZGSGOYBAHWVPJJEPMNHNNIUUHLBLSNWQKAOXTGMHJTQLTPXWQEYAEBHHWRRIKVZCWSKKDVYEIDFRDZUGFFTBUUXWAEVXBJPDTQDATQYGLOFKNWBIYPZGWJGCOCBNYQLXRKCCMHJZICPKILJIEHCZFARWQMYREMSOSLRUZNXOMOIFPADJGUDIBAWMRAFNH");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.8350181852929234;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HKNAQINWEJMMWVWCURPCJSIHFPPBSQGHJKGWKMSMBKILQJNJZQRCQLHELVNYSSRUWHOYFWUNVJJQTGCOYTTXIEFTBKGAAVVFQISOVZIBYJCFZZWAABJCSOODODZOVDVPXFGDYLZMLYHMLHATEIOBGIKCNYPVHMATRXZXBLIPGSFPDEKWDDRLEXXKNPRRTGEKHLJOUMAUTOCSUAMZNNRGEBZGKHTYDE");

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
    msg.setTimeStamp(0.6338006501761523);
    msg.setSource(41804U);
    msg.setSourceEntity(91U);
    msg.setDestination(563U);
    msg.setDestinationEntity(225U);
    msg.plan_count = 21458U;
    msg.plan_size = 990406217U;
    msg.change_time = 0.5358349133067994;
    msg.change_sid = 43092U;
    msg.change_sname.assign("YIQESBYPKKDRRRZFHAHMNPOAFKOYMKEJUBNGZICYBGRRFCQHEEQOQLVHKXLEQCTMLTBCDLDKIITQTXAJVOJWIJSZPJDSPSCZFSZVJVZCTNUZIBAPPUMSVLWMBVWGNP");
    const char tmp_msg_0[] = {-55, 40, 44, -125, -86, 71, 104, -101, 117, -92, 76, 17, -18, -73, -48, -93, -86, -27, -84, 43, 45, 80, -127, 101, -31, -77, -65, -19, 12, 25, 28, 58, 25, 58, -104, -18, -9, 41, 39, 28, 52, -123, 103, 119};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FSEWKHUKCTPWTTITRPSRHLPBLQYZFEIXGHMEPCRARGLNSGHBVWHJKFVKKOFSPOVSZYIIGCDPTFRWFSVGCPGCJHSRTSRKUOUDDGLDJWNWXWIAXLMVUBYVAYQZWELMNBZQVZLM");
    tmp_msg_1.plan_size = 11417U;
    tmp_msg_1.change_time = 0.04099595892166963;
    tmp_msg_1.change_sid = 64963U;
    tmp_msg_1.change_sname.assign("CCXFJYJCWDTGQCMVJYXRNTOYAFIWLIZNBZKIBWHTKMFNUNRVZMWIKABVWOLULTGTPYPPEEJDORSCDXEIJPBUMCAAYZMOLDYJZQYI");
    const char tmp_tmp_msg_1_0[] = {-115, 82, 86, 51, 14, -75, -106, -7, 105, -16, -101, -42, 99, 93, -16, 33, 54, -97, -44, 114, -86, -105, -103, 63, 1, -54, -70, -79, -115, 73, -119, 59, -17, 66, -125, 29, -124, 88, 1, -6, 52, -56, -96, -55, -94, -45, -38, -45, -46, 68, 7, -46, -14, -37, -22, -103, -30, 60, -63, 8, -85, 105, -58, 24, 68, -6, 25, -63, -3, 62, -84, -62, 47, 9, -55, -48, 112, -93, 45, 109, 33, 25, -69, 13, -104, -10, 8, 111, 9, 48, -78, -21, 38, -109, 42, -84, 40, 96, 19, -88, 87, 85, 82, 82, -85, -69, -127, 41, 71, 59, 60, 94, 55, 54, 112, -127, 90, -19, 7, 8, -128, -38, -1, 85, -89, 26, -97, 85, 76, 111, 64, -75, 73, -22, 95, 12, 119, 1, -34, -21, -59, 19, 96, -17, -35, 98, -23, -8, 18, 21, -32, 24, 37, -52};
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
    msg.setTimeStamp(0.8340881706313261);
    msg.setSource(11008U);
    msg.setSourceEntity(172U);
    msg.setDestination(36556U);
    msg.setDestinationEntity(88U);
    msg.plan_count = 30987U;
    msg.plan_size = 3513144272U;
    msg.change_time = 0.04230404321166137;
    msg.change_sid = 48894U;
    msg.change_sname.assign("SZTAXUVSPGZBYHGTZUWRMVEFBRDZNUONWEBNDWAJZLVTHVQXNHYCRBOLHKBYZWSHFUBUDCX");
    const char tmp_msg_0[] = {49, -88, -1, 107, -68, 13, 100, 44, 69, 52, 57, 64, -12, -109, 56, -69, -48, -40, 84, -1, -94, 44, -19, -88, -88, -65, 72, -77, -118, 58, 37, -89};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FKMENOPXLOJUPEHNTYIDJJOGXHZTMWCXKBYZUNMIRDUUZBXBWZHQFIEMJYQBZNTVCDRURPUIPGIAQXUSGPQBZWHFVZTXCSIGAQMPCPTY");
    tmp_msg_1.plan_size = 36614U;
    tmp_msg_1.change_time = 0.8682042305079086;
    tmp_msg_1.change_sid = 12142U;
    tmp_msg_1.change_sname.assign("GQKUGDRTPNCUCMEYIZEKGRABQKJVIEONYVKDXMUJQMB");
    const char tmp_tmp_msg_1_0[] = {27, 12, -89, -4, 101, 70, -89, -80, -126, 67, -127, -108, 85, 76, 79, -63, -40, 90, 32, -34, -53, 58, 43, -65, 100, 70, -71, -111, 55, 77, -31, 125, 80, -54, 116, -122, 84, -18, -73, -14, -35, 117, 51, 27, 71, -23, -101, -42, 117, 58, 95, 72, 102, 2, 63, 9};
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
    msg.setTimeStamp(0.6355528504410999);
    msg.setSource(11446U);
    msg.setSourceEntity(26U);
    msg.setDestination(30116U);
    msg.setDestinationEntity(155U);
    msg.plan_count = 48089U;
    msg.plan_size = 2297788369U;
    msg.change_time = 0.9926800628260382;
    msg.change_sid = 61182U;
    msg.change_sname.assign("UNWMODVUMPRAKOBLHKCBUNSLHYHTVNFDDWNEGKPSYUYSIJPXKKDXXTIMQJVONSIQCZEQFCQFZXGRSUMXSGGELTLFAQHDJFETLXIZFWLNRDKKMVUYYNATPMBEQPCEAUAMCASHXEVEJYGERLRGBVGITYJHPZEXOAXQRIGRGBDQWHNLCOIQWJDKRSSZHWVHPUJJZXV");
    const char tmp_msg_0[] = {38, 31, 125, -82, 20, 100, 7, 115, 92, 53, -16, 14, 90, -87, -78, 121, -14, -52, 89, -117, 56, 44, 54, 15, 48, 50, 111, 100, 120, 126, 86, -54, 36, -67, -15, -107, -122, 72, -77, 74, 7, -67, -69, 120, 92, -4, -81, 99, 121, 39, -108, 44, -49, -13, -35, -119, 124, -45, -63, 22, -116, 29, 109, 5, 61, -123, 122, 59, -8, 110, 120, 44, -115, 57, 9, 123, -127, 35, -36, -31, 112, -85, 30, -73, 83, 45, 44, -42, -123, -11, 7, 32, -102, 60, -3, 111, 90, 125, 98, 118, -25, -33, -6, -9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TLVTOGWZICGQEJFDSBZVAUMZOPRKTHKXVIXILXCOVDCGCPMWUFJTNYTMYVUSLPYWPUHXIFZHRCOLARUQQLKEBRDVJQHZUHIXHUUHGEHYQFMZCGBNEYUBDCMCPOOSWKEWEYKDDJJZLXHFOIAAWJNTILBTZJXIKXVARBFBAKFDSQLGSPEDYJVFUBTDWRNOYFMETAGWVIPTSRXBNIONACXKSCNRPR");
    tmp_msg_1.plan_size = 27865U;
    tmp_msg_1.change_time = 0.4871738139222497;
    tmp_msg_1.change_sid = 13533U;
    tmp_msg_1.change_sname.assign("FFZLWEXTYQDQLCCFOMHMMRMUSVVFUUXBDZOFVTYWHXOQHVPKKPBQJWXNSIRHBEVBEXNLJKUNJIZSMWTCKXDWISGLRDJTQZEWIHZGKFWSHFEBVUYKOAZIXHAATHUVZCSQRGKKWOUNRDLGTJCGNNBVNBCMYZQIPBTISALFOGPCJOX");
    const char tmp_tmp_msg_1_0[] = {98, 118, -127, -29, -88, -24, -31, -82, 39, 124, -38, -27, -41, -82, 46, -46, -3, 40, 17, 118, 9, -113, -20, 83, -63, 125, -2, 99, 90, -120, -66, 30, -15, 31, -77, -2, -94, 21, -104, 76, -33, 5, -115, -55, -33, -37, -25, 96, -68, 85, 73, 121, 30, 112, 77, 118, 32, -12, -29, -36, 4, 64, 68, 101, -67, 39, 55, -125, -102, -38, 116, 78, -15, -84, 122, 2, -18, -76, -84, -52, 69, 82, -31, 11, -82, -72, 47, 45, 100, -29, -11, 80, 16, 114, -121, 99, -123, 94, -69, -54, -11, -128, 78, 22, -73, 54, 87, 13, -74, -38, -38, -66, 101, -40, 38, 76, 37, 74, -42, 21, -111, -117, 15, 12, -61, -10, -47, 71, 32, -50, -4, 70, -83, 120, 82, 87, 0, -12, -83, 39, -5, 105, -39, -98, 52, 60, -53, 84, -51, -123, 15, -117, 91, -84, -23, 53, -112, -70, 94, -55, -116, 84, -41, -113, -27, -5, -113, 113, -25, -39, -38, 47, 15, 90, 58, 107, 75, 12, -8, 122, -121, 124, 12, -96, -107, 64, -108, -82, -80, -59, -48, -59, -112, 111, -91, -39, -80, 72, -44, 54, 79, 22, -68, -4, 73, 100, 81, 40, 95, 11, 71, -123, -92, -6, -91, -106, 17, 15, -54, -94, 44, -37, 85, 87, 67, -41, 93, -98, 104, 88, 48, -41, 84, 52, -19};
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
    msg.setTimeStamp(0.6523457150611046);
    msg.setSource(16949U);
    msg.setSourceEntity(186U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(24U);
    msg.plan_id.assign("HWFCIXWOIWMXKXJICMFDAIRZSBZHHREWHLXKMPZYJJCYLPGNTCTWAYUYTKOEUQTKPRUMBOJHFRZDNEARKMCLZQLMIUEMHMLJAVTVJOODPNESOXQRBRDGXYSBCSTSBFBDVQOZPVHUGTGZMJPGZLGSIDCWJNUYIKNTIWENNDTA");
    msg.plan_size = 47802U;
    msg.change_time = 0.5849793495213617;
    msg.change_sid = 61194U;
    msg.change_sname.assign("PKFTDVRMZYQCZHWEIIISKZRSUTIOGKZXLAPMLOZMQFTYDBJSKNUXESFTOCVPDDBFDJMHUYWPBWZLIVCBSVOQFNOOGYTHHDBRUDWXVZYUVCAWQYYTUOENNOAEKILAJJTGCUPXBGARCHHNPGCUHKFRDKCEEGDHJGXJIXRGQHBXWQSHRNEFIVLUZWTNMGPS");
    const char tmp_msg_0[] = {85, -55, -89, 119, -59, 92, 72, 31, -89, -123, -114, -99, -39, 111, -107, 10, 56, -49, 124, -34, -58, 97, 112, 50, -66, -44, 48, 101, -100, -51, 54, 77, -83, 13, 75, -32, 105, -6, 36, -8, 64, -40, 117, -101, -16, 65, -58, -83, -94, -120, 57, 42, 99, 122, 35, 42, 55, -89, 99, 88, 80, -72, 114, -108, 92, -104, -2, -33, -41, -89, 74, 124, -34, 105, -3, -61, 121, 3, 110, -88, -120, -103, -39, 19, -115, -22, -65, 70, -22, -112, 60, -23, 4, 66, -30, -116, 102, -78, -96, -60, -97, 8, 71, 73, -56, 101, 21, -32, 55, 40, 33, 46, 13, 101, 35, -104, -127, 71, 7, -103, 83, -42, -15, 32, 107, -44, 70, -72, 4, -122, -43, 50, 43, -60, 48, -128, -15, 124};
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
    msg.setTimeStamp(0.6073747876345394);
    msg.setSource(56488U);
    msg.setSourceEntity(242U);
    msg.setDestination(46055U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("XTQNSJBEYWUJCMADEKSYFGNIXMRBQSCSTNMOODTBZNWCNQDHHTJSWZFHMUBHYURVMODAAKF");
    msg.plan_size = 54887U;
    msg.change_time = 0.5366260793958484;
    msg.change_sid = 3462U;
    msg.change_sname.assign("YQJMRUUVKHQDBEIHMVHJGPGKRAXBQWRWBSLDHILVGVVNDLZCKAFUIMNGNGAYXYXCYZWGCSJMFETCTBFXIQUXHMWJIEXLMSSTCGLZGHYPSZCEQAKQQKVFUJOZUTORGEYSDFBVLSPDKMEJPOYZSACWFEOLAUNZWPTNTRVIGPIOMAJVFOJBZNECATHXOMBJWTUAZFRWOU");
    const char tmp_msg_0[] = {82, 46, 19, 81, 95, 64, 3, -124, -72, 46, -124, 91, -8, -110, -74, -39, 7, -128, 2, 8, 63};
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
    msg.setTimeStamp(0.7570773511602678);
    msg.setSource(53855U);
    msg.setSourceEntity(148U);
    msg.setDestination(6328U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("OPKTQFCGABOFRULDNCDRXRIQVNEDEOHESZTATGZYDBCWDYVONKQLCQQRAOWMMVP");
    msg.plan_size = 64726U;
    msg.change_time = 0.5351682897299062;
    msg.change_sid = 46592U;
    msg.change_sname.assign("RTOYBMZQXRNWFFQGUPGHEGSKGUSEFDGQRRWNFNSMDZUKEWXCIJWCYXFQVOOTYPXSJVDYZCLCCIEQSBHKJVWEPPXDPTUBKWRCNPKAOQMIVZJBVYMJZHQTOTLIBGHWEKDUNGEPALOOLDJBMITZPLIABLMDYWKJUNCNIGHJZYROHFWQTQVRRJNNHHTVXFQKFWOFFB");
    const char tmp_msg_0[] = {39, -12, -69, -44, -99, 101, -108, -9, -16, -19, -77, 58, -56, 91, -96, 37, -26, -64, 53, 94, 122, -53, -78, -78, 67, -114, -85, 28, 84, -20, -2, 7, -41, -101, -44, 116, -99, 36, 23, 52, 21, -108, 93, 91, 15, -108, 37, -76, -22, 43, -21, 103, 124, -88, 44, -50, 56, 94, -128, -98, -109, 83, -17, -33, 81, 90, -41, 68, 20, 107, 23, 100, -104, -27, 73, -73, 85, 40, -84, 81, 62, 53, -10, 116, 115, -75, -89, 99, 115};
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
    msg.setTimeStamp(0.6210997056773586);
    msg.setSource(18147U);
    msg.setSourceEntity(183U);
    msg.setDestination(12876U);
    msg.setDestinationEntity(158U);
    msg.type = 166U;
    msg.op = 213U;
    msg.request_id = 12906U;
    msg.plan_id.assign("YHAKDFGTMSWEWDNNMQKJDJHCYACTYJPKYGNPGWUNPDLNCQZSAFJDGJTQFAVNTZGNKXNGYSYCULJRLXFGCSTVHTOMGECCLSRLEOQLMIIXXWFAVRRHJEQZAIZJDSVIOTBVOBLZYUXQBXZWYSGIRQBDFSCRPGLPDMQZHIMKRXFTKOIWROE");
    msg.flags = 32876U;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.32058037869485223;
    tmp_msg_0.y = 0.6309130436928362;
    tmp_msg_0.z = 0.36146185877039383;
    tmp_msg_0.k = 0.9138003034942803;
    tmp_msg_0.m = 0.8951196234730866;
    tmp_msg_0.n = 0.9789137251412342;
    tmp_msg_0.flags = 197U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CVYHLCXCFUNPPLBXCOJFPKEKEPLYHLSJHASHWETORXYWBRKOXBWRTPXPIWYOUMNCRRMRJOWPBVMPDNAIAMXTNIDHFAVRMXQREMFAJHHXDYFIGGIZNIYLJVSSAYL");

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
    msg.setTimeStamp(0.05599111808741064);
    msg.setSource(18586U);
    msg.setSourceEntity(148U);
    msg.setDestination(23660U);
    msg.setDestinationEntity(71U);
    msg.type = 151U;
    msg.op = 66U;
    msg.request_id = 31043U;
    msg.plan_id.assign("YLMRYCFWABMQVQAXGHNRTEKUGUSFUZLOCCLPVXAMDSOUAYSEARWKONQFJORVSBZTPVELXFLVJIDNYJLMCXES");
    msg.flags = 56085U;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 54274U;
    tmp_msg_0.type = 68U;
    tmp_msg_0.tow = 251041838U;
    tmp_msg_0.base_lat = 0.5982751046444996;
    tmp_msg_0.base_lon = 0.7543939892685373;
    tmp_msg_0.base_height = 0.21903906243357718;
    tmp_msg_0.n = 0.8560155985267074;
    tmp_msg_0.e = 0.3646884957722347;
    tmp_msg_0.d = 0.40958102181300315;
    tmp_msg_0.v_n = 0.7985173287384818;
    tmp_msg_0.v_e = 0.6477898686384653;
    tmp_msg_0.v_d = 0.7524758035361312;
    tmp_msg_0.satellites = 98U;
    tmp_msg_0.iar_hyp = 54462U;
    tmp_msg_0.iar_ratio = 0.42818809421689696;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OWBDBKYGYIPFYBTMMLISJLAJQADOMWXTHOLSRYZWKGSKRVCHZUPYEBWFNIX");

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
    msg.setTimeStamp(0.4537961447753699);
    msg.setSource(4941U);
    msg.setSourceEntity(50U);
    msg.setDestination(6989U);
    msg.setDestinationEntity(8U);
    msg.type = 88U;
    msg.op = 155U;
    msg.request_id = 61166U;
    msg.plan_id.assign("MGADWNUUJRPRIBUYZLYBMPWYURSFCXBUSYZUTGCTTMUNCVBPPFNFOKSGHQZARQVRHOPLDCGPRNDJQJJBEDBXADNWKVEXOYKYVNIKTHMWMRQXNSAJJQJCZYFMQNIXVLDXNYHCKERHSCTFGFIIOHVPTQKFLZUOSRUKFTESIKHXOQALWTGWRCIVMVSYTELGZSWJQEIUNOAAEDXXHLMDPLCOMYGZFEIB");
    msg.flags = 24816U;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 19304U;
    tmp_msg_0.type = 194U;
    tmp_msg_0.tow = 1893579029U;
    tmp_msg_0.base_lat = 0.6196788867083284;
    tmp_msg_0.base_lon = 0.3455482608522906;
    tmp_msg_0.base_height = 0.22973488074734882;
    tmp_msg_0.n = 0.07065317930593229;
    tmp_msg_0.e = 0.40621563119871573;
    tmp_msg_0.d = 0.778019023786773;
    tmp_msg_0.v_n = 0.43532881092215114;
    tmp_msg_0.v_e = 0.7585922250414101;
    tmp_msg_0.v_d = 0.6155482745469867;
    tmp_msg_0.satellites = 10U;
    tmp_msg_0.iar_hyp = 41228U;
    tmp_msg_0.iar_ratio = 0.7853392044161644;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ONOTYQWMQAVGCQDRKFMYHZTRBQSTWFJNNOBCCLRLNSHDQNZXBEPWDXVZUKIMJCTRNCHXXYETHUKUYSFAOUDGPISBNJDOAGPKJSMQTULUUDZSHAAGMJFFLZLUFXOYYJVJCIZL");

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
    msg.setTimeStamp(0.3881235881382221);
    msg.setSource(29103U);
    msg.setSourceEntity(96U);
    msg.setDestination(55144U);
    msg.setDestinationEntity(106U);
    msg.state = 215U;
    msg.plan_id.assign("BBDFDROEFORRVHSFRGMOSCGLHFNEJULMZHZXVVSNIHWJFTQGXKBFRNNICEISWSUCRARXOTUXLYSDYYNWCZMALBZQGIELFZQP");
    msg.plan_eta = -1247897742;
    msg.plan_progress = 0.3410309086196559;
    msg.man_id.assign("QDFEMUISAXOSBGDAPJICQFVWIYSHAZKFUUNNQVGUHSCNDYLZDRKGLSVGLXRYKBEXJROZGGHTTNEPYHLCAYKZDOLZWIFHMJNSZQROXJPRNGGJTXZMFHOXEFCIESLAMBTQXIVMJHJPGWALULBROTEUSYCDVNOUPXTKYWYUUWVERJXAQDIFSCEMEWTBITAPHNPKRKKJHNDMIQMPVK");
    msg.man_type = 24338U;
    msg.man_eta = 654354780;
    msg.last_outcome = 22U;

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
    msg.setTimeStamp(0.5465425737965376);
    msg.setSource(49781U);
    msg.setSourceEntity(195U);
    msg.setDestination(9207U);
    msg.setDestinationEntity(158U);
    msg.state = 20U;
    msg.plan_id.assign("PDKLFNYROXTKCEBIMPREJJVGLZDINIIHYTDFZUXVEWJIRUOMQXLSIBGFKTMZKVQCCGUZAMONYWSTSFJQWKNRKWMUPCJVAYSGIHPRQZBCKIAZARLXBTPQVNSLE");
    msg.plan_eta = -1475993245;
    msg.plan_progress = 0.011314417552922396;
    msg.man_id.assign("RYJJGOOANLQNCYJXCFSADEUENOYMYCDMNAMFUTNHYBGVWPVGIIVFXZQWEWQCKGORPPSPDTGOSPXQ");
    msg.man_type = 52249U;
    msg.man_eta = 42292993;
    msg.last_outcome = 235U;

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
    msg.setTimeStamp(0.03320400147148306);
    msg.setSource(9712U);
    msg.setSourceEntity(78U);
    msg.setDestination(50002U);
    msg.setDestinationEntity(113U);
    msg.state = 239U;
    msg.plan_id.assign("DDMRAUGUKHDVMFWYNCDGPHEVDZNCGANPPUDLRLKS");
    msg.plan_eta = -1512487822;
    msg.plan_progress = 0.5605441853323577;
    msg.man_id.assign("DZMYTWRGPNHZQVGVIOHMHPMKPWMTDWNQDLSSG");
    msg.man_type = 8109U;
    msg.man_eta = 771381073;
    msg.last_outcome = 34U;

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
    msg.setTimeStamp(0.19270519178842027);
    msg.setSource(36759U);
    msg.setSourceEntity(225U);
    msg.setDestination(6492U);
    msg.setDestinationEntity(231U);
    msg.name.assign("SASFLCTPPNGAHFOWNUBKXLBLVEADEVMRTXAMGWHXUBXRIBSJMVNRRZGWKBPLWLIOXTHNQSIESXUUDZBFROMEHMFUXUJGIADCIDNCKQZNQNJLSISVDYNIVJ");
    msg.value.assign("VMBTZNCXULNYGHBPJJULZHQGKMVLIIVOQEOPOCORSEHHVLJSDMVROZZLJFXPDCUWGJGXBMRBGZLTLFFJPEUPMKWNCXDMVKMHIPNOXBRFZLLWMENEDGEKVCAWWRTTGVYMBCNYAKQGGWCLDQFSFAQEBEIPTOZPOBE");
    msg.type = 212U;
    msg.access = 33U;

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
    msg.setTimeStamp(0.7760175846818962);
    msg.setSource(52922U);
    msg.setSourceEntity(236U);
    msg.setDestination(40001U);
    msg.setDestinationEntity(189U);
    msg.name.assign("ZTCFVSRAQNPTYEJKUOADFUDGRSNFXSRVTJCEQPPQEFHEYDHAOXTEAFZHWCGBHEOBIOGCJDARG");
    msg.value.assign("CZCJJWGBXGVMMNTIGSQXHIOAMWULVUBJNOHWEBAXHIMNNFGIXFQEPAJEDCFOPZIOSLTEZQMNNMIUFEJKSJUBIMPWEIQJTWOOPBMZUIFUAUKRZVEK");
    msg.type = 219U;
    msg.access = 211U;

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
    msg.setTimeStamp(0.6286074334150086);
    msg.setSource(16177U);
    msg.setSourceEntity(72U);
    msg.setDestination(39511U);
    msg.setDestinationEntity(24U);
    msg.name.assign("SQZWFOZFQUDMWOTHPPCGSRDJQVMBPAIYCGMJOUKSODBJPUWYMVWONFQCHGLFDIGIRFTTIRJPVTKJKLOKUVVGGPUZCXBFZAZYRFVLEQGXXBRXPHKBWEHBAYAUBLDEVJVHNQSTXDWXAFOUYKFEISHEOHYEKKQIASTKROYJLYLMREDNEMNDWSJTZLLNSYWNIRAHOQNSEPBBJDWBMMZDPXCVTFYKRLXQCAIXMTUZ");
    msg.value.assign("IPQYGGIREFECRLJKPWKHMKDCGKJOSBSVNIZNDPZHTXLSDQOTTXAXCAFPDQFCVKRBBUZSHUVYVNDCRJRJUJUHMPDETDPDXYQAKMOKMBMXWUQIEZALIIUHKGTIYLRZLLRHMWQJZTSEYLAMTFPUADFAH");
    msg.type = 254U;
    msg.access = 66U;

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
    msg.setTimeStamp(0.3193446905225914);
    msg.setSource(24665U);
    msg.setSourceEntity(73U);
    msg.setDestination(16058U);
    msg.setDestinationEntity(217U);
    msg.cmd = 165U;
    msg.op = 92U;
    msg.plan_id.assign("DIXTWVLPPSBVLETNLMKSKKRVOYXULDMFXGKXZTVWIYNKRSHHTULAOJNX");
    msg.params.assign("MUENCZJQZZQBRVLTPWVNZWSXVAZJPOTGIFWDXOBVNGJFSORFCQMIMUCFBHADHJNFYWGEQDTJIDXDAYOCTRGFUQFTYNKEMXERHSYEOSLUHMTPBXHDHCTEYOGVRLCBHPKZIEZOIPYRVKFWZPKGFNRDLQXKPXJIHYYVENDNWYQBVVKSEWTAQGWOWIHOLZIOICMNRXMKGPKQEULAGCSLAPBUHAXCAFJLQALYJUIGNMKSCZUUXDVTRDSSMWJLS");

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
    msg.setTimeStamp(0.2608994352841979);
    msg.setSource(39903U);
    msg.setSourceEntity(7U);
    msg.setDestination(16390U);
    msg.setDestinationEntity(201U);
    msg.cmd = 115U;
    msg.op = 59U;
    msg.plan_id.assign("NKOUMJNHWCJLPDGRPXFCNGVGUCSDZORBMFNVQKOZEQDMFACGRRVLFCLFAZWUABWQVAPTMKLUKNDQOJHSAKFMEMBLTSTIBCLMKYTSGGZQISWXYPXHRWUYHBRNTPQXSURTYVWORNRYUJWFHIDWPVUJHHQQYDAEDDNTSQXBKLOPOYPEBMNWFIJPIHEELOBTGEXCCYYIJZUKGFZIRXJAVWNXSOTLIAGJCXAVXCZZPQFBDIMYJG");
    msg.params.assign("GURPIVZUVFMCKIZYRQMRGURLJYFRSMSLMOVLDUYNCBTFNFBZNXWEQVUEDACSPQEVASHNWDXMCYXRBPCAMNNGDBGGVCXHKWACMQUBTDFHLMNBQOVRIAFOYJEKHKQDOIIQDJNOZOZPYFQDXSKEFGDLXEPCEBIYQFGOXJOJHAONPNUBHYVIESSCTZPTGMBZKTACW");

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
    msg.setTimeStamp(0.9226422792683544);
    msg.setSource(33282U);
    msg.setSourceEntity(42U);
    msg.setDestination(4126U);
    msg.setDestinationEntity(211U);
    msg.cmd = 56U;
    msg.op = 156U;
    msg.plan_id.assign("TYXMPPHXJSPJLCBZDJDVAYVALWKCLNAQOMRDSPJRLJSTFEFRIOIFWWWASYDGCWQYOFASVT");
    msg.params.assign("BAGVQVOTPFTJKZMULMYKCATYFDAIODSORMJUTCMGMUQBEJCTAJYIOOWPEXGXAAEFODMKMOKNFCVGPXT");

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
    msg.setTimeStamp(0.2093651685245087);
    msg.setSource(45098U);
    msg.setSourceEntity(16U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(131U);
    msg.group_name.assign("ZLRLNISJYYMVZRWBIDFBJCELZAYSEHAIJJUJRBNGUKRCZAFMTHXWGSDMCEHVPIQSPZCTLZAIDYUBJUCNFLEDDDQKARPGQKLKBXGSVVOUUWWLEMDZMPWPOOJFMUYWNOTDQMVHFZBHWDOSAIIRPQUQONXAPGGRLQCNXEFJBRWYSCKIAVHTOKHRYCOSIVGHZQIAYSZPVPRTCLUXKNOGWKMXQXXEBXEOTHGTDPNXFGEKJBESVHQMMVFFULNYNTCAW");
    msg.op = 187U;
    msg.lat = 0.3464474338964322;
    msg.lon = 0.8040366431899558;
    msg.height = 0.9371185956068359;
    msg.x = 0.2172369624751127;
    msg.y = 0.35236043982156595;
    msg.z = 0.10618105510293097;
    msg.phi = 0.12075861931940801;
    msg.theta = 0.1583502572172205;
    msg.psi = 0.4018957952410054;
    msg.vx = 0.24931424680045466;
    msg.vy = 0.25030444181828815;
    msg.vz = 0.3804556413492246;
    msg.p = 0.0868541305581958;
    msg.q = 0.9386328210275002;
    msg.r = 0.11375668297784247;
    msg.svx = 0.02826401985877325;
    msg.svy = 0.2744965144925765;
    msg.svz = 0.007825012741949022;

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
    msg.setTimeStamp(0.3445544352125831);
    msg.setSource(18894U);
    msg.setSourceEntity(99U);
    msg.setDestination(20821U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("JKKZPYGJLSRXTRVOBWXWKEIOWYXQRNEOYMQSENVFRLWRDYMAWBVOIVBCTSAOCUICRICXXPPQSUJIOYJBSBNBFGHAAFVZOETZPUIMXMLVCHDUMIFYZDLHEFVLYUALTDUEPCEOAWTTGWBBHAQZGSDHAQPEWTMQLIEUJDXUDNZMDFRMCRIPQJNGDYGKNMMLXQFKKJZIJYAVQJTCCSEHCZSRWUBPWYXGBKTNN");
    msg.op = 22U;
    msg.lat = 0.14680850345093122;
    msg.lon = 0.4327989689477021;
    msg.height = 0.18551786346227717;
    msg.x = 0.7448248565123105;
    msg.y = 0.23910549815879167;
    msg.z = 0.23767460631340276;
    msg.phi = 0.7694979097839236;
    msg.theta = 0.4920346514226327;
    msg.psi = 0.5687814418766757;
    msg.vx = 0.13923691395603477;
    msg.vy = 0.9245827570272349;
    msg.vz = 0.27349181944519585;
    msg.p = 0.9797581104073277;
    msg.q = 0.12595462213302677;
    msg.r = 0.8751896854579548;
    msg.svx = 0.6314361585911366;
    msg.svy = 0.6164051300422448;
    msg.svz = 0.3456379155000191;

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
    msg.setTimeStamp(0.6531723444106841);
    msg.setSource(13289U);
    msg.setSourceEntity(16U);
    msg.setDestination(48214U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("ZYPHYKKNCASCHVCPBSQOROBHWLDNVXSNXUYNCZXTRLSJMRMKGPWWVIECMW");
    msg.op = 253U;
    msg.lat = 0.3062395532767894;
    msg.lon = 0.656270065340347;
    msg.height = 0.13570698111887547;
    msg.x = 0.3978738748764855;
    msg.y = 0.6387817422890023;
    msg.z = 0.8814916043399919;
    msg.phi = 0.8128973508037587;
    msg.theta = 0.36862160908341546;
    msg.psi = 0.9920343041467499;
    msg.vx = 0.5315509743613246;
    msg.vy = 0.11801868847464181;
    msg.vz = 0.5464549267075915;
    msg.p = 0.4269097676691246;
    msg.q = 0.21547686632848972;
    msg.r = 0.13050641032332888;
    msg.svx = 0.519784195901345;
    msg.svy = 0.031552343480818146;
    msg.svz = 0.5470660828598887;

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
    msg.setTimeStamp(0.6953780310758976);
    msg.setSource(16655U);
    msg.setSourceEntity(63U);
    msg.setDestination(24937U);
    msg.setDestinationEntity(180U);
    msg.plan_id.assign("FURLGXYLLVREBALUNACMD");
    msg.type = 12U;
    msg.properties = 237U;
    msg.durations.assign("QTEGQMVSTIXSDRNSHEEQLWJHREAYZHAYPKCOUVPPVFGVXBKTLYYMLHNAXTQTWWCZOBLKKELIGNJQSQBFCUZJTBJLGFUOIBEBRJVDJSVBFRJZXAZTQSTFFIMULAHRLNCUDDPIVKOCOXYHDDRBBHYMOWXCGLZUGDZMIWWVNFPICVMQRPZPEYDNKFAT");
    msg.distances.assign("HLZLRPZITOFBPCDMZIZPBKOWEYXAVXSHNYSMPPGOEHMWUECOEQQGNYIJCFMVNOWDOCAZAOYDQUMGHIZBLTAQOKLYXZTCYMJQWWSJVEDBCBVILHRWVNPBLBJGTANDKPVRZYXLRUSFRBUNRKWTQHVKCMWBSIQNEYLEKTFJZUJEJQMHARPHAGTDRFKVJWCVDNSKIACXDRJCXMKHWEAYBXPFTZGXTGGSU");
    msg.actions.assign("JKMXHGCDOAKRIHTPQAZWOZDXYEEIIUGDCLZMJSVUGDLPFANNMJJSFZKMDBRLUYEWVDYYNJHWQNPZIAYSQZRVWOVFJQSRAIPEQZKCDSQLMOIFIQPPBTYGNSUHFCLCBXTEJEOWPPGWXVRLILNFAWWNZJKQFKULIDWNOHYAEGEHFMEHBPMOYSBTKGOMATYQBDZTPTSXSNVGYACHRHFBOXRWMMCSCKTJXVRBVHKXUEFTVUUGXJUVZGLBU");
    msg.fuel.assign("TSHGJGZXCCXNBQCTZLXKTIEQVKUGDJWSAJGAIMWOJUOFLVQCEYMSQJCEYNSEHOBDAORDOLOLSBCASIBUCCNYBUMKJPOZMIGXYHPSMAYYNSBDIRIUEZVXWHQCVKDPMBZRVTVFZULWTWKXIXOATKPKSZFTTBKEGVYWLFFUIPREXABEOQKPZDJDDPGMGZHVQXFAWUIMHLNHGVTGWJRUFDQRNAHQXNDNVCLSUJYL");

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
    msg.setTimeStamp(0.2616756473970778);
    msg.setSource(58681U);
    msg.setSourceEntity(205U);
    msg.setDestination(24707U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("FCLVVEXAAIGWRMBBOQYHOTRBDMCWGGVEEDTNOZPYGRCPVBRIEEQBNCABKOLPLWHJAGDYOCHEBYSZQNYUJUXHKDJFNXJSLEIKIVYHFSZIQIBDZLCKKFUDWXJHKNXSPZCMHZGUQMFMMMLWHOAO");
    msg.type = 237U;
    msg.properties = 189U;
    msg.durations.assign("GHDOUMZGUQXWFKPNYAIDGJX");
    msg.distances.assign("QOTAGOZSTQFDBFDOUKBGJYHFXTGVETNOGZOWNWRRZFPSBZPSNPKYPECGHFGJQXOJOYUDWREIZDBETFBP");
    msg.actions.assign("TNUTBDTWXSAHBBRPVEEIYNFLVCPWGRMUFXXHBCLWWBYCKZASODWHGFWTIBKGVUIQVQFYKFPOLUVJQY");
    msg.fuel.assign("EAXHTXXDSBVZGYZXF");

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
    msg.setTimeStamp(0.14415321720513707);
    msg.setSource(18597U);
    msg.setSourceEntity(190U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("YLEXGDZLUDMFNHLKBNPKCGGEJFEFJOWHJJSEQJKXJZRVKBYPS");
    msg.type = 232U;
    msg.properties = 14U;
    msg.durations.assign("YKXVRGIBZZYXDDI");
    msg.distances.assign("XNFDATIAMDFLAKUMIBMPKLNQBPACHUDWJZOGPELAPOKZJIOUQITDPRDPTBAJXIGOTNFEUMGWMVRL");
    msg.actions.assign("CMPKMFBOJVYDOHJFBDUWYYFMKKIPYLBYXRUDWHRJQFNAUNKOPVZOHEHKRGHWXVFZNIBWCQJPPBTSMDQUHKQXFDLQWTWGLDILEIUIWCECGMTHYCCKTUZKRJZMSGDYZNYPDCEASAVSMPAZAZQSEXM");
    msg.fuel.assign("HUMBBKJSWKUCRFBGVIVOXOCCXAYCKJZRZBOWWRNSZLMPZTFOHEDUZZQPOVNQTPKRULGGBHHXUVJNAPVPTFMNKQXAJGEILNZBPQ");

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
    msg.setTimeStamp(0.08900126816260245);
    msg.setSource(27017U);
    msg.setSourceEntity(155U);
    msg.setDestination(17808U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.1866146347423826;
    msg.lon = 0.20931509489713362;
    msg.depth = 0.9650403729119654;
    msg.roll = 0.6903979201035936;
    msg.pitch = 0.1901522659135606;
    msg.yaw = 0.9826481842721474;
    msg.rcp_time = 0.7109163611928343;
    msg.sid.assign("XVNYWHONCVXHMXVJAUCOSZQRIRYTECMIDPMXBARADXJIIOCFZGPGZOIPWHRAKMBUSJGSEURMWWBKNRQVVHLXNKVKDFEHNXCUVJYHRWZYQVJSPGCELQANBVTGDYWGUBBCTUMLZFUQEWOTPQGZTHKGTBGZDEZSEHPQJMHRUMDKOFAPANFLKFMLXYBUDNLCXILWVCKOFCODJEKZZHFJYNTYSOYPLLLSDXIKQUIBMN");
    msg.s_type = 209U;

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
    msg.setTimeStamp(0.5230153086958348);
    msg.setSource(51389U);
    msg.setSourceEntity(226U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.4241553983438259;
    msg.lon = 0.5261269650029331;
    msg.depth = 0.22660242625929883;
    msg.roll = 0.023964736603581116;
    msg.pitch = 0.7721270961196964;
    msg.yaw = 0.33885095177978386;
    msg.rcp_time = 0.4166045057044173;
    msg.sid.assign("SHPWDWROFQQLOXYPLDGEEASUYUYSQXMGBHMZZDQVFMVTJFBVKWSISFPTHGFKRDOFAJCDKCFUKVVKCSXLIVWXCKDKXAUUVQZNHXCNBSBFWRNYHBLNMPIRMELTCZIPDEUSOETCBRGHIDAIFBDQYJOBTEHEAIZQRJMQPGKIAXHWOYOKSIKTLXN");
    msg.s_type = 216U;

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
    msg.setTimeStamp(0.20891822525504067);
    msg.setSource(14200U);
    msg.setSourceEntity(101U);
    msg.setDestination(2788U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.34789447518196137;
    msg.lon = 0.29925453954797854;
    msg.depth = 0.13403017694988295;
    msg.roll = 0.4429868656259248;
    msg.pitch = 0.5320780897681029;
    msg.yaw = 0.9438552902630205;
    msg.rcp_time = 0.49064691053006493;
    msg.sid.assign("UYJOILPNSCOYCOTDYNULJWGJQQTSBMETUIZRXZSNUXFKSNIBVYTWLBGKGMNWHZHBHXLOWKSZEQIJHOMAADIUDPFPPEUVFQCLPEMDMACPIZATRVQIQAARBTCCKVXXPWEJBJYDLWRPBWPUFEOYCJZAZRDMETIAHHLGGNPZ");
    msg.s_type = 5U;

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
    msg.setTimeStamp(0.31968607581861386);
    msg.setSource(17874U);
    msg.setSourceEntity(184U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(215U);
    msg.id.assign("AQQHESOHKJGCTVZOFAMVTEBDKRWXFRGKTQMXXKQKGUQRIUENKDBYQVJYBAUJFYHNTWNPUQIOFSJXEVVSHOUGGGUFDFESVEEBMCZMNAKIIHHOLKCYVSPHNLPCWJYNHGPZZQXLLMWRZJWNRITCMLVIBFDZRTMFIKYPSYTHDQTNKZAXZAYUEBQPRBPDYAPXOCGVWBVISXSJDO");
    msg.sensor_class.assign("PXIXENQSJWGRGUDTPUPIPOAMWWJFPIMKHUBHBCRPULMGHIOVNUTEN");
    msg.lat = 0.3819199777796559;
    msg.lon = 0.18900186331511226;
    msg.alt = 0.9751415745289279;
    msg.heading = 0.39008313695695795;
    msg.data.assign("WLSSJQXDNEBIFQGIDBYINLLEOZSCCEVAZGMROJBIMYTKFIPZCRGAYMFLDGPBHWXOEDBGBCKWYVSCWFOTRQPHWFRKUOVURTTEYOLNSATNYPMDCBHXMQNTYQPFVETCSJBULZZERGKHZKXMGOTYBWVIMAPENUVZJUMMLLOP");

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
    msg.setTimeStamp(0.37977486504940416);
    msg.setSource(5435U);
    msg.setSourceEntity(101U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(29U);
    msg.id.assign("DYVHMATRFNKKSADGNZFXKEEXYAULNSXMTSSJAVWZFRXJVQKZCYYLDKNRQLQYZXETSOHWMHQYWVYTSHQNSNQTOEHCNPUGKONICLDHHSCAKDRWZCIGHBFLXYWJKVGBCQPMPUWCAAYIDPMBQJIIIFGULMF");
    msg.sensor_class.assign("LYKBWQPQPYPJCVYNHPCBZUHSXJWCESYDINKZBOPCVHMLNVPBSJRPUYAWINDLXBRUHTEFXBGCGNAGIHDXVOIXEUUTDZYRFGCOMECKUENQUFBTQGTOLBGEUQYZKMLWAODGOAQVQTNEEKQSYXDFTCSRXRUFJZVHDCSHTXKRXZWBMVLJTYZAWVGIHRLMINJJMR");
    msg.lat = 0.47069457274749904;
    msg.lon = 0.14702829345631951;
    msg.alt = 0.7446761840206493;
    msg.heading = 0.341360098973588;
    msg.data.assign("SBWDBZFNAWLUWGGCPLNAQKVNKECVMUKHRWJSGPMXDZQMJNLDWFRDVJZGPSMXCORYQBMZHFBXLRNOEZVAPIXTGXWYNPCBPOSQJQMYUCIKRMFKZWYKRJNSKYUJDTGASZUSBEGJRIDPIBEUBLYHTILUBWJYURHVCMYWXPSIFQEEQOOTMOETZFQHDFDN");

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
    msg.setTimeStamp(0.7009252290037636);
    msg.setSource(47836U);
    msg.setSourceEntity(214U);
    msg.setDestination(10761U);
    msg.setDestinationEntity(109U);
    msg.id.assign("ZFWCEUGAKUZIBAKHZEPXKQEDJQCXNTS");
    msg.sensor_class.assign("VAJCJCLXBQXBPSCJNZCEWHQAMTJPUOOLHYPEFVFAWKRUFDHRTDVDRSKMGIVNVSABUCQEIPOCQPHVXGKWIIMNHWPONTMOH");
    msg.lat = 0.2161932229190453;
    msg.lon = 0.4328114912049814;
    msg.alt = 0.22165851536398684;
    msg.heading = 0.31641232125165986;
    msg.data.assign("OTXSWVNBZVINKBQHKYWBJIIUAMGDWNDOLIFSMLVCNCOUJRXSYODEQFMVFMLHGTRRBRPFHPQXDCHYRUVPVELEQLWNENUMUCWDNGXKKDPEGOYGFAJPHVIKSZBEWHTXMCQMXKCBOIIWTQYETEYPJYORLTWJKUHODJ");

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
    msg.setTimeStamp(0.2074878594604862);
    msg.setSource(37622U);
    msg.setSourceEntity(193U);
    msg.setDestination(5456U);
    msg.setDestinationEntity(195U);
    msg.id.assign("HFUKSWDFNGNWQPINBPYXSBQTELZWJZRPAUOFJIEFQJJXOVJQYCTVQKEACDZLYWXNUNKGSYFFUHQRDMABMZJQHZXVXTCSZQYEGECJNBTWPWDQPBRSFAIUHVGYYRYKWXJWVUUVASBKPCNLZBDRIMHXHZMIYTTPCALTZHNPGGLQLOLIFRDJXESBXLGHOOKDGLMEUANRJVKBSIIIHMEPDUFELOGMSOZCGCINXRYWRAKTUCV");

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
    msg.setTimeStamp(0.905642828739612);
    msg.setSource(32127U);
    msg.setSourceEntity(23U);
    msg.setDestination(26497U);
    msg.setDestinationEntity(169U);
    msg.id.assign("ZAMDTMPWRWXKMRESCPNLEEEDYAQPFWHFJPSDSSNYGVRRAVZNCKSMTRGPUBTKYZSOLDWZVCFUOQITNPVMXUZTJBISWUIHWZXXRGSLMCTXKFCEKPOAVQXLMDKCXBROTFOQPYUFLIFEGYIIRJHGDQEALGYTSQA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IXUGQLGZATNSPJZOMDVUEQBICPUHJGKGVBZMYYQLCKNUHHIFSCJRCDQTSAFKIDFRBUYMAMJJRVQYEBWHIPLJTRFLBHJLFIYZSQYKOSOXLSWERFRGZKPBOALPPVBNDEFTUUEXAOXWENTYGMQIYVEASOGERIDQKAETTTWWPXOBFMOSYBCPWUYVNPKHDCQJDZWAZJH");
    tmp_msg_0.feature_type = 231U;
    tmp_msg_0.rgb_red = 212U;
    tmp_msg_0.rgb_green = 118U;
    tmp_msg_0.rgb_blue = 177U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5115558811863168;
    tmp_tmp_msg_0_0.lon = 0.3332988431488376;
    tmp_tmp_msg_0_0.alt = 0.8628974968950449;
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
    msg.setTimeStamp(0.18600052564899083);
    msg.setSource(43700U);
    msg.setSourceEntity(140U);
    msg.setDestination(39040U);
    msg.setDestinationEntity(226U);
    msg.id.assign("TURNWKHDHVGKOFLOIPIUQDDXEDEFVGDAGGXQRDDLTJYWSIJOAFKFNZPJVEHYZCCFPTDIGYXFWO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XWTTEPADNTBSQHTPJZDCNLSAULWHKYHOSDJJZZWYJDUOXLSIHSZLYPZGBEFRRQJFPJRPOQYQVTCHDFKMTXV");
    tmp_msg_0.feature_type = 125U;
    tmp_msg_0.rgb_red = 248U;
    tmp_msg_0.rgb_green = 65U;
    tmp_msg_0.rgb_blue = 87U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5542948754934234;
    tmp_tmp_msg_0_0.lon = 0.38761055430976943;
    tmp_tmp_msg_0_0.alt = 0.5808473622782021;
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
    msg.setTimeStamp(0.5728539496015327);
    msg.setSource(59757U);
    msg.setSourceEntity(118U);
    msg.setDestination(11377U);
    msg.setDestinationEntity(186U);
    msg.id.assign("DZVWVNXCLYSVUNFENZHKAHYANRMXUMYSBFMXGJQMZHSWVTKOFGILOMQVLZSOJPXSTIHHVWAVPGSYDRNJUQADMTLRPDDZVIBJFHDJLNWBJUBWOIFVHQQILDEWVTPYEDLSEXXXZNWNUAHLKCHOYKUFKDZIBMNQMTTMRJIPAOEDTPBAEKAJUNPKYURGIC");
    msg.feature_type = 190U;
    msg.rgb_red = 207U;
    msg.rgb_green = 85U;
    msg.rgb_blue = 117U;

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
    msg.setTimeStamp(0.4797394973268144);
    msg.setSource(11627U);
    msg.setSourceEntity(25U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(96U);
    msg.id.assign("HJCRDXMAGABZDHOMWRTTDTYIVKCUWFMOCAYOMJFWNMYHNBLJXLRTUCNYXWQOQPVGKVWEHJPXZLBZDSSICSIOTSIOGIDUNLPCRQWBQMGTSKQEDENOWKKUCIJGVLWLNLALOQISFKJZAXBXIZHPLBSZARKSBMIPGVXSBRBYVLNPMYCHCFUPHSOGRDJYVNFUJUFEHOEQATHFR");
    msg.feature_type = 249U;
    msg.rgb_red = 111U;
    msg.rgb_green = 210U;
    msg.rgb_blue = 157U;

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
    msg.setTimeStamp(0.3059430591833465);
    msg.setSource(618U);
    msg.setSourceEntity(251U);
    msg.setDestination(7957U);
    msg.setDestinationEntity(60U);
    msg.id.assign("SAPVBNXLPNTXZEA");
    msg.feature_type = 207U;
    msg.rgb_red = 227U;
    msg.rgb_green = 246U;
    msg.rgb_blue = 183U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.937887881951439;
    tmp_msg_0.lon = 0.020270739246322722;
    tmp_msg_0.alt = 0.49731670706192577;
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
    msg.setTimeStamp(0.0511002493235726);
    msg.setSource(18535U);
    msg.setSourceEntity(92U);
    msg.setDestination(6870U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.37893670029477233;
    msg.lon = 0.26199211988446225;
    msg.alt = 0.8464819955784247;

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
    msg.setTimeStamp(0.6459729371037572);
    msg.setSource(759U);
    msg.setSourceEntity(216U);
    msg.setDestination(34100U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.2458047715491779;
    msg.lon = 0.8207494688523753;
    msg.alt = 0.20113993388032547;

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
    msg.setTimeStamp(0.22260969946574105);
    msg.setSource(1554U);
    msg.setSourceEntity(75U);
    msg.setDestination(11017U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.1625492300701683;
    msg.lon = 0.850942268786193;
    msg.alt = 0.4738684215788611;

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
    msg.setTimeStamp(0.22467804204952113);
    msg.setSource(43122U);
    msg.setSourceEntity(155U);
    msg.setDestination(62761U);
    msg.setDestinationEntity(208U);
    msg.type = 192U;
    msg.id.assign("UHUPCKMTWUCDSSSLPVNYRNCQGVXKBHADUPMBQOEWZYWNTFEKBHRZGXBKCRNXGIPUGIEKGDRQHPHTWQENMZZISDUAVMLSDPAOAFBXONOXLTTQ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7430326270206815;
    tmp_msg_0.lon = 0.1744016788763938;
    tmp_msg_0.z = 0.09973904114593668;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.14370000610957;
    tmp_msg_0.speed_units = 12U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9082296664093942;
    tmp_tmp_msg_0_0.lon = 0.21872396471468036;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PUBBRIIMJHXCAUNPCCYZDGQWPENGCJELDQXCFLNSHHAOEQTYHXYKBZNIUQIMHSHZMUHLWVD");
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
    msg.setTimeStamp(0.16137248263109805);
    msg.setSource(27803U);
    msg.setSourceEntity(62U);
    msg.setDestination(40186U);
    msg.setDestinationEntity(144U);
    msg.type = 127U;
    msg.id.assign("RXEDJGUDJMBRCEGIXBDMWKTKXBJZWUFAQEDZEWZVKCTVTKJZQFOAFJCFJQRPBTBZOTFQWCPDGLZGSMMQPVARGOTNBHPQSOZPNOWXIYLQTLNERSEYLLDVKNVIVSHTTYYWVZZCKCXSUFGOAULYSNUKIGXOANEYHSUGYGYPPVQJNPRMIYSRBGDJIHEWXLEOHKAEFDACMOYHMKXVFVPIKZWISCLCTRLXJIFUHRARCIPDDBUJFMOW");
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.5766808119699152;
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
    msg.setTimeStamp(0.6619494606277521);
    msg.setSource(53886U);
    msg.setSourceEntity(3U);
    msg.setDestination(15817U);
    msg.setDestinationEntity(201U);
    msg.type = 249U;
    msg.id.assign("MVMEOKXHYRGDUNPZXZJMHORMONOBQUAGHYGSHCNWNTIWOAHRSYSBKDWSXZTACDVMSXELIVZFAVCLWHDBWDQKJAUSTGBTBZWRXGIJKYXYLKTNDCYFILUCUFRTZRZUKYYRBLIFOLIFWVFXBAPFVWNHANXEMSQJWBJOQHPXSCKRRYOFJVZECGTNQQZJCXQQGIOPTEUAFQPDNUFEHSCAUVTKDLR");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.5447139232882651;
    tmp_msg_0.lon = 0.9616785782821298;
    tmp_msg_0.depth = 168U;
    tmp_msg_0.speed = 0.19567852702797262;
    tmp_msg_0.psi = 0.786469876181427;
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
    msg.setTimeStamp(0.9016004485551868);
    msg.setSource(46974U);
    msg.setSourceEntity(124U);
    msg.setDestination(21927U);
    msg.setDestinationEntity(40U);
    msg.localname.assign("ZGCAYQXHSXUVYNGOQFDPWQFKBEFWIXJPXOKTJCWXDLXTRSLCRJTNXKTVLBMYJLJGLTZOPMDHPAUBGFFBMPCGIROBXAQWDHMNGUGEEALWYI");

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
    msg.setTimeStamp(0.21227921709818187);
    msg.setSource(33664U);
    msg.setSourceEntity(35U);
    msg.setDestination(32856U);
    msg.setDestinationEntity(105U);
    msg.localname.assign("YQSJBXDGGBONQIHSIUIMHFXAFZGUVSVGOLZUBLOLOCEGPAHFAZWESUKEZWPWAMFXTFQLVQMLXAHLJDEKRCDZVCDXFYINUCZHOLRJWEUOTTTBDHCYXKAQIQXWRWDHBNOUMBVRWDSTKNBZAAASTBHEWQTVGJUYGIYMXWJPXGEJIKCOBRKXTEEVPRLINFZPMQJBKCPOFQYGCDKYRCNUZJVKLUO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HQHAHRESYVILCLVPRVKYGNZOTSNOFBVMLEMBLBRPUDWYCFSTMKGRVVUTRGHRZPGXNVXTGTIQYHDEQYUWNNACTCXSZKXQINLZTZYGAJIASEMOHABXUQIAKGBFPJVSJFFDZUXNHQLBGJMKIACWFP");
    tmp_msg_0.sys_type = 164U;
    tmp_msg_0.owner = 31908U;
    tmp_msg_0.lat = 0.9913674296220212;
    tmp_msg_0.lon = 0.8518177574842416;
    tmp_msg_0.height = 0.04389743769733312;
    tmp_msg_0.services.assign("BMSYCHJDGTYBKMXIQRAHQQBFOGOLNZPYPEPQMVVDITECHELVDVEMXYIHOBNMYTNJTVRHORGSDGSHJUZQFGKWFMCWOXDOALFXPUBXLNCVBZXJPEWWHIQLQAVJNFCRZZVYIRIHJPONAUMLYFEDRDHERXMWTOSAWRKKASJUCAKUCSZRWXNNXVWZRULGUQTJBCKWFGPOGOAMSBIEKAVSNBPMGZXGUKLFQKIKNSHTESZDYUQYPIJPLIJECWT");
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
    msg.setTimeStamp(0.3690227971991511);
    msg.setSource(171U);
    msg.setSourceEntity(123U);
    msg.setDestination(25353U);
    msg.setDestinationEntity(34U);
    msg.localname.assign("CQNYWVRAXKBOYLNGXULICKRATBQFXDPYRMXRIFVDRXTPHWRMIFPIGJUOHTHJCWHFOKIESOZEDWNCIJTWEZXRTYDPQKAWQTXYBFIKCDVBYDPQGLZAGZUZSNOHEFQFVIYSGMMHABJM");

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
    msg.setTimeStamp(0.5311028776755417);
    msg.setSource(33964U);
    msg.setSourceEntity(57U);
    msg.setDestination(47238U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("PDQSARDJWUEQWVEDLTQKHIVJOGBJVIWWOSXZMDZPCND");
    msg.predicate.assign("STEQWZSIMHKXSZEDIKBYHHCWBKOMHUMNUMQFJKINOXILRMJAZOFGLFCWFTMEQQRNJUVRXJZTGLSGCETLXZHHAEVYQFUPXADZNNYYTBXUHFYEVWLVJGRSGPUPDIAGJYSWGDOPJIPBDLRMUVDEPEPYWXWIEQQVFHNZHKATATWBLAINFMREVIOXQXBDAZTPRNCYQSOCLUWSAMSRPQKFNVC");
    msg.attributes.assign("RXVUVSWEUMEKGCAYGBKYYYRVSJLDBFNCTHTSDUTWOLOOGKA");

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
    msg.setTimeStamp(0.0841472719132591);
    msg.setSource(56850U);
    msg.setSourceEntity(224U);
    msg.setDestination(7240U);
    msg.setDestinationEntity(210U);
    msg.timeline.assign("PMCFGKZXMDYWWFJTWYHFXXSOCBRIEGEFYWKMNKFEQIVENBSEUSLXHRTUTLHHCJICJDYQFZVRNZAAKEQDBXNPEIPGGSXOBCTQNOOLQVPJGMCBPKWTIFMOOAIUYFJBGSSDIQOIIDGKACVRHBUXZTPCYPUPXGPKULTUBU");
    msg.predicate.assign("PZCNBQPFLUXBBKFVSIEKNLNHSAXDHSSIRGIYYFKAEGKCEZUCZNAMPPSYXNKXBSPSTZIKGXOXWOMQJUNBKNMFJXRDHCZGGLWMOMTIXQVFFIMRFVMCTDZR");
    msg.attributes.assign("YNMHGXEFMCQMUZNPHJ");

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
    msg.setTimeStamp(0.5022903680545479);
    msg.setSource(60647U);
    msg.setSourceEntity(166U);
    msg.setDestination(29447U);
    msg.setDestinationEntity(192U);
    msg.timeline.assign("GREKKSUHPQMDNJWHUWUYXNNVKZUCLHABOPBWKZJXEIDGXAIRQPDLEPVGBDTWIMBUVGKJCTOQIVAZHEPDNMPCKBLU");
    msg.predicate.assign("QKRTVMXMNJCKEMZEPSSHEXNZARACTGLJRSVWDQOJGQANGHKCLIBMIIWEYNFBTCCLFGNQHOZZIHDRZLWGSCVFDWDHOATGQMUMFITVVUQXKUIQLKBMSZIPYGLJKBUVRZRTENANOJIFYDNPRTBHDAWVBYFUAYIEOVRWMHBEYOPJFSULBEXXQSGCJOXVJPOLJXRKNAANDYSKGCHPWVXOOUEHUBYQMZUPHRPXUJWAPYSZ");
    msg.attributes.assign("RBMSGCVRAJNUAPOQHPUPFZZXPPESVCCDBLSXQROOONUIZHHNMNFXWPICFLBKBXJCMTDXSKLWOFYUUFTHKMKNTDYOXAQPHINTXKADGSYXIKODAEGQZWIZYPHRTEESNLFJZZWYTCKG");

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
    msg.setTimeStamp(0.0007330108413905467);
    msg.setSource(48222U);
    msg.setSourceEntity(195U);
    msg.setDestination(61210U);
    msg.setDestinationEntity(156U);
    msg.command = 251U;
    msg.goal_id.assign("UDLPUAFGWSNIEKAUAMLUJVICQSYBYNVZDXRSF");
    msg.goal_xml.assign("FOVDUMPKUYDSPAHJGMBCGYILHJZNSJDNZZJCCMACONRBAFQLRRRHXDSZBPRMGDBEPPSPLFZHXVWXVDIQTXLNGKJWYMQMNE");

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
    msg.setTimeStamp(0.6058644905147891);
    msg.setSource(59767U);
    msg.setSourceEntity(224U);
    msg.setDestination(4235U);
    msg.setDestinationEntity(122U);
    msg.command = 107U;
    msg.goal_id.assign("TRKKWVPXRPDNNFHUXQHOLYLALNTHHQCAPWVJJRBYNIASRKXKVLKQJGCMMGEJOUEFPJOXH");
    msg.goal_xml.assign("KXDEPZYUGPHFREIZJKGCGPHESXDLBMUMGIXPMPNQBHUWLQZJNXVTCCELEJYVNADQAVXSWSAFLMANOTLZHUOUATCCBTWQWSLBFJVRNHGNHDMOVUIVVBPTTSITYETDKNKKTWYOAMINAUEJRGFICJYZCSOHACHBQOEKAXDMWJSYCZCYRHRZGDBSBPUMBXOHLFWVRGZPJOQIQOYSUFAKINQPLWBIKJVORZINJUMFKZWQRMLFSY");

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
    msg.setTimeStamp(0.4965362888237388);
    msg.setSource(56467U);
    msg.setSourceEntity(172U);
    msg.setDestination(41035U);
    msg.setDestinationEntity(240U);
    msg.command = 125U;
    msg.goal_id.assign("LGHTWIJVARAADPRULNPDCDBIZUCAJTRPEWHOAOTWHGQSAKHBBORWQJLPRNCXOKBXWMVURFURTDUEADIIKTJENIYPTDXGZICQQXVYCIQYNYXYYCKMSJLRZIZIVMKUBMNSG");
    msg.goal_xml.assign("UERTINUMQTGSZHTJGPGGXHTIDRSNKJCNLKPPMLREQWYULSQWJVAOCMEAFVVTSDVFILDMNZFWSNOUXMCQCHPCOWORFYKUOAXQIGDNWYBETQIBZFJCRJGBFWBFISOZDAAKTGDLBXWYNRXIVUHPYCMLMEKEYJBRUWZEXMZOAIFWULARPZQPXVIOXYBKHUANQVTV");

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
    msg.setTimeStamp(0.6995571926641129);
    msg.setSource(64774U);
    msg.setSourceEntity(61U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(91U);
    msg.op = 61U;
    msg.goal_id.assign("BRXGYEGOFFWCTJYOYLDDYQNMIXRAVYDQPGMICZSXJIZJLMUYNBVHQQABKPTYRVUQMKMLAESSETMRPXTLDRKWH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ISYDXXMQEOBKTZZWTJPLFEXHZZPVQDIVBGIPVTRUINSACDAHVWYJKXCNVNOROBDIPWVCWRRLPEGBDIQFWRQYEVFKNTSMMESDEVJZXSPULIGAUITNNQAZOOKKMKTAUNGXCKUONILPYUJMXLOKQWBAFJSC");
    tmp_msg_0.predicate.assign("IHHBYENUNUTCQWULLUTKYHYEFOGWSXZBKAJRLOJDJIMFEXQKHELUOGBZCWXEJMFJNIZKPILZCGEFPSSNPRGPAZMHTRLRWLHYNZXAICANNAUYVBPNAVBZXARZQSDCGWWMRKDPRVVVJSMYMVDPEJYHQJGVITFWUZUOTPFTTCQLVOYPGSDIINKLXEDW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZOHPFXJVMDUGRPMAIFPNBLYOZHIHTLCDUZSKRPEZGLKAAWAGZNMVBKITGHMXAETYECGPKGCOSQMNISVZEUWDFRQWAMWDTHTJQOXLYBOSPSUDVWCFSEEBFPHGHFFVCLFLRMEWZVBRTUWYYMUOJDUIQXNIAYSJDIIJNQ");
    tmp_tmp_msg_0_0.attr_type = 204U;
    tmp_tmp_msg_0_0.min.assign("XXVXKFIHBQHYSTIVPBYASKTMTTKUNPUVRGGHNHCURNMRUEJVEAZGUDSBRNLBJIODUWIKBJDRBAPFPJHQIZTSRKOOIPLLTXKVWEFYFTOLEHSLXUPKZQJOWDGF");
    tmp_tmp_msg_0_0.max.assign("OUXFGBAEMQJDLTQKYLVYGASZNLVWQRCYZKWGXCYJAFRGJESLMEABDLIKGUZKJANSGYJWQCDAXTBDFURDPWPXNQVRJVMEMKSOUSCMFQMCIOCWGHKWUIMDGIRSYOGSXKMTBJFWTKPTQBLISYRHSPANVHGLLHOFCFZPVTRHWNNZOIEIEUBHJBZUHVALOIUOETAFOVTLCREJFYQZZVZCHYNPQRDRTXMKHSPPNUDDHBUNJWFPZIAIXQPOBNWXKMXEV");
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
    msg.setTimeStamp(0.07310719180907244);
    msg.setSource(65327U);
    msg.setSourceEntity(158U);
    msg.setDestination(7026U);
    msg.setDestinationEntity(88U);
    msg.op = 23U;
    msg.goal_id.assign("GKENTMNHORNNJCUTXITSKPY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OWOGOWIHZUTTWCSIOMDBKWSUYVIXOPESFEIYHFTOZNHBNWUEGMJHACUFYVNDVZLBKVWZNRRAIQLPNUQFJRVQBXPSIBZEGSDBFMYLHEHXLXTLORFBBZMXNJPHEHFGGGLXNOUCRVNAIQEKZBAULWVMGKTHQAUNDMCAKJFQFTUJCDEACSYXRSDLAOYSIKJCGXMRRXHYGVRDRSQMEJ");
    tmp_msg_0.predicate.assign("ZIHWGTTQFIQZAROWOPFXJIAIUHWSTHGSVCWNYGEJUURVXXRCMGMGXIKUXFAJLJVBLGBKCQKURMZGABARMYWUKZWPBRMZDFXITXOSDSAXHEECCHGLVMLNEULLWSEYTDPUDKZPNDKHKYQQQAVFSJHUNYMOTWCVOZOBITUSRMPCHE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CIFRJDFHZNFVTRQXQMTMJZLYYJKAPGIOQNMRXYVDBSCISYPWWOTMSZTGNVDHGXUZPUXIPSKLVDJOSYUUQZIBFWXTFMAEMCLKEUUAVQWIDRZDDVEXAHMMUPLYXHGJTXENFFBCILAUZQEPWRGLSBTSRFYAEVXJLMQKNDNYGKQJ");
    tmp_tmp_msg_0_0.attr_type = 29U;
    tmp_tmp_msg_0_0.min.assign("IEXAIVOFUBHMKEUYGCCGAWRQMEQDIKVLTAWGCHDTLVIIKCZEZFWOTJYPZODNGARCHOASARRMOUGAWJKSXXTQQMSDYCWQEZPLLHRQEABEJVTBTMV");
    tmp_tmp_msg_0_0.max.assign("MPRUCUZEVLOGJDAKVBOXCIRTJQDNOVJYAUNVWOJYHGMVKGECZERNRFAHWFIBRLLSLWZVJX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6421764029977);
    msg.setSource(38355U);
    msg.setSourceEntity(103U);
    msg.setDestination(9469U);
    msg.setDestinationEntity(159U);
    msg.op = 97U;
    msg.goal_id.assign("DAFVNIVETVFCYVGTUBUOPZXCEXGDUOWCMILDWXMAWYAPHKZIFEYQKUOSNOUKWKOCOHFSVEISPBZBFCWKEUDNJDXQSYVNTHQKQJJPKTPLVRBYQRTNGBNPHFSBXPAEMQCXBZCQQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PXIUJKEUJAUQULKPLQQCFTGMIYSZMAVMKIIBOYSWPGYXNNHTGTBCUVYWAXJNVCVCKQNDCSURXKDZJGQ");
    tmp_msg_0.predicate.assign("BDGUVXUYEEVZLTAJCUNHLVVJHPQSOZJWOFPUBEAFANQLSPRKNVXIQNGPHJZCRUODKKEDWFMZHUTFLQZJNPPFSBXGZSDOOSXNEQLWAVXBKZIDFYTSOMKIPWEFRAWIYHHMWLJTTMRBVICAGPREZRQIYJRQKIACGTQCPLYTXJDTMYCMYXKNEGBGYOCZBXBMNSJVOFDICDGXKASQVPNHIRCGFNDWFOUYAW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TVCGJGHIAZPMXPCUBCXXYAHNMKPNVAEDUJLASXPPFKFAHDLGIXITDEYXWIFIZBEBRJPLEMKZSTQBGQOMHRVZNOUKGVJAQMZVAPZLQUCSOFKOJUFVSMEBKWNZJOHPDLMSSUVFCWWGBRXRYVEIZTLLFQSPRUOOIRBZLATEUKMJTETNHYXLCTIHCQOWCDSSQFHUMQOHCWRRGKGYNGADWYJBKXD");
    tmp_tmp_msg_0_0.attr_type = 253U;
    tmp_tmp_msg_0_0.min.assign("JAPNEIQEXFTANLRZSPZREB");
    tmp_tmp_msg_0_0.max.assign("MQUTGUDWTDQRPRPKS");
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
    msg.setTimeStamp(0.054352322379744966);
    msg.setSource(11618U);
    msg.setSourceEntity(41U);
    msg.setDestination(24697U);
    msg.setDestinationEntity(10U);
    msg.name.assign("CHOZHKJOUIBOKYFWJRMEZLIOGUUAFFNCGXXUUDLIFOLJCGRTFBMMYNJKNQGWSCZWHMMOQKNTYDQUAYWAFDKGXYYWBEZSBXQHNQDLLNZNIRDRATLBSZVERQIHEITWXVPVTWQVOLPVOVESCEOGSRESNJTQPRWHJADCJYPDHE");
    msg.attr_type = 5U;
    msg.min.assign("OQALHOVJXVIBRQHLBMEXHNVARWZKHGMDRGQRBQKMLYOGDVK");
    msg.max.assign("UXHHCGWGHUMQJZNRCDDXCJNVZSKGKZCCSCHJCSQFOKTIGFKZWVKQGEMNVVQNTGVFFMJQKRRUFGGSSWNQ");

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
    msg.setTimeStamp(0.31790132959497697);
    msg.setSource(10817U);
    msg.setSourceEntity(68U);
    msg.setDestination(59470U);
    msg.setDestinationEntity(162U);
    msg.name.assign("UBNPEAFYJDMXUNZSHEWHVALGPZCWDVIGPBUSNFSNMBBRHSXPIFKPEVERGQRLYAYKKCUUXTNQZUVGJMAHSERKHAYHIWHWOLNADDCAFRGZBOPKYDRKCCNQXDYAYKBNMMESCBWIUZXJWOQIISJFVQESIMVVIELXZZTWTQFQFRUBCOSJPCVNLVNAEDRJCOKDXJQFYTFTOWJZITWGYXPUMKUAD");
    msg.attr_type = 219U;
    msg.min.assign("UXDGLVUPIINGMJVBESMPACSQXXDZFVBZBIAOLCCKLDDSSGOCXCWRMPDTZQJSTCBUKREIKRNFVQJQSYWUHGHXHWRQTUZHBENIUQKDQMJHBBSATUQUESMKNYWEVFZRWFPWJFOEMVQCXWLLJANXPEGJKRMIUFFGOOARLFVK");
    msg.max.assign("BNPBJDNYSVHQXYGWFMWXKMBQRGCMFQIMIPCPWLANVKWXKHIHOKTEDLFYNUOFBPAGNABTOKWYLJAVDRAVHRVVKFZDMVQDGZBKJFNDJ");

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
    msg.setTimeStamp(0.37300063629959745);
    msg.setSource(15038U);
    msg.setSourceEntity(6U);
    msg.setDestination(46994U);
    msg.setDestinationEntity(236U);
    msg.name.assign("BTTNJUKPNDLBPUQTEDEKYECRXOJOLSZLKQVBZFQAPKBNAJZUZPCBXRUSTQTHCVRVUXXATWDJMCSGVBFWQNTRHCPDQOWBQAABISSHPCSPYQEUHRIYGFADQOQZVFKBKCTXRFRIKVJXECMGUDNYHGZZZVNAMROIHGEZOXLOEYSVFOUFAWOGYRLLSDMMWDHIHYFJJKJKCTT");
    msg.attr_type = 138U;
    msg.min.assign("QEDPAZCHELGKZGOTDHBGBBVCVCMHHPTMLUTYZZOFPSJSYHQIRBXKJARQSOHUXQPAILULQZJVLKZFDFMEWOLTQAVZUVFXEBFJ");
    msg.max.assign("TLWJIXTNZIYJOARJCCLAEEAFZUAVUFAHWLMVYTCLUBZTRFDHYTDVZFAJOQDLMNBPIHVUXKEURCAQSXBWFDPXJDZPEGCVUBJQDYQEJKSHMQBQXOWSWQZDYMOLUMNXYHGUCTMGGGJPIMELYOFIREVPLBNVCKIX");

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
    msg.setTimeStamp(0.37512071435957717);
    msg.setSource(3067U);
    msg.setSourceEntity(97U);
    msg.setDestination(9941U);
    msg.setDestinationEntity(217U);
    msg.timeline.assign("FBMMTTFIBIMZJSKAZDWTAOFWSHQPDVFZBDPGHJIQTKXDMDRGWJUWVZIVQKRMXUINLXQSALRNNYEAAUBDQGECHSODTDLJLPCFDOLGRKEYCEWAWBQXJBZNALZLKLHJCEOTKGGKUCYVDNRCQVMTUYVHOIUAMZYIFWSCRUOXXWFPTMWAGLQJRSSZHNJEVZHYFPGOMSFELRPNI");
    msg.predicate.assign("AWUCWZSBJVIXUMJDTVACKJISF");

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
    msg.setTimeStamp(0.25043737334749605);
    msg.setSource(43420U);
    msg.setSourceEntity(168U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(122U);
    msg.timeline.assign("QRLRHJPEMOXDFLORFAVJQTOINIZMJWXYPVJXENBHQLKUZUSWNUPEDMVDSDFOTRQFICCTM");
    msg.predicate.assign("VURTJMQLFHKGGXDLLUIPACTZOJWWIEEZNJXKPXSYEJHUHEWWFEDWOBQO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JPQPWQJVTXMUNYRVQFCUHAIJ");
    tmp_msg_0.attr_type = 237U;
    tmp_msg_0.min.assign("TJNLPVBLNFIRTSSUWSXKTYVOHLQZHDITAAESJBEZUEIRMJINWSXSVDWLGAXBMWWHJXFGXOWOHCKPPJSRXMAVEFZKZXPHUZNYCQGUUDKHPITRUYDHRAZWZIWISPQRMUDAMDSZPVVJKNTMBYFKOTGALEQCRGGBEAMBMRGOAOEDKQFEYCCIG");
    tmp_msg_0.max.assign("TUXXGYFOYBWTPPJJAXCQXURZGMSBKVAXHIGYATMHWWLEVIMBYSNCFSGDPWSMFGAFUEYQENJJCGHGHHDCVFMAOOUWCNLZERBLUTHYZ");
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
    msg.setTimeStamp(0.855136508327527);
    msg.setSource(61410U);
    msg.setSourceEntity(116U);
    msg.setDestination(26486U);
    msg.setDestinationEntity(206U);
    msg.timeline.assign("SQLRNLGHZUOXZJAQBWDABOCDRENORKDKMQITGFFYFNZJAQCSJRVNYARYSYKMCIVAXLSHGJPMXPTTZSETBNZLDCDMPPUEBHCWLWXEVUQTPGCIDAXKEGNOEOWGYNXGZ");
    msg.predicate.assign("MCKKBGTNEUBDPQXMBTFIOERZWMKQNXJWKZRKIKGMAYRPOAJLPXWIMOXHCBJZFNLEYYJDERJKUCUWMYLFSX");

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
    msg.setTimeStamp(0.6367089299711145);
    msg.setSource(48659U);
    msg.setSourceEntity(235U);
    msg.setDestination(19617U);
    msg.setDestinationEntity(123U);
    msg.reactor.assign("SADHPXCJALMJZOUTAVRRRSRI");

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
    msg.setTimeStamp(0.0475533704050789);
    msg.setSource(5013U);
    msg.setSourceEntity(108U);
    msg.setDestination(19035U);
    msg.setDestinationEntity(84U);
    msg.reactor.assign("QHHCEJXPGCZWPFVWPY");

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
    msg.setTimeStamp(0.15743159282550312);
    msg.setSource(4961U);
    msg.setSourceEntity(65U);
    msg.setDestination(56195U);
    msg.setDestinationEntity(189U);
    msg.reactor.assign("XCUWVPQEDJGZFVSFQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YZPTSLPKQZMSVUYEWBMTAPLSAHFWGVTNG");
    tmp_msg_0.predicate.assign("FVGSORFYQITNBUYFBNRCSBSBTRFKWPDMCKGPAEPOBCTQDYSCJXJDRLNWEEM");
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
    msg.setTimeStamp(0.8092002419169643);
    msg.setSource(2328U);
    msg.setSourceEntity(214U);
    msg.setDestination(62091U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("OKFZJCCBGXEQUPQWOPDVDWWNQEJDUQUJORNOMPLVOJRPVIMJQYHURJOLLJIURETGSLYHYGMIJCEFJZKKNTKTVRRPLZVFIITVFTBWSHYHWZGQBIUXGAYNAU");
    msg.data.assign("RZOLPPPJQVAWZBHPNIJURMJEBLODDRETFKJUBHCJPORACTFCVZXIMYBKHTBOCWQDRUPHJIRNXIDPSRKJCZSWTSTZGGDSVOJZTMBANNPQEPHFMUXWGBEFNYNYKDGGSFVXKSVKTGFYCLUUEYBPMMOEYLFYJHBHLAGAUXVSIZSWXYNVWMUCVHSENTCZFALGEGMZAQHWAOOTZLNVRQ");

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
    msg.setTimeStamp(0.878697921061289);
    msg.setSource(13951U);
    msg.setSourceEntity(85U);
    msg.setDestination(58428U);
    msg.setDestinationEntity(87U);
    msg.topic.assign("NJTPFIZIRCKLWWKYATIERQXQJGNPDKWSFGPSZCUZHYERADLHUGOAKDIUCSJAWSKBVCLGEOLV");
    msg.data.assign("NJGXYUXBZDBBAMVSTHUVOCJRNRBXLNJVMRWYIVYLQKSEQEEOGVQVZKHSCKOCCZGPLRXUKTHPSWNYOHGQBQFDKQFRECRUZQEUSIANSPUAIJTQF");

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
    msg.setTimeStamp(0.20658307307501522);
    msg.setSource(38231U);
    msg.setSourceEntity(222U);
    msg.setDestination(15566U);
    msg.setDestinationEntity(32U);
    msg.topic.assign("ZKLOIWEHYMDAIWAMTHNSQAFBPYAIWGBUGIEJXLGHKFXEYKYWYZCGNZNVBFUBDOKHLPJVDNTBOORVFXLQULPMCBSKIUPIWMGYABZGEBVDOJFASZRMDOKRRFWTQXVYCSAOCKJESCQPHXUOXDGWMJHEPSIBIJZWVN");
    msg.data.assign("GGRQQCCHNYTUBIFVUPEHZTLVQSXGRLAGUAWYPEDVATCXJMMNJDNSN");

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
    msg.setTimeStamp(0.17090015041991036);
    msg.setSource(7836U);
    msg.setSourceEntity(246U);
    msg.setDestination(40836U);
    msg.setDestinationEntity(251U);
    msg.frameid = 178U;
    const char tmp_msg_0[] = {-118, 68, -112, -80, 91, -46, 92, -101, -80, 101, 123, 97, 110, 89, 13, -99, -114, -119, 43, 40, -101, -116, -55, 117, 107, 112, -100, 108, 106, 79, -39, -104, -116, -36, 53, -25, -46, 54, 37, 13, 61, 109, -112, 28, 125, -8, 45, 49, -30, 60, 60, -46, -31, 126, 34, -109, -34, 98, -94, 84, -95, -81, -68, -79, -53, 65, -50, -65, 5, -23, -36, 50, 121, -39, 76, 122, -109, -85, -79, 57, -127, -55, -33, 69, 39, 90, 42, -123, -71, 46, -106, -105, -5, 30, 58, 96, 73, 118, -21, 61, 76, 119, -4, -104, -10, -16, 113, -111, -77, -23, 120, -90, 22, 65, -128, -41, -33, -50, 55};
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
    msg.setTimeStamp(0.21782274173547356);
    msg.setSource(7442U);
    msg.setSourceEntity(138U);
    msg.setDestination(43750U);
    msg.setDestinationEntity(11U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {112, 70, -46, 57, 102, -82, 57, 98, -50, -56, 81, 50, -12, -86, 24, 50, 123, 78, 76, 50, 87, 78, 100, 23, 73, 81, -59, 102, 92, -68, 26, -29, 22, 117, 108, -106, -6, 32, -43, -59, 126, 124, -3, 43, -26, -25, 17, -55, -53, 65, 59, 2, 16, -59, 40, 18, -23, -4, -9, -116, -1, 53, 51, -65, -38, 74, 11, 5, -28, 122, -49, -92, 38, 18, -52, 62, 113, -47, -78, 16, 98, -76, -97, 35, -47, 96, -24, -14, -116, 41, -104, -123, -85, -67, -8, 93, -72, -101, -75, 83, -83, 18, -72, 73, -36, 11, 98, -34, -115, -36, 100, 43, 29, 28, 81, -6, 89, -97, 74, 104, -69, -38, 37, -65, 105, -109, -65, -2, 40, -123, -18, 39, 56, 88, 9, 39, -104, 42, -16, 28, 73, -111, -98, 97, 95, 122, -70, 32, 47, -122, -105, -37, 24, -90, -102, 54, -109, -88, 48, -65, 93, -61, -125, 52, -50, 16, 44, -11, -50, 59, 78, -15, -40, 106, 52, 103, -47, 78, 37, 2, -98, 17, -66, -120, -105, 69, 94, -16, -43, 64, 7, -18, -118, -65, 62, 113, -38, 34, 63, 37, 6, 74, 67, -38, 77, -85, -99, -64, 59, -18, -39, -8, 3, -94, -109, -18, 93, 123, -34, 15, 31, 31, 106, -4, 48, 69, 62, -70, 81, -95, 102, -125, -19, 91, 80, 76, -57, -5, -102, -41, -68, 107, 80, -70};
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
    msg.setTimeStamp(0.8852080111530215);
    msg.setSource(39694U);
    msg.setSourceEntity(79U);
    msg.setDestination(3837U);
    msg.setDestinationEntity(42U);
    msg.frameid = 168U;
    const char tmp_msg_0[] = {105, 125, 32, 116, 103, -34, -13, 68, -73, 36, 53, -68, -4, -84, -9, 19, 80, -14, -35, -11, 10, -78, -1, -43, -83, 54, 50, 79, 75, 44, -15, -21, 51, 102, 42, 52, -9, -91, -22, -119, 42, -62, 102, -92, 98, 104, 6, -40, -79, 14, -57, -51, -58, 4, -103, 10, -14, 73, 40, 77, -29, 63, 60, 70, -30, -43, -127, 77, -127, -28, -8, 115, 102, -76, -123, -12, 54, -1, 64, 13, -41, 62, -69, -111, 93, -2, 104, -9, 86, 68, -72, -36, 61, 24, 115, -12, -51, 61, 53, -6, 38, -70, -103, -17, 112, 1, -71, 117, -65, 53, -98, 16, 33, -82, -33, -104, 85, 27, -119, -91, 25, 59, -62, -25, -7, -41, 20, 59, -103, 43, -83, 70, 88, -64, -83, -56, 54, -16, -35, 101, -69, 53, -32, 25, 82, -50, -85, -100, 103, 117, -44, 71, -77, -56, -98, -113, 25, 94, 68, 100, 9, -104, -92, -32, -25, -103, -66, -94, 1, 24, -46, -5, -46, -42, 46, 8, -87, 100, -88, 11, 82, 106, -127, -71, -50, 39, -119, -20, -100, 58, -75, -19, -110, -22, 111, 89, -69, -52, 0, 88, -48, 75, 50, 106, -29, -34};
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
    msg.setTimeStamp(0.7122439787852904);
    msg.setSource(3721U);
    msg.setSourceEntity(108U);
    msg.setDestination(63233U);
    msg.setDestinationEntity(177U);
    msg.fps = 22U;
    msg.quality = 38U;
    msg.reps = 87U;
    msg.tsize = 184U;

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
    msg.setTimeStamp(0.7780261696352455);
    msg.setSource(4535U);
    msg.setSourceEntity(233U);
    msg.setDestination(51803U);
    msg.setDestinationEntity(230U);
    msg.fps = 46U;
    msg.quality = 198U;
    msg.reps = 63U;
    msg.tsize = 120U;

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
    msg.setTimeStamp(0.3677458371723662);
    msg.setSource(39281U);
    msg.setSourceEntity(84U);
    msg.setDestination(63906U);
    msg.setDestinationEntity(224U);
    msg.fps = 28U;
    msg.quality = 130U;
    msg.reps = 4U;
    msg.tsize = 21U;

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
    msg.setTimeStamp(0.4523506978964692);
    msg.setSource(45992U);
    msg.setSourceEntity(66U);
    msg.setDestination(34317U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.6038857182894729;
    msg.lon = 0.7243004772899975;
    msg.depth = 150U;
    msg.speed = 0.9107119661572521;
    msg.psi = 0.18837216987419925;

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
    msg.setTimeStamp(0.03622092079664818);
    msg.setSource(493U);
    msg.setSourceEntity(238U);
    msg.setDestination(27015U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.7461991120391567;
    msg.lon = 0.1860131304047865;
    msg.depth = 38U;
    msg.speed = 0.8835684307551235;
    msg.psi = 0.4721417652495542;

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
    msg.setTimeStamp(0.2227297251201148);
    msg.setSource(32065U);
    msg.setSourceEntity(40U);
    msg.setDestination(48576U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.9917914076423444;
    msg.lon = 0.027088135482444264;
    msg.depth = 156U;
    msg.speed = 0.08871455935568529;
    msg.psi = 0.2719616681957219;

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
    msg.setTimeStamp(0.43710784244173184);
    msg.setSource(19751U);
    msg.setSourceEntity(36U);
    msg.setDestination(35442U);
    msg.setDestinationEntity(77U);
    msg.label.assign("WXTXNLPAETVWORTDOUSVQAGGGJPJIQXZXTLDUXKDFPYVDBSNHQFDMNLETTEJGISJISRKQCAEMAHOQLFWBFIKKNPYEMQUJKOVHBCIOICWWSLGMZJAGUHRDYLDZGJIXUZHRLAJWBEFEFDJOUAHPSBRPRKCXQKRQYYZVZAYVHSYCTBWCZYYKNBCNUHPNLZPAONVSSKGCHRWUTFCJMRGVXUIQAFQOOCMIUMLWTMBLVDMIWBEHKRFPPZDEBMFN");
    msg.lat = 0.5079316184851652;
    msg.lon = 0.5893284451107643;
    msg.z = 0.9967287345341342;
    msg.z_units = 195U;
    msg.cog = 0.07807052824344851;
    msg.sog = 0.8941274552001507;

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
    msg.setTimeStamp(0.7086720208876839);
    msg.setSource(59578U);
    msg.setSourceEntity(192U);
    msg.setDestination(41757U);
    msg.setDestinationEntity(157U);
    msg.label.assign("OWHDDZSPGXQZVKPHZBJOTHGJAYEPAOLTSFCBNXXHGZDFSFALVDCBFVLOLWCECTXYWVKYGYWQJIMKTTMRYNEPIQBMFHSYKXQAFJRYJJIRTEVWOWQWQUDPMVOZAPXUMOIIQSRUBJCTUHXLSEJTJCSERIBCSLQZLMCZNKMRMIUUKDVRAOWAYGW");
    msg.lat = 0.6421616364486918;
    msg.lon = 0.6243845695398069;
    msg.z = 0.7342373624518855;
    msg.z_units = 250U;
    msg.cog = 0.5039547992245659;
    msg.sog = 0.21267878409656227;

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
    msg.setTimeStamp(0.2760274530853696);
    msg.setSource(21694U);
    msg.setSourceEntity(193U);
    msg.setDestination(52340U);
    msg.setDestinationEntity(253U);
    msg.label.assign("MPBXZQDQFIMTLHVRJEXUFYRKLBCWLIEWTJARGFYNZRUNMGEXHVQRIVVTJMDRQYFBOVNZWEOLQMIGUBALVBQCQOHEEOAQSLHOODGMWDCZXHEHYTMSIKVFUPDPKUPUCLGNSNZJPUNYZSMT");
    msg.lat = 0.20667652078829235;
    msg.lon = 0.3468301672028614;
    msg.z = 0.7998787377674854;
    msg.z_units = 180U;
    msg.cog = 0.5095277362232566;
    msg.sog = 0.42987560367587474;

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
    msg.setTimeStamp(0.09210801159698068);
    msg.setSource(62032U);
    msg.setSourceEntity(168U);
    msg.setDestination(57948U);
    msg.setDestinationEntity(75U);
    msg.name.assign("YETCTMEGQMLAKBOAZHGRBSZUGPOAAFETFJDNZNHXMKWOXZASUYUCJTZGISXWFXPUKOWLBVJJYXYSFGHWCPDMBEPIUDPWVJGIPFIBTTOXJTLDGZPCVK");
    msg.value.assign("CFDNIHFWNWDNWCEY");

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
    msg.setTimeStamp(0.7709893709407992);
    msg.setSource(38429U);
    msg.setSourceEntity(239U);
    msg.setDestination(8838U);
    msg.setDestinationEntity(171U);
    msg.name.assign("FPUZMAAIKEQLVVHIRMNSPRVQCJJZGKBTESUOFDWVRJZNXMBNEZCQDJYZJARNRLSFLWJOUKTALDPEISUWQGDYZGLOYGDVERCMWDBIPOQKNVEOLDPHXJHABXGSXYWPMIYWJUKRACKUELBLJOCCUAGFHICXWTSXQZOFKTNEILMYUFCFOPSQPXUXJTOUTDNBHESVIEY");
    msg.value.assign("LYPWHMSLRISMDRNLULXNNHPWDKTBNZPNRTCAWHFMKUPJNEYJCALXFXZTPWC");

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
    msg.setTimeStamp(0.5178933216943441);
    msg.setSource(9912U);
    msg.setSourceEntity(19U);
    msg.setDestination(770U);
    msg.setDestinationEntity(208U);
    msg.name.assign("VEAPVFJTFHWQGASLPZGXUCRJXZMOWVBKYWJIFHLECGALEGUCYMRNGTTVDTZNIUVDNELCQKJHYWKIEEUOWCQIWGKAYFWPTZOXQMPUOPGIZHZXHEMSAFFEISJYFRVBSDPPUOQMHHMJBLPBORAACYPBKVKTITTFHSXDFZJYTDKDURW");
    msg.value.assign("PRSDXKDNLHPIHBZUOGPMFEQNQNQMKJMWFLWYFPILUFEDLBUHCEIISXOOACXGODXRTUBGPOSTCVWPPHVIHYUTWQVETLYSGDDNAWXCKFHVZVEBPFSGKUWBZWPVXKLYTMRKBDIWFLRQRNKEGZANCQIX");

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
    msg.setTimeStamp(0.9876739914942158);
    msg.setSource(40907U);
    msg.setSourceEntity(28U);
    msg.setDestination(31751U);
    msg.setDestinationEntity(117U);
    msg.name.assign("GRYOLAGEMTQFCDBRKYXSPALDBJECJPMKOPFMYPWQHCICLTUPYCZNIVTNVRKEKDRZEOXFHGWRCYTJVINZQSLDSQYITCGWTVAJDHGQMUSYRXOGGACM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XWMSARRMAVKUPEFVCJUCSUBNHXZCMHYWZYSWJTZCBNLTKFRAUZZUENVIASLRGOAPMPKBHGPADQEHXXTFDQQIXQWXTGP");
    tmp_msg_0.value.assign("UVZDIDWXJRNEBHKGHGFWKLQOZFELOSDEWZKKPQHGYTYDRQLAOVBPXAGBENRMDMWCYZUTCDUBBKAOIQSVEHNVZDNVUDLXTCJJFQKBAIMVPLYDHRTCGZRQSGYHBUMFKFSXFCNSBNLKQHKPGPICWOSRMXXTNSTOEMAICWAOFLJFDOVU");
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
    msg.setTimeStamp(0.39647394937885827);
    msg.setSource(10900U);
    msg.setSourceEntity(198U);
    msg.setDestination(44170U);
    msg.setDestinationEntity(208U);
    msg.name.assign("LCHIEWEFKTJOWQVTSZJFZYDRLHHAAMZBGYKTJZPJBWDJKZGKLOCNUMSQSRMAMFVEFIYQRCKWXSNXASAELYQWCDYVFSBKLNJUHUYPLZSITUCBHOFIFBEWNYPBMCQSCOAOXPGIVOTHVKMIQTDVGHOTUIBUUXWCQWQTTJHNEQYSRUXWPARYXOV");

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
    msg.setTimeStamp(0.8039418034222922);
    msg.setSource(64120U);
    msg.setSourceEntity(103U);
    msg.setDestination(26080U);
    msg.setDestinationEntity(65U);
    msg.name.assign("EVDYAWFZDFRGEITTPXWWJRSBRROVMHSLVWWQTCQEGEUMJGDQTLOYS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JRPOCTEBOLQXCFSWGJBWXZKBZXECVTMKJCVMKK");
    tmp_msg_0.value.assign("KZGZSXLZVFMYXDIGYLVUMWEYHOSCOVACQZNQUO");
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
    msg.setTimeStamp(0.2908391697102366);
    msg.setSource(19737U);
    msg.setSourceEntity(241U);
    msg.setDestination(56912U);
    msg.setDestinationEntity(204U);
    msg.name.assign("VJURZPFUNKKFQFUGOZZEOVWTYKQJCDDSWFPQPMRBOSZNFJ");
    msg.visibility.assign("TMOOXCIQZJATNWCJUFGCSMGAYTCHUVLIJMJLEBXSTDEHPPEXBXNUEWSBCMPKWPQOWKKERWTQDNFNQIVYJMKLJFOPXSJIFQPIYUFLFHCPVTECXLAEKYBECUQZPSLMJBNXZTFOE");
    msg.scope.assign("DDICARBQMVFNEMLNKSZYNPPILCMFLJHAAWTYIMBHOFNLRZMVZXOCSQHDJEIWNAJOIDKULUXWEGTHPNWQFAAOBPJOWYPCEUMFNYQBOPZEJANRHUKWXVVVLBGKSDQWDCFHGTLBUKGPZKJIEWKNYUWRCTKWUXZFEJGXZYSOCSKKNXVMIVXMTQSOTJCJOORGZRQAQXTRBDEDQAGMIHETDLHYMPIACYIVH");

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
    msg.setTimeStamp(0.49055233998559156);
    msg.setSource(17866U);
    msg.setSourceEntity(43U);
    msg.setDestination(37543U);
    msg.setDestinationEntity(55U);
    msg.name.assign("ITFSJMHWLZCSOUGDRZORETMCPUDWFGYSFDBOUHZMKTKEAOBYLHXVHVJCWBADBPEVYRAHPRQWSWRJQVIEWIEUVTXXVGIXEKMYJQDTTVLPLUGBZYNDNGFWCSWONMIUMUBBRKBAPTLFNWQPXTGSZVXRLYCIOLZEHQFJNKNQAS");
    msg.visibility.assign("JDOFQKZBXBJBONXWCK");
    msg.scope.assign("TIDAXZEUUREVUMYQBJBNHRBCQSXVAJSGQBMZIPBLXMELVILALBZHXDQUPGAWFCVHCIQSSWXKOJHVAWUORTLYPJZMMJLGCXCKDEPJEFGAGGWGREHKJNKCZOHQKOGQIYJOWIGPNTMLNYDQPKFQCTOUKKLDSWNINMPZN");

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
    msg.setTimeStamp(0.8207813729158686);
    msg.setSource(38630U);
    msg.setSourceEntity(246U);
    msg.setDestination(15819U);
    msg.setDestinationEntity(168U);
    msg.name.assign("HLYOHYHGHAAUVNFPASMURVFVJTRJIBFYMRMVIGEODNMWBPPZTDJSVDATRZGRXPDYBNPSHEPNZTEOXAQSSIYYLRUEGIZUCCRAIHUCCIOSNZJQYBZWZUZRVOWNNQBPBBWLCYSZKEMNELMFRAKGAKMJBDJEFFZSGQJCAWVXTUDOLGOEWDSFDKCIYXXBCLKSKVQYDC");
    msg.visibility.assign("IIMXOXWLPSACHKFUHZGIICMPYAJQIVRGHCSOMNPLRHAMFDTWELYBSZJDBGXYEUJPXCKBFKLXGUREZBHIPDTTRBOHRNSZHSTQUIGNBOVYCOBTULEEXTSQKVIOJRNYHWRPCKLDCWNBYDTJJHWEUZGXFAGMUVLMYEWLDQJLKFFNPLDHEMTBWYVZVKSVXQNVQBTPUNOKMUAJGAFKQORNXROCAGFFQYZSDCSAXEUOGFZJVPZKYI");
    msg.scope.assign("ICUQKFBAEPFUVWRINYNPWJHZNDMMSLQOBBUTPDMZXLAOTWHVXEJDRRSZNRTKFTACXWHFHWIDZUGRAXNXY");

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
    msg.setTimeStamp(0.9754026902696821);
    msg.setSource(38155U);
    msg.setSourceEntity(170U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(57U);
    msg.name.assign("LNQIZZOKTAEWRAJODCBAGDSWFMTMMQWLAWRGJPZPDOSRETPPJBXSSDMYGRJXKWONNBSCLCILARFSVEMYBFLNYKEUXGQXBEEWLEXJFUYJFKPVTTMTFPMBSGWVQFQZHWQSDQZRBQOHZKHCTVYLCRBXZNCJUXDCGIYFOBMFKNLXAKNYTRLIGCUHAOBPIQHHIHFLIMDAUPYRTICUPIGJVMC");

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
    msg.setTimeStamp(0.9884531544761456);
    msg.setSource(61176U);
    msg.setSourceEntity(151U);
    msg.setDestination(21360U);
    msg.setDestinationEntity(187U);
    msg.name.assign("OJEKYZQBHCWIJGYPTIJWJBQPHZESEPBRMQPNYYUUWFJCHQKYVKPRILABHMFIKNTRUHGOMXPVYMENIW");

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
    msg.setTimeStamp(0.3326342971172149);
    msg.setSource(20727U);
    msg.setSourceEntity(168U);
    msg.setDestination(29154U);
    msg.setDestinationEntity(2U);
    msg.name.assign("LUZEPZNGLNXWPUGTOCXOPGFUZYJVSGJHCGLWTKBKNQKKBSSEQJQPZXTAAHQDZKHJPPEYJEOGJQXASRQAMT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IIMQXDXWHRQQYUNPQUDLZUJPPZLCWHMZOHJTUQFEOBFWXPGKQWVBTKDFBCKUKFHMAEJFLEQOWCQVIECGVRKYCQAPULYBYJRVFNGZYRJKTPNBNYDSCACHMWEVTSUNGNGUS");
    tmp_msg_0.value.assign("XCNOALMQTRUNJXVWQELEMTLJZADOTZMEZILFSYJCBCRVDDIMROPHYYNWUBTNXICPKYRAHYKSCKCPJZPWQIQNTALXXFXLRATAGGHEBKSJGZRQBKPTOWSHUJZKKBLEJHPBTEOXTVGFXHYGMWLFUMSDJJXPVUBUAVQRWUZVWRFEGNSGECDOSOSQYDDNTYIKLHPQIVFQUWVMYN");
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
    msg.setTimeStamp(0.1333469704534912);
    msg.setSource(55220U);
    msg.setSourceEntity(207U);
    msg.setDestination(54857U);
    msg.setDestinationEntity(122U);
    msg.name.assign("ETPZSMRJVOHNGTHQPNFREP");

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
    msg.setTimeStamp(0.49728933482260085);
    msg.setSource(43680U);
    msg.setSourceEntity(105U);
    msg.setDestination(6601U);
    msg.setDestinationEntity(206U);
    msg.name.assign("TBLTKHQCWDVYTCHTNYZHTYQZOPGGGLDXNKAVSSGEMRFCO");

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
    msg.setTimeStamp(0.7820826425160676);
    msg.setSource(34106U);
    msg.setSourceEntity(208U);
    msg.setDestination(42122U);
    msg.setDestinationEntity(85U);
    msg.name.assign("XYFDWCMLDXRUWJZQGPBAJSBGRKWJQUPJSUROMKCAEQTYBXJUULTSNXYBINURCEGZAOKZCHEIAULZSYOPBQLRMDBIVFWSAJXWFNZYAXKGIMNBBHBWLQTNLHPFV");

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
    msg.setTimeStamp(0.5031842939372516);
    msg.setSource(36245U);
    msg.setSourceEntity(251U);
    msg.setDestination(13364U);
    msg.setDestinationEntity(93U);
    msg.timeout = 1407744564U;

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
    msg.setTimeStamp(0.16275295881046425);
    msg.setSource(61371U);
    msg.setSourceEntity(32U);
    msg.setDestination(22013U);
    msg.setDestinationEntity(206U);
    msg.timeout = 345376230U;

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
    msg.setTimeStamp(0.6029863172912715);
    msg.setSource(52558U);
    msg.setSourceEntity(245U);
    msg.setDestination(14634U);
    msg.setDestinationEntity(133U);
    msg.timeout = 3398939475U;

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
    msg.setTimeStamp(0.7111507492720737);
    msg.setSource(55372U);
    msg.setSourceEntity(128U);
    msg.setDestination(26867U);
    msg.setDestinationEntity(50U);
    msg.sessid = 1054166501U;

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
    msg.setTimeStamp(0.1578452035570217);
    msg.setSource(29490U);
    msg.setSourceEntity(244U);
    msg.setDestination(15705U);
    msg.setDestinationEntity(167U);
    msg.sessid = 4045215006U;

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
    msg.setTimeStamp(0.6779053123173991);
    msg.setSource(31839U);
    msg.setSourceEntity(65U);
    msg.setDestination(3171U);
    msg.setDestinationEntity(187U);
    msg.sessid = 3800262207U;

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
    msg.setTimeStamp(0.751015287217229);
    msg.setSource(37183U);
    msg.setSourceEntity(236U);
    msg.setDestination(48077U);
    msg.setDestinationEntity(236U);
    msg.sessid = 12417789U;
    msg.messages.assign("TEEUJWHSHCUKYUSZWNNLYMMLONWEDNDVVRHFDSQILQNEJQHSJRWDOYRMSQVAOKBXFIMZUBVDVTV");

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
    msg.setTimeStamp(0.29860487891785226);
    msg.setSource(24962U);
    msg.setSourceEntity(232U);
    msg.setDestination(7447U);
    msg.setDestinationEntity(199U);
    msg.sessid = 2094256016U;
    msg.messages.assign("LONENDRIAIYPBJFGCRWDOKYTVJNKNLUDRITRPJXWMBEQVMMNDOGYSSIFFXVBTHVHCCJPANZQAWFWFXCMOBPZHUVYHE");

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
    msg.setTimeStamp(0.39872527777270284);
    msg.setSource(58590U);
    msg.setSourceEntity(251U);
    msg.setDestination(2955U);
    msg.setDestinationEntity(183U);
    msg.sessid = 2545039508U;
    msg.messages.assign("OKJMLXRDOGNWDNWXVBQBXFPYPSAHOJOOHGDDRSKLQURXGZJARFWDBZFVATIVNVOKHGENFMZIMJNVAQULXZLUCQHIQMZYLXPFZDYBDBKMXKATOTBYIUSAHFCWGHWCUBYFKNEWRSGSAEJVSPULNGDVJFILYULYXERKLTENRDYDNECLPHSTGCSRQTZUXQETAH");

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
    msg.setTimeStamp(0.15318080606870887);
    msg.setSource(28712U);
    msg.setSourceEntity(247U);
    msg.setDestination(54345U);
    msg.setDestinationEntity(183U);
    msg.sessid = 48482568U;

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
    msg.setTimeStamp(0.5278778715985791);
    msg.setSource(50341U);
    msg.setSourceEntity(148U);
    msg.setDestination(52788U);
    msg.setDestinationEntity(199U);
    msg.sessid = 4130300061U;

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
    msg.setTimeStamp(0.4006619443757852);
    msg.setSource(16700U);
    msg.setSourceEntity(219U);
    msg.setDestination(34683U);
    msg.setDestinationEntity(74U);
    msg.sessid = 337923677U;

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
    msg.setTimeStamp(0.10374131924579533);
    msg.setSource(39887U);
    msg.setSourceEntity(225U);
    msg.setDestination(53507U);
    msg.setDestinationEntity(158U);
    msg.sessid = 1591729988U;
    msg.status = 207U;

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
    msg.setTimeStamp(0.8699807375971084);
    msg.setSource(53840U);
    msg.setSourceEntity(80U);
    msg.setDestination(56130U);
    msg.setDestinationEntity(41U);
    msg.sessid = 189024643U;
    msg.status = 30U;

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
    msg.setTimeStamp(0.336557504966396);
    msg.setSource(17145U);
    msg.setSourceEntity(114U);
    msg.setDestination(21292U);
    msg.setDestinationEntity(222U);
    msg.sessid = 2986380221U;
    msg.status = 66U;

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
    msg.setTimeStamp(0.923434672982787);
    msg.setSource(29277U);
    msg.setSourceEntity(103U);
    msg.setDestination(17436U);
    msg.setDestinationEntity(192U);
    msg.name.assign("NEZWLQBNZKILYCSWURFIAYOTNFRDGBSJMEGSSHPWKEFHWVTNGUKZDMQKPJZUXZXGROMEJYMOFLPFRCVABLWEIKUWSMUYXUNFQUFYBXHZNJUAIPAGVTQOXNCDCJSLOFQGWQTWDTPHAQPXDNGBTRHPQNGSHIYEUSRGJTWXYYVHJHCWYXBKVZCRJMOAL");

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
    msg.setTimeStamp(0.04847736915093481);
    msg.setSource(28150U);
    msg.setSourceEntity(139U);
    msg.setDestination(31373U);
    msg.setDestinationEntity(105U);
    msg.name.assign("QAXMLSXSJTZBYDSOVQGHILCEYZQYKFEJTYNYHONOMPMWVCDEBLCRZYKTIQDOFTUZAFHBWXVKGIGRMOQHJWRCTRAVSOLDOIKEYDZVFUXCTUZXLXFLEFSUHUXTKBKGQYUONCACJXKNC");

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
    msg.setTimeStamp(0.05256499688240479);
    msg.setSource(9081U);
    msg.setSourceEntity(145U);
    msg.setDestination(45725U);
    msg.setDestinationEntity(240U);
    msg.name.assign("OUQGJRFTFQMKNEVSJFQARPMIQYOLC");

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
    msg.setTimeStamp(0.30834522569604583);
    msg.setSource(35379U);
    msg.setSourceEntity(31U);
    msg.setDestination(36696U);
    msg.setDestinationEntity(164U);
    msg.name.assign("MWBKYFEFZRLXYVMIFCWNUCMOJFHEKYXHYPCMCLLAKBTI");

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
    msg.setTimeStamp(0.015183826915299847);
    msg.setSource(30992U);
    msg.setSourceEntity(66U);
    msg.setDestination(47390U);
    msg.setDestinationEntity(2U);
    msg.name.assign("TABHJAZGMFPNWKJEXIRETDULJUJAXLSQJMXHQJVMHKZIYVIZSWVKGCPJSDBGLYIBUIQTKACHYHTIPEBIQELVAODGIFPBLRYPYAPWUPTLZUVEUACEYOYEGUSWOZOLFNCPOOQNXRZWFAEKCJXVDFQNDQYKZCHCGHTFZGJGQMSDMKAFZRCDIM");

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
    msg.setTimeStamp(0.846366931753085);
    msg.setSource(32953U);
    msg.setSourceEntity(73U);
    msg.setDestination(62978U);
    msg.setDestinationEntity(151U);
    msg.name.assign("FRNWNXIKPGSNGTPZFHZQFPMNDIBMBIVFJEJCDZLQMMKEILICCRSBXZUBEZXKYOOYMMHNZMPSHQGDRHKTAOSWSNASOUIOIVTKOUIFFCDEIRGEKLFEUDPGRJGNYCBUCLGKUYZWTWLULBVNVPXWOVACWQJTJSHTIYHYAHWRHLGGNVQLXEVDRQZAEWA");

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
    msg.setTimeStamp(0.11755147224638973);
    msg.setSource(15269U);
    msg.setSourceEntity(187U);
    msg.setDestination(12236U);
    msg.setDestinationEntity(227U);
    msg.type = 30U;
    msg.error.assign("EXTOZWGISQTGMNADEQOTNDSLGZMAMBDLWRYOYDOGXWJNYCGUSGEYGJDDJIOKMVQIBNMJCQXONFPOBPMKZYENANTMLKRVTESXAREIEAUFP");

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
    msg.setTimeStamp(0.38153202574108536);
    msg.setSource(62884U);
    msg.setSourceEntity(133U);
    msg.setDestination(19295U);
    msg.setDestinationEntity(246U);
    msg.type = 189U;
    msg.error.assign("WZMDOCDDMAWWJPVSKVJWTSDMXTDZFSOBOFHQMSHTBVBYARYEZJXFQZYALARHIHDEVYEGAWSMCMQUHEOQRPDJEXRGKNNOGFRGCJMCCHHFIHTUYLBJOFBPIQEUHYBEXONUZKKTQCKVFXPLUNHNJXBIBXRKZFLPYUJRATRMMJMQGPLWGPZCDWPFKYYAIQRUNRGPEXBDQISKWXIQTJDAVZLCIALFTVGGYVGOEVCOUPUTSBNLEAWNOSWLXIZNSLS");

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
    msg.setTimeStamp(0.2840404523918426);
    msg.setSource(26806U);
    msg.setSourceEntity(252U);
    msg.setDestination(44807U);
    msg.setDestinationEntity(7U);
    msg.type = 93U;
    msg.error.assign("GXKAWHYPYKRUSNNHOGMPZAFCGJCPDRSOQJTWVSNQPWLUEDZNXBSZZMCLFSJEWVTLQNQTMKJTVRJDJIXLREOWDJEKAFKKSYDDZGVEPUOXWGIJSNUGNYWHCEHOIYWWLPMFLEXTHIMTJLMXHJVBELIYCGKISSRRYQBIVUQEZQBCTFDROUQPURQUOFONYIUBPMXILQNAEIHZXDMHXPUCAM");

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
    msg.setTimeStamp(0.8021330929074412);
    msg.setSource(24652U);
    msg.setSourceEntity(186U);
    msg.setDestination(8853U);
    msg.setDestinationEntity(150U);
    msg.seq = 31754U;
    msg.sys_dst.assign("LADYAARXWDVRCHPTGPRZEIAKXMHXYWYALZSRHXUFFGPCFKEXWOVSCVIPQEQXFHOAKWVJOUINRTUGDLSEQWZFVDFQAMMMNNZNCSEETUNGQOMNBYYPQXKWSSBVUZYGIBJOUDIIECW");
    msg.flags = 228U;
    const char tmp_msg_0[] = {6, 83, 13, 71, -79, 40, 41, 101, 48, -81, 33, 112, 14, 115, 64, -13, -91, -105, -78, -60, -111, -16, 105, 121, 16, 4, -110, -20, 103, -98, 95, 107, -11, 82, -95, -16, 11, -14, -114, 22, -47, 92, -91, -128, -118, 7, 52, -69};
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
    msg.setTimeStamp(0.9142042587607717);
    msg.setSource(46314U);
    msg.setSourceEntity(5U);
    msg.setDestination(28322U);
    msg.setDestinationEntity(156U);
    msg.seq = 58239U;
    msg.sys_dst.assign("UCVEOXHBESFGKDWEFRVKPIXZAIKTQYIVFLFKUQSPBYTSZNQDMYWJRQYECLGPOZAIOYTLEFLVMAJIFXTUNVWBKXCWSYTJMHHLKMIOPCCHYKQJSWXVANQXHIJUUMKXJTRCTLAGRNWVLRPEXPSOPPUMMWBAWPDEVOFHBOZIDATTNMURDVFCHUGYSCUJJUEBBXRYXSRGBDNDMNDJEQKZOGHZGSJSQCIRRGNFAZLBTMILEONPQGVWGWAHQ");
    msg.flags = 156U;
    const char tmp_msg_0[] = {-55, 105, 117, -82, -104, 109, -27, -103, 75, 46, 96, 57, -110, -30, -128, -40, 1, 15, -53, -15, 102, 5, 79, 112, -45, 27, 106, -75, -26, -28, -61, 48, 47, -98, 103, 42, -20, 15, -128, 120, 76, -65, 108, 1, -71, 62, 78, -89, 112, -101, 57, -18, 78, 77, 122, 72, -86, 113, -40, -74, 112, 88, -97, -109, -63, -49, -38, 16, 41, 88, -98, -126, 69, -14, 46, -30, 22, -21, 75, -105, 112, 52, -36, -104, 25, -104, -60, -21, 42, -10, -80, 32, -80, 57, -67, -37};
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
    msg.setTimeStamp(0.9038774774204114);
    msg.setSource(49138U);
    msg.setSourceEntity(111U);
    msg.setDestination(43371U);
    msg.setDestinationEntity(190U);
    msg.seq = 21275U;
    msg.sys_dst.assign("INBQZJZGKSRYMIFOJWUEWLICOWPWMPJPQFMHTANITZJHKEELYBRPTZETRMLNYHFIPDDCAVMXJOXLDOQBOAJCSSGYLENATYWIUXVNZGADCAQYKZVCROXVBUFBBBVTWLXCUMKNMQTCTCPRQUKIQDIHFGKKECUII");
    msg.flags = 12U;
    const char tmp_msg_0[] = {70, 7, 42, -28, 57, 54, 88, 95, -15, -96, -73, -80, -63, 122, 51, -8, -50, 99, -46, 53, 8, 121, -81, 38, -71, 34, -65, -105, -99, -60, -59, -71, -22, 6, 25, 66, -125, 0, -23, -9, -73, -46, 72, 48, -94, -72, -93, -68, -36, -15, 63, 11, -40, 105, -87, -100, 30, 29, 60, -46, 22, 19, 12, -20, -69, 81, -67, -44, 110, 34, 108, 44, -92, 74, 50, 61, 85, -114, -24, 34, -62, 25, -128, -22};
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
    msg.setTimeStamp(0.9201059064139632);
    msg.setSource(41284U);
    msg.setSourceEntity(199U);
    msg.setDestination(34478U);
    msg.setDestinationEntity(128U);
    msg.sys_src.assign("VBSFJWFOOSIVTQGPOUSVYIVEKJUNYMCLZHRXEWXCXCXATSJYRBCHVZPVWJHKZDBBIZHTLTZRDKGDADSEJXLSCPREYKMIOZANTFLKNWXHPNWFQHVUDZXMHUQDDIQYMGNKJDGFAOWRAAXGBR");
    msg.sys_dst.assign("WWLKHZIKVLSQPHLOUZEDLIFHNUTFNTYTNOEBKSKJJQEIOYRAMEUG");
    msg.flags = 219U;
    const char tmp_msg_0[] = {77, -79, -8, 96, -25, 6, 125, -74, -106, 5, 88, -92, 32, -50, 92, 3, 119, 97, -42, -123, -118, 99, -74, 126, -38, -85, 87, 35, -72, -68, -52, 75, -12, 102, -109, 46, -63, 123, 77, 118, 16, 5, -45};
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
    msg.setTimeStamp(0.817127303929695);
    msg.setSource(42510U);
    msg.setSourceEntity(200U);
    msg.setDestination(22959U);
    msg.setDestinationEntity(173U);
    msg.sys_src.assign("TSXNDBUAPMIEKBILGABVTAOKVEVQALIIGLKQODCELGWRKGSVPHNWJLBWMUMMJMQDNHOWAHKXHZVTZYNSCFEEZYTJZRHKYDNAGUFQWNKQGRWLFEQRPFUVUFUTAYSQMCJU");
    msg.sys_dst.assign("NODHBNWGYZONVXCXBUSFFBRHCTZMZZMMOMCBOHBSALREIZQQLRCSDGYIHXRMMFEJLXWVUXKBDNTDZHZPAQEPHAXPDJJOWGASYCGSIXKKENTICYFEAQKCSNBMMQYJGNLYIQFDTNPNGOREHTAUUSLEYJLWPJOZJYWLVXAVVDCYPKVRRCGUSZTHQHKWMSKSIBLDGAJPOTCUPZMW");
    msg.flags = 66U;
    const char tmp_msg_0[] = {50, -94, -26, 126, -113, -108, -73, -2, 34, 68, 96, -127, 117, -84, -31, 113, -2, -23};
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
    msg.setTimeStamp(0.06388532485029075);
    msg.setSource(20834U);
    msg.setSourceEntity(199U);
    msg.setDestination(22409U);
    msg.setDestinationEntity(149U);
    msg.sys_src.assign("PQGKWKHKTKPHLUFZDMMNXXAQSXSUCBBCWRJKEWYVYFJLIYIHJWCXYQJJLZJPMXQRTEMRGISGCHIQVPNLTONDMHGHBORJGHVZAFK");
    msg.sys_dst.assign("JOZVRCPYRQCIIHLWPTBBNQZGIHNJKFIUAEVJUPTUALFCHZDRMGIWAOZIMGYNUWYPFDSWRYJAWBGCFHWSTOGFOKDYVWIHROGBQCCQYRSEPVRBZLIEXWDMCXAVMIBUNLPLFKMCRAQQEVMSOKXUSHVSGKBJVFUWXEPTMONYQFZOLZXDGDEHDJECKZONHUKMPMS");
    msg.flags = 53U;
    const char tmp_msg_0[] = {-71, 5, 122, -102, 27, -17, -14, 77, 45, -60, -67, -74, -76, 97, -113, 49, 122, -26, -58, 29, -66, -127, 7, -54, 83, 29, -98, 113, -26, 74, 31, -97, -123, -57, 47, -76, 92, -120, -112, 2, 58, -89, 86, 125, -53, -121, 3, 38, -56, -32, 65, -97, -47, 30, -17, -124, 46, -67, -95, 99, 59, -29, -99, -7, -17, -13, -122, -17, -122, 33, 70, 21, 58, 103, 82, -40, 122, -78, -66, -18, -97, 76, 17, 32, -79, 95, -44, -101, 83, 88, 8, 81, -22, -120, 62, 111, 4, 25, 100, -55, -40, 97, -52, -23, -119, 53, -122, 44, 19, 31, -118, 52, -52, -107, -92, -70, 103, 103, -95, -104, 61, 11, 112, -61, -121, 22, 21, -120, 99, 113, -41, 52, -28, 6, -102, 94, 121, 48, -97, -101, 51, -29, -49, -94, 77, 27, 114, 6, -18, -89, 66, 40, 41, -115, 22, 3, 19, 85, -104, 8, -41, 96, 60, -51, -97, -100, -125, 111, -91, -30, 124, 41, -102, 5, 110, -33, 20, -78, -37, -7, -108, 85, 57, 121, 23, 64, 32, 46, 88, -46, -83, -14, -93, -106, 18, -15, 61, 31, 62, 24, -29, -106, -106, 69, 29, 119, -52, -44, -118, 117, 57, -93, -106, 76, -2, -100, 39, -98, -91, 42, 38, -65, -79, 0, 86, 106, 32, 4, -13, 10, 77, -74, -64, -65, 17, -36, -127, 69, -15};
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
    msg.setTimeStamp(0.5628692896148116);
    msg.setSource(39610U);
    msg.setSourceEntity(196U);
    msg.setDestination(43651U);
    msg.setDestinationEntity(123U);
    msg.seq = 23108U;
    msg.value = 183U;
    msg.error.assign("LYOVZCEZKGIDUUHYFSFDVWKVBQEPKVCQYLMEHUT");

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
    msg.setTimeStamp(0.1842721647526263);
    msg.setSource(36004U);
    msg.setSourceEntity(197U);
    msg.setDestination(17714U);
    msg.setDestinationEntity(5U);
    msg.seq = 29375U;
    msg.value = 207U;
    msg.error.assign("AQEJOLHKVFRIKZZLGIDKHKDRALSIBZTTQLSCOLWIDUMYMXBVBTOPFDEOPZOPNIFRIWNTCAXUZOMMFCIEGYGGQSGTTAAUKFLWMKMDVRGSFDNQIQUGCSYXHSNUNDQAR");

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
    msg.setTimeStamp(0.31450203022285184);
    msg.setSource(52732U);
    msg.setSourceEntity(222U);
    msg.setDestination(50529U);
    msg.setDestinationEntity(69U);
    msg.seq = 13849U;
    msg.value = 117U;
    msg.error.assign("GUDUFKMUSGIKHNODLPQMDZVYNXATWISNCYOPJRFIUDVEEGZEFEEMSOMATVBBFLKLWICHESVMFAGGZRAPLLQIKSPQCBTVPDIUJYRWQ");

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
    msg.setTimeStamp(0.2668529271159983);
    msg.setSource(17376U);
    msg.setSourceEntity(181U);
    msg.setDestination(52063U);
    msg.setDestinationEntity(21U);
    msg.seq = 28780U;
    msg.sys.assign("XEEDTHPDPPDGEPLPMFIZZRQYXCIOENKZGUUAVLVCGALGBPEFUWFJRKCCJOZTRPJMIASXYMFDBIQVUTRNLHSTOYGZJHOQIJMMDTUSOUXAVXCWLNYMZKMNWBXKSTBQUEAKFQFBSTSKODNLWZRHDEGXCKIVGJPAHJZXEWYNULQRNNWOJSMUSTPXIVQE");
    msg.value = 0.11644783455572971;

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
    msg.setTimeStamp(0.030667260512096672);
    msg.setSource(48084U);
    msg.setSourceEntity(230U);
    msg.setDestination(6227U);
    msg.setDestinationEntity(10U);
    msg.seq = 10573U;
    msg.sys.assign("RUFVJIVRZBEWBARPCNRLHGTLMYJPOHZWFKWCMSNUHXZGMICVRWDVQBYSBLZXBIATEJFIJPEZXOAQQKQRXPOPJQQXBCHXOEXUWJMAMAFBLAACDPPMDZDVYFETGXLGAJSGIYDAUSJJONYSVNWEHDSOSSVCXEYDHUIPQPVNUMLHTRFYUPIHIYTQDMRWGNVMLMDWBKCODRUCXYKANEKVGCZTTBIKZOONGELQNQR");
    msg.value = 0.1699987175040707;

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
    msg.setTimeStamp(0.9147124059377912);
    msg.setSource(32232U);
    msg.setSourceEntity(211U);
    msg.setDestination(23325U);
    msg.setDestinationEntity(104U);
    msg.seq = 37794U;
    msg.sys.assign("KOYMCOAHVCICBOOYRDLEXFZYLMBWXRDAEDGOKGBYCPJPJHTPFBRYILWQEUBSAHHVPFESQDVHBVDJTAUKLTOZWAZIP");
    msg.value = 0.31450696107643505;

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
    msg.setTimeStamp(0.15172252000673536);
    msg.setSource(27886U);
    msg.setSourceEntity(111U);
    msg.setDestination(14857U);
    msg.setDestinationEntity(245U);
    msg.seq = 53522U;
    msg.sys_dst.assign("KXPGRKPQBMPFIBUEJUNZSLXLXLZSEBOKWXSMHHVVEAOSBNJOFCVWBDDZHTFZFYDWPOIQALDDLDGRNYWHAMPAJAQQXBZHGXWKHGZWRJMUBMATIFNMXKUFGBOXVDJMRZGDKEQHFUXROLMVYZSOGJTUSBRAJDAOLK");
    msg.timeout = 0.39757846709762457;

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
    msg.setTimeStamp(0.7321025764418144);
    msg.setSource(4840U);
    msg.setSourceEntity(204U);
    msg.setDestination(29452U);
    msg.setDestinationEntity(174U);
    msg.seq = 10830U;
    msg.sys_dst.assign("KCAONFNVFYDBRXQNMRJQGCKUQUIBDHBMDOIRYJWLUBKXWLTHEVMZIFOMJHYJZWTUGCWPYVWGCMPBTPLFEACYVJXODMOHJYSFDEPKOYLFFQMJKIXZOHLEOVGPNKVDAADRKUIGNXBDUKUCMELLAWRVSSIWASARQRMAJEKQKIHSWPNCBGBTI");
    msg.timeout = 0.7225509289115567;

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
    msg.setTimeStamp(0.7873532824274133);
    msg.setSource(36403U);
    msg.setSourceEntity(239U);
    msg.setDestination(35771U);
    msg.setDestinationEntity(245U);
    msg.seq = 36085U;
    msg.sys_dst.assign("EVMKWVXXRVHGVUWLBAUHNFQJNABPJDJYHGTMJTLCYDHMBTITEAOUULJQAZPWFZVSKERWGKCGYPODJBAZWYTQQOMGAIYFNOCQIPTQYXUWFSMMSWXSBADXLRUDCOSVDFXBHWCXIRPWSYBZSENVGKDQVLRIALZVFIZBLHBSIEHYDCOTIZKITGJECTXUVYNJI");
    msg.timeout = 0.7119361152367687;

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
    msg.setTimeStamp(0.9808413308051227);
    msg.setSource(1723U);
    msg.setSourceEntity(124U);
    msg.setDestination(40356U);
    msg.setDestinationEntity(101U);
    msg.action = 192U;
    msg.longain = 0.9622736679121949;
    msg.latgain = 0.5249915533246576;
    msg.bondthick = 3208098454U;
    msg.leadgain = 0.8465151652355254;
    msg.deconflgain = 0.8388636965224661;

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
    msg.setTimeStamp(0.37285785558029627);
    msg.setSource(45285U);
    msg.setSourceEntity(134U);
    msg.setDestination(38767U);
    msg.setDestinationEntity(37U);
    msg.action = 154U;
    msg.longain = 0.4762977671652827;
    msg.latgain = 0.2066872114030185;
    msg.bondthick = 216660677U;
    msg.leadgain = 0.2684026352103682;
    msg.deconflgain = 0.9256677098016471;

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
    msg.setTimeStamp(0.08248601497792252);
    msg.setSource(1126U);
    msg.setSourceEntity(163U);
    msg.setDestination(51098U);
    msg.setDestinationEntity(98U);
    msg.action = 32U;
    msg.longain = 0.7507774635688166;
    msg.latgain = 0.5823481731677205;
    msg.bondthick = 2186105127U;
    msg.leadgain = 0.9693759604433532;
    msg.deconflgain = 0.83354719102011;

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
    msg.setTimeStamp(0.4260660037718351);
    msg.setSource(38163U);
    msg.setSourceEntity(218U);
    msg.setDestination(4926U);
    msg.setDestinationEntity(82U);
    msg.err_mean = 0.8738601078299172;
    msg.dist_min_abs = 0.38416920850846914;
    msg.dist_min_mean = 0.24758158058727087;

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
    msg.setTimeStamp(0.7203049013613563);
    msg.setSource(63094U);
    msg.setSourceEntity(80U);
    msg.setDestination(50890U);
    msg.setDestinationEntity(50U);
    msg.err_mean = 0.6789439636557209;
    msg.dist_min_abs = 0.9245586869126701;
    msg.dist_min_mean = 0.09353192334413107;

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
    msg.setTimeStamp(0.7548601183262839);
    msg.setSource(47019U);
    msg.setSourceEntity(195U);
    msg.setDestination(4309U);
    msg.setDestinationEntity(5U);
    msg.err_mean = 0.6763426781601992;
    msg.dist_min_abs = 0.2819823992188125;
    msg.dist_min_mean = 0.2944662849075924;

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
    msg.setTimeStamp(0.14789667248796146);
    msg.setSource(27305U);
    msg.setSourceEntity(79U);
    msg.setDestination(21836U);
    msg.setDestinationEntity(164U);
    msg.action = 228U;
    msg.lon_gain = 0.40020512384475904;
    msg.lat_gain = 0.33498206565556643;
    msg.bond_thick = 0.22537016730523118;
    msg.lead_gain = 0.33698247317385277;
    msg.deconfl_gain = 0.7706411658181114;
    msg.accel_switch_gain = 0.4924408863866795;
    msg.safe_dist = 0.25868972287500924;
    msg.deconflict_offset = 0.8916271582962734;
    msg.accel_safe_margin = 0.012680151426633257;
    msg.accel_lim_x = 0.6613664720953799;

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
    msg.setTimeStamp(0.0890746325213927);
    msg.setSource(3904U);
    msg.setSourceEntity(234U);
    msg.setDestination(48267U);
    msg.setDestinationEntity(133U);
    msg.action = 22U;
    msg.lon_gain = 0.16997242073083207;
    msg.lat_gain = 0.020426394062333042;
    msg.bond_thick = 0.4424581600883325;
    msg.lead_gain = 0.6678714553887645;
    msg.deconfl_gain = 0.7369694280553598;
    msg.accel_switch_gain = 0.8631154995935172;
    msg.safe_dist = 0.0303615971024479;
    msg.deconflict_offset = 0.064167706780065;
    msg.accel_safe_margin = 0.05651294257761674;
    msg.accel_lim_x = 0.7840150736108166;

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
    msg.setTimeStamp(0.6910047868145389);
    msg.setSource(23586U);
    msg.setSourceEntity(91U);
    msg.setDestination(44905U);
    msg.setDestinationEntity(96U);
    msg.action = 227U;
    msg.lon_gain = 0.06547180470026637;
    msg.lat_gain = 0.7068207145275684;
    msg.bond_thick = 0.5117478829447335;
    msg.lead_gain = 0.32119008898631685;
    msg.deconfl_gain = 0.5015864383583093;
    msg.accel_switch_gain = 0.43405282603800244;
    msg.safe_dist = 0.156192121247137;
    msg.deconflict_offset = 0.6114955721132286;
    msg.accel_safe_margin = 0.7410786796500576;
    msg.accel_lim_x = 0.2131366314253904;

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
    msg.setTimeStamp(0.7590268478600206);
    msg.setSource(47675U);
    msg.setSourceEntity(106U);
    msg.setDestination(52959U);
    msg.setDestinationEntity(164U);
    msg.type = 147U;
    msg.op = 243U;
    msg.err_mean = 0.15548660557632243;
    msg.dist_min_abs = 0.6895466108984646;
    msg.dist_min_mean = 0.02745241345211391;
    msg.roll_rate_mean = 0.07159955936936357;
    msg.time = 0.8365838162607088;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 27U;
    tmp_msg_0.lon_gain = 0.37985813492282205;
    tmp_msg_0.lat_gain = 0.7650786378733554;
    tmp_msg_0.bond_thick = 0.46631172732286497;
    tmp_msg_0.lead_gain = 0.1443163839283116;
    tmp_msg_0.deconfl_gain = 0.8307368101908345;
    tmp_msg_0.accel_switch_gain = 0.43888798925731587;
    tmp_msg_0.safe_dist = 0.23451230707975113;
    tmp_msg_0.deconflict_offset = 0.7156886301645324;
    tmp_msg_0.accel_safe_margin = 0.030831878772897947;
    tmp_msg_0.accel_lim_x = 0.7406971096142068;
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
    msg.setTimeStamp(0.07169202360410998);
    msg.setSource(25212U);
    msg.setSourceEntity(175U);
    msg.setDestination(19108U);
    msg.setDestinationEntity(74U);
    msg.type = 247U;
    msg.op = 66U;
    msg.err_mean = 0.09553710069575772;
    msg.dist_min_abs = 0.09750387282035344;
    msg.dist_min_mean = 0.7218489838841103;
    msg.roll_rate_mean = 0.9664270301853961;
    msg.time = 0.502765429096428;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 101U;
    tmp_msg_0.lon_gain = 0.5051078300713504;
    tmp_msg_0.lat_gain = 0.13886094941574;
    tmp_msg_0.bond_thick = 0.22857364472827058;
    tmp_msg_0.lead_gain = 0.3231244644539143;
    tmp_msg_0.deconfl_gain = 0.5363525630075248;
    tmp_msg_0.accel_switch_gain = 0.4199423171247396;
    tmp_msg_0.safe_dist = 0.6786317464763723;
    tmp_msg_0.deconflict_offset = 0.5769767456209322;
    tmp_msg_0.accel_safe_margin = 0.9708182491702878;
    tmp_msg_0.accel_lim_x = 0.9742564997755646;
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
    msg.setTimeStamp(0.16718724323314804);
    msg.setSource(62433U);
    msg.setSourceEntity(210U);
    msg.setDestination(50275U);
    msg.setDestinationEntity(132U);
    msg.type = 69U;
    msg.op = 176U;
    msg.err_mean = 0.3781561473091466;
    msg.dist_min_abs = 0.1637060411195388;
    msg.dist_min_mean = 0.9188828178336266;
    msg.roll_rate_mean = 0.3750287519683061;
    msg.time = 0.8137721642213456;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 90U;
    tmp_msg_0.lon_gain = 0.6347461838229619;
    tmp_msg_0.lat_gain = 0.6756315876527991;
    tmp_msg_0.bond_thick = 0.664817715907581;
    tmp_msg_0.lead_gain = 0.16288085607752067;
    tmp_msg_0.deconfl_gain = 0.27786257227218336;
    tmp_msg_0.accel_switch_gain = 0.7557300226307623;
    tmp_msg_0.safe_dist = 0.9630720528796263;
    tmp_msg_0.deconflict_offset = 0.30057735191153034;
    tmp_msg_0.accel_safe_margin = 0.5824431216576187;
    tmp_msg_0.accel_lim_x = 0.533014570078875;
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
    msg.setTimeStamp(0.46911246040240706);
    msg.setSource(37133U);
    msg.setSourceEntity(243U);
    msg.setDestination(14797U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.43325159818499037;
    msg.lon = 0.011780307572547999;
    msg.eta = 1633143703U;
    msg.duration = 39919U;

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
    msg.setTimeStamp(0.6411609715968483);
    msg.setSource(55180U);
    msg.setSourceEntity(100U);
    msg.setDestination(25965U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.7461072696590848;
    msg.lon = 0.4928552080055759;
    msg.eta = 3923610185U;
    msg.duration = 26429U;

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
    msg.setTimeStamp(0.4489260960732847);
    msg.setSource(15299U);
    msg.setSourceEntity(244U);
    msg.setDestination(3718U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.9710738916843142;
    msg.lon = 0.2454032092832057;
    msg.eta = 659632528U;
    msg.duration = 54558U;

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
    msg.setTimeStamp(0.9903651057994158);
    msg.setSource(34810U);
    msg.setSourceEntity(130U);
    msg.setDestination(56179U);
    msg.setDestinationEntity(45U);
    msg.plan_id = 11893U;

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
    msg.setTimeStamp(0.5793086102597187);
    msg.setSource(54384U);
    msg.setSourceEntity(105U);
    msg.setDestination(35173U);
    msg.setDestinationEntity(130U);
    msg.plan_id = 52132U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.19002851210944482;
    tmp_msg_0.lon = 0.8313231476032389;
    tmp_msg_0.eta = 4203930160U;
    tmp_msg_0.duration = 56140U;
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
    msg.setTimeStamp(0.17803764534885058);
    msg.setSource(2190U);
    msg.setSourceEntity(58U);
    msg.setDestination(3043U);
    msg.setDestinationEntity(187U);
    msg.plan_id = 22490U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.053898130798538335;
    tmp_msg_0.lon = 0.0146660202561536;
    tmp_msg_0.eta = 2265580596U;
    tmp_msg_0.duration = 49292U;
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
    msg.setTimeStamp(0.822681159794826);
    msg.setSource(10087U);
    msg.setSourceEntity(69U);
    msg.setDestination(41257U);
    msg.setDestinationEntity(247U);
    msg.type = 122U;
    msg.command = 228U;
    msg.settings.assign("OKOHWNKDSAJQAJIIJMEZTDY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45900U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.16667870036883836;
    tmp_tmp_msg_0_0.lon = 0.6709941068145094;
    tmp_tmp_msg_0_0.eta = 3121494552U;
    tmp_tmp_msg_0_0.duration = 32865U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IJFMDANVFOASXLAAKGHKDWSNEFQGZBCTKPRSVGWOIQAGLZCSLUEHPFCTYYEBFMORVULUEFBRKMQTIEZVERYERWLHUMCGCLUNBQCXROJ");

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
    msg.setTimeStamp(0.0409106155913076);
    msg.setSource(63518U);
    msg.setSourceEntity(88U);
    msg.setDestination(63413U);
    msg.setDestinationEntity(102U);
    msg.type = 158U;
    msg.command = 56U;
    msg.settings.assign("CCDYTIFSQAAFYQEGKXAEIQNSLEFHMOTSYTWVDDPEXHOGDMXJPHPPWRWOMEFQGZUAATUWILAJZZQWSICOJWTOMKZWJNYKDLHULLMAEVPVQNIEUXUOXMPCLYHYCJTNMOUSGDKADTOZFRFCRLQHICHPQUNKKBGVBURYJSNKRZBVBRXBSOHJNAFJIVLTXJCTXZBSGRCBBVGEQZND");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27332U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KUGRGTMVMCBTQXMAINFNINYPMGSSRFWRDOXWMACJPRWKDHFSBIVLIJZNECHXQJOFYIYROXLQZNASOOPCXGKCVKURYRVREPFVWLDATAHZSZLDYLEQITXIDHJ");

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
    msg.setTimeStamp(0.5874859935502816);
    msg.setSource(13933U);
    msg.setSourceEntity(98U);
    msg.setDestination(32726U);
    msg.setDestinationEntity(75U);
    msg.type = 222U;
    msg.command = 210U;
    msg.settings.assign("BTUSSKETDZWYTXUXVNNMGIHVZXYGZFDIRKCZVFHCFXBQGABEVZCXIVTKQRBWRNJPOPUCSIEDEURRTVLBZHOBCXQLUZNAWCWLKX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 3456U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7445143524485197;
    tmp_tmp_msg_0_0.lon = 0.10155012341488456;
    tmp_tmp_msg_0_0.eta = 2543811655U;
    tmp_tmp_msg_0_0.duration = 24591U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VXEUETJXUHHHAYYEDENIPSCLNODDBLAMPANUQFWGHZOJLRCIOYJAIJGVFIWFTHXMLWNZFYLKRUDQVG");

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
    msg.setTimeStamp(0.40707995169150313);
    msg.setSource(32334U);
    msg.setSourceEntity(158U);
    msg.setDestination(64171U);
    msg.setDestinationEntity(8U);
    msg.state = 5U;
    msg.plan_id = 31519U;
    msg.wpt_id = 127U;
    msg.settings_chk = 44927U;

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
    msg.setTimeStamp(0.5285633877540311);
    msg.setSource(13254U);
    msg.setSourceEntity(0U);
    msg.setDestination(13751U);
    msg.setDestinationEntity(92U);
    msg.state = 208U;
    msg.plan_id = 42800U;
    msg.wpt_id = 252U;
    msg.settings_chk = 12650U;

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
    msg.setTimeStamp(0.22949308706074245);
    msg.setSource(29035U);
    msg.setSourceEntity(23U);
    msg.setDestination(12400U);
    msg.setDestinationEntity(210U);
    msg.state = 165U;
    msg.plan_id = 23694U;
    msg.wpt_id = 124U;
    msg.settings_chk = 38423U;

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
    msg.setTimeStamp(0.2425339771427394);
    msg.setSource(40338U);
    msg.setSourceEntity(188U);
    msg.setDestination(62281U);
    msg.setDestinationEntity(132U);
    msg.uid = 35U;
    msg.frag_number = 225U;
    msg.num_frags = 243U;
    const char tmp_msg_0[] = {15, 122, 12, -38, -113, -70, 4, 11, -95, -115, 57, -95, -73, 60, 75, 87, 22, -94, -82, 92, 85, -1, -98, -68, -42, 28, 61, 101, 17, 44, -109, 34, 81, 0, 102, -23, 64, -89, -29, 88, 49, -106, 103, 64, 70, -53, -58, 52, 59, 84, -1, -86, -29, -59, 67, -107, 124, 118, 59, -114, 90, -111, 26, -36, 21, 27, 17, -101, 83, 9, -98, -121, -18, -93, -64, 13, 97, 83, -86, 67, 46, -120, -118, -91, -103, 26, -51, -127, -54, -118, -73, -102, 125, -90, 10, 91, -112, -123, 61, 16, -114, -22, 109, -121, 9, 60, 101, 22, -15, 47, -72, -112, -35, 32, -30, 57, 21, -127, 55, 11, -94};
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
    msg.setTimeStamp(0.741927361122946);
    msg.setSource(46945U);
    msg.setSourceEntity(207U);
    msg.setDestination(17127U);
    msg.setDestinationEntity(212U);
    msg.uid = 157U;
    msg.frag_number = 204U;
    msg.num_frags = 32U;
    const char tmp_msg_0[] = {-58, -87, 123, -101, 51, 21, -59, -58, -103, -9, 97, -16, 20, -3, -97, 12, 21, 65, 121, 33, 34, 101, -25, 111, -97, 122, -43, 67, -82, 47, 6, -107, 7, -63, 90, -92, -62, 0, -32, -119, -12, 107, 17, 68, -20, -75, -124, 114, -93, -103, 116, -21, 16, 103, 10, 65, 21, 41, 44, -2, -100, -22, -80, 80, -79, 8, -34, -82, -91, -127, 45, 21, -98, -64, 70, -88, -63, -108, 31, -114, -11, 51, -104, 107, 107, 50, 30, 122, 29, 69, 124, -6, -7, -73, 81, 73, -25, -86, -53, 99, 43, -119};
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
    msg.setTimeStamp(0.4998501446222714);
    msg.setSource(18776U);
    msg.setSourceEntity(145U);
    msg.setDestination(43764U);
    msg.setDestinationEntity(210U);
    msg.uid = 74U;
    msg.frag_number = 124U;
    msg.num_frags = 73U;
    const char tmp_msg_0[] = {-112, 22, -30, -84, -24, 112, -3, -1, 42, 23, 47, 15, -53, 81, 124, -8, -92, 4, 61, 30, 49, 49, -104, 126, 19, 3, 15, -114, 119, 83, -99, 89, -11, 8, 4, -80, 120, -53, -79, -88, 91, 10, 79, -34, -89, 116, 79, -21, 26, -24, -25, 73, -57, 111, -103, -38, 50, -9, 91, -118, -97, -69, -20, -75, -23, -64, 75, -125, 64, 86, 64, 7, -113, -122, -88, -56, 57, 92, 70, -61, 55, -13, 8, -1, -96, 125, 3, -54, 14, 115, -23, -126, -24, -90, 93, 63, -35, -78, -53, -90, -112, -87, 19, -32, 25, 30, 44, 26, -69, -80, 44, 56, 17, -70, -55, 78, -125, 26, 67, 43, 24, 26, 90, -4, -68, -55, 31, 92, 87, -86, 49, -100, 98, 96, 91, -117, -105, -106, 39, -111, 34, 50, 113, -9, -123, 51, -21, -62, -7, -52, 121, -42, -86, -5, 123, -34, 48, -56, 86, 93, -13, 47, 58, -21, 53, -81, -115, 60, 1, 114, 14, -84, -43, -45, 44, 101, 70, 118, 38, -29, -16, 4};
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
    msg.setTimeStamp(0.3910538952113898);
    msg.setSource(338U);
    msg.setSourceEntity(156U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(135U);
    msg.content_type.assign("JEARPOBEFVAAPXYRVQCKCWOQEWEHMQGOBZJXGKXPMKRVQHNBPMXZLJYAPWGMLEWTQMZDQCQJTLFRVIMNDVJOEIDZDEITZGOSUKJAZDYFWF");
    const char tmp_msg_0[] = {-101, 66, -98, -91, 95, -96, -110, -113, -75, -69, 83, -60, -13, 55, 94, -128, 98, 33, 57, 4, 56, 33, -6, -5, 107, -31, -127, 28, -103, -122, 107, -26, 8, 113, 114, 76, -96, -4, 124, 116, 63, -59, -112, 28, 27, -98, -50, 94, -103, 93, -126, -108, -81, -38, 37, 62, -59, 48, -12, -105, 10, -49, -77, 44, -56, 37, -84, -122, -61, -85, 61, -82, -68, 99, -16, 77, 66, 99, 6, -100, 123, 57, 14, 52, -97, -128, -82, 21, -52, 36, -109, 110, 47, -126, 25, -52, -104, -120, -5, -98, -102, 121, -4, -90, 72, -28, -6, 32, -70, 88, -36, -10, -120, 19, -112, -64, -39, -58, -49, 95, -61, -22, -94, 94, -101, -63, 11, -66, -49, 40, 59, -85};
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
    msg.setTimeStamp(0.902933777339498);
    msg.setSource(50674U);
    msg.setSourceEntity(188U);
    msg.setDestination(61101U);
    msg.setDestinationEntity(204U);
    msg.content_type.assign("JFBYDCTEQUPWKCFNNXJGAJXHDGHLBNWYPUQAZI");
    const char tmp_msg_0[] = {11, 56, -23, -104, 33, 75, 45, -61, -62, -59, 0, 7, -79, -46, -65, -94, 7, 123, -74, 32, -42, 50, -66, -37, -8, 98, 11, -125, -93, -101, -53, 104, -104, 73, 87, -47, -106, -38, 30, 81, -92, 117, -113, -122, -55, -15, -33, 79, 60, -76, 119, -82, -114, 80, -71, -32, -44, -38, -96, 91, -66, 123, -72, -13, 126, 47, 32, -12, -128, -24, 60, 84, -128, 89, -13, 95, 80, -51, -85, -25, 83, 27, -14, 25, 59, 40, 0, -116, 121, 69, -102, 82, 41, -40, -122, -54, -37, -53, -54, 84, 101, 52, -88, 118, 56, -108, 113, 78, -102, -32, -66, -87, -84, 104};
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
    msg.setTimeStamp(0.29404838892664853);
    msg.setSource(31991U);
    msg.setSourceEntity(127U);
    msg.setDestination(50251U);
    msg.setDestinationEntity(230U);
    msg.content_type.assign("WJYSZSRBGFYALCRYRGNBRDNXDQQYIOVKB");
    const char tmp_msg_0[] = {-43, 32, -13, 16, 94, 92, -104, -115, -29, -58, 42, -95, -99, -106, 18, 91, 37, -88, -38, 121, -107, -92, -5, 97, -2, -12, 0, -27, 70, 73, -65, -12, -52, 83, 28, -119, -28, -81, -53, 2, 96, 68, -32, 88, -72, 43, -16, -5, 116, 64, -42, -89, 33, 105, 77, -71, -127, -31, 66, 10, 1, -110, 7, -50, -84, -122, -106, 55, -79, -75, -55};
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
    msg.setTimeStamp(0.6866593866073021);
    msg.setSource(58074U);
    msg.setSourceEntity(97U);
    msg.setDestination(39312U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.6935860796648553);
    msg.setSource(11875U);
    msg.setSourceEntity(193U);
    msg.setDestination(55513U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.08048647175347023);
    msg.setSource(13353U);
    msg.setSourceEntity(53U);
    msg.setDestination(41692U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.04752679695565387);
    msg.setSource(32360U);
    msg.setSourceEntity(140U);
    msg.setDestination(38035U);
    msg.setDestinationEntity(81U);
    msg.target = 60500U;
    msg.bearing = 0.7371980855434983;
    msg.elevation = 0.026722030194305413;

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
    msg.setTimeStamp(0.031701906977700256);
    msg.setSource(46423U);
    msg.setSourceEntity(75U);
    msg.setDestination(22926U);
    msg.setDestinationEntity(214U);
    msg.target = 12562U;
    msg.bearing = 0.2518550295710067;
    msg.elevation = 0.2209337999889599;

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
    msg.setTimeStamp(0.07925383046911227);
    msg.setSource(23987U);
    msg.setSourceEntity(70U);
    msg.setDestination(23404U);
    msg.setDestinationEntity(20U);
    msg.target = 50756U;
    msg.bearing = 0.06060803228659262;
    msg.elevation = 0.2759784085852943;

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
    msg.setTimeStamp(0.42481477609441576);
    msg.setSource(17577U);
    msg.setSourceEntity(90U);
    msg.setDestination(53261U);
    msg.setDestinationEntity(223U);
    msg.target = 23404U;
    msg.x = 0.39708777909831583;
    msg.y = 0.9915910437954607;
    msg.z = 0.13620674736726035;

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
    msg.setTimeStamp(0.10724905325093936);
    msg.setSource(18028U);
    msg.setSourceEntity(17U);
    msg.setDestination(16950U);
    msg.setDestinationEntity(122U);
    msg.target = 45323U;
    msg.x = 0.05572132654762896;
    msg.y = 0.7336034068588115;
    msg.z = 0.40386606235582956;

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
    msg.setTimeStamp(0.5526632653052687);
    msg.setSource(62013U);
    msg.setSourceEntity(33U);
    msg.setDestination(36427U);
    msg.setDestinationEntity(147U);
    msg.target = 29800U;
    msg.x = 0.08310912189962727;
    msg.y = 0.2004826603744163;
    msg.z = 0.39298301193700336;

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
    msg.setTimeStamp(0.453286897420327);
    msg.setSource(16919U);
    msg.setSourceEntity(222U);
    msg.setDestination(38751U);
    msg.setDestinationEntity(93U);
    msg.target = 2133U;
    msg.lat = 0.5619784308470783;
    msg.lon = 0.008226259651812562;
    msg.z_units = 23U;
    msg.z = 0.5040860286545455;

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
    msg.setTimeStamp(0.023515530764259385);
    msg.setSource(55138U);
    msg.setSourceEntity(118U);
    msg.setDestination(4492U);
    msg.setDestinationEntity(17U);
    msg.target = 4453U;
    msg.lat = 0.7450187546406061;
    msg.lon = 0.3180265026581438;
    msg.z_units = 152U;
    msg.z = 0.32079993963536846;

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
    msg.setTimeStamp(0.5761564887262068);
    msg.setSource(35868U);
    msg.setSourceEntity(101U);
    msg.setDestination(56078U);
    msg.setDestinationEntity(152U);
    msg.target = 49975U;
    msg.lat = 0.4003578620446504;
    msg.lon = 0.41376771591434247;
    msg.z_units = 197U;
    msg.z = 0.5348863277133685;

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
    msg.setTimeStamp(0.2068103590991398);
    msg.setSource(31979U);
    msg.setSourceEntity(239U);
    msg.setDestination(43798U);
    msg.setDestinationEntity(212U);
    msg.locale.assign("CNWFYNKOKWNTZJPNCAGWEJEUIVTFHASAOYKETICAAPOQGHNCDPTTRCSSALVRYQBJMIFXBYBCXYDXUDQLWLRGFGLXORBQYOXWVZOMLLDVFOEMPYYJDDMZFACQPUMUMBWSEYDHSFBJFPKIGKBAVHHZWABFEXTRRUKAVJVYRVCGDZQQEBIOISSHKRNFKXH");
    const char tmp_msg_0[] = {-95, -90, -77, -69, -94, 110, -29, -16, 120, 59, 29, 0, -62, -112, 94, 19, 34, -42, -101, -90, -48, 91, -124, 70, 42, -40, -96, 62, 42, -27, 81, 25, 98, -105, -26, -85, 94, 88, 105, -71, -72, 29, 1, 62, -54, 1, 6, -1, 13, -101, 112, 100, -73, -128, 116, -106, 48, 126, 118, 80, 40, -114, -36, 1, -95, -45, -32, -3, 45, -103, -73, 40, -52, -16, -44, 2, -54, 100, 44, -73, -76, 123, -103, 15, -110, 27, -125, 43, -104, -115, -119, 2, 64, 126, 30, -29, 117, -18, -36, 120, 2, 10, 43, 41, -22, 123, -29, 125, 103, -48, 58, 25, -6, -40, 40, -21, -61, 10, -3, -1, -121, 30, -107, 88, -94, 6, -52, 62, -121, 73, -91, -29, -120, 0, 29, -62, -102, 3, -5, 60, 56, -4, -48, -38, -50, -125, -117, 110, 80, -8, 43, 35, 80, -1, -32, -51, -127, -18, -85, -127, -107, -88, -110, -64, -102, 65, -92, 83, -20, 69, 78, -123, -76, 6, -88, -55, -112, 14, -61, 40, -72, -48, -41, 66, -73, 55, 30, 28, -7, 65, -97, -39, 117, 27, 28, -114, -76, 15, -27, -84, 22, 84, 23, 93, -102, 41, 36, -12, -76, -107, 44, -56, 1, 116, 4, -34, -67, -87, 47, -36, -46, 43, -34, -124, -112, -14, -21, -42, -60, 102, -12, 116, -44, 100, 34, -94, 51, -38, 8, -24};
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
    msg.setTimeStamp(0.5047099584196184);
    msg.setSource(49148U);
    msg.setSourceEntity(159U);
    msg.setDestination(12627U);
    msg.setDestinationEntity(247U);
    msg.locale.assign("YCDQMCLVNZUJQANISNLFSFGIBNYSOJBWVQHBVIRHFXCDPTWSKTMZRUZVIXITEDGOUOYRAGOXEFOHIMDKDRKVCBGNJBUWYZSMOCRADQJUNWWHBUXEHFIEPVQFMPWLLZTLXIATJPKQALWNBXMAJBWLBGKHTGENLWVPKOSMVRXCKECLISTUQSNTZHYDQZRZDFGASKAPPCJKCMYQRQFKZAIBLMDUXOEEHEYWUTOUJPYYANGGEFGRXRHSTVC");
    const char tmp_msg_0[] = {-118, 104, 115, 111, -94, 25, 112, 116, 69, -119, -26, 8, -4, -117, -98, -82, -42, 116, 43, -56, 49, 78, 82, -66, 117, -66, 5, -63, 27, -27, -43, 8, 25, -55, 94, 46, -38, 26, 61, -43, -23, 0, -31, 74};
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
    msg.setTimeStamp(0.10970064479888242);
    msg.setSource(34170U);
    msg.setSourceEntity(157U);
    msg.setDestination(34770U);
    msg.setDestinationEntity(86U);
    msg.locale.assign("KTDSGFAUPNJYKQQDTSPVPGVWGKYLKHCMTYCEXGXNJLFTFCLAZOQRDLXPARVYYXWHAREUSNMWKNLQFKWJRRHIGGYTCVOYUJONJNRBMPWEWGFQDMAIWUSBBUWXHJHDBOUSGNZCVNRHAPOVIOCZZMIUZQLSWBTDVARLVEYHXKGWIQTJECBAMMLJETEEHGJQBADYOZFV");
    const char tmp_msg_0[] = {-87, 85, -24, -119, -83, 71, 103, 10, 107, 77, -40, 110, 22, -26, 109, 106, -107, -73, -72, -67, 32, -54, -127, -118, 72, -30, 17, -65, -86, 61, -73, 117, 21, -73, 57, 65, -62, 73, 20, 104, 40, 123};
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
    msg.setTimeStamp(0.9750344579091983);
    msg.setSource(144U);
    msg.setSourceEntity(134U);
    msg.setDestination(49019U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.8018307965405772);
    msg.setSource(26024U);
    msg.setSourceEntity(23U);
    msg.setDestination(40579U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.8866973763971934);
    msg.setSource(52301U);
    msg.setSourceEntity(17U);
    msg.setDestination(40173U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.08460565679335952);
    msg.setSource(19382U);
    msg.setSourceEntity(196U);
    msg.setDestination(61492U);
    msg.setDestinationEntity(62U);
    msg.camid = 253U;
    msg.x = 51605U;
    msg.y = 59081U;

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
    msg.setTimeStamp(0.6292676314456707);
    msg.setSource(7365U);
    msg.setSourceEntity(193U);
    msg.setDestination(31852U);
    msg.setDestinationEntity(132U);
    msg.camid = 215U;
    msg.x = 6132U;
    msg.y = 4105U;

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
    msg.setTimeStamp(0.2617368621123972);
    msg.setSource(21183U);
    msg.setSourceEntity(111U);
    msg.setDestination(39511U);
    msg.setDestinationEntity(58U);
    msg.camid = 115U;
    msg.x = 59986U;
    msg.y = 62614U;

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
    msg.setTimeStamp(0.15840188207835781);
    msg.setSource(19144U);
    msg.setSourceEntity(127U);
    msg.setDestination(47618U);
    msg.setDestinationEntity(211U);
    msg.camid = 146U;
    msg.x = 57164U;
    msg.y = 45712U;

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
    msg.setTimeStamp(0.3454095642507353);
    msg.setSource(60318U);
    msg.setSourceEntity(151U);
    msg.setDestination(16436U);
    msg.setDestinationEntity(33U);
    msg.camid = 89U;
    msg.x = 12384U;
    msg.y = 59025U;

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
    msg.setTimeStamp(0.8144565074475849);
    msg.setSource(34051U);
    msg.setSourceEntity(198U);
    msg.setDestination(29012U);
    msg.setDestinationEntity(210U);
    msg.camid = 119U;
    msg.x = 39241U;
    msg.y = 6831U;

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
    msg.setTimeStamp(0.18818106623631492);
    msg.setSource(18478U);
    msg.setSourceEntity(229U);
    msg.setDestination(26553U);
    msg.setDestinationEntity(249U);
    msg.tracking = 91U;
    msg.lat = 0.2792372996465653;
    msg.lon = 0.6884029543504909;
    msg.x = 0.8784042454202944;
    msg.y = 0.5832167457909609;
    msg.z = 0.33366059011823657;

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
    msg.setTimeStamp(0.88238877526845);
    msg.setSource(48570U);
    msg.setSourceEntity(138U);
    msg.setDestination(31484U);
    msg.setDestinationEntity(206U);
    msg.tracking = 31U;
    msg.lat = 0.4158529236944247;
    msg.lon = 0.27117324434295664;
    msg.x = 0.11545130483206945;
    msg.y = 0.9759875879410275;
    msg.z = 0.8485678743879137;

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
    msg.setTimeStamp(0.5415404704002122);
    msg.setSource(52746U);
    msg.setSourceEntity(109U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(11U);
    msg.tracking = 106U;
    msg.lat = 0.3924521211947355;
    msg.lon = 0.9321276074623313;
    msg.x = 0.6247779845756707;
    msg.y = 0.2626160096013863;
    msg.z = 0.326127488351146;

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
    msg.setTimeStamp(0.058360979362296894);
    msg.setSource(36168U);
    msg.setSourceEntity(181U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(246U);
    msg.target.assign("GULDYSIKXTMCZJCYCXPNBYKIDHUSPQJRHZQKABELRLEIUUNVFLKJWFBXFWTTFHARSFLWKNJMRAPADVNVWQEKNMNLCBIWEXKYLHXAMHEYTEPJNDNVOKDRMQJAJCGBXVTXUUSRKWCQEZGMJDOZRXTTZWHCHSUSMOUZMOVEDCORJSWAQPPZACSRQUIXQAHYZFHQFELGDIOBFIVZSYGDGVPRGCFBWODBYELYNOJZNGGPGWF");
    msg.lbearing = 0.05651972035488617;
    msg.lelevation = 0.2378685690912673;
    msg.bearing = 0.3381234762569878;
    msg.elevation = 0.8664055726800391;
    msg.phi = 0.24093443196141495;
    msg.theta = 0.23345543503087385;
    msg.psi = 0.7041721571167021;
    msg.accuracy = 0.6981284860845721;

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
    msg.setTimeStamp(0.6907227968840028);
    msg.setSource(42279U);
    msg.setSourceEntity(64U);
    msg.setDestination(56659U);
    msg.setDestinationEntity(148U);
    msg.target.assign("SBKSUNKIIWSNCLWMWSCQDSWCYKSVYHOOOTNXVBNHGZHGGATQQDQEITYFAIJPFNPXRVDEFIXNHJLJUNLHQALXOLZUASZBDPEOPVVLHVAAXOFQOAEPZCYJJJHJAWGRMBSVBBZENTRZKVTDRTRGYYQJQQDPCHCMPTNKMZCVWPTDJKMOVWBMEOFWUUFMDRMKZKGCRXHFMLPBBHAGBLRIYREFMUPDYFNILUWUK");
    msg.lbearing = 0.5938694331734721;
    msg.lelevation = 0.2740290945292603;
    msg.bearing = 0.6371553102161688;
    msg.elevation = 0.6757052805870829;
    msg.phi = 0.209181917820779;
    msg.theta = 0.8157455160277962;
    msg.psi = 0.844821689132646;
    msg.accuracy = 0.1428674177757574;

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
    msg.setTimeStamp(0.8529655685432519);
    msg.setSource(22313U);
    msg.setSourceEntity(26U);
    msg.setDestination(17266U);
    msg.setDestinationEntity(104U);
    msg.target.assign("GCJZZMRTUDVPXYWKUESVPMUHBJIUBOMBHNTNYWL");
    msg.lbearing = 0.7062480606867559;
    msg.lelevation = 0.5607163205144226;
    msg.bearing = 0.3834249979440776;
    msg.elevation = 0.12437397603782807;
    msg.phi = 0.4471683269122999;
    msg.theta = 0.5759145283807883;
    msg.psi = 0.025582716995594668;
    msg.accuracy = 0.4953254416570624;

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
    msg.setTimeStamp(0.8911727253029861);
    msg.setSource(33086U);
    msg.setSourceEntity(137U);
    msg.setDestination(9081U);
    msg.setDestinationEntity(3U);
    msg.target.assign("HYEYCROSAVHRFOPKGWJZRNIEBUJKITOSPZALISKJSDZUFRUXAFHPOMVKFUODMLSJELNCJKCIWNCS");
    msg.x = 0.18093906259833736;
    msg.y = 0.9877415360115291;
    msg.z = 0.527742651828526;
    msg.n = 0.7585750910532344;
    msg.e = 0.830314827011213;
    msg.d = 0.20708559164735396;
    msg.phi = 0.6826148877338047;
    msg.theta = 0.6978395925441847;
    msg.psi = 0.4357319614011438;
    msg.accuracy = 0.4691604278637008;

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
    msg.setTimeStamp(0.8756174137993127);
    msg.setSource(60809U);
    msg.setSourceEntity(78U);
    msg.setDestination(32076U);
    msg.setDestinationEntity(14U);
    msg.target.assign("UFQNLPYJALYAJLVUYXIQCBQOUYMZCCSAFOSPHREASMWHEKOXJNNBBXKUXZKEHZVCVPIRGOUIKODUDURBOCIDYZTKGNFNWQDCMONAMXGTSZHJOFGTIBKMIHAIYFQRASYXTJPZLVWZDEXWGKYFSRAFFLSARSJRQHDBPXPVZCIHGIJMZLQENMHVREWE");
    msg.x = 0.22140633031166923;
    msg.y = 0.8745778171619218;
    msg.z = 0.3838486507593958;
    msg.n = 0.15709335396832924;
    msg.e = 0.3638719122413485;
    msg.d = 0.41297720058948817;
    msg.phi = 0.20958954535983132;
    msg.theta = 0.0009691801843130232;
    msg.psi = 0.042580699304923364;
    msg.accuracy = 0.34159950216094925;

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
    msg.setTimeStamp(0.8877045683132241);
    msg.setSource(39919U);
    msg.setSourceEntity(71U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(44U);
    msg.target.assign("UULFFCIXOZGFYPHLIKNLGEQZELLVEDMTQETQBVSMYRYRYAQOHDPPILTJMIWXXKGDDYVBKOVLUXUSFWUBTCNWPALWOABBTKDTJBAEQRJEMXZRNCMPYGIIHXJAOOSAJISRYQFVDTJZVXSIEWOMSGRKQGRSQOAFUKZZCUVDWNXGRJHSEPTFBGACFPVZPONYHRWWOHFVADUWTNEBPLJBCVZRSYMHCQWQNCAJNZU");
    msg.x = 0.16282950820090436;
    msg.y = 0.019186575542601725;
    msg.z = 0.32246036000346656;
    msg.n = 0.5861975405858931;
    msg.e = 0.9411116073660801;
    msg.d = 0.5970235240758032;
    msg.phi = 0.5151524001911767;
    msg.theta = 0.5835556325626027;
    msg.psi = 0.6199610871064022;
    msg.accuracy = 0.00029721648162384096;

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
    msg.setTimeStamp(0.05683374989945611);
    msg.setSource(44695U);
    msg.setSourceEntity(165U);
    msg.setDestination(48111U);
    msg.setDestinationEntity(109U);
    msg.target.assign("ZJJUGYHEMAXCXWXLWDIVTUFNHOAIKPAGBKMSPMSZWTHCOWEPUIVZZZWVXBDEQYZBKNHZQAOGMGSVTYRJQLDEBSWUCYUYQUKXCCRDIHSNEOMGQNYSOHOFLTXNMXSPEMOFRRGDHAVNVUHEHPMLIGFA");
    msg.lat = 0.43495807480360604;
    msg.lon = 0.694723984206399;
    msg.z_units = 198U;
    msg.z = 0.3675811583260825;
    msg.accuracy = 0.08454146765379311;

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
    msg.setTimeStamp(0.7567110753718642);
    msg.setSource(10552U);
    msg.setSourceEntity(1U);
    msg.setDestination(13077U);
    msg.setDestinationEntity(166U);
    msg.target.assign("DRMOCICWONUXSZJUOZJWDAXSMQYAOHCSZVANCUYSQFNJHVVEMAGEKZ");
    msg.lat = 0.4511157342304426;
    msg.lon = 0.8306160742777728;
    msg.z_units = 238U;
    msg.z = 0.8229532690878103;
    msg.accuracy = 0.7870982464884655;

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
    msg.setTimeStamp(0.09387651406264363);
    msg.setSource(19275U);
    msg.setSourceEntity(237U);
    msg.setDestination(13440U);
    msg.setDestinationEntity(248U);
    msg.target.assign("QCPDBIOTIHFCFUSRRGBXYYJWBRZRLNPLYIDAMIGFEMLMBVZJPKXSUOJHTYXXFHACPUXVCAJMZWAKHEQZODKNCXWIT");
    msg.lat = 0.5862018682353192;
    msg.lon = 0.8545585165810007;
    msg.z_units = 202U;
    msg.z = 0.5866240753886744;
    msg.accuracy = 0.6646060222442998;

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
    msg.setTimeStamp(0.3777834605667354);
    msg.setSource(51642U);
    msg.setSourceEntity(180U);
    msg.setDestination(16956U);
    msg.setDestinationEntity(193U);
    msg.name.assign("TMGTQZFSDLYQJCAGTHWQBHXEGAWKUWOYWMQUENDOXKPPLJRWJAFKVVZIZRSMAKRBYSCTHSPHKMICNJMUUCRXWOANNEUTTGPUGR");
    msg.lat = 0.37961097039492153;
    msg.lon = 0.5886778238953854;
    msg.z = 0.985213157631117;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.2899482834178333);
    msg.setSource(65206U);
    msg.setSourceEntity(56U);
    msg.setDestination(14043U);
    msg.setDestinationEntity(214U);
    msg.name.assign("VRPVSDPQLAXOYZLQPXBWUJKGUIZWWSXCKHAVRKAKCHTQYWNA");
    msg.lat = 0.6999676987487267;
    msg.lon = 0.7708314098081529;
    msg.z = 0.4658827361015393;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.2523998668440074);
    msg.setSource(40156U);
    msg.setSourceEntity(167U);
    msg.setDestination(3862U);
    msg.setDestinationEntity(224U);
    msg.name.assign("DCAABKMMPRYQDPPTPUYIPBKYZXXYHASFCIPLKESUEMTNLJBBGZFNMTYGONEFARHKSWWROEQHFDUAMZEZXIDBIHKBCCOFGOQIGJSOS");
    msg.lat = 0.2320656063651666;
    msg.lon = 0.5906967177312312;
    msg.z = 0.4574430173077336;
    msg.z_units = 88U;

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
    msg.setTimeStamp(0.8553332487969797);
    msg.setSource(44657U);
    msg.setSourceEntity(249U);
    msg.setDestination(13072U);
    msg.setDestinationEntity(145U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.25636007132371574);
    msg.setSource(65151U);
    msg.setSourceEntity(123U);
    msg.setDestination(18773U);
    msg.setDestinationEntity(21U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.32519353099002746);
    msg.setSource(23952U);
    msg.setSourceEntity(92U);
    msg.setDestination(25959U);
    msg.setDestinationEntity(40U);
    msg.op = 65U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("AETDCNEKHXFYRYACOJSUBLZJTZRXXEFKSXMHUWQKIFPALLFTRZSIZVLCBGYDIXLRIBMGNKCRNSPQLONFWBHECERDHBPCAVZSGWM");
    tmp_msg_0.lat = 0.840090554704214;
    tmp_msg_0.lon = 0.11668879633253826;
    tmp_msg_0.z = 0.5348844079417975;
    tmp_msg_0.z_units = 240U;
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
    msg.setTimeStamp(0.5931838723312068);
    msg.setSource(6246U);
    msg.setSourceEntity(30U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(90U);
    msg.value = 0.9249297590125084;
    msg.type = 38U;

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
    msg.setTimeStamp(0.016034620004041766);
    msg.setSource(908U);
    msg.setSourceEntity(16U);
    msg.setDestination(11179U);
    msg.setDestinationEntity(182U);
    msg.value = 0.6997961145435729;
    msg.type = 124U;

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
    msg.setTimeStamp(0.5531119324491529);
    msg.setSource(38766U);
    msg.setSourceEntity(119U);
    msg.setDestination(48604U);
    msg.setDestinationEntity(125U);
    msg.value = 0.5739011124700942;
    msg.type = 155U;

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
    msg.setTimeStamp(0.022042511504289042);
    msg.setSource(57946U);
    msg.setSourceEntity(8U);
    msg.setDestination(1088U);
    msg.setDestinationEntity(32U);
    msg.value = 0.4470507024153022;

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
    msg.setTimeStamp(0.6734798144940602);
    msg.setSource(10389U);
    msg.setSourceEntity(43U);
    msg.setDestination(15482U);
    msg.setDestinationEntity(18U);
    msg.value = 0.902612811547871;

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
    msg.setTimeStamp(0.24065430745960203);
    msg.setSource(41819U);
    msg.setSourceEntity(125U);
    msg.setDestination(47177U);
    msg.setDestinationEntity(113U);
    msg.value = 0.6002754521482108;

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
    msg.setTimeStamp(0.999011982056722);
    msg.setSource(50625U);
    msg.setSourceEntity(209U);
    msg.setDestination(39661U);
    msg.setDestinationEntity(131U);
    msg.timestamp_last_service = 0.2623661265032735;
    msg.time_next_service = 0.8465490123285001;
    msg.time_motor_next_service = 0.9215047295899449;
    msg.time_idle_ground = 0.7595419720104004;
    msg.time_idle_air = 0.9306082532805044;
    msg.time_idle_water = 0.972324276061323;
    msg.time_idle_underwater = 0.6938478780692903;
    msg.time_idle_unknown = 0.5240281210774669;
    msg.time_motor_ground = 0.5340712877632792;
    msg.time_motor_air = 0.5649202506917146;
    msg.time_motor_water = 0.8973508895992831;
    msg.time_motor_underwater = 0.11656658912442464;
    msg.time_motor_unknown = 0.9658798661673118;
    msg.rpm_min = 25093;
    msg.rpm_max = -26298;
    msg.depth_max = 0.2131386714175474;

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
    msg.setTimeStamp(0.40952757628842684);
    msg.setSource(30795U);
    msg.setSourceEntity(59U);
    msg.setDestination(24070U);
    msg.setDestinationEntity(161U);
    msg.timestamp_last_service = 0.9069151268648351;
    msg.time_next_service = 0.9637659585876045;
    msg.time_motor_next_service = 0.644281151054394;
    msg.time_idle_ground = 0.08890123386020232;
    msg.time_idle_air = 0.22230846431215567;
    msg.time_idle_water = 0.1298100183037999;
    msg.time_idle_underwater = 0.47954168618439885;
    msg.time_idle_unknown = 0.09969602477926875;
    msg.time_motor_ground = 0.886431192952343;
    msg.time_motor_air = 0.8114817428345299;
    msg.time_motor_water = 0.6105563937865693;
    msg.time_motor_underwater = 0.847410334512682;
    msg.time_motor_unknown = 0.953255693667285;
    msg.rpm_min = 8431;
    msg.rpm_max = -21148;
    msg.depth_max = 0.13304683896079084;

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
    msg.setTimeStamp(0.2732663474882504);
    msg.setSource(24763U);
    msg.setSourceEntity(52U);
    msg.setDestination(9307U);
    msg.setDestinationEntity(55U);
    msg.timestamp_last_service = 0.18877551651103608;
    msg.time_next_service = 0.9587664193344048;
    msg.time_motor_next_service = 0.14206395258422733;
    msg.time_idle_ground = 0.19888137527628125;
    msg.time_idle_air = 0.06205966658437545;
    msg.time_idle_water = 0.5971941895166412;
    msg.time_idle_underwater = 0.41202399861309424;
    msg.time_idle_unknown = 0.7450952512840575;
    msg.time_motor_ground = 0.8939642502650701;
    msg.time_motor_air = 0.7139276373898;
    msg.time_motor_water = 0.8769739474448988;
    msg.time_motor_underwater = 0.12642423614481757;
    msg.time_motor_unknown = 0.23434495267702127;
    msg.rpm_min = 27474;
    msg.rpm_max = 15842;
    msg.depth_max = 0.9166681319100585;

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
    msg.setTimeStamp(0.5057451532875937);
    msg.setSource(60446U);
    msg.setSourceEntity(56U);
    msg.setDestination(41184U);
    msg.setDestinationEntity(50U);
    msg.severity = 197U;
    msg.text.assign("BZOAWMXKMDTQIVPWPENSBWGZJQGPOFAGSRUNFWPTJIUGVCNHUQYKPOFLAEFLTRYGHXEFLXDIGGDOISZCXLNDMIRRABNJFUELUYHYQWWETZZZCDPKOSADFTMATIJKVICJJVBKSWRSUC");

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
    msg.setTimeStamp(0.04072371988000434);
    msg.setSource(54221U);
    msg.setSourceEntity(238U);
    msg.setDestination(63159U);
    msg.setDestinationEntity(120U);
    msg.severity = 91U;
    msg.text.assign("IXPVSVIKLTGQKWMIDMFQSHQKTYWIXLEOSINCYBGPRBLDCNYADDAWVGJDLSUZJORJDTAQYEXSOSTKJQDIUNAEGFXCBFYMVIXVSMUADAJNSNYZPHHZWFOCUAWJWTOMNNKTKPFZVVPQTCCZQFEOIUXRIREVXYFMRJOC");

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
    msg.setTimeStamp(0.8211842545227148);
    msg.setSource(44070U);
    msg.setSourceEntity(94U);
    msg.setDestination(16173U);
    msg.setDestinationEntity(100U);
    msg.severity = 221U;
    msg.text.assign("ZJXTPNICQCKHQHEJOUPWQYJYVTDHDNDGQZYXOBUIWDAOWBEVYVEIUVIFWCRXHLFEREKYZHNSNBOTG");

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
    msg.setTimeStamp(0.2401044835649937);
    msg.setSource(50705U);
    msg.setSourceEntity(196U);
    msg.setDestination(21600U);
    msg.setDestinationEntity(240U);
    msg.channel = -21;
    msg.value = -1238694330;
    msg.gain = 145U;

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
    msg.setTimeStamp(0.3152079332143054);
    msg.setSource(8268U);
    msg.setSourceEntity(100U);
    msg.setDestination(14502U);
    msg.setDestinationEntity(31U);
    msg.channel = 48;
    msg.value = 1979055346;
    msg.gain = 120U;

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
    msg.setTimeStamp(0.6260639816990579);
    msg.setSource(14266U);
    msg.setSourceEntity(105U);
    msg.setDestination(2248U);
    msg.setDestinationEntity(235U);
    msg.channel = 16;
    msg.value = 2060461815;
    msg.gain = 171U;

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
    msg.setTimeStamp(0.5605093378914531);
    msg.setSource(25850U);
    msg.setSourceEntity(169U);
    msg.setDestination(25305U);
    msg.setDestinationEntity(235U);
    msg.ch01 = 0.2907875971595484;
    msg.ch02 = 0.6709245435266153;
    msg.ch03 = 0.45924069941185075;
    msg.ch04 = 0.6014484738929224;
    msg.ch05 = 0.5689428841893276;
    msg.ch06 = 0.3702499506184076;
    msg.ch07 = 0.1914137746119885;
    msg.ch08 = 0.1969812061861761;
    msg.ch09 = 0.052620010869203204;
    msg.ch10 = 0.8660679542512554;
    msg.ch11 = 0.7541111867845988;
    msg.ch12 = 0.580032662604431;
    msg.ch13 = 0.00446809646865276;
    msg.ch14 = 0.06311816195328523;
    msg.ch15 = 0.22097635345698652;
    msg.ch16 = 0.6041606392469034;

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
    msg.setTimeStamp(0.03159774656537717);
    msg.setSource(32717U);
    msg.setSourceEntity(206U);
    msg.setDestination(20803U);
    msg.setDestinationEntity(38U);
    msg.ch01 = 0.2809512094851979;
    msg.ch02 = 0.8402512758559578;
    msg.ch03 = 0.9381509866102401;
    msg.ch04 = 0.2421007398524222;
    msg.ch05 = 0.15527126575441774;
    msg.ch06 = 0.8829280257130893;
    msg.ch07 = 0.4684463881386547;
    msg.ch08 = 0.2880852261090532;
    msg.ch09 = 0.40406956253284976;
    msg.ch10 = 0.6975750927653828;
    msg.ch11 = 0.9426121955128187;
    msg.ch12 = 0.29188727698747763;
    msg.ch13 = 0.47059377780266;
    msg.ch14 = 0.6458932864186262;
    msg.ch15 = 0.06155836241534274;
    msg.ch16 = 0.9273000133028062;

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
    msg.setTimeStamp(0.3558093041046597);
    msg.setSource(27303U);
    msg.setSourceEntity(173U);
    msg.setDestination(19065U);
    msg.setDestinationEntity(157U);
    msg.ch01 = 0.616885727465809;
    msg.ch02 = 0.7033406548073692;
    msg.ch03 = 0.12395897385177645;
    msg.ch04 = 0.2823794449898469;
    msg.ch05 = 0.06801566507379586;
    msg.ch06 = 0.42770856009269254;
    msg.ch07 = 0.07037440024917951;
    msg.ch08 = 0.34416945816596156;
    msg.ch09 = 0.22022450909463354;
    msg.ch10 = 0.8819163944348101;
    msg.ch11 = 0.07156005467073556;
    msg.ch12 = 0.5008295286734112;
    msg.ch13 = 0.8073244740481555;
    msg.ch14 = 0.09212797251518534;
    msg.ch15 = 0.3664261504697812;
    msg.ch16 = 0.7082211576349794;

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
    msg.setTimeStamp(0.7401401240991289);
    msg.setSource(38890U);
    msg.setSourceEntity(147U);
    msg.setDestination(4089U);
    msg.setDestinationEntity(75U);
    msg.op = 71U;
    msg.lat = 0.19147463781867757;
    msg.lon = 0.023763859708787693;
    msg.height = 0.6704272180041254;
    msg.depth = 0.49827557557980917;
    msg.alt = 0.20176352671709663;

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
    msg.setTimeStamp(0.19649588567550758);
    msg.setSource(26702U);
    msg.setSourceEntity(197U);
    msg.setDestination(42574U);
    msg.setDestinationEntity(137U);
    msg.op = 16U;
    msg.lat = 0.8799604728627439;
    msg.lon = 0.5459060083035235;
    msg.height = 0.6126177699565183;
    msg.depth = 0.5215277872474444;
    msg.alt = 0.02308115055634541;

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
    msg.setTimeStamp(0.6963387527136117);
    msg.setSource(4929U);
    msg.setSourceEntity(200U);
    msg.setDestination(23221U);
    msg.setDestinationEntity(226U);
    msg.op = 47U;
    msg.lat = 0.9642345916350873;
    msg.lon = 0.6120497901215204;
    msg.height = 0.8785777039249197;
    msg.depth = 0.5647608050904022;
    msg.alt = 0.1833839774067043;

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
    msg.setTimeStamp(0.7092085658529971);
    msg.setSource(51982U);
    msg.setSourceEntity(128U);
    msg.setDestination(30350U);
    msg.setDestinationEntity(103U);
    msg.nbeams = 81U;
    msg.ncells = 107U;
    msg.coord_sys = 0U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.31597978362236223;
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
    msg.setTimeStamp(0.7489012090426155);
    msg.setSource(28387U);
    msg.setSourceEntity(222U);
    msg.setDestination(37984U);
    msg.setDestinationEntity(63U);
    msg.nbeams = 200U;
    msg.ncells = 83U;
    msg.coord_sys = 210U;

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
    msg.setTimeStamp(0.9806240418127309);
    msg.setSource(9509U);
    msg.setSourceEntity(109U);
    msg.setDestination(1788U);
    msg.setDestinationEntity(163U);
    msg.nbeams = 41U;
    msg.ncells = 129U;
    msg.coord_sys = 80U;

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
    msg.setTimeStamp(0.4512158069723349);
    msg.setSource(53400U);
    msg.setSourceEntity(55U);
    msg.setDestination(2593U);
    msg.setDestinationEntity(143U);
    msg.cell_position = 0.3630159988456053;

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
    msg.setTimeStamp(0.7135242971060469);
    msg.setSource(26304U);
    msg.setSourceEntity(77U);
    msg.setDestination(43158U);
    msg.setDestinationEntity(174U);
    msg.cell_position = 0.13709941407168236;

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
    msg.setTimeStamp(0.2310985608020405);
    msg.setSource(43982U);
    msg.setSourceEntity(115U);
    msg.setDestination(61970U);
    msg.setDestinationEntity(96U);
    msg.cell_position = 0.855787371428626;

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
    msg.setTimeStamp(0.7054824866825468);
    msg.setSource(3289U);
    msg.setSourceEntity(162U);
    msg.setDestination(11625U);
    msg.setDestinationEntity(77U);
    msg.vel = 0.15578658109231247;
    msg.amp = 0.12342132938452033;
    msg.cor = 99U;

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
    msg.setTimeStamp(0.6450962795299386);
    msg.setSource(35770U);
    msg.setSourceEntity(114U);
    msg.setDestination(10690U);
    msg.setDestinationEntity(214U);
    msg.vel = 0.21659118367125751;
    msg.amp = 0.5279782258646493;
    msg.cor = 192U;

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
    msg.setTimeStamp(0.446405376697405);
    msg.setSource(51374U);
    msg.setSourceEntity(233U);
    msg.setDestination(32100U);
    msg.setDestinationEntity(244U);
    msg.vel = 0.566281123567515;
    msg.amp = 0.3839011117158645;
    msg.cor = 193U;

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
    msg.setTimeStamp(0.3866177323967762);
    msg.setSource(55596U);
    msg.setSourceEntity(161U);
    msg.setDestination(50627U);
    msg.setDestinationEntity(219U);
    msg.name.assign("IWPOZCGMDYKTERKWIULWWHCXUOFCMSCZWMQZTAKAYRNCYSVNZXIFCDALBOEEDQMHZRMHXJASVGJGATXMHCXLVPBFUSHNQXEFMLGCYBAJKEIKLRRDRBAEVECUOUGPHUOJXJLXVLFLQNJJKOWZSKOMRGFRYTSOIPWWABVIEPBCKSQUWHYPWGOBVRDLIFQPVQTGYFVIXBDFSUTJUESUVDAZKTNBZYQDIDMHBNYJPSQMNFNGDQ");
    msg.value = 218U;

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
    msg.setTimeStamp(0.13609913000789575);
    msg.setSource(31779U);
    msg.setSourceEntity(160U);
    msg.setDestination(16956U);
    msg.setDestinationEntity(198U);
    msg.name.assign("PIIUFQBRHBNZRQGHWEWUUWRTGBFDLTNYCKMZOXFAILAXELDMXXQLGJWMYVRJFYQJDJUEBMYSADFKKFHNOMPMNZPDQRSECDHXPSBMCWHWGUJXAKFJTCMKVATOBCUYIMGTLDTPUWVXHLVSNSRQLWBYLMSGYUOCPSFAZKEANJQVQNREDPDZAQRQRKVAWLTCFVDURTHIEHGBKOSAIHCFZTN");
    msg.value = 0U;

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
    msg.setTimeStamp(0.6658833588237055);
    msg.setSource(61453U);
    msg.setSourceEntity(184U);
    msg.setDestination(88U);
    msg.setDestinationEntity(95U);
    msg.name.assign("IAFADFHFUUSVNOYWXCMTZLJANGQAWYLGSBZNPBEWVNLOSQQCFZBNEHOQMCOUYDXQZYIRVLIPMBFJISGUVBLTGKVUYHDNMRGBIGJROJPEKBIQKFWGGEZMVCTTIZWHUZAIDOHKSPIRTXYDRASP");
    msg.value = 237U;

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
    msg.setTimeStamp(0.445842372733555);
    msg.setSource(61040U);
    msg.setSourceEntity(238U);
    msg.setDestination(20454U);
    msg.setDestinationEntity(173U);
    msg.name.assign("BAJGTSGENLQRPZOQNNDDHWEBPTXYOXSLYPDSZNHQATGKAQGZR");

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
    msg.setTimeStamp(0.2094811308729816);
    msg.setSource(47248U);
    msg.setSourceEntity(122U);
    msg.setDestination(16103U);
    msg.setDestinationEntity(178U);
    msg.name.assign("LKBYBITXIXTFMSSBGRERDLDHYIJJUWUUJOIVECZZHGJNNGKMWDNXRQYDCCZHCTCJIFLMAAU");

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
    msg.setTimeStamp(0.24982274582466968);
    msg.setSource(34150U);
    msg.setSourceEntity(238U);
    msg.setDestination(9197U);
    msg.setDestinationEntity(112U);
    msg.name.assign("KDTQMDDDUVWIRVTYOJUUFLHMSKOJTNOYRDEVBBHBYGWSWFHTCNSZJHPAQINCHUCZNBCAHRGMLAKIMBGZZKSOXNYIUFVRSPXBXEPLMBXGGWHZFLNXUQWKJMHCTVRC");

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
    msg.setTimeStamp(0.4788009080944968);
    msg.setSource(28814U);
    msg.setSourceEntity(73U);
    msg.setDestination(21765U);
    msg.setDestinationEntity(25U);
    msg.name.assign("XUZITMNDWZPZCKHKPDSLKACBTJWLNDTWOELPPRIMSEGKDAFXFDWHRMVOOGUJHHL");
    msg.value = 125U;

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
    msg.setTimeStamp(0.19112494471118702);
    msg.setSource(40818U);
    msg.setSourceEntity(183U);
    msg.setDestination(47382U);
    msg.setDestinationEntity(68U);
    msg.name.assign("UAXMGAHTRYNJQNWPCPHMHKBNCUAMWMDAEJUGSRLRQBFHYSGSZTQGSVKHJAZNMROBOKQPJCBBYXGRPXMAKVNBTKVRICTGMOIKNPQCTYCEJUYQKIRDUQWFZRFWDSSOLLFHSAAVZTWXCNNKTHLJDHZUBIAEFVTXIIJYVVDFSCYIOVMQVOULILWKULHQDNGEWKXJLFAUHLPZDFRBZTWDJPTGJGEUPCFMV");
    msg.value = 68U;

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
    msg.setTimeStamp(0.07269748200626447);
    msg.setSource(16814U);
    msg.setSourceEntity(200U);
    msg.setDestination(40135U);
    msg.setDestinationEntity(19U);
    msg.name.assign("QRJMNZABFTITALEGHVLWATTKQXJBMDWGXRVOPCEVKIJNBFBUXFARVUDRENPIBMPMOHKQMIOCJLLIIXFFHLPOTGZBYXTHEBDXUKVYZOBBVYPGYWEEHLGVURYUNGKMCZKGENQTIFNIDMHDJSSFTSSNPSMXHPWDAOXEQGNOROQQOSSMDISUKYPAYRHISZGUDTRYJKHCUQSDWVCLFUCZUZWGHZAAJTNFJYDLXLKBQMAW");
    msg.value = 115U;

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
    msg.setTimeStamp(0.13034079544100874);
    msg.setSource(51722U);
    msg.setSourceEntity(13U);
    msg.setDestination(10164U);
    msg.setDestinationEntity(185U);
    msg.value = 0.16489401723948194;

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
    msg.setTimeStamp(0.5534755779380863);
    msg.setSource(10130U);
    msg.setSourceEntity(211U);
    msg.setDestination(12249U);
    msg.setDestinationEntity(141U);
    msg.value = 0.9308919257199226;

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
    msg.setTimeStamp(0.8794346405291209);
    msg.setSource(21626U);
    msg.setSourceEntity(96U);
    msg.setDestination(51332U);
    msg.setDestinationEntity(253U);
    msg.value = 0.5593820819859804;

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
    msg.setTimeStamp(0.09349397235356194);
    msg.setSource(13341U);
    msg.setSourceEntity(155U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(17U);
    msg.value = 0.3891343598200976;

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
    msg.setTimeStamp(0.8535552539059467);
    msg.setSource(37275U);
    msg.setSourceEntity(52U);
    msg.setDestination(28157U);
    msg.setDestinationEntity(193U);
    msg.value = 0.07452980192820757;

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
    msg.setTimeStamp(0.45563011814326215);
    msg.setSource(45279U);
    msg.setSourceEntity(237U);
    msg.setDestination(26249U);
    msg.setDestinationEntity(62U);
    msg.value = 0.3062320006864915;

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
    msg.setTimeStamp(0.7809717301129471);
    msg.setSource(15462U);
    msg.setSourceEntity(16U);
    msg.setDestination(49925U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5575807788395073;

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
    msg.setTimeStamp(0.8727760360425203);
    msg.setSource(33196U);
    msg.setSourceEntity(127U);
    msg.setDestination(9877U);
    msg.setDestinationEntity(190U);
    msg.value = 0.8941320324393593;

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
    msg.setTimeStamp(0.022367300539239077);
    msg.setSource(22965U);
    msg.setSourceEntity(91U);
    msg.setDestination(31439U);
    msg.setDestinationEntity(201U);
    msg.value = 0.7342085773741954;

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
    msg.setTimeStamp(0.26907803398704255);
    msg.setSource(50256U);
    msg.setSourceEntity(24U);
    msg.setDestination(54672U);
    msg.setDestinationEntity(206U);
    msg.restriction = 78U;
    msg.reason.assign("GUTHHFSOJLTKYIOFNRUVSFLHCSJNDHZJKXJMQRFMDBMBNBOYOJPAOCGVYQNSSWCUCVLZHIGIQYLSRZLICAXMZPONVMCBYLPPXTTDGXKVXSXFGZCEUUKTXAWXARZRUAEEIYOEPZDMABFNDSHVUDFCORFCPWEULOGXYYQANIIKQWMQVKBIRJKWBRGBOAHYEGFZHAVFWVLGWQEJMPWTHXJQTKTBAYDQTLPUGDDIKCHRINRSZVELNENMJ");

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
    msg.setTimeStamp(0.2901653630321759);
    msg.setSource(38006U);
    msg.setSourceEntity(60U);
    msg.setDestination(22041U);
    msg.setDestinationEntity(135U);
    msg.restriction = 161U;
    msg.reason.assign("TULPOMKFQBQZRMGEOIWEZVECLKGTCRDZOPSAVNYOJOHJVPCXYAXLFDOWNDYXIAM");

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
    msg.setTimeStamp(0.49200546274063983);
    msg.setSource(3524U);
    msg.setSourceEntity(125U);
    msg.setDestination(46582U);
    msg.setDestinationEntity(107U);
    msg.restriction = 206U;
    msg.reason.assign("LCRDMYEEIAOUIGCQHPWILHGTBISQWPWFHKZAJAXGTLUKNZIYETHFKZKMBSDEQIFNLGIQNAWMWVZUNSGRVIWUPAQDF");

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
    IMC::CurvedPathReference msg;
    msg.setTimeStamp(0.8928626568922596);
    msg.setSource(12549U);
    msg.setSourceEntity(16U);
    msg.setDestination(26607U);
    msg.setDestinationEntity(89U);
    msg.param = 0.5679533573235003;
    msg.lat = 0.4292862259657618;
    msg.lon = 0.7012619872862934;
    msg.z = 0.10018338785697922;
    msg.theta = 0.9360216684370737;
    msg.psi = 0.03167388285137629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurvedPathReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurvedPathReference msg;
    msg.setTimeStamp(0.8268748448457894);
    msg.setSource(46169U);
    msg.setSourceEntity(177U);
    msg.setDestination(6218U);
    msg.setDestinationEntity(86U);
    msg.param = 0.3886222977173903;
    msg.lat = 0.7207697341731238;
    msg.lon = 0.7759734576171877;
    msg.z = 0.11570922967334174;
    msg.theta = 0.7703771395851887;
    msg.psi = 0.9487533611244516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurvedPathReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurvedPathReference msg;
    msg.setTimeStamp(0.6711797997409111);
    msg.setSource(18791U);
    msg.setSourceEntity(188U);
    msg.setDestination(22649U);
    msg.setDestinationEntity(246U);
    msg.param = 0.05061746838401715;
    msg.lat = 0.5337926961054961;
    msg.lon = 0.3429446654145628;
    msg.z = 0.5734060244663641;
    msg.theta = 0.555731331870748;
    msg.psi = 0.9216230800846489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurvedPathReference #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6199057859896957);
    msg.setSource(62243U);
    msg.setSourceEntity(39U);
    msg.setDestination(58849U);
    msg.setDestinationEntity(51U);
    msg.path_param = 0.8472698648687428;
    msg.x = 0.5037577876628481;
    msg.y = 0.7862459942236607;
    msg.z = 0.1521241576598492;
    msg.r_f = 0.8985871694434736;

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
    msg.setTimeStamp(0.958269519094739);
    msg.setSource(39788U);
    msg.setSourceEntity(224U);
    msg.setDestination(58920U);
    msg.setDestinationEntity(6U);
    msg.path_param = 0.25982090267405955;
    msg.x = 0.8259983333578921;
    msg.y = 0.06384206759006916;
    msg.z = 0.8548631904525669;
    msg.r_f = 0.14719243830133444;

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
    msg.setTimeStamp(0.8907283416293553);
    msg.setSource(62186U);
    msg.setSourceEntity(156U);
    msg.setDestination(7632U);
    msg.setDestinationEntity(178U);
    msg.path_param = 0.6553770887072141;
    msg.x = 0.3038161409507394;
    msg.y = 0.013623489744853834;
    msg.z = 0.75475729570326;
    msg.r_f = 0.14240286096920418;

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

  return test.getReturnValue();
}
