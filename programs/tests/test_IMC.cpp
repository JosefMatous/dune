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
// IMC XML MD5: 4f8aad95e953ecebe938758339b0b1bf                            *
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
    msg.setTimeStamp(0.031892542707655624);
    msg.setSource(9382U);
    msg.setSourceEntity(206U);
    msg.setDestination(36217U);
    msg.setDestinationEntity(107U);
    msg.state = 163U;
    msg.flags = 193U;
    msg.description.assign("FJXPWVGXOHTMYNCDRBJFNUYZBRYUSDBOPKDUXZYQHTCGXMDDYZIWDPWKIIXLOFTOYJYCNABSAGROFKXQFEULZPSURTTMSFDQWGTHKRHKZMLDBGLPQYHCXVPCIDVGVT");

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
    msg.setTimeStamp(0.9717874809550587);
    msg.setSource(58345U);
    msg.setSourceEntity(195U);
    msg.setDestination(53099U);
    msg.setDestinationEntity(160U);
    msg.state = 174U;
    msg.flags = 41U;
    msg.description.assign("CSQXAHTYOGFRPOAPUSRN");

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
    msg.setTimeStamp(0.3839182123699928);
    msg.setSource(52098U);
    msg.setSourceEntity(107U);
    msg.setDestination(17869U);
    msg.setDestinationEntity(9U);
    msg.state = 206U;
    msg.flags = 49U;
    msg.description.assign("DZQLLULHHGIDABLZGCBEGTFTUNTIQTOQHZDJMBJFXWLCWXEQAUZSRDAGRPJTFAAFIDBSMEXFOKFCJGSQHSNVIU");

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
    msg.setTimeStamp(0.16931645960002817);
    msg.setSource(62177U);
    msg.setSourceEntity(244U);
    msg.setDestination(44267U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.19249775189594343);
    msg.setSource(3647U);
    msg.setSourceEntity(154U);
    msg.setDestination(4620U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.3433256441145677);
    msg.setSource(63830U);
    msg.setSourceEntity(206U);
    msg.setDestination(16215U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.7005877382936272);
    msg.setSource(31512U);
    msg.setSourceEntity(218U);
    msg.setDestination(18186U);
    msg.setDestinationEntity(133U);
    msg.id = 144U;
    msg.label.assign("GGEDEWUCNMRXLHZVFGANUCFS");
    msg.component.assign("VYADPNWIHWFSYJBOZCGYBIUNEOAKLOZFWSQSZFPYTEURGLVCKRPVHIRVSLXCHSZGROHMBJFNEITOFERJWJPLQOPCMKTNAI");
    msg.act_time = 38197U;
    msg.deact_time = 10110U;

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
    msg.setTimeStamp(0.5041621133459627);
    msg.setSource(35749U);
    msg.setSourceEntity(118U);
    msg.setDestination(7394U);
    msg.setDestinationEntity(11U);
    msg.id = 93U;
    msg.label.assign("VMDMFWJVSUQQTXZGILJEUGTVBENLEIQPVGAPYYPNRFLCJKAYACFQWZWBIAQSTIKBGVTJKDWXIHZKXJZKFLGKXSBQODFOWEGUGPCMBMSDVODSYYYRWOSJRZAEBMTFNTUGQOSFDDHMYZRPXRQHJAETLAPSHJEQWASBIFLNMRPXNWLXBNZUHNFDOKCJRULGIELPXNWUZEDVTIVRHIOZXHOAHKUMKGVRYTORUCPYHJMUCAOVHDZWNQL");
    msg.component.assign("TBOYAWPXKQYBPVGXBCZVMFO");
    msg.act_time = 25936U;
    msg.deact_time = 32597U;

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
    msg.setTimeStamp(0.03435269826164833);
    msg.setSource(19722U);
    msg.setSourceEntity(16U);
    msg.setDestination(10550U);
    msg.setDestinationEntity(161U);
    msg.id = 136U;
    msg.label.assign("ZNVLAYKFKQLHIHKUMZHOEJRGALAXSFSIDJKDYNAGTHWTTEWVAYECZRENHXMBFHNBQFSRXMPCQNOQXMDLQIIPOVSOLMUGGBUCDXCLPSAYCBAVMVRJZVVCWRPEKMLAWUUTFTPTGCXONHWZIPRYMJZIYZEUBXRZ");
    msg.component.assign("RHASMZZXRIBEOYLDFKVQ");
    msg.act_time = 54696U;
    msg.deact_time = 54965U;

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
    msg.setTimeStamp(0.6130190040730944);
    msg.setSource(63897U);
    msg.setSourceEntity(81U);
    msg.setDestination(45598U);
    msg.setDestinationEntity(82U);
    msg.id = 128U;

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
    msg.setTimeStamp(0.4852619785216016);
    msg.setSource(7741U);
    msg.setSourceEntity(123U);
    msg.setDestination(55913U);
    msg.setDestinationEntity(60U);
    msg.id = 60U;

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
    msg.setTimeStamp(0.2848933610600133);
    msg.setSource(50028U);
    msg.setSourceEntity(83U);
    msg.setDestination(12558U);
    msg.setDestinationEntity(120U);
    msg.id = 44U;

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
    msg.setTimeStamp(0.5339364196214923);
    msg.setSource(28015U);
    msg.setSourceEntity(2U);
    msg.setDestination(61050U);
    msg.setDestinationEntity(219U);
    msg.op = 171U;
    msg.list.assign("ENSCGKATKQRPAHZGOKHDPEMCNGOIBLKPKMQRSCESTFMJRWCWSBDQXXIMNBZYHTHINVNDFHHIXIJMKZNLDDEEPEAGGPIVLAFSJNZTFVGCBUXVYIYTRWEZXTCAWOTBOFUSEUJTHNMQSLBZALSYNVQUIIODCDWWYEXZEUYJBSLAJUQMAULQPUXLVMBAGHRRYVZHNOZOROBMD");

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
    msg.setTimeStamp(0.9978134202080022);
    msg.setSource(57922U);
    msg.setSourceEntity(245U);
    msg.setDestination(47147U);
    msg.setDestinationEntity(186U);
    msg.op = 5U;
    msg.list.assign("ZOUGKVSWWQATPDBYJWKEBWMMHCHBNUMNCKIGL");

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
    msg.setTimeStamp(0.7273771608983525);
    msg.setSource(50696U);
    msg.setSourceEntity(22U);
    msg.setDestination(9822U);
    msg.setDestinationEntity(203U);
    msg.op = 91U;
    msg.list.assign("BFKLYXGVDZUSCKLYYKMNLKLYFIJVAXFZMTGJXENWWHGKNQCCCXIXKGDEZHWEYLJRBNQZHZEONUOCICMJUPYWQHEQEMTUZWACAJWWBSMISZTGIOAERZIEGHTSUOABVXHSWNVBSPBORVTJEOMVVSDTONYXFLFJXDQUDYKGBLNGFRRHLARTFOCLQMASKBFZAWYJVRXQDSC");

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
    msg.setTimeStamp(0.7412711192397555);
    msg.setSource(13087U);
    msg.setSourceEntity(81U);
    msg.setDestination(21658U);
    msg.setDestinationEntity(29U);
    msg.value = 208U;

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
    msg.setTimeStamp(0.4874378808669023);
    msg.setSource(39593U);
    msg.setSourceEntity(227U);
    msg.setDestination(53443U);
    msg.setDestinationEntity(104U);
    msg.value = 141U;

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
    msg.setTimeStamp(0.5173879727798195);
    msg.setSource(36893U);
    msg.setSourceEntity(66U);
    msg.setDestination(11754U);
    msg.setDestinationEntity(51U);
    msg.value = 4U;

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
    msg.setTimeStamp(0.7604880745563555);
    msg.setSource(43893U);
    msg.setSourceEntity(140U);
    msg.setDestination(23717U);
    msg.setDestinationEntity(176U);
    msg.consumer.assign("HDPBEKZZYWCIFLGMESIZNJMFVHPBFMCOVGBTOGUAKNVOSHLKRGCVQFSXTNZLZHTXVJFYRTDXHANNCQVGALPBWUHMUPKEIIIZTKUPXVKCZSNJEXWUNGWMLUEEHSAPGNFHQ");
    msg.message_id = 20670U;

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
    msg.setTimeStamp(0.2410110736876354);
    msg.setSource(797U);
    msg.setSourceEntity(244U);
    msg.setDestination(40191U);
    msg.setDestinationEntity(73U);
    msg.consumer.assign("TIARQMVWNFACQYXTNNETLDWBLUPOPKGDZFRJEYYRCXIOHZFKDWUDXESTKBZVHSIBQNEQSKEBS");
    msg.message_id = 65157U;

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
    msg.setTimeStamp(0.1956878491656826);
    msg.setSource(9926U);
    msg.setSourceEntity(171U);
    msg.setDestination(49550U);
    msg.setDestinationEntity(111U);
    msg.consumer.assign("TLIPDHJIWUTGNJRMTGQYPQIGWQVJYOSHAPYKOMOTJAGPCCSXDFCKLXBZPMKPDEITJRUOSNXMCXIWZNDBYOMWUIWSETUQVBZSYGUHSCVYHNCFEEGBNVHBGVZZJVSP");
    msg.message_id = 54731U;

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
    msg.setTimeStamp(0.25431701691313213);
    msg.setSource(59645U);
    msg.setSourceEntity(67U);
    msg.setDestination(51276U);
    msg.setDestinationEntity(110U);
    msg.type = 137U;

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
    msg.setTimeStamp(0.6168653158121175);
    msg.setSource(52789U);
    msg.setSourceEntity(85U);
    msg.setDestination(32011U);
    msg.setDestinationEntity(45U);
    msg.type = 161U;

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
    msg.setTimeStamp(0.3869897021083033);
    msg.setSource(16964U);
    msg.setSourceEntity(85U);
    msg.setDestination(21590U);
    msg.setDestinationEntity(92U);
    msg.type = 15U;

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
    msg.setTimeStamp(0.545324672365595);
    msg.setSource(48910U);
    msg.setSourceEntity(1U);
    msg.setDestination(1183U);
    msg.setDestinationEntity(248U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.3878753153590173);
    msg.setSource(48102U);
    msg.setSourceEntity(36U);
    msg.setDestination(37406U);
    msg.setDestinationEntity(137U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.4670829352277077);
    msg.setSource(62907U);
    msg.setSourceEntity(179U);
    msg.setDestination(61036U);
    msg.setDestinationEntity(161U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.3496652572563633);
    msg.setSource(63648U);
    msg.setSourceEntity(68U);
    msg.setDestination(51340U);
    msg.setDestinationEntity(203U);
    msg.total_steps = 204U;
    msg.step_number = 186U;
    msg.step.assign("KZXMLJKMMSANAITYUKOVKBJOGMUAXMCCYMQICXRFZRPGYZUYBZWCFWUHYFPVNUDPKABLOLVQCCRFSXFHSGJFRZJGGQFQWREUXEVJJEKIIYHHHGVXLGBY");
    msg.flags = 166U;

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
    msg.setTimeStamp(0.23686137676855912);
    msg.setSource(32866U);
    msg.setSourceEntity(55U);
    msg.setDestination(35874U);
    msg.setDestinationEntity(183U);
    msg.total_steps = 180U;
    msg.step_number = 251U;
    msg.step.assign("QBHMHFVAQWOHYUCBDTQORWROGLENACMIEKTZEHAOZJMILHPTNEBCOQFHJCRKQVFSFAQDPOXJSYQXFNQEHMZOKNLUPUWVJKAUYSLRRWRITNIDCPKWFOHJSIVWIUUGISKXCDALBFSMLXGHABTRAJJMREBPFBZVQGNCRWTBLXXMYWVNSZAZZMGWOKCYNLTYEEKWIZKI");
    msg.flags = 78U;

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
    msg.setTimeStamp(0.05592473154990818);
    msg.setSource(26730U);
    msg.setSourceEntity(195U);
    msg.setDestination(50737U);
    msg.setDestinationEntity(57U);
    msg.total_steps = 97U;
    msg.step_number = 124U;
    msg.step.assign("BNJDAOVYGEBUINQJCWSBDHKLZPYXSEHIEDRPDZAPNIKUOATWFRIGRYTWFLXJLEBXOIAQFMEVURFFTPXBHLZKNUKVCQVVHCKSFRQAORSJQUULJMANCLCUZEAZZNMPMWYGRYQDMPLX");
    msg.flags = 125U;

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
    msg.setTimeStamp(0.63562101763976);
    msg.setSource(61705U);
    msg.setSourceEntity(66U);
    msg.setDestination(14748U);
    msg.setDestinationEntity(102U);
    msg.state = 82U;
    msg.error.assign("SIQUECBTILLQKVYVNZSOFVCPTPRXVDCTQIGSJNBNAAMNUPIZYJWJRJUUKNGEEZDFZZPSOBWURUHCFZETLKRJZPVBOXSDKGAWTHRXCBJPGLFBRJEOECQYWLDTQLKAUAFWNEYQVHJFMIIDTSUKMKSQFXYSNLGIFXTKFMQKBIHXMAHYNVWNOD");

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
    msg.setTimeStamp(0.8501846229765986);
    msg.setSource(38193U);
    msg.setSourceEntity(199U);
    msg.setDestination(52004U);
    msg.setDestinationEntity(105U);
    msg.state = 88U;
    msg.error.assign("QTMETORVDDVICTTZGZLLYBWAMEVIDXYKPKIKEHFKYIZPIPHVJRGPVJNWPNHVKIHCZAZYPEDRHCVRESOSSLYFLUQRFDDZMUPRGHWFFNYOCQUGXNOTDPGOTCAWFSRUHQBABTODQTDSGGGXBA");

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
    msg.setTimeStamp(0.3155311251594385);
    msg.setSource(35152U);
    msg.setSourceEntity(182U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(30U);
    msg.state = 62U;
    msg.error.assign("JXCNYCYCHYJPROWRJEKXWIXZGXEFOZDCOKTDVZIEYFOHVBOUOBDOVTVUQBMJDDWYGPQQLFIACNWUAXCJTSTFGSVXPJZNPBBSJDSEYYBKIFEPPVQGNTOVRICSTIRFUQGYMONXZKWRWMA");

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
    msg.setTimeStamp(0.5795586040827315);
    msg.setSource(29858U);
    msg.setSourceEntity(21U);
    msg.setDestination(64143U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.19232748846098946);
    msg.setSource(24761U);
    msg.setSourceEntity(10U);
    msg.setDestination(19208U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.46016387108703194);
    msg.setSource(12252U);
    msg.setSourceEntity(82U);
    msg.setDestination(58869U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.4768969750773344);
    msg.setSource(211U);
    msg.setSourceEntity(66U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(203U);
    msg.op = 243U;
    msg.speed_min = 0.5042881071128488;
    msg.speed_max = 0.8538427766838353;
    msg.long_accel = 0.7585300876367;
    msg.alt_max_msl = 0.7465884610505475;
    msg.dive_fraction_max = 0.9446731241805152;
    msg.climb_fraction_max = 0.26157670041578174;
    msg.bank_max = 0.7122628771317101;
    msg.p_max = 0.1223061762115254;
    msg.pitch_min = 0.023575542171118347;
    msg.pitch_max = 0.8813320599392317;
    msg.q_max = 0.3350735362155861;
    msg.g_min = 0.9319246513040104;
    msg.g_max = 0.5459270301492798;
    msg.g_lat_max = 0.4788757438066099;
    msg.rpm_min = 0.5667148451340802;
    msg.rpm_max = 0.8339433705181466;
    msg.rpm_rate_max = 0.11906031965687303;

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
    msg.setTimeStamp(0.9526686898829583);
    msg.setSource(28811U);
    msg.setSourceEntity(236U);
    msg.setDestination(11231U);
    msg.setDestinationEntity(132U);
    msg.op = 179U;
    msg.speed_min = 0.08483658035565145;
    msg.speed_max = 0.6329152912404653;
    msg.long_accel = 0.5262711596500674;
    msg.alt_max_msl = 0.3768678309235012;
    msg.dive_fraction_max = 0.9442442574721828;
    msg.climb_fraction_max = 0.45772071193974384;
    msg.bank_max = 0.5582092027248994;
    msg.p_max = 0.8137149144420497;
    msg.pitch_min = 0.4337957804876261;
    msg.pitch_max = 0.2587417284015897;
    msg.q_max = 0.5644445142635012;
    msg.g_min = 0.3920815934801011;
    msg.g_max = 0.2599174195417605;
    msg.g_lat_max = 0.46013043457566827;
    msg.rpm_min = 0.7569772666762044;
    msg.rpm_max = 0.6808292805212559;
    msg.rpm_rate_max = 0.2585868656360508;

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
    msg.setTimeStamp(0.21381477315515784);
    msg.setSource(33069U);
    msg.setSourceEntity(80U);
    msg.setDestination(28220U);
    msg.setDestinationEntity(35U);
    msg.op = 42U;
    msg.speed_min = 0.5762587443635635;
    msg.speed_max = 0.21065983008191025;
    msg.long_accel = 0.9603250920176947;
    msg.alt_max_msl = 0.8319546491992275;
    msg.dive_fraction_max = 0.47117550494162475;
    msg.climb_fraction_max = 0.12495252949189861;
    msg.bank_max = 0.9567823880788486;
    msg.p_max = 0.28473040545166095;
    msg.pitch_min = 0.45662828960494095;
    msg.pitch_max = 0.8438020140773691;
    msg.q_max = 0.0867154692927794;
    msg.g_min = 0.25034126537656876;
    msg.g_max = 0.991053122513468;
    msg.g_lat_max = 0.6163131510624236;
    msg.rpm_min = 0.46609719208307665;
    msg.rpm_max = 0.17354506650297863;
    msg.rpm_rate_max = 0.903044457348831;

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
    msg.setTimeStamp(0.5982509537635575);
    msg.setSource(58659U);
    msg.setSourceEntity(210U);
    msg.setDestination(46565U);
    msg.setDestinationEntity(74U);
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 39U;
    tmp_msg_0.comm_interface = 176U;
    tmp_msg_0.period = 22757U;
    tmp_msg_0.sys_dst.assign("HRWZOTOUVBEJBYWWIANQSGJMQGBSCDDCFLXKUWLTOHTNHRGQFKMUBQESJYVKLCNWGUNWIWPIMLKJIDYVRSECLUONIIDJXSYQMNE");
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
    msg.setTimeStamp(0.7676904576532526);
    msg.setSource(2042U);
    msg.setSourceEntity(116U);
    msg.setDestination(11166U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.8491793915978254);
    msg.setSource(25522U);
    msg.setSourceEntity(1U);
    msg.setDestination(52465U);
    msg.setDestinationEntity(38U);
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 226U;
    tmp_msg_0.frequency = 3274655718U;
    tmp_msg_0.min_range = 53465U;
    tmp_msg_0.max_range = 62731U;
    tmp_msg_0.bits_per_point = 216U;
    tmp_msg_0.scale_factor = 0.09943006539448196;
    const char tmp_tmp_msg_0_0[] = {-59, 121, 78, 38, 93, 59, -33, -112, -94, 106, -54, -4, 92, -61, 117, -124, 35, -73, -61, 14, 50, 64, -26, 18, 88, 69, -5, -95, -119, -109, 15, 125, 112, -54, -52, 96, 36, 26, 107, 30, 65, 97, -124, 59, 84, -10, -101, -63, -75, -80, 61, 17, 68, 69, 7, 20, 99, -78, -17, -127, 17, 80, 10, -52, -4, -24, -48, 99, 95, 96, 30, -47, 82, 103, -99};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5994180265258995);
    msg.setSource(29317U);
    msg.setSourceEntity(94U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.3009862608517626;
    msg.lon = 0.11234025009202242;
    msg.height = 0.662318212059719;
    msg.x = 0.4932964845584116;
    msg.y = 0.17942590397000668;
    msg.z = 0.5775458531348675;
    msg.phi = 0.018321583264256702;
    msg.theta = 0.8850277253567937;
    msg.psi = 0.7429547321305147;
    msg.u = 0.5927082279158572;
    msg.v = 0.6033506497557776;
    msg.w = 0.3625960904491642;
    msg.p = 0.1428030148659768;
    msg.q = 0.7053905455570751;
    msg.r = 0.7808632236383459;
    msg.svx = 0.43789250185935413;
    msg.svy = 0.30937251528727816;
    msg.svz = 0.48126338509818156;

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
    msg.setTimeStamp(0.5769351598342413);
    msg.setSource(16270U);
    msg.setSourceEntity(215U);
    msg.setDestination(55758U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.30668377271634417;
    msg.lon = 0.830931332925367;
    msg.height = 0.7705342657115148;
    msg.x = 0.9358089330609134;
    msg.y = 0.4779646389597838;
    msg.z = 0.32287196912210725;
    msg.phi = 0.09201436283947584;
    msg.theta = 0.2914397949713631;
    msg.psi = 0.2561245751015553;
    msg.u = 0.38393282719213295;
    msg.v = 0.9973913617293484;
    msg.w = 0.9488624396498282;
    msg.p = 0.28304215735865856;
    msg.q = 0.5693753502701018;
    msg.r = 0.4116349381697261;
    msg.svx = 0.1037272783591019;
    msg.svy = 0.013182612240722147;
    msg.svz = 0.4353243906756282;

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
    msg.setTimeStamp(0.18932497572456497);
    msg.setSource(54881U);
    msg.setSourceEntity(82U);
    msg.setDestination(8970U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.41218413843147095;
    msg.lon = 0.7484263535822603;
    msg.height = 0.011761103256352712;
    msg.x = 0.58721639042271;
    msg.y = 0.49608056962757885;
    msg.z = 0.4332189336116583;
    msg.phi = 0.30908448099933017;
    msg.theta = 0.3697708518845142;
    msg.psi = 0.8017313646244454;
    msg.u = 0.5484648410507786;
    msg.v = 0.9424705537300302;
    msg.w = 0.6390794703068489;
    msg.p = 0.35793904350694405;
    msg.q = 0.5009448634203937;
    msg.r = 0.4281062361159451;
    msg.svx = 0.055475018899415085;
    msg.svy = 0.07264408433730651;
    msg.svz = 0.8385702029383224;

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
    msg.setTimeStamp(0.4849640891914675);
    msg.setSource(42777U);
    msg.setSourceEntity(144U);
    msg.setDestination(46749U);
    msg.setDestinationEntity(67U);
    msg.op = 51U;
    msg.entities.assign("VBLBRZGYHWZQNIMQOKQGSVUXYHDTANCMYJLNGPINLZJVJTMRPKYVPSJSXEENXKEGBQASDGENLDEHYRTLXQXGMGHRGZYMDTNPDFMGMEPXBCVALYUMWUUURJCQBSUEKBILFQSTJJDOVZAXYIBKSHRIWPBOUHOMBINCKRJCDLAWEWNOHZOVIHJQVRUTDIYDY");

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
    msg.setTimeStamp(0.5669285589074079);
    msg.setSource(5557U);
    msg.setSourceEntity(251U);
    msg.setDestination(35298U);
    msg.setDestinationEntity(16U);
    msg.op = 200U;
    msg.entities.assign("CQHELXOURPMTOKBMHHDLQBDCTNXWLKKUASWLDFPATJGOVAVZKIZICTCPXCBWTBZJNKNZQETBUIBIODEOJIRZJVRSNVSAFZFFHSUPELCRIDWSLWGASEVZVMLABJMYHFKQQXTHOTZORUBHYXECUCHAEIIJCWSUOXJQFYGSXKGWOPONBFDUMQMMKJNGPJZYTFYBNDXWALTUDRLEGAPYYCNRYQGXGDFALPVXYDHKZRRKSWPVJYGGFNVSHIMI");

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
    msg.setTimeStamp(0.035038532439556125);
    msg.setSource(47979U);
    msg.setSourceEntity(249U);
    msg.setDestination(51197U);
    msg.setDestinationEntity(103U);
    msg.op = 117U;
    msg.entities.assign("ETYDIMRBCEPNIDFXBVOEIVWGCXIQEXSFLWOIXYEAYWBJPYCUMNOADHTRYMMOZTJJJYWBHANRIRPLLNQLWPJDPPLLJCWRCVCQHXSKEKTPZMSGSUXQKLZLZOOAVBDKPFZKSHXPIQFUMNKJGFAMWZCGWTYUFDCNXRZOUTMPVEMFNAGSHHBRGSUKNBBDCTYWVZHJKJVMAGQDQISWBUGARXDOHBOZIEAFVVQSHRKLGKQTTVEFJHLSINEAUY");

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
    msg.setTimeStamp(0.06351792005525092);
    msg.setSource(33200U);
    msg.setSourceEntity(244U);
    msg.setDestination(17957U);
    msg.setDestinationEntity(84U);
    msg.type = 71U;
    msg.speed = 20348U;
    const char tmp_msg_0[] = {-87, 0, 24, 126, 73, 99, 76, 75, -64, 11, 96, 53, 5, -45, 9, 57, 124, 72, -116, -61, 12, 61, 62, 88, -81, -54, -128, -93, 78, 16, -95, 19, -56, 116, -38, -105, 86, -97, -116, -39, -72, -60, -127, 94, -17, -53, -56, 85, -88, -17, 26, -34, -117, -67, -80, -120, 53, -15, 126, 125, 6, 81, -120, 67, -37, -33, -83, 75, -21, 46, 8, -56, -120, -124, -63, 55, 40, 49, 96, 35, 13, 74, -59, 108, 34, 114, -30, -126, -95, -104, 112, -110, 97, -77, 31, -72, 11, -103, -15, -19, 124, -60, -101, -103, 40, 124, 36, 119, -8, 12, 111, -121, 39, -65, 101, -89, 126, 110, 48, -7, -114, -38, -84, -16, 2, 37, 104, 55, 57, -55, 124, -106, -59, 105, -3, 15, 23, -1, -30, -54, 96, 99, 31, -70};
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
    msg.setTimeStamp(0.4517087099946058);
    msg.setSource(42372U);
    msg.setSourceEntity(226U);
    msg.setDestination(4321U);
    msg.setDestinationEntity(166U);
    msg.type = 34U;
    msg.speed = 26693U;
    const char tmp_msg_0[] = {-113, 84, 98, -29, 117, 35, 81, 58, 7, -16, -119, 97, 24, 46, -74, 117, -76, -105, -39, 123, 15, -78, -96, -103, 3, -79, 91, -36, 114, 77, -31, 95, -71, -13, -81, -11, 124, -53, -118, 46, -67, -79, -43, 54, -56, 0, 96, 27, 2, 77, -79, -86, 11, 20, -127, 78, 124, -102, -10, -32, 96, 115, 7, 103, 64, 55, 98, -57, -128, 24, 85, -51, -25, 86, 90, -79, -88, -90, 106, -67, -25, -39, 33, -58, -49, 27, 105, 39, -101, -66, 47, 105, 20, -66, -76, 37, 76, -112, -85, 61, -124, 114, 45, 5, -127, 88, 77, 12, -122, 122, 22, 13, 30, -41, -28, -12, 55, -120, 54, 105, -13, -108, 73, 84, -29, 21, 79, -3, -118, -15, -83, 97, -24, 55, 24, 26, -91, -92, 57, -110, -115, -69, 121, -31, -34, 65, 119};
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
    msg.setTimeStamp(0.7971972655257655);
    msg.setSource(10367U);
    msg.setSourceEntity(93U);
    msg.setDestination(59504U);
    msg.setDestinationEntity(67U);
    msg.type = 0U;
    msg.speed = 45690U;
    const char tmp_msg_0[] = {-31, -5, 60, 123, 92, 61, 45, 10, -32, 41, 96, 15, -8, 106, -49, -5, 67, 111, -25, -67, 38, -18, -70, 31, -56, -46, 85, 39, 75, 90, -93, -100, 117, -38, -123, 125, -65, -121, -55, 5, -37, -105, 30, 125, -116, 98, 41, 112, -58, 0, 113, 52, 16, 81, -5, 12, 111, -7, 0, 90, 123, -108, 24, -103, 56, 36, -20, 36, -128, 113, 59, 9, 124, -60, 107, -73, 26, -31, -23, -68, -5, 62, -33, 119, -37, -51, 62, -25, 43, 39, 18, -11, -83, -83, -54, 108, -2, 63, -36, 70, -68, 118, 103, 32, -32, -40, 22, 99, -94, 36, -53, -15, 126, 110, 68, -116, 40, -77, 61, 41, 105, -105, -25, 89, 14, -110, 121, 67, -94, 58, -5, 16, -17, -5, 74, -30, -21, -116, 73, 3, -5, 51, 95, -59, -115, 109, -5, -69, 21, -53, 57, 119, -59, 12, 28, 60, -40, -75, -26, -75, -6, -75, 44, -1, -30, 3, 35, 88, -94, 66, -98, -70, 6, 52, -127, 124, -65, -120, -47, 35, -98, 13, -5, -78, 51, -98, 53, 30, -105, 123, -89, 47, -108, -106, -23, 87, -7, 75, 76, 25, 81, 69, -90, -58, 5, 117, -27, 30, -111, 89, -75};
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
    msg.setTimeStamp(0.0006151345381046891);
    msg.setSource(38212U);
    msg.setSourceEntity(41U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(113U);
    msg.op = 185U;
    msg.tas2acc_pgain = 0.4797388061523987;
    msg.bank2p_pgain = 0.19945624120284788;

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
    msg.setTimeStamp(0.37747332332264916);
    msg.setSource(52376U);
    msg.setSourceEntity(2U);
    msg.setDestination(63593U);
    msg.setDestinationEntity(117U);
    msg.op = 217U;
    msg.tas2acc_pgain = 0.8736908462154587;
    msg.bank2p_pgain = 0.26982620100789156;

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
    msg.setTimeStamp(0.6340514568547471);
    msg.setSource(22088U);
    msg.setSourceEntity(89U);
    msg.setDestination(51891U);
    msg.setDestinationEntity(40U);
    msg.op = 56U;
    msg.tas2acc_pgain = 0.29433162638663923;
    msg.bank2p_pgain = 0.22839870049319988;

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
    msg.setTimeStamp(0.7721237748936768);
    msg.setSource(26786U);
    msg.setSourceEntity(85U);
    msg.setDestination(20879U);
    msg.setDestinationEntity(10U);
    msg.available = 344878976U;
    msg.value = 8U;

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
    msg.setTimeStamp(0.1689111841634281);
    msg.setSource(46108U);
    msg.setSourceEntity(148U);
    msg.setDestination(63070U);
    msg.setDestinationEntity(167U);
    msg.available = 928134944U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.7721091922109439);
    msg.setSource(57077U);
    msg.setSourceEntity(25U);
    msg.setDestination(19201U);
    msg.setDestinationEntity(97U);
    msg.available = 2036590740U;
    msg.value = 183U;

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
    msg.setTimeStamp(0.874922859066383);
    msg.setSource(2367U);
    msg.setSourceEntity(17U);
    msg.setDestination(17643U);
    msg.setDestinationEntity(193U);
    msg.op = 144U;
    msg.snapshot.assign("JLJVCFUTFPAMNHZSEVDPUJHXIMG");
    IMC::SimAcousticMessage tmp_msg_0;
    tmp_msg_0.lat = 0.8596247827867718;
    tmp_msg_0.lon = 0.11487090234355068;
    tmp_msg_0.depth = 0.21663702550624453;
    tmp_msg_0.sentence.assign("QZETORSQEMXRXBGHMLRSPVEJATDOIRQVLVGYADRDMALBYFSZRUJWXXKWWTTMDJIELCKLJOOYNNZCMUPKBGUBAMNVEYCCDWVTFYWRZQCTQONYBHGAHXJCJYAXNKGAGAVDOQWPTJNMWUASGGHGZJOIMBSVTPLKLVKJOUJPMWWHYUXBEMPNBUIKHRECPFBOCQNHDQSAFUHFZVOUHLZCPPZFQIZDINWXZIEFXXPSHRSNTKEFQVRTUFFKYDY");
    tmp_msg_0.txtime = 0.016669697681645612;
    tmp_msg_0.modem_type.assign("UJRFOWWFZDMSYJPKVFJ");
    tmp_msg_0.sys_src.assign("RNNIYICBOXCQJCQBGPFVYMTONNVLXXEU");
    tmp_msg_0.seq = 31290U;
    tmp_msg_0.sys_dst.assign("BAKOEINTAHNZZJZLAWPJIAPQIGPQPAMVRKELPGLKXWRHWVRAXSBDMADNHMFDTWYGWJJYVGESFCPCKDYTBYINSSTMGKQGPRYEUFIZROWOXSMNWUIWESCBTNCVOQRNNSZLXVKHLYUTBEOZFIKGPVRAPEGIWMMZCLIBHMJHBDFEJARFVUHVQFBKTUZBOYUIUFKQDVNAZ");
    tmp_msg_0.flags = 127U;
    const char tmp_tmp_msg_0_0[] = {111, -113, 75, -102, 88, 107, -72, -96, -107, 104, -49, -14, 117, 111, 83, -10, 6, 75, -100, -27, -98, -52, -96, -26, -41, 104, 68, 110, -83, 105, -102, -68, 84, 69, -35, 59, -25, -100, -99, -28, -77, 65, -59, 9, -18, 120, -12, 114, -37, -116, 113, -94, -112, 69, -63, -106, -74, -32, 41, 5, 118, -78, 38, 51, 5, -64, -26, 52, 82, 56, 123, 103, 51, 0, 103, -102, 29, -2, 70, 108, 2, 53, 60, 34, 3, -121, -23, 80, 116, -8, 125, 105, 32, -17, -34, 58, 78, -15, -46, 115, -94, -88, -19, 87, 15, 54, 75, 110};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6750883538390957);
    msg.setSource(62769U);
    msg.setSourceEntity(32U);
    msg.setDestination(19008U);
    msg.setDestinationEntity(80U);
    msg.op = 183U;
    msg.snapshot.assign("FJFGKKZVQCCLZMHAQCEJLAIRAIXXJIGEDCHIBQWDDPXMQZVWTNKGNFQAJXHCVDEBXKXIITZDOKTYYTHUYKNBBQPMUPOAKLKOEUEWFQKALFQRNVGVMWSDNBOWFJCVNFPTWHEMRYSOUUUHGCYQNZCYWZBOTPHNYXGBOGSJIMSVLDUTJ");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 22877U;
    tmp_msg_0.ttl = 17627U;
    tmp_msg_0.destination.assign("XGMQAVSRDFIFLZOVFBHMDRGFQLKYLWWYMZHBIGSXZSHAA");
    const char tmp_tmp_msg_0_0[] = {-43, -58, -9, 100, 62, 20, 73, 38, 124, 9, 49, 35, 37, -9, 80, -26, 45, -11, 17, 1, -35, -115, 94, 78, -37, 84, -92, -69, -124, -40, 16, 94, -70, 88, 68, 50, 65, 99, 124, -29, 40, 121, 44, 34, 78, 43, -15, -26, -77, 109, 45, 15, 60, 44, -127, -49, -61, -14, 35, 102, -26, -57, 125, -65, -113, -37, -121, 116, 45, 29, -6, -90, -76, -7, 100, -72, 87, 108, 7, -36, 125, -55, -99, 119, 53, -5, -31, 54, -55, 50, 94, -17, -60, -3, -122, -105, 109, 5, 39, 113, 14, -67, -105, 79, 107, 78, -53, -52, -100, -122, -91, -50, 109, -25, -109, -105, -53, 30, 28, -57, -63, -40, -57, 81, -100, 101, -48, 125, 70, -104, -55, 53, -54, -5, 125, 83, -65, -45, -12, 80, 34, -69, -100, -51, -79, -27, -107, 71, -70, -38, -37, 110, -126, -85, 65, -38, 82, 31, -96, -128, 108, 105, -69, -43, 86, 1, 105, -65, 1, 35, -71, -92, 47, 60, -80, -65, 0, 34, 45, -62, -122, 37, 24, -51, 85, -118, -10, -127, 58, -19, 114, -114, -7, -85, 122, -107, -86, -35, -3, -112, -95, 43, 11, -68, -92};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9352418231375401);
    msg.setSource(1092U);
    msg.setSourceEntity(82U);
    msg.setDestination(25038U);
    msg.setDestinationEntity(156U);
    msg.op = 95U;
    msg.snapshot.assign("IAQXBRCXJEQJMGRK");
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6872372771504068;
    tmp_tmp_msg_0_0.lon = 0.8550167238093503;
    tmp_tmp_msg_0_0.height = 0.49882815130699687;
    tmp_tmp_msg_0_0.x = 0.3622579985081791;
    tmp_tmp_msg_0_0.y = 0.8333458243184273;
    tmp_tmp_msg_0_0.z = 0.888270134623776;
    tmp_tmp_msg_0_0.phi = 0.6780028885470526;
    tmp_tmp_msg_0_0.theta = 0.3397652477537385;
    tmp_tmp_msg_0_0.psi = 0.3848157482692587;
    tmp_tmp_msg_0_0.u = 0.14805212338768214;
    tmp_tmp_msg_0_0.v = 0.021609343957090577;
    tmp_tmp_msg_0_0.w = 0.0015371426029663349;
    tmp_tmp_msg_0_0.vx = 0.0605631208839541;
    tmp_tmp_msg_0_0.vy = 0.7956907711113798;
    tmp_tmp_msg_0_0.vz = 0.4834164747779015;
    tmp_tmp_msg_0_0.p = 0.05425821976171674;
    tmp_tmp_msg_0_0.q = 0.4854479089421091;
    tmp_tmp_msg_0_0.r = 0.5768273565412255;
    tmp_tmp_msg_0_0.depth = 0.9239003832950008;
    tmp_tmp_msg_0_0.alt = 0.338775424148294;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 134U;
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
    msg.setTimeStamp(0.11372332240762484);
    msg.setSource(5267U);
    msg.setSourceEntity(78U);
    msg.setDestination(58290U);
    msg.setDestinationEntity(11U);
    msg.op = 122U;
    msg.name.assign("IEQUUFVELPSWAOMWUINSDABZIJXZRUJGAHUJBFPCQOOQCYYNTRSFZKHWPJKBLMWYRUGCNOFDGKLFIBDFXJPAOXPCYQSDSZLWRELGUTPCDSKZIWTRPTNVEYAOQXIYKDQBYHDWVPVBGEZYBD");

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
    msg.setTimeStamp(0.5555377986850567);
    msg.setSource(60199U);
    msg.setSourceEntity(160U);
    msg.setDestination(25704U);
    msg.setDestinationEntity(79U);
    msg.op = 151U;
    msg.name.assign("RXGWDQNQJSCDGIDKGBHCSACZBACSJVSRQYWWMBPAXORLLUDBVLFRIMNANNBCOWKQZSCIPTJDXOZPVHRZECBODKVIZJUUQYJSHALUNGFMFOHIEEAOVAZLBIQHWEPNTLXXDJMIXYHEGDGSUTZZTWYCPQBSVBGVKRVQHQNFIHLETGFXZFOPNOSRGEFMESTIZROKTCJXAHFJICEEYWWTPDMJMKPNKRFHUTOJYBMLWKMVVAYPR");

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
    msg.setTimeStamp(0.9149350109206618);
    msg.setSource(49550U);
    msg.setSourceEntity(157U);
    msg.setDestination(2188U);
    msg.setDestinationEntity(203U);
    msg.op = 8U;
    msg.name.assign("XWYSDFSAHKCXYIVQMHRVZCTSJAKWKTOTPBOSPNGNZEFARILGCWIOBUGZPHPXBIKLRAGJBBIERHYFKHQPDWNOIRECELLWMRDFFVPEKUDLOZNTRWTDEKFZYWORYMZJTVXQRUSM");

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
    msg.setTimeStamp(0.3511412509342686);
    msg.setSource(6090U);
    msg.setSourceEntity(185U);
    msg.setDestination(22273U);
    msg.setDestinationEntity(245U);
    msg.type = 60U;
    msg.htime = 0.5569220935422503;
    msg.context.assign("WEKIMFGVPHBSFSHJDIZYZOUCIMQYEBYAVBKYVLQGYIOTZAKLRBAQFLVZQBVKPXCBNUGQINITORLPZWUFCYYJDJHDTKTQASSWCAOME");
    msg.text.assign("UUQRQDJZPKAMZTJGNWMFSAKKXFGVRHXIUHVRECW");

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
    msg.setTimeStamp(0.34601257848488687);
    msg.setSource(24511U);
    msg.setSourceEntity(229U);
    msg.setDestination(60971U);
    msg.setDestinationEntity(247U);
    msg.type = 27U;
    msg.htime = 0.7611096437786325;
    msg.context.assign("IJFWHVFPFKAKIZWHTXCRWQAZZMMNEBBCGAUVMGATXKJQULNDOMVGTHBWDMSCFLREPKICHEBQEGOXVQGMMQNPAQREFLEQYIWKULPOPDHIJXLEHFJYYZSTJSNQWZUAUWLZNJCZNCYQKTJIXVBPDRFJKAUJGCNLNKXLDLSORNNSMOTTYRWECOKSKVYACTFUGBIYBDRUDMVMYIUUFQSBZTOOGIRXPGHDAPRRPZOBXVEVVCIYPGJOHDDZXS");
    msg.text.assign("WKSKACRLIMEYSGATGHLCAZMZEZVFBPFWXVBBMQDMGAOZGKNPOLNXGCBKIBDARFLUW");

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
    msg.setTimeStamp(0.8132825791541995);
    msg.setSource(47049U);
    msg.setSourceEntity(231U);
    msg.setDestination(35015U);
    msg.setDestinationEntity(68U);
    msg.type = 51U;
    msg.htime = 0.2732474975284881;
    msg.context.assign("UNHDVGTWECOIKUPMSONZPVGKIGTTMDHXQCUIIYYBMSXDUEVFPPELAXVLFACPQHNZVRJBKFCGJJNGEVBRPDSSYAFXAVMZOEDZQTVHFSR");
    msg.text.assign("SITWIWHPENPVNPHYWRBLNSBADTTCVTAZRQUNHEGITFYMEGFWEGQJPIXLVECJMEHZRLUXZCHJTJATMIFAOKGWMVKQJVBQRYNFCUCFSXXUNLOFKASWGKHVJAUPOBAEQQFGOCWRDLXJRVICJBCX");

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
    msg.setTimeStamp(0.7618105594473983);
    msg.setSource(31598U);
    msg.setSourceEntity(126U);
    msg.setDestination(6475U);
    msg.setDestinationEntity(119U);
    msg.command = 21U;
    msg.htime = 0.5133022301003785;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 26U;
    tmp_msg_0.htime = 0.08696748995311199;
    tmp_msg_0.context.assign("XUHYBXSUMWCFPNKFZXVSBEPVEGUPFGWWQ");
    tmp_msg_0.text.assign("VNWIPEKGBGQOFWIEYUKTFVXJDBXCPYVROQMXGDVHSFRZIGUKLNJXZYMIWCGSJCALQGFBTBZTFQBCQFSJLTBPDNOGLMYLUEPCIUYSLBACPPAQTWZGERMDLMTNKPUKOUJBJTRNLWIDMKCIFBDZGZWSUNKXEZROTAWGWL");
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
    msg.setTimeStamp(0.5374564830212883);
    msg.setSource(7571U);
    msg.setSourceEntity(198U);
    msg.setDestination(3286U);
    msg.setDestinationEntity(28U);
    msg.command = 72U;
    msg.htime = 0.2174825913344285;

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
    msg.setTimeStamp(0.4279375117909048);
    msg.setSource(53589U);
    msg.setSourceEntity(26U);
    msg.setDestination(29401U);
    msg.setDestinationEntity(220U);
    msg.command = 158U;
    msg.htime = 0.13174881926401938;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 164U;
    tmp_msg_0.htime = 0.07276257561890798;
    tmp_msg_0.context.assign("UPKWVXVJVPKMHJMXMYXTWLTGRAINPYAIDHRKJFDYSLOMESSBSZCLDXAJJFVQRUUZHLMSDKPIVCFDQBAXZTCEOHTHNELPDITLMYZOCDGWIWWGCXAQLJNFEAQOOPQOYCPEVKKGSNRGSPBIBRUWNKBXTYBDITSKTGLEXCZWVQYVGQZZGHNMKIUYSVOPBNXELHIIBROUOREFFYRFUKEQHZWJSBHGYQZ");
    tmp_msg_0.text.assign("TEDCOQAFUJEEQVYEVSQOCTBVXZFNKMJCHYPXFOSIPGBXGZXRPHBFJWYORGXNEULXDUHZSZUWDDIYBWGIAVJK");
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
    msg.setTimeStamp(0.8846087999824455);
    msg.setSource(29607U);
    msg.setSourceEntity(160U);
    msg.setDestination(64818U);
    msg.setDestinationEntity(7U);
    msg.op = 33U;
    msg.file.assign("PGVEZSMAHTINYOJQZBJBMSDYRWKZXQXNDGRRJNSGHJBIYWUVPOM");

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
    msg.setTimeStamp(0.4377291405134397);
    msg.setSource(53641U);
    msg.setSourceEntity(132U);
    msg.setDestination(43980U);
    msg.setDestinationEntity(182U);
    msg.op = 223U;
    msg.file.assign("GMSSOODLMUZGYXUFXPHSQYRZWWPGEERYPPMUYNDZFFLFVBCBAKJJTLSNZQNKMHQFZSPCMIKJACDQIVELQVUXVQETUBIWMPROYTTYINCCZGJASWMETXKEKWOOALJDZ");

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
    msg.setTimeStamp(0.3287786662102111);
    msg.setSource(5434U);
    msg.setSourceEntity(113U);
    msg.setDestination(47888U);
    msg.setDestinationEntity(49U);
    msg.op = 52U;
    msg.file.assign("TRKFGAZUGSYXMBNEXCUEDOLIFYKRNLHSUULINZBXPGFCQIGIMLGWIVBJVUBFMBPERQKFMAZBRDKMWXYVKBEJXKCHCSOEYDBLLFHWWXNVUAXTHPDRTCDVYQSOVOVQEQYBGLIMWYAPQFEAHPZJJROPRSTBIHTAPNCWQRQNDHTGSOPDOISVKOLKPYAHRTYOFJCTZMWSSWZDUPZJMWZHGRGZG");

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
    msg.setTimeStamp(0.8320640218471227);
    msg.setSource(24372U);
    msg.setSourceEntity(145U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(57U);
    msg.op = 89U;
    msg.clock = 0.35019446375115704;
    msg.tz = -101;

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
    msg.setTimeStamp(0.9054341010781174);
    msg.setSource(32712U);
    msg.setSourceEntity(144U);
    msg.setDestination(41401U);
    msg.setDestinationEntity(50U);
    msg.op = 105U;
    msg.clock = 0.4959878976781974;
    msg.tz = 80;

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
    msg.setTimeStamp(0.4654283626464599);
    msg.setSource(62936U);
    msg.setSourceEntity(140U);
    msg.setDestination(30681U);
    msg.setDestinationEntity(192U);
    msg.op = 156U;
    msg.clock = 0.4383757888071528;
    msg.tz = 109;

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
    msg.setTimeStamp(0.9296699116166534);
    msg.setSource(32515U);
    msg.setSourceEntity(171U);
    msg.setDestination(17384U);
    msg.setDestinationEntity(93U);
    msg.conductivity = 0.8373978342305802;
    msg.temperature = 0.5163701518459184;
    msg.depth = 0.34628048875386785;

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
    msg.setTimeStamp(0.7919346632850705);
    msg.setSource(25833U);
    msg.setSourceEntity(42U);
    msg.setDestination(12988U);
    msg.setDestinationEntity(148U);
    msg.conductivity = 0.7024587666135889;
    msg.temperature = 0.4439641139470343;
    msg.depth = 0.5002018279528471;

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
    msg.setTimeStamp(0.04136250046992562);
    msg.setSource(54104U);
    msg.setSourceEntity(87U);
    msg.setDestination(64602U);
    msg.setDestinationEntity(226U);
    msg.conductivity = 0.37877588911940907;
    msg.temperature = 0.8662421946823311;
    msg.depth = 0.045332708835054025;

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
    msg.setTimeStamp(0.37970281724052934);
    msg.setSource(64972U);
    msg.setSourceEntity(56U);
    msg.setDestination(18243U);
    msg.setDestinationEntity(191U);
    msg.altitude = 0.09749092737063048;
    msg.roll = 6243U;
    msg.pitch = 35081U;
    msg.yaw = 45046U;
    msg.speed = -31885;

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
    msg.setTimeStamp(0.47246041288470897);
    msg.setSource(64544U);
    msg.setSourceEntity(16U);
    msg.setDestination(50846U);
    msg.setDestinationEntity(165U);
    msg.altitude = 0.9262109018249016;
    msg.roll = 36929U;
    msg.pitch = 26607U;
    msg.yaw = 64887U;
    msg.speed = -5922;

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
    msg.setTimeStamp(0.9047808687592519);
    msg.setSource(54454U);
    msg.setSourceEntity(61U);
    msg.setDestination(48737U);
    msg.setDestinationEntity(178U);
    msg.altitude = 0.9567067920608533;
    msg.roll = 9157U;
    msg.pitch = 12387U;
    msg.yaw = 65362U;
    msg.speed = -19482;

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
    msg.setTimeStamp(0.002020892039807265);
    msg.setSource(41395U);
    msg.setSourceEntity(45U);
    msg.setDestination(32335U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.7770355073893096;
    msg.width = 0.46307956141737083;
    msg.length = 0.8988154462997702;
    msg.bearing = 0.9432045374636325;
    msg.pxl = -2802;
    msg.encoding = 39U;
    const char tmp_msg_0[] = {-35, -78, 105, 46, 18, -85, 57, -14, -68, -65, -38, 23, -91, -36, 83, -76, 31, 57, -71, 102, -122, 61, -35, -75, -102, 45, -91, -79, 103, -74, -82, -15, -44, -32, -8, -38, -70, -122, -123, -74, 103, 44, 63, 43, -18, -20, 99, -67, 7, 52, 80, 106, -92, 22, -76, -102, -25, -45, -117, -65, -44, 6, -1, -126, -88, -100, -72, 84, -44, 62, -40, -26, 37, 24, 75, -84, -64, -55, -4, 95, 77, 65, 11, -126, -97, -12, -72, 52, -8, 52, -69, -26, 0, -120, -41, -8, -116, 104, 5, -31, 8, -40, 19, -81, -51, 74, 11, -64, 34, 28, 13, -46, -115, -114, 40, 64, -42, -116, -80, 124, -117, 102, -115, 121, 74, -89, 17, 38, -6, 75, -123, -95, 1, 19, -25, -87, 84, -22, 107, 15, 110, -60, 122, 92, 41, -47, -36, -63, -73, -58, 21, 113, -65, 63, 67, -117, -90, 37, -40, -108, 6, -83, 18, -82, -53, -74, 45, -124, 109, 80, -39, -50};
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
    msg.setTimeStamp(0.09462948612686328);
    msg.setSource(34360U);
    msg.setSourceEntity(71U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(151U);
    msg.altitude = 0.406840694219203;
    msg.width = 0.5723873038862834;
    msg.length = 0.6788620200611847;
    msg.bearing = 0.14267163850301612;
    msg.pxl = 31890;
    msg.encoding = 164U;
    const char tmp_msg_0[] = {49, -55, 83, -84, 18, 3, 13, -57, -128, -66, -37, 117, 14, 93, 42, -48, -84, 44};
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
    msg.setTimeStamp(0.7311279723376424);
    msg.setSource(10676U);
    msg.setSourceEntity(24U);
    msg.setDestination(15832U);
    msg.setDestinationEntity(139U);
    msg.altitude = 0.3828864075211853;
    msg.width = 0.12229598979640766;
    msg.length = 0.746122799928323;
    msg.bearing = 0.6891163606466965;
    msg.pxl = 18228;
    msg.encoding = 82U;
    const char tmp_msg_0[] = {-39, 35, -109, -91, -34, 65, -6, 56, -69, -113, -42, -4, 53, 71, -38, -28, 69, -53, -66, -126, 79, -25, 106, -34, 100, -50, 121, -125, -91, -61, -33, -23, -82, 53, 16, 82, 78, 67, 31, -116, 99, -75, 117, -53, 60, -43, -29, -91, 107, 81, -85, -118, 19, 126, -81, 45, 87, 23, 14, 117, 25, 54, -88, 43, -27, 23, 43, -82, -72, 65, 13, -73, -41, -62, 64, -12, -109, 74, 63, -84, 90, -125, 21, -100, -38, 110, -120, 66, -32, 122, -111, -53, -24, 41, -100, -124, -108, 67, 73, 73, -2, 51, 93, -65, -86, 67, 40, 23, -52, -83, -36, 26, -31, 114, 102, 35, 99, -39, -80, -101, -124, 115, -99, -68, -22, -31, 116, 9, 39, -65, 32, -111, 105, -8, -73, -35, -103, -93, 51, -31, 99, 48, 56, -60, -87, 58, 69, -58, -4, 8, 52, -123, -11, 96, -100, -57, 50, 7, -36, -64, -19, -38, 21, -125, -66, 94, 69, -23, -101, 44, -56, 12, 80, -123, 51, -51, 62, 99, 10, 66, -90, 110, 7, -62, -78, -112};
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
    msg.setTimeStamp(0.5366691508921495);
    msg.setSource(59298U);
    msg.setSourceEntity(232U);
    msg.setDestination(32377U);
    msg.setDestinationEntity(229U);
    msg.text.assign("DKXRVASOBBSDYCKBTVVHMEAJVPXIDFPGUGQWEQBORKJJPLYWOZCVWIZFNBYUCMIRZPBQHNDUUORSXUMPQVELZHLKAJXLCWLALPNDYZJEUICLJDJKEEIJNNWTATYHMOTFOFCGHOEGSPWDHRARMGTIOXNLZWXUFPEMMBXGQSMWGNTYUGFXIYHEYZTIGLTASVLYCRCBSDHQCIQDQTMSMVTK");
    msg.type = 124U;

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
    msg.setTimeStamp(0.4973252987979918);
    msg.setSource(34110U);
    msg.setSourceEntity(74U);
    msg.setDestination(7317U);
    msg.setDestinationEntity(215U);
    msg.text.assign("AVCAHKJVVECGZLJKUXJU");
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
    msg.setTimeStamp(0.6242729380116985);
    msg.setSource(9138U);
    msg.setSourceEntity(208U);
    msg.setDestination(13481U);
    msg.setDestinationEntity(26U);
    msg.text.assign("QENJICRQIZFJVOQIOUHYRIOYADJOTAXKUPQNSKXDOXANN");
    msg.type = 164U;

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
    msg.setTimeStamp(0.9044813388085887);
    msg.setSource(15131U);
    msg.setSourceEntity(173U);
    msg.setDestination(11311U);
    msg.setDestinationEntity(164U);
    msg.parameter = 141U;
    msg.numsamples = 50U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 21149U;
    tmp_msg_0.avg = 0.7961696465074133;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5594298017000476;
    msg.lon = 0.2697953212362655;

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
    msg.setTimeStamp(0.5632498396717563);
    msg.setSource(4191U);
    msg.setSourceEntity(201U);
    msg.setDestination(25885U);
    msg.setDestinationEntity(32U);
    msg.parameter = 19U;
    msg.numsamples = 113U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 19696U;
    tmp_msg_0.avg = 0.4135633723507971;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5850058975355491;
    msg.lon = 0.26842020691104906;

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
    msg.setTimeStamp(0.37751196623143746);
    msg.setSource(14043U);
    msg.setSourceEntity(213U);
    msg.setDestination(53923U);
    msg.setDestinationEntity(158U);
    msg.parameter = 37U;
    msg.numsamples = 131U;
    msg.lat = 0.31423869180456243;
    msg.lon = 0.8637804949223142;

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
    msg.setTimeStamp(0.4302065953445867);
    msg.setSource(58423U);
    msg.setSourceEntity(245U);
    msg.setDestination(24733U);
    msg.setDestinationEntity(87U);
    msg.depth = 16306U;
    msg.avg = 0.8467118063866175;

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
    msg.setTimeStamp(0.7261690640169896);
    msg.setSource(5972U);
    msg.setSourceEntity(87U);
    msg.setDestination(34864U);
    msg.setDestinationEntity(95U);
    msg.depth = 49103U;
    msg.avg = 0.2003039999365398;

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
    msg.setTimeStamp(0.952900162182135);
    msg.setSource(65211U);
    msg.setSourceEntity(85U);
    msg.setDestination(14427U);
    msg.setDestinationEntity(200U);
    msg.depth = 32885U;
    msg.avg = 0.6717162737359801;

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
    msg.setTimeStamp(0.6461849700931754);
    msg.setSource(9994U);
    msg.setSourceEntity(180U);
    msg.setDestination(36249U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.7157250319354884);
    msg.setSource(22370U);
    msg.setSourceEntity(202U);
    msg.setDestination(11276U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.34475474876368584);
    msg.setSource(20020U);
    msg.setSourceEntity(78U);
    msg.setDestination(33360U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.1168977738981215);
    msg.setSource(32165U);
    msg.setSourceEntity(197U);
    msg.setDestination(63942U);
    msg.setDestinationEntity(47U);
    msg.sys_name.assign("IILUTGYWBIEEZLTVKQPXGHZOPMYOTSHAWMIUKVANMRYFQSWZNOENLUMAJDWVSPVAPXFXQPGWIQSDEEOPTONDXXEFOCGRMQQCZLJTZSHXFFLEUJIVBBRFQJRYPVDHLGDDBVIBTLGAYIWBPFKXGZGNRLIDFKNRRBHJSNTCAUHUOAEARG");
    msg.sys_type = 3U;
    msg.owner = 50254U;
    msg.lat = 0.6126844736605546;
    msg.lon = 0.592723041765013;
    msg.height = 0.23626565955179102;
    msg.services.assign("FNLVQWZVAPZMGLVEBQNPWPFDWYITOVGLMRKBOAMXDRYPJOAIGUKECTJCFQTUGBLJADMWCQNLZCGVSQUHRNUXSDJXZTETLNN");

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
    msg.setTimeStamp(0.014824283699715002);
    msg.setSource(34503U);
    msg.setSourceEntity(34U);
    msg.setDestination(38869U);
    msg.setDestinationEntity(54U);
    msg.sys_name.assign("SCVFKZMHROQXLUQKJXXMFFKVBUNEAXGISFRDCCGSSAAIRXSTWEGJNWHWWHEYRGRYJJNODVAWBLFBZBCXPEJDKHMRCLEVEFNKDVYACJIWTNNMQJPPEPTUMIQKEZJLNCZQKAFJBORNHMWNOUTMGXGUWVHTYKBKIAQVYZWPPGOQSPDPQCLOBTQLXBLZCKXAA");
    msg.sys_type = 136U;
    msg.owner = 46219U;
    msg.lat = 0.0498810625650129;
    msg.lon = 0.6727845834488791;
    msg.height = 0.4890246266629481;
    msg.services.assign("ISNOEAFFZRXYXLPESMLWZWIJBTEZEGXOUVSIGBQJJSEFUERYQNTDYEITOSWFMAOCQZFPYRVCOHGWYZIWADVBEBHVRDPCZCHKQXSZUULZNIUILNAYBWIYPABGGXWUJQIAAFCTOKJYTGCMLKBJTNLOKHKQOCZHHRJFTGEBXMMDUJ");

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
    msg.setTimeStamp(0.00038509342867509844);
    msg.setSource(81U);
    msg.setSourceEntity(141U);
    msg.setDestination(29496U);
    msg.setDestinationEntity(181U);
    msg.sys_name.assign("AGHUXZPADZMXWQQRCIDJARYFLTIOZVCEGFILGRXEPMBFJNWZCBQKIRAXBJUFYXZTDGEVPUQPSVACOUMRBYSPELYUNWHJCMMQYXXLTNNBGAOADZASVMIBHNOWSUXYPJTRPMAWZNKDTIHTYCSKUKEBKEHNTENOHMOGIYQVCSTDIHQWEBOGWZKLRUHECHVMFLKSZFVEOPFWDGJFDNYLZFUHTQCLVTOPDABGISRPQORINKWUC");
    msg.sys_type = 93U;
    msg.owner = 40370U;
    msg.lat = 0.9852887737705354;
    msg.lon = 0.36450971770241913;
    msg.height = 0.06686130560994652;
    msg.services.assign("FTDWGFSLFJTQWOIPGLUBFZNCUEPBXUWBVRJZJHVUBNRYIWXFEQNMCDBVAVZODISLLEDIGFBXMSCZTXAWKORGSYTZPJOTGHHONXMQVTCEPUCOBYZTVAKLMROAKSAQHQAISWMUMBZLNNGRTZXDLRKXCAFUYDBVX");

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
    msg.setTimeStamp(0.10957765045057544);
    msg.setSource(25032U);
    msg.setSourceEntity(51U);
    msg.setDestination(11145U);
    msg.setDestinationEntity(251U);
    msg.service.assign("EJROKCAZNIUZVSXMZUPCBOIHQQDOOHSCTPWPUUHQWEWEPQRGODEXKOJWMPBVPRIWVJRIAXQCHNBXJP");
    msg.service_type = 145U;

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
    msg.setTimeStamp(0.48029296964203716);
    msg.setSource(7771U);
    msg.setSourceEntity(129U);
    msg.setDestination(33688U);
    msg.setDestinationEntity(126U);
    msg.service.assign("IIJPMHBWSXMGCTYNHBESPKUUWXCKZJSZPQAQVHMHFWQSISOCHBFNHKRYAMWTPFLBHEAYAIYXLKGZMAXQVEBDSDCTLMUPGDVBDSBCTIDKQUTLNYJVDPJGUBVLIRMRWEQPWGO");
    msg.service_type = 131U;

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
    msg.setTimeStamp(0.8024150863231257);
    msg.setSource(10336U);
    msg.setSourceEntity(84U);
    msg.setDestination(30998U);
    msg.setDestinationEntity(49U);
    msg.service.assign("HZUQIFSJVHK");
    msg.service_type = 178U;

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
    msg.setTimeStamp(0.610154662261828);
    msg.setSource(64450U);
    msg.setSourceEntity(202U);
    msg.setDestination(55850U);
    msg.setDestinationEntity(55U);
    msg.value = 0.666402858072207;

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
    msg.setTimeStamp(0.9844081602946662);
    msg.setSource(42175U);
    msg.setSourceEntity(23U);
    msg.setDestination(149U);
    msg.setDestinationEntity(143U);
    msg.value = 0.21639391351850845;

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
    msg.setTimeStamp(0.9895607866836906);
    msg.setSource(59450U);
    msg.setSourceEntity(239U);
    msg.setDestination(1287U);
    msg.setDestinationEntity(96U);
    msg.value = 0.975145651582643;

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
    msg.setTimeStamp(0.10725871615484717);
    msg.setSource(44240U);
    msg.setSourceEntity(35U);
    msg.setDestination(31167U);
    msg.setDestinationEntity(150U);
    msg.value = 0.29178911332870805;

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
    msg.setTimeStamp(0.6946348328986034);
    msg.setSource(39793U);
    msg.setSourceEntity(189U);
    msg.setDestination(59206U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9000797869354205;

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
    msg.setTimeStamp(0.7139491789825791);
    msg.setSource(2650U);
    msg.setSourceEntity(157U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(4U);
    msg.value = 0.5580182717061597;

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
    msg.setTimeStamp(0.3287529701397244);
    msg.setSource(7404U);
    msg.setSourceEntity(208U);
    msg.setDestination(14493U);
    msg.setDestinationEntity(135U);
    msg.value = 0.7130452518243157;

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
    msg.setTimeStamp(0.20459868104632506);
    msg.setSource(39911U);
    msg.setSourceEntity(167U);
    msg.setDestination(14311U);
    msg.setDestinationEntity(24U);
    msg.value = 0.9020067850353954;

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
    msg.setTimeStamp(0.6876927218664084);
    msg.setSource(21423U);
    msg.setSourceEntity(86U);
    msg.setDestination(9923U);
    msg.setDestinationEntity(35U);
    msg.value = 0.680486133580259;

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
    msg.setTimeStamp(0.42696411817752666);
    msg.setSource(41132U);
    msg.setSourceEntity(127U);
    msg.setDestination(49242U);
    msg.setDestinationEntity(31U);
    msg.number.assign("OYMGJKHPXRCGSWKHTQLNREWFKMLNIWJONGGNVRTVCJVJZSTRYUVLEXOIWLMUKQLTHZBPXQNUNQYWVNCFOYNPKNSXQRYIJVMBZZAYHGBXCCCZYWVQHMYOTFEWJIZKOFEHHBWK");
    msg.timeout = 20752U;
    msg.contents.assign("YESCCLAGOOHULWKQPVIRHAQSNCPTDRTIFHLOXHIHLFNBEOPJXGOCKKTKXKDCYIVLJLOAIASYTXKCAWENTYELTZXZVZHDFHBZGURVVRODR");

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
    msg.setTimeStamp(0.7530206142418613);
    msg.setSource(4191U);
    msg.setSourceEntity(27U);
    msg.setDestination(26490U);
    msg.setDestinationEntity(153U);
    msg.number.assign("BGNCKGZBTQRBDMEMIFBMFVYCDKZZAKWFQOEACYXVCLDNQOUPLMYXURAXXLWFQRUDJAYFDQMUMZRXFBVXTSYMAVFDCJHCBJOVMGEAEHIRPJKKHTPQLOMWJTNGGOOUEBDRTSKXDGFPIRLSEPJJULVVSWDGLJIYNJUGPZTWFBVCPWQJUSNRNWINWOTZEASAOXHYPIARYKWWSPHZKUCQLLGISYKRGTYQZPHIICDNMOIEZCUVHBHHQZHSN");
    msg.timeout = 22018U;
    msg.contents.assign("SKRWSWIXVGAQFGXSIEOULCXEYNBGJSEXJGMFNXVJKOVUETICOGOMWFUDBVZPKKWHXDPMNUVHQNDIKAXVCQVIWASFBZCWVGTPJMYSEHXDTRGHTOFITWMUIJAJCOUOHLLKJSEYCKZDUTPFDJYHCTRRIYWEOPJDHRZQRRKMFAFGCYUPNHBRFLOLFEMLBNTISLAHDRVCUPWYSONQQBECTZTIAYZVLLBSMPLBUZAWD");

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
    msg.setTimeStamp(0.3059987520205867);
    msg.setSource(38160U);
    msg.setSourceEntity(56U);
    msg.setDestination(34885U);
    msg.setDestinationEntity(179U);
    msg.number.assign("YYTPYHPLJFRLCXPTBNNEBZLPDATDUJNIZWBTQWHUJLHDMXATTBOLMOQPKRWWECGBSYONSRFKSMVJSOUCXVJGQOYLQPOKVEHOIHWEWMFVQESFUCUVRGODWGFQLULIFQIKKGVAURXGDJYGXCNKTQXROTNZVTPDEEHAPKEBIEIRPALGWYGZTUFMZEVBDKXXZMC");
    msg.timeout = 48184U;
    msg.contents.assign("UJTBMCRRNKDJIXDLLOHMMIVKFYABSCNGNWMIXWA");

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
    msg.setTimeStamp(0.11573724773560845);
    msg.setSource(63804U);
    msg.setSourceEntity(127U);
    msg.setDestination(31079U);
    msg.setDestinationEntity(20U);
    msg.seq = 917000597U;
    msg.destination.assign("DGTBUMEKMJTNUHXUOLCAWVSWKSRHVSTLPUXWJVFMVDQTYCCNMIDIZ");
    msg.timeout = 60263U;
    const char tmp_msg_0[] = {-25, -75, 111, 14, 2, 109, -97, 112, -90, 124, 65, -83, -116, -54, -96, -100, 98, -116, -4, 97, 34, -100, -98, -14, -119, -101, 5, -119, -124, 116, 2, -62, 13, -128, 74, 93, -4, -19, 7, 58, -115, 24, -93, 108, -104, 40, 91, 85, -82, 64, 35, 19, -75, -12, -123, -124, 71, -65, 74, -20, -46, 58, 50, 122, -117, -67, 115, -35, -49, 5, 82, 7, -116, 42, -62, 35, -31, 88, 41, 78, 81, -38, 75, -72, 75, -15, -65, 53, -101, 108, -100, 110, -27, -63, -21, -22, 7, -52, -82, 25, 101, -56, 47, 79, 112, 38, 118, -101, -106, 48, -96, 53, 34, -35, -63, -13, 58, -16, 79, -24, 16, -40, -69, 84, 64, -118, 21, 83, -47, 53, -121, -82, 78, 95, 111, 6, -97, -69, -67, 59, 57, -88, -103, 73, -23, -38, -23, 60, 107, 104, -113, 126, -41, 80, 3, 3, -60, -18, 25, -70, -30, 64, 4, 41, -123, 113, -86, -19, 27, -50, 46, -39, -120, 51, -79, 88, 67, 8, -95, 89, -79, -34, 57, 39, -100, -11, 49, -30, -27, 16, 33, -97, 57, 32, -128, 35, 113, 66, -56, -2, -41, 36, -113, -108, 24, 88, 54, 11, -81, -36, 92, -58, -28, -102, 17, 69, -21, -114, -41, -89, 37, -43, 19, -120, 114, -82, 18, -91, -100, 41, -92, 86, 99, 91, 50, 109};
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
    msg.setTimeStamp(0.7679151902059766);
    msg.setSource(41449U);
    msg.setSourceEntity(43U);
    msg.setDestination(58820U);
    msg.setDestinationEntity(104U);
    msg.seq = 162063371U;
    msg.destination.assign("HZKRNQWQVLTATQBXHIZMOISXEJBDXFJKWQHEXMWVHWAUFNXGNP");
    msg.timeout = 1507U;
    const char tmp_msg_0[] = {23, 62, -78, -73, 63, -106, 20, 89, -81, 48, -37, -1, 52, -121, -89, 44, 126, 69, -41, -45, -24, -7, 20, -54, 122, -115, 58, 31, 14, -56, 90, 47, -118, 52, -71, -126, -6, 47, 57, -5, -22, 18, -26, -108, -23, 28, -117, -60, 108, 45, 122, 106, -51, -75, 16, -43, -19, 115, -115, 1, -98, 29, 9, 27, 58, -117, -116, -2, -72, 46, 83, -52, -10, 30, 81, 18, -109, 11, -118, 29, 19, 81, -19, -7, -55, -104, -114, -99, 67, 117, -79, -123, 40, -29, -76, 58, 94, -6, 122, -43, -104, -25, -30, 114, 76, -86, -106, -50, -94, 47, -82, 91, 68, 73, -32, 83, -42, -95, 121, -124, -79, -89, -95, -45, -102, -33, -59, 59, 63, 84, -48, 71, 123, -121, 67, 115, -96, -62, -69, 72, 69, 66, 91, 111, 114, 48, -59, 78, 108, -97, -38, -57, 14, -77, -17, 27, 32, 9, -44, 72, 104, 104, -36, -99, -79, -122, 92, 91, 87, 104, 29, -12, -111, -104, 91, -10, -53, -59, 105, -38, 88, -102, 61, 114, 16, 96, 16, -108, -60, -93, -103, 43, 69, -81, 53, -33, -124, -115, 23, -121, -79, 3, 96, -68, -56, 69, 101, 89, 91, -25, 13, -110, 72, 36, -64, -17, 69, -80, -119, 14, -7, 27, 62, 30, 88, 1, -122, 45, 59, 66, -66, 62, -20, -9, -30, -70, 119, -87, 111, 47, 27, 86, 14, 62};
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
    msg.setTimeStamp(0.5754683918129093);
    msg.setSource(8044U);
    msg.setSourceEntity(99U);
    msg.setDestination(12206U);
    msg.setDestinationEntity(22U);
    msg.seq = 1266380446U;
    msg.destination.assign("PVXWHIQZRKGRAMMRYXZFFLIGCNJNMOKGKVBFHSRKDXFIQASESZPBVWEBKMVNUDPJPTWPYZFUCBISIFQODFDLQMOWBZCYAGLNPEHOQUCWWVGTVMIQHSFKPALSMVBVCHDGTVWEAGJEEXZSLXLZYTFKBSXRNMLCOENKJWPIUSNBXTTXZJTQHAYORDEQHWUWVLGCENUABIYGTR");
    msg.timeout = 30061U;
    const char tmp_msg_0[] = {-128, -22, -96, -116, -70, 18, -112, -86, 85, -104, -106, -124, -53, 93, -52, 85, 48, -47, 89, -119, 68, 40, -69, 28, 77, 89, 126, -87, -7, -121, 29, -82, -122, -99, 126, -85, 106, 4, 40, 85, 22, 98, 5, -45, 49, -77, 113, 72, 48, 85, 29, 7, 123, -69, -1, -3, -73, -117, 38, -108, -81, -15, 96, 49, 119, -61, -82, 4, -100, 101, -128, 92, -40, -25, -21, -47, -101, -24, -17, 29, 94, -60, 56, 80, -64, -74, -73, -40, 92, -108, -59, -27, -54, 122, 115, -66, 10, -123, -13, -44, -115, 86, 120, -65, 116, -32, -36, 125, 19, -102, 8, -24, -24, -93, 114, 31, -34, 17, 106, 19, 19, -27, -89, 121, -75, 45, -109, 14, -85, -65, -82, -128, 65, -86, -86, -33, 7, -125, 108, -43, -56, 105, 74, 88, -111};
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
    msg.setTimeStamp(0.6325329361365909);
    msg.setSource(27650U);
    msg.setSourceEntity(156U);
    msg.setDestination(59191U);
    msg.setDestinationEntity(254U);
    msg.source.assign("YXLFPCTVHQEJZCJUYJCIMLRERAFTJXRDNMFGNZPHXRVVRMICKVVADJPPWSFXDRQPLVPFTPJBKHSMTSNBTNYGHYIMYFIPVHZEOQSFKXJEWLVXAKHYWPROBZURLSHGOTGOQCICJRZUHIEGKBVIECUVWXATLNO");
    const char tmp_msg_0[] = {126, 107, 41, 87, 74, -57, 39, -4, 113, -93, 81, 42, -45, -49, -64, 81, -66, 36, -63, 98, -85, 49, 70, 53, 110, -67, -90, 48, 96, -54, 115, 118, -123, -50, -108, 16, -123, 18, -57, -53, 63, -60, 63, -123, -81, 37, -111, -119, 40, 82, -96, 74, -37, -90, -111, -13, -47, 55, -2, 11, 68, 22, -78, 98, -46, -97, 87, 101};
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
    msg.setTimeStamp(0.7483906334665393);
    msg.setSource(7754U);
    msg.setSourceEntity(202U);
    msg.setDestination(58077U);
    msg.setDestinationEntity(236U);
    msg.source.assign("JQNSAGQVDCUBJCEZHRDUNEAOOMAGAINAHKJRJHMLRKQTRKWVEIXDFTFVNMZVXDPS");
    const char tmp_msg_0[] = {44, -18, -27, 104, -54, -29, 95, 104, 36, 85, 40, -68, 89, 85, 1, -65, 14, -117, -3, 81, 71, 106, 113, -73, 119, -58, 6, 1, -25, -24, -73, 43, -96, 0, -93, 11, 91, 67, -127, -14, -126, -75, -103, -80, 12, 72, 39, -126, -75, 109, -64, 11, -66, 81, -14, 100, 26, 20, 83, -68, -127, 123, 32, 3, 102, -30, -13, 86, 66, -89, 93, -57, -98, 11, -44, 79, 54, 36, -117, -10, 86, 16, -23, -7, 35, -2, 62, 108, -77, 33, -3, -71, -22, -84, -119, 81, -3, 63, 55, 56, -91, -15, -57, -101, 6, 70, -93, -99, -51, 4, 85, -106, 64, 92, -28, 15, -44, -66, -18, 75, -102, -121, -5, -101, -62, -113, -21, 39, -64, -88, -10, 47, 7, -102, 12, 95, -4, 119, -68, -66, 57, 108, -33, -77, -124, -112, -127, -15, -57, 25, 3, 36, 114, -106, 101, 121, 101, -101, -61, 15, 77, -127, 26, 12, 77, 1, -14, 73, -22, -77, -71, 61, 11, 31, 94, -15, -58, -64, -43, 10, 91, -95, 93, -97, -104, -110, 38, 26, 47, -102, 104, 64, 23, -118, -120, 31, -88, -58, -92, 18, 29, -6, 104};
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
    msg.setTimeStamp(0.78169992863544);
    msg.setSource(1501U);
    msg.setSourceEntity(90U);
    msg.setDestination(11426U);
    msg.setDestinationEntity(221U);
    msg.source.assign("ZAOJZVTBAODLFSPAPEQTRUZAJNMFQOJIGLMIIGQR");
    const char tmp_msg_0[] = {-19, -77, -109, -90, -53, -85, 82, -87, -110, -32, 67, -79, -30, -128, -48, -21, 115, -88, -56, -56, 41, -25, 120, 84, 85, -75, 32, 123, 20, -21, -105, 101, -68, -94, 60, -44, -6, -8, -47, 111, 39, 4, 119, 122, -3, 61, 52, -79, -80, -53, -112, 16, 25};
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
    msg.setTimeStamp(0.7117078960753487);
    msg.setSource(24424U);
    msg.setSourceEntity(128U);
    msg.setDestination(6076U);
    msg.setDestinationEntity(103U);
    msg.seq = 2189121865U;
    msg.state = 0U;
    msg.error.assign("ALASCQVFSIJDOFJIGNEWZZMFGGGQHWODWMXMCOPWUSY");

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
    msg.setTimeStamp(0.2280284842361754);
    msg.setSource(55239U);
    msg.setSourceEntity(251U);
    msg.setDestination(57261U);
    msg.setDestinationEntity(126U);
    msg.seq = 3496896183U;
    msg.state = 210U;
    msg.error.assign("IIJDGVMWZCOCMUGEFKEATWHZOQTBEKBBXBRAZHWCDFLVTUNBFGFCJXEVBHNUHRVUTRXMOFYLQUAJBLNPOQSNQYETPMKSEWVONSZSBMSYODLXRKGHEGKZWRILKCJDDIHLTJIBFWIOVOXEDXRNAPXOMHLUITWZAXBQJDACUJIVTAGIMEHSGQVTZWSYGKLUCKYFCXJAFZUNZPYYYRQKWCNUZPAIRLNVJJQPKDFDLQPSWEVMPMONTCPM");

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
    msg.setTimeStamp(0.35048393466251837);
    msg.setSource(9503U);
    msg.setSourceEntity(86U);
    msg.setDestination(46947U);
    msg.setDestinationEntity(91U);
    msg.seq = 242324917U;
    msg.state = 134U;
    msg.error.assign("EVYMISHVXUMJNQUEGWUU");

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
    msg.setTimeStamp(0.04276227841807356);
    msg.setSource(378U);
    msg.setSourceEntity(135U);
    msg.setDestination(22108U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("TWGFWVHAJUQOGYRWCYCDRVZOLBYHRITIJEQUEXQYZSJZXVSTOUDTHRNLSNVMDHLMECFCGSEEQTLPIVPIYCGOJORHVVDVRAPKFJPOAFFGBZROMLKMHYBDNSMMNXKUZCNIPLAFMQIQSBBDWTIAJNGJUERAUXPEHIKSATWOCSKGNXBOEXNQMETKZWDSHTYOWFBMXUGZBCYJHLKBWUMGYJXWKFULLUZSCGRPAVQVILAFXDDRCINTBHNQ");
    msg.text.assign("GORCMALIEQKXJFQIVBQLCWIDJXVAIDKUUYYQPTWONGZCYVUZYKTZFUMLQYSRDAPSFUXFDJQYSNXADKOEZCYKSFBTGHBRIWOMECREVBRLXLMZLAOHFCVFEBWUZXOECVITSFAMGFMPHXBDQNSBETUPRAZXOCKXQQTBARHDUNJOOEMLMRKHBCVLTXJEJUOVZYMTSZBTRPISRWJHDYIJWFAITNGEVJLZSDHWGDGYPNW");

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
    msg.setTimeStamp(0.8068524313057543);
    msg.setSource(61693U);
    msg.setSourceEntity(198U);
    msg.setDestination(58929U);
    msg.setDestinationEntity(5U);
    msg.origin.assign("DUPEKYJVSOMSNDJPWGDLVWFIQSSNQVENGKSBUXTCMKRHZNJTQOFNWNJRSVQOKLLFV");
    msg.text.assign("RRALDFNKWQUPANETYXIMJVSYUFNPECDGMZDNXUUZUHGOMQTBVLGKSSCN");

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
    msg.setTimeStamp(0.7056927764429282);
    msg.setSource(11657U);
    msg.setSourceEntity(245U);
    msg.setDestination(17346U);
    msg.setDestinationEntity(141U);
    msg.origin.assign("HDMPBEWWDYXOPQSEMHARYGMVANEUSJXZUFQOKFKVEWLIIHAJFZZAKPWIQULHKOEVKPBJPITQGVZKTHUDTGXLQSYWLRODRJFOWLUIUXCDBSHP");
    msg.text.assign("AIDCKBUDPDWPVJZVLPLOBHUHEVIRSMCNCLMSYYRQOQFPNNFREXFCAVNPHIOQMWSBXKLOSFKXCWIEAJDCVUSIEGIRKHECVSAGZHEPMGPJBABTTIBONNQKQTWUVXRTMUILJDVEFNRHLKRHZBQUMYMOOYEKXTTBYXXWMGOKWRDETODTPMCVJSAZKJWZXUQSQHZAWFPQUBPGNYZVZXDRALJWKGUQLGCXEGOU");

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
    msg.setTimeStamp(0.25438625568604534);
    msg.setSource(44005U);
    msg.setSourceEntity(77U);
    msg.setDestination(62913U);
    msg.setDestinationEntity(196U);
    msg.origin.assign("WDIXXIGADNYNOZKHECJXHNTZSWPIOISMSKPRTFOEHWMONVTCLFHVHEN");
    msg.htime = 0.19204504566689862;
    msg.lat = 0.08042531789338991;
    msg.lon = 0.6476312438754479;
    const char tmp_msg_0[] = {6, -49, 93, -6, -50, -64, -31, 88, -103, 62, 15, 13, -94, 52, -117, -127, -114, 53, 41, -42, -82, -99, 108, 19, 114, 77, -67, -26, 40, 104, -36, -123, -4, 65, -94, -82, 105, 112, -124, -104, -101, 16, -124, 60, -5, 113, 66, 43, -123, -105, -83, -34, -78, -98, 90, 78, 88, 120, -80, -24, 38, 107, -122, -39, -46, 38, 81, -115, 111, -82, -69, -82, -62, 109, -30, 122, -3, -38, -56, 106, 29, 40, 123, -10, 20, 96, 95, 98, 125, -116, 120, 16, -98, -45, 2, 124, 126, 90, 8, -53, 73, 49, 32, 120, 102, 21, -28, 104, 55, -65, -91, -82, 86, 17, -91, -81, 86, 103, 15, 39, -117, -67, 46, -113, -14, 66, -71, -83, 54, 2, 91, -101, -35, -32, 121, 104, -90, 55, -54, -24, 28, -118, 6, 125, -39, 20, -10, 62, -99, -73, -127, -45, 80, 94, 31, 55, -104, -53, -100, -112, 4};
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
    msg.setTimeStamp(0.6412426906799131);
    msg.setSource(10616U);
    msg.setSourceEntity(150U);
    msg.setDestination(10134U);
    msg.setDestinationEntity(224U);
    msg.origin.assign("KJCCAWCONACGAWUZNIYLNQMTSFBQZEVMLSJYKOHQUSTMBBNINBHKXPILQGFPVBVGQKWKPQIXJUWZFDPFLWEJGJDKDSHERTAMXFMUXWYKEATSIBCILHVLWZAMMBOFEXJEHZMPCRXGLAVVARUGOLFHQWPYIGKZBHRNCODZMUVXSRCZAYSTYUSNFTOYITANQTFSHXRUDEOEVRQYG");
    msg.htime = 0.33242061433264847;
    msg.lat = 0.9766488409937136;
    msg.lon = 0.6123150773320988;
    const char tmp_msg_0[] = {-110, -30, 100, -68, 110, 65, 73, -67, -8, -38, 22, -7, 126, -109, 34, -94, 26, 82, -77, 53, 41, 38, -50, 111, -20, -26, -20, -19, 101, -14, -26, -58, -32, -28, 14, -53, -87, -66, 89, -69, 120, -90, -116, 110, -98, -91, 1, 21, -69, -13, 56, -45, -99, 125, 112, 102, -105, -50, 60, 13, -56, 34, -37, -33, -2, -21, -57, 122, 103, 67, -25, -68, 21, -40, -28, -18, -8, 86, -19, -40, -97, -101, -15, 33, -82, -80, -16, 87, -120, -68, 59, -12, -94, -77, -120, -115, 91, 124, -58, 35, -94, 63, -64, -15, 18, -71, -82, -53, -66, 36, -55, -50, -94, -87, -5, 69, -85, -53, -44, -2, 13, 86, 97};
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
    msg.setTimeStamp(0.8358411741982753);
    msg.setSource(47675U);
    msg.setSourceEntity(142U);
    msg.setDestination(61396U);
    msg.setDestinationEntity(43U);
    msg.origin.assign("BKBXJYEWUUNZBXSFOEHRLRARWJNUNGOVNDFCWHBMWTIVGAQLGZXGSYVQXQPMPBQDUUNBRZJCOJYXNXKOLBXYVIHHSTYJJPTRKMKWGKNPKTIGEYDZDTISHSIBMTGOYVRZALGZDDSPRMVAC");
    msg.htime = 0.14600570372541544;
    msg.lat = 0.6994967156618231;
    msg.lon = 0.2395476390557153;
    const char tmp_msg_0[] = {-70, -108, 96, 5, 57, 9, -26, 104, 83, -1, 114, -77, -118, 22, -38, -17, 95, -58, -52, 13, 18, -25, 58, 57, 123, -12, -46, -93, 104, 64, -39, 0, -53, 29, 113, 119, 114, 44, -64, -47, 99, 88, 25, -50, -106, -23, 92, -124, 16, -68, 74, 36, 40, -5, 14, -17, -60, 123, 13, 18, -29, 2, 111, -10, 97, 60, -55, 88, -99, 126, -87, -31, 42, -45, 22, 29, -111, -8, -79, 98, -81, -1, 47, 70, 115, 14, 33, 108, -79, 107, -18, 25, 21, 84, -58, 87, 35, 37, -100, -83, 59, -35, 47, -120, -108, -1, -46, 64, -68, 77, -27, 70, -4, -3, 19, 102, 1, -36, -23, 89, -86, -40, -15, -82, -66, -32, 35, 11, 87, -95, -15, -81, -11, -103, -97, 123, 26, -112, 105, 56, -33, -48, -69, -104, 120, 119, -97, 64, 43, 111, 104, -39, 70, -75, -66, -39, 105, -8, 4, 86, -96, -1, 112, 20, -35, -60, 88, -93, 120, 8, -73, 16, -109};
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
    msg.setTimeStamp(0.9155158493289585);
    msg.setSource(27561U);
    msg.setSourceEntity(202U);
    msg.setDestination(55412U);
    msg.setDestinationEntity(8U);
    msg.req_id = 32806U;
    msg.ttl = 57166U;
    msg.destination.assign("IYZNXBZHEZIHCA");
    const char tmp_msg_0[] = {-42, -93, -26, 6, 110, -97, 71, -37, -95, 38, -23, -126, 86, -47, 63, 97, 45, 38, 60, 11, -46, 83, 114, -13, 13, -37, -44, -43, 85, 59, 64, 64, 76, -10, 34, 121, -101, 52, -47, -61, 22, -6, -10, -80, 63, 32, 72, 22, -83, 93, -35, -74, 24, -72, -128, -54, -81, -5, -127, -58, 85, -82, 105, 56, 113, -65, -108, 59, 33, -101, -22, -30, 28, 43, -35, -108, 51, -126, 39, -79, -103, 84, -34, 104, 66, 39, 90, 86, 15, 87, -19, 28, -98, 104, -15, 67, -87, -17, 88, 20, -85, -6, -3, 121, 104, -81, -67, 62, -14, -119, 111, 49, 91, -91, -53, 5, -36, -107, -37, 72, 45, 37, 20, 25, 41, 77, 69, 96, 92, -123, -65, -36, 38, -40, -103, 49, 116, 36, 15, 21, 1, 87, 91, -39, -57, 55, 123, -31, 20, 113, 18, -99, -33, 20, -69, 85, 26, 84, 75, 126, 123, -80, -12, -22, 100, -42, 6, 18, -84, 58, 66, 56, -65, -53, 37, 35, -97, 102, 66, -76, 94, -78, -123, 80, -124, -9, 12, -57, -118, -14, -12, -61, 70, 72, 78, 90, 21, 63, -47, 64, -123, 83, 57, -102, 32, 54, 11, 32, -56, -59, -119, -42, 24, -36, -18, 101, -109, 6, -93, 70, -61, 60, 102, 14, -12, -25, -126, 87, 8, 25, 47};
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
    msg.setTimeStamp(0.27757550908367135);
    msg.setSource(7549U);
    msg.setSourceEntity(183U);
    msg.setDestination(56134U);
    msg.setDestinationEntity(110U);
    msg.req_id = 61646U;
    msg.ttl = 8916U;
    msg.destination.assign("NNUTMROXWTDNFFXDQIRMOPNJBCVBYOXBZHLWQLHVICGONSATDRYEIDJCGGJBEFAQSSU");
    const char tmp_msg_0[] = {-66, -52, -26, 58, -104, 93, -35, 6, -91, -127, 95, -119, 65, 101, 113, -82, 65, -101, 14, -70, -114, 65, 22, -85, -89, -65, 10, -31, 11, 76, 70, 122, 93, 115, 81, 35, 75, 2, -12, 66, -56, 120, -30, -31, 17, 12, 47, -93, 50, -125, -26, -32, 59, -98, -65, -117, -110, 119, -107, 117, 30, -105, 76, -120, -36, -25, -69, 18, 125, 13, 15, -58, 23, 56, 83, -93, 4, -80, -81, 40, 84, -31, -52, 104, 91, -91, 91, -107, 103, 119, 111, 77, 1, -20, -61, -96, -111, 7, 81, -55, -74, -112, -52, -83, -76, 72, 8, -8, -87, 26, 48, 95, 78, -85, 68, -12, 40, 16, 25, 6, -79, 9, 20, -77, -49, 96, -108, 111, -63, 79, -52, 68, -36, 14, -111, 14, -6, -28, -63, -120, -62, -21, -89, -87, -125, -94, -60, 13, -125, -88, -74, 114, 97, -58, -18, 4, 3, -39, -77, 110, -95, -66, 99, 94, -11, 43, -62, 40, -25, -92, -92, 71, 35, 102, -25, -30, 59, 91, 123, -50, 46, 78, -93, 13, -45, -48, -65, 35, -19, 47, -8, -117, -38, 85, 31, -118, -118, -69, -74, 76, 15, 61, 82, 86, 96, -92, 105, 63, 95, -19, -18, -87, 100, -96, -9, 71, -78, 27, -66, 124, -36, -88, 96, -77, 101, 9, 73, 122, 63, -48, -52, 14, 26, 113, 29, 46, 84, -39, 42, 41, -114};
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
    msg.setTimeStamp(0.275568523794131);
    msg.setSource(17776U);
    msg.setSourceEntity(176U);
    msg.setDestination(2895U);
    msg.setDestinationEntity(235U);
    msg.req_id = 9848U;
    msg.ttl = 42760U;
    msg.destination.assign("QMDIREOFOJWUJKBYCJBKZCQXVFJKGVWATWHYGXNAEWCDCETSAVLGTJIITOPBBQEJBZSQMGHUVAYRRSVFYYGZTAHABXHMKQKEUFHWTSVRZPLWPCNHFTLOKULTAZFSOUMRFGXHWLHIOXZONWPPPOUTNNKREFCJMWYRGYTQESUXNEDLUUGZZPYVYORKMAMIBDSIIJVNSQ");
    const char tmp_msg_0[] = {-64, 1, 126, 62, -126, 77, 93, 90, 55, -106, 34, 110, -40, -48, 34, -14, 126, 108, -86, 42, 51, 96, 15, -11, -111, -121, -122, 81, 55, -8, 66, -105, -118, -8, 59, 2, -94, -63, -116, -79, 4, 84, -19, 15, -46, -1, 103, 65, 44, 85, -6, 38, 64, -21, 8, 26, 105, -22, 54, 68, -126, -68, -90, -5, -41, 114, 108, -16, -119, 30, -80, -99, 116, 102, 19, 121, -113, 36, 16, -126, -119, -3, -14, -5, 58, 5, -13, 46, -122, -26, -60, 15, 23, -123, -73, 58, -81, -70, 88, 95, -97, 121, 46, -5, -24, -125, -116, 25, 33, 119, 103, -62, 84, -43, -3, -102, -85, -53, -75, 62, -45, 70, -66, 8, 102, -15, 10, -12, 113, 5, 42, -20, -15, -84, -21, 73, 26, -84, 58, 56, 70, -62, -80, -15, -33, 112, -94, 86, -56, 33, 108, -67, -116, 68, 28, -41, 96, 112, 61, -66, -85, -68, 25, -10, -115, 91, -36, -47, 106, 47, 58, 97, 21, 77, -31, 123, -94, -82, -89};
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
    msg.setTimeStamp(0.2593477622828546);
    msg.setSource(36719U);
    msg.setSourceEntity(130U);
    msg.setDestination(44625U);
    msg.setDestinationEntity(78U);
    msg.req_id = 33089U;
    msg.status = 237U;
    msg.text.assign("WIWPLKDPEXXU");

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
    msg.setTimeStamp(0.5544148467572975);
    msg.setSource(56688U);
    msg.setSourceEntity(34U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(133U);
    msg.req_id = 53512U;
    msg.status = 104U;
    msg.text.assign("HGSJIFXIDLBIQNULVPQBIAEWYSVNJTTGSSSFXWZAYBFXZJBHUVNXJRKJBECFTTHZOFFPCJOYYPISWNENCSBRJOWVEHXHQCFLXBNMPMYAZIAGQEMRYMDJWBREDUHNMVSEQCBOGYKNLFMYVLTWXARVFDDWUMTOWGPLVHOMQKASLAUKHXOODQJQUKPZWALZBGZRRUDYRVTGHCXLREJREDKDQYUCZINEACDUUCTZLTP");

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
    msg.setTimeStamp(0.229519971323222);
    msg.setSource(24786U);
    msg.setSourceEntity(7U);
    msg.setDestination(49129U);
    msg.setDestinationEntity(140U);
    msg.req_id = 32178U;
    msg.status = 2U;
    msg.text.assign("KARYZIDQCSBGUYCHRAELDWQKFZQKCUZUEAVHFSWLPWAXPHNNPDUVGODVJPWXFSDUYXBUBAILTTAXOADGKNVQFMWSEUNINJLIBEWTOPGDLCYNIRVWJJFOBDCEQNDMEUKHURAXIOHCXUMLVWOZKEGXVQOQFPJYCZAILPAWXVMRZ");

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
    msg.setTimeStamp(0.3528470054290055);
    msg.setSource(32733U);
    msg.setSourceEntity(138U);
    msg.setDestination(64855U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("QNFXRVIUNALSQMPYUOOAKVBPDOUQCZIJVXIWSXTUSXJSRATYBSNMAPXTZRCEPSFHBEL");
    msg.links = 1812104865U;

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
    msg.setTimeStamp(0.7293883051643479);
    msg.setSource(3023U);
    msg.setSourceEntity(227U);
    msg.setDestination(1196U);
    msg.setDestinationEntity(121U);
    msg.group_name.assign("DACUFOYGCWXSGPYPWAJUISONKHMDDVUEH");
    msg.links = 3325797618U;

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
    msg.setTimeStamp(0.9718189392257041);
    msg.setSource(36989U);
    msg.setSourceEntity(88U);
    msg.setDestination(14223U);
    msg.setDestinationEntity(195U);
    msg.group_name.assign("TLGYPGMVTUGMRGKVPXUWVIFSNJISFQJV");
    msg.links = 1002380500U;

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
    msg.setTimeStamp(0.5194528590049354);
    msg.setSource(2049U);
    msg.setSourceEntity(247U);
    msg.setDestination(51840U);
    msg.setDestinationEntity(113U);
    msg.groupname.assign("SKTCAMLGQNLLAPLIPEPKPI");
    msg.action = 20U;
    msg.grouplist.assign("EWEOQTBPSWWIKTTWUWGRGWLYAVCQF");

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
    msg.setTimeStamp(0.18258871496866858);
    msg.setSource(39116U);
    msg.setSourceEntity(197U);
    msg.setDestination(46754U);
    msg.setDestinationEntity(229U);
    msg.groupname.assign("TURTWGCFVYXRYIZNFYVQWBYNUSBQLFCGPBDHOMGNYBLDZAMONULWQBRLA");
    msg.action = 6U;
    msg.grouplist.assign("RVERCNBUYDKFWUXLUOPABAFHCWVXRWRAHQZYXGMJQPSYCCYECJLSYFARSJJTPUDIUFKNYQELRIDIMHTZLBEMGEYAFFWZKHVTXNQHIVRJTKBVBKQDZLESPJOLBKVSSFADOPGHAXFTETUNNZANPTGMJIMTGFJOBDWALWLCOHQYOWCMGRXONINTAMKIQJEXHCZZNEXKOKPMZHTBXUPQEUDILSPBMCSDRVGGXDNDISGYWGOVFWOMLIZ");

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
    msg.setTimeStamp(0.988341247657398);
    msg.setSource(28989U);
    msg.setSourceEntity(134U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(66U);
    msg.groupname.assign("YFBOAIFDZPJKEFEQAUKTWHAZSAZOCAVVKIGWYLZRGGLXZVNSHFNTQGHUJWEYJIZNDLPRPJVRSOLORNDYBSODPDUQYVEBCXZZQMIYNGBOMMPWSPTBCHMZEOMAJKNXUNFENSGQPKGYLVOKLZSRXHTOKCNUBMWXIUS");
    msg.action = 127U;
    msg.grouplist.assign("TCLTAWYKXQCMVIWRLKRNBHHXZE");

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
    msg.setTimeStamp(0.5290488449783819);
    msg.setSource(14202U);
    msg.setSourceEntity(133U);
    msg.setDestination(27955U);
    msg.setDestinationEntity(243U);
    msg.value = 0.33442816083297033;
    msg.sys_src = 51925U;

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
    msg.setTimeStamp(0.017962801430694175);
    msg.setSource(61642U);
    msg.setSourceEntity(103U);
    msg.setDestination(6981U);
    msg.setDestinationEntity(25U);
    msg.value = 0.3996700438969455;
    msg.sys_src = 23577U;

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
    msg.setTimeStamp(0.30325202778092664);
    msg.setSource(24258U);
    msg.setSourceEntity(136U);
    msg.setDestination(18248U);
    msg.setDestinationEntity(50U);
    msg.value = 0.34261959605000614;
    msg.sys_src = 37387U;

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
    msg.setTimeStamp(0.5387031418254309);
    msg.setSource(5072U);
    msg.setSourceEntity(223U);
    msg.setDestination(19939U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6862140678501811;
    msg.units = 153U;

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
    msg.setTimeStamp(0.14396311119242922);
    msg.setSource(16178U);
    msg.setSourceEntity(17U);
    msg.setDestination(39461U);
    msg.setDestinationEntity(136U);
    msg.value = 0.14018611965506345;
    msg.units = 159U;

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
    msg.setTimeStamp(0.8289930369698758);
    msg.setSource(50698U);
    msg.setSourceEntity(215U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(233U);
    msg.value = 0.9638645947002126;
    msg.units = 46U;

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
    msg.setTimeStamp(0.01769140911263367);
    msg.setSource(44215U);
    msg.setSourceEntity(131U);
    msg.setDestination(2624U);
    msg.setDestinationEntity(245U);
    msg.base_lat = 0.774998086804651;
    msg.base_lon = 0.07613978805277277;
    msg.base_time = 0.011937148115760854;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 1271U;
    tmp_msg_0.destination = 44098U;
    tmp_msg_0.timeout = 0.9383507860072537;
    IMC::DevDataBinary tmp_tmp_msg_0_0;
    const char tmp_tmp_tmp_msg_0_0_0[] = {122, 27, -50, -35, -73, 52, -32, -41, -2, 119, -41, -27, -94, -83, -43, -15, 36, -102, -99, 73, -63, -122, 64, 40, -21, 46, 72, 77, -5, -27, 62, 113, -62, -37, -65};
    tmp_tmp_msg_0_0.value.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.09502813568564361);
    msg.setSource(18243U);
    msg.setSourceEntity(227U);
    msg.setDestination(1570U);
    msg.setDestinationEntity(199U);
    msg.base_lat = 0.6095274649819888;
    msg.base_lon = 0.9213683201204019;
    msg.base_time = 0.8372009542001627;

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
    msg.setTimeStamp(0.5586811673540896);
    msg.setSource(46840U);
    msg.setSourceEntity(218U);
    msg.setDestination(16583U);
    msg.setDestinationEntity(207U);
    msg.base_lat = 0.6226951775250608;
    msg.base_lon = 0.8843358174420737;
    msg.base_time = 0.724062962268589;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 21373U;
    tmp_msg_0.priority = -91;
    tmp_msg_0.x = 3286;
    tmp_msg_0.y = 21316;
    tmp_msg_0.z = -26964;
    tmp_msg_0.t = 12362;
    IMC::Brake tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 105U;
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
    msg.setTimeStamp(0.9948328858685065);
    msg.setSource(10060U);
    msg.setSourceEntity(88U);
    msg.setDestination(27449U);
    msg.setDestinationEntity(54U);
    msg.base_lat = 0.40249546466122155;
    msg.base_lon = 0.3874243496561822;
    msg.base_time = 0.7759988720465902;
    const char tmp_msg_0[] = {96, -45, 41, 48, 86, 74, -96, 73, -92, 71, 13, 19, -75, -106, 52, -60, -67, -73, 40, 66, 39, 83, -71, 89, -11, -13, -76, 104, 56, -4, 29, -98, -28, 90, -10, -122, -95, 56, -57, -45, -96, -47, -99, 97, -22, -76, 31, -10, -4, 83, 116, 22, -51, -63, -26, 117, -21, -76, -98, 41, 54, 4, 47, -2, 52, -106, -9, -69, 53, -7, 21, 58, -21, -1, 16, -79, 25, 39, -56, 6, 67, 25, 32, -112, 91, -40, -47, 4, 47, 96, -67, -126, 73, -43, 73, 8, 88, 79, 109, 7, 17, -11, -66, -55, -104, 57, 7, 21, -34, -96, 82, 114, 62, 102, -31, -5, -42, -102, 6, 40, -81, 106, 89, 63, 61, -127, 47, 33, 29, -16, 80, -35, -99, 26, 49, 106, -7, -127, -37, -12, 110, 86, -19, -92, -79, -33, 38, -49, 101, 56, 32, -82, -9, 53, 93, -20, -74, -106, 103, 102, 30, -8, -120, 17, -23, 37, -33, -76, 89, 109, -95, -128, 80, -65, 90, 107, -14, 39, -20, -92, -102, -25, -58, -33, 96, -40, 68, 44, -69, 36, 6, -95, -64, -2, -114, -8, 95, -4, -4, 125, 59};
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
    msg.setTimeStamp(0.03216041064819364);
    msg.setSource(23567U);
    msg.setSourceEntity(132U);
    msg.setDestination(3485U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.250127601644591;
    msg.base_lon = 0.14007203385454814;
    msg.base_time = 0.24988488327558167;
    const char tmp_msg_0[] = {57, 51, 29, -101, -14, -25, -35, 8, -64, -11, 0, -27, 118, 65, -37, -83, -83, -110, -36, -46, -96, -20, -107, -100, -60, 62, 66, 81, 97, 80, -25, 40, -45, -85, 69, -28, 22};
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
    msg.setTimeStamp(0.9311662990589634);
    msg.setSource(20646U);
    msg.setSourceEntity(189U);
    msg.setDestination(53467U);
    msg.setDestinationEntity(222U);
    msg.base_lat = 0.01644238347588589;
    msg.base_lon = 0.11514519409104818;
    msg.base_time = 0.23100916053482523;
    const char tmp_msg_0[] = {-120, 120, -44, 99, -36, -26, 89, 70, 90, 41, 46, -111, -13, 107, 73, -113, 76, -15, 124, 113, 54, -96, 67, 68, -9, -34, 111, -115, -32, -36, 35, 26, 112, 93, -90, 22, -122, 19, 16, 40, -76, 103, -26, 83, -12, 112, -60, -3, 103, 77, 99, -13, -57, 1, -117, -28, -125, -39, 58, -107, 82, -65, 39, -42, 126, -36, -94, 83, 25, 101, -22, 49, 77, 24, 79, -116, -91, -42, 71, 37, 40, -9, 50, -89, 10, 126, 25, -15, 43, 81, -27, -23, 109};
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
    msg.setTimeStamp(0.357723184915516);
    msg.setSource(33709U);
    msg.setSourceEntity(44U);
    msg.setDestination(13663U);
    msg.setDestinationEntity(1U);
    msg.sys_id = 49962U;
    msg.priority = 36;
    msg.x = -32038;
    msg.y = -31347;
    msg.z = 11626;
    msg.t = 13256;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.167695455869587;
    tmp_msg_0.lon = 0.04602775974833884;
    tmp_msg_0.depth = 0.9291993549660938;
    tmp_msg_0.roll = 0.9963395188518961;
    tmp_msg_0.pitch = 0.8892577793714112;
    tmp_msg_0.yaw = 0.5248496342136482;
    tmp_msg_0.rcp_time = 0.9718809436937339;
    tmp_msg_0.sid.assign("ULIQRGBRLGFZREJIISHQKTESHAAEKMVCJOSAGJXTTQSHBLZGIAHJXKDWAVUOZBUPGFQP");
    tmp_msg_0.s_type = 45U;
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
    msg.setTimeStamp(0.22235295942490718);
    msg.setSource(64244U);
    msg.setSourceEntity(130U);
    msg.setDestination(3581U);
    msg.setDestinationEntity(243U);
    msg.sys_id = 53219U;
    msg.priority = 68;
    msg.x = -22545;
    msg.y = -7995;
    msg.z = 16396;
    msg.t = 25835;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.5120104941371263;
    tmp_msg_0.x = 0.9406491757534121;
    tmp_msg_0.y = 0.5998520667734444;
    tmp_msg_0.z = 0.06154741791366358;
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
    msg.setTimeStamp(0.5600198267836402);
    msg.setSource(57182U);
    msg.setSourceEntity(157U);
    msg.setDestination(65405U);
    msg.setDestinationEntity(86U);
    msg.sys_id = 38898U;
    msg.priority = 15;
    msg.x = 10754;
    msg.y = -23551;
    msg.z = -5122;
    msg.t = -17497;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.7629247128376279;
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
    msg.setTimeStamp(0.4680550741854801);
    msg.setSource(10081U);
    msg.setSourceEntity(54U);
    msg.setDestination(22454U);
    msg.setDestinationEntity(77U);
    msg.req_id = 60388U;
    msg.type = 27U;
    msg.max_size = 11145U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.47845377671185707;
    tmp_msg_0.base_lon = 0.43332403537821407;
    tmp_msg_0.base_time = 0.558041801033577;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 36466U;
    tmp_tmp_msg_0_0.priority = -77;
    tmp_tmp_msg_0_0.x = -5236;
    tmp_tmp_msg_0_0.y = -9801;
    tmp_tmp_msg_0_0.z = -9425;
    tmp_tmp_msg_0_0.t = 3024;
    IMC::CpuUsage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 30U;
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
    msg.setTimeStamp(0.5358683988170635);
    msg.setSource(9223U);
    msg.setSourceEntity(68U);
    msg.setDestination(19183U);
    msg.setDestinationEntity(225U);
    msg.req_id = 59443U;
    msg.type = 53U;
    msg.max_size = 34753U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8598488789169673;
    tmp_msg_0.base_lon = 0.1402848533720349;
    tmp_msg_0.base_time = 0.26799388046598305;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 45924U;
    tmp_tmp_msg_0_0.priority = -96;
    tmp_tmp_msg_0_0.x = 30321;
    tmp_tmp_msg_0_0.y = -7672;
    tmp_tmp_msg_0_0.z = -14609;
    tmp_tmp_msg_0_0.t = -16463;
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.33624099507474337;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.13289356377071715;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6265436533071819;
    tmp_tmp_tmp_msg_0_0_0.z_units = 197U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6561937727864668;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 136U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.24971728546596672;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.00022178045638376886;
    tmp_tmp_tmp_msg_0_0_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("AFDJQQJEGPPKHNRLECYFCINHRGNVTSTUWOEZGDDNBOMIQXZNBSHSORKJXWXEDCWMPPTUQXJBMUMCCVDBLZPSMOONXISFIGFAVGKQJCWLVFZBD");
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
    msg.setTimeStamp(0.740943389026293);
    msg.setSource(20392U);
    msg.setSourceEntity(47U);
    msg.setDestination(38623U);
    msg.setDestinationEntity(254U);
    msg.req_id = 21486U;
    msg.type = 154U;
    msg.max_size = 63198U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6265682079952123;
    tmp_msg_0.base_lon = 0.5717951265996198;
    tmp_msg_0.base_time = 0.3685603321520595;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 40933U;
    tmp_tmp_msg_0_0.priority = 17;
    tmp_tmp_msg_0_0.x = -13676;
    tmp_tmp_msg_0_0.y = 11948;
    tmp_tmp_msg_0_0.z = -9797;
    tmp_tmp_msg_0_0.t = 12251;
    IMC::OpticalBackscatter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.8854745708173898;
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
    msg.setTimeStamp(0.1211460628781712);
    msg.setSource(7167U);
    msg.setSourceEntity(178U);
    msg.setDestination(51305U);
    msg.setDestinationEntity(21U);
    msg.original_source = 59001U;
    msg.destination = 31188U;
    msg.timeout = 0.658933518454208;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.708292888898489);
    msg.setSource(43883U);
    msg.setSourceEntity(200U);
    msg.setDestination(42625U);
    msg.setDestinationEntity(128U);
    msg.original_source = 8845U;
    msg.destination = 28185U;
    msg.timeout = 0.4688209104903258;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("OJNHUPTEMGXKV");
    tmp_msg_0.type = 193U;
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
    msg.setTimeStamp(0.7761555099812119);
    msg.setSource(45790U);
    msg.setSourceEntity(161U);
    msg.setDestination(48757U);
    msg.setDestinationEntity(136U);
    msg.original_source = 58519U;
    msg.destination = 62612U;
    msg.timeout = 0.6996790334294922;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 193U;
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
    msg.setTimeStamp(0.5444413495486919);
    msg.setSource(56579U);
    msg.setSourceEntity(4U);
    msg.setDestination(18341U);
    msg.setDestinationEntity(243U);
    msg.type = 251U;
    msg.comm_interface = 1617U;
    msg.model = 9057U;
    msg.list.assign("LQUJZJOLYOBAZPUZZMTBUDOKWCJMAMDFHXFTKSGVYVBPJUEPGYGESGFOHSWDRXPQMOJPWPJXEPSSYUTENKTOXWCVNSDIAHCLTQPIJQMNGDNLRBRKQRMSMHXUWBXAZIWEREITUTKTSVSDLLRVLMAQ");

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
    msg.setTimeStamp(0.8594635557725803);
    msg.setSource(17700U);
    msg.setSourceEntity(241U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(237U);
    msg.type = 76U;
    msg.comm_interface = 16625U;
    msg.model = 30540U;
    msg.list.assign("VRRMMVBDDWUAUAVKFLEIGIZRQW");

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
    msg.setTimeStamp(0.7711427543650471);
    msg.setSource(40219U);
    msg.setSourceEntity(52U);
    msg.setDestination(31963U);
    msg.setDestinationEntity(147U);
    msg.type = 162U;
    msg.comm_interface = 51270U;
    msg.model = 55896U;
    msg.list.assign("HUONUUVTOFQHUGTFEJDOOBRIJCCDYLJRJHYMIWXIMGIRWPH");

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
    msg.setTimeStamp(0.15320219938095514);
    msg.setSource(60549U);
    msg.setSourceEntity(155U);
    msg.setDestination(21535U);
    msg.setDestinationEntity(96U);
    msg.type = 163U;
    msg.req_id = 3922932008U;
    msg.ttl = 27578U;
    msg.code = 11U;
    msg.destination.assign("QSQUXWQZATXOSPYFNHLRNHLEBZZTYCACZDZEWLFNBJYXTECWSPBUJBOPWZPVRCUAXTIHXEGSROIPKANGGPFFWIOENEUWETIGIQLFPSMDOAUPYMUQHPDCNKSVDCLYXDYUMMSIQSWFKSNGBJFTHIVPARGCU");
    msg.source.assign("KCFLTWPSLLXIAUMXQNZBWFWDWBVNTEGUHRYRADYJIOHKFOQYJTPSHGMGUQZBXGBKETQYOHAJKVKRXUZDSICEFKAYOT");
    msg.acknowledge = 33U;
    msg.status = 225U;
    const char tmp_msg_0[] = {114, -113, 7, 122, 106, 96, 36, 20, 98, -40, -99, -30, -3, 13, 92, -75, -87, 60, -64, 76, -63, 25, -67, -89, 31, 54, -89, -45, -72, 24, 93, 46, -49, 91, -40, 0, -98, -74, 30, -40, 9, -101, -32, 103, 64, 81, 32, 104, 70, -25, -44, 90, 32, -127, 7, 112, 62, 17, 46, -14, 54, -74, 27, -114, -79, -39, -80, 29, 81, -11, 33, -39, -47, 9, 29, -57, -60, 110, 97, -89, -69, 58};
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
    msg.setTimeStamp(0.4287800983036286);
    msg.setSource(41080U);
    msg.setSourceEntity(236U);
    msg.setDestination(4920U);
    msg.setDestinationEntity(94U);
    msg.type = 141U;
    msg.req_id = 244735343U;
    msg.ttl = 4058U;
    msg.code = 133U;
    msg.destination.assign("XYVMKOYEZMYMRARJHFVUINQRKFWAXEQNNGDBSSICAIYHSJDPIZPWNAYMZRVOOPCFPTVQHGBBAXULOKTIRHNGEJMREVSTWGKDAJZPFFCYWMACOXCDZUTVZQTCVXBTIBJXGUGCEUQNKHDFKPESHPHJSLJMGRQLBILNIDUWNLUUFQDVFNBLSMJQNZCEYXP");
    msg.source.assign("ENRXKAZKILZPMCPWOKPXXNWMQHESZQJPADXQESGNLJFGQBNOUVMWOYANSCBXXHODBFJZLJASJQPLEWGKHSAQNSLKYVCAUXGOYURDRMVZCKZARVFPJKSYDFFHWYGVQEEEX");
    msg.acknowledge = 181U;
    msg.status = 220U;
    const char tmp_msg_0[] = {-96, 51, 105, -7, 120, 36, 8, -39, 109, 71, -72, 26, -72, 109, 114, 50, -99, -19, 77, -86, 19, -39, 35, 111, -66, -3, -71, -115, 79, -128, -122, -103, 40, 99, 53, -26, -85, 69, 24, 4, -102, -40, 5, -59, 6, -72, -2, 103, 27, 114, 5, 37, 46, 93, 38, 15, -93, -17, 96, 101, -128, 64, 22, 38, 1, 49, 99, 61, -110, -109, -92, -47, 26, -71, -99, 102, 58, 25, -69, 123, -123, -91, 121, 91, 85, 117, -47, 107, -99, -4, 48, 9, 8, 7, -73, 119, -56, -96, -88, 6, -1, 57, 65, 98, -56, 103, 6, 89, 3, -69, 79, 125, -35, -92, -50, -4, -39, 42, 52, -100, 114, -115, -103, -14, 21, -90, 117, -90, -127, -75, 70, 34, -22, -41, 20, 28, 12, 28, -41, -100, -23, 113, 93, 123, 91, 112, 123, 5, -51, -40, -53};
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
    msg.setTimeStamp(0.7058418200267154);
    msg.setSource(33068U);
    msg.setSourceEntity(42U);
    msg.setDestination(51136U);
    msg.setDestinationEntity(112U);
    msg.type = 152U;
    msg.req_id = 3050095005U;
    msg.ttl = 33382U;
    msg.code = 117U;
    msg.destination.assign("ASPQPCJHHEVXDIOFSNDHBHYTRQWISMYNZBBMXHSTKZBDWEPAMMRXODHNBQFYSJJIHAVLHZDNYRNAECEQITECDINCTVTBESAZZOCORWYQOOCDNPAVFYUTNYTIAUROHYLK");
    msg.source.assign("POFEDXHILGINIVXHIBDOHSQKMBG");
    msg.acknowledge = 52U;
    msg.status = 187U;
    const char tmp_msg_0[] = {1, 80, 41, 16, 72, 48, 29, -118, -87, 37, -114, -46, 95, 58, 64, 77, -99, -123, 99, -48, -52, 91, -72, -7, -126, 116, 29, -111};
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
    msg.setTimeStamp(0.9193740669207555);
    msg.setSource(60629U);
    msg.setSourceEntity(199U);
    msg.setDestination(50779U);
    msg.setDestinationEntity(238U);
    msg.id = 120U;
    msg.range = 0.3228288437563489;

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
    msg.setTimeStamp(0.23208354073994286);
    msg.setSource(2403U);
    msg.setSourceEntity(36U);
    msg.setDestination(61301U);
    msg.setDestinationEntity(179U);
    msg.id = 25U;
    msg.range = 0.04549055296382465;

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
    msg.setTimeStamp(0.04914554697917539);
    msg.setSource(60073U);
    msg.setSourceEntity(94U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(15U);
    msg.id = 185U;
    msg.range = 0.4689321101369398;

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
    msg.setTimeStamp(0.013194948141200369);
    msg.setSource(61602U);
    msg.setSourceEntity(177U);
    msg.setDestination(25953U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("BNMBLYFXHXFAJFYRPUDEQ");
    msg.lat = 0.9427871192784888;
    msg.lon = 0.6763307476332917;
    msg.depth = 0.08877225521852594;
    msg.query_channel = 124U;
    msg.reply_channel = 25U;
    msg.transponder_delay = 222U;

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
    msg.setTimeStamp(0.03787779683641057);
    msg.setSource(31314U);
    msg.setSourceEntity(43U);
    msg.setDestination(24177U);
    msg.setDestinationEntity(185U);
    msg.beacon.assign("SEBYHHSVGMPZIUREIHSFYNTPIMIACCCAERQMBWCAOQMODHIFWGRTQUKFCYYLTWDXAFYXRZCWJGQOIBSJDUIPTTTFELTMVJXDCANEUGKZSDOZGAWPZVLPWYKLPZJKKIJYRFVHSNKBSMZGOMQBUXLBHGXNFNLDWWHTYHMGAVQXYEPBRNL");
    msg.lat = 0.6521888627669166;
    msg.lon = 0.9161606833752215;
    msg.depth = 0.16792625385372995;
    msg.query_channel = 239U;
    msg.reply_channel = 127U;
    msg.transponder_delay = 112U;

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
    msg.setTimeStamp(0.35492622712373945);
    msg.setSource(36217U);
    msg.setSourceEntity(108U);
    msg.setDestination(44957U);
    msg.setDestinationEntity(129U);
    msg.beacon.assign("LVESSAQSQUKFKGPSHBCPRVRKMXMJDOAKHZBGBVORTQBHLAGXVZIMQALBNYXFBKEIQECPAOZCHCBPQDLJGNVPJNCPWNUZDYTOFPDGTRTROZDWYNAAKXUHIHODJOSFOCTPVSRJEUIGYNWVHGGPSLEZETRWYLYWMCPUIUOFWVHIXVFCDZQRJGYI");
    msg.lat = 0.7360808274127841;
    msg.lon = 0.47727972786098205;
    msg.depth = 0.3971046550456704;
    msg.query_channel = 118U;
    msg.reply_channel = 52U;
    msg.transponder_delay = 127U;

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
    msg.setTimeStamp(0.7154761467580397);
    msg.setSource(62632U);
    msg.setSourceEntity(172U);
    msg.setDestination(40385U);
    msg.setDestinationEntity(48U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.28196610729081084);
    msg.setSource(35596U);
    msg.setSourceEntity(193U);
    msg.setDestination(153U);
    msg.setDestinationEntity(245U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.7683227278413581);
    msg.setSource(21425U);
    msg.setSourceEntity(46U);
    msg.setDestination(44959U);
    msg.setDestinationEntity(116U);
    msg.op = 204U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RUAIBJSCCZQPPUVBXOMTQLIYOZXXUWSQXJOTLOQRXIKDSYQMPCCVIYUOUQLMDATRYYUIBGZ");
    tmp_msg_0.lat = 0.9957809893329747;
    tmp_msg_0.lon = 0.8147878303524534;
    tmp_msg_0.depth = 0.26151627971057334;
    tmp_msg_0.query_channel = 122U;
    tmp_msg_0.reply_channel = 115U;
    tmp_msg_0.transponder_delay = 89U;
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
    msg.setTimeStamp(0.4362414963865443);
    msg.setSource(48886U);
    msg.setSourceEntity(142U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(215U);
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 25U;
    tmp_msg_0.op = 117U;
    tmp_msg_0.err_mean = 0.9156095570213499;
    tmp_msg_0.dist_min_abs = 0.3019690156710102;
    tmp_msg_0.dist_min_mean = 0.31010008329340366;
    tmp_msg_0.roll_rate_mean = 0.721591216894444;
    tmp_msg_0.time = 0.6101232150048784;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 201U;
    tmp_tmp_msg_0_0.lon_gain = 0.2820806466331779;
    tmp_tmp_msg_0_0.lat_gain = 0.542296799071916;
    tmp_tmp_msg_0_0.bond_thick = 0.6022894661612332;
    tmp_tmp_msg_0_0.lead_gain = 0.13014581850927964;
    tmp_tmp_msg_0_0.deconfl_gain = 0.43349230218754986;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.4089240000255179;
    tmp_tmp_msg_0_0.safe_dist = 0.4501808025265559;
    tmp_tmp_msg_0_0.deconflict_offset = 0.9005854625289776;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.2550201278392076;
    tmp_tmp_msg_0_0.accel_lim_x = 0.6677993259743861;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4141204154087609);
    msg.setSource(9124U);
    msg.setSourceEntity(166U);
    msg.setDestination(51412U);
    msg.setDestinationEntity(84U);
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 59907U;
    tmp_msg_0.lat = 0.2290283763929688;
    tmp_msg_0.lon = 0.9632393091269594;
    tmp_msg_0.z_units = 226U;
    tmp_msg_0.z = 0.48994050335942463;
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
    msg.setTimeStamp(0.0501271158290848);
    msg.setSource(35647U);
    msg.setSourceEntity(129U);
    msg.setDestination(65319U);
    msg.setDestinationEntity(136U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7803062876816821;
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
    msg.setTimeStamp(0.4955878899474553);
    msg.setSource(47056U);
    msg.setSourceEntity(23U);
    msg.setDestination(3872U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.1907748957535259;
    msg.lon = 0.2746092618236077;
    msg.depth = 0.9860805875043599;
    msg.sentence.assign("AHZQZQMTLZRARTJXMVCYMJBXUULIZCKTNWSKADXRSKEWEBRHXTSTWXYNROUDMLJLEHXSPFXFZWAJIURVLXNKNVCJHRQGJVDVPCNGZIAKUNSQCIZJUMUBLQNPOMGSGYJWMRAKYIEKDCFTHTTRCDOBOKDIYOWGUUSWPDESFMPYGTFHVIKAFVBCPFJGPGOJZEHTEHESYEUQOVYX");
    msg.txtime = 0.5709446869386112;
    msg.modem_type.assign("NYQREMKWCBWCTQESVSNBZFDCWWMKHVASQOZAMYIXYPLOXYIWXPIFUBBCXIHHOGXYYURQWAQLJPVCJPVFPAXCIJPGAGEDXMZSLTTHWNKUBQIZHUZBXBSPFYUGLQADTEKGGVNUQVCHKXCWSOVRINWSFITIEMJSBBUUBWZGFFDELQROKR");
    msg.sys_src.assign("TLWWUCBEHXHVDOHGSCBGETVYRYJILBFAPVAOAKRCHTBMYTFEAIDJPWAGQGQAURRZL");
    msg.seq = 29166U;
    msg.sys_dst.assign("CUSPUSIZNXOOFKGNNRXVDKCQYXYFYIDYGJVVIGIKBLRPXVUJWTKSFTMIFKUZQDWASVTGEZUVWSVAWHXEFPHOHVJXBDNXAUSXNMDRJAEBBABLSWGDMZJTNVLCTBNGRRLTBDFHPKCFPZIUODFZNKRHOJYAOENWOCSQZTQAUDAELFAMDLMGJMOZEGHTCQWGLIRRCJWCQOFXHLSMVJBNYZPYUEIWIPPQETRCBZHXOEASQKLMHGYUJBY");
    msg.flags = 126U;
    const char tmp_msg_0[] = {43, -48, 72, 15, 17, -83, 109, -99, 72, -92, 122, 72, -56, -82, -15, 83, -82, -123, 123, 81, -114, -113, -89, -8, -110, 112, 88, -91, 40, 14, -114, -54, -65, -33, 39, 77, 47, 77, -53, -48, 14, 10, 66, -106, -1, 40, -57, 40, 111, -11, 1, -7, 12, 77, 10, 125, 1, -82, -51, -61, 51, 75, 81, -47, 17, 26, 119, -67, 108, 91, -10, -33, -31, -65, -11, -2, -75, -102, 82, -62, 80, -53, -14, 109, 111, -76, -56, -39, 81, -3, -38, -120, 1, -59, -34, -12, 48, -123, -97, 50, -54, -57, -127, 75, -50, 105, 52, 53, -51, -19, -43};
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
    msg.setTimeStamp(0.17482814289590687);
    msg.setSource(56002U);
    msg.setSourceEntity(216U);
    msg.setDestination(62248U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.26251361362460124;
    msg.lon = 0.06227270786692218;
    msg.depth = 0.5016461385717219;
    msg.sentence.assign("ZFYHDRKRFOJSCVCIOUUXAZKRSQPFPKSPXPIFBAJRXYKHJXODQVIWOUGSVJKGNQHDCLFLQOCOGWYDKOLTRXXVLKAWMVLPWXMKMMPUYWNXTHHIRXMSYBNJSEISMSAWNLTQZNQNTFWBQANWTGOPZBICESBVCEYIFKEGOIJRLRJSVUGVNHQMWTTEPUQHFYTDTJKHGBGCDCHPNMUAVC");
    msg.txtime = 0.008417252372571626;
    msg.modem_type.assign("GVUKFMGKTNCZJPQWUKPZRKXBLWDGXRQCVCQAVTHVCPFEQYFGMESLGSVDCFNFSDUKJRETQDLTROOURUTSUVNZWMSPBYIJWMPIYOWEGHUTYIBSQINJKJBBNMCLYBREYAZYESBPHSWFPJZIWVQRNNMZWXAXDAKHFCLMNVRQNXXXTKYKZPJIWQAEAWVHRVXDTOZRSGOOH");
    msg.sys_src.assign("CAILVUMLIOWAWXRGJADOWJBSXTQEPPDLGXONZMBDTUNZHTSNVHWRKHVFSUGMGTQHCWVMMATNBDTRWNBVHBYOJARUUBZRBVZYMXBLZIONYUKXVTLDKJFGEAYKRVWFEATYFXY");
    msg.seq = 28395U;
    msg.sys_dst.assign("OFFWUIUBZQAZUGVXWSTXHGQMQSDABMANCFCOJGCRPTETKSWEBCDCUHZFYISWFTMZHQSYFAYWJJHEDBPILPKLVHINUVKVTYKRXUUIDPVSNQTVQRTOGARYCEYPMGIDOKYLALQJBLSFSJWEXXSQKBOFBGHIKXIWZVC");
    msg.flags = 201U;
    const char tmp_msg_0[] = {-58, -33, -53, 4, -102, 27, 28, 69, 12, 114, 3, 34, -80, 5, -51, 55, -61, -35, -51, 87, 67, -95, 91, 74, -33, 89, 30, -50, 98, -6, -126, 109, 14, 3, -16, 105, 107, 66, -44, 21, -36, 28, -58, 99, 24, 124, -121, -53, 87, -11, -44, -9, 109, -37, -122, -56, -123, 80, -44, -128, -72, 67, -62, -76, 51, -41, -7, 121, -41, -80, 65, -50, -10, 124, 42, -82, -53, 51, -15, -15, -52, 61, -24, -115, -75, 93, -32, -55, 84, 125, 80, -39, -34, 27, 14, -46, -18, -16, -36, -75, -92, -19, -1, 29, -121, -108, 95, -54, 108, -7, 51, 93, -18, 3, -23, -121, -23, 110, 71, 26, 1, -22, 49, 13, -47, -55, -119, -94, -102, 82, 103, 93, -36, -69, -46, 76, 95, -123, 109, -12, -80, -113, -95, -95, 19, -121, -124, -78, -86, 1, 31, -113, 58, 81, 44, 81, 76, 120, 26, 4, 78, 42, 65, 65, -19, 45, -122, 46, -37, -105, -32, -32, -85, 20, 3, 12, 83, 41, -78, -24, -31, 26, -18, -34, -28, 93, 11, 49, 116, 57, -55, 22, -120, 1, -68, 12, 90, 12, 123, 107, 34, 75, -59, 60, -90, 28, -51};
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
    msg.setTimeStamp(0.7001484086275385);
    msg.setSource(8386U);
    msg.setSourceEntity(65U);
    msg.setDestination(43556U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.9273308601097412;
    msg.lon = 0.622099497035905;
    msg.depth = 0.7526391885259165;
    msg.sentence.assign("CZGOTBHQAV");
    msg.txtime = 0.28261523962450885;
    msg.modem_type.assign("FUTNGJFYEHRQREPAOJQMMCGQKPXCKIRUYFQKLCSGEMSIKDBLXFTBNHOACVJINDJJYHOGTFGSMRLJXXKIQZIDPYWGLVHLVWNPRAVRMWXGLJVLMCVEAUFDRKNJCQOMWWFBAZSKXQOMFIJBEPSVTDZELODOIHICMWSCPGWLAZZVGQYTKEBNDYOYFINSWKAGUBHUYUUDOQXWRUUHTAZDQSSRWIKBLCXNHUZZFAYMBHXDEJPZVPPENBVTAXHYPR");
    msg.sys_src.assign("MOUJHLICTJTKFPRSYSHJYTWMXEQGVOYICIYSBHTBXOZZWJFDTDFVQBACGSCRUXHSMXPDYCASZLUDZKBNUHDQHUVMAFAXGQAVGKFETKWJXWLFCNMKZLHCIEQJUWPWTKLCNV");
    msg.seq = 28602U;
    msg.sys_dst.assign("ZYFZTCXHPUXQXFVMIMHEDKBLKSNKMDHPQXRWWJDTNKOVJLAGFNWGTYPMTUIOYUFCXLUALYYXJNULRBAHMUTBUBAZHOAVSKGOCPGWDWIOBQDQCYQZEDVCRNJFHFXESHIKRQZDLQOLUAWNKJJQ");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-64, 46, 41, 102, 11, -117, -128, -93, 84, -117, -3, -74, -55, -99, 61, -75, -13, -45, 56, 36, 84, 75, 123, -83, -51, -81, -51, -49, -121, 24, -69, -51, -38, 55, -126, -66, 27, 93, 78, 80, 115, -107, -80, 38, 102, -30, -48, 97, 74, -125, -17, 22, 61, -96, -71, -47, 30, 110, 16, 57, -9, -39, 65, 70, 76, 65, -1, -50, 124, 94, -60, 34, -106, -26, 43, 76, -70, -105, -115, 62, -17, -94, 6, 6, -105, 100, 34, 43, 54, 7, 3, -78, 97, -103, -124, 122, 65, 102, 34, -36, -76, -39, -31, -33, -113, -33, 15, -82, -116, 109, -44, -40, 88, -81, 22, -50, -73, 101, 69, -108, -116, 75, -13, -6, 34, 37, 17, -34, -22, -69, 45, -4, -86, 31, -20, 11, 5, 84, 102, -43, 104, 73, -110, -6, -38, -54, -58, -35, -58, -89, -74, -115, 18, 107, 0, 28, 97, -111, -103, 116, -31, 6, -5, 107, -2, -50, -122, 103, 100, -49, -116, -74, 14, 106, 64, 10, 83, -102, -67, -127, 103, 85, -92, 8, -87, -127, 8, 3, 86, 17, -23, 75, 93, 78, 13, -40, 97, -33, 97, -30, -49, 50, -96, -37, -114, -86, -114, 116, 83, 32, -79, 87, -8, 4, 58, -77, 68, -86, 125, -32};
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
    msg.setTimeStamp(0.2801442702952869);
    msg.setSource(45417U);
    msg.setSourceEntity(103U);
    msg.setDestination(13695U);
    msg.setDestinationEntity(67U);
    msg.op = 144U;
    msg.system.assign("KARDPLRPSVRYXTEHQXJXFFDCWPMYXMMAPOYWVBUOMHQNIHQEZKWSRAUNHSGAVAZWUNTLQLPGNHILORZI");
    msg.range = 0.6550827420886308;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 219U;
    tmp_msg_0.htime = 0.7622379219837937;
    tmp_msg_0.context.assign("VMYQPFLMFBFCRNZORSDTTPWRNHXKEIOESGLVMRIREVMWHWORGZLJU");
    tmp_msg_0.text.assign("CIKYLCBTNSDZDIEICTXISIZAJHGRHNCYGRLGPMJHGFXDONILZOWBHGSELDEZPSRADRDPUPKQEWGAOOQNFVMHMQBTWVHDWMUQXIPKLUUQCMTWVAWWXBSRYNOCJFSXMTOYZECLZQUBYNAQZYRGJBKCLTEOBSVKFXBVLBYRHKJJVTKOOKABMZFWUQCRP");
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
    msg.setTimeStamp(0.6057118600576765);
    msg.setSource(59234U);
    msg.setSourceEntity(180U);
    msg.setDestination(61295U);
    msg.setDestinationEntity(84U);
    msg.op = 62U;
    msg.system.assign("TJNWZEUISOLEQTAIXRHDOWFELKRBFHCGBSXTHQWMPMQBKGXHQLSAXBHNQKQIXR");
    msg.range = 0.15192885878484863;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.2395717874722918;
    tmp_msg_0.confidence = 0.2881906356921027;
    tmp_msg_0.opmodes.assign("RALYZHJTHDCGXZ");
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
    msg.setTimeStamp(0.8083131969226977);
    msg.setSource(29068U);
    msg.setSourceEntity(53U);
    msg.setDestination(28481U);
    msg.setDestinationEntity(39U);
    msg.op = 22U;
    msg.system.assign("VBLKKRQACMTACIFELOHNZRCYKUQEKDYMEIZZYWTIIGASCZUYQSXGQZXGPKKSHDPSPVRNCSTDMAOSZLLERSVHVXPUWANLBLOJEQFHDOVA");
    msg.range = 0.7487737305884373;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 41839U;
    tmp_msg_0.type = 1U;
    tmp_msg_0.utc_year = 46877U;
    tmp_msg_0.utc_month = 80U;
    tmp_msg_0.utc_day = 74U;
    tmp_msg_0.utc_time = 0.8019370773965621;
    tmp_msg_0.lat = 0.147186496993704;
    tmp_msg_0.lon = 0.22835909825131007;
    tmp_msg_0.height = 0.8980867912655223;
    tmp_msg_0.satellites = 161U;
    tmp_msg_0.cog = 0.6655376296257424;
    tmp_msg_0.sog = 0.11079859660710834;
    tmp_msg_0.hdop = 0.2902567476127016;
    tmp_msg_0.vdop = 0.7537061346957844;
    tmp_msg_0.hacc = 0.7786205899063198;
    tmp_msg_0.vacc = 0.43871781400862897;
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
    msg.setTimeStamp(0.029893362343124785);
    msg.setSource(30247U);
    msg.setSourceEntity(237U);
    msg.setDestination(20651U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.5959373494121809);
    msg.setSource(44745U);
    msg.setSourceEntity(9U);
    msg.setDestination(46104U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.9847664329065685);
    msg.setSource(34347U);
    msg.setSourceEntity(153U);
    msg.setDestination(51758U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.8020208283731967);
    msg.setSource(22642U);
    msg.setSourceEntity(207U);
    msg.setDestination(64399U);
    msg.setDestinationEntity(244U);
    msg.list.assign("JQJLTOVZSNOASOCARKQWRNNTNRUEQFUKPTBQXIKRBGMGIJXAKBTYBZCZAGXAPAPXQQZLEOLUJIWECHTTLFTRLWVFIHSEBGYTCDIXOYZYGMYIZFCEJPVBQPFDSAODKDVVUOKGWJPBSEMAIMPPJVFNRWJWPQCEOKGLMHCHNHHRYYMKLFJHGLDPDUMZVXVGU");

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
    msg.setTimeStamp(0.27751333584047466);
    msg.setSource(35886U);
    msg.setSourceEntity(38U);
    msg.setDestination(1979U);
    msg.setDestinationEntity(217U);
    msg.list.assign("PGOTZXGGRUZSWQDHKSPHODEBKMBRCMDEJXRJUUGGMMALJVWHWHYFQBPWRLOECEIJAGTXAUEBFLCNMCTQLMEYSITHCDWNXGSPRFMKPLTOKPSIYGZDNZUCWTPSUSNAICDJCTFGNQIQJXANDBRMZQYPWVKIXWFJELLURYVQXCZNEJIQYVFMAUQTWZIBXBOAVOX");

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
    msg.setTimeStamp(0.25958328536998987);
    msg.setSource(53417U);
    msg.setSourceEntity(11U);
    msg.setDestination(61171U);
    msg.setDestinationEntity(3U);
    msg.list.assign("ZMQQMHYLLXPASNFIAQYUMMJHPZVGIPTVUPXJQXPHRMYCWOESECITWWGLJMWZOPWDHOJIUCHDWKSVDUFQNERQCCIBPZBLHTGYMNXOCXCAIOUFNSMONREJEGSQZJKSUMAAKLVGJLUGNDTPYCKFKVRPRASTKFTNLHSFJHWLWTQJFTHYWYWZBAFCIIZSRRDDOKEEAXRXBRTVDZOSDJNG");

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
    msg.setTimeStamp(0.10535446503266044);
    msg.setSource(64683U);
    msg.setSourceEntity(110U);
    msg.setDestination(50202U);
    msg.setDestinationEntity(235U);
    msg.peer.assign("TFGVOGKTMPBIVHHMCMPUTMARKCSODEEABPFDZMCBNUVGRGZSYEGKDVULBLBQEJIXZWLEXFZJKCOMFNAPQHXHQCWYBXVIGOXPSWKPEOIRLTNNDHCTLGHVHXOFQCYUSNKLLJ");
    msg.rssi = 0.292115759325584;
    msg.integrity = 18361U;

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
    msg.setTimeStamp(0.9103856199676564);
    msg.setSource(12383U);
    msg.setSourceEntity(78U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(5U);
    msg.peer.assign("MTUEXHSDAZOXQAZMTULQWZVCBNPYRTBGLYOTQANKTZBZEONIILJIIXISFQWXRLGYQMKVUITVSDQOJKDXWPSEYAWHEBCJRZKWGFVHEVFNJJJUFMIGDEHTWHCMOCLBXKJTCUBHRCMXNSJNPRTUKRUYMWABAYKOSEJPAFRDGSMLOYGYXDUVPZGJCFQPSRXRPCWVBDHEMDOZHABLDGUYPLAFGNCNEAXKLYI");
    msg.rssi = 0.9405649389802355;
    msg.integrity = 18116U;

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
    msg.setTimeStamp(0.2639517339498938);
    msg.setSource(42609U);
    msg.setSourceEntity(235U);
    msg.setDestination(63449U);
    msg.setDestinationEntity(129U);
    msg.peer.assign("GMZNTALRMIAYLYQKRZVGTBFODZTBVISEHERDVAKDWRGIOYRFKIJNOW");
    msg.rssi = 0.7125335985330916;
    msg.integrity = 41847U;

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
    msg.setTimeStamp(0.5143764503302936);
    msg.setSource(8428U);
    msg.setSourceEntity(228U);
    msg.setDestination(47153U);
    msg.setDestinationEntity(235U);
    msg.req_id = 21287U;
    msg.destination.assign("ROAOEEWHAMIVEBWYLPJUFDHYLIKCCZKIKYAFJSSKNDCZYXBKJNUKEBZHLZWSNJTZVPVFXMREZWSGAOHTXUCFD");
    msg.timeout = 0.8940620695078048;
    msg.range = 0.7928425012567364;
    msg.type = 21U;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.6596165895017593);
    msg.setSource(12699U);
    msg.setSourceEntity(119U);
    msg.setDestination(49126U);
    msg.setDestinationEntity(61U);
    msg.req_id = 53659U;
    msg.destination.assign("FHCEOPEDIPMHLJRQSDWYINRTSSQBJXGNSAILKLUCZGAOBAVVIZYUXXOLAEFGNPUVBWDPKPUJTAZNTFFPSQSKTKKRRWSFFWDOHHOASYHODUHQWVQYEMANBCYITQWBYNMNUOBWEDCJCVAJNJKUQMOVMGXOCTJIGXYHLWHRMKLYDPEGFBDRPZTAFNVQIGKLK");
    msg.timeout = 0.8839800363353986;
    msg.range = 0.24836261665121206;
    msg.type = 205U;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.6346866377432896;
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
    msg.setTimeStamp(0.8032741318693398);
    msg.setSource(36071U);
    msg.setSourceEntity(82U);
    msg.setDestination(10938U);
    msg.setDestinationEntity(176U);
    msg.req_id = 58194U;
    msg.destination.assign("IRPYURHLWVBNUM");
    msg.timeout = 0.6465535307723898;
    msg.range = 0.4475672050486619;
    msg.type = 222U;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.5540141962977686;
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
    msg.setTimeStamp(0.6601442474542369);
    msg.setSource(31884U);
    msg.setSourceEntity(189U);
    msg.setDestination(8339U);
    msg.setDestinationEntity(65U);
    msg.req_id = 23003U;
    msg.type = 69U;
    msg.status = 193U;
    msg.info.assign("BFBNYEZLXCBQDEEFLTEAVIYTNGDLRNUKLBHCOJTBVOGKSQIGPGOUESXYKWTABAKRZPLRVUCEMTXNHZKSJXZOIHZQWTKSIDLSLQPSXCVJHFOCFWDJZXVAZJYOURBPSCEMOMTORBAGIBEKWXZYAWJUQTLVJ");
    msg.range = 0.7688886280663885;

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
    msg.setTimeStamp(0.62743108876842);
    msg.setSource(15379U);
    msg.setSourceEntity(7U);
    msg.setDestination(52763U);
    msg.setDestinationEntity(17U);
    msg.req_id = 22012U;
    msg.type = 85U;
    msg.status = 88U;
    msg.info.assign("RXDPAGOFJTOTBMQPNFSHHLXWXREHYWOIUDLTJGBCWGNUZUPFMIRIEZYLQJSIEBVCZHMAGNVYNSYDIERYHKWBAOFMQDOSTVLZBWWAVUEOKJFGXGVSPJJNOBDBGKFZKZXEWGHQRHPQJDZAWREIFIVIUWKWDBJSLDMUKJMOQGEKPTTMAUSNNXRNMXUXPDBYDRFCIVGNZLOBARTEPLZSFEQTKOYZHNPHYYAUVFCVMTMLRVALXQULCTYKXAKS");
    msg.range = 0.7473948010428633;

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
    msg.setTimeStamp(0.7253325564005533);
    msg.setSource(53125U);
    msg.setSourceEntity(134U);
    msg.setDestination(29597U);
    msg.setDestinationEntity(186U);
    msg.req_id = 16929U;
    msg.type = 95U;
    msg.status = 135U;
    msg.info.assign("CWGMCOHXWTLFAMTHZKBVHZUZYIXSFDANPVTNYIAKYBWSGBTQDGIPDWMIXEEHVURRAYCAPPFZGMRLODTIQUFIWLXXPEBKJNJSYAQJXGDGEXCNDJMQOUWRYVETNXPCJKHSVCLKHVFCWKZVCEQWDUREFVMRBBUUOVFRSQNTTQQJPWCTCXNGLFASBNJSKZYZFALMILKVEI");
    msg.range = 0.10647017270220971;

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
    msg.setTimeStamp(0.236704589489399);
    msg.setSource(41268U);
    msg.setSourceEntity(216U);
    msg.setDestination(29889U);
    msg.setDestinationEntity(187U);
    msg.value = -3966;

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
    msg.setTimeStamp(0.6675845172686352);
    msg.setSource(44255U);
    msg.setSourceEntity(220U);
    msg.setDestination(63566U);
    msg.setDestinationEntity(70U);
    msg.value = -14564;

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
    msg.setTimeStamp(0.010242070550939952);
    msg.setSource(57669U);
    msg.setSourceEntity(74U);
    msg.setDestination(54374U);
    msg.setDestinationEntity(36U);
    msg.value = 9020;

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
    msg.setTimeStamp(0.5578766657483125);
    msg.setSource(14088U);
    msg.setSourceEntity(198U);
    msg.setDestination(12198U);
    msg.setDestinationEntity(132U);
    msg.value = 0.9416033355739667;

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
    msg.setTimeStamp(0.2006735243270079);
    msg.setSource(9787U);
    msg.setSourceEntity(93U);
    msg.setDestination(60156U);
    msg.setDestinationEntity(85U);
    msg.value = 0.18317323792885287;

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
    msg.setTimeStamp(0.0941494158677979);
    msg.setSource(59599U);
    msg.setSourceEntity(9U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6223772773782842;

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
    msg.setTimeStamp(0.6799472956623146);
    msg.setSource(45969U);
    msg.setSourceEntity(29U);
    msg.setDestination(60617U);
    msg.setDestinationEntity(186U);
    msg.value = 0.11135740902728353;

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
    msg.setTimeStamp(0.9569319154921284);
    msg.setSource(16344U);
    msg.setSourceEntity(109U);
    msg.setDestination(33702U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7091277871597751;

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
    msg.setTimeStamp(0.9336530431870877);
    msg.setSource(44564U);
    msg.setSourceEntity(98U);
    msg.setDestination(14884U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8170614414967887;

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
    msg.setTimeStamp(0.6855009629185986);
    msg.setSource(15181U);
    msg.setSourceEntity(116U);
    msg.setDestination(56507U);
    msg.setDestinationEntity(154U);
    msg.validity = 55621U;
    msg.type = 154U;
    msg.utc_year = 38228U;
    msg.utc_month = 160U;
    msg.utc_day = 220U;
    msg.utc_time = 0.7028058512529924;
    msg.lat = 0.8969873845667078;
    msg.lon = 0.6954323272593806;
    msg.height = 0.6979042340069087;
    msg.satellites = 221U;
    msg.cog = 0.9205353104104995;
    msg.sog = 0.48987956769454166;
    msg.hdop = 0.558912060480108;
    msg.vdop = 0.29022473448167485;
    msg.hacc = 0.8460767781838388;
    msg.vacc = 0.44473051612233827;

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
    msg.setTimeStamp(0.24141287136968914);
    msg.setSource(54735U);
    msg.setSourceEntity(204U);
    msg.setDestination(10359U);
    msg.setDestinationEntity(198U);
    msg.validity = 51505U;
    msg.type = 68U;
    msg.utc_year = 22986U;
    msg.utc_month = 244U;
    msg.utc_day = 145U;
    msg.utc_time = 0.07759702050919881;
    msg.lat = 0.6048887291232015;
    msg.lon = 0.7107970516849247;
    msg.height = 0.932268006330338;
    msg.satellites = 64U;
    msg.cog = 0.5047036292991419;
    msg.sog = 0.7503475397326075;
    msg.hdop = 0.09769498908966912;
    msg.vdop = 0.41898654803190716;
    msg.hacc = 0.11485175458801067;
    msg.vacc = 0.13326906032551455;

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
    msg.setTimeStamp(0.03645128773547046);
    msg.setSource(29657U);
    msg.setSourceEntity(156U);
    msg.setDestination(46807U);
    msg.setDestinationEntity(78U);
    msg.validity = 60180U;
    msg.type = 140U;
    msg.utc_year = 37549U;
    msg.utc_month = 12U;
    msg.utc_day = 4U;
    msg.utc_time = 0.6437624500727854;
    msg.lat = 0.7386464239041934;
    msg.lon = 0.8317395394288668;
    msg.height = 0.038840873935343856;
    msg.satellites = 177U;
    msg.cog = 0.46121860019550476;
    msg.sog = 0.9593291962719513;
    msg.hdop = 0.3021483060651058;
    msg.vdop = 0.8173513111640506;
    msg.hacc = 0.6807055228370629;
    msg.vacc = 0.33476474585643057;

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
    msg.setTimeStamp(0.9704951479568394);
    msg.setSource(50796U);
    msg.setSourceEntity(56U);
    msg.setDestination(6669U);
    msg.setDestinationEntity(164U);
    msg.time = 0.11328123048135674;
    msg.phi = 0.526410772296068;
    msg.theta = 0.26249362408429266;
    msg.psi = 0.7370714874839852;
    msg.psi_magnetic = 0.2428874829717913;

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
    msg.setTimeStamp(0.22881235480981266);
    msg.setSource(14987U);
    msg.setSourceEntity(181U);
    msg.setDestination(34272U);
    msg.setDestinationEntity(236U);
    msg.time = 0.3344786238533328;
    msg.phi = 0.5453447583209462;
    msg.theta = 0.37289636532603143;
    msg.psi = 0.2585244470970032;
    msg.psi_magnetic = 0.7292688247827863;

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
    msg.setTimeStamp(0.6243455060855101);
    msg.setSource(25591U);
    msg.setSourceEntity(160U);
    msg.setDestination(64819U);
    msg.setDestinationEntity(47U);
    msg.time = 0.7412631291048136;
    msg.phi = 0.8781176515345053;
    msg.theta = 0.24953777671918465;
    msg.psi = 0.3488879352834605;
    msg.psi_magnetic = 0.5117396956327225;

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
    msg.setTimeStamp(0.6611645781026941);
    msg.setSource(15117U);
    msg.setSourceEntity(90U);
    msg.setDestination(49358U);
    msg.setDestinationEntity(214U);
    msg.time = 0.9819354350040492;
    msg.x = 0.06590867518786336;
    msg.y = 0.9394668280017651;
    msg.z = 0.35196743064678593;
    msg.timestep = 0.1346943541197091;

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
    msg.setTimeStamp(0.8324674622496415);
    msg.setSource(45149U);
    msg.setSourceEntity(211U);
    msg.setDestination(47404U);
    msg.setDestinationEntity(92U);
    msg.time = 0.23636876309130095;
    msg.x = 0.04227427463597988;
    msg.y = 0.517636036734422;
    msg.z = 0.9539919697665281;
    msg.timestep = 0.10997421727438839;

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
    msg.setTimeStamp(0.12762280339244447);
    msg.setSource(58606U);
    msg.setSourceEntity(155U);
    msg.setDestination(55394U);
    msg.setDestinationEntity(77U);
    msg.time = 0.10008270631696559;
    msg.x = 0.4093994292993002;
    msg.y = 0.9365806273298687;
    msg.z = 0.014387075481736789;
    msg.timestep = 0.766501358815647;

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
    msg.setTimeStamp(0.2918335059692637);
    msg.setSource(14571U);
    msg.setSourceEntity(162U);
    msg.setDestination(41105U);
    msg.setDestinationEntity(254U);
    msg.time = 0.44753030699551966;
    msg.x = 0.7334682910096874;
    msg.y = 0.46933740500963106;
    msg.z = 0.4959074790762227;

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
    msg.setTimeStamp(0.3919361595533629);
    msg.setSource(15589U);
    msg.setSourceEntity(69U);
    msg.setDestination(15797U);
    msg.setDestinationEntity(122U);
    msg.time = 0.8607563763911268;
    msg.x = 0.12134505422788333;
    msg.y = 0.34937314065439773;
    msg.z = 0.32037932916318035;

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
    msg.setTimeStamp(0.4822910144103023);
    msg.setSource(5711U);
    msg.setSourceEntity(31U);
    msg.setDestination(38252U);
    msg.setDestinationEntity(1U);
    msg.time = 0.6135231220840105;
    msg.x = 0.5843431185458279;
    msg.y = 0.5308288132275965;
    msg.z = 0.5538038011420059;

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
    msg.setTimeStamp(0.13888584970649465);
    msg.setSource(41234U);
    msg.setSourceEntity(59U);
    msg.setDestination(54512U);
    msg.setDestinationEntity(40U);
    msg.time = 0.7430572690593085;
    msg.x = 0.47176064069399537;
    msg.y = 0.37337344871286915;
    msg.z = 0.7924594491759167;

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
    msg.setTimeStamp(0.767077413159506);
    msg.setSource(6013U);
    msg.setSourceEntity(79U);
    msg.setDestination(63216U);
    msg.setDestinationEntity(28U);
    msg.time = 0.8067814222258277;
    msg.x = 0.41199977135335886;
    msg.y = 0.15888525714018786;
    msg.z = 0.21515067899574936;

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
    msg.setTimeStamp(0.604170169542906);
    msg.setSource(58446U);
    msg.setSourceEntity(11U);
    msg.setDestination(19477U);
    msg.setDestinationEntity(12U);
    msg.time = 0.7360056099624029;
    msg.x = 0.8953943076419739;
    msg.y = 0.9073595516667009;
    msg.z = 0.12054722029720644;

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
    msg.setTimeStamp(0.35663145152346154);
    msg.setSource(15596U);
    msg.setSourceEntity(67U);
    msg.setDestination(1386U);
    msg.setDestinationEntity(29U);
    msg.time = 0.7942778234236427;
    msg.x = 0.9063613727578127;
    msg.y = 0.9140490637121061;
    msg.z = 0.6597858030940488;

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
    msg.setTimeStamp(0.05643555493476171);
    msg.setSource(51430U);
    msg.setSourceEntity(198U);
    msg.setDestination(25518U);
    msg.setDestinationEntity(240U);
    msg.time = 0.5406580953292593;
    msg.x = 0.12100881623620485;
    msg.y = 0.5006045115455295;
    msg.z = 0.6750436731416503;

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
    msg.setTimeStamp(0.7850287847105973);
    msg.setSource(9793U);
    msg.setSourceEntity(195U);
    msg.setDestination(20249U);
    msg.setDestinationEntity(0U);
    msg.time = 0.2965019873252125;
    msg.x = 0.6988487366414201;
    msg.y = 0.6601191703736963;
    msg.z = 0.6584122607587721;

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
    msg.setTimeStamp(0.03319912387047108);
    msg.setSource(31421U);
    msg.setSourceEntity(12U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(128U);
    msg.validity = 238U;
    msg.x = 0.3981132892882373;
    msg.y = 0.5415315850113641;
    msg.z = 0.5751622008289208;

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
    msg.setTimeStamp(0.48236139054239413);
    msg.setSource(6066U);
    msg.setSourceEntity(85U);
    msg.setDestination(32359U);
    msg.setDestinationEntity(182U);
    msg.validity = 66U;
    msg.x = 0.7944060121510479;
    msg.y = 0.24481237643944098;
    msg.z = 0.8768101652052473;

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
    msg.setTimeStamp(0.8662949775828437);
    msg.setSource(46354U);
    msg.setSourceEntity(158U);
    msg.setDestination(24297U);
    msg.setDestinationEntity(79U);
    msg.validity = 61U;
    msg.x = 0.8925028092791969;
    msg.y = 0.6818304892252102;
    msg.z = 0.13768155100130886;

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
    msg.setTimeStamp(0.004742127666236606);
    msg.setSource(62151U);
    msg.setSourceEntity(142U);
    msg.setDestination(58068U);
    msg.setDestinationEntity(104U);
    msg.validity = 110U;
    msg.x = 0.13280961680512904;
    msg.y = 0.8749058230840142;
    msg.z = 0.27552998173825294;

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
    msg.setTimeStamp(0.8747312895220354);
    msg.setSource(17832U);
    msg.setSourceEntity(246U);
    msg.setDestination(62825U);
    msg.setDestinationEntity(10U);
    msg.validity = 236U;
    msg.x = 0.40526965769285916;
    msg.y = 0.15407610184161635;
    msg.z = 0.7891473782307344;

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
    msg.setTimeStamp(0.9378209276074658);
    msg.setSource(39077U);
    msg.setSourceEntity(249U);
    msg.setDestination(35699U);
    msg.setDestinationEntity(109U);
    msg.validity = 112U;
    msg.x = 0.79520890907949;
    msg.y = 0.5727636057707379;
    msg.z = 0.8993894885676201;

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
    msg.setTimeStamp(0.8964285886036145);
    msg.setSource(1815U);
    msg.setSourceEntity(118U);
    msg.setDestination(63558U);
    msg.setDestinationEntity(130U);
    msg.time = 0.6085389654001235;
    msg.x = 0.27859103280797315;
    msg.y = 0.9976933468803773;
    msg.z = 0.7806228756017495;

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
    msg.setTimeStamp(0.8123831390644827);
    msg.setSource(51710U);
    msg.setSourceEntity(186U);
    msg.setDestination(18398U);
    msg.setDestinationEntity(79U);
    msg.time = 0.1954046949057089;
    msg.x = 0.10115545028484096;
    msg.y = 0.4049150860427352;
    msg.z = 0.23853616694195212;

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
    msg.setTimeStamp(0.2628915875048352);
    msg.setSource(2563U);
    msg.setSourceEntity(203U);
    msg.setDestination(10777U);
    msg.setDestinationEntity(31U);
    msg.time = 0.4038667414608471;
    msg.x = 0.5209904149991852;
    msg.y = 0.5994702658834322;
    msg.z = 0.28947690633910017;

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
    msg.setTimeStamp(0.5270822876708038);
    msg.setSource(50233U);
    msg.setSourceEntity(178U);
    msg.setDestination(59480U);
    msg.setDestinationEntity(116U);
    msg.validity = 105U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.40037425301178753;
    tmp_msg_0.y = 0.13121290031520694;
    tmp_msg_0.z = 0.862101342200836;
    tmp_msg_0.phi = 0.7634961745651511;
    tmp_msg_0.theta = 0.9223310125091313;
    tmp_msg_0.psi = 0.11764295178847028;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8401282626298003;

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
    msg.setTimeStamp(0.7787818878273658);
    msg.setSource(62261U);
    msg.setSourceEntity(89U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(178U);
    msg.validity = 131U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4772348924924493;
    tmp_msg_0.beam_height = 0.4547315692455375;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.2822502791499383;

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
    msg.setTimeStamp(0.543295642105203);
    msg.setSource(26560U);
    msg.setSourceEntity(42U);
    msg.setDestination(28735U);
    msg.setDestinationEntity(190U);
    msg.validity = 33U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.909523007897529;
    tmp_msg_0.beam_height = 0.9754525909946273;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.1501433042188992;

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
    msg.setTimeStamp(0.3721331288124514);
    msg.setSource(14659U);
    msg.setSourceEntity(98U);
    msg.setDestination(38716U);
    msg.setDestinationEntity(173U);
    msg.value = 0.19005414249005348;

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
    msg.setTimeStamp(0.3924772623192786);
    msg.setSource(28571U);
    msg.setSourceEntity(38U);
    msg.setDestination(53692U);
    msg.setDestinationEntity(252U);
    msg.value = 0.8942635253032969;

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
    msg.setTimeStamp(0.23235497621411838);
    msg.setSource(6834U);
    msg.setSourceEntity(88U);
    msg.setDestination(5748U);
    msg.setDestinationEntity(26U);
    msg.value = 0.463399839546357;

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
    msg.setTimeStamp(0.31087398232987573);
    msg.setSource(35439U);
    msg.setSourceEntity(179U);
    msg.setDestination(12904U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8683265192545679;

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
    msg.setTimeStamp(0.4060464308485573);
    msg.setSource(59725U);
    msg.setSourceEntity(85U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7339224644400075;

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
    msg.setTimeStamp(0.877198887081428);
    msg.setSource(28562U);
    msg.setSourceEntity(112U);
    msg.setDestination(53970U);
    msg.setDestinationEntity(60U);
    msg.value = 0.7813889174691399;

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
    msg.setTimeStamp(0.7063239816706548);
    msg.setSource(16398U);
    msg.setSourceEntity(76U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(105U);
    msg.value = 0.7324890528456969;

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
    msg.setTimeStamp(0.3827400622389878);
    msg.setSource(53320U);
    msg.setSourceEntity(147U);
    msg.setDestination(56770U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5202059610817509;

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
    msg.setTimeStamp(0.01974420775205732);
    msg.setSource(40790U);
    msg.setSourceEntity(63U);
    msg.setDestination(54943U);
    msg.setDestinationEntity(174U);
    msg.value = 0.7731803309275193;

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
    msg.setTimeStamp(0.49648853642784263);
    msg.setSource(41240U);
    msg.setSourceEntity(147U);
    msg.setDestination(39323U);
    msg.setDestinationEntity(80U);
    msg.value = 0.3208904856967847;

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
    msg.setTimeStamp(0.20641216262576667);
    msg.setSource(26244U);
    msg.setSourceEntity(219U);
    msg.setDestination(64312U);
    msg.setDestinationEntity(25U);
    msg.value = 0.6129597592415944;

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
    msg.setTimeStamp(0.6680235421912917);
    msg.setSource(9806U);
    msg.setSourceEntity(63U);
    msg.setDestination(60921U);
    msg.setDestinationEntity(53U);
    msg.value = 0.09672910329960793;

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
    msg.setTimeStamp(0.3365372045788826);
    msg.setSource(14322U);
    msg.setSourceEntity(68U);
    msg.setDestination(13303U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5375166840590845;

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
    msg.setTimeStamp(0.14622489817866513);
    msg.setSource(14093U);
    msg.setSourceEntity(186U);
    msg.setDestination(42498U);
    msg.setDestinationEntity(216U);
    msg.value = 0.09677327494032228;

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
    msg.setTimeStamp(0.26880453467446375);
    msg.setSource(4095U);
    msg.setSourceEntity(119U);
    msg.setDestination(17956U);
    msg.setDestinationEntity(219U);
    msg.value = 0.6461505575404053;

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
    msg.setTimeStamp(0.3935750711695165);
    msg.setSource(55876U);
    msg.setSourceEntity(38U);
    msg.setDestination(50235U);
    msg.setDestinationEntity(225U);
    msg.value = 0.002031108715555896;

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
    msg.setTimeStamp(0.5200018053851237);
    msg.setSource(38845U);
    msg.setSourceEntity(81U);
    msg.setDestination(41599U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3262408663690525;

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
    msg.setTimeStamp(0.9138721592552639);
    msg.setSource(22448U);
    msg.setSourceEntity(43U);
    msg.setDestination(64338U);
    msg.setDestinationEntity(131U);
    msg.value = 0.5000190731933913;

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
    msg.setTimeStamp(0.25061830356196646);
    msg.setSource(31148U);
    msg.setSourceEntity(229U);
    msg.setDestination(982U);
    msg.setDestinationEntity(57U);
    msg.value = 0.0977251624946115;

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
    msg.setTimeStamp(0.944329466744366);
    msg.setSource(37739U);
    msg.setSourceEntity(35U);
    msg.setDestination(26088U);
    msg.setDestinationEntity(221U);
    msg.value = 0.6017562194035967;

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
    msg.setTimeStamp(0.9536075597640417);
    msg.setSource(34542U);
    msg.setSourceEntity(153U);
    msg.setDestination(52958U);
    msg.setDestinationEntity(179U);
    msg.value = 0.4846445716290678;

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
    msg.setTimeStamp(0.012781492883698897);
    msg.setSource(49777U);
    msg.setSourceEntity(54U);
    msg.setDestination(64649U);
    msg.setDestinationEntity(237U);
    msg.value = 0.16786754622803535;

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
    msg.setTimeStamp(0.9647124013457188);
    msg.setSource(25658U);
    msg.setSourceEntity(176U);
    msg.setDestination(44979U);
    msg.setDestinationEntity(69U);
    msg.value = 0.45351623261575513;

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
    msg.setTimeStamp(0.26005320580948943);
    msg.setSource(7316U);
    msg.setSourceEntity(135U);
    msg.setDestination(27569U);
    msg.setDestinationEntity(128U);
    msg.value = 0.5648793773148065;

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
    msg.setTimeStamp(0.4342376453834328);
    msg.setSource(53556U);
    msg.setSourceEntity(154U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(223U);
    msg.direction = 0.9787720189658075;
    msg.speed = 0.6644992292107812;
    msg.turbulence = 0.5360487913147877;

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
    msg.setTimeStamp(0.46035788003776523);
    msg.setSource(33747U);
    msg.setSourceEntity(155U);
    msg.setDestination(48447U);
    msg.setDestinationEntity(111U);
    msg.direction = 0.6002706310309887;
    msg.speed = 0.8938487345831231;
    msg.turbulence = 0.43746855762526293;

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
    msg.setTimeStamp(0.2732863969742919);
    msg.setSource(5259U);
    msg.setSourceEntity(251U);
    msg.setDestination(23548U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.9141527535985208;
    msg.speed = 0.7070378162748645;
    msg.turbulence = 0.28514053908366765;

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
    msg.setTimeStamp(0.8382084352979194);
    msg.setSource(65018U);
    msg.setSourceEntity(142U);
    msg.setDestination(2616U);
    msg.setDestinationEntity(199U);
    msg.value = 0.4441103433110858;

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
    msg.setTimeStamp(0.9713259325022587);
    msg.setSource(46790U);
    msg.setSourceEntity(86U);
    msg.setDestination(34447U);
    msg.setDestinationEntity(202U);
    msg.value = 0.9913010340810409;

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
    msg.setTimeStamp(0.5548694291137074);
    msg.setSource(13379U);
    msg.setSourceEntity(237U);
    msg.setDestination(38936U);
    msg.setDestinationEntity(151U);
    msg.value = 0.2039196874662048;

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
    msg.setTimeStamp(0.22578427337942908);
    msg.setSource(6522U);
    msg.setSourceEntity(188U);
    msg.setDestination(38574U);
    msg.setDestinationEntity(58U);
    msg.value.assign("FTHSNZHBVLIHSHVOITROAVMODBNSCPWXJMYUBNAQ");

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
    msg.setTimeStamp(0.8870874882334824);
    msg.setSource(24845U);
    msg.setSourceEntity(11U);
    msg.setDestination(53560U);
    msg.setDestinationEntity(121U);
    msg.value.assign("FQSFFZLTZYMPSQBLVMLKGRXFHBQPGUUYEKINAREYTQAEDLEWCMOKEDMURGMLBBVNVDSXCUKBHRSLXTXRDHPBIKTYZNMRZIEQQEAKICRPNSANOIBEASTONZZWQOFRPCEHUYCHBTJJOTKVGBHVXWXPSZCFMWJLYVWTWWJCYACXXGKDWJOPGQZDHNLNVZUTMCNYDJSGDJOGMAOUOHFSUAPJOGKIHJQUMPFXXWQLWRIYDIDKYVHFJUCNZTGEILRVF");

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
    msg.setTimeStamp(0.31570273973985086);
    msg.setSource(63981U);
    msg.setSourceEntity(61U);
    msg.setDestination(6824U);
    msg.setDestinationEntity(243U);
    msg.value.assign("JQASSBYWNWSPZOVSAXJWUHMEDJDDRKIIBKWNVXTWFIUEDNAEGOLJCQTYQKOIZRFRNEMLO");

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
    msg.setTimeStamp(0.8100409821109472);
    msg.setSource(2613U);
    msg.setSourceEntity(33U);
    msg.setDestination(40909U);
    msg.setDestinationEntity(213U);
    const char tmp_msg_0[] = {-7, -7, -111, -87, -108, -9, 60, -71, -111, -56, -100, -124, 63, -98, 106, 82, 20, -12, 65, -73, 39, -85, -123, -108, 95, -93, 36, 54, -72, 102, -109, 106, 0, 116, -98, 105, -26, -10, -92, 56, 82, 90, -116, 111, 83, -67, 19, -91, -116, 78, 119, 86, -70, -46, 85, -125, 1, 31, 28, 19, 87, 112, 117, 92, -106, -101, 48, -3, -3, -12, 46, -2, -101, 73, -122, 41, 24, 47, -73, -50, 84, -50, 43, 112, 85, 90, -76, -72, -59, 48, -106, -80, 10, -8, -24, 8, -119, 93, -42, 37, -25, -73, 69, -9, 126, 22, -13, 84, -91, 46, -57, -26, -90, -101, 62, 77, -13, -4, 42, -107, 64, -115, 98, 43, -81, 51, 25, 6, 80, 42, -119, -21, -87, 112, 18, -7, -87, -62, -91, 70, -67, -69, 39, 20, 96, -114, -44, -103, 41, -67, -123, -108, -87, -13, 73, -128, 43, -71, -114, 80, -94, 39, 0, -33, -14, -87, 111, 112, -53, 110, 30, -67, 44, -13, 74, -57, 106, -23, -40, 68, -106, 90, 78, -73, 34, -110, -2, 109};
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
    msg.setTimeStamp(0.2547462072012976);
    msg.setSource(63716U);
    msg.setSourceEntity(62U);
    msg.setDestination(25309U);
    msg.setDestinationEntity(78U);
    const char tmp_msg_0[] = {3, -38, -121, 27, 78, -78, 80, -63, 101, -98, 114, -34, 43, -90, 36, -9, -58, -83, 104, -128, -126, -63, 24, 4, 108, -82, -45, -120, -68, 89, -69, 97, -34, 96, 67, -79, 90, -77, 43, 62, -13, 50, 84, -119, -16, -106, 98, 62, 5, 77, -69, -71, -69, 54, -111, 91, -108, -71, -94, 64, -12, -72, 7, -6, -20, -16, 28, -108, 107, 114, 28, -59, -35, -113, 100, -83, -70, 68, -76, -24, 90, 5, 6, 40, 113, 110, 115, -41, 6, -15, -120, 68, -28, 18, 97, 28, 82, 12, -70, 83, -11, -76, 27, -35, -108, 117, 71, 15, 26, 114, -59, -10, -26, -78, -127, -23, -107, -63, -126, -97, 15, -2, 121, -99, 115, 76, -69, 47, -116, 125, -48, 12, -126, 11, -58, -64, 119, -24, -65, -8, 48, 60, -46, 18, -43, -27, 76, -33, -97, -68, 58, 85, -27, 31, -40, -123, 122, -37, 104, 98, 60, -109, -104, -58, -79, 49, -125, -100, -124, -120, -5, 22, 61, 55, 48, 56, 48, 42, -19, 39, 80, 86, 33, -54, -2, -66, -104, 2, -67, -1, -54, -93, 76, 14};
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
    msg.setTimeStamp(0.4874188301609793);
    msg.setSource(40607U);
    msg.setSourceEntity(150U);
    msg.setDestination(6652U);
    msg.setDestinationEntity(57U);
    const char tmp_msg_0[] = {103, 67, 58, -89, -86, -42, -110, -67, -89, -30, 68, -47, -20, 66, 44, -17, 117, 28, -80, 100, -87, -117, 109, 103, -116, -63, 25, 94, 102, -119, -87, 15, 47, 21, 54, 46, 70, 77, 30, 124, 84, -55, -25, 48, 21, -5, 60, -79, 121, -103, -64, 82, 106, 116, 121, -5, -123, 40, -126, -67, -48, -33, 33, -52, 17, -58, -110, -54, -122, -21, 48, 76, -91, -84, -108, 70, 37, -29, -99, -64, -117, 59, 27, -89, -8, 32, 94, 101, -72, 1, -85, 82, 7, -38, -82, -127, -109, -32, -127, 90, 121, -33, -77, 96, -42, 50, 56, -15, 73, 54, 93, -126, -45, 50, -60, -111, 112, -106, -70, 13, -86, -65, 79, -72, 9, -80, -23, 51, 18, 37, 65, 73, -60, 42, -86, 96, 123, -117, 87, 30, -118, -72, -55, 23, -21, 61, 3, 112, -77, 36, 4, 54, 124, -1, 96, 114, 80, -59, 4, 72, -38, 73, 73, 87, -16, 3, -5, -123, 63, 90, 9, 105, 15, 126, -11, -58, 96, -58, 57, -98, -88, 62, -127, 2, -30, 49, 14, 91, 87, 50, 46, -34, 82, -21, 102, -86, 70, -71, -20, -85, -84, -71, 22, -1, -18, 96, -122, 75, -11, 67, 95, 86, -90, 74, 65, -64, -11, 79, -13, 125, -19, -113, 32, 74, -55, -18, 121, 87, 3, -97, 33, 106, -107, 111, 70, -100, 49, 88, -35, -23};
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
    msg.setTimeStamp(0.0401472762824755);
    msg.setSource(37073U);
    msg.setSourceEntity(95U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(18U);
    msg.value = 0.06536269208793355;

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
    msg.setTimeStamp(0.6216916851980367);
    msg.setSource(52249U);
    msg.setSourceEntity(244U);
    msg.setDestination(50978U);
    msg.setDestinationEntity(150U);
    msg.value = 0.4067022222225041;

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
    msg.setTimeStamp(0.3209477473599589);
    msg.setSource(27100U);
    msg.setSourceEntity(87U);
    msg.setDestination(26446U);
    msg.setDestinationEntity(58U);
    msg.value = 0.7042378038695615;

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
    msg.setTimeStamp(0.6741916212964113);
    msg.setSource(60986U);
    msg.setSourceEntity(174U);
    msg.setDestination(62457U);
    msg.setDestinationEntity(146U);
    msg.type = 113U;
    msg.frequency = 1462488926U;
    msg.min_range = 44164U;
    msg.max_range = 28581U;
    msg.bits_per_point = 121U;
    msg.scale_factor = 0.43232080157695196;
    const char tmp_msg_0[] = {-65, 97, 112, -86, -35, -28, -86, -108, 61, -126, -47, -126, -93, 108, -58, -128, 10, -37, -51, 2, -99, -124, -57, 74, -74, -82, -94, -48, -44, 28, 108, -96, -67, 35, 33, 16, 97, -112, 78, 107, 89, 72, -14, 126, 14, 4, 84, -11, -67, -90, -5, 13, 52, 46, -99, -61, -128, 24, 12, -42, 59, -60, 31, -117, -62, 1, 123, -102, -46, 31, -87, -80, -61, -25, -91, 1, 32, 88, -26, 8, -127, -6, 29, 18, 12, 113, -48, 104, 8, 20, 84, -84, -113, 71, 44, -45, -97, -24, -126, 29, -60, 60, 68, 25, 45, -69, -122, 78, 4, 60, 53, -65, -65, -54, 57, 100, -94, 73, -6, -76, -98, 65, -71, -15, 71, 59, -30, -20, 49, -49, -124, -29, -110, 125, -103, -49, -119, 125, -87, -120, -41, -19, 126, -126, 119, 97, -57, -66, -39, 122, -88, 6, 86, -71, -58, 61, -125, 21, 99, -32, 5, -13, -55, 78, 37, -36, 81, -38, 102, 104, 101, -120, -96, -43, -119, -111, -117, -91, 14, 57, -76, 40, 33, -48, 60, 62, 90, -127, -121, 103, 25, 108, 31, -21, 84, 110, 70, -67, 31, -43, -89, -65, 58, 120, 87, 36, 10, 123, 25, -101, -62, -32, 48, -71, 83, 126, 77, 43, -25, 79, 97, -85, 45, 6, -123, -51, 56, 98, -79, -64, 20};
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
    msg.setTimeStamp(0.08133881546960497);
    msg.setSource(49268U);
    msg.setSourceEntity(181U);
    msg.setDestination(41196U);
    msg.setDestinationEntity(57U);
    msg.type = 34U;
    msg.frequency = 269637928U;
    msg.min_range = 14892U;
    msg.max_range = 15093U;
    msg.bits_per_point = 94U;
    msg.scale_factor = 0.27875297534690013;
    const char tmp_msg_0[] = {-7, -24, -12, 24, 71, 85, -123, 116, -4, -14, -68, -13, 70, -124, -29, -64, 69, -33, -97, 121, 75, 118, -22, -21, 49, 97, 11, 81, -114, 126, -23, 67, -9, 88, -65, 24, 61, -76, 72, -67, 36, 102, -81, -31, -125, 99, -103, 60, 45, 109, 96, 96, -24, -53, -94, -20, 26, -77, 92, 122};
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
    msg.setTimeStamp(0.9820887848860396);
    msg.setSource(44562U);
    msg.setSourceEntity(234U);
    msg.setDestination(57478U);
    msg.setDestinationEntity(81U);
    msg.type = 104U;
    msg.frequency = 2377677107U;
    msg.min_range = 47278U;
    msg.max_range = 53231U;
    msg.bits_per_point = 154U;
    msg.scale_factor = 0.10526878418570607;
    const char tmp_msg_0[] = {88, -48, 116, 90, -83, -40, 20, -85, 34, -53, 30, 68, -11, 42, -6, 80, 27, 124, -61, 78, -43, 20, 122, -30, 38, -83, -108, 46, -26, -105, -69, -69, -80, 2, -109, 121, 88, -9, -32, -40, 29, -122, 31, -27, -67, 8, -95, 7, -69, 113, -68, -66, -77, -105, 121, 77, -111, 86, -70, -16, 24, 1, 46, 58, 68, -107, -122, -114, -128, 124, -90, -32, -112, -73, 21, -66, -88, 47, 40, -83, -13, -42, -76, 85, -95, 26, 10, -80, 115, -120, 24, 60, -45, 31, 24, -16, 15, -107, 6, -39, 1, 24, 63, -80, 46, -38, 27, 96, -10, -45, -121, -35, -3, -63, -79, -30, 69, 94, -1, -56, -31, -119, -41, 91, 10, -57, -76, 122, 16, -124, -95, 45, -121, -128, -110, 45, 123, -50, -52, -118, -65, -105, -89, 123, -14, -79, 31, -5, -58, 122, 56, -90, 21, 19, 81, -93, 104, -7, -112, -29, -48, -10, -92, 82, 0, -57, 111, -6, 119, 6, -124, 5, 45, 85, -106, -39, 52, 2, 98, -86, 118, 41, -87, 108, 9, 60, 14, 86, 105, 91, 93, 28};
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
    msg.setTimeStamp(0.8072002938865053);
    msg.setSource(15090U);
    msg.setSourceEntity(158U);
    msg.setDestination(19418U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.38017198913994077);
    msg.setSource(61620U);
    msg.setSourceEntity(232U);
    msg.setDestination(53012U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.19096749034400717);
    msg.setSource(13553U);
    msg.setSourceEntity(42U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.3008340860217178);
    msg.setSource(42708U);
    msg.setSourceEntity(53U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(76U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.09818159255091885);
    msg.setSource(40276U);
    msg.setSourceEntity(46U);
    msg.setDestination(60122U);
    msg.setDestinationEntity(86U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.85516849703098);
    msg.setSource(17528U);
    msg.setSourceEntity(53U);
    msg.setDestination(16601U);
    msg.setDestinationEntity(237U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.29256935656329985);
    msg.setSource(32666U);
    msg.setSourceEntity(18U);
    msg.setDestination(63780U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5269141668072276;
    msg.confidence = 0.12412543624904404;
    msg.opmodes.assign("OQNJAQHKZHAMJFJESJAGUOLMVPRNCZUTRBNYIWENVC");

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
    msg.setTimeStamp(0.46853203272346944);
    msg.setSource(52460U);
    msg.setSourceEntity(47U);
    msg.setDestination(41329U);
    msg.setDestinationEntity(251U);
    msg.value = 0.1974963771848387;
    msg.confidence = 0.37662521573153407;
    msg.opmodes.assign("PLCBQAGKFATAMHSUGPLKYIIADKHKMGVYDNSBVOPZIHFSNKCRTPAV");

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
    msg.setTimeStamp(0.9167928740326793);
    msg.setSource(51597U);
    msg.setSourceEntity(118U);
    msg.setDestination(18793U);
    msg.setDestinationEntity(64U);
    msg.value = 0.5829091720869362;
    msg.confidence = 0.02159612850952719;
    msg.opmodes.assign("KZCHZQAYHBMOVNPQNKOZJHVQGAEEQXTWKXFYBMACPDDXWOIUQCJWHJDOBVSBENZBRALNLCQDUMMTIVNKVHLCBRVYSRRAEGDILQTVZFIUSXRTSSPLCKUGCNRJJZQYYGCYJNTWS");

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
    msg.setTimeStamp(0.046444163390444215);
    msg.setSource(39792U);
    msg.setSourceEntity(224U);
    msg.setDestination(23178U);
    msg.setDestinationEntity(174U);
    msg.itow = 2096580387U;
    msg.lat = 0.6615074692715983;
    msg.lon = 0.5956649853236011;
    msg.height_ell = 0.7135807421931161;
    msg.height_sea = 0.8473159670370989;
    msg.hacc = 0.9350763334576753;
    msg.vacc = 0.30168621581038824;
    msg.vel_n = 0.5604827948691037;
    msg.vel_e = 0.9906092959097631;
    msg.vel_d = 0.8748637452161782;
    msg.speed = 0.09914289273090049;
    msg.gspeed = 0.4808198320942588;
    msg.heading = 0.6141374197329873;
    msg.sacc = 0.549476305876989;
    msg.cacc = 0.547311741624229;

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
    msg.setTimeStamp(0.1659769545821228);
    msg.setSource(18575U);
    msg.setSourceEntity(150U);
    msg.setDestination(295U);
    msg.setDestinationEntity(187U);
    msg.itow = 3970558834U;
    msg.lat = 0.11287494137111775;
    msg.lon = 0.5935516335762984;
    msg.height_ell = 0.9496619705614878;
    msg.height_sea = 0.5881155074048097;
    msg.hacc = 0.6686829534721366;
    msg.vacc = 0.7581000899801398;
    msg.vel_n = 0.10875203700967706;
    msg.vel_e = 0.5462027877498808;
    msg.vel_d = 0.25540732969790436;
    msg.speed = 0.8825856254102349;
    msg.gspeed = 0.3159759355653514;
    msg.heading = 0.48819467322329235;
    msg.sacc = 0.0893408711170256;
    msg.cacc = 0.7379927106194325;

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
    msg.setTimeStamp(0.8484276620682574);
    msg.setSource(8183U);
    msg.setSourceEntity(6U);
    msg.setDestination(11545U);
    msg.setDestinationEntity(114U);
    msg.itow = 1390583361U;
    msg.lat = 0.13799952413158556;
    msg.lon = 0.19393276224860834;
    msg.height_ell = 0.15627038231771162;
    msg.height_sea = 0.37660693900120956;
    msg.hacc = 0.13460503295614035;
    msg.vacc = 0.8569335116732177;
    msg.vel_n = 0.08989210056738794;
    msg.vel_e = 0.6051526290038101;
    msg.vel_d = 0.21073230470457516;
    msg.speed = 0.08558542252252199;
    msg.gspeed = 0.7581867371603973;
    msg.heading = 0.47338074413508335;
    msg.sacc = 0.6517550840335524;
    msg.cacc = 0.3666904607063657;

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
    msg.setTimeStamp(0.647498730337236);
    msg.setSource(25242U);
    msg.setSourceEntity(63U);
    msg.setDestination(41708U);
    msg.setDestinationEntity(75U);
    msg.id = 240U;
    msg.value = 0.3668592822366854;

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
    msg.setTimeStamp(0.016318815903329287);
    msg.setSource(13669U);
    msg.setSourceEntity(15U);
    msg.setDestination(60439U);
    msg.setDestinationEntity(123U);
    msg.id = 23U;
    msg.value = 0.9119506061655699;

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
    msg.setTimeStamp(0.13742226739749952);
    msg.setSource(37663U);
    msg.setSourceEntity(212U);
    msg.setDestination(20728U);
    msg.setDestinationEntity(140U);
    msg.id = 142U;
    msg.value = 0.6468835544371476;

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
    msg.setTimeStamp(0.07089938599338774);
    msg.setSource(34729U);
    msg.setSourceEntity(162U);
    msg.setDestination(17869U);
    msg.setDestinationEntity(31U);
    msg.x = 0.8923174811889469;
    msg.y = 0.1535139712087048;
    msg.z = 0.6083438732049071;
    msg.phi = 0.2044222011890452;
    msg.theta = 0.06454966506153792;
    msg.psi = 0.6595753274629703;

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
    msg.setTimeStamp(0.3016831703015941);
    msg.setSource(55877U);
    msg.setSourceEntity(115U);
    msg.setDestination(12283U);
    msg.setDestinationEntity(14U);
    msg.x = 0.5032951368917528;
    msg.y = 0.6982109524057137;
    msg.z = 0.16742689860754356;
    msg.phi = 0.31381679956327735;
    msg.theta = 0.32224744182368703;
    msg.psi = 0.0858625766864356;

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
    msg.setTimeStamp(0.6862229512070611);
    msg.setSource(49073U);
    msg.setSourceEntity(68U);
    msg.setDestination(40815U);
    msg.setDestinationEntity(153U);
    msg.x = 0.9709661373458082;
    msg.y = 0.7817548181798194;
    msg.z = 0.8991936013774082;
    msg.phi = 0.9380561454797411;
    msg.theta = 0.6974611727801919;
    msg.psi = 0.9191498422471804;

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
    msg.setTimeStamp(0.9682484012284419);
    msg.setSource(24468U);
    msg.setSourceEntity(76U);
    msg.setDestination(54173U);
    msg.setDestinationEntity(208U);
    msg.beam_width = 0.13442914848910115;
    msg.beam_height = 0.805933057195871;

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
    msg.setTimeStamp(0.7581187860968889);
    msg.setSource(39606U);
    msg.setSourceEntity(187U);
    msg.setDestination(57091U);
    msg.setDestinationEntity(236U);
    msg.beam_width = 0.16515961875697827;
    msg.beam_height = 0.037242221499587225;

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
    msg.setTimeStamp(0.5921627695974672);
    msg.setSource(47539U);
    msg.setSourceEntity(244U);
    msg.setDestination(59889U);
    msg.setDestinationEntity(91U);
    msg.beam_width = 0.10506204501144567;
    msg.beam_height = 0.9023404034442122;

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
    msg.setTimeStamp(0.7464181938693962);
    msg.setSource(8063U);
    msg.setSourceEntity(125U);
    msg.setDestination(6230U);
    msg.setDestinationEntity(161U);
    msg.sane = 48U;

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
    msg.setTimeStamp(0.6008012747886022);
    msg.setSource(33620U);
    msg.setSourceEntity(113U);
    msg.setDestination(48124U);
    msg.setDestinationEntity(0U);
    msg.sane = 154U;

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
    msg.setTimeStamp(0.2795499528974865);
    msg.setSource(7871U);
    msg.setSourceEntity(198U);
    msg.setDestination(43963U);
    msg.setDestinationEntity(182U);
    msg.sane = 84U;

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
    msg.setTimeStamp(0.011957726559516435);
    msg.setSource(30283U);
    msg.setSourceEntity(220U);
    msg.setDestination(41067U);
    msg.setDestinationEntity(150U);
    msg.value = 0.260564823289534;

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
    msg.setTimeStamp(0.04087346353847665);
    msg.setSource(25631U);
    msg.setSourceEntity(219U);
    msg.setDestination(49629U);
    msg.setDestinationEntity(194U);
    msg.value = 0.16205430219685335;

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
    msg.setTimeStamp(0.9129045549540498);
    msg.setSource(60017U);
    msg.setSourceEntity(236U);
    msg.setDestination(13870U);
    msg.setDestinationEntity(250U);
    msg.value = 0.782610248115812;

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
    msg.setTimeStamp(0.9805807896691873);
    msg.setSource(27252U);
    msg.setSourceEntity(157U);
    msg.setDestination(914U);
    msg.setDestinationEntity(94U);
    msg.value = 0.016629720535280668;

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
    msg.setTimeStamp(0.45780412590297814);
    msg.setSource(5705U);
    msg.setSourceEntity(2U);
    msg.setDestination(60325U);
    msg.setDestinationEntity(246U);
    msg.value = 0.15249284917042405;

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
    msg.setTimeStamp(0.05035245174864189);
    msg.setSource(24274U);
    msg.setSourceEntity(242U);
    msg.setDestination(63977U);
    msg.setDestinationEntity(56U);
    msg.value = 0.05103530294009473;

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
    msg.setTimeStamp(0.5528823125259692);
    msg.setSource(31427U);
    msg.setSourceEntity(181U);
    msg.setDestination(18145U);
    msg.setDestinationEntity(139U);
    msg.value = 0.6461205267323953;

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
    msg.setTimeStamp(0.29629972331386645);
    msg.setSource(15049U);
    msg.setSourceEntity(28U);
    msg.setDestination(3708U);
    msg.setDestinationEntity(246U);
    msg.value = 0.23229396258860302;

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
    msg.setTimeStamp(0.6330765888636698);
    msg.setSource(11092U);
    msg.setSourceEntity(18U);
    msg.setDestination(7821U);
    msg.setDestinationEntity(242U);
    msg.value = 0.27702332979470357;

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
    msg.setTimeStamp(0.4984366943189351);
    msg.setSource(16150U);
    msg.setSourceEntity(159U);
    msg.setDestination(17083U);
    msg.setDestinationEntity(39U);
    msg.value = 0.23616692033094522;

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
    msg.setTimeStamp(0.3195066608505809);
    msg.setSource(17658U);
    msg.setSourceEntity(227U);
    msg.setDestination(55369U);
    msg.setDestinationEntity(236U);
    msg.value = 0.5246334828777113;

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
    msg.setTimeStamp(0.7389668415776486);
    msg.setSource(6836U);
    msg.setSourceEntity(211U);
    msg.setDestination(63707U);
    msg.setDestinationEntity(84U);
    msg.value = 0.8112482863508942;

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
    msg.setTimeStamp(0.010894839717410676);
    msg.setSource(49489U);
    msg.setSourceEntity(181U);
    msg.setDestination(56913U);
    msg.setDestinationEntity(48U);
    msg.value = 0.08741445536165693;

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
    msg.setTimeStamp(0.11019633934419959);
    msg.setSource(47922U);
    msg.setSourceEntity(58U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(93U);
    msg.value = 0.6483890273465219;

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
    msg.setTimeStamp(0.34852993790670717);
    msg.setSource(52350U);
    msg.setSourceEntity(84U);
    msg.setDestination(23302U);
    msg.setDestinationEntity(182U);
    msg.value = 0.48757382910119806;

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
    msg.setTimeStamp(0.4930168471372912);
    msg.setSource(41113U);
    msg.setSourceEntity(136U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(86U);
    msg.value = 0.7812826442538574;

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
    msg.setTimeStamp(0.7496204946407551);
    msg.setSource(21465U);
    msg.setSourceEntity(57U);
    msg.setDestination(59054U);
    msg.setDestinationEntity(236U);
    msg.value = 0.08691769277486805;

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
    msg.setTimeStamp(0.7587389396502521);
    msg.setSource(30490U);
    msg.setSourceEntity(170U);
    msg.setDestination(47613U);
    msg.setDestinationEntity(44U);
    msg.value = 0.7155480918343851;

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
    msg.setTimeStamp(0.624361490995393);
    msg.setSource(23161U);
    msg.setSourceEntity(142U);
    msg.setDestination(24910U);
    msg.setDestinationEntity(141U);
    msg.value = 0.04730195637947965;

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
    msg.setTimeStamp(0.6149432406663132);
    msg.setSource(58825U);
    msg.setSourceEntity(161U);
    msg.setDestination(5226U);
    msg.setDestinationEntity(167U);
    msg.value = 0.8178586692124181;

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
    msg.setTimeStamp(0.580239353371033);
    msg.setSource(42937U);
    msg.setSourceEntity(69U);
    msg.setDestination(15166U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7571078102560714;

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
    msg.setTimeStamp(0.41835579181592997);
    msg.setSource(28748U);
    msg.setSourceEntity(41U);
    msg.setDestination(58920U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8861525219670026;

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
    msg.setTimeStamp(0.08445442660597824);
    msg.setSource(40737U);
    msg.setSourceEntity(142U);
    msg.setDestination(28506U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6130249069467814;

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
    msg.setTimeStamp(0.7987104743837995);
    msg.setSource(28392U);
    msg.setSourceEntity(125U);
    msg.setDestination(14027U);
    msg.setDestinationEntity(244U);
    msg.value = 0.8702566511702597;

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
    msg.setTimeStamp(0.5297115557205585);
    msg.setSource(8240U);
    msg.setSourceEntity(171U);
    msg.setDestination(60204U);
    msg.setDestinationEntity(106U);
    msg.validity = 62796U;
    msg.type = 241U;
    msg.tow = 3381719681U;
    msg.base_lat = 0.27493778181500217;
    msg.base_lon = 0.8716537995303753;
    msg.base_height = 0.8185054189224077;
    msg.n = 0.5286456268019253;
    msg.e = 0.21075859520964202;
    msg.d = 0.15441584398972052;
    msg.v_n = 0.09376626028287904;
    msg.v_e = 0.061031618832030565;
    msg.v_d = 0.378793540479355;
    msg.satellites = 31U;
    msg.iar_hyp = 34517U;
    msg.iar_ratio = 0.21036482500747467;

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
    msg.setTimeStamp(0.3575769581494088);
    msg.setSource(62915U);
    msg.setSourceEntity(227U);
    msg.setDestination(21427U);
    msg.setDestinationEntity(7U);
    msg.validity = 41480U;
    msg.type = 165U;
    msg.tow = 531085392U;
    msg.base_lat = 0.016656620136815903;
    msg.base_lon = 0.8245817386994616;
    msg.base_height = 0.2009647717056514;
    msg.n = 0.29667709815851206;
    msg.e = 0.2834316190263455;
    msg.d = 0.9854244868500769;
    msg.v_n = 0.7683198695980423;
    msg.v_e = 0.6237677670258992;
    msg.v_d = 0.25174911250862464;
    msg.satellites = 19U;
    msg.iar_hyp = 52540U;
    msg.iar_ratio = 0.2174020355921814;

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
    msg.setTimeStamp(0.819715233019262);
    msg.setSource(40484U);
    msg.setSourceEntity(199U);
    msg.setDestination(54481U);
    msg.setDestinationEntity(35U);
    msg.validity = 53910U;
    msg.type = 121U;
    msg.tow = 2946317621U;
    msg.base_lat = 0.9355300012261176;
    msg.base_lon = 0.5401178555477599;
    msg.base_height = 0.2865811253527272;
    msg.n = 0.3293690055079549;
    msg.e = 0.1701350462920811;
    msg.d = 0.6508742986976278;
    msg.v_n = 0.04978401453722636;
    msg.v_e = 0.35395544153195413;
    msg.v_d = 0.9209285525715002;
    msg.satellites = 228U;
    msg.iar_hyp = 15755U;
    msg.iar_ratio = 0.5744797040472983;

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
    msg.setTimeStamp(0.3133087701061237);
    msg.setSource(48838U);
    msg.setSourceEntity(1U);
    msg.setDestination(21294U);
    msg.setDestinationEntity(55U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.03450215442828475;
    tmp_msg_0.lon = 0.7438652494039691;
    tmp_msg_0.height = 0.9478055471056456;
    tmp_msg_0.x = 0.9566279930905958;
    tmp_msg_0.y = 0.918102683158071;
    tmp_msg_0.z = 0.6674286464363424;
    tmp_msg_0.phi = 0.028038410770259037;
    tmp_msg_0.theta = 0.2803656689994739;
    tmp_msg_0.psi = 0.9865421203835265;
    tmp_msg_0.u = 0.18612605931253023;
    tmp_msg_0.v = 0.6383207474187332;
    tmp_msg_0.w = 0.6094768984173697;
    tmp_msg_0.vx = 0.26598146817810087;
    tmp_msg_0.vy = 0.5344251967321899;
    tmp_msg_0.vz = 0.6384798097213175;
    tmp_msg_0.p = 0.8883732199987028;
    tmp_msg_0.q = 0.3904894551388437;
    tmp_msg_0.r = 0.5890233340991038;
    tmp_msg_0.depth = 0.03802346292257319;
    tmp_msg_0.alt = 0.010312011335768978;
    msg.state.set(tmp_msg_0);
    msg.type = 160U;

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
    msg.setTimeStamp(0.06718199104105027);
    msg.setSource(1275U);
    msg.setSourceEntity(223U);
    msg.setDestination(12606U);
    msg.setDestinationEntity(220U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.14528507606454932;
    tmp_msg_0.lon = 0.8063364617087495;
    tmp_msg_0.height = 0.0739496783390623;
    tmp_msg_0.x = 0.4847232926164877;
    tmp_msg_0.y = 0.0859934959046873;
    tmp_msg_0.z = 0.8945907651686752;
    tmp_msg_0.phi = 0.9407511616186891;
    tmp_msg_0.theta = 0.7603449993587129;
    tmp_msg_0.psi = 0.7874079298684322;
    tmp_msg_0.u = 0.0881378201441333;
    tmp_msg_0.v = 0.8353941712361813;
    tmp_msg_0.w = 0.517962804957137;
    tmp_msg_0.vx = 0.5320257098307016;
    tmp_msg_0.vy = 0.298267120375748;
    tmp_msg_0.vz = 0.4390593088812649;
    tmp_msg_0.p = 0.47986340837650454;
    tmp_msg_0.q = 0.7834161637331607;
    tmp_msg_0.r = 0.8033411700499025;
    tmp_msg_0.depth = 0.044289853590600226;
    tmp_msg_0.alt = 0.22228016134997097;
    msg.state.set(tmp_msg_0);
    msg.type = 7U;

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
    msg.setTimeStamp(0.11876300625854064);
    msg.setSource(52487U);
    msg.setSourceEntity(14U);
    msg.setDestination(23644U);
    msg.setDestinationEntity(14U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.427240817006305;
    tmp_msg_0.lon = 0.8900746724374539;
    tmp_msg_0.height = 0.2755938395307066;
    tmp_msg_0.x = 0.39292408608049034;
    tmp_msg_0.y = 0.2419177481212036;
    tmp_msg_0.z = 0.7931069280814038;
    tmp_msg_0.phi = 0.11322980061733534;
    tmp_msg_0.theta = 0.4594946860422532;
    tmp_msg_0.psi = 0.4573567077656123;
    tmp_msg_0.u = 0.37878665273901835;
    tmp_msg_0.v = 0.6739525717842594;
    tmp_msg_0.w = 0.3364962435617028;
    tmp_msg_0.vx = 0.6133397359886184;
    tmp_msg_0.vy = 0.8387051093798532;
    tmp_msg_0.vz = 0.17108486575678628;
    tmp_msg_0.p = 0.7675294189595717;
    tmp_msg_0.q = 0.39222325721286055;
    tmp_msg_0.r = 0.007661919356919178;
    tmp_msg_0.depth = 0.1616930488071472;
    tmp_msg_0.alt = 0.9913517089569622;
    msg.state.set(tmp_msg_0);
    msg.type = 215U;

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
    msg.setTimeStamp(0.5543721299878753);
    msg.setSource(61371U);
    msg.setSourceEntity(30U);
    msg.setDestination(20751U);
    msg.setDestinationEntity(235U);
    msg.value = 0.7855420423991812;

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
    msg.setTimeStamp(0.47529641829242264);
    msg.setSource(42257U);
    msg.setSourceEntity(213U);
    msg.setDestination(41805U);
    msg.setDestinationEntity(115U);
    msg.value = 0.882997974534131;

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
    msg.setTimeStamp(0.27734374282506136);
    msg.setSource(41048U);
    msg.setSourceEntity(47U);
    msg.setDestination(23835U);
    msg.setDestinationEntity(185U);
    msg.value = 0.7470297993283339;

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
    msg.setTimeStamp(0.15792480152998345);
    msg.setSource(49452U);
    msg.setSourceEntity(109U);
    msg.setDestination(24771U);
    msg.setDestinationEntity(149U);
    msg.value = 0.5220872285218733;

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
    msg.setTimeStamp(0.6981381340555357);
    msg.setSource(58743U);
    msg.setSourceEntity(112U);
    msg.setDestination(2407U);
    msg.setDestinationEntity(57U);
    msg.value = 0.2004417986863002;

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
    msg.setTimeStamp(0.4786133313989157);
    msg.setSource(48314U);
    msg.setSourceEntity(249U);
    msg.setDestination(41615U);
    msg.setDestinationEntity(104U);
    msg.value = 0.7823767829449401;

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
    msg.setTimeStamp(0.7778320375692722);
    msg.setSource(55386U);
    msg.setSourceEntity(85U);
    msg.setDestination(13577U);
    msg.setDestinationEntity(11U);
    msg.value = 0.6277809325406388;

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
    msg.setTimeStamp(0.2087494302676416);
    msg.setSource(17836U);
    msg.setSourceEntity(168U);
    msg.setDestination(32045U);
    msg.setDestinationEntity(220U);
    msg.value = 0.2287941333574981;

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
    msg.setTimeStamp(0.5926124175233037);
    msg.setSource(26645U);
    msg.setSourceEntity(207U);
    msg.setDestination(48055U);
    msg.setDestinationEntity(239U);
    msg.value = 0.8417989096583663;

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
    msg.setTimeStamp(0.7515512028068773);
    msg.setSource(45003U);
    msg.setSourceEntity(86U);
    msg.setDestination(11959U);
    msg.setDestinationEntity(66U);
    msg.value = 0.1775885067521361;

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
    msg.setTimeStamp(0.05088229043015613);
    msg.setSource(6637U);
    msg.setSourceEntity(79U);
    msg.setDestination(13421U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6376670562786548;

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
    msg.setTimeStamp(0.9915767272352015);
    msg.setSource(5994U);
    msg.setSourceEntity(189U);
    msg.setDestination(43501U);
    msg.setDestinationEntity(148U);
    msg.value = 0.22290700912678618;

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
    msg.setTimeStamp(0.24383143222393522);
    msg.setSource(42347U);
    msg.setSourceEntity(251U);
    msg.setDestination(53847U);
    msg.setDestinationEntity(101U);
    msg.value = 0.5184364001357097;

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
    msg.setTimeStamp(0.6951455546226959);
    msg.setSource(50691U);
    msg.setSourceEntity(226U);
    msg.setDestination(5778U);
    msg.setDestinationEntity(7U);
    msg.value = 0.5760116461453558;

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
    msg.setTimeStamp(0.08323562879056101);
    msg.setSource(6693U);
    msg.setSourceEntity(100U);
    msg.setDestination(35131U);
    msg.setDestinationEntity(198U);
    msg.value = 0.982110984048829;

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
    msg.setTimeStamp(0.22882879099126352);
    msg.setSource(55358U);
    msg.setSourceEntity(190U);
    msg.setDestination(31011U);
    msg.setDestinationEntity(113U);
    msg.id = 86U;
    msg.zoom = 234U;
    msg.action = 112U;

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
    msg.setTimeStamp(0.5032586246489582);
    msg.setSource(30820U);
    msg.setSourceEntity(37U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(46U);
    msg.id = 191U;
    msg.zoom = 24U;
    msg.action = 21U;

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
    msg.setTimeStamp(0.399800614663256);
    msg.setSource(14446U);
    msg.setSourceEntity(232U);
    msg.setDestination(60270U);
    msg.setDestinationEntity(52U);
    msg.id = 108U;
    msg.zoom = 165U;
    msg.action = 225U;

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
    msg.setTimeStamp(0.8127890278120588);
    msg.setSource(22668U);
    msg.setSourceEntity(159U);
    msg.setDestination(25706U);
    msg.setDestinationEntity(149U);
    msg.id = 194U;
    msg.value = 0.26720925553684083;

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
    msg.setTimeStamp(0.6915454065175418);
    msg.setSource(28382U);
    msg.setSourceEntity(14U);
    msg.setDestination(20351U);
    msg.setDestinationEntity(127U);
    msg.id = 240U;
    msg.value = 0.6921474128620164;

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
    msg.setTimeStamp(0.6869960009095332);
    msg.setSource(62994U);
    msg.setSourceEntity(224U);
    msg.setDestination(20210U);
    msg.setDestinationEntity(115U);
    msg.id = 47U;
    msg.value = 0.40035265430812383;

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
    msg.setTimeStamp(0.7724407670289545);
    msg.setSource(64392U);
    msg.setSourceEntity(217U);
    msg.setDestination(63752U);
    msg.setDestinationEntity(136U);
    msg.id = 186U;
    msg.value = 0.9770958446031726;

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
    msg.setTimeStamp(0.18007263990943911);
    msg.setSource(21210U);
    msg.setSourceEntity(249U);
    msg.setDestination(55672U);
    msg.setDestinationEntity(89U);
    msg.id = 228U;
    msg.value = 0.35761969071039945;

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
    msg.setTimeStamp(0.21881576487940957);
    msg.setSource(33602U);
    msg.setSourceEntity(42U);
    msg.setDestination(41273U);
    msg.setDestinationEntity(132U);
    msg.id = 221U;
    msg.value = 0.8808001344050516;

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
    msg.setTimeStamp(0.4617995348948478);
    msg.setSource(27706U);
    msg.setSourceEntity(59U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(172U);
    msg.id = 132U;
    msg.angle = 0.41630728525922556;

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
    msg.setTimeStamp(0.8953799531581305);
    msg.setSource(53061U);
    msg.setSourceEntity(69U);
    msg.setDestination(39935U);
    msg.setDestinationEntity(9U);
    msg.id = 138U;
    msg.angle = 0.9870493357821789;

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
    msg.setTimeStamp(0.34124120382438394);
    msg.setSource(32700U);
    msg.setSourceEntity(152U);
    msg.setDestination(34885U);
    msg.setDestinationEntity(214U);
    msg.id = 113U;
    msg.angle = 0.7165913325694391;

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
    msg.setTimeStamp(0.8146633360849426);
    msg.setSource(55585U);
    msg.setSourceEntity(3U);
    msg.setDestination(57151U);
    msg.setDestinationEntity(74U);
    msg.op = 46U;
    msg.actions.assign("REYYQLNHMKGJRDEXKZKBIGJQKZLCTBUSEHPGSQTUEWEGUIQIOKOTJHEWWR");

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
    msg.setTimeStamp(0.3587560273847843);
    msg.setSource(26954U);
    msg.setSourceEntity(86U);
    msg.setDestination(24273U);
    msg.setDestinationEntity(128U);
    msg.op = 86U;
    msg.actions.assign("OTFTNZIMPBXNAVOHPRIHNA");

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
    msg.setTimeStamp(0.23943664324476133);
    msg.setSource(3389U);
    msg.setSourceEntity(28U);
    msg.setDestination(10903U);
    msg.setDestinationEntity(169U);
    msg.op = 150U;
    msg.actions.assign("ORUIBGRXUCUDQGGFTNSXWYKEJQDCPFJCZAFNOKRYPCNYXBBKMVIOPEDXORAWIKMJPQSVZPPGWCIKRHYKUZKLQNBJVNEUIURLOMYJOZVTFQWOTIFQGOXHTMLSYMSPWUWXASZTVNPYVYLDDJ");

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
    msg.setTimeStamp(0.8416899650755018);
    msg.setSource(41049U);
    msg.setSourceEntity(49U);
    msg.setDestination(35549U);
    msg.setDestinationEntity(150U);
    msg.actions.assign("NHZJGJALAWSOUTNBLFQYOMZTFTJICBXZRDWRMYRMZLWIUYXAOCZLYPTTWASGIISBV");

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
    msg.setTimeStamp(0.8385661835222412);
    msg.setSource(17491U);
    msg.setSourceEntity(0U);
    msg.setDestination(23078U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("LTPGSECDNNTIIKSIZVPVBHFXULAIHVBEASLYAMNARWUOTYHQHGRNKRZNCUMVWTGFBEZGBKVJUJXHDXZXJZLBDRCBWCJUMFQRTAPHIFPQKPKZAJWEGOYNSGXEWMYISTNXSOFLVIXHDPGWRNRBCMOWEHTADWBHSYUUEHMODNCAZQLQYNJYCOEVGFFKPFRTEACMMTPVKOIKPGJOLSYFFKDEBCDOSDLXGMZAWDJSURLQUQTBXLMKQIQVJWC");

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
    msg.setTimeStamp(0.10376024907366499);
    msg.setSource(2694U);
    msg.setSourceEntity(59U);
    msg.setDestination(62051U);
    msg.setDestinationEntity(165U);
    msg.actions.assign("JYDBGTEECNMVFFRSGNIBXHIIPXIZEEZYMHBOQGWDRAQKNQIAMPMJAGYLOEJ");

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
    msg.setTimeStamp(0.22793453456192214);
    msg.setSource(25893U);
    msg.setSourceEntity(55U);
    msg.setDestination(3214U);
    msg.setDestinationEntity(229U);
    msg.button = 12U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.19570590025918955);
    msg.setSource(10707U);
    msg.setSourceEntity(144U);
    msg.setDestination(59132U);
    msg.setDestinationEntity(44U);
    msg.button = 232U;
    msg.value = 158U;

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
    msg.setTimeStamp(0.5252872967573269);
    msg.setSource(43777U);
    msg.setSourceEntity(115U);
    msg.setDestination(55982U);
    msg.setDestinationEntity(237U);
    msg.button = 225U;
    msg.value = 221U;

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
    msg.setTimeStamp(0.332330577433413);
    msg.setSource(24437U);
    msg.setSourceEntity(103U);
    msg.setDestination(60015U);
    msg.setDestinationEntity(206U);
    msg.op = 224U;
    msg.text.assign("DLEXLMLXYQFQYUMUPVTIEELYUKDWCCHKFUFNVENSXFSTPDXBQTSUGSZGHONBWUEXCYPVRVAHOGGKRHMBPOLQCJBJETLZRNBVJWGVFTVW");

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
    msg.setTimeStamp(0.877062906437832);
    msg.setSource(42671U);
    msg.setSourceEntity(104U);
    msg.setDestination(57425U);
    msg.setDestinationEntity(250U);
    msg.op = 5U;
    msg.text.assign("OXATREXZWOIVPIWZTOKEICSNVHTCYKYFUABWALLTUDPDSOIJPFFLERLCHOSGAEIENANORGXFZMENKDXSTJQZRULSDLMQHAWHZMS");

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
    msg.setTimeStamp(0.6153707073375244);
    msg.setSource(53006U);
    msg.setSourceEntity(138U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(24U);
    msg.op = 122U;
    msg.text.assign("YHFAAJYICGSMKDBIDANCTTCMZOKYIXACASBAEGGKMWVYVIEROJSILHLUVNUZCBNPOHJBZFTEDFNMULDUFGUBXRRVANZQMEZWORKD");

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
    msg.setTimeStamp(0.7364872655411399);
    msg.setSource(13025U);
    msg.setSourceEntity(249U);
    msg.setDestination(24976U);
    msg.setDestinationEntity(234U);
    msg.op = 239U;
    msg.time_remain = 0.6122342611975611;
    msg.sched_time = 0.33585926106902986;

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
    msg.setTimeStamp(0.2186256306373202);
    msg.setSource(42770U);
    msg.setSourceEntity(28U);
    msg.setDestination(59244U);
    msg.setDestinationEntity(163U);
    msg.op = 15U;
    msg.time_remain = 0.27813646678979176;
    msg.sched_time = 0.6149892579558428;

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
    msg.setTimeStamp(0.8739365282323529);
    msg.setSource(59271U);
    msg.setSourceEntity(140U);
    msg.setDestination(28703U);
    msg.setDestinationEntity(207U);
    msg.op = 37U;
    msg.time_remain = 0.38562313121834135;
    msg.sched_time = 0.8051038382435322;

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
    msg.setTimeStamp(0.27532650407001236);
    msg.setSource(35036U);
    msg.setSourceEntity(167U);
    msg.setDestination(53554U);
    msg.setDestinationEntity(124U);
    msg.name.assign("FBVODKHCODSUVNARHFAMIRQXJXZJAUVNODEEFMLJKFNZSAEUYJIUQVTBWKVGKMQCOLCXSPP");
    msg.op = 124U;
    msg.sched_time = 0.6971254360553724;

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
    msg.setTimeStamp(0.08280226746135189);
    msg.setSource(43601U);
    msg.setSourceEntity(135U);
    msg.setDestination(4681U);
    msg.setDestinationEntity(151U);
    msg.name.assign("UFYUGLHPWCIBKRMUDRLBSOEHMBN");
    msg.op = 225U;
    msg.sched_time = 0.25407416878472633;

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
    msg.setTimeStamp(0.477871965518349);
    msg.setSource(48820U);
    msg.setSourceEntity(17U);
    msg.setDestination(48233U);
    msg.setDestinationEntity(121U);
    msg.name.assign("VGNMSROXOTSVXEQTMZDQLNYNDHJPYJLVFRICAOIWZFJLCKSMLCQUPPOXZIAGFGOFHIBEZRUTUQNBNZGRFBYKBJZUOQSMYBIESIASYFDEQARURCBATTHAAIBDWPLFMPWXMLVHMHTVABEHDWENOPYURWHWUIIGZKTWQRKHYGVPLXUKCFWDJUZXJTVKAR");
    msg.op = 129U;
    msg.sched_time = 0.14279930286765397;

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
    msg.setTimeStamp(0.20754920944137245);
    msg.setSource(53217U);
    msg.setSourceEntity(59U);
    msg.setDestination(55792U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.6849069507332914);
    msg.setSource(1011U);
    msg.setSourceEntity(160U);
    msg.setDestination(58218U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.1081890269423087);
    msg.setSource(60654U);
    msg.setSourceEntity(13U);
    msg.setDestination(22582U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.7641000426151213);
    msg.setSource(61247U);
    msg.setSourceEntity(218U);
    msg.setDestination(30911U);
    msg.setDestinationEntity(182U);
    msg.name.assign("MNSYXFXBOEDMZCVZVPDNDQWAXTPNQSVZQDESEXGOJJQVJGELKCBILGZRKUACYPIKYPLFRTSDPZLBAWMXPSKTEOHOBHHLRUPGWHROOCVLWITAJBCWYUYELQWIBIUGUDRVFYQHSEINPZJDTUIDEIJSHBWYZRPPKARZOTSLRZMUOQSTQCLNXOZ");
    msg.state = 198U;

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
    msg.setTimeStamp(0.15218363005744417);
    msg.setSource(1967U);
    msg.setSourceEntity(163U);
    msg.setDestination(21951U);
    msg.setDestinationEntity(50U);
    msg.name.assign("QFDXRXJFVTUIGHNPVGSJKBKSOMVFNTQCUHBCSQTCJPCZVGISVIFARSFAMKELSNTYUKYUZGLGDYRHSDCOIIALFDEXUVRAIDTEWMPPKDGYKPZVHCBTOXJHLKKNXRRXWEHXQYFQVUEYLMCWA");
    msg.state = 170U;

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
    msg.setTimeStamp(0.9675034203616912);
    msg.setSource(58825U);
    msg.setSourceEntity(228U);
    msg.setDestination(40255U);
    msg.setDestinationEntity(111U);
    msg.name.assign("KBOXQMBJSZMTFKYLHRLNSJRDWWBKTRROYJHMXPKFFEMISNZJBGPEHJLLOOVUNM");
    msg.state = 165U;

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
    msg.setTimeStamp(0.3726687986709837);
    msg.setSource(49958U);
    msg.setSourceEntity(109U);
    msg.setDestination(39045U);
    msg.setDestinationEntity(192U);
    msg.name.assign("LHCMVOCJLMQNREITJKBHESVMHINERNDMPGUKJDWPCXALYJC");
    msg.value = 76U;

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
    msg.setTimeStamp(0.9139353463995713);
    msg.setSource(44761U);
    msg.setSourceEntity(89U);
    msg.setDestination(35751U);
    msg.setDestinationEntity(111U);
    msg.name.assign("NPKGGYECNZUMUODQVBTRLTFURQUOHKEMPBKICLJBJZOKFHEGBUOAHKPVUINCDBVSJQFMFYTZUPCNGREDAIWNFYIDGYRZENXWZOMJJPLRSHLCSJDTWMDSXDRPTRXRYXQTLYMSSUFAZBWQLMMPGZATGDEBWGOLIVIKYEQYHKHVVQJCXACGHZQXSNRJVCXAWXPWQFBLZRPW");
    msg.value = 156U;

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
    msg.setTimeStamp(0.8284497193185948);
    msg.setSource(14790U);
    msg.setSourceEntity(30U);
    msg.setDestination(3020U);
    msg.setDestinationEntity(111U);
    msg.name.assign("IRZKXWQHHUVXLLXPSHNKHALCASWSNIPDFVTKCZBLUYFNCYOOVYUCCYVGAIACURNSLGAYWZEMGMNJOWSYYQSOTRZRQBRKBBNCMDWMTSHPKBUIFSOTGHDSJOBVMXUEHIJYCJZRLQZOCRZUWVKHGQQRNRLEIPKMVMVFTTUXZEDWPERDTMEGZIIIYDHJEFDHBFPEKAQOPLNZNQASNOWIEAVFUYMQBPJTPDBXEK");
    msg.value = 121U;

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
    msg.setTimeStamp(0.6520454673430924);
    msg.setSource(2925U);
    msg.setSourceEntity(209U);
    msg.setDestination(43139U);
    msg.setDestinationEntity(82U);
    msg.name.assign("LXSRNFBGHOAKDYYOLSDOLBJJEFCELIAGWEFSFWHIXNNUNIUAJZOXMNBLYHVFPVPHOZZEPGZZBGMKSZTXZNCXSDBXDPAVDWLPDYRKRIPTXQRUMKTHAFHXOQHIMCPYFMWFLTGAWNKBKPQUCXVVJYJOZEGMEMCWGHBECJVZIWFKHSQCCYQGQJQSVYRTIDHQEDBCWGJQUUGNAAYQVOTWISKYNJLLZFUUPTJMBRXMAKCUVDWEEVSUM");

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
    msg.setTimeStamp(0.012960963782639112);
    msg.setSource(15711U);
    msg.setSourceEntity(116U);
    msg.setDestination(642U);
    msg.setDestinationEntity(231U);
    msg.name.assign("WLYHFDUGCWKOJGTOXHKUEVSVCYDORPBMRMKBLNAUYWIZCMJNDAFRGJTJRZDUBJXOQHPNOKCIMNLPNXLWJFACSNRSBQUOKVPYTOLKGNAWDIEKMSIMSYZBZVUIXHXLTYHALQXYESHEATHU");

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
    msg.setTimeStamp(0.7900093854879191);
    msg.setSource(32581U);
    msg.setSourceEntity(55U);
    msg.setDestination(19388U);
    msg.setDestinationEntity(194U);
    msg.name.assign("XYWNWMTLCOHE");

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
    msg.setTimeStamp(0.7927919188856454);
    msg.setSource(8599U);
    msg.setSourceEntity(7U);
    msg.setDestination(49126U);
    msg.setDestinationEntity(27U);
    msg.name.assign("OWQGHVQUGPSRSRFBZZPWYIMTQMRCUDZOFUXTAPHWHNMWLZTDNOOGIQSXHCAACZGSYSKQGOXHPFSNPKRICBLJHDBULMPZNCEJFMYNALKJEGXTKKRDTDUFWJLTKOQXJNXCZUXXGRAMEGRITMJBAIVYHBUDQBLUHIGNWTUKOSXBCIKBFMVLYNADOFPYRWZQCVWYV");
    msg.value = 94U;

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
    msg.setTimeStamp(0.7615236840364692);
    msg.setSource(6286U);
    msg.setSourceEntity(13U);
    msg.setDestination(30885U);
    msg.setDestinationEntity(156U);
    msg.name.assign("BJRFUOZAXLGGZOZXBQOQSLOVEAIDVXVRHQCARUTDMQACFRYVTNHVENHBWCIXKEICWVQFZOQECZNPZHTZKQIYTWCNPDDMYBQEIFFJDMERKXOHRGGLSPYFCSYRFRTLMJEVENRWBFJQNSZMAZYKJANLSZ");
    msg.value = 130U;

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
    msg.setTimeStamp(0.5818763447132383);
    msg.setSource(43454U);
    msg.setSourceEntity(66U);
    msg.setDestination(42414U);
    msg.setDestinationEntity(127U);
    msg.name.assign("ANSWYGPIVCMSEPBBEACSWPYQIHNPRWNWJOIPTEQATHYWVMBOGXZSPZSSPOKNXDLDUJVBBDRSVDUHVFHLAELRGQTLUVLQXCQUBFLTXCKLBVJZAGSZXQVFBYDRUCIBLDYJYVOZUBZTAJCIMHFXDNZNEPYSEKOWMDYMWERSHJQKWQHCU");
    msg.value = 77U;

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
    msg.setTimeStamp(0.7331995407918156);
    msg.setSource(48698U);
    msg.setSourceEntity(35U);
    msg.setDestination(56412U);
    msg.setDestinationEntity(241U);
    msg.id = 130U;
    msg.period = 2724724635U;
    msg.duty_cycle = 1153956959U;

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
    msg.setTimeStamp(0.17468818450348622);
    msg.setSource(27777U);
    msg.setSourceEntity(115U);
    msg.setDestination(23534U);
    msg.setDestinationEntity(130U);
    msg.id = 204U;
    msg.period = 653455076U;
    msg.duty_cycle = 3347708487U;

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
    msg.setTimeStamp(0.8006294858331696);
    msg.setSource(10053U);
    msg.setSourceEntity(30U);
    msg.setDestination(24433U);
    msg.setDestinationEntity(35U);
    msg.id = 82U;
    msg.period = 1329194040U;
    msg.duty_cycle = 139400836U;

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
    msg.setTimeStamp(0.7480679171603861);
    msg.setSource(37079U);
    msg.setSourceEntity(129U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(32U);
    msg.id = 247U;
    msg.period = 1576887522U;
    msg.duty_cycle = 1716879409U;

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
    msg.setTimeStamp(0.11544438777894628);
    msg.setSource(37706U);
    msg.setSourceEntity(192U);
    msg.setDestination(7274U);
    msg.setDestinationEntity(45U);
    msg.id = 21U;
    msg.period = 3857952565U;
    msg.duty_cycle = 1538312563U;

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
    msg.setTimeStamp(0.07414246971560101);
    msg.setSource(6398U);
    msg.setSourceEntity(211U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(237U);
    msg.id = 81U;
    msg.period = 565385156U;
    msg.duty_cycle = 426814287U;

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
    msg.setTimeStamp(0.7551701373385387);
    msg.setSource(26096U);
    msg.setSourceEntity(203U);
    msg.setDestination(33362U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.5044779540604923;
    msg.lon = 0.9776274651182753;
    msg.height = 0.5449026958868372;
    msg.x = 0.9173164489578751;
    msg.y = 0.5132936256918668;
    msg.z = 0.828545955404061;
    msg.phi = 0.5062589159544704;
    msg.theta = 0.17094461050355325;
    msg.psi = 0.1732228075924801;
    msg.u = 0.8011907865213015;
    msg.v = 0.6125281906617878;
    msg.w = 0.351725986776673;
    msg.vx = 0.622891366922437;
    msg.vy = 0.7044560983407657;
    msg.vz = 0.9320597518514614;
    msg.p = 0.35386582208030903;
    msg.q = 0.17004465228669008;
    msg.r = 0.8221810733450166;
    msg.depth = 0.7885228662243194;
    msg.alt = 0.052911732929712296;

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
    msg.setTimeStamp(0.9044156093386815);
    msg.setSource(24248U);
    msg.setSourceEntity(163U);
    msg.setDestination(42552U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.9980386612118249;
    msg.lon = 0.31895819639513123;
    msg.height = 0.9180557963744785;
    msg.x = 0.10907277594784792;
    msg.y = 0.584956662130896;
    msg.z = 0.2704643397548705;
    msg.phi = 0.6791853937206112;
    msg.theta = 0.5551974679218533;
    msg.psi = 0.8586297977400349;
    msg.u = 0.34872724454050763;
    msg.v = 0.49435330201111893;
    msg.w = 0.24917617582636986;
    msg.vx = 0.4967526829994767;
    msg.vy = 0.9230718504868124;
    msg.vz = 0.09529132230346482;
    msg.p = 0.22722990148063216;
    msg.q = 0.47191848167365813;
    msg.r = 0.225755336578069;
    msg.depth = 0.6382009617659398;
    msg.alt = 0.03449250189826869;

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
    msg.setTimeStamp(0.5599678636730443);
    msg.setSource(25953U);
    msg.setSourceEntity(236U);
    msg.setDestination(57061U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.3196884751296225;
    msg.lon = 0.5116161866282373;
    msg.height = 0.745095969980244;
    msg.x = 0.8021405152976467;
    msg.y = 0.17956281815253328;
    msg.z = 0.31370875336953785;
    msg.phi = 0.7008398845733654;
    msg.theta = 0.4042977635975664;
    msg.psi = 0.5184400760063541;
    msg.u = 0.2831409943645036;
    msg.v = 0.48646011635818764;
    msg.w = 0.28980147615004426;
    msg.vx = 0.8464417143150019;
    msg.vy = 0.6835064982592346;
    msg.vz = 0.4678805012696984;
    msg.p = 0.27747155302402293;
    msg.q = 0.22974140981831825;
    msg.r = 0.4286559453022655;
    msg.depth = 0.24934916442912214;
    msg.alt = 0.9847928404037029;

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
    msg.setTimeStamp(0.4976762854597059);
    msg.setSource(38277U);
    msg.setSourceEntity(17U);
    msg.setDestination(6914U);
    msg.setDestinationEntity(135U);
    msg.x = 0.7759962978014192;
    msg.y = 0.6558351651997326;
    msg.z = 0.3945526504280329;

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
    msg.setTimeStamp(0.3463704450034206);
    msg.setSource(18421U);
    msg.setSourceEntity(84U);
    msg.setDestination(40434U);
    msg.setDestinationEntity(59U);
    msg.x = 0.7364456321714449;
    msg.y = 0.747272581069296;
    msg.z = 0.534939440202927;

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
    msg.setTimeStamp(0.8113416416982835);
    msg.setSource(50476U);
    msg.setSourceEntity(37U);
    msg.setDestination(34571U);
    msg.setDestinationEntity(143U);
    msg.x = 0.7310503704526179;
    msg.y = 0.3072000945411616;
    msg.z = 0.43421186460699557;

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
    msg.setTimeStamp(0.046477098068614);
    msg.setSource(31830U);
    msg.setSourceEntity(66U);
    msg.setDestination(776U);
    msg.setDestinationEntity(146U);
    msg.value = 0.6882724357242461;

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
    msg.setTimeStamp(0.47594830328165993);
    msg.setSource(35197U);
    msg.setSourceEntity(72U);
    msg.setDestination(46396U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0023190512698224586;

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
    msg.setTimeStamp(0.6797418912677775);
    msg.setSource(4618U);
    msg.setSourceEntity(168U);
    msg.setDestination(17108U);
    msg.setDestinationEntity(134U);
    msg.value = 0.34223691311071025;

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
    msg.setTimeStamp(0.18994892800121543);
    msg.setSource(4146U);
    msg.setSourceEntity(160U);
    msg.setDestination(6737U);
    msg.setDestinationEntity(158U);
    msg.value = 0.769226297660753;

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
    msg.setTimeStamp(0.19976382341760113);
    msg.setSource(25101U);
    msg.setSourceEntity(73U);
    msg.setDestination(3950U);
    msg.setDestinationEntity(30U);
    msg.value = 0.6112617691168143;

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
    msg.setTimeStamp(0.9219050369377705);
    msg.setSource(37171U);
    msg.setSourceEntity(247U);
    msg.setDestination(54502U);
    msg.setDestinationEntity(187U);
    msg.value = 0.30691484447672934;

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
    msg.setTimeStamp(0.5783604311158244);
    msg.setSource(47448U);
    msg.setSourceEntity(72U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(17U);
    msg.x = 0.08890075298815225;
    msg.y = 0.16741263346450608;
    msg.z = 0.22736573926366732;
    msg.phi = 0.5892518861677516;
    msg.theta = 0.010830998406380798;
    msg.psi = 0.5680029023388625;
    msg.p = 0.6788862133784702;
    msg.q = 0.6417380130064608;
    msg.r = 0.7222556518938359;
    msg.u = 0.09598765079638094;
    msg.v = 0.9741145148967163;
    msg.w = 0.327018569207417;
    msg.bias_psi = 0.371085587930737;
    msg.bias_r = 0.5217278692500804;

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
    msg.setTimeStamp(0.4810158400343242);
    msg.setSource(22202U);
    msg.setSourceEntity(31U);
    msg.setDestination(52073U);
    msg.setDestinationEntity(229U);
    msg.x = 0.5158549137288791;
    msg.y = 0.3808739248521702;
    msg.z = 0.6636580656215109;
    msg.phi = 0.6694762304725443;
    msg.theta = 0.9928956422905374;
    msg.psi = 0.6808896790633792;
    msg.p = 0.4278603105866564;
    msg.q = 0.4520226641218792;
    msg.r = 0.8625982898826646;
    msg.u = 0.6177145323371219;
    msg.v = 0.27961307165994365;
    msg.w = 0.6466525661081742;
    msg.bias_psi = 0.9023429115890022;
    msg.bias_r = 0.7487619279155169;

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
    msg.setTimeStamp(0.7862676986500035);
    msg.setSource(64209U);
    msg.setSourceEntity(190U);
    msg.setDestination(46220U);
    msg.setDestinationEntity(149U);
    msg.x = 0.3133707666087102;
    msg.y = 0.47058627991159696;
    msg.z = 0.2977941936547296;
    msg.phi = 0.5829281118118641;
    msg.theta = 0.0024556722256087182;
    msg.psi = 0.7905286914662076;
    msg.p = 0.06934416666689258;
    msg.q = 0.33972238709946057;
    msg.r = 0.3515846696207746;
    msg.u = 0.612097045557758;
    msg.v = 0.03451119065212882;
    msg.w = 0.19522741405685196;
    msg.bias_psi = 0.53205154025457;
    msg.bias_r = 0.7135419583234011;

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
    msg.setTimeStamp(0.4141416468123085);
    msg.setSource(32859U);
    msg.setSourceEntity(172U);
    msg.setDestination(57775U);
    msg.setDestinationEntity(151U);
    msg.bias_psi = 0.10871489150490599;
    msg.bias_r = 0.9028529574371437;
    msg.cog = 0.2757039710362491;
    msg.cyaw = 0.8727873736301218;
    msg.lbl_rej_level = 0.27802122925564043;
    msg.gps_rej_level = 0.7808150032152422;
    msg.custom_x = 0.4919176239687718;
    msg.custom_y = 0.12942913388531008;
    msg.custom_z = 0.5406922673885566;

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
    msg.setTimeStamp(0.7413322910769868);
    msg.setSource(53846U);
    msg.setSourceEntity(70U);
    msg.setDestination(64388U);
    msg.setDestinationEntity(88U);
    msg.bias_psi = 0.44014779553753336;
    msg.bias_r = 0.04569914010406484;
    msg.cog = 0.30592166724075154;
    msg.cyaw = 0.8204815803151708;
    msg.lbl_rej_level = 0.034973291251888194;
    msg.gps_rej_level = 0.858138047543924;
    msg.custom_x = 0.08331031271057487;
    msg.custom_y = 0.7897520318851422;
    msg.custom_z = 0.7459797027294286;

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
    msg.setTimeStamp(0.7549682196143833);
    msg.setSource(51994U);
    msg.setSourceEntity(245U);
    msg.setDestination(29926U);
    msg.setDestinationEntity(34U);
    msg.bias_psi = 0.8498123230541079;
    msg.bias_r = 0.7249053283216474;
    msg.cog = 0.9588870469787982;
    msg.cyaw = 0.11050783236801776;
    msg.lbl_rej_level = 0.10261977835507063;
    msg.gps_rej_level = 0.035905424814173026;
    msg.custom_x = 0.8308822752662801;
    msg.custom_y = 0.05158733486403699;
    msg.custom_z = 0.26163781621736415;

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
    msg.setTimeStamp(0.7159047981024155);
    msg.setSource(51517U);
    msg.setSourceEntity(36U);
    msg.setDestination(51670U);
    msg.setDestinationEntity(219U);
    msg.utc_time = 0.2050020657649444;
    msg.reason = 251U;

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
    msg.setTimeStamp(0.3364665425268214);
    msg.setSource(6689U);
    msg.setSourceEntity(226U);
    msg.setDestination(29088U);
    msg.setDestinationEntity(106U);
    msg.utc_time = 0.5623243529086042;
    msg.reason = 144U;

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
    msg.setTimeStamp(0.666567272695088);
    msg.setSource(51838U);
    msg.setSourceEntity(135U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(215U);
    msg.utc_time = 0.18228308295269713;
    msg.reason = 40U;

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
    msg.setTimeStamp(0.32490454682164216);
    msg.setSource(25676U);
    msg.setSourceEntity(37U);
    msg.setDestination(49025U);
    msg.setDestinationEntity(201U);
    msg.id = 30U;
    msg.range = 0.9862732728313481;
    msg.acceptance = 30U;

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
    msg.setTimeStamp(0.6307286447794411);
    msg.setSource(10244U);
    msg.setSourceEntity(193U);
    msg.setDestination(55207U);
    msg.setDestinationEntity(245U);
    msg.id = 77U;
    msg.range = 0.9435552800463631;
    msg.acceptance = 19U;

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
    msg.setTimeStamp(0.37032125316574915);
    msg.setSource(64658U);
    msg.setSourceEntity(206U);
    msg.setDestination(2524U);
    msg.setDestinationEntity(172U);
    msg.id = 11U;
    msg.range = 0.36633460981346;
    msg.acceptance = 57U;

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
    msg.setTimeStamp(0.30581013410896163);
    msg.setSource(49231U);
    msg.setSourceEntity(226U);
    msg.setDestination(62834U);
    msg.setDestinationEntity(23U);
    msg.type = 68U;
    msg.reason = 205U;
    msg.value = 0.5360466887262759;
    msg.timestep = 0.019103431721533393;

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
    msg.setTimeStamp(0.8890920376166798);
    msg.setSource(57835U);
    msg.setSourceEntity(248U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(72U);
    msg.type = 149U;
    msg.reason = 119U;
    msg.value = 0.7963789484877066;
    msg.timestep = 0.6466906945256835;

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
    msg.setTimeStamp(0.2830364138196303);
    msg.setSource(33691U);
    msg.setSourceEntity(204U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(107U);
    msg.type = 83U;
    msg.reason = 135U;
    msg.value = 0.20917537425455013;
    msg.timestep = 0.2963930898019723;

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
    msg.setTimeStamp(0.42537749823610294);
    msg.setSource(56396U);
    msg.setSourceEntity(156U);
    msg.setDestination(35087U);
    msg.setDestinationEntity(241U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TLYXIXTEIOSRZOJWGCJVOFGBWGTZFCYOCTLYJTUABXJKPQXRRSOYZMFVOGYQDHXVWJLSQANEFHAHZSEENBWBVUKQJNEPLGNMHALUZMNGLEIVXQJBLKBQDHVNFSUKRZRTZLWUOFPQAIFCMRPDRGVDECMHPSFUILKDXQSBERMMHGFKNGICRVCWCIBLHZRVZAYNWDSGSMMQNHIUDTOYPPVMUKDENTXYDUKEISWWXYPTKPOPAZOHFYCTAJWBDIAKJ");
    tmp_msg_0.lat = 0.731079974462634;
    tmp_msg_0.lon = 0.06518933898025514;
    tmp_msg_0.depth = 0.250266205915729;
    tmp_msg_0.query_channel = 83U;
    tmp_msg_0.reply_channel = 176U;
    tmp_msg_0.transponder_delay = 9U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3828673944627866;
    msg.y = 0.37193204655287604;
    msg.var_x = 0.15862868087221693;
    msg.var_y = 0.015585332463934787;
    msg.distance = 0.12942560820572335;

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
    msg.setTimeStamp(0.9943844583323664);
    msg.setSource(32934U);
    msg.setSourceEntity(64U);
    msg.setDestination(43738U);
    msg.setDestinationEntity(143U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XJBKFTQTITYNGOBNWWYXTRVULPBHZTMOTNEZSAGQICAZPAJN");
    tmp_msg_0.lat = 0.7013080310089252;
    tmp_msg_0.lon = 0.435908867528069;
    tmp_msg_0.depth = 0.0260019196011404;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 134U;
    tmp_msg_0.transponder_delay = 17U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4037444299022743;
    msg.y = 0.6133087213945683;
    msg.var_x = 0.4453363212645969;
    msg.var_y = 0.8457886259312037;
    msg.distance = 0.36072626284619946;

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
    msg.setTimeStamp(0.47957663531811046);
    msg.setSource(7751U);
    msg.setSourceEntity(30U);
    msg.setDestination(14438U);
    msg.setDestinationEntity(113U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WZPMEOACXZVHTWDTWJUTDDYCKVSHZAZJXLGVQPINAAAHAKCKFECEEQQMWIHDBBALZTBJFRNIMFNSRGXPOKTOLREWUMXDLMSOCYOHKSRSEUQJPKBHTKTNYIGFJSNHUQMYNVSGZBRIQQXXLZNSEUPFCVGKEKBYYV");
    tmp_msg_0.lat = 0.9006207076447382;
    tmp_msg_0.lon = 0.33694155155507777;
    tmp_msg_0.depth = 0.4665771995816319;
    tmp_msg_0.query_channel = 76U;
    tmp_msg_0.reply_channel = 200U;
    tmp_msg_0.transponder_delay = 109U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3973308944999535;
    msg.y = 0.0067693413639868805;
    msg.var_x = 0.010840172650890212;
    msg.var_y = 0.3727005771109855;
    msg.distance = 0.46236101222278525;

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
    msg.setTimeStamp(0.500281258150163);
    msg.setSource(13752U);
    msg.setSourceEntity(165U);
    msg.setDestination(49991U);
    msg.setDestinationEntity(38U);
    msg.state = 230U;

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
    msg.setTimeStamp(0.24349587371739945);
    msg.setSource(56683U);
    msg.setSourceEntity(248U);
    msg.setDestination(25209U);
    msg.setDestinationEntity(121U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.1100292487643677);
    msg.setSource(53994U);
    msg.setSourceEntity(73U);
    msg.setDestination(38188U);
    msg.setDestinationEntity(235U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.6838646095679697);
    msg.setSource(53649U);
    msg.setSourceEntity(42U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(202U);
    msg.x = 0.8771439937134511;
    msg.y = 0.40883537144443616;
    msg.z = 0.8725942389851381;

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
    msg.setTimeStamp(0.34289901407762646);
    msg.setSource(22542U);
    msg.setSourceEntity(50U);
    msg.setDestination(37042U);
    msg.setDestinationEntity(220U);
    msg.x = 0.2571427187061245;
    msg.y = 0.7131882497411746;
    msg.z = 0.2044252021874864;

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
    msg.setTimeStamp(0.9849797881156851);
    msg.setSource(41140U);
    msg.setSourceEntity(105U);
    msg.setDestination(27111U);
    msg.setDestinationEntity(22U);
    msg.x = 0.02516186819040167;
    msg.y = 0.5666084580266156;
    msg.z = 0.7558702726387251;

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
    msg.setTimeStamp(0.8326818420852006);
    msg.setSource(13483U);
    msg.setSourceEntity(60U);
    msg.setDestination(25904U);
    msg.setDestinationEntity(235U);
    msg.va = 0.49937873436508773;
    msg.aoa = 0.6580692221663039;
    msg.ssa = 0.21551226369831722;

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
    msg.setTimeStamp(0.6006858702678555);
    msg.setSource(35180U);
    msg.setSourceEntity(101U);
    msg.setDestination(39328U);
    msg.setDestinationEntity(0U);
    msg.va = 0.9213808895406236;
    msg.aoa = 0.389342741166534;
    msg.ssa = 0.9647242076374464;

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
    msg.setTimeStamp(0.8343299195620778);
    msg.setSource(21498U);
    msg.setSourceEntity(66U);
    msg.setDestination(33181U);
    msg.setDestinationEntity(124U);
    msg.va = 0.6700947445858776;
    msg.aoa = 0.6782255573891484;
    msg.ssa = 0.019044435465246146;

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
    msg.setTimeStamp(0.6684027376443799);
    msg.setSource(55195U);
    msg.setSourceEntity(128U);
    msg.setDestination(273U);
    msg.setDestinationEntity(207U);
    msg.value = 0.7224969578808942;

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
    msg.setTimeStamp(0.8010282512107848);
    msg.setSource(10181U);
    msg.setSourceEntity(61U);
    msg.setDestination(11922U);
    msg.setDestinationEntity(232U);
    msg.value = 0.22545905559535362;

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
    msg.setTimeStamp(0.758523758971813);
    msg.setSource(49289U);
    msg.setSourceEntity(114U);
    msg.setDestination(60691U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7934666527961776;

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
    msg.setTimeStamp(0.02560816122728138);
    msg.setSource(61441U);
    msg.setSourceEntity(197U);
    msg.setDestination(22798U);
    msg.setDestinationEntity(180U);
    msg.value = 0.1274623736059317;
    msg.z_units = 252U;

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
    msg.setTimeStamp(0.2765014749120758);
    msg.setSource(48396U);
    msg.setSourceEntity(45U);
    msg.setDestination(62944U);
    msg.setDestinationEntity(141U);
    msg.value = 0.4601916891165754;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.5426100236020457);
    msg.setSource(30774U);
    msg.setSourceEntity(50U);
    msg.setDestination(15219U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0956778022916479;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.36215004915313675);
    msg.setSource(5655U);
    msg.setSourceEntity(245U);
    msg.setDestination(47288U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7957081101589293;
    msg.speed_units = 70U;

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
    msg.setTimeStamp(0.2613627106066625);
    msg.setSource(24868U);
    msg.setSourceEntity(70U);
    msg.setDestination(47710U);
    msg.setDestinationEntity(9U);
    msg.value = 0.04085547443884008;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.25052772262834877);
    msg.setSource(37751U);
    msg.setSourceEntity(179U);
    msg.setDestination(20261U);
    msg.setDestinationEntity(8U);
    msg.value = 0.32743187977347354;
    msg.speed_units = 26U;

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
    msg.setTimeStamp(0.9085181515419058);
    msg.setSource(24688U);
    msg.setSourceEntity(248U);
    msg.setDestination(6511U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8239149508474096;

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
    msg.setTimeStamp(0.15951012063086478);
    msg.setSource(61268U);
    msg.setSourceEntity(56U);
    msg.setDestination(5685U);
    msg.setDestinationEntity(48U);
    msg.value = 0.6347343310511843;

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
    msg.setTimeStamp(0.6502486226443142);
    msg.setSource(53924U);
    msg.setSourceEntity(38U);
    msg.setDestination(33190U);
    msg.setDestinationEntity(169U);
    msg.value = 0.03447443386437532;

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
    msg.setTimeStamp(0.8131975424357978);
    msg.setSource(52759U);
    msg.setSourceEntity(180U);
    msg.setDestination(21114U);
    msg.setDestinationEntity(127U);
    msg.value = 0.47459422366038206;

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
    msg.setTimeStamp(0.9245521670549164);
    msg.setSource(40527U);
    msg.setSourceEntity(216U);
    msg.setDestination(48909U);
    msg.setDestinationEntity(37U);
    msg.value = 0.42438061529821836;

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
    msg.setTimeStamp(0.269961582603205);
    msg.setSource(20934U);
    msg.setSourceEntity(38U);
    msg.setDestination(23738U);
    msg.setDestinationEntity(86U);
    msg.value = 0.6734514236890489;

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
    msg.setTimeStamp(0.4292913247293083);
    msg.setSource(3875U);
    msg.setSourceEntity(111U);
    msg.setDestination(23591U);
    msg.setDestinationEntity(75U);
    msg.value = 0.3361845932345069;

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
    msg.setTimeStamp(0.05836235748846352);
    msg.setSource(41403U);
    msg.setSourceEntity(12U);
    msg.setDestination(13692U);
    msg.setDestinationEntity(162U);
    msg.value = 0.6001088117265786;

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
    msg.setTimeStamp(0.5588221873558704);
    msg.setSource(57645U);
    msg.setSourceEntity(54U);
    msg.setDestination(26904U);
    msg.setDestinationEntity(157U);
    msg.value = 0.8421251383094022;

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
    msg.setTimeStamp(0.014880669336780894);
    msg.setSource(64929U);
    msg.setSourceEntity(171U);
    msg.setDestination(58986U);
    msg.setDestinationEntity(11U);
    msg.path_ref = 2396757487U;
    msg.start_lat = 0.4370349013668299;
    msg.start_lon = 0.9851076925584614;
    msg.start_z = 0.9250086949147419;
    msg.start_z_units = 196U;
    msg.end_lat = 0.8988243406039843;
    msg.end_lon = 0.41055627492328195;
    msg.end_z = 0.2473783615863433;
    msg.end_z_units = 115U;
    msg.speed = 0.8450676556919858;
    msg.speed_units = 55U;
    msg.lradius = 0.4080087337878281;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.5480875573434886);
    msg.setSource(11982U);
    msg.setSourceEntity(202U);
    msg.setDestination(13951U);
    msg.setDestinationEntity(66U);
    msg.path_ref = 830115982U;
    msg.start_lat = 0.46745268280545826;
    msg.start_lon = 0.40957708965524664;
    msg.start_z = 0.24112799918455208;
    msg.start_z_units = 159U;
    msg.end_lat = 0.793483452667141;
    msg.end_lon = 0.6470506058664274;
    msg.end_z = 0.8281979536991918;
    msg.end_z_units = 181U;
    msg.speed = 0.22078479071025559;
    msg.speed_units = 46U;
    msg.lradius = 0.49246928924382183;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.7788110479676079);
    msg.setSource(42411U);
    msg.setSourceEntity(248U);
    msg.setDestination(37747U);
    msg.setDestinationEntity(28U);
    msg.path_ref = 2866149786U;
    msg.start_lat = 0.7676660275453698;
    msg.start_lon = 0.7996808569932032;
    msg.start_z = 0.09287222229457048;
    msg.start_z_units = 222U;
    msg.end_lat = 0.24686529065720098;
    msg.end_lon = 0.22691578820372138;
    msg.end_z = 0.009029528088272176;
    msg.end_z_units = 228U;
    msg.speed = 0.6803838772698633;
    msg.speed_units = 123U;
    msg.lradius = 0.5305025597634241;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.8813198773906429);
    msg.setSource(30285U);
    msg.setSourceEntity(200U);
    msg.setDestination(37984U);
    msg.setDestinationEntity(59U);
    msg.x = 0.44439044370105407;
    msg.y = 0.43942232684831806;
    msg.z = 0.10676417872613009;
    msg.k = 0.3839260558957659;
    msg.m = 0.5381661573133337;
    msg.n = 0.40125609995235834;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.20230611926261688);
    msg.setSource(58633U);
    msg.setSourceEntity(247U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(254U);
    msg.x = 0.5753499578220916;
    msg.y = 0.7439508206935522;
    msg.z = 0.32294750467573896;
    msg.k = 0.9970253810647279;
    msg.m = 0.5772705802883036;
    msg.n = 0.42171550944656166;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.709078715468534);
    msg.setSource(48367U);
    msg.setSourceEntity(67U);
    msg.setDestination(34816U);
    msg.setDestinationEntity(133U);
    msg.x = 0.04023107870836018;
    msg.y = 0.8252566579832634;
    msg.z = 0.827581126782212;
    msg.k = 0.6778878281854682;
    msg.m = 0.5636757187777685;
    msg.n = 0.6155346654638352;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.3685194337554667);
    msg.setSource(8988U);
    msg.setSourceEntity(132U);
    msg.setDestination(37265U);
    msg.setDestinationEntity(100U);
    msg.value = 0.09586081546863923;

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
    msg.setTimeStamp(0.6697836553263721);
    msg.setSource(63799U);
    msg.setSourceEntity(53U);
    msg.setDestination(55621U);
    msg.setDestinationEntity(153U);
    msg.value = 0.05076259625433788;

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
    msg.setTimeStamp(0.8832259322288493);
    msg.setSource(20611U);
    msg.setSourceEntity(53U);
    msg.setDestination(58817U);
    msg.setDestinationEntity(173U);
    msg.value = 0.18044591299269108;

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
    msg.setTimeStamp(0.5424945010460015);
    msg.setSource(34903U);
    msg.setSourceEntity(132U);
    msg.setDestination(25908U);
    msg.setDestinationEntity(170U);
    msg.u = 0.8088593684966302;
    msg.v = 0.6053639715355063;
    msg.w = 0.24390869502064616;
    msg.p = 0.588964265733069;
    msg.q = 0.4300849766895788;
    msg.r = 0.6672136931329956;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.8330941896998522);
    msg.setSource(28993U);
    msg.setSourceEntity(104U);
    msg.setDestination(62586U);
    msg.setDestinationEntity(80U);
    msg.u = 0.6464984028857718;
    msg.v = 0.8088771534199306;
    msg.w = 0.6713535997393258;
    msg.p = 0.41931416888094175;
    msg.q = 0.37734620891323534;
    msg.r = 0.692532778299128;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.8767016924264452);
    msg.setSource(51618U);
    msg.setSourceEntity(93U);
    msg.setDestination(42676U);
    msg.setDestinationEntity(231U);
    msg.u = 0.851145923081231;
    msg.v = 0.7372012578905195;
    msg.w = 0.9864578356643632;
    msg.p = 0.2729985927743016;
    msg.q = 0.0698594314723795;
    msg.r = 0.698110707222645;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.8196287210976364);
    msg.setSource(41723U);
    msg.setSourceEntity(215U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(162U);
    msg.path_ref = 1767242548U;
    msg.start_lat = 0.47452684031040715;
    msg.start_lon = 0.0922730306732017;
    msg.start_z = 0.22709713619996108;
    msg.start_z_units = 97U;
    msg.end_lat = 0.8370239007333089;
    msg.end_lon = 0.8541729476569001;
    msg.end_z = 0.8110591680991261;
    msg.end_z_units = 26U;
    msg.lradius = 0.2300488072994893;
    msg.flags = 251U;
    msg.x = 0.7245258412018968;
    msg.y = 0.7149648371330303;
    msg.z = 0.269389112606612;
    msg.vx = 0.15613021872658606;
    msg.vy = 0.7126261245267401;
    msg.vz = 0.09625369622738855;
    msg.course_error = 0.9098097129494358;
    msg.eta = 15888U;

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
    msg.setTimeStamp(0.5859708238571167);
    msg.setSource(48205U);
    msg.setSourceEntity(171U);
    msg.setDestination(61802U);
    msg.setDestinationEntity(0U);
    msg.path_ref = 3494633017U;
    msg.start_lat = 0.5548530334294454;
    msg.start_lon = 0.4781005200903622;
    msg.start_z = 0.2957410019689165;
    msg.start_z_units = 206U;
    msg.end_lat = 0.22830607025872507;
    msg.end_lon = 0.2514889044876376;
    msg.end_z = 0.06618992026401949;
    msg.end_z_units = 39U;
    msg.lradius = 0.8968025915689705;
    msg.flags = 63U;
    msg.x = 0.7136661597976118;
    msg.y = 0.10234966065463869;
    msg.z = 0.0574652127561468;
    msg.vx = 0.2661382617970035;
    msg.vy = 0.9636028077274797;
    msg.vz = 0.5287076939407135;
    msg.course_error = 0.07330427968693343;
    msg.eta = 28916U;

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
    msg.setTimeStamp(0.9072506168577991);
    msg.setSource(21080U);
    msg.setSourceEntity(240U);
    msg.setDestination(18022U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 69540106U;
    msg.start_lat = 0.5394644248305089;
    msg.start_lon = 0.42674452708371;
    msg.start_z = 0.8714346907601768;
    msg.start_z_units = 56U;
    msg.end_lat = 0.46981704890361864;
    msg.end_lon = 0.867829927902661;
    msg.end_z = 0.15837527897883386;
    msg.end_z_units = 215U;
    msg.lradius = 0.10257000924306559;
    msg.flags = 230U;
    msg.x = 0.42953812206724185;
    msg.y = 0.5860754844647305;
    msg.z = 0.8361311263426517;
    msg.vx = 0.4720231045745148;
    msg.vy = 0.7086455403979255;
    msg.vz = 0.0481149686830773;
    msg.course_error = 0.9085122949034509;
    msg.eta = 438U;

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
    msg.setTimeStamp(0.759020869545654);
    msg.setSource(34025U);
    msg.setSourceEntity(79U);
    msg.setDestination(38062U);
    msg.setDestinationEntity(229U);
    msg.k = 0.1457430472959299;
    msg.m = 0.8314274265060607;
    msg.n = 0.28859117970929016;

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
    msg.setTimeStamp(0.629605856672714);
    msg.setSource(21259U);
    msg.setSourceEntity(114U);
    msg.setDestination(33902U);
    msg.setDestinationEntity(82U);
    msg.k = 0.20226550564659884;
    msg.m = 0.9886488003632706;
    msg.n = 0.34526082967240523;

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
    msg.setTimeStamp(0.2936312071882672);
    msg.setSource(24265U);
    msg.setSourceEntity(73U);
    msg.setDestination(57334U);
    msg.setDestinationEntity(196U);
    msg.k = 0.057932348793146904;
    msg.m = 0.9316367277966999;
    msg.n = 0.5975892151685359;

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
    msg.setTimeStamp(0.7828689283428109);
    msg.setSource(25622U);
    msg.setSourceEntity(251U);
    msg.setDestination(8416U);
    msg.setDestinationEntity(98U);
    msg.p = 0.5199324315943658;
    msg.i = 0.9297050135884822;
    msg.d = 0.3983776894416613;
    msg.a = 0.5705834706345123;

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
    msg.setTimeStamp(0.6301218830384641);
    msg.setSource(64772U);
    msg.setSourceEntity(39U);
    msg.setDestination(15689U);
    msg.setDestinationEntity(176U);
    msg.p = 0.054594567454043785;
    msg.i = 0.08622144790543895;
    msg.d = 0.5337813034896035;
    msg.a = 0.3241209727822929;

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
    msg.setTimeStamp(0.8425587633771372);
    msg.setSource(60701U);
    msg.setSourceEntity(254U);
    msg.setDestination(19865U);
    msg.setDestinationEntity(176U);
    msg.p = 0.55900751771113;
    msg.i = 0.9194934693510975;
    msg.d = 0.684311742416498;
    msg.a = 0.8805472215808839;

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
    msg.setTimeStamp(0.018342390977382883);
    msg.setSource(5790U);
    msg.setSourceEntity(216U);
    msg.setDestination(35137U);
    msg.setDestinationEntity(141U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.36780363574651354);
    msg.setSource(35366U);
    msg.setSourceEntity(247U);
    msg.setDestination(24150U);
    msg.setDestinationEntity(204U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.21765423067067813);
    msg.setSource(53692U);
    msg.setSourceEntity(192U);
    msg.setDestination(56132U);
    msg.setDestinationEntity(10U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.1980533986463996);
    msg.setSource(39345U);
    msg.setSourceEntity(208U);
    msg.setDestination(8580U);
    msg.setDestinationEntity(132U);
    msg.x = 0.21614153285849558;
    msg.y = 0.4320773112007886;
    msg.z = 0.8722111108547199;
    msg.vx = 0.4521024376256567;
    msg.vy = 0.09956011121506758;
    msg.vz = 0.08367200124206864;
    msg.ax = 0.0801927755013565;
    msg.ay = 0.11003336511876116;
    msg.az = 0.15425969390426952;
    msg.flags = 35983U;

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
    msg.setTimeStamp(0.5216161148817874);
    msg.setSource(38090U);
    msg.setSourceEntity(16U);
    msg.setDestination(51924U);
    msg.setDestinationEntity(149U);
    msg.x = 0.00734005761536638;
    msg.y = 0.9965963711145149;
    msg.z = 0.11320372345936625;
    msg.vx = 0.8407010561956669;
    msg.vy = 0.03825362084134609;
    msg.vz = 0.36225204926152066;
    msg.ax = 0.8844277778284052;
    msg.ay = 0.5390452918909844;
    msg.az = 0.326838210034576;
    msg.flags = 25285U;

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
    msg.setTimeStamp(0.9428093150400719);
    msg.setSource(3386U);
    msg.setSourceEntity(123U);
    msg.setDestination(43268U);
    msg.setDestinationEntity(242U);
    msg.x = 0.8915285537405525;
    msg.y = 0.8434447732765448;
    msg.z = 0.09553489769542223;
    msg.vx = 0.7042768834712251;
    msg.vy = 0.9376658084797616;
    msg.vz = 0.5470722775993525;
    msg.ax = 0.5834341545080691;
    msg.ay = 0.6152070065089618;
    msg.az = 0.042024943425757244;
    msg.flags = 2608U;

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
    msg.setTimeStamp(0.5143465171917658);
    msg.setSource(16730U);
    msg.setSourceEntity(12U);
    msg.setDestination(45101U);
    msg.setDestinationEntity(166U);
    msg.value = 0.3142943888701242;

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
    msg.setTimeStamp(0.5308111501398333);
    msg.setSource(36805U);
    msg.setSourceEntity(127U);
    msg.setDestination(22239U);
    msg.setDestinationEntity(1U);
    msg.value = 0.7495078852810801;

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
    msg.setTimeStamp(0.2710406717486822);
    msg.setSource(50130U);
    msg.setSourceEntity(10U);
    msg.setDestination(27417U);
    msg.setDestinationEntity(176U);
    msg.value = 0.1425057171183267;

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
    msg.setTimeStamp(0.42400784852802786);
    msg.setSource(2549U);
    msg.setSourceEntity(206U);
    msg.setDestination(33162U);
    msg.setDestinationEntity(198U);
    msg.timeout = 30738U;
    msg.lat = 0.7897585408810214;
    msg.lon = 0.7119285819753128;
    msg.z = 0.660852297846825;
    msg.z_units = 253U;
    msg.speed = 0.6389034728484713;
    msg.speed_units = 38U;
    msg.roll = 0.9186145430194332;
    msg.pitch = 0.06684710423867724;
    msg.yaw = 0.937919727507128;
    msg.custom.assign("QMRAMVSBTCXAPEVAVARKGGFNURAKWCTRNAFQKPTNMSHKRHLHTNDFQGEHHPXTMZQEOUDLUWTOSWFTIVARSLOGJLUDMOZJZXIJPFSFYI");

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
    msg.setTimeStamp(0.4030021201132483);
    msg.setSource(27118U);
    msg.setSourceEntity(118U);
    msg.setDestination(50122U);
    msg.setDestinationEntity(197U);
    msg.timeout = 55363U;
    msg.lat = 0.36849406418879316;
    msg.lon = 0.9037140503379903;
    msg.z = 0.8438391790574254;
    msg.z_units = 37U;
    msg.speed = 0.378400632883359;
    msg.speed_units = 242U;
    msg.roll = 0.06376483152092483;
    msg.pitch = 0.45253385617326114;
    msg.yaw = 0.4020889535457203;
    msg.custom.assign("GFZSJUQKMVHJDXGWKZUIKWZHOUDMBSOCYXUEXAHZCQYSETHBHCGWVZNCAOPZJBYOSEGAHJSNLISTSOJDJANRPBRUDXZRYLXTRRVFOSKQCCKCMANNIEPUUNHGOE");

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
    msg.setTimeStamp(0.35991463248870204);
    msg.setSource(8607U);
    msg.setSourceEntity(32U);
    msg.setDestination(12867U);
    msg.setDestinationEntity(15U);
    msg.timeout = 36360U;
    msg.lat = 0.6869724434653208;
    msg.lon = 0.24802823043331912;
    msg.z = 0.42871532272130586;
    msg.z_units = 224U;
    msg.speed = 0.9345191282493888;
    msg.speed_units = 151U;
    msg.roll = 0.8058425866178838;
    msg.pitch = 0.20726727912955178;
    msg.yaw = 0.9308702680428618;
    msg.custom.assign("DOVJNYJWZZONHZOSPEDJVRSNDHCYGIMGMDYMJQXVYJVLCTFHBLVODMZOQWEZIBVJEWUCIUUWMJXDSCXVKRWCONMOLNOTPKBXEBBIVYWQQFNLMITPCTFDRTHKCBSQCEEKUFKBPAFZMHQWPTJBAUZXAGEUPCZFDPLZTFWGYLHYMIUUARTIXAQEJPWQRIJ");

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
    msg.setTimeStamp(0.09111152000583889);
    msg.setSource(42550U);
    msg.setSourceEntity(7U);
    msg.setDestination(4145U);
    msg.setDestinationEntity(174U);
    msg.timeout = 58261U;
    msg.lat = 0.21653081255321116;
    msg.lon = 0.9787754255862012;
    msg.z = 0.9449128584647494;
    msg.z_units = 35U;
    msg.speed = 0.5072584436734392;
    msg.speed_units = 228U;
    msg.duration = 59005U;
    msg.radius = 0.47423815441828165;
    msg.flags = 21U;
    msg.custom.assign("SDYUDXIKGZFZIYSGDURPLDEPICETVGSMIJDKAZXMTUCEWLGMGJYXYQPSQAEQOBNVCCOCMBLBKRNALJUEUHGANMVRYMWT");

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
    msg.setTimeStamp(0.5198198614392957);
    msg.setSource(14709U);
    msg.setSourceEntity(72U);
    msg.setDestination(46985U);
    msg.setDestinationEntity(78U);
    msg.timeout = 3856U;
    msg.lat = 0.5314173790374616;
    msg.lon = 0.06742957473631195;
    msg.z = 0.05876453537590409;
    msg.z_units = 220U;
    msg.speed = 0.004225747392508805;
    msg.speed_units = 54U;
    msg.duration = 6057U;
    msg.radius = 0.9370192179998921;
    msg.flags = 219U;
    msg.custom.assign("GKACKVNBDEAZINQQ");

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
    msg.setTimeStamp(0.2963940517385001);
    msg.setSource(52291U);
    msg.setSourceEntity(134U);
    msg.setDestination(43980U);
    msg.setDestinationEntity(224U);
    msg.timeout = 45016U;
    msg.lat = 0.6668161573316663;
    msg.lon = 0.6122730862578547;
    msg.z = 0.5772790328392726;
    msg.z_units = 197U;
    msg.speed = 0.4666487624631701;
    msg.speed_units = 154U;
    msg.duration = 14435U;
    msg.radius = 0.20314776837533977;
    msg.flags = 221U;
    msg.custom.assign("CARJHSQEOBPYVMSLFNQHFETUTJFMRYYPJUNVWGPCJJAKISYTFBEWGHVETCDGTKLCFJFRIQIRGZSOUBXDTOXGHAFWDPOQCWHXDWZKSABYQXZEKZEBFLBAVQOKWHRCKHRIBGLUMSGZJHXMMDIZTAWNXIETDDTUPPNPVLBURRQQSGYJQENVKMVKNEZVYEKJOODLMUBWONRMFCBNGLAXPIMULPXOACVHFUWYNXUPRSLMYOCXADZL");

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
    msg.setTimeStamp(0.03598577893923516);
    msg.setSource(17386U);
    msg.setSourceEntity(183U);
    msg.setDestination(60485U);
    msg.setDestinationEntity(62U);
    msg.custom.assign("EYOLPXIFABWZLRSOXNFCBWPJFUKLQMEVTLURTYBTPORGIMDDFWYJBHJIOPAJYXVEOLWJHGWAMQNUYMHEKKRDVZSRURFAZKXTKYQHYXQSENSHPCQVIGCTJHZKIQFHUEZBDNHISVCSVXXCVKBMYMXYXSABNSEZGAMWCFPJTBODJTNTAEU");

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
    msg.setTimeStamp(0.09793734239826979);
    msg.setSource(63230U);
    msg.setSourceEntity(194U);
    msg.setDestination(47394U);
    msg.setDestinationEntity(214U);
    msg.custom.assign("HYKEDSFBKRIALPUPDFQADCATKDYNOCAUECKZTCRPHQMJOTHRSMSMKSXVFALCYRWWJNTDFWIJMLGGJAHHOTPTRUYHYECGJIUTVCVZKQMJFXGXHFBNOPSXLTNWLIJWXUMZUMAZTUDLYABMTG");

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
    msg.setTimeStamp(0.34325156559830483);
    msg.setSource(48202U);
    msg.setSourceEntity(177U);
    msg.setDestination(5305U);
    msg.setDestinationEntity(219U);
    msg.custom.assign("WSJBVZXLCRVMJIVFHYNBTVRAEOIUWXCJDMJGCJDOIZNIBMKEKMFRFBOLZTHYUPGKLYDUTEGGVIBSDXROQYVBTFNKGHWUTLTXTDNOZDDHHZHBXAPPKYUPVSCIAYTQWWDVBFPCLXCNWQJPJUOWSRGSZAMZHZEXFHWAE");

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
    msg.setTimeStamp(0.39437687487757567);
    msg.setSource(15209U);
    msg.setSourceEntity(123U);
    msg.setDestination(16690U);
    msg.setDestinationEntity(101U);
    msg.timeout = 6105U;
    msg.lat = 0.14239065737609147;
    msg.lon = 0.7111943692456685;
    msg.z = 0.20655021771267057;
    msg.z_units = 166U;
    msg.duration = 56488U;
    msg.speed = 0.7340251465110541;
    msg.speed_units = 21U;
    msg.type = 29U;
    msg.radius = 0.2870691604852398;
    msg.length = 0.7220484173546303;
    msg.bearing = 0.4080499998257674;
    msg.direction = 65U;
    msg.custom.assign("FWFYDXFFEKEJAOZMKCKSVUQUYSFPBCTCUTOYCBDCSACXXVTLFRLJLNQCOODQLDEBOJKMMQHESWIINIRWOBGQDGVSOZBYZCQAU");

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
    msg.setTimeStamp(0.18313290246747216);
    msg.setSource(64053U);
    msg.setSourceEntity(135U);
    msg.setDestination(5531U);
    msg.setDestinationEntity(24U);
    msg.timeout = 39059U;
    msg.lat = 0.7763128801617244;
    msg.lon = 0.08508040957543972;
    msg.z = 0.12969725751166916;
    msg.z_units = 164U;
    msg.duration = 22663U;
    msg.speed = 0.22786479802512438;
    msg.speed_units = 16U;
    msg.type = 63U;
    msg.radius = 0.03842557625976628;
    msg.length = 0.6434485841615395;
    msg.bearing = 0.8174199910217973;
    msg.direction = 92U;
    msg.custom.assign("MLTTHNMKABLBGAXIAMRSAVOQIFPMRZFSQYJCYQCKZBKUOWXYBZQWIGSJCRVPORQTLNHDUANWJUDGLJHKEHKKRODGJMWFLSCQLOIFVQCMZESCHVPPZVJMFZRKSZQULBPAPTU");

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
    msg.setTimeStamp(0.014550844460146317);
    msg.setSource(52838U);
    msg.setSourceEntity(128U);
    msg.setDestination(3124U);
    msg.setDestinationEntity(178U);
    msg.timeout = 15009U;
    msg.lat = 0.8347842338210438;
    msg.lon = 0.4544962416187792;
    msg.z = 0.25846055913226895;
    msg.z_units = 193U;
    msg.duration = 39282U;
    msg.speed = 0.4265092991668191;
    msg.speed_units = 23U;
    msg.type = 246U;
    msg.radius = 0.02763069981436639;
    msg.length = 0.6177548775661545;
    msg.bearing = 0.3011407451274406;
    msg.direction = 2U;
    msg.custom.assign("KLHWDMXMZJJAHGNGPXRFVCODOCIHKAEGZPOGSZAMXVNZMMTBTJIHHORQITYQDWFYOPDIJFTXEQUBQAACEWARRQTJZRMLAZCQPLPUAJXDPNPSNRKWSUPJMIQPYXEKXSNYFYNEVGAVFKTLCBXKWVHWNOGUTUYGJESBIWLOJC");

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
    msg.setTimeStamp(0.14598387776738497);
    msg.setSource(14302U);
    msg.setSourceEntity(176U);
    msg.setDestination(4833U);
    msg.setDestinationEntity(232U);
    msg.duration = 59857U;
    msg.custom.assign("BORISYUNHLGMPSUDAKCZYSYUFUWDXAYFFGXDIBITZRTBFDEKZAECMHYCIMTQNLJGYBHDRXDOKOHCMSCKJPOPFHVYTSWVEGNRVVPTAQBFVLTYAJZLHEBGUSGJRIONMJQSCOKVNXBJIFOLDBIQNOLMCCHBKPLQTTEYJDXQQPWUZBFSMGSZXGMRSWPGQDRQNI");

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
    msg.setTimeStamp(0.7957903896449463);
    msg.setSource(33930U);
    msg.setSourceEntity(162U);
    msg.setDestination(2966U);
    msg.setDestinationEntity(95U);
    msg.duration = 50573U;
    msg.custom.assign("EMVHPIQRNDHKAVSSPLMCBEOCDGLPUWEDEXIEVKSAKXNQMLAQWMOCADMWBHTDNZEVBDIFMYYLDTGSZAYBXEZZRWAVRPG");

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
    msg.setTimeStamp(0.8277015467587951);
    msg.setSource(39925U);
    msg.setSourceEntity(94U);
    msg.setDestination(38237U);
    msg.setDestinationEntity(237U);
    msg.duration = 30237U;
    msg.custom.assign("XOUZLKYWMOSVOQKFWJAJKNPOYPNFMZSELUBOHRSFKKINIHDPSXQMZATYINPTZGVOEVUDLQQPQCASTUHVLSPVDFXDCYECVDQJLWOBYBROYJFFAKUGJFWRS");

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
    msg.setTimeStamp(0.6379369623446111);
    msg.setSource(18898U);
    msg.setSourceEntity(185U);
    msg.setDestination(403U);
    msg.setDestinationEntity(156U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5624667064983151;
    tmp_msg_0.speed_units = 242U;
    msg.control.set(tmp_msg_0);
    msg.duration = 38387U;
    msg.custom.assign("GYYEDOKFQQHBCRWPRBLEAORIJSDXZJYJBAVIJAOVDLYUEZWMRYQENIJQOVNKWKMFSCWCUZAFQUIFBIIXOVQULTFADYPUHNHQXAHBPIUODJKBTGCERPOTKXXGXKCVUSERNIGVTSBDYXRTTVLGYDFJKOKSNHFHMWSAFDCZJMWASGSNALHCHIFPQCBDVUXMZMLZOBXRRQCZDKXYNA");

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
    msg.setTimeStamp(0.06654111373604665);
    msg.setSource(53768U);
    msg.setSourceEntity(36U);
    msg.setDestination(6598U);
    msg.setDestinationEntity(192U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7978609334330202;
    msg.control.set(tmp_msg_0);
    msg.duration = 24610U;
    msg.custom.assign("NIERNVCTNIATMDOLXTJQSKWVLVKCDXOCXUUZXOOGYFPJCRKRETIAYZJPXHZKZPRZKGHQDTDLFUSITEAOIDSGHYMEMNMBBBWRIRESTECFSIKAJESRBWLEVYAUIZBNVQJQMFGPXZOKVAZYHFPJUSIZLBGJPTHUQDSLVPQXQWGQOPYPBDMGCVFJTFNVHNPAVGHRNADYFGXKDWYMCRNAUJSLWBNOXSWEFCHBWKWAIOHRCZQD");

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
    msg.setTimeStamp(0.3538403099777443);
    msg.setSource(27345U);
    msg.setSourceEntity(90U);
    msg.setDestination(36032U);
    msg.setDestinationEntity(180U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7882264333129787;
    tmp_msg_0.z_units = 251U;
    msg.control.set(tmp_msg_0);
    msg.duration = 57700U;
    msg.custom.assign("QVDBDAPHMNNFTOTZBUALQVVDHFPJBYCW");

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
    msg.setTimeStamp(0.6505563755110724);
    msg.setSource(46873U);
    msg.setSourceEntity(211U);
    msg.setDestination(20839U);
    msg.setDestinationEntity(234U);
    msg.timeout = 33342U;
    msg.lat = 0.4989534772605252;
    msg.lon = 0.5481806063983008;
    msg.z = 0.5636509159413756;
    msg.z_units = 140U;
    msg.speed = 0.4925288482929534;
    msg.speed_units = 122U;
    msg.bearing = 0.17640004804927834;
    msg.cross_angle = 0.9715461256703568;
    msg.width = 0.032767401516361816;
    msg.length = 0.2319852076667821;
    msg.hstep = 0.9830416855231348;
    msg.coff = 130U;
    msg.alternation = 236U;
    msg.flags = 244U;
    msg.custom.assign("WWAMFERTBXFVKZFROYPLJTUTSXIORKYBFYIUJLHGMILSWKLCPOYVDAXPFQSEOPFXBKCSUUXOYJGGUOSKDGVSMQXZZUDWVEBZGMAODTHZXJDMNTMNZTOOWXEULJTCVRRDQPOKRNNQYNGNUBGKNHIHTAVLAVJBCDWIWCCQRNEKCEBPPREYJXDSZLEDHFMPCIBIV");

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
    msg.setTimeStamp(0.4479222389146118);
    msg.setSource(64100U);
    msg.setSourceEntity(204U);
    msg.setDestination(54274U);
    msg.setDestinationEntity(149U);
    msg.timeout = 57799U;
    msg.lat = 0.2865194436505506;
    msg.lon = 0.47044311613382817;
    msg.z = 0.3710969755781355;
    msg.z_units = 10U;
    msg.speed = 0.9438455131682414;
    msg.speed_units = 31U;
    msg.bearing = 0.21126058601193876;
    msg.cross_angle = 0.0924442907755667;
    msg.width = 0.408086717758126;
    msg.length = 0.08422010412066239;
    msg.hstep = 0.38260542175323375;
    msg.coff = 45U;
    msg.alternation = 29U;
    msg.flags = 175U;
    msg.custom.assign("NFXQBLSMKUYTVHFBEWXGBJIWWUJYKEUJEKHJCBYGHWDNXIQEIRMXEKGHNQOTWCDGFLRYSPRZHTWYCJJKDGVIILFPRSQWIVAHRBLGAAXBOFNOFYMAQHUYZIZAX");

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
    msg.setTimeStamp(0.4740463225486927);
    msg.setSource(46902U);
    msg.setSourceEntity(163U);
    msg.setDestination(6142U);
    msg.setDestinationEntity(169U);
    msg.timeout = 7631U;
    msg.lat = 0.0014980113397263795;
    msg.lon = 0.7641190969435574;
    msg.z = 0.9132815422209867;
    msg.z_units = 32U;
    msg.speed = 0.6440948988848758;
    msg.speed_units = 124U;
    msg.bearing = 0.20303445158480093;
    msg.cross_angle = 0.5856227984577023;
    msg.width = 0.2336528162054735;
    msg.length = 0.039403954724423484;
    msg.hstep = 0.5314899810177394;
    msg.coff = 203U;
    msg.alternation = 154U;
    msg.flags = 158U;
    msg.custom.assign("XKPWNZYTXRTASMBDLZGFNJCUKNSHBKRLGBUDAKVGTEIVYWJSTX");

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
    msg.setTimeStamp(0.9126708701649839);
    msg.setSource(36076U);
    msg.setSourceEntity(4U);
    msg.setDestination(64033U);
    msg.setDestinationEntity(9U);
    msg.timeout = 18483U;
    msg.lat = 0.7853685818481577;
    msg.lon = 0.6410226973438329;
    msg.z = 0.10460523245276421;
    msg.z_units = 45U;
    msg.speed = 0.3093306786465265;
    msg.speed_units = 225U;
    msg.custom.assign("HHNDMBVRTVOS");

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
    msg.setTimeStamp(0.2420945463878963);
    msg.setSource(12633U);
    msg.setSourceEntity(118U);
    msg.setDestination(40538U);
    msg.setDestinationEntity(140U);
    msg.timeout = 59710U;
    msg.lat = 0.49406041387230193;
    msg.lon = 0.033077626347360334;
    msg.z = 0.2635090419501863;
    msg.z_units = 110U;
    msg.speed = 0.4844568550641716;
    msg.speed_units = 174U;
    msg.custom.assign("OWFWNWICZYVCBKRXGUZUFMBKQLZBENGXVDCZHKAUUDHVQMRATBLVENJTWZHIEDRSPDGHYXRHYNQRPMBXEYMOBIGDAJBKFOGZYHEUAULVGFYHXVWYRKVCOKYCTOJRAIWJTS");

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
    msg.setTimeStamp(0.4593912307316964);
    msg.setSource(19127U);
    msg.setSourceEntity(62U);
    msg.setDestination(45155U);
    msg.setDestinationEntity(49U);
    msg.timeout = 35758U;
    msg.lat = 0.6491698392772909;
    msg.lon = 0.5608811867308547;
    msg.z = 0.737936733970492;
    msg.z_units = 164U;
    msg.speed = 0.08684858657318961;
    msg.speed_units = 146U;
    msg.custom.assign("XWUVPDAZDKOUDFY");

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
    msg.setTimeStamp(0.8412247656884011);
    msg.setSource(34833U);
    msg.setSourceEntity(231U);
    msg.setDestination(31171U);
    msg.setDestinationEntity(107U);
    msg.x = 0.006345733067475545;
    msg.y = 0.6674207673025822;
    msg.z = 0.8617140729638034;

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
    msg.setTimeStamp(0.08078915962717403);
    msg.setSource(1322U);
    msg.setSourceEntity(176U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(62U);
    msg.x = 0.5349651219852726;
    msg.y = 0.9562094445345903;
    msg.z = 0.3737857128274412;

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
    msg.setTimeStamp(0.2662368182917161);
    msg.setSource(10835U);
    msg.setSourceEntity(209U);
    msg.setDestination(21149U);
    msg.setDestinationEntity(234U);
    msg.x = 0.8790712179921986;
    msg.y = 0.841563232688715;
    msg.z = 0.9491941145992887;

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
    msg.setTimeStamp(0.9684910574094915);
    msg.setSource(365U);
    msg.setSourceEntity(131U);
    msg.setDestination(58356U);
    msg.setDestinationEntity(72U);
    msg.timeout = 48407U;
    msg.lat = 0.23362926027334863;
    msg.lon = 0.544925916290622;
    msg.z = 0.6420129726654056;
    msg.z_units = 12U;
    msg.amplitude = 0.5571048631742646;
    msg.pitch = 0.5496079090286059;
    msg.speed = 0.4796916539766086;
    msg.speed_units = 213U;
    msg.custom.assign("FEDDMBCJONAZUFSVJDMKKNMFQBBRFLBCRADEYLRIXNXOWYTXOIQGVWZRNTGUNKHMHZSBQCFZIQJWQOZEHTPQPRAAMYLGMJTRFGHRYOGUPYXWNWYCISMYUD");

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
    msg.setTimeStamp(0.4214478829557442);
    msg.setSource(54752U);
    msg.setSourceEntity(52U);
    msg.setDestination(22842U);
    msg.setDestinationEntity(188U);
    msg.timeout = 57886U;
    msg.lat = 0.23612867389874215;
    msg.lon = 0.39294427685802535;
    msg.z = 0.46945852752166495;
    msg.z_units = 88U;
    msg.amplitude = 0.027044586460886144;
    msg.pitch = 0.6318068179404783;
    msg.speed = 0.21663327151353284;
    msg.speed_units = 63U;
    msg.custom.assign("TTFMIZBDWUOQRVWCBQNCUCDE");

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
    msg.setTimeStamp(0.752975762153683);
    msg.setSource(1867U);
    msg.setSourceEntity(96U);
    msg.setDestination(45546U);
    msg.setDestinationEntity(118U);
    msg.timeout = 6594U;
    msg.lat = 0.9877421169947467;
    msg.lon = 0.6692355141946708;
    msg.z = 0.08675386495274162;
    msg.z_units = 45U;
    msg.amplitude = 0.4084830200745534;
    msg.pitch = 0.9280811763209942;
    msg.speed = 0.6300170191605529;
    msg.speed_units = 102U;
    msg.custom.assign("UVNMCUBGXQPDIOCSJTWCDNMYQSDTRSGZGWOGXJZHIFVSMTYGVTNAGAOZHQEZFEGXQREERMLBCUICJVJYWZWONMCPKGOBEFHXARVCXZUJWFJRNDWFPJRDLHBMPAQSXOZIEGPSOMBDHDNQALETO");

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
    msg.setTimeStamp(0.8780838731559415);
    msg.setSource(1910U);
    msg.setSourceEntity(228U);
    msg.setDestination(48645U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.6303019525824172);
    msg.setSource(37521U);
    msg.setSourceEntity(2U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.18028791612486794);
    msg.setSource(7365U);
    msg.setSourceEntity(82U);
    msg.setDestination(14746U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.6076621569645352);
    msg.setSource(26292U);
    msg.setSourceEntity(188U);
    msg.setDestination(59956U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.9135071542085059;
    msg.lon = 0.908518049201325;
    msg.z = 0.17823132866398195;
    msg.z_units = 15U;
    msg.radius = 0.8734684191795333;
    msg.duration = 58052U;
    msg.speed = 0.04025943370646967;
    msg.speed_units = 28U;
    msg.custom.assign("VFDHAPDYEDPTYLLHUJFIKMHGCTQZLLAVAUJXKDWKICKSBJKLMOEERXUSKQLFSNGWIRWOFXBBMRSCPPHAEPOGLDPGNTJQHFQMYAXDIEQGWWYVJLQYKWYAINXZENVUPIBXGHDSRMRAKAEOPPZPIOYNGMXUJNFVOIAJEZQSHBVTUJEFRTDQTDZUHNIFVNW");

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
    msg.setTimeStamp(0.12332823764638468);
    msg.setSource(30951U);
    msg.setSourceEntity(241U);
    msg.setDestination(9848U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.7300072584578605;
    msg.lon = 0.41973537058131827;
    msg.z = 0.27918220725260645;
    msg.z_units = 142U;
    msg.radius = 0.3198559694158648;
    msg.duration = 5077U;
    msg.speed = 0.08697418283007352;
    msg.speed_units = 161U;
    msg.custom.assign("JMQGZZLTNEWNEWNFDKIMJMRSWCJBMHHERPYWRCGYAHTRVHIZAGQYFOQIOZLGVPCRQNEPXFUPASKYKOZWPAYTHVDKZD");

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
    msg.setTimeStamp(0.7329749160464396);
    msg.setSource(21124U);
    msg.setSourceEntity(158U);
    msg.setDestination(8422U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.8094392396592357;
    msg.lon = 0.7223506220134753;
    msg.z = 0.9857283465171973;
    msg.z_units = 25U;
    msg.radius = 0.8711512066032814;
    msg.duration = 1803U;
    msg.speed = 0.05805110190085383;
    msg.speed_units = 20U;
    msg.custom.assign("LJSRMBRXXNXCICOPBDEDGUMIS");

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
    msg.setTimeStamp(0.049347525478371845);
    msg.setSource(41422U);
    msg.setSourceEntity(30U);
    msg.setDestination(38995U);
    msg.setDestinationEntity(100U);
    msg.timeout = 43365U;
    msg.flags = 25U;
    msg.lat = 0.013330507239227685;
    msg.lon = 0.20676153315524326;
    msg.start_z = 0.7704619811908384;
    msg.start_z_units = 103U;
    msg.end_z = 0.7601219049280007;
    msg.end_z_units = 233U;
    msg.radius = 0.9156711617680949;
    msg.speed = 0.07360243816247747;
    msg.speed_units = 247U;
    msg.custom.assign("QLNWYBTKKACCQXPFPCYUQRNIJIEQIBOWOSMREHGFGCRBCJJPTGRIXPKEURBJKLDNTMXMESQOVYYHOFRSGIVNNODKAOXTAJWLRYAKGZBWCKEIRASNYCUCILXDOISDF");

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
    msg.setTimeStamp(0.7864844654025711);
    msg.setSource(54775U);
    msg.setSourceEntity(125U);
    msg.setDestination(28797U);
    msg.setDestinationEntity(159U);
    msg.timeout = 25227U;
    msg.flags = 4U;
    msg.lat = 0.38641716836284645;
    msg.lon = 0.3520297920634875;
    msg.start_z = 0.7800468591110243;
    msg.start_z_units = 90U;
    msg.end_z = 0.8976247058145604;
    msg.end_z_units = 66U;
    msg.radius = 0.3926200759599724;
    msg.speed = 0.19001143565162004;
    msg.speed_units = 88U;
    msg.custom.assign("YASLPHTMJSBZPFSZVBORIRVYJIUXDREYALJFLUQFNHZNGXSIZGOGQZRUSHWQANTKZKKZVNWJNAOHHXEWUPJUTAMOGGVBJASTYFFXLBLIDMRFYFWDPYLIBMPQCCRUPTNBEEDHDDSJITEMXIUTGZKCDXSAHYWZINEKEMDQAQGOWJTTNWBHKSWXGBVLVA");

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
    msg.setTimeStamp(0.88448443943726);
    msg.setSource(22447U);
    msg.setSourceEntity(118U);
    msg.setDestination(27478U);
    msg.setDestinationEntity(242U);
    msg.timeout = 41129U;
    msg.flags = 141U;
    msg.lat = 0.951070502795614;
    msg.lon = 0.735753678472438;
    msg.start_z = 0.3321753058022716;
    msg.start_z_units = 207U;
    msg.end_z = 0.2691731036954623;
    msg.end_z_units = 107U;
    msg.radius = 0.5906825038308787;
    msg.speed = 0.7528416585501159;
    msg.speed_units = 152U;
    msg.custom.assign("AIGHLTYWSCYKWSDHTIPIZSCFWQST");

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
    msg.setTimeStamp(0.47530485140414935);
    msg.setSource(21630U);
    msg.setSourceEntity(63U);
    msg.setDestination(42504U);
    msg.setDestinationEntity(154U);
    msg.timeout = 36302U;
    msg.lat = 0.9288949774619043;
    msg.lon = 0.12728896504594356;
    msg.z = 0.3923132409259349;
    msg.z_units = 222U;
    msg.speed = 0.12206898184979897;
    msg.speed_units = 109U;
    msg.custom.assign("RQJIVJHEYTTSSLDNULZBPVVBZQNSMHPZKBAAMUNGYVBNTYLZJIGGFSTEUPVULVCEJATZKOJOPCYWJGGSSQIGXWBBHTROMDOEHYXPMMNEOPZBQUQZEGSGWDIJWJLTDWMNRUBBJITKCHQFOFHKCQERKODLTIXSMDCRVNIUMBYFX");

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
    msg.setTimeStamp(0.7163175522703943);
    msg.setSource(24294U);
    msg.setSourceEntity(5U);
    msg.setDestination(7759U);
    msg.setDestinationEntity(186U);
    msg.timeout = 12125U;
    msg.lat = 0.5588117098379269;
    msg.lon = 0.5822410983529754;
    msg.z = 0.03429808687777902;
    msg.z_units = 126U;
    msg.speed = 0.8326327228168701;
    msg.speed_units = 56U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6596331273197028;
    tmp_msg_0.y = 0.48785036041054974;
    tmp_msg_0.z = 0.8625563341392072;
    tmp_msg_0.t = 0.4985092429439806;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ALWQPCDCINBZXLEINCUTYJPRPHFLIQSKVPYDZGBUAMKGSHBXHIXBVTDWUUDANBTYPIPDEWJWHQYOMVOMZPOWSFLKAFNAOFRGJOQYFYKUVLMYYMAGWMNTIDENCUUTRQFXZQJCYTJLAFEZ");

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
    msg.setTimeStamp(0.6154358579180549);
    msg.setSource(48831U);
    msg.setSourceEntity(137U);
    msg.setDestination(15920U);
    msg.setDestinationEntity(39U);
    msg.timeout = 7097U;
    msg.lat = 0.05601020489765729;
    msg.lon = 0.6500248557842186;
    msg.z = 0.037056374773965284;
    msg.z_units = 110U;
    msg.speed = 0.8544165586686069;
    msg.speed_units = 200U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9778648967565671;
    tmp_msg_0.y = 0.708862654249813;
    tmp_msg_0.z = 0.7212221736969135;
    tmp_msg_0.t = 0.7230518582514872;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XGZZLLCCENKYAIRIXGORIAWGETICCVFWUORDKZZZFWZYETMIFPUPSLUWHJQKTYSMAVRQTWFUZJSLCFBPFHHJGKWNQQDUAUPU");

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
    msg.setTimeStamp(0.7417774890168245);
    msg.setSource(62780U);
    msg.setSourceEntity(74U);
    msg.setDestination(59019U);
    msg.setDestinationEntity(43U);
    msg.x = 0.760839342232087;
    msg.y = 0.8944348781728028;
    msg.z = 0.17927947532439825;
    msg.t = 0.7388167764338878;

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
    msg.setTimeStamp(0.8027098781947075);
    msg.setSource(42650U);
    msg.setSourceEntity(234U);
    msg.setDestination(26072U);
    msg.setDestinationEntity(150U);
    msg.x = 0.4112579701832265;
    msg.y = 0.8924037057511839;
    msg.z = 0.5653504141869403;
    msg.t = 0.12958523401429067;

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
    msg.setTimeStamp(0.10102487007881444);
    msg.setSource(12637U);
    msg.setSourceEntity(168U);
    msg.setDestination(51869U);
    msg.setDestinationEntity(192U);
    msg.x = 0.06629018297350542;
    msg.y = 0.8784701025375398;
    msg.z = 0.31554768931300314;
    msg.t = 0.262995842108947;

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
    msg.setTimeStamp(0.9881090425752684);
    msg.setSource(3037U);
    msg.setSourceEntity(227U);
    msg.setDestination(50350U);
    msg.setDestinationEntity(197U);
    msg.timeout = 25307U;
    msg.name.assign("ZMTBDVSAXCPGZXQLWXHAVFTJVXBOV");
    msg.custom.assign("QUKNJHFXRXNWJRHOETVZELTUYLRMMJZWBEAPHIHIONCMKVZOSJQACLNSINFLPIGRZFQXSUWEHOMGRDPYTYFRPAIYZMTUPSDLKFGMF");

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
    msg.setTimeStamp(0.5436682162289634);
    msg.setSource(41630U);
    msg.setSourceEntity(196U);
    msg.setDestination(9305U);
    msg.setDestinationEntity(16U);
    msg.timeout = 1331U;
    msg.name.assign("AKTWMWVUXPEDCXLYUGDYXQUZWBTCHCDEGPOXAMKYICMJVQFEICTERQTSH");
    msg.custom.assign("AINWRMUYXTVGHFCNIWSSUOBSTGHSHVGYRQOQXHFIMXQBAPANWKHESGTSSSWOCDEDEPPOB");

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
    msg.setTimeStamp(0.1462443611258124);
    msg.setSource(53933U);
    msg.setSourceEntity(159U);
    msg.setDestination(21910U);
    msg.setDestinationEntity(217U);
    msg.timeout = 61732U;
    msg.name.assign("RCGIHTNKJYOJVDJEWEXRCKGIYYMSLICZSWSHSBCNXHTSWEDBGAOYCNGUIAHRTSGFGSQKTXOUTADNQKQMTVRUQMVWKJULBIALF");
    msg.custom.assign("SWWRTCCQPOOZMDEOROLSPHWAZJCNPTUOUMXZTLSHFPWDAFBOJVNEPOXGJTDKTVUQLIIUAJWYNDZZYXVLPPQJYDSTJKMSBOUJPUYBLYEZVNCTFXCUAQIVVYNBVKULLGRSIMNFAHSKGEEEKHGVRMBXECSKAXBXFFOBCCXBOWHQZWTHUHSIRAPGVNGHQTLURTRRFRVMIEGHCYLBCKGDEQSDXFXZLKQMDAYWGNIZEGWIAFFINJYNBIRMZJYQAQ");

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
    msg.setTimeStamp(0.6184641479254197);
    msg.setSource(59289U);
    msg.setSourceEntity(101U);
    msg.setDestination(46222U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.6611972637144528;
    msg.lon = 0.5266625057768884;
    msg.z = 0.2900238917436715;
    msg.z_units = 203U;
    msg.speed = 0.5356617821164067;
    msg.speed_units = 111U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3234878446548516;
    tmp_msg_0.y = 0.4949769857048406;
    tmp_msg_0.z = 0.3580628904489379;
    tmp_msg_0.t = 0.22235721878351855;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 26777U;
    tmp_msg_1.off_x = 0.7146652986914339;
    tmp_msg_1.off_y = 0.995350429481182;
    tmp_msg_1.off_z = 0.4869800887055732;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6793114230719915;
    msg.custom.assign("XOHTINXORTOLXFZADVNHWGPLXEXDTUZUKREDEPUFITBINHSZSYDOYMELQYSAWGUSJLLKYWQJHKNSPRZKARRQWAJGCNOSOEBBDOWQTXNMUMNOQLRJSXIVKHDPWJOTPKCBFCVITTJHYRFMIKXVNCKYBCDMZEQVBVFJUHGXTAMOFIVQUYGKLZZCCAMHSMAYCEFAWQSXPBIVJL");

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
    msg.setTimeStamp(0.6724168902809521);
    msg.setSource(23801U);
    msg.setSourceEntity(191U);
    msg.setDestination(42825U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.44080728834454763;
    msg.lon = 0.5635513041065143;
    msg.z = 0.8612640008041295;
    msg.z_units = 65U;
    msg.speed = 0.13021632016596163;
    msg.speed_units = 53U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4511541092671917;
    tmp_msg_0.y = 0.06708937962158179;
    tmp_msg_0.z = 0.6160181064481985;
    tmp_msg_0.t = 0.379605826061045;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 20679U;
    tmp_msg_1.off_x = 0.27408526954249424;
    tmp_msg_1.off_y = 0.08670300660888697;
    tmp_msg_1.off_z = 0.03298210199593621;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7906404268733238;
    msg.custom.assign("CPZKTSWWTBEFUANSSOQAWVPVLMNMIMXZZBZANTNJBDJBHVHLELUXTIJDRYBCPFLUOFVCRGONGLDNWPKHJHQDYOIHHDLFGDPSDQKPCXRFWAWKVKOWDEOSAYTRIOPZTIVIRNBGHDAQEKQWCH");

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
    msg.setTimeStamp(0.17649793205353648);
    msg.setSource(43803U);
    msg.setSourceEntity(239U);
    msg.setDestination(22571U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.30721298125025376;
    msg.lon = 0.7184954765986886;
    msg.z = 0.1935200252102084;
    msg.z_units = 195U;
    msg.speed = 0.9793745912614874;
    msg.speed_units = 247U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7833864087449668;
    tmp_msg_0.y = 0.9595182955255014;
    tmp_msg_0.z = 0.7936041592868436;
    tmp_msg_0.t = 0.37102120417432427;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 55630U;
    tmp_msg_1.off_x = 0.5068501950267301;
    tmp_msg_1.off_y = 0.06731868590321632;
    tmp_msg_1.off_z = 0.7655881389482281;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8346323052526065;
    msg.custom.assign("PTUWJJPZYW");

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
    msg.setTimeStamp(0.4906439629779732);
    msg.setSource(48600U);
    msg.setSourceEntity(239U);
    msg.setDestination(3132U);
    msg.setDestinationEntity(136U);
    msg.vid = 42962U;
    msg.off_x = 0.8825704802421249;
    msg.off_y = 0.0373355218864142;
    msg.off_z = 0.1281642801213546;

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
    msg.setTimeStamp(0.7740740174065597);
    msg.setSource(17234U);
    msg.setSourceEntity(91U);
    msg.setDestination(33115U);
    msg.setDestinationEntity(171U);
    msg.vid = 7554U;
    msg.off_x = 0.1394011374907499;
    msg.off_y = 0.7228229259964611;
    msg.off_z = 0.997466658806421;

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
    msg.setTimeStamp(0.9555141906931031);
    msg.setSource(44735U);
    msg.setSourceEntity(234U);
    msg.setDestination(41572U);
    msg.setDestinationEntity(70U);
    msg.vid = 59281U;
    msg.off_x = 0.8178034990492661;
    msg.off_y = 0.054810657632812676;
    msg.off_z = 0.3750040802769915;

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
    msg.setTimeStamp(0.5967440142033776);
    msg.setSource(41489U);
    msg.setSourceEntity(200U);
    msg.setDestination(62383U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.5206769483019463);
    msg.setSource(58683U);
    msg.setSourceEntity(132U);
    msg.setDestination(57182U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.3570991739874362);
    msg.setSource(38078U);
    msg.setSourceEntity(76U);
    msg.setDestination(8675U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.28109183959113215);
    msg.setSource(14384U);
    msg.setSourceEntity(5U);
    msg.setDestination(45618U);
    msg.setDestinationEntity(106U);
    msg.mid = 43537U;

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
    msg.setTimeStamp(0.6571325133851482);
    msg.setSource(1404U);
    msg.setSourceEntity(254U);
    msg.setDestination(7833U);
    msg.setDestinationEntity(85U);
    msg.mid = 6078U;

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
    msg.setTimeStamp(0.37878840016265614);
    msg.setSource(4314U);
    msg.setSourceEntity(8U);
    msg.setDestination(14559U);
    msg.setDestinationEntity(243U);
    msg.mid = 33557U;

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
    msg.setTimeStamp(0.5280432856006719);
    msg.setSource(60647U);
    msg.setSourceEntity(25U);
    msg.setDestination(30919U);
    msg.setDestinationEntity(182U);
    msg.state = 24U;
    msg.eta = 2003U;
    msg.info.assign("FEHIJFPWBMQNRDDBYLQDILURZNKIACZJQHVJVUZXZRYKJAGKETMYXWZSYIBDOTGLEINCYCLFJJSYCMTPXICPGLYAQTXFIMXMPSQXWLEOGVIBCVSOUKOWBEGFFFAWRHPTOEXVHRQEHGAWBDBOZEZBBKJU");

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
    msg.setTimeStamp(0.02504894812816838);
    msg.setSource(27952U);
    msg.setSourceEntity(138U);
    msg.setDestination(52424U);
    msg.setDestinationEntity(214U);
    msg.state = 9U;
    msg.eta = 62395U;
    msg.info.assign("XPCHAYGGPGIVFAUKYMDWRWOJBWTTPXHMLAKNETUERIQOKPAMIRMNXFZKCBIXJFIAQECXDREGVWCBJLJYOFAIPWMAJEDWRZCBCWGFPSMICFEBYVZXLSSHEHUCBVNXQVNPVDXXATLHWGSZROZKMJELHGLAHVQTUHRKS");

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
    msg.setTimeStamp(0.6014714307797973);
    msg.setSource(35669U);
    msg.setSourceEntity(216U);
    msg.setDestination(5323U);
    msg.setDestinationEntity(74U);
    msg.state = 102U;
    msg.eta = 32904U;
    msg.info.assign("ILVTNLANZZXWSVQMQLGNKYPQZFQARAJTDVBUWRRFHFXJDEBFLNXVQBFEGMCIMEWQJCSLHKTYEFPZGYZNCUSSPQUYEQUHYKTASRBCZMUHAGIFKOCLRAWVUQHDVTBNOPJIMXNXWWSXJHDDAGJE");

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
    msg.setTimeStamp(0.5242644918119646);
    msg.setSource(19276U);
    msg.setSourceEntity(44U);
    msg.setDestination(1462U);
    msg.setDestinationEntity(185U);
    msg.system = 11274U;
    msg.duration = 9732U;
    msg.speed = 0.90734947620114;
    msg.speed_units = 180U;
    msg.x = 0.3391437906103002;
    msg.y = 0.2751014515144612;
    msg.z = 0.5451684288797927;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.20434801108563627);
    msg.setSource(3324U);
    msg.setSourceEntity(47U);
    msg.setDestination(46138U);
    msg.setDestinationEntity(105U);
    msg.system = 61812U;
    msg.duration = 17074U;
    msg.speed = 0.7622661702239049;
    msg.speed_units = 131U;
    msg.x = 0.5711764655844106;
    msg.y = 0.43487351509613614;
    msg.z = 0.6922817138929361;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.16840282843067778);
    msg.setSource(55210U);
    msg.setSourceEntity(103U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(5U);
    msg.system = 64716U;
    msg.duration = 13916U;
    msg.speed = 0.7816674995352205;
    msg.speed_units = 28U;
    msg.x = 0.5484470286481896;
    msg.y = 0.8654567800737679;
    msg.z = 0.5854305212657873;
    msg.z_units = 137U;

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
    msg.setTimeStamp(0.9967362929598782);
    msg.setSource(36427U);
    msg.setSourceEntity(253U);
    msg.setDestination(48638U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.4143063195934945;
    msg.lon = 0.12859532656804595;
    msg.speed = 0.6932405480947945;
    msg.speed_units = 214U;
    msg.duration = 3981U;
    msg.sys_a = 1335U;
    msg.sys_b = 6462U;
    msg.move_threshold = 0.06423183199414206;

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
    msg.setTimeStamp(0.8051310301832626);
    msg.setSource(36609U);
    msg.setSourceEntity(127U);
    msg.setDestination(41667U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.02318860229132791;
    msg.lon = 0.43320203881568053;
    msg.speed = 0.5704454641081077;
    msg.speed_units = 103U;
    msg.duration = 54637U;
    msg.sys_a = 8079U;
    msg.sys_b = 29738U;
    msg.move_threshold = 0.008073466986378008;

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
    msg.setTimeStamp(0.399607513260274);
    msg.setSource(57399U);
    msg.setSourceEntity(71U);
    msg.setDestination(21249U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.42423088176273716;
    msg.lon = 0.32918499770694964;
    msg.speed = 0.848179985031204;
    msg.speed_units = 215U;
    msg.duration = 34854U;
    msg.sys_a = 53429U;
    msg.sys_b = 4637U;
    msg.move_threshold = 0.5427398531592347;

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
    msg.setTimeStamp(0.36270409706949813);
    msg.setSource(32284U);
    msg.setSourceEntity(2U);
    msg.setDestination(30959U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.2818566789665574;
    msg.lon = 0.2630819155088404;
    msg.z = 0.0017301863076885082;
    msg.z_units = 31U;
    msg.speed = 0.46083094404287517;
    msg.speed_units = 238U;
    msg.custom.assign("QZCKECWVMUVFRPVFLSFBGEQKJKCSNFABVQQLUEXYQYFNMVAXJNMPMISRZKTFWWOCJMPNZOWRANFVOTNBZHLDEJGKYLHHEGFBSWZAJGTGIJPYMPIDEDPSYTBYSZASBHLIMTXOVSLCDHLTQWRJVQNZFJIDTGSOTMXHKNEOPMRKBHOHBUUZRBUFMRACXZCTWAANCGLPSRJOKUIHBYIGXROZCGILAKUE");

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
    msg.setTimeStamp(0.4428203653145366);
    msg.setSource(44713U);
    msg.setSourceEntity(131U);
    msg.setDestination(36155U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.726330876517826;
    msg.lon = 0.21235352292555087;
    msg.z = 0.9569423781038096;
    msg.z_units = 214U;
    msg.speed = 0.49487214048323835;
    msg.speed_units = 239U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2114663982499233;
    tmp_msg_0.lon = 0.15855937344587034;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KMOCXCIYTAUNDYWQPSWHQAGVMYQTSVOPMTBFPZOMXTUNEXMTZPTDPAEKVLBAWDMPVQKROZHTUIQSQJLWANYCOSGRDAEHHSBXNYAZUZJPHWOSUJGNQBNMUAHDXUVLFERILRJPJXHIKEYIYIZLNXONARURBROKGIVGRFFLFVBCLBGFFTYGTIQZCHEXKJXEWMLXBHLAZU");

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
    msg.setTimeStamp(0.24357860940569942);
    msg.setSource(17568U);
    msg.setSourceEntity(99U);
    msg.setDestination(37500U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.8726837820207233;
    msg.lon = 0.47572938767383155;
    msg.z = 0.29725440856171936;
    msg.z_units = 174U;
    msg.speed = 0.9460411479366039;
    msg.speed_units = 46U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.42133953867180507;
    tmp_msg_0.lon = 0.23481463421631876;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TEXNPONDEJAIRFZPWPZHJXOUDIZOZLDHQSQXULYHMCQDOFMFVRBIOLLINNUSTCGXDBYWKQHPRJGZBUUXBCAGJXQRERKOQCXMZEKZMCPRMUSLKEIVSSFVEBNNOLMNDETJCPWCIYCWTVFMBGGQVAMNYBFUKRKHPXKFLJFAMTFNBIESTACS");

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
    msg.setTimeStamp(0.28074081857710664);
    msg.setSource(21267U);
    msg.setSourceEntity(135U);
    msg.setDestination(61934U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.49209783122619377;
    msg.lon = 0.40537564676734195;

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
    msg.setTimeStamp(0.17476726098208806);
    msg.setSource(41577U);
    msg.setSourceEntity(8U);
    msg.setDestination(56802U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.040337324109857686;
    msg.lon = 0.7665621151377738;

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
    msg.setTimeStamp(0.3076413701696117);
    msg.setSource(15944U);
    msg.setSourceEntity(229U);
    msg.setDestination(39994U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.6144352975984918;
    msg.lon = 0.7861643350486207;

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
    msg.setTimeStamp(0.07770609220894598);
    msg.setSource(59124U);
    msg.setSourceEntity(67U);
    msg.setDestination(12763U);
    msg.setDestinationEntity(157U);
    msg.timeout = 23052U;
    msg.lat = 0.6830710222277341;
    msg.lon = 0.13049908568138346;
    msg.z = 0.04024868103453039;
    msg.z_units = 114U;
    msg.pitch = 0.43607698723822497;
    msg.amplitude = 0.49665297051634183;
    msg.duration = 42633U;
    msg.speed = 0.7359788512331079;
    msg.speed_units = 220U;
    msg.radius = 0.21033416932937687;
    msg.direction = 178U;
    msg.custom.assign("WUIHSYIQRFFRYULTNCCVHVHAAWKCIM");

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
    msg.setTimeStamp(0.2721453641863306);
    msg.setSource(12379U);
    msg.setSourceEntity(40U);
    msg.setDestination(57828U);
    msg.setDestinationEntity(103U);
    msg.timeout = 751U;
    msg.lat = 0.0967750062151358;
    msg.lon = 0.5333101956294493;
    msg.z = 0.13979890517791405;
    msg.z_units = 91U;
    msg.pitch = 0.08074478386715456;
    msg.amplitude = 0.03227242963070165;
    msg.duration = 29097U;
    msg.speed = 0.2627558891330224;
    msg.speed_units = 88U;
    msg.radius = 0.520487036103044;
    msg.direction = 6U;
    msg.custom.assign("LRFEZHGOGRAVITRUKYOQYLDKLJJQMHRRMQXPTGPEBFDLCYVAEZTHJBCLSGRHCFLSOJKNLZHNXAQFDMOXDKYMKDYCTSWASAZQOWMJPQKGPCHEZRTPUGHPDSIEUJNBWXGENSAFXBLWTMVNWECFOAHUZTQQKWXIBZWIUNMM");

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
    msg.setTimeStamp(0.140948026649112);
    msg.setSource(53160U);
    msg.setSourceEntity(52U);
    msg.setDestination(60340U);
    msg.setDestinationEntity(71U);
    msg.timeout = 20447U;
    msg.lat = 0.9722191042557563;
    msg.lon = 0.7308698427333151;
    msg.z = 0.5406679223552489;
    msg.z_units = 8U;
    msg.pitch = 0.353199216687743;
    msg.amplitude = 0.5765826638908091;
    msg.duration = 16988U;
    msg.speed = 0.7681875095981704;
    msg.speed_units = 46U;
    msg.radius = 0.20114821079706957;
    msg.direction = 247U;
    msg.custom.assign("GCAYWUYLNBCQWIPDHRJGQGCEMSKMJLUDZBRTQK");

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
    msg.setTimeStamp(0.3476864847849441);
    msg.setSource(42775U);
    msg.setSourceEntity(100U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(116U);
    msg.formation_name.assign("QVAJXINCAAXGAGYRLBKIWVDRDHUGCIXMOOJMSBFPQYSEIWJNHHJIUENPLXPTRMCXLEPLDRWFJGBSDHRBKDJGTIEWGLJEO");
    msg.reference_frame = 139U;
    msg.custom.assign("BJNKXAGCJPZLYNAIPCJYMFMQUJZGOWPXVAIEJGZESXUJZGNPXRQQTBAIROHELKMFONEWSWHQADZRYJNTUUVBOPITVKCWKEVWHUWTHCCFFKZTQUIMXUPYHSFYBQHQXYWRC");

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
    msg.setTimeStamp(0.6540433911678548);
    msg.setSource(62031U);
    msg.setSourceEntity(81U);
    msg.setDestination(38523U);
    msg.setDestinationEntity(44U);
    msg.formation_name.assign("VNEYHIZHDLULBATWCTVQC");
    msg.reference_frame = 21U;
    msg.custom.assign("OJGDIZFXOCYMDAYNJTDSURSBDPJTYOPSCYARVXBNZWWBPETGFLNPFVIFVLMYXNEQHGNEKLZXGAKIATVHCXRZHCKEDDCPSOOOAUVGQZPTCEMHNUEROVVFWNCSMFDSGYORIKMJGRWQBPQYOTLKXMZJULPTRWPMIBABZCTIAAUXHWIDXNQQNBHYMCKIUIGZZWEQYXVWMHCBDFFSTUEFJAENRU");

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
    msg.setTimeStamp(0.5178121628372724);
    msg.setSource(4277U);
    msg.setSourceEntity(129U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("AWLTPCGXMXUTOWZGVHBZUFBZTSIDGRSCTDKEFOUFRIMWJKXUYCDLNNVDUHXWDYYGLAZSAVEOVHURVHAKKXVRTEWQDCLFQBNUEMNKKLBBKEUZNAJAFNQIJROCSQISQCLQMUCYDBPMLEWEZYNFGJBIDBACWTOQCAJXDJMMNOHZSHJPKXSIWIGTYHSIGQVFPPXNMZMDNGJKLXEZRTXAPVQYFRSIWWRIJHBGYFUOOJEPRKOPHORGMCAVPQEYYBLPVZ");
    msg.reference_frame = 237U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11125U;
    tmp_msg_0.off_x = 0.7691003384466315;
    tmp_msg_0.off_y = 0.8711798051391363;
    tmp_msg_0.off_z = 0.14581841377475502;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HTDMUAMSVETYCSMQUBTGHDVFPFFTBAQSHJUXKVOAKOYVAWCLOUGSDLHJIAUZYPZWJMGBDPOCXKZZTQNKSHZRLSIPITZOWKESXFTXZYQUGRIEBVLNIRGGLO");

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
    msg.setTimeStamp(0.5236057639820997);
    msg.setSource(10343U);
    msg.setSourceEntity(9U);
    msg.setDestination(16270U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("UGMUWJUTFWTJITSBMLFHHGACZZQVVZNCIKPVPAALDOPBSRAFIMXDHNGTWRZRSALNKNAPXYARUHJKBECOKMDGXWWSMOUWJJLBH");
    msg.formation_name.assign("RGZNXMDOXAQNSZRNFBRFZCGROPICBWSXVHLYLSJQKTDPF");
    msg.plan_id.assign("XFSDJQIQXMBOAXCWCSTVHHROVUZLGMILKTRWTGOVSTGRCHWIEOOCVSLSNUNKZKBMCVPBVJYIADIXMHTPEYVQUKJHYPDENTBWCPEMCIEFLNQGCHIZLWHDZXPJALOQIVUJQADPYASDHMKDLKVFJNGDLMJZLPWHXUBQYTRBKTACQNIBRQ");
    msg.description.assign("DAFDHVVQZTLGKDMQDRLYDRFUGIAVVFESXYAJREXUXVDCRNKVTKMHPPFOCLXHAKDYMTRHZSXHGBZNJEIHVTNNOAKHVQCRFMCETLSPOIXFZHXKIUIEFWSGGYNZZKUWMQBLXPTPQPLGULQJRYMJWDSDJKTYQWJJCG");
    msg.leader_speed = 0.8760810782469268;
    msg.leader_bank_lim = 0.413092771275011;
    msg.pos_sim_err_lim = 0.07106143339500337;
    msg.pos_sim_err_wrn = 0.623698410875075;
    msg.pos_sim_err_timeout = 35453U;
    msg.converg_max = 0.16818091203087593;
    msg.converg_timeout = 64913U;
    msg.comms_timeout = 60358U;
    msg.turb_lim = 0.9750399128439597;
    msg.custom.assign("EWQCGTARNVWIWZLAGVPEERYQLOCSPZTSNIEFGXZLVTFBAOSGZYMRPVJBRRHBHOOINYSFHZXFAZSABDDFWAHXULONDHPP");

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
    msg.setTimeStamp(0.32215292723952693);
    msg.setSource(49720U);
    msg.setSourceEntity(3U);
    msg.setDestination(5652U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("KCQICWKNJVBXTCVZALOBSKDGOGDBCXFTSHNDQOSYRZYTRXPQSNIETVHNVEEXCGPMZYDBXIPSJZLETHRVMJMPRUFGAYXXEFOZFOYLEUDSWUNILJOHKBJGQTCRLBVFVAONWWMSTIJOZFECKRGZYOUJWNSTISYLIEXQBILCBZKQPGPFPYEWRHETUPUMJQFDGNXMYLXUKWDOBWDKBAAMVWUAKMMQUHLYHQHNLJTPVAMCGRWHDKDZRRCHG");
    msg.formation_name.assign("OXKQTCWNDFYFJNAUVHJQTRNCKLBTNVRUBPEPIELKWKZDPCLN");
    msg.plan_id.assign("LJCOCAELPNTEPVRDIUOTTIAQZXKDROYIXTKXJMQICFLBZQLXBULJIAGKYVTRTMDNJUTDTFQJBSQSEPIAVVFWPKNMQYCMXXYTNZJOGPBURWCGHGPBSFQSOLCFQMAQFWAYBYUVRAZDZDPRKZNTUONRELNMNOHXBKEVFCVCVKGLHVDKFIBHEWCMRHG");
    msg.description.assign("COJOYXHZKLNMQJHYQCDOAWPPMKCEBSFWMGRBGVIBLRPEDYHFGJYVZDSRVDZBVAKMGHIBYUUVLGRCJICTMJXBKGNUDILVJAUGUWREBOSSKFTBHFCQSF");
    msg.leader_speed = 0.1903127821122541;
    msg.leader_bank_lim = 0.0526732270428949;
    msg.pos_sim_err_lim = 0.2116332742729069;
    msg.pos_sim_err_wrn = 0.02523330096206422;
    msg.pos_sim_err_timeout = 485U;
    msg.converg_max = 0.6551188606678998;
    msg.converg_timeout = 25232U;
    msg.comms_timeout = 25255U;
    msg.turb_lim = 0.46587502719863116;
    msg.custom.assign("FEAHHXSURTAKTMLEU");

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
    msg.setTimeStamp(0.8509116926385462);
    msg.setSource(59567U);
    msg.setSourceEntity(223U);
    msg.setDestination(28575U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("XQFPBYEVQKBQQUITFFZIKFRBMOZSAAESHWYXZNGPJIGMKXQDHSQLLPYWKCDCMONEVLNAHZQNPTSEMEUPVHXLTMPOBDVDVKIXGSAHIBMZKMNSVW");
    msg.formation_name.assign("LRUAVQNHWCKVIMGQFGLDVPDDFDZRBKOMDBHGTLTKURHSNXSJSHJWUNBHZVANZJKXCTDUXYZQJCBCKQXUYPNFVINEUVZRDLPXOXSMPRWATKOXEPSJOZPJBMWYJEEGGNCZEQIBPRFDTF");
    msg.plan_id.assign("RLXBBVOQKVZXRKYOEACYNLEFLMPBMDOPOPSAHCJJXGYDTPKCQMUMKKQNEYWHYPOWSKNUERNZCSJGVFRZZICTTMGUOUVWJGFQPSHNH");
    msg.description.assign("VSSEPXZOWAYQAICYZFIPIPUSBTVTEDTNNOAWJQVAJHFKTHZLGQHAPIRSSBAWPDDOCDRPJHMVVVJQQDXRKAVYEUTWKFYBNOFCVGCCNBJOJFRODYEAJHURUZBXHWBKGIQOQIVQIZSHZWBXERQTJLFNUUGGRWWPMGKMLKXENPTNMLKITGAMMWILYYLZGFWPFMGTCTUSNXXKDGONEHXKRMICRZRMBAEMLUDELYCCLVUOFLSXZDZHQJNYXOJY");
    msg.leader_speed = 0.38306178356273657;
    msg.leader_bank_lim = 0.48819351708875214;
    msg.pos_sim_err_lim = 0.09843848710894165;
    msg.pos_sim_err_wrn = 0.1528426690095953;
    msg.pos_sim_err_timeout = 31907U;
    msg.converg_max = 0.4697070215171597;
    msg.converg_timeout = 11797U;
    msg.comms_timeout = 60265U;
    msg.turb_lim = 0.23330699251063014;
    msg.custom.assign("JKQFEDASTOGOHSIENTCXHFYKKIBAQPCTNOLLDEKDCEFDERONJPTBNUFYFBVBUXALMSNJFWWAROLVEZSMCHWHBAREFJKXGWYRJTGGOSGXJMXKUGLYPSWZJJKCBUUMGREBISVVRIHXEDZLXCZBIASNV");

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
    msg.setTimeStamp(0.8012148919489486);
    msg.setSource(36740U);
    msg.setSourceEntity(96U);
    msg.setDestination(6534U);
    msg.setDestinationEntity(226U);
    msg.control_src = 29529U;
    msg.control_ent = 251U;
    msg.timeout = 0.8997486122902592;
    msg.loiter_radius = 0.6109308446577533;
    msg.altitude_interval = 0.6166115909593542;

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
    msg.setTimeStamp(0.7906158716771797);
    msg.setSource(4118U);
    msg.setSourceEntity(230U);
    msg.setDestination(23299U);
    msg.setDestinationEntity(138U);
    msg.control_src = 23017U;
    msg.control_ent = 183U;
    msg.timeout = 0.9373659687047201;
    msg.loiter_radius = 0.1893165085403874;
    msg.altitude_interval = 0.08577440173262507;

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
    msg.setTimeStamp(0.9584085970077675);
    msg.setSource(26485U);
    msg.setSourceEntity(164U);
    msg.setDestination(21042U);
    msg.setDestinationEntity(193U);
    msg.control_src = 21618U;
    msg.control_ent = 22U;
    msg.timeout = 0.9137997284375933;
    msg.loiter_radius = 0.7614253192215892;
    msg.altitude_interval = 0.43820752040212785;

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
    msg.setTimeStamp(0.8870843942157829);
    msg.setSource(39415U);
    msg.setSourceEntity(169U);
    msg.setDestination(40597U);
    msg.setDestinationEntity(4U);
    msg.flags = 118U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20797021735488008;
    tmp_msg_0.speed_units = 60U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.22920858073625205;
    tmp_msg_1.z_units = 85U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6894335012203383;
    msg.lon = 0.6494846051584434;
    msg.radius = 0.5846834983485261;

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
    msg.setTimeStamp(0.8609410558090712);
    msg.setSource(55235U);
    msg.setSourceEntity(77U);
    msg.setDestination(64426U);
    msg.setDestinationEntity(13U);
    msg.flags = 87U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.43406028880180336;
    tmp_msg_0.speed_units = 115U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1811162864313849;
    tmp_msg_1.z_units = 154U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.45311203713764014;
    msg.lon = 0.6868050238089493;
    msg.radius = 0.464983292999782;

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
    msg.setTimeStamp(0.3045141441134287);
    msg.setSource(47737U);
    msg.setSourceEntity(45U);
    msg.setDestination(20196U);
    msg.setDestinationEntity(40U);
    msg.flags = 202U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.020571702148598492;
    tmp_msg_0.speed_units = 4U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2155995672532678;
    tmp_msg_1.z_units = 208U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.25391485367135713;
    msg.lon = 0.8322448236223493;
    msg.radius = 0.7431382400164852;

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
    msg.setTimeStamp(0.5280456056399807);
    msg.setSource(60838U);
    msg.setSourceEntity(84U);
    msg.setDestination(48050U);
    msg.setDestinationEntity(249U);
    msg.control_src = 45990U;
    msg.control_ent = 43U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 171U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2857453148518202;
    tmp_tmp_msg_0_0.speed_units = 67U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4780923132749635;
    tmp_tmp_msg_0_1.z_units = 109U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3683044486211713;
    tmp_msg_0.lon = 0.27842750750236034;
    tmp_msg_0.radius = 0.44098693363190533;
    msg.reference.set(tmp_msg_0);
    msg.state = 175U;
    msg.proximity = 82U;

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
    msg.setTimeStamp(0.6829115975320716);
    msg.setSource(19657U);
    msg.setSourceEntity(73U);
    msg.setDestination(3685U);
    msg.setDestinationEntity(104U);
    msg.control_src = 62803U;
    msg.control_ent = 77U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 35U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.43788595984747336;
    tmp_tmp_msg_0_0.speed_units = 21U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3957842300951029;
    tmp_tmp_msg_0_1.z_units = 106U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7195684691510611;
    tmp_msg_0.lon = 0.4875616236541169;
    tmp_msg_0.radius = 0.7625711152024134;
    msg.reference.set(tmp_msg_0);
    msg.state = 44U;
    msg.proximity = 112U;

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
    msg.setTimeStamp(0.41014714439185407);
    msg.setSource(65135U);
    msg.setSourceEntity(62U);
    msg.setDestination(51172U);
    msg.setDestinationEntity(222U);
    msg.control_src = 42424U;
    msg.control_ent = 227U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 65U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9146438137143494;
    tmp_tmp_msg_0_0.speed_units = 150U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8416969002940932;
    tmp_tmp_msg_0_1.z_units = 16U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5789914049130507;
    tmp_msg_0.lon = 0.259288360841176;
    tmp_msg_0.radius = 0.9873738268501511;
    msg.reference.set(tmp_msg_0);
    msg.state = 42U;
    msg.proximity = 54U;

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
    msg.setTimeStamp(0.29393902656747695);
    msg.setSource(60192U);
    msg.setSourceEntity(84U);
    msg.setDestination(54882U);
    msg.setDestinationEntity(183U);
    msg.ax_cmd = 0.3169773038344301;
    msg.ay_cmd = 0.7377463033775197;
    msg.az_cmd = 0.17580545914236445;
    msg.ax_des = 0.10631017682144728;
    msg.ay_des = 0.44921976631002536;
    msg.az_des = 0.6872257856785771;
    msg.virt_err_x = 0.7918202889751093;
    msg.virt_err_y = 0.7378385148866958;
    msg.virt_err_z = 0.34785832853919607;
    msg.surf_fdbk_x = 0.7038396538113573;
    msg.surf_fdbk_y = 0.47356480559159686;
    msg.surf_fdbk_z = 0.994143643070869;
    msg.surf_unkn_x = 0.5396055977521232;
    msg.surf_unkn_y = 0.7597470082748917;
    msg.surf_unkn_z = 0.3760061452642012;
    msg.ss_x = 0.7000783454438181;
    msg.ss_y = 0.8285005981277563;
    msg.ss_z = 0.8607464188730103;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LNLXVHJTGZENGOQHHTEVOGHCEVISHITTJXJVABNCNCWXQYVKPSQCJFAOUGTQKTHMLPRFZBRATYUUNZGLBMOCURLSWEFSKFOXB");
    tmp_msg_0.dist = 0.1924690866048273;
    tmp_msg_0.err = 0.47699271603036353;
    tmp_msg_0.ctrl_imp = 0.44546627423713936;
    tmp_msg_0.rel_dir_x = 0.6050004422212923;
    tmp_msg_0.rel_dir_y = 0.38391845553227255;
    tmp_msg_0.rel_dir_z = 0.5979932429497953;
    tmp_msg_0.err_x = 0.04286159910486198;
    tmp_msg_0.err_y = 0.009832489730005278;
    tmp_msg_0.err_z = 0.7744367933855872;
    tmp_msg_0.rf_err_x = 0.08034462826618216;
    tmp_msg_0.rf_err_y = 0.19001924075710686;
    tmp_msg_0.rf_err_z = 0.28848179139371444;
    tmp_msg_0.rf_err_vx = 0.2544534010340238;
    tmp_msg_0.rf_err_vy = 0.2198764602351012;
    tmp_msg_0.rf_err_vz = 0.7404011698786476;
    tmp_msg_0.ss_x = 0.01898488621819494;
    tmp_msg_0.ss_y = 0.4321823556130602;
    tmp_msg_0.ss_z = 0.1890852072378686;
    tmp_msg_0.virt_err_x = 0.8774194349466881;
    tmp_msg_0.virt_err_y = 0.9407312872301898;
    tmp_msg_0.virt_err_z = 0.7100657846059842;
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
    msg.setTimeStamp(0.9851914033015958);
    msg.setSource(20335U);
    msg.setSourceEntity(16U);
    msg.setDestination(29774U);
    msg.setDestinationEntity(83U);
    msg.ax_cmd = 0.19008875042978302;
    msg.ay_cmd = 0.05262433258087762;
    msg.az_cmd = 0.23649251741673094;
    msg.ax_des = 0.5392650828960021;
    msg.ay_des = 0.13744022712736192;
    msg.az_des = 0.6037721148842123;
    msg.virt_err_x = 0.24737435429832488;
    msg.virt_err_y = 0.6939589168763944;
    msg.virt_err_z = 0.7144803347953435;
    msg.surf_fdbk_x = 0.20142515704368358;
    msg.surf_fdbk_y = 0.6946135100475502;
    msg.surf_fdbk_z = 0.29308559403349554;
    msg.surf_unkn_x = 0.1124134079889213;
    msg.surf_unkn_y = 0.7963452596078485;
    msg.surf_unkn_z = 0.042849419411124634;
    msg.ss_x = 0.030312041523353428;
    msg.ss_y = 0.0669210125737123;
    msg.ss_z = 0.5695242310721269;

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
    msg.setTimeStamp(0.07326098922287128);
    msg.setSource(37312U);
    msg.setSourceEntity(197U);
    msg.setDestination(24328U);
    msg.setDestinationEntity(106U);
    msg.ax_cmd = 0.990083651387458;
    msg.ay_cmd = 0.9422326365988195;
    msg.az_cmd = 0.14284520608416906;
    msg.ax_des = 0.21429465337418963;
    msg.ay_des = 0.6106249915386254;
    msg.az_des = 0.6532891118387029;
    msg.virt_err_x = 0.03493550340488072;
    msg.virt_err_y = 0.7170934494284953;
    msg.virt_err_z = 0.2467316902263207;
    msg.surf_fdbk_x = 0.5697424658802563;
    msg.surf_fdbk_y = 0.2514552561837071;
    msg.surf_fdbk_z = 0.8401757911614347;
    msg.surf_unkn_x = 0.903830519280234;
    msg.surf_unkn_y = 0.42260737283171457;
    msg.surf_unkn_z = 0.6593305549729025;
    msg.ss_x = 0.22143951116040061;
    msg.ss_y = 0.8884550141198847;
    msg.ss_z = 0.5579176226045502;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RFOMZRYCBTFWTODEHMDSIJKYXYKGLQEGBXAVGYTRNLIPARHKSKPUVQSAQJGWDEVELDZKZSVXJIWNZGPYZREVHPBPBBRTNZQRLILXCIAKRGCCQFDONJNWHSFAXKANPUDPSFABEVVMIMSFFZKUNOMSDLIQDMTCWOSOFHTXZEEXXXZUHWIEOBQVOGUJBKTREMTNUCCJQHDQHYBUAOKNYUTAUJWYFMCLUGPAGJLCDQXMTIOFNLPWC");
    tmp_msg_0.dist = 0.7346695817886909;
    tmp_msg_0.err = 0.09152955644899652;
    tmp_msg_0.ctrl_imp = 0.7743285082960913;
    tmp_msg_0.rel_dir_x = 0.7278597970432564;
    tmp_msg_0.rel_dir_y = 0.08994002801010625;
    tmp_msg_0.rel_dir_z = 0.2517668627260552;
    tmp_msg_0.err_x = 0.5773275983895543;
    tmp_msg_0.err_y = 0.9080959236838795;
    tmp_msg_0.err_z = 0.6590985765951263;
    tmp_msg_0.rf_err_x = 0.867800900418031;
    tmp_msg_0.rf_err_y = 0.9592892401535125;
    tmp_msg_0.rf_err_z = 0.302328590383395;
    tmp_msg_0.rf_err_vx = 0.9984383789463912;
    tmp_msg_0.rf_err_vy = 0.6415989819538007;
    tmp_msg_0.rf_err_vz = 0.5653358691828969;
    tmp_msg_0.ss_x = 0.8501688192587163;
    tmp_msg_0.ss_y = 0.16410361547468444;
    tmp_msg_0.ss_z = 0.9501377713499201;
    tmp_msg_0.virt_err_x = 0.22220421868477547;
    tmp_msg_0.virt_err_y = 0.6949048263359568;
    tmp_msg_0.virt_err_z = 0.9267297715204894;
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
    msg.setTimeStamp(0.5825814330026177);
    msg.setSource(7499U);
    msg.setSourceEntity(101U);
    msg.setDestination(62072U);
    msg.setDestinationEntity(163U);
    msg.s_id.assign("IETMHYMHCICMZOVTEWDRISRTAPWDXJXOJXZZSNGIQIFVGVRSOKCVHIVOUKEGDIBBNRAQDJCUVYSQCWVPAQEAFFQSEEMUXSRBL");
    msg.dist = 0.9986219277937856;
    msg.err = 0.5323799327020166;
    msg.ctrl_imp = 0.042753399544865234;
    msg.rel_dir_x = 0.7641419763778277;
    msg.rel_dir_y = 0.27011212268643303;
    msg.rel_dir_z = 0.011079990561860265;
    msg.err_x = 0.36164970337293334;
    msg.err_y = 0.17835554631861972;
    msg.err_z = 0.9339548429852707;
    msg.rf_err_x = 0.23845326431395353;
    msg.rf_err_y = 0.8242945068076478;
    msg.rf_err_z = 0.19426453617146378;
    msg.rf_err_vx = 0.4221292432105819;
    msg.rf_err_vy = 0.5751531573235174;
    msg.rf_err_vz = 0.9877839510621584;
    msg.ss_x = 0.4320298884787026;
    msg.ss_y = 0.6609662503911238;
    msg.ss_z = 0.4877848658234556;
    msg.virt_err_x = 0.16351231454903892;
    msg.virt_err_y = 0.4443873221136099;
    msg.virt_err_z = 0.46833472142947474;

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
    msg.setTimeStamp(0.2680582654330391);
    msg.setSource(9218U);
    msg.setSourceEntity(213U);
    msg.setDestination(26041U);
    msg.setDestinationEntity(97U);
    msg.s_id.assign("HXDEROSSVYYERGTVNVCVDXYTITEMHZNEUFPOEGBYAQMPNSVUGRQWCRLBCJZLJTUJWISABBIDIYZWJKIXTYPPXLIMWTQPMKAWIPXHSUQUGKZIMFAJANXCZFNDPGBXDAQQHFLCGTKNO");
    msg.dist = 0.8188332475257841;
    msg.err = 0.5523216155955555;
    msg.ctrl_imp = 0.7729846101922876;
    msg.rel_dir_x = 0.861238819206649;
    msg.rel_dir_y = 0.39673486290295956;
    msg.rel_dir_z = 0.9238775724488426;
    msg.err_x = 0.3549414594245157;
    msg.err_y = 0.47032012247965016;
    msg.err_z = 0.164985096572128;
    msg.rf_err_x = 0.2551846488342209;
    msg.rf_err_y = 0.4568924105286656;
    msg.rf_err_z = 0.5072805160990898;
    msg.rf_err_vx = 0.8334805039678699;
    msg.rf_err_vy = 0.07524438933315569;
    msg.rf_err_vz = 0.4463946068506367;
    msg.ss_x = 0.8286021758771815;
    msg.ss_y = 0.34221896566537857;
    msg.ss_z = 0.9327110795164738;
    msg.virt_err_x = 0.5821945329061818;
    msg.virt_err_y = 0.9663860736079938;
    msg.virt_err_z = 0.398911623227968;

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
    msg.setTimeStamp(0.7807788584253907);
    msg.setSource(62867U);
    msg.setSourceEntity(234U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(125U);
    msg.s_id.assign("RXDBXBNFITITQOXSKPVTYAKECTPXTTYLZDWLSYFPAPMNFHMERIVRGAKQRLHGXUBKZQIHVSEKCNDOWECUJEUJUOKBHKM");
    msg.dist = 0.6041109653169009;
    msg.err = 0.27385509982712597;
    msg.ctrl_imp = 0.34060124881547493;
    msg.rel_dir_x = 0.2795323911135451;
    msg.rel_dir_y = 0.7938273710934263;
    msg.rel_dir_z = 0.8345806980816859;
    msg.err_x = 0.6795501113992187;
    msg.err_y = 0.9559452723068051;
    msg.err_z = 0.5084003813498031;
    msg.rf_err_x = 0.9990775676440445;
    msg.rf_err_y = 0.7527319534007644;
    msg.rf_err_z = 0.5819952496713533;
    msg.rf_err_vx = 0.8976671460974011;
    msg.rf_err_vy = 0.10807107071135358;
    msg.rf_err_vz = 0.21564663651917682;
    msg.ss_x = 0.760884264189475;
    msg.ss_y = 0.877435987786818;
    msg.ss_z = 0.9406360170904549;
    msg.virt_err_x = 0.06984328324560674;
    msg.virt_err_y = 0.9636467212246274;
    msg.virt_err_z = 0.36707943940247467;

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
    msg.setTimeStamp(0.04864618954714095);
    msg.setSource(13048U);
    msg.setSourceEntity(138U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(75U);
    msg.timeout = 21355U;
    msg.rpm = 0.7687330933173057;
    msg.direction = 61U;
    msg.custom.assign("IONJETNBUCWHLEYDELQUMBLKKPYGAJDKNQQTAMXKDBQVPAXBXGSSATHEDGNLBUKHHJDAWWIYCOFJPXYGFSOVHFQVFRTMKSZYIZCMDIJEOUZDABRNMPWMUOJFOPRDCZOHPRITH");

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
    msg.setTimeStamp(0.4872611472872611);
    msg.setSource(28869U);
    msg.setSourceEntity(51U);
    msg.setDestination(31461U);
    msg.setDestinationEntity(98U);
    msg.timeout = 59626U;
    msg.rpm = 0.4433973321592649;
    msg.direction = 48U;
    msg.custom.assign("TFTMVXONTZKAMXVTIPSGZWLMHIBUBGMWMAUIJCYIDRTJUWDRMQBKYYCHZUVQDWJNXKGHSXNEEZJXPJPXVGEAZQWZZWEUTBUJBPRVGXALVCUWZILCQXWHWAAYOICHCAOROQIVUMIHGAPFZKHRJOGYPNGDNHFUGKBZJTYHFSLVKFEDERCKENPKOIDOMLQSJTSPWLTPXQXSQNYBOEMVFAEB");

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
    msg.setTimeStamp(0.039267919192694345);
    msg.setSource(7054U);
    msg.setSourceEntity(238U);
    msg.setDestination(3540U);
    msg.setDestinationEntity(222U);
    msg.timeout = 29274U;
    msg.rpm = 0.03723389489229045;
    msg.direction = 34U;
    msg.custom.assign("NBPIOVTUPDQZNEWVUCCVZBAQILMBBIWSUUALGSCHUQAJGQOVSEEALIDKJSETNJMFEPTFSYMBQMCTAZKHZOUPERWEOLGMIVAWRRQWPMXMOJKHRYIGXJNGRABKCXVKXDRACYLHPDFKDNN");

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
    msg.setTimeStamp(0.7268874630726465);
    msg.setSource(49548U);
    msg.setSourceEntity(49U);
    msg.setDestination(11487U);
    msg.setDestinationEntity(116U);
    msg.formation_name.assign("SZSNGVOSFQLBYHDBLURAIGUROULNOPAKFQPBWUQVSTZVXSKNHEXDUZNQEKIJDRRGRORPHXWHTJDRBIZLNSIFBMMJMVRLSNRKYGXWEOWQMZUJWBIGULHCKMXCDPTDQNAYGQIZAMEQALCVFNKEAYJKDFMLOAZQEGTAHDWTKWEVMVHFWYMFNBGEPCETXOOUXOYCZAUXJWNCVMPX");
    msg.type = 27U;
    msg.op = 61U;
    msg.group_name.assign("PJYMOWTIOMRTEKSCJMNZJAAWBPMQRHSEGKCTZEQAQUGFVTDVLRUOBJKHMRWGCAWOOUDKLEBANRTFINQYAQCVBZWJYXVXTIGHBHNMKVZDDGMQXNSXMERLYMOXLWDPWPBZLRFGRGUGSKLNJZPUXNIQKXDEYSB");
    msg.plan_id.assign("GFRYYNJLMSWUHOLDGDNIGLTBXOQZFIOIQXBPQMQJWRLGHAWIFLLMVTQSZFEABUVZUIVIKHPTCVOSFINDKXYGGWJBRDAP");
    msg.description.assign("QKVJMRWTUBINUINSAQISFRMLNPBSYQUHJGCZLIRCRQWCCRXMZHYIBXNXJTKWFEJPFSTHOTODXKYI");
    msg.reference_frame = 203U;
    msg.leader_bank_lim = 0.4209896209600458;
    msg.leader_speed_min = 0.2229939543276933;
    msg.leader_speed_max = 0.825927061512757;
    msg.leader_alt_min = 0.0022708524591570356;
    msg.leader_alt_max = 0.9102377001024106;
    msg.pos_sim_err_lim = 0.27521134547250237;
    msg.pos_sim_err_wrn = 0.6298157674679314;
    msg.pos_sim_err_timeout = 4544U;
    msg.converg_max = 0.8520422658328487;
    msg.converg_timeout = 45856U;
    msg.comms_timeout = 51665U;
    msg.turb_lim = 0.4219382000888924;
    msg.custom.assign("YIFTZPUDCOKFZFLHSBYXABGCQVRNZFKVZIKAN");

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
    msg.setTimeStamp(0.5365440752279628);
    msg.setSource(6826U);
    msg.setSourceEntity(247U);
    msg.setDestination(29678U);
    msg.setDestinationEntity(31U);
    msg.formation_name.assign("ADSQOCDXDURLEAYHLKTLFIZRIEURWPXZBIMXJZAVPRNNENCFARLJYFUVNBVYXHOYHYKPLFPXJGVDBKBWHZMTKFPGJXGGELBMCZNASCCFREWMMHPZEQKPQSOGWFXIOZMCYOVQAJSDHAYUTWJCICTOJSDPBXUDLEIWSNQNPKOIXEWBCMMURQQFHCNBWSZMTXFGHOZTJDKLARDYZPATNSOITJGLVYQKWMFURELEVBHHOT");
    msg.type = 205U;
    msg.op = 57U;
    msg.group_name.assign("ISZZPCOTXKWPLDEFKAUTBZPRQDDMEHXWIKTVMKRMLAVQCJYZQSNKXDUSIVHNIJYFVSJZTYUXXCKQVPEFYHIHDXMEBLADBJZLUXFPEIRYKUUMBKZGSJWCQOAAWRIETWHEUWTPYBBOFEOGQGNHCXGPIJANDNWSROALGYXWOIMSVPJATHCGLPVRBLNVOZZGG");
    msg.plan_id.assign("IODEQRLSOLNXGNYMOWGTVMYYEEWKYPZKDLKHUUUOIHWKQGICOZVDOSYACMVA");
    msg.description.assign("MIAFKTQNAHQBQMUDQZXDZPUAIHHFCOGSZRNZSBACBKFRWGSEDUSPYPCLXNZTAGKRFODSHMWFRDCMVOTXLLJQJPQFPQXZBWKFPCUBQNINHYEKIDPWCRHUGWXIPRRVZKRSNBAYTXFNGGCLOQMWTVOKUVIHRYJYLIMRJICSXIAYHBOJJWEYMOU");
    msg.reference_frame = 238U;
    msg.leader_bank_lim = 0.504534518087026;
    msg.leader_speed_min = 0.8639629045556401;
    msg.leader_speed_max = 0.5146500908814007;
    msg.leader_alt_min = 0.12784229934533609;
    msg.leader_alt_max = 0.433878061091605;
    msg.pos_sim_err_lim = 0.5858133139892203;
    msg.pos_sim_err_wrn = 0.5602114020624138;
    msg.pos_sim_err_timeout = 51175U;
    msg.converg_max = 0.21697725237824805;
    msg.converg_timeout = 54U;
    msg.comms_timeout = 28929U;
    msg.turb_lim = 0.3948734410952447;
    msg.custom.assign("HLGAWVGGBQXUYBMFOINEYDCQLRGZTYBIQIKTGORNCAECVZFELXQSLRMSHGPNCEBSAQMAGMODQXLIXAUNJKTZHFFTTVWYAWZFELZAIHRFUYTUSDWIBPLIUPBVOCCRWPPPXNFHONWWYXLHJTDSSQZDZMRHZJNABCOKTMHPNZFPIXQSYVKORIWMJCLOXBQJMEFKYOWBEARFJUKWEVITSRSKNKCUDNJEYDLMJKTPHDUVYDUQOGXVVEAB");

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
    msg.setTimeStamp(0.45707466511285666);
    msg.setSource(18964U);
    msg.setSourceEntity(8U);
    msg.setDestination(42783U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("BSAVOBCLYCCBTOEYZEVSKUPDTNLWUWHNAMDMVVFXMDOZASVDOGYDOOMIXXLGKBLFPCRSJPSRJTQPQYCTPWQRLAEIQWCIHKYBVEHFPIKLZVOYVYLRGKTBDQRGSBQBMWFINIHXYMTSIGNAAFXSAHUDPYGXKUJHPFSEMUEFVNZNHKCBUTWDJWOXCRGRKUZCHGLJIUECQFLXPJFDZRMJNWHXKSZEIN");
    msg.type = 183U;
    msg.op = 96U;
    msg.group_name.assign("QNRNVNEBGKDOLHWZJPSZJQJGODZZCMXVYKRDURBOCVDWTJCUTRIZBSXBTIMFVUDISOJWIUVJGMMCCFTUMEXFBXLTPECLCYGRGOXNFQFQEARXABHAZRJQSMWYWJUAAPQLXMPEYIXAALEGWWAMEPMUNHDFIUPKUPTGQSVSVNH");
    msg.plan_id.assign("OOSLPSZSHXPJLRXTIRUXYDUALIWHJZPASAEECBJIDVIPCTORQOCEADXVEKZVROAKPRUTFEKCBPKMTGOCYZFMCDUKZXVMDSDQFLWMDTTJGRWJQHKCGPMHNEWSVUBXDYFGQBWCOGJSSAGCICDNHPZYNVXAKFYHJHLMUSNLYWILWYYTBVOFNKBTAEMQNHMPUVEQYRWFQAMEKBLTJZOBQUPGUQHXDGNXBROFJMLZWZANNHSRUIN");
    msg.description.assign("OISMXUORUYLDSFXMTYRKQFFICKCWCBHXZBJTXKAVAGTVZGYMGUIQPKXIAAZIDKRLJQYJTSCVAINNVQIMWDTDPGQRHABFSPYXZZHVSVCGVHOFWWTJO");
    msg.reference_frame = 146U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2383U;
    tmp_msg_0.off_x = 0.6921432332481845;
    tmp_msg_0.off_y = 0.44110488929893077;
    tmp_msg_0.off_z = 0.7042095673686428;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.11740338615042789;
    msg.leader_speed_min = 0.17146125663584055;
    msg.leader_speed_max = 0.2081396129819889;
    msg.leader_alt_min = 0.2948925414166599;
    msg.leader_alt_max = 0.14888984066624367;
    msg.pos_sim_err_lim = 0.5131664840443386;
    msg.pos_sim_err_wrn = 0.9720422700726064;
    msg.pos_sim_err_timeout = 45949U;
    msg.converg_max = 0.31312675539798585;
    msg.converg_timeout = 946U;
    msg.comms_timeout = 60859U;
    msg.turb_lim = 0.44668966802198606;
    msg.custom.assign("AKKPEYTXAHSQZWFLKLETGFRIANDAUHSAYYPWVSHZOIPICKMHRRXJXHBWIBDACSYJIGGTVORYDIDMRBSABVCQWGYAMQINKUGD");

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
    msg.setTimeStamp(0.9524945815508999);
    msg.setSource(49596U);
    msg.setSourceEntity(248U);
    msg.setDestination(39299U);
    msg.setDestinationEntity(80U);
    msg.timeout = 21729U;
    msg.lat = 0.7873537511104975;
    msg.lon = 0.5333359788079406;
    msg.z = 0.48718121219373545;
    msg.z_units = 27U;
    msg.speed = 0.8869231854327563;
    msg.speed_units = 225U;
    msg.custom.assign("CPWJFFHECLUAPKULDNKQXWKYVENAVEOZQCDFSQPBMYMFYISBGVQLUIBJJKGHXKXQOZHGAIRHTHTDYOSIIXSJPFDCHELBZWGMODTCZNCUQTISYOXURFBPUTSU");

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
    msg.setTimeStamp(0.2712215001721847);
    msg.setSource(19132U);
    msg.setSourceEntity(93U);
    msg.setDestination(8764U);
    msg.setDestinationEntity(25U);
    msg.timeout = 50282U;
    msg.lat = 0.6621496019441074;
    msg.lon = 0.6977146286133511;
    msg.z = 0.5931520680351965;
    msg.z_units = 18U;
    msg.speed = 0.23248697442654165;
    msg.speed_units = 123U;
    msg.custom.assign("LXGQSOZLWRXCIANPDNCOOQSGFBGKDTFRFQTVYOKSWOIHLQRHUFKZPPUGHRZCT");

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
    msg.setTimeStamp(0.2636987091483204);
    msg.setSource(3981U);
    msg.setSourceEntity(25U);
    msg.setDestination(11618U);
    msg.setDestinationEntity(231U);
    msg.timeout = 7257U;
    msg.lat = 0.028583920359996018;
    msg.lon = 0.2042166001035135;
    msg.z = 0.8606780897806369;
    msg.z_units = 27U;
    msg.speed = 0.7297842436992313;
    msg.speed_units = 7U;
    msg.custom.assign("EGJSGTAZRXENWULGMRRTFFNIEBKFUNPUVBBOJALCDPZGQGIWBQDDODXKTOJKOPNMFNJJTCLITZXBTSPQQMVVNQRWVCSMHLEREJXCODAPAIRXSIZPXQVGQXXBCANOZMFJCUQZKUIRSJNGLDYZKWZIVCWELHYWCWMEAKVHLTKKLYAYTUYDAJFCXSSBUQYIARELISOSZYPIBWHOXBATFMHCHEUBGNQDPFOMMJ");

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
    msg.setTimeStamp(0.07530684668427079);
    msg.setSource(9042U);
    msg.setSourceEntity(4U);
    msg.setDestination(10847U);
    msg.setDestinationEntity(11U);
    msg.timeout = 49754U;
    msg.lat = 0.6266047566823555;
    msg.lon = 0.19395748272754854;
    msg.z = 0.5783154923083696;
    msg.z_units = 131U;
    msg.speed = 0.842512685336946;
    msg.speed_units = 205U;
    msg.custom.assign("QTVCFDVIHSRYDRVBOXUFRIKPQTGRBOFCZMLJMJSWPQOZCTH");

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
    msg.setTimeStamp(0.5436933243719432);
    msg.setSource(33733U);
    msg.setSourceEntity(108U);
    msg.setDestination(3302U);
    msg.setDestinationEntity(131U);
    msg.timeout = 45878U;
    msg.lat = 0.2780688604749888;
    msg.lon = 0.45017186956334754;
    msg.z = 0.8637556520266778;
    msg.z_units = 12U;
    msg.speed = 0.058147224310981516;
    msg.speed_units = 144U;
    msg.custom.assign("KYSVOQVHZHXITZZWBFFJPYNOWATTQBWPHVSSCDUFYIEGDFRZFPPMONOXHNPCJJIVEYEGDQHHUNJHPLKZJWLATKFGRBIJNBLDJONROUDTABCECOXMEQQYSJRMFIMWGGTDCLWSYOTSUBDDLWYTRGUMZUWQMNUZWSLVLNIQVPKWZEDQGVLXSEQHEPZGIMBSYVYX");

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
    msg.setTimeStamp(0.9266527506976866);
    msg.setSource(307U);
    msg.setSourceEntity(21U);
    msg.setDestination(34010U);
    msg.setDestinationEntity(206U);
    msg.timeout = 54908U;
    msg.lat = 0.3428440209103488;
    msg.lon = 0.7117449769851026;
    msg.z = 0.16379947937411587;
    msg.z_units = 175U;
    msg.speed = 0.4532389549570516;
    msg.speed_units = 20U;
    msg.custom.assign("PVPSMMXUOHHYSTIGHTXUJSPOYMKONCDZMWQMQWCCJBFYBSFATOFTJLDYNMENAXTZEUIHRRZYSCWJIUUEOGINPSWNKVTNBYREMJZKKLLRHUXNRLAPFWSKFKLVAHQIXXAQQVGOSKFLYNBNEVYFHHSHZQXXYJUFTVLKFUJNRSADVBZWA");

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
    msg.setTimeStamp(0.08804394238358115);
    msg.setSource(26196U);
    msg.setSourceEntity(103U);
    msg.setDestination(51747U);
    msg.setDestinationEntity(190U);
    msg.arrival_time = 0.5080019854685216;
    msg.lat = 0.9315759265764488;
    msg.lon = 0.8850514370202985;
    msg.z = 0.19407968577998702;
    msg.z_units = 107U;
    msg.travel_z = 0.7634920700431675;
    msg.travel_z_units = 40U;
    msg.delayed = 54U;

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
    msg.setTimeStamp(0.48339960440919916);
    msg.setSource(456U);
    msg.setSourceEntity(153U);
    msg.setDestination(36412U);
    msg.setDestinationEntity(249U);
    msg.arrival_time = 0.9621915027918264;
    msg.lat = 0.2774497006080977;
    msg.lon = 0.744305325061001;
    msg.z = 0.6603480481532624;
    msg.z_units = 101U;
    msg.travel_z = 0.7796814230655045;
    msg.travel_z_units = 75U;
    msg.delayed = 105U;

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
    msg.setTimeStamp(0.42817955056399326);
    msg.setSource(28621U);
    msg.setSourceEntity(71U);
    msg.setDestination(61248U);
    msg.setDestinationEntity(137U);
    msg.arrival_time = 0.4045186913369737;
    msg.lat = 0.7228715527072658;
    msg.lon = 0.7350138819939733;
    msg.z = 0.42624660060290986;
    msg.z_units = 39U;
    msg.travel_z = 0.7694349529175446;
    msg.travel_z_units = 70U;
    msg.delayed = 212U;

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
    msg.setTimeStamp(0.2044531324541229);
    msg.setSource(64705U);
    msg.setSourceEntity(134U);
    msg.setDestination(21321U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.36024504623630904;
    msg.lon = 0.25548400902852975;
    msg.z = 0.8656138997901042;
    msg.z_units = 94U;
    msg.speed = 0.7425261116574638;
    msg.speed_units = 141U;
    msg.bearing = 0.3285977565875552;
    msg.cross_angle = 0.38846693163694535;
    msg.width = 0.7881354025101204;
    msg.length = 0.8301521442774057;
    msg.coff = 251U;
    msg.angaperture = 0.7803919981183134;
    msg.range = 49783U;
    msg.overlap = 23U;
    msg.flags = 41U;
    msg.custom.assign("VKWVNLUTSDXIHOWNDOPNHXHANPMEDVSSATSUDHLEXFAYQOLNWGTTBMOWEMQYVSKDFTTKKQZRXCKDAGYZBPIZQCGPLXKINIEFCNIKZRISGPXOVLJTEBOAMMHFDIGVOLPMCXTCUOQGYXUPWBRPNZLFHBAXJDGBSQVFXZIUVCFJJEFNYURDWUGUTJJAFISSSRJLOEJCUHENQGKJWCYBKDPCHLJIPGRAQTYFWA");

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
    msg.setTimeStamp(0.47746710542332305);
    msg.setSource(46373U);
    msg.setSourceEntity(117U);
    msg.setDestination(17212U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.6689005504483262;
    msg.lon = 0.0012875297278558406;
    msg.z = 0.4138012037394875;
    msg.z_units = 87U;
    msg.speed = 0.12522899048728886;
    msg.speed_units = 71U;
    msg.bearing = 0.7408003535236004;
    msg.cross_angle = 0.8368515391160625;
    msg.width = 0.49155060789548577;
    msg.length = 0.8428490642233633;
    msg.coff = 191U;
    msg.angaperture = 0.4766260945798986;
    msg.range = 17174U;
    msg.overlap = 33U;
    msg.flags = 249U;
    msg.custom.assign("ZXHFVKIJYKCOTNLQHUZZJKRNLBLSAXYHZFXLSXIOZKVRIRSPCOPAIDQYLJFBYQFDEAFPQDKXACFIUBRAOMYWUZYCGKWDBOVMELBERIUYBZKGVNTUMPWWDSUVPULHQSJZSHHJJRQUTPCYGMMMQONRTKDFTOUHDVGFADXJLTEJQNQXLNNWVGDJGZAN");

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
    msg.setTimeStamp(0.7944705963212668);
    msg.setSource(30489U);
    msg.setSourceEntity(175U);
    msg.setDestination(17413U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.24053918309259958;
    msg.lon = 0.19004259525552913;
    msg.z = 0.387214633399947;
    msg.z_units = 157U;
    msg.speed = 0.4684072663076473;
    msg.speed_units = 46U;
    msg.bearing = 0.775768858322283;
    msg.cross_angle = 0.6368617805777816;
    msg.width = 0.64637047577102;
    msg.length = 0.5943583533421241;
    msg.coff = 249U;
    msg.angaperture = 0.06350025850891283;
    msg.range = 59194U;
    msg.overlap = 96U;
    msg.flags = 172U;
    msg.custom.assign("CZALLQXNRPYQZFMKREJOPWRQSNMBVJDINASRYLQPDKDNILOJIICXSXEKRJF");

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
    msg.setTimeStamp(0.22520553876527738);
    msg.setSource(41239U);
    msg.setSourceEntity(83U);
    msg.setDestination(34073U);
    msg.setDestinationEntity(219U);
    msg.timeout = 39331U;
    msg.lat = 0.9214819767369158;
    msg.lon = 0.9017799307475294;
    msg.z = 0.22668245554173516;
    msg.z_units = 188U;
    msg.speed = 0.29619990819776487;
    msg.speed_units = 141U;
    msg.syringe0 = 248U;
    msg.syringe1 = 53U;
    msg.syringe2 = 159U;
    msg.custom.assign("QMIZTEDFMAQQEYDDDZGYUMPRISMTVTVUUTTEHGIXNOGXCOBGAAOFAJPKOTGNPZYJONLJPRBKVKIHLBKVTJFEINOYHZAXHRQKGWMOBBCWSYJZZMPINDWWNKSRLBXFFYSJHRMHRLPVEZHSUFLBDMLICUNYMQWCWKDAUPXGCAYOUQLEFWEQSGTDLONSCURXPBJKHYVIOWQPAISRXZWCLAWKARNQTFGUFDESJCVQZRPVUXJMXS");

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
    msg.setTimeStamp(0.02516144009937693);
    msg.setSource(27424U);
    msg.setSourceEntity(100U);
    msg.setDestination(60400U);
    msg.setDestinationEntity(134U);
    msg.timeout = 54967U;
    msg.lat = 0.05824767793441421;
    msg.lon = 0.39168031096357725;
    msg.z = 0.5855508741407283;
    msg.z_units = 95U;
    msg.speed = 0.8823096678642102;
    msg.speed_units = 64U;
    msg.syringe0 = 50U;
    msg.syringe1 = 66U;
    msg.syringe2 = 238U;
    msg.custom.assign("WGRPTXGAFOIGPRZKYTMWMSEVSRPCFJDITWYSBXONCAOBHAESMJRGQQURLAIUMEINSDVOMCL");

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
    msg.setTimeStamp(0.37238140103585193);
    msg.setSource(54010U);
    msg.setSourceEntity(69U);
    msg.setDestination(46327U);
    msg.setDestinationEntity(133U);
    msg.timeout = 22214U;
    msg.lat = 0.16417279519326278;
    msg.lon = 0.7793936707024461;
    msg.z = 0.2778339764658144;
    msg.z_units = 233U;
    msg.speed = 0.33027370486901597;
    msg.speed_units = 249U;
    msg.syringe0 = 111U;
    msg.syringe1 = 78U;
    msg.syringe2 = 5U;
    msg.custom.assign("UXAVVNHQNWDSIWGJWFPVHVTFEUYDLPDXINDZCSRTEVSQOKRUJCYDTSFTVGROXPLDOMEYOAVMQKVJOWDUSVCQJIAEJPCBEHVRFYNQQMMZXGXYKZPAHQLGBIJBYAWCZOKMLLOEWMPTEWFLGALRFXNL");

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
    msg.setTimeStamp(0.1708732221516186);
    msg.setSource(30502U);
    msg.setSourceEntity(85U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.942082737112848);
    msg.setSource(33784U);
    msg.setSourceEntity(189U);
    msg.setDestination(7649U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.6514129131591327);
    msg.setSource(34535U);
    msg.setSourceEntity(82U);
    msg.setDestination(5298U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.8065724138814253);
    msg.setSource(35348U);
    msg.setSourceEntity(87U);
    msg.setDestination(16164U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.058451517399109254;
    msg.lon = 0.0848848373341603;
    msg.z = 0.2919626476557414;
    msg.z_units = 84U;
    msg.speed = 0.9421264330227994;
    msg.speed_units = 66U;
    msg.takeoff_pitch = 0.12786653844871665;
    msg.custom.assign("ABHRXBBVRDJLCWLUFXAWGASIFKATPOFUZHICXUSPSIJMOQKEGEABULSXPSJDQWLHDYPGOKQHJFQMGNJROXERFBQWUETWNCZPERUOKDLJFDEKFXSLTBEWONGHNJFQVRRVZGSIZXPLCXZZAITZJCKNHCPHMGQMUHTMKMYWYXVVKDPMLYDNOEMOWA");

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
    msg.setTimeStamp(0.7603256987078474);
    msg.setSource(58694U);
    msg.setSourceEntity(64U);
    msg.setDestination(55614U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.8672463327465652;
    msg.lon = 0.6447099947409928;
    msg.z = 0.9890852548475279;
    msg.z_units = 254U;
    msg.speed = 0.08046249876624567;
    msg.speed_units = 192U;
    msg.takeoff_pitch = 0.14499137278569274;
    msg.custom.assign("DTGWCRSUSWLUYGLMUCAAEPGRKYVUDDKSOXDBPHNDARHGDEMYYLUWFQYWIPSJOMSWJKVYO");

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
    msg.setTimeStamp(0.24254988482703332);
    msg.setSource(4402U);
    msg.setSourceEntity(220U);
    msg.setDestination(49508U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.4543617146709603;
    msg.lon = 0.6752630397367245;
    msg.z = 0.8346483408665302;
    msg.z_units = 207U;
    msg.speed = 0.03701982379355251;
    msg.speed_units = 117U;
    msg.takeoff_pitch = 0.9497297217501598;
    msg.custom.assign("WBLRXAVEWLNXTFXGSRFORNKQXAQDOAUAINQFOVXCMMAPZQUGMQKCWIBHFSCJZVGOWFMJSEIKOLLEVXUYKZUHVHMPUOIFDHNXFOPDOYXWYBLPUEQASPYYCDTMVJBLABQSKRIDWLAYKAEZCKIJZNUEZZRRHDDJJRMUOCVBTJTRYFNPA");

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
    msg.setTimeStamp(0.898996943463129);
    msg.setSource(41120U);
    msg.setSourceEntity(143U);
    msg.setDestination(42582U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.06351716117618578;
    msg.lon = 0.8676507663816828;
    msg.z = 0.24004217909375103;
    msg.z_units = 36U;
    msg.speed = 0.36890330736254306;
    msg.speed_units = 134U;
    msg.abort_z = 0.6536336340572114;
    msg.bearing = 0.12069237980477865;
    msg.glide_slope = 203U;
    msg.glide_slope_alt = 0.8044487774024439;
    msg.custom.assign("ZUYTWCVECOPBSSYGRRBIXPSICYEHIWPSUXRMRBAVVQHNSIXHFOQAUBYPDLTEOZKGRHNCHNKONFMYVGDSFIQTZLBNRMGVXSPFNLLQOZKTHEGFCDFELVMGUQTOCZXUFWLZQKWLEYVJDHFCFGGBXJMACUYTWKJTUJERWLMDSXAJICDSDQHFLARAZHRZPN");

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
    msg.setTimeStamp(0.33742071299723253);
    msg.setSource(42847U);
    msg.setSourceEntity(30U);
    msg.setDestination(20611U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.24757789307312295;
    msg.lon = 0.04747198788613105;
    msg.z = 0.5903375734468844;
    msg.z_units = 132U;
    msg.speed = 0.6523721236005721;
    msg.speed_units = 147U;
    msg.abort_z = 0.730334599454972;
    msg.bearing = 0.5890485818553638;
    msg.glide_slope = 145U;
    msg.glide_slope_alt = 0.7935262902356092;
    msg.custom.assign("ILPWOXRNXOYTPGOHVYLNVJCJKKKZIKFUVQSIPHPDGZAVTHFQYAOBJBJWTLYLQSGXDSBAEUPOHNKBQGMCAMXKPJGIAOPXPZEQCUZNJQURHFRIDBGTNBJNGUMMMFTXDEHHWMWLRNRAZBDARTBXFNYUUKXSFVCWETUIECDSBSHNVI");

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
    msg.setTimeStamp(0.4397574960689009);
    msg.setSource(1505U);
    msg.setSourceEntity(92U);
    msg.setDestination(32483U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.24494935717005528;
    msg.lon = 0.5648194090932471;
    msg.z = 0.1859045459209031;
    msg.z_units = 14U;
    msg.speed = 0.7439971719688809;
    msg.speed_units = 116U;
    msg.abort_z = 0.8108283172204865;
    msg.bearing = 0.9840446359228889;
    msg.glide_slope = 211U;
    msg.glide_slope_alt = 0.7614732162407409;
    msg.custom.assign("BJJPZADOCOALTXQQFBEGNOMJBCKCOLYFHSVAORYAUAYTGBJSFMTBPIZPNEHEQOHPEFDKGPIUIZKNKLTIWICFCSZYVUIAMQNQXWFNHCRSXMUUGSZESSHIJHSPYGDVQADIRLZNREALLEAWKPOYJRJXXGHBDSTWDUWTHDXXQX");

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
    msg.setTimeStamp(0.6047775210608441);
    msg.setSource(50267U);
    msg.setSourceEntity(34U);
    msg.setDestination(8678U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.49139698402599374;
    msg.lon = 0.7039684018142952;
    msg.speed = 0.9005764799641862;
    msg.speed_units = 7U;
    msg.limits = 152U;
    msg.max_depth = 0.12940559959882958;
    msg.min_alt = 0.43045150033541435;
    msg.time_limit = 0.47582785075911005;
    msg.controller.assign("TQTORKYNBMWSUHMUWRBAVXOPEQUJXMHZWCLWMLIDSR");
    msg.custom.assign("OHQEPCGHGIJGJGJONEIXOQBDVPVABFCKUGALDPNIZSEPAQHCIZZOSMVRWDEVJXAEUMPWKGNDCPYQYZENKATKDSQRCRZHTFQLBXMKTVRXXYRJDLTGKAXUNMTYWDTMMPLVERYSKNMUUXBEBTWSWUYRAGKHDBFWWHGFOPVMCJNLITJHXCCYQEKPVFBQMVFRUOSHLCSTZUXQWOMFLPNZOCLZOFWRJSWIBJFVZNQSIXHLHAIYDGLEIUYKRSYNBAIJ");

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
    msg.setTimeStamp(0.7934667717426622);
    msg.setSource(25895U);
    msg.setSourceEntity(37U);
    msg.setDestination(37257U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.49468831879092723;
    msg.lon = 0.3777494618144819;
    msg.speed = 0.2909204354613468;
    msg.speed_units = 99U;
    msg.limits = 208U;
    msg.max_depth = 0.31375632692862543;
    msg.min_alt = 0.34776379651837763;
    msg.time_limit = 0.09746752373479017;
    msg.controller.assign("XTLLHOREILPAOIVTFQQYTBZRFBJKEJSLYTEBQNWHYNLWVFZVMMSKIGNVIFAFZFUQBHQLQWIJYGRADZMHCNQHAYGTKWNUUCDCBDRRUJEOOIPAOREUNNIVSKMAJNAPYITYKGWJWKJLPADGSBOCCMWDZPPHPUJBFKWTROJZCRSXYBRGEXXNSNVXXCCAXPTVGHFSVASOCDMEXYTDWMYEPHZQOZXGFSLLLVU");
    msg.custom.assign("IQEWNHENIFQCOUUNKRGYXRJJAHWHNGWZSYGNOEWFIKNFFXTVQJYSPOEWLNTKSSBBPCXUXOWBJMNGRHO");

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
    msg.setTimeStamp(0.8469489777129708);
    msg.setSource(26818U);
    msg.setSourceEntity(170U);
    msg.setDestination(34635U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.3979660377381309;
    msg.lon = 0.07919566944308687;
    msg.speed = 0.5094106777538145;
    msg.speed_units = 3U;
    msg.limits = 99U;
    msg.max_depth = 0.2166379415339943;
    msg.min_alt = 0.7038524866074726;
    msg.time_limit = 0.8609942757243682;
    msg.controller.assign("YLCKSVACQPCTTRQMHVKRUFAOWHSJPUMIWYORPBQZVLIEGDWAKZHAYZTNJPQKCRYEUWUGEFSHBEVNHPZVLLNKZTVFDXBJNZMGRGAQDONBFJUZHONXXUVHIDFCEUSEQDRKSMLIOECJDIGPICTNJBNKYQMBFIPEBQOOLZYXQUSJLYNHXCFOTIGPGZXMMRFMBFYCWGDTEUPSVXSBJXVLAFINKDGPMRQJWTTV");
    msg.custom.assign("YWWABRXUDYXJCBRBUPXSORZXDHMCBMKTQRNCFKGSEQPOCAOOWPHZFRULTXNNCOBDRSPMSVSJFYYVYAESZBHEHSYIBVJZWMQIFZBCRGCUNPXMOQWCKFNEYPJKUIZGURVZLSSLLDOBOGQZUMVYKYXQKMIGHIZENWCWLB");

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
    msg.setTimeStamp(0.3709461078749231);
    msg.setSource(4698U);
    msg.setSourceEntity(158U);
    msg.setDestination(18385U);
    msg.setDestinationEntity(12U);
    msg.target.assign("AKUXGPLZGKBOTJEKVVEWJQQIIUMVSHSPXBSGPCRCLEVIRMEWQOUBHTFTEYGISDYPQESMMYTZHTDENMTVRMXLYGVYQBLOAKJUFRXTNHFNYQMWBKUPVRSHKPGEJKNWVMNAOPKAJBBAIRNRLQFRWESSDACWRNEFSZWVGOGSBTTUPAJNFBZBAUFVCCADNKPDN");
    msg.max_speed = 0.7558853177125792;
    msg.speed_units = 222U;
    msg.lat = 0.817339122860224;
    msg.lon = 0.15762541464817648;
    msg.z = 0.7158847596815064;
    msg.z_units = 94U;
    msg.custom.assign("OEFADUTCXFLKQESZSNISHUXKDKBMQIGGTXWCEIBUPXKLZVBDVOTNGRPXRLYCVPCJWXDGSIBYZNJYHZPJMFWHHAKGURJRUANGSSAEGIXDIFPVCYIAQYLYOJUGEOJWCVTPUMGDMZFOTDKWIGNQOQTVJBCEFTMEPSDKEWLQJBJZUVOPLHXRVUIZBAMLZSQTKXWABMLCFSECEOUTFWNPDWYMVRBFZHSKTNFQMBWXAO");

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
    msg.setTimeStamp(0.2968878312665504);
    msg.setSource(59921U);
    msg.setSourceEntity(210U);
    msg.setDestination(32298U);
    msg.setDestinationEntity(48U);
    msg.target.assign("LKTIEVCSMYLFATFCGWBARBZEXLIOMREXOTYLOEVXATFZMQNRLDXWUDZECLWHYXZMRDVRYNTHQCSFXLDJPVPCRCXSCOBQNIUKIKDIOGKGPOFIGLEDGYFXAZQQYAWNSUMXNNVJBVIRCWDUKYHJMOJPNRTSKJYEVTMLUI");
    msg.max_speed = 0.9091417596673957;
    msg.speed_units = 173U;
    msg.lat = 0.3959517245518698;
    msg.lon = 0.4135269545236776;
    msg.z = 0.7491532415755403;
    msg.z_units = 242U;
    msg.custom.assign("GIOOIDXAHOOZAWNMGKJCGPWAIDBCGUQRLJFDHBOCWBUKYXFTKOWTUPJSROPBNZLZAZDIRTLQQNZMDWYJSQMYHAQOM");

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
    msg.setTimeStamp(0.31492814833679506);
    msg.setSource(9719U);
    msg.setSourceEntity(207U);
    msg.setDestination(16193U);
    msg.setDestinationEntity(248U);
    msg.target.assign("CAFLUSRKZZEHGNESQRQBLGCXIJPLNLMTDQNPOXBMYKWQJOQWPGPZYISICCXJTVOTOEFNZEMBNRKZBCVBWUUEIFHK");
    msg.max_speed = 0.8298432676756242;
    msg.speed_units = 26U;
    msg.lat = 0.7327481572789234;
    msg.lon = 0.26587161174257;
    msg.z = 0.5801636846656968;
    msg.z_units = 111U;
    msg.custom.assign("JCFUAQKPNJYEBKMFIVUMVDJDJRGIFDDFOBRXWTWJIIRVSZFSNTLMTMZHWGYIOLXUEOHPKNGNJ");

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
    msg.setTimeStamp(0.1746624366687889);
    msg.setSource(9007U);
    msg.setSourceEntity(187U);
    msg.setDestination(20823U);
    msg.setDestinationEntity(18U);
    msg.timeout = 3392U;
    msg.lat = 0.9854596183475987;
    msg.lon = 0.035299530317318695;
    msg.speed = 0.8089738799052272;
    msg.speed_units = 182U;
    msg.custom.assign("TBPVGEOUTVKDVZMCYYCNNSKPHTZIQGUHGVSPNYRJLKIWWATFZTAOESXCHXKSJUZJGSRDKCAQLQLELWSOCCCJTYTIQRFJATCKBZBQVCIGDKCWWNUHGOJRDNWUEBFEQDMKMNQFALRZDOPXKUXUOTYJPGFRVBRBPEYPMNIZWDOHWQPXXTEUPLMMVMHIQFBJYOXNBWI");

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
    msg.setTimeStamp(0.5139590339818083);
    msg.setSource(14362U);
    msg.setSourceEntity(58U);
    msg.setDestination(29401U);
    msg.setDestinationEntity(133U);
    msg.timeout = 20695U;
    msg.lat = 0.9114839078641541;
    msg.lon = 0.14511627613071731;
    msg.speed = 0.39027546024860793;
    msg.speed_units = 9U;
    msg.custom.assign("QZCFXKVKWZOOSNEVAWFCRLUNSSHYMKEBPHYLOSHUWGUDJZLNKGFNFJRTVYNDPCPCZMWUQUCFXYIXGSXPNDZRZOMATKIPGSBEDJUVXZIIGWFYHSUHBTXIBIHOMLCIYFZDPLORIMOTYOMXWTLFYWJRE");

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
    msg.setTimeStamp(0.9682598354089612);
    msg.setSource(59521U);
    msg.setSourceEntity(94U);
    msg.setDestination(44225U);
    msg.setDestinationEntity(43U);
    msg.timeout = 31832U;
    msg.lat = 0.9960647641972602;
    msg.lon = 0.4094232391705185;
    msg.speed = 0.5680906609024186;
    msg.speed_units = 196U;
    msg.custom.assign("BWDNPGQMVXLLWDNPSVVYCGASZQKMOMIBGUHWCWVLLXQZMVYYELHUAZEQHEZXZGTIVCTIEPOWIHOFM");

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
    msg.setTimeStamp(0.6693057224303978);
    msg.setSource(52684U);
    msg.setSourceEntity(163U);
    msg.setDestination(30147U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.038081470599952594;
    msg.lon = 0.538164915065651;
    msg.z = 0.7074202002876758;
    msg.z_units = 144U;
    msg.radius = 0.5628661184109592;
    msg.duration = 6301U;
    msg.speed = 0.2375880091347189;
    msg.speed_units = 154U;
    msg.popup_period = 59071U;
    msg.popup_duration = 61874U;
    msg.flags = 4U;
    msg.custom.assign("ENYUZAEVIXTXDLMQQHHYCFWJHKSPRPNG");

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
    msg.setTimeStamp(0.4461065176249308);
    msg.setSource(3117U);
    msg.setSourceEntity(185U);
    msg.setDestination(49071U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.9460006347019284;
    msg.lon = 0.2641028024297163;
    msg.z = 0.8652523653635785;
    msg.z_units = 134U;
    msg.radius = 0.5291067292551034;
    msg.duration = 27725U;
    msg.speed = 0.6853372724147584;
    msg.speed_units = 237U;
    msg.popup_period = 30586U;
    msg.popup_duration = 56122U;
    msg.flags = 84U;
    msg.custom.assign("LSZXMOGKVJQTTEBSPXANJRGSQPWNQNVIDBWEIEHYOINOZMGJLODTZHBFKFUCAJPGJYLCVKHHGMLSRQFGVGIYRTGENRHHYMNCKGABXUWMOPDMAULTVPZBXWANYEXRADXKZXZE");

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
    msg.setTimeStamp(0.1480951534333318);
    msg.setSource(60183U);
    msg.setSourceEntity(240U);
    msg.setDestination(18188U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.9130634911529812;
    msg.lon = 0.21002803549112314;
    msg.z = 0.5298406235259034;
    msg.z_units = 44U;
    msg.radius = 0.4008306618102764;
    msg.duration = 47258U;
    msg.speed = 0.7636671303686003;
    msg.speed_units = 178U;
    msg.popup_period = 56322U;
    msg.popup_duration = 26335U;
    msg.flags = 34U;
    msg.custom.assign("RXTOTCTNWZNFZGMIBBWZBYIGZDZNRGHDYOUKHBJLDEMTRCQTPOPIGBZEABEGHXWPEFKRSVJJXGNHSCROSDOCJSSSUUODPHLDKURDEUHFPACXIYXVQRLINRHELYJLFAPILNJLGQKWWDAOWAGXEJMVLMLHUYPFWJRUOABOTPGCITMVQCVYQFUJDZKSRMINVHNNQMTLXICGSHZVJM");

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
    msg.setTimeStamp(0.2777060755660832);
    msg.setSource(13366U);
    msg.setSourceEntity(217U);
    msg.setDestination(13613U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.20471158436911696);
    msg.setSource(40664U);
    msg.setSourceEntity(129U);
    msg.setDestination(38444U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.6756607590803005);
    msg.setSource(49693U);
    msg.setSourceEntity(137U);
    msg.setDestination(53349U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.6423253267172756);
    msg.setSource(10066U);
    msg.setSourceEntity(87U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(6U);
    msg.timeout = 59043U;
    msg.lat = 0.6181873161630995;
    msg.lon = 0.35489944158855713;
    msg.z = 0.7314136531419574;
    msg.z_units = 245U;
    msg.speed = 0.9144404839851521;
    msg.speed_units = 195U;
    msg.bearing = 0.7726640342287134;
    msg.width = 0.5201900863007147;
    msg.direction = 84U;
    msg.custom.assign("KEBWFQTFIBGRAPPLUQMJREGAYWZCJRWTPGJGAIUEICIKSYATUYBPWOMCOLZMHCFVCENYWTHRNTZUWJXLSZATBDZYSMDNSQLXVQJLUKFPYJWQNIDUHEORXSDEAHWPJAFDOIAVVXUSVIWQISRFTGQNXEMVSUVQLXPFGDN");

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
    msg.setTimeStamp(0.7405511128497353);
    msg.setSource(47692U);
    msg.setSourceEntity(3U);
    msg.setDestination(34196U);
    msg.setDestinationEntity(235U);
    msg.timeout = 28005U;
    msg.lat = 0.029940931661533554;
    msg.lon = 0.0927371377404188;
    msg.z = 0.1275261511355078;
    msg.z_units = 41U;
    msg.speed = 0.010569975787345198;
    msg.speed_units = 89U;
    msg.bearing = 0.09408477293028972;
    msg.width = 0.30882467138603653;
    msg.direction = 4U;
    msg.custom.assign("FOKNXKSSYGQFEYVMUICSQVTVICRULWPXGCNCZECHULLYTTSHYAJJNAJPJWGXOZKBJZQRXOAUFAQKGVRHSLLILSBLGDJMUYMRTAPRXUWAPLDPNPPUKLVKDMNHPHRFSDMWGNQEVZXVATBZ");

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
    msg.setTimeStamp(0.7674229323858137);
    msg.setSource(18371U);
    msg.setSourceEntity(75U);
    msg.setDestination(11343U);
    msg.setDestinationEntity(106U);
    msg.timeout = 25047U;
    msg.lat = 0.40272626549416746;
    msg.lon = 0.21726525250879358;
    msg.z = 0.6657533783890361;
    msg.z_units = 175U;
    msg.speed = 0.7989563309142484;
    msg.speed_units = 102U;
    msg.bearing = 0.056556481597314634;
    msg.width = 0.23937687349376047;
    msg.direction = 158U;
    msg.custom.assign("ASRQJUKENQPNYOHUVQDKTDZNNMCGUVSXNYZWVVDRDFFXHABOWOIMUQMLSBSNTDWKIYKCTYLWSLCJVLPBPEEVQNEZBCGXHGYDPYIQAAUYJRSFJGFMKJHVXDJCQEXHUT");

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
    msg.setTimeStamp(0.3258266787301708);
    msg.setSource(55574U);
    msg.setSourceEntity(235U);
    msg.setDestination(26348U);
    msg.setDestinationEntity(140U);
    msg.op_mode = 241U;
    msg.error_count = 40U;
    msg.error_ents.assign("IVETRFPWLNNELQBMQEXSVQYZHSLAIVHCFZFSLGSNAPTNUZFHFDKOZAKRDYEJZVEIAMMIDUDDPTUMWSQWWOHNBJXEFYEQTKUYXYRWSZATBOHMMVFKGILHWCVJPHJYKHZANBITFCJGOQYIUCBLBFSRPIRLMVBCGEBZGFINTSJKGBJVURKKWOXXLOPDNYNQGATXEOATGGLGKRHCUPOMROPCWUNQWVPJKPHYDAQCDWSCTACIYLVJDRZUOMZRQXX");
    msg.maneuver_type = 50490U;
    msg.maneuver_stime = 0.31203231668696707;
    msg.maneuver_eta = 19736U;
    msg.control_loops = 805997933U;
    msg.flags = 69U;
    msg.last_error.assign("ZHVFTCTPNJXGULSCQKOCLYAUICARQWHVLSDEXMRAQZCOPPIEXYGZXJANALUXPMZXWATHVDZQEBFH");
    msg.last_error_time = 0.4061369831057906;

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
    msg.setTimeStamp(0.4649100203124946);
    msg.setSource(61880U);
    msg.setSourceEntity(89U);
    msg.setDestination(59371U);
    msg.setDestinationEntity(216U);
    msg.op_mode = 45U;
    msg.error_count = 240U;
    msg.error_ents.assign("OWTMJECUOYTEVZDULBKVLXZYNQKSYKZDPHVENWONHPQLRDVWJLEBMEJVMUFSZTKJSNPFXRABWOLBHLICGRTHSQFODXUGYMCMZGGBRKYRRNKFOUBIBKLEIQUXXPHYAERZCCHTZULCUVIMHPSYGACPDIANJEUGGSZCKGLFQMSRSNJBCGYFPRXEQTYZTNWAFUKSOXBAIMKMVHCPEVVIRAFIJJQI");
    msg.maneuver_type = 29633U;
    msg.maneuver_stime = 0.5219210836771474;
    msg.maneuver_eta = 23413U;
    msg.control_loops = 2450556774U;
    msg.flags = 181U;
    msg.last_error.assign("MLNIQYWUTUXVVIZXHEJKZTAXOLRDOZLIKHIBPYDTAJM");
    msg.last_error_time = 0.7730738085826491;

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
    msg.setTimeStamp(0.9488309609179132);
    msg.setSource(36506U);
    msg.setSourceEntity(64U);
    msg.setDestination(8699U);
    msg.setDestinationEntity(86U);
    msg.op_mode = 7U;
    msg.error_count = 178U;
    msg.error_ents.assign("SQGHIOYEPKNIHAWYAMPGWGLEMITFDLNPZFLRPKBBOJBAGQNZIQLTWVTLTTHUJHWTRWQFHMXHDXWSUHYEHSTW");
    msg.maneuver_type = 50178U;
    msg.maneuver_stime = 0.0035077359960566934;
    msg.maneuver_eta = 58124U;
    msg.control_loops = 1904277809U;
    msg.flags = 8U;
    msg.last_error.assign("SCAXMZCWBPUJLTPQPCIEEHWEHSSKYZMLSHGKZXNLMMDBQCTFICBXCJARWWBFFSPJRSIWXVBWURDKEOXXUOUMBRORAMAOBMSNFZYQGKPDULMDOADZMIEGEYFYIWAHGPPURPVZIVSRARICVJADQGJCQDHQHNYQUHWYNVLGNVOOUYTZNVJGBXKNTGNQIFXVPNK");
    msg.last_error_time = 0.3682087772028301;

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
    msg.setTimeStamp(0.45480673323992615);
    msg.setSource(16935U);
    msg.setSourceEntity(204U);
    msg.setDestination(64385U);
    msg.setDestinationEntity(52U);
    msg.type = 151U;
    msg.request_id = 6270U;
    msg.command = 64U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.2724593504289824;
    tmp_msg_0.lon = 0.2820045652549088;
    tmp_msg_0.z = 0.5080218420431115;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.radius = 0.5724040196824184;
    tmp_msg_0.duration = 13430U;
    tmp_msg_0.speed = 0.0441219298256984;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.popup_period = 33284U;
    tmp_msg_0.popup_duration = 25098U;
    tmp_msg_0.flags = 122U;
    tmp_msg_0.custom.assign("UIPMOCOHLQRDEXUCZRPEYAPZRMIERVWVJLEAYNOIQIKSWVLKUENYPLBKUKTFZMGSKYMOWANJLYTHXGSAUDSQHLFSUIQWFJMLNWAJHZRRPOOTIUDRUNFLGPWLKIYPUTOFHYGFWDBWXPVJHRANXEMYZQNCZITBBBPHDRAEJEJMGZXTDQWGQSIVOGH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 277U;
    msg.info.assign("OTMGCDPWKLGFYKQMAPBEEFKHOWGNBEWTFRKZRQORZWVNEDISOPJXSLGKIVGHTMDXUKXFBPBRCLUBEZVGDJEAMUNAASDVCCGIDAHKSXZQNDFYJYSRAUCPUSYQGQSNVHQHORQVZRVTYMKKARUTPNUPTUXDWJVXJELRAXIB");

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
    msg.setTimeStamp(0.40226606897184725);
    msg.setSource(21984U);
    msg.setSourceEntity(16U);
    msg.setDestination(21288U);
    msg.setDestinationEntity(157U);
    msg.type = 80U;
    msg.request_id = 11590U;
    msg.command = 53U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.7235736368093699;
    tmp_msg_0.lat = 0.8810680373998442;
    tmp_msg_0.lon = 0.4629189852476163;
    tmp_msg_0.z = 0.4371625700368933;
    tmp_msg_0.z_units = 49U;
    tmp_msg_0.travel_z = 0.06352556549123345;
    tmp_msg_0.travel_z_units = 249U;
    tmp_msg_0.delayed = 250U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2645U;
    msg.info.assign("WVLVAEYNABBXYNQAGATZKVBLOJLQXORDDJWEQZHLVRWAJNBQFPVWFEPRZJLKZPITAIDFJBOBHQGLMKSUGYGPHCHIWTRCMPFDCSEQBTFNFLSPUJMPNZPXOUDFMYQTTGTHNWGCPXNCSAJUEWMWMXFOSUSUEKMQJAEDIUZMNCYZISS");

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
    msg.setTimeStamp(0.9890371462543789);
    msg.setSource(49240U);
    msg.setSourceEntity(36U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(84U);
    msg.type = 187U;
    msg.request_id = 16434U;
    msg.command = 104U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.4020865251554858;
    tmp_msg_0.lon = 0.912111888685823;
    tmp_msg_0.z = 0.6995085880243167;
    tmp_msg_0.z_units = 147U;
    tmp_msg_0.speed = 0.604918890523108;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.custom.assign("OUAMSOQPMOILCPWINRWIRQURSNSXTOTDCPOMSZTUGEFVXJJDKOMKQNDWZYHYKEJDZVEXTMFSLEKPYPIY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15857U;
    msg.info.assign("VWJVUJKCFXFWXHVZQVLZBLRQSTOLKKTJBZBFLNCSXMAVIRWYGOGXAQSMNCPPSAKROICURERRAECZMFIDNBBHUXPBCX");

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
    msg.setTimeStamp(0.7638669669767539);
    msg.setSource(42692U);
    msg.setSourceEntity(151U);
    msg.setDestination(22936U);
    msg.setDestinationEntity(29U);
    msg.command = 225U;
    msg.entities.assign("QPDVQSNJTHFCDQCABFKLNMS");

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
    msg.setTimeStamp(0.6098932006945343);
    msg.setSource(40829U);
    msg.setSourceEntity(54U);
    msg.setDestination(8253U);
    msg.setDestinationEntity(87U);
    msg.command = 92U;
    msg.entities.assign("WXSWGUNPBGWYKVRIVCSVGRCYFPAFAXQDLGGFFELRFUTOCYZNRJWROAVAMKMJFKVDEDDMUSVDDCHKDEPUJIWOTKXUEZCGQQOQBHLBQYBXVPXXYLBCCMRQKLMXHEKATTAZOIPABXNFLOJVDXPBGEQZPSNLTEMOTTWMBBNKMHRZOIJYUJJYWJUIWLIZNPKOQRHTHTZCLCZNYMISWCEQTGKHRZLUGSHIJUDAAVYORHNIEJMPADPVENSNZFBU");

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
    msg.setTimeStamp(0.4922981919043027);
    msg.setSource(30506U);
    msg.setSourceEntity(219U);
    msg.setDestination(48771U);
    msg.setDestinationEntity(231U);
    msg.command = 182U;
    msg.entities.assign("FNETEJLTDYSGZUMRYKYAWBQYFTQJIDBNOYILKQRDDWVKZNNSXCPEFLWCRLWGZNOWFAQXGVSGUKGJCEYARGTCQJPVXLLTTITHXVGGUMUSVMIQGVDEPTSHZZLMRTEIXIPHPODPISNRNXOIFIYMRAJNHCKDASVCQONKCSAASRJBQEFHQLKPUQPIJOWZWDLLFVMOHVZMXPBABKWBJUSZTBCYHRBMYWXJOFUUPOMEDHBKDOVMXAH");

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
    msg.setTimeStamp(0.6415951412368516);
    msg.setSource(21580U);
    msg.setSourceEntity(234U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(142U);
    msg.mcount = 194U;
    msg.mnames.assign("GKGTLBAYLLDMHVEVJCDLMRNYOYWENLGLMTFDZPDUTFTWPWYIHZSIISWISAIGNUCFOKQWOQEKXKHNFKWPVJDBFBQVCRMPAJAV");
    msg.ecount = 194U;
    msg.enames.assign("LCCOFGAQJTRJI");
    msg.ccount = 124U;
    msg.cnames.assign("OFUYNXZJOLAQASUWSFGEZMPOMKJOURMDMFMZYJBTNEWRVODVBRUJTQALWITWUDHKBNTZVWNOCNDALKJQZBSCBHDNWOJPIVXAYXFJVDPFZLAUGTHRCOWWVFBGKXCEBKKQXHNTPLKGHYIFEICGEXKMBSNLHGUPCYWEQFLDFRHTSUQITZRDSSYGNHCPUEEYEJGIATLMXPIXSUAJGBNMTSDAFXRSLXQZZEIDHKCRWGYPMBYMVRCVQVYLI");
    msg.last_error.assign("KWDUTYKGZRRNCFXUZPMBSBEMSQPCSWBRTRAHEXNFDADD");
    msg.last_error_time = 0.5781682038160512;

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
    msg.setTimeStamp(0.07676335245066834);
    msg.setSource(56365U);
    msg.setSourceEntity(29U);
    msg.setDestination(6336U);
    msg.setDestinationEntity(132U);
    msg.mcount = 213U;
    msg.mnames.assign("JTVKPGQOSOLXTBKUOHGVPBXETDIVTWAFPYHRQUTNYQVIXKZGDEAFKGWPWDJCPWRNIOWHFYVEQQERPCZNXWZCAEZSLYDAIFUTVXZHHNBCGKFOAHZIDJNLHUCQWEGYNLLMCNJ");
    msg.ecount = 31U;
    msg.enames.assign("KYDTVGBVBDHYUVUZENRPSVTQDIQUGJXTCYNBEBQUDEPJMGZJXZZMUDCJSIOPMLRWAECWONMJBKNHTAXRIYFCCUFKESYUZFSHHBHWQKBPRYMDQKQUVKKATPCLXSCMRMCOFNQAAJLNHMWITPCYOMGBRPXUODIVELNRJLPAWFLAKVVDXYGWRITFPLZWBHVANEDHTVLRTQQAESXHDIZFSANWLKJFLZSBJIFGOTGIOOGHSJQC");
    msg.ccount = 97U;
    msg.cnames.assign("OWLNZHWBXOGEKFZHLGGPQHLIXGLQPIUCAMOVXCJLOYEZLCEKMDVOSTKOXJHRDLOODVPIPYTAQQXPAOFYBLZFAZEX");
    msg.last_error.assign("GFYUFOMDFYZHTHRFRUXQHAMTMGNEQGDDZAOYUOGZSHSWCGPXNLQRLCNXVIIDLLSCBJWLOOSUCSGXOFVBNAVTHDJXBZZBHQAROQPKMMJYKLJNRLQMWPHNYPSXCXCKBLLPONKNWSTQXEESBWDDIQVWAVOUHJYGWRBRJFSOIVTWCIPGUEVFZKMJIEZJLAIAFYPVQRKJXTYAATTPPKAFFHIEWEZG");
    msg.last_error_time = 0.8927418584381585;

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
    msg.setTimeStamp(0.05112175100690719);
    msg.setSource(8115U);
    msg.setSourceEntity(63U);
    msg.setDestination(53422U);
    msg.setDestinationEntity(142U);
    msg.mcount = 152U;
    msg.mnames.assign("HHKUZTTAEQDLLAFUQVGKOQWYEXCCBJVNYZNRBJAJLMSRXVCZMMLOYMWEVKVJUGLMARCRJDFYEMFEJHKXFJSHFOLSECPGRGFYMIGZHAONKGOTITDXQAKIRKIAMWHBFLDVRCXWZZTINZQOZPCBVMEDSUHXUFUAPLVBSGRCWJDXVLBJENSPBZDQEDUKNARCGQBWWTUNPKIHARZIINTXLNMNQFYXWUDPYFTPHYYEPJVSK");
    msg.ecount = 62U;
    msg.enames.assign("UMBEWCONUBEJLYBFNTJMCSGAXPUKUCEZZLAPOUFDZONQNWTQXAKWDJXEEYGVZJKAPDTOTJHFIBYQZLESTYUAUIJTIVJZEQOYXLRHFKNFXVCSM");
    msg.ccount = 106U;
    msg.cnames.assign("LDPQLSJAFRREORSDXREQYSVZWYZAZONXKZSYQWWIMXDAIVKNFSPIBJZLKEIHHATGXWLCRUUFVOIN");
    msg.last_error.assign("WUJUPVJTPUAIHITCYWYHZALXFROFCFMREACESJWDLHTBSNAVLSIGJBVOUHLLMKRFXGNNFRPDHKQWPBRYDMJQKMLKCFQQTTLAHTMHSXCJZNIUJVPMIGPZIYNNZGGSHTTKGEXXCBSAFUZBOSRLPRJWMLCOCAYQXVADDQWDFAOEEYNEYMOSJEQRTYBGJIWRUZKFWVPEBWMNQUXGGNQXFWACHBZSEKZOKMVPSDLQVUOYOITCOXGEKPRUK");
    msg.last_error_time = 0.45366800319685907;

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
    msg.setTimeStamp(0.14854964577910412);
    msg.setSource(17529U);
    msg.setSourceEntity(145U);
    msg.setDestination(18539U);
    msg.setDestinationEntity(216U);
    msg.mask = 72U;
    msg.max_depth = 0.8817220125861971;
    msg.min_altitude = 0.8222490027819077;
    msg.max_altitude = 0.9200552753909278;
    msg.min_speed = 0.4495711329712798;
    msg.max_speed = 0.3591919494803587;
    msg.max_vrate = 0.7780335436193226;
    msg.lat = 0.7286053384999052;
    msg.lon = 0.6997850091559036;
    msg.orientation = 0.6065862165414639;
    msg.width = 0.916308921896257;
    msg.length = 0.36757745440075285;

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
    msg.setTimeStamp(0.24049476747609788);
    msg.setSource(39U);
    msg.setSourceEntity(7U);
    msg.setDestination(11209U);
    msg.setDestinationEntity(47U);
    msg.mask = 114U;
    msg.max_depth = 0.06399593701986706;
    msg.min_altitude = 0.49327233465909714;
    msg.max_altitude = 0.9574379538402252;
    msg.min_speed = 0.35785263228240083;
    msg.max_speed = 0.2646413997462157;
    msg.max_vrate = 0.18470952357705028;
    msg.lat = 0.29943960719804075;
    msg.lon = 0.3210092548854313;
    msg.orientation = 0.28318747982323;
    msg.width = 0.2137823317973866;
    msg.length = 0.1385211390320833;

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
    msg.setTimeStamp(0.7016024771448709);
    msg.setSource(33327U);
    msg.setSourceEntity(138U);
    msg.setDestination(59624U);
    msg.setDestinationEntity(209U);
    msg.mask = 70U;
    msg.max_depth = 0.9900509802425512;
    msg.min_altitude = 0.2357428061128659;
    msg.max_altitude = 0.14216849442906876;
    msg.min_speed = 0.7911071009430495;
    msg.max_speed = 0.7588010640268092;
    msg.max_vrate = 0.9573747494743837;
    msg.lat = 0.4031705287532579;
    msg.lon = 0.5617626863210341;
    msg.orientation = 0.017331623013986608;
    msg.width = 0.2710771111408262;
    msg.length = 0.20161273702648086;

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
    msg.setTimeStamp(0.37763866139021907);
    msg.setSource(39929U);
    msg.setSourceEntity(59U);
    msg.setDestination(28964U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.7838289313123686);
    msg.setSource(32440U);
    msg.setSourceEntity(127U);
    msg.setDestination(21933U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.9181239361805582);
    msg.setSource(7055U);
    msg.setSourceEntity(250U);
    msg.setDestination(3561U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.507432056869679);
    msg.setSource(5844U);
    msg.setSourceEntity(89U);
    msg.setDestination(21748U);
    msg.setDestinationEntity(229U);
    msg.duration = 14310U;

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
    msg.setTimeStamp(0.08862068820148417);
    msg.setSource(50440U);
    msg.setSourceEntity(96U);
    msg.setDestination(32910U);
    msg.setDestinationEntity(152U);
    msg.duration = 63230U;

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
    msg.setTimeStamp(0.9991725641328725);
    msg.setSource(59320U);
    msg.setSourceEntity(120U);
    msg.setDestination(21066U);
    msg.setDestinationEntity(96U);
    msg.duration = 64488U;

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
    msg.setTimeStamp(0.9202206023317431);
    msg.setSource(63945U);
    msg.setSourceEntity(81U);
    msg.setDestination(52998U);
    msg.setDestinationEntity(211U);
    msg.enable = 87U;
    msg.mask = 3371087008U;
    msg.scope_ref = 4024542942U;

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
    msg.setTimeStamp(0.6123727332054703);
    msg.setSource(34521U);
    msg.setSourceEntity(128U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(91U);
    msg.enable = 136U;
    msg.mask = 3843584199U;
    msg.scope_ref = 2267413414U;

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
    msg.setTimeStamp(0.7347262852260108);
    msg.setSource(54188U);
    msg.setSourceEntity(225U);
    msg.setDestination(12462U);
    msg.setDestinationEntity(209U);
    msg.enable = 247U;
    msg.mask = 4118922343U;
    msg.scope_ref = 191058456U;

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
    msg.setTimeStamp(0.7613697211352161);
    msg.setSource(24793U);
    msg.setSourceEntity(19U);
    msg.setDestination(42486U);
    msg.setDestinationEntity(18U);
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
    msg.setTimeStamp(0.2943298496186092);
    msg.setSource(50874U);
    msg.setSourceEntity(161U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(159U);
    msg.medium = 160U;

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
    msg.setTimeStamp(0.7302792857989485);
    msg.setSource(49751U);
    msg.setSourceEntity(136U);
    msg.setDestination(15954U);
    msg.setDestinationEntity(6U);
    msg.medium = 40U;

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
    msg.setTimeStamp(0.07098688162740296);
    msg.setSource(37770U);
    msg.setSourceEntity(85U);
    msg.setDestination(54345U);
    msg.setDestinationEntity(89U);
    msg.value = 0.4574258222479456;
    msg.type = 251U;

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
    msg.setTimeStamp(0.45606228494157297);
    msg.setSource(53603U);
    msg.setSourceEntity(115U);
    msg.setDestination(40963U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0023490993607299115;
    msg.type = 136U;

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
    msg.setTimeStamp(0.9235887927270228);
    msg.setSource(18773U);
    msg.setSourceEntity(154U);
    msg.setDestination(33588U);
    msg.setDestinationEntity(173U);
    msg.value = 0.9947885494983383;
    msg.type = 206U;

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
    msg.setTimeStamp(0.9156805856397582);
    msg.setSource(9269U);
    msg.setSourceEntity(237U);
    msg.setDestination(47043U);
    msg.setDestinationEntity(55U);
    msg.possimerr = 0.9430189934268572;
    msg.converg = 0.8349253456628822;
    msg.turbulence = 0.8589982836825371;
    msg.possimmon = 90U;
    msg.commmon = 47U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.7033786833254494);
    msg.setSource(34249U);
    msg.setSourceEntity(139U);
    msg.setDestination(17283U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.8031544998938672;
    msg.converg = 0.208913794430156;
    msg.turbulence = 0.4447551491094206;
    msg.possimmon = 100U;
    msg.commmon = 95U;
    msg.convergmon = 1U;

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
    msg.setTimeStamp(0.7551669461248623);
    msg.setSource(57379U);
    msg.setSourceEntity(48U);
    msg.setDestination(36415U);
    msg.setDestinationEntity(181U);
    msg.possimerr = 0.16740237820583825;
    msg.converg = 0.624476665493562;
    msg.turbulence = 0.1720870987153843;
    msg.possimmon = 196U;
    msg.commmon = 101U;
    msg.convergmon = 203U;

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
    msg.setTimeStamp(0.976784207144931);
    msg.setSource(10261U);
    msg.setSourceEntity(130U);
    msg.setDestination(43663U);
    msg.setDestinationEntity(24U);
    msg.autonomy = 236U;
    msg.mode.assign("YWRODXLMDZQWIWKRMHQAFBEJKRBCONUFAFJKYSJGULLIMEFLAPXHMBRSQCGDNIMNTJOTWBWBSYVVJREYSEUKLEZPEASQBBPCFJJIPPQPFMZGCVYGOUEHGCLYAGUKEOLSZDOPFDXHQUBFEANYXCHKPVKTMSIVRDQHYZEWDKWVXJGAMBSIWHRPNMZFGHXCOQKUWHXANIXWLTC");

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
    msg.setTimeStamp(0.32595754550942546);
    msg.setSource(53926U);
    msg.setSourceEntity(168U);
    msg.setDestination(30389U);
    msg.setDestinationEntity(157U);
    msg.autonomy = 83U;
    msg.mode.assign("TYOSZPPDECHAREMEDFMFTUKQVDNQRKTCOTHJWHOSZUYWURWNFRHABPSKQHVTGBLJKQEPZCJITINPLPFSAEXOKQROXCUUXGRZJUMHUCYWOQSVXBZNIWISYWCNPEUSBZLWVKRGUQAVOGGOLDBXFBYLFLAMVXPTQWUBXGAXCIBVGEIDTCQCAAKDYEDHVHIIAIMFGOKGJNKSVGYTFMEZXMRJJOAWLRWDI");

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
    msg.setTimeStamp(0.22211195586704002);
    msg.setSource(51348U);
    msg.setSourceEntity(129U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(57U);
    msg.autonomy = 239U;
    msg.mode.assign("OLJTHZLCJFXNONEVCGLHLMUCJZYVQHYXEPQWFRPRTSSEAAQHUMPNI");

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
    msg.setTimeStamp(0.16859327781448674);
    msg.setSource(44642U);
    msg.setSourceEntity(3U);
    msg.setDestination(28545U);
    msg.setDestinationEntity(114U);
    msg.type = 65U;
    msg.op = 78U;
    msg.possimerr = 0.08559075494147017;
    msg.converg = 0.7709853178990824;
    msg.turbulence = 0.4448585491989986;
    msg.possimmon = 9U;
    msg.commmon = 79U;
    msg.convergmon = 192U;

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
    msg.setTimeStamp(0.26779293156620776);
    msg.setSource(30016U);
    msg.setSourceEntity(172U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(225U);
    msg.type = 54U;
    msg.op = 239U;
    msg.possimerr = 0.3420939783434239;
    msg.converg = 0.6785319918051529;
    msg.turbulence = 0.2425569210595271;
    msg.possimmon = 123U;
    msg.commmon = 214U;
    msg.convergmon = 213U;

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
    msg.setTimeStamp(0.3972120476419223);
    msg.setSource(23626U);
    msg.setSourceEntity(43U);
    msg.setDestination(58073U);
    msg.setDestinationEntity(250U);
    msg.type = 65U;
    msg.op = 0U;
    msg.possimerr = 0.010788536344440214;
    msg.converg = 0.37730538339783437;
    msg.turbulence = 0.808860584830757;
    msg.possimmon = 7U;
    msg.commmon = 179U;
    msg.convergmon = 18U;

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
    msg.setTimeStamp(0.5461185574840078);
    msg.setSource(11483U);
    msg.setSourceEntity(138U);
    msg.setDestination(3581U);
    msg.setDestinationEntity(14U);
    msg.op = 173U;
    msg.comm_interface = 28U;
    msg.period = 15500U;
    msg.sys_dst.assign("AJNJVYFSFDMGKEPYEDKCSJAUNMHDPHRGHCXCUJDERJQMLHXIMAAFAKOUPOHIBKKLBEKBDHKDRPCNRTBFWEEVGIVDVTQPOWVTATAWNZHMGGCPPONSFYQIWWFRNFTSWBZXHLLFUSQTBPIOCCVXLPXYTEDZBRJSVZGFRLZIOMEHYMYXUBJVISJLODLZVRNKWZIQZLHCJYJNGYWLGEYNXMKQNO");

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
    msg.setTimeStamp(0.3658377970480766);
    msg.setSource(4679U);
    msg.setSourceEntity(57U);
    msg.setDestination(60444U);
    msg.setDestinationEntity(16U);
    msg.op = 32U;
    msg.comm_interface = 147U;
    msg.period = 63954U;
    msg.sys_dst.assign("WAAGCZYPLOHVTVYDNJUKPHKDWTSQJOMEPUCJQTMEJABONDVGBVR");

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
    msg.setTimeStamp(0.9823191196737058);
    msg.setSource(2949U);
    msg.setSourceEntity(45U);
    msg.setDestination(33700U);
    msg.setDestinationEntity(17U);
    msg.op = 13U;
    msg.comm_interface = 174U;
    msg.period = 55026U;
    msg.sys_dst.assign("KPSRMKEZIBTPNSTLCPHFEQFIZXZSDDPWBKRENDGIVEGTEIVXSVVUSGUGQEQXPGFIIAKCHIHRDFOBLAAMRAIIOCJZSCPDQWLONVOFIGKONCRYNXXKRHSCTKJWNVZTTGHQPBYQCWBAXNFBFGQQSDRPRTTMHMRTXLJCEMHPZWRZVNKDZOQJOVQYFKAHUNWZBFEPXLHYODTWVJB");

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
    msg.setTimeStamp(0.29077651133854476);
    msg.setSource(38919U);
    msg.setSourceEntity(75U);
    msg.setDestination(36113U);
    msg.setDestinationEntity(192U);
    msg.stime = 1404605583U;
    msg.latitude = 0.8357907183470854;
    msg.longitude = 0.32723746058640046;
    msg.altitude = 20500U;
    msg.depth = 59834U;
    msg.heading = 21011U;
    msg.speed = 21699;
    msg.fuel = 79;
    msg.exec_state = 22;
    msg.plan_checksum = 36118U;

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
    msg.setTimeStamp(0.05275524386558661);
    msg.setSource(55693U);
    msg.setSourceEntity(148U);
    msg.setDestination(6549U);
    msg.setDestinationEntity(180U);
    msg.stime = 2556073173U;
    msg.latitude = 0.005297525492711674;
    msg.longitude = 0.530971616108253;
    msg.altitude = 43326U;
    msg.depth = 46339U;
    msg.heading = 39831U;
    msg.speed = 23086;
    msg.fuel = 116;
    msg.exec_state = 59;
    msg.plan_checksum = 55287U;

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
    msg.setTimeStamp(0.15282261200634617);
    msg.setSource(58752U);
    msg.setSourceEntity(146U);
    msg.setDestination(16020U);
    msg.setDestinationEntity(140U);
    msg.stime = 689862318U;
    msg.latitude = 0.3493465698949091;
    msg.longitude = 0.7752829225999847;
    msg.altitude = 39630U;
    msg.depth = 49568U;
    msg.heading = 16582U;
    msg.speed = -28090;
    msg.fuel = 63;
    msg.exec_state = 64;
    msg.plan_checksum = 65214U;

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
    msg.setTimeStamp(0.8933456086764558);
    msg.setSource(20846U);
    msg.setSourceEntity(59U);
    msg.setDestination(54966U);
    msg.setDestinationEntity(127U);
    msg.req_id = 6678U;
    msg.comm_mean = 200U;
    msg.destination.assign("ICZDTLPCRZACZNRPLQPUVOWXAWLYKBEOWXXIFRCYJMBIICCWQVCWSJWTVZNTUPQQXYHBZVKYNTSMUWJDUSHBDFATVPSEGLDHBYGSIAFRBVRXRVAIWEFGFNJHFKEKBNANXWNFOQQJEOZUEUKLEJXIPMQKHJPOIMSZMWKTRXFYBQVHUTYRPLUDJYGIGHDZFEFRSCGOZQMNLUZSRNAQXLPOGHOBPTMSLMAEXGGJTAEHBKYVSCVAK");
    msg.deadline = 0.20786458689999754;
    msg.range = 0.20986440643134296;
    msg.data_mode = 242U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 88U;
    tmp_msg_0.op = 217U;
    tmp_msg_0.request_id = 6998U;
    tmp_msg_0.plan_id.assign("KLMUZVLBAAQRCGSHEBOUAJVENLVQPPHJZYBLFBEJHQYVBYWPGSXLMQHXNEHNZLOAPGPTWPODURKRJRZYWYVCJMJOCIRMEOFOUMEVZFNAIDPFETIQSGBGHNSQVCWRAKCCBNUXQKDUEMLSCRNUEYTHUWVBGTWNKALODYKCTFAQTXKGVIXLOIQXZXTWSJMMTITOMDRZJAF");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2879035215372894;
    tmp_tmp_msg_0_0.lon = 0.9192612716203988;
    tmp_tmp_msg_0_0.z = 0.6997944377705287;
    tmp_tmp_msg_0_0.z_units = 244U;
    tmp_tmp_msg_0_0.speed = 0.6386138838248065;
    tmp_tmp_msg_0_0.speed_units = 124U;
    tmp_tmp_msg_0_0.start_time = 0.010647375748388366;
    tmp_tmp_msg_0_0.custom.assign("GLDQSXTSKHDBOSKWAUBQP");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VLFUZBUWXQONLFJTURS");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EBMCMLEQZSIRMGJOQVG");
    const char tmp_msg_1[] = {-93, -1, 33, 13, -87, -55, 31, -72, 84, 16, -111, -71, -127, 3, 29, 36, 74, 54, 114, -45, -32, 35, -84, -87, -126, 104, -72, -89, 101, 94, 69, -8, -9, 56, -77, -96, 119};
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
    msg.setTimeStamp(0.8724165077454604);
    msg.setSource(45668U);
    msg.setSourceEntity(219U);
    msg.setDestination(15211U);
    msg.setDestinationEntity(123U);
    msg.req_id = 54403U;
    msg.comm_mean = 178U;
    msg.destination.assign("FTKSTKJEPEYFWMFPWYVKCRLBLWCBQVUBGKWNIOLDAJVYMWHXTXCMJZTQVUEAATNSRMMXE");
    msg.deadline = 0.7821287288321498;
    msg.range = 0.3100251711272567;
    msg.data_mode = 38U;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 179U;
    tmp_msg_0.x = 9263U;
    tmp_msg_0.y = 40680U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GVCRCIHUQTPFHMHWGRNFTB");
    const char tmp_msg_1[] = {69, -52, -78, -109, -8, 113, 55, 46, 97, -94, 68, 110, -110, 111, -3, 76, -114, -113, -80, 95, 53, 121, -6, -76, 17, -14, -31, 75, 105, -34, -105, -68, 8, 39, -48, 80, 7, 55};
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
    msg.setTimeStamp(0.6521093300518948);
    msg.setSource(61308U);
    msg.setSourceEntity(99U);
    msg.setDestination(19145U);
    msg.setDestinationEntity(208U);
    msg.req_id = 40025U;
    msg.comm_mean = 62U;
    msg.destination.assign("LGGVGUJKNFECKGWTZJNRDVHRDZXKPZASOWFROWSXVIUYHU");
    msg.deadline = 0.5765340106985235;
    msg.range = 0.06544629046998662;
    msg.data_mode = 148U;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 127U;
    tmp_msg_0.numsamples = 0U;
    tmp_msg_0.lat = 0.044418573566955666;
    tmp_msg_0.lon = 0.4185398033151938;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VZWLKQMYTAUUFMNYMJYCUGZJPHRQSOLOESOVZNIXHWKOLSNZEITDXQDYAJTCIZDNFGQNPDFVGSIBXRPZFHEYBBQIOFXAGFZJCMDRVHJTEHMHIQVBRZQOKCDMUDRPGCCPNTHPQBBLCSRDOCTEEPVKTVEJNJGRKGGUAIYKBPCSSFLEJAASVWQZPYVLRPWHMFMSUAWKXYA");
    const char tmp_msg_1[] = {-15, 108, -121, 114, 48, -71, -59, -66, -39, -58, 18, 20, 34, -122, 110, -106, -11, 86, -60, -71, 80, 63, -14, 75, 116, -83, 99, -35, 54, -101, 100, -93, -45, -122, -11, -111, 79, -23, 105, -28, 106, -87, 87, -66, 1, 60, -121, 52, -79, -104, 5, -26, 119, -2, -36, -25, 22, 92, -15, 89, -87, -21, -25, 49, 67, 57, -68, 124, 52, 108, -76, -58, 109, -43, 18, -113, 124, -89, 41, -8, 89, -21, 99, -76, 83, 52, -121, -111, -93, -51, 79, 8, -126, 102, 0, -122, -79, -42, -3, 68, 62, -100, -114, 17, 29, -74, -72, 3, 51, -105, 20, 17, -88, -36, -117, -59, 101, -52, -95, -98, 10, -14};
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
    msg.setTimeStamp(0.33582271471779357);
    msg.setSource(411U);
    msg.setSourceEntity(222U);
    msg.setDestination(58996U);
    msg.setDestinationEntity(231U);
    msg.req_id = 8941U;
    msg.status = 98U;
    msg.range = 0.2661141743552805;
    msg.info.assign("RQFZCTAAOECBBGJYRSVLZNKKHABUVIGGTXMATKBLI");

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
    msg.setTimeStamp(0.4017140864629464);
    msg.setSource(9646U);
    msg.setSourceEntity(42U);
    msg.setDestination(14694U);
    msg.setDestinationEntity(43U);
    msg.req_id = 51608U;
    msg.status = 254U;
    msg.range = 0.9677735645727852;
    msg.info.assign("UWUEYICXNSUEGIZAVIOCWQZANOJCMJCTYURUEGSDFXRLJMVHMFI");

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
    msg.setTimeStamp(0.9857094274349377);
    msg.setSource(22514U);
    msg.setSourceEntity(85U);
    msg.setDestination(36944U);
    msg.setDestinationEntity(205U);
    msg.req_id = 43737U;
    msg.status = 156U;
    msg.range = 0.9706171754962335;
    msg.info.assign("OASRSOVDYELISGZNSNPMXJNHPIB");

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
    msg.setTimeStamp(0.072756796929912);
    msg.setSource(8182U);
    msg.setSourceEntity(78U);
    msg.setDestination(31476U);
    msg.setDestinationEntity(2U);
    msg.req_id = 23950U;
    msg.destination.assign("OSRKQNILLWJCYJISPXXYWEMUJNWUBGWBTVTVZXAHLKIUJAJDGWNKNHZGY");
    msg.timeout = 0.8646470173719177;
    msg.sms_text.assign("THXFXYAPVCQUGPYJOHDPPKTMLSENJXZBSMDDLARKAFBBLCRRGLHUUVCVROFZBSOWFSOPXBBJUNAAYBGNNCGVNIEUGFQSWAHQYZGLDVFQLMOZDEAWBZMFTYXR");

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
    msg.setTimeStamp(0.8048701150243533);
    msg.setSource(44230U);
    msg.setSourceEntity(32U);
    msg.setDestination(38839U);
    msg.setDestinationEntity(113U);
    msg.req_id = 16891U;
    msg.destination.assign("IDWWPNTPTVMFXZOFJYPYIYZMAGWLCVLIUBSHVDFEHZUJFYLXZGDLCCJPDHKTAQVCQQWVNFLGALYRLJHXBUXAOINBSFCAIXKJNPKPOFRMHAEEJQGDODDPKPXTZYSIGCMQTGTRBMRBMZBAIURWWGQZJLUJNTFUSWYTOEJGCTGCRKRSMZKCFOHIEBQHOSDEXKUOAJYMNB");
    msg.timeout = 0.2918326078826008;
    msg.sms_text.assign("FLDPGLHOROHEBZBRPEPZXHCVTCAKUPACWABRYUUHSDNJXOWOWMXZBIJJOEDANKJYXBWLNZPKHCULQKJQGWNZQTOKFZQFMVFKFLSYJHVQNKMWOSZVRDUKUQGTNBDTJCFYNNAHLVCMZVGBQWSIGA");

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
    msg.setTimeStamp(0.3868577305475417);
    msg.setSource(35460U);
    msg.setSourceEntity(65U);
    msg.setDestination(16433U);
    msg.setDestinationEntity(192U);
    msg.req_id = 62053U;
    msg.destination.assign("UNULFCAQGQBNYBOPYQIFVPFUWXFQOAYHLFSQHVJTCAXJIZTTVHGGLLHOQIHKGVZJQZJXIMNXUKAOBOVRXFUEYEAAWOQGZZGEEWAKFDZKIPWBMURMKRIIEMUELNVEKDCJYZCELNODSJDRBSEKKMPMDAKHDWTDEPRJBSMUGROHMCIYFWOIRSDACSUZLGJBXJVCRSLRPMXDYWFVHHTUZVWRTCWFNSSOPAXMBBSCP");
    msg.timeout = 0.9998714535977977;
    msg.sms_text.assign("HPWZOFWRNBTDWNNMCQGUTDXNNAOMYDKYIJCWGXUVPXLSODNTWLCJUIYKVFMLXZORJLXEFSLJZYUBSWLDZKVAOACJIYVGPLBHKBURDIKRNZRLMXGEENBFZHKHFCSGPWTDZXHRJSOPNIDYYFVTEAPMIZVJQVRGFETPOGFEPSROQQKIQCIKQHVEPUUACMMHNHEAFECLEZCMVSDGTGZHADBLIRQWUWXWU");

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
    msg.setTimeStamp(0.0011955726576611259);
    msg.setSource(28584U);
    msg.setSourceEntity(139U);
    msg.setDestination(65533U);
    msg.setDestinationEntity(80U);
    msg.req_id = 52935U;
    msg.status = 82U;
    msg.info.assign("BDEIYGWOKNMTLCFHUEEBUEAMYQXWWTWJCZKDWNEIMQLNESXXXIOUBBKXFOZJQJDWRIGRVGEJVUDSPVTNTSERMHLSTZHMNHCDALOSPYYHDYDNBMONUPALXITDNKPBNCAUFKQHIVFWPZUVHAXIIXVTLYPOZAQPROGLHKJTLCNFPSOWGQWAQCFVMFPJKLORLSRVQKGUSDSMQVG");

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
    msg.setTimeStamp(0.482303993253118);
    msg.setSource(34024U);
    msg.setSourceEntity(144U);
    msg.setDestination(32152U);
    msg.setDestinationEntity(101U);
    msg.req_id = 47111U;
    msg.status = 237U;
    msg.info.assign("FRLPSWJLIQYFGXWWCABPCMSVVHLPYAEAYPNCWSONEHJBIUGAUFNBOKHBTQNJQPHYSBXLFZLFXKSXUSGWGNKDYZCVQIUGRROPDOEJZTIYEURTIQXVNTTFSTZEAKLROHTDDRQGZUXBKLQSZCEVMDAKCMPZBPJTMGGFQDAUVZJJXKHYSGNPKABHIWWMUFDBXIWZCMTXERWV");

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
    msg.setTimeStamp(0.6783863973985771);
    msg.setSource(8098U);
    msg.setSourceEntity(99U);
    msg.setDestination(58713U);
    msg.setDestinationEntity(114U);
    msg.req_id = 3201U;
    msg.status = 254U;
    msg.info.assign("ZDGTBGJZBISTUEPOXGJHHERUVCGJERTPDEGZQWTHMXIXLSJVNBZUQDKNXABQMHKVCNHYJOTDZWOPZGCYHABILUTBLFPYSFWTGDFXNPWRDIMMPRRKAWPCMCPKJAHKXARQINZXAALJEUDSIGVWXYSINLTQQCAYUPSIUEE");

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
    msg.setTimeStamp(0.4555560830146024);
    msg.setSource(13281U);
    msg.setSourceEntity(25U);
    msg.setDestination(37294U);
    msg.setDestinationEntity(183U);
    msg.state = 84U;

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
    msg.setTimeStamp(0.5524432073013221);
    msg.setSource(20380U);
    msg.setSourceEntity(195U);
    msg.setDestination(54632U);
    msg.setDestinationEntity(26U);
    msg.state = 66U;

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
    msg.setTimeStamp(0.7783563276624604);
    msg.setSource(18791U);
    msg.setSourceEntity(171U);
    msg.setDestination(40204U);
    msg.setDestinationEntity(7U);
    msg.state = 11U;

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
    msg.setTimeStamp(0.15117098632633508);
    msg.setSource(47728U);
    msg.setSourceEntity(234U);
    msg.setDestination(33208U);
    msg.setDestinationEntity(76U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.24018712065871617);
    msg.setSource(48821U);
    msg.setSourceEntity(122U);
    msg.setDestination(19699U);
    msg.setDestinationEntity(125U);
    msg.state = 24U;

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
    msg.setTimeStamp(0.011760024553482795);
    msg.setSource(51686U);
    msg.setSourceEntity(94U);
    msg.setDestination(44116U);
    msg.setDestinationEntity(106U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.12713125601093456);
    msg.setSource(36848U);
    msg.setSourceEntity(61U);
    msg.setDestination(15262U);
    msg.setDestinationEntity(140U);
    msg.req_id = 38583U;
    msg.destination.assign("IKRQTYHADLQZEZGJTPSMVTFIKCVGNJWBJYYUVJXLFTUIAVNGZODYIBDOXTHLREGEXCHSJLWSNOKJMUUAXIFRXQMZDRZRGCRAGAYYNYKSSLZPQKHMPIIBWAOXXSPLEJOUUGWCEYZDSOBIRFQKGBTYCCCDBPHUKHWMBEIHEONWAHNKWZIE");
    msg.timeout = 0.5107862056504118;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.1832996820868631);
    msg.setSource(8874U);
    msg.setSourceEntity(232U);
    msg.setDestination(59431U);
    msg.setDestinationEntity(16U);
    msg.req_id = 8391U;
    msg.destination.assign("PVXSZNJCGIGLRNGOOACSJNWMBKVCDTBQCMIDNBVBPEQRFTMIJHEVZRJAOVATLMTCSZWCZPVRSDUJWIRMJNTVHULCMHIPTIBNANQODAWWHWGLDZWPDHYYLSYNJBLDDGPESYYSYXCUEGDPWNXJFFWQZSCHPSXQXBGADZQRTAFLHEGABEOUTFVEIYXUB");
    msg.timeout = 0.2027521310588224;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 68U;
    tmp_msg_0.list.assign("VPMFXCSMDAXCBHUPMVKOJOCAYFYKPMPYKAWNFJYZIHCIUROZTKWNSWSUIMJOVCGSGNTKYEXTZZRFVMGQSXGIVCGSXZHFALTDTCLAAVAXAD");
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
    msg.setTimeStamp(0.34198536958848147);
    msg.setSource(38355U);
    msg.setSourceEntity(208U);
    msg.setDestination(44325U);
    msg.setDestinationEntity(202U);
    msg.req_id = 48685U;
    msg.destination.assign("VETTXWUHDCHMVQFTHNUVGSBZAIPWALVIJALYJWCUFKINCADYVZTEWCKYXAOJRBVRQTJPUYEWGIZMACRMFDQNMDLDOGQBPDYSYLWAMCNTHVNREZRFPVEFO");
    msg.timeout = 0.5829571660644588;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FEONNUDCIMWIVILFHMXKGGYVRJBLXMEJXETJMEQJTJAQUWQMRDIAIODUKCWMQBANJYAOLTYQMIGBODVUGZNMGRZYTLMLZCIYURCAFNUTPFTXTSPVCBYBHWPDHKXSGNXRWAKZTFJZFZYFCAQFEHEHKNHDBAPVHCXKPWUSKRDVZEOLGILEOLRKZLGUOERBODVRPOXIWLBXQKNQSHOPZYAYSP");
    tmp_msg_0.lat = 0.31357321001459926;
    tmp_msg_0.lon = 0.8492232832757703;
    tmp_msg_0.z = 0.6159635972296579;
    tmp_msg_0.z_units = 39U;
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
    msg.setTimeStamp(0.13807568558376848);
    msg.setSource(17517U);
    msg.setSourceEntity(237U);
    msg.setDestination(38551U);
    msg.setDestinationEntity(21U);
    msg.req_id = 26027U;
    msg.status = 173U;
    msg.info.assign("QOMSIWKBNNXJFKSROZPIXEPVGOZKJEOEDJCPJD");

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
    msg.setTimeStamp(0.6749202035849253);
    msg.setSource(26205U);
    msg.setSourceEntity(35U);
    msg.setDestination(28920U);
    msg.setDestinationEntity(79U);
    msg.req_id = 26217U;
    msg.status = 60U;
    msg.info.assign("ZCEFQKGFKREPAGTOPXENSTBDMVHRFXVNVKWXVFFTZHIYPGBVCASSJZHLU");

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
    msg.setTimeStamp(0.9942782836744118);
    msg.setSource(24151U);
    msg.setSourceEntity(250U);
    msg.setDestination(4810U);
    msg.setDestinationEntity(33U);
    msg.req_id = 5999U;
    msg.status = 79U;
    msg.info.assign("FWURPAFSAWEHIQYKFUKEBZDZTOXRNLIJ");

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
    msg.setTimeStamp(0.03449627899938423);
    msg.setSource(47780U);
    msg.setSourceEntity(108U);
    msg.setDestination(52554U);
    msg.setDestinationEntity(35U);
    msg.name.assign("ELRRVHCQXRGFTQWVPKKJNWIKUBFWANHPIZCRQSHTLXASDWHDJKJFTMYLUUAYKIBDQSXFWVYOFGZZNMLBMFYGYOWBHHLRVHRUBKIXXGDACYAFWOAJSPGJPPDWOHGNUDSAJCVLKMTQSUZNRDPQUUMIATSXIJTVOJUCSCEYMZCXFNBNFHVOERARIBPTUKGPIHQQECOXXVTEIBJPSEMMWBCLWRNEODG");
    msg.report_time = 0.4220440738944248;
    msg.medium = 141U;
    msg.lat = 0.4436890211229486;
    msg.lon = 0.49046337576988774;
    msg.depth = 0.634313956379211;
    msg.alt = 0.6167201266373299;
    msg.sog = 0.4392256353860946;
    msg.cog = 0.8560537169753445;

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
    msg.setTimeStamp(0.6092007502343224);
    msg.setSource(62968U);
    msg.setSourceEntity(58U);
    msg.setDestination(33411U);
    msg.setDestinationEntity(140U);
    msg.name.assign("LFRCTXCYTDRNWJNQGAKQAKANXGIAEQALJWCXLNWICIWHPLHWOLGOOZPXVOMGJOBVVGDJPUDFAZURLLCTHBEWMWRFBQRB");
    msg.report_time = 0.04411982866361486;
    msg.medium = 104U;
    msg.lat = 0.8222397911718919;
    msg.lon = 0.1722124930646668;
    msg.depth = 0.840664912446137;
    msg.alt = 0.3685289777958368;
    msg.sog = 0.962016452063086;
    msg.cog = 0.35599247391161726;

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
    msg.setTimeStamp(0.5519974104308332);
    msg.setSource(14481U);
    msg.setSourceEntity(132U);
    msg.setDestination(11252U);
    msg.setDestinationEntity(130U);
    msg.name.assign("MIPHVTMINNKKWNFEFDMAQDPARBCQFGJUYGERMXUTWIIKJCUYSQPUVQPAGCCXLHVIBSULMBEVWTZSTRXSDTYIRDJAQWZZAOXJNFUWFNDVMTOZBFKPPXCDQTUHIBGGOBHRYVLLODWCYJPCDNJVKZRIZJZXBFHVEQBOMFOSEJEBLMTYTSFPPHWYYMWHRVXKGZGPADHSLMZKWLAHGEKLNGUNNOQHDXIXKSJLQYQO");
    msg.report_time = 0.5808506792359412;
    msg.medium = 229U;
    msg.lat = 0.18529194609270017;
    msg.lon = 0.23750063511541497;
    msg.depth = 0.289932976070597;
    msg.alt = 0.6986130192772206;
    msg.sog = 0.6819849442892499;
    msg.cog = 0.22355735770194773;

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
    msg.setTimeStamp(0.0038300809039871764);
    msg.setSource(38827U);
    msg.setSourceEntity(121U);
    msg.setDestination(13226U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.9350199109643821);
    msg.setSource(17698U);
    msg.setSourceEntity(2U);
    msg.setDestination(31717U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.5011818193532785);
    msg.setSource(414U);
    msg.setSourceEntity(140U);
    msg.setDestination(18941U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.34934107043069884);
    msg.setSource(54857U);
    msg.setSourceEntity(17U);
    msg.setDestination(64780U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("UPEJYXGNOBNHNWEWEMHXTYQNGQXT");
    msg.description.assign("OFYSYLGCBNWAXVMUAWZEIHBOPNJBLNFUCMCKKEFIKHQHFVTJYWQLEOUOEUMCLXIESWHGVITAXXZCCDPRMWSZRRYMJVREOYJTSZYHRUBSJXGXQXXKGRQMMYBUFQCPWUPVJNPDSLIKCFINHHNODEGDDSTLUKKNRQLLNNYEQLMGBOOSFPZVQCHTAPAFFANSMJVTDVJAWTULXDPBIDPATOREHYJBTSZIPHOZDX");
    msg.vnamespace.assign("CPZPCCQUSVVYWBQKFLPSIOWOFPJFMOEPMEFKWXJHZRCOHUPDWTLAKXJDQASZBRYKCWVZYRTWBSHNBJYIGDDLYRSGKYJGQXAZNMSDSHGXRGJNZPYWQLJXBNXVRMINOTHIKOZXPAWLMULDDCBQYQFOIEVUPUEZMAMXACMTAFDFELRIJTHVWWTGBBTMOFC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HWAAQZSYQPUPUHKRRGBQIVXPYFZMSFPWRJWBIRWUZIIOYXRDBQBEMMDXFVBVAUQHKZYMRYGKNKFGJWTVFAIKWSSOGJDEQHASHNJQDTKICLUQAMWNYMBVVNOEZUORLFZMLIZQCCCZBSUOGRVYHIFXBLTXURNTTCHLPNODGDZJLNGJAWXPHAGBDVIPCJTWCFCYOFZMRAYDYTESCLKXTVLPJMAHSMSCVNIPJU");
    tmp_msg_0.value.assign("YWMOXQSGASAGAGUONVIIEATKSKFBHFUMTCAHKXHLGTWMHCUVZKZVHGXUREMDKRRKMOPRBBIADZVCYYXJMRTAHRIJLQTBOWQIJJLSWPAIPOCZDVJWDMTJGCEDTBJPBNVBWJRRIXEQBLCDKEKPOZWNEXZWSULSRMCFPWMDXCNMLLFEVSNNVKDUNLSZDBSTQYLIOCFGQTIKAGJFVQYFNHDEPNGHHXCZ");
    tmp_msg_0.type = 53U;
    tmp_msg_0.access = 127U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PMSAESNJCCUTXLSGSGLIOOLVGCBGNYYPPKUUIZFIWXURRCGFNWQGIKYNBHQYZRVCZVNJLMTVHFSDUIOEFQEWKWVURLPYDMEPWMFDMWORVLKTMSLEPWWXSFDIXTJKQBIQQDXOYDAOEJMFNCHGVJEMEUDAKYAKFLYSFJAXRQDIHWZCRHVJZAQPCZU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("CGZKLVZCAUSBYVGJZFZBOEJHISABPAOCNNRXHAZNLUCFMWVMYGRLXDSIFDWDJNCKYVXPUDEJRQWYVZRTALGDUPRMHCRMELXAMPSZBRNJQNYPKXWM");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.9547818667790282;
    tmp_tmp_msg_1_0.lon = 0.23937134833481677;
    tmp_tmp_msg_1_0.z = 0.6995762517972333;
    tmp_tmp_msg_1_0.z_units = 173U;
    tmp_tmp_msg_1_0.radius = 0.5190515462731784;
    tmp_tmp_msg_1_0.duration = 7514U;
    tmp_tmp_msg_1_0.speed = 0.04678812228254736;
    tmp_tmp_msg_1_0.speed_units = 20U;
    tmp_tmp_msg_1_0.custom.assign("CJYSPNQEQSGGBJXPMFXXIDNNTENNKYTXMHNVMWMFKEDHBGQRGPHJJTCIZGMIYMHWDDOGSWCOYVJFYKERAGTBVNQBHPRRXUSAVZOBHBWBWRWUVPENLTJDYISBATOCZDFLHLGVAUFKFMZIMEOLFATORDSICLQWQNBRSHKJLTXXZOEZYLUSROLEHFCEGFNKKYJLOJUKIPIMZVXPDIGPCZMZULVUBQVRACDVHCRJQUUAD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::IridiumMsgRx tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.origin.assign("RKSFWPGFWIDHPVSXJHICZMFEFMGCLBWPDKQJVEBGSKYAVZYYXORNGZNXOFULCBMUFWLNXQIATDPAVQRTBNKNXSGOXQHFAQQOTILFO");
    tmp_tmp_msg_1_1.htime = 0.21054364985588292;
    tmp_tmp_msg_1_1.lat = 0.05104454818146431;
    tmp_tmp_msg_1_1.lon = 0.9465524798532614;
    const char tmp_tmp_tmp_msg_1_1_0[] = {-115, 113, 3, 26, -6, -121, -77, 30, -29, -16, 74, 113, 112, 95, 4, -39, 36, -52, -72, -78, -48, -117, 110, -32, -40, -23, -43, 17, -80, -57, 31, 88, 20, -103, -2, 112, -19, 40, 8, -107, 93, 65, 7, -67, 20, 44, -48, -120, 67, 6, -122, 74, 86, -7, -79, 2, 100, -41, 96, -2, -31, -52, -90, -56, 20, 107, 93, 106, -24, -112, 71, 51, 93, -93, 113, -118, 113, 30, 37, 120, 39, -1, 87, -69, -33, -120, -121, -30, -108, -128, 22, -68, -22, -34, -88, 3, 52, 5, -64, -15, -68, 67, -108, -9, 90, 43, 111, -93, -52, -20, -58, -84, -28, -87, -4, -40, -34, -74, -49, -32, -77, 84, -89, 25, 85, -40, 100, 103, -111, -10, -17, -84, 17, 3, 6, 107, -48, 75};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("VDCKQUPVVYUXEORTYWRRDIPGXOLDTKARHTJAGGOYMYVANIUOFNBEQNEGOWTYTOSDAHESQAPFVFGHJPBNSCHHPNGHZVOKAXYIKCEIAUU");
    tmp_msg_2.dest_man.assign("ZFTTOELQCQQSTSMEZULKEPKOYAJUJEHHPUMVVOTNQJWKOHANNFVXWPUOENZXKADCOBKEQNSRGVHCXICVXIERZYHTMS");
    tmp_msg_2.conditions.assign("ABJXHOCYQPWQNIYREELZOHMXLKMTVJQRMERHZDVZVWLSOCARAKICLUEQVTQOGPUZKXGAGZVYKMTVFMCDXVFDSNNKFUHDSIDQBSOKMWYNJYNHFMWNTNBOIPTFGDYWCBANFPUQPXBQWGRZLBGGHRZUENJIJCFGDQIPJLURKAKEMLWJCMGHXZWUPFXQMTCHEEFAUAUNDAYHW");
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id = 35U;
    tmp_tmp_msg_2_0.angle = 0.24501591484831786;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::FormState tmp_msg_3;
    tmp_msg_3.possimerr = 0.7721873985424575;
    tmp_msg_3.converg = 0.43307100236058893;
    tmp_msg_3.turbulence = 0.3707463630407518;
    tmp_msg_3.possimmon = 30U;
    tmp_msg_3.commmon = 163U;
    tmp_msg_3.convergmon = 223U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.14348829756951664);
    msg.setSource(44199U);
    msg.setSourceEntity(251U);
    msg.setDestination(42684U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("UMTVMNJCEOQUDJBULUFPEAKBJCKVSDIPPLMOFYRNZUXWQUYAWTGLHHDVBVEGXNOBBIRRZFOJWFMZTAPGGTIYLGEITDSFWVXWDIHBBVSOAKYSW");
    msg.description.assign("PMXFIYPNNQNAYQVGZMFSAXBWHHCPJOLHTXHIACMREZOHMPYUQYSNQVMTHWCIDGVHGLKGRAEQRKKSCYWBTIVQCFAOGBVEJLLIRKBYOXAIOYQOXOPETEFDZTCXWAFJWBZPGHNKFSAQNZWMMXFXBTBTNCBLKBLUCNDKUCVEINIRKJBSTNKYTDULASUJFEJRSJEPQVUIWWUDDHSLDPY");
    msg.vnamespace.assign("RETKUVQDTZEFRDEKSNOPRFFVOYPYUHVIINNKAXTLWOLXBJVSQIVSQGBWHWULHTSGYJEMDCIGKPQWVSJJNGIYQUCDGPTNCOWRZRBEOHADIVQDPOIKVHGEQAAYOAZAYOXHHNZZUPEMLRATJSDFFEWKCHBYCXXXKLZBGGBYXFSRQMMJXQNKZDMFVTNBYKLAFWUPBDAEECLIFXCLJPRUH");
    msg.start_man_id.assign("FYDMJWYPQVVSTFWFQDTNQZQHHWRZAAFAHCPTLNQUVBTLGXRKTUPTLFJCOLYOAYGDDZKODZAJEKXUMRGSRSMOWNBJZQVCGWXVULBAIJFTOWFSIBLHRYMGMXVEVZGBMLRQYWCBVPWSSPOSXCRMJCPMQXOTHWOSBGZEYDZGKXHNXKAUYEVILPIJVIGIGENEIBYUDFOOBPMUQFKUJHDDDEZQXIJHZPAARTCJIUU");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TOFWUCPKFPIOQGMEGQLJIUIBAJKFQMJMDTEFGGVNYWKZLWLGOOSXJOLGZZUTLNARVWQNKXUWSJAKVMOBRVBQXPPFQSHLGQOBUIVCLIMKGSFFRNWAYPCMBASCTXDWRZUZHYMOUYHAAAPZBQTWZHINXTCVYRALDFXCMYHKFVVHCDDEBJSHSKPWIDRYEAZNZHPHTCSSTJWENZNXUYKQJBSPMCDRDQGVYLKMEXUDTOJVLRNDUYCBJRGNH");
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 28262U;
    tmp_tmp_msg_0_0.lat = 0.08490793503750549;
    tmp_tmp_msg_0_0.lon = 0.7629318524960986;
    tmp_tmp_msg_0_0.z = 0.9780717867674283;
    tmp_tmp_msg_0_0.z_units = 141U;
    tmp_tmp_msg_0_0.speed = 0.11682464289815497;
    tmp_tmp_msg_0_0.speed_units = 222U;
    tmp_tmp_msg_0_0.custom.assign("RSZEUSDSKNWUWZKVNXLNSYDFLFZOIWBBDFTDUEYCCICARFAFYJARZCHPHADZBAMOBMRCJGYPQVQGKKSINPVMEMPJOKZQWWOXVTBSNAWYPTJJVWTZWIYEYMTNGQZFIERAHHBJEZKBXWPCWCHBXHGSMAUBHEIOXTJTLFDEEJLXNVQRBR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::VelocityDelta tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.2310897942328537;
    tmp_tmp_msg_0_1.x = 0.9192305887561724;
    tmp_tmp_msg_0_1.y = 0.19453365504965914;
    tmp_tmp_msg_0_1.z = 0.09304695396972007;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::IndicatedSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.7061860065351565;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QMEWNKLQHLPKCYWAXQQEUSVSYWZWVWCCPWJUVZBTGMYGBJKMEAUEUUXJTNEVLRIWKYOHGIFXBKLTCCLKNEHQAPSBNPOZGPZCGSSSXXZAUBFLDVRDFAPMKIHIFJAYQCTPTCXDGLSJIWNZHFOTJHJSMIMDOMLWKQDOCBFSIAUMMUQVNEQZ");
    tmp_msg_1.dest_man.assign("QADFXNKCEKKIVNHDOBSYVLBFSTIVSGWLROYHENTCGQTIZZGKDCVYXAQHGDNJADUXHZMYZBATNLFEPWJJCOGAHBPQUGBLGJZRFEPZDWFRMOKXTXVIMWDDCSIBQIFOXQWZYEIRCVWOGKJJFKZPQNBSTRHMYOEQNKZ");
    tmp_msg_1.conditions.assign("XXRMISJJTKKKJOBKDYRFZMLIJXWRPGTANGQBRFDZTZOLGJHLHIAKTWIBDPDRATBBVCVNQIETOUAPLAOAZVLSNLYWFQCGUZYZMDZVQLDGKPVBDE");
    IMC::MonitorEntityState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.command = 1U;
    tmp_tmp_msg_1_0.entities.assign("IWPEIBNNIJQGHOBJFVZBEBACYPCBZPDLZUJTRVAJQEOPYPBHEKSGPLNOJVJZKDTNDOISNKYZSMWJROWXFVUJLKUALYKPFCKQXURTDVTDDHIWCTYKMAFXXKAQGETHBHN");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::CommsRelay tmp_msg_2;
    tmp_msg_2.lat = 0.021777754247432113;
    tmp_msg_2.lon = 0.2515721788203922;
    tmp_msg_2.speed = 0.7694035142627488;
    tmp_msg_2.speed_units = 98U;
    tmp_msg_2.duration = 17920U;
    tmp_msg_2.sys_a = 63292U;
    tmp_msg_2.sys_b = 55794U;
    tmp_msg_2.move_threshold = 0.4697354808689813;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::DissolvedOxygen tmp_msg_3;
    tmp_msg_3.value = 0.6215494571410721;
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
    msg.setTimeStamp(0.560031350763147);
    msg.setSource(63372U);
    msg.setSourceEntity(30U);
    msg.setDestination(51302U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("JXYBBMDJINCGNWRABYXSNCZYMHLCPPGZISVUAEHHBMXQKWWGDKIPNQUSYFUPGFZJXVEEAZWTGWJQAYDIHLOKWDECOQPMGSPGSGRTRQTTEVJFXDRTNIDRZSWYMPSLCHZUOFDLGEUFHVFCMOSTBRIKTNPSIFAZLOWRKHSJONQRWIUFQLYXFTKJBPNEKVHJDYPBTZUCCAAWQQGOLKRI");
    msg.description.assign("GQWYGREKFKFBPBBTQHPJKFJLKSTOPDEFXIUIYVLZIMQOEBQGGEAZJHEUDXEPJMVPLJAH");
    msg.vnamespace.assign("HODZPVRSDIQPWHXQTQMXCUBDJUQWOFLFFNRUAFYPCRTSEARANYLWETEJKZIXCEHLUESHGOOZKXIHZVEJDADLSABEPSKFTBIRVKHBSGXAVCBMYYYLZTMZIGDGVGRPRMLCNPWUDXXQXKVTHNKMAWJSCEMTJLDZUJUOBQ");
    msg.start_man_id.assign("OUWACEBPUHWIXHXGEGAYQFKWOYBVYIQEWIFVVTKHHTRZDJRMYMFJNFSCMALYGTPWRSOUWHJCTOOGENRJGGQJZXZVDPFSDINKYQHETJKKDSWSALPN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BZUVLCTNZWANULYODEBSUSUMFNBDPQRAOSIKJGFDSVRIKWJKLNAVKFHJFT");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("ZJOGDNYQEUYHRLRPEDRVVUCVLCWLNDBCKFLWJEUWSIHRFUWDJTMXIWHSWIXKBAHIPCCPSHTGUASXQMYNJGNY");
    tmp_tmp_msg_0_0.max_speed = 0.7254287878566297;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_tmp_msg_0_0.lat = 0.32026465957795625;
    tmp_tmp_msg_0_0.lon = 0.8104685258988185;
    tmp_tmp_msg_0_0.z = 0.7727459616141782;
    tmp_tmp_msg_0_0.z_units = 96U;
    tmp_tmp_msg_0_0.custom.assign("NUUEEEQPKRMAMJASKWCIOFGLQVPHFECYDFPTFMUNGVOYPWHALOGHPJIYMUDKIZRLPTZOQBGWIACIISGSUDHBNNLGYTLNHGBEGVRRDKXJMRXXWZBORGZWFLNBCZFJXQWJYOJIMSIBYTVZCHKFP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PopEntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("SLHNGNXNFGGZTIXFWGDRHWWAVARMUCFHNIBEVSYKFVCMHJICOXBRYPDPBPGEMPXUUXQXABEGUNQHG");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.13677647280992444);
    msg.setSource(60071U);
    msg.setSourceEntity(238U);
    msg.setDestination(34127U);
    msg.setDestinationEntity(140U);
    msg.maneuver_id.assign("PJTDQRGWZYHOOUHMLZUUQATKMOWFICXHEGHTTIVCFZHYMZPDMCSJZBPBOXEJLFRNQWJVYGVNLDBZIKNPAKWTGDZDVVLLFXMLWJULBHJQUCGYCRROYEQSKHXXPTFNDRASSAFIFVAEKFIHIWYGWYGNHUIAMEKOVEE");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 26957U;
    tmp_msg_0.lat = 0.4823955787569546;
    tmp_msg_0.lon = 0.5983171763288315;
    tmp_msg_0.z = 0.3804159230191527;
    tmp_msg_0.z_units = 225U;
    tmp_msg_0.speed = 0.9736201885136966;
    tmp_msg_0.speed_units = 173U;
    tmp_msg_0.roll = 0.37484646352644047;
    tmp_msg_0.pitch = 0.3827511850622827;
    tmp_msg_0.yaw = 0.8232206375137046;
    tmp_msg_0.custom.assign("FHNSWRVVNFTUPIXEBLEFTSSGZOYAZQSJZIB");
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
    msg.setTimeStamp(0.20320539767663848);
    msg.setSource(21778U);
    msg.setSourceEntity(52U);
    msg.setDestination(63870U);
    msg.setDestinationEntity(93U);
    msg.maneuver_id.assign("NQEAZBOJOVTKJCHFYZHFBVINJTFHYPMMGNUEUDTOZEWVZVYHAIBPNSSYFGEXWTNPTEDQNLQNILWMDDGXWTVNGCRCUEMKQ");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 41639U;
    tmp_msg_0.lat = 0.5723230528722213;
    tmp_msg_0.lon = 0.08330976538471335;
    tmp_msg_0.z = 0.8511059563036153;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.speed = 0.1944986448556859;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.custom.assign("UYOQKNSDACUJSIFVMSZRWHAMYM");
    msg.data.set(tmp_msg_0);
    IMC::PH tmp_msg_1;
    tmp_msg_1.value = 0.5727592739715376;
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
    msg.setTimeStamp(0.7187087644811823);
    msg.setSource(11235U);
    msg.setSourceEntity(2U);
    msg.setDestination(32063U);
    msg.setDestinationEntity(192U);
    msg.maneuver_id.assign("PEQZCYHRNLUCRUPMWDTETPIJEZSJOWZDKNUAPTRYXAJYEITPSELZFXEOYFJJBGALURNADZXKJNCVHNEWDHMKUJDGETCCKBSRATUIDGLICERWVNVYWILQOKJACJCFLWI");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 37235U;
    tmp_msg_0.lat = 0.17997859756453172;
    tmp_msg_0.lon = 0.8240303145578034;
    tmp_msg_0.z = 0.3397607212399504;
    tmp_msg_0.z_units = 83U;
    tmp_msg_0.speed = 0.5230159192256577;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.duration = 63070U;
    tmp_msg_0.radius = 0.5556449457155568;
    tmp_msg_0.flags = 30U;
    tmp_msg_0.custom.assign("ZFGITIRAQEXZCBBXDUOSJLHDFNWHSNWAYLPPZWPNNFOVADCFJVLSVVTQFYYMGYZBMMXUSORSRROFJVWHNFKZNOXXNWBSRQTZBQESPEDTWJCEAUMOGVNMFOAUPBHTPXVKQJHJPHBLT");
    msg.data.set(tmp_msg_0);
    IMC::PolygonVertex tmp_msg_1;
    tmp_msg_1.lat = 0.6070010781577735;
    tmp_msg_1.lon = 0.08699253935713747;
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
    msg.setTimeStamp(0.3017561899758454);
    msg.setSource(39487U);
    msg.setSourceEntity(209U);
    msg.setDestination(326U);
    msg.setDestinationEntity(3U);
    msg.source_man.assign("QERTYUOTKVDHLJYQLFSJKYUODHIHVMRWCZMVINTYEHEEVVJCBHPSLWFAXMACASVOCDXWZGWNKYEVTBMSJPAOHYQBNPYYTORKDKKWARGVPORUEFCUUOXLJZBFQJZUAEXKEXFZNWDEFCRDGGGQQINUCTQWVATKIFQNRFLPTZMSGMNCGDAGHBFPBHBMARPDVYEBWIGRRZJPWNMNUBFILOPMTLXLLNWIHJITIZCSXBYO");
    msg.dest_man.assign("VEEXIOOCSOMBAZHWUVCAOQUVCXDUDHDDXQQLGMRHBB");
    msg.conditions.assign("EEZCXYLNCGWHZQDWUDALULWYFOFOGKRJWVOMYCFMBIEBMDRZCEVNZIEORAGXDTXYQVIPTIXSSPGGQBBNHNAGHPAUCQVXIDAGCGNOTARSVZRBUEZMMSDTRHDIPZFLR");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.21776550325127864;
    tmp_msg_0.confidence = 0.09472427868263666;
    tmp_msg_0.opmodes.assign("AWGMBVXXXTBDVQFGPXLKRCNJVNLPIWPCBCMYFBAWTMJMKBKROOSPZLZSIDQUOXY");
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
    msg.setTimeStamp(0.6744226214467075);
    msg.setSource(22607U);
    msg.setSourceEntity(64U);
    msg.setDestination(61312U);
    msg.setDestinationEntity(98U);
    msg.source_man.assign("OKLKHYVLCZDSEURCLJSQFAZBOHGKQHGAWYJHREQPOCHNDSRJDKCJTTDMWKENPPMFK");
    msg.dest_man.assign("LVKXAIHAGEUNNFSPAVHK");
    msg.conditions.assign("OYIQAGCMGBBSPZPKVNCSSNPQKCUIKDUEHVVEZNIIYSUOEYVZUHQNJFFADNXORKWPEYDHKIGXLYROSYOHVEBYQXTSTETCFMHKUXYBIPNFXOJKHVSRHWAMGQKWOBZZIFHYWJTLZAXALWNCBILQLARORPCLEPMMXDU");

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
    msg.setTimeStamp(0.03073892519807675);
    msg.setSource(11451U);
    msg.setSourceEntity(144U);
    msg.setDestination(35386U);
    msg.setDestinationEntity(36U);
    msg.source_man.assign("CLPSSZWJJIWTEIRT");
    msg.dest_man.assign("PIBTEMORWWEKWWCWJMCNXQIJQTUWECTTYXQVUIPQSCKSFSNAJUPTGBYVFMNEHHJHZGQVWEOFLCADXNUJNVPXSXAKFYKNYRZVSDBDENGPTGZZLMQBEW");
    msg.conditions.assign("AAZQUIKRLNMNEINDIMHXRPSYBPUCOKEXDVXCHVYIVONICTTSYNOWDFEBTGFGLFLJKGGWJHUOZMWUNMKUTSDQDQPVTDHMLYFJPMDCFFGCZSYSSJISAKP");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 4015740294U;
    tmp_msg_0.destination.assign("LKSVIYBAAHHZCQMWPREJHJXFALDUSIXQYAMRBOXWAAUODIDTVBIWNDGBPQBOBUVENYNETDMMCKYLUMGGM");
    tmp_msg_0.timeout = 63686U;
    const char tmp_tmp_msg_0_0[] = {32, -1, 108, -68, -101, -62, 125, -91, 87, -38, -51, 37, 115, -10, 66, 103, -84, 47, -20, 103, 79, 41, 54, 86, -75, -100, -90, -16, 3, 116, 30, -105, 53, 66, 39, 107, 53, 125, 122, 64, 88, 66, 109, -68, -33, -127, -124, 115, -49, -111, -50, -62, 2, 61, 32, 3, 121, -43, -44, -20, -98, 35, 116, -119, 110, 80, -81, -83, -90, -82, -106, 99, -28, -47, 51, -57, -21, -4, 107, -68, -71, -92, 50, -118, 67, 93, 47, -115, 104, 86, -4, -123, 4, -125, -6, -126, 113, -73, 95, 68, 42, -82, 82, 15, 16, -59, -11, 19, 60, -20, -110, 70, 23, 58, 71, -29, 75, 23, 67, 15, 109, 68, 126, 42, 58, -122, 20, 93, -31, 126, 5, -23, -38, -92, 31, 51, -115, -67, -14, -15, 88, 76, -123, 63, -46, -1, -60, 37, 57, -71, 54, 126, -74, 113, -20, -68, 46, -72, -37, -96, -22, -103, 4, 8, -90, 94, 19, -20, -119, -79, -10, -83, 22, 103, -27, 101, -116, 81, -116, -99, -10, -28, -64, -57, 101, 39, 51, 122, -46, 35, 84, 30, -109, -73, 70, 1, -17, -8, -59, -122, 72, -28, -78, 40, 50, 123, 117, -74, 9, 50, 22, 21, -88, -55, -64, -64, 116, -54, 51, -31, 60, 103, -27, 69, -13, 122, 116, -60, 118, -58, -51, 102, 84, -77, -35, 113};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.19729058257576304);
    msg.setSource(54369U);
    msg.setSourceEntity(25U);
    msg.setDestination(62525U);
    msg.setDestinationEntity(12U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TTPQKUSATAELHKWVYTMOEXYHONQVEBFGTCTLLCAUYHONYUMOZFEVWNGKRSIUJCXXWQIGFMGYAFHSADZQLMXTZWFWNPNVWBDFLQLORXTRIBLEGJZKHKEC");
    tmp_msg_0.description.assign("GQKKGGFUVRHURLJFJSCQDTSRAI");
    tmp_msg_0.vnamespace.assign("TWRRLEJNYZNOJAWSZRTRGDBPLCPHLJPGUFESRCOGTCVVCIQMEUMUYYHC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AETCWXLJJC");
    tmp_tmp_msg_0_0.value.assign("NAVAJATLIGATXSGJCUKYTGSQXGPDSLQLLSCBOMLERIVHPXKLSTHHFEWWJZMUNUWDOYXFJPZMETINZFEQZGJYAMWFUURSCPLMV");
    tmp_tmp_msg_0_0.type = 128U;
    tmp_tmp_msg_0_0.access = 96U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("INOZCQPNLHSXRAMWRDLFMELFVYJDORPIICAXGHONEQCMPZDOJLYSNUQHMIMGCXNGMVXYTSAEFLAKVWYZLFXCJKEIQHATIXJWOWVFMWNK");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TUWSITVMHLMUVBYPVECDJBABKAQFFRYZSAGSPAFXOPPCDTHCSUXIZFRMJBBEEVKHWYAJVSWURTXGOTLYWHRAENQBPNXIZYQIMJLUDNTQVVOLQGKWZOCHGNENKHNNRJCMSXWXGPSFEOHWRMNFRPEGVFTRXHIZBYWJUCOGSSN");
    tmp_tmp_msg_0_1.dest_man.assign("MKVTZHJFLEFTIPGTDGLVAYEDMXMLUDOBKEKLZTCMWQFKRVUQSGQNFKHRPGRCXWVULDJEEEWFSKGJJZNSIJRAMVIZHPUFANIHCUMYWJ");
    tmp_tmp_msg_0_1.conditions.assign("UINAHPYTRUGIETRGUZYAQJHNHLRIOOJYBDBNOZKDLXGVGKPHWCXARIEZNMKWLTOM");
    IMC::GetImageCoords tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.camid = 189U;
    tmp_tmp_tmp_msg_0_1_0.x = 15444U;
    tmp_tmp_tmp_msg_0_1_0.y = 25508U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsFixRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.utc_time = 0.9451363632667936;
    tmp_tmp_msg_0_2.reason = 73U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SetServoPosition tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 117U;
    tmp_tmp_msg_0_3.value = 0.28095947817540234;
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
    msg.setTimeStamp(0.09638248131657201);
    msg.setSource(32343U);
    msg.setSourceEntity(47U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(214U);
    msg.command = 112U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KQCHSREVOXZPDUGELNROWESTJXUYVPHXDYTKLHNQRJFAAUUMGMSMJJCDWDHACRQVLNOJIWOGUFRQYYODZGUFGZVHOAHDFAGNBASQPMDTFUOBJVIGQSONKWTZWCXWCTOXZCMQYNBBAYDIAXHBVEHVJPJRKQXPSMEEKPIZFVIQBPOSTPIELGEMBZAUCGEITHLTZTYLCBNIUWFWDAYPRMXUDKLRYHWRQGNRYKMLFXV");
    tmp_msg_0.description.assign("UHJTLMVXDPLBFJLBSKNXOILBVIYWCGENNPJVMUILQVQSUKHQGUAZEAVGIADRMPBSWHTILVGDASXZYCFWOMEDIPVUZSRQUPLXFDQHAODADIKRQGHWBEMHXXCKHJCNOIKZCQGIFAKSYSBKTCPFHNBRBZYBEUSITYOWJKHUPZMCGQMZWOFGQKTOFEWATZJBJNRVRDYRNMCOXNKQXSYWRDCTUSMGFPNTVAHJFXDMTEZUXYJTLEZEYERAPWORCVJNPF");
    tmp_msg_0.vnamespace.assign("SCTAFFBCIXYHSUCONYA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EZFMSUJRXPUOXTUUQKVLCSGVIXMJMZMVEKZCQGEVFGDSNNWLPHXBLRPNHBWWOLBLENQVUXLJOXDENOYFFNKPHFMVSQYHECSJYOQYLEHTJQFUIDBDIZTEAPATRTOFBQRKMCDUPMKAJCXDLQCHIGZIRBOGUCDYIPQKTDLKOVZFSBIZRPJMGRSHHWAKAWZFBUCIPSGNTGSYYPWAHZDOFXRQENNOWJSTUDWVRYBWGK");
    tmp_tmp_msg_0_0.value.assign("XKMZOQQNWGLTHTYLSVYUSHINWJQEVNTKIRAGIQY");
    tmp_tmp_msg_0_0.type = 145U;
    tmp_tmp_msg_0_0.access = 225U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ORZDUPYOWUEVJHGEKNNLMRTKLBGAEXFMNIAIRCRDDYQJTATKYTSKOBIZZQXWHFOFZOVNIBRWKCJWGRCWXZATFMGAJEAWMYSPGJECYLQOPY");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GNOWSDOIHNCRVNNAVYRFBHCULAXRJKKMARMIYWETZGIYMVCXTPVZTXCAGLFJTUKAHWPMNHECIUYKVNDEDRJBYVSKOHEGSHLEZQCESEFXCPEBQQRBLWIAMPLAJKFRHUSBWARZRPXWDDTDBMXLBBLGWMCWHPIXUGKJZOLIBWXWZPJYGQNMPXHSLQZTJSGKUJZTJYMDNZCSKQYCTVOBKZVUDVTONUYIFVQSLYXFFJMPEFQG");
    tmp_tmp_msg_0_1.dest_man.assign("FHFUXWTYBOGVUEYOBSTOOVYWNJZRYEBUJASWLCCTIPMYTIRNKMJOTGLOELPHCQSJHXFLEVVUPGVRGELVFAKVYDBKDKIXHKWZTPSVFNIKIIAALFGIXNHPDKUARNMKGXNQFMUABUBSWJRZOCOCEYCSLCPSTK");
    tmp_tmp_msg_0_1.conditions.assign("WTOFOTSHQLQTFXCCZWNCPXXEDMMQORJSIWEHMMINXPUCAAZAXIJSVCHGKFVTVDZHGMQFKGZNBFRIOEIBPAKBOQOGKYLXDMESULREGVUGPESJYBXKFWTHTIZEKHUQPBJPZHKLUYEABVSIARJURXNSWRTZKZRNASGGHPDLKOYCTGCYYNMJYLDWCZMWLCN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::HistoricData tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.base_lat = 0.5321229363359408;
    tmp_tmp_msg_0_2.base_lon = 0.2919862613848673;
    tmp_tmp_msg_0_2.base_time = 0.43255866173138413;
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
    msg.setTimeStamp(0.3479869673817302);
    msg.setSource(29673U);
    msg.setSourceEntity(105U);
    msg.setDestination(33045U);
    msg.setDestinationEntity(232U);
    msg.command = 198U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HRBTSTQBYPDGQILDAGFHPGBHJJFHATFQBMHUCSITNRGQLPJTPGLRPDOFOWZWEGADEVRWZUBNLZUIJORUAOCTCLDKYBRJVDQBNLVVTASBAKZLXUTVJGFKTOSZUQSZQOWSQIFVNJSUXQYBTLWCKIPEDPXMICCPAGGIOBRKWSJZWZOYXKXSCODAHYONKFHJEWNFNXIKYRNECZYUVILYCMMDMRZXRXYPYVMUUHHFN");
    tmp_msg_0.description.assign("GAXSWGSUHZIOWOEOREUBEKYIENCQILXVALTUFEXTPQIMIRRNKBDWZLFLQKPXKKHGZOSGGCPQJKYXYBFADEPJMWAEVZCJWHJZESPEYDFCPMTHCNLDRUOHXIINDLILTYBPYMNIMWJAJMBYFSGFXDURKSUTOBAPYZKBOFWRBGJNQVTTUYHSAQVCWPCMUTQDZMZABDXNRHOTAHMKEFXSVGAVNRQBICR");
    tmp_msg_0.vnamespace.assign("IVQPOKVKKYKHOHNCINDMZIPSAMBAJVTQXCFMYUKLMCFCWWNYBUAKDMOLRWZRYRPLQGWJDOCUADXJKVECYEGFWHNSWKGJPMBJBYRLAVTXEGXSMIMQLIJECYZAYLFGLRRUQBXVBPUBASJYMFIPVNDJTEWUHBFMNTTPHGTCISNADEKQZJWWUZZIHNERXOVERTQOZSLUEZDJRGDZTDKFOGQONNHABOGQVXICFAVWIGPUTOLHFPUSSZFRC");
    tmp_msg_0.start_man_id.assign("GCKIGLOPZPKUMZWBJHSNFZWIBICUNYF");
    IMC::UamTxStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 34397U;
    tmp_tmp_msg_0_0.value = 165U;
    tmp_tmp_msg_0_0.error.assign("GNEIOSCITTMVPKRNDVRDKWQYGAWMOFDPBBZLJINFVYUWGFJSXXOBFCPSOBHZHZCPAWLORCULNQTKFUIYTCNABASVQMEXFXYSCWQABGEIQMJJKWGMJGQTBBVBTCSYQPVEJIPRHINOJFKKWHKGOCZEVBMURANLXELSZPIDSTLZPKYEVOYKZZSMUYUWZWEDHHZRYXLHXQILHUNNRDEOHTAACTPXDCTOREDRKLIYLDDMQUGFMJAWMXFVQ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.05814704823516348);
    msg.setSource(25146U);
    msg.setSourceEntity(113U);
    msg.setDestination(10590U);
    msg.setDestinationEntity(172U);
    msg.state = 42U;
    msg.plan_id.assign("HADFGXTUNAXORKYJNXPRFWXIGSFHOVPIBOMHGWNCBUCXOZJWDSQFZNRJKKYDUBXSJRQSOSZRQMACGAWPHQNYQUJFLLIDLTIFKMUBETKHTQZYZVXTAWGGAIRWVQUOLYZVVSZEPMSCTWAGPAQZKMMPNEGDYEOBSJFCARTPZKXYAIXMCRVNLIEDIQIUYELXJBVDMBSPVBTBLSCKEZOHOCNLBKVPFHCJYJLFETEQFWJODDNHIRD");
    msg.comm_level = 174U;

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
    msg.setTimeStamp(0.09968793314839586);
    msg.setSource(9279U);
    msg.setSourceEntity(62U);
    msg.setDestination(23405U);
    msg.setDestinationEntity(250U);
    msg.state = 124U;
    msg.plan_id.assign("IRNFPITBYEXNOLSVCPNUTZKXVOXDDRPBLL");
    msg.comm_level = 166U;

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
    msg.setTimeStamp(0.06720921055593565);
    msg.setSource(56887U);
    msg.setSourceEntity(117U);
    msg.setDestination(22349U);
    msg.setDestinationEntity(63U);
    msg.state = 89U;
    msg.plan_id.assign("AMQSRDNXWFHGXLTTOBAECMXPICNBDNDMWWHAWECNCJLXZZRUUSLGCVGJMLTZSXYNKEOMHUGZNEDZHVFKGHDFFMKHQDCBVJEVPIWYSSDJKEASRUSMEMXFFMGPHUQTDLB");
    msg.comm_level = 177U;

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
    msg.setTimeStamp(0.7496659457183372);
    msg.setSource(47685U);
    msg.setSourceEntity(101U);
    msg.setDestination(31676U);
    msg.setDestinationEntity(6U);
    msg.type = 136U;
    msg.op = 119U;
    msg.request_id = 54717U;
    msg.plan_id.assign("ASTKZOYIMIRWGSQQOJUJEFHOCGHGKUHDBKNSGZLEQNGTMZT");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 155U;
    tmp_msg_0.goal_id.assign("GPDVEQFTHDVPIEUOEFZEKTGUAGPRWXDJOUFISIRWGRWJECAWYXQFMAQUVARWZJNYCBHSJIODUVPWZBXVRNMNRVEQHJSMRTJNZGHBSNLIYSKLCLHPPITBTLLDIGFBGMQJDMYOTOKAQXKVBKPMBNYFCACHUSF");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("PUMHEJEFYIINMDSFHAZCFWJRUGWHDSAFTAZTCMKCAHMQSBODZDRDHKWAYBLTXJFVJGQKHZNYIZELHEFZINIHVYJLAOUHQICXNXRFYTUVIUYVFRLSGXKJELRLKTQYWGNKOYGZUECGPREW");
    tmp_tmp_msg_0_0.predicate.assign("SPIMMCBLNVJYLNCCXZCKIJGUYSLJFFTNYHWBAYJXDYPENEZDMZRGMCOQMBVQWKYLRSBRAMDMNYURFGCAOKKNYKCZT");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("KTSFYEGILQERSHYXYNFALAARSCTTFZFHPWJZZMWQUMDAVVGOWAWDICSVEICJOAZFWRSLKFBCOCUSMOBJFQPXCHCGNKLNBRDXVRGLMQDWADOKGGJGRHEMYIPVNJYPLYKCIHJTYZOSMIXUDXOWNITQDPFVSPDVJ");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 5U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("FXOGWNCHHOPVNLMWCPBVZTZMAEIIZICIMNOUTZUWQYUYKECLKBQTQRHNERKPYWJZIYRTXVXGFXOSWTQVYNRQFADPSJJDHNEAIMPJSDMBBZWROTVUUUAEDTZZXBMMLOEFQVGXAQJVHZUKFNO");
    tmp_tmp_tmp_msg_0_0_0.max.assign("ZWCXUIGDFWRFFDLDAUVOFNOQBKXVZCVVZBSVKSDNMBHNHGQJCAQLLZHIEKTFTOIMYRGXAJTW");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LZZXNUISHASKKEKUDDIBXCFICSTNFGBXPLJTRRWOCTJAGJVXPDXZUSPICVOCWCNGZZRCDEMHJZQOFTLGEYGNLUEBLUSLPSNZQDYDAWRRDRQEONXWFXUQAFFBHBIWYUYAVBMEJHIMQEQMYHTWWORCNHMKBGMVXVJCHYIJMMJOABAU");

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
    msg.setTimeStamp(0.8406027181912051);
    msg.setSource(28512U);
    msg.setSourceEntity(15U);
    msg.setDestination(56955U);
    msg.setDestinationEntity(121U);
    msg.type = 81U;
    msg.op = 66U;
    msg.request_id = 54337U;
    msg.plan_id.assign("YLWCXHBKLBBETOSJFQHZEKCRYLOMKLJJAHRRNGLWVKIWNHEVNGGEQFWJYDHISIPXDISNPCZNBAZHQOGQGBSVBPBMLCWFJXNXDXZ");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 142U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OYAVFVYKAYMRMHLRDJTRMYATLCTJJLSYAGIKXDUHIGRZGMFGIQIQPNLPUNWJMTQWAQHXRIHVLPSCONBSMCNZOUIVKWCVOUPCHKEQQKHFRLSVTXSQBAGDUMSPLETED");

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
    msg.setTimeStamp(0.1786151023889101);
    msg.setSource(50238U);
    msg.setSourceEntity(218U);
    msg.setDestination(13681U);
    msg.setDestinationEntity(249U);
    msg.type = 189U;
    msg.op = 240U;
    msg.request_id = 56752U;
    msg.plan_id.assign("VBMNNHHZYKVCSBKRATHWTIRWPEAMQZPZYIWNSFYFORJCMMJBMUFECGLDXKGBYSMAXVGDIFIYSWLEAIHHMLKJJBRUBVJNVPZNGCNKRMR");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.32348029897390684;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DXFGWKNNGVSMLFKDHIYUDMXPUQVCZRPGVFRZLEKUQQAAWEOVXCELJLLJQWHEHSZOASIQXVDDLJBIXNZHUXJJYSRXPKDKMOLBOHQVZTJRCQPOGYFLGPNBTPXXFVYIYBCGBNQWUPHDMHCEWZGCAPMJTAH");

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
    msg.setTimeStamp(0.8239430823071967);
    msg.setSource(17821U);
    msg.setSourceEntity(237U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(27U);
    msg.plan_count = 16339U;
    msg.plan_size = 4065674348U;
    msg.change_time = 0.8964416738383443;
    msg.change_sid = 26922U;
    msg.change_sname.assign("NFHJVLZYINMSIUVNEFTEQGCZCQAWZRGWBCTGXMLPANESKSKWXRCDNRUVTQTMLLVAHUKEFPBALJRBOYJMIONLUWIYTAVMRIXKSRUINMGZLYFEORKUYQDXWSJZVNHGJDFPXPNTIXLSEYBPCFDAMPJRVJFEPXHOWAYFOBQUBYRLCALZVZCZTUVFCVZMHCBKGSIOOHHWQTXWSCGYYIWBAQEJOKGSGODUBHDSEPMDHQRKFHPGQADOJDKKUXQ");
    const char tmp_msg_0[] = {108, -4, 119, -47, 83, 15, 122, -13, 57, -42, 26, 43, -66, -25, 95, -113, -128, 80, 67, -107, -63, -103, -128, -14, 11, -20, -37, -122, -64, -29, 4, -101, -120, 58, -77, 12, 71, -89, -125};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ELGCDQLEEVCOPNCCYETHSRJKGPYDNJZABQSOPKIWRKZAUBTXQUEYLMKFUIFJZPPOGWTHNWVFMMURBJYIYJZMYA");
    tmp_msg_1.plan_size = 24999U;
    tmp_msg_1.change_time = 0.3244719592873274;
    tmp_msg_1.change_sid = 37217U;
    tmp_msg_1.change_sname.assign("XGESUCXQRIUAYJCSORBIBJTSAGQUSMTYWPNEDOPUABDEEUIONEQDLCAVJSUPANBWENTLZNCPPHJKMHMJYIZRXZNVCKQSRFOVVUMTFKPWCEUWNYPORGZVMNZRJTOMFJLNHAGEDFDPLFKAQJYDGFILZBVARCMHUABTODVRBRDRATQZCPHJOHIGQQETHHYICDKXGCQZIXKYBIGVIXMXXVSLYQSBJKEGFHXFLGOWUDMWZFOWZ");
    const char tmp_tmp_msg_1_0[] = {-75, -1, -2, -84, 90, -58, -128, -3, 125, -120, -52, 26, -57, 23, 114, 33, -73, 35, 41, 74, 112, 19, 79, 119, -1, 54, 72, -123, -81, -10, 108, -11, -82, 6, -98, 103, 85, -109, -114, -30, -114, -45, 110, 79, -65, 46, -61, 32, 34, -105, -29, -36, -65, -108, -62, -43, -107, -82, 29, 89, 10, 118, -66, -102, -97, -104, 119, 35, -37, -15, -27, -93, -4, -124, 83, -74, 13, -9, -122, 111, -39, 28, -27, -128, -67, -54, 75, 80, -97, 26, -125, 114, -26, -92, -12, -109, -46, 21, 51, -59, 65, -106, -108, 46, -85, -112, 87, -123, -33, -70, -66, -27, 101, 85, -93, -50, 68, -98, -43, -35, -85, -82, 36, -81, -80, -128, 17, -85, -109, 94, -27, -89, 75, 109, -103, -25, 54, 99, 7, -56, 93, -36, 1, 24, 98, -106, 22, -95, -83, -108, 12, 125, 73, 98, -7, -122, -112, 116, 30, -54, 109, 36, -25, 90, -58, 95, -127, -54, 10, 126, -87, -127, -71, 100, 40, -19, -112, 93, 28, 111, -6, 61, 46, 32, -37, -51, -18, 47, 125, -7, -4, 10, 20, 52, -6, -97, 75, 113, -31, 113, 44, -44, 44, 47, 95, 41, 69, 24, -56, -117, 90, -86, 94, 77, -28, -7};
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
    msg.setTimeStamp(0.323081721328077);
    msg.setSource(15103U);
    msg.setSourceEntity(111U);
    msg.setDestination(14288U);
    msg.setDestinationEntity(162U);
    msg.plan_count = 24007U;
    msg.plan_size = 2071357107U;
    msg.change_time = 0.2145025325673322;
    msg.change_sid = 12354U;
    msg.change_sname.assign("WZBNETFLSLEQUCPHCYCWHLGBRUPSBMTEDPJADDYBVTMYUWHKFIMFKGKYNHUJLMOYRLZJMXZAJRDIWPTRSEJTASVKLLDEMSTQUNRNOAFKLRVVGTABCUVWL");
    const char tmp_msg_0[] = {-38, -42, 5, -98, -113, -50, -38, -69, -106, 10, 64, 8, -60, 47, 52, 53, 48, -56, -121, -19, -61, -30, -14, 26, 69, -58, -56, 52, -118, 99, 22, -82, 61, -26, -69, 74, 8, 97, -25, 112, -56, 33, -21, 48, 92, -80, -58, -110, 115, 13, -82, 30, -36, -28, 48, 38, 43, 17, -94, 38, -60, -113, 19, 14, -43, -15, -79, -12, -9, 12, 14, -78, -25, 35, 23, 52, 18, -14, -6, -45, -120, 97, -4, -49, -113, 42, -29, 9, 21, 83, 45, 103, -54, 102, 47, 62, 45, -97, 122, -6, -92, 0, -104, 20, -33, -66, -82, -31, 75, 5, 33, -5, -15, 92, 29, -13, -51, 105, -104, 42, -82, -125, 59, -50, -100, 76, -120, -85, -92, -122, -70, -24, 3, -66, 39, 102, -44, 34, 16, -105, 40, -103, -19, -67, 46, 57, -19, 73, -69, 27, -125, -116, -128, -51, 0, 30, -103, 32, -116, -116, -27, -2, -77, 65, -78, -3, 48, -121, -19, -90, -122, -4, -110, 69, -20, -48, 124, -34, -27, -35, 115, 99, 79, -128, 24, 36, 53, 2, 44, 41, -21, 13, 80, 22, -23, 10, 100, -7, 17, -75, 123, 6, 60, 66, -119, -67, -68, -120, 91, -48, 120, -2, 107, -22, -47, -109, 73, 47, -97, 91, 113, 71, 97, -9, 23, -105, -4, -111, -74, -110, -112, 93, 60, -79, -75, -13, 23, -99, -125, 19, 72, 70, -4};
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
    msg.setTimeStamp(0.8542499446161811);
    msg.setSource(4159U);
    msg.setSourceEntity(225U);
    msg.setDestination(48518U);
    msg.setDestinationEntity(164U);
    msg.plan_count = 48914U;
    msg.plan_size = 2718962109U;
    msg.change_time = 0.2321961693650041;
    msg.change_sid = 22284U;
    msg.change_sname.assign("LZMQTDMXYKQUBRALCZWZYWWQDMDMJZXETCQVJVYEAPASWRPOIPUPHPNBSAUFDBYOWLTSLAWDOPHWOAUZTZKFJPRSIVVRJUEVYXETNHIMIXKECDJBHIGHRYEXCXLGORJZMAKG");
    const char tmp_msg_0[] = {46, -57, 78, 103, -61, -29, 75, -53, -22, -57, 45, 9, -58, -126, 92, -72, -75, 82, 111, 63, -42, 10, -117, 35, -73, -61, 91, 80, 4, -15, -98, 82, -9, -101};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SJJQFOGKAJGPYDGWIFLIWZUBLGWNTWXDVDKNOKMVXMIWHU");
    tmp_msg_1.plan_size = 38459U;
    tmp_msg_1.change_time = 0.11045392998169856;
    tmp_msg_1.change_sid = 53028U;
    tmp_msg_1.change_sname.assign("HPDEUQDGWXMARGEYUUKNSPTFEKMZGWMLOPLNGJYPOTTCZENQKOEAPMDKWVFMRYUNJINCRAYEEJQVXAOAHFB");
    const char tmp_tmp_msg_1_0[] = {47, 18, 46, -42, -24, -15, 123, -70, -7, -1, -71, 55, -63, -96, 47, 78, 68, 81, -33, 28, 47, 29, 103, 100, 12, 51, -112, 58, 66, -79, -62, 99, -2, -113, 77, 124, 39, -4, 22, -68, 36, -20, 48, -53, -55, 43, 19, -84, 101, 116, 101, 40, -127, 111, 124, -76, 126, -51, -88, -28, 62, -114, -74, -39, -62, -91, 67, 71, -39, 86, 122, -45, 41, -88, -73, -36, -104, -54, 85, 32, 89, -65, 3, -57, 78, 91, -108, 125, 18, -53, 99, -107, 19, -117, 1, -26, -68, 71, 53, 18, -59, 4, 104, 77, -62, -13, -119, -13, -91, 27, -85, 43, -95, -91, 90, 67, -21, 90, -4, 64, -59, -22, 41, -34, 111, -85, 2, -40, 26, 108, -99, -1, 125, -80, 114, -117, -37, 79, 95, 51, -50, 100, 2, 41, -68, 3, 76, 52, -32, 122, -65, -103, -46, 51, -5, -117, 6, 109, 109, 57, 76, 114, 90, -81, 37, 124, -61, -93, -5, -86, 117, 125, -37, -72, 2, -120, 75, -2, -21, -81, 92, -68, 66, -46, 71, 125, -91, 68, -91, -61, 40, -119, 64, 17, -2, -48, -121, 12, -94, -67, 122, -128, 76, -26, -30, 13, -96, -45, -123, 16, 51, -112, 38, 56, 29, -63, 107, -68, 90, 11};
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
    msg.setTimeStamp(0.054479412152532714);
    msg.setSource(54443U);
    msg.setSourceEntity(160U);
    msg.setDestination(13195U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("JHTQSUMFWGELOOBPSUJGVKHLCYKMLTJZLXDEWVDNYWIAGZYQPUPGJQRRVXSONHFSXBDXZMYIMZSVZQQCVPSNOQDKNWICYY");
    msg.plan_size = 48358U;
    msg.change_time = 0.6045224033491668;
    msg.change_sid = 45817U;
    msg.change_sname.assign("CLZYFTVLDWDXHCLDPGJZACXPJPJKNRPVUZYIISTRXQCLZWODSCINHCESNTMVJWWKVKODPHJDWCFMGZURSFBFLRBTBEQFGGYMTSMUQTKQ");
    const char tmp_msg_0[] = {-42, 34, 65, -67, 57, 21, -97, -73, -4, 107, 17, 46, 104, 19, 19, 36, 26, 108, 122, 20, -84, 41, 34, -61, -32, 11, 83, -83, 63, 9, 36, 35, 9, 44, -59, -50, -22, 4, 18, -74, -88, -16, 92, 30, -121, -91, 40, 25, -117, -62, -46, 6, 114, 11, -98, 121, -83, -66, 49, -118, 48, 92, 58, 6, -62, 121, -34, -9, -88, -28, 72, -63, -106, -116, -31, -30, 66, 94, 1, -89, 105, -103, 67, 70, -41, 56, -76, -14, 71, -108, -20, -26, -106, 79, 117, -87, -62, -12, -114, -90, -111, -27, -18, -124, -128, 106, 91, 105, -101, 35, 50, 110, 124};
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
    msg.setTimeStamp(0.381021372703352);
    msg.setSource(32855U);
    msg.setSourceEntity(62U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("YUTXIHEBCXAGIZXGJVYJQOSJXPEXKHVSRCHXZOBJSETURDMLZYRMETKOCUZKMYEQTOFBYCEDCZRUESNOCDMZNWKFSIJSNOSXUPUZFBPAIIZKYFFTPPUKAWQJAQOWPBGLRBIGPQHQDKHCJSMLCURXDANOUNVXILVWWHGVMSDYIUCIOMANTATLJZQMVVWVYALKFTBIDQGWLTDGDPGKVBPS");
    msg.plan_size = 13176U;
    msg.change_time = 0.965221903088433;
    msg.change_sid = 1466U;
    msg.change_sname.assign("WXMYXRPLGZPJWESBNAOQTLTXOPAXAXCOMQYBAPYFMOTOLQFIOJBEFCBXGJHDXWYKDNHPITQGHPRUHJY");
    const char tmp_msg_0[] = {-128, -2, 98, 71, -126, 120, -58, -61, 58, 104, -36, 51, -49, -109, 85, -14, 45, -76, 58, -4, -85, 24, 64, 95, -106, 104, 27, 90, 90, 112, 106, 124, 126, 17, -40, 28, 96, 84, -31, -100, -77, 105, 13, 55, -107, -83, 79, -80, 3, 14, -66, -114, 5, -82, 73, -43, 48, 114, -53, -51, -57, -116, -90, 107, 122, -56, -31, 81, 40, 38, 18, -32, -90, -64, 117, -107, 30, -67, 90, -75, -27, -16, 56, 87, -80, 116, 9, 13, 19, -121, 43, 122, -86, 83, -33, 72, 117, -117, -28, -128, -19, -3, 70, 89, 91, -64, -52, 11, 46, -22, 124, 99, 14, 3, 50, -10, 1, -12, -22, 33, -47, 48, 73, 45, -19, -118, 40, 27, 102, 8, -65, -95, -45, 48, -98, 98, 86, -22, -87, -80, -114, 102, 75, -44, -36, -55, -20, 12, -80, -25, -124, 56};
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
    msg.setTimeStamp(0.9317816809921382);
    msg.setSource(60456U);
    msg.setSourceEntity(105U);
    msg.setDestination(49031U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("FCRDCQJOSZWZVXGVLIVGDKZPZYZLTJWADGIYNPAQVDXMKDTAWXNHYDQBEKYMNFHICMOBFWFSCJJYOQSNCLZPGIKAJTEXTGALNWMFABFLJSTPKLCZCPMWMRXUGKOFQUVUZVFLBCIQXSRRHPSNDDUUKUMEEVXKOXJTPRGTSNBHASHKNHOEUMJZOGRYPABUWMBLB");
    msg.plan_size = 58436U;
    msg.change_time = 0.3894551699248915;
    msg.change_sid = 7517U;
    msg.change_sname.assign("KGLWNRNZAAWFZDFGKDJKMZCERDZQP");
    const char tmp_msg_0[] = {-1, 120, 74, 77, 125, -81, -9, -55, 40, -29, -22, -2, 13, -100, 102, -115, 69, -14, -117, 27, -7, -103, 69, 21, -96, -45, 98, -1, -117, 82, -62, -88, 22, -73, -39, 4, 102, 76, -99, 62, 120, 23, 68, -6, -30, -62, 41, -91, 42, -3, 37, -15, 95, -123, 82, -89, 115, -56, -62, 102, 13, -36, 111, 71, -46, -106, 92, 46, 118, 88, 67, 68, 61, -71, -26, -17, -2, 91, 87, 51, -66, 52, -52, -94, 98, -75, -112, 31, -66, -77, 14, 90, 77, 8, -37, 73, 106, -42, 115, 89, 43, 58, -43, 88, 124, 102, 122, -79, -11, -22, -92, 56, -117, -34, -12, 115, -72, -90, -13, -118, 32, 66, 67, 111, 96, 92, 116, 30, -122, 91, 86, 24, 40, 59, 24, -11, 109, -88, 108, -15, 24};
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
    msg.setTimeStamp(0.2592244181730199);
    msg.setSource(1891U);
    msg.setSourceEntity(4U);
    msg.setDestination(36968U);
    msg.setDestinationEntity(191U);
    msg.type = 101U;
    msg.op = 225U;
    msg.request_id = 45350U;
    msg.plan_id.assign("HFLCPYDSZCPOXOJRLLXGEEDKGTJAJCCGXBTOALIDGMMNIHOMBGPSUUNZBQPFCQJCQRNNOGVVRSRDXDOQRBAIFAQWVNVQTAOSKZVWFVWOXBRSYZPETXSXNBVKHSGLLRBFFWZZLGWLJKDZVFWMHALEZJNEEXAMYCPEQKWINFCYMKIUTB");
    msg.flags = 53602U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.4714210594342323;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YTQOJPGNWJUBCVBYOOYASXUPSBSMONLOEXFRMROWUGAMVHEWZCXGXMNZJEHHFTSJOXVRBBPGQYFXZHCYCAGJFSHTSUWIKDNUFSVTVNYRPVLFRKBLNRQADKPQQAHAAEMLJFLVSCLSJWBLMUKQQDUQCIPNTFKCEYSIYELZQNW");

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
    msg.setTimeStamp(0.7985455917652741);
    msg.setSource(62489U);
    msg.setSourceEntity(199U);
    msg.setDestination(37932U);
    msg.setDestinationEntity(185U);
    msg.type = 186U;
    msg.op = 188U;
    msg.request_id = 44575U;
    msg.plan_id.assign("QGJHODSJQEIDORZHNUXMYXEWNOSCAWYAVLGLQTPHTFHYELHYYKTOZVDBVXTPPLNSUSNMNXJMFZAIGDGRTUCOQCHFYTCPYOJUBTFXZKQGUNCIKJEGFVBLVJXROKDKGUHEAYWFYTPVRMXBSEANVPDNZQWLFESAQRKDXGEJZBOKLUVRXESMQCPCBIIPIRJLHJVW");
    msg.flags = 16597U;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 21256U;
    tmp_msg_0.sys.assign("UHAUCAUJYRRVWZCLQJGPHWJPWITSHXKIGRSNIQZFOKXFQVLNSAVFRSGFVISLMBSRHIIQETDPSNHYTKOFTEZQLGEVTPIWXTJLRQMKJOBTPMSUHBKLBPXNXBMLOAWGLNDDJMVVURUO");
    tmp_msg_0.value = 0.6386195374176017;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VWLEIIEKTVVSQQHLGGLEAEKMFTIUYPTGPQJVDABEFWBDRBQTBRCPKOHTWODWSADDNZDBMWJIKPIBRPDJGHCUNCQIYDHTENCUJKSZKVMEXCVPIZVHQANDXCNHXUDFMNLHACFOMMISZBGRCOEXSRJPCL");

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
    msg.setTimeStamp(0.864424587165866);
    msg.setSource(28240U);
    msg.setSourceEntity(227U);
    msg.setDestination(46980U);
    msg.setDestinationEntity(28U);
    msg.type = 54U;
    msg.op = 2U;
    msg.request_id = 12348U;
    msg.plan_id.assign("RMAYIFYDSJVRBZDKPYCGUIIYILLDKAEDBYGCNIMWOSEYHZRMCPLMQFNPLM");
    msg.flags = 9497U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 49160U;
    tmp_msg_0.rpm = 0.9111257067414463;
    tmp_msg_0.direction = 223U;
    tmp_msg_0.custom.assign("DWMMTEAIJCLYXTHQORBYWFGTICX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UWUVIABPCWCZA");

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
    msg.setTimeStamp(0.3897997888135132);
    msg.setSource(33186U);
    msg.setSourceEntity(122U);
    msg.setDestination(60762U);
    msg.setDestinationEntity(80U);
    msg.state = 35U;
    msg.plan_id.assign("FROSGBAWAESCLGJDZHPVFHVSLWEPNGNWYUNMTSFJILEX");
    msg.plan_eta = 250252242;
    msg.plan_progress = 0.36403267123288086;
    msg.man_id.assign("CRFQPHMFOBZRNQXNOHIMJXFHRZDRAEEVUSLHRJRKMBXDLDJUOESXNCUANBGESSYVBYBIHYQLLFZYWEZNTUJFLGKOGZAQSPCRPECACKGVLAWTLMAEWEQYVMOJ");
    msg.man_type = 63363U;
    msg.man_eta = 804350804;
    msg.last_outcome = 149U;

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
    msg.setTimeStamp(0.737371080878683);
    msg.setSource(50163U);
    msg.setSourceEntity(156U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(115U);
    msg.state = 235U;
    msg.plan_id.assign("ILDVESWEBKXKFJFLTQMNSEGVVZIMWHTXPRUFRPJZFWDPJYHROBIOLVWTREICKRXSXTDALAFCOVFBRJHYZXNHKHCUYBOAYYSUAKQPKLGUYXJHAVHAZUNRQQJFRLGDKIBMLXGOGXUUNYQPCWSNVSGVYORUJEIWIMZZMTCJMMFPBADZGZFAKJQXOSEOVQTWWYSWITQNPJHUGDPNGONVLMERLGTCBQEYKTMACWNZSIQENXHIZDCUPKBEFLDA");
    msg.plan_eta = 2131862738;
    msg.plan_progress = 0.23531110624870755;
    msg.man_id.assign("HXUQRWLUCGIIOTXEIWPBDGVQHIRUHETMHQJZVRSYRNJXMIQZUYMOJSXESDAESGOLDWIOEUGGSFQYIBPSKFMBUOOKYUFVAHSCKXFCJOVYPDMVFPZTZFCWFOXPLYHZVBMLKACPIWTEGSLYRKDIBQTATQLRJNBRGQUAAZHCXOGFAVHBNULYLRHNZRNYXBQBEEWADXNOHP");
    msg.man_type = 22078U;
    msg.man_eta = 1291371640;
    msg.last_outcome = 177U;

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
    msg.setTimeStamp(0.8563895891969181);
    msg.setSource(63788U);
    msg.setSourceEntity(187U);
    msg.setDestination(56193U);
    msg.setDestinationEntity(129U);
    msg.state = 181U;
    msg.plan_id.assign("VPVMVYBGKWDBMVFHT");
    msg.plan_eta = 1726019843;
    msg.plan_progress = 0.32750510452098114;
    msg.man_id.assign("HFNTWXJNQADOTPYQFBTUWYJGMZGBBMMRGTIJTOOIPAPVACHRSASEZHHDOLTOXRKPWNRQCUUNHMJVHBQXCDPLMVSVZSJAUOVELEIIGGGYYYHRJIEWLVYFEUQMKRXIKISKXZPLDWTE");
    msg.man_type = 3760U;
    msg.man_eta = -1124560250;
    msg.last_outcome = 152U;

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
    msg.setTimeStamp(0.16282944752815376);
    msg.setSource(28763U);
    msg.setSourceEntity(128U);
    msg.setDestination(58567U);
    msg.setDestinationEntity(103U);
    msg.name.assign("ZZUFAYFJBDFQCPOHHRKAYW");
    msg.value.assign("XTOXSVGTKQOIPJWSYYDJXJWCFGXITKQMLBWLMSEAWNZLVNUKEDFSKRPVEDRYFXTXIWQZFSEBFPJLKSYCYZEDNIZTAHUDEOSQGAJYIFLNXAVQOLNUTCFZAFMSIUDNMHEPRRBCABGGDYBBJVGBEQSUKMMQHJOHLUPZRGTVAHRUFIKTYPEPQNHRZZHHCDNZCVUIOYPHTBXCYXWMDRBOWPICGOTQKGMNNXRAEAZVBFVAV");
    msg.type = 3U;
    msg.access = 226U;

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
    msg.setTimeStamp(0.5889480332828766);
    msg.setSource(16131U);
    msg.setSourceEntity(71U);
    msg.setDestination(56038U);
    msg.setDestinationEntity(57U);
    msg.name.assign("OJHIXXOZPKJAWMPNQYUDSFHKDCDCXNEWLGZUBUBPRGSUVANZCXDVLVLZFBTFQZQTGERNXVJWPYYCIYRZZKQNMTDCTDYMAUGIHHKAIUBOAJKBIMCJSPAUTOQJBEFZOZLVWYJNGFOQQMPPVLFWEZIVODWBXPJVLBH");
    msg.value.assign("XCFLZUJFAPRIMPWYJXXMWTXELABHRDHAHWFBPTQZKIKAQCRAKEHWMQQGQXJXKDGLJYJSETTBFMVMZSHPLSIRIVHMPFTBJWNOUCYICLPUBGVIMCGSVSYJBEPDTUZVYOOKLVYQCFDNAILZOSTWMWDUFOMIDDSENCZDNOOGKXWDQZZSRWCRUB");
    msg.type = 154U;
    msg.access = 188U;

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
    msg.setTimeStamp(0.01737944147333126);
    msg.setSource(46201U);
    msg.setSourceEntity(9U);
    msg.setDestination(22930U);
    msg.setDestinationEntity(142U);
    msg.name.assign("XPMCLFMHYAJKBAMNMPHJWQZUXIMFARFISEQKKDDQMZYENIEPYBYEXQGVKGENSSLOUMOVBCOSRDWUPOTUQSMAUZJZKLCPBRDZPGVWBAQXRWBODSANVFZLHGZKDNXJRTVIMOJJNXRNCIXLJXLNHKMVWUHVGUOAAHGCJWKQCIZTYTNVXKEFHNDWLQQBPYLQTLWZXWTPUGGOBCYSCJYSITPUSJUOFDKTFPFVBHOR");
    msg.value.assign("HWWBJRSDPOCOQFF");
    msg.type = 202U;
    msg.access = 232U;

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
    msg.setTimeStamp(0.46219446800255204);
    msg.setSource(56236U);
    msg.setSourceEntity(156U);
    msg.setDestination(36940U);
    msg.setDestinationEntity(177U);
    msg.cmd = 100U;
    msg.op = 209U;
    msg.plan_id.assign("OSGTCWACHXCCBLLTHFZBESFPJAYCUUHEOMPOOMOVQMBKVEWIIHTPQHT");
    msg.params.assign("KYHBRLIVCDORKIJAFTWCSSVQIEOHDBCHGJZMCFZNIFATXZUUASHYFWTMTKCUNZSTFACWICBSIRHGEQXWZRBQURCPNLPNOBLUIBRRIMXHAFNGLPAQJJBLEGEIRXZTQVZOOQDVJGPPQTVUWZDWWNFYSMFGPHLFSMOMNDMOQYYEJILYDKKPDXVYAHWUGKVDKVQSNFLJPOJYXWRAOPEGKXEUPBZUDEGD");

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
    msg.setTimeStamp(0.47689514726884485);
    msg.setSource(44190U);
    msg.setSourceEntity(210U);
    msg.setDestination(46119U);
    msg.setDestinationEntity(110U);
    msg.cmd = 165U;
    msg.op = 22U;
    msg.plan_id.assign("KTDAKUOWMGLFGZWZNVIANWARRNSWOQZORAVETCHQBLFMDCKDUNZCVXBXBRYOKLKYBSSMNEBTKBPXTWFEPIAJYTMODFHIQXMOCGRNYDYVDHLGUCUAMEQJWGNURRTDFEBYRUOZPWICGXLWXEJXDAVCHXXJSCBIPTAWMQTYSHSZUZZMYPLDZFYLKQP");
    msg.params.assign("IDTZOQBDGKAKMVHGXPMPLNCOXSWKCXGVHEIPUCHFRUJZMGXYLXZVRBHWXHEFDXLUNAEZISMBQCJLSLBGBTDPIOKEIALTKQRLSNMJCOFOOEFSHEFFAJKKRYKPQELVLFCBWEZTMVIYZJSSPCWOMNTEYJQVWGMPYWTBTPDHIOUGIYDQIYWFHHVWSBOJANZTTMF");

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
    msg.setTimeStamp(0.4556953135387689);
    msg.setSource(53622U);
    msg.setSourceEntity(180U);
    msg.setDestination(37965U);
    msg.setDestinationEntity(248U);
    msg.cmd = 119U;
    msg.op = 234U;
    msg.plan_id.assign("MMAKYMCZYNNYDHULIDKDNNYSZRHULCDBCTWKPQFLFLZBRCQJVSFAXNEGHFTDGPJURTOEBBHPOFXRAFVYVNLQOBTCSPSYOVKOLCMSBZEXJPHNJXRGQJAGFKERRHZMHCSQSKPBIDBJOJLTELXMCXAGSULEXQCRJIGHKWWVZUMGYBHMGKQAIVKEFGWLPZITOYPZUVDYJTJERMUUSQFWIANVYWOENRATFIB");
    msg.params.assign("HOXKUDFTTW");

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
    msg.setTimeStamp(0.5042395982907467);
    msg.setSource(3322U);
    msg.setSourceEntity(108U);
    msg.setDestination(11470U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("YRUDLDSGJIAKYGRBSTWKCBEPLDYRAINSLTSVHXMCYVHUZCOAHQYEBMRCAHUVLGDPEDTJJXLMJNQUGJDXHQMRJHHIEPHI");
    msg.op = 218U;
    msg.lat = 0.8295960538132968;
    msg.lon = 0.47149283755838134;
    msg.height = 0.7192638917559909;
    msg.x = 0.6066853534790649;
    msg.y = 0.9252874640012457;
    msg.z = 0.7281830210744116;
    msg.phi = 0.1151989304391915;
    msg.theta = 0.9032586185348132;
    msg.psi = 0.14693433981227533;
    msg.vx = 0.14691152122162998;
    msg.vy = 0.678397583302523;
    msg.vz = 0.14446971747951087;
    msg.p = 0.8754545298196955;
    msg.q = 0.7454318277295839;
    msg.r = 0.567979389129664;
    msg.svx = 0.5244760127820617;
    msg.svy = 0.5517865234030649;
    msg.svz = 0.5548171804086609;

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
    msg.setTimeStamp(0.8163376811990585);
    msg.setSource(32155U);
    msg.setSourceEntity(240U);
    msg.setDestination(27565U);
    msg.setDestinationEntity(165U);
    msg.group_name.assign("DWSAYTWZEVOLVXYTOPEQAAKQBQVSWTNRZJIVGFJSGNUGKLKFJHBYVSJPXUJFHZDAHRCWWISCMGZPZEYTUGDNZVHIQQVLDJIINREYTHIKRWBKNXIRQYAVMMMCXFTHOCAHZIYPKMSWDMLEASWTDPMRHRXTDEHLONBZNDRFGRDLPZL");
    msg.op = 140U;
    msg.lat = 0.7056971544280346;
    msg.lon = 0.5873453259148506;
    msg.height = 0.6736956318532386;
    msg.x = 0.5038953287979732;
    msg.y = 0.33726330082233524;
    msg.z = 0.8800427316316392;
    msg.phi = 0.6783105733122676;
    msg.theta = 0.9094664067875173;
    msg.psi = 0.8788179989046893;
    msg.vx = 0.9760781564100782;
    msg.vy = 0.8543391924861897;
    msg.vz = 0.257654906521961;
    msg.p = 0.7761237392018546;
    msg.q = 0.8154484518193116;
    msg.r = 0.5650932402156401;
    msg.svx = 0.2560446459091116;
    msg.svy = 0.4221741122853857;
    msg.svz = 0.49245804753426703;

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
    msg.setTimeStamp(0.7681014238631488);
    msg.setSource(1262U);
    msg.setSourceEntity(213U);
    msg.setDestination(18547U);
    msg.setDestinationEntity(247U);
    msg.group_name.assign("RKQEVCLOHYZWAUPRXDKJDZHNVGRPSOGFUQCVMSWPPPURPBWKKFYIICHEHZXRJIXYGTQTGOJAJKDDGHQTCGDXOFJKHWUTFOLHFRRDLOZUDYRHNZUTWFWKAFEBEVMXMLYHGEILNJBRVHNCQWTCCTV");
    msg.op = 40U;
    msg.lat = 0.7120356910275448;
    msg.lon = 0.4034643896234211;
    msg.height = 0.12841325929622915;
    msg.x = 0.1428782695941896;
    msg.y = 0.3994774498015051;
    msg.z = 0.3194158907859368;
    msg.phi = 0.4199535784583608;
    msg.theta = 0.6695264311224034;
    msg.psi = 0.8926611407454722;
    msg.vx = 0.49773439966931454;
    msg.vy = 0.5333444828227512;
    msg.vz = 0.1097978242478046;
    msg.p = 0.645143934285611;
    msg.q = 0.5146156793603333;
    msg.r = 0.2259094180010598;
    msg.svx = 0.638688674701228;
    msg.svy = 0.3978148156852511;
    msg.svz = 0.11307464184824045;

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
    msg.setTimeStamp(0.8501048768315048);
    msg.setSource(40492U);
    msg.setSourceEntity(180U);
    msg.setDestination(27453U);
    msg.setDestinationEntity(22U);
    msg.plan_id.assign("UYVZPWZUQCPLHHLSLJRTUORPQZGZJCGXKTYAIVUAZELRMGEFXQOJNDZNIINILFXFNVIBPOHWOAMCUBCHEQXZFMWLMQKSTVVEY");
    msg.type = 47U;
    msg.properties = 249U;
    msg.durations.assign("YXQFNUBLHHGWSHYECZDVTJEYYTLRUXFYOFIOATYUIWAVIPNYZKGKJLPJGGUNAMLKGEBNEZKFHTQCZKKQTSCAZMATJMHWCHPVLPLLDIZXNJQUKMDFUNLGBTROOCSZJEXRBHDGEGMIDFEAOZEFPSOCQRKATBJTBBYXSVUIPSHRZ");
    msg.distances.assign("GYTRCYHYGQDWARQLMCDD");
    msg.actions.assign("RJWFLMBJWMKVNSNFEANORGGYBUDTGPYTKXWPQDHHNHUXEMYHITDINDJFPNWFIEVXVURQYKJDTQMCNUCYHAIFQKFFAXAYFDULZOGWOQXHKRIEYMAJPMBJIRPAUQSDQNELRLPEMUOCDIMUSSZGOPTQHVCVDVIBW");
    msg.fuel.assign("HQDAJWSQTKSZRGZNKRFROZEJSASMWKMWYCTBMHTFGQLCXLBJPOVNYKCFVCGRTEPHAIXDNUXKRPJBBTQUYXVADPFDNBWALPPNPWNORCQLEAVYYNYNTGAXFQBLXOHBL");

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
    msg.setTimeStamp(0.9364931227996857);
    msg.setSource(8771U);
    msg.setSourceEntity(187U);
    msg.setDestination(38772U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("WPNFSFXYFCJBJXVIJJZGLWSWIHQMONMDKSGRMHHFRSSKPAZPCUARTF");
    msg.type = 49U;
    msg.properties = 137U;
    msg.durations.assign("VJRNLGBKQEOYAIENEBKGFEIEDRZKNQYHOQBHURBMAIFDNYODXIPMZUXDMXTIEADGXBOTAGBCVIZVSPWAXNSPDFLIYEMBEE");
    msg.distances.assign("UWWNCYGPMEQEAQWAPLTZZUVSOAEHRPOOBUDFCZLJBAGCZQYNKKDDFDSJKSWZOAIYNXEUCQBLEJGVYDWHNAQNKJOJHIPZBMULIPXEXBWAMGMWQYSZTRSKGRVKHIJIDRSNFQPBJAGIYUTUHXCTZZJYEFHEHRVVGVEFNVWAIEBKOVRNXSCBBHOCZMGYCRSHUDDINMXRNHQWXLOKSATPUVWVFYMKMDTBKFRLLXT");
    msg.actions.assign("TSXJSOQCMGGYDDEYZXTMRNFUBARGPLIKOJSOFICHWWQSXAFVEFEIVQYSGRBBAWCCLWPPFOXPBFALRAFJPPCKDJCUXUNJSAGUKWLMWLLEXRMNZXDTIVCSFYNTKHQZIPVZBFMDIZEYPULVENLGJLOTEAQICKQAKONWKEGGMVEONJWVDQNYVXOYQ");
    msg.fuel.assign("JOGRBSCXHEUFZLVBCADTAGEWHQGMBINBKWTFCGYUIQLFMIDUECGVNFMHSDLGPQQCQJNVVYWUZEXHSGQMZVRYAAFOIPMVSNYKEUHUVRLBPTDIBFBXUMXXSZTPXPWKNGJILW");

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
    msg.setTimeStamp(0.6132393075515673);
    msg.setSource(23170U);
    msg.setSourceEntity(16U);
    msg.setDestination(35244U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("CEJERWVLYUSYQMRYANGHPXLPWNTIAVLJDZPNUBACJTXXCEACOKYCTZVBUIMPUQWTOZAPGRWMQXONGBWTYRGHSKRRUFFSVHVAPNLAAKZZNQDJOUMFORQOTWWOGSCJHDGUDHPFQBXKXBSUKHCNFJWEKVEXZCVGYZSLOCEDJZNSTEFGHDBVYTQUIXIBMDLSXLLQWHHKMCFRIJIVFBGMAEIFYTQBADFOIKMVKDLSX");
    msg.type = 32U;
    msg.properties = 234U;
    msg.durations.assign("IOATYYKMKYXBVCVPJFTXJZEIINKFJSCAXAPBUMSQVTJJFUGEAVXFLEZQILBSTFHBLQHXKYLCAMZOFUHPKUQOBYNHCRDDISOBFOYMGLWDXXUWTLXYSJYBDROPANSXMZBVPVPTRGQW");
    msg.distances.assign("XDCWBRUJBSGIDCVZRPGCQNYGKDQNATSXVDCLRBFPMRQYIZAVLIUHOXGQUMMCWKVZWORZJMSOILQBXHAMFHFDKAYKNMZOHEKVERBXJCAMBPACSVNTTDIJPFXXOLNZQSEDT");
    msg.actions.assign("UGWMIBDLRSOGGWJGRFHAYAWPIZFQDKGEQYNBMAULMMPDNZAYUXPSZEG");
    msg.fuel.assign("RWOJCNGOHHJGXKMTDVHXZ");

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
    msg.setTimeStamp(0.10263297824087558);
    msg.setSource(44026U);
    msg.setSourceEntity(204U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.31729744320693076;
    msg.lon = 0.7947642378121456;
    msg.depth = 0.9334760019480325;
    msg.roll = 0.08201760434741778;
    msg.pitch = 0.6341358707908574;
    msg.yaw = 0.399587925761685;
    msg.rcp_time = 0.2622621272872864;
    msg.sid.assign("HNVPZMNXHGUCVFKQFURMHRXLHRYRUGSCCUEDJCVAWGGBFNLROWRKOZKWQCFNBHUSQYIQKIIAHAXMXBGEQHOEWWNWSLZCAVOFOEJITXXJLMYZALPFTYMRIQDLPXENVOWUPATAC");
    msg.s_type = 134U;

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
    msg.setTimeStamp(0.8176911567658511);
    msg.setSource(8281U);
    msg.setSourceEntity(104U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.20608409171292352;
    msg.lon = 0.4333190901652987;
    msg.depth = 0.5996001502359866;
    msg.roll = 0.7635368929146354;
    msg.pitch = 0.018482087764443933;
    msg.yaw = 0.5425913818128901;
    msg.rcp_time = 0.1339122071378348;
    msg.sid.assign("GMKXSWQLXWOVNXCTFOWPUPYAYIOWJJZXNFLZCTXUFQCFBIRSEDOCZVPBZPLEVFXANQEDTHSOSUOQXGZDTELTOIYKRFBADYUJPKLAKRQXTCZVHPAIOJVGWQSYOOELAWJGYPBIEHJEMKJNGFLPCNJZNGLRFIIKBQMQMVIKKSWUZQUNESGDTEYLTMWUXMBRDSCTVLKWCBJNKMVAHCDWRFDRRBBSZMGHMICVUSNPYPDUBEHH");
    msg.s_type = 91U;

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
    msg.setTimeStamp(0.8807790412942822);
    msg.setSource(62193U);
    msg.setSourceEntity(49U);
    msg.setDestination(12697U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.10253612947505986;
    msg.lon = 0.3709114739079734;
    msg.depth = 0.6102993380587061;
    msg.roll = 0.4044522265687065;
    msg.pitch = 0.9063024194048839;
    msg.yaw = 0.4909448586307702;
    msg.rcp_time = 0.6110270977404662;
    msg.sid.assign("JWVEZBNMPMPCLNGXAVYZMYRIFOOUMZPUHVQJURVAYMBELTBUOLDELBJTTEORNTKIUEDSJIZCQEQSRKUFOWDYHGEMKFHQZOBOPKDJHFGZVCYBIQWFENITLXXRPWSFUIALTINXVGSRCEVDUVASKHLCNHKMWJFYXMGKQTQDHCKYOWLRPLDDHNDOEVZQCGSQAXPAVZXTCJCMBUBYKPTUZFBLNSIRZMRI");
    msg.s_type = 222U;

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
    msg.setTimeStamp(0.23550017947225332);
    msg.setSource(53342U);
    msg.setSourceEntity(159U);
    msg.setDestination(30567U);
    msg.setDestinationEntity(48U);
    msg.id.assign("UQRIDDYAOUJOYNRSSXLDBUIRF");
    msg.sensor_class.assign("WAZVGDKCZAHPEBJYXITZANRBGCZMUCJQQBZDUEQROCMNZMJDFRCXUNWOMWIUJNSPPUTFEMQNITGJMUNSABYMBTXPDYMXJBOQNKCCVAVXHHMRDFYKTAGPQPQVVUCBZKPWHXFYHTPOIKFHKWXYSZFDKCDHHAHNREGOYGKLYRTFSXEYIGSBSRLQIITZALELSIHJNWJOLNIUJUVFWYRLOLEGDWTDQKXSIVLDEBWVLPPEEVAQGOZVKRAJFX");
    msg.lat = 0.6961072173232187;
    msg.lon = 0.21718793417353088;
    msg.alt = 0.8994059911871126;
    msg.heading = 0.8098306434191724;
    msg.data.assign("XCYMQKLOGOOZDOWFSHJIRVIYYRUQPFCSBGMKTOONQQQAITYHHDEHISXBVIQKIFZUBMTVFMJTRZBSXBRLFEAMZWHANEPEHELUJRDVNORBSKWWOAFKEUDGZPDVNSHVJIPSRGFJNQNJWYUCPMDNWAXGDYLCIPYGXQYTYLALJDBINNOQVGRPHIJMWVVCZXQXGBAZEPTVZFCXWZUSUCGPTECKCSGELHLDKKAMMTUWMZJ");

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
    msg.setTimeStamp(0.5375386438568971);
    msg.setSource(35047U);
    msg.setSourceEntity(45U);
    msg.setDestination(52444U);
    msg.setDestinationEntity(245U);
    msg.id.assign("UUZVUFLJAIMPBKWQEHEJSIPEVEATGIQWZ");
    msg.sensor_class.assign("AVYFGTMCEMTBLKRDLVNWXBMAWTVQYYPHNYMTQLDAPJBXIWOJWPXCSXAFSLZXPPUJNUUNUFHICFBHVIKTJFQZBKYISCRRTQKVEGLJDDBKT");
    msg.lat = 0.7882355827598602;
    msg.lon = 0.9359394365571636;
    msg.alt = 0.28753923556160765;
    msg.heading = 0.014693026461893632;
    msg.data.assign("KVZACFDLSPOJUUJXNYZFGANLGVWEDEVRTRAGZQATBSMCMNHHLAINJKKKNPPZWELLARFCYBJFPKMWEVBPPAGLSHDQKEOVCNQJCJPVGRVMJWXQYNJCQEYOSFEPIXLZURYHFSJDSYOBORWOMOLSDXBZUUZMZKGYFRWFIWMIZPDQLBUDDQTBMVKSTDMOBWOHHXYPCIHADHUICTGHEVBKXXXGTSTTECN");

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
    msg.setTimeStamp(0.7223714705237833);
    msg.setSource(39613U);
    msg.setSourceEntity(34U);
    msg.setDestination(43473U);
    msg.setDestinationEntity(121U);
    msg.id.assign("JIZPBYAUINDFYKVECTSUCQVUTFKZQOKOUJHZIBRWMEGSXVPGSDMJGYSBUEUMMYLTTMSDPRIYNJVTJNQJSSDHPRFVGNMRJCOVTHYWXOFMFZGOHBIQCKRWFNBSTCQIPMXZHNWGMLGECWGNEPBXADXTWQOMYCWFZLKJPRZQFCBIXLPHHXLALROXRQLJVQYTSXVFJWEHAAKBKDECBDDETA");
    msg.sensor_class.assign("LOFJSZUBGZEAGJMFQJHHJMWCMVSHJKRWXPBZUZFBZHOMXNQCDAYDSDMNSOLPKYNVABRGOVDLBIDXIILRKGYA");
    msg.lat = 0.679194648051085;
    msg.lon = 0.4320041522665208;
    msg.alt = 0.060522624403197556;
    msg.heading = 0.4930700008531571;
    msg.data.assign("XFWJOHGPZJXOAZUSLLSEYNUGGTZAPCTBIZYKTDJDNAPLEFMNGDDMNXBZIEEYPFZHVLAOVQIDFDNKGQSBYGHLFHUKGPQIKTUBYLJUUCIVYRPHCMEDIQVWVCKXPAZWSRMTMENENRAQBNAKUFITOBOCZYMIUBRWIMDSLYSWPWQTSADQOBMJRXRBVRRJVDAXBNXJGXHHCQFNMEJYEHWLSWOXJMOUSWHTVKFTLCKZCGHCTAOPYVFEKZQQIPJG");

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
    msg.setTimeStamp(0.7232007236323617);
    msg.setSource(9022U);
    msg.setSourceEntity(34U);
    msg.setDestination(45606U);
    msg.setDestinationEntity(172U);
    msg.id.assign("YISAEZQFRRUJCIIGLAWBBOEVKCUGQOQOAMEFQAQTJQOPDCRIQUJZXDZEVEICWXTCKGAKHNNJSDLWVGIYNSDMSKKDXLXXLBSUJTMHURXXUOWLSIBFMHYMZNZBPASHKPMPQMY");

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
    msg.setTimeStamp(0.5944154607222936);
    msg.setSource(48328U);
    msg.setSourceEntity(224U);
    msg.setDestination(45350U);
    msg.setDestinationEntity(35U);
    msg.id.assign("FABRLKDZLOBQNBFSYEEYYQZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AGIFITLMFXOZVKGIFETIDCADZJQHOQYAZUUDHBYRULXQMZYX");
    tmp_msg_0.feature_type = 132U;
    tmp_msg_0.rgb_red = 116U;
    tmp_msg_0.rgb_green = 90U;
    tmp_msg_0.rgb_blue = 85U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.24928984766903983;
    tmp_tmp_msg_0_0.lon = 0.8267090738995604;
    tmp_tmp_msg_0_0.alt = 0.4906671156660799;
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
    msg.setTimeStamp(0.3601661249771596);
    msg.setSource(17724U);
    msg.setSourceEntity(249U);
    msg.setDestination(34347U);
    msg.setDestinationEntity(154U);
    msg.id.assign("QNKSVFSPONUZFEKIUFXPOHEOIZMMRAGLQEGKPTBNAQLWRHVVOUSRFXCHIPFJMLTJZMQUNFOJERAQUNMBVPEUKWWMUHBXZSQAFBBRXPTNDXTMYGZPNVHVSOHWEARAZDCRBTZIEYWUETVLDCPTXSBRCMZHKDNGXVLX");

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
    msg.setTimeStamp(0.9626191322918821);
    msg.setSource(16179U);
    msg.setSourceEntity(91U);
    msg.setDestination(44967U);
    msg.setDestinationEntity(135U);
    msg.id.assign("EBMYUCGCBAWJLEYXIREXDKCYUVUYBJVOFOGQSJOMXRKZZHGSQLFRCPOZAKMGUZPNRQDNNOLKITIJWUTJYZHNSPBIFGSHCBAAKSMMREGFBJGHEHJ");
    msg.feature_type = 67U;
    msg.rgb_red = 93U;
    msg.rgb_green = 124U;
    msg.rgb_blue = 177U;

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
    msg.setTimeStamp(0.952772222666963);
    msg.setSource(9402U);
    msg.setSourceEntity(69U);
    msg.setDestination(29922U);
    msg.setDestinationEntity(157U);
    msg.id.assign("CLAABMHBMWZRTBGCHFLNKCMWPSGABDEPCOPJLITNEKVDJNFUJWSFKZQIXIKALCPNEQUOXPSTDNXENGYYJLYKYRCITUHLNAXWROUWQISU");
    msg.feature_type = 30U;
    msg.rgb_red = 236U;
    msg.rgb_green = 5U;
    msg.rgb_blue = 39U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.532697792157113;
    tmp_msg_0.lon = 0.5341518192006316;
    tmp_msg_0.alt = 0.4881093484411;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.07643182586926667);
    msg.setSource(55160U);
    msg.setSourceEntity(114U);
    msg.setDestination(34587U);
    msg.setDestinationEntity(213U);
    msg.id.assign("EAJUZCCTLWVJXNSGXBNVFJPUORLHDLAFETQAHWNUWBKJAXAUPCODYHVGMBSMHZOKFRPCDXQHMTOJRSUPOTQQBOCYEDJKCGNIPMVIIQFZQXDULOKVJDUIMZFBIPLLDAYPDZXGEIWFVCIGGSDGYMQLWSZQCNBSRKYRWEFMLKRIBQHFWJSRHCAJQKHYZKZVXSOXTPATZHKUNTN");
    msg.feature_type = 137U;
    msg.rgb_red = 127U;
    msg.rgb_green = 219U;
    msg.rgb_blue = 197U;

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
    msg.setTimeStamp(0.4730904866119586);
    msg.setSource(4193U);
    msg.setSourceEntity(253U);
    msg.setDestination(64475U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.604151387115579;
    msg.lon = 0.8230769346280848;
    msg.alt = 0.19174887851110267;

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
    msg.setTimeStamp(0.6822514092691991);
    msg.setSource(35783U);
    msg.setSourceEntity(58U);
    msg.setDestination(33577U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.33977016965770934;
    msg.lon = 0.7033833511771119;
    msg.alt = 0.43874985485713236;

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
    msg.setTimeStamp(0.55017955783711);
    msg.setSource(14693U);
    msg.setSourceEntity(62U);
    msg.setDestination(63390U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.7725598330684149;
    msg.lon = 0.7031223725583837;
    msg.alt = 0.9227134094076694;

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
    msg.setTimeStamp(0.11560832072411142);
    msg.setSource(31179U);
    msg.setSourceEntity(8U);
    msg.setDestination(23643U);
    msg.setDestinationEntity(167U);
    msg.type = 7U;
    msg.id.assign("UDYIKUOWOEIZMSRKLLDDMJOQNCGMLQUONXKCSWWRSUXGTCUWRSXDNBZYDIAHQYVWJPQFPPVVZBICPDJXMAGDIMJYXQVJETLXFRZGCVFZXITJTTS");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 241U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("UKJFUXSJELZWNBIHGMQTSTMRMRIKMKSFIMTIAYVISENWFJEHBUCZFOGJLPWPAJXDHWIEVWHIVKRZVXQYUDBYODZPITTCLGECYQMNZTISETOXCOPULDGYGOHDXNABJRNZJFWPNNHCEVJWQUUBMEPCPLLXVDGBMMRGWHCVSFYRBWCJKHFVAAXPQTUODRZQVBTCJZML");
    tmp_tmp_msg_0_0.description.assign("BAPEFUOHDYBUNLZASPGVMTFKMQESNELWZOGAASMXTQFPHSOLEFQGHDKAZTGVAVZSWXIDPTTEIA");
    tmp_tmp_msg_0_0.vnamespace.assign("ARRFKWKTTTEHJGBYXVQSHRWMSTKAMGJBNXTKLIQPWQFVEFDHILVUGOXLEIXEHUHOAOPZFCRJLZUTYSDNPCYFBGYZINZKZUAJUKAMQCZSXJXBLQMSIRXYVRMETGCKYDHFWQYBWPANEUXTOANPEDFMPINLFZPBKVWTSANJTBOAWZDSQWVSCSPDRPHOPSOCEDLQUUIBCGZUXKNJGLJMDEGMHVCREAQDORYWBZWNHQ");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("EJEODUREGOYDDKNKOBCQLVDJTJFQUISLZMUZRFHKIKYXTXNZEBGZUHUVHHXZOSKUJNSPHRTZEZJTRYRPWMJ");
    tmp_tmp_tmp_msg_0_0_0.value.assign("CQKMHTICUKIZIOLEYDPZNCGTKIUROUZCOPFVRWBRXDKSSXABFUMDMZDYOZYOZNHMKXRVGVPLEEEMDCAHCVVZPNSJSLHWQQFNDLTFETNMSPYGACMTGXHNBDGBVEJRLDOQGHWBGICTSYVLEKJAHKJPYMFEJDIFALXZSSTWGTYNLBBUHWSBNPQMWQHYGZJVBRAYIKXBXEZALTQFSOPUPPCWIMAFUWKNWIEVQTCKWIJUFYGROVLQAHJOFJOURURXRQ");
    tmp_tmp_tmp_msg_0_0_0.type = 40U;
    tmp_tmp_tmp_msg_0_0_0.access = 19U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("LTIJMAKGQOVKNUUTQERFHRVBVIKSVBPTF");
    IMC::SetControlSurfaceDeflection tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 88U;
    tmp_tmp_tmp_msg_0_0_1.angle = 0.17530499431368984;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PlanStatistics tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.plan_id.assign("VSFTJHWGDGNRIIZVOPGYXXAKZGTZUCUGUKNLCWECVLQBTXAFSSHELYRJKZOFXCXWOJJHNMKELQI");
    tmp_tmp_tmp_msg_0_0_2.type = 27U;
    tmp_tmp_tmp_msg_0_0_2.properties = 94U;
    tmp_tmp_tmp_msg_0_0_2.durations.assign("PQMPPTRFUEYXNHWFMGINSFOYHRDQJVSMTYYRJHTCPIHVHSEESYMARFGFGJWGIFUEQSWEKEOMSMZADWQZZQDIWGDXZNZLZNAFLMYXXBHOBYTUFTKCAHNUCKRRMRETLULBKUXOXEPDQXKDVSBSWWFIXU");
    tmp_tmp_tmp_msg_0_0_2.distances.assign("ZRMTFIFHUUEBXWCSIJSRZDQHUYOGUCHZKEDLTDGGDPZEHGYVUIBYDWEOAYPPCIXSTOXPRFVAJISQHKCAPLNXVFVOWVWHWMUOBLMTCSCLIKQVKNPGBWRKSXRRLYLAEMUXWWVBVSENKKMLJYQAQJNSOONFBYQILGRVJWFAUJSQKXMSCAUPTTDNVEANMMDDFEYJCHNOIPZDEFZNPBKMTHFNBHAXJGYZQBEQJOWRXLTJCYATTHFRICGZOZBMZ");
    tmp_tmp_tmp_msg_0_0_2.actions.assign("LNANWCRDBXSXYKFGDSHTAMJWCBBGEOGSUCKYEWKWFGMPOVESHQLOIJPXXJQXZUCIVZRNOYVEIJBEPQRBMCDWNOMSLZPATRXOAUWQHIBUHVVMPGRQYIFQEBRHXLDFIOIJPCYPMWSHUIQRGDDJNSPJYKZHQURJLNBCYKMGEHWAXLNYFKOUBZZGCHDENTYFXSSBKKHAVZANJJRMCDDQLTTYTQVUAVMLNVWZ");
    tmp_tmp_tmp_msg_0_0_2.fuel.assign("TEQUISZCZLRYKVTNDSQUYAMDHSWUJWLRJNHTAHODMKYXXGXNPDSZHXGUNLHRWCGIZDVYCLXIUTQAGIREAGNYEYINDIZVITBVKXQU");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7665317492852469);
    msg.setSource(64873U);
    msg.setSourceEntity(179U);
    msg.setDestination(36988U);
    msg.setDestinationEntity(183U);
    msg.type = 41U;
    msg.id.assign("MFDIMKFGFVQPWPVOCNJUQEZCHGSLELQUBFXBNZCWGSWLQSURKGDGYYILFVACUWCNUOTDDALYSMFCRNSZIAURJOZZORGLAEJSCRKXYRRVJMQBDYOQSTRDOMBTLJDOPSOTHKJMVSMUICJLAWYHMWDLTNYVGZKXJYMUIEXFPIZUXUFSFXKVOHAAWXNOHTBBPNEAEGQZIIDPVHXJKDHWQWLECNKEHN");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 51626U;
    tmp_msg_0.flags = 79U;
    tmp_msg_0.lat = 0.26060542420000476;
    tmp_msg_0.lon = 0.8253173428962322;
    tmp_msg_0.start_z = 0.10720202977148385;
    tmp_msg_0.start_z_units = 88U;
    tmp_msg_0.end_z = 0.4544558649238726;
    tmp_msg_0.end_z_units = 160U;
    tmp_msg_0.radius = 0.8138955376697083;
    tmp_msg_0.speed = 0.30272908170209023;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.custom.assign("NHZKYTDBXGQBYDLHNTSUNTRRGGRBAVJYQRWFGKZVEFXEPDVMDZHIESHHPMIOJDZWDLISJVGVZHCQVVPYSOVUQZNAOFZXCMFTIKHLOBKSSCIZFSDQOXHKCDHJNRAHTARJLRUGWMMPBICKCIRYXLUKECUYPVTNUPUWAPDUJETOGGRLWRAXWKMFACFCNLYJAOGWFQUEZAWEJXQMEBKXTPWIOSOSEGPBXNMYNBKILXZFYFBSVQWMJPL");
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
    msg.setTimeStamp(0.08774037883671659);
    msg.setSource(55760U);
    msg.setSourceEntity(5U);
    msg.setDestination(11044U);
    msg.setDestinationEntity(89U);
    msg.type = 93U;
    msg.id.assign("ADDLDQBMYTBEOCNXJLVGFWQCGMMAIFHBQFHYOJZCLNAUGJSTUCTYUVNUXLCQRCKQKRKVMOPPZGFDISBDIYFTZHNNPWLOYEGVBCRSXOMRHQESJTQWDASNAUEFSUMZGHUQEKLNYUOBHKEYIYAPQEVWHIJVTMJKLTBJZLZOBDPFHBLGJOEICQKSHFDZYIWBJKIRGPASKAEJYCRVXOMPWMPVWNARTDISPWUEXMIOZNRGDXZLGUPFXXKRCSXANT");
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.3395695359492661;
    tmp_msg_0.aoa = 0.24613266396583944;
    tmp_msg_0.ssa = 0.982672035982849;
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
    msg.setTimeStamp(0.3002106525509215);
    msg.setSource(6760U);
    msg.setSourceEntity(35U);
    msg.setDestination(5046U);
    msg.setDestinationEntity(111U);
    msg.localname.assign("GASAKSGBKDFBQMEYRISCBYVSFGLEJSAVMMYHAYEPTLENUWOGHNAULUQCUTFEQLNOZKRVFSBQJGSDRBXDHWUSTQVIXPDNVJZLIWPKJBWHJERFLXRXOGASZAHKKNDBLVZETKXWNOYCPZOKBOCBDGQQYIVPLWHHCMRCNEEBQFGWZOMXTYGALDKTQNIZWGCRMRVXWCIVFXXQNDIZFOUTPJRUYJEDXJITPUUMFCRTOMZUDYFHAMIAVPHLIMKZJP");

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
    msg.setTimeStamp(0.36325056090274777);
    msg.setSource(10626U);
    msg.setSourceEntity(181U);
    msg.setDestination(37954U);
    msg.setDestinationEntity(30U);
    msg.localname.assign("HDAZZHEXUXHTFOXWMWOXJURGX");

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
    msg.setTimeStamp(0.9424519680498218);
    msg.setSource(40357U);
    msg.setSourceEntity(197U);
    msg.setDestination(59462U);
    msg.setDestinationEntity(221U);
    msg.localname.assign("EIYRKXQDDZOFUUADWGVXRGBGMVBWFOYTZSTCGXLKZRLYXRJOQINNRNHZLHCEJOPHIYCYGPCVERCUKZWKSBQAUFZDPHFTWTIYRZLLODVWJO");

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
    msg.setTimeStamp(0.3269542188654043);
    msg.setSource(63400U);
    msg.setSourceEntity(206U);
    msg.setDestination(53110U);
    msg.setDestinationEntity(190U);
    msg.timeline.assign("JZROZJGEDZZQWNFBYKGNGQJVQWIXNQOHJWXHAFMSSMZVOLLJWMBDTDTQKQYPGOCBPIWCGVFHYCVMEX");
    msg.predicate.assign("YNOCRMLNWCRLVRYECCIHWZPAKOLXMSXARUSSDHAYZFHIXNDMMMBEEWUNRBTHDGPCBSNDIKVVUCJGPOQHBEVFZOWWMLDTKXKZJUTZ");
    msg.attributes.assign("PBBRPWEFMQFIPYATFFYVUNOXYHPZGXAUUJKIJNTUTSULWILLBNQUBOSSFKGVOAQNGHVEMMHPROLRXWDOCWSOIPSDZXIFXHVLQCTCJJSOGTMHNAJJCMGPITYCAYHYAMHJZUOVNDPRWTDSMZQWZOQQDIKZZXVPAGQNECWQTM");

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
    msg.setTimeStamp(0.5137439333342464);
    msg.setSource(13251U);
    msg.setSourceEntity(53U);
    msg.setDestination(50583U);
    msg.setDestinationEntity(252U);
    msg.timeline.assign("JHQUSGGFTPOANXCNVHGCGEWRVBKDHEQPZAMLIASGMIJSOWSOZBJZNXGSHNDRVIPXSTWXFAHJBHCQBOZUYHKFBADDQIWYMQGIWBECMQNSEDTUPWMZPRLVXMQMFJATECFKAAZLWTTSCYBUYKTONGLYOVVDYNLNSFMPKPALWJZXDXQONDBLVGZPEMQVKCHVRYRECBLRRGFNWJ");
    msg.predicate.assign("MPLFJJMPZCVEQHGILCDXXIDTZKJKIIOVFAHWORTLNAKTXMIPGIGRSLRDMEZPYSPKFBQZBZZQEGOBQCSCXXSUDUMTZZTNLVCYEHJHFBHWEOMBCXWNRJROQUQHUTNKDMWG");
    msg.attributes.assign("FMGRYIVDIDAKIIBEOJWTVMCYZBDDVEZDQNRLIFWONOPZUYPCJPAKGUOAHFYLXMIXOXPKLXNRHCVKUBBRCRYRBGQFXKENPQMKZFMBMRTAOSYLOIDWWXCGCLUSCFJZYDIXPUTPDBIVEJYLLTZHVHXUUNSHABZUHJQWJFQJKCMRWLPWRFFDVXJJXSGTLIHAMTZNTGTELSFQBRNHWVSAAOKJHEOGACQYBEWGMZQKSPVPTKE");

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
    msg.setTimeStamp(0.24270839980110015);
    msg.setSource(33169U);
    msg.setSourceEntity(33U);
    msg.setDestination(45125U);
    msg.setDestinationEntity(2U);
    msg.timeline.assign("RIGAZOBQVNTDRUERMZWSXXORHAICXNAJONJSUNGGSFZVFZHKOPPAZCBNOKWUQVHRTLKOPZJEDJSECWEAMKZDPJUNFGVIOCGBOMXWGYBFTLIXURUQHWYQCYWPEBTHAGXDJRHJPXRPXEKJAHKZUNACYIDEMGUHCHZGQNVELBYSFNWRFDISDDIWTKSKEAMDMXCTLUFLYVQBTQIVFSQJYLLALVLIPYRNIQYCPQOHXZBUKJ");
    msg.predicate.assign("GJAFWDFMJWDJPPDAWIOQPZSXQRCMRUXTTAQEUXSIOGJXSBEXYYSNQHOQLBENLDCSIZEFMLWAZLKAVRBRVLQTOOMKUVVFDPHEHYNUAGDCWNFWZLHCRJGPFGOYPCHXZIBMXFJGRBWIBQSGSJUWYPMCLNCAHVDFYENXLCOFEIUIKBPHVGKRYHBQODNTDJZHTGDTVYUXTVKURXSQZJKWAZEFLTKWOK");
    msg.attributes.assign("ZOWJXZHSDWQPDDRUWEXHFPTGJCGUMRLLCTKYRHVUOXQTCXBVOOHTVQWACVLKPAZRGTKTBQFBLPZJUEGGMFQDQCCPYWLZ");

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
    msg.setTimeStamp(0.5336635789889713);
    msg.setSource(50808U);
    msg.setSourceEntity(88U);
    msg.setDestination(61919U);
    msg.setDestinationEntity(199U);
    msg.command = 190U;
    msg.goal_id.assign("BFBHLEGYCJHPPAUHBFIMRZDIJZVDEAZGYPGYTWRANVAUPJWIFDNGQFJTAGTDJMNOKCBEWBNSKSTWOQETVIQAFGFMKXXZSNHXEBECMLIVYBVTUVAIOKMYHPZVGHMDBIYFWYUWEZEPPSKPOITNSLWUQJRXCS");
    msg.goal_xml.assign("MRGJFVHECUCVLVUPMPQHEGIQZCGTPYJXKDKQUZPHEWWUOREHNYARKRFXNEYNNHXPIBXROQMUDHWFCQBYBQVYVCRSHMDTDVTCMGPQTCFAGJIJZHSVLROGJWJUBZAQOKEJKUOGPRXXFODJHARKMTLIYBVNLKBMNFTEXGCLASFTAQLIBNDOZISTJBKZFEBXWLSYZLKDFPYVNIWRMIAJNBFVATAOXEDSOZWWDGWYLOHCLUIPNZWZGASTYMEXDMSQ");

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
    msg.setTimeStamp(0.9118396983279811);
    msg.setSource(46650U);
    msg.setSourceEntity(212U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(37U);
    msg.command = 120U;
    msg.goal_id.assign("MONGJEOCRO");
    msg.goal_xml.assign("SGWNCEDSIXULPWBGZSGFYFHOQEMRNBZPNBIHWGEABWSBAQVLCATOWXJZIJTFCEXGJVHVMQTYOGALLAOFYXMQYVWLKUSEPWFBEDVNUNNCLDHKOOIGRHXXFPLQJIRHTLYDBNFIXNOFDCMTEEJFXXJEZM");

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
    msg.setTimeStamp(0.7358151871663647);
    msg.setSource(37258U);
    msg.setSourceEntity(1U);
    msg.setDestination(3292U);
    msg.setDestinationEntity(193U);
    msg.command = 95U;
    msg.goal_id.assign("NZKOMXACQOPVRETYC");
    msg.goal_xml.assign("AVLCVTMOSFKKOIIBBWZFWLPWNEBPBZSIEJDOBFDENYDCLTGFTEGKZLJXDGAXTZANWTADXINDQPRYHDXQCDCCJNHCAOSGSJPKBEUFBHTBIHKQLHQMYEXYMJIDV");

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
    msg.setTimeStamp(0.8586344011124245);
    msg.setSource(48792U);
    msg.setSourceEntity(164U);
    msg.setDestination(21137U);
    msg.setDestinationEntity(105U);
    msg.op = 196U;
    msg.goal_id.assign("WXRAVDQXLUJZQRHIKJIM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TDUVCRLKSLDXPDMKAFHLWYJCSCIYVXWCDJNZPRZYFEIXNUWGPAZFRKGJXHSHSYKMOBOMFZVAJHIVEUIZRVMQIFOWKLNTRBWZLOCUWGCTBNBKOITQBEHRQVWBXNLXDETKQTDGJQBNGRHQNXVLBGLDP");
    tmp_msg_0.predicate.assign("MYGMXWKLIHAQJWBNMAQPZPCZORHPQBWEMSZWQBNVNICOANKDIHHEPWIYSCXFUDOYGSMEMZLLHALUGWKGXFSXQHTDEDGDTTXULUZWYIREGCEYYKHEWYJOUAJBOFTJNPVNRAULWBXDAPPAZSQCPIBFZYGJVV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EBHVRRCDNMRQTPBWZEOACIGWZORPFNIGGSCIGJIDYUCATOYDJEQPJSVKPELZMVGTUYZOFBOVNTDHJJLSQKBJPSXSH");
    tmp_tmp_msg_0_0.attr_type = 25U;
    tmp_tmp_msg_0_0.min.assign("QVKHMFSJQFAXNXKZEYGGUWPGGKNOFNTSGHPKMSBBDLUDLTOOBVHTTYHTFSFVUIUIAOXKDNXZCDRPJAQBZXEMRSDRKFRLMXVKWPBZGYUADWJFYHCIJOKNPEYNEVLSZONSEQZWHBIRJDLDERKMIWROCLTGDMPQMBPAMMIUHVCULEZBWAVSCBYNZTLJPAYAEJXCMAIXUNHJQVIGATYSKWFYULJSYQDCRTVFZENHCRTCQGW");
    tmp_tmp_msg_0_0.max.assign("PKUDOHMGXORIVWGOXSMBVRSCFOVDRHZANJYBMUVCUSBPSJHIXXDIEZEPVKUQZZLTIVGNEJCFZTTTZTMLNWEBNMAEHGBPATKUXIJBQRSLLYTSUUVYNYNFBQFAODMDGGMLOPKCPEK");
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
    msg.setTimeStamp(0.962610364133283);
    msg.setSource(42529U);
    msg.setSourceEntity(16U);
    msg.setDestination(15019U);
    msg.setDestinationEntity(121U);
    msg.op = 80U;
    msg.goal_id.assign("HAWYLSHKCHWVWIZVBLLBTYVWIKCCXZVZQUQTTFFERGVJQYROOXBYEZFFFLJIMEBGWTPQKZBITNDJGDWRKXROVFZDUPEBSSIVDJQMKPBCGLBFHVCIYJSKXTXZOUAMOJEPMSUSFLDRBERELLEGGXNDUCJTYBAAPKMHWNHNLNARACEMGXYQOWXJODEYWDIDPTQZMUQMANTDJGSYKYZQOUVXNRNAPFIOVRQPZGXMC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XTYJJOCLCGGMVIDHGRFPRYCDQVJQQJZKBPEPZLTASPDIAYRGWOVIKWBGGNEYZWOJRAKDZXVCCKUNVKTXEOHBZXSNCMFHWNVMOTGFXDAQNXBLBAFHUCIJIFDFRLCFRRJKGHEXDQMETVZLBZRJ");
    tmp_msg_0.predicate.assign("JAQDTRPZDAWFEUECGNPAHUZLKFSKKZYYJPNIRGKAGOTWLXMTOCDNUCBLBDLTEKOJDBGDJPUACWCWQWZYBFUQXRHEEZPETZGAXMMFIVVXVXMRAV");
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
    msg.setTimeStamp(0.07311007756884969);
    msg.setSource(28432U);
    msg.setSourceEntity(163U);
    msg.setDestination(59213U);
    msg.setDestinationEntity(108U);
    msg.op = 82U;
    msg.goal_id.assign("WZTFDHXSBGAYQNEEEHBTOVJTHKTZIFZBUUARVPXPKKUCMCDADFZGRMIGOBFIRKHGSZUYYITYSKNMUYNPNCOCLEDEGLKHKBEMGNQPGYIJWTXFGVGXVSWZWZQBOACLTTCLPBDDSPSRFHGHISJXILOWQFRHVBIBNSOQERRJDTJMLAQWQUOIDQXVMQXLRJKEAUYRMEZXFFVYURVLAYLXOKNWWHJUOSJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GDYLYDIDBPRRVRWOFLTSHUZBTKQNCYQDSWXVMDRQZNRUVCLNSODQJCNGCEMRTQWVJXVHLMHOZRDNEANNCFIPYZURDSYBQFGAHWKLJEJJPHCOCAWKKGZPWGX");
    tmp_msg_0.predicate.assign("FIDMBOYZIAJPMVODHFBXRTXNRNAUSSEQQWFGFSVFPYSVWTDCZRDENDSVQNGEEIPQCYLLDRWTWULXGPZFCILJTPRHVXQQPNJIYHJXTNBQGJWZKVATVEPOZCLWCHHIAXMBLQATYDYJXHSXUANJBTC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NBTRZPHISBOXPHIUGVFUTRCGFUOPHNNLWSMKIJMSAWGEUTVQHGXBLPTLDFYJQAJRJBELDABVKPOZUTZIXVIFTMYASOQHFCRQOUCYVPCSFZDSYPNGEPBE");
    tmp_tmp_msg_0_0.attr_type = 44U;
    tmp_tmp_msg_0_0.min.assign("GSVAQDAYDMVGGXWBPSYBKTVGSTCDQOVFHSSEPXUDCAUQMZGVDARKOQJZDQNMLJIJZZMVNLXPMEFWMPBSGDCBULPARHLNOVXELEHCUBFHWTKDGORQLNTKQVXBFVAHSSMXCEIIUKCWZOYWONRXOTJJTUAJCXNEJMXJUAYHDYBUIRSWLYGMUOTKFHUQOTELCECVIIPBOWKNXSRQLYFCEBYAIERRRGLTPPN");
    tmp_tmp_msg_0_0.max.assign("XZELIQLFSQKVQOLRFRPVXYCUXNCCPUJAACZBTGWXGKAHISKNMAKHLOSIVAPPBPSFLAXSXKBWTFRSGMTDYPWYHWWDMFNKYHYZHVQESBKQFOEGDWOFQDICUGMBIFZAWKFWCQCPGZUDNMMYZMDEHORVYMKZCDJEGOPBHCUVNXBYCEZSUTGAIRIRRGUVBJDHJMLTIZHWEJRJNOEFJTTRPQUXYQHWDJBBVLAVJEUZSONTLXTUMYG");
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
    msg.setTimeStamp(0.10115130985782439);
    msg.setSource(57050U);
    msg.setSourceEntity(98U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(203U);
    msg.name.assign("RIOUDSDHYODXDEKAOXQRLGASGGJPVTEOBJOIJZNIRRZYFFKAKGYPMQWXMWXBAALESBRHKVBBBZHNHKGINJJXJGVPPHRMIUVGIEWLCSFFYJZQHUOVYBGLVDTWSQLYXLCWRYMTPNIHJFMDACICACUZEFLXYYWBOXVDJTVPQSTUUVHUSXJZSVKMPRNCRZUECCNLKGFQQATWIOCWRMHQUSTLNUBTZDGNEMOYIABPSWZZKFLQOPATEQPMFWDNMNEX");
    msg.attr_type = 72U;
    msg.min.assign("TALQLXMZOSGGLHRCGQIDBHITMQTVOVAIMUVWEZKPENTXAJNUYEYQJKOPFBLJDOJYRBRZDHZSHMXWJPBWWDMYGOACQGMVEDPVKRRMNHDOUSZAUUXFZZIJQRHPFTFSWCVQEEYEBKFARRILKEGGUXMXOJBWTCNPOSUMIWAAJPTVUPNNVJBZSKMEIWFGNAOSDILTLCQDNXURHBZQDDCKGFVKBTCWPCYKBI");
    msg.max.assign("ZJWJWBOXKPONLLVZFCCTRXNMPGASGSLVGKSFSWLYRXOTCEBHGSVURRPASCIHKEQRDQQNWDNPMMCYQMMLLBBGJPLQMZZDFIGSZVIXSCFAWZTAHBYTYIAECODGEPCYVENMFCYYPLODQUJBOBRRGJUNHNEWFYKUFKMTALFBWMWETUHTHUDXKTG");

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
    msg.setTimeStamp(0.5891317141559591);
    msg.setSource(51444U);
    msg.setSourceEntity(27U);
    msg.setDestination(26847U);
    msg.setDestinationEntity(48U);
    msg.name.assign("GGXTAVFXFQIHZNHQEOZUBOSBUWJSAETWAXBCAFSLOIPXNNLRSXHLTO");
    msg.attr_type = 115U;
    msg.min.assign("XFHADSGHKDQILLLQVOZCACHMBPSYEAFAQNWWTDJZQXIBRWYKGIFYNETBWPFCCZUYPGNQDLYNMIYATFIBESWRVMTJMUPFNXSXMRGJG");
    msg.max.assign("VJNZQMFSLBJNZMVOECOLRUYCIGJZQAUTYAWMRIQVVOSYITTUEWYURAYVPHEPCRDIKDXSQVMEPEVHXYHILZGDBPBQAXZNJBAZFLAXGGQXPFOZYRWHEPEIKKXSDWMTFFKQIOSPLMRODTKKFGCKUPZCYPUEKQ");

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
    msg.setTimeStamp(0.5084376900221786);
    msg.setSource(33470U);
    msg.setSourceEntity(80U);
    msg.setDestination(38148U);
    msg.setDestinationEntity(227U);
    msg.name.assign("SAWQJLVAYZNVARXDCGUUVVIBKORODQFHLMSQWILKOPTTINPQDNTYODMHEVPJJZJUKCUFBGDYNENAZFHONWYEQNUSABBILWBYFMOKJXUPGIRCYGBMVXJRMH");
    msg.attr_type = 156U;
    msg.min.assign("WVDHVVQKROJDXBISMTHVMHJDLRYYGACGCPBYHWOLZCFGZKEZPJVQXRVWLVXTUERLDLASJLSQDIFPPKRKIMZXLSLNCMYYVNIOYSRGYCATNYDBIQINZXXAUHOOZNKQQBDPCGWUBMNTCPONJKRUNFQBHUABEEUSYFPJCLUTPBFUMFCAGIKGQBIOWGHZCDSWASMMBUTPJWEVEFTHAKE");
    msg.max.assign("ZFWCFXFQLKOLMDAKBEMVCHKUTVQBCCYUZTUYAOZSEGYGURMLFTVYQVPVREUZOHMYEAFYCRMGNHEYYBMVSBSLXVFJFDEXSRJPPLAWUBTAPRPWJKJEHNXBKTIEDXELJITLCOKPDHJCKWVXWZPXKWLOHNIQENZSANGZDBNNMWRZCZTBIIQJNJRITHQFPICBNJPFOSVGRDHQOCXIDSQUSMQUNSQAVUSOOHDAKMGKGOLT");

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
    msg.setTimeStamp(0.26700760317694083);
    msg.setSource(51094U);
    msg.setSourceEntity(11U);
    msg.setDestination(37766U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("QUWNNTHVIAXBTQZWQMPXOYZHKTTRHTKIHWZUBGXTQHBILMKJMMJJNESSSEYRGRPGMPVUKRSVOEXKHKJMFRDEFRJNQDZVLUMLDGHBKAFIHOJPJAUXKQXZACPNWHIBDDAMWXFPNDOCPICTLQEYOZXMFGRRJOLLVJXOYFZKWTEASBGMOCNEBSQURCIGBZIVEIDVWLGUEPDGUN");
    msg.predicate.assign("WMHOIQTIBPWJMHPUWUWZGOUIEBRLMMAKLQRGHPRRHCWTRAANICTZCSAMGAIWVV");

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
    msg.setTimeStamp(0.846042414073129);
    msg.setSource(10004U);
    msg.setSourceEntity(42U);
    msg.setDestination(32177U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("YXUEZTKEFWPXRLHUKBLPSMOATUGCXFJBNYNOMZIIDARIMRUBOGPRWKQAZQNVIYHICLHQXRTFYJNXVAWVCWSTEDVSFCJODNKPVMJSQHJHZAKCQYGRCDOCETYFTHUSIANTOBLIEZVWYVEXUNKKSXBLIAZZCESSKYWOGNUVTOLPTMNQGOWBQCMJKABZSJQLUPSTQGLDDMVOMZGEEHHRIPBAIUFDBKXQZFMDWHPCXRY");
    msg.predicate.assign("YUDWSVMSRCUOIERQZWMEWHHBLZUOBZWSYMSSTDP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QHIJLIEHHLCOENRZJUAREODZRHVYMGGBJHXVWOEBNGTZYJEHGCQUTWZPSFWVNPLTGEJOROUTKOQPVBQALHGAYFHKAPKUQFBRENICQCSHBFQIZUJDLBWZDEVODWMJCTYJPTAXXHIWRMROTIJTPLZWNSCISFGFIMSRFVEMWMDPASPOU");
    tmp_msg_0.attr_type = 15U;
    tmp_msg_0.min.assign("HIUUQSALKXZEVUYSC");
    tmp_msg_0.max.assign("TIUYYSBLEXDMSRQBUVJQZXNJXLKCGOODWMOKTFFADUNQIHEDVBEPCONLDUISVLYHRPFZCWLQ");
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
    msg.setTimeStamp(0.9160012532544201);
    msg.setSource(34154U);
    msg.setSourceEntity(67U);
    msg.setDestination(41929U);
    msg.setDestinationEntity(155U);
    msg.timeline.assign("IJNACMRTUTPYCZGISRGPCBRBSPEIUHMUHQABSLUYBWDNECUGJVKNOQLLMFTXMUWPODDAZQQUDSGJSCNWZDKJVVJBVPOECCHRANVIORYEQPLBMTMRZNOFLKJBXGGVOIFNWXAEADQCKPLVTEXWBFXFHRIVKYMWNMJAWUVHLYWKXKZFYYR");
    msg.predicate.assign("QGGPRXTHMKVVYIZITYXZEFWCTXYWGOFAQVXILAFEHSNHIUWJYZMEUNWSCONPABHDGHKXAOLWWQCKRYMKSJEVDXCMKLZHHGERAIPIJJZXNBSMNZJCDGZMPRJOLCPLGOVUCIFCPOIHVYVJUUYTQFAKNQPTCFKLSBXLSJVBODAWOYAVPUFJBYDTDORFDRZY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UQZAKOKLUCEMWHYQCDNXBUBBXICFXAQTJOYXURVSUCAEOTPLMAQVMILMSVULWFJWFHSIRAPMSCDRZKCFYMQKJEOWNDBSHHTPZYPOTBGROTQEQHALNUGNYQJYSEBDDNASIPJEWIXXCJGQNGFKGFRVEFBKTGJGMIAXATBWZPJNDXCWICARVVVVHLZPIRZHYMHNGJOXGMSBURLLIDPVSFXOUFZNYSPVBNRDEKRFWWJ");
    tmp_msg_0.attr_type = 224U;
    tmp_msg_0.min.assign("AGKSNJTFVCWLRFFMKLCDDAYEQOPQIGVYWTPYTIIMATJENHVOWMEPPSOPXEWUHWQOGEIRXJMNLRGGRQTLUZMCNRXNZATQCORBBGYBPABXDLJCPKYYBSZIRVBZRUBHRCMVILEFWLMEHSKDODSUOJTDYIVMREJTCCKKGCXIPLXSUHGKQZOOAFMWYYFXADXTGKJWBICKJNYAZDDFNFVWAMHVPHESZLQPUQLUTHWAVESOSZNBFHXUZNBJJND");
    tmp_msg_0.max.assign("IAFORUTJFTTKCFGOFESOECZXVJAJHIKURXKIUQCVHKUARIWVDGLVHDQLFCHNUBCMMXQUEIVPDTHTHQQCPOPEOALUNKUCEYPYEFAYTBNTXQGFKFBAKYXWKWZSMPXRNWMBDSYDYBZWYZWILAXXOYPJICETUJGAECSSHRNGNOBDEOVABONRBCDVSRSGFZLRV");
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
    msg.setTimeStamp(0.7807154770164342);
    msg.setSource(22398U);
    msg.setSourceEntity(224U);
    msg.setDestination(37269U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("QXNBWYRVNMIZQIIPFYEWLFHBIVGUWKAGTGSJDRHQNDEZSHZRKJPTUPGTDKVPXRKZLDNDTCGBNACAYQRCAFCISVEEYMLKPYNJCNQAZBLMUHPOXEOUOXVMQIVKJ");

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
    msg.setTimeStamp(0.6375170641160609);
    msg.setSource(51318U);
    msg.setSourceEntity(238U);
    msg.setDestination(41428U);
    msg.setDestinationEntity(79U);
    msg.reactor.assign("NOVJXZMVEJDYEFSWTFTWVIUYQVYGERILDZDFFBRBKNCGAIXNTKRKJZYVTHOORTQUNLBSGXZKVHQBUYIZZOMXMFFPBKCQXOLLQXNOHWFBLSWLEXCJXVPGRWUGGTBEKAPSRNGLAMPLCTRHJAWLPSQACAACUWCTRNQLEDXZMAKIHD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PDQZLXHXYCHWNJQNXYQUPCBKMFIVSRHEATGDDRLDLWPBIRSSBIAMFHOGTVTTIYYAJPBXIWHRESDZCTEWZEKAGGDBLUXOGNKHBZMMBQVFYPRYMVNUGSXCUJGCFKGKPAMVRMZPGVCZOUHQDPZZKEDBCFNOYSXPWAROURLUJWCQTDFJPIYKSGJLNSZDNFNVUBELEXQFCOYUHXKINUTJZQSOFVABWRHNMTQW");
    tmp_msg_0.predicate.assign("CHRQKPBFKAFYBCRUGGWDERJPYLAQFPFQHTBZXKBFTZTDPJRUNHWNHJWHBALIYJAECQPFMCLTVVQHTZVTXIBKHARCHGWEIUTLEYDXORNZOTWSNMWGQZNRVPOODOLTDGXEZZSUBLXPSMUUSXIQFGHEGIKDWJUGUZDIFJCAIIPYSLEOOISFQSJHYKLFNY");
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
    msg.setTimeStamp(0.9713558854612312);
    msg.setSource(21669U);
    msg.setSourceEntity(153U);
    msg.setDestination(29390U);
    msg.setDestinationEntity(172U);
    msg.reactor.assign("LHRHEQLEUKQXHIZYKZTWQWPDGBTKVYHUWPLCKXJVOYHBIORGANPESGXQSAXTPRIDDZFVVSLJDYJIFXMJNWGVZCRODTXOUCWMJFAEOCRFKVZPIBYKBSZYNFUECKPNSEPCRCUC");

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
    msg.setTimeStamp(0.004613804547755285);
    msg.setSource(39535U);
    msg.setSourceEntity(191U);
    msg.setDestination(58424U);
    msg.setDestinationEntity(191U);
    msg.topic.assign("LMUXQUABKAHVKOAIRHHZZEGLJWKGULBTSHXCPMVOKCFTVSKDZRNSDIBPDIXHVJCSZPVPRKHILWTRQFEWNOGGVNKGWRGMUJNMCFTUBUCHUOFEIZQSQOJEDCZGMYDSJIWPOFBABDJPLMXBEUYYANZRIVAKKYXMIXABW");
    msg.data.assign("PIYGITHHOMSRFGWLCPRJLIXRPFDTWOHKPLLTEAQSXFMCJDNXNACWEDARJJPLQKNNPXGHGKLPCQIDBOXCJ");

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
    msg.setTimeStamp(0.08165895011663782);
    msg.setSource(1984U);
    msg.setSourceEntity(85U);
    msg.setDestination(22895U);
    msg.setDestinationEntity(142U);
    msg.topic.assign("SJMAQTULQPNAPUOGTYTGVGPKGFUZKYBEWXHBNPRLNGISHBQLQFMWLJOMFHTJYXPAZVAILIOAADDDRDFUDSQDXRGNYSBVLZYCSRJUDBBFRPNQRJFJPNWENLOZGBTHOCKWKSA");
    msg.data.assign("JEQLHUDJYTJMDUUHQLNXNZCCGLWOFCRSPMNWKYYTCWWORWAIXUZLECQBXKRRHZEJAELVDVFGILPQFPKADNDYBEVMGUNIXSJXVRGNDKODXBGNFKGSMCGXFQBCH");

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
    msg.setTimeStamp(0.055969897259888546);
    msg.setSource(2927U);
    msg.setSourceEntity(70U);
    msg.setDestination(18561U);
    msg.setDestinationEntity(72U);
    msg.topic.assign("QKCVPDIRFIZIATVZKFSDNCJSAIZEGVUXTFNTFOJFYWHZBRYZBEQHLQULMYJXFRPAGNBMMMXKTNSDRAHZSTGLYRTOFHNEVDVGHCCGBHQPWHYZI");
    msg.data.assign("ZKFHTZJLYAWYQEDAMJPCZUGZBXBRVCBUUDPFFQJDUNASSRJRISBAJEROLO");

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
    msg.setTimeStamp(0.8523213589310545);
    msg.setSource(47714U);
    msg.setSourceEntity(179U);
    msg.setDestination(17140U);
    msg.setDestinationEntity(25U);
    msg.frameid = 28U;
    const char tmp_msg_0[] = {-66, -30, 40, -89, 107, -124, -15, -13, 1, 109, -104, -123, -73, -89, 112, -56, -55, 38, 31, -83, -58, -45, 108, 2, -12, 58, -24, -48, 96, -20, 20, 59, 122, -122, 27, 53, -94, 8, 92, 91, 106, 37, -65, 85, -6, -67, 47, -16, -102, -108, 125, 72, -65, 107, -20, -116, 103, -22, 124, -15, -11, 26, 65, 60, -109, 41, 61, 125, -117, -33, 18, 0, 116, 32, 116, 87, 86, 1, -93, -11, 76, -61, -99, -13, -93, 96, 24, 122, -101, -95, -23, -79, -71, 16, 0, 40, 23, 79, 123, -114, 104, 16, 88, 110, -45, 92, 108, -128, -16, 53, -18, -48, -94, 26, 9, 8, 112, 5, 50, -89, 21, -113, 77, 60, 88, 72, 9, -60, 110, -87, 96, 47, -37, -28, -51, -55, 60, 82, 23, -107, 25, 113, -126, 65, 40};
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
    msg.setTimeStamp(0.329077048121173);
    msg.setSource(15122U);
    msg.setSourceEntity(51U);
    msg.setDestination(9625U);
    msg.setDestinationEntity(2U);
    msg.frameid = 109U;
    const char tmp_msg_0[] = {-109, 34, -18, -19, 17, -2, 38, -25, 69, 8, 13, -112, 78, -73, 40, -6, 125, -32, -14, -36, 49, 79, 2, 59, -19, 94, 4, 49, 32, 10};
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
    msg.setTimeStamp(0.7246698695034773);
    msg.setSource(22010U);
    msg.setSourceEntity(110U);
    msg.setDestination(52640U);
    msg.setDestinationEntity(235U);
    msg.frameid = 136U;
    const char tmp_msg_0[] = {104, 111, 3, -85, -18, 61, 23, -47, -27, 45, -31, -4, 70, 35, 61, 50, 62, 42, -109, -60, -50, -40, -119, -16, 47, 121, -68, 54, 99, 104, -71, 77, 80, -102, -90, 106, -61, 92, -61, 108, 90, -8, -3, 10, 121, -30, 39, -40, -15, 99, 16, 38, -80, 121, -70, 15, -128, -87, 118, -121, -35, -90, -29, 54, -4, -38, 110, -123, -106, 98, -125, 9, -6, -13, -22, 43, 13, 119, -24, 7, 68, 56, -50, 67, -52, 74, 126, 6, 65, -8, 20, 51, -117, -96, -84, -57, -110, -94, 110, -89, -43, 2, -82, 12, 31, -15, -115, -51, 68, -72, -54, 85, -34, 76, 120, -21, -79, 124, 35, 125, 42, -60, 92, 49, -109, 104, -51, -75, -20, -37, 56, -102, 5, 119, -107, -12, -78, -77, 23, -25, 52, -20, -116, -54, -61, -92, -45, 115, -113, -103, -34, -13, 43, -81, -6, -98, -112, -8, 96, 112, 77, -94, 36, 66, -15, 28, 77, -49, -126, 0, -18, -123, 19, -43, -53, -4, -58, -2, 92, 118, -75, 65, -89, -26, 110, 36, -10, -51, -63, -72, -120, 125, 2, 93, -65, -30, 118, 97, -68, -51, 56, -101, -49, -5, 53, 10, -86, 108, -18, 92, -62, 39, -8, 38, -17, 70, 59, 72};
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
    msg.setTimeStamp(0.5273444857650424);
    msg.setSource(40532U);
    msg.setSourceEntity(252U);
    msg.setDestination(54649U);
    msg.setDestinationEntity(24U);
    msg.fps = 171U;
    msg.quality = 119U;
    msg.reps = 201U;
    msg.tsize = 61U;

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
    msg.setTimeStamp(0.2884900471748464);
    msg.setSource(56142U);
    msg.setSourceEntity(189U);
    msg.setDestination(20165U);
    msg.setDestinationEntity(222U);
    msg.fps = 179U;
    msg.quality = 182U;
    msg.reps = 65U;
    msg.tsize = 215U;

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
    msg.setTimeStamp(0.1359481751199616);
    msg.setSource(38062U);
    msg.setSourceEntity(175U);
    msg.setDestination(12238U);
    msg.setDestinationEntity(37U);
    msg.fps = 106U;
    msg.quality = 125U;
    msg.reps = 116U;
    msg.tsize = 242U;

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
    msg.setTimeStamp(0.380962481681021);
    msg.setSource(47429U);
    msg.setSourceEntity(43U);
    msg.setDestination(63316U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.9807614226076761;
    msg.lon = 0.8305284233619962;
    msg.depth = 28U;
    msg.speed = 0.980359422755145;
    msg.psi = 0.45777225187426385;

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
    msg.setTimeStamp(0.329276558835894);
    msg.setSource(16195U);
    msg.setSourceEntity(2U);
    msg.setDestination(33983U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.7791175403092294;
    msg.lon = 0.5690004305495275;
    msg.depth = 8U;
    msg.speed = 0.9383838689338139;
    msg.psi = 0.3980861706893498;

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
    msg.setTimeStamp(0.5645672054415678);
    msg.setSource(53531U);
    msg.setSourceEntity(154U);
    msg.setDestination(26192U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.5212992911221392;
    msg.lon = 0.27389954769830516;
    msg.depth = 58U;
    msg.speed = 0.2070377389122221;
    msg.psi = 0.35794760502887535;

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
    msg.setTimeStamp(0.8455563857506652);
    msg.setSource(3178U);
    msg.setSourceEntity(146U);
    msg.setDestination(58831U);
    msg.setDestinationEntity(55U);
    msg.label.assign("BUDIXRUZPDZNPDXTLHJQFZRBGXHZBBKWNLIHVSHGTNTNSISUUEBTENIRLKMXWOBYATZLGGUZJOAEPVGJTCKIEPWPUNMPMMOAVODCSAUTRAMMVDCSNEDVGMWGPFFRSLEFZTKBBXYHOZODPCCCSGRYXFSAYAQLMGIVTMDJTEBKFNJUOGAQQIZFHVYLPRJRYSISDKHCHKKOOUHDCWAMNYYXLCJALLFFFQBY");
    msg.lat = 0.6935444011837063;
    msg.lon = 0.7534776719981626;
    msg.z = 0.33263228004437173;
    msg.z_units = 181U;
    msg.cog = 0.23097279050452468;
    msg.sog = 0.786634705286935;

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
    msg.setTimeStamp(0.09444488176425248);
    msg.setSource(15218U);
    msg.setSourceEntity(165U);
    msg.setDestination(63995U);
    msg.setDestinationEntity(70U);
    msg.label.assign("IEECQBVYBYUVW");
    msg.lat = 0.10315424980866028;
    msg.lon = 0.9486591991886866;
    msg.z = 0.8477055003404239;
    msg.z_units = 196U;
    msg.cog = 0.8823833912723451;
    msg.sog = 0.8562191781432545;

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
    msg.setTimeStamp(0.9590137500770405);
    msg.setSource(3299U);
    msg.setSourceEntity(150U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(143U);
    msg.label.assign("WISAVSTOPOLMEMQORTZYGDKTPIYWREJRAIRJDLNEIVCNK");
    msg.lat = 0.9558851391436618;
    msg.lon = 0.45579135921828395;
    msg.z = 0.5920716311862904;
    msg.z_units = 102U;
    msg.cog = 0.39549610036137983;
    msg.sog = 0.7532681642612308;

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
    msg.setTimeStamp(0.5073541920244155);
    msg.setSource(60834U);
    msg.setSourceEntity(31U);
    msg.setDestination(52907U);
    msg.setDestinationEntity(169U);
    msg.name.assign("QIFNKDYEEIGXTDCGQBZVOMOPKWHTZGENPPCIAUJHVZLPFZWZHOOVTWPJQAFKCWCIXDHRCYEQCFXOLSZFKQFLVWTQMQBBZTNSDJTIGYKZSXIIDRCCJSMGRYIJDNAAKIGYUMXMTAPRTZVOEPLFTJMJZYGALMJUGSJXFQTGPRVBEUICYKAURJAPSBASNLNKFHROWHRVUBGLXYWCDXRUUVUOBV");
    msg.value.assign("QCKMPPNHHABZMDYGUOLTTEUQRCPBXTRFXDWFNSDZYMWHODGTUCNJGYDIZGWSJDMIVOJWFNPATIZFFUFHVCBYLUAOXOUARBPSLVWYMJWSGSRGNLJBMOZWBWOKTEHQXKDCSFGPREIRQALBMQNTSCNEZYIPCEGSHNJMNWFRZIXUYEXHLQF");

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
    msg.setTimeStamp(0.46299191288813624);
    msg.setSource(23046U);
    msg.setSourceEntity(53U);
    msg.setDestination(51352U);
    msg.setDestinationEntity(28U);
    msg.name.assign("PQMYRPDCCYTQKVGBUOAORYWDUXNYIFXGSVZCIGWTJGBVLZBWXLITNVBORAMHOJXRHGULKKREZSGHUTMLPNFEFEIIXGFNHPSOLPJLLVMFZUGFUJVEEJFATMJXJHCOXTENONRAPUAHIQOBPCNITYRIRDLXSUHDMGTDPAZES");
    msg.value.assign("OWBPFRXCCIKJXGKCGATUHVETVUFSRTHTLQFVDEBWYPMBQYRQAEEUCNMHYXYRIBIWYCJZLHLRWVVGJKFHVX");

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
    msg.setTimeStamp(0.653961243151069);
    msg.setSource(9121U);
    msg.setSourceEntity(243U);
    msg.setDestination(55571U);
    msg.setDestinationEntity(109U);
    msg.name.assign("GSULESGFSDCHVHUUHXQQBGBRBXPJATLPJMFGPJSEIVJHCYQCDYKHYZLDOVCENCANFCAPRAOIWKKPOTJAKWEBRESYJQIVLCZUDXFTXMZXRMFNCLIQWGYHJQRXQNUVBTGAATXHDCYYSVKHWPIPOFJTE");
    msg.value.assign("HACULIBGFRWJDTUQHFMISRSEBAJINTLDKYCKJXIIFFYMSBBPLGXHIYOZMTIYTRVJCMOF");

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
    msg.setTimeStamp(0.4039376656010798);
    msg.setSource(51833U);
    msg.setSourceEntity(45U);
    msg.setDestination(33622U);
    msg.setDestinationEntity(213U);
    msg.name.assign("BGCDWIBNNXDAZFEEPKGRGFOSJFNVSYPJQQMRDOVJNIRLFUYLCQJVEFYNMHFQRHNOWRJSWGJBZTTWYXELTHCBGCGVPMVKMQOVDHOBTCASRLHYPMQXLGKVAZPHIZBPADGLZXCYZSSXRFBCJKWIDJKTOJHYRWHFYMBVNERSJCMUQKCUAAAAMSIKXEEUAZIHSEOVLEIIS");

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
    msg.setTimeStamp(0.5010419856629662);
    msg.setSource(42476U);
    msg.setSourceEntity(199U);
    msg.setDestination(2562U);
    msg.setDestinationEntity(242U);
    msg.name.assign("RCJGFERSYBTAXXRKLFQYHUPMIZKJZLBGNELLKCLDESN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BIPPNRFDIGTIPULIQQEPQXWTHSEPUDOYYZVJFZPKYRSZLNMQREIHHIDAFF");
    tmp_msg_0.value.assign("TYVJMYIMSVBYWYBLSSZPPKKKJBZOBKIGYJMSPRJAQGHDQWECHSSRIYQTDGCGDNXFGNXFIDULOSDKDXTRNFVLHDRCHLLYZQOAEIJHSBR");
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
    msg.setTimeStamp(0.09759051088374882);
    msg.setSource(33747U);
    msg.setSourceEntity(46U);
    msg.setDestination(51960U);
    msg.setDestinationEntity(198U);
    msg.name.assign("VLJQZAEDIDQNKREQVPSFDJFOYM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EVMADCYODOIPBFSHCWUJUTUHGOUQPNOVTDMYTWXBCLEJQRXQYANWPDQFNGDEXTDXKCTAVSKD");
    tmp_msg_0.value.assign("PEAXITFIFKEQROGQJJXVQHLUVJAGTRDTORFBOYTGDSSKXEXBQPAWHJZDMOASZNCWYMDUILMYWTLXMLUEHVONSSBGNR");
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
    msg.setTimeStamp(0.8775444811980146);
    msg.setSource(17507U);
    msg.setSourceEntity(66U);
    msg.setDestination(59657U);
    msg.setDestinationEntity(122U);
    msg.name.assign("FAUGFAKDLHTLBMBTFYGAKPHKYRVUETRIJGQAWAMLTLZEVXGKCJUWSTEOBMZLVTCVQEMOOQNTDBPEAXWQHSHAWYTYNFNBOXLWIFBPNNGVQPGOTHSLZXXHUJZJICKZKRZWBUMEJNGORLFFNRDXQPPKUUXWRIGNFVUMSWDRDESVMHUQSZQYFWOXVEYKHVMRPHYHINTJQPJZLSABDCOXOSKDFPCECAGSSCRQDOBIPGIIUJZKEMIYDMLWCXY");
    msg.visibility.assign("ZTQOECXCONQPLMOVIDRKIZDSXENBDPVGTJVXZBGSXORUGQRQPUCVSDLZFLQEYMKHIUNZEWOULMKDXHRPBHBKUMZTVBEHJCLVAEWJSPOLXFVTSZICGSGFMPXFNTBLMSKKWCIIADILIBATYDOKEPZRQWBWZLTMWJHHEYYCXOWPBNFAGMTPRHUJARYZHSYYBYKQRFDSTVUOAIOGWCNLAWRUFVAYCJJUWFNAIRNFNYDXGS");
    msg.scope.assign("GYKEFOEKHINPCMXSGPTTAQFEQCETUMIQRCOXAQUKTIPKIKEKIJXBMSRYRARHSBWVCYCMYKLZUXVIZLVXPUYVARVALGPWBLMTSERBPICHOPGJWFYTDVUOVHVNWJFOLCEAWJXTPMFLLYJCQFRECWOKYQNOKORDZHODNSQIHDNMGUESJHDGJFZALJPWRBUSAQTRSNZWUXMIANTWGB");

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
    msg.setTimeStamp(0.878270660588053);
    msg.setSource(58052U);
    msg.setSourceEntity(26U);
    msg.setDestination(11452U);
    msg.setDestinationEntity(162U);
    msg.name.assign("UZGXZPMBSWQUJEWIGMUJPGYHPRRLFTRKSDWVRLSUCHACZXRBDNCGGLVOGTJBZFBKKRTCXXLASSYZFOQGJCRPLLUAGSUIIDNEEWYVMWGBPAYZZKQEVNQMDRNIKMOXTIMXUHNNBQHTLOCMQFTTHAEOEJVYFXMOKUFFZDPWAVAWUQKEQHED");
    msg.visibility.assign("OCYQSYNHWBDNYAQYFXKLXMUGNWPBHMBQ");
    msg.scope.assign("AENEJVQFHXIBPADWSMFZACLVPMUHDJKZXFGGRHNVTDKOGWOWIYLEABCBMLLDRYOPUBSYYIPXANWCWXGTRFLNEJNYHZGZVWRPSDNEUPKMJPJZBUQULTXGMUOQKGCCNMOYECTOHSISASDWIYOSTUBIZRFRPHITKQDOMWARQNZRSFVGIYXIKBVPKVUZEMRCVFRXJMMHTFXQTCQYKWVHZZVONNBGSCPLLQBLEWADH");

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
    msg.setTimeStamp(0.3704457395604658);
    msg.setSource(2646U);
    msg.setSourceEntity(94U);
    msg.setDestination(64249U);
    msg.setDestinationEntity(167U);
    msg.name.assign("BZRURYZCZLIAQXYIHMXEFOMDWIVZTYDITYOXOQGKQSF");
    msg.visibility.assign("OXRVHPQEDNKMMNDPAKADHYJULUVVNAZJRSBULGWCTYYBGFJEQZTORREAGHIVKPXEYCOBICPHMWDVWZMFOTCLSOWIZUBWYMCCAFQYSRUMMJKXTNRITEBQVYHWZVYSJSMWGJTEYDDOLPFNAUBLOXBPJGWUVDUKQOEKXFWIVPQDQMFGXAZEAUXDNTKRXCZIGONWQJIHZRUILJBVPDPKNROBZXHPNFMZGTCATQLYILKNLLISHEHTCGSS");
    msg.scope.assign("ZQDUSQWXTEWKOBINFRLFMCHMGQVZBYTUXNPFFWFPZGDMCMVWLBNAPISKKRFQNANJVBGDSJKEOQJQHSDK");

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
    msg.setTimeStamp(0.22400572471138414);
    msg.setSource(51125U);
    msg.setSourceEntity(193U);
    msg.setDestination(55120U);
    msg.setDestinationEntity(234U);
    msg.name.assign("FSQDBOFOFFGVDMHAEJIFK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SCOQIWHYLMGPVVBEYTAMYTJCUVFA");
    tmp_msg_0.value.assign("QLYPJRKUJRVPGVZBZUCMJPZSCNWXFQDMETPONDIDHYCQSDAIHJWOENUBRNPLWTOXJFGEACLXAVRTOOSIVQDUJKIIOYHLWEGSJMBACAGFGFQBFBDXERPYPKVKVLGYMLKBUCOYDMLUVCNFNVZIQWRAVMSZNTJSMKWDLAJFNSWIFUHBBQXZEEKZWZM");
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
    msg.setTimeStamp(0.7427291963768761);
    msg.setSource(35688U);
    msg.setSourceEntity(60U);
    msg.setDestination(63827U);
    msg.setDestinationEntity(92U);
    msg.name.assign("JXMYFZBQBEMKINAJWIZMTDSXBEBFGTRYWUJGZLQIVVWGZOQGURVRTFMNFKXPDSDDXEDXKVJTUSNGWMSFOFACKYQDELZVARCPFHJRZLQTRENJYJHQHHCDPOENNTGVDYILPTQECBWWOHCCTIRILPXVXFSMCVPBNBCOUWBIDJGYKCBJKNFUHKRIAHYOVWOSDGLLSWRTLWHSINAHZKEZGMQCAVEOUPZUXYPYSHQOEGAAXLTYOKFU");

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
    msg.setTimeStamp(0.7086612347144924);
    msg.setSource(60309U);
    msg.setSourceEntity(225U);
    msg.setDestination(56048U);
    msg.setDestinationEntity(103U);
    msg.name.assign("NMRFBRLFEWAMXUIMWXZVIFGVUXJIJGETHSOSSFHEKPDZWAUADVZCWRKVCBJLGUEDRKKILSWFSGIPRCOUQQDMME");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JLRJGNQZVISHGSLLWWRAQNPYIWCMI");
    tmp_msg_0.value.assign("DGUDFFUHLSURFXOKOXFWOJWOEFHRTZDLYYWENVBIURNFXTCYPMDGXVJQUBQZRLCIPSTAZMBDNKUOGJSTDMJYGUIPQZTYRYSZKQAELKMVQNREWYPKGOALRBEBHCCHSEOUGTCBPLRS");
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
    msg.setTimeStamp(0.9245505293903392);
    msg.setSource(1163U);
    msg.setSourceEntity(176U);
    msg.setDestination(20220U);
    msg.setDestinationEntity(107U);
    msg.name.assign("PHBMLNPOJBOMXISKCKRFDMJLUOZQZFKJEMQHWENYXERXRZOIGQNLATMOBTKJFHHEIHDYQDAIXRSWZYXRGLJYUNUTQIIJVBXOPGOVQQXTJTYCLFUKGNBIASSLGHWPKUBNTHXGIHBYMNFFLETNMJDREVHPKLSHVSWDFM");

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
    msg.setTimeStamp(0.8235515083232263);
    msg.setSource(38493U);
    msg.setSourceEntity(103U);
    msg.setDestination(65524U);
    msg.setDestinationEntity(178U);
    msg.name.assign("XMETRQZMDAYIZGYATNPEQVOQGLHHLUCMGQFUUVRUZAHJOFQIDWCBWSCXBPKLXUKJHKLDBZFWJRXRRPTYHYUNWBUBNUKNEEIABPHSPCOVARNLNKRHDPOMCHAZTSMOPSHVACPSIBCZGJKQMWAEFNIRTTLZTWBXXYNIYLIGGYSKDZCQFRZIBVSLGPVXOUEMTRKNDE");

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
    msg.setTimeStamp(0.0643457368524345);
    msg.setSource(54786U);
    msg.setSourceEntity(68U);
    msg.setDestination(22398U);
    msg.setDestinationEntity(115U);
    msg.name.assign("PERLJPKRFBBYCKULEXKYZYJVYWMPZGOECNFWQONXCIMKBXAQYSTGXOXYJVQUYCAOAIHNSDDUQJMFISVVTMVTKJNBDLUJOSOQIPFZCGORGPDBQCARNVDVPISCOPGUNLTZWUBWVESGGMXHLHTDKIJZLSDMKMCJRYAWTNKVMUHLKDBGIFRGHSWFYQKRGLZMOXCAFQPWJQREDTIXHTTNQMRPZYHSFFUEOWAXH");

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
    msg.setTimeStamp(0.1646954068520402);
    msg.setSource(6899U);
    msg.setSourceEntity(25U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(215U);
    msg.timeout = 931201882U;

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
    msg.setTimeStamp(0.1308380765224595);
    msg.setSource(21178U);
    msg.setSourceEntity(213U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(127U);
    msg.timeout = 2658179133U;

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
    msg.setTimeStamp(0.7130268122143065);
    msg.setSource(6323U);
    msg.setSourceEntity(80U);
    msg.setDestination(19250U);
    msg.setDestinationEntity(246U);
    msg.timeout = 3069291437U;

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
    msg.setTimeStamp(0.7868816080032995);
    msg.setSource(49927U);
    msg.setSourceEntity(124U);
    msg.setDestination(59498U);
    msg.setDestinationEntity(61U);
    msg.sessid = 2431249394U;

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
    msg.setTimeStamp(0.13525633246677626);
    msg.setSource(678U);
    msg.setSourceEntity(130U);
    msg.setDestination(5660U);
    msg.setDestinationEntity(29U);
    msg.sessid = 2346264102U;

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
    msg.setTimeStamp(0.8558039154770546);
    msg.setSource(65418U);
    msg.setSourceEntity(213U);
    msg.setDestination(42206U);
    msg.setDestinationEntity(85U);
    msg.sessid = 1993594464U;

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
    msg.setTimeStamp(0.05185241433373);
    msg.setSource(36794U);
    msg.setSourceEntity(121U);
    msg.setDestination(24430U);
    msg.setDestinationEntity(111U);
    msg.sessid = 2162775458U;
    msg.messages.assign("LGUYHQRANXLSCLBHQWGZMQRGZVAVDUCBMFZVWRDPNEYDXTTJUHPSILBEIKWWPYOCMOLADSTGLPFJUKPJBJPQMGTXUCOAICEIEXFBGKYJOVSCZXNKKOSFPDVGIGUODTMOWBEYGM");

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
    msg.setTimeStamp(0.6973596693086219);
    msg.setSource(47677U);
    msg.setSourceEntity(136U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(77U);
    msg.sessid = 2111339333U;
    msg.messages.assign("APEAAQLRKFGPZHCCOVYYNXBYAIMPYGDOMUQGHAZEWAPTVTRISRVUSTGHBXYHMPIJJLQDHFWFFNKYWDGEVBBRWBLZSOMDGEN");

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
    msg.setTimeStamp(0.3744438092122764);
    msg.setSource(53378U);
    msg.setSourceEntity(14U);
    msg.setDestination(53935U);
    msg.setDestinationEntity(193U);
    msg.sessid = 3088212559U;
    msg.messages.assign("ITRLNNMMQJYVCSRDVYWUUXYYHTPAKEKPCATPYTMCGJMTMQWCAVPXGKKTUVFUQZYUSKZZJTCHJDDWOCAGHKREATXVORNNFSEYFJGIVLYKILBPDKFWRFLHOZFXHHBBOMYBLRCEGIQIOIXDNRYWVDCDMVPUGIGBWHXSSSUESSA");

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
    msg.setTimeStamp(0.8612136493359339);
    msg.setSource(49128U);
    msg.setSourceEntity(219U);
    msg.setDestination(15112U);
    msg.setDestinationEntity(32U);
    msg.sessid = 3355194949U;

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
    msg.setTimeStamp(0.785572829412754);
    msg.setSource(58111U);
    msg.setSourceEntity(78U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(62U);
    msg.sessid = 3459697279U;

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
    msg.setTimeStamp(0.10630840583175638);
    msg.setSource(13235U);
    msg.setSourceEntity(123U);
    msg.setDestination(4344U);
    msg.setDestinationEntity(216U);
    msg.sessid = 1536547386U;

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
    msg.setTimeStamp(0.7615622050576447);
    msg.setSource(50639U);
    msg.setSourceEntity(209U);
    msg.setDestination(5111U);
    msg.setDestinationEntity(240U);
    msg.sessid = 749603036U;
    msg.status = 40U;

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
    msg.setTimeStamp(0.16524405993288527);
    msg.setSource(25322U);
    msg.setSourceEntity(150U);
    msg.setDestination(38351U);
    msg.setDestinationEntity(167U);
    msg.sessid = 161348902U;
    msg.status = 99U;

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
    msg.setTimeStamp(0.2966617548817596);
    msg.setSource(41550U);
    msg.setSourceEntity(126U);
    msg.setDestination(56605U);
    msg.setDestinationEntity(150U);
    msg.sessid = 1888953422U;
    msg.status = 106U;

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
    msg.setTimeStamp(0.6795649990423149);
    msg.setSource(43379U);
    msg.setSourceEntity(75U);
    msg.setDestination(38587U);
    msg.setDestinationEntity(30U);
    msg.name.assign("UEHRZRLDHOBJBMCHBWCMYFEXGFKNBYVQIKSMQZ");

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
    msg.setTimeStamp(0.884178434431318);
    msg.setSource(14570U);
    msg.setSourceEntity(229U);
    msg.setDestination(8210U);
    msg.setDestinationEntity(213U);
    msg.name.assign("ZBIPAFILKTODUHEOCWSCISEPZEWOPVWQTCXWZXTVAFOBLKYHRZTNLKYKFYRTWHYWOQVPBZO");

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
    msg.setTimeStamp(0.7855227070736024);
    msg.setSource(6411U);
    msg.setSourceEntity(12U);
    msg.setDestination(48292U);
    msg.setDestinationEntity(168U);
    msg.name.assign("JXCREOMIXBZNMOWLGOHCUAGCYVNGHZANONUMLYSZJLAAAJTTHJIPUTZDHVWR");

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
    msg.setTimeStamp(0.11930875330438706);
    msg.setSource(16148U);
    msg.setSourceEntity(30U);
    msg.setDestination(56918U);
    msg.setDestinationEntity(246U);
    msg.name.assign("DYRZDZIYPQAYYUVMUBTBLLNYLVBECQKHUBQZTKVRVFOAJUEPNRRETMPNHQMGOCCJEKAGVZOMXSQJGHEANGMDTDKDGQTMFKZCWUISXDUESKYHQPLWHPFMWLOXGJTYUJDAUT");

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
    msg.setTimeStamp(0.8577024011114547);
    msg.setSource(20506U);
    msg.setSourceEntity(67U);
    msg.setDestination(540U);
    msg.setDestinationEntity(198U);
    msg.name.assign("SSCTWCHEJUTQKPRUKXHSDGVBPNJLDQKRUNJJATJNZAE");

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
    msg.setTimeStamp(0.3324461513480903);
    msg.setSource(7592U);
    msg.setSourceEntity(200U);
    msg.setDestination(44691U);
    msg.setDestinationEntity(103U);
    msg.name.assign("TXBQZBMDYAZKVOVCBASJINCWQXKXWWHACFSVEVPZQVBBMELHNBFKZYNAJPUUYXUHKORYTPCJMUDPEZVLUSMVOLFQWYIIFZRTLOQFGGHPBTVMWKIRFYLSGZOMIDOFILE");

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
    msg.setTimeStamp(0.8040166573517156);
    msg.setSource(9494U);
    msg.setSourceEntity(116U);
    msg.setDestination(41614U);
    msg.setDestinationEntity(195U);
    msg.type = 108U;
    msg.error.assign("FEICWHOULKKVGBAAPVCYVXPEHAWRLDCVTYPPA");

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
    msg.setTimeStamp(0.4560132619892502);
    msg.setSource(13524U);
    msg.setSourceEntity(224U);
    msg.setDestination(7376U);
    msg.setDestinationEntity(76U);
    msg.type = 80U;
    msg.error.assign("MZNBFVQPCKFEICAERHSYQLAKFJXOGVGJLPROYUUDI");

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
    msg.setTimeStamp(0.1291410060337036);
    msg.setSource(38313U);
    msg.setSourceEntity(229U);
    msg.setDestination(694U);
    msg.setDestinationEntity(137U);
    msg.type = 101U;
    msg.error.assign("SCVRXUVYATNWVHYAHGMTKTNQTVSYRFCSKGKKXWWDEIYXBNQRMPJWGRJHOLJLXQZNJNPYUCBNZQLXRGCABPAIIYFQIAGDOLKHLUZJMTZDRSFRKILBQUQMLYVASZXPNDRJKCMPFAWDXWLMCQKCXEBSOOOVYITHOPMKBFMMWTZLIUHRZHZOVFGIU");

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
    msg.setTimeStamp(0.31720644232715267);
    msg.setSource(50988U);
    msg.setSourceEntity(122U);
    msg.setDestination(63027U);
    msg.setDestinationEntity(194U);
    msg.seq = 22385U;
    msg.sys_dst.assign("ZGNLFBENMKCAEKHQRYBKRRMPJVXVXULLCJVUQGWHMUHFCDYNOFIUSUWW");
    msg.flags = 231U;
    const char tmp_msg_0[] = {-31, -66, -98, 89, 116, -10, -112, 125, -25, -107, 55, 20, 30, -12, 75, -20, -54, -103, -16, 94, -126, 36, -79, -100, -56, -120, 120, -119, 41, -92, -15, 101, -103, 29, 10, 60, 39, 21, -61, -39, -92, -111, 69, -55, 87, 87, -124, -67, 45, -7, 62, -10, 92, 101, 87, 1, -40, -26, 115, 20, 44, 37, 32, 25, 100, -16, 83, 125, -38, -61, 102, -98, 23, 77, -78, -64, -50, -105, -23, 2, 9, -82, -75, -90, -52, -123, -65, 97, -86, 113, 37, -44, -109, -36, 77, -111, -53, 94, -93, -31, -56, 66, -66, 104, 43, 95, 126, -71, 81, 40, 68, -20, 54, 43, 84, 48, -21, -79, 17, -115, -35, 12, -48, -7, 63, 13, 57, -3, 5, 18, -98, -125, -98, 46, 24, -78, -11, -16, -122, 49, -2, -103, 115, 24, 7, 40, -10, 96, -58, -69, -91, -37, -102, -36, 55, 15, 104, -96, -24, -111, -67};
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
    msg.setTimeStamp(0.8568286152297693);
    msg.setSource(18024U);
    msg.setSourceEntity(126U);
    msg.setDestination(25506U);
    msg.setDestinationEntity(229U);
    msg.seq = 27731U;
    msg.sys_dst.assign("ZGWNUGMNTQNQSTJKEZHHYAHSDRFHLMBHJCOQMFBZNOWKVTACSRKXOIYCDLXZNMOAKIQBLDXDXMNHUGGZAMXZUPZNFMDZXCNPTKALBIUSHPLVVRWJOBYCVWQRIQDF");
    msg.flags = 205U;
    const char tmp_msg_0[] = {-14, 68, -125, 22, -27, -27, -124, -6, 10, -99, -104, -72};
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
    msg.setTimeStamp(0.2656004946793544);
    msg.setSource(1044U);
    msg.setSourceEntity(34U);
    msg.setDestination(55090U);
    msg.setDestinationEntity(226U);
    msg.seq = 10517U;
    msg.sys_dst.assign("BZVKGOSEBYOHDZAQPWCMCIXSMBHOJNXSTUHVTDQTIGJEYRTFEJNWXDIDUVVGAHKLHSCCXTRTWUSFGXWLJJQNRXDPZUBTP");
    msg.flags = 162U;
    const char tmp_msg_0[] = {-6, -97, -49, 100, 59, 72, -82, 50, 79, -26, -110, 56, -31};
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
    msg.setTimeStamp(0.11799539701858075);
    msg.setSource(53225U);
    msg.setSourceEntity(208U);
    msg.setDestination(20192U);
    msg.setDestinationEntity(214U);
    msg.sys_src.assign("XDMRADEZGKWHXYBBFNILNGNVMORXTPFOSBORHIQPDLEKADLKPAVVGZBRTRQRUEEQIESUWVQUJZDDLTHLIANGCDOXYZALXPIXNJUZUSFMTYKFFUFHCWSCKHJVTAFULHSGXZYSNOAWYEJCQMYDMOMQWVFIGJTNVQVT");
    msg.sys_dst.assign("QGGWLXYJINWOECGEDPZVWVLSLSHOPDGGAPZYPLSJQSBGWDDCWMTOOSJNBINQCFHWKKADCAPINIQEZOSZSTEMNTSURYRCJZODHUYWDYYMEUFYWI");
    msg.flags = 132U;
    const char tmp_msg_0[] = {-38, -28, 26, 119, 24, -66, 73, 9, 122, -96, -87, 73, -35, 124, -114, 12, 21, 46, 67, 70, -111, -79, -84, 112, 37, -38, -43, 113, -114, -116, 107, -92, -104, 83, 28, -71, 118, -128, -15, -95, 65, -53, -90, 7, 53, -115, 62, -98, 95, -61, -50, -117, 82, 65, 87, 68, -6, -91, -71, 73, 110, 90, 93, 82, 32, 9, -93, 6, 83, 46, 86, -89, -66, -85, -84, 52, 62, -44, 64, 86, -52, -95, 85, -87, 40, -64, 97, 11, -124, 39, 66, -42, -99, -41, 108, -104, 107, 73, 37, -83, 74, -34, -73, 73, -31, -124, -78, 39, 17, -28, 113, -105, 25, -103, 9, 36, -26, 105, 23, 114, -80, -75, 41, -55, -7, -86};
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
    msg.setTimeStamp(0.6990044939832242);
    msg.setSource(37385U);
    msg.setSourceEntity(158U);
    msg.setDestination(55138U);
    msg.setDestinationEntity(147U);
    msg.sys_src.assign("RNTKDMBFUAEIVISSVTPEDQUYKXPPCBCDOJCATPUUOBETYZKVQYZBAHAQEOINBMHCYWMLVJZTTMIDYDGEOSKRDAFQSFLGGUGMSERCUBWYVDMWNBTOYWBOAMPQWWXXVDJZEDJGHRJAJJLTQXBZGHNRSXLKPGFCLTHECZGQQSWZRQKGHNGNHORUACREEHRW");
    msg.sys_dst.assign("VTDZRPLZSHGAMGOGUBSWXKNTEJRSMEOLUZIVUXNBUOVUAQAXCQBHFTIOLCIWIXGMYMECJTMROQFBUENSJRDKFABLMYWKMGQ");
    msg.flags = 226U;
    const char tmp_msg_0[] = {-18, -49, -83, -71, -110, 18, 97, 36, -43, 105, -1, -71, 57, 112, 15, 22, 115, -39, 44, 93, -102, -75, -59, -123, -95, 122, -17, -85, -69, 91, -10, -73, -58, -68, -6, -125, -96, -126, -115, -43, 93, -2, -67, 46, 82, -108, -62, -39, -29, 34, -119, -13, 35, 103, 89, 125, -22, -81, 89, 2, -56, 109, -95, -91, -22, -76, 21, -127, -97, -50, -14, 74, -67, 82, 50, -47, 0, 113, 75, 73, -24, 72, -76, 97, -47, 124, -88, 60, -56, -76, 29, 77, 114, 91, 82, 42, -66, -116, -107, -56, -16, -55, -121, 85, 36, -96, -118, 63, 3, -80, 80, -14, 12, -8, -66, -89, 120, -80, 1, 19, -35, -91, 3, 72, -78, 70, 94, 26, 109, 69, 19, 39, 44, -104, -113, -38, 49, 87, 31, 2, -121, 58, 39, -50, 54, -33, -93, -7, 123, 49, -109, 64, 33, -20, -21, 122, 102, 46, 113, -9, 48, 33, -83, -54, 77, -15, -74, 8, 88, 63, 15, 3, -34, 122, 31, -30, 18, -43, 56, 94, 25, 112, -63, -61, -75, -25, 11, -123, -77, 101, -103, 63};
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
    msg.setTimeStamp(0.3827373588615698);
    msg.setSource(29737U);
    msg.setSourceEntity(226U);
    msg.setDestination(44049U);
    msg.setDestinationEntity(141U);
    msg.sys_src.assign("IAVRKFNBSXOOVKUCCPYCWPMVBHTPAIIAQSWWGBJRRQUHZVHKQHMUBTWIMXFIEVVGDVDUBLWQIZMGHGXHOJALLZJUAOUOGWXEPNSTBMDTTLSXQOCZCIJ");
    msg.sys_dst.assign("MMPHAFLBCKKSGZXJNDOHOZJMLZRSIMENWHCFSXCZDUERTIYNKKGPQGDWMHKPGUUOTBIEBGPHGQQ");
    msg.flags = 200U;
    const char tmp_msg_0[] = {-115, -9, -124, -81, 84, 22, -84, -61, -51, -85, -120, -96, -62, 109, -47, -91, 44, 14, -45, 87, -66, 75, -74, 60, 37, -127, -28, 100, 12, 80, -6, -92, -26, 20, -126, 38, 90, 29, 30, -105, 123, -55, -115, -124, -99, -82, 118, 27, -38, 50, -96, -30, -101, 108, 20, 45, 114, 26, -40, -127, -12, 40, -86, -65, -64, -101, -56, -118, 26, 77, 92, 88, -40, 109, -45, 77, -86, -65, -58, -60, -117, 3, -43, -84, -118, -96, 56, -77, -114, -89, -101, 87, -21, -107, 42, -77, -99, -23, -111, -55, 103, 111, 121, 54, 73, -80, 44, 66, -41, -30, -50, -67, -42, 91, 36, -110, 73, 24, -115, -100, -110, 13, 58, 96, 71, -111, 11, -66, -71, -53, 75, 109, -84, -106, -42, 2, -117, -73, 18, -115, 50};
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
    msg.setTimeStamp(0.9764117978352879);
    msg.setSource(32073U);
    msg.setSourceEntity(18U);
    msg.setDestination(36530U);
    msg.setDestinationEntity(98U);
    msg.seq = 16315U;
    msg.value = 5U;
    msg.error.assign("NEWCUTDBLQRWEBZCBLOPTSTMYRJNGETJBGVIMIIOUCEXMFOEQKBJGLWZVJQUDLHHSIMYYNVMEFVXCNVBHLXFARQGOTIHPWASJTXPDDPZBJWXNGCCEPRMAITKKYCRZNCSKYSVBGRLAOPNSSDNULPFMVBFFOFAXAQNAPFRZOKROTLDJIWGGHAWYMJAXZLISZXUEQDOVWVMLDFHNWHCYYXRFKQYKJCZVJZEDYTQHKUXQDK");

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
    msg.setTimeStamp(0.3128005429547708);
    msg.setSource(29897U);
    msg.setSourceEntity(149U);
    msg.setDestination(16821U);
    msg.setDestinationEntity(249U);
    msg.seq = 17907U;
    msg.value = 222U;
    msg.error.assign("EIRJASKCUIXBIXLRNZTBAHZPSVIPALQWFCRJMIOJQLYEMGDCTFOMNDNENXYGVHFIRPUOZMZNVNECDXZJYECOBTHEMUPDJBWYPQHVKKXAEWSTMLXYZGYIJQFZJIRUDGOUULLEHVMOOEXVFUOGGDWQJWRW");

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
    msg.setTimeStamp(0.294104017486324);
    msg.setSource(5228U);
    msg.setSourceEntity(146U);
    msg.setDestination(24697U);
    msg.setDestinationEntity(121U);
    msg.seq = 18705U;
    msg.value = 135U;
    msg.error.assign("WHQDSSAUTJEZOBWGVVJQTTBXVINDSJJLWFCJXXKFCDWMDLTJHDLQHCJVXI");

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
    msg.setTimeStamp(0.006517157269797513);
    msg.setSource(58659U);
    msg.setSourceEntity(177U);
    msg.setDestination(38624U);
    msg.setDestinationEntity(185U);
    msg.seq = 40765U;
    msg.sys.assign("FQCSKTZAZAHAGNMWNUONWCROMSVDWUWTGXUDQLIFCRIOJXRDYQUWIDVLDODBPSQHYMJKLLTZXKSSAMHGQ");
    msg.value = 0.17813854452289812;

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
    msg.setTimeStamp(0.3887631556392195);
    msg.setSource(41031U);
    msg.setSourceEntity(170U);
    msg.setDestination(36350U);
    msg.setDestinationEntity(153U);
    msg.seq = 13820U;
    msg.sys.assign("ULCRRNYSXDAEXCVUEKOEISUOGXNBWHMDXTWKGUPIKJJXKQSQVVJRQFTVWFDBRTOPGJDPVEHLBCHOEUYGNOAFCRGRYMJTQCYPPGNSZGEZGHZFUAVLNXSILYLYKKBKJGHAHUOFHZLRKQULHPBCVQOVFMQISFSIYPTARNTZJWEUOJP");
    msg.value = 0.43532715822486845;

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
    msg.setTimeStamp(0.3595841050032428);
    msg.setSource(59479U);
    msg.setSourceEntity(122U);
    msg.setDestination(4322U);
    msg.setDestinationEntity(21U);
    msg.seq = 31425U;
    msg.sys.assign("UGIBXGKVWELLWYSWKFQUAGXFQCELJOAFSXFSUPBYTFPYCZZORHFQDQMORMVBGJPSEVHJVSGFHRURMNTOSCKOBDTQYYFADZMKPFWVPXAGADIMJINJQEDVNAAEHXWITOVURRHCJBHUZQIBYCBMXKNEQRCWZNHXHBCLONJOISNQMGDXYXHCKSJKYSEWOMUGPHTTYRNMELDNTRLEUVIWWOMWVZ");
    msg.value = 0.6017064173498127;

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
    msg.setTimeStamp(0.9998884329792971);
    msg.setSource(30192U);
    msg.setSourceEntity(216U);
    msg.setDestination(2604U);
    msg.setDestinationEntity(141U);
    msg.seq = 55748U;
    msg.sys_dst.assign("VNBGPDRZHLGEHKKQSAYFTBWPQHLNOSUOENCOERMQDAUTGYHTPQBPGQDMRBGFKVKUQEASALJAXZRBLHUWVMLECTQFIXXLTIFXWRACJCDZRVCNOIHRBNGWASPITVYZGKQCSXYPNKEWEBOJEMPWXEFYLYOSIRSHIEAMANBVZIMCHVDPYTCUUMOQHKMTJSCIFDDMPRJZWTNTQZJIZLZGXJSZJPYD");
    msg.timeout = 0.5162994223450431;

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
    msg.setTimeStamp(0.18760891894101972);
    msg.setSource(17531U);
    msg.setSourceEntity(3U);
    msg.setDestination(20874U);
    msg.setDestinationEntity(47U);
    msg.seq = 46519U;
    msg.sys_dst.assign("FRZFNSRUHFVDSTYYGYFVJWCBQHGNZXKVGEUFZPMDIGUZBHSOEIQMAPZWIPYMJUMBIWOZCCGXEGJNNNAQNDVEBCZGXHNKWEMMQPEWBWLHVOZBXXKYJKTLBECSZLTFAJKPXQBTMVHCDHXPEBAKMVANJUOXJKOTPJPSWQEIISRIYLDRWXGWGCOLYLARUCWOJFLXDGZIAPNOHRUVIVOEDRYSMBYCLAHVQQKJQTTKRCFSQULTAPYHDLSTDRRKUU");
    msg.timeout = 0.9318997345495461;

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
    msg.setTimeStamp(0.6833907792614848);
    msg.setSource(23409U);
    msg.setSourceEntity(188U);
    msg.setDestination(63896U);
    msg.setDestinationEntity(34U);
    msg.seq = 3033U;
    msg.sys_dst.assign("TSVISIPNRVFTCSDYSSEJGFZFYPIVAVXTGTAMQQPGMOYOTGAKOGSCAUJELWAQMNURHEROODMLBACCIVBHELEAVCRPRMHXKWHUPE");
    msg.timeout = 0.3782517501200259;

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
    msg.setTimeStamp(0.47163141110302786);
    msg.setSource(27349U);
    msg.setSourceEntity(22U);
    msg.setDestination(16043U);
    msg.setDestinationEntity(32U);
    msg.action = 124U;
    msg.longain = 0.25078743226028;
    msg.latgain = 0.8672620935073263;
    msg.bondthick = 1976694114U;
    msg.leadgain = 0.3365900560374997;
    msg.deconflgain = 0.6202688184718954;

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
    msg.setTimeStamp(0.8951776801135516);
    msg.setSource(8980U);
    msg.setSourceEntity(38U);
    msg.setDestination(39025U);
    msg.setDestinationEntity(80U);
    msg.action = 91U;
    msg.longain = 0.8533703676520853;
    msg.latgain = 0.797585989132134;
    msg.bondthick = 3176756236U;
    msg.leadgain = 0.15199472620553234;
    msg.deconflgain = 0.15504994154826457;

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
    msg.setTimeStamp(0.48749003995598517);
    msg.setSource(61259U);
    msg.setSourceEntity(225U);
    msg.setDestination(65369U);
    msg.setDestinationEntity(214U);
    msg.action = 39U;
    msg.longain = 0.21651270084816054;
    msg.latgain = 0.5304354608548159;
    msg.bondthick = 398701815U;
    msg.leadgain = 0.6093846006934787;
    msg.deconflgain = 0.8358177236099733;

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
    msg.setTimeStamp(0.6908858523889628);
    msg.setSource(38581U);
    msg.setSourceEntity(2U);
    msg.setDestination(22927U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.9325108813426074;
    msg.dist_min_abs = 0.588800685778317;
    msg.dist_min_mean = 0.8370942703048214;

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
    msg.setTimeStamp(0.03651751294016636);
    msg.setSource(4479U);
    msg.setSourceEntity(225U);
    msg.setDestination(40434U);
    msg.setDestinationEntity(123U);
    msg.err_mean = 0.9146014308842699;
    msg.dist_min_abs = 0.5094285614199848;
    msg.dist_min_mean = 0.770850253560506;

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
    msg.setTimeStamp(0.3939796488204721);
    msg.setSource(41772U);
    msg.setSourceEntity(200U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(204U);
    msg.err_mean = 0.5633373619029142;
    msg.dist_min_abs = 0.9331561951034123;
    msg.dist_min_mean = 0.7035937981329353;

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
    msg.setTimeStamp(0.6596448865289284);
    msg.setSource(28557U);
    msg.setSourceEntity(33U);
    msg.setDestination(7693U);
    msg.setDestinationEntity(56U);
    msg.action = 143U;
    msg.lon_gain = 0.40692015148982963;
    msg.lat_gain = 0.2941862358675327;
    msg.bond_thick = 0.4716042550966738;
    msg.lead_gain = 0.9382391389453025;
    msg.deconfl_gain = 0.8900213211257049;
    msg.accel_switch_gain = 0.6892239739444423;
    msg.safe_dist = 0.9630337133940463;
    msg.deconflict_offset = 0.27195684326422276;
    msg.accel_safe_margin = 0.39478859604461214;
    msg.accel_lim_x = 0.06438005939116964;

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
    msg.setTimeStamp(0.6756980273057234);
    msg.setSource(57617U);
    msg.setSourceEntity(222U);
    msg.setDestination(35941U);
    msg.setDestinationEntity(200U);
    msg.action = 170U;
    msg.lon_gain = 0.5509198557236705;
    msg.lat_gain = 0.8790525791930116;
    msg.bond_thick = 0.49239751847875635;
    msg.lead_gain = 0.6330354892735119;
    msg.deconfl_gain = 0.19364348658360286;
    msg.accel_switch_gain = 0.9079169888651679;
    msg.safe_dist = 0.866072102914357;
    msg.deconflict_offset = 0.30806103863511225;
    msg.accel_safe_margin = 0.11609888034199434;
    msg.accel_lim_x = 0.4408587493084003;

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
    msg.setTimeStamp(0.4266668552474314);
    msg.setSource(56107U);
    msg.setSourceEntity(243U);
    msg.setDestination(25946U);
    msg.setDestinationEntity(246U);
    msg.action = 77U;
    msg.lon_gain = 0.8639130990357511;
    msg.lat_gain = 0.425786878244958;
    msg.bond_thick = 0.3593372347604318;
    msg.lead_gain = 0.9828843042838318;
    msg.deconfl_gain = 0.4553501737850034;
    msg.accel_switch_gain = 0.40606072537208804;
    msg.safe_dist = 0.12969828979765174;
    msg.deconflict_offset = 0.05931704369652124;
    msg.accel_safe_margin = 0.22931463318031875;
    msg.accel_lim_x = 0.9545377989433123;

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
    msg.setTimeStamp(0.41873130243688994);
    msg.setSource(45230U);
    msg.setSourceEntity(195U);
    msg.setDestination(21309U);
    msg.setDestinationEntity(217U);
    msg.type = 71U;
    msg.op = 130U;
    msg.err_mean = 0.5765319099646273;
    msg.dist_min_abs = 0.13144820463967422;
    msg.dist_min_mean = 0.7479909615537615;
    msg.roll_rate_mean = 0.6554414124486116;
    msg.time = 0.015421311978431107;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 81U;
    tmp_msg_0.lon_gain = 0.8946791011959833;
    tmp_msg_0.lat_gain = 0.4958333643324532;
    tmp_msg_0.bond_thick = 0.5921714963375709;
    tmp_msg_0.lead_gain = 0.8114854469591204;
    tmp_msg_0.deconfl_gain = 0.6162384385670877;
    tmp_msg_0.accel_switch_gain = 0.7673824282090913;
    tmp_msg_0.safe_dist = 0.14761894793658525;
    tmp_msg_0.deconflict_offset = 0.6829781062776775;
    tmp_msg_0.accel_safe_margin = 0.1582049218348498;
    tmp_msg_0.accel_lim_x = 0.2018383866061041;
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
    msg.setTimeStamp(0.2313124296682476);
    msg.setSource(60452U);
    msg.setSourceEntity(33U);
    msg.setDestination(30289U);
    msg.setDestinationEntity(163U);
    msg.type = 53U;
    msg.op = 50U;
    msg.err_mean = 0.6640969783137738;
    msg.dist_min_abs = 0.6998517993922653;
    msg.dist_min_mean = 0.8978153754216139;
    msg.roll_rate_mean = 0.9953993053139659;
    msg.time = 0.04777636819404418;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 24U;
    tmp_msg_0.lon_gain = 0.2668063258426193;
    tmp_msg_0.lat_gain = 0.7600543902430748;
    tmp_msg_0.bond_thick = 0.5753767691839087;
    tmp_msg_0.lead_gain = 0.33748153071312925;
    tmp_msg_0.deconfl_gain = 0.17132706494718086;
    tmp_msg_0.accel_switch_gain = 0.4350591980879236;
    tmp_msg_0.safe_dist = 0.9035222005672029;
    tmp_msg_0.deconflict_offset = 0.7853428414775613;
    tmp_msg_0.accel_safe_margin = 0.44523394917337733;
    tmp_msg_0.accel_lim_x = 0.6837482749176211;
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
    msg.setTimeStamp(0.8895789547133921);
    msg.setSource(20936U);
    msg.setSourceEntity(241U);
    msg.setDestination(26688U);
    msg.setDestinationEntity(192U);
    msg.type = 134U;
    msg.op = 48U;
    msg.err_mean = 0.5400683787714224;
    msg.dist_min_abs = 0.5528618895381107;
    msg.dist_min_mean = 0.013159612629930373;
    msg.roll_rate_mean = 0.05005388081040951;
    msg.time = 0.6671844079823496;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 49U;
    tmp_msg_0.lon_gain = 0.6204137141657949;
    tmp_msg_0.lat_gain = 0.4363247701232206;
    tmp_msg_0.bond_thick = 0.10307380559108537;
    tmp_msg_0.lead_gain = 0.2639821590872582;
    tmp_msg_0.deconfl_gain = 0.7882173299052271;
    tmp_msg_0.accel_switch_gain = 0.7207702381381663;
    tmp_msg_0.safe_dist = 0.019438367070409246;
    tmp_msg_0.deconflict_offset = 0.8644118950919689;
    tmp_msg_0.accel_safe_margin = 0.21642958101787269;
    tmp_msg_0.accel_lim_x = 0.3503970077295123;
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
    msg.setTimeStamp(0.09319865836341867);
    msg.setSource(38291U);
    msg.setSourceEntity(45U);
    msg.setDestination(12538U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.7191008867928752;
    msg.lon = 0.20191237337296153;
    msg.eta = 3657377639U;
    msg.duration = 8773U;

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
    msg.setTimeStamp(0.8888983804102281);
    msg.setSource(18190U);
    msg.setSourceEntity(160U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.672588743566048;
    msg.lon = 0.9854113793782595;
    msg.eta = 2180795858U;
    msg.duration = 58909U;

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
    msg.setTimeStamp(0.17521105389334868);
    msg.setSource(11973U);
    msg.setSourceEntity(168U);
    msg.setDestination(44092U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.6208965016365693;
    msg.lon = 0.5961010603868426;
    msg.eta = 2081498635U;
    msg.duration = 18189U;

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
    msg.setTimeStamp(0.3360038246859962);
    msg.setSource(3836U);
    msg.setSourceEntity(157U);
    msg.setDestination(2527U);
    msg.setDestinationEntity(251U);
    msg.plan_id = 18531U;

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
    msg.setTimeStamp(0.3618909445036951);
    msg.setSource(22797U);
    msg.setSourceEntity(248U);
    msg.setDestination(38188U);
    msg.setDestinationEntity(74U);
    msg.plan_id = 16430U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.04680493084374515;
    tmp_msg_0.lon = 0.5254024387062656;
    tmp_msg_0.eta = 2259118766U;
    tmp_msg_0.duration = 30146U;
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
    msg.setTimeStamp(0.6688813602913989);
    msg.setSource(36675U);
    msg.setSourceEntity(249U);
    msg.setDestination(35395U);
    msg.setDestinationEntity(141U);
    msg.plan_id = 20400U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.21028507718579925;
    tmp_msg_0.lon = 0.28627007598122667;
    tmp_msg_0.eta = 198764688U;
    tmp_msg_0.duration = 42058U;
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
    msg.setTimeStamp(0.9770384528890866);
    msg.setSource(43567U);
    msg.setSourceEntity(163U);
    msg.setDestination(959U);
    msg.setDestinationEntity(174U);
    msg.type = 101U;
    msg.command = 229U;
    msg.settings.assign("HUNKXMQLAOLZUBPZIUVJKIIGTPAGNPRHTJMHZHNRATYKSNJQFFCEWKKUMVZWTVHRRPWDLGTDFSYUSIABAOFWNSBOJCAPECLI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45738U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JIDOSXYRHVYJOWZLQAFOJIXHUBGMJFTDMUYMMEXEKCDPECQSYWMLJNSHJLBABXYUKGTOXUSEQUTXDHTDZSRVVCRENNBDMMXPKLWALIPGAZJZVLGVMNIAIVKJEBLMTOWNFFRUBIEFNAWYODQHGCZKHRRWZSAVTCGQAHRWNOTJXKKBUNZCYKRBYCAZRDSCFSOYB");

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
    msg.setTimeStamp(0.8275907551648956);
    msg.setSource(50448U);
    msg.setSourceEntity(152U);
    msg.setDestination(40U);
    msg.setDestinationEntity(236U);
    msg.type = 44U;
    msg.command = 195U;
    msg.settings.assign("HKSJOWOZYMRKMGPZFZDYXKOICQDFFCWHEXZIAKPLSVMJBDODZOFJUUTQQNAGHYJXBHRZHIFTDXUAG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27519U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9608982712786358;
    tmp_tmp_msg_0_0.lon = 0.056351146094174354;
    tmp_tmp_msg_0_0.eta = 588931665U;
    tmp_tmp_msg_0_0.duration = 25805U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CAJWQYWZONQXTMDBHBZJCDCIBIXHILHJUNAUOHGKVXPZIAWVDLVTKEDWTDRYLWUFVTHYEMARPXOISRBBIGTYHOKJTAHSXROFMCJONARZCQZEOKGZWQI");

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
    msg.setTimeStamp(0.10549836189853523);
    msg.setSource(59305U);
    msg.setSourceEntity(51U);
    msg.setDestination(45961U);
    msg.setDestinationEntity(198U);
    msg.type = 153U;
    msg.command = 40U;
    msg.settings.assign("FHZBQBBZURHISTAHRTGGQORSGWKGIQEAJTVCKKGSOIQUOFAXETXXLIKKUZCIVYKHLBKYNINSYCDDHNIFDIMDYMQAVTJMPBUFHUUYMEQRAJOXPBOVCYXWPGYWNBGSVBZLVUEXHZRTFVXXNDGQGDPESGPMJNKSEDYDMVTFZWOKLWVCAQSYJOARCACFIJFIOHJFRPNRNTQBLRLHXEFTWUKZSJHZUDWOJCDRPEJMN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 26193U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LHJOAGJCBOSPOIAQJLZZVKANTRBHKSYVDXMUGOQGYXQDAPEIRZVFAWNUMBWDUTRLEIQWWMNHTMYMPJEWLRRMPCHGMWXMUUPJHHOCCZGOS");

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
    msg.setTimeStamp(0.8504491036222489);
    msg.setSource(12960U);
    msg.setSourceEntity(208U);
    msg.setDestination(59389U);
    msg.setDestinationEntity(161U);
    msg.state = 84U;
    msg.plan_id = 7725U;
    msg.wpt_id = 174U;
    msg.settings_chk = 55262U;

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
    msg.setTimeStamp(0.7883024132689114);
    msg.setSource(29497U);
    msg.setSourceEntity(144U);
    msg.setDestination(47496U);
    msg.setDestinationEntity(11U);
    msg.state = 20U;
    msg.plan_id = 14124U;
    msg.wpt_id = 237U;
    msg.settings_chk = 37663U;

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
    msg.setTimeStamp(0.4701940646959101);
    msg.setSource(581U);
    msg.setSourceEntity(86U);
    msg.setDestination(2028U);
    msg.setDestinationEntity(15U);
    msg.state = 158U;
    msg.plan_id = 8768U;
    msg.wpt_id = 68U;
    msg.settings_chk = 32215U;

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
    msg.setTimeStamp(0.517451513371323);
    msg.setSource(61439U);
    msg.setSourceEntity(128U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(198U);
    msg.uid = 21U;
    msg.frag_number = 54U;
    msg.num_frags = 222U;
    const char tmp_msg_0[] = {-106, 7, -91, 4, 72, -3, -67, 87, -38, -40, 44, 96, 23, 100, -26, -109, 83, -24, 57, -34, 102, -40, 43, 118, -98, 65, -73, 122, -110, 14, 113, 51, -9, 57, -89, 98, 75, -65, -96, 23, -43, -98, 87, -99, 51, 91, 7, -30, 27, 58, -6, -102, -121, 86, 113, -37, -120, -13, 120, -33, 69, 14, 8, 82, 15, 90, 66, -41, 8, -67, -83, -82, -116, 17, 90, 34, -73, 102, 99, 66, 88, 125, 73, 59, 99, -120, 54, -48, 102, -41, 68, 115, 101, 23, -9, -44, 122, 75, -44, -77, -65, 94, -89, -102, -72, 120, -87, -70, 105, -104, 80, 28, -115, -20, -38, -105, -27, 93, 124, 74, -2, -79, -128, 48, 126, -30, 114, -91, -31, 35, -56, 123, 101, -28, -108, -45, 46, 26, -25, 23, -15, -1, 45, 33, -103, -113, -61, 122, 23, -76, 110, 4, -18, 84, 0, 99, -9, -53, -113, 36, -15, 47, -27, 97, 6, 20, 56, 73, 28, -29, 46, 97, 18, -115, -124, -7, 106, 9, -122, 97, -110, -71, -107, -68, 41, -71, -119, 44, 115, 10, -43, 39, 119, -23, -101, 122, 78, 24, -91, -118, 98, -40, -109, -7, 29, 5, -58, 30, -84, 15, 86, -107, 108, 63, -47, -27, 19, 21, 23, 79, 20, -90, 123, 121, -51, 38, -106, 2, 29, -105, 35, 12, -54, 33, 105, -24, 94, 93, -85, 30, 101, 108, -19, 35, -114, -74};
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
    msg.setTimeStamp(0.22210473781329587);
    msg.setSource(22854U);
    msg.setSourceEntity(252U);
    msg.setDestination(51823U);
    msg.setDestinationEntity(223U);
    msg.uid = 55U;
    msg.frag_number = 104U;
    msg.num_frags = 92U;
    const char tmp_msg_0[] = {-99, 71, 85, -128, -18, 44, -17, 5, -125, -56, -105, -31, 77, 4, 111, 50, 9, 24, 120, 21, -29, -12, -49, -121, -74, 84, 44, 13, 73, 58, 46, 101, 15, -11, -67, 108, 20, 12, 46, -45, 121, -30, -7, 46, 70, -58, 45, 17, 98, 27, 40, 126, 1, -29, -3, -72, -56, 9, -126, -103, -127, 75, -36, 75, -62, 16, 119, 98, 51, 13, -29, 56, -124, 68, 75, -102, 86, -113, -84, -74, -15, -62, 62, 16, -63, -23, 70, 36, 109, -78, -18, -92, -109, -57, 53, -51, -125, -55, -93, -35, 41, 27};
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
    msg.setTimeStamp(0.0894633002475983);
    msg.setSource(23496U);
    msg.setSourceEntity(164U);
    msg.setDestination(64114U);
    msg.setDestinationEntity(11U);
    msg.uid = 183U;
    msg.frag_number = 249U;
    msg.num_frags = 220U;
    const char tmp_msg_0[] = {70, -68, -36, -5, 2, -13, 52, 4, 107, 59, 2, -113, 111, -49, -42, -113, -35, -121, -69, -50, -75, 113, -25, -6, 72, 89, -2, 4, 74, 40, -32, 80, 45, 82, -1, -40, 60, 50, -85, 24, 110, 13, 15, 65, -53, 115, -108, -89, 120, -114, -52, -21, -6, 12, -121, 105, -45, 82, -46, 58, -94, -97, -72, 14, -106, -91, 51, 9, -87, -5, -3, -22, 75, -125, 21, 6, -14, 57, -20, 69, 76};
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
    msg.setTimeStamp(0.1659906474864975);
    msg.setSource(53850U);
    msg.setSourceEntity(253U);
    msg.setDestination(35640U);
    msg.setDestinationEntity(6U);
    msg.content_type.assign("GRQMNWQKCKTNMAWPEVSXSRXFNCYHLFEPOFTZ");
    const char tmp_msg_0[] = {-21, 76, 28, 77, 84, 18, -95, -75, 21, -18, 85, 87, -75, -14, 27, -47, 71, 109, -30, -17, -42, 35, 78, 69, -6, 32, 13, -11, -39, 121, -107, -101, 48, -121, 45, 44, 32, -68, 24, 8, 101, -34, 98, 44, 124, -58, 39, -65, -14, -117, -1, -18, 87, -126, -26, -49, 101, -64, -34, -70, 113, -66, -26, 120, -79, 71, -63, 82, 63, -13, 25, 62, -56, -10, 93, -92, -67, 126, -31, -121, -60, 116, 29, -81, 40, -123, -126, -93, 49, -42, -119, 30, -94, -69, -39, -122, 115, -60, -92, 30, -65, -80, 65, 84, -11, 84, 40, -21, 62, 48, 81, 52, -92, -96, 22, -121, 33, -34, -124, -67, -88, -105, -18, -81, -50, -15, -28, 46, -107, 15, 67, -85, -52, -3, 4, 33, -8, -28, 31, 10, 126, 60, 47, -21, 125, 12, 48, 72, -100, 62, -98, 13, -45, -48, -99, 126, -71, 22, 15, -87, -27, -109, 115, -56, 81, -90, -99, 5, -62, 102, -70, -53, 22, 44, -20, -125, -96, -91, 39, 78, 47, -54, 22, -55, 104, 13, -55, 100, 76, -7, 80, -81, 40, -84, 22, -53, -77, -80, -8, 41, 113, 66, -57, 126, 36, 60, -90, 32, -7};
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
    msg.setTimeStamp(0.5375199162068596);
    msg.setSource(8177U);
    msg.setSourceEntity(49U);
    msg.setDestination(44240U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("MOPSPKTROMAWFZIWKYEMCISOCTXLUYIFTLMIUCEYZALVTAITZKQXCGWVQKFRLBBGLERLASXHOJVRCDTPANBPPUSGKBKZWZUUYXFCHHGKXSQASOHDJGTFQGNXFCZJTFYMKWWZA");
    const char tmp_msg_0[] = {80, -68, -23, -56, 39, 12, 120, 90, -7, -112, 56, 24, 31, 73, 31, -24, -119, 125, -115, -52, -91, 28, 22, 82, -74, 119, 93, 104, -20, 74, -108, -86, 25, -39, 45, -62, 20, 104, 97, -37, 108, -33, -12, 124, 104, -121, 94, -19, 46, 14, 5, -43, -122, 126, -97, -78, 63, 104, 36, 81, 28, 117, 25, -53, 17, -26, -3, -14, 71, -87, 90, -4, -77, -113, 98, -26, 109, -128, -62, 31, 32, -2, -126, -86, 100, -65, -35, -98, 42, 13, 86, -81, 60, -61, -78, 40, 57, -118, -82, 67, -106, -32, 43, -15, 53, 12, -123, -58, 49, -34, 123, -22, 78, 3, -23, -4, -35, -30, -119, -66, -45, -22, -29, 23, -7, 52, 40, -16, -84, -44, -40, 45, -83, -38, 4, 19, -126, -70, -91, 106, -20, -48, 79, 122, -110, 99, 112, 35, -79, -51, 115, 125, -94, 23, -74, 12, 62, 20, 14, -88, 117, -43, 40, 43, 103, -59, 109, -76, 91, 62, -92, -89, 41, -63, 41, 2, -45, 74, -82, 36, 56, -126, 18, -50, -8, -99, 119, 59, -92};
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
    msg.setTimeStamp(0.582967067052413);
    msg.setSource(28129U);
    msg.setSourceEntity(251U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(95U);
    msg.content_type.assign("WSNDWQAVDDPNQMYNKBQJCOEXSUTXXKJCOJHPKQOSWXSEEZOHBLDIBGMQRLEKPCEOGBTUCLVIPLVNTHHRHZOBYGHJXYXTFJTBNSYRHVHJRWBGJTTMCWVSJSSYFJFVIUOIEFQD");
    const char tmp_msg_0[] = {-42, -35, -50, 66, 99, 124, 25, -89, 126, -117, -46, 118, 125, -66, 73, -30, 60, 80, -69, 73, -4, -123, -15, 126, 86, -109, 94, -14, -110, -114, -16, -2, 38, -21, -46, 55, -105, -63, -85, 73, 102, 86, 62, -71, -52, 53, 60, 116, -18, 49, 58, -21, 80, -80, -76, 100, -118, -2, 84, -125, 94, 32, -3, 61, 66, 81, 16, 111, 78, 37, 31, 51, 20, 79, -119, 50, 76, 6, -9, 94, -61, 110, -74, 45, -19, -8, -38, -116, -83, -118, 18, -69, 4, -101, -103, -86, -43, 123, -7, -119, 76, 119, 34, 122, 62, 64, 62, 80, 15, 117, -122, -57, 48, -55, 117, 63, -105, 71, -8, 5, 109, 83, 69, -91, 38, 59, 81, 96, -70, 19, 47, -53, -90, 92, -44, 83, 31, 27, 113, -32, -40, -31, 78, 4, 88, 58, 107, -23, -108, -51, 22, 60, -93, -70, 71, -35, 9, 109, -11, -44, 122, -1, 107, 16};
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
    msg.setTimeStamp(0.7446419982080931);
    msg.setSource(23520U);
    msg.setSourceEntity(78U);
    msg.setDestination(55928U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.9099237670669056);
    msg.setSource(22366U);
    msg.setSourceEntity(205U);
    msg.setDestination(40226U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.4947764613491684);
    msg.setSource(47437U);
    msg.setSourceEntity(181U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.7519950303258097);
    msg.setSource(25118U);
    msg.setSourceEntity(91U);
    msg.setDestination(5520U);
    msg.setDestinationEntity(152U);
    msg.target = 8562U;
    msg.bearing = 0.675231025629426;
    msg.elevation = 0.3437661800037555;

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
    msg.setTimeStamp(0.7370379946772063);
    msg.setSource(58005U);
    msg.setSourceEntity(124U);
    msg.setDestination(38667U);
    msg.setDestinationEntity(31U);
    msg.target = 63070U;
    msg.bearing = 0.4248983726884602;
    msg.elevation = 0.9812434225166996;

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
    msg.setTimeStamp(0.9263058759602784);
    msg.setSource(16227U);
    msg.setSourceEntity(138U);
    msg.setDestination(22560U);
    msg.setDestinationEntity(215U);
    msg.target = 57797U;
    msg.bearing = 0.5000526256072986;
    msg.elevation = 0.2765914128883533;

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
    msg.setTimeStamp(0.8652539247587543);
    msg.setSource(56446U);
    msg.setSourceEntity(24U);
    msg.setDestination(18138U);
    msg.setDestinationEntity(135U);
    msg.target = 46328U;
    msg.x = 0.23609187100994256;
    msg.y = 0.7240965131977917;
    msg.z = 0.9240596378912328;

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
    msg.setTimeStamp(0.09086861161955673);
    msg.setSource(10347U);
    msg.setSourceEntity(43U);
    msg.setDestination(3682U);
    msg.setDestinationEntity(46U);
    msg.target = 64451U;
    msg.x = 0.9747667692358415;
    msg.y = 0.6675360755127635;
    msg.z = 0.25179811878258496;

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
    msg.setTimeStamp(0.9682843374603178);
    msg.setSource(60320U);
    msg.setSourceEntity(127U);
    msg.setDestination(62992U);
    msg.setDestinationEntity(81U);
    msg.target = 43414U;
    msg.x = 0.6685368906965489;
    msg.y = 0.7534837522420791;
    msg.z = 0.11021677323071499;

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
    msg.setTimeStamp(0.8359024124900714);
    msg.setSource(2283U);
    msg.setSourceEntity(199U);
    msg.setDestination(41571U);
    msg.setDestinationEntity(96U);
    msg.target = 39184U;
    msg.lat = 0.8878256569907157;
    msg.lon = 0.9815789900972174;
    msg.z_units = 129U;
    msg.z = 0.3712790722007947;

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
    msg.setTimeStamp(0.2553980299880988);
    msg.setSource(6181U);
    msg.setSourceEntity(3U);
    msg.setDestination(26963U);
    msg.setDestinationEntity(237U);
    msg.target = 6477U;
    msg.lat = 0.1527057603185905;
    msg.lon = 0.6321788543953907;
    msg.z_units = 133U;
    msg.z = 0.8269905755303063;

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
    msg.setTimeStamp(0.7951946745270629);
    msg.setSource(35160U);
    msg.setSourceEntity(111U);
    msg.setDestination(41907U);
    msg.setDestinationEntity(157U);
    msg.target = 50915U;
    msg.lat = 0.5369526471061511;
    msg.lon = 0.2911882285396913;
    msg.z_units = 159U;
    msg.z = 0.27400427387857473;

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
    msg.setTimeStamp(0.6386510508607004);
    msg.setSource(63928U);
    msg.setSourceEntity(30U);
    msg.setDestination(6088U);
    msg.setDestinationEntity(118U);
    msg.locale.assign("YYAZPZMSDGDOYAQAPTFIDUDIJMVWQNOCNMCAFPJWCZYPJASB");
    const char tmp_msg_0[] = {87, -93, 16, -81, -96, -5, -72, 100, 121, 123, -128, -91, 119, 69, 40, -97, 106, -127, -34, 85, -62, -113, -103, 110, 4, 18, -110, 114, 123, -117, 11, 124, 15, -18, -65, 54, 51, 90, -84, 119, -10, -104, 90, 123, 88, 47, 22, 99, 67, -12, 103, 114, 120, 35, 103, 97, -59, 81, 124, -94, -72, -57, 41, -39, 75, -116, -122, -3, -128, 12, -77, -54, 54, 91, -114, 3, -108, -37, 115, 63, 64, -121, 78, 19, 33, 69, 103, 98, 21, -23, 125, -8, -70, 95, 113, 91, 39, 40, -117, -12, 73, -84, -44, 104, -123, 114, 28, -56, 109, 40, -79, 87, 94, -113, -80, -89, 41, -81, 93, 2, -36, 90, -96, -18, 6, -127, 109, -90, 111, 65, 11, -29, -100, 29, -78, -112, -37, -100, 14, -95, -18, -1, -52, -81, -27, -115, -13, 88, -127, 41, 51, 64, 41, -43, -92, 34, 48, -54, 104, 3, 125, -29, -97, 35, -36, 121, 68, -123, -59, -24, -13, 19, -75, 55, 121, -85, 13, -34, -18, 98, 94, 101, -63, -13, 84, 90, 59, -91, -87, 63, 25, -102, -89, -75, -64, 60, 13, 100, 67, 103, 91, 112};
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
    msg.setTimeStamp(0.6139351485328554);
    msg.setSource(24699U);
    msg.setSourceEntity(5U);
    msg.setDestination(26981U);
    msg.setDestinationEntity(43U);
    msg.locale.assign("RDPWADMCWZRYZKMOEIJCWQVWUSOXRCXVTSRXDHGVSNWNLYXFZILQQLXBQFOIPNROLECZHQOMBURYKPGEDZHMZLV");
    const char tmp_msg_0[] = {52, 90, -118, 47, -15, 0, -77, -81, -91, 0, 38, -35, 22, -109, 49, 101, 2, -94, -106, -35, 98, -34, -113, 120, -34, 9, -49, -98, -20, 5, -41, 88, 73, 59, 104, 38, 82, 80, -71, 13, -58, -78, -37, -75, 64, -32, 88, -88, 83, -46, 88, 17, -68, -13, 15, 89, -50, 30, 122, 64, 9, 99, -21, 23, -49, -57, -45, -63, 10, -52, 117, 62, 67, 88, -46, -123, -100, -52, -76, 4, 104, 5, 48, 94, -59, 30, 91, -53, 32, 95, -10, 122, 123, 87, -16, -66, -85, -24, -74, -52, -78, 90, 12, -50, -1, 27, -31, -105, 23, 71, -89, -16, -110, 53, 106, 19, 71, 16, 12, 104, -110, -38, -14, -74, 2, 120, 43, 61, 43, 4, 16, 15, -39, -36, 119, 98, 11, -121, -52, -126, 113, 34, 45, 110, -47, -55, 25, 5, 95, -22, -34, 116, 63, -86, -2, -20, 112, 46};
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
    msg.setTimeStamp(0.5264743115057223);
    msg.setSource(22690U);
    msg.setSourceEntity(163U);
    msg.setDestination(3586U);
    msg.setDestinationEntity(133U);
    msg.locale.assign("FRBQRYJYTWNWLJGDPJGRAJZLWWCLSSKPMBDEVAWALJIHFOAOEMINEQRUVLKRKBGUQCAOLGVZZYDSWPNIGZ");
    const char tmp_msg_0[] = {-90, -42, 100, -44, -2, 78, -84, -106, 13, -68, -125, 75, -31, 100, -19, -40, 32, -124, 9, 48, -113, 125, -93, 45, -92, -39, 67, 1, -115, -64, 117, 114, 48, -82, 48, -118, -97, -70, -92, -60, -53, 77, -117, -20, 42, 97, -57, 106, 118, -82, 44, -106, 84, 3, 12, 112, -126, -87, -27, -117, 67, -104, -18, -111, 50, -46, -115, 89, -53, -120, 9, 10, 33, -66, -3, -65, 119, 102, 108, -88, 32, -21, -28, 28, 41, 102, 110, 31, 82, -71, -33, -69, 100, 120, -10, 84, -58, -77, 54, 114, 33, 111, 56, 99, 124, -43, 22, 124, -63, -15, 36, 75, 21, 51, 100, -83, 9, -11, 70, 106, -115, 2, -11, 82, -62, -27, 118, 39, -93, -58, -10, -49, 123, -109, 42, 9, -121, -87, 51, 7, 10, -19, 97, 92, 114, 45, 65, 78, 40, 9, -33, 79, 33, -53, 12, 95, 51, 22, 12, -4, 113, 125, -29, 107, -45, -116, 68, 117, 51, -115, -15, 76, 80, 6, -43, -61, 56, 98, -64, 123, 6, 93, -5, 59, 117, 108, 18, -105, -95, -71, -73, 98, 0, 16, 75, 40, -49, 112, -58, 33, 7, -114, 109, 16, -69, -4, -74, -114, 11, 25, -69, -26, 81, 84, -97, -42, -7, 15, -90, 7, -35, -9, -120, -38, -112, -87, -11, 37, 88, 52};
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
    msg.setTimeStamp(0.27238819736403086);
    msg.setSource(13885U);
    msg.setSourceEntity(63U);
    msg.setDestination(10040U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.7468642139077981);
    msg.setSource(33257U);
    msg.setSourceEntity(86U);
    msg.setDestination(62837U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.87920116328033);
    msg.setSource(33058U);
    msg.setSourceEntity(21U);
    msg.setDestination(20945U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.9450402122221094);
    msg.setSource(25615U);
    msg.setSourceEntity(71U);
    msg.setDestination(36242U);
    msg.setDestinationEntity(212U);
    msg.camid = 216U;
    msg.x = 22298U;
    msg.y = 3379U;

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
    msg.setTimeStamp(0.4833155036083696);
    msg.setSource(15428U);
    msg.setSourceEntity(57U);
    msg.setDestination(2534U);
    msg.setDestinationEntity(139U);
    msg.camid = 18U;
    msg.x = 44649U;
    msg.y = 16933U;

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
    msg.setTimeStamp(0.1138666370960677);
    msg.setSource(51633U);
    msg.setSourceEntity(157U);
    msg.setDestination(15313U);
    msg.setDestinationEntity(141U);
    msg.camid = 43U;
    msg.x = 60982U;
    msg.y = 18999U;

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
    msg.setTimeStamp(0.21375148619107265);
    msg.setSource(37315U);
    msg.setSourceEntity(190U);
    msg.setDestination(33937U);
    msg.setDestinationEntity(112U);
    msg.camid = 78U;
    msg.x = 43244U;
    msg.y = 39377U;

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
    msg.setTimeStamp(0.760828959333903);
    msg.setSource(47900U);
    msg.setSourceEntity(2U);
    msg.setDestination(21854U);
    msg.setDestinationEntity(124U);
    msg.camid = 185U;
    msg.x = 26145U;
    msg.y = 61528U;

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
    msg.setTimeStamp(0.94927867855193);
    msg.setSource(63050U);
    msg.setSourceEntity(250U);
    msg.setDestination(9117U);
    msg.setDestinationEntity(253U);
    msg.camid = 118U;
    msg.x = 56317U;
    msg.y = 56779U;

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
    msg.setTimeStamp(0.6373704656696773);
    msg.setSource(65339U);
    msg.setSourceEntity(216U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(145U);
    msg.tracking = 124U;
    msg.lat = 0.8482840906567441;
    msg.lon = 0.7663200772403813;
    msg.x = 0.7804834185928738;
    msg.y = 0.9197351686843315;
    msg.z = 0.3970811016376461;

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
    msg.setTimeStamp(0.9300335741426571);
    msg.setSource(36726U);
    msg.setSourceEntity(34U);
    msg.setDestination(64619U);
    msg.setDestinationEntity(229U);
    msg.tracking = 228U;
    msg.lat = 0.7097117431757429;
    msg.lon = 0.753429606354953;
    msg.x = 0.1209303746177599;
    msg.y = 0.31103812965735955;
    msg.z = 0.25538259164067867;

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
    msg.setTimeStamp(0.012698000871743331);
    msg.setSource(16734U);
    msg.setSourceEntity(169U);
    msg.setDestination(40488U);
    msg.setDestinationEntity(14U);
    msg.tracking = 122U;
    msg.lat = 0.25743196918272504;
    msg.lon = 0.9753103318781394;
    msg.x = 0.4468933467411378;
    msg.y = 0.15703901964747646;
    msg.z = 0.36071823424772975;

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
    msg.setTimeStamp(0.20191263324021758);
    msg.setSource(21757U);
    msg.setSourceEntity(235U);
    msg.setDestination(15105U);
    msg.setDestinationEntity(22U);
    msg.target.assign("JYUYWOQEYGZCEXFCMIZWDAXAHQNTTGPISEBVOYXQIRHYNFEGKJIGGNXTQBBYOMZYDQWMJAKDIRJMHRZAWIZVZTGUPNAUANDHQVERB");
    msg.lbearing = 0.90781039467826;
    msg.lelevation = 0.8054188902230216;
    msg.bearing = 0.7982229518279867;
    msg.elevation = 0.2210226249056909;
    msg.phi = 0.3291803375632083;
    msg.theta = 0.5309625013756145;
    msg.psi = 0.34292829075071174;
    msg.accuracy = 0.3488436578451868;

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
    msg.setTimeStamp(0.457204008647079);
    msg.setSource(1591U);
    msg.setSourceEntity(116U);
    msg.setDestination(53943U);
    msg.setDestinationEntity(192U);
    msg.target.assign("WXARGIVLFUCJYNHAPFGKDFMWRQBCYWV");
    msg.lbearing = 0.62948756951108;
    msg.lelevation = 0.1581290479404377;
    msg.bearing = 0.07286023761172666;
    msg.elevation = 0.8777274871803599;
    msg.phi = 0.48015862478579197;
    msg.theta = 0.8337184994174766;
    msg.psi = 0.17654369650501234;
    msg.accuracy = 0.47166558564146044;

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
    msg.setTimeStamp(0.00198031631888107);
    msg.setSource(33426U);
    msg.setSourceEntity(221U);
    msg.setDestination(33811U);
    msg.setDestinationEntity(71U);
    msg.target.assign("YZTIWPVYLZDQFNSNSPHFQJWINQWEIPAUAINVBQGOIAYROEQCBCTNJWYYDDDPFASHUPSCAOCQPNLMKSBNXESBERADBCTQXMLGARZMZSGFZYEDQOIRFWXLUCYEPNTXBHTIKBKITXJEJOLLJTTTXGAJRJVIMEDZHPXMSEWPMJVSHKDKFOUZGODMGGGBBD");
    msg.lbearing = 0.4273369225430612;
    msg.lelevation = 0.24794139474916088;
    msg.bearing = 0.9151600837093602;
    msg.elevation = 0.4052294015541925;
    msg.phi = 0.5284758957313054;
    msg.theta = 0.17064173670615346;
    msg.psi = 0.21298183285458938;
    msg.accuracy = 0.9257020989703995;

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
    msg.setTimeStamp(0.35648859512144304);
    msg.setSource(51015U);
    msg.setSourceEntity(19U);
    msg.setDestination(37838U);
    msg.setDestinationEntity(253U);
    msg.target.assign("JNHLKBCKOZVFXMXDVOBKYSLODPQRFPHRJUFUZCPUUACRDJBASYWYXTWVMEPTGNQZIEWIJPCVZYWDNFAVTMI");
    msg.x = 0.5807290699978043;
    msg.y = 0.35461455617063875;
    msg.z = 0.754309156021919;
    msg.n = 0.2038774705576345;
    msg.e = 0.31796713487972383;
    msg.d = 0.60229949415136;
    msg.phi = 0.1444843220200981;
    msg.theta = 0.34014061889689406;
    msg.psi = 0.1340959188003923;
    msg.accuracy = 0.7666632111728168;

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
    msg.setTimeStamp(0.17695490528619895);
    msg.setSource(30931U);
    msg.setSourceEntity(169U);
    msg.setDestination(46511U);
    msg.setDestinationEntity(247U);
    msg.target.assign("GHYMYYDYRCHPHWFMQEZSLNLKOLBOLBSMRTXGJUBOCMACSWYSUMZVXZHLDDXOQTEFBDAOBUNYJBSMXGCCQRTPINYQXIOZSBZVEVWVPQSVIWKDGLBJQNPXZGERPGOYFLRZTFIDMTJANXUFKRKGWTFSQEWJPPVAOCJCDKHPHKTF");
    msg.x = 0.09158497476167815;
    msg.y = 0.7933401115667574;
    msg.z = 0.5194900490764766;
    msg.n = 0.9256850848326124;
    msg.e = 0.9450606836036356;
    msg.d = 0.17876639723536647;
    msg.phi = 0.12701780642398086;
    msg.theta = 0.7572117545086519;
    msg.psi = 0.2934590789705326;
    msg.accuracy = 0.4972391776068057;

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
    msg.setTimeStamp(0.5865338935973168);
    msg.setSource(26860U);
    msg.setSourceEntity(248U);
    msg.setDestination(13550U);
    msg.setDestinationEntity(136U);
    msg.target.assign("YMZQRUMVLJKBRIZTOVGYDNVNJMLXAXWSWQTFIAOQPOBBXMNNWIMGEDTLPPYMYFKBJDVAQYSXNTSHZQWVMEEXHPNCUEFYQIBKFFGECGSINLWRMNPQWLBEZUHYEUGRPDZHBZAERVGQURPZJFMLPKESUQLZKURHIPSSTMOQJDJVDTOZVXSKYHJOVODACOWD");
    msg.x = 0.9600410804383946;
    msg.y = 0.43981056052570733;
    msg.z = 0.04064735845592349;
    msg.n = 0.5670844752295107;
    msg.e = 0.4058222007564638;
    msg.d = 0.7208594386198831;
    msg.phi = 0.3456574228320951;
    msg.theta = 0.373927101483003;
    msg.psi = 0.8258441281518999;
    msg.accuracy = 0.9392915626127484;

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
    msg.setTimeStamp(0.7378165264150895);
    msg.setSource(17358U);
    msg.setSourceEntity(136U);
    msg.setDestination(13742U);
    msg.setDestinationEntity(156U);
    msg.target.assign("XHLSPUTBGDGZ");
    msg.lat = 0.39631120271917664;
    msg.lon = 0.1572582650124652;
    msg.z_units = 159U;
    msg.z = 0.5133116830781026;
    msg.accuracy = 0.9226334000122015;

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
    msg.setTimeStamp(0.4273625370317329);
    msg.setSource(7796U);
    msg.setSourceEntity(22U);
    msg.setDestination(28229U);
    msg.setDestinationEntity(167U);
    msg.target.assign("RFZLHGYOKGWLPJHLILFLBXAYJSMYXGOAQLCMNWAQZXHKZIKMENRQYLUGCMVRZDADEXCXYHVJVTKZOKGUNIHVNCOXFGQRNFIVZPAOHJSJBJNPUQFDRHQQKIFUEUIMWGFZZBBRNTPUOAEKETFSLCRHSGTBGYBETPEXAHLJVEDEPADDIFSJCWDSYPYWXOGVYMUDVFUIPJXLCTUHJOWUNSZKNQWQBAKCQSTVPWMWDVWBMSTOR");
    msg.lat = 0.9495683183864115;
    msg.lon = 0.5843803273526246;
    msg.z_units = 2U;
    msg.z = 0.798253553837939;
    msg.accuracy = 0.24445295371042886;

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
    msg.setTimeStamp(0.4867285095319511);
    msg.setSource(2592U);
    msg.setSourceEntity(254U);
    msg.setDestination(27154U);
    msg.setDestinationEntity(103U);
    msg.target.assign("POYNDNYQWKMDOLOESXBWDCJEHUKHDATLUTYQQHQLEUXDFGRYVSFEFCOBMXERFAKPUMJUZFDAPFUVSXVJYXUSPTNIVANJWZNSHVQEWFUAAYLHMNGXMSGCV");
    msg.lat = 0.5855615709892563;
    msg.lon = 0.5476873343473377;
    msg.z_units = 211U;
    msg.z = 0.31005911428638766;
    msg.accuracy = 0.24030879382399872;

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
    msg.setTimeStamp(0.019411847978995866);
    msg.setSource(45920U);
    msg.setSourceEntity(111U);
    msg.setDestination(39544U);
    msg.setDestinationEntity(232U);
    msg.name.assign("ZOBWXOBGILWFIONAGJFKIYWMWDDKURNKJHGETTNYOKDERLPSDWHDNREMIKSVCDAPZFBMEWWLPXVOXZNBFTOEKTJDYXZULQZOIKMQPPNKZCJIHTMLJVJNENRAQUKCMPBXSRRLZQYCWHCXUQOGXYUQVSDUUFMHEQWCJTSZBNBMUCITBYLRBGLUEAXFHTSPOGQSKAPPVCUZLEYYWQAS");
    msg.lat = 0.3316750013171227;
    msg.lon = 0.6525003594170609;
    msg.z = 0.9026335428813618;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.09164658995533581);
    msg.setSource(53895U);
    msg.setSourceEntity(163U);
    msg.setDestination(39689U);
    msg.setDestinationEntity(207U);
    msg.name.assign("LHHBPNHWIKIFESXXSHBIUZVLJZICQFOAYYNOOYUTHATQYOTEMNBLGHQELSGEINTUTXQSMZGRPKEWOTBUVFWPDYMHKIYXQCJYGED");
    msg.lat = 0.8054814798635338;
    msg.lon = 0.292852999892941;
    msg.z = 0.813068762839429;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.9642924247353353);
    msg.setSource(53943U);
    msg.setSourceEntity(16U);
    msg.setDestination(16732U);
    msg.setDestinationEntity(233U);
    msg.name.assign("ASAVCLNSEUEUAJMJFZSOBCSTXYNHQKYZFEBXRRNQKNIWWCFQLUQOEYRSOAREAOMRNXZGQOUHAULRZFYYZXPIIODEGVOKKEXULJYSIDLMCPYXVRYJLZVARAPU");
    msg.lat = 0.2349306357005021;
    msg.lon = 0.24753067006102036;
    msg.z = 0.9353724553166789;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.846150754287003);
    msg.setSource(23887U);
    msg.setSourceEntity(129U);
    msg.setDestination(23715U);
    msg.setDestinationEntity(91U);
    msg.op = 77U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("LVSVLCRCHXHEHFQLLTTWSRVGSIKABURNKRBTSOPIXQOOGDWLWRIQOJXJYNTIMFUXQPIEVSTBLWFNDBPSDFLOQWMEMTZFHAIXOBSWJDZLRPSDFCCUCPJIYYJYEUXKZWKAUSRLQPRHYMTETZWIOKTBMMHHACGAKYZNUIUANVAOVCYNFNXFPIGAGYNFDYMWCQDPAECZHMVZVDHBBKSLQJEXMBKRRGGDPNJUHXXJWTEUOZQCZMNKGEZAOGKFVGEP");
    tmp_msg_0.lat = 0.5887011873636381;
    tmp_msg_0.lon = 0.7278189554751887;
    tmp_msg_0.z = 0.3775936667476566;
    tmp_msg_0.z_units = 102U;
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
    msg.setTimeStamp(0.7017233838642125);
    msg.setSource(29044U);
    msg.setSourceEntity(19U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(136U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.16056144232222347);
    msg.setSource(33087U);
    msg.setSourceEntity(206U);
    msg.setDestination(38692U);
    msg.setDestinationEntity(158U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.17822664154540213);
    msg.setSource(5220U);
    msg.setSourceEntity(63U);
    msg.setDestination(44557U);
    msg.setDestinationEntity(210U);
    msg.value = 0.35284722712546346;
    msg.type = 134U;

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
    msg.setTimeStamp(0.684199828884383);
    msg.setSource(14539U);
    msg.setSourceEntity(23U);
    msg.setDestination(38671U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6239563328159633;
    msg.type = 163U;

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
    msg.setTimeStamp(0.9495324700698469);
    msg.setSource(14037U);
    msg.setSourceEntity(22U);
    msg.setDestination(45673U);
    msg.setDestinationEntity(168U);
    msg.value = 0.00975793495870736;
    msg.type = 34U;

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
    msg.setTimeStamp(0.49959313798491845);
    msg.setSource(57228U);
    msg.setSourceEntity(70U);
    msg.setDestination(59268U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8176120137793442;

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
    msg.setTimeStamp(0.24255671180072247);
    msg.setSource(7343U);
    msg.setSourceEntity(204U);
    msg.setDestination(13305U);
    msg.setDestinationEntity(199U);
    msg.value = 0.11394126706315999;

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
    msg.setTimeStamp(0.7278973278702757);
    msg.setSource(4526U);
    msg.setSourceEntity(90U);
    msg.setDestination(62910U);
    msg.setDestinationEntity(185U);
    msg.value = 0.489825614473837;

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
    msg.setTimeStamp(0.08109087206988197);
    msg.setSource(23916U);
    msg.setSourceEntity(108U);
    msg.setDestination(15012U);
    msg.setDestinationEntity(219U);
    msg.timestamp_last_service = 0.40861811541198845;
    msg.time_next_service = 0.6756342161060128;
    msg.time_motor_next_service = 0.8479587430205767;
    msg.time_idle_ground = 0.2018596780792633;
    msg.time_idle_air = 0.5851032306386047;
    msg.time_idle_water = 0.3691589585781889;
    msg.time_idle_underwater = 0.055090266569988944;
    msg.time_idle_unknown = 0.24744602391766424;
    msg.time_motor_ground = 0.1781380483119871;
    msg.time_motor_air = 0.9718501148867493;
    msg.time_motor_water = 0.7054556288230482;
    msg.time_motor_underwater = 0.3809596243698148;
    msg.time_motor_unknown = 0.3942548372143596;
    msg.rpm_min = 17887;
    msg.rpm_max = 13585;
    msg.depth_max = 0.31162786147095156;

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
    msg.setTimeStamp(0.7068881026855719);
    msg.setSource(17964U);
    msg.setSourceEntity(81U);
    msg.setDestination(49203U);
    msg.setDestinationEntity(126U);
    msg.timestamp_last_service = 0.2769144788397119;
    msg.time_next_service = 0.8906032389059678;
    msg.time_motor_next_service = 0.09271933818539013;
    msg.time_idle_ground = 0.7942605893163306;
    msg.time_idle_air = 0.7137902107432856;
    msg.time_idle_water = 0.16688002103917754;
    msg.time_idle_underwater = 0.5596464852682768;
    msg.time_idle_unknown = 0.4742892908829982;
    msg.time_motor_ground = 0.0919155446560711;
    msg.time_motor_air = 0.920263215833879;
    msg.time_motor_water = 0.9394924929198291;
    msg.time_motor_underwater = 0.7638855142564898;
    msg.time_motor_unknown = 0.94635224090698;
    msg.rpm_min = 4173;
    msg.rpm_max = -19401;
    msg.depth_max = 0.6255165265734853;

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
    msg.setTimeStamp(0.43398980327124026);
    msg.setSource(59494U);
    msg.setSourceEntity(140U);
    msg.setDestination(17970U);
    msg.setDestinationEntity(131U);
    msg.timestamp_last_service = 0.33064003171952117;
    msg.time_next_service = 0.24561874314013976;
    msg.time_motor_next_service = 0.2023724818983007;
    msg.time_idle_ground = 0.7707634269339526;
    msg.time_idle_air = 0.9343555294767693;
    msg.time_idle_water = 0.9471937909277449;
    msg.time_idle_underwater = 0.22888193734513895;
    msg.time_idle_unknown = 0.06852709138700641;
    msg.time_motor_ground = 0.37907031074337394;
    msg.time_motor_air = 0.06575830463479237;
    msg.time_motor_water = 0.4951988986383057;
    msg.time_motor_underwater = 0.13933294524385864;
    msg.time_motor_unknown = 0.4347515456002198;
    msg.rpm_min = 680;
    msg.rpm_max = 22564;
    msg.depth_max = 0.026843887671918365;

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
    msg.setTimeStamp(0.44541407319972215);
    msg.setSource(18636U);
    msg.setSourceEntity(210U);
    msg.setDestination(20328U);
    msg.setDestinationEntity(46U);
    msg.severity = 171U;
    msg.text.assign("ZELKOPDEKRXURDQNXHJSKIELQKMRDYSCUTPTCLBMOVGMNCHQLSLVNFBKKIFOWLNVPWFVYDCKLRWQAXEOSVTGOHCEGFOOFHYWNCWXUTNGNIPPASMSAXTFGAPGAXIKCJSMIOXJBLDRHPFNJGWSUQBDEKZBYEQUDNU");

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
    msg.setTimeStamp(0.2069289072627164);
    msg.setSource(41542U);
    msg.setSourceEntity(158U);
    msg.setDestination(28879U);
    msg.setDestinationEntity(5U);
    msg.severity = 245U;
    msg.text.assign("ZDSDCTWHUYTYGTKMFDZRIUFHXMGLQKQDVCHQNYKLYMLOOROQUFPGBAWVWVSNZFDNCLQKXGBQYFOVKRVWGJSZXHONLIZEOUGEIUZEHWHRBLUMJDAMJFCOLSYJHIPBVMREBPPRYBXZTZSB");

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
    msg.setTimeStamp(0.9869726052267994);
    msg.setSource(3096U);
    msg.setSourceEntity(123U);
    msg.setDestination(13856U);
    msg.setDestinationEntity(101U);
    msg.severity = 25U;
    msg.text.assign("OZSTWBPMKLMVVEEWXTXFLYPRRCRJUCHOIEFNFSTKPDFYKJS");

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
    msg.setTimeStamp(0.8757861899525289);
    msg.setSource(38643U);
    msg.setSourceEntity(162U);
    msg.setDestination(55243U);
    msg.setDestinationEntity(18U);
    msg.channel = -35;
    msg.value = 1355596015;
    msg.gain = 69U;

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
    msg.setTimeStamp(0.06753053514452956);
    msg.setSource(37098U);
    msg.setSourceEntity(161U);
    msg.setDestination(62833U);
    msg.setDestinationEntity(3U);
    msg.channel = -121;
    msg.value = -1605524100;
    msg.gain = 235U;

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
    msg.setTimeStamp(0.30030072706650635);
    msg.setSource(19234U);
    msg.setSourceEntity(234U);
    msg.setDestination(47957U);
    msg.setDestinationEntity(220U);
    msg.channel = -21;
    msg.value = -1996840214;
    msg.gain = 144U;

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
    msg.setTimeStamp(0.05491991621867487);
    msg.setSource(62927U);
    msg.setSourceEntity(1U);
    msg.setDestination(42937U);
    msg.setDestinationEntity(101U);
    msg.ch01 = 0.09486910048394859;
    msg.ch02 = 0.8332685849694791;
    msg.ch03 = 0.9463768471177576;
    msg.ch04 = 0.25443494431102087;
    msg.ch05 = 0.5325431641084521;
    msg.ch06 = 0.18406338143998857;
    msg.ch07 = 0.12883361760328882;
    msg.ch08 = 0.6170640504028655;
    msg.ch09 = 0.8581486484028876;
    msg.ch10 = 0.08387395916398255;
    msg.ch11 = 0.3881823379592171;
    msg.ch12 = 0.6750053322307424;
    msg.ch13 = 0.21793329788975457;
    msg.ch14 = 0.5075637524651603;
    msg.ch15 = 0.8639924088405795;
    msg.ch16 = 0.3635417263745332;

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
    msg.setTimeStamp(0.8081895886774041);
    msg.setSource(30017U);
    msg.setSourceEntity(239U);
    msg.setDestination(52756U);
    msg.setDestinationEntity(203U);
    msg.ch01 = 0.8000699860460526;
    msg.ch02 = 0.8585337039065958;
    msg.ch03 = 0.586922855768297;
    msg.ch04 = 0.5574054786311265;
    msg.ch05 = 0.27381031858562666;
    msg.ch06 = 0.9467975469639436;
    msg.ch07 = 0.978467000897196;
    msg.ch08 = 0.7083570408302271;
    msg.ch09 = 0.27566117306950766;
    msg.ch10 = 0.6583374630210684;
    msg.ch11 = 0.7632138657936652;
    msg.ch12 = 0.6073332806563461;
    msg.ch13 = 0.8540986303792975;
    msg.ch14 = 0.7517227620034226;
    msg.ch15 = 0.320714088257257;
    msg.ch16 = 0.7193070304446503;

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
    msg.setTimeStamp(0.08801123844366265);
    msg.setSource(3055U);
    msg.setSourceEntity(148U);
    msg.setDestination(14262U);
    msg.setDestinationEntity(235U);
    msg.ch01 = 0.30152971280088814;
    msg.ch02 = 0.3412752453865766;
    msg.ch03 = 0.38932506813677015;
    msg.ch04 = 0.600605979713243;
    msg.ch05 = 0.15248029497854965;
    msg.ch06 = 0.24622530279062305;
    msg.ch07 = 0.24676521938336538;
    msg.ch08 = 0.7435542457916782;
    msg.ch09 = 0.34552600463775573;
    msg.ch10 = 0.2064076071055666;
    msg.ch11 = 0.24461187580652088;
    msg.ch12 = 0.9104877258821685;
    msg.ch13 = 0.3565255400185672;
    msg.ch14 = 0.8519305897383009;
    msg.ch15 = 0.30406579253239685;
    msg.ch16 = 0.530514485326023;

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
    msg.setTimeStamp(0.7183029732182371);
    msg.setSource(57994U);
    msg.setSourceEntity(199U);
    msg.setDestination(29725U);
    msg.setDestinationEntity(95U);
    msg.op = 227U;
    msg.lat = 0.8305794142578705;
    msg.lon = 0.43369743196690747;
    msg.height = 0.6452469942690029;
    msg.depth = 0.17132385903532588;
    msg.alt = 0.7975123849692451;

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
    msg.setTimeStamp(0.9385506202426297);
    msg.setSource(41973U);
    msg.setSourceEntity(252U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(147U);
    msg.op = 70U;
    msg.lat = 0.9868132369043281;
    msg.lon = 0.631577534514497;
    msg.height = 0.8440085637486516;
    msg.depth = 0.9201763277076207;
    msg.alt = 0.6219724263542666;

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
    msg.setTimeStamp(0.3827434922431143);
    msg.setSource(64184U);
    msg.setSourceEntity(194U);
    msg.setDestination(37660U);
    msg.setDestinationEntity(102U);
    msg.op = 115U;
    msg.lat = 0.3049662953114015;
    msg.lon = 0.5721881779772652;
    msg.height = 0.5489279439117059;
    msg.depth = 0.5000438925044777;
    msg.alt = 0.948801821309903;

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
    msg.setTimeStamp(0.337037946868496);
    msg.setSource(57589U);
    msg.setSourceEntity(64U);
    msg.setDestination(59883U);
    msg.setDestinationEntity(111U);
    msg.nbeams = 158U;
    msg.ncells = 226U;
    msg.coord_sys = 93U;

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
    msg.setTimeStamp(0.5128863992336622);
    msg.setSource(60776U);
    msg.setSourceEntity(152U);
    msg.setDestination(9433U);
    msg.setDestinationEntity(211U);
    msg.nbeams = 84U;
    msg.ncells = 99U;
    msg.coord_sys = 75U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9486392666281835;
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
    msg.setTimeStamp(0.17680392291777247);
    msg.setSource(1460U);
    msg.setSourceEntity(170U);
    msg.setDestination(9775U);
    msg.setDestinationEntity(12U);
    msg.nbeams = 230U;
    msg.ncells = 146U;
    msg.coord_sys = 101U;

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
    msg.setTimeStamp(0.9417746211918412);
    msg.setSource(59780U);
    msg.setSourceEntity(216U);
    msg.setDestination(27458U);
    msg.setDestinationEntity(81U);
    msg.cell_position = 0.1654709107793232;

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
    msg.setTimeStamp(0.4732901996902601);
    msg.setSource(6026U);
    msg.setSourceEntity(244U);
    msg.setDestination(14002U);
    msg.setDestinationEntity(205U);
    msg.cell_position = 0.018561987795729262;

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
    msg.setTimeStamp(0.4027166470422041);
    msg.setSource(25035U);
    msg.setSourceEntity(226U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(38U);
    msg.cell_position = 0.9661042542860511;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8966630107369714;
    tmp_msg_0.amp = 0.8029904173686206;
    tmp_msg_0.cor = 33U;
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
    msg.setTimeStamp(0.6527298397822622);
    msg.setSource(33027U);
    msg.setSourceEntity(158U);
    msg.setDestination(26850U);
    msg.setDestinationEntity(5U);
    msg.vel = 0.7133728562793686;
    msg.amp = 0.9803321689385451;
    msg.cor = 91U;

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
    msg.setTimeStamp(0.5687994970860161);
    msg.setSource(61293U);
    msg.setSourceEntity(212U);
    msg.setDestination(30290U);
    msg.setDestinationEntity(161U);
    msg.vel = 0.2534230148390145;
    msg.amp = 0.10008836582278446;
    msg.cor = 184U;

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
    msg.setTimeStamp(0.7046745758438594);
    msg.setSource(51549U);
    msg.setSourceEntity(103U);
    msg.setDestination(32369U);
    msg.setDestinationEntity(67U);
    msg.vel = 0.8263033331140021;
    msg.amp = 0.8651353215229167;
    msg.cor = 176U;

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
    msg.setTimeStamp(0.6871061679692729);
    msg.setSource(54500U);
    msg.setSourceEntity(71U);
    msg.setDestination(25476U);
    msg.setDestinationEntity(138U);
    msg.name.assign("CEMZQVNRAHUHVAFDNORTRZGYXARMQLPFEATMLIWMPSTLSJDFJNHQCVUWXGUMVYLZGWQULHALCBSIUYSZHQQMYYNHPAQKOZUHCSKBBZHPTZLLDWXFUQ");
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
    msg.setTimeStamp(0.585088987849381);
    msg.setSource(44109U);
    msg.setSourceEntity(244U);
    msg.setDestination(34423U);
    msg.setDestinationEntity(99U);
    msg.name.assign("MXWULQRBXKESMOGRFDVZLBAULQAOCJTICWIQXXZNQOEBIQYWPBYCIGDNXURZRAC");
    msg.value = 221U;

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
    msg.setTimeStamp(0.8133313875913272);
    msg.setSource(30383U);
    msg.setSourceEntity(140U);
    msg.setDestination(12316U);
    msg.setDestinationEntity(211U);
    msg.name.assign("RUBLWJYQIVWMOJVUFTAKSNQBZQHMRGYFRKXBZTQQGHDFAFNCKQXTLAVPAYMIHSTOM");
    msg.value = 226U;

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
    msg.setTimeStamp(0.4803107611140114);
    msg.setSource(35384U);
    msg.setSourceEntity(110U);
    msg.setDestination(37903U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JFAXDIQLPBZDFGHFSUY");

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
    msg.setTimeStamp(0.9054251690392368);
    msg.setSource(28528U);
    msg.setSourceEntity(190U);
    msg.setDestination(23303U);
    msg.setDestinationEntity(237U);
    msg.name.assign("IQRBFHZMIREIFAXXTVAUBDRTFCKDJARPXNWJXHKKKOGUYLFDAORJEHNWKCVOOMGPTLFWGNVEDIQHBOBZGSHYNQVEVUQVOYXRZMUHOGOZJCTFCLMTPQLBECWJKZSUCGIAMKYPSTXMKFWIWOMAICPBECQSJNWZNDLVXMFZWIZJKEOIFLBPXSNUWQVDDAKHATGYLRUTPQNN");

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
    msg.setTimeStamp(0.8805134828975835);
    msg.setSource(5165U);
    msg.setSourceEntity(118U);
    msg.setDestination(21964U);
    msg.setDestinationEntity(185U);
    msg.name.assign("IAHDFDMVGGWCJONUALGPMBQEAIEDUKSQZTRAVYQJWEIIXYCPZHJHAKEPPBXSWFTTKDXWVJPLFQRRYQLLTZPXFDOBXRMLUAJTBUHCNSMVLXNHUNOGKHDWNIOBMCEUDEZHFLVZBQRQWYVETPWBXYKPHQNWRFZULGTJZOXQDBJRNCOCAVTCXJNNOJGIKEOROZKKSCSHOEG");

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
    msg.setTimeStamp(0.4277866955424898);
    msg.setSource(39656U);
    msg.setSourceEntity(126U);
    msg.setDestination(37702U);
    msg.setDestinationEntity(140U);
    msg.name.assign("SRWLWLPWWUTSLAJSGTMNT");
    msg.value = 19U;

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
    msg.setTimeStamp(0.6763401734171005);
    msg.setSource(35594U);
    msg.setSourceEntity(200U);
    msg.setDestination(54622U);
    msg.setDestinationEntity(21U);
    msg.name.assign("MNXENHZGNZTYUUEQJSRPDEOKTHQGQSXJXUUBLIZVVGGIYLMDCIAVEDJZAMOBUTOJIWZRAKHRPOVLBIXXCKKNCLKFPHFFCIPXSYYDWYAAZTHCHBLOOBTODJBBCAHTEUKDYYDWNGAWYBNZGYNRCHSJAHQRXWASGPVVRXAEIV");
    msg.value = 91U;

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
    msg.setTimeStamp(0.8866785681686918);
    msg.setSource(39900U);
    msg.setSourceEntity(181U);
    msg.setDestination(36559U);
    msg.setDestinationEntity(81U);
    msg.name.assign("SMTKEPIUPMZRLRMFXZFMNYLLSAKIPVYGVKGXQJJNQTJCPYDKIFPGETXAOLJBPYPSRXLOPWAABETWWLYNNZIHRKUKDDAGMKOVXWFSEDOSUMQCIVKHFBNSCZLRQCEHKLHSCXCIWHZBURRNQ");
    msg.value = 49U;

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
    msg.setTimeStamp(0.8101197862983717);
    msg.setSource(25074U);
    msg.setSourceEntity(11U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(124U);
    msg.value = 0.37823895255394413;

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
    msg.setTimeStamp(0.21482395303464086);
    msg.setSource(24800U);
    msg.setSourceEntity(254U);
    msg.setDestination(16034U);
    msg.setDestinationEntity(182U);
    msg.value = 0.8930280982757846;

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
    msg.setTimeStamp(0.27751326036624757);
    msg.setSource(31045U);
    msg.setSourceEntity(175U);
    msg.setDestination(44137U);
    msg.setDestinationEntity(46U);
    msg.value = 0.8405772961141283;

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
    msg.setTimeStamp(0.1357614211921715);
    msg.setSource(57815U);
    msg.setSourceEntity(6U);
    msg.setDestination(48074U);
    msg.setDestinationEntity(145U);
    msg.value = 0.42214283108000905;

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
    msg.setTimeStamp(0.4548998024126514);
    msg.setSource(42170U);
    msg.setSourceEntity(133U);
    msg.setDestination(25402U);
    msg.setDestinationEntity(184U);
    msg.value = 0.08343640723464396;

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
    msg.setTimeStamp(0.9135236899308705);
    msg.setSource(47886U);
    msg.setSourceEntity(49U);
    msg.setDestination(6579U);
    msg.setDestinationEntity(187U);
    msg.value = 0.567197846370759;

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
    msg.setTimeStamp(0.890689112778875);
    msg.setSource(20687U);
    msg.setSourceEntity(131U);
    msg.setDestination(44488U);
    msg.setDestinationEntity(191U);
    msg.value = 0.7643531862854689;

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
    msg.setTimeStamp(0.11391852569825689);
    msg.setSource(32413U);
    msg.setSourceEntity(152U);
    msg.setDestination(37347U);
    msg.setDestinationEntity(78U);
    msg.value = 0.1772374843169443;

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
    msg.setTimeStamp(0.12726691998356776);
    msg.setSource(8522U);
    msg.setSourceEntity(112U);
    msg.setDestination(45935U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2510607658882803;

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
    msg.setTimeStamp(0.5975400993057766);
    msg.setSource(1157U);
    msg.setSourceEntity(120U);
    msg.setDestination(11502U);
    msg.setDestinationEntity(144U);
    msg.restriction = 206U;
    msg.reason.assign("LPIAAHTOUILSRNLVLXNISUADSPYKCWMHMFPTRXEDQNCJRYBTSSMBBUIMQWBGFJRYDGSYKLZJFQIDBJLEKUVBNAOCBCDVOCKOJTSVZKXAERXDFURJSDFZAVXEGGISENNYWBCITVKHXPWTXEWMYHERFKZBGWOWVPOHZUJROQTZWYQGIQRUWSHONDMPPYIPGLGFQEUVWEAIAVJPTNFQGEMKTCHRXHTVOZQNFZXJYUKFDGMKLQCMZ");

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
    msg.setTimeStamp(0.2468363144521888);
    msg.setSource(7705U);
    msg.setSourceEntity(51U);
    msg.setDestination(31215U);
    msg.setDestinationEntity(80U);
    msg.restriction = 84U;
    msg.reason.assign("ADCWHWKJJVHUJQYLYXZGWBRXAOYPXTJMYNEAHDURZWJPCXZGEQXOTAZZEJOKHCUDIXGQSJHPSYQWSGUDMLSQCQDDRWYATCNRUTSXWBKZQPAJMHCKLPDOQRFIDONWRYHBEHPNUCKTJGYINGLTZNSUKVTJIVVVRBHBFWEXELKFELPBMAFIMIEMEZQOUUZVQCPMLNYMVVHVZMXFOOTABBFTOCPDGYDBICG");

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
    msg.setTimeStamp(0.1699431252665693);
    msg.setSource(31711U);
    msg.setSourceEntity(166U);
    msg.setDestination(15760U);
    msg.setDestinationEntity(97U);
    msg.restriction = 8U;
    msg.reason.assign("IKTZZTLGMCGAFJRUIZSGLNKKZSUQHYYILVAOKZSOAKRJVURPZUZXVXWGBILEVNKERSFTUWYVUSPXFUXUCPFDTURIE");

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
    msg.setTimeStamp(0.6654462460703929);
    msg.setSource(25777U);
    msg.setSourceEntity(67U);
    msg.setDestination(7406U);
    msg.setDestinationEntity(70U);
    msg.path_param = 0.547106643680413;
    msg.lat = 0.41389296582362134;
    msg.lon = 0.9070896206190091;
    msg.z = 0.3775966792193787;
    msg.r_f = 0.7600688565107786;
    msg.p = 0.9703470707585693;

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
    msg.setTimeStamp(0.8154498421311106);
    msg.setSource(61924U);
    msg.setSourceEntity(147U);
    msg.setDestination(14351U);
    msg.setDestinationEntity(11U);
    msg.path_param = 0.11388038865640415;
    msg.lat = 0.5675333822412933;
    msg.lon = 0.7737003913931714;
    msg.z = 0.6515838129860886;
    msg.r_f = 0.7827590712104524;
    msg.p = 0.9635185159179779;

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
    msg.setTimeStamp(0.6201164626470524);
    msg.setSource(58055U);
    msg.setSourceEntity(237U);
    msg.setDestination(57683U);
    msg.setDestinationEntity(92U);
    msg.path_param = 0.8996430727413653;
    msg.lat = 0.551926316576018;
    msg.lon = 0.9697646668678659;
    msg.z = 0.2841489185953634;
    msg.r_f = 0.8162391808664676;
    msg.p = 0.7004672737991656;

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
    msg.setTimeStamp(0.8575219089578839);
    msg.setSource(56397U);
    msg.setSourceEntity(31U);
    msg.setDestination(13683U);
    msg.setDestinationEntity(207U);
    msg.path_param = 0.23971222403819792;
    msg.x = 0.8368703442577305;
    msg.y = 0.2786587729814327;
    msg.z = 0.7932367268676086;
    msg.r_f = 0.15533029861315406;
    msg.p = 0.7061119408562629;

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
    msg.setTimeStamp(0.7610662448078858);
    msg.setSource(15159U);
    msg.setSourceEntity(125U);
    msg.setDestination(65039U);
    msg.setDestinationEntity(182U);
    msg.path_param = 0.6137086254787555;
    msg.x = 0.9958328409169891;
    msg.y = 0.4836080454895636;
    msg.z = 0.6012568997257218;
    msg.r_f = 0.7937364742950049;
    msg.p = 0.0016478586799667516;

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
    msg.setTimeStamp(0.7716983758926877);
    msg.setSource(16768U);
    msg.setSourceEntity(178U);
    msg.setDestination(38835U);
    msg.setDestinationEntity(254U);
    msg.path_param = 0.5600050188342317;
    msg.x = 0.49241373952662393;
    msg.y = 0.5320165393436956;
    msg.z = 0.00036972873143692464;
    msg.r_f = 0.04626765031202973;
    msg.p = 0.9310150747165343;

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

  return test.getReturnValue();
}
