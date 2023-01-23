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
// IMC XML MD5: a9b25b801ed53322c5c666ae717ee492                            *
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
    msg.setTimeStamp(0.48655040689984574);
    msg.setSource(29130U);
    msg.setSourceEntity(23U);
    msg.setDestination(41599U);
    msg.setDestinationEntity(183U);
    msg.state = 86U;
    msg.flags = 172U;
    msg.description.assign("FYUBWTXHEEFVLXCAOSMHLEUWYKHTKTYYVIPZKWYAZXJUQFDPWNHMCOSFGXMGCKNVFRJSJEPWSQZCSZVHZTBKJRQTBXVJYGVEIJAPHPXAULHNASUPDDTNRSRDRTL");

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
    msg.setTimeStamp(0.1205400846393917);
    msg.setSource(10737U);
    msg.setSourceEntity(61U);
    msg.setDestination(52426U);
    msg.setDestinationEntity(84U);
    msg.state = 105U;
    msg.flags = 166U;
    msg.description.assign("MEJTNKEYBHXALYOWXADHVICUOUMSLNJDFVUWKEKUQQPQYCMXYIIMBVPLMYQPGRDSMJWBHHBFNAPAZHEPTTMGWNBXJGTSFBTKVJKYJSEYCAFFIICDCQMNULGIDAQSAEUDRGUVPCVOSPZGFQXOZQZFKFYAKAVJTLO");

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
    msg.setTimeStamp(0.6305702630516009);
    msg.setSource(2459U);
    msg.setSourceEntity(21U);
    msg.setDestination(45125U);
    msg.setDestinationEntity(194U);
    msg.state = 194U;
    msg.flags = 197U;
    msg.description.assign("KEYRICYSMRXWKOZEDZNKWVNGYEFTPXIHMHDVFDEBSUTGIDJQKRHPCAERUHISCZQQFGNJIQFVWKDBFRDRYQ");

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
    msg.setTimeStamp(0.9424453930068368);
    msg.setSource(2992U);
    msg.setSourceEntity(120U);
    msg.setDestination(12034U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.4466685703181501);
    msg.setSource(58805U);
    msg.setSourceEntity(30U);
    msg.setDestination(32351U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.5857180497672578);
    msg.setSource(54949U);
    msg.setSourceEntity(151U);
    msg.setDestination(59765U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.5190431545995574);
    msg.setSource(52236U);
    msg.setSourceEntity(108U);
    msg.setDestination(40072U);
    msg.setDestinationEntity(2U);
    msg.id = 188U;
    msg.label.assign("NYAWCUCYPEVOQXLAZQFJDOTHUQJGDHFIEVATBQOXOPKRNNWFVMYEKNKNOCKUXHQSOWDPUJDDMBDCVFJGXJXSHHIOTSRLQOKGBTWGDSBZAJXMUMCRXCINGZKEHAGYWRFLWLOTZTIFNECTXNIZVMJRHUYPSIEJCEKVZARMUSDGYFCXCPBZAZGAFQGSRYBRPQSTVIPULEUTMLSWBMWDWUVQXHIPJKJFMFAIYRHEDL");
    msg.component.assign("DEGXVUHGRHPLRUIDKBRKACPFTUNGGHVVNTMNJSKIAFCDQWTIVAANXQPXBQOCURTOMRNZHBDYRTEXAFOLOEOTNEZTWHPZMFYCUVQPANIJMFVDWZJLIZGLWGOLGOCKJECFRZFDAXMQXDFIXWPYUCUGTHYQLSSPNVWOYMKWDQSAJIHUUTKQPUXERBSWDYBBGYJAZEPYKCNBMYKHSCFKSBKLZVJZBVOMJWIJWBCN");
    msg.act_time = 19509U;
    msg.deact_time = 31287U;

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
    msg.setTimeStamp(0.15897843520817156);
    msg.setSource(43343U);
    msg.setSourceEntity(251U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(207U);
    msg.id = 140U;
    msg.label.assign("HMJRTZGUXNNLXWSIHDFVARICQSQKGKJVNERYZMBBDECSFYVIQBUUOROXGFJUPQMIZEMPCOHOQCGQZZAARCDKXPIUAJZBAYLDGHLONGQBTULMEZSXEDNIPRREIHQIJFMWYHCWDITVXBSNPJVZCJAWPWATNXKNLTXXGNEKTUSDNSOWSJEQWKDWLUUVAYSTHODJPMWDRTVFEHRHWHKOGBYEUMPKCVQKFVFZBLSBZFYBCLAVTPM");
    msg.component.assign("UJNQMYBIHGVABDJFYPIMNQJKIDSEAUKCVPOXKVCIMZNCGCVLJWSGKPLGXHVSBSQBSVPLRODEIAOQWDFHGLOGHZKUOHJOFBTVYULRXNEHABWHPDUGRGKBYBWTLBMUDLDOJZPRUYPYCQZRFPIXETKALANAYEZGNXWZNODVMZSPKQDFMHEFTCCTOECJQYVKQXR");
    msg.act_time = 13708U;
    msg.deact_time = 49310U;

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
    msg.setTimeStamp(0.6462101616484043);
    msg.setSource(15118U);
    msg.setSourceEntity(172U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(1U);
    msg.id = 147U;
    msg.label.assign("QCLTDUDHWPKYORTOJLN");
    msg.component.assign("UZWKBKZRSBFHCPQDAWSGYCHTFPTSCEFYHUVHNDAVJMRUNIXBLINKRJGNOCZRTIBZJGPNQAFPICULDTFSEXNLSPWGGDURUKLKSHJZRTNYFYJMTOKBEDMQMSYYBKHUO");
    msg.act_time = 15973U;
    msg.deact_time = 17160U;

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
    msg.setTimeStamp(0.44638132604824854);
    msg.setSource(41220U);
    msg.setSourceEntity(82U);
    msg.setDestination(5761U);
    msg.setDestinationEntity(231U);
    msg.id = 65U;

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
    msg.setTimeStamp(0.10926051604507303);
    msg.setSource(63425U);
    msg.setSourceEntity(6U);
    msg.setDestination(55212U);
    msg.setDestinationEntity(223U);
    msg.id = 26U;

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
    msg.setTimeStamp(0.026320645718615476);
    msg.setSource(42712U);
    msg.setSourceEntity(97U);
    msg.setDestination(23669U);
    msg.setDestinationEntity(155U);
    msg.id = 170U;

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
    msg.setTimeStamp(0.3158369587513309);
    msg.setSource(62675U);
    msg.setSourceEntity(201U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(189U);
    msg.op = 130U;
    msg.list.assign("RHIQCYOMFVFGTHPKBSPNEVNUMQYOXWOZDFGBRWPUHKFUBRVQIPKNZWETBVCYVKVNCRDQMJDAXCBABVNDQRJHTAFMULIZNLHPMABLLNAHZTTHTUSDEKCNCYSPJSSQXDXESYPWHSSQMWPUAWEGCYQIIUCGDVMYCRNLEAEXWTUCLIRGAYYFXZGFJQSBBTIZMOOFMFEZJJHEIVNIFLKOIZRRXJXKG");

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
    msg.setTimeStamp(0.9538605605636653);
    msg.setSource(17569U);
    msg.setSourceEntity(153U);
    msg.setDestination(32121U);
    msg.setDestinationEntity(45U);
    msg.op = 81U;
    msg.list.assign("CMNVCTNTWUUSEQEUNXJBFRLIUWRSVYVCFPWAKWMAQOWBAYFQFZILZQZDDZLTICYKQWYAOWULKEEDDKGDHHGEKAYUNDIRSRXXSNWRPXPSGSHOKFUPJLBNEBZRPHJBJSFDSJGECZYLRTWCCPWFHOAVVKZJMIATGONIUXM");

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
    msg.setTimeStamp(0.9874560485170888);
    msg.setSource(53570U);
    msg.setSourceEntity(193U);
    msg.setDestination(17391U);
    msg.setDestinationEntity(55U);
    msg.op = 139U;
    msg.list.assign("TNOFFNCLBNMLVKLHPNBCGUZGEJYXPEPZCIBMDUBUFQDWLDYEZIAEAFVFBKGUPWKYBOWGHRJIJSEWTCWOXAHQDFOAHGDDGPQIZCRHNPTEFSQZDXCIAGOMHUVTRXIJTXKMYUSHWTNVMFZJVYIAAELHZIVCGBNZMWAEVSRRAXEWNOGLKTIUSYDOOQHDGRSRQLBPSQBRUKVAVNZMTZIYRNMXYWPKBJM");

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
    msg.setTimeStamp(0.4005422144710723);
    msg.setSource(30287U);
    msg.setSourceEntity(151U);
    msg.setDestination(44498U);
    msg.setDestinationEntity(142U);
    msg.value = 32U;

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
    msg.setTimeStamp(0.5240202892815852);
    msg.setSource(8595U);
    msg.setSourceEntity(185U);
    msg.setDestination(49526U);
    msg.setDestinationEntity(74U);
    msg.value = 111U;

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
    msg.setTimeStamp(0.5421715827562816);
    msg.setSource(58155U);
    msg.setSourceEntity(116U);
    msg.setDestination(45543U);
    msg.setDestinationEntity(29U);
    msg.value = 95U;

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
    msg.setTimeStamp(0.9841893287841061);
    msg.setSource(43316U);
    msg.setSourceEntity(93U);
    msg.setDestination(38647U);
    msg.setDestinationEntity(179U);
    msg.consumer.assign("UJECZPSIZLJQQSDBBVQRRGKHPGCRYCKTSPATJKKOCALBFYNWLCJNVHDMDHOZJXFFKDPMUVDRAOOPANNTXNQFERAIMSRUBXYIMIFQHWEAYLRIMKIOWZCSZZYWWBBDVBUMYSWMGXEVGQPDGELUK");
    msg.message_id = 46626U;

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
    msg.setTimeStamp(0.5598907070724636);
    msg.setSource(40989U);
    msg.setSourceEntity(77U);
    msg.setDestination(60498U);
    msg.setDestinationEntity(155U);
    msg.consumer.assign("OPGGVMNNQOOBRCUKXETIROFNGTUYWDZHKCKEUJBZVBLICCFZYLFIMWGSDWSRDVXDQLTKTMZYFANCESVOLYLTPJFZSCWYGXSLCKMAJNZVUBINPHGJWWXUXBQCMWFHRPHDYHUJCQHWDMIIAHLRZJNKWSEYIRPBATSJFPFMVQDYXKUNTQPHKJYBSQ");
    msg.message_id = 64320U;

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
    msg.setTimeStamp(0.36814818577145925);
    msg.setSource(2026U);
    msg.setSourceEntity(62U);
    msg.setDestination(24067U);
    msg.setDestinationEntity(77U);
    msg.consumer.assign("LZFBODNTQGWIAPMVYOSAKTKRXDHTYJKDRWKCIYECWGKMWEPANCTDFIDIGAUZRJWUEUFQMUXFGLIIZEBCHCVIGHGCVMCCDEVHBOVUOPQEUGXEUZPUPRDHPKQDXNGZRZJAVSCLEYXATIEWQONJTLQXKJSZSPDNSKTGNWHYNEBHXWJROWA");
    msg.message_id = 40886U;

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
    msg.setTimeStamp(0.695209693103571);
    msg.setSource(60875U);
    msg.setSourceEntity(199U);
    msg.setDestination(58422U);
    msg.setDestinationEntity(155U);
    msg.type = 54U;

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
    msg.setTimeStamp(0.6213571746588794);
    msg.setSource(40692U);
    msg.setSourceEntity(41U);
    msg.setDestination(38421U);
    msg.setDestinationEntity(4U);
    msg.type = 156U;

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
    msg.setTimeStamp(0.7509559713178298);
    msg.setSource(37165U);
    msg.setSourceEntity(78U);
    msg.setDestination(17312U);
    msg.setDestinationEntity(125U);
    msg.type = 99U;

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
    msg.setTimeStamp(0.4894712173904463);
    msg.setSource(56216U);
    msg.setSourceEntity(123U);
    msg.setDestination(26068U);
    msg.setDestinationEntity(124U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.026383486929057787);
    msg.setSource(1285U);
    msg.setSourceEntity(20U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(192U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.6356239195411164);
    msg.setSource(19414U);
    msg.setSourceEntity(44U);
    msg.setDestination(47598U);
    msg.setDestinationEntity(37U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.7736218691034326);
    msg.setSource(42438U);
    msg.setSourceEntity(24U);
    msg.setDestination(27563U);
    msg.setDestinationEntity(50U);
    msg.total_steps = 164U;
    msg.step_number = 48U;
    msg.step.assign("YNEMWXSVGBAXIFTJTJFMODBONGMVALPUZIAIIFZWCMSIECIFJSGOWZJHKEKLHMZUJFVGQUFULFNKHXGPSHDXTXABYGNKABAVSWLLNQLAPYWISYPJEPNWPTQIXWBBKGYRQDTEDROOKRDXQJHDOJZOHFVLRVOAWNKVKXTQ");
    msg.flags = 31U;

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
    msg.setTimeStamp(0.36921010616172856);
    msg.setSource(6598U);
    msg.setSourceEntity(84U);
    msg.setDestination(49379U);
    msg.setDestinationEntity(103U);
    msg.total_steps = 146U;
    msg.step_number = 155U;
    msg.step.assign("VCCNBCQEOWTDOYUVLGFXFGFNSEIKWSIWQSYLODHIKARPBSROIZNDVHLCQBXMMBPKJVIFLQSWZAMYJSXJZNYUDCPWTFPUDIYKOWRJGZLRUYVDAOJOWJETPTBXEYIOITXPEZRGFNUMDACKJQTKSAKPWJCGVENUXWZGYTPDXNMUMXRBUTGJVAHHHEFM");
    msg.flags = 99U;

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
    msg.setTimeStamp(0.15603446812192645);
    msg.setSource(42099U);
    msg.setSourceEntity(107U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(97U);
    msg.total_steps = 16U;
    msg.step_number = 50U;
    msg.step.assign("HONWBKMOYEIDCTWMCDWSZOOIXVBJPUQVJQIDPJAGQGLVNDRUXSHCQLLQSENATVCZFNTBBRHNFITCYSJPKRIXYRMZWHAHESGXANUQWIKULZLSGWYUHRZF");
    msg.flags = 63U;

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
    msg.setTimeStamp(0.542405567821898);
    msg.setSource(29619U);
    msg.setSourceEntity(106U);
    msg.setDestination(29104U);
    msg.setDestinationEntity(208U);
    msg.state = 250U;
    msg.error.assign("CBLQRDMYMYYOQQWAULZGFKHHVZCAVXVTDSVAPNEBWKBSFWSSCIHHOMDLIUHLBUKVZKJNLEROEKNNLKMYXBZODRWBYVCPRTACNGVCJPSYEGHRBHUPDOHBKFULXOLAUQAJPJOMVXKN");

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
    msg.setTimeStamp(0.6296606303740638);
    msg.setSource(19563U);
    msg.setSourceEntity(222U);
    msg.setDestination(37435U);
    msg.setDestinationEntity(120U);
    msg.state = 30U;
    msg.error.assign("BQPVICLZXNTAJATUINNTDXQYXFVNFOYZFBHODKOOWLJDKKCKOPBSJEDCHVHVOTHQZFSRYRBPEUMIHAEVIMEJZDEBJSYMRVDUGXCYFUAWQWECWQRZITXUQPUXUHSEZWSLPTZWAZPGYNURFIXJLRHVGOQZLYKRLGCPGDSMVJPJMRMHWXQPLBBTMFUSGTXZOSCGPXRCEOWIKNJAALYDKAEDNFKJCSUNMAQM");

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
    msg.setTimeStamp(0.8328852115777945);
    msg.setSource(36710U);
    msg.setSourceEntity(36U);
    msg.setDestination(4890U);
    msg.setDestinationEntity(207U);
    msg.state = 170U;
    msg.error.assign("OWBYLFNWYEMXOSPTTCYPQCGYSAUUVBIMRIGFZANECZWLEXNQZCPSDNHHZTZSOPCLDBQQIXUSQFLVTSAXBMGTZGNAXVAUMOAVKNNJJXWBZBQJV");

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
    msg.setTimeStamp(0.02291511865691742);
    msg.setSource(63881U);
    msg.setSourceEntity(253U);
    msg.setDestination(53563U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.14767057151840823);
    msg.setSource(64144U);
    msg.setSourceEntity(178U);
    msg.setDestination(31037U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.8421773782671451);
    msg.setSource(57202U);
    msg.setSourceEntity(237U);
    msg.setDestination(25452U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.4200407320677556);
    msg.setSource(5189U);
    msg.setSourceEntity(198U);
    msg.setDestination(9469U);
    msg.setDestinationEntity(109U);
    msg.op = 230U;
    msg.speed_min = 0.03698390102918547;
    msg.speed_max = 0.6967224923851714;
    msg.long_accel = 0.08038053926925115;
    msg.alt_max_msl = 0.12821987817249514;
    msg.dive_fraction_max = 0.9697894150921028;
    msg.climb_fraction_max = 0.2775522234189479;
    msg.bank_max = 0.6096150971007782;
    msg.p_max = 0.9195452187543395;
    msg.pitch_min = 0.5352585409139508;
    msg.pitch_max = 0.3609841123528038;
    msg.q_max = 0.9860976587698638;
    msg.g_min = 0.01612783518272598;
    msg.g_max = 0.18060266307338002;
    msg.g_lat_max = 0.6206312420579188;
    msg.rpm_min = 0.3163298094259649;
    msg.rpm_max = 0.5069080271175336;
    msg.rpm_rate_max = 0.16348821776689226;

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
    msg.setTimeStamp(0.8405258690779087);
    msg.setSource(5850U);
    msg.setSourceEntity(124U);
    msg.setDestination(18476U);
    msg.setDestinationEntity(247U);
    msg.op = 30U;
    msg.speed_min = 0.34985416053715523;
    msg.speed_max = 0.9770313689117065;
    msg.long_accel = 0.5573418988477061;
    msg.alt_max_msl = 0.3413282370059745;
    msg.dive_fraction_max = 0.5483081019892769;
    msg.climb_fraction_max = 0.7186577222997091;
    msg.bank_max = 0.944861768680679;
    msg.p_max = 0.5418741299035913;
    msg.pitch_min = 0.2137455664171115;
    msg.pitch_max = 0.3014848652036428;
    msg.q_max = 0.4484556031383198;
    msg.g_min = 0.5970220139203835;
    msg.g_max = 0.8768387179844146;
    msg.g_lat_max = 0.4392829217017842;
    msg.rpm_min = 0.22985580080975632;
    msg.rpm_max = 0.8598303512227778;
    msg.rpm_rate_max = 0.3094487788589817;

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
    msg.setTimeStamp(0.06356256450665043);
    msg.setSource(17572U);
    msg.setSourceEntity(251U);
    msg.setDestination(19212U);
    msg.setDestinationEntity(22U);
    msg.op = 84U;
    msg.speed_min = 0.4109168994943301;
    msg.speed_max = 0.13800224794569949;
    msg.long_accel = 0.2712347484430565;
    msg.alt_max_msl = 0.7809176645529011;
    msg.dive_fraction_max = 0.3364595393791109;
    msg.climb_fraction_max = 0.5798362817992393;
    msg.bank_max = 0.74687388904062;
    msg.p_max = 0.8816899981445558;
    msg.pitch_min = 0.7601294637216822;
    msg.pitch_max = 0.5638631473115127;
    msg.q_max = 0.9401807235018451;
    msg.g_min = 0.42544196682998403;
    msg.g_max = 0.1755057868689548;
    msg.g_lat_max = 0.10649047817718316;
    msg.rpm_min = 0.4757534626584524;
    msg.rpm_max = 0.2299487934290615;
    msg.rpm_rate_max = 0.24994568579939969;

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
    msg.setTimeStamp(0.18820318188832108);
    msg.setSource(57067U);
    msg.setSourceEntity(147U);
    msg.setDestination(52658U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.23564432436102845);
    msg.setSource(31913U);
    msg.setSourceEntity(61U);
    msg.setDestination(32047U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.611480313134862);
    msg.setSource(30584U);
    msg.setSourceEntity(178U);
    msg.setDestination(14812U);
    msg.setDestinationEntity(67U);
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 47U;
    tmp_msg_0.mnames.assign("QAPKGDQPXQNDWILFKLMJJPGCTNEAHQILPRUUGSQVUVRYUXWBLJAMEKLJEKPOHCDTHICTJMFDVNFGKEU");
    tmp_msg_0.ecount = 160U;
    tmp_msg_0.enames.assign("THEZXSVMFNASHMBHURWDQFEZHKCFMJTPLSKVRUMTJEDIARDQEEGJYJWCTNVBNXAPHOVQRLSPBLWQXVOKDTRLXGGIPAZ");
    tmp_msg_0.ccount = 79U;
    tmp_msg_0.cnames.assign("LVXWUNAIFJWGZQNJADSPGBLXFWAVDPJOTSYXYMYFLQHXYCRSBKX");
    tmp_msg_0.last_error.assign("KMZUERVCFAOIOIKKQABGLTUQKURRNLKUHZGQZBJTHJTHSRWOVSBHSRMXAJCN");
    tmp_msg_0.last_error_time = 0.922122955242512;
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
    msg.setTimeStamp(0.17266991144839716);
    msg.setSource(15685U);
    msg.setSourceEntity(5U);
    msg.setDestination(28876U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.035917985037783984;
    msg.lon = 0.32977201794942823;
    msg.height = 0.1188977575379192;
    msg.x = 0.3730025285262589;
    msg.y = 0.9315556172920031;
    msg.z = 0.35998663360845706;
    msg.phi = 0.2380794663547633;
    msg.theta = 0.021601335915704012;
    msg.psi = 0.1926723187928131;
    msg.u = 0.009053116695240226;
    msg.v = 0.8226225679422442;
    msg.w = 0.6456233152418306;
    msg.p = 0.7531448429786335;
    msg.q = 0.34758378587272176;
    msg.r = 0.2014649583890754;
    msg.svx = 0.9810964023252262;
    msg.svy = 0.36679671436009254;
    msg.svz = 0.6259392903658898;

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
    msg.setTimeStamp(0.3462395621201362);
    msg.setSource(17316U);
    msg.setSourceEntity(111U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.5818152345752753;
    msg.lon = 0.4145957841659995;
    msg.height = 0.23373976570119448;
    msg.x = 0.720897439580867;
    msg.y = 0.39746713344975837;
    msg.z = 0.20813988534843852;
    msg.phi = 0.32078571973333236;
    msg.theta = 0.04009651735198505;
    msg.psi = 0.7220684783041347;
    msg.u = 0.033129016996975014;
    msg.v = 0.4637971750201153;
    msg.w = 0.2532376155078325;
    msg.p = 0.35231446153446166;
    msg.q = 0.2655272045923929;
    msg.r = 0.8271099614167091;
    msg.svx = 0.07577465516379911;
    msg.svy = 0.32967825171189713;
    msg.svz = 0.5554510129554898;

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
    msg.setTimeStamp(0.4945839327763082);
    msg.setSource(55560U);
    msg.setSourceEntity(10U);
    msg.setDestination(27160U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.1694382548099066;
    msg.lon = 0.6626307997420964;
    msg.height = 0.008818193200952451;
    msg.x = 0.862408366899916;
    msg.y = 0.9493466997844109;
    msg.z = 0.1347375659091844;
    msg.phi = 0.4547531561173521;
    msg.theta = 0.9403505379338786;
    msg.psi = 0.4443877300952196;
    msg.u = 0.3372472418913286;
    msg.v = 0.639401541761099;
    msg.w = 0.6258549362194812;
    msg.p = 0.9255170470577224;
    msg.q = 0.4970229009857059;
    msg.r = 0.6516674226589289;
    msg.svx = 0.06342281802212191;
    msg.svy = 0.3926201410293648;
    msg.svz = 0.8399142511275033;

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
    msg.setTimeStamp(0.1275461526855015);
    msg.setSource(42924U);
    msg.setSourceEntity(13U);
    msg.setDestination(13623U);
    msg.setDestinationEntity(109U);
    msg.op = 242U;
    msg.entities.assign("SNHAOHYYVBTSKAACWAXQCZRBXCZLYHSMFVIKIFEMHYULQRGRMCYDHENZOUUJPJERKQOXRFEPJFXPITZWGKVMRCRNAFXBYOSBNWWB");

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
    msg.setTimeStamp(0.2123180101535429);
    msg.setSource(29492U);
    msg.setSourceEntity(15U);
    msg.setDestination(18U);
    msg.setDestinationEntity(93U);
    msg.op = 127U;
    msg.entities.assign("SRWKVTUOAKXSWBRQJYGWBENDEYVOXNGCEJIFQPHZAKHCMILFADWFSOUSSESNYBQWUILCNOUURTZHSJUBDRCXQXMLIRVHYLQFDKYFOIFLXVJLIWRDWMNVXIGYAOHNGORYHPHEXYTGPTZQJQIRTLGZKVTPFWUJQPYXIQVZGNZPEBSDZEDTNZZACXWKBCTUIMONRCGVBCPCAMOKJMWLKJJAHCRMVMMNTAVDOFDUSFQPBPAPELLXHBDKUYHZEM");

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
    msg.setTimeStamp(0.7274598311582018);
    msg.setSource(31497U);
    msg.setSourceEntity(209U);
    msg.setDestination(42594U);
    msg.setDestinationEntity(240U);
    msg.op = 142U;
    msg.entities.assign("ZICEFXTOKGWAJEXNSDVOHXPDTJLZLOAUIMMZIUPEKOUBKWSBNZJRNSXQWFAJJMTDMGWZTJSWQTVOPVHNHBFFAAWJWSSNZRUUUJDMSYKPKCQBACPCKTMPFVUQBYREGDXHRXYYYGJFSNKVTZYZAWCEVMCYBLVBHSFYWEQLBLKCMDHCNMNEHYDGPOTBQMKRFTHIUIDLVCNDLOUHLGKILRCIZGGAPQOFQRTXIRZLXERHDRSAP");

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
    msg.setTimeStamp(0.12339903166701194);
    msg.setSource(11964U);
    msg.setSourceEntity(169U);
    msg.setDestination(45105U);
    msg.setDestinationEntity(157U);
    msg.type = 25U;
    msg.speed = 52914U;
    const char tmp_msg_0[] = {51, 72, -41, 67, 107, 24, -58, -32, 12, 21, -52, 37, -127, 49, -1, -128, -96, 68, 5, -11, -70, 1, 104, -112, -4, 58, -46, 109, -31, -61, 67, 32, 66, 116, 109, 103, 79, -88, -68, 67, -75, -82, -9, 1, -55, 41, 1, -95, 26, -119, 0, 94, -82, 8, -113, -19, -88, 76, 117, 5, -14, -62, 43, -118, 98, 0, -101, -68, 66, -109, 98, 110, -49, 21, -83, -123, 94, 105, -118, 63, -122, 89, -26, 29, -38, 36, -54, -13, 54, 120, 124, 24, 0, -51, -72, 22, -56, -47, -25, 101, 48, 65, -44, -31, 4, 64, 46, 20, 107, 110, -30, 103, -15, 84, -107, -85, -49, 31, 63, -65, 39, -97, 123, 38, -101, -63, 103, -15, 98, 22, -7, 94, -66, 72, 110, -45, 110, 125, 15, 96, 17, -68, 25, -46, 112, 66, 60, 45, -18, -50, -67, 99, 90, 90, -71, -49, -91, 120, 71, -87, 94, 101, -76, 64, -8, 117, 2, -45, -97, 45, 55, 58, -24, -25, 97, -66, 55, -8, 68, 41, -72, 126, -122, 6, -39, 77, -126, 101, -65, 24, 53, 24, -85, 74, -123, -112, 75, -10, 0, 53, 109, 114, -91, 1, 113, -56, 1, -100, -1, -91, 48};
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
    msg.setTimeStamp(0.9791109676316941);
    msg.setSource(38716U);
    msg.setSourceEntity(248U);
    msg.setDestination(38638U);
    msg.setDestinationEntity(233U);
    msg.type = 120U;
    msg.speed = 19950U;
    const char tmp_msg_0[] = {-90, 105, -43, 71, 2, -60, -28, -78, 50, -58, -101, -105, 47, 111, 98, 93, 9, 12, -46, 14, 45, 55, 65, 118, 57, 80, 73, -33, -50, -23, 75, 16, 14, -29, 45, 45, -71, 39, 83, 0, -19, 80, 102, -115, -83, 110, -2, -128, -69, -91, -117, -73, 46, -91, 62, 56, 97, 20, -3, -3, -95, -42, 42, -16, 108, -18, 110, -102, -87, -2, -102, -121, 1, -20, -22, 72, -42, -8, 58, 69, -7, 12, -4, 13, -53, -68, -127, -24, 72, -46, 19, 126, 114, 70, -58, -54, 54, -25, -40, -111, 16, 89, -127, 110, -80, -120, -68, -42, -77, -57, 73, -111, -32, 28, -121, -43, -66, 48, -92, 58, 108, -92, 100, -10, 12, -106, -120, -126, 12, -86, -36, 113, 6, -4, 7, -42, 103, -11, -109, 72, 121, -9, -53, -68, -31, -68, -32, -38, -25, 5, -28, -58, 40, -42, 53, 17, -79, -75, -122, -91, -71, 59, -28, 52, 109, 52, 48, -2, 78, 5, 49, 120, 73, 30, -68, 15, -73, -33, -4, -48, 70, 101, -43, -50, -113, 88, -42, 64, -31, 55, -55, -117, 39, 25, -98, 14, 118, -121, 20, 5, 2, 125, 86, -92, -93, -80, 21, -80, 45, -47, -6, 17, -24, 28, 112, 92, -56, 102, 64, -14, -18, -67, -50, 49, 104, 34, 116, 80, 50, -115, -85, 49, 102, 116, -100, 103, -97, -116, 21, -114, 15, -32, 94, -79, -114, 68, 117, -61, -50, -96, -42, 43, 4, 122};
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
    msg.setTimeStamp(0.3781015811820585);
    msg.setSource(61807U);
    msg.setSourceEntity(142U);
    msg.setDestination(51415U);
    msg.setDestinationEntity(81U);
    msg.type = 81U;
    msg.speed = 36432U;
    const char tmp_msg_0[] = {94, -24, -117, 124, -127, -88, 116, -73, -105, -3, 76, -95, -33, -112, -50, 42, 52, -82, 68, 11, -12, 26, 66, 71, 81, -33, -8, -56, -99, -40, 40, 49, 57, 76, -21, -82, 9, 113, 89, 46, -73, 33, 78, 108, -116, -79, -78, 121, -102, 7, 93, -88, 34, 29, 86, -52, 95, -100, 110, 2, -83, 103, 81, -56, 73, -111, 95, 0, -82, -14, 28, -8, -96, -5, -99, 83, 103, 27, 109, 84, -77, -80, 96, -90, -3, 68, -106, -28, -74, -90, 7, -118, -75, -11, -114, 63, 95, 82, -93, 9, -47, 111, 39, 73, 72, -99, -116, 72, 12, 34, 33, -112, 22, -17, -121, -103, 56, 21, 46, -68, -49, -106, -5, -55, 27, -93, 114, -126, -124, 88, -44, 30, -38, 1, -53, -19, 45, -7, 84, -123, -48, 97, -6, -20, 110, -126, 37, 20, -67, 123, 56, -127, 40, 57, 48, 58, 85, 37, -30, -17, 96, 77, 13, 113, 47, -42, -109, 38, -59, -48, 64, 120, 56, 64, -44, -49, 13, -1, -89, 101, 119, 18, 35, -29, -93, 2, 52, -44, 10, 71, -108, 45, -43, -41, 40, -33, -50, -101, 36, -36, -91, -111, 81, -68, 39, -19, 43, -21, 41, 26, 77, 107, -120, 122, 68, 69, -127, 34, 63, 118, -49, -73, 114, 8, 117, -66, 17, -92, 101, -100, 32, -59, 86, 116, -18, -111, -96, -81, -39, 9, 50, 3};
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
    msg.setTimeStamp(0.3918190302570185);
    msg.setSource(9046U);
    msg.setSourceEntity(100U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(143U);
    msg.op = 74U;
    msg.tas2acc_pgain = 0.26689485633031995;
    msg.bank2p_pgain = 0.23797509317629695;

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
    msg.setTimeStamp(0.27098678123139963);
    msg.setSource(17215U);
    msg.setSourceEntity(85U);
    msg.setDestination(11557U);
    msg.setDestinationEntity(110U);
    msg.op = 247U;
    msg.tas2acc_pgain = 0.3224469759452335;
    msg.bank2p_pgain = 0.24547982113184175;

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
    msg.setTimeStamp(0.6626204752622967);
    msg.setSource(16190U);
    msg.setSourceEntity(88U);
    msg.setDestination(26829U);
    msg.setDestinationEntity(232U);
    msg.op = 92U;
    msg.tas2acc_pgain = 0.7645989227871107;
    msg.bank2p_pgain = 0.5791459768619521;

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
    msg.setTimeStamp(0.9572851098616489);
    msg.setSource(46131U);
    msg.setSourceEntity(84U);
    msg.setDestination(63915U);
    msg.setDestinationEntity(37U);
    msg.available = 3353155028U;
    msg.value = 248U;

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
    msg.setTimeStamp(0.048517551963780825);
    msg.setSource(34692U);
    msg.setSourceEntity(13U);
    msg.setDestination(14127U);
    msg.setDestinationEntity(72U);
    msg.available = 3279034543U;
    msg.value = 108U;

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
    msg.setTimeStamp(0.9049697903082876);
    msg.setSource(49711U);
    msg.setSourceEntity(247U);
    msg.setDestination(5408U);
    msg.setDestinationEntity(178U);
    msg.available = 415586047U;
    msg.value = 253U;

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
    msg.setTimeStamp(0.8724633192220885);
    msg.setSource(43178U);
    msg.setSourceEntity(101U);
    msg.setDestination(16428U);
    msg.setDestinationEntity(92U);
    msg.op = 36U;
    msg.snapshot.assign("ICJMRBEELJAEHWEIASVQTWYSFPBASHKUTEOIBVJCTTSHPAOAXCXOGDONBTNDZFQHCLUPEAGJUZVIQWERXYKCOXGROYPZXRFUCSIQUFZCRGVUCRZBZORNUBJZ");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 71U;
    tmp_msg_0.eta = 35424U;
    tmp_msg_0.info.assign("KEMJTCWJIVDBAYFLWPIDTHLPUAPSKDXUMBAEDSEKREQUCPGGWZCOESSBPMOIGARPJZYJADMLHQHINYFBTPCBRAQXLCVURFPXTMHSIILGTRHZCZTKJHXWEOBCUY");
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
    msg.setTimeStamp(0.5115136368784667);
    msg.setSource(46977U);
    msg.setSourceEntity(171U);
    msg.setDestination(41692U);
    msg.setDestinationEntity(5U);
    msg.op = 90U;
    msg.snapshot.assign("YALVNARLRVEEFYXUVSPYQLBSLATIBFWIHDYEVJGRBIDFOFXIUQMLFQSUYCVHPDNXSIWQSWGTXTMGSLNNMHYTOKSZKDIGBVGNYJWJHVWORMRKWZBKYUTBHRAZPPAWCIJKXHPAFNUHXATQPSXJAVBNZDFMGOLGQRGECUECQSPJMIOUDWZODUVEOXXYRAXPCQEETZZTRYNZ");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("RJADJKUMJBUZPOODMINHXOMLAGVYIEPWJZTPFVQRSYPDNQLTAECNDWSDBTXVTFDQTTNVOHKTNCUCBZSJQGPCAFDVHLLPVCLVHYIIAFBWJGYELEIVQGXKJKIESVOOKXRLQFESJKGUSUYEVRMNHUSKRBBHWHMEAJRFQXUMRWXKBHRXNC");
    tmp_msg_0.sensor_class.assign("XDNRGWAOXILKUYSHYUDALQCYYRQSAQPBJTOUBVMTNGQQXZCSVIXFJVEGOWGHDJVTRIPHBGTFUKUDEWIXCYGWXCXZPLUKBSWAQVQMPNSWKHOIZOZFAE");
    tmp_msg_0.lat = 0.7837634889308887;
    tmp_msg_0.lon = 0.2887584954797676;
    tmp_msg_0.alt = 0.41943694915601004;
    tmp_msg_0.heading = 0.8004824911264462;
    tmp_msg_0.data.assign("AYGFGZRRMXRVY");
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
    msg.setTimeStamp(0.8230737181301395);
    msg.setSource(25953U);
    msg.setSourceEntity(141U);
    msg.setDestination(16558U);
    msg.setDestinationEntity(176U);
    msg.op = 246U;
    msg.snapshot.assign("ZAOTCOJPJNYQATCNHBAENSLTVFSUJNCUXLROGOFUXUWNAKHGJHLJJMTYORJBIEKWMUYXPXEGPQSPPKQTVKCSVEDNMKOKOUZRMBQXQICUMCQYMSAVVROETNRXAZYJRQYGTAWSTHECZDYIAKJWIFFGUBRNWSLEFBDGZDQDQHLNVBAGYOWPZIPSLNFTABERLUUFVOFMXBHPLWVHWZICZYBHFDWHCVGGSWLDJMDLTIQXREXBSXDPDIF");
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.726896730884787;
    tmp_msg_0.amp = 0.5616212659381881;
    tmp_msg_0.cor = 104U;
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
    msg.setTimeStamp(0.7056226741541731);
    msg.setSource(22632U);
    msg.setSourceEntity(157U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(43U);
    msg.op = 220U;
    msg.name.assign("DDXAAEOSPCNUU");

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
    msg.setTimeStamp(0.7842082780126454);
    msg.setSource(38314U);
    msg.setSourceEntity(171U);
    msg.setDestination(3435U);
    msg.setDestinationEntity(69U);
    msg.op = 156U;
    msg.name.assign("WZIWWJPRXEDJMOERIWOUKGCCOZRTKJV");

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
    msg.setTimeStamp(0.9576684999921513);
    msg.setSource(63934U);
    msg.setSourceEntity(202U);
    msg.setDestination(35936U);
    msg.setDestinationEntity(38U);
    msg.op = 103U;
    msg.name.assign("PXJEWSTJGLMSQOMBDNUAFNNHLTBIRJGYEUPDMRWSGBXWXNINNMADRJPTLUDZOTUVZYKZCXVVCLOAHEEQEIQCGYNMTMNVDNIUVIYUCYPMHQBVBORHTCKVQFXRIHSOKBBQSXSCZJGDQBURATWWMFKXCSSZJSWAYCYGWJHPCL");

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
    msg.setTimeStamp(0.7465027004338546);
    msg.setSource(24060U);
    msg.setSourceEntity(236U);
    msg.setDestination(1580U);
    msg.setDestinationEntity(41U);
    msg.type = 108U;
    msg.htime = 0.6891726284862784;
    msg.context.assign("PEFTGYMXJSYPQBJXWKDIXOBQYNQRGRRDFAWXITXIFSDAMPYHZAYKBEBMVCHJDGZVWTLCCAUZLJXCEKYGQRHOKFPHFEOWAPRZTDXWWYJVDWMGMLQSLQFFTDVZIEMKUOSZQTGFQYAIMOHCVVNWTSYJQCMNUVSGDOURHUZUPGQNALPTJUTYJZBOLHNNOBAUOXXLPREKIICVBINNBKCWZVIWNFKURPCXSNLHR");
    msg.text.assign("VGQBWXHLGIOFMWRFIHVGQLIRNPBDREIQNPUSVEAOMXSSSEEOCJOCMICDQIKMVBBGJIPQWNKCJZOFATXHUZFNVMLYYELAJGFLQHBAAGSVKYBNOWMKYYXXFTLEUQDDRGFGONTPLVAAJDHJVKNPZMUEWIKDNYCUVJPTRWRZKSXUZBAJIEUMIYPSYCORCNYMTPTQVLLZFUWTZUKQSDRSDHCXNFFHMRQJREZWGDAAWOCBLUCTPKZ");

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
    msg.setTimeStamp(0.3558875718904845);
    msg.setSource(1830U);
    msg.setSourceEntity(101U);
    msg.setDestination(29432U);
    msg.setDestinationEntity(111U);
    msg.type = 173U;
    msg.htime = 0.9171997323292391;
    msg.context.assign("HEFNMHRFFCNDYGRVOGHAPSUKDKRPVDAHOYFIDNWYSYKVRQJXODVJBBUQEQVSENCTHNZWFAZQIYSDLKZXUBEZQKAUYYAGLTFPXEXVNIY");
    msg.text.assign("WWCGZBGSKLDYTNHTIQGNVHKQZBDSJLJFYPALDMSFMQNJCKXEMVZWUYJGNTSWUEXPBKXBTUCHSJZQURAXWCBXWRTJVSDFQFOOEKPYWEOLYFXCHNDEHTHLMICIICOQALZWELUIMMGJADFKANRTPSUKKAVASZVGJUGROKZ");

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
    msg.setTimeStamp(0.0027671874965198295);
    msg.setSource(44909U);
    msg.setSourceEntity(236U);
    msg.setDestination(24748U);
    msg.setDestinationEntity(33U);
    msg.type = 128U;
    msg.htime = 0.3489018214295808;
    msg.context.assign("HDIYVHWWARYITUFHFWDJNBUXXHGOCFMJZJFKIPYGVEFTWXMYHSZPHYOJWUFNLIHMPBXTTUDEDQVLLQJJALHXFMVECUBZWEIJLGCFPZJRAXACCMRBRKUCSOZLHVRTFHCGMPNSQDEASIROIOLKBVDTLNABYWEOGPTLGCLXKZNSRDVWUAQFSSRWAQTAEUKPSOXEXMCBOPGZXRONZGVSKDMUJKEZGNRCBQYZNWKYYKSBKYQITOMGDVQQPQMPANINDI");
    msg.text.assign("VEJCXLIOHGITVXDSDWGITPWFYTDPNBKCJDXZJWLHYZRFEPGVJNUQRFQYYDDNVDUWVWIKXMXHNVGXBGKZRUHGEJLMPUGOFASWBLDXNDOQSSEQUKMTJPANWWBJZUYKMVMMEPTBEHMLWNEZC");

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
    msg.setTimeStamp(0.4487378022582502);
    msg.setSource(56101U);
    msg.setSourceEntity(18U);
    msg.setDestination(14137U);
    msg.setDestinationEntity(23U);
    msg.command = 155U;
    msg.htime = 0.8374903309277051;

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
    msg.setTimeStamp(0.9673874405667485);
    msg.setSource(51730U);
    msg.setSourceEntity(151U);
    msg.setDestination(14155U);
    msg.setDestinationEntity(90U);
    msg.command = 50U;
    msg.htime = 0.24135223042276766;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 114U;
    tmp_msg_0.htime = 0.675878259059694;
    tmp_msg_0.context.assign("EACHCNTABIHIZWFKOTEEIGHPFKSPFMVJSZRTKAMWDE");
    tmp_msg_0.text.assign("QFTXROXBWBMKLFLIRGAYNBZRGSGLVEKNEZDKTAVVCWKTWPHAHMHDNBJFULJNLIWSQGUWJKYPYYJYZWKVFSTQRVSHZMGBNLVZUEEOFXJUAHMRPRBTYIGZDCSMVIUCKBIXIECQDNZBHFCMRYYPDISWMODRPOVGABTFGOGMWXSKAEFOSJLFVQAVXZCKJHWPOSECCPOTNRQCZERMYIPMLNWQPTQCOIXIDEZFHAQJDNJULKA");
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
    msg.setTimeStamp(0.8249360871894259);
    msg.setSource(64011U);
    msg.setSourceEntity(175U);
    msg.setDestination(2406U);
    msg.setDestinationEntity(131U);
    msg.command = 140U;
    msg.htime = 0.5886596905663137;

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
    msg.setTimeStamp(0.7781141715719835);
    msg.setSource(32924U);
    msg.setSourceEntity(113U);
    msg.setDestination(41578U);
    msg.setDestinationEntity(19U);
    msg.op = 52U;
    msg.file.assign("NYTCWKVIYIZKRKEBDFRRAMBLPJITFOFBVQKMXEOXSWQPOEUFLSVGBDWSXMVXKIFTDYNDICRIBJUCAXBZKRGDUWWVQAERDNMNKUAFPVNEAJQTJPMCQQPXJIVZEHHLSHCWYLMNNHHTSKJJBGFQNJCRZIPODOLOXBMHIYMPFSPQEUHTXBPSROLYAQDQGNVHSAUXDRGHCWNTZHXETOBUVRJLLZSUUAKYGJLACZMGGCZAWGDMPVSOY");

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
    msg.setTimeStamp(0.2372974267006731);
    msg.setSource(38538U);
    msg.setSourceEntity(15U);
    msg.setDestination(63107U);
    msg.setDestinationEntity(183U);
    msg.op = 184U;
    msg.file.assign("XWSBKZIZYNUVQHDCEFZTKQVLIGZLXGFAACKIOISYEHMRTSKEQYWREYWMWVEQFCPOUOFCSDUTDSLRITYKRHWDJUOQNJMVLSUMKDXHGONABUBXGBQJPNQNBXYOWWZJCAIRMIREFMXEDLLDMRAVPEGAOCBZYTNRZWCLHPPPHUBKNYHVLVXLCJSXCFIYSTYPKUOXTBAPRNTOIDMDHVQLJNHJDVUBFPQPFGGEUWTWFJE");

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
    msg.setTimeStamp(0.31301005160585316);
    msg.setSource(52094U);
    msg.setSourceEntity(234U);
    msg.setDestination(32274U);
    msg.setDestinationEntity(36U);
    msg.op = 170U;
    msg.file.assign("KACCZBPLFVOGWWDKDWJHYEEEGYDZMBIQOXGMJMHZI");

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
    msg.setTimeStamp(0.1966613223639634);
    msg.setSource(40674U);
    msg.setSourceEntity(212U);
    msg.setDestination(61461U);
    msg.setDestinationEntity(183U);
    msg.op = 187U;
    msg.clock = 0.04017542430976562;
    msg.tz = -46;

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
    msg.setTimeStamp(0.9684032806005703);
    msg.setSource(36865U);
    msg.setSourceEntity(165U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(122U);
    msg.op = 88U;
    msg.clock = 0.21755891654058201;
    msg.tz = 77;

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
    msg.setTimeStamp(0.16306318272162457);
    msg.setSource(54868U);
    msg.setSourceEntity(35U);
    msg.setDestination(40479U);
    msg.setDestinationEntity(13U);
    msg.op = 146U;
    msg.clock = 0.7044832852598352;
    msg.tz = 47;

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
    msg.setTimeStamp(0.18677364370912108);
    msg.setSource(16082U);
    msg.setSourceEntity(70U);
    msg.setDestination(52665U);
    msg.setDestinationEntity(193U);
    msg.conductivity = 0.23364805098242114;
    msg.temperature = 0.4085624501867977;
    msg.depth = 0.5325029856920291;

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
    msg.setTimeStamp(0.4083204305409459);
    msg.setSource(46080U);
    msg.setSourceEntity(141U);
    msg.setDestination(9265U);
    msg.setDestinationEntity(37U);
    msg.conductivity = 0.04369466588537674;
    msg.temperature = 0.1979786078356427;
    msg.depth = 0.2753470575161965;

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
    msg.setTimeStamp(0.9566543665037828);
    msg.setSource(8948U);
    msg.setSourceEntity(101U);
    msg.setDestination(26763U);
    msg.setDestinationEntity(243U);
    msg.conductivity = 0.4392803735448967;
    msg.temperature = 0.36650374698572175;
    msg.depth = 0.11039549524920522;

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
    msg.setTimeStamp(0.13775803270173104);
    msg.setSource(16579U);
    msg.setSourceEntity(253U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(2U);
    msg.altitude = 0.20622343403518528;
    msg.roll = 48995U;
    msg.pitch = 55257U;
    msg.yaw = 47386U;
    msg.speed = 13617;

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
    msg.setTimeStamp(0.2993724013449216);
    msg.setSource(28275U);
    msg.setSourceEntity(204U);
    msg.setDestination(59550U);
    msg.setDestinationEntity(87U);
    msg.altitude = 0.5083260914361337;
    msg.roll = 59861U;
    msg.pitch = 29379U;
    msg.yaw = 18578U;
    msg.speed = -18670;

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
    msg.setTimeStamp(0.6863824605183949);
    msg.setSource(63688U);
    msg.setSourceEntity(224U);
    msg.setDestination(23822U);
    msg.setDestinationEntity(200U);
    msg.altitude = 0.7716808688619601;
    msg.roll = 57025U;
    msg.pitch = 19967U;
    msg.yaw = 63189U;
    msg.speed = -28566;

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
    msg.setTimeStamp(0.4886474004424387);
    msg.setSource(27695U);
    msg.setSourceEntity(207U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(41U);
    msg.altitude = 0.3800893269529012;
    msg.width = 0.9112568123018923;
    msg.length = 0.0068751143800402925;
    msg.bearing = 0.2635252464864395;
    msg.pxl = -8379;
    msg.encoding = 42U;
    const char tmp_msg_0[] = {-88, 99, -60, 94, -93, -45, 80, 73, 3, 19, -94, -58, 113, -87, -9, 122, 95, 16, 0, -51, 4, -32, -41, 113, 103, 103, 15, 19, 124, 72, 58, 104, 36, -121, 99, -126, 77, -67, -126, 121, -32, -62, 57, -50, 110};
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
    msg.setTimeStamp(0.6423847647980682);
    msg.setSource(18319U);
    msg.setSourceEntity(46U);
    msg.setDestination(35443U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.32911045279809337;
    msg.width = 0.3345522129287267;
    msg.length = 0.8115573014696027;
    msg.bearing = 0.2599341830813017;
    msg.pxl = 25894;
    msg.encoding = 201U;
    const char tmp_msg_0[] = {-46, -63, -23, -98, 79, 78, -120, 14, 64, 103, 125, 110, 91, 49, -51, -52, -52, 68, -85, -103, 9, 3, -28, -1, 4, 28, 4, -22, -97, -83, 108, 16, 97, -107, 24, -123, 62, 15, -41, -22, 45, 50, 45, -99, 112, 17, -116, -57, 6, -31, 87, 102, -97, 115, 98, 79, 56, -114, -54, 42, -15, 90, -40, 70, -119, 117, 53, 4, 121, 40, 72, -60, 103, 13, 78, -25, 67, -62, 29, -102, -2, -115, 71, -110, -52, -103, 40, 89, 6, -34, 8, -4, -6, -124, 13, 66, 3, 122, -116, 63, 95, 31, -31, 124, -15, 75, -27, -69, 123, 56, 82, -118, -48, 78, 91, 46, 21, 76, -63, -37, -119, 7, -53, -82, -111, -126, 124, -4, 114, -17, 45, 112, -50, 22, 90, 126, -27, -128, -5, -100, -109, 103, 25, 69, 86, 27, 2};
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
    msg.setTimeStamp(0.6522132339798671);
    msg.setSource(14890U);
    msg.setSourceEntity(188U);
    msg.setDestination(27434U);
    msg.setDestinationEntity(247U);
    msg.altitude = 0.5482976700958538;
    msg.width = 0.6026394672446502;
    msg.length = 0.21392003107159252;
    msg.bearing = 0.44299904026189174;
    msg.pxl = 32237;
    msg.encoding = 225U;
    const char tmp_msg_0[] = {88, 126, 7, 63, 114, 60, 125, -4, -36, 22, -69, -58, -77, 121, 116, -29, -69, -7, 116, -2, 63, -12, 58, 102, 88, -125, -75, 57, -37, 25, -37, -107, 10, 14, -99, 20, -75, -86, 72, -125, 118, 60, -84, 86, -10, -120, 44, 20, 55, 39, -109, 103, 30, 12, 7, 73, -106, -88, -17, 66, 107, -22, 105, -29, 10, 40, 30, -85, -75, -29, -36, -114, 87, -30, -70, 125, -63, 81, -64, 71, 50, 106, 67, -65, 117, -26, 52, 121, -23, -52, 87, 100, -19, 119, 65, -124, -16, 57, -2, 63, -70, 53, 121, 108, -11, -62, -6, -120, 24, 53, -41, 106, 57};
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
    msg.setTimeStamp(0.9155004967042498);
    msg.setSource(38623U);
    msg.setSourceEntity(21U);
    msg.setDestination(49850U);
    msg.setDestinationEntity(109U);
    msg.text.assign("IEQPTYRRDEBFVKYJQHDOJAKGKQCAADLFDSGWAMCUUNMFCYVJFHLZFNBUZOZWSBNSRMHZPTGAXPVNXMFZJQDRTBRASLLCPWFGVVVYTIAGHYHZEEPTHIURKOJEIMJOOZXUKHLSPTTYWBMESFYUWGOJBEQVDOUKQZKANVOEWSTGWVLQXSMUQPDOTNPUAGZWJIPNVEDCJXFMLHOLCPSHDXHKXGBGRNCBRIKSKBMRIBYQDAFNNCCMW");
    msg.type = 0U;

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
    msg.setTimeStamp(0.009218016029567178);
    msg.setSource(12520U);
    msg.setSourceEntity(122U);
    msg.setDestination(63920U);
    msg.setDestinationEntity(228U);
    msg.text.assign("BCMWTPJCGNKGVCDIYATIEAEIFWRNJLWJIPGSQRSAHKHQDUAHGNTHTORUXQLYJFBGBNZNQJVYRUAIKQERRYPDYILDELQALLTYCPKMFBYOMBMXSTXGNKJJSOCSQOHODQUPUZLCWBPZZVCHTVIFRWPFVWAPGVXFFZWIUNKDUKRSYAWVEECZSEFBMYBXVDOGAKY");
    msg.type = 74U;

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
    msg.setTimeStamp(0.12160555808434415);
    msg.setSource(3875U);
    msg.setSourceEntity(116U);
    msg.setDestination(52347U);
    msg.setDestinationEntity(188U);
    msg.text.assign("VHUKSBNWXJFPCOAMGLQYLYBJSLXVEFSMDPBGGBINWXVTUTJQKRQBPNTUZAVTEUZHFXGFWHYXZNYRKPRVHQOYOOAC");
    msg.type = 195U;

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
    msg.setTimeStamp(0.4948599559460546);
    msg.setSource(31471U);
    msg.setSourceEntity(160U);
    msg.setDestination(19306U);
    msg.setDestinationEntity(195U);
    msg.parameter = 245U;
    msg.numsamples = 172U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 38836U;
    tmp_msg_0.avg = 0.44116710958395855;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9465582132133438;
    msg.lon = 0.2045737531006172;

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
    msg.setTimeStamp(0.9084356315136258);
    msg.setSource(34633U);
    msg.setSourceEntity(199U);
    msg.setDestination(17577U);
    msg.setDestinationEntity(39U);
    msg.parameter = 153U;
    msg.numsamples = 118U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 15115U;
    tmp_msg_0.avg = 0.8772253555864269;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7972331070895728;
    msg.lon = 0.7233373836813056;

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
    msg.setTimeStamp(0.6380565289756427);
    msg.setSource(25090U);
    msg.setSourceEntity(101U);
    msg.setDestination(22454U);
    msg.setDestinationEntity(228U);
    msg.parameter = 176U;
    msg.numsamples = 245U;
    msg.lat = 0.3829149326801061;
    msg.lon = 0.8390210228452772;

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
    msg.setTimeStamp(0.1400979141377945);
    msg.setSource(52599U);
    msg.setSourceEntity(59U);
    msg.setDestination(63201U);
    msg.setDestinationEntity(62U);
    msg.depth = 14652U;
    msg.avg = 0.014631514618842045;

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
    msg.setTimeStamp(0.7544457943537128);
    msg.setSource(24874U);
    msg.setSourceEntity(89U);
    msg.setDestination(53676U);
    msg.setDestinationEntity(239U);
    msg.depth = 15600U;
    msg.avg = 0.7693491206888032;

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
    msg.setTimeStamp(0.1179203189659882);
    msg.setSource(16530U);
    msg.setSourceEntity(214U);
    msg.setDestination(13183U);
    msg.setDestinationEntity(110U);
    msg.depth = 49019U;
    msg.avg = 0.8407635547664836;

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
    msg.setTimeStamp(0.1730721438307482);
    msg.setSource(65209U);
    msg.setSourceEntity(86U);
    msg.setDestination(15126U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.42058134016241566);
    msg.setSource(32966U);
    msg.setSourceEntity(117U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.9651999488566073);
    msg.setSource(34983U);
    msg.setSourceEntity(81U);
    msg.setDestination(43739U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.7935432826873631);
    msg.setSource(42444U);
    msg.setSourceEntity(78U);
    msg.setDestination(30501U);
    msg.setDestinationEntity(225U);
    msg.sys_name.assign("ENPYHAQGTQDZKZFFGIIATLVIDGWAYFWPOAPXNYLHURPPOWUIJFTRBCAQRFPWXKGGLMJUJVVMRBNKCRUHKOBHCFTYSYQZCYHYMSDCHRBJTUUSSURVQOYKIQJMQFWCQLZIWZDPTXNMAOEEAZXXQENMMICBAFBNVXOVSBNEJCJZECKNDDFNKE");
    msg.sys_type = 184U;
    msg.owner = 49448U;
    msg.lat = 0.9945865286423533;
    msg.lon = 0.05114787644970353;
    msg.height = 0.7422735239082429;
    msg.services.assign("OBWYOTHERVEQMPBTKNKKQHDHSQVGRKAXIGYZMAFMJLNWKUWXDMQFXPUHTJQPWDYGDIKCNOFBXDZVAHXSLSLSHANDGCEYYBRBPRXCHTWWGZNVBIZCSYIYUUNOMVSKVXJENIAVCGTSTDIFRULKCMENJDXLZAPSZOBWUACQYRLJHFGZJWXVDOKRPGGCYMNLIAQAFVKOOEUZTRCMBCITXNILFEPPOVQTGZQRBJMUPYJJDZ");

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
    msg.setTimeStamp(0.47021469295584184);
    msg.setSource(31310U);
    msg.setSourceEntity(136U);
    msg.setDestination(40812U);
    msg.setDestinationEntity(106U);
    msg.sys_name.assign("IZOTXXUYEZGSZBCDDYMYOGESAN");
    msg.sys_type = 242U;
    msg.owner = 48346U;
    msg.lat = 0.49619277493756464;
    msg.lon = 0.040631707520971005;
    msg.height = 0.23458163491877426;
    msg.services.assign("WADKIZVMFFIKCTPNGIIPNASHZCSMHIJTGEQKARTDHTKGPLDNIHEIORIXSJBUUSDURXVLXOZYGOKVO");

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
    msg.setTimeStamp(0.4469360049757446);
    msg.setSource(25197U);
    msg.setSourceEntity(111U);
    msg.setDestination(61405U);
    msg.setDestinationEntity(0U);
    msg.sys_name.assign("OBGPGYDRAFHIIKQBNNRWMJSRCBLLMTPVDVAVDDUPFSUMHPKXURKAJGWPOFCSZAGPBWTTMQQYGPCQFIFHNAJVULXPXSMJDIRJOZTBEUSHYNEFSJTEPLBEDWCIYNI");
    msg.sys_type = 81U;
    msg.owner = 63099U;
    msg.lat = 0.37658293794833486;
    msg.lon = 0.9711982503544835;
    msg.height = 0.8351910023576359;
    msg.services.assign("TTOMVRMORTZSSLCMEIMCXQYJVZSZMBBAKXGNMYNQFNCEBECGNFBVERDEDXPBSUGOWUSZUWLGKUQBYLAAJZGFJBOLRGONJGIEEETCWANKDQRVHLOOTPPHZCSMYHTJIKSDERJNFKIVOVPYWDKYPUVCPHQWNXUDRTXLSHOQTYBIZXXADLRKKJXJCMFLQFGSSIIUDRPAGZBBYPNGCWUNFIHFQAUVYIVFTJXQWMWDEZHKVDHFPHX");

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
    msg.setTimeStamp(0.3453114524592422);
    msg.setSource(21779U);
    msg.setSourceEntity(205U);
    msg.setDestination(13928U);
    msg.setDestinationEntity(239U);
    msg.service.assign("ZOQNQTXYVAGVULHTQFJXPGCCJWDRCLPPNPHZBHBIYWFEIBNZWHPIYKHYDOENIMLAXUJHFVBFZUDHRDZNGVQUGEGZFRTWUXVLOTOFJHFICQQKRGUXZBHUYMXHJJTPKTKQSXESRNLJATCZAIAAYQQDLBXPPKOLAWEFBWMAMSSVVORKCISKNLRYYYIRNEXV");
    msg.service_type = 82U;

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
    msg.setTimeStamp(0.4267039694012904);
    msg.setSource(3499U);
    msg.setSourceEntity(68U);
    msg.setDestination(15693U);
    msg.setDestinationEntity(132U);
    msg.service.assign("BCMQVVWGNMJDNKBJOZCVKYWTQHZZUYQPSYSBGKBHNFRLSYRQVJXIBCZUZTQALQNJPGCBMOMCAEPKCVONUZVTPPJEKOCHDATTSXAWHIWWPFAEFGLHYXNKIYCRAFLMBL");
    msg.service_type = 54U;

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
    msg.setTimeStamp(0.1362850010708997);
    msg.setSource(24328U);
    msg.setSourceEntity(150U);
    msg.setDestination(19671U);
    msg.setDestinationEntity(21U);
    msg.service.assign("LMWEUAJQBXRHPVIDZMGQURHJRBNYJSDSEWJSFPKOJTOPVCQDCAVRMGGHWLGWXRBHYENKJOZPEENIEOOIILUEWTQPEXIRASSMNYAIFDVOZVUUPGNHOLTBLKMGCKRKRFUWYQHUBFEACIHQNXZUJTBFALZPDVATPBFMQORWUZNKXFAVSGGNITEXTXKZFDMAQCKMCXLGYZYXYUSJLVBZYMSTVCTPOHGWFQBLNBQCICLPRWDJZYNMSDJKKDYSC");
    msg.service_type = 36U;

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
    msg.setTimeStamp(0.46056391293522414);
    msg.setSource(21469U);
    msg.setSourceEntity(175U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(254U);
    msg.value = 0.16292223730138233;

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
    msg.setTimeStamp(0.6864284882725331);
    msg.setSource(9825U);
    msg.setSourceEntity(53U);
    msg.setDestination(62051U);
    msg.setDestinationEntity(245U);
    msg.value = 0.40514139829436224;

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
    msg.setTimeStamp(0.013821857930587655);
    msg.setSource(28860U);
    msg.setSourceEntity(137U);
    msg.setDestination(34863U);
    msg.setDestinationEntity(186U);
    msg.value = 0.05954285159723427;

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
    msg.setTimeStamp(0.716785429894335);
    msg.setSource(60239U);
    msg.setSourceEntity(185U);
    msg.setDestination(49807U);
    msg.setDestinationEntity(241U);
    msg.value = 0.6556357902439046;

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
    msg.setTimeStamp(0.8263784839214449);
    msg.setSource(7669U);
    msg.setSourceEntity(248U);
    msg.setDestination(61689U);
    msg.setDestinationEntity(111U);
    msg.value = 0.03636814379909914;

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
    msg.setTimeStamp(0.27317801309423895);
    msg.setSource(65018U);
    msg.setSourceEntity(39U);
    msg.setDestination(8196U);
    msg.setDestinationEntity(79U);
    msg.value = 0.2914060038955609;

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
    msg.setTimeStamp(0.8441729123290884);
    msg.setSource(42517U);
    msg.setSourceEntity(86U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(107U);
    msg.value = 0.0007704312988725537;

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
    msg.setTimeStamp(0.9772641367768039);
    msg.setSource(29393U);
    msg.setSourceEntity(228U);
    msg.setDestination(1469U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9364297773974282;

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
    msg.setTimeStamp(0.0040021101634977185);
    msg.setSource(41642U);
    msg.setSourceEntity(168U);
    msg.setDestination(32225U);
    msg.setDestinationEntity(184U);
    msg.value = 0.7725925700529681;

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
    msg.setTimeStamp(0.022438814548706554);
    msg.setSource(53818U);
    msg.setSourceEntity(121U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(51U);
    msg.number.assign("AFTJYBCICSDUEVK");
    msg.timeout = 33295U;
    msg.contents.assign("SCIXDJOLFBPGEMKTIWCYXYZDOYYMSWAKGZVZOPLVUIQUREYERAXXFUBRKDIHEOZOUD");

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
    msg.setTimeStamp(0.24911178648647447);
    msg.setSource(5784U);
    msg.setSourceEntity(75U);
    msg.setDestination(2637U);
    msg.setDestinationEntity(51U);
    msg.number.assign("YLBSLWDNRDSDWVLMEWDIWYFGOBGXJHMNXIOCCTYCAQUBNGPUESGJDRXKEBGKEAQFFLWPXAHNIWJONEMXSJLHUHYYNRUHJXQIAHZZJQEPVEMZHHVMIIQKYRCMKWTXRCZDOLFVGPHVTLXSSZJLWITCBBUCVYQDTKOVJYJUQUI");
    msg.timeout = 44726U;
    msg.contents.assign("NFETZQMVPRQOZTAUZSORPHINKAGLFVXQFMATJDSIEMDXBEGLKYIVYOBTHPRCMOLYVJPUVBLFFFRCGTDWQULJEUTXGTUMODLMZIKOKWYLNWHWXWBZEGYNWDGXKYXBOXKRDYDSQPSCEKAPWWBIDOQAEUZVZQSAACEUHHRASCPLIHMVJTFWUJNGNPHOTHCGLKHOSLGNYMZYMISJZCK");

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
    msg.setTimeStamp(0.12771630369954823);
    msg.setSource(18480U);
    msg.setSourceEntity(236U);
    msg.setDestination(25338U);
    msg.setDestinationEntity(60U);
    msg.number.assign("OWNQCLRXPDSQIFWCFKASSZYVYVXZMXSAFHFIMUQSYAEMTKPXSNAEHLHXVZUYOTKUIRMJVLSOAAGYPDODZRQNNJYPMBUHOIUIYKHUZQXMMMVIEMINYCEHDACPCPVWJUENXFBJKXTGOGNJQVLPTGUXOFTJWLZGRBPPEMFCUWSENWCCDLAEGB");
    msg.timeout = 23330U;
    msg.contents.assign("TYTQNLHPMWNZBBHVYFMXQXIDBHQPMRRYNZAGVEKNIMPWWUIN");

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
    msg.setTimeStamp(0.5283066248244807);
    msg.setSource(65300U);
    msg.setSourceEntity(154U);
    msg.setDestination(18194U);
    msg.setDestinationEntity(220U);
    msg.seq = 189413040U;
    msg.destination.assign("LUHTNRMZGSNMXCDEBHOSWLOZQFDEBUDVUQYENFBEVMFNNGRZKPGTBOSWACXRPWCJGVIFKZZQOOEKLDTASIYBZTLGKXZFCEVLKBQSXZPYEHUCPIPPVDTLCOXDXVCHNFRQERPYBXSRDTNJQAQODRIIQECRRRJTTCAVHWSQMALJTWBHDFTMWAWHBYJUJOIHKNQHFKPXZILUUASKFALSWMJJXPUGGAYVPNKOYEMIMFYSVYXNJMUGGOYHJIMDLKWA");
    msg.timeout = 14491U;
    const char tmp_msg_0[] = {-20, 114, 68, 56, 15, 85, 124, -91, -3, 64, -45, -19, 113, -38, -48, 87, -109, 82, -98, 44, -113, -77, -107, 83, -124, 85, 32, 37, 115, 45, -62, 11, 13, -97, -82, -7, 47, 33, 116, -128, 75, 81, -69, -100, 118, -11, -120, -108, -123, 96, 86, 62, -13, -105, -102, -120, -123, -81, -24, -118, 105, -41, -11, -63, 35, 83, -126, 71, -93, -46, -122, 106, -109, 83, -23, 43, -79, 70, -81};
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
    msg.setTimeStamp(0.25964619964609525);
    msg.setSource(8786U);
    msg.setSourceEntity(130U);
    msg.setDestination(64859U);
    msg.setDestinationEntity(76U);
    msg.seq = 3935827296U;
    msg.destination.assign("LSVZGUILWQUAOUEKYUFOBNBRCAMHNPIJDEQXUQAUIKWGTRNCKB");
    msg.timeout = 6203U;
    const char tmp_msg_0[] = {-15, -19, -50, 123, 8, -70, -20, -101, 36, -43, -85, -3, 72, -13, 63, 96, -52, -89, 101, -79, 85, -1, 47, -104, -97, -3, 100, -90, -68, -34, 26, -99, 76, 104, -104, -20, 53, -126, 43, -90, -41, -97, 46, -104, 93, 5, 113, -17, 48, 2, -70, 83, -77, -48, 52, 107, 3, -68, 16, 120, 79, -103, -28, 2, 20, 102, -89, 0, 64, -44, -51, 118, 120, 58, -3, 126, 73, 35, 86, 7, 82, 115, 87, 88, 6, -89, -121, 17, -57, -111, 101, -94, -97, 77, -49, -85, 65, -1, 80, 1, 40, -84, 64, 91, -107, -54, -6, -115, -26, -53, 109, -126, 72, 61, -11, 93, 65, 125, 41};
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
    msg.setTimeStamp(0.8861794727488478);
    msg.setSource(29795U);
    msg.setSourceEntity(38U);
    msg.setDestination(24231U);
    msg.setDestinationEntity(33U);
    msg.seq = 4010943404U;
    msg.destination.assign("IYDJYWIEDGVIARRJATIJTEMXBEFJQFJCUUXSVUOBBEQCHHKGUUTBDOBATATCKGJPZUCIAYANHHNPIQEKNHNFQDXJLAKFZZXGLYUVYETWUCQOQTPCRVIMWTQMBMPUNGGRBLBKCNZLVMFYPOZVIEYVSLLLYIKRLPVFSR");
    msg.timeout = 3427U;
    const char tmp_msg_0[] = {-29, 10, -78, -53, -121, 110, 81, -44, -1, -92, 109, -2, -37, 109, -19, -92, -74, 28, 117, -3, -76, -14, -47, 44, 20, 22, 49, 92, -26, -126, -116, 1, 11, -116, 2, 56, -39, 48, 33, -59, -74, -78, -74, 69, 4, -14, -91, 26, 55, -19, 42, -68, -37, -67, -49, 52, -117, -6, -93, -3, 24, -111, -73, 56, -64, 113, 124, -92, 87, 37, -15, -74, -71, 116, -15, 119, 28, -58, -71, -46, 114, 11, -50, 27, 92, 8, -113, 115, -54, -97, -85, 101, -12, -100, -39, 94, -21, 37, -78, -121, 43, 111, -117, 10, 90, 69, 0, -98, -71, 83, 96, 101, 5, 12, -26, -82, 70, 13, -72, -112, 89, 87, 93, 61, 114, 62, 96, -62, -40, -123, 61, -92, -29, -15, -37, -35, 73, 99, -56, -111, -84, 103, -101, 56, 42, -18, 33, 111, -22, -74, -43, -59, -88, 16, -55, -121, 78, -34, 99, -35, 124, 90, -94, -118, 108, 123, -67, -68, -62, -109};
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
    msg.setTimeStamp(0.31765670824663594);
    msg.setSource(34600U);
    msg.setSourceEntity(136U);
    msg.setDestination(18790U);
    msg.setDestinationEntity(25U);
    msg.source.assign("OCWUJTPDYKUQKVIQUIJVGKUAXQMLCEBYUVJBSNQKNEMEWABRYRQNWLWNPSDURAYTDEOHWLIILTLUEFZFXBOMZGFDFKMEOHGPRQGDZKIRIJMROJRSSCWMRLWZHPJPIZPGAKXBSGNNXYVZWGTNCTCCKQBHHYQETLQTXFOMLSYTAWOFHFXTNBZZDMUFBDODIAACOLQSXUASGLVZIYJMHPNXJNTYEWEHUZJGRSOCPCCIXXYSKB");
    const char tmp_msg_0[] = {-114, -21, 86, -79, 28, -54, -27, -53, 96, 93, -87, -47, 23, 15, -9, -104, 33, -43, 114, -91, -31, -49, -59, 40, 94, -65, -92, -24, -82, 80, -113, -15, -15, 15, -72, 74, 124, 29, -30, 123, -126, -58, -33, 126, 96, 12, 37, 118, 40, -23, -14, 84, 105, -11, -68, 73, -72, 19, 62, 112, -66, 29, -48, -104, -78, 42, -76, 6, 96, -91, 108, 124, -27, -25, -42, 5, -7, 117, -116, -119, -31, -116, -83, 120, -122, -15, 43, 114};
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
    msg.setTimeStamp(0.840700276080831);
    msg.setSource(60277U);
    msg.setSourceEntity(146U);
    msg.setDestination(59202U);
    msg.setDestinationEntity(197U);
    msg.source.assign("RQORLSVYDGDYJXOXJLOEVFAGRCPIBOHFGJSNAWKHCJAVJAEKELKNXWKSUODICDBVJYZHUWOLNYQRKLMNVPIDWXSRFTZACKKZFAQMZUFQUXOTHVEYGPVGQTPOJZTMDZMIFSMIJWSBIHPVNGQLIPTBJX");
    const char tmp_msg_0[] = {37, 64, 4, 47, 109, 0, -90, -9, 90, 110, 69, 25, -7, -113, 105, -114, -29, 52, -83, -85, -126, 62, 90, 42, 25, -122, 93, -36, 23, 68, 52, 82, 78, -47, 23, 67, 56, -61, -44, 51, 10, 69, 84, 73, -74, 70, 63, 63, 100, 31, -78, -40, 62, 31, 51, 57, 46, -38, -95, 60, 120, 7, 48, 8, 107, 98, 56, 8, 100, 75, 21, -19, -75, -67, -96, -61, 14, -51, 104, 100, 96, 75, 80, -83, -108, 58, -56, 59};
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
    msg.setTimeStamp(0.5604016231092098);
    msg.setSource(56221U);
    msg.setSourceEntity(251U);
    msg.setDestination(39427U);
    msg.setDestinationEntity(81U);
    msg.source.assign("VRBHMOGRIBSFIMAKBHUNPLVOGZDWJLTTISHGOJIMEUQFNUZEKZMCEBSTWRPXRXBRHPLFFSTVAPGQUOVQLTXEFNPKOKOOAIDCCGBVXZCVJEVNLUKFQSZOPJDRDZRNUEJEHSXBGKNUFFMJAMJTBSMKQBSWXXYYAWFQJHGJRESWOUZXNLHKDGTYPIUNTLAQABHHWLHIPZTLXWMWDZKGOVSCUCGTPQ");
    const char tmp_msg_0[] = {78, 69, 56, -9, -39, 93, 90, 15, -50, 46, 13, 30, -35, 49, 15, 104, -43, 66, -1, -50, 63, -9, 4, 20, 91, 96};
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
    msg.setTimeStamp(0.3966335520412928);
    msg.setSource(7897U);
    msg.setSourceEntity(252U);
    msg.setDestination(36452U);
    msg.setDestinationEntity(197U);
    msg.seq = 1007073270U;
    msg.state = 45U;
    msg.error.assign("VHRLSLGQNWNKEXGPHREFKKWOIPTZBAIQOLGLIBKUQYMGCTQMOPLPELIXZKIOZVFRHJGJTTYEBYEMFEJYSVWAICMVRZNGIRQDXIPDK");

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
    msg.setTimeStamp(0.020251626829478897);
    msg.setSource(29160U);
    msg.setSourceEntity(195U);
    msg.setDestination(57369U);
    msg.setDestinationEntity(102U);
    msg.seq = 2085235464U;
    msg.state = 67U;
    msg.error.assign("HFBIAARRWI");

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
    msg.setTimeStamp(0.4362378027505378);
    msg.setSource(24857U);
    msg.setSourceEntity(189U);
    msg.setDestination(46891U);
    msg.setDestinationEntity(137U);
    msg.seq = 1127278589U;
    msg.state = 48U;
    msg.error.assign("CZMAZMEIOVFTFADGURASBXCDOSOUWCFMRBWMWCYDZVNYSDPEPSHSIDDBJJTAVZGGYHJKCMDSQBKKXLM");

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
    msg.setTimeStamp(0.8872454707297053);
    msg.setSource(57971U);
    msg.setSourceEntity(243U);
    msg.setDestination(50582U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("YERQXCMRNRBVEOBUBWHJURCHGKFRLNFEUPCGDYIWXIQHNWWQMSEGDCAMNHJKBFVEXXIKYBLTUKHROGNFPWETQVQGXPALKSLMEAHZGJWQZKGNZFKJFAUXEWTUBDLCVBJGQBNOPQAZWJSVYIIKSKIMACOIDVYVMUAWSJDOZMTYACEWVJOUAZOAJIYDXGQOB");
    msg.text.assign("MSCVGPYKXQSPJDHZNVECIGZSNUPOULKEGGUACFYDQNYNQQFIJJBFAPLGEIFSYHXOSKMJRUWTWQUNPRVICYLDBFQBICBMFMDAJSWZQTWILIRVHODZOKWAYPVBAEFJWUIVDPRLXHXZIVDRBNSTKWCKKGQJEBZEMJXELXWXBCMTFVUSDELZRRRTRLOKGEOYSAAYOPDOEAVHWCTOQZSU");

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
    msg.setTimeStamp(0.39740656337879254);
    msg.setSource(53633U);
    msg.setSourceEntity(7U);
    msg.setDestination(42489U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("FDSPSATTDKRKXENBCECPMLAAWGCTUBDDGXXZRZVOTKQCGZJVWURBBRJXYMVEJYUINVWOOL");
    msg.text.assign("PNVMSPTYHDFSJXHYRKQDSDPTRLOVRECFPUTTCLILGDIC");

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
    msg.setTimeStamp(0.2484561244791169);
    msg.setSource(38646U);
    msg.setSourceEntity(30U);
    msg.setDestination(29706U);
    msg.setDestinationEntity(90U);
    msg.origin.assign("KAIZMILUGXUQCLHSXVDCJFSCKNAUXBAVOMQANDFPGJYITRBXFZKNGWAHTIZHJOFYZXPMGUFNHTLHLAFWGSWMEQWUOKCMBZBUEPTNPKQMPVGRTNKXSINHYGEMBZMOJODORZEILFQQSPARPCFOKOLPYVQSLIZSZNXDVJUBTEQWIXUMC");
    msg.text.assign("MTDKAIMHLBFOOQLDFJZIDPEB");

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
    msg.setTimeStamp(0.8509759280423296);
    msg.setSource(19919U);
    msg.setSourceEntity(46U);
    msg.setDestination(23693U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("IOXTOAUKZYAAFGRTSPRBDFXWFLRPVNAOENVSOKUJHMWQBHITMHRGZMECJHTKOVCOOENQNE");
    msg.htime = 0.061123286940498955;
    msg.lat = 0.26079412004289304;
    msg.lon = 0.9919455255659888;
    const char tmp_msg_0[] = {98, -70, 11, 31, 93, 55, 53, 115, 111, -55, 70, -26, 31, -56, 47, 38, -68, -61, -70, -54, -110, 79, -48, -78, 9, -90, 42, -121, -4, -110, -113, 72, 64, 3, -13, -116, 0, 102, -108, -12, -58, 36, 110, -6, 30, -111, 125, 14, -88, 25, -40, 43, -66, 91, 126, -100, -45, -106, 78, -18, -40, -55, 60, -95, -29, 87, 106, -38, 40, -12, -73, 97, 81, 100, -94, -39, -116, 42, -16, 20, 120, -109, 91, -26, -103, -37, 123, -69, -88, -69, -20, 74, -115, 37, 26, -26, 77, -61, 22, -18, 81, 122, 67, 45, -54, -120, 86, 49, 80, 25, 68, -110, -115, -95, -1, 14, -46, 69, 56, 12, -56, -49, 114, 9, -41, 3, 76, 5, -23, -25, -125, -86};
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
    msg.setTimeStamp(0.22523799096667918);
    msg.setSource(41193U);
    msg.setSourceEntity(146U);
    msg.setDestination(1967U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("PHUVPZACZTCJCYWCYAKCQBMKKOBONBBATUSJKQZAUFLJZVDFNUWBUWGJDXWRGZLYPGATAHGOFMDOLCEERIQSDASKGZOXEOCAIEDEWRSMRWTJFXURSNHHXSYPUIXIFBFKYJTZGLOVLVILZRSBWTIPPLBDUDYSCVHGY");
    msg.htime = 0.9427412367749187;
    msg.lat = 0.35393987645090286;
    msg.lon = 0.8026473283104281;
    const char tmp_msg_0[] = {30, 121, 67, -70, 54, -83, 49, 55, 107, 87, 65, -123, -28, -47, -58, 26, 28, 33, 38, -92, -48, 119, 64, 86, 50, -120, 9, 6, -66, -84, -98, -22, -68, -57, 28, -69, 119, -125, -43, 22, 112, 28, 94, -101, 84, 124, -29, -8, 5, 47, 60, 1, 81, -9, -94, -103, 114, -39, 45, 120, 110, -68, 85, 87, 1, -90, -16, -16, -113, -109, 107, -127, 71, -17, -84, 24, 64, 125, -56, 76, 103, -61, 58, -79, -39, 85, -58, 93, -83, -22, -4, -55, 10, 52, -50, 36, -95, 39, -15, 100, 95, -80, 110, -79, -55, 70, -127, 83, 112, 91, -121, -106, -79, -47, 106, -117, 14, 113, 25, -114, -117, -87, -90, -54, 87, -62, -19, -90, 86, -29, -59, -57, 126, -122, -18, 80, -108, 122, 26, -21, -90, 90, -15, -80, 45, 3, 108, 113, 4, -37, -96, 83, 11, -61, 56, 61, -70, 94, 51, -4, 28, -63, -82, 115, 12, 27, 50, 104, 85, -44, 47, -44, -67, -110, 89, -32, 63, 116, 33, -72, -53, -24, -107, -44, -23, -89, 17, -11, 85, -62, 24, 18, 21, -28, -102, 56, 105, -61, -86, 55, 86, -20, -13, -21, 79, 126};
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
    msg.setTimeStamp(0.031754416778194905);
    msg.setSource(13347U);
    msg.setSourceEntity(190U);
    msg.setDestination(31211U);
    msg.setDestinationEntity(241U);
    msg.origin.assign("OHLJVCEOYNBWIWUZPDTJUHMNLPSUFGUGIDMSHKPBTSBSHDZODCILRNMVHFGQNZPBDYONEGBZLKDYCNWWDCJXRTVPOXRYFUEKJCGEKLWGARAVLWEGQGRFPSLBXVUFKQKISIAMDXEIBYFCEVORA");
    msg.htime = 0.538813106892214;
    msg.lat = 0.7321643436438875;
    msg.lon = 0.23435142125808017;
    const char tmp_msg_0[] = {3, 5, 52, 114, -44, 42, -47, -107, 101, 11, -10, 70, 81, 107, -21, 107, 77, -34, -125, 54, 125, 50, 115, -13, 41, -15, -38, 98, 44, -37, 21, -63, -49};
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
    msg.setTimeStamp(0.567906282809652);
    msg.setSource(46011U);
    msg.setSourceEntity(199U);
    msg.setDestination(7997U);
    msg.setDestinationEntity(188U);
    msg.req_id = 50146U;
    msg.ttl = 13577U;
    msg.destination.assign("DYBCGAQDXUXFQTTCVHPGAQFUWFGHYKYSTPWCIPSKMXLTNMIVBNNDBPSGUROEHCQQMQCISSHZFEGJBMGWTFGHTOCLRCKJKXIBWNJPABAYKWGAHWENYNRWZQKSIKZUZNPMIRXAEMOBOQXLJHMKYYLJXNYXBULOTPBERSQRIQSWIPWCJAVLUDDJKULCXSGZPHRDMVBKYOTFNVERFDVLAVAVJTZU");
    const char tmp_msg_0[] = {-54, -32, -34, -64, 94, 74, 24, 99, 7, 18, -15, -117, -9, 37, -79, 12, -43, 78, 2, -87, 17, -96, -2, 27, 120, -82, 51, -100, 45, -60, 66, 40, 60, 7, 114, -9, -55, -56, -72, 67, 69, -69, 46, 56, 59, 32, 104, -94, 41, 5, 108};
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
    msg.setTimeStamp(0.8987694872482485);
    msg.setSource(29836U);
    msg.setSourceEntity(186U);
    msg.setDestination(59205U);
    msg.setDestinationEntity(144U);
    msg.req_id = 22638U;
    msg.ttl = 15550U;
    msg.destination.assign("KVDCJQHTGIKOAOFTKDVZKIBLLSPKSBCAYKHNOUDOVTVZUTTRNOQCMZJZKIXWHCYZJDQXSZVMMPSUQLPIFEDYWMNMDQZRHXPZHRHSFLJWJQNCBQBNBNWAPYMWCBKVJDSUIBCUMHQBXIYXWKRAVEUGPPIGKQLNDTXHIGGFUCEXGXRASOVZCYVHDLARWFZSRTLTOPFXEJGWBOEYAWWEINJOGSOFMUFIE");
    const char tmp_msg_0[] = {83, -54, 20, 82, 74, -28, 60, -13, -76, 48, -89, -41, -88, -97, 42, -110, 38, 12, 17, 25, 23, 95, 72, -120, 45, 12, -77, -66, -74, -90, -92, -15, -55, 18, -60, -16, 30, 17, 66, -25, 2, -13, -98, 69, -88, -84, 57, -97, 76, 79, -92, 59, -86, 62, 116, -29, -79, -36, 25, -110, 122, 44, 91, 34, -23, 83, 101, -59, 12, 95, -19, 12, -30, -12, -39, 39, -56, 42, -42, -70, -53, 10, 22, 62, -27, 120, 122, -17, -85, -37, 67, 40, 24, 85, -16, 3, 94, 26, 9, -29, -66, 115, 23, 119, 57, 114, 98, 68, -111, -108, 14, -42, 17, 27, 124, -74, -60, -12, -56, 100, 69, -86, 79, -100, -17, -105, -55, -122, -51, 69, 125, -28, 88, -29, 101, -9, 16, -125, 44, 43, -76, 12, 4, -40, -73, -59, -39, -97, -19, 126, 95, 5, -10};
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
    msg.setTimeStamp(0.013015768651077564);
    msg.setSource(30741U);
    msg.setSourceEntity(153U);
    msg.setDestination(59311U);
    msg.setDestinationEntity(175U);
    msg.req_id = 56498U;
    msg.ttl = 8308U;
    msg.destination.assign("EEQMLGVMWLNCQGDCVWIFHJAWOCIUXFSJIXAAYUHJRXYQDLGMNTTSTQUIP");
    const char tmp_msg_0[] = {-104, -5, 61, -126, 16, -9, -1, 82, -61, 76, -56, -20, 90, 53, -85, 38, -17, 63, -109, 119, 113, -77, 11, -102, -3, -88, 57, 112, -32, 19, -20, 108, 47, -33, -122, -90, -14, 65, 61, -28, -122, 90, 14, 52, 82, 48, -33, 6, -91, -121, -25, -15, -9, 9, 13, 49, 103, 45, -119, -84};
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
    msg.setTimeStamp(0.19207848240302772);
    msg.setSource(59818U);
    msg.setSourceEntity(192U);
    msg.setDestination(24629U);
    msg.setDestinationEntity(110U);
    msg.req_id = 17510U;
    msg.status = 203U;
    msg.text.assign("TQGTXJBRUCPRSYVVCKLDFOGHLIENBPUIWJFBESCBZGNHTGSDNFNCOJTZIRSQLNVRXUOBYOPXHQESZGKMJJUAIZHMSXLMGMMQJXIBKWRFMRVLWCHMEPAFNUKATZEFMXXVQIWMDTLPUQRSGFADOBYHQILODIKHJFETLWKGGHCYYPLZEWCZPVNCEMBKXTSJTQYVEFYOIVBWLFDKOAWVIR");

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
    msg.setTimeStamp(0.7544864540910422);
    msg.setSource(19792U);
    msg.setSourceEntity(68U);
    msg.setDestination(3138U);
    msg.setDestinationEntity(155U);
    msg.req_id = 13397U;
    msg.status = 172U;
    msg.text.assign("GIBVWKHLSRDWZJHYOYUJTYSRNFTYBWEOBMXLHJBKDOZWA");

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
    msg.setTimeStamp(0.27524455950879434);
    msg.setSource(9991U);
    msg.setSourceEntity(237U);
    msg.setDestination(11456U);
    msg.setDestinationEntity(45U);
    msg.req_id = 44582U;
    msg.status = 38U;
    msg.text.assign("SDGOGYABQONJVLEQNKRUJUHTGKTSDCXMGNOKHIJWWWFFRIUTLDAPLNHZEJFCHFVTTECDMCNKEAPVVLPBPVVBXNLRAOWQBTKXZUKLASMKHSEEBFRRZWFTQMLNIBPAZAMOTSHYDSXXCGVYQXIFELFWZRCKMFMCYHQWVCYJILR");

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
    msg.setTimeStamp(0.8787103479093696);
    msg.setSource(26918U);
    msg.setSourceEntity(47U);
    msg.setDestination(61690U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("VKKLHKNQTBDBPLQHKDQVFASYCDIMVMWUWTFGXMVULYCENCDHOFWTAOBBMXNRJUAGBRKAWM");
    msg.links = 4179859620U;

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
    msg.setTimeStamp(0.16929872536711743);
    msg.setSource(46016U);
    msg.setSourceEntity(25U);
    msg.setDestination(60862U);
    msg.setDestinationEntity(86U);
    msg.group_name.assign("SHNRQXTGILTRAHHDCVPOYTTZUNYKCPFYSJVBXBNACHZKWSUIORMELKGWHDSKMUYMMYJUQALDFBVFWXIOYNVPHZPCQUWWLJTWHFITNCGOZPSIKBQCVVLTEZJEDRNEKBJYAGZLRAQUZDVAMXOGYFCHUG");
    msg.links = 2457852785U;

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
    msg.setTimeStamp(0.2895393035574626);
    msg.setSource(38157U);
    msg.setSourceEntity(211U);
    msg.setDestination(56484U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("KXLHFANLRDAKJIJORZOIKCWMAACZUQZIEIWGSDKKKFNCMUKFNPGIWPFPHBTGYXDMTVG");
    msg.links = 2478354924U;

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
    msg.setTimeStamp(0.19062116735480028);
    msg.setSource(50659U);
    msg.setSourceEntity(27U);
    msg.setDestination(37256U);
    msg.setDestinationEntity(10U);
    msg.groupname.assign("IXSRAEVNYGFGFLAXIGOHPCUXQKHDNRCSVOMWXOTLFBBQRFYBUASDZAOZXWULFRUUCCYETFLMGNJDLZPSHQSYJIIBKYOHBYUUTKOMPGLFZKVASNOGQMPTKGOEBPJLFWLRLNMQLDXEZAUMTMBAEWZYCRGMEZOEDAUPITKKQHQTB");
    msg.action = 131U;
    msg.grouplist.assign("EJCXXVNALRUGBFCAIBRZQENTFMXWDZAJLOYSXIRYTCXKBZDCPLYOIFLJHKTMLOQZCOVFHPBDKSLYBZEODSSWEEBBZLOHQWTPUPTNPWXGUBIGNYVYXKELKJJWWHSQFQWOAREQRNXRGMZIWSKNZARHVDAQVURNYULUMFFDTUGLTJSO");

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
    msg.setTimeStamp(0.6463625875897885);
    msg.setSource(55067U);
    msg.setSourceEntity(139U);
    msg.setDestination(56219U);
    msg.setDestinationEntity(243U);
    msg.groupname.assign("VZEQSSTSBNLIHDKXEAAISXXZQRQKEOEKOYZYCBUDILJGLNGQFMUTUYROKKGVHYVSFBFJNMNIINCOGGVXWFVJTUCCBHZEPBXNLAJANDMHKTXKEVPCFBHAHPLJGDMMZABSDVHAMUHIQJBDQAERYWYCBGTSLWILUMYWZZGGBLOYUVUMOKWOQSLTEXTQTNPPPJXFQIDZPJTLINWCF");
    msg.action = 48U;
    msg.grouplist.assign("FLMNTQPJDBCESHGNYLLEYUMEUHJNQPEQXWXJUKBUAQRHKVOGLKMDJVZVIOHSMKWKCPWFTFUJUCTYHLXYZIXDUPFJSEAWWLDYUZXSRXWJDXXGLBLPBATFSXSHAEARDKRZBCSTEMYOZRNIKNANONMOGDAPCGRIDCGVSRIJKVZVNLQ");

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
    msg.setTimeStamp(0.45468315205210386);
    msg.setSource(28195U);
    msg.setSourceEntity(171U);
    msg.setDestination(39620U);
    msg.setDestinationEntity(21U);
    msg.groupname.assign("DORZBWHCLOJVMHMVHXAGVGWGZPCSSKJLLFKOIPINAK");
    msg.action = 247U;
    msg.grouplist.assign("YHRBYZTFZZKURGPKWUPALMALHGSZXUIDAPOVTYLTRZGLGJCFVQKKMEQQTKHYOOQCWFWIYJASZPFZE");

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
    msg.setTimeStamp(0.9718997459143749);
    msg.setSource(65409U);
    msg.setSourceEntity(85U);
    msg.setDestination(32011U);
    msg.setDestinationEntity(58U);
    msg.value = 0.22642911951259626;
    msg.sys_src = 22778U;

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
    msg.setTimeStamp(0.3147696165906445);
    msg.setSource(37658U);
    msg.setSourceEntity(76U);
    msg.setDestination(49051U);
    msg.setDestinationEntity(210U);
    msg.value = 0.37616193663101116;
    msg.sys_src = 52852U;

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
    msg.setTimeStamp(0.007741067253357992);
    msg.setSource(43650U);
    msg.setSourceEntity(245U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(173U);
    msg.value = 0.16795459854250316;
    msg.sys_src = 3105U;

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
    msg.setTimeStamp(0.11785090237713347);
    msg.setSource(16241U);
    msg.setSourceEntity(143U);
    msg.setDestination(23065U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8730383644629063;
    msg.units = 175U;

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
    msg.setTimeStamp(0.6769501659189495);
    msg.setSource(38933U);
    msg.setSourceEntity(3U);
    msg.setDestination(33270U);
    msg.setDestinationEntity(235U);
    msg.value = 0.8344144300716195;
    msg.units = 124U;

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
    msg.setTimeStamp(0.9613519641822561);
    msg.setSource(1768U);
    msg.setSourceEntity(24U);
    msg.setDestination(7529U);
    msg.setDestinationEntity(223U);
    msg.value = 0.06639172902555412;
    msg.units = 8U;

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
    msg.setTimeStamp(0.17306652557296365);
    msg.setSource(61001U);
    msg.setSourceEntity(155U);
    msg.setDestination(52353U);
    msg.setDestinationEntity(2U);
    msg.base_lat = 0.5619665195632869;
    msg.base_lon = 0.39745872189072107;
    msg.base_time = 0.6217103280206572;

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
    msg.setTimeStamp(0.8888162468698266);
    msg.setSource(57441U);
    msg.setSourceEntity(148U);
    msg.setDestination(62659U);
    msg.setDestinationEntity(243U);
    msg.base_lat = 0.09299491093647672;
    msg.base_lon = 0.47965665874401286;
    msg.base_time = 0.6989257493687441;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 61342U;
    tmp_msg_0.priority = 3;
    tmp_msg_0.x = 31504;
    tmp_msg_0.y = -3869;
    tmp_msg_0.z = -21473;
    tmp_msg_0.t = -14344;
    IMC::Depth tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6027839488004471;
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
    msg.setTimeStamp(0.38491450944793104);
    msg.setSource(11211U);
    msg.setSourceEntity(82U);
    msg.setDestination(22223U);
    msg.setDestinationEntity(95U);
    msg.base_lat = 0.2118312946281875;
    msg.base_lon = 0.9780233063347726;
    msg.base_time = 0.7884368473152736;

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
    msg.setTimeStamp(0.25821300759979315);
    msg.setSource(15268U);
    msg.setSourceEntity(110U);
    msg.setDestination(62269U);
    msg.setDestinationEntity(217U);
    msg.base_lat = 0.36223156764372333;
    msg.base_lon = 0.4045482607256513;
    msg.base_time = 0.18171285558452244;
    const char tmp_msg_0[] = {-51, -112, 39, -83, -5, 2, -67, 120, -112, -108, 99, -7, -21, 67, -27, -8, 30, -33, -70, 107, -64, 108, 89, -79, 10, -30, -19, 43, 18, -98, 63, 7, 112, 29, 4, -77, -119, -83, -106, -40, -22, 25, 63, -40, 110, 118, 74, -102, -27, 3, 32, 85, 2, -48, -70, -7, 85, 76, 33, 113, -95, 41, -84, 52, -74, 50, -18, 14, -34, -48, -19, 105, -80, -46, 81, -79, -58, 42, -121, 29, -88, -118, -77, -51, 76, 4, -104, -37, 63, -50, 16, 55, -118, -4, -32, 104, -33, 62, -42, 10, -25, 50, 72, -115, -72, 110, 43, -57, 62, -75, -9, -28, -119, -110, -62, 126, 70, -23, 38, 4, -50, -100, -62, -117, 80};
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
    msg.setTimeStamp(0.9759556967731214);
    msg.setSource(5430U);
    msg.setSourceEntity(61U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(109U);
    msg.base_lat = 0.6616879065210937;
    msg.base_lon = 0.8526239622328707;
    msg.base_time = 0.2231860709043264;
    const char tmp_msg_0[] = {-1, -29, 78, -75, -75, 66, 61, 121, 10, 108, -26, -28, 50, 11, 91, 107, -25, -13, 5, 25, -72, 52, -102, -126, -7, 51, 57, 8, 40, 29};
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
    msg.setTimeStamp(0.6730104432785858);
    msg.setSource(52926U);
    msg.setSourceEntity(27U);
    msg.setDestination(18032U);
    msg.setDestinationEntity(27U);
    msg.base_lat = 0.40692099526482783;
    msg.base_lon = 0.9221395214904634;
    msg.base_time = 0.5650078197053158;
    const char tmp_msg_0[] = {-48, -42, 46, 96, 97, 10, 30, 77, -60, -23, 16, -71, 70, 84, -84, 77, 91, -127, -52, 28, -26, 71, 122, 118, 120, -46, -20, 67, -77, 114, 17, 121, -107, -91, -15, -27, -72, 102, 125, 72, -77, -68, 26, 13, 3, -53, 42, -97, -19, -87, -114, -67, 72, -47, 43, -67, -32, -8, -91, -34, 52, 78, -5, -52, 0, 42, -116, -4, -125, 52, 87, -28, -50, 92, 119, 115, -47, 13, -24, -93, -69, -83, -12, -122, 17, 75, 6, -38, -67, 22, 32, -41, 15, 90, 113, 122, 42, -60, 94, 109, 120, 75, 126, 80, -35, -54, 61, -18, 68, 81, -92, 65, 85, -54, -104, 8, 124, 56, 81, -125};
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
    msg.setTimeStamp(0.24847419860581943);
    msg.setSource(41897U);
    msg.setSourceEntity(139U);
    msg.setDestination(13200U);
    msg.setDestinationEntity(222U);
    msg.sys_id = 29449U;
    msg.priority = 64;
    msg.x = 19123;
    msg.y = -22653;
    msg.z = -4057;
    msg.t = -7767;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 3883U;
    tmp_msg_0.lat = 0.28340609937973615;
    tmp_msg_0.lon = 0.7222470776874855;
    tmp_msg_0.speed = 0.5341089176234571;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.custom.assign("XQOLQLFMSBBYWPPCVSVINYDAUIBWTUKAEZMISZWWHDMXESKQAVVOGURIILBZKHSNJQYPKSFANGRKGQIXWCRHOHTFHWARBEDXESFOTBNVZWIRUKADXCHEZYFJWWGGUNEMTZUVGXZZATN");
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
    msg.setTimeStamp(0.4208982940558893);
    msg.setSource(57875U);
    msg.setSourceEntity(1U);
    msg.setDestination(54234U);
    msg.setDestinationEntity(145U);
    msg.sys_id = 17944U;
    msg.priority = -86;
    msg.x = 418;
    msg.y = -21636;
    msg.z = -26705;
    msg.t = -27459;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.32238565272576714;
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
    msg.setTimeStamp(0.9821061027009615);
    msg.setSource(61202U);
    msg.setSourceEntity(193U);
    msg.setDestination(12726U);
    msg.setDestinationEntity(170U);
    msg.sys_id = 30836U;
    msg.priority = -76;
    msg.x = -1467;
    msg.y = -17666;
    msg.z = -23307;
    msg.t = 4265;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.995965882534477;
    tmp_msg_0.x = 0.5262426934625013;
    tmp_msg_0.y = 0.30621117843090107;
    tmp_msg_0.z = 0.9880915270697952;
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
    msg.setTimeStamp(0.9501628542274665);
    msg.setSource(60665U);
    msg.setSourceEntity(229U);
    msg.setDestination(3287U);
    msg.setDestinationEntity(33U);
    msg.req_id = 38295U;
    msg.type = 100U;
    msg.max_size = 13103U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3070175167471362;
    tmp_msg_0.base_lon = 0.607525033698573;
    tmp_msg_0.base_time = 0.15051894934143906;
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
    msg.setTimeStamp(0.2934776056921581);
    msg.setSource(19750U);
    msg.setSourceEntity(244U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(140U);
    msg.req_id = 18909U;
    msg.type = 11U;
    msg.max_size = 53227U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9181245831923487;
    tmp_msg_0.base_lon = 0.20790362289577613;
    tmp_msg_0.base_time = 0.7717974031417463;
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
    msg.setTimeStamp(0.7116000862493239);
    msg.setSource(37457U);
    msg.setSourceEntity(239U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(112U);
    msg.req_id = 25407U;
    msg.type = 68U;
    msg.max_size = 56185U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5933496832188963;
    tmp_msg_0.base_lon = 0.5569798382523322;
    tmp_msg_0.base_time = 0.43354045081516956;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 26287U;
    tmp_tmp_msg_0_0.destination = 1280U;
    tmp_tmp_msg_0_0.timeout = 0.22398869617875028;
    IMC::Distance tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.validity = 208U;
    IMC::DeviceState tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.9055309015240397;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.9731693104015108;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.6858795630234303;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.phi = 0.6733213673758985;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.theta = 0.3172203508252628;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.psi = 0.10324744309793721;
    tmp_tmp_tmp_msg_0_0_0.location.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::BeamConfig tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.beam_width = 0.6880153877445029;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.beam_height = 0.5718540374113326;
    tmp_tmp_tmp_msg_0_0_0.beam_config.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.value = 0.8660264164337107;
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
    msg.setTimeStamp(0.062362427319566316);
    msg.setSource(63461U);
    msg.setSourceEntity(51U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(155U);
    msg.original_source = 64998U;
    msg.destination = 57671U;
    msg.timeout = 0.9792055637126446;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 45585U;
    tmp_msg_0.lat = 0.570064966128467;
    tmp_msg_0.lon = 0.1715760725951756;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.z = 0.014671803781309056;
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
    msg.setTimeStamp(0.941726421135178);
    msg.setSource(26029U);
    msg.setSourceEntity(10U);
    msg.setDestination(26420U);
    msg.setDestinationEntity(28U);
    msg.original_source = 56788U;
    msg.destination = 4092U;
    msg.timeout = 0.28909360820117036;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 208U;
    tmp_msg_0.longain = 0.2641356596080756;
    tmp_msg_0.latgain = 0.14777113620661952;
    tmp_msg_0.bondthick = 503653102U;
    tmp_msg_0.leadgain = 0.4010644121835326;
    tmp_msg_0.deconflgain = 0.23216529521000218;
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
    msg.setTimeStamp(0.6741386861515536);
    msg.setSource(30298U);
    msg.setSourceEntity(187U);
    msg.setDestination(26549U);
    msg.setDestinationEntity(16U);
    msg.original_source = 35542U;
    msg.destination = 42732U;
    msg.timeout = 0.28105465730850787;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.732910652936808;
    tmp_msg_0.lon = 0.501963756272165;
    tmp_msg_0.z = 0.5072883284425638;
    tmp_msg_0.z_units = 33U;
    tmp_msg_0.radius = 0.8400650462806107;
    tmp_msg_0.duration = 869U;
    tmp_msg_0.speed = 0.991683767010443;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.popup_period = 57589U;
    tmp_msg_0.popup_duration = 21113U;
    tmp_msg_0.flags = 115U;
    tmp_msg_0.custom.assign("JUZOPMFFLKXIXCDWTBEXHCPLAUARDYHNINORBZDJYEOWSKEURNZTYYFIYRMYTNGCUKCZGIHUVIRUUVQPWHNOMJFQYJVTCQASDRIZCBELFZTGGQXDWSKSQWP");
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
    msg.setTimeStamp(0.5029446645949647);
    msg.setSource(44432U);
    msg.setSourceEntity(197U);
    msg.setDestination(9958U);
    msg.setDestinationEntity(107U);
    msg.type = 65U;
    msg.comm_interface = 42969U;
    msg.model = 62866U;
    msg.list.assign("EHLQOXNEYEKGVWSMDGB");

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
    msg.setTimeStamp(0.28505236106123244);
    msg.setSource(32233U);
    msg.setSourceEntity(38U);
    msg.setDestination(36277U);
    msg.setDestinationEntity(131U);
    msg.type = 121U;
    msg.comm_interface = 30320U;
    msg.model = 28391U;
    msg.list.assign("XCDLMCSMWVPEDSTNRVBKLVVJWIRMZVEIBOAGEROYOIKPFRWD");

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
    msg.setTimeStamp(0.4000493031902046);
    msg.setSource(50978U);
    msg.setSourceEntity(244U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(24U);
    msg.type = 236U;
    msg.comm_interface = 18616U;
    msg.model = 54783U;
    msg.list.assign("RLYWSZQQLCIQNVPJVWDRWSTDHDZRYNCXNDWEYEPYGCULZHLNNADSQZTECJPSMXIIXEWKDSPYWMRDMFENLGBDILYOUNGMAYUFJUHZBJIFXUTBRKJRABJQAAPIOZBMHVFOVKEIMWFBLVTJBVOAWIRUISRDVPSFTZEGSEGKFKSKMBYQJHXHTRICAZVTULDUCQOAKFQOC");

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
    msg.setTimeStamp(0.17270100333134075);
    msg.setSource(21393U);
    msg.setSourceEntity(150U);
    msg.setDestination(25257U);
    msg.setDestinationEntity(84U);
    msg.type = 125U;
    msg.req_id = 3453374025U;
    msg.ttl = 26507U;
    msg.code = 77U;
    msg.destination.assign("ISVZKHMEFQGGZMCNWAKFORWOTJIISLCTQZTSSVSEKXMEDGEDNPTZZZXGKLTXBCJLRBVRXJEEACPAOCNNOEWFAUYBTYVDOMFZWHCSNUMQXFTZMZGVGGBRZAIVRYGHASCEXLXTBKNJYUYFLXLQRIGTKPQSODGUBWSAVUHXLMUPUDEPRELWOUDYFKPHHPCDDJCUHDQKQBOWRYAMCJBIXWYHQJFLOYNHIQWIJKWBHSAJIVRVFFJNPNPRAO");
    msg.source.assign("NFSYTLVGKBRDIDSPEGXCMDQQAJNGIMHHUREDJUDRNIZEZWRAOKNPZGKFDOCMHPOLZXJVBZAOAUYYRQMLSQROUJFKFJXYJBFYAIYVYNLKFNIMRUKKECCZBWJWEWTBUSLWBIVBNPSXPVGOFTOUQKXZASHTMMTHIHVGYHCKEJHWQCFTFLQDVUEGHEQPAVGSLCXNWSIDBISIYRTCZLXVTWTYNQSPDKWAPGRFAG");
    msg.acknowledge = 164U;
    msg.status = 124U;
    const char tmp_msg_0[] = {-36, -37, 52, 32, -16, 4, 21, 49, 0, 112, -48, -53};
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
    msg.setTimeStamp(0.6082066104281781);
    msg.setSource(31729U);
    msg.setSourceEntity(158U);
    msg.setDestination(14497U);
    msg.setDestinationEntity(7U);
    msg.type = 169U;
    msg.req_id = 2999417015U;
    msg.ttl = 48379U;
    msg.code = 203U;
    msg.destination.assign("DVXIVTRPNLAGLSIRSALWZNRKWGXOXYXBATSVYSERSTWZZCEVHNGMWJVUPVFAENYDIPZJDTHUCNORXAKCL");
    msg.source.assign("ZDDFWQTVKDLJLSYYGGYBIARMOIFAGWVBBCZYEHANYVLMLABNOBCAQDMIOIPGSVHSEWFVCOOSAWGTUJXBAFXVTXXUZHUKYBCUHBAXBELCODHPKDQMURTYYNNIDQFSINROXUEWOULYKQHPDKXIEJWMJZGMJXPVMYCLLRJCQSRGLRSRVAEUNTNPEZNTIZERWNHNZQKITXKQOVCKSHPSFVFPOGKAZDXWJE");
    msg.acknowledge = 165U;
    msg.status = 72U;
    const char tmp_msg_0[] = {80, 108, -59, 99, 6, -42, -26, 1, 119, 122, -11, 89, 40, -105, -15, -38, 48, -56, -80, 10, -10, 58, -52, -62, 123, 74, 74, 46, 65, -69, 73, -69, 122, 56, 54, -31, 75, -6, 53, 85, -125, -44, -30, -118, -20, -114, -18, 117, -123, -28, -26, 89, 37, 40, -60, 105, 77, -20, -16, -13, 29, -3, -8, 19, 113, 21, 84, 21, -7, -126, 107, 99, 107, 101, -106, -2, 65, -65, -8, -107, -121, 35, 27, 104, 62, -82, 16, -37, -39, -122, 98, -105, 7, 16, 51, 14, -78, 110};
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
    msg.setTimeStamp(0.1272599118947313);
    msg.setSource(61552U);
    msg.setSourceEntity(174U);
    msg.setDestination(63662U);
    msg.setDestinationEntity(225U);
    msg.type = 98U;
    msg.req_id = 3646791025U;
    msg.ttl = 41156U;
    msg.code = 78U;
    msg.destination.assign("DOZTPIGIBZUVCJIGJFQRBPQCPNZLKNTWOWFXZSPFPODMSSRITMCDXWXLEYQAHHGEZZSUQUQNFLKOPWFEHJQLJVJUFOEEZNSSKXAJNCWHOPNSMAXWDBFLMUORHYHVCWLIYBRHCLJB");
    msg.source.assign("PSQEOBQNWMJZULXWENQLHPXFAAYIUFCZBCDBYMMIICBEMSQSCMIMRZXOGSLCXKEEFEDDNTSQEJHPKXNINKGZEMUOT");
    msg.acknowledge = 106U;
    msg.status = 21U;
    const char tmp_msg_0[] = {31, -94, 105, 7, 8, 65, -48, -90, -55, 64, 12, -86, -16, -71, -36, 82, -30, -27, 27, 55, -16, 2, 32, -57, -39, -63, 41, 44, -111, -54, 79, 16, 48, -26, 75, -110, -73, 13, 60, 10, -79, -16, -128, -32, -84, -93, 21, -8, 74, -100, 106, 81, -42, 63, 15, 12, -20, -45, -50, 96, -8, 78, 38, -35, 45, 54, -71, -116, 0, 78, 98, 100, 77, -93, 37, -91, -40, 81, 9, 55, 36, -46, -54, 98, -124, -75, 4, -126, 53, 57, 8, -92, 55, 22, -3, 104, -39, 2, -57, -66, 58, -13, -100, 40, 37, -91, -19, -115, 53, -21, -106, -68, 19, 95, 48, -86, 113, -52, 35, 68, -112, -18, 63, -67, -115, -39, 99, 23, 50, 116, 82, -34, 81, -103, 126, 64, -106, -64, 95, -79, -68, -42, 85, -25, 41, 2, -52, 53, -38, 50, 52, -9, 25, -119, -99, 124, 34, 61, 51, 88, -56, -48, -45, 70, -36, 59, -87, 28, 59, 5, 65, 113, -68, -27, -25, -69, 6, 44, -119, -89, -105, 21, -58, 13, 86, 41, -92, -79, 23, 116, -102, -15, -121, 78, -88};
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
    msg.setTimeStamp(0.7696885844104999);
    msg.setSource(40577U);
    msg.setSourceEntity(242U);
    msg.setDestination(13226U);
    msg.setDestinationEntity(35U);
    msg.id = 204U;
    msg.range = 0.4429492836154545;

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
    msg.setTimeStamp(0.45904320030758317);
    msg.setSource(36898U);
    msg.setSourceEntity(145U);
    msg.setDestination(30304U);
    msg.setDestinationEntity(87U);
    msg.id = 149U;
    msg.range = 0.9445339222461229;

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
    msg.setTimeStamp(0.8109356583424666);
    msg.setSource(52155U);
    msg.setSourceEntity(175U);
    msg.setDestination(14228U);
    msg.setDestinationEntity(26U);
    msg.id = 243U;
    msg.range = 0.09361247235242431;

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
    msg.setTimeStamp(0.8021275091800152);
    msg.setSource(52654U);
    msg.setSourceEntity(251U);
    msg.setDestination(15530U);
    msg.setDestinationEntity(124U);
    msg.beacon.assign("PLRKDRZTVPYXCGSAZKECPPRGCONBKPMETILMIAPWQOHCZQWUUTQBZRNQCVFFKSSETXUGETPEMWBDWKVLOAEPRSWBMX");
    msg.lat = 0.28926568586371204;
    msg.lon = 0.5730124263054048;
    msg.depth = 0.63347148481472;
    msg.query_channel = 26U;
    msg.reply_channel = 251U;
    msg.transponder_delay = 104U;

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
    msg.setTimeStamp(0.1657944024476642);
    msg.setSource(12494U);
    msg.setSourceEntity(249U);
    msg.setDestination(35400U);
    msg.setDestinationEntity(42U);
    msg.beacon.assign("XYUWNUWZBFWJHKGEEENPHZDUQUOTFWYUWWTKANJJZRKFYTWDGRB");
    msg.lat = 0.6254425155549114;
    msg.lon = 0.9389418781926071;
    msg.depth = 0.8606986498857144;
    msg.query_channel = 101U;
    msg.reply_channel = 73U;
    msg.transponder_delay = 55U;

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
    msg.setTimeStamp(0.040209280323031504);
    msg.setSource(41779U);
    msg.setSourceEntity(203U);
    msg.setDestination(41586U);
    msg.setDestinationEntity(59U);
    msg.beacon.assign("AULXGMKNUSJVUWZ");
    msg.lat = 0.35888060796423527;
    msg.lon = 0.12704575111845717;
    msg.depth = 0.7731904372028834;
    msg.query_channel = 204U;
    msg.reply_channel = 10U;
    msg.transponder_delay = 199U;

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
    msg.setTimeStamp(0.9267647200416883);
    msg.setSource(63174U);
    msg.setSourceEntity(231U);
    msg.setDestination(7841U);
    msg.setDestinationEntity(89U);
    msg.op = 22U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OWMDPUQQCSCSFAKJVYLLNHONSTOSESJUIYHANQSARMPYKKGFMRRGHZUDJEPWYOIIVJFUXEKLWQGASGEEMUXVRYIWBHLFDUUKVAIZVDXGNVQYRLHKFJEIAYHGNLQDGTEFVVPCXWUQHJRKTTBVAWNTZDAMPBZ");
    tmp_msg_0.lat = 0.7316104655126953;
    tmp_msg_0.lon = 0.48859980632566613;
    tmp_msg_0.depth = 0.2675483701637048;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 159U;
    tmp_msg_0.transponder_delay = 150U;
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
    msg.setTimeStamp(0.9948951524436435);
    msg.setSource(46897U);
    msg.setSourceEntity(16U);
    msg.setDestination(19906U);
    msg.setDestinationEntity(134U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.31873001079927077);
    msg.setSource(63870U);
    msg.setSourceEntity(241U);
    msg.setDestination(44757U);
    msg.setDestinationEntity(188U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.8991249123945199);
    msg.setSource(50690U);
    msg.setSourceEntity(232U);
    msg.setDestination(21064U);
    msg.setDestinationEntity(72U);
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YDXUPBQOBJLTLPOAZEBQGVLUWCSOXXTNBIGKGFHXUNQMDDCCTLKPHPEWQDOPKAULYKRFJKCSWEVTMHFGOKUVJBOWLZZUFUNIEXOHNCQIDMAYYCDIZSVNGXVOWZKRZTRTXIJUFSHROGGQBQBNVWYEJC");
    tmp_msg_0.value.assign("OTICJLHXRTLCUP");
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
    msg.setTimeStamp(0.164403686845501);
    msg.setSource(27768U);
    msg.setSourceEntity(166U);
    msg.setDestination(58967U);
    msg.setDestinationEntity(146U);
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 22781U;
    tmp_msg_0.lat = 0.04324528867194943;
    tmp_msg_0.lon = 0.6034987494233077;
    tmp_msg_0.z = 0.38719670755141933;
    tmp_msg_0.z_units = 174U;
    tmp_msg_0.speed = 0.8753823211169157;
    tmp_msg_0.speed_units = 228U;
    tmp_msg_0.custom.assign("BPYRQJCPXUSAZWHICPKKMECEWISLD");
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
    msg.setTimeStamp(0.9592861336526971);
    msg.setSource(33409U);
    msg.setSourceEntity(68U);
    msg.setDestination(21649U);
    msg.setDestinationEntity(151U);
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.11736582918077643;
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
    msg.setTimeStamp(0.175335038485659);
    msg.setSource(31528U);
    msg.setSourceEntity(69U);
    msg.setDestination(61061U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.03084526347843053;
    msg.lon = 0.13540598076090204;
    msg.depth = 0.7300125231128511;
    msg.sentence.assign("PIBPRDECMYNXOIONRUUMDFZBKOIWKIRECFQACXIHH");
    msg.txtime = 0.6820259289721251;
    msg.modem_type.assign("FDTPWBBIHZXKZNILSBJFVLXLXMNAAYTOQSHRRAIOUYTDQVBMRUKEWQBSNPBWHVKJSUTQQIJYRGVONPURVKWJQCK");
    msg.sys_src.assign("OWETNUKYHHPOAHZLMPUAYVKRDPBETKDPOFXEGWMWINLRQGRNXRMIBKVODJZHAACFIBRQMPFLSZUYRVDUODASDVKWGS");
    msg.seq = 23885U;
    msg.sys_dst.assign("MWFWEYWIOHJZYIOUDXTEKMWWHYALTSXMCVFOQVLALSUMHONCQQQDGPXQGFMJZLRIDZFWJBRXWDX");
    msg.flags = 23U;
    const char tmp_msg_0[] = {-85, 54, 18, -91, 91, -87, 85, -95, -37, 52, 113, -27, 82, 102, -9, -11, 47, -72, 95, 33, 74, -82, 62, 62, 11, -28, -43, -83, -87, -120, 80, 16, -100, -105, -33, -104, 114, 31, -50, 34, -17, -57, 96, 93, 9, -81, -111, -94, 53, 24, -75, -43, 101, -109, 118, -108, 82, 67, 85, -30, -1, -105, 86, 85, 65, 45, -66, -123, -110, 46, 100, -72, -12, 63, -77, 42, 74, -90, 84, 87, -56, -60, 24, 44, -115, 70, 3, -100, 59, 76, -123, -51, -47, 17, 124, 117, 5, 112, 105, -81, -102, 65, -99, -66, 92, -105, 25, -16, 88, -119, -31, -100, -86, -87, -111, -8, 76, 120, 106, 112, -46, 74, 51, -96, 113, -78, 80, -53, -109, 44, -9, 111, 104, 58, 34, -30, -14, -122, 69, -14, 59, 26, -118, 110, 50, 124, 45, 108, -46, -128, 68, -80, -99, -96, 21, -14, -59, 88, 8, -14, 36, -33, -13, -39, -7, -118, 13, 89, 61, -51, -14, 105, 64, -40, 121, 81, 17, 119, -52, -65, -55, -93, -96, -94, 32, 24, -98, -82, -84, 11, -75, 20, 14, -23};
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
    msg.setTimeStamp(0.767069311126236);
    msg.setSource(52501U);
    msg.setSourceEntity(37U);
    msg.setDestination(16747U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.007489392654372873;
    msg.lon = 0.31503534828042346;
    msg.depth = 0.5899773548982528;
    msg.sentence.assign("RKWEIKXJYDQAFYLPMKFCWSZZQYYZZPXLNUFUTPHGQBKAERAGFBVATTFLTCGHVCEAMGRUNONCSWSKLCZJMJRLQIEVCSUBONOSDFYVCSRGPJAHGZZEEKPOSDUHHNSYXJHPBRXPAMDMYTGVPYMQNWGHHTEYXBAULRDLJEQMWTUWJIRQXNGKZKYDJBJUSLCRBGLODXVEVKJTMBPDEDIVXFKBIZUCWWVTIPQFWMFXQL");
    msg.txtime = 0.44396344200914506;
    msg.modem_type.assign("ANPGHDBSMIKMICHZCFJIYZBJPMVOXWPWYSZDJQHRSCSVJJCWKBEEHCVUEDFUQQPTDXSSXOHOTRYATACSDSXOINLEUAPRVHSUNFMKWOKVYOADEBHQAYXMZUDNQCMXET");
    msg.sys_src.assign("KGHDJUWZNMBRQDQXQRXEXMIOOZHIUDFWVOTEHVLNURYUQYZKLPZFEFQQGBTAVDRISLZHACLOKZTHUFXKACYCEHJVGJBKPTAAGBGGMAJWJYADRYDQWXDDHFWROLBSRPHUKZILTNAPDDOMXLSTYSVKOVQCIJPMOSVCHVF");
    msg.seq = 28929U;
    msg.sys_dst.assign("QLDJAICDOXISYAPVXSXJEJPLYQDUTKCRPQYFXIFKOKNMPHSUGBVCBYWNVKPCRLJDAGDUYODARNRBBFMXQKFGNBDCUGSWLHGWNLJSOOXEOKDRLEHAZCSZFVQPOLYJJQZIZTQAMNSZPEIODHTFQWYSJSZTVHHMTWGB");
    msg.flags = 50U;
    const char tmp_msg_0[] = {61, 11, -52, 6, -8, -122, -82, 0, -125, 0, 121, 13, -48, -126, 122, -127, -99, 37, 22, -33, 81, -112, -55, 100, 49, -53, -71, -12, 18, -67, 29, 84, -108, -50, -42, -126, 81, 36, -104, 54, -17, -9, 120, 100, 27, -100, 100, -59, 124, 77, 114, 120, 36, -101, -68, -76, 39, -75, 0, -96, 110, 110, -82, 29, -112, -73, -41, -91, -20, -81, -67, -123, -82, 37, -30, -67, 118, -109, 62, -117, -28, 9, -8, -94, -37, 89, 56, -28, -114, -100, 20, 27, -111, 72, -127, -105, 36, -84, -43, -76, 66, -114, 37, -19, 67};
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
    msg.setTimeStamp(0.48725295513524347);
    msg.setSource(57739U);
    msg.setSourceEntity(159U);
    msg.setDestination(9173U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.7998195675624313;
    msg.lon = 0.3963959453361763;
    msg.depth = 0.6257482818061395;
    msg.sentence.assign("JKCBPWUJFLYNOWISCALDKTDMOQDXDNHTKUGCJSIKZVALFYNVMHQEWEHISPDJMBJWAJYFNZSWDSYWQLIGRMRRVEFZIOBGTAOIOKNOGBCZHKRZLHMAEZRBWWINCIDPFPUXUSMRAJQVURSAYZFQMCXULTWNPAFZLEQWGOFFTSQHNPHSCTMBTEYUHJJUCCTRNOIOPVEGQHDSGFHJXTQPGXVIRVOKULVNZKAPXYVCLEXEYBEK");
    msg.txtime = 0.08722941199755663;
    msg.modem_type.assign("WNTCPPVOMUSGTCNABPXHPVQUNMDAEHYMVJYPYNDWKIFFRUZXSKZTTBXUQZOJGLQQTERXLCRRNMAMFZKALCLELIREFRLUOSPBLCTSXWRDXNKZGKUOXMHBLBBIAGHCDZVBMGDKYJMOEZXVFDGIKEGRZDVEZHFJOZEYBFHOLRYRTNKGA");
    msg.sys_src.assign("RPGRNOIKNTSSHZBVYLQXMLQDYYLMJZEFDNSEXHJXLWYGMQCQUFHMKNMFCVZIYOAYREGVURCJCWHGKNIWGJIDUMBJDBAJOQGDTPUJTFTVWBEWUYLNZPTCVOUVZMHSUDJXIVNBXSLSABTJCTEEZAQFTAZTZRLFFWUQSNZHRYEODKX");
    msg.seq = 63201U;
    msg.sys_dst.assign("VMNWRZGPALYLERHNOHGOVOVCWDWBOSBWXYQCEXNYXFJATLYHUTZXGALZBYBWFJTSVDCSLKJEVLSGUPTLMACVUNNUFIZCYPXUIUTVIBEQOMSJXONPGHEPRBYDPPLXPDJTAJTTMRVHUBHRDDLOQCDZAFEDRLFARMQWGMNOZQEQMWRKPCEJJDZFJFHMYGZFQIMKKSIUHXWWJXSIGEYIIATZONKQRKVCNQHDFBABSTX");
    msg.flags = 5U;
    const char tmp_msg_0[] = {96, 36, 10, -30, 75, 83, 118, 112, 60, 114, 5, -11, -77, 112, -69, -91, 21, -93, -88, 95, 37, 118, 79, -105, -34, -52, 82, 113, -75, -122, -24, 58, 31, 88, 118, -98, 115, -23, 100, -109, 14, -108, -115, 102, 51, -39, 63, 33, 16, -114, -72, 15, 21, -110, -99, 42, 26, -26, 3, -80, 7, 126, 47, 119, -1, -117, 104, 118, -41, -18, -65, -98, 43, -27, -27, -76, 42};
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
    msg.setTimeStamp(0.3862162653620611);
    msg.setSource(9054U);
    msg.setSourceEntity(162U);
    msg.setDestination(32201U);
    msg.setDestinationEntity(149U);
    msg.op = 162U;
    msg.system.assign("UGFFVZJWBYKEJNBBINKQAWMSOUYYYXEMTOANBQGTGWXFOCPRVGZRHTVZHTJIXJJEBYJHPIUTCWGJAVLWEFRKGEPQEOGUODYKCEMTKQQDA");
    msg.range = 0.8900290388264791;
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.13030845819123016;
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
    msg.setTimeStamp(0.45516186794426217);
    msg.setSource(52876U);
    msg.setSourceEntity(201U);
    msg.setDestination(33394U);
    msg.setDestinationEntity(152U);
    msg.op = 31U;
    msg.system.assign("AOGJXBMAONHGNPQAXUMSHZKMOSGORECHTRUUSKQIWPSWJAXYQVKZRLLFQODTZQUNHMNSZFACPBDGACBYWKHYKSJRMXIAEYUXE");
    msg.range = 0.747453821637578;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("CNVPNCSADEGFEOGWRJCOVOLJQNUHTQJSOYDVJJRQUNABCBTBGYMIUZRHQYHARVAGUWCACYSOTTNXCORQRICDIPMFQFRZWXXKAKIU");
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
    msg.setTimeStamp(0.24193653672704973);
    msg.setSource(40440U);
    msg.setSourceEntity(185U);
    msg.setDestination(60175U);
    msg.setDestinationEntity(31U);
    msg.op = 239U;
    msg.system.assign("TYGILSSYHIZNLAWTKDGDILCNWEZEUZMQUQOKFHNCWQEIBMCALJGENQKVUXSJHJVEFRIWEUBGPFTRROOYXAPBEYHSLKWYJMTKAXNEIGTKPFMJBFZKLVVLINJKGSAYQOCEAETNFHCNTYAWOOHOTYGXXNUHPXKDWJPLVQGQSVRXXPDKDRJWUTUSH");
    msg.range = 0.9151111884146953;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 151U;
    tmp_msg_0.eta = 15911U;
    tmp_msg_0.info.assign("BKIRURFJNHYETQZDZSLMVAEQMALFZSYSOBRBCC");
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
    msg.setTimeStamp(0.8659368685590938);
    msg.setSource(30077U);
    msg.setSourceEntity(53U);
    msg.setDestination(64582U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.04933973032909322);
    msg.setSource(42321U);
    msg.setSourceEntity(236U);
    msg.setDestination(37124U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.3103834668998384);
    msg.setSource(46902U);
    msg.setSourceEntity(48U);
    msg.setDestination(62544U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.030245553274002468);
    msg.setSource(13723U);
    msg.setSourceEntity(31U);
    msg.setDestination(58920U);
    msg.setDestinationEntity(216U);
    msg.list.assign("HVPDOFESTDYESKSGRQLJDBALJOYNALKWTSRIUUNURHORLTEMBNKTBVJFNTVTNVQXIGIVCOQUEYIXMEIGBYCNXKJOVPHPEGHYVQFDAWBTXHYOFRVEUXCIEJUIKNHCPKDQLOLXOUZRLKXQGGJVWMWXPPIOZATSPWMGYGODPUYDKHSQHUQIZDKTBYFQQKFNZWUJMLDBDHJSRRCZXAPGZFHWT");

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
    msg.setTimeStamp(0.7193941231150612);
    msg.setSource(40570U);
    msg.setSourceEntity(120U);
    msg.setDestination(54886U);
    msg.setDestinationEntity(121U);
    msg.list.assign("QWUNKWGFNRAERNFRJAOQKCNPPCIQKOHQWJXCOHYXYTEOVKPDDPUMSHXLEDAYTYSXEXSPBSQTOVISQUIRVGTLNCXPKFSLKDLOAEHIEZZMCVDZRLBMNALNGJKPOBBYWUKTNFSTQVZEXFVGOQGCMKTLHRIQUMHUJAIIZBZUJDFWYUZWCITBZRBDXSGXLYIACNOWJMFCWPWBLGTZHCNAVAFGMYMYHTVHWGMZJGDVSJQUXERJPRK");

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
    msg.setTimeStamp(0.403032259010074);
    msg.setSource(7128U);
    msg.setSourceEntity(16U);
    msg.setDestination(52099U);
    msg.setDestinationEntity(192U);
    msg.list.assign("WSGGXPACNXOVCLDTJREWDDIFZJWTMMYVTUTXNHOBDUYQPWVUDGOLINPSRKSZCQPENIMAPEZYXUOYNNWBVNQELHBFSKWXQRTQFNQVDSSVTBQXKLFEZSMYAEDAIRGJNCVKYLCKLFFFXKNCUGYRHWOATYZCHSHHRHWMPEABUUPZUJPJBKZTOKXTLYSBHIREZHXIKVSIJTFQBJX");

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
    msg.setTimeStamp(0.9939887847805684);
    msg.setSource(37474U);
    msg.setSourceEntity(201U);
    msg.setDestination(25701U);
    msg.setDestinationEntity(162U);
    msg.peer.assign("HQEVATVKGEGQREITMGTJSBSZCHFIONAWVUODAZETSCBRHFNFAVYUUOWQXLILCIRXLTSKYOFAPUIXKTDMZGZQECIDVEPLLWIVJPNBYLYDYJSOKMGFAGJVYIDZRLPQHJXO");
    msg.rssi = 0.9660345907476621;
    msg.integrity = 44753U;

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
    msg.setTimeStamp(0.1100652457842497);
    msg.setSource(7672U);
    msg.setSourceEntity(222U);
    msg.setDestination(39781U);
    msg.setDestinationEntity(60U);
    msg.peer.assign("VIAFLRCMUZNMLHLODAXNWBWHKNGKITLKMURRYPJIVYKYHCOAOFDIBGRCGIGJJODQEQEQVKJXZHCPQDQIUJRSOEUKHJMELCFNVEPFZYFLOTFLWTRBZSGBDMWYWHOUJJYDXXQUDZAEMHXHSPGPGNBKAAPDGFFXTSVZVDNLUEMSCCGMCIRRIIWUVZSBLWSFNTOXVKNFQHPEKORAZEYDLTWYAQBTWMTPBVYUHPRJBKUWZAXCSZBOSXQTINNT");
    msg.rssi = 0.9269924689183449;
    msg.integrity = 65049U;

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
    msg.setTimeStamp(0.9437516013472803);
    msg.setSource(50032U);
    msg.setSourceEntity(78U);
    msg.setDestination(27429U);
    msg.setDestinationEntity(24U);
    msg.peer.assign("IMQMKQLJKRQNDPTNLBRFYIDYWKITXDKNURXXMUNVBMCVHONLAWOSORUFVGBQWITHIUCOTCXTGSADHXD");
    msg.rssi = 0.9271865988305802;
    msg.integrity = 7580U;

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
    msg.setTimeStamp(0.7329979611751674);
    msg.setSource(47168U);
    msg.setSourceEntity(118U);
    msg.setDestination(42626U);
    msg.setDestinationEntity(239U);
    msg.req_id = 17737U;
    msg.destination.assign("PFCPRMOYLHKDRQXQOILHVOMRHSSKSFXUQIEDCQUCISEYCJIRHBYFHXBMZLXUZJPCWRYLVSFTQYNEEOGPTNGADLBEECINBRKXGLSOXXTQOYCBTFYGPQVDJNMANDBTVOWNOKHYAE");
    msg.timeout = 0.11004948533752978;
    msg.range = 0.891607092490592;
    msg.type = 43U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.34528666547339615;
    tmp_msg_0.y = 0.8219003892499522;
    tmp_msg_0.z = 0.3931600683455432;
    tmp_msg_0.phi = 0.2271028732170315;
    tmp_msg_0.theta = 0.10993503719030984;
    tmp_msg_0.psi = 0.2276174135257618;
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
    msg.setTimeStamp(0.17200837598844754);
    msg.setSource(30028U);
    msg.setSourceEntity(122U);
    msg.setDestination(30701U);
    msg.setDestinationEntity(13U);
    msg.req_id = 58018U;
    msg.destination.assign("LVAQZWEUVHOZGGDLQXWBUYAXFKFJCPPDMVZRBSIMWNSIEWOJWCKCRCMJJQDIPGCYWFXVNVIDYXXTZLUDSVQYDBBTASIGMFELQPKSWPEFHIUFVAEORTQZDPTWODDMUHKRCZKYTNEOZIGXMHBLYRNNTUXVGJPCLBOVRPGIKOHFRRCCYTAYLGGCHPLQMQKMFLNWHIAYUKSFKGFHAJAZTJ");
    msg.timeout = 0.2274174259090258;
    msg.range = 0.9747276749923296;
    msg.type = 126U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.08111725450668605;
    tmp_msg_0.y = 0.6040614484222274;
    tmp_msg_0.z = 0.2705806143272187;
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
    msg.setTimeStamp(0.14815328787097637);
    msg.setSource(27466U);
    msg.setSourceEntity(178U);
    msg.setDestination(56527U);
    msg.setDestinationEntity(69U);
    msg.req_id = 40368U;
    msg.destination.assign("FTLKUHBIAVXBEUEXBTZNHCLOOBSLWEPLGTUGYCWWQUZRDXMTXGDGQQIZGYVQPGDMCEJOYJEMQSKAOJAZPRURHPJRVXVQENKHNPQTMHRDLALOTPKOISWFOEUFNCJKDFOJANWZHHPCTTFCNHKVOWBVBIFNHLGIEAVRWRIWCKPVCXTDMYDYDMJMYYFSIZAWBPVKYMIUCQLMKRYGULSKNLGVSFQOJBRDXU");
    msg.timeout = 0.36801218926504764;
    msg.range = 0.09126341238059965;
    msg.type = 230U;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53006U;
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
    msg.setTimeStamp(0.09344467361020614);
    msg.setSource(44714U);
    msg.setSourceEntity(52U);
    msg.setDestination(29309U);
    msg.setDestinationEntity(29U);
    msg.req_id = 26174U;
    msg.type = 84U;
    msg.status = 214U;
    msg.info.assign("MJJQJFEZZVLVFMIMLDHTUECPIWIPHPFLQJQSYEAXKFBRRYGWITG");
    msg.range = 0.08175316859610515;

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
    msg.setTimeStamp(0.5484762726838448);
    msg.setSource(57468U);
    msg.setSourceEntity(234U);
    msg.setDestination(16451U);
    msg.setDestinationEntity(195U);
    msg.req_id = 55294U;
    msg.type = 116U;
    msg.status = 110U;
    msg.info.assign("WKGADISYTLRGDNHLXUUYLVAWJJEHXDWXYMRGBLRKASLEKJVQUZVUSOJFUGFLGIUNJIQUFMYQVHQZQJJPPKZUOLSHDYAXMUTVSCSWOCVHIP");
    msg.range = 0.3324355656902742;

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
    msg.setTimeStamp(0.9932361044903035);
    msg.setSource(12745U);
    msg.setSourceEntity(96U);
    msg.setDestination(58156U);
    msg.setDestinationEntity(95U);
    msg.req_id = 56560U;
    msg.type = 15U;
    msg.status = 32U;
    msg.info.assign("QXAMGRADNRXOLYWPTODHKPOAQULUVZVLQFBMOGBVDOGUSIDHQHHBGEXWDQBXYTEVLESYTPGCIWFJTKUJGOFKMVGSAQJNYXJRQBASDDCFCRNCLCIMTQVVAPTLSMBAOXRFZXZBRUWWGPLMCJQDTHNGJCTUXPJITWSFEZJNFANAATEUFXPOZICKUIKKMJMYZYRKWUBIHYSQSMEPMLEEHBNNWRVVIHJ");
    msg.range = 0.8876972996914361;

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
    msg.setTimeStamp(0.9109629141469273);
    msg.setSource(33695U);
    msg.setSourceEntity(30U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(106U);
    msg.value = -5653;

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
    msg.setTimeStamp(0.8901754588396887);
    msg.setSource(10767U);
    msg.setSourceEntity(67U);
    msg.setDestination(16485U);
    msg.setDestinationEntity(111U);
    msg.value = -24167;

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
    msg.setTimeStamp(0.009331477736365001);
    msg.setSource(53408U);
    msg.setSourceEntity(59U);
    msg.setDestination(37985U);
    msg.setDestinationEntity(73U);
    msg.value = 24269;

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
    msg.setTimeStamp(0.18710788290156033);
    msg.setSource(42733U);
    msg.setSourceEntity(127U);
    msg.setDestination(36947U);
    msg.setDestinationEntity(242U);
    msg.value = 0.8967020419857564;

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
    msg.setTimeStamp(0.9888367434407926);
    msg.setSource(42816U);
    msg.setSourceEntity(133U);
    msg.setDestination(28207U);
    msg.setDestinationEntity(35U);
    msg.value = 0.7212096132503198;

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
    msg.setTimeStamp(0.8215547937336345);
    msg.setSource(10523U);
    msg.setSourceEntity(198U);
    msg.setDestination(18466U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6588715633807976;

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
    msg.setTimeStamp(0.21555325340363862);
    msg.setSource(36789U);
    msg.setSourceEntity(137U);
    msg.setDestination(14887U);
    msg.setDestinationEntity(153U);
    msg.value = 0.467248216659485;

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
    msg.setTimeStamp(0.08238018384241597);
    msg.setSource(17275U);
    msg.setSourceEntity(61U);
    msg.setDestination(60857U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7179421586701229;

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
    msg.setTimeStamp(0.5641176315185511);
    msg.setSource(37325U);
    msg.setSourceEntity(185U);
    msg.setDestination(7376U);
    msg.setDestinationEntity(251U);
    msg.value = 0.34922178900614376;

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
    msg.setTimeStamp(0.21623058974427545);
    msg.setSource(31444U);
    msg.setSourceEntity(193U);
    msg.setDestination(45272U);
    msg.setDestinationEntity(64U);
    msg.validity = 28454U;
    msg.type = 129U;
    msg.utc_year = 52197U;
    msg.utc_month = 211U;
    msg.utc_day = 123U;
    msg.utc_time = 0.9416747278307204;
    msg.lat = 0.18347102512317492;
    msg.lon = 0.22321772311823485;
    msg.height = 0.6870715214904644;
    msg.satellites = 96U;
    msg.cog = 0.750830646901211;
    msg.sog = 0.6690621988813944;
    msg.hdop = 0.7544519095689723;
    msg.vdop = 0.9688890948328271;
    msg.hacc = 0.33428453020143334;
    msg.vacc = 0.9877249290084473;

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
    msg.setTimeStamp(0.23998222782066414);
    msg.setSource(39381U);
    msg.setSourceEntity(142U);
    msg.setDestination(55763U);
    msg.setDestinationEntity(24U);
    msg.validity = 12725U;
    msg.type = 224U;
    msg.utc_year = 33125U;
    msg.utc_month = 47U;
    msg.utc_day = 44U;
    msg.utc_time = 0.3402001887372078;
    msg.lat = 0.6838317784275614;
    msg.lon = 0.07345957673663273;
    msg.height = 0.39559079446778356;
    msg.satellites = 64U;
    msg.cog = 0.07570657101787648;
    msg.sog = 0.762618159085667;
    msg.hdop = 0.3829477029495729;
    msg.vdop = 0.2983645244446852;
    msg.hacc = 0.5865160361551724;
    msg.vacc = 0.19992898151565608;

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
    msg.setTimeStamp(0.6651284431161805);
    msg.setSource(50304U);
    msg.setSourceEntity(89U);
    msg.setDestination(31915U);
    msg.setDestinationEntity(175U);
    msg.validity = 46998U;
    msg.type = 60U;
    msg.utc_year = 13174U;
    msg.utc_month = 152U;
    msg.utc_day = 9U;
    msg.utc_time = 0.29873384614806064;
    msg.lat = 0.7248220315046283;
    msg.lon = 0.8999125915234236;
    msg.height = 0.2722205171195766;
    msg.satellites = 42U;
    msg.cog = 0.4509683758066202;
    msg.sog = 0.9635053697093712;
    msg.hdop = 0.9010696237847848;
    msg.vdop = 0.9910845132376921;
    msg.hacc = 0.29686741665385297;
    msg.vacc = 0.23914456535155104;

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
    msg.setTimeStamp(0.7837019370512843);
    msg.setSource(29858U);
    msg.setSourceEntity(170U);
    msg.setDestination(41040U);
    msg.setDestinationEntity(110U);
    msg.time = 0.059154000682569374;
    msg.phi = 0.3627192856694079;
    msg.theta = 0.8021341961956816;
    msg.psi = 0.6346566307801274;
    msg.psi_magnetic = 0.4716700790582006;

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
    msg.setTimeStamp(0.5532216558544425);
    msg.setSource(41917U);
    msg.setSourceEntity(245U);
    msg.setDestination(42981U);
    msg.setDestinationEntity(141U);
    msg.time = 0.8854309324640762;
    msg.phi = 0.8215475442518618;
    msg.theta = 0.9216074250871258;
    msg.psi = 0.573566445637803;
    msg.psi_magnetic = 0.0027480551963625643;

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
    msg.setTimeStamp(0.2688555187766706);
    msg.setSource(23068U);
    msg.setSourceEntity(39U);
    msg.setDestination(43335U);
    msg.setDestinationEntity(148U);
    msg.time = 0.14859280818270681;
    msg.phi = 0.5659406373097807;
    msg.theta = 0.15442680643384077;
    msg.psi = 0.39485727545302085;
    msg.psi_magnetic = 0.6824279774387945;

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
    msg.setTimeStamp(0.30105537244359803);
    msg.setSource(5301U);
    msg.setSourceEntity(175U);
    msg.setDestination(19178U);
    msg.setDestinationEntity(43U);
    msg.time = 0.6591365428844501;
    msg.x = 0.5158334251302635;
    msg.y = 0.017636954016074013;
    msg.z = 0.612711183831128;
    msg.timestep = 0.5607634405180574;

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
    msg.setTimeStamp(0.46447209898906805);
    msg.setSource(55471U);
    msg.setSourceEntity(155U);
    msg.setDestination(946U);
    msg.setDestinationEntity(155U);
    msg.time = 0.8039991191044437;
    msg.x = 0.9798125810058557;
    msg.y = 0.9128221392543149;
    msg.z = 0.38172953746863725;
    msg.timestep = 0.7391965925120317;

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
    msg.setTimeStamp(0.9740063952201455);
    msg.setSource(4386U);
    msg.setSourceEntity(73U);
    msg.setDestination(39346U);
    msg.setDestinationEntity(239U);
    msg.time = 0.01320296018731315;
    msg.x = 0.2379647670015782;
    msg.y = 0.5760314954373409;
    msg.z = 0.5675114355415836;
    msg.timestep = 0.6701274657582605;

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
    msg.setTimeStamp(0.5127086195058597);
    msg.setSource(23218U);
    msg.setSourceEntity(7U);
    msg.setDestination(33199U);
    msg.setDestinationEntity(163U);
    msg.time = 0.14442884662125188;
    msg.x = 0.2713164964836411;
    msg.y = 0.8472773528631167;
    msg.z = 0.9414099043736615;

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
    msg.setTimeStamp(0.4330033263325027);
    msg.setSource(10802U);
    msg.setSourceEntity(104U);
    msg.setDestination(34627U);
    msg.setDestinationEntity(219U);
    msg.time = 0.31594595581055174;
    msg.x = 0.5243242801324883;
    msg.y = 0.9469330779758393;
    msg.z = 0.4022453491206085;

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
    msg.setTimeStamp(0.11036719437039244);
    msg.setSource(45477U);
    msg.setSourceEntity(195U);
    msg.setDestination(16246U);
    msg.setDestinationEntity(230U);
    msg.time = 0.565933868378705;
    msg.x = 0.7388485210154132;
    msg.y = 0.48864046403327954;
    msg.z = 0.10664834836755632;

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
    msg.setTimeStamp(0.8318055027145126);
    msg.setSource(36432U);
    msg.setSourceEntity(68U);
    msg.setDestination(40472U);
    msg.setDestinationEntity(10U);
    msg.time = 0.22390687821098365;
    msg.x = 0.7961750290173476;
    msg.y = 0.06394303097710907;
    msg.z = 0.17168541740329923;

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
    msg.setTimeStamp(0.3232448278513733);
    msg.setSource(30924U);
    msg.setSourceEntity(132U);
    msg.setDestination(39425U);
    msg.setDestinationEntity(154U);
    msg.time = 0.5510407511514321;
    msg.x = 0.18470061065310195;
    msg.y = 0.25481429708758274;
    msg.z = 0.768399963004207;

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
    msg.setTimeStamp(0.6483958388825599);
    msg.setSource(2140U);
    msg.setSourceEntity(241U);
    msg.setDestination(449U);
    msg.setDestinationEntity(24U);
    msg.time = 0.9563353793602187;
    msg.x = 0.19514557454763082;
    msg.y = 0.41571553259472205;
    msg.z = 0.2891945780409856;

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
    msg.setTimeStamp(0.6265524556600692);
    msg.setSource(42276U);
    msg.setSourceEntity(1U);
    msg.setDestination(13853U);
    msg.setDestinationEntity(156U);
    msg.time = 0.8702943752918517;
    msg.x = 0.1341820438045579;
    msg.y = 0.6834090160263385;
    msg.z = 0.06790518172651216;

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
    msg.setTimeStamp(0.39468273622304073);
    msg.setSource(27258U);
    msg.setSourceEntity(134U);
    msg.setDestination(46685U);
    msg.setDestinationEntity(189U);
    msg.time = 0.09378024076483649;
    msg.x = 0.25598333509312565;
    msg.y = 0.648199235627036;
    msg.z = 0.0007589659499065426;

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
    msg.setTimeStamp(0.8738892675358584);
    msg.setSource(34430U);
    msg.setSourceEntity(138U);
    msg.setDestination(1978U);
    msg.setDestinationEntity(17U);
    msg.time = 0.024892933445662346;
    msg.x = 0.7374579001235925;
    msg.y = 0.9413440149680603;
    msg.z = 0.1561124141371436;

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
    msg.setTimeStamp(0.8934760494604669);
    msg.setSource(21027U);
    msg.setSourceEntity(76U);
    msg.setDestination(36311U);
    msg.setDestinationEntity(206U);
    msg.validity = 110U;
    msg.x = 0.6957602415135891;
    msg.y = 0.15759844250098198;
    msg.z = 0.6349688427352579;

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
    msg.setTimeStamp(0.8092989450068837);
    msg.setSource(34413U);
    msg.setSourceEntity(152U);
    msg.setDestination(62170U);
    msg.setDestinationEntity(118U);
    msg.validity = 94U;
    msg.x = 0.23350897244448343;
    msg.y = 0.46233437896019647;
    msg.z = 0.9358298980229522;

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
    msg.setTimeStamp(0.6866097598238934);
    msg.setSource(41660U);
    msg.setSourceEntity(108U);
    msg.setDestination(7015U);
    msg.setDestinationEntity(120U);
    msg.validity = 148U;
    msg.x = 0.8490507709006107;
    msg.y = 0.6876806667377703;
    msg.z = 0.4425651070075797;

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
    msg.setTimeStamp(0.6886148161060608);
    msg.setSource(23594U);
    msg.setSourceEntity(139U);
    msg.setDestination(40493U);
    msg.setDestinationEntity(202U);
    msg.validity = 236U;
    msg.x = 0.4436693411607664;
    msg.y = 0.32779789745897947;
    msg.z = 0.6898743746104279;

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
    msg.setTimeStamp(0.32788799125603385);
    msg.setSource(49758U);
    msg.setSourceEntity(241U);
    msg.setDestination(6919U);
    msg.setDestinationEntity(186U);
    msg.validity = 72U;
    msg.x = 0.19100814299105962;
    msg.y = 0.39420713898861137;
    msg.z = 0.10850049170955933;

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
    msg.setTimeStamp(0.5685975606023672);
    msg.setSource(59402U);
    msg.setSourceEntity(119U);
    msg.setDestination(413U);
    msg.setDestinationEntity(174U);
    msg.validity = 215U;
    msg.x = 0.5661304051278654;
    msg.y = 0.8922510609020666;
    msg.z = 0.4036167048398287;

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
    msg.setTimeStamp(0.36122081194015243);
    msg.setSource(26306U);
    msg.setSourceEntity(194U);
    msg.setDestination(65445U);
    msg.setDestinationEntity(42U);
    msg.time = 0.9169477781379933;
    msg.x = 0.9589518141959792;
    msg.y = 0.10866346827414841;
    msg.z = 0.7515228730803586;

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
    msg.setTimeStamp(0.5417801971550588);
    msg.setSource(64406U);
    msg.setSourceEntity(82U);
    msg.setDestination(55792U);
    msg.setDestinationEntity(9U);
    msg.time = 0.9324017603418224;
    msg.x = 0.1658208902283832;
    msg.y = 0.21220798077038616;
    msg.z = 0.08890320399056484;

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
    msg.setTimeStamp(0.79070569266112);
    msg.setSource(13299U);
    msg.setSourceEntity(46U);
    msg.setDestination(45193U);
    msg.setDestinationEntity(27U);
    msg.time = 0.3940834478859404;
    msg.x = 0.38680946217796075;
    msg.y = 0.42121973555829695;
    msg.z = 0.11561570197717219;

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
    msg.setTimeStamp(0.013067623780170345);
    msg.setSource(58791U);
    msg.setSourceEntity(200U);
    msg.setDestination(29309U);
    msg.setDestinationEntity(191U);
    msg.validity = 60U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5457052171292986;
    tmp_msg_0.beam_height = 0.34279494522628107;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.409779938708394;

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
    msg.setTimeStamp(0.1094917473306587);
    msg.setSource(12309U);
    msg.setSourceEntity(205U);
    msg.setDestination(28128U);
    msg.setDestinationEntity(38U);
    msg.validity = 105U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8711823026921137;
    tmp_msg_0.y = 0.36470918260418894;
    tmp_msg_0.z = 0.6314032008209544;
    tmp_msg_0.phi = 0.46620187984540185;
    tmp_msg_0.theta = 0.6746241057473817;
    tmp_msg_0.psi = 0.8309882832329574;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.27032360529458677;

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
    msg.setTimeStamp(0.5434881757589204);
    msg.setSource(64166U);
    msg.setSourceEntity(188U);
    msg.setDestination(47236U);
    msg.setDestinationEntity(161U);
    msg.validity = 176U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7738186420220257;
    tmp_msg_0.y = 0.0063501366500674505;
    tmp_msg_0.z = 0.7178567092754824;
    tmp_msg_0.phi = 0.4391856288798808;
    tmp_msg_0.theta = 0.4018203542145077;
    tmp_msg_0.psi = 0.21687035124222087;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5889069442745046;
    tmp_msg_1.beam_height = 0.5562390747468176;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.2839897357133234;

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
    msg.setTimeStamp(0.5510294968567189);
    msg.setSource(15623U);
    msg.setSourceEntity(99U);
    msg.setDestination(53180U);
    msg.setDestinationEntity(165U);
    msg.value = 0.9376882349640958;

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
    msg.setTimeStamp(0.719200793820461);
    msg.setSource(63517U);
    msg.setSourceEntity(27U);
    msg.setDestination(44187U);
    msg.setDestinationEntity(177U);
    msg.value = 0.423298304430905;

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
    msg.setTimeStamp(0.9970609540761284);
    msg.setSource(27301U);
    msg.setSourceEntity(117U);
    msg.setDestination(49751U);
    msg.setDestinationEntity(44U);
    msg.value = 0.5103545729330816;

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
    msg.setTimeStamp(0.4461504198164298);
    msg.setSource(25758U);
    msg.setSourceEntity(191U);
    msg.setDestination(4452U);
    msg.setDestinationEntity(57U);
    msg.value = 0.5737370552340608;

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
    msg.setTimeStamp(0.4249816580355402);
    msg.setSource(33253U);
    msg.setSourceEntity(32U);
    msg.setDestination(48578U);
    msg.setDestinationEntity(230U);
    msg.value = 0.9113354103505007;

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
    msg.setTimeStamp(0.1711090231223239);
    msg.setSource(25815U);
    msg.setSourceEntity(167U);
    msg.setDestination(34644U);
    msg.setDestinationEntity(56U);
    msg.value = 0.4805007221571682;

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
    msg.setTimeStamp(0.7829162191567323);
    msg.setSource(15469U);
    msg.setSourceEntity(17U);
    msg.setDestination(45033U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5492218038645785;

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
    msg.setTimeStamp(0.9779032779047752);
    msg.setSource(27493U);
    msg.setSourceEntity(7U);
    msg.setDestination(45034U);
    msg.setDestinationEntity(116U);
    msg.value = 0.3730589160773624;

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
    msg.setTimeStamp(0.9658630199320511);
    msg.setSource(39651U);
    msg.setSourceEntity(218U);
    msg.setDestination(53002U);
    msg.setDestinationEntity(16U);
    msg.value = 0.18108902568831375;

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
    msg.setTimeStamp(0.530586628837136);
    msg.setSource(35042U);
    msg.setSourceEntity(246U);
    msg.setDestination(14197U);
    msg.setDestinationEntity(29U);
    msg.value = 0.20092131177762784;

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
    msg.setTimeStamp(0.08322505982642159);
    msg.setSource(56128U);
    msg.setSourceEntity(18U);
    msg.setDestination(31891U);
    msg.setDestinationEntity(81U);
    msg.value = 0.6550904626847958;

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
    msg.setTimeStamp(0.04896330890098888);
    msg.setSource(22297U);
    msg.setSourceEntity(251U);
    msg.setDestination(20384U);
    msg.setDestinationEntity(91U);
    msg.value = 0.18506104170317417;

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
    msg.setTimeStamp(0.5443311578089399);
    msg.setSource(29643U);
    msg.setSourceEntity(49U);
    msg.setDestination(37711U);
    msg.setDestinationEntity(194U);
    msg.value = 0.28634656143572157;

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
    msg.setTimeStamp(0.73311629206466);
    msg.setSource(62202U);
    msg.setSourceEntity(106U);
    msg.setDestination(23939U);
    msg.setDestinationEntity(181U);
    msg.value = 0.07355390102183912;

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
    msg.setTimeStamp(0.4382788939195189);
    msg.setSource(18944U);
    msg.setSourceEntity(166U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(126U);
    msg.value = 0.9427663927524279;

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
    msg.setTimeStamp(0.22629449466850526);
    msg.setSource(63375U);
    msg.setSourceEntity(156U);
    msg.setDestination(11388U);
    msg.setDestinationEntity(116U);
    msg.value = 0.053925363015433714;

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
    msg.setTimeStamp(0.6892279855367169);
    msg.setSource(31462U);
    msg.setSourceEntity(109U);
    msg.setDestination(33527U);
    msg.setDestinationEntity(3U);
    msg.value = 0.17849144806069828;

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
    msg.setTimeStamp(0.19222830061925322);
    msg.setSource(28256U);
    msg.setSourceEntity(75U);
    msg.setDestination(21709U);
    msg.setDestinationEntity(186U);
    msg.value = 0.23882566652855675;

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
    msg.setTimeStamp(0.6952782898778741);
    msg.setSource(13217U);
    msg.setSourceEntity(58U);
    msg.setDestination(34140U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8924149483373981;

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
    msg.setTimeStamp(0.05306214586488667);
    msg.setSource(40436U);
    msg.setSourceEntity(39U);
    msg.setDestination(47354U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5835369849564112;

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
    msg.setTimeStamp(0.16495973426346922);
    msg.setSource(22195U);
    msg.setSourceEntity(86U);
    msg.setDestination(55551U);
    msg.setDestinationEntity(23U);
    msg.value = 0.8208984488657624;

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
    msg.setTimeStamp(0.7782307581222443);
    msg.setSource(49350U);
    msg.setSourceEntity(14U);
    msg.setDestination(1426U);
    msg.setDestinationEntity(27U);
    msg.value = 0.5518480093744231;

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
    msg.setTimeStamp(0.5023360911751064);
    msg.setSource(82U);
    msg.setSourceEntity(225U);
    msg.setDestination(2799U);
    msg.setDestinationEntity(157U);
    msg.value = 0.4001398453329774;

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
    msg.setTimeStamp(0.3339407360071788);
    msg.setSource(14070U);
    msg.setSourceEntity(41U);
    msg.setDestination(21116U);
    msg.setDestinationEntity(109U);
    msg.value = 0.0298822599808376;

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
    msg.setTimeStamp(0.45915982153873136);
    msg.setSource(57662U);
    msg.setSourceEntity(189U);
    msg.setDestination(24853U);
    msg.setDestinationEntity(247U);
    msg.direction = 0.5411015629703284;
    msg.speed = 0.4282818112188528;
    msg.turbulence = 0.10586010649050626;

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
    msg.setTimeStamp(0.7650320523240236);
    msg.setSource(28381U);
    msg.setSourceEntity(136U);
    msg.setDestination(22144U);
    msg.setDestinationEntity(33U);
    msg.direction = 0.6691958160899109;
    msg.speed = 0.6574283512166882;
    msg.turbulence = 0.7573347250486003;

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
    msg.setTimeStamp(0.5960381403564226);
    msg.setSource(39230U);
    msg.setSourceEntity(49U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(15U);
    msg.direction = 0.8412634235713219;
    msg.speed = 0.8369191959845335;
    msg.turbulence = 0.2031602386151149;

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
    msg.setTimeStamp(0.4752861210169924);
    msg.setSource(35541U);
    msg.setSourceEntity(37U);
    msg.setDestination(54409U);
    msg.setDestinationEntity(226U);
    msg.value = 0.4653505008231237;

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
    msg.setTimeStamp(0.6390714137544495);
    msg.setSource(39188U);
    msg.setSourceEntity(64U);
    msg.setDestination(1289U);
    msg.setDestinationEntity(81U);
    msg.value = 0.1796952867153776;

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
    msg.setTimeStamp(0.8438869236084888);
    msg.setSource(17077U);
    msg.setSourceEntity(222U);
    msg.setDestination(44630U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6731198385688836;

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
    msg.setTimeStamp(0.485458971457728);
    msg.setSource(29794U);
    msg.setSourceEntity(137U);
    msg.setDestination(44718U);
    msg.setDestinationEntity(89U);
    msg.value.assign("VDNDJDMOIPLQLZFYXABYTPCDHARSGOOBAIYOOMDGNRNSANWELEZIGBRKKSFLUCVFWDGCHKVPMHVCLTFPTBRYOXWMZTREADRXBXQBHCWZPHWHUIWFZAUGLDBOVLWSNHLGEUSQFBVIQJUENXMSUNZJJWYGIKGNACWBEORFCXUETAMPZJANRIVQAJYMEREIFGYPMKGVOILCTFQHSTKPDLJQKXHEYBQQKKVYWJZSMJXNFRKOJPZXTDYTC");

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
    msg.setTimeStamp(0.9984651489508557);
    msg.setSource(34395U);
    msg.setSourceEntity(47U);
    msg.setDestination(43758U);
    msg.setDestinationEntity(214U);
    msg.value.assign("SPPGEDFCEJIWHZWVSGRQVTJYALOJGVMISPBLXQZVDOFYWOOSJKCARRFMPRSHYIIALLNQOTYMCPTKZKHOEHEKVQSUNMMLBPWJDAJRNQCTXLJKXBDSBGKUIZNQZBOUIQDYRTRVZCEBCBFHMUUWDQSNDXUZHFGVLVRJDDYFNHELDEYUWTTGCTMECLFICAFUPGXIQHOGNLMIVHWJWPWGAJXMNXA");

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
    msg.setTimeStamp(0.5254512986595256);
    msg.setSource(45264U);
    msg.setSourceEntity(121U);
    msg.setDestination(64349U);
    msg.setDestinationEntity(106U);
    msg.value.assign("JIDXGPESCBBFTNISGOTYKBPSFIHNFZWKGUURFKNTSEMAHUIXHDMV");

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
    msg.setTimeStamp(0.2516964105061986);
    msg.setSource(60300U);
    msg.setSourceEntity(94U);
    msg.setDestination(39285U);
    msg.setDestinationEntity(122U);
    const char tmp_msg_0[] = {93, -128, -58, -116, -19, -11, 22, 11, 78, 83, 10, -38, 119, 20, 74, -38, 103, -102, 9, 46, -14, 90, 78, -107, 27, -118, -34, 80, 118, -36, -62, -121, -61, -96, -2, 99, 54, 68, 87, -44, 96, -62, 66, 48, 27, -66, -80, -87, 111, 53, 62, 109, -4, 78, 38, 90, -120, -116, -11, 45, 69, 42, -20, 99, -127, 7, -36, 72, 16, -23, 58, 64, -40, 47, -124, -123, -41, -52, 49, -74, -30, 66, 94, -91, -68, 0, -116, 108, 77, -111, -84, 4, 85, 97, 102, 81, 63, 54, 107, 64, 29, 4, 34, -26, -40, -80, 78, -35, 33, 94};
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
    msg.setTimeStamp(0.9326931708568522);
    msg.setSource(153U);
    msg.setSourceEntity(224U);
    msg.setDestination(1794U);
    msg.setDestinationEntity(175U);
    const char tmp_msg_0[] = {90, 109, 11, -62, -75, 70, -70, 83, -47, -71, -60, 117, -89, 60, 0, 33, -4, 112, -11, -10, -96, -21, -42, 13, 102, -64, -76, -65, -1, -56, 118, 116, -28, -64, -75, -30, 85, 62, -45, -107, 23, -102, 115, -60, -100, -85, 81, -90, -85, -122, 38, -10, -58, 83, 77, 43, 82, 113, -45, 73, -51, 59, 67, -113, -77, 63, 35, 35, -50, -6, -65, -62, 38, 58, 28, 22, 70, 95, -62, 78, -14, -12, 98, 7, 82, -19, 10, 61, 24, 70, 75, 12, 36, 53, -121, 49, -68, -19, 55, -126, -31, 75, -92, -15, 19, -33, 117, 89, 96, -126, 59, 49, 71, -82, -128, -120, 102, 29, -31, -107, 66, 28, -28, -104, -82, -94, -73, 20, -22, 126, 57, 11, -118, 100, 114, -37, -125, -69, 20, -62, 100, 17, 45, 86, -115, -7, 80, 85, 115, -95, -19, -58, 20, 126, 86, 42, -70, 60, 9, -72, 111, 83, -108, 125, -66, 55, -30, -77, 46, -74, -26, 19, 122, -61, -102, -54, -65, -84, -25, -101, 122, -34, -87, 109, 92, -82, 90, -124, -51, 84, -43, 35, 39, 47, -14, 33, 26, 78, -15, 92, 38, -44, -104, 51, -41, -78, 20, -108, 77, -70, -128, 0, 126, 126, -105, -85, 76, 86, -25, -78};
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
    msg.setTimeStamp(0.18813858526177385);
    msg.setSource(29978U);
    msg.setSourceEntity(242U);
    msg.setDestination(26495U);
    msg.setDestinationEntity(195U);
    const char tmp_msg_0[] = {-118, 87, 118, -68, -112, -3, -21, -80, -65, 113, 107, 118, 22, -126, -128, 104, -29, 122, -33, -94, -13, -29, 92, -24, 95, -85, -42, -121, -82, -24, -46, 19, 83, 73, 58, -98, 82, -90, -63, -51, 6, 79, 121, 36, -49, 5, 109, -26, 106, 16, -96, -46, -116, -123, -34, -21, -111, -87, 65, 16, 49, 23, 23, -22, -38, 88, -19, -112, 98, 51, 18, -12, -30, -46, -121, 18, -109, -97, -74, 53, -95, 24, 50, -108, 27, -119, -65, -58, 123, 103, 87, 11, 124, 94, -95, 80, 2, -42, 8, -115, -60, -93, -67, 109, -124, 54, -101, 121, -21, 88, 82, 108, -37, 76, 85, 23, -49, 26, 106, 64, 63, 100, 18, -24, -85, -100, 87, -61, -76, 102, 24, 104, -55, 84, 118, -101, -36, -32, 102, -117, 56, 17, 75};
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
    msg.setTimeStamp(0.974478184298295);
    msg.setSource(57745U);
    msg.setSourceEntity(232U);
    msg.setDestination(52485U);
    msg.setDestinationEntity(0U);
    msg.value = 0.42294366238278835;

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
    msg.setTimeStamp(0.3162986749637645);
    msg.setSource(38754U);
    msg.setSourceEntity(202U);
    msg.setDestination(53299U);
    msg.setDestinationEntity(234U);
    msg.value = 0.6559296907642647;

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
    msg.setTimeStamp(0.10366006342398937);
    msg.setSource(24048U);
    msg.setSourceEntity(49U);
    msg.setDestination(56682U);
    msg.setDestinationEntity(103U);
    msg.value = 0.4094226540422401;

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
    msg.setTimeStamp(0.37510101407626606);
    msg.setSource(17299U);
    msg.setSourceEntity(205U);
    msg.setDestination(14752U);
    msg.setDestinationEntity(117U);
    msg.type = 22U;
    msg.frequency = 3131922724U;
    msg.min_range = 44563U;
    msg.max_range = 27751U;
    msg.bits_per_point = 17U;
    msg.scale_factor = 0.298653191513067;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3538161779451774;
    tmp_msg_0.beam_height = 0.8904155225559434;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {114, -51, 39, 57, -59, 6, -77, 80, -96, -6, -115, 114, -89, -39, -86, -108, 29, 98, -4, -90, 100, 80, -10, -31, 110, -98, -61, -20, 29, -96, 37, 63, 81, 115, 58, 47, -65, -87, 79, -13, -5, -6, -91, -96, -90, 53, 27, 48, 69, 100, -78, 45, -41, 87, -80, -8, 124, -96, -125, 59, 29, -13, 102, -33, 46, -25, -67, -75, 96, 48, 79, 86, -28, -4, -50, 17, -45, -74, 84, 125, 25, 92, -110, 82, -34, -107, -45, 119, 19, 25, -110, -71, -92, -83, -105, -110, -107, -83, 10, -97, 84, -80, -2, 2, 126, -96, -100, -81, 61, -33, -122, 33, 26, -96, -33, -101, 73, 117, 58, -127, -59, -54, -27, 11, -12, -51, 12, 116, 13, 96, 94, 68, -93, -72, -89, -8, 89, -119, 108, 80, 21, -1, -89, 72, 10, -126, 118, 52, 8, -74, -74, 72, 106, -38, 72, 20, -7, -12, 115, 88, 105, -82, -117, 20, 32, 9, 94, 30, 27, 93, -60, -120, 126, -120, 96, 79, 123, 9, -6, -41, 125, -65, -125, -45, -18, 92, -51, -42, -4, 102, 84, -47, -114, 52, -76, 18, -20, -47, -69, -40, -108, -50, 92, 105, 123, -53, 45, -6, -104, 24, 24, -96, -63, -118, -112, 11, -33, 52, 99, -109, 106, -10, 99, 1, -77, -37};
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
    msg.setTimeStamp(0.20133187849963163);
    msg.setSource(40245U);
    msg.setSourceEntity(53U);
    msg.setDestination(36937U);
    msg.setDestinationEntity(65U);
    msg.type = 234U;
    msg.frequency = 2197968771U;
    msg.min_range = 12777U;
    msg.max_range = 32584U;
    msg.bits_per_point = 203U;
    msg.scale_factor = 0.6452591630397333;
    const char tmp_msg_0[] = {-79, 101, 110, 60, -84, -46, 34, -87, -50, 25, -2, 60, -67, -37, 14, 34, -104, -20, 27, -100, 111, -74, 101, -128, -47, -57, -113, 58, 107, 73, -115, 85, -93, -69, 107, 10, -120, -34, -21, -39, 70, -14, -17, 98, -2, 51, -79, 50, 86, 105, -22};
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
    msg.setTimeStamp(0.8902977164516327);
    msg.setSource(46303U);
    msg.setSourceEntity(206U);
    msg.setDestination(3404U);
    msg.setDestinationEntity(59U);
    msg.type = 139U;
    msg.frequency = 1816361242U;
    msg.min_range = 5294U;
    msg.max_range = 313U;
    msg.bits_per_point = 231U;
    msg.scale_factor = 0.6627876577777438;
    const char tmp_msg_0[] = {31, 21, 4, 112, 48, 110, -23, 13, 11, 9, 26, 97, 51, -119, -64, 58, 89, -78, 42, 86, 27, 100, 95, -80, 36, 42, -73, 21, -80, -58, 32, 39, -10, 61, 60, 58, 32, 32, -97, 7, 44, -83, 92, -109, 42, 25, 97, 6, -59, -84, 19, -22, 87, 35, 39, -101, 111, 106, 46, -16, -42, 52, 19, 49, -8, 107, 3, 102, 52, 65, 94, -62, 39, -97, -24, 23, 90, -1, -114, 79, 65, 93, 96, -62, 93, -81, 116, -124, -92, -55, -13, 69, -18, -4, 70, -50, -127, -99, -8, 51, 45, -18, -114, 65, -47, -88, 71, -2, 125, -35, 91, -19, -19, 6, 49, -42, 115, -74, -73, -72, 103, -89, 32, 67, 100, 39, 69, 26, 11, -16, 56, 19, 89, -88, 105, -50, -51, -79, -18, -51, -59, 122, -38, 119, 9, -104, 35, -91};
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
    msg.setTimeStamp(0.4694399271390317);
    msg.setSource(43950U);
    msg.setSourceEntity(85U);
    msg.setDestination(14915U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.1961128431900535);
    msg.setSource(64847U);
    msg.setSourceEntity(163U);
    msg.setDestination(45569U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.3696971851248628);
    msg.setSource(21759U);
    msg.setSourceEntity(203U);
    msg.setDestination(63764U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.9372430740404264);
    msg.setSource(958U);
    msg.setSourceEntity(110U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(45U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.42658468958438356);
    msg.setSource(23676U);
    msg.setSourceEntity(152U);
    msg.setDestination(47531U);
    msg.setDestinationEntity(140U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.689915988374643);
    msg.setSource(52796U);
    msg.setSourceEntity(217U);
    msg.setDestination(17182U);
    msg.setDestinationEntity(20U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.989383044844343);
    msg.setSource(59083U);
    msg.setSourceEntity(46U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(137U);
    msg.value = 0.8043049774766355;
    msg.confidence = 0.336255131948319;
    msg.opmodes.assign("ZQIKUKQXWIAXBRSSOLHRPUUKWBQDEDFOAFUQCPELVDETOWOKDIWRBJRIMYGBNJDGYDKLVONGQTNHHKPLRXJVIUCQGZWYAWXDYJWGVZAFHNPTCZHLAGUWBSTOFDUKMRIEBACNQDCSUILABLPOENZMZTKZNXSXPLXFYAWTVSYIVSTBNTZZEVEFZTJHDKOLMCCCFYAMFSQYQVSQMPAGGBMMPJXEE");

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
    msg.setTimeStamp(0.9864661926072271);
    msg.setSource(3160U);
    msg.setSourceEntity(112U);
    msg.setDestination(59705U);
    msg.setDestinationEntity(98U);
    msg.value = 0.5212822366547569;
    msg.confidence = 0.8005939031381095;
    msg.opmodes.assign("NSVCAGLMZARQMZGGQOOANUYLVGDFFBMARZKORNGPRXCXISCZZUYXEAQTTUNRQXXIKRNPQDABEHHZYCOMJMRSCBTWSXEGQBHIHCEEKGZYWCPPHWPIVJFKHFOHDKDELGDCQLUIRIEPOEBWFVYUYVDPINOPIHZJVTXYDKJXKWEXMGMSJVDZJWTLOUWT");

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
    msg.setTimeStamp(0.6240658092174234);
    msg.setSource(14221U);
    msg.setSourceEntity(236U);
    msg.setDestination(6128U);
    msg.setDestinationEntity(75U);
    msg.value = 0.43514963332407197;
    msg.confidence = 0.6416944658131593;
    msg.opmodes.assign("ULYTIEYUUCQSLJZBZZBKYFZADYVDWYECPAVTCKBMHPWVAATSDN");

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
    msg.setTimeStamp(0.9373452756081139);
    msg.setSource(29365U);
    msg.setSourceEntity(157U);
    msg.setDestination(40524U);
    msg.setDestinationEntity(54U);
    msg.itow = 2177328175U;
    msg.lat = 0.06222116945463585;
    msg.lon = 0.4021264459941529;
    msg.height_ell = 0.5722719463181802;
    msg.height_sea = 0.7919027402303387;
    msg.hacc = 0.45545207355459394;
    msg.vacc = 0.3109393810077937;
    msg.vel_n = 0.44882711532647745;
    msg.vel_e = 0.8790871128057833;
    msg.vel_d = 0.6428459725154562;
    msg.speed = 0.6868372622372065;
    msg.gspeed = 0.9498483402053001;
    msg.heading = 0.32008454415301024;
    msg.sacc = 0.8343820713032072;
    msg.cacc = 0.5511740205748026;

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
    msg.setTimeStamp(0.43458159180345635);
    msg.setSource(36949U);
    msg.setSourceEntity(102U);
    msg.setDestination(31123U);
    msg.setDestinationEntity(160U);
    msg.itow = 953841721U;
    msg.lat = 0.6888373567733939;
    msg.lon = 0.6573803715272185;
    msg.height_ell = 0.1267391506082337;
    msg.height_sea = 0.9735188177332454;
    msg.hacc = 0.23655321295711507;
    msg.vacc = 0.028796665335085625;
    msg.vel_n = 0.4935095372392999;
    msg.vel_e = 0.5929822865320551;
    msg.vel_d = 0.8239077227174343;
    msg.speed = 0.3623823789066172;
    msg.gspeed = 0.8445671503203684;
    msg.heading = 0.9186722359541513;
    msg.sacc = 0.12067287632658197;
    msg.cacc = 0.019083737046334925;

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
    msg.setTimeStamp(0.5496422753924877);
    msg.setSource(64302U);
    msg.setSourceEntity(21U);
    msg.setDestination(14623U);
    msg.setDestinationEntity(232U);
    msg.itow = 1908592365U;
    msg.lat = 0.4572974179429181;
    msg.lon = 0.4518948998001623;
    msg.height_ell = 0.8772710650437731;
    msg.height_sea = 0.744576561358265;
    msg.hacc = 0.8670143092051936;
    msg.vacc = 0.6187148125169383;
    msg.vel_n = 0.34493832404089175;
    msg.vel_e = 0.6430267909284166;
    msg.vel_d = 0.6390060763984;
    msg.speed = 0.060331414414766305;
    msg.gspeed = 0.34280484419479174;
    msg.heading = 0.18460804425118704;
    msg.sacc = 0.05367100480280562;
    msg.cacc = 0.6182832006830838;

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
    msg.setTimeStamp(0.48326176737087734);
    msg.setSource(19354U);
    msg.setSourceEntity(23U);
    msg.setDestination(2254U);
    msg.setDestinationEntity(173U);
    msg.id = 30U;
    msg.value = 0.5324449512639383;

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
    msg.setTimeStamp(0.1108702392227977);
    msg.setSource(28214U);
    msg.setSourceEntity(132U);
    msg.setDestination(18362U);
    msg.setDestinationEntity(211U);
    msg.id = 73U;
    msg.value = 0.9731577180037915;

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
    msg.setTimeStamp(0.8711686254623451);
    msg.setSource(7693U);
    msg.setSourceEntity(209U);
    msg.setDestination(54023U);
    msg.setDestinationEntity(74U);
    msg.id = 154U;
    msg.value = 0.2138460779913356;

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
    msg.setTimeStamp(0.26697555369009274);
    msg.setSource(37229U);
    msg.setSourceEntity(76U);
    msg.setDestination(42324U);
    msg.setDestinationEntity(228U);
    msg.x = 0.17269229881084813;
    msg.y = 0.05383104866540722;
    msg.z = 0.7151403060367529;
    msg.phi = 0.6429333072373475;
    msg.theta = 0.2168403116536064;
    msg.psi = 0.540604415119765;

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
    msg.setTimeStamp(0.7252311265977571);
    msg.setSource(33836U);
    msg.setSourceEntity(133U);
    msg.setDestination(33708U);
    msg.setDestinationEntity(160U);
    msg.x = 0.33085755483939194;
    msg.y = 0.5373706828463269;
    msg.z = 0.7968448198156042;
    msg.phi = 0.7313277360475934;
    msg.theta = 0.9052102168030586;
    msg.psi = 0.6701123333845024;

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
    msg.setTimeStamp(0.06576193697718813);
    msg.setSource(63360U);
    msg.setSourceEntity(249U);
    msg.setDestination(13591U);
    msg.setDestinationEntity(147U);
    msg.x = 0.9171457295120458;
    msg.y = 0.2052241978447057;
    msg.z = 0.696792307798848;
    msg.phi = 0.037248342748511964;
    msg.theta = 0.3763436516031188;
    msg.psi = 0.4443094214351243;

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
    msg.setTimeStamp(0.5914865548460564);
    msg.setSource(1280U);
    msg.setSourceEntity(47U);
    msg.setDestination(18620U);
    msg.setDestinationEntity(8U);
    msg.beam_width = 0.9743169356121476;
    msg.beam_height = 0.4595427292527683;

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
    msg.setTimeStamp(0.6300335205149488);
    msg.setSource(46287U);
    msg.setSourceEntity(16U);
    msg.setDestination(42577U);
    msg.setDestinationEntity(147U);
    msg.beam_width = 0.021183003132639988;
    msg.beam_height = 0.5365355036964253;

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
    msg.setTimeStamp(0.05703527167791267);
    msg.setSource(12498U);
    msg.setSourceEntity(57U);
    msg.setDestination(45946U);
    msg.setDestinationEntity(39U);
    msg.beam_width = 0.996357881223411;
    msg.beam_height = 0.7035216216700332;

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
    msg.setTimeStamp(0.7794094275662007);
    msg.setSource(38625U);
    msg.setSourceEntity(155U);
    msg.setDestination(64681U);
    msg.setDestinationEntity(163U);
    msg.sane = 153U;

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
    msg.setTimeStamp(0.12851298023536417);
    msg.setSource(15542U);
    msg.setSourceEntity(20U);
    msg.setDestination(57590U);
    msg.setDestinationEntity(221U);
    msg.sane = 48U;

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
    msg.setTimeStamp(0.7090532788968357);
    msg.setSource(56214U);
    msg.setSourceEntity(161U);
    msg.setDestination(1277U);
    msg.setDestinationEntity(24U);
    msg.sane = 55U;

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
    msg.setTimeStamp(0.15809099587784226);
    msg.setSource(6656U);
    msg.setSourceEntity(142U);
    msg.setDestination(26999U);
    msg.setDestinationEntity(209U);
    msg.value = 0.5817647921567887;

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
    msg.setTimeStamp(0.6719206565951119);
    msg.setSource(10448U);
    msg.setSourceEntity(22U);
    msg.setDestination(52604U);
    msg.setDestinationEntity(57U);
    msg.value = 0.7067245856373393;

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
    msg.setTimeStamp(0.42201145910306814);
    msg.setSource(28354U);
    msg.setSourceEntity(200U);
    msg.setDestination(61699U);
    msg.setDestinationEntity(143U);
    msg.value = 0.15801233346034127;

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
    msg.setTimeStamp(0.43173385644190354);
    msg.setSource(38593U);
    msg.setSourceEntity(68U);
    msg.setDestination(45886U);
    msg.setDestinationEntity(25U);
    msg.value = 0.6923149119901052;

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
    msg.setTimeStamp(0.3606151981791623);
    msg.setSource(29619U);
    msg.setSourceEntity(166U);
    msg.setDestination(7095U);
    msg.setDestinationEntity(247U);
    msg.value = 0.9414263079982055;

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
    msg.setTimeStamp(0.6711628669468436);
    msg.setSource(5299U);
    msg.setSourceEntity(24U);
    msg.setDestination(4352U);
    msg.setDestinationEntity(92U);
    msg.value = 0.8708210445762953;

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
    msg.setTimeStamp(0.7120901246406516);
    msg.setSource(65042U);
    msg.setSourceEntity(146U);
    msg.setDestination(10379U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6062537989265112;

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
    msg.setTimeStamp(0.19609568767801655);
    msg.setSource(20894U);
    msg.setSourceEntity(242U);
    msg.setDestination(42370U);
    msg.setDestinationEntity(4U);
    msg.value = 0.4612488680189494;

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
    msg.setTimeStamp(0.7967558901445172);
    msg.setSource(64447U);
    msg.setSourceEntity(58U);
    msg.setDestination(60253U);
    msg.setDestinationEntity(183U);
    msg.value = 0.6877081573105536;

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
    msg.setTimeStamp(0.7978156860971979);
    msg.setSource(62061U);
    msg.setSourceEntity(43U);
    msg.setDestination(8652U);
    msg.setDestinationEntity(122U);
    msg.value = 0.6573750124481471;

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
    msg.setTimeStamp(0.5686589693749031);
    msg.setSource(43179U);
    msg.setSourceEntity(89U);
    msg.setDestination(28832U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7824172030275552;

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
    msg.setTimeStamp(0.47451044126296693);
    msg.setSource(6331U);
    msg.setSourceEntity(237U);
    msg.setDestination(57993U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9124177819140907;

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
    msg.setTimeStamp(0.4159716212074904);
    msg.setSource(45258U);
    msg.setSourceEntity(105U);
    msg.setDestination(40084U);
    msg.setDestinationEntity(198U);
    msg.value = 0.1137185952843267;

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
    msg.setTimeStamp(0.6157936096068377);
    msg.setSource(45007U);
    msg.setSourceEntity(1U);
    msg.setDestination(17602U);
    msg.setDestinationEntity(86U);
    msg.value = 0.9048814855012529;

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
    msg.setTimeStamp(0.517067141686109);
    msg.setSource(34177U);
    msg.setSourceEntity(38U);
    msg.setDestination(55952U);
    msg.setDestinationEntity(192U);
    msg.value = 0.15676746296600774;

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
    msg.setTimeStamp(0.5493615353890413);
    msg.setSource(53832U);
    msg.setSourceEntity(115U);
    msg.setDestination(19179U);
    msg.setDestinationEntity(175U);
    msg.value = 0.44762166577872786;

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
    msg.setTimeStamp(0.9952590505551112);
    msg.setSource(61029U);
    msg.setSourceEntity(206U);
    msg.setDestination(58726U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8064055007800546;

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
    msg.setTimeStamp(0.49010383093811083);
    msg.setSource(43230U);
    msg.setSourceEntity(187U);
    msg.setDestination(24764U);
    msg.setDestinationEntity(123U);
    msg.value = 0.869542811273021;

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
    msg.setTimeStamp(0.8982334038769181);
    msg.setSource(53281U);
    msg.setSourceEntity(212U);
    msg.setDestination(65410U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6313507835234154;

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
    msg.setTimeStamp(0.8587258402932741);
    msg.setSource(51277U);
    msg.setSourceEntity(132U);
    msg.setDestination(53638U);
    msg.setDestinationEntity(123U);
    msg.value = 0.4209712335044815;

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
    msg.setTimeStamp(0.9822174328873218);
    msg.setSource(44457U);
    msg.setSourceEntity(154U);
    msg.setDestination(32088U);
    msg.setDestinationEntity(1U);
    msg.value = 0.23295775310271094;

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
    msg.setTimeStamp(0.6227159951667913);
    msg.setSource(5604U);
    msg.setSourceEntity(134U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(252U);
    msg.value = 0.4879540650252153;

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
    msg.setTimeStamp(0.7409148039372538);
    msg.setSource(32382U);
    msg.setSourceEntity(191U);
    msg.setDestination(52636U);
    msg.setDestinationEntity(147U);
    msg.value = 0.014291562312643613;

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
    msg.setTimeStamp(0.41927040735195076);
    msg.setSource(18060U);
    msg.setSourceEntity(18U);
    msg.setDestination(34509U);
    msg.setDestinationEntity(197U);
    msg.value = 0.48424793399829436;

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
    msg.setTimeStamp(0.7139318306404111);
    msg.setSource(52807U);
    msg.setSourceEntity(119U);
    msg.setDestination(38757U);
    msg.setDestinationEntity(195U);
    msg.validity = 17516U;
    msg.type = 32U;
    msg.tow = 454725670U;
    msg.base_lat = 0.5303160740501722;
    msg.base_lon = 0.4014710578056483;
    msg.base_height = 0.001812054378375616;
    msg.n = 0.5218758318525869;
    msg.e = 0.38222851367865274;
    msg.d = 0.6017018943416551;
    msg.v_n = 0.9911267547208562;
    msg.v_e = 0.5103172119683288;
    msg.v_d = 0.16592280380488478;
    msg.satellites = 10U;
    msg.iar_hyp = 23009U;
    msg.iar_ratio = 0.6918848833940903;

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
    msg.setTimeStamp(0.9112864084679476);
    msg.setSource(10084U);
    msg.setSourceEntity(252U);
    msg.setDestination(43321U);
    msg.setDestinationEntity(9U);
    msg.validity = 27572U;
    msg.type = 1U;
    msg.tow = 1471635213U;
    msg.base_lat = 0.23321252718184116;
    msg.base_lon = 0.7251520124095305;
    msg.base_height = 0.7964249225299529;
    msg.n = 0.0807089764558836;
    msg.e = 0.09396131290460596;
    msg.d = 0.6819548044442026;
    msg.v_n = 0.5011865979576943;
    msg.v_e = 0.30859232431404093;
    msg.v_d = 0.8783929113039071;
    msg.satellites = 74U;
    msg.iar_hyp = 57835U;
    msg.iar_ratio = 0.5529469788467719;

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
    msg.setTimeStamp(0.7875436962928207);
    msg.setSource(57569U);
    msg.setSourceEntity(189U);
    msg.setDestination(7603U);
    msg.setDestinationEntity(145U);
    msg.validity = 33801U;
    msg.type = 235U;
    msg.tow = 1842324632U;
    msg.base_lat = 0.45535248472962986;
    msg.base_lon = 0.5630830915645217;
    msg.base_height = 0.7809610840350313;
    msg.n = 0.39896593375971035;
    msg.e = 0.9993389984077825;
    msg.d = 0.17262773767008266;
    msg.v_n = 0.8359878876000434;
    msg.v_e = 0.4720427850676784;
    msg.v_d = 0.4730164644585768;
    msg.satellites = 234U;
    msg.iar_hyp = 9995U;
    msg.iar_ratio = 0.24489806056027907;

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
    msg.setTimeStamp(0.151689973447813);
    msg.setSource(55122U);
    msg.setSourceEntity(66U);
    msg.setDestination(57803U);
    msg.setDestinationEntity(232U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.04003832321369882;
    tmp_msg_0.lon = 0.14993241907119492;
    tmp_msg_0.height = 0.6765161848136914;
    tmp_msg_0.x = 0.9340633380698786;
    tmp_msg_0.y = 0.8769851036860645;
    tmp_msg_0.z = 0.2487137078618652;
    tmp_msg_0.phi = 0.8225891666629936;
    tmp_msg_0.theta = 0.5984152994095684;
    tmp_msg_0.psi = 0.45537567471514384;
    tmp_msg_0.u = 0.31758168180858126;
    tmp_msg_0.v = 0.6711091235957987;
    tmp_msg_0.w = 0.1339688086141605;
    tmp_msg_0.vx = 0.03600005381137017;
    tmp_msg_0.vy = 0.3905201971994361;
    tmp_msg_0.vz = 0.8294265569772898;
    tmp_msg_0.p = 0.42570712921582754;
    tmp_msg_0.q = 0.24093364319247956;
    tmp_msg_0.r = 0.5929670224671342;
    tmp_msg_0.depth = 0.3353996188413134;
    tmp_msg_0.alt = 0.41953693393564906;
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
    msg.setTimeStamp(0.23360069202120715);
    msg.setSource(36244U);
    msg.setSourceEntity(166U);
    msg.setDestination(9896U);
    msg.setDestinationEntity(89U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5128340830865509;
    tmp_msg_0.lon = 0.8267220111993132;
    tmp_msg_0.height = 0.16637504321793994;
    tmp_msg_0.x = 0.6967805954866519;
    tmp_msg_0.y = 0.7605988894928775;
    tmp_msg_0.z = 0.04984171872097687;
    tmp_msg_0.phi = 0.47383867486726505;
    tmp_msg_0.theta = 0.7586783937285545;
    tmp_msg_0.psi = 0.33122757110514023;
    tmp_msg_0.u = 0.8037579468277983;
    tmp_msg_0.v = 0.8414584029863242;
    tmp_msg_0.w = 0.18790520862311344;
    tmp_msg_0.vx = 0.5558016364376556;
    tmp_msg_0.vy = 0.038397053002301784;
    tmp_msg_0.vz = 0.1647907055161627;
    tmp_msg_0.p = 0.9091301387813953;
    tmp_msg_0.q = 0.2695212415518279;
    tmp_msg_0.r = 0.5338500019828429;
    tmp_msg_0.depth = 0.42348713352993983;
    tmp_msg_0.alt = 0.9571949812357627;
    msg.state.set(tmp_msg_0);
    msg.type = 205U;

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
    msg.setTimeStamp(0.2993033910163404);
    msg.setSource(36758U);
    msg.setSourceEntity(51U);
    msg.setDestination(58195U);
    msg.setDestinationEntity(126U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7083134610951398;
    tmp_msg_0.lon = 0.8660437177110144;
    tmp_msg_0.height = 0.6172177796819565;
    tmp_msg_0.x = 0.8585180431250954;
    tmp_msg_0.y = 0.2402465110655826;
    tmp_msg_0.z = 0.10915974368388726;
    tmp_msg_0.phi = 0.6911850328442365;
    tmp_msg_0.theta = 0.0018566833484355838;
    tmp_msg_0.psi = 0.5943357478921073;
    tmp_msg_0.u = 0.04268324139096269;
    tmp_msg_0.v = 0.47638024060066275;
    tmp_msg_0.w = 0.10376472775413681;
    tmp_msg_0.vx = 0.5091487522779438;
    tmp_msg_0.vy = 0.055420155772608615;
    tmp_msg_0.vz = 0.6655236353673989;
    tmp_msg_0.p = 0.2752172390148312;
    tmp_msg_0.q = 0.22003015391001224;
    tmp_msg_0.r = 0.8563600354335438;
    tmp_msg_0.depth = 0.5418500030797941;
    tmp_msg_0.alt = 0.7695292838306085;
    msg.state.set(tmp_msg_0);
    msg.type = 190U;

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
    msg.setTimeStamp(0.8903475718686499);
    msg.setSource(4210U);
    msg.setSourceEntity(155U);
    msg.setDestination(50545U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5058535710541063;

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
    msg.setTimeStamp(0.16940820399501766);
    msg.setSource(7468U);
    msg.setSourceEntity(214U);
    msg.setDestination(2852U);
    msg.setDestinationEntity(32U);
    msg.value = 0.012660884918071935;

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
    msg.setTimeStamp(0.1262627952943337);
    msg.setSource(9690U);
    msg.setSourceEntity(53U);
    msg.setDestination(63179U);
    msg.setDestinationEntity(65U);
    msg.value = 0.6750430329052667;

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
    msg.setTimeStamp(0.3024040450206027);
    msg.setSource(12664U);
    msg.setSourceEntity(42U);
    msg.setDestination(4483U);
    msg.setDestinationEntity(123U);
    msg.value = 0.34582538687540254;

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
    msg.setTimeStamp(0.45804551695233353);
    msg.setSource(4546U);
    msg.setSourceEntity(54U);
    msg.setDestination(31165U);
    msg.setDestinationEntity(51U);
    msg.value = 0.12135260254625357;

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
    msg.setTimeStamp(0.17499331070944835);
    msg.setSource(5779U);
    msg.setSourceEntity(35U);
    msg.setDestination(33913U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4200216155699943;

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
    msg.setTimeStamp(0.8228171234120206);
    msg.setSource(16252U);
    msg.setSourceEntity(68U);
    msg.setDestination(40516U);
    msg.setDestinationEntity(33U);
    msg.value = 0.9178849704917763;

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
    msg.setTimeStamp(0.9138722381559249);
    msg.setSource(16513U);
    msg.setSourceEntity(10U);
    msg.setDestination(3563U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5471790363385667;

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
    msg.setTimeStamp(0.6830619783967702);
    msg.setSource(46279U);
    msg.setSourceEntity(159U);
    msg.setDestination(30047U);
    msg.setDestinationEntity(152U);
    msg.value = 0.9492461012749529;

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
    msg.setTimeStamp(0.7385787904098856);
    msg.setSource(60599U);
    msg.setSourceEntity(24U);
    msg.setDestination(51232U);
    msg.setDestinationEntity(153U);
    msg.value = 0.616794072643917;

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
    msg.setTimeStamp(0.18362878768208213);
    msg.setSource(13059U);
    msg.setSourceEntity(210U);
    msg.setDestination(52986U);
    msg.setDestinationEntity(102U);
    msg.value = 0.15310369880722885;

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
    msg.setTimeStamp(0.8948928516646733);
    msg.setSource(20760U);
    msg.setSourceEntity(74U);
    msg.setDestination(12915U);
    msg.setDestinationEntity(207U);
    msg.value = 0.4946874627157857;

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
    msg.setTimeStamp(0.9764288964926267);
    msg.setSource(65350U);
    msg.setSourceEntity(115U);
    msg.setDestination(39187U);
    msg.setDestinationEntity(90U);
    msg.value = 0.7969339071334025;

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
    msg.setTimeStamp(0.19292855141473098);
    msg.setSource(12373U);
    msg.setSourceEntity(19U);
    msg.setDestination(58982U);
    msg.setDestinationEntity(81U);
    msg.value = 0.021610907243085675;

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
    msg.setTimeStamp(0.6355725385418572);
    msg.setSource(52307U);
    msg.setSourceEntity(192U);
    msg.setDestination(20319U);
    msg.setDestinationEntity(239U);
    msg.value = 0.6834795203069753;

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
    msg.setTimeStamp(0.49244732656610557);
    msg.setSource(217U);
    msg.setSourceEntity(228U);
    msg.setDestination(16332U);
    msg.setDestinationEntity(72U);
    msg.id = 143U;
    msg.zoom = 103U;
    msg.action = 250U;

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
    msg.setTimeStamp(0.0679636756120583);
    msg.setSource(16199U);
    msg.setSourceEntity(13U);
    msg.setDestination(47433U);
    msg.setDestinationEntity(125U);
    msg.id = 196U;
    msg.zoom = 9U;
    msg.action = 220U;

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
    msg.setTimeStamp(0.5194159552020748);
    msg.setSource(40441U);
    msg.setSourceEntity(45U);
    msg.setDestination(33898U);
    msg.setDestinationEntity(231U);
    msg.id = 244U;
    msg.zoom = 43U;
    msg.action = 49U;

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
    msg.setTimeStamp(0.3848356847175036);
    msg.setSource(23280U);
    msg.setSourceEntity(158U);
    msg.setDestination(31681U);
    msg.setDestinationEntity(117U);
    msg.id = 113U;
    msg.value = 0.7761410085534405;

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
    msg.setTimeStamp(0.5193857179719881);
    msg.setSource(8555U);
    msg.setSourceEntity(190U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(87U);
    msg.id = 216U;
    msg.value = 0.7635079249223856;

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
    msg.setTimeStamp(0.07921060815165881);
    msg.setSource(26945U);
    msg.setSourceEntity(99U);
    msg.setDestination(47385U);
    msg.setDestinationEntity(153U);
    msg.id = 100U;
    msg.value = 0.27426373925801795;

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
    msg.setTimeStamp(0.46184979727830466);
    msg.setSource(21018U);
    msg.setSourceEntity(83U);
    msg.setDestination(45799U);
    msg.setDestinationEntity(162U);
    msg.id = 141U;
    msg.value = 0.1263462813138605;

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
    msg.setTimeStamp(0.7396580860320521);
    msg.setSource(36035U);
    msg.setSourceEntity(246U);
    msg.setDestination(40552U);
    msg.setDestinationEntity(72U);
    msg.id = 29U;
    msg.value = 0.9987143480761579;

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
    msg.setTimeStamp(0.09253839434838818);
    msg.setSource(23933U);
    msg.setSourceEntity(63U);
    msg.setDestination(28700U);
    msg.setDestinationEntity(72U);
    msg.id = 64U;
    msg.value = 0.856267066488142;

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
    msg.setTimeStamp(0.6438779510633659);
    msg.setSource(57286U);
    msg.setSourceEntity(138U);
    msg.setDestination(19937U);
    msg.setDestinationEntity(70U);
    msg.id = 87U;
    msg.angle = 0.15470477259015813;

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
    msg.setTimeStamp(0.2737281375279417);
    msg.setSource(17322U);
    msg.setSourceEntity(160U);
    msg.setDestination(22305U);
    msg.setDestinationEntity(70U);
    msg.id = 49U;
    msg.angle = 0.37874517643346295;

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
    msg.setTimeStamp(0.9078123944244927);
    msg.setSource(35931U);
    msg.setSourceEntity(111U);
    msg.setDestination(34346U);
    msg.setDestinationEntity(251U);
    msg.id = 220U;
    msg.angle = 0.37809299701059906;

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
    msg.setTimeStamp(0.18706449732678088);
    msg.setSource(5580U);
    msg.setSourceEntity(182U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(19U);
    msg.op = 199U;
    msg.actions.assign("VQPBGQOJTSXIICFOEBKWGQAAKDKRPTKDRFXWGEIWJVCJTTYMCRJAEPOUHUBDNMNSEBLTZFVIKMDURLWDEDYLZFSEAWIUHDTGJFJVKYYOEUGBHJUDVYHUBAXRBRWZKSLVCZZPGDBQMYVQMOMQINHTQQQHWZWZXCMALGVNZHCNPGNQFJOKHMISOAOVCGXWACNLO");

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
    msg.setTimeStamp(0.10456765962057857);
    msg.setSource(63620U);
    msg.setSourceEntity(114U);
    msg.setDestination(48689U);
    msg.setDestinationEntity(253U);
    msg.op = 181U;
    msg.actions.assign("RVKYUCDOCYHBZKEEHTTOIJQAFFZXHSMWORIOBZTUQZQXPOBHRWMMUQPQLUIUFFDLQHGCMVJYLKWGRHXVYNDCRTSWLUTLDBNNGVAEPTKAEOBDVKRKEYPZCXFCMAMEYKCFRNGMCGGHPZTGPBUSNEMNKYNVQJIRSJWAQSILSZPJUOMNYEJDWGXFWSOPGRVXFXEVJPKHCDROZASBAFL");

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
    msg.setTimeStamp(0.06676130743412179);
    msg.setSource(4916U);
    msg.setSourceEntity(36U);
    msg.setDestination(8098U);
    msg.setDestinationEntity(109U);
    msg.op = 200U;
    msg.actions.assign("DSARBYNWHFTMSQPPBZQELNXGLCJCCHZGBQVSHRMPUQRWRHZDCTBDHFODVCIUKBPAAORYMNYUIOTJLFEKJIFEPXXHLCEKYGZWZPLDASIIONTJMHYFIXMIHZXQVAYOEJUPGXDAWCLHAVTTGVYSWTTWSGBEEFXOKLVALHYKXUKUQBWAOWRJVGIMQFPRTDNSKVCJSKTDENEMEADNBMCYVNPRKFOQWWZKVZZXJS");

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
    msg.setTimeStamp(0.6459893856482128);
    msg.setSource(43948U);
    msg.setSourceEntity(58U);
    msg.setDestination(60175U);
    msg.setDestinationEntity(33U);
    msg.actions.assign("ZZTZXLMHZVBGGRRUBOAWNCNSFFDQYSSQVJKCFGHLQUXIHRYOJVJNDPOBXYMUBTTWSWRYZATMOTBWDYKVMKMOXKNCTJVFCRLTVQHEBQCJEEIOFIUHLKHCAGWEIUAGQMCNWLASREWMIBAPIYVCZKALMPGZEGXZALISMNSDAQJUJSDMVFNPXYKOZNSTFTVHPWEODXYXTPPGYGDOHUDQBAKBUJNRGECBWZLF");

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
    msg.setTimeStamp(0.28395194907967714);
    msg.setSource(26132U);
    msg.setSourceEntity(151U);
    msg.setDestination(34159U);
    msg.setDestinationEntity(8U);
    msg.actions.assign("QYZBWOVWPUGZBACJKLJOLWPJRBDOOLBTCGAHM");

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
    msg.setTimeStamp(0.9740209373463699);
    msg.setSource(18132U);
    msg.setSourceEntity(233U);
    msg.setDestination(60725U);
    msg.setDestinationEntity(189U);
    msg.actions.assign("RHXCESUAKOTYUDRULLJVXAPEFTCGADNWMQMJWENYHAYWCHYQJWIGYLJHBRHADSYLPMHXQPRLREUWVYOMGGFFXEGIOTTOCMKGPMHZJVUGPULCKQGGTWJNSEUOIBCSZRUDFDK");

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
    msg.setTimeStamp(0.479426076180272);
    msg.setSource(55593U);
    msg.setSourceEntity(224U);
    msg.setDestination(33245U);
    msg.setDestinationEntity(60U);
    msg.button = 192U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.6865457210291555);
    msg.setSource(56227U);
    msg.setSourceEntity(31U);
    msg.setDestination(10567U);
    msg.setDestinationEntity(185U);
    msg.button = 6U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.08110779059156992);
    msg.setSource(61625U);
    msg.setSourceEntity(233U);
    msg.setDestination(2040U);
    msg.setDestinationEntity(132U);
    msg.button = 119U;
    msg.value = 83U;

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
    msg.setTimeStamp(0.10582978083377581);
    msg.setSource(56701U);
    msg.setSourceEntity(215U);
    msg.setDestination(57790U);
    msg.setDestinationEntity(240U);
    msg.op = 138U;
    msg.text.assign("ZSVOAWKBBEXREITJLHXJPVQNTSHYWRMBYJOPWKMLMWILWMHGJDOSPYFEDAYZXCEWITIEBSMOTENWYFAXVHZUSBHDYPMERSDVCLMCLBCTURMQROYLFHHAZNNDLOUXJTRGQSLCAUUCUCNKDJYUIEGNHVQCAJZDNJWXFSZUOKWPCFIFIPPZVBOPGQLGROZUSZMOJTIIATGQTWFKQGNVDBAYCYATDVF");

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
    msg.setTimeStamp(0.40269496435795427);
    msg.setSource(41932U);
    msg.setSourceEntity(25U);
    msg.setDestination(9501U);
    msg.setDestinationEntity(52U);
    msg.op = 171U;
    msg.text.assign("AZYHQKFJXVNQMUAXKJRGBIJFCSQVPEHFRKEHJBCASHDLYUENRWJABMHYOTODPMIENSTGOZKAXGMGXMNNFVCDBYQXNCRSUIIZRWPVQWAIDJUPVXLRTRRCPIZNQSAGUSPOCRWSUJZBLBLHYFUZAFRMLPFUOLYJWPEWDKCZTKIVEVQJJYIAIEBOQMXTGKGWTQSZUNPXEEMPLDBXYOHWCVEXDAFFLSGKWTDZOTYTMNZGBWKUKHOOIQYBSVD");

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
    msg.setTimeStamp(0.3155449841697402);
    msg.setSource(9899U);
    msg.setSourceEntity(147U);
    msg.setDestination(42071U);
    msg.setDestinationEntity(91U);
    msg.op = 117U;
    msg.text.assign("LCKNBPPYUWLZUSIQWZAZAOKWVZMMQVMLNVFNDLAEKWIGAGCJENQMJVNDXRKTXKRCBBYCJHXZYLDUPFGBHMFDAKKWPQRJYXDUPWZVTIEAXTLFJYIBQFRLRPBCVPSRAGVGJTCRHNYFSDEIXOUOHCUHEGEWKSNTTAJOSIYCMTVOOOASBWHGJRXFSSOZFNHMIHUBJGSOTFBQVGEMRUWDEYTIQONKYPWVFPXDLTPDQIZNLXCEQMUGIQMZDJHSR");

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
    msg.setTimeStamp(0.19617034763855834);
    msg.setSource(50152U);
    msg.setSourceEntity(241U);
    msg.setDestination(2524U);
    msg.setDestinationEntity(183U);
    msg.op = 87U;
    msg.time_remain = 0.2949730646503582;
    msg.sched_time = 0.07998172695417272;

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
    msg.setTimeStamp(0.9630621276487557);
    msg.setSource(38110U);
    msg.setSourceEntity(37U);
    msg.setDestination(53841U);
    msg.setDestinationEntity(124U);
    msg.op = 84U;
    msg.time_remain = 0.4375781364891146;
    msg.sched_time = 0.8163127083724177;

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
    msg.setTimeStamp(0.8479568035625031);
    msg.setSource(62333U);
    msg.setSourceEntity(128U);
    msg.setDestination(24449U);
    msg.setDestinationEntity(135U);
    msg.op = 167U;
    msg.time_remain = 0.7219068701351152;
    msg.sched_time = 0.07675852222386803;

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
    msg.setTimeStamp(0.18801295084141068);
    msg.setSource(36471U);
    msg.setSourceEntity(91U);
    msg.setDestination(40408U);
    msg.setDestinationEntity(181U);
    msg.name.assign("QGEWJULRSCEEYDBGTFKMRTQZQOKKPSDM");
    msg.op = 235U;
    msg.sched_time = 0.0038488287154098133;

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
    msg.setTimeStamp(0.09435015131156477);
    msg.setSource(54774U);
    msg.setSourceEntity(26U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(220U);
    msg.name.assign("OBJUAWUPPPDVGJSZIYFYUVLFCEUEHACXQCICDBGAMIKDWQLMQAZPRSTKMFTCWANAMUULWYNGBRUYDFQFQIBNYDOHIHRWIX");
    msg.op = 106U;
    msg.sched_time = 0.8433331100505265;

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
    msg.setTimeStamp(0.5376943463051986);
    msg.setSource(63069U);
    msg.setSourceEntity(1U);
    msg.setDestination(50361U);
    msg.setDestinationEntity(114U);
    msg.name.assign("EKNQCGNUFJUASPWXHOWOGVFLMKVLHCTWFZYIZUPKSZPLEMHGXFLCUTHHVVEVVLBEMRTEZYQYFJATQDMNPEHPMWZYSYMYENDLCATHKHGABAFNJWKQKEIRBXMSYNOOGWFQSTGRYIDPRDINAOCPIUDIIULPXLBFKAXPJJQZMDRRGKCBBVTLQRXVVSOYQSOBXUIOG");
    msg.op = 154U;
    msg.sched_time = 0.20296925591621573;

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
    msg.setTimeStamp(0.007060928905382791);
    msg.setSource(37419U);
    msg.setSourceEntity(178U);
    msg.setDestination(49168U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.9313301464244873);
    msg.setSource(28907U);
    msg.setSourceEntity(9U);
    msg.setDestination(45877U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.5791219988786575);
    msg.setSource(50496U);
    msg.setSourceEntity(132U);
    msg.setDestination(60365U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.25369116745494436);
    msg.setSource(29541U);
    msg.setSourceEntity(199U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(58U);
    msg.name.assign("IFTUHECYXNDKMUOAKUGUZKTOHSSKKPOZLBXNAESRFAPCFSUDBWSYWCXEQIYYNFERWVEXCMKHIZQFVLQGODGVGITMSFJZCXJPWAYNKWOLELBYRXWPONQBTLJNXJA");
    msg.state = 73U;

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
    msg.setTimeStamp(0.5423308613316823);
    msg.setSource(36013U);
    msg.setSourceEntity(103U);
    msg.setDestination(19687U);
    msg.setDestinationEntity(239U);
    msg.name.assign("XLBDBCGZNTPAAVKSPXUAPPKCIWYLBJFVJRHEUZGVJOHCFWPVQVSSRXOSNIPFMDDLZIOQXFKBYAXFEZSWJEXZDOMZNLOWDKPTBQGIYQRMQTBHEGNCHHHJITMXPSUEMYDYMHBVJGTTYOGUIOURCKRRGVKLONTFFIUWXLTEHVTAUMREZEUABZCKEWQCOW");
    msg.state = 32U;

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
    msg.setTimeStamp(0.8487440129241715);
    msg.setSource(32082U);
    msg.setSourceEntity(101U);
    msg.setDestination(12387U);
    msg.setDestinationEntity(73U);
    msg.name.assign("GGKKDMRBUNQGQZDDSIEXBUJJHXXGPJMBLCRQNVSIIAIVTNUKJBVWFDZKCYRNIBPEYLXBUSWVEWHZMXTNQCBDFLNWDBFFWFAZFHLKFPQOMKGVOEVLRETNLDHOJZCBKMPYQZWWIIR");
    msg.state = 129U;

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
    msg.setTimeStamp(0.19805884300397014);
    msg.setSource(45025U);
    msg.setSourceEntity(254U);
    msg.setDestination(23689U);
    msg.setDestinationEntity(201U);
    msg.name.assign("BOBULSILZDMVAYCTYWNCGELRITTQNBWSEBXNHLKAGZAWMGFGVTKGHJHLMRPXJFYFYUURUXCRQDHDIXCSVKECUXNKGDHUWPTZZYGXIBDCGPEXORIQNZMHCQDQQMJNOSZRYOQDAFSIYCQVVEJWTCXYWWBVKAWZMMDENSMFBJLUAIAFGVMPAZMTYIZJATWRHPUVDLFJSSTBHXYXNEOPZTSILOHCQOFRPLQ");
    msg.value = 148U;

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
    msg.setTimeStamp(0.18527062894165658);
    msg.setSource(56078U);
    msg.setSourceEntity(10U);
    msg.setDestination(5157U);
    msg.setDestinationEntity(228U);
    msg.name.assign("OVTASFLWIMQLLBPJIEVUFEKMAIHLHYWQJXJYTWDYITVAPGRCKNBIGNMUKUHXDENAXNKLHVBORNDPHKWICZYSQGPQSOCTIHWXGPFUVOPYPWMQGFKUUDZQDFTOZQMXSFCOKDOHCSZAVBQCEZDJMVAEENGEARGQXTBZMBM");
    msg.value = 232U;

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
    msg.setTimeStamp(0.4214376042349245);
    msg.setSource(12991U);
    msg.setSourceEntity(87U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(105U);
    msg.name.assign("LKEDCZLNJHFQTPWESWHUGLVDOGVUVFHXIDLMWAVQOMEMSWQZMSCDYCGFYSCFUNIVNJBXQHZATMOXXBMHASLDWDGOBLBQRGIBAR");
    msg.value = 53U;

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
    msg.setTimeStamp(0.09037375351811994);
    msg.setSource(17311U);
    msg.setSourceEntity(88U);
    msg.setDestination(63019U);
    msg.setDestinationEntity(17U);
    msg.name.assign("ZNRWXGAIXJWDXMTBLCIARJHROSWRHPHCKXIREASLNLXILUVPCYPGTTBOZBZKHKOTEFCDUDCXYGEAFZDQUYAORDVQTVMMGFSKFULXYNNKJHRILHZZBVJQWMLPFNNVFWOQCGQXPTEMGJFQPSBJGPAYAS");

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
    msg.setTimeStamp(0.4800256019326873);
    msg.setSource(4608U);
    msg.setSourceEntity(242U);
    msg.setDestination(44377U);
    msg.setDestinationEntity(169U);
    msg.name.assign("SDANZVVGCVJGUBWMSOPKTIVULYTQIMDIQNFZZFRRTGTYRKLNYWSPTGNAOREOEMOPWHJKWENQFHGJBNNXRQHIFKPLHXMDFEPGIEBDCILBDAFWQFZGYIVUMBQYCMXSCSQCZADPJXICYMAQTPUADVTMEAOFRXSZOICZVUNXOBYLUUSTVYVHAJWDXTLDHGPQKJTWNNSUURU");

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
    msg.setTimeStamp(0.40660544675338806);
    msg.setSource(59789U);
    msg.setSourceEntity(35U);
    msg.setDestination(64995U);
    msg.setDestinationEntity(188U);
    msg.name.assign("ZKOCIAESURCFVDKKYMCVXFIJWNTWRDWLQFBGQXOKWNNORJLQJTMJSROWBJCYWDRURUTYLQOHSPEVHSKZRDNTMEZSHEKUJVVHNZXSETEXPIXFGMUDSNJAZNAJGPMHXAAYAGBOQYTETVLVFCTCWXGHCY");

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
    msg.setTimeStamp(0.06915683235778236);
    msg.setSource(60551U);
    msg.setSourceEntity(31U);
    msg.setDestination(40939U);
    msg.setDestinationEntity(200U);
    msg.name.assign("ZCPSJJXEXKQYGEQAVVTRMRPEXGGDRYUMKLMGHWICAIPWXZTWHZSWQWJPHSJOSZNJIOAIG");
    msg.value = 238U;

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
    msg.setTimeStamp(0.2096555895566511);
    msg.setSource(52709U);
    msg.setSourceEntity(27U);
    msg.setDestination(7507U);
    msg.setDestinationEntity(116U);
    msg.name.assign("QZBGRWYWPUTZTECLYNIQQUPNVKFJDDAQH");
    msg.value = 144U;

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
    msg.setTimeStamp(0.9427533569930364);
    msg.setSource(56070U);
    msg.setSourceEntity(200U);
    msg.setDestination(21732U);
    msg.setDestinationEntity(209U);
    msg.name.assign("LTRXAIQWKRLZIQEGPIVSCWFQGMNXXVRASSYLSLMCAUUCPBKNUQKHGPMKYOLPYZAEJWUHJHDTFESCTHCM");
    msg.value = 70U;

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
    msg.setTimeStamp(0.03535527215626422);
    msg.setSource(24887U);
    msg.setSourceEntity(177U);
    msg.setDestination(35698U);
    msg.setDestinationEntity(253U);
    msg.id = 18U;
    msg.period = 2280461164U;
    msg.duty_cycle = 29413347U;

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
    msg.setTimeStamp(0.27030118407933224);
    msg.setSource(20345U);
    msg.setSourceEntity(132U);
    msg.setDestination(18442U);
    msg.setDestinationEntity(3U);
    msg.id = 0U;
    msg.period = 3302130754U;
    msg.duty_cycle = 1813364365U;

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
    msg.setTimeStamp(0.3151351638329639);
    msg.setSource(42604U);
    msg.setSourceEntity(6U);
    msg.setDestination(65048U);
    msg.setDestinationEntity(141U);
    msg.id = 53U;
    msg.period = 2084245679U;
    msg.duty_cycle = 3903483471U;

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
    msg.setTimeStamp(0.6177595869957815);
    msg.setSource(39686U);
    msg.setSourceEntity(182U);
    msg.setDestination(1762U);
    msg.setDestinationEntity(159U);
    msg.id = 199U;
    msg.period = 3064193068U;
    msg.duty_cycle = 1841375755U;

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
    msg.setTimeStamp(0.7844111792544968);
    msg.setSource(222U);
    msg.setSourceEntity(142U);
    msg.setDestination(2141U);
    msg.setDestinationEntity(142U);
    msg.id = 73U;
    msg.period = 1534273372U;
    msg.duty_cycle = 711359814U;

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
    msg.setTimeStamp(0.21576957651829676);
    msg.setSource(16421U);
    msg.setSourceEntity(57U);
    msg.setDestination(53515U);
    msg.setDestinationEntity(132U);
    msg.id = 30U;
    msg.period = 323974264U;
    msg.duty_cycle = 956515594U;

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
    msg.setTimeStamp(0.7593757630837421);
    msg.setSource(7687U);
    msg.setSourceEntity(216U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.32281954713213745;
    msg.lon = 0.02454966828211458;
    msg.height = 0.24024419268174035;
    msg.x = 0.7860171743960852;
    msg.y = 0.012026284714651614;
    msg.z = 0.613657290042692;
    msg.phi = 0.6444070957498081;
    msg.theta = 0.49520450849695197;
    msg.psi = 0.08353884658001565;
    msg.u = 0.6218048850137623;
    msg.v = 0.9920205199185173;
    msg.w = 0.012471968408441003;
    msg.vx = 0.3603950568091917;
    msg.vy = 0.21131733813563158;
    msg.vz = 0.834760486071887;
    msg.p = 0.24154223380785633;
    msg.q = 0.6600058883738541;
    msg.r = 0.3850976068770373;
    msg.depth = 0.027824265958545036;
    msg.alt = 0.15829257910672312;

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
    msg.setTimeStamp(0.7422462444750512);
    msg.setSource(63144U);
    msg.setSourceEntity(220U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.8440268905989992;
    msg.lon = 0.43774994065786565;
    msg.height = 0.44296247474808303;
    msg.x = 0.3531939025058738;
    msg.y = 0.8230848426897405;
    msg.z = 0.5287199651228811;
    msg.phi = 0.5709492405813935;
    msg.theta = 0.9411119131437404;
    msg.psi = 0.9804118291183999;
    msg.u = 0.2983262921174855;
    msg.v = 0.4962521558958156;
    msg.w = 0.28594150420888387;
    msg.vx = 0.23008499423119866;
    msg.vy = 0.9517718650701751;
    msg.vz = 0.795421933323967;
    msg.p = 0.3916095731456807;
    msg.q = 0.512829863487897;
    msg.r = 0.573579432782668;
    msg.depth = 0.3406393751934397;
    msg.alt = 0.9957689285194984;

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
    msg.setTimeStamp(0.7025067797663991);
    msg.setSource(21763U);
    msg.setSourceEntity(143U);
    msg.setDestination(13118U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.09226934533558773;
    msg.lon = 0.22793945776768643;
    msg.height = 0.7952552719958127;
    msg.x = 0.4083238573712935;
    msg.y = 0.5539267377649698;
    msg.z = 0.6576712662011873;
    msg.phi = 0.15664088983641533;
    msg.theta = 0.8647194058072925;
    msg.psi = 0.8225729958348379;
    msg.u = 0.7166123078642518;
    msg.v = 0.36517073096167174;
    msg.w = 0.8462018365918133;
    msg.vx = 0.019396828116732046;
    msg.vy = 0.8061547750046305;
    msg.vz = 0.615044181862838;
    msg.p = 0.3859824840098629;
    msg.q = 0.3548421228666193;
    msg.r = 0.7312225220143276;
    msg.depth = 0.5615196955436923;
    msg.alt = 0.2304080917626432;

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
    msg.setTimeStamp(0.6963660484203643);
    msg.setSource(48923U);
    msg.setSourceEntity(207U);
    msg.setDestination(28268U);
    msg.setDestinationEntity(200U);
    msg.x = 0.8943360383256691;
    msg.y = 0.4608480339140236;
    msg.z = 0.03943362561753849;

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
    msg.setTimeStamp(0.09695806590074263);
    msg.setSource(3732U);
    msg.setSourceEntity(226U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(159U);
    msg.x = 0.9143579251467095;
    msg.y = 0.4621875568762793;
    msg.z = 0.3916298821901394;

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
    msg.setTimeStamp(0.2900286834598892);
    msg.setSource(29185U);
    msg.setSourceEntity(92U);
    msg.setDestination(5514U);
    msg.setDestinationEntity(239U);
    msg.x = 0.9535847672229282;
    msg.y = 0.928753659279794;
    msg.z = 0.176359431940178;

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
    msg.setTimeStamp(0.14485176044540538);
    msg.setSource(12987U);
    msg.setSourceEntity(43U);
    msg.setDestination(61041U);
    msg.setDestinationEntity(79U);
    msg.value = 0.4270512203190511;

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
    msg.setTimeStamp(0.2959080434791689);
    msg.setSource(59311U);
    msg.setSourceEntity(199U);
    msg.setDestination(51774U);
    msg.setDestinationEntity(92U);
    msg.value = 0.8951210339192437;

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
    msg.setTimeStamp(0.30363203189522325);
    msg.setSource(34425U);
    msg.setSourceEntity(122U);
    msg.setDestination(45036U);
    msg.setDestinationEntity(30U);
    msg.value = 0.7277756442274583;

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
    msg.setTimeStamp(0.7237819026690855);
    msg.setSource(57501U);
    msg.setSourceEntity(236U);
    msg.setDestination(29699U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5409160054062933;

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
    msg.setTimeStamp(0.5579214615486832);
    msg.setSource(29474U);
    msg.setSourceEntity(248U);
    msg.setDestination(33319U);
    msg.setDestinationEntity(178U);
    msg.value = 0.08538140343214873;

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
    msg.setTimeStamp(0.29360879058895806);
    msg.setSource(60045U);
    msg.setSourceEntity(211U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(62U);
    msg.value = 0.34417099887201485;

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
    msg.setTimeStamp(0.14907735957881585);
    msg.setSource(33418U);
    msg.setSourceEntity(48U);
    msg.setDestination(58381U);
    msg.setDestinationEntity(166U);
    msg.x = 0.6385934510570989;
    msg.y = 0.3528655509473495;
    msg.z = 0.13805324239136063;
    msg.phi = 0.945893114383763;
    msg.theta = 0.7895977924322936;
    msg.psi = 0.7980971815211745;
    msg.p = 0.11698722320966348;
    msg.q = 0.35588875515512275;
    msg.r = 0.011158917807197244;
    msg.u = 0.26544331699868295;
    msg.v = 0.13552216106672577;
    msg.w = 0.10358481871574432;
    msg.bias_psi = 0.8981025423606789;
    msg.bias_r = 0.8792329821883863;

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
    msg.setTimeStamp(0.6967810384177652);
    msg.setSource(14167U);
    msg.setSourceEntity(118U);
    msg.setDestination(4486U);
    msg.setDestinationEntity(12U);
    msg.x = 0.7121890334848634;
    msg.y = 0.03720270282713478;
    msg.z = 0.6188115356964042;
    msg.phi = 0.09355097679303026;
    msg.theta = 0.20601154197140203;
    msg.psi = 0.10937248941490496;
    msg.p = 0.3529615030126636;
    msg.q = 0.4645554293049299;
    msg.r = 0.9691886067619955;
    msg.u = 0.4130235332852691;
    msg.v = 0.2764911006841805;
    msg.w = 0.8125938610985339;
    msg.bias_psi = 0.7216644410945368;
    msg.bias_r = 0.7656124762051709;

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
    msg.setTimeStamp(0.10461384112785355);
    msg.setSource(57745U);
    msg.setSourceEntity(30U);
    msg.setDestination(20544U);
    msg.setDestinationEntity(47U);
    msg.x = 0.38096728128254354;
    msg.y = 0.513401100436851;
    msg.z = 0.15217757248393016;
    msg.phi = 0.15426505472753205;
    msg.theta = 0.24079429523218143;
    msg.psi = 0.17616139681620102;
    msg.p = 0.633243967563317;
    msg.q = 0.13741126513496915;
    msg.r = 0.8586883299870481;
    msg.u = 0.4677801926186259;
    msg.v = 0.9148640420095254;
    msg.w = 0.536390245116897;
    msg.bias_psi = 0.8395261569871947;
    msg.bias_r = 0.8529599625305349;

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
    msg.setTimeStamp(0.06197705462652425);
    msg.setSource(46951U);
    msg.setSourceEntity(213U);
    msg.setDestination(57660U);
    msg.setDestinationEntity(143U);
    msg.bias_psi = 0.22011425127274997;
    msg.bias_r = 0.09176752690850909;
    msg.cog = 0.69295134464865;
    msg.cyaw = 0.45408891823738495;
    msg.lbl_rej_level = 0.4165732038454162;
    msg.gps_rej_level = 0.9371394511719472;
    msg.custom_x = 0.1743836467736134;
    msg.custom_y = 0.9269246012255379;
    msg.custom_z = 0.5169631158129803;

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
    msg.setTimeStamp(0.3460074504404861);
    msg.setSource(45947U);
    msg.setSourceEntity(120U);
    msg.setDestination(29382U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.8537157787794958;
    msg.bias_r = 0.1790630258552257;
    msg.cog = 0.2559092269472787;
    msg.cyaw = 0.9270548365501384;
    msg.lbl_rej_level = 0.6119223887739405;
    msg.gps_rej_level = 0.1756138547861057;
    msg.custom_x = 0.37363312242129054;
    msg.custom_y = 0.6437901184093316;
    msg.custom_z = 0.15835081262045037;

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
    msg.setTimeStamp(0.8619164384886094);
    msg.setSource(35875U);
    msg.setSourceEntity(75U);
    msg.setDestination(55835U);
    msg.setDestinationEntity(53U);
    msg.bias_psi = 0.26044957297162163;
    msg.bias_r = 0.14100652384693357;
    msg.cog = 0.9056888577251613;
    msg.cyaw = 0.7215943295658352;
    msg.lbl_rej_level = 0.5955166297167639;
    msg.gps_rej_level = 0.24456871781058986;
    msg.custom_x = 0.6004044894793411;
    msg.custom_y = 0.34313565358642806;
    msg.custom_z = 0.4879971518626355;

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
    msg.setTimeStamp(0.9033799052728906);
    msg.setSource(56321U);
    msg.setSourceEntity(218U);
    msg.setDestination(30129U);
    msg.setDestinationEntity(102U);
    msg.utc_time = 0.8557506693868013;
    msg.reason = 89U;

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
    msg.setTimeStamp(0.6769461712303926);
    msg.setSource(37801U);
    msg.setSourceEntity(133U);
    msg.setDestination(27797U);
    msg.setDestinationEntity(92U);
    msg.utc_time = 0.17795852440938886;
    msg.reason = 106U;

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
    msg.setTimeStamp(0.2588930989271868);
    msg.setSource(54912U);
    msg.setSourceEntity(171U);
    msg.setDestination(47444U);
    msg.setDestinationEntity(61U);
    msg.utc_time = 0.4087125918059201;
    msg.reason = 46U;

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
    msg.setTimeStamp(0.4885253673129206);
    msg.setSource(18035U);
    msg.setSourceEntity(91U);
    msg.setDestination(56268U);
    msg.setDestinationEntity(185U);
    msg.id = 224U;
    msg.range = 0.13847224788178192;
    msg.acceptance = 132U;

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
    msg.setTimeStamp(0.8621974110542481);
    msg.setSource(42945U);
    msg.setSourceEntity(180U);
    msg.setDestination(34492U);
    msg.setDestinationEntity(152U);
    msg.id = 142U;
    msg.range = 0.42737670116631576;
    msg.acceptance = 0U;

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
    msg.setTimeStamp(0.36006750759098627);
    msg.setSource(23494U);
    msg.setSourceEntity(35U);
    msg.setDestination(64735U);
    msg.setDestinationEntity(232U);
    msg.id = 74U;
    msg.range = 0.04839642556004509;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.7765093582047985);
    msg.setSource(65221U);
    msg.setSourceEntity(161U);
    msg.setDestination(21803U);
    msg.setDestinationEntity(38U);
    msg.type = 64U;
    msg.reason = 5U;
    msg.value = 0.9444277754401087;
    msg.timestep = 0.1469619951667569;

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
    msg.setTimeStamp(0.31854763390497975);
    msg.setSource(42954U);
    msg.setSourceEntity(96U);
    msg.setDestination(39928U);
    msg.setDestinationEntity(219U);
    msg.type = 195U;
    msg.reason = 132U;
    msg.value = 0.18357652055069085;
    msg.timestep = 0.07931493671222056;

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
    msg.setTimeStamp(0.2470602660238358);
    msg.setSource(14270U);
    msg.setSourceEntity(177U);
    msg.setDestination(32279U);
    msg.setDestinationEntity(143U);
    msg.type = 49U;
    msg.reason = 186U;
    msg.value = 0.7928476391076886;
    msg.timestep = 0.8882559156080487;

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
    msg.setTimeStamp(0.7576412021638246);
    msg.setSource(10994U);
    msg.setSourceEntity(11U);
    msg.setDestination(58017U);
    msg.setDestinationEntity(85U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LAWOEEDXDEPIHYXDWPTJSUHJBOARBQSVMBNQGJVXBHHYUNLITZZXMTPKXFPKCMEWNQSLODLCGNORFUOOPEVTLSBXYDKUOVEKZSFBVCQYLLNWNUFRQKYZUJWIINHIOGMYCWFKLWZPCPMBUWKOATXERCHHCHRQXMNJYDGJUIZCFZKFIGIAUVBJGDPKPTALMXCATINFRCQEASZJYNASIGQSXYKTGTGHEMVRVHWQUJLA");
    tmp_msg_0.lat = 0.44219634601470514;
    tmp_msg_0.lon = 0.6523015157359444;
    tmp_msg_0.depth = 0.5107510609386071;
    tmp_msg_0.query_channel = 157U;
    tmp_msg_0.reply_channel = 0U;
    tmp_msg_0.transponder_delay = 104U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7990932645117789;
    msg.y = 0.4409586700451137;
    msg.var_x = 0.1516704507083212;
    msg.var_y = 0.2307073024044236;
    msg.distance = 0.9456446697045098;

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
    msg.setTimeStamp(0.3045715224344451);
    msg.setSource(22318U);
    msg.setSourceEntity(205U);
    msg.setDestination(52252U);
    msg.setDestinationEntity(207U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EOFZIYXGTTRDSVBSTHSUCNSRXWVMRNUZXCJJTAVJPBVHJACNLLREKZADNKYGOJFZDJYKQWLTUDPXPCEMRARKCWGMQMNYSAETJUNVGLVAWKYGIXHFWOLXOPMGUHLINWHQIBJVPOILCNWQXDYETIANHYZNOEHIDGKDSFODBWUSODMYOHLUMXQASKMOJVBVZPKZBGK");
    tmp_msg_0.lat = 0.5259897129326837;
    tmp_msg_0.lon = 0.07688558029549741;
    tmp_msg_0.depth = 0.14596796023753122;
    tmp_msg_0.query_channel = 235U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 235U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6517085608383345;
    msg.y = 0.6305952966015325;
    msg.var_x = 0.3237016106479613;
    msg.var_y = 0.46366073251124684;
    msg.distance = 0.20270796302049232;

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
    msg.setTimeStamp(0.5538121795197751);
    msg.setSource(1783U);
    msg.setSourceEntity(185U);
    msg.setDestination(2927U);
    msg.setDestinationEntity(247U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UMJWVUUTMJNYDFZRFIOUPQGCEHYNCVCABSHDZYOWBVDGVYKMFNWDXDBMRPGANFVUVMWNLXSCJZUKPDEPJTZNAYHFABRFOIPHGPCGKXJHSIRWMYYBETEQQPGIYTIACYGMKRALIAJXHTVTLXHNRJTVOSQQOFZLVNZBUCRZDLRESDTB");
    tmp_msg_0.lat = 0.49807349784886124;
    tmp_msg_0.lon = 0.15943558236219335;
    tmp_msg_0.depth = 0.7174551473106143;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 31U;
    tmp_msg_0.transponder_delay = 212U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6801187735511837;
    msg.y = 0.4143877346884348;
    msg.var_x = 0.058503086501200174;
    msg.var_y = 0.4067012159349125;
    msg.distance = 0.7162656975541616;

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
    msg.setTimeStamp(0.8561043873415374);
    msg.setSource(6010U);
    msg.setSourceEntity(96U);
    msg.setDestination(7412U);
    msg.setDestinationEntity(176U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.6396807807706871);
    msg.setSource(61471U);
    msg.setSourceEntity(183U);
    msg.setDestination(13551U);
    msg.setDestinationEntity(21U);
    msg.state = 154U;

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
    msg.setTimeStamp(0.21599828599331827);
    msg.setSource(24854U);
    msg.setSourceEntity(231U);
    msg.setDestination(14686U);
    msg.setDestinationEntity(186U);
    msg.state = 112U;

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
    msg.setTimeStamp(0.15487557064183743);
    msg.setSource(36982U);
    msg.setSourceEntity(246U);
    msg.setDestination(47823U);
    msg.setDestinationEntity(113U);
    msg.x = 0.7364252735337963;
    msg.y = 0.7057383997562354;
    msg.z = 0.43745467111245506;

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
    msg.setTimeStamp(0.9673423251721425);
    msg.setSource(57608U);
    msg.setSourceEntity(227U);
    msg.setDestination(35269U);
    msg.setDestinationEntity(98U);
    msg.x = 0.269783304766813;
    msg.y = 0.6115730209133501;
    msg.z = 0.0975969684902872;

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
    msg.setTimeStamp(0.5652565864233543);
    msg.setSource(51450U);
    msg.setSourceEntity(107U);
    msg.setDestination(54448U);
    msg.setDestinationEntity(90U);
    msg.x = 0.41767346588133736;
    msg.y = 0.6941285593140154;
    msg.z = 0.04097378197191692;

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
    msg.setTimeStamp(0.29811195538320767);
    msg.setSource(61627U);
    msg.setSourceEntity(45U);
    msg.setDestination(51798U);
    msg.setDestinationEntity(84U);
    msg.va = 0.8779703513040581;
    msg.aoa = 0.6780829842264882;
    msg.ssa = 0.18811503397102702;

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
    msg.setTimeStamp(0.19021456954917526);
    msg.setSource(36937U);
    msg.setSourceEntity(62U);
    msg.setDestination(42281U);
    msg.setDestinationEntity(76U);
    msg.va = 0.5249802960890866;
    msg.aoa = 0.8171334404135921;
    msg.ssa = 0.22419293118151185;

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
    msg.setTimeStamp(0.2837299324494761);
    msg.setSource(39268U);
    msg.setSourceEntity(161U);
    msg.setDestination(759U);
    msg.setDestinationEntity(233U);
    msg.va = 0.5517586241097668;
    msg.aoa = 0.8901677619819163;
    msg.ssa = 0.8258915031358388;

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
    msg.setTimeStamp(0.611150821462416);
    msg.setSource(62938U);
    msg.setSourceEntity(39U);
    msg.setDestination(22996U);
    msg.setDestinationEntity(215U);
    msg.value = 0.5593360389659818;

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
    msg.setTimeStamp(0.5212266184341662);
    msg.setSource(42734U);
    msg.setSourceEntity(29U);
    msg.setDestination(24641U);
    msg.setDestinationEntity(23U);
    msg.value = 0.8462561159016085;

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
    msg.setTimeStamp(0.38300776026943406);
    msg.setSource(32419U);
    msg.setSourceEntity(68U);
    msg.setDestination(60950U);
    msg.setDestinationEntity(108U);
    msg.value = 0.24305238639556204;

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
    msg.setTimeStamp(0.9801829754021787);
    msg.setSource(2342U);
    msg.setSourceEntity(151U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(235U);
    msg.value = 0.17463467282115885;
    msg.z_units = 214U;

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
    msg.setTimeStamp(0.6459060871591968);
    msg.setSource(38909U);
    msg.setSourceEntity(76U);
    msg.setDestination(22724U);
    msg.setDestinationEntity(112U);
    msg.value = 0.6719261254730633;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.28728625721698087);
    msg.setSource(38562U);
    msg.setSourceEntity(88U);
    msg.setDestination(17240U);
    msg.setDestinationEntity(25U);
    msg.value = 0.22066999936793696;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.6670078776595457);
    msg.setSource(47897U);
    msg.setSourceEntity(111U);
    msg.setDestination(38507U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6796427886426258;
    msg.speed_units = 142U;

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
    msg.setTimeStamp(0.7762069995814953);
    msg.setSource(5262U);
    msg.setSourceEntity(82U);
    msg.setDestination(4605U);
    msg.setDestinationEntity(53U);
    msg.value = 0.6798668776099496;
    msg.speed_units = 5U;

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
    msg.setTimeStamp(0.5790112423044199);
    msg.setSource(18114U);
    msg.setSourceEntity(177U);
    msg.setDestination(13965U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8918707951701598;
    msg.speed_units = 224U;

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
    msg.setTimeStamp(0.8251371461584215);
    msg.setSource(28030U);
    msg.setSourceEntity(4U);
    msg.setDestination(38515U);
    msg.setDestinationEntity(137U);
    msg.value = 0.4577566008099502;

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
    msg.setTimeStamp(0.8740823650073711);
    msg.setSource(7534U);
    msg.setSourceEntity(211U);
    msg.setDestination(33466U);
    msg.setDestinationEntity(103U);
    msg.value = 0.6348312689459943;

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
    msg.setTimeStamp(0.47635034886369365);
    msg.setSource(51792U);
    msg.setSourceEntity(208U);
    msg.setDestination(12951U);
    msg.setDestinationEntity(248U);
    msg.value = 0.5866821427013079;

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
    msg.setTimeStamp(0.8073620813450838);
    msg.setSource(54513U);
    msg.setSourceEntity(175U);
    msg.setDestination(3152U);
    msg.setDestinationEntity(58U);
    msg.value = 0.7198938002954504;

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
    msg.setTimeStamp(0.687148456602194);
    msg.setSource(15292U);
    msg.setSourceEntity(78U);
    msg.setDestination(41706U);
    msg.setDestinationEntity(205U);
    msg.value = 0.13079435111470072;

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
    msg.setTimeStamp(0.030393790075399107);
    msg.setSource(48054U);
    msg.setSourceEntity(202U);
    msg.setDestination(46363U);
    msg.setDestinationEntity(241U);
    msg.value = 0.2833909148327727;

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
    msg.setTimeStamp(0.4285152970487962);
    msg.setSource(30960U);
    msg.setSourceEntity(93U);
    msg.setDestination(10290U);
    msg.setDestinationEntity(210U);
    msg.value = 0.8587161045284482;

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
    msg.setTimeStamp(0.22090468830288934);
    msg.setSource(10602U);
    msg.setSourceEntity(109U);
    msg.setDestination(34760U);
    msg.setDestinationEntity(178U);
    msg.value = 0.21036320960118693;

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
    msg.setTimeStamp(0.23276918865906182);
    msg.setSource(57623U);
    msg.setSourceEntity(160U);
    msg.setDestination(28232U);
    msg.setDestinationEntity(138U);
    msg.value = 0.0022134288658000045;

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
    msg.setTimeStamp(0.875996240486926);
    msg.setSource(59446U);
    msg.setSourceEntity(49U);
    msg.setDestination(30326U);
    msg.setDestinationEntity(62U);
    msg.path_ref = 3165919848U;
    msg.start_lat = 0.7142050060804658;
    msg.start_lon = 0.6370568363768122;
    msg.start_z = 0.6107307327568531;
    msg.start_z_units = 62U;
    msg.end_lat = 0.5713438559123136;
    msg.end_lon = 0.08814161835750822;
    msg.end_z = 0.9982771117996814;
    msg.end_z_units = 16U;
    msg.speed = 0.19171410473611428;
    msg.speed_units = 232U;
    msg.lradius = 0.4535855595869426;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.1558139786833065);
    msg.setSource(48762U);
    msg.setSourceEntity(204U);
    msg.setDestination(47856U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 3720788627U;
    msg.start_lat = 0.7053368257418592;
    msg.start_lon = 0.8737914894965848;
    msg.start_z = 0.24106830329874562;
    msg.start_z_units = 33U;
    msg.end_lat = 0.07756111223768614;
    msg.end_lon = 0.09844254310712819;
    msg.end_z = 0.9468465273643343;
    msg.end_z_units = 62U;
    msg.speed = 0.7474092305285414;
    msg.speed_units = 142U;
    msg.lradius = 0.9014119831420909;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.20184456029920528);
    msg.setSource(26066U);
    msg.setSourceEntity(60U);
    msg.setDestination(16063U);
    msg.setDestinationEntity(79U);
    msg.path_ref = 528040278U;
    msg.start_lat = 0.6578021132150592;
    msg.start_lon = 0.20603328091755213;
    msg.start_z = 0.7300182799794713;
    msg.start_z_units = 44U;
    msg.end_lat = 0.18952420196697417;
    msg.end_lon = 0.737720428708161;
    msg.end_z = 0.19757255349690728;
    msg.end_z_units = 249U;
    msg.speed = 0.9220114736198597;
    msg.speed_units = 174U;
    msg.lradius = 0.3339061309966418;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.25707638904501695);
    msg.setSource(35317U);
    msg.setSourceEntity(57U);
    msg.setDestination(2820U);
    msg.setDestinationEntity(78U);
    msg.x = 0.4484831573957191;
    msg.y = 0.1429250756023287;
    msg.z = 0.06292121406299522;
    msg.k = 0.6815080671480718;
    msg.m = 0.25376287981538614;
    msg.n = 0.16966239803641814;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.19942789294106755);
    msg.setSource(5161U);
    msg.setSourceEntity(59U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(183U);
    msg.x = 0.6703867391007694;
    msg.y = 0.9614528785996793;
    msg.z = 0.9199290873293933;
    msg.k = 0.8928371180920713;
    msg.m = 0.8444296163899702;
    msg.n = 0.196401633629129;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.7373767559316167);
    msg.setSource(10475U);
    msg.setSourceEntity(213U);
    msg.setDestination(8960U);
    msg.setDestinationEntity(55U);
    msg.x = 0.8334083726324482;
    msg.y = 0.05970441492684753;
    msg.z = 0.5874749578610873;
    msg.k = 0.47208623687940476;
    msg.m = 0.8122190207890224;
    msg.n = 0.9905883355403245;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.3590617974438506);
    msg.setSource(58298U);
    msg.setSourceEntity(206U);
    msg.setDestination(24765U);
    msg.setDestinationEntity(21U);
    msg.value = 0.35618920841884216;

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
    msg.setTimeStamp(0.8829507717843421);
    msg.setSource(58300U);
    msg.setSourceEntity(254U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(38U);
    msg.value = 0.13570288211457315;

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
    msg.setTimeStamp(0.7263911265956537);
    msg.setSource(937U);
    msg.setSourceEntity(152U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3588305820051323;

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
    msg.setTimeStamp(0.6320120000626601);
    msg.setSource(61990U);
    msg.setSourceEntity(206U);
    msg.setDestination(48739U);
    msg.setDestinationEntity(171U);
    msg.u = 0.5548419436359614;
    msg.v = 0.3889516719764916;
    msg.w = 0.2889847290137707;
    msg.p = 0.4114697006351753;
    msg.q = 0.8679959815036221;
    msg.r = 0.25131403355396253;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.8412689381486033);
    msg.setSource(43795U);
    msg.setSourceEntity(27U);
    msg.setDestination(5424U);
    msg.setDestinationEntity(168U);
    msg.u = 0.7800302103457512;
    msg.v = 0.3743672315865505;
    msg.w = 0.9891695183458141;
    msg.p = 0.23722890717457035;
    msg.q = 0.44396931983580123;
    msg.r = 0.9054181529643142;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.27867488261328544);
    msg.setSource(59204U);
    msg.setSourceEntity(43U);
    msg.setDestination(16541U);
    msg.setDestinationEntity(16U);
    msg.u = 0.44656276383642246;
    msg.v = 0.8147093720554618;
    msg.w = 0.11501943851878083;
    msg.p = 0.6028909712328497;
    msg.q = 0.10584421449829862;
    msg.r = 0.6784704733720969;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.5716729198498777);
    msg.setSource(5488U);
    msg.setSourceEntity(248U);
    msg.setDestination(37093U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 398255379U;
    msg.start_lat = 0.6001590300695839;
    msg.start_lon = 0.2963027482275722;
    msg.start_z = 0.4195279156063181;
    msg.start_z_units = 226U;
    msg.end_lat = 0.42959708136611874;
    msg.end_lon = 0.42224653543830204;
    msg.end_z = 0.7843430253136923;
    msg.end_z_units = 32U;
    msg.lradius = 0.12316766818873304;
    msg.flags = 60U;
    msg.x = 0.6284940488431914;
    msg.y = 0.9291117168256594;
    msg.z = 0.005576494198019977;
    msg.vx = 0.2246271135506439;
    msg.vy = 0.7622398826774346;
    msg.vz = 0.057574293431933876;
    msg.course_error = 0.6821206193457007;
    msg.eta = 5865U;

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
    msg.setTimeStamp(0.61621398268309);
    msg.setSource(6075U);
    msg.setSourceEntity(165U);
    msg.setDestination(48253U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 137374518U;
    msg.start_lat = 0.021027203824070306;
    msg.start_lon = 0.04946983656852444;
    msg.start_z = 0.2926450227761046;
    msg.start_z_units = 153U;
    msg.end_lat = 0.8257991309611133;
    msg.end_lon = 0.4659619109904467;
    msg.end_z = 0.16081425502943325;
    msg.end_z_units = 134U;
    msg.lradius = 0.4997237996447931;
    msg.flags = 75U;
    msg.x = 0.44305412288342416;
    msg.y = 0.69938243064918;
    msg.z = 0.9145814853285312;
    msg.vx = 0.13617831167486683;
    msg.vy = 0.30176663627775235;
    msg.vz = 0.8947009877287101;
    msg.course_error = 0.9529772673210493;
    msg.eta = 11604U;

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
    msg.setTimeStamp(0.27341383806423747);
    msg.setSource(32740U);
    msg.setSourceEntity(77U);
    msg.setDestination(45886U);
    msg.setDestinationEntity(195U);
    msg.path_ref = 363500318U;
    msg.start_lat = 0.28708599057501794;
    msg.start_lon = 0.6902903198556513;
    msg.start_z = 0.24975373065069706;
    msg.start_z_units = 203U;
    msg.end_lat = 0.1602904114593804;
    msg.end_lon = 0.1544137034367281;
    msg.end_z = 0.6986127424154333;
    msg.end_z_units = 233U;
    msg.lradius = 0.43654626680562125;
    msg.flags = 4U;
    msg.x = 0.7065816257087782;
    msg.y = 0.9282385475152156;
    msg.z = 0.2480034851814844;
    msg.vx = 0.2658114963262834;
    msg.vy = 0.1635522365156642;
    msg.vz = 0.7953148785939553;
    msg.course_error = 0.9268420366882227;
    msg.eta = 30074U;

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
    msg.setTimeStamp(0.010664073146352093);
    msg.setSource(62358U);
    msg.setSourceEntity(244U);
    msg.setDestination(2068U);
    msg.setDestinationEntity(95U);
    msg.k = 0.5445718638792784;
    msg.m = 0.14874271474117418;
    msg.n = 0.9235573763109038;

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
    msg.setTimeStamp(0.227447386090337);
    msg.setSource(42693U);
    msg.setSourceEntity(146U);
    msg.setDestination(25490U);
    msg.setDestinationEntity(147U);
    msg.k = 0.9005821331590441;
    msg.m = 0.292024619586588;
    msg.n = 0.7184508377307212;

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
    msg.setTimeStamp(0.4923484420431077);
    msg.setSource(50372U);
    msg.setSourceEntity(48U);
    msg.setDestination(40089U);
    msg.setDestinationEntity(62U);
    msg.k = 0.9329852476417175;
    msg.m = 0.11426886768210365;
    msg.n = 0.9028314099814042;

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
    msg.setTimeStamp(0.17003395754983408);
    msg.setSource(48107U);
    msg.setSourceEntity(170U);
    msg.setDestination(30676U);
    msg.setDestinationEntity(219U);
    msg.p = 0.8868212879836297;
    msg.i = 0.9599521418040577;
    msg.d = 0.863140357882729;
    msg.a = 0.02800037161010438;

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
    msg.setTimeStamp(0.30979059708311163);
    msg.setSource(56072U);
    msg.setSourceEntity(125U);
    msg.setDestination(26979U);
    msg.setDestinationEntity(102U);
    msg.p = 0.7756477387981784;
    msg.i = 0.9285430847312489;
    msg.d = 0.6450243664555207;
    msg.a = 0.7141264514499179;

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
    msg.setTimeStamp(0.6194292029159285);
    msg.setSource(43117U);
    msg.setSourceEntity(201U);
    msg.setDestination(15558U);
    msg.setDestinationEntity(3U);
    msg.p = 0.25345875619371994;
    msg.i = 0.14154416390590474;
    msg.d = 0.4007902272221685;
    msg.a = 0.7646428808111293;

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
    msg.setTimeStamp(0.7936787822268788);
    msg.setSource(55229U);
    msg.setSourceEntity(46U);
    msg.setDestination(28083U);
    msg.setDestinationEntity(243U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.6128261768144542);
    msg.setSource(7810U);
    msg.setSourceEntity(238U);
    msg.setDestination(43748U);
    msg.setDestinationEntity(175U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.28874652052972416);
    msg.setSource(36251U);
    msg.setSourceEntity(129U);
    msg.setDestination(20461U);
    msg.setDestinationEntity(107U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.25928895646480754);
    msg.setSource(9895U);
    msg.setSourceEntity(48U);
    msg.setDestination(59843U);
    msg.setDestinationEntity(146U);
    msg.x = 0.344944505216925;
    msg.y = 0.3051975090714856;
    msg.z = 0.8271609720327184;
    msg.vx = 0.17762751667690824;
    msg.vy = 0.625452921250583;
    msg.vz = 0.6190348224328225;
    msg.ax = 0.8157256727871957;
    msg.ay = 0.14119127220824812;
    msg.az = 0.20222820248266937;
    msg.flags = 29399U;

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
    msg.setTimeStamp(0.2575850624663316);
    msg.setSource(3689U);
    msg.setSourceEntity(94U);
    msg.setDestination(19386U);
    msg.setDestinationEntity(81U);
    msg.x = 0.9319744976021167;
    msg.y = 0.867641738325838;
    msg.z = 0.05253227102193525;
    msg.vx = 0.17491134093780758;
    msg.vy = 0.11229420484241448;
    msg.vz = 0.30456714563608767;
    msg.ax = 0.49020989570406936;
    msg.ay = 0.3101424361694247;
    msg.az = 0.7789697357430332;
    msg.flags = 56429U;

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
    msg.setTimeStamp(0.5409578620553515);
    msg.setSource(13597U);
    msg.setSourceEntity(28U);
    msg.setDestination(29259U);
    msg.setDestinationEntity(51U);
    msg.x = 0.7651359572882561;
    msg.y = 0.908270867893826;
    msg.z = 0.004910598868556715;
    msg.vx = 0.8516855761899006;
    msg.vy = 0.5118816312255056;
    msg.vz = 0.6210913113245866;
    msg.ax = 0.7242480777275565;
    msg.ay = 0.08874542346020953;
    msg.az = 0.6903756873143878;
    msg.flags = 27036U;

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
    msg.setTimeStamp(0.8290280655199286);
    msg.setSource(47674U);
    msg.setSourceEntity(184U);
    msg.setDestination(14563U);
    msg.setDestinationEntity(129U);
    msg.value = 0.37595259558185057;

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
    msg.setTimeStamp(0.36074203557837536);
    msg.setSource(60669U);
    msg.setSourceEntity(171U);
    msg.setDestination(35306U);
    msg.setDestinationEntity(94U);
    msg.value = 0.980248441705647;

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
    msg.setTimeStamp(0.8371362184251699);
    msg.setSource(37159U);
    msg.setSourceEntity(44U);
    msg.setDestination(51255U);
    msg.setDestinationEntity(83U);
    msg.value = 0.31743429310605353;

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
    msg.setTimeStamp(0.9019354508453853);
    msg.setSource(21019U);
    msg.setSourceEntity(66U);
    msg.setDestination(33351U);
    msg.setDestinationEntity(206U);
    msg.timeout = 28815U;
    msg.lat = 0.11057762078203348;
    msg.lon = 0.1862582883401872;
    msg.z = 0.5111989393182521;
    msg.z_units = 90U;
    msg.speed = 0.6584032005283931;
    msg.speed_units = 2U;
    msg.roll = 0.3164692218925076;
    msg.pitch = 0.5458480771388411;
    msg.yaw = 0.5604986445184071;
    msg.custom.assign("SQRMKSNDIEDGREXLTNOQBVJFRCUPDHZHAWUUUXWNVQGMJSQTSWBDMRXCODLAZMLVBCPZVOFHSZWJCPDAGLINACBYHYJVKYBDROPKVHDYGYOIJWKEPTAZSALMCTVLBGEITMRGFTZWNQGSKNMDKJRUKYTBFASJZCFSRSTFKGJFKGIHABLNOHEEOPHUJXLUGMHIWDCFWPXNCOVAQPYTQEXZXHEQPRMINYZAPMOIF");

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
    msg.setTimeStamp(0.7232561804472006);
    msg.setSource(54897U);
    msg.setSourceEntity(98U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(124U);
    msg.timeout = 56988U;
    msg.lat = 0.5082808188812367;
    msg.lon = 0.7482788989096356;
    msg.z = 0.005199099522636863;
    msg.z_units = 230U;
    msg.speed = 0.31577990115705545;
    msg.speed_units = 149U;
    msg.roll = 0.05470620579931573;
    msg.pitch = 0.9607177995261356;
    msg.yaw = 0.853147670613044;
    msg.custom.assign("DQJQNJBFOPJEHDUVUXSLXZDSZYBQNYSVTCIRDBLFVWXMELNMHKUDRZAMMIPNCCRJJAGTOUJQHWEUKKIXIAFLXMPJLOGVAYVDPADXETIITZMOOCVQPRBSTEGXRIMLFVGCHGSMOKBGXJZYWZZGYGUKLINBQLYPUNOWFFWOQFLHSLEUGHAEFDAOPBWBCPTXTFEOPCQQH");

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
    msg.setTimeStamp(0.21038467786633774);
    msg.setSource(18746U);
    msg.setSourceEntity(222U);
    msg.setDestination(28261U);
    msg.setDestinationEntity(235U);
    msg.timeout = 49177U;
    msg.lat = 0.850060001096884;
    msg.lon = 0.4823391516235198;
    msg.z = 0.2220688442736305;
    msg.z_units = 243U;
    msg.speed = 0.31729340944368134;
    msg.speed_units = 179U;
    msg.roll = 0.6578929048029666;
    msg.pitch = 0.5521947443174409;
    msg.yaw = 0.5806669335382435;
    msg.custom.assign("UEZHBHQQESXFIVCDDXTNSMDMSWKDZWZTKXDLOJOIYKUJNYLZUGXFRBEVVKTPRRSVRPWZTACTKFIGGDLMISEBMAIZYTWLMUIXCHDKMNJSVSNCNGRECDLUYIXUKBFNYEGNEGLIBXPYHKQSPWWLOYOMGGBWROQBCGWKSFOBAHVQJHHGAXZBPWUQMKYTMAAQFQJUVAREYRHLEOYJSCUAXVPLCFHTLNXJQVZQO");

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
    msg.setTimeStamp(0.8421412049679071);
    msg.setSource(45159U);
    msg.setSourceEntity(158U);
    msg.setDestination(39605U);
    msg.setDestinationEntity(13U);
    msg.timeout = 58501U;
    msg.lat = 0.025026840472437084;
    msg.lon = 0.29004129545400614;
    msg.z = 0.6325420927347404;
    msg.z_units = 254U;
    msg.speed = 0.581212280325507;
    msg.speed_units = 69U;
    msg.duration = 65350U;
    msg.radius = 0.2537298247870632;
    msg.flags = 160U;
    msg.custom.assign("MNUFVBVLZFFNPIEEUEQA");

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
    msg.setTimeStamp(0.2577986350424174);
    msg.setSource(20613U);
    msg.setSourceEntity(245U);
    msg.setDestination(35217U);
    msg.setDestinationEntity(155U);
    msg.timeout = 22720U;
    msg.lat = 0.6745572649515444;
    msg.lon = 0.3572191987571852;
    msg.z = 0.28665195134115107;
    msg.z_units = 16U;
    msg.speed = 0.381931639960019;
    msg.speed_units = 188U;
    msg.duration = 62623U;
    msg.radius = 0.2795027509490944;
    msg.flags = 242U;
    msg.custom.assign("NGWEFANJLFZQHMAXIJJVORISPRGGLXYQDZCEFIYJXHGGNJRHSBPEGROPJATVFFHJJBRTIUUDZXDLMZCHGKKVYNMPARLRUPQWKCMRASIZODCVYOQDGCSPWFCPNCBSQDLFXYHQIVOTMICOEFDOXBODTYIHVXWUVLMZJWUTBPEKUEZTAOUKAUMQSCYDHMRKLOEXNZWLRIIJVESTKWYLNKSCESKAF");

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
    msg.setTimeStamp(0.7749849027210427);
    msg.setSource(29413U);
    msg.setSourceEntity(248U);
    msg.setDestination(34799U);
    msg.setDestinationEntity(177U);
    msg.timeout = 30987U;
    msg.lat = 0.4354159188182779;
    msg.lon = 0.7040083938888676;
    msg.z = 0.9032061121985436;
    msg.z_units = 160U;
    msg.speed = 0.8721278892304276;
    msg.speed_units = 16U;
    msg.duration = 14727U;
    msg.radius = 0.682207242184628;
    msg.flags = 66U;
    msg.custom.assign("DZDMSEHJBXAMKYISBPXMEMDPJKUERVGQONCQWHKHBOIIYGHTBPXTJFWVNAOMXPBGKXWYEDGLKW");

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
    msg.setTimeStamp(0.6612246743317932);
    msg.setSource(52776U);
    msg.setSourceEntity(66U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(194U);
    msg.custom.assign("WYKHDRUONEQCDCGFCPSTSDBKNVMTYTJBHYVYMXCKWLEHJGHTYONZXBYOBTGRRIQYFPCTVIOUXIBAXEWFBJKPUPRVULWQOLMUKZJDASMOJCMCWHQXX");

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
    msg.setTimeStamp(0.1479330812916968);
    msg.setSource(8649U);
    msg.setSourceEntity(13U);
    msg.setDestination(27341U);
    msg.setDestinationEntity(159U);
    msg.custom.assign("HVLGQCUWNORSNKGAKWTQABM");

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
    msg.setTimeStamp(0.278008724885058);
    msg.setSource(12206U);
    msg.setSourceEntity(49U);
    msg.setDestination(20450U);
    msg.setDestinationEntity(240U);
    msg.custom.assign("WPKROEKMVBFZXAGBXLGYHXVESZFRZNTFSKGJHNSWLYUMELQPBGFUAZXQAIEVIECXQITJXCPQWNBZYENIYDNHUOXTOYDZWUJGANOHJISWSYRULULRKBJWGRUYCOPCS");

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
    msg.setTimeStamp(0.9147367368669242);
    msg.setSource(15860U);
    msg.setSourceEntity(140U);
    msg.setDestination(11728U);
    msg.setDestinationEntity(87U);
    msg.timeout = 55301U;
    msg.lat = 0.9676853868099247;
    msg.lon = 0.2996256255864287;
    msg.z = 0.9411536627416175;
    msg.z_units = 218U;
    msg.duration = 38285U;
    msg.speed = 0.29289216860765055;
    msg.speed_units = 87U;
    msg.type = 43U;
    msg.radius = 0.2682305199756556;
    msg.length = 0.10354288173251092;
    msg.bearing = 0.5784216076025015;
    msg.direction = 137U;
    msg.custom.assign("GFRETBCYWOXESJKTIQJRD");

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
    msg.setTimeStamp(0.8106424256562418);
    msg.setSource(64724U);
    msg.setSourceEntity(247U);
    msg.setDestination(30687U);
    msg.setDestinationEntity(186U);
    msg.timeout = 17979U;
    msg.lat = 0.044896133450936015;
    msg.lon = 0.3650878832395408;
    msg.z = 0.8562914426118333;
    msg.z_units = 171U;
    msg.duration = 61884U;
    msg.speed = 0.5206664933091113;
    msg.speed_units = 126U;
    msg.type = 2U;
    msg.radius = 0.956685726605327;
    msg.length = 0.49840806884015854;
    msg.bearing = 0.9912109907740644;
    msg.direction = 141U;
    msg.custom.assign("OHNXOWHBSSUYBTJAZQJTRAUJESQSKGDEEZEDOQVLWPSEZJBFDNFYZNTDLKSAVXNVGWUPODQFOFZRHFIKPMAITAXLVWQCCCBZMUAARAJCORBIGLZMXRFMWODZEJDCPLWYRVTYMPDXWXFTCMNGHBGTXUQHFMDMJUCHKUEEMVZLIYKUGP");

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
    msg.setTimeStamp(0.5491786422488342);
    msg.setSource(19142U);
    msg.setSourceEntity(73U);
    msg.setDestination(14028U);
    msg.setDestinationEntity(63U);
    msg.timeout = 35640U;
    msg.lat = 0.13842310651467227;
    msg.lon = 0.4003860261661697;
    msg.z = 0.6469888056570612;
    msg.z_units = 240U;
    msg.duration = 18128U;
    msg.speed = 0.9371294112656781;
    msg.speed_units = 47U;
    msg.type = 161U;
    msg.radius = 0.04789634436529033;
    msg.length = 0.8867782917038032;
    msg.bearing = 0.2947005368019373;
    msg.direction = 144U;
    msg.custom.assign("ELHSDSSKYCQBZJXCWWGCJTJWZXQDTVOROLJIFKUKCQDGXGOLPNPPARHDGLXJBNFFDZBNZFVNOUFMAHLGKUNEROWZQNBIHTTVVSSBNQAECRZCXSPFWFAEQWLIU");

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
    msg.setTimeStamp(0.9270479816380934);
    msg.setSource(38159U);
    msg.setSourceEntity(13U);
    msg.setDestination(17456U);
    msg.setDestinationEntity(185U);
    msg.duration = 29384U;
    msg.custom.assign("CKHSNUCKYNIIXJGWCAREUVZLGSFUTRRMMPLEBQSJJAVGDOOPLVVADDHIRGLFXSCDIFUTSUGVXMEMYMZXPYCQLANLYPNETMUFZDS");

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
    msg.setTimeStamp(0.14292944419628062);
    msg.setSource(58841U);
    msg.setSourceEntity(205U);
    msg.setDestination(56646U);
    msg.setDestinationEntity(251U);
    msg.duration = 19102U;
    msg.custom.assign("FNMTXDHIFPCDHSMWGPIPZFIXFHVZWUXPTEUIKEOGMTWOFQTNDWJKPVYWAQGRNXACKZHGAYEBYVLCOXNUTXYKSYQZBCCQBBLOEYJLGQSZLUGCXIXQRDLO");

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
    msg.setTimeStamp(0.4908701458541014);
    msg.setSource(42421U);
    msg.setSourceEntity(2U);
    msg.setDestination(33890U);
    msg.setDestinationEntity(202U);
    msg.duration = 37256U;
    msg.custom.assign("OWQVOCUNQCIWGMRYMUBBMLUGNPABFFQXEFIWHZTNRVKVVPNKTFATCNRYJTHJQCASLUYJKVSPTIWJZOLWXBTAYHEXDSXATMIXYWLVXEQCOPKERMGPXSSKPYUJLDJMANXGJNBZHDGILHMLJUBQYDQCZGQEFWTZHZ");

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
    msg.setTimeStamp(0.2629789473548808);
    msg.setSource(23218U);
    msg.setSourceEntity(216U);
    msg.setDestination(17065U);
    msg.setDestinationEntity(99U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.649297326260244;
    msg.control.set(tmp_msg_0);
    msg.duration = 41629U;
    msg.custom.assign("TUIFMEMYNTPFAWEBAAKVTPJPQVZDLZGJRGLZLLQEKPSOBQJMWXUGHKXESUBXSOMYGIIJHYSWXBZGZCPCCNXZEPH");

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
    msg.setTimeStamp(0.27079859850819765);
    msg.setSource(6778U);
    msg.setSourceEntity(253U);
    msg.setDestination(22858U);
    msg.setDestinationEntity(57U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.3958391293166844;
    tmp_msg_0.z_units = 253U;
    msg.control.set(tmp_msg_0);
    msg.duration = 59028U;
    msg.custom.assign("FRHMPYSTDJCFRUAMQBLUKCPWEDWQIBHAXYGNQIDNXDVQVVBUEIETXFGLDRFLKXGEYGFBFZQRUTIXOTWNCGTSADJPXHTHZJOCUAPURLSMBBINRDODKFYJSBNCZEDVRHJOVPIKRKSZO");

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
    msg.setTimeStamp(0.45421529611192457);
    msg.setSource(50806U);
    msg.setSourceEntity(113U);
    msg.setDestination(50251U);
    msg.setDestinationEntity(177U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2140893369U;
    tmp_msg_0.start_lat = 0.41122775662816635;
    tmp_msg_0.start_lon = 0.3247021652680686;
    tmp_msg_0.start_z = 0.39496019672755966;
    tmp_msg_0.start_z_units = 203U;
    tmp_msg_0.end_lat = 0.4303674391222839;
    tmp_msg_0.end_lon = 0.8735375148111245;
    tmp_msg_0.end_z = 0.9854872738041639;
    tmp_msg_0.end_z_units = 234U;
    tmp_msg_0.speed = 0.7277169532531815;
    tmp_msg_0.speed_units = 85U;
    tmp_msg_0.lradius = 0.9454297967833141;
    tmp_msg_0.flags = 26U;
    msg.control.set(tmp_msg_0);
    msg.duration = 32366U;
    msg.custom.assign("UNJEIRMSKLIFDGZXQQKXRCIRICOTCUWGMRXMJKPHSXITSCDJKCSPQYBHYVSGHUCZHLCXNUDKMMWEOEPPKMOXQHOEBPXHYWEFUGNZCSAOBNAPETAFEQUJFTPLINCBNTVRWFVGQLHBVIJFYMNAUIEYSDHBNGWPOFDA");

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
    msg.setTimeStamp(0.6253462593107121);
    msg.setSource(23609U);
    msg.setSourceEntity(72U);
    msg.setDestination(33671U);
    msg.setDestinationEntity(11U);
    msg.timeout = 46232U;
    msg.lat = 0.20993805707822388;
    msg.lon = 0.17077544965006475;
    msg.z = 0.23586661508810147;
    msg.z_units = 41U;
    msg.speed = 0.025537708261611614;
    msg.speed_units = 209U;
    msg.bearing = 0.907147566754166;
    msg.cross_angle = 0.5529458668432272;
    msg.width = 0.4950631290900801;
    msg.length = 0.5897582687402544;
    msg.hstep = 0.9853429179107446;
    msg.coff = 250U;
    msg.alternation = 127U;
    msg.flags = 113U;
    msg.custom.assign("HENVJCAFJGFSERI");

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
    msg.setTimeStamp(0.465852644346079);
    msg.setSource(64175U);
    msg.setSourceEntity(169U);
    msg.setDestination(51273U);
    msg.setDestinationEntity(128U);
    msg.timeout = 49430U;
    msg.lat = 0.6107033106102696;
    msg.lon = 0.8282154694315237;
    msg.z = 0.12555885507033382;
    msg.z_units = 39U;
    msg.speed = 0.6866158475320341;
    msg.speed_units = 103U;
    msg.bearing = 0.5898410499208101;
    msg.cross_angle = 0.489529188791082;
    msg.width = 0.6773386595327344;
    msg.length = 0.6840788688149598;
    msg.hstep = 0.22338934956165024;
    msg.coff = 177U;
    msg.alternation = 21U;
    msg.flags = 191U;
    msg.custom.assign("HVPZSPBLKXAAGMAYMUYTLRTQJJCSCIZLPCHQIFAHLAROGGN");

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
    msg.setTimeStamp(0.47906429995446564);
    msg.setSource(59933U);
    msg.setSourceEntity(34U);
    msg.setDestination(5340U);
    msg.setDestinationEntity(151U);
    msg.timeout = 44852U;
    msg.lat = 0.06022498610353;
    msg.lon = 0.11682930779468559;
    msg.z = 0.9712014977221876;
    msg.z_units = 43U;
    msg.speed = 0.10854768072647947;
    msg.speed_units = 43U;
    msg.bearing = 0.6549851681452608;
    msg.cross_angle = 0.6046624784048816;
    msg.width = 0.8749767980715577;
    msg.length = 0.512549455134846;
    msg.hstep = 0.5660635340386506;
    msg.coff = 80U;
    msg.alternation = 39U;
    msg.flags = 77U;
    msg.custom.assign("ZWBIXRTIDAWHCTEQZAWVSKFDPJQGFWFGOPRIEFVQSEKAOVVODHOBFAEKDPAMUKERZMPHDCGFPAYWHSYEGOZVIEXRLIGXUTBLKJCLRCKXRLEROGSUPTJRDJEZQIJBNTJAKIIQYWXLGTBMDVOCYCBNZW");

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
    msg.setTimeStamp(0.15865384319088682);
    msg.setSource(40368U);
    msg.setSourceEntity(185U);
    msg.setDestination(18104U);
    msg.setDestinationEntity(83U);
    msg.timeout = 52281U;
    msg.lat = 0.2723389381765561;
    msg.lon = 0.8997113957184417;
    msg.z = 0.4185626152102375;
    msg.z_units = 131U;
    msg.speed = 0.5167425170402491;
    msg.speed_units = 213U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.478212028912375;
    tmp_msg_0.y = 0.6951850898376867;
    tmp_msg_0.z = 0.1103806701684561;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GRWWFEUXNLHCFYCKHDIKIRSUXWJXQMLHNIFDZXSQYXGYTYIEWAOWWNXBNFEPGPNTGCNUYHGTEUVEHCPLSVWMWBJJUWNKCUCDOZJSBMOPLMYITGDXZCEURQMBFAEYIVLLDBCAPRTNGTDZZLIOKVCDBJHTVORVMJUJFAMOELDXQFGIQKYGKHKPFEYPAHFRDK");

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
    msg.setTimeStamp(0.23492396010019367);
    msg.setSource(36028U);
    msg.setSourceEntity(92U);
    msg.setDestination(17996U);
    msg.setDestinationEntity(96U);
    msg.timeout = 60880U;
    msg.lat = 0.9539274304969366;
    msg.lon = 0.8694568147878201;
    msg.z = 0.45318558583175905;
    msg.z_units = 223U;
    msg.speed = 0.5450822115465895;
    msg.speed_units = 184U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.015912123190193306;
    tmp_msg_0.y = 0.4559920576333545;
    tmp_msg_0.z = 0.23718230791165118;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TMLOSIYEAIHPPURFNFKREYUACJOHAZNOERDJVFSLN");

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
    msg.setTimeStamp(0.7655474825206603);
    msg.setSource(22833U);
    msg.setSourceEntity(194U);
    msg.setDestination(35689U);
    msg.setDestinationEntity(68U);
    msg.timeout = 42741U;
    msg.lat = 0.6024708827413386;
    msg.lon = 0.6545572323648549;
    msg.z = 0.06122532783339951;
    msg.z_units = 213U;
    msg.speed = 0.6386883935051786;
    msg.speed_units = 144U;
    msg.custom.assign("CUIADFMZCSZAYPMIAJAHXNXABLFHRNTQGFEXVSSQGNFIDTYYSGRAULCDZEFWXGUSJCJLTKAMFUYOWDQLKBRMAWZNSKKCXZNSBOEKNFSIHWNPTVHEMSYUXWPBQJAOOHDRRXVDCRLLMLYIWCVHEJGGOCGKPXMIBOWDKHYVUJUEOZPYKMXPQOV");

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
    msg.setTimeStamp(0.5571738077962788);
    msg.setSource(43270U);
    msg.setSourceEntity(179U);
    msg.setDestination(60194U);
    msg.setDestinationEntity(21U);
    msg.x = 0.9851072931598159;
    msg.y = 0.9067594248155462;
    msg.z = 0.5026781418443533;

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
    msg.setTimeStamp(0.8152836960829856);
    msg.setSource(4772U);
    msg.setSourceEntity(113U);
    msg.setDestination(9618U);
    msg.setDestinationEntity(229U);
    msg.x = 0.6713527292706648;
    msg.y = 0.4754915801522729;
    msg.z = 0.4928200631181947;

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
    msg.setTimeStamp(0.376774429065039);
    msg.setSource(47831U);
    msg.setSourceEntity(187U);
    msg.setDestination(42781U);
    msg.setDestinationEntity(63U);
    msg.x = 0.7032755644821128;
    msg.y = 0.35416127956938614;
    msg.z = 0.2562229236053416;

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
    msg.setTimeStamp(0.4096214320017769);
    msg.setSource(21934U);
    msg.setSourceEntity(251U);
    msg.setDestination(52031U);
    msg.setDestinationEntity(160U);
    msg.timeout = 51683U;
    msg.lat = 0.731845249046299;
    msg.lon = 0.03778166796078508;
    msg.z = 0.899600539417532;
    msg.z_units = 177U;
    msg.amplitude = 0.843764032786084;
    msg.pitch = 0.7298591734687614;
    msg.speed = 0.9340185460006589;
    msg.speed_units = 135U;
    msg.custom.assign("JDXRBLILMNOMMSSERFALZHZXGWIODRCVPNYFSYEUCAANFEBDPCNHJEEZQNKL");

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
    msg.setTimeStamp(0.43872771235976127);
    msg.setSource(60196U);
    msg.setSourceEntity(20U);
    msg.setDestination(31737U);
    msg.setDestinationEntity(189U);
    msg.timeout = 42284U;
    msg.lat = 0.04423536848649523;
    msg.lon = 0.44741528912643747;
    msg.z = 0.49794701171494504;
    msg.z_units = 130U;
    msg.amplitude = 0.33451138496520694;
    msg.pitch = 0.3089601396529916;
    msg.speed = 0.13753563923236845;
    msg.speed_units = 139U;
    msg.custom.assign("PJXZGZBRZRAOOTSAYKHCUARAPDYSVIBABBTSJMDVCIDIKOJIKKZFFEVJEOYNBOMUGXREZXNEFQQNRNCQLQVHYQWYATMPOEDKKFP");

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
    msg.setTimeStamp(0.6016598809279433);
    msg.setSource(23746U);
    msg.setSourceEntity(63U);
    msg.setDestination(10737U);
    msg.setDestinationEntity(97U);
    msg.timeout = 15051U;
    msg.lat = 0.3050637070657769;
    msg.lon = 0.8226433325328646;
    msg.z = 0.8743541930646975;
    msg.z_units = 32U;
    msg.amplitude = 0.8008022636762617;
    msg.pitch = 0.08447698115293811;
    msg.speed = 0.7701494590255337;
    msg.speed_units = 7U;
    msg.custom.assign("XWULAZOFMMJPVDUZFWWKFDLHXLGBSYXREHPWNWWIKIEKHNFHVFX");

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
    msg.setTimeStamp(0.3030917627648212);
    msg.setSource(52887U);
    msg.setSourceEntity(206U);
    msg.setDestination(30095U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.40404773191017895);
    msg.setSource(2647U);
    msg.setSourceEntity(5U);
    msg.setDestination(8891U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.515582121714775);
    msg.setSource(50006U);
    msg.setSourceEntity(121U);
    msg.setDestination(53626U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.8214972786210734);
    msg.setSource(56433U);
    msg.setSourceEntity(105U);
    msg.setDestination(24538U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.502553727709914;
    msg.lon = 0.17239285140360217;
    msg.z = 0.05058644158847425;
    msg.z_units = 22U;
    msg.radius = 0.923454039192276;
    msg.duration = 30678U;
    msg.speed = 0.8421895394638051;
    msg.speed_units = 122U;
    msg.custom.assign("HIESUTUARXXVEAFKZDQDCIJMAWIVUAKAZYBQRZOOXBIHOKKBMOEFUWTQYZCASXTCKBFGDTUQWNHLEPNZMHYTVOFBWJLYSJDXSQMFNGGCKJIOBFMUWGTLEMZZZBTVMOVXJRGJDYRAWNDIFPKIYBCHPRLFTQYELWJDHHFSVCGNMGJIYNRLXIDXAEPMEQKVPANPCSOFWHLJLTWCQUXYB");

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
    msg.setTimeStamp(0.06410720707364015);
    msg.setSource(10237U);
    msg.setSourceEntity(100U);
    msg.setDestination(10064U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.642520610756145;
    msg.lon = 0.9621336643359902;
    msg.z = 0.5002178001978477;
    msg.z_units = 52U;
    msg.radius = 0.1170048149809998;
    msg.duration = 19999U;
    msg.speed = 0.5918479363793804;
    msg.speed_units = 36U;
    msg.custom.assign("VGKBWRMLLXFTFXOCXJCEVSJPGEBYZHKVTNOFDVMWMOMSCOUDTNJAKMYNSKJTQSXPCRWSHQVNILUUDEMGCRORIYWJKGXFCJPDDCGBLZSRNRQUOYOXTZQMTWFFYKQHLZPVNAJSALRNMELHJDQAOHI");

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
    msg.setTimeStamp(0.43128247612868664);
    msg.setSource(426U);
    msg.setSourceEntity(125U);
    msg.setDestination(49786U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.8269483057201682;
    msg.lon = 0.6631251323604545;
    msg.z = 0.7509186588480246;
    msg.z_units = 111U;
    msg.radius = 0.1855173792028343;
    msg.duration = 15334U;
    msg.speed = 0.09069620557067393;
    msg.speed_units = 54U;
    msg.custom.assign("BHXHGIRVILCBCMZAJWCJUTAQTNUJJFJTWXSIEWUDBGBIDISFRQQTYJMEDVPPWCJRCLFEXZJZMXRKXROYVXKMYEZYZUWAKPDNAEHABSHTEZOOWFGXTZUZPIYEWLQLOUDHBUCRFAGLQIOODEMYHRZXBSXIDMMUAFVOLVNVPHAWNL");

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
    msg.setTimeStamp(0.925244326051962);
    msg.setSource(11947U);
    msg.setSourceEntity(224U);
    msg.setDestination(21876U);
    msg.setDestinationEntity(53U);
    msg.timeout = 55175U;
    msg.flags = 22U;
    msg.lat = 0.8999563937069367;
    msg.lon = 0.8695358408159063;
    msg.start_z = 0.6198973068559008;
    msg.start_z_units = 249U;
    msg.end_z = 0.606771497415473;
    msg.end_z_units = 103U;
    msg.radius = 0.9477898412800437;
    msg.speed = 0.6960539972245742;
    msg.speed_units = 30U;
    msg.custom.assign("TWPTIKIXSDKAPFQSWNCZJGEFNRKHCKUQNVQXGVYBQAXNSYCVPFIYGLCHXFWCYIWBUZPDXJDHJFDABWYFEAOFQUBIMDRTOJRHZOTEYJDRHGRLSEHGOXXOMDPCEVMQBNCRBJULMIIOWVEHNSMXVZHTQDNFGQSTYXUZJYHAOTJMGUKXNPLLAZMALOWILZRHUPJVVUEPBNRSCCBWWZEQLZBRMSCKJYRBVEGSGPLPFWKVMIKAZKTMGINYOUDAT");

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
    msg.setTimeStamp(0.047051569827808004);
    msg.setSource(19984U);
    msg.setSourceEntity(19U);
    msg.setDestination(14989U);
    msg.setDestinationEntity(244U);
    msg.timeout = 27962U;
    msg.flags = 201U;
    msg.lat = 0.6180746889885924;
    msg.lon = 0.16745693888250668;
    msg.start_z = 0.24260701840578291;
    msg.start_z_units = 139U;
    msg.end_z = 0.6495352774186051;
    msg.end_z_units = 65U;
    msg.radius = 0.6361059321052125;
    msg.speed = 0.7223702645385566;
    msg.speed_units = 222U;
    msg.custom.assign("GBESLRSRRTPAHNAFBHDEQZXRNJGQIKJPQVMHVAYSLJUCQBMAHTYMDLGKKNFFEGYCJQOXTWCBQDOSYOUIUNIDEVVKFEWEODPUUSBYUZXEOWDHQJDOYALNBDCJWUFTXOKWLOIUDTRLMZWAKMVSZEPCSFWYXVMQEGBUXYJTYBPXZVHSXUGKFIFJ");

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
    msg.setTimeStamp(0.015186922445807549);
    msg.setSource(17781U);
    msg.setSourceEntity(62U);
    msg.setDestination(48714U);
    msg.setDestinationEntity(38U);
    msg.timeout = 15625U;
    msg.flags = 157U;
    msg.lat = 0.1557571072246191;
    msg.lon = 0.7967504338178125;
    msg.start_z = 0.5615253265300599;
    msg.start_z_units = 168U;
    msg.end_z = 0.8987550231493887;
    msg.end_z_units = 245U;
    msg.radius = 0.027199036897888162;
    msg.speed = 0.17773754315163137;
    msg.speed_units = 35U;
    msg.custom.assign("RRDUDCKBYCJMSZKOPKVBQBHMTUMDPNLJGSHWWWWUVKSQCRDODZSGYMBGCNZUYQHFREOUVIHSLITCJNOLBSTAULXXIDSXASFXHPQRPWHNUIIQ");

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
    msg.setTimeStamp(0.2473019518689914);
    msg.setSource(29463U);
    msg.setSourceEntity(83U);
    msg.setDestination(61886U);
    msg.setDestinationEntity(9U);
    msg.timeout = 45145U;
    msg.lat = 0.39017214148127044;
    msg.lon = 0.5110692658500559;
    msg.z = 0.6112855418995505;
    msg.z_units = 30U;
    msg.speed = 0.9318719960217939;
    msg.speed_units = 27U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.41934584748727044;
    tmp_msg_0.y = 0.7986782364635943;
    tmp_msg_0.z = 0.07381952368657452;
    tmp_msg_0.t = 0.5127351819149285;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MBHLMIPTUXYZTNRTFHAAWHYQNUBCLGFBMQEVPXGXSEVAKIVULNASEDFGJKIKFKWZFALKCIHRDJPGTKOWQABSOINVDWYIXQJNYNQGJNSIARYUMVRQKZEPTBRQLQFUECACSOMYKGFLCYDIVDPAGDVFSPZJLMWL");

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
    msg.setTimeStamp(0.41680531258674647);
    msg.setSource(4440U);
    msg.setSourceEntity(139U);
    msg.setDestination(21151U);
    msg.setDestinationEntity(94U);
    msg.timeout = 32149U;
    msg.lat = 0.15366764970128988;
    msg.lon = 0.06083420507052395;
    msg.z = 0.15316069300841528;
    msg.z_units = 240U;
    msg.speed = 0.24787478441271515;
    msg.speed_units = 38U;
    msg.custom.assign("UTDUGRADAEQML");

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
    msg.setTimeStamp(0.6803606563896939);
    msg.setSource(27384U);
    msg.setSourceEntity(86U);
    msg.setDestination(9835U);
    msg.setDestinationEntity(35U);
    msg.timeout = 1104U;
    msg.lat = 0.6160932279466139;
    msg.lon = 0.27427870084399575;
    msg.z = 0.4810166092939364;
    msg.z_units = 180U;
    msg.speed = 0.4975143807862674;
    msg.speed_units = 101U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9779621039054713;
    tmp_msg_0.y = 0.6887488469509753;
    tmp_msg_0.z = 0.036963580435815935;
    tmp_msg_0.t = 0.15258412807206678;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VURGERPBJYZCWIZLJHZGOPZKIRVMDHOTJFFHCKTZRRDYGHHDXYBXEIKVU");

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
    msg.setTimeStamp(0.3185575421251996);
    msg.setSource(54957U);
    msg.setSourceEntity(170U);
    msg.setDestination(19307U);
    msg.setDestinationEntity(16U);
    msg.x = 0.40943292088793193;
    msg.y = 0.33313885248663866;
    msg.z = 0.886102695178308;
    msg.t = 0.8582866622427074;

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
    msg.setTimeStamp(0.8167242947074497);
    msg.setSource(33625U);
    msg.setSourceEntity(127U);
    msg.setDestination(38239U);
    msg.setDestinationEntity(115U);
    msg.x = 0.5537658639565362;
    msg.y = 0.3616523402326941;
    msg.z = 0.8167462511323946;
    msg.t = 0.4270228435949066;

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
    msg.setTimeStamp(0.25878010270323615);
    msg.setSource(5716U);
    msg.setSourceEntity(226U);
    msg.setDestination(3422U);
    msg.setDestinationEntity(27U);
    msg.x = 0.5995718841958436;
    msg.y = 0.04134504506690362;
    msg.z = 0.34101594866544793;
    msg.t = 0.4838270792415581;

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
    msg.setTimeStamp(0.6809513982342317);
    msg.setSource(47254U);
    msg.setSourceEntity(188U);
    msg.setDestination(55934U);
    msg.setDestinationEntity(171U);
    msg.timeout = 43020U;
    msg.name.assign("JYUDMUHXYYGLVJFTRAIMMLPCICKHNXRATXTKTYCOWDHUUOEKHIJLWZRGVDVJYJFNWSPQVVRLFGAQTWQPLFTOVBMVIPBGXOFLRICERHOUAKNXDQEKPWAACBLHPRLPPATIOUJDOMXJKZYMNLIZQVMID");
    msg.custom.assign("JPXONAEPWTVVZNJFOWUNUWMTZGERREIYAITPHTTCXFSXBBDHIZVJOYMOLWTXXJMLCFMAVURXQDASBMVNDRZZGYRHOSBIVZCESNJQDQTGLEWGCOAHTVKRHGDFHNOMVLRTNHBYKQYSBGABIKLTNJJAFDXQMFOJDSESCEKAHBUNISCXJUYXI");

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
    msg.setTimeStamp(0.4832955589444301);
    msg.setSource(14847U);
    msg.setSourceEntity(102U);
    msg.setDestination(53128U);
    msg.setDestinationEntity(14U);
    msg.timeout = 50744U;
    msg.name.assign("XSXQZSQNNGIYUJYEWKBGFOPXXUWOVNTRQTXGRCLOPSJLJKUEQWWJKGKTMOPCLPKMNDRASVABOUUGBIFCTWGFVEHCECHIYDWFFIRXTDYHUBFUDYDWYTPMLQCEISLQPOPBKAVMPUBEWJYSMVZDZBVUT");
    msg.custom.assign("UCAKMYAIPSHXVLWQUSDYWVGWNHJQQVROZPRRLEAWHYJOMPULCQHXZLATZVYLWKJDPFKLXQKIUSVAPZQCGKT");

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
    msg.setTimeStamp(0.007899577549353554);
    msg.setSource(31308U);
    msg.setSourceEntity(83U);
    msg.setDestination(52078U);
    msg.setDestinationEntity(230U);
    msg.timeout = 62179U;
    msg.name.assign("OQPHDHWRLBPCDPKHSRUTBZAIRYUMLWUBCJRBHJADELOMESMMIUVJYMCDFUGQVAFTIXGQYQNDAEZXWUHXMMATOEW");
    msg.custom.assign("DFNCUDZDZQ");

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
    msg.setTimeStamp(0.034705464485409565);
    msg.setSource(10188U);
    msg.setSourceEntity(166U);
    msg.setDestination(62072U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.34403835559578444;
    msg.lon = 0.8250466615172621;
    msg.z = 0.72925501827085;
    msg.z_units = 62U;
    msg.speed = 0.5992269287474541;
    msg.speed_units = 118U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3651016666437201;
    tmp_msg_0.y = 0.2029139372880241;
    tmp_msg_0.z = 0.08863131732704121;
    tmp_msg_0.t = 0.5641076261647228;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 19494U;
    tmp_msg_1.off_x = 0.11764616949443207;
    tmp_msg_1.off_y = 0.622128568273192;
    tmp_msg_1.off_z = 0.8147529163217158;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8437964710745405;
    msg.custom.assign("RXZAIPYKFTYHVMKAZNIFITTGVITXJCRRTQCKBPAKJDXOPXODGPVWZQQJWNNPKGAOHXLSVIQLYSDVTQJHJPHEESTBSPUKY");

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
    msg.setTimeStamp(0.5258497767680963);
    msg.setSource(60799U);
    msg.setSourceEntity(121U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.9486127268074843;
    msg.lon = 0.35060905629790984;
    msg.z = 0.28698723907653667;
    msg.z_units = 154U;
    msg.speed = 0.8029717926068708;
    msg.speed_units = 183U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.879921558453427;
    tmp_msg_0.y = 0.47649375612117295;
    tmp_msg_0.z = 0.13786223841406808;
    tmp_msg_0.t = 0.5153466134333666;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.42130467084759693;
    msg.custom.assign("ZEZZXRQUOEKQPDXGQYYEPIZTSHFIKHMEDHXDQKJOFQIB");

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
    msg.setTimeStamp(0.072388342590754);
    msg.setSource(48144U);
    msg.setSourceEntity(240U);
    msg.setDestination(26780U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.4314997721582985;
    msg.lon = 0.3725286947683799;
    msg.z = 0.12466750097102886;
    msg.z_units = 122U;
    msg.speed = 0.5527210295076954;
    msg.speed_units = 140U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9837689848716025;
    tmp_msg_0.y = 0.4854644401639272;
    tmp_msg_0.z = 0.5544353570208909;
    tmp_msg_0.t = 0.10710941914274141;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5557262137124698;
    msg.custom.assign("JQITAMECVTRRRAPGCMBDTQWEUTPVYYHGHVZJRMROWCBULMHDTMNSOBWEPFIZOQUWPQVNPKVSXAYSJS");

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
    msg.setTimeStamp(0.39192842885198376);
    msg.setSource(5992U);
    msg.setSourceEntity(216U);
    msg.setDestination(31085U);
    msg.setDestinationEntity(166U);
    msg.vid = 50354U;
    msg.off_x = 0.9629824579054358;
    msg.off_y = 0.7358130822959581;
    msg.off_z = 0.7838927220108487;

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
    msg.setTimeStamp(0.023455452056855397);
    msg.setSource(40135U);
    msg.setSourceEntity(73U);
    msg.setDestination(11027U);
    msg.setDestinationEntity(204U);
    msg.vid = 63694U;
    msg.off_x = 0.6992444536270632;
    msg.off_y = 0.6303177650120513;
    msg.off_z = 0.23144872284135953;

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
    msg.setTimeStamp(0.14148572865592712);
    msg.setSource(9271U);
    msg.setSourceEntity(6U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(137U);
    msg.vid = 41887U;
    msg.off_x = 0.5029955739710569;
    msg.off_y = 0.19336157127884457;
    msg.off_z = 0.5272617249455077;

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
    msg.setTimeStamp(0.546442870444854);
    msg.setSource(40889U);
    msg.setSourceEntity(189U);
    msg.setDestination(4109U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.6282075555404925);
    msg.setSource(11933U);
    msg.setSourceEntity(223U);
    msg.setDestination(41312U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.9609129701190481);
    msg.setSource(17240U);
    msg.setSourceEntity(21U);
    msg.setDestination(558U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.16844406611985463);
    msg.setSource(30924U);
    msg.setSourceEntity(192U);
    msg.setDestination(22859U);
    msg.setDestinationEntity(248U);
    msg.mid = 63460U;

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
    msg.setTimeStamp(0.10766615447431738);
    msg.setSource(30662U);
    msg.setSourceEntity(195U);
    msg.setDestination(25164U);
    msg.setDestinationEntity(119U);
    msg.mid = 63342U;

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
    msg.setTimeStamp(0.33782838307471263);
    msg.setSource(7089U);
    msg.setSourceEntity(68U);
    msg.setDestination(36319U);
    msg.setDestinationEntity(39U);
    msg.mid = 42687U;

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
    msg.setTimeStamp(0.8041943326358334);
    msg.setSource(34756U);
    msg.setSourceEntity(233U);
    msg.setDestination(10244U);
    msg.setDestinationEntity(38U);
    msg.state = 208U;
    msg.eta = 18284U;
    msg.info.assign("PSNGOOMZUNMSNHCDZMEDXGZVPBIMVKLQNJYLEJLMVJFJWFBKTMP");

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
    msg.setTimeStamp(0.0024776155273527056);
    msg.setSource(45491U);
    msg.setSourceEntity(212U);
    msg.setDestination(7332U);
    msg.setDestinationEntity(122U);
    msg.state = 25U;
    msg.eta = 61835U;
    msg.info.assign("LTVYCEPFHBIAVCOFAEIVCTBBHQYXZYXPCUCCLGRSKNSFXWXZLTREYPOGDAPQTYKEJEGZCAHDSFBTEDANMJQOYQRVDGSUWKLESGLNJSJUWIOLJSVDNEECOKTWEGVHHDJAMKPNMDKUWRYG");

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
    msg.setTimeStamp(0.8142677964875138);
    msg.setSource(24527U);
    msg.setSourceEntity(27U);
    msg.setDestination(58601U);
    msg.setDestinationEntity(150U);
    msg.state = 209U;
    msg.eta = 14911U;
    msg.info.assign("MBRFREDGYOLETAIAPUPLMWGKDGOBJDOLAVOCWSFYUWSCIECYEMSSTHIDUKEBKOCEXXXBROWQQIPMVJGRRIHXKNJQKADAJAZDFCHUIUBHGV");

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
    msg.setTimeStamp(0.21827447693390067);
    msg.setSource(47U);
    msg.setSourceEntity(78U);
    msg.setDestination(3680U);
    msg.setDestinationEntity(56U);
    msg.system = 55023U;
    msg.duration = 9475U;
    msg.speed = 0.019146794760442676;
    msg.speed_units = 111U;
    msg.x = 0.6805863746808838;
    msg.y = 0.993901378466351;
    msg.z = 0.05833964292747851;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.06568099478997269);
    msg.setSource(28329U);
    msg.setSourceEntity(248U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(187U);
    msg.system = 4667U;
    msg.duration = 64183U;
    msg.speed = 0.8233614632186307;
    msg.speed_units = 206U;
    msg.x = 0.9495061690709877;
    msg.y = 0.23939694405914203;
    msg.z = 0.43584307327867855;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.2991213468965871);
    msg.setSource(46229U);
    msg.setSourceEntity(167U);
    msg.setDestination(22043U);
    msg.setDestinationEntity(191U);
    msg.system = 45108U;
    msg.duration = 8128U;
    msg.speed = 0.6442369172719131;
    msg.speed_units = 197U;
    msg.x = 0.11889919787908254;
    msg.y = 0.19448731550739817;
    msg.z = 0.45244706736887685;
    msg.z_units = 186U;

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
    msg.setTimeStamp(0.3045286824134368);
    msg.setSource(27418U);
    msg.setSourceEntity(199U);
    msg.setDestination(65496U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.3345887591202852;
    msg.lon = 0.8339133819889444;
    msg.speed = 0.08394713024873068;
    msg.speed_units = 21U;
    msg.duration = 19169U;
    msg.sys_a = 53627U;
    msg.sys_b = 42025U;
    msg.move_threshold = 0.043543436378661204;

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
    msg.setTimeStamp(0.6930750900711853);
    msg.setSource(14726U);
    msg.setSourceEntity(10U);
    msg.setDestination(19107U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.8574491481142053;
    msg.lon = 0.43956311259669156;
    msg.speed = 0.04260285881405601;
    msg.speed_units = 5U;
    msg.duration = 65315U;
    msg.sys_a = 46846U;
    msg.sys_b = 24726U;
    msg.move_threshold = 0.18089766084214265;

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
    msg.setTimeStamp(0.7220834089624536);
    msg.setSource(37903U);
    msg.setSourceEntity(48U);
    msg.setDestination(51041U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.2679819955170236;
    msg.lon = 0.4461302084595843;
    msg.speed = 0.858711324465258;
    msg.speed_units = 9U;
    msg.duration = 39780U;
    msg.sys_a = 28002U;
    msg.sys_b = 59838U;
    msg.move_threshold = 0.9762418194738252;

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
    msg.setTimeStamp(0.28326782811352114);
    msg.setSource(18519U);
    msg.setSourceEntity(204U);
    msg.setDestination(27211U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.36724074179578525;
    msg.lon = 0.43673807720571267;
    msg.z = 0.03377827900032415;
    msg.z_units = 64U;
    msg.speed = 0.1512256153510384;
    msg.speed_units = 54U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2802215105490101;
    tmp_msg_0.lon = 0.9458440367444375;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GCSOFZANZOSAPRDQCEMLEMMMZUTINGGSDZSCKMZSNQJFOHIBEXKSLRVRJANFCTWFTXSLJTAQNZTSIGPEEFIWVVQBBUHV");

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
    msg.setTimeStamp(0.9649149237697411);
    msg.setSource(6029U);
    msg.setSourceEntity(123U);
    msg.setDestination(37670U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.09541865239997871;
    msg.lon = 0.9195852717964648;
    msg.z = 0.6786045548385357;
    msg.z_units = 18U;
    msg.speed = 0.6458398944424653;
    msg.speed_units = 242U;
    msg.custom.assign("UTGOGOAIYBIZVROEFJBEUIXZATISWFKSBZUBZVYHCZVEISYNSMFXFQ");

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
    msg.setTimeStamp(0.170834419072861);
    msg.setSource(64760U);
    msg.setSourceEntity(126U);
    msg.setDestination(9678U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.29967953079930676;
    msg.lon = 0.5385866993844047;
    msg.z = 0.877392809057168;
    msg.z_units = 68U;
    msg.speed = 0.15914255879628014;
    msg.speed_units = 170U;
    msg.custom.assign("SDZHGLZHURPVOOMSXCKGIVLMTHNZTTAXAE");

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
    msg.setTimeStamp(0.3236185296375905);
    msg.setSource(45188U);
    msg.setSourceEntity(12U);
    msg.setDestination(3927U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.9262020582118552;
    msg.lon = 0.6485280262977133;

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
    msg.setTimeStamp(0.5973683871699939);
    msg.setSource(44234U);
    msg.setSourceEntity(164U);
    msg.setDestination(1635U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.8130770916506427;
    msg.lon = 0.8381177417045955;

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
    msg.setTimeStamp(0.8308568590237203);
    msg.setSource(5719U);
    msg.setSourceEntity(129U);
    msg.setDestination(6370U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.14663515397287663;
    msg.lon = 0.4053292219361676;

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
    msg.setTimeStamp(0.5067610224705582);
    msg.setSource(58989U);
    msg.setSourceEntity(77U);
    msg.setDestination(38553U);
    msg.setDestinationEntity(73U);
    msg.timeout = 39605U;
    msg.lat = 0.5842572889786707;
    msg.lon = 0.05413481754252192;
    msg.z = 0.2738106999291774;
    msg.z_units = 196U;
    msg.pitch = 0.2929640266463731;
    msg.amplitude = 0.3468927090620234;
    msg.duration = 6418U;
    msg.speed = 0.03699073156773136;
    msg.speed_units = 71U;
    msg.radius = 0.024264624352826614;
    msg.direction = 202U;
    msg.custom.assign("VPPWEPSVKLJTWCCLKNHRBGWNIBBSBLFGQOUYBYSTBDBLZNKZYLKTUXIQEPLWESTWFPAFYRQOXNEFZMDFUKVDREHLUUIMQUNQPJEDEDMXANJHJCJNXJZZWSTKRPAUDFERLXOJUZEYVZSXPVCKNSOVAAVROCSONGHPYAWQXAHMXFYWIIRIFM");

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
    msg.setTimeStamp(0.9240760036085228);
    msg.setSource(11709U);
    msg.setSourceEntity(64U);
    msg.setDestination(50150U);
    msg.setDestinationEntity(173U);
    msg.timeout = 23422U;
    msg.lat = 0.5705410853723955;
    msg.lon = 0.7925575901879222;
    msg.z = 0.8931761285923876;
    msg.z_units = 88U;
    msg.pitch = 0.9399068658942454;
    msg.amplitude = 0.9556503586384444;
    msg.duration = 60776U;
    msg.speed = 0.15117294194492614;
    msg.speed_units = 183U;
    msg.radius = 0.9645040474073551;
    msg.direction = 189U;
    msg.custom.assign("FKEFWDHBVZROJLMTQDORYZCAINJDAEKQYHLJWDVHORXPISRYBCBCSOXWHCNJDUSYKYTAQPPTMAGQRZEBGCUGRMRGPTQHWBTHSENXSOTNVIIHEWMIXBMFATOFYGPBJCEUZCKBLMJMNMYNNTPUWOPGLWZHKLXJVZENQARNDRKDAZPFUQIA");

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
    msg.setTimeStamp(0.15605799488854144);
    msg.setSource(4681U);
    msg.setSourceEntity(30U);
    msg.setDestination(32078U);
    msg.setDestinationEntity(247U);
    msg.timeout = 12742U;
    msg.lat = 0.7688830863541449;
    msg.lon = 0.7938598685572192;
    msg.z = 0.8857419633595482;
    msg.z_units = 19U;
    msg.pitch = 0.6391219574954701;
    msg.amplitude = 0.8383787386452948;
    msg.duration = 33247U;
    msg.speed = 0.8129064235014631;
    msg.speed_units = 102U;
    msg.radius = 0.9581780862353153;
    msg.direction = 52U;
    msg.custom.assign("AQOCUQTXIZLUHIEMVTTQTZOMJXUXFXKELZKLNAVAQPPZSSMGWPYGWLMDHIIPYGYUJUWOMDJCFGLXQVOZYRDBZMTHRYZFAXQBVVRBKSHNQRWJHDOVWPYXGCROHZKFSHLICAFZJVDXOESDQHDNVFKFSTOENAHQIBDPFAUQLTUBYSZMESWNWGXHGSFAMBUCJEUNIBWVYDJPBGLRC");

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
    msg.setTimeStamp(0.35208446759741363);
    msg.setSource(25775U);
    msg.setSourceEntity(194U);
    msg.setDestination(37995U);
    msg.setDestinationEntity(53U);
    msg.formation_name.assign("HXXTCQQIDQULKJTLRYOHWMZXCEYOZVKUMUTKPKCYNPVNURAYMDUQGLGTRXIIYHUKYFLZTMECFCEOHKJDSXAXVIGRMVNN");
    msg.reference_frame = 55U;
    msg.custom.assign("YMSHVUTJRBFHAFVOUZHDOHEDJM");

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
    msg.setTimeStamp(0.28084645110784767);
    msg.setSource(24139U);
    msg.setSourceEntity(167U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(108U);
    msg.formation_name.assign("MMQJBWAUYJBCIRKZEDZTKWBYSINETZHZDVTDCRRMBGNFBOOUYSUWJOPNOKWUFGXSLJAGWEGYRJCHUIHAYY");
    msg.reference_frame = 64U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51878U;
    tmp_msg_0.off_x = 0.6749620539765073;
    tmp_msg_0.off_y = 0.9520317773197784;
    tmp_msg_0.off_z = 0.30510961741056064;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IFEHEYSJOUFCYKYNWBHQMAPMTAGNKJOAQAIDMISBPWVUUNWWSZONODLWFSYZKERIIJDWPWTSTDRUFBLHIHAGPZATCANQXREYXIBECRQHGT");

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
    msg.setTimeStamp(0.2067535925415439);
    msg.setSource(28598U);
    msg.setSourceEntity(226U);
    msg.setDestination(12981U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("OKOJADVYUREUVGHTLQCKAVMEYHZT");
    msg.reference_frame = 30U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34624U;
    tmp_msg_0.off_x = 0.6260750659325113;
    tmp_msg_0.off_y = 0.14542586848903927;
    tmp_msg_0.off_z = 0.576453602577436;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XHEFOSLZJSZBGIDQNGVRDXUGRSVAJSETHRTHUBYFQV");

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
    msg.setTimeStamp(0.13632091767042176);
    msg.setSource(30670U);
    msg.setSourceEntity(82U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("VQYGWDRCKCDOAJXSMKBEOHZWGBFPKSXHTWLINKXCLWPEBNJHZIINCJERWELZISKUTSIPCPWKCIRJQNCFFVUQVGTZGNMMJSYFBVYLOZDSAHUDYOKTGRUADUB");
    msg.formation_name.assign("TQFCXFRFCXNPIXCBTDTRGIMSZATRBZDZGVZDHKWJLMIXCYKPKQMJPPIVZVHXOQUFPKLKMISYAENUBWXAGVNLKUTEXEQYFRHFNYEVGZAZIJWVHSPGNUPCQQGYOMVWBBOYPBBLIHRLZEHDDNLJLHHCTGQHGNNBSUCCUDSWIMTFVEMAPITOTJQYGSORYCOJEWDT");
    msg.plan_id.assign("OLNHPYCGJFUQYBKAPEVQTHMEIXMHAWNSAJRBFGPQCKJLUIGOTXBVDNPSEVJTIQZFQQJFFAYIPSGQMUQDTFESHLZUMOVCDVWWFZELGRRRXEJCTOXCMTFMLXIGKQDKIWJLZNLXYSMPNXDYZIVOAKEWEDTSDEJZWNKWUPDWKFOZOHHZXTEHYGDUCIVWUSBSZIBPBYBGJCKNAHGAOMKNUSRSJYURZABKQMMNCVHYPWADVVTHALFYXCBLLNRGRUP");
    msg.description.assign("KJKCCIVBVBQYLCFTFREEZFJLXHPDQNWQGPHKIIVMZDNTOMAQALGECMMUSDYCGVKDAUEFKPWLAJJRGOKLGFBUWOPJPUPWLZMHOXBVIMITCGVWXYRNINWSGSSDTYHRRQXBHAPAFKZMTYXIBWGJTRFZDXNXILZPFLZOAWKDXQRVQCFRQZXGGPNCIJYOHVSDWHTEHSENZTRKUVVUANMNCJOQTCMWDBJ");
    msg.leader_speed = 0.028738620108530344;
    msg.leader_bank_lim = 0.9636052220214094;
    msg.pos_sim_err_lim = 0.051522865096186865;
    msg.pos_sim_err_wrn = 0.5952249413147321;
    msg.pos_sim_err_timeout = 26243U;
    msg.converg_max = 0.4198983993658597;
    msg.converg_timeout = 50407U;
    msg.comms_timeout = 49251U;
    msg.turb_lim = 0.3015877040874777;
    msg.custom.assign("PHATLOSXKXVBGUPCGBZQCYQODTWHNBKBNLFIZMPWEOOTMFVXADQUTUKUSVIVYWK");

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
    msg.setTimeStamp(0.5302282274823451);
    msg.setSource(44428U);
    msg.setSourceEntity(201U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("ZMAXUSVIAUZKSKQBPUWGRQDLIMSCLUIVHQGGRFRAUXNNOVILCPVVBNPPZHCVPZA");
    msg.formation_name.assign("MQEUCDBDXHEVFCADLEAPIROILAMIBGINXRYUPYXDLICRNWOFWYIBKOTWEMRSEOVELGWYZYUTAMAPKBXNKEYVYCBLCOBFWQKJOPWTCVZGRURTSHSWDVEQUBVBWGQGXFZSQLUQTHINGWSAFALZEIFXUJOBCKKRCUTYTDZYZVGMNJPFWKGZJJC");
    msg.plan_id.assign("LEYGNXMSWHGIMWIAIQZRCTZPGMXBEETUYCCJPNHOFSHWIOEDWEGMPWLVSJFOLOTJVRTCRTARKCFLOFBAVYBTVXSBBZUDZS");
    msg.description.assign("KZTLFQSMDASRHDYPEZWPUVG");
    msg.leader_speed = 0.5756071950278974;
    msg.leader_bank_lim = 0.48966918990144326;
    msg.pos_sim_err_lim = 0.08946096269208004;
    msg.pos_sim_err_wrn = 0.6930583692530309;
    msg.pos_sim_err_timeout = 65189U;
    msg.converg_max = 0.014545186757003115;
    msg.converg_timeout = 3847U;
    msg.comms_timeout = 57954U;
    msg.turb_lim = 0.8023715486396413;
    msg.custom.assign("DIRSWGVPZUWRKGQOINBHNKZUXZVTFLYVHHATXGJTHYNOYECIUUQSDLWWCQLCDIZSWLNABRHQNBDRGXBHODRSPLVMSJPXVNAOUPKFDBJYEAYXCKJKMSMWOTODUANHWFIQZSWYVVZSQPZPVWXLTEEBEIGCJGCYEOAVARXMMIQXTEHKKPTURCFLDEOJMLVZOYCPQJNSK");

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
    msg.setTimeStamp(0.1696902854697394);
    msg.setSource(18438U);
    msg.setSourceEntity(125U);
    msg.setDestination(49182U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("KGIPSICVEGZOWSMYFWVQZQCKOTKIYCDOPTBSGYXNJNGCPMJAFLVXHVAEHMASUDULSFWAMQEVDETWCZPRKSPJYLDYMOMDPYAGBXMVTBAXEGYKOKZRRHNUXIBEUUZOQALTLKBZNBFLTLRIMNPGIUTKDYTQLIAVGOCHZFGWUJYWJKDEUCTCXXRNQIQQSXCVEJBDXCQKWGHPWUYNUVR");
    msg.formation_name.assign("YHTCFRRWXGYOVXCBHHXBUDCTDMRMCGUFIUSTHVOPIKQOFIDEHYNGAMDWPAEBVLJLNTGDZBHFDIATOSOSWGVYDFXNKEZLRJMMPZMNGLBQOATTZPCERQGLMQDNWOETJNUGFWAZNHUTEPPBLUJSPDARCXSVVFNSZDNIYKJOSSPKUPZUTKVZJELLJYAMCKBCWJUKI");
    msg.plan_id.assign("WWOOKUXCJEMQXGPOBLEGDRVKGKZRYSJBFSAASKCNZJLUWZEMRFWFDRVQTPCMMWYDTTDEZJLGSUULGLAGIIS");
    msg.description.assign("IYASGOQLNVHFNSETLWA");
    msg.leader_speed = 0.1226767603129636;
    msg.leader_bank_lim = 0.24075716698556038;
    msg.pos_sim_err_lim = 0.27871257111540904;
    msg.pos_sim_err_wrn = 0.21475416806073788;
    msg.pos_sim_err_timeout = 35922U;
    msg.converg_max = 0.4085840225864459;
    msg.converg_timeout = 29155U;
    msg.comms_timeout = 54748U;
    msg.turb_lim = 0.3285028007416899;
    msg.custom.assign("OALCMFONTZPQXQARQJTJOEHYKPJBCSUSGATGWHJNZWKQYOLWJTYNNHTEWDXIBRXZQPPCHZ");

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
    msg.setTimeStamp(0.6199074066046575);
    msg.setSource(46162U);
    msg.setSourceEntity(93U);
    msg.setDestination(24832U);
    msg.setDestinationEntity(232U);
    msg.control_src = 779U;
    msg.control_ent = 86U;
    msg.timeout = 0.4852672188603282;
    msg.loiter_radius = 0.9918368427165621;
    msg.altitude_interval = 0.3239472154337586;

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
    msg.setTimeStamp(0.678038881989937);
    msg.setSource(42027U);
    msg.setSourceEntity(5U);
    msg.setDestination(8635U);
    msg.setDestinationEntity(64U);
    msg.control_src = 15351U;
    msg.control_ent = 132U;
    msg.timeout = 0.15006610777980578;
    msg.loiter_radius = 0.1718897445762928;
    msg.altitude_interval = 0.367075992426769;

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
    msg.setTimeStamp(0.05542854430217459);
    msg.setSource(6776U);
    msg.setSourceEntity(134U);
    msg.setDestination(6045U);
    msg.setDestinationEntity(185U);
    msg.control_src = 13145U;
    msg.control_ent = 144U;
    msg.timeout = 0.8989226568475813;
    msg.loiter_radius = 0.22219551555340156;
    msg.altitude_interval = 0.8547787794931725;

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
    msg.setTimeStamp(0.5303889180823048);
    msg.setSource(37202U);
    msg.setSourceEntity(177U);
    msg.setDestination(60664U);
    msg.setDestinationEntity(223U);
    msg.flags = 168U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.48552053495378156;
    tmp_msg_0.speed_units = 50U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7646943599228142;
    tmp_msg_1.z_units = 153U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.41779062309868953;
    msg.lon = 0.33161941141350415;
    msg.radius = 0.9061367351275884;

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
    msg.setTimeStamp(0.9480515095492789);
    msg.setSource(29718U);
    msg.setSourceEntity(126U);
    msg.setDestination(21378U);
    msg.setDestinationEntity(180U);
    msg.flags = 28U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.40381996534599784;
    tmp_msg_0.speed_units = 237U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.26158699889287784;
    tmp_msg_1.z_units = 47U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.276946958139341;
    msg.lon = 0.7560867521727679;
    msg.radius = 0.5625456049854624;

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
    msg.setTimeStamp(0.9794523526672371);
    msg.setSource(38363U);
    msg.setSourceEntity(86U);
    msg.setDestination(41717U);
    msg.setDestinationEntity(138U);
    msg.flags = 34U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.15882991934573842;
    tmp_msg_0.speed_units = 56U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.989320861351258;
    tmp_msg_1.z_units = 114U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9498128094745083;
    msg.lon = 0.7216005668698117;
    msg.radius = 0.9007299884982758;

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
    msg.setTimeStamp(0.20408998858486915);
    msg.setSource(54518U);
    msg.setSourceEntity(128U);
    msg.setDestination(20148U);
    msg.setDestinationEntity(192U);
    msg.control_src = 58005U;
    msg.control_ent = 107U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 42U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.21557430070156636;
    tmp_tmp_msg_0_0.speed_units = 251U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3086443428256217;
    tmp_tmp_msg_0_1.z_units = 213U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6206456660383038;
    tmp_msg_0.lon = 0.22228676740563902;
    tmp_msg_0.radius = 0.024316175995243605;
    msg.reference.set(tmp_msg_0);
    msg.state = 254U;
    msg.proximity = 15U;

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
    msg.setTimeStamp(0.8031071641249719);
    msg.setSource(29256U);
    msg.setSourceEntity(217U);
    msg.setDestination(11722U);
    msg.setDestinationEntity(216U);
    msg.control_src = 27750U;
    msg.control_ent = 100U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 92U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7436813289936532;
    tmp_tmp_msg_0_0.speed_units = 50U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0009071886870937185;
    tmp_tmp_msg_0_1.z_units = 64U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5320914830625534;
    tmp_msg_0.lon = 0.6285372254615608;
    tmp_msg_0.radius = 0.4733944475141043;
    msg.reference.set(tmp_msg_0);
    msg.state = 175U;
    msg.proximity = 201U;

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
    msg.setTimeStamp(0.986121331145336);
    msg.setSource(12947U);
    msg.setSourceEntity(169U);
    msg.setDestination(9640U);
    msg.setDestinationEntity(196U);
    msg.control_src = 2372U;
    msg.control_ent = 100U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 25U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2032953373277664;
    tmp_tmp_msg_0_0.speed_units = 71U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9826723122862832;
    tmp_tmp_msg_0_1.z_units = 149U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2275516727121628;
    tmp_msg_0.lon = 0.6573960585770856;
    tmp_msg_0.radius = 0.4068340270205829;
    msg.reference.set(tmp_msg_0);
    msg.state = 243U;
    msg.proximity = 135U;

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
    msg.setTimeStamp(0.5167929091344446);
    msg.setSource(24104U);
    msg.setSourceEntity(1U);
    msg.setDestination(57211U);
    msg.setDestinationEntity(43U);
    msg.ax_cmd = 0.6017618604841583;
    msg.ay_cmd = 0.8588096679101994;
    msg.az_cmd = 0.6971519547532282;
    msg.ax_des = 0.1953659772637777;
    msg.ay_des = 0.9121804626505162;
    msg.az_des = 0.9897587038830465;
    msg.virt_err_x = 0.7625330457366352;
    msg.virt_err_y = 0.07525266191553293;
    msg.virt_err_z = 0.6202394221149851;
    msg.surf_fdbk_x = 0.4589354677125923;
    msg.surf_fdbk_y = 0.6190958064614117;
    msg.surf_fdbk_z = 0.13757982088576326;
    msg.surf_unkn_x = 0.7596546226666642;
    msg.surf_unkn_y = 0.5110147432304764;
    msg.surf_unkn_z = 0.7144804860402524;
    msg.ss_x = 0.02693182016185225;
    msg.ss_y = 0.5736699571478082;
    msg.ss_z = 0.44903077489911514;

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
    msg.setTimeStamp(0.16054588394566793);
    msg.setSource(8179U);
    msg.setSourceEntity(111U);
    msg.setDestination(32769U);
    msg.setDestinationEntity(118U);
    msg.ax_cmd = 0.6874894391915931;
    msg.ay_cmd = 0.35358688471772937;
    msg.az_cmd = 0.9697459999770744;
    msg.ax_des = 0.8458146755735846;
    msg.ay_des = 0.17403098216185353;
    msg.az_des = 0.2705887964451037;
    msg.virt_err_x = 0.854089196459305;
    msg.virt_err_y = 0.6846214330038368;
    msg.virt_err_z = 0.8340652324080745;
    msg.surf_fdbk_x = 0.8141428424465948;
    msg.surf_fdbk_y = 0.23539998852601052;
    msg.surf_fdbk_z = 0.8934168115729045;
    msg.surf_unkn_x = 0.4458183676354355;
    msg.surf_unkn_y = 0.8317680161532809;
    msg.surf_unkn_z = 0.5313720994459464;
    msg.ss_x = 0.09132723226882733;
    msg.ss_y = 0.17869519590831595;
    msg.ss_z = 0.1145417528543744;

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
    msg.setTimeStamp(0.2366602202667163);
    msg.setSource(3343U);
    msg.setSourceEntity(207U);
    msg.setDestination(30105U);
    msg.setDestinationEntity(182U);
    msg.ax_cmd = 0.9146396021667054;
    msg.ay_cmd = 0.1557092811071018;
    msg.az_cmd = 0.9230115096958678;
    msg.ax_des = 0.9067838805892792;
    msg.ay_des = 0.4713755672426667;
    msg.az_des = 0.518212724452677;
    msg.virt_err_x = 0.05923391841350356;
    msg.virt_err_y = 0.2900571339720418;
    msg.virt_err_z = 0.901296474230779;
    msg.surf_fdbk_x = 0.4183662312606091;
    msg.surf_fdbk_y = 0.7920674629260102;
    msg.surf_fdbk_z = 0.06516697187815224;
    msg.surf_unkn_x = 0.5448274299462355;
    msg.surf_unkn_y = 0.18070840944475886;
    msg.surf_unkn_z = 0.5841634497846757;
    msg.ss_x = 0.9119628685535226;
    msg.ss_y = 0.9760664771706272;
    msg.ss_z = 0.6193798431442343;

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
    msg.setTimeStamp(0.6116726005533014);
    msg.setSource(415U);
    msg.setSourceEntity(150U);
    msg.setDestination(12711U);
    msg.setDestinationEntity(112U);
    msg.s_id.assign("ARDSUIPTDMBMMBR");
    msg.dist = 0.6752975167577289;
    msg.err = 0.3776436176086895;
    msg.ctrl_imp = 0.734727071383866;
    msg.rel_dir_x = 0.8955498814381481;
    msg.rel_dir_y = 0.538978528764338;
    msg.rel_dir_z = 0.6281932717548384;
    msg.err_x = 0.3344930343207576;
    msg.err_y = 0.9587232769131714;
    msg.err_z = 0.6092854286060349;
    msg.rf_err_x = 0.9663889038096135;
    msg.rf_err_y = 0.05268697718022053;
    msg.rf_err_z = 0.27151979591379505;
    msg.rf_err_vx = 0.4791150530212984;
    msg.rf_err_vy = 0.1791845181396131;
    msg.rf_err_vz = 0.6083526401670033;
    msg.ss_x = 0.7903441334643093;
    msg.ss_y = 0.10645384159800064;
    msg.ss_z = 0.7652066466551364;
    msg.virt_err_x = 0.2635284656996352;
    msg.virt_err_y = 0.6593103591051286;
    msg.virt_err_z = 0.7913301248470191;

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
    msg.setTimeStamp(0.8811821808911529);
    msg.setSource(39517U);
    msg.setSourceEntity(30U);
    msg.setDestination(35604U);
    msg.setDestinationEntity(119U);
    msg.s_id.assign("WMDBALYRTXOCRTFGJFTKGVWNKVDOXGPVCADNNRXJRZKCUPHCTQWLSHECMNQEEZTMNZRUHUBGSJBLMLKSTEKMLRVHZUIEQFIXVNFZYFPICWMAMGPQETLQYZBPVSLDQUNOTKFDIUGEEHAUWFLPYKATRZLXZBJALGGHIYVKONWYJMJRYODUVSSGOIPFFSNDCCGXATMCO");
    msg.dist = 0.8223446392115629;
    msg.err = 0.8997877247212364;
    msg.ctrl_imp = 0.0469282937548382;
    msg.rel_dir_x = 0.17999902686471736;
    msg.rel_dir_y = 0.046808385156173915;
    msg.rel_dir_z = 0.620492403604165;
    msg.err_x = 0.7093486783940578;
    msg.err_y = 0.2283663366056543;
    msg.err_z = 0.7156543201141621;
    msg.rf_err_x = 0.7452400775647345;
    msg.rf_err_y = 0.7106027269434918;
    msg.rf_err_z = 0.24091026197029375;
    msg.rf_err_vx = 0.05847088773521314;
    msg.rf_err_vy = 0.9291180371660422;
    msg.rf_err_vz = 0.0992667712784725;
    msg.ss_x = 0.6003861708133775;
    msg.ss_y = 0.4340183406417093;
    msg.ss_z = 0.788596797017509;
    msg.virt_err_x = 0.2729727485748311;
    msg.virt_err_y = 0.8708600466248166;
    msg.virt_err_z = 0.4693872801460506;

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
    msg.setTimeStamp(0.38784310322800675);
    msg.setSource(3303U);
    msg.setSourceEntity(60U);
    msg.setDestination(26456U);
    msg.setDestinationEntity(194U);
    msg.s_id.assign("AZXQONIGRFMKYZEGQKWHKCBFIHJPEDWWTKNHCYXOMSMQAPFUZMNNHYISKNIGERGYZDGNXOBABGRDALUPLITAVLTVACLLYVRGHMWTWYDNGPUVULFVJQISZMGORFHJNPZSESGNZDORAVOWJMXKTQHCVDBTSJJTHU");
    msg.dist = 0.8388360969977094;
    msg.err = 0.9106988372236718;
    msg.ctrl_imp = 0.9554727288877893;
    msg.rel_dir_x = 0.9432722338644172;
    msg.rel_dir_y = 0.5427396724980986;
    msg.rel_dir_z = 0.4880569551103998;
    msg.err_x = 0.8221209835633835;
    msg.err_y = 0.1418822632015212;
    msg.err_z = 0.4995184600510385;
    msg.rf_err_x = 0.2192963524074667;
    msg.rf_err_y = 0.5773575620220249;
    msg.rf_err_z = 0.2078516490026835;
    msg.rf_err_vx = 0.9920532578660614;
    msg.rf_err_vy = 0.5680247531698164;
    msg.rf_err_vz = 0.2967304547621825;
    msg.ss_x = 0.7887316873319612;
    msg.ss_y = 0.08556201074847702;
    msg.ss_z = 0.22161195607987338;
    msg.virt_err_x = 0.9956240995144945;
    msg.virt_err_y = 0.44637663648997783;
    msg.virt_err_z = 0.11158291646908958;

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
    msg.setTimeStamp(0.8184915082962511);
    msg.setSource(19715U);
    msg.setSourceEntity(180U);
    msg.setDestination(36916U);
    msg.setDestinationEntity(11U);
    msg.timeout = 31403U;
    msg.rpm = 0.08003415345268838;
    msg.direction = 241U;
    msg.custom.assign("RWBEQNOUOABEIYOBIRTACCHHVPPZRLJSGYVESXCYLKNSFRJPWQNXTQZOPAZHSBKXSEDIJTAEJQWMQUHVUCWBVNCGJEKZRHVOBCMLFZPMXRGECAXWAFNTSUPWITYMYDRAYWDKTKJZZAMVNVBSIDMFYHLULZDLOUPMMUEJBRTSLIOKWDCYSPMISIDWNKDHNQZTAQYGGNFNKOEVGELIMGQHLGLGXYQFKTGAXXOFPCJBBIUJVFVTDXW");

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
    msg.setTimeStamp(0.47516021435611544);
    msg.setSource(62083U);
    msg.setSourceEntity(155U);
    msg.setDestination(41612U);
    msg.setDestinationEntity(57U);
    msg.timeout = 22829U;
    msg.rpm = 0.47921584138101603;
    msg.direction = 109U;
    msg.custom.assign("VSENCKMWSAWASBSIDXXUSMGUFPCQPXMVIBOBAUGUCLDMCEYOZJDVXLKKOPKMUGNZBGELRUWQFCRKHVUXNQER");

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
    msg.setTimeStamp(0.4533756070560341);
    msg.setSource(38268U);
    msg.setSourceEntity(47U);
    msg.setDestination(57674U);
    msg.setDestinationEntity(199U);
    msg.timeout = 38006U;
    msg.rpm = 0.42029390174025805;
    msg.direction = 41U;
    msg.custom.assign("WKDGZTDUSRXOSCFRXQNNMEAXIZLPGSUUBVCQWVTYRNGZJHAUGWOWUBWTJUXODFWEGZLMPXYJOKLPUHSMFYEODPFWPKQKIVQZLOXFSLNKEGJKARTYTHEQBSXCFZJCVIEBHVVYTV");

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
    msg.setTimeStamp(0.4008647751351223);
    msg.setSource(31065U);
    msg.setSourceEntity(216U);
    msg.setDestination(16602U);
    msg.setDestinationEntity(49U);
    msg.formation_name.assign("JPSFDJZPORHSMSPMINCDTJVWTCNYJIUYTOXBBALLYIKNDXIXIMPEAFVEKXVDFGLZWFZUQZQXLIUGGXGJZHNWHCJFPNTVSCWPDUJNGLTYUUYISOOJNJSFQHOURQHUAINCZEWHLYGFRVMYOERXLBWLBBNQRZVWSICCJERXPGQOLQREOFHDQCDSWKBWHXVERPQUGCZKKYPSYK");
    msg.type = 107U;
    msg.op = 170U;
    msg.group_name.assign("TJAMGPZPQXQIJJCHIWNTMULMOVZIQHDWEI");
    msg.plan_id.assign("ZGKKYZBUYGRKTNAIRJS");
    msg.description.assign("ZFPNTKJTYIXLYV");
    msg.reference_frame = 175U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22867U;
    tmp_msg_0.off_x = 0.6220810950948445;
    tmp_msg_0.off_y = 0.6097312958484972;
    tmp_msg_0.off_z = 0.14830868276685427;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5018534105688611;
    msg.leader_speed_min = 0.10298027198205262;
    msg.leader_speed_max = 0.24011599888100077;
    msg.leader_alt_min = 0.6784626525222142;
    msg.leader_alt_max = 0.7655052578847031;
    msg.pos_sim_err_lim = 0.38902952697512183;
    msg.pos_sim_err_wrn = 0.855369532249437;
    msg.pos_sim_err_timeout = 4042U;
    msg.converg_max = 0.09092650424951743;
    msg.converg_timeout = 26456U;
    msg.comms_timeout = 4196U;
    msg.turb_lim = 0.4099236110187061;
    msg.custom.assign("XDRBPZLZFPLCYIVWGWDROWSUDTUYOPYMUBZTAUNYBIAUCSMBTJEILJHOJLNDVSMOFIQAZMVSHHKWPFEEBLDHMZPGXAFXH");

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
    msg.setTimeStamp(0.8789403399023548);
    msg.setSource(16046U);
    msg.setSourceEntity(160U);
    msg.setDestination(46439U);
    msg.setDestinationEntity(145U);
    msg.formation_name.assign("OEXTVWPYEALRBCLXPJK");
    msg.type = 162U;
    msg.op = 104U;
    msg.group_name.assign("NRFKGWCKGCUZRRILYSLKEUOBOPWJOOWWJBCKUQWHPFYGWKSBDFCFYSBRYAOXDCXXCOKCSJLLJXQBSOUYALNLTLQDVINVFMIDWUNQTHLAEMPBKFWYZXOIMUSIHZGAMMUTANXPISDEPLNVH");
    msg.plan_id.assign("RXNIQNOLEHJEAGYVCBWIMSBSNGPNVBXURXDLDDDRAUEQMYTUHIGVFEGJBFKRWLJWTXSGUOLHHOMTJQPRCIZHMIXJGMFIVFAZDXYKPGWIPQPCCESRYQNDXNCIYAATAFBBATSBTFOVQGUIZAKPSHITMQXWKNAKTDZNZVMKJCSKPPCRMKGUGWJSDUEEUNJCYVCQVQBNTRFLYLHBUKPOBHFKECELRDYYWYO");
    msg.description.assign("ORYLJADAZFZEPKTYDSRPDVMYMPFEVEBBGVARZUYHDMICRBMLPVLJMVIOGAVUAEKJJLXHXQIDJKLQUTUPBYAEIHSNZPGNRYZTXQUOJCBMCLWUWOZHFEUPPNWJJKUBRBWMTKHLDZGLEYYPMFTNEBGMHFVQHHWEQWTCWXJRISFOTSGWRONINNNLUNZFQVKUFXOAOCTTXSGKDRMQVRZJSFKYYHXIZPEGOKLSDQIWIBWFNX");
    msg.reference_frame = 250U;
    msg.leader_bank_lim = 0.34654758584310075;
    msg.leader_speed_min = 0.8671605701634333;
    msg.leader_speed_max = 0.6556066686812001;
    msg.leader_alt_min = 0.9187489606227719;
    msg.leader_alt_max = 0.9610423482906546;
    msg.pos_sim_err_lim = 0.4207281679723649;
    msg.pos_sim_err_wrn = 0.24642831519519404;
    msg.pos_sim_err_timeout = 32724U;
    msg.converg_max = 0.013326423451345493;
    msg.converg_timeout = 16341U;
    msg.comms_timeout = 898U;
    msg.turb_lim = 0.6185787266058417;
    msg.custom.assign("BSIJSZBUEEEDDZHVRRMLPWSQQDVOAHDLPGGSIEEWLNFAWKGTLXAZSYYTXCJKSWGWAXXQHAYVTUNXFYLJQSHGZBVVJZPKBREUYPNJZLYMLYHVWAGMNHTVMTVRIFEHPBKHDQFOCWPKMWTDFGKJRQIPBKUOBCRUX");

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
    msg.setTimeStamp(0.7050489712792398);
    msg.setSource(16776U);
    msg.setSourceEntity(54U);
    msg.setDestination(26357U);
    msg.setDestinationEntity(87U);
    msg.formation_name.assign("NZYWDHFKBETRTYXFOTNLULMHISYUKTTPOTXQLMTZWNAVBAXYPKNABPFRFWCJYNOJVZYBEDDUBIFACPXVFIVLUOENYUSCMKYIVCHCZEGGEIJICHUGASQJTNQPXXRPWKSZLREMBDGGFULOOEOIDSJKLFETDJSRVAGQWMGYRGLXZONXHKDDXEBJDSHUSSVYCQZRNJHQHOHGLHQDZWVZWRPJUAAWQCBTVUMFMRPFJMRGQENOSWPAIKBL");
    msg.type = 41U;
    msg.op = 35U;
    msg.group_name.assign("LBJCWVGLXNFHXCJZFOOYCAEPESRNVFJBZRHIYYPOBHDXJPULTWNWTRTXKQECZQIPRWUKTKRTSUHIZIGNDMZYUDXEJTBVYSXSBDQGIMVOIOIMLRSOUGZTZKCVAGKJOWJHXGTMNOLYVUWQNNEAPUSBDBGPSIVCYDVRQQUQCHNHRMQKMDAEMDNYXFAKABJMZPLFWDMPKAPYIFHCVXIGLLHPWZSGQFBOSEMET");
    msg.plan_id.assign("WCWVFAZRZZYKNAGSBRXSPLJTHDMPDVSLGRRNEJZGLPPPLKJTCKKBNPYDXRQIILEMBABEFKONHYDNNYSPIPRJWXWMCJQIWUWBYVDIWJHYDIBXKHLIAGHRTGZHRCYMAROBSU");
    msg.description.assign("WWMABUZKMGSQJVTLXYQFGVDZQCTC");
    msg.reference_frame = 211U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 78U;
    tmp_msg_0.off_x = 0.9201073754559858;
    tmp_msg_0.off_y = 0.07140702916353403;
    tmp_msg_0.off_z = 0.7268794373117198;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.1473950577142693;
    msg.leader_speed_min = 0.16899786121201854;
    msg.leader_speed_max = 0.23065863304368162;
    msg.leader_alt_min = 0.2492128235299883;
    msg.leader_alt_max = 0.8192480717865195;
    msg.pos_sim_err_lim = 0.16047531764220624;
    msg.pos_sim_err_wrn = 0.6464161839915752;
    msg.pos_sim_err_timeout = 56806U;
    msg.converg_max = 0.8525382156410208;
    msg.converg_timeout = 18128U;
    msg.comms_timeout = 57700U;
    msg.turb_lim = 0.6044795295177513;
    msg.custom.assign("EMCPMQHPGPUYYDSIWPDJVOZLYVRKCDTTFTYLSOHCJLLRWWTCLWSMZOXINAHRMYMDWUSVGFFZJVNWCLGNUDMGEHJZWRZUREYSLXRUGFPODJVQXFOIRQJLSGHZBECRASQQXUXXMQBFQZOERVCEVFAXKFZSWPUXXKBTJOSKMIUGYDVJKUUPBDCTAPLFBNKCJIIRPETYNKCKAANQHSFIZKXGHVWBAZHNYOIEADBMTOHNLBH");

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
    msg.setTimeStamp(0.6153175920763035);
    msg.setSource(50160U);
    msg.setSourceEntity(143U);
    msg.setDestination(64350U);
    msg.setDestinationEntity(77U);
    msg.timeout = 27899U;
    msg.lat = 0.9834135991907234;
    msg.lon = 0.3529213428759521;
    msg.z = 0.8928773879048784;
    msg.z_units = 195U;
    msg.speed = 0.1703403125085743;
    msg.speed_units = 103U;
    msg.custom.assign("PABBQNQJEZDMNPXSVHWOLCQCHZRFXJUAIVDVIBZGNDSHBIZKWWTPFCGCOQANUDPMOBSXASBGHTZRUDFYWYKPOGLMRTTQHNWVZUAKKTJVHJAMTFPDEXFSFMYCZWXLFNXUCYFEDGJOMWEQWXJNZRCWQITLQPLDDWKNKBIIAKUIYYKXETJIHDZARLCXLEMUJCOY");

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
    msg.setTimeStamp(0.9147038111862555);
    msg.setSource(38288U);
    msg.setSourceEntity(154U);
    msg.setDestination(35202U);
    msg.setDestinationEntity(191U);
    msg.timeout = 28141U;
    msg.lat = 0.6537939931126548;
    msg.lon = 0.4453806696644492;
    msg.z = 0.7870989081517322;
    msg.z_units = 202U;
    msg.speed = 0.4712423540001017;
    msg.speed_units = 236U;
    msg.custom.assign("VYARPJIOWUUTSOLBUNLYNYMUHDBWULCHGQUSEKMUHQCLGXPETNZCURSXHIINQSESIKJP");

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
    msg.setTimeStamp(0.4381520578140917);
    msg.setSource(63811U);
    msg.setSourceEntity(42U);
    msg.setDestination(30335U);
    msg.setDestinationEntity(76U);
    msg.timeout = 22081U;
    msg.lat = 0.7337577431032899;
    msg.lon = 0.5826260896354696;
    msg.z = 0.775044503989293;
    msg.z_units = 199U;
    msg.speed = 0.4697579687055583;
    msg.speed_units = 178U;
    msg.custom.assign("ODSWLZEGSAMHOZWKTTQTBIVRKCVYJAKGPIIAPQTWHBDEFYMR");

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
    msg.setTimeStamp(0.9606686460703696);
    msg.setSource(64666U);
    msg.setSourceEntity(228U);
    msg.setDestination(62511U);
    msg.setDestinationEntity(167U);
    msg.timeout = 43334U;
    msg.lat = 0.8055041126324898;
    msg.lon = 0.42707139868911637;
    msg.z = 0.514860469465163;
    msg.z_units = 178U;
    msg.speed = 0.387266066994031;
    msg.speed_units = 187U;
    msg.custom.assign("FHWCLKJSDUMWJZJHQKQIPKCEGMURYRVQJLVPGZXKNWHGYNEUWPXHDBOJSELYTOTZZHDIALFEDZMKUBNOBAOATKTBDF");

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
    msg.setTimeStamp(0.7706989751324196);
    msg.setSource(59027U);
    msg.setSourceEntity(12U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(1U);
    msg.timeout = 49566U;
    msg.lat = 0.9949166961260887;
    msg.lon = 0.5887317722237131;
    msg.z = 0.7353054600882271;
    msg.z_units = 1U;
    msg.speed = 0.9137114241384283;
    msg.speed_units = 171U;
    msg.custom.assign("EFXLRAPBUKYYDEOJVUQTKHNQWUDVBKAJONAQXEUZYIKWKUZBSBAVSCRDBDOMGRGHMKTRKVVYLTNIBCEDRYRQJGHMXBIGIWSDSDCYFJVNHAXCPQXEMLWQRTXDQFRJYPBZYXNLUMTMZCAPY");

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
    msg.setTimeStamp(0.7595188779070345);
    msg.setSource(26433U);
    msg.setSourceEntity(15U);
    msg.setDestination(31170U);
    msg.setDestinationEntity(240U);
    msg.timeout = 43301U;
    msg.lat = 0.3580931769657276;
    msg.lon = 0.7696012061514477;
    msg.z = 0.4546130688975245;
    msg.z_units = 140U;
    msg.speed = 0.634515140711699;
    msg.speed_units = 136U;
    msg.custom.assign("OQKFROWIATCJLOZBRBUDIQGAJEFKCKEPVUQKTGRQIFHHVHZRYLFJTTCWNWXKVEEHLDEVXCSCVWNPPJRNHTQEPMAZYSUNNJQAWHBXNYZUBPNKP");

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
    msg.setTimeStamp(0.23288365783947695);
    msg.setSource(59374U);
    msg.setSourceEntity(25U);
    msg.setDestination(33573U);
    msg.setDestinationEntity(106U);
    msg.arrival_time = 0.1473264564276766;
    msg.lat = 0.9277290027328241;
    msg.lon = 0.7972286772107458;
    msg.z = 0.06068092025307048;
    msg.z_units = 88U;
    msg.travel_z = 0.08042874657183674;
    msg.travel_z_units = 178U;
    msg.delayed = 77U;

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
    msg.setTimeStamp(0.1324534148615194);
    msg.setSource(34653U);
    msg.setSourceEntity(111U);
    msg.setDestination(56657U);
    msg.setDestinationEntity(135U);
    msg.arrival_time = 0.5405140485379765;
    msg.lat = 0.6674936898367964;
    msg.lon = 0.5756239414745807;
    msg.z = 0.08660590154429404;
    msg.z_units = 82U;
    msg.travel_z = 0.9853137243288518;
    msg.travel_z_units = 252U;
    msg.delayed = 100U;

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
    msg.setTimeStamp(0.1658178423398038);
    msg.setSource(43721U);
    msg.setSourceEntity(254U);
    msg.setDestination(20578U);
    msg.setDestinationEntity(45U);
    msg.arrival_time = 0.3467192825771146;
    msg.lat = 0.5543525624500132;
    msg.lon = 0.9923924164335363;
    msg.z = 0.9317826844223157;
    msg.z_units = 134U;
    msg.travel_z = 0.1417299145720935;
    msg.travel_z_units = 202U;
    msg.delayed = 45U;

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
    msg.setTimeStamp(0.026237315576354225);
    msg.setSource(2797U);
    msg.setSourceEntity(44U);
    msg.setDestination(52184U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.7060501470511369;
    msg.lon = 0.07705665037072795;
    msg.z = 0.3246891679196374;
    msg.z_units = 85U;
    msg.speed = 0.44646340635929427;
    msg.speed_units = 179U;
    msg.bearing = 0.058383760680998154;
    msg.cross_angle = 0.2809614238448289;
    msg.width = 0.972567972295155;
    msg.length = 0.42583065483951277;
    msg.coff = 180U;
    msg.angaperture = 0.6366007331609123;
    msg.range = 3221U;
    msg.overlap = 205U;
    msg.flags = 16U;
    msg.custom.assign("NXGWJXJHFOURYNMRACZNBTGAUBHXKVGSEJXJFOZKNWGZCHWWUQKQKFQQZGCIXFVMLIWHKLAUPIHZQJDRGOCEYRZJHDDAFPQRUJRCVPBMGSFXAJYALIKLINZBKQIOMOYLMDTEVCWMRNDSMSIUJPELLTYEYBDEPPUOHDTGPZKBMZOROBNSFQDEFHHMLVFXREYIASXVUVLTCWFKWBSSCOATUXCATVPUYMOIGJXPBT");

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
    msg.setTimeStamp(0.7726797105037605);
    msg.setSource(6696U);
    msg.setSourceEntity(111U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.9900079360909937;
    msg.lon = 0.3988794182190283;
    msg.z = 0.13522509698028895;
    msg.z_units = 68U;
    msg.speed = 0.6608754182833105;
    msg.speed_units = 23U;
    msg.bearing = 0.32979293479044847;
    msg.cross_angle = 0.20217027949432265;
    msg.width = 0.17115471303005203;
    msg.length = 0.7930940750421267;
    msg.coff = 125U;
    msg.angaperture = 0.6777772411111969;
    msg.range = 49371U;
    msg.overlap = 161U;
    msg.flags = 151U;
    msg.custom.assign("XDFQBWXSBYHIRIZQLTMCMAPXJXVOPGBPUJRPTZZGSEWEKBUFRCZHWGJQBJDZHSEHQMOCGQOIYUJAERXZSHAMSLVYVSYUVQWWLUECPDKDNMRLLNJDFNGKMQKATZINIWAOOIPXODTURHXCETZ");

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
    msg.setTimeStamp(0.943309723092718);
    msg.setSource(17371U);
    msg.setSourceEntity(208U);
    msg.setDestination(65375U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.8448328676970164;
    msg.lon = 0.8604334096876294;
    msg.z = 0.2179362733613276;
    msg.z_units = 202U;
    msg.speed = 0.12078416971783612;
    msg.speed_units = 200U;
    msg.bearing = 0.7845594392760893;
    msg.cross_angle = 0.9653755973138888;
    msg.width = 0.7532817144782503;
    msg.length = 0.4017818008631783;
    msg.coff = 92U;
    msg.angaperture = 0.2902656905233033;
    msg.range = 43099U;
    msg.overlap = 151U;
    msg.flags = 100U;
    msg.custom.assign("EYXSIMNAPEESMNBHFOJCGBLQNUSCCLFTPVDKVZXBWYNDKCTAGLHHASXXUTDOOBUOKNUBRDSPVQDPYQSXNZAYKVAUCYAHIVXEFWBLOTVQIALRZHYZCQSXRZOZZWLQDXNFFPJGJEMGBPEMTWUOEWGSVNDJMCZNRQASGJEIHEQJJIUTPLYBVHMVLTGOTRYFWKBYMXHFDF");

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
    msg.setTimeStamp(0.6432589836940741);
    msg.setSource(14243U);
    msg.setSourceEntity(125U);
    msg.setDestination(61190U);
    msg.setDestinationEntity(248U);
    msg.timeout = 42864U;
    msg.lat = 0.06656382936249272;
    msg.lon = 0.19112339976572512;
    msg.z = 0.1899924851839625;
    msg.z_units = 70U;
    msg.speed = 0.014347884566757174;
    msg.speed_units = 118U;
    msg.syringe0 = 198U;
    msg.syringe1 = 156U;
    msg.syringe2 = 127U;
    msg.custom.assign("AMVNBFQRXKUJVJRTXBPPZGWHANURMQADUYHAXHQEOKGAMYREQFVUPVMHYWMVDGGCCNSUDFPUDHFBXLLKEUNCGKYFKHDEBDQCIRJONVACZBPWJOETORRVTKUTHGOLRQIDEJYINSKDKLWVZSYLFBCJIPWLXKKXIDITSPWIJCCWWQSIDBFOWMLAISMNBMTMBTYSAOXYLNRVTZZYTELZQJQPEAXGZFNPARHESNI");

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
    msg.setTimeStamp(0.7528961493020677);
    msg.setSource(215U);
    msg.setSourceEntity(245U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(179U);
    msg.timeout = 62411U;
    msg.lat = 0.4026302155519288;
    msg.lon = 0.3591607993235757;
    msg.z = 0.24917368649841543;
    msg.z_units = 88U;
    msg.speed = 0.25802809779703595;
    msg.speed_units = 102U;
    msg.syringe0 = 92U;
    msg.syringe1 = 13U;
    msg.syringe2 = 99U;
    msg.custom.assign("TTGQWDVCQBQURRMEHPAOPJGVKCWSKZZIMUBGARBBOIVMZIEGZHSKCXFFYUCWRODUGXUJOMKTHHYKDPK");

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
    msg.setTimeStamp(0.5819565758466867);
    msg.setSource(34957U);
    msg.setSourceEntity(112U);
    msg.setDestination(47567U);
    msg.setDestinationEntity(79U);
    msg.timeout = 24303U;
    msg.lat = 0.7210762420583224;
    msg.lon = 0.7382293860334749;
    msg.z = 0.5239400186461115;
    msg.z_units = 212U;
    msg.speed = 0.017702419091044308;
    msg.speed_units = 227U;
    msg.syringe0 = 14U;
    msg.syringe1 = 76U;
    msg.syringe2 = 207U;
    msg.custom.assign("HYPYNCCRNAJEUZUFHBRJFZKCBVVTKLUSALQMZGARUJLQWKSRSTGQCUYQHCABADVXUMWQADQXBXNVYHAGOFZSVJDLTSOOUTECZWHWNTGSEPEMINVUEKCSXGDMRDTRDBSHFFDKGWQFWJIOIILUMPFJBVTGVSQAEMNBRTHINZSFRYHXOOPPOTRDBJZPLLVIWZYNVJXHUEPDIWKMWMBOLLA");

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
    msg.setTimeStamp(0.22966900853308958);
    msg.setSource(2226U);
    msg.setSourceEntity(151U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.3221812955065778);
    msg.setSource(31645U);
    msg.setSourceEntity(34U);
    msg.setDestination(47155U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.4279810953492982);
    msg.setSource(53871U);
    msg.setSourceEntity(75U);
    msg.setDestination(17177U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.9271516816312374);
    msg.setSource(31877U);
    msg.setSourceEntity(140U);
    msg.setDestination(35355U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.7135987726310193;
    msg.lon = 0.8774821025537194;
    msg.z = 0.9879461723295055;
    msg.z_units = 11U;
    msg.speed = 0.8644882032777714;
    msg.speed_units = 204U;
    msg.takeoff_pitch = 0.19741037802105066;
    msg.custom.assign("QIOIGUTDAAUDTJQOTUCFZIOYTHDCKIFSYULPOZBJVCGYTUDQYWKKMZIVHQBBWRJZPFVIAVRNGMXSKVHMZNSIBUJGYBXXSFKJYWXRJLYLHOXDJAQGXSJKBPTLTBOEAKIVWONYENPCSTEVEUBEVPQCZCDWDZPWPSEPFENCGJMGMMQNHSULFGHVDNFAIYUZFATSWMROCZUGTEWWRKLMMRLLFAKPEXANEQXRQXSXDIAWR");

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
    msg.setTimeStamp(0.2901656200084628);
    msg.setSource(41750U);
    msg.setSourceEntity(192U);
    msg.setDestination(63263U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.6952608524056839;
    msg.lon = 0.07721125410695695;
    msg.z = 0.6059952752170367;
    msg.z_units = 65U;
    msg.speed = 0.7515068968299069;
    msg.speed_units = 74U;
    msg.takeoff_pitch = 0.6059313644234976;
    msg.custom.assign("RLMEKFZUTNNUT");

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
    msg.setTimeStamp(0.25079011753119873);
    msg.setSource(30993U);
    msg.setSourceEntity(159U);
    msg.setDestination(57368U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.6120876145330677;
    msg.lon = 0.42213022604754735;
    msg.z = 0.6754791196780664;
    msg.z_units = 152U;
    msg.speed = 0.677982946749278;
    msg.speed_units = 28U;
    msg.takeoff_pitch = 0.6687630328085769;
    msg.custom.assign("WEASLGJJQQPYRVMDTCHIFLZTUAFTLJMRANYMAJRLOARNCGUZBNFHECOFPYKZYEVBBIZGMWDPKAENGYVPAFENDHPPKLTBSIDNEMCPZBBZVQOUTRJKIXSHJWTDQZIJRXUIHOMCZBBKPVDUFDEDKSKYVOCXGNUWLWHBVHQYIDKNMIQOEIICSHRVXRKXTXCHZEMSUEJYLZUSWTNDBFTXNMJLQHJYRAXOFWXAYOXWLSGSSULOCK");

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
    msg.setTimeStamp(0.7852820971680085);
    msg.setSource(56448U);
    msg.setSourceEntity(50U);
    msg.setDestination(49427U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.44960444140320455;
    msg.lon = 0.22168130051987422;
    msg.z = 0.3553582133875163;
    msg.z_units = 110U;
    msg.speed = 0.9789784883180174;
    msg.speed_units = 100U;
    msg.abort_z = 0.4590924435683329;
    msg.bearing = 0.8287086020198174;
    msg.glide_slope = 40U;
    msg.glide_slope_alt = 0.8082465522683516;
    msg.custom.assign("TEMPCKPEABBBLMVIZTDTJLHNZHDVKVXWPTSXOUWO");

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
    msg.setTimeStamp(0.41088572400681644);
    msg.setSource(56120U);
    msg.setSourceEntity(246U);
    msg.setDestination(12758U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.4277673695521287;
    msg.lon = 0.6198509683043028;
    msg.z = 0.1620380655892547;
    msg.z_units = 70U;
    msg.speed = 0.33799864518284317;
    msg.speed_units = 23U;
    msg.abort_z = 0.29120945916730745;
    msg.bearing = 0.7075023730241592;
    msg.glide_slope = 198U;
    msg.glide_slope_alt = 0.8213964057150328;
    msg.custom.assign("SABMCETANBYEOFUYFBQSNEQSSCEBBQYEFUKJPEHBMOYPXNISYZVQJBCDYRPAPLATKYAGZSZOFPRNJGEKXUDFRGXXFVMGTLWOLPTRDOAHTDMQWHLJRJCKAUZUIBKCNEBMZWIUIEAKMFWXNCLKLRZSOHPAQJGGNNFBHZYQTOGRXJCPEFKCIHVHDWDVRVQTJGQHUPTNHLIWULVSWFYJLATWZKGOOVCHDOKZVXDRTLRVJZCXUYMIDIIXPUS");

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
    msg.setTimeStamp(0.5449366523346382);
    msg.setSource(42637U);
    msg.setSourceEntity(156U);
    msg.setDestination(30122U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.9833835329860192;
    msg.lon = 0.41352496289114204;
    msg.z = 0.4863829666846806;
    msg.z_units = 234U;
    msg.speed = 0.16340500981402528;
    msg.speed_units = 38U;
    msg.abort_z = 0.6130171428009473;
    msg.bearing = 0.7471257201667816;
    msg.glide_slope = 120U;
    msg.glide_slope_alt = 0.2719669569570129;
    msg.custom.assign("YKCNERDDHWQUYHBFZVIBTDQWKHIRTXQPABZLVUPSEAYJXHZ");

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
    msg.setTimeStamp(0.2688508554775695);
    msg.setSource(29210U);
    msg.setSourceEntity(88U);
    msg.setDestination(34556U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.40890791091716405;
    msg.lon = 0.25985423548197994;
    msg.speed = 0.024205837920544204;
    msg.speed_units = 149U;
    msg.limits = 99U;
    msg.max_depth = 0.4254395781341922;
    msg.min_alt = 0.22240359315784297;
    msg.time_limit = 0.8476937475765596;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9703243177326741;
    tmp_msg_0.lon = 0.6877725590460395;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KPJJYKGUYHEKFHTVGUOHSQEBODWPAOTXBFYYNCNMNDVKJGAENCAQEJFVHAPMNCCQHNZALKEBDNQQPWSYRBPELMWHTQMBTXFIAUWRRRTAUQKJEZADMTGLDZUWOPRHPXVYYOVDZZGZXKZWPAAICLSGPOSJKSMCFFYLQGROSSFTUFXPVCSICMKFZBBIIDOQWOOHVMUWIGJWIKSXXTEDJLGYIDXIXFHJILGVBT");
    msg.custom.assign("GMOETWAQSNNMRFOJUYOPTCEDWRWYMALLXDLTCYRKWEUMKAPZNTVMUNBXUCVIIAJHERGJYSLDYEIVJCQOQQKVZXHLTZYLKINAKZYWFKAZGFPQFFUQVHJRHGCYODKSQDBPQACGIMQWYZOPJARILKWCISWGTTIDNPQFXHTDHMVVSRGRZSUXHNGSMMVHZGFIOAOOAJPBBJ");

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
    msg.setTimeStamp(0.297913231509781);
    msg.setSource(37875U);
    msg.setSourceEntity(127U);
    msg.setDestination(12269U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.7951505801954545;
    msg.lon = 0.27211732044909787;
    msg.speed = 0.03946390617467843;
    msg.speed_units = 120U;
    msg.limits = 125U;
    msg.max_depth = 0.10413345117814099;
    msg.min_alt = 0.7965017439986745;
    msg.time_limit = 0.7042493141932571;
    msg.controller.assign("ANAQOHDBCTUGSRJFDVSGGWTIPAVMTOPCETKJEDJLKOLAOJIGEQRHGSJLIBAQBYLMMNPWZBXAUHHWAFOINGXJTMNUXQJGIEISPTWRDNYXVTFZCCKVMYKEWYTDOUBZZFCXQQDLFELHTUZFHSNVMNFMRVPOHYXCYUZBMZEIIHDDKQSSOVRPRKZHBLKUEVCZPWLBWUXOUXSQARGBNXFLWVCCJQKNMRMSRTHEKQYEOCYYPJSNJWGR");
    msg.custom.assign("ZUSEMIZMDEZMPICW");

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
    msg.setTimeStamp(0.6067910885299507);
    msg.setSource(63839U);
    msg.setSourceEntity(97U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.11141707320712979;
    msg.lon = 0.27212918680313647;
    msg.speed = 0.10961464435605639;
    msg.speed_units = 132U;
    msg.limits = 206U;
    msg.max_depth = 0.4742620203672716;
    msg.min_alt = 0.38401656038470267;
    msg.time_limit = 0.5966617368442674;
    msg.controller.assign("DUEQYUUFRGQDTAMKJBLECIQCVNLSGUSILAGI");
    msg.custom.assign("BROSGGJQVQWOSVZZU");

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
    msg.setTimeStamp(0.26225932189420587);
    msg.setSource(330U);
    msg.setSourceEntity(62U);
    msg.setDestination(51804U);
    msg.setDestinationEntity(14U);
    msg.target.assign("TOZZEJFPWUFURVVGBBVIVCFVLQTJOHJSLKSJDNJLXNIDYGXTQWGHMXCPWHKIODOOPGJZFKAKRGFZGIJTZOUHUKSUJKYYLZOQHDYEPWBGCLPAZAWQVXPQYXYQIDMCPCPURFCFIQQUNLCMLAAFEKIZBJGEUXVOMTDJAACULDSVYMNIZBKMTEZCKXMPERESWALHEKEBNVYHOBYIDDNPHGSCNWTRXRWVWNTOLBRWRUDXEAISRTAMQRFMF");
    msg.max_speed = 0.9842091576486606;
    msg.speed_units = 231U;
    msg.lat = 0.7217556480840817;
    msg.lon = 0.9980211209950876;
    msg.z = 0.27219915377606285;
    msg.z_units = 238U;
    msg.custom.assign("MKUYWPTNPWPYWXQYMUGEAQNFLZOGEYPHXQSZQRXIZUZMGEJQQTCUVTBCCGCLDVSDXJINZAMQMPDPMYDNGOTDJHJ");

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
    msg.setTimeStamp(0.4581465494995115);
    msg.setSource(28341U);
    msg.setSourceEntity(12U);
    msg.setDestination(17328U);
    msg.setDestinationEntity(106U);
    msg.target.assign("KUOVNECCVBBMKACRUIHKQXFOCXMFVEXKIHTJRGDFDGCRMMMDBSUELPKVGCLNZPWAKXJZMVKANWHCQSBKUJLNIVSQZYWWOBCEYXHZZFHYUZLYIWJQLFRTRLXWTFAZQAODEGNLMQGNIUTOSRZWNSPCINRJUHGSYTPMYRIKNDVCQKSIQZBPUEGUHEYXFOLAPUALJJTPPQXAWEMXOG");
    msg.max_speed = 0.14088313215176074;
    msg.speed_units = 70U;
    msg.lat = 0.8940270732477755;
    msg.lon = 0.41101425798015534;
    msg.z = 0.6997860701543792;
    msg.z_units = 190U;
    msg.custom.assign("SMBIURJCWCGIPUFFCAXHRMOEQRTPLQHRSTOAFDEQN");

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
    msg.setTimeStamp(0.08582332672051307);
    msg.setSource(58736U);
    msg.setSourceEntity(98U);
    msg.setDestination(19540U);
    msg.setDestinationEntity(25U);
    msg.target.assign("XVBEWQVPYBEITKPSZRPCWQAQFJZZTJYBAXUHGRVJIKDESLUCOYMHCMBXRYWPFTZBBDPFYOPMMMDBDCUWFYFHJEMSEUVQNLUGVAALHSADAKKCGDGSSXSHHWMINUZUYSZIYWARRECTLCDRNNFERHTMNXQLWNJIRLINWSABHVLEUVTFYPVOOQTJAWUCEXFVKHKFDGZOEXIZNJFSUQ");
    msg.max_speed = 0.3078841097812627;
    msg.speed_units = 26U;
    msg.lat = 0.6393133702260814;
    msg.lon = 0.08881121520337498;
    msg.z = 0.829067811089869;
    msg.z_units = 43U;
    msg.custom.assign("VUCFBHDENHEZCRPJMBATLHQVOOIPSKGJFCXVZHWMDFUNYRBLNAKCANOBJYDSCSAKUMHSXLONOIBPCWIAXTIHFIJULSGVZRZWTQWZBPYSQTWVXNXVBGPF");

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
    msg.setTimeStamp(0.6659647333016961);
    msg.setSource(28003U);
    msg.setSourceEntity(41U);
    msg.setDestination(8310U);
    msg.setDestinationEntity(133U);
    msg.timeout = 34895U;
    msg.lat = 0.048350615365146066;
    msg.lon = 0.4882686085061031;
    msg.speed = 0.21080666577593732;
    msg.speed_units = 38U;
    msg.custom.assign("LQKJUFXMZDTCRGKGHSRE");

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
    msg.setTimeStamp(0.4735330825121379);
    msg.setSource(63478U);
    msg.setSourceEntity(68U);
    msg.setDestination(40602U);
    msg.setDestinationEntity(23U);
    msg.timeout = 40815U;
    msg.lat = 0.8113735104069743;
    msg.lon = 0.2610176895591607;
    msg.speed = 0.6272904953212589;
    msg.speed_units = 43U;
    msg.custom.assign("BTMZQBDDLSOGXWGWIVRYJGNBOGITZVJGSCYEOVIFVXPUANWPJGFWJLTIKWOPOLMNCLVKZBTOANQRBUNIWRDLATNJCMVFBCKLSIZJCCDELEPYZFGIARZYYADFJLHPSTZREUORNFQHINPUOMJTDZYCBHRNHAECQTDMMAQYMKSKDVCNYEXOBQUTFQAJHPEVWAKSQDCHKHTXJMOKWRXKURREYWUBZPXB");

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
    msg.setTimeStamp(0.056012680815947236);
    msg.setSource(54942U);
    msg.setSourceEntity(168U);
    msg.setDestination(52905U);
    msg.setDestinationEntity(139U);
    msg.timeout = 39355U;
    msg.lat = 0.9478132411204749;
    msg.lon = 0.2967189256980567;
    msg.speed = 0.1947615879127037;
    msg.speed_units = 17U;
    msg.custom.assign("LFFEHXJTWESFDIZASOTXRUJYVKBODINBVHLMGKONVHASBMXUBOFPWJYGTLVZQOPLWYEJMRREHEPQJZQTPNGYVFNRDWINOZPWDZCITVZWGTBGNHNHHYOKCUAMFJWGRKCRL");

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
    msg.setTimeStamp(0.41159546869133135);
    msg.setSource(1443U);
    msg.setSourceEntity(199U);
    msg.setDestination(34006U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.09324749823032585;
    msg.lon = 0.5670907401521944;
    msg.z = 0.4970142530813739;
    msg.z_units = 56U;
    msg.radius = 0.5834731351728323;
    msg.duration = 49296U;
    msg.speed = 0.1690216454524207;
    msg.speed_units = 175U;
    msg.popup_period = 36829U;
    msg.popup_duration = 53978U;
    msg.flags = 129U;
    msg.custom.assign("KJNYQHLCCWPDFFAZKKMCXWWYYGFIUJDDHLWREVOISKJNGZESMLELZSJIDBOEHFGNVRFIZORDSXZSXYNESBFMIYKNWDRDEUROQLZZXRXHTPNCISPMMPWHJHCLGTTGKSFOVVUPQACJBIWG");

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
    msg.setTimeStamp(0.9584711409350885);
    msg.setSource(24050U);
    msg.setSourceEntity(147U);
    msg.setDestination(63903U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.31328400628836117;
    msg.lon = 0.7731397211268285;
    msg.z = 0.8587746948933201;
    msg.z_units = 31U;
    msg.radius = 0.19081141688545533;
    msg.duration = 51568U;
    msg.speed = 0.8807619982992586;
    msg.speed_units = 203U;
    msg.popup_period = 26005U;
    msg.popup_duration = 1582U;
    msg.flags = 161U;
    msg.custom.assign("OVENWPRDVKTQVTOSRDVYRYMAWSDTXOYIPWZMDAXPXSNFAIGTXMLYNJEKAPEISWKJXFGKJJILCNUVQOQBEGZRPFZVHLCFXLNTJAWNVCEQREEPCLFMCKNWOUXKUAGBOQFUVNBDVWFAXCGEJWIPZYKHZRQJYOWEUWFDQCTSLHSLCHJODIVHMILMNFBUYYRDJMBRPOQTKPBISDTAUZBUQKMTYBZMYHJGEUPHGHSUZDAGGCHLIZBBNZIXOC");

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
    msg.setTimeStamp(0.3845977313913328);
    msg.setSource(45441U);
    msg.setSourceEntity(73U);
    msg.setDestination(7933U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.05645290067456543;
    msg.lon = 0.6256826208919354;
    msg.z = 0.3165104226653317;
    msg.z_units = 17U;
    msg.radius = 0.060398002012092444;
    msg.duration = 36985U;
    msg.speed = 0.3539948923141327;
    msg.speed_units = 31U;
    msg.popup_period = 45686U;
    msg.popup_duration = 46245U;
    msg.flags = 54U;
    msg.custom.assign("MPMFNQATNKRJPOESTSVQJQOHOMZFUYRQOICTWPVQXFRTLBBZABGALVEYYDJVOUEVZLMTHBHKUDWAJCCNLUPNHPVQKHRBIVYHKYJWAQWBSDUFGRDLPWERGBRNPGFIZCKCHQCOSIXWDYZQZEGTLWLUMCIGOHRMZXRUSSECSBJGNFXAFUKJGIFEILBJQTMXFAIXWNVKJLBSAPDEK");

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
    msg.setTimeStamp(0.47891734991820845);
    msg.setSource(46128U);
    msg.setSourceEntity(99U);
    msg.setDestination(60799U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.7731358119587011);
    msg.setSource(23685U);
    msg.setSourceEntity(220U);
    msg.setDestination(11210U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.6220359835210528);
    msg.setSource(25199U);
    msg.setSourceEntity(33U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.04120286828204478);
    msg.setSource(19321U);
    msg.setSourceEntity(85U);
    msg.setDestination(36671U);
    msg.setDestinationEntity(3U);
    msg.timeout = 19682U;
    msg.lat = 0.6666039594341447;
    msg.lon = 0.544126252248361;
    msg.z = 0.41638118226020804;
    msg.z_units = 64U;
    msg.speed = 0.18242848714373083;
    msg.speed_units = 117U;
    msg.bearing = 0.6889174537295394;
    msg.width = 0.6395710852991862;
    msg.direction = 60U;
    msg.custom.assign("XQFRBVQUDJOGBOZMTMFEASTAPDEZKKLKJJGYOFNPNSDVYDSLUBUIRBYMMWPJIYYIWTXFVNRRMNXQHODCHSVTHYFGVEDALAYTLGOCGZMOUHUKEGGGNPBLQWWQSJKJXKPOVLOBEPYASANIWCDIXTEMEQLHQIRQWDVMHBNRXHZCHVORHJUBZPZFCTSXRNKCIGOKJKMERTIHTCS");

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
    msg.setTimeStamp(0.3508723844561067);
    msg.setSource(23316U);
    msg.setSourceEntity(209U);
    msg.setDestination(17884U);
    msg.setDestinationEntity(248U);
    msg.timeout = 24882U;
    msg.lat = 0.2188807546952204;
    msg.lon = 0.11819082649750101;
    msg.z = 0.5612618284071874;
    msg.z_units = 14U;
    msg.speed = 0.9331805917198565;
    msg.speed_units = 238U;
    msg.bearing = 0.3719621357696373;
    msg.width = 0.5089955590970002;
    msg.direction = 118U;
    msg.custom.assign("JQVVEOXNGUNQ");

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
    msg.setTimeStamp(0.29958162409089373);
    msg.setSource(33654U);
    msg.setSourceEntity(42U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(42U);
    msg.timeout = 65450U;
    msg.lat = 0.9077082787202786;
    msg.lon = 0.38907206242067316;
    msg.z = 0.8126395563558473;
    msg.z_units = 207U;
    msg.speed = 0.20215982960896361;
    msg.speed_units = 234U;
    msg.bearing = 0.04077286761927279;
    msg.width = 0.8933014231614911;
    msg.direction = 114U;
    msg.custom.assign("HFUHUVVEYCVFCERXXKWLNHAAFRECWHTQWHOIOSDMPBEZXUQZVWCZAJYKB");

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
    msg.setTimeStamp(0.7735330600816106);
    msg.setSource(35147U);
    msg.setSourceEntity(112U);
    msg.setDestination(10001U);
    msg.setDestinationEntity(220U);
    msg.op_mode = 53U;
    msg.error_count = 195U;
    msg.error_ents.assign("WMCYPTAYCXMFCKZQVAQLKUZN");
    msg.maneuver_type = 18256U;
    msg.maneuver_stime = 0.87540052653493;
    msg.maneuver_eta = 24880U;
    msg.control_loops = 3484263220U;
    msg.flags = 41U;
    msg.last_error.assign("ASUXKPWJABOQOSBNPEROOAIGPZDRYQKNBVESGCLPZFLNVJMADIVCWHCJFUDMGPZJSCHPOTODMIKSUHKHZKXRVDIXEPUUWCBWBFDRGYGIQFVLFPXOJHBQRVDRTLHGAXSESZFLYRZGZKUCEQXNQUJAOXWYZUTYKBIVMJTMWYLNPMZXIBEPWVFEKAAROAYIYMTWBHNBWHDHLJRSEDDZSTHNQJYXTCULGMQCIQFNX");
    msg.last_error_time = 0.4304149441292082;

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
    msg.setTimeStamp(0.09219747405618528);
    msg.setSource(18698U);
    msg.setSourceEntity(76U);
    msg.setDestination(42322U);
    msg.setDestinationEntity(162U);
    msg.op_mode = 15U;
    msg.error_count = 31U;
    msg.error_ents.assign("WSUDVKDIWWZIRSYBMFXIQIDEDIDUHEOZFYCJBMMOJGHRMECMPKUUGQDBLLVVXKLWNMLOISRTYEXLTRORHZTUAFEURQHWFWTREAJOWTGYOCVTQQYUKIOAWHAZHAYGXYHNTOQCE");
    msg.maneuver_type = 19703U;
    msg.maneuver_stime = 0.9695696231242571;
    msg.maneuver_eta = 35188U;
    msg.control_loops = 3932148942U;
    msg.flags = 145U;
    msg.last_error.assign("MIQFHZIOIQLLPMHVWKAIHQNERCUCVCZEKOAEGYLFXQHGVAROARYTVUMWXJHQGWKCEZAUTEZEMDMKKWNNWNYZOFVZMLCRTWNFYTMCCGUGHRJMIPBCKDDAVZIVANVBJRWFFDSQFXTSDQPIGFWPLIDONXLSCHOPLBRPLOBQJETKUJSCNODXSHLSGSJUUZDJBVYSGKDPHAYANRTEIBWBOEYFB");
    msg.last_error_time = 0.10748240700825296;

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
    msg.setTimeStamp(0.5747961172537452);
    msg.setSource(48660U);
    msg.setSourceEntity(179U);
    msg.setDestination(33152U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 118U;
    msg.error_count = 149U;
    msg.error_ents.assign("TRPEMVKJNHLOXUQTGVCTUXNIUABAIQFPACNZCYXMHIIPEXKSPYMFQJDARYITVMVHYIOPVNAREZGZJXSOPOWXOUXVBNKFSOEOLXOWDRVGDWUHCXJHWZIRMFYJNJJNKPQVCZLQEFFTAESGSJGKDGITWSEZRMZZBCP");
    msg.maneuver_type = 38749U;
    msg.maneuver_stime = 0.21153941002402987;
    msg.maneuver_eta = 11277U;
    msg.control_loops = 2637535210U;
    msg.flags = 251U;
    msg.last_error.assign("IVVSOIJFDCAZS");
    msg.last_error_time = 0.002470076551036371;

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
    msg.setTimeStamp(0.2976182088297339);
    msg.setSource(20217U);
    msg.setSourceEntity(114U);
    msg.setDestination(19299U);
    msg.setDestinationEntity(81U);
    msg.type = 79U;
    msg.request_id = 57122U;
    msg.command = 152U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.009460801440347;
    tmp_msg_0.lon = 0.07006252795884893;
    tmp_msg_0.z = 0.38014993178545253;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.radius = 0.142322712068767;
    tmp_msg_0.duration = 22298U;
    tmp_msg_0.speed = 0.4478981373268951;
    tmp_msg_0.speed_units = 163U;
    tmp_msg_0.custom.assign("MSXMKECUABSVWWKCWHFQEFXLNIITEMSGVCXPBABXSTENDHKSMVDDZBPUFVKLRYFLUYYJBYZZIYPVCOMBAQTJFFTWSWPKXOLDTRMALRCIYHKLKVMZGLEDSUOVHFHXLQTIPACIRTOYETKBVAMEAGPQUMQLWYJWIDORBEPRWCROFXRKQQU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44111U;
    msg.info.assign("YDSPAGRXRQIHDMZTYALCQVPEELOLNAQNQGTXABTLWRIRURJFZDKSNFLEXKZEBEOFJTYEUPMKDYNRUZCMXOIYUDSVWCVZTHGXMHIYQZKNBZWJORLLFTREHATYNJJKUHSKATWPJJKQBGYQJPPFDKGFNWAVGXNUIKOCEJCYBDGSXOVMLVCOMUXZBUWNWGHBESFEVQXIFO");

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
    msg.setTimeStamp(0.21048429008135827);
    msg.setSource(22912U);
    msg.setSourceEntity(99U);
    msg.setDestination(27415U);
    msg.setDestinationEntity(205U);
    msg.type = 166U;
    msg.request_id = 41108U;
    msg.command = 239U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 21409U;
    tmp_msg_0.rpm = 0.7760848398242988;
    tmp_msg_0.direction = 42U;
    tmp_msg_0.custom.assign("UDNGVHMPDCFKEPFLWFELKCZGDQOMSQITIFKSAQLDPZLBQZRMFRWHYEEQPDVXDUHNVOLKRXTGGCJUASVBZCWBVCVGEIKHLSINKXBTJZXVJCTNZTPIJEPVDAPMHEFWQLURCLWMUQXZWQYCNNSALJWARTMYIGSOSREKAWFOHEDXWSPZNQGOSRNQTDIJRYPXUZMTOV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22872U;
    msg.info.assign("WIPAXUHARSCOYTUDYKYDVFIASPWDRZQTNXYGSBNLQTHQVBHTRUFEMPLDLCRPQZKFGVWLPECYUNJATOWAMXYXUJJKJCTMAETIGEKUZECHFOHFBWACCMH");

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
    msg.setTimeStamp(0.5195962569657695);
    msg.setSource(5853U);
    msg.setSourceEntity(119U);
    msg.setDestination(17425U);
    msg.setDestinationEntity(49U);
    msg.type = 4U;
    msg.request_id = 58113U;
    msg.command = 68U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 41866U;
    tmp_msg_0.lat = 0.3457564233739411;
    tmp_msg_0.lon = 0.3345926668679652;
    tmp_msg_0.z = 0.6532113133267352;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.amplitude = 0.92332406677029;
    tmp_msg_0.pitch = 0.28906084142202204;
    tmp_msg_0.speed = 0.5048690572996648;
    tmp_msg_0.speed_units = 101U;
    tmp_msg_0.custom.assign("THFKJZUGYMHAWYTISEVULURVHKDVLBPFKNJTAMEPPZLMBXLPVZOHNLBLOEBDCMTEUHORWGQRPSNNSJBQQQTJGSAIFQWXHWGOVEUDROASIWJIVBHBVXYPEJTPOEDEXDDXMLOUNJFFYKPLZXSIQBIUCXZAFSGTOPLQWNHFFXGNDVGNZKAEGLZSAUUOTDKWYQWKPRJTYGBZZMAISKRJUKRCYQCCGQEJCVXAFCHZWOYDKXAHYNW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43376U;
    msg.info.assign("WTDIZBVTJMESFAJFKEIMBGZPVWBLIZRHSYNYDTXMABVXGEWHHWDWQQCTUDVDDGPXTVXNFPYLOOQWAZSJFRWUQOGLGERUVNEQPUUMXBEQPJFA");

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
    msg.setTimeStamp(0.8163487340169495);
    msg.setSource(47957U);
    msg.setSourceEntity(47U);
    msg.setDestination(36430U);
    msg.setDestinationEntity(91U);
    msg.command = 186U;
    msg.entities.assign("RVUZAMFLIAWTJWXCWFUGRCGZTRJYSMTGXETISUXJTXOSNQSQFHPQGNFIPLBJNYOZPZLIHONXJUCJTNUVLYKYEALQOALYKINSAFPIGPCDXPLQVVFEMPRBSXESAWX");

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
    msg.setTimeStamp(0.7710906689232812);
    msg.setSource(53484U);
    msg.setSourceEntity(62U);
    msg.setDestination(53986U);
    msg.setDestinationEntity(60U);
    msg.command = 66U;
    msg.entities.assign("PPJCRZZLRWAUFIGGCSVSMIJUMVEVNXCVVLTMXWSFELYXIDNETAGMKCNRTQBIYVHCFDROMSMMAPSHGZRHYWJPJPW");

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
    msg.setTimeStamp(0.6898267133070187);
    msg.setSource(26199U);
    msg.setSourceEntity(176U);
    msg.setDestination(6717U);
    msg.setDestinationEntity(244U);
    msg.command = 79U;
    msg.entities.assign("BHOJAOQDQNZGPYXCTFJCGPYVIWITXOQMOGMLIEKKPSLXYZGYWIFGCWKRPVTCMR");

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
    msg.setTimeStamp(0.39930056926584);
    msg.setSource(44952U);
    msg.setSourceEntity(33U);
    msg.setDestination(27128U);
    msg.setDestinationEntity(130U);
    msg.mcount = 115U;
    msg.mnames.assign("CKZTVWFYWUBSNOKPKTCMOBXYTUSAZKAWZVCBEQOXPMMMOUXSPXJZNVAOCSBSJQANXPKAQQZUYVTEIIIBDLDKQDLNJTMPZPUGOAZIFHAQUEXHCXXJMHFJCYICSYXANELLVTGJRIRPMDBGJTJHBNKFNREGTLAUSGUGCTMTNFZDFIYSURWWHWPOWWCMQXOGVLROPDHHNFUKLGMSNR");
    msg.ecount = 202U;
    msg.enames.assign("TELRVMSCOHGIJQCOYGKOFWCXSHQDZEKVIZNECRXYHFQPHGTOCLNMSWTJHWAAFJCMDLBRNPKBFTNJQUAAPNZNKTISAMBADPBK");
    msg.ccount = 214U;
    msg.cnames.assign("WJHZHUARZLJHMHGIHVAPWYULBWSAHOSTTJUYKBSNRMCKGCBCKCBYDWRXDBMQMFTPXLUNSPOVSPIKBGQMNMVOTFBXMOCDZBVLCPITQIKAQBGKFDKFLDEXELCETEIEOKOLHYNKJZEUKXPONBGWWIEGEQFPRGNPTIQVJGAFVNVWYZUNYIYAZECPQJHORJRCGNCIXURZAWFSQJX");
    msg.last_error.assign("PNBGBQGOUOXLZEMOFOCGUWZKSADPRTHTZYGDPRCXSYRHNCLTRUBLLMHEKPVWCYXBPKJYJSJRQEDQTHKYKEFNYVGSAETMYKGSSZDVOAHQANGEJEIVBFHUTWRLPMBDLWSVAIZXJUNMIQCVXFREWOBNJJITMWFXERELUOAZYTIFGPHDLWNDOWXVLMLZNWKMTXKFPCAIPHWSUGIAQKNRHDXBAVZHDAFUCKJUJGOVZQYOQZIRCMSXTFVFYCSIB");
    msg.last_error_time = 0.6214132777498246;

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
    msg.setTimeStamp(0.396439103208699);
    msg.setSource(6471U);
    msg.setSourceEntity(194U);
    msg.setDestination(2106U);
    msg.setDestinationEntity(106U);
    msg.mcount = 95U;
    msg.mnames.assign("VKLQPKNTZJMRHWGKFMKWLXEEJAHXCXHZSDORQVWPWBUZGNUWHOFQUTZRDZAECDDHIQFLZSTRFDITDJGLDBSXJYXMSXGXNMBWLOKDWQNCCGTNDVUNVOVKINDCNGAFGEIXNWYFSYOBSSRFEUAAWTPHVILGQIBIOIAHAKTEUYUFQAFPLOTSFWYZQLZBCHVYPPEUJQYL");
    msg.ecount = 171U;
    msg.enames.assign("EAVUIQVSNPZAWGEQIQTKXYALRPIRZJOEQEYVLSXWYVHOUGKFMJXHTFFCYDGMMTSRANWTCKDSPHCPUAXINCBTCKWSPMIZRSBISJIVUUAIEFZUZGUTPMEEOBKOOICQXHGMNAXYFWKZNVDJFTZGDXWWHAGZURHMXLHQBWORGMOPJAWOTLOPHFPFLEKPYJQBWYK");
    msg.ccount = 22U;
    msg.cnames.assign("WWFQEDSUUOWVIKMNAZKBAFZADHPZOFHJWILLGVAPHQPVENKVSKJFMGIYWOARSHLKUGGMNNXIPNEMPGJMSOCZFRLGQRURCLNEMZFPOERBHBZTQXWXXWJLXEQRMDBOJMIKZOPGICHZBNSSEFQILCVGYSQBBYLYTPCURJWLAASTUYRWZUPTOXKMBNUJOTUHXVHDTSYDFCBC");
    msg.last_error.assign("HUEVRMFKDPAGLNUWRFBVMGIAGIHCDGUIKEBNFTYWSVKTUNACRZEMXPIPHWNEVZMYMTMDCMIPWQUZGQVMCLGEVTPKNLYBLOUBFESCLJXJAUKBDIEIXNCLQZIJAUQDZZJQEFWZAQJXTZWTKGDHHHYSAPMSFGSUKAREQRQTPOYRXLJHDTPAQWLFROUONJOGLCRVNCZJPOSOWYFPDVN");
    msg.last_error_time = 0.2753314172980891;

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
    msg.setTimeStamp(0.06983455694742191);
    msg.setSource(57383U);
    msg.setSourceEntity(172U);
    msg.setDestination(5604U);
    msg.setDestinationEntity(141U);
    msg.mcount = 82U;
    msg.mnames.assign("IRJBUFXUSMKHATVGHSZAISOBNRSVAYPSWDCWLZPDFVIQWRDNODWKQGHOVJAHUYRHEIACPTLCOUJRYEYJXBQMMCKNQQCEYBRFFCKGGELJNILHBQHSOIIJMCZVVDZRZWHRTBOGCGKNRTGWDJVKFIGXXGDYNAPQKMEYJWBUWTAKMILPUJKNLPTELLPOZPUFGMUUTXCOLMEBEUFZBAFINLNYFTHAWTEAVBDYSSQTQZDFPODPVXVRXQJSXO");
    msg.ecount = 172U;
    msg.enames.assign("SUYXOLREVNAKD");
    msg.ccount = 216U;
    msg.cnames.assign("NSWVOWPCPZBVOWTGKUMRGG");
    msg.last_error.assign("IFBUBHRLIJBDFPYCZLEGBWRRJKQOKOATYLCEQRZBTPIHPNTHZQYEVTKBOGGJFNASRKQTLWCZWXIAONRBILFZMPEYMXVDVRUEDSBGKVXFCJMIUFAHLRUTFFLGQMCPRDGTNIXZMLIZBJSOQWVKHBUHAYGPXOEGKQAXOCSYNKSVPYMUWEEUKXXZFJDPUISJDLDSZAVKTVHWXUQCSOSEXDDYMHWFGMJZHNNCJETNWMROAGMJCQSWPQ");
    msg.last_error_time = 0.32286603442974815;

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
    msg.setTimeStamp(0.5458109091591297);
    msg.setSource(3558U);
    msg.setSourceEntity(0U);
    msg.setDestination(64205U);
    msg.setDestinationEntity(95U);
    msg.mask = 87U;
    msg.max_depth = 0.01062241388526719;
    msg.min_altitude = 0.5940038926041836;
    msg.max_altitude = 0.002853915933422768;
    msg.min_speed = 0.6104541368105286;
    msg.max_speed = 0.10713140842124569;
    msg.max_vrate = 0.7401470238117266;
    msg.lat = 0.9827768829916503;
    msg.lon = 0.058594678065874595;
    msg.orientation = 0.35740455668697746;
    msg.width = 0.20733925326456193;
    msg.length = 0.34281721312450253;

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
    msg.setTimeStamp(0.9457871396157073);
    msg.setSource(20708U);
    msg.setSourceEntity(173U);
    msg.setDestination(1361U);
    msg.setDestinationEntity(194U);
    msg.mask = 214U;
    msg.max_depth = 0.7718485012884262;
    msg.min_altitude = 0.10175571686924512;
    msg.max_altitude = 0.8194212136040806;
    msg.min_speed = 0.5536840206604293;
    msg.max_speed = 0.6922424188971794;
    msg.max_vrate = 0.23415407880203853;
    msg.lat = 0.8198053968252268;
    msg.lon = 0.2641016134256361;
    msg.orientation = 0.15290293449827774;
    msg.width = 0.4570105103363703;
    msg.length = 0.4292461795978961;

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
    msg.setTimeStamp(0.6454808353887308);
    msg.setSource(7740U);
    msg.setSourceEntity(179U);
    msg.setDestination(37789U);
    msg.setDestinationEntity(24U);
    msg.mask = 198U;
    msg.max_depth = 0.8784354357694396;
    msg.min_altitude = 0.40463291267214585;
    msg.max_altitude = 0.6055353774434584;
    msg.min_speed = 0.07554966722739898;
    msg.max_speed = 0.8799829500519304;
    msg.max_vrate = 0.14970211889448115;
    msg.lat = 0.03166042357062704;
    msg.lon = 0.27132570390481825;
    msg.orientation = 0.7846588903919093;
    msg.width = 0.7327115872887343;
    msg.length = 0.511740258223755;

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
    msg.setTimeStamp(0.5508160481696952);
    msg.setSource(65427U);
    msg.setSourceEntity(218U);
    msg.setDestination(14364U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.095706578101449);
    msg.setSource(60638U);
    msg.setSourceEntity(98U);
    msg.setDestination(36738U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.7146326193876126);
    msg.setSource(924U);
    msg.setSourceEntity(85U);
    msg.setDestination(4497U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.7515595141391281);
    msg.setSource(3841U);
    msg.setSourceEntity(247U);
    msg.setDestination(63457U);
    msg.setDestinationEntity(162U);
    msg.duration = 23873U;

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
    msg.setTimeStamp(0.5494929757099132);
    msg.setSource(18970U);
    msg.setSourceEntity(58U);
    msg.setDestination(49669U);
    msg.setDestinationEntity(153U);
    msg.duration = 29412U;

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
    msg.setTimeStamp(0.5046879803099308);
    msg.setSource(12773U);
    msg.setSourceEntity(213U);
    msg.setDestination(13428U);
    msg.setDestinationEntity(232U);
    msg.duration = 28992U;

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
    msg.setTimeStamp(0.9538706166764658);
    msg.setSource(21005U);
    msg.setSourceEntity(187U);
    msg.setDestination(21226U);
    msg.setDestinationEntity(168U);
    msg.enable = 25U;
    msg.mask = 3413488672U;
    msg.scope_ref = 4151431623U;

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
    msg.setTimeStamp(0.4214788813263154);
    msg.setSource(36284U);
    msg.setSourceEntity(129U);
    msg.setDestination(31284U);
    msg.setDestinationEntity(74U);
    msg.enable = 225U;
    msg.mask = 420124132U;
    msg.scope_ref = 2075193792U;

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
    msg.setTimeStamp(0.65180075641326);
    msg.setSource(8975U);
    msg.setSourceEntity(49U);
    msg.setDestination(23026U);
    msg.setDestinationEntity(118U);
    msg.enable = 146U;
    msg.mask = 747312278U;
    msg.scope_ref = 95866040U;

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
    msg.setTimeStamp(0.2142718910824598);
    msg.setSource(29020U);
    msg.setSourceEntity(195U);
    msg.setDestination(60033U);
    msg.setDestinationEntity(120U);
    msg.medium = 106U;

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
    msg.setTimeStamp(0.17539361651502883);
    msg.setSource(15602U);
    msg.setSourceEntity(135U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(153U);
    msg.medium = 82U;

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
    msg.setTimeStamp(0.9453379705047584);
    msg.setSource(9640U);
    msg.setSourceEntity(241U);
    msg.setDestination(59860U);
    msg.setDestinationEntity(245U);
    msg.medium = 76U;

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
    msg.setTimeStamp(0.16378770418385813);
    msg.setSource(62243U);
    msg.setSourceEntity(4U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5420143950101715;
    msg.type = 235U;

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
    msg.setTimeStamp(0.5173474278678639);
    msg.setSource(57620U);
    msg.setSourceEntity(7U);
    msg.setDestination(59746U);
    msg.setDestinationEntity(176U);
    msg.value = 0.408165926279053;
    msg.type = 99U;

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
    msg.setTimeStamp(0.0342149632303147);
    msg.setSource(43125U);
    msg.setSourceEntity(22U);
    msg.setDestination(48318U);
    msg.setDestinationEntity(162U);
    msg.value = 0.9009584349179076;
    msg.type = 235U;

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
    msg.setTimeStamp(0.12373816506929236);
    msg.setSource(29401U);
    msg.setSourceEntity(132U);
    msg.setDestination(48605U);
    msg.setDestinationEntity(188U);
    msg.possimerr = 0.9938736588500913;
    msg.converg = 0.22403360668016548;
    msg.turbulence = 0.09946693469262402;
    msg.possimmon = 237U;
    msg.commmon = 222U;
    msg.convergmon = 28U;

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
    msg.setTimeStamp(0.26393957308966665);
    msg.setSource(2972U);
    msg.setSourceEntity(15U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(229U);
    msg.possimerr = 0.9999837786144223;
    msg.converg = 0.3570493472706191;
    msg.turbulence = 0.7708532744228483;
    msg.possimmon = 144U;
    msg.commmon = 79U;
    msg.convergmon = 68U;

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
    msg.setTimeStamp(0.4671992622420871);
    msg.setSource(64810U);
    msg.setSourceEntity(101U);
    msg.setDestination(41864U);
    msg.setDestinationEntity(137U);
    msg.possimerr = 0.778894678121459;
    msg.converg = 0.0033216787608194576;
    msg.turbulence = 0.9330816348275436;
    msg.possimmon = 242U;
    msg.commmon = 220U;
    msg.convergmon = 27U;

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
    msg.setTimeStamp(0.5573093567686508);
    msg.setSource(65109U);
    msg.setSourceEntity(204U);
    msg.setDestination(20701U);
    msg.setDestinationEntity(231U);
    msg.autonomy = 143U;
    msg.mode.assign("KUNJBLVYVUVEMVBXYUMVZIIBAXJPLBKFTACCQFRTUAYONIUHRCDKRJKOGWANECJTNOXITCQZZKPPPQHPWSFOEGMBZFRFBSHYCBWNTLAFDMTYEHMULJZBLSRIRXLCDUCEEVWQHQJW");

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
    msg.setTimeStamp(0.8282877885762417);
    msg.setSource(30684U);
    msg.setSourceEntity(41U);
    msg.setDestination(31664U);
    msg.setDestinationEntity(179U);
    msg.autonomy = 30U;
    msg.mode.assign("NFCFBNTWAACKTYCIOLHLOSXZNIQMVCLZMMWIRTQABOUUJIGMEEOHLXIOCDEYXKBWNFMRGVWY");

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
    msg.setTimeStamp(0.4134443137644477);
    msg.setSource(7684U);
    msg.setSourceEntity(141U);
    msg.setDestination(40773U);
    msg.setDestinationEntity(40U);
    msg.autonomy = 83U;
    msg.mode.assign("QYYLMFJCOMGVSITCNPTGORKVXPIRJFMBETXDZJCXWJVYAFEZBKIAHBENZHWNPGIXLAYFIKDOTGRYDPILSKAPCEUXKTXXHMEDRZKOLMFDJJLQDOBHD");

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
    msg.setTimeStamp(0.5765006655340295);
    msg.setSource(56112U);
    msg.setSourceEntity(142U);
    msg.setDestination(1075U);
    msg.setDestinationEntity(31U);
    msg.type = 168U;
    msg.op = 117U;
    msg.possimerr = 0.8462762178747395;
    msg.converg = 0.6948937972101089;
    msg.turbulence = 0.49802765172900143;
    msg.possimmon = 29U;
    msg.commmon = 215U;
    msg.convergmon = 215U;

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
    msg.setTimeStamp(0.33863485170382823);
    msg.setSource(21682U);
    msg.setSourceEntity(214U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(147U);
    msg.type = 121U;
    msg.op = 178U;
    msg.possimerr = 0.6267174352662873;
    msg.converg = 0.8615156149156438;
    msg.turbulence = 0.4229779997910965;
    msg.possimmon = 80U;
    msg.commmon = 201U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(0.25479371030390463);
    msg.setSource(23387U);
    msg.setSourceEntity(5U);
    msg.setDestination(19989U);
    msg.setDestinationEntity(93U);
    msg.type = 10U;
    msg.op = 61U;
    msg.possimerr = 0.9365823394063112;
    msg.converg = 0.38327171415260486;
    msg.turbulence = 0.837229289032111;
    msg.possimmon = 16U;
    msg.commmon = 241U;
    msg.convergmon = 68U;

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
    msg.setTimeStamp(0.7372973335111157);
    msg.setSource(2463U);
    msg.setSourceEntity(128U);
    msg.setDestination(20676U);
    msg.setDestinationEntity(185U);
    msg.op = 108U;
    msg.comm_interface = 10U;
    msg.period = 11473U;
    msg.sys_dst.assign("UATDDKXABATTBSMNVRKQIZHYHCZJOSFPYSUBUVNVHVWKVEIKIJQHUYMFLBWCVLNORMZJLSVPZIZLZIGMOHZWCRAMQWOPSEEPNXAYHUSGSNOUJIRPATUFJWAMQHKZQMCLRVDYDTCLO");

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
    msg.setTimeStamp(0.32088425627197037);
    msg.setSource(4307U);
    msg.setSourceEntity(192U);
    msg.setDestination(14223U);
    msg.setDestinationEntity(101U);
    msg.op = 162U;
    msg.comm_interface = 247U;
    msg.period = 7759U;
    msg.sys_dst.assign("LFHDKJTVHJJUJDXFIWSVZJZVWFWVJMZMVLHDBUHYGPMGTUNYEOLSGSRJBGVHORKEOYVUCERLEECSGITAYDOWOAGXWIBCYBNQPSACFQTLKZGDDTOPCXIPKTYAHNCXFTXCNOHXZNBLJEOZLYFAENSDQCQRUPMYVOPNIXPDAMTWWQUDXIQREWBRJKHMMQIIGMKTS");

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
    msg.setTimeStamp(0.5503704285745135);
    msg.setSource(46887U);
    msg.setSourceEntity(144U);
    msg.setDestination(51796U);
    msg.setDestinationEntity(174U);
    msg.op = 65U;
    msg.comm_interface = 113U;
    msg.period = 45818U;
    msg.sys_dst.assign("WNORYHVDOJEJLNWYPRMXJQBQKMFWQTDUCGFCOKUTGNUHGZVBVLUWZHEJTDZPFIOADJBV");

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
    msg.setTimeStamp(0.04507438014740939);
    msg.setSource(44433U);
    msg.setSourceEntity(43U);
    msg.setDestination(9762U);
    msg.setDestinationEntity(60U);
    msg.stime = 2610347103U;
    msg.latitude = 0.7008898723267288;
    msg.longitude = 0.4591824449696965;
    msg.altitude = 64792U;
    msg.depth = 52409U;
    msg.heading = 7351U;
    msg.speed = -14358;
    msg.fuel = -91;
    msg.exec_state = 5;
    msg.plan_checksum = 27634U;

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
    msg.setTimeStamp(0.5565605475179539);
    msg.setSource(32387U);
    msg.setSourceEntity(142U);
    msg.setDestination(59282U);
    msg.setDestinationEntity(103U);
    msg.stime = 3648738064U;
    msg.latitude = 0.32646062475826176;
    msg.longitude = 0.9296819375083772;
    msg.altitude = 40219U;
    msg.depth = 11680U;
    msg.heading = 63358U;
    msg.speed = 18558;
    msg.fuel = 7;
    msg.exec_state = 104;
    msg.plan_checksum = 3938U;

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
    msg.setTimeStamp(0.18113165367540573);
    msg.setSource(5959U);
    msg.setSourceEntity(110U);
    msg.setDestination(42395U);
    msg.setDestinationEntity(30U);
    msg.stime = 2348025592U;
    msg.latitude = 0.6646227660394968;
    msg.longitude = 0.5960037890386182;
    msg.altitude = 42848U;
    msg.depth = 48945U;
    msg.heading = 60762U;
    msg.speed = 9990;
    msg.fuel = 80;
    msg.exec_state = 72;
    msg.plan_checksum = 41654U;

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
    msg.setTimeStamp(0.0023767860951600106);
    msg.setSource(63422U);
    msg.setSourceEntity(136U);
    msg.setDestination(41466U);
    msg.setDestinationEntity(222U);
    msg.req_id = 13577U;
    msg.comm_mean = 19U;
    msg.destination.assign("ITCIEMQJJVTKQKQCTDBDFQZNBDBGRABPKALAJXIMQKYWMNRXYNIGJVAVWDMTWKVSOJCCZGFVUZYBPYCOSOCNNLADLWHOOZJKLKGGPQUREZJVINYZWZFRYDMUCSMOPAIXSLSU");
    msg.deadline = 0.5959341115871806;
    msg.range = 0.8841870516524389;
    msg.data_mode = 112U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5556418027799503;
    tmp_msg_0.y = 0.6808604364295762;
    tmp_msg_0.z = 0.2878390565809339;
    tmp_msg_0.phi = 0.9589253792699525;
    tmp_msg_0.theta = 0.37879993071674434;
    tmp_msg_0.psi = 0.8741748655480704;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GOPBUZIWZVHXGCYZUQEKBEJIKCERZZKEPNKKFBOACDRWNDYGDTVAQMJHBUJPLRWBJHISGWOTVNMYTQDTUTOMOSSZIKWYINPLGHMXMVRAXXBPNRRPQFTUCHNQOJZNGRSSWMVMAFZASGCKPOHYUACHQHTXPWGEDNBFHARRVHNDEGOXJBKKUDCREKCXSULESZAQQBOVPTZWLUFLAGLSMFIJLYLFJIXCVUDSVQTACTLFJYYNFQLEYIXVMIMIB");
    const char tmp_msg_1[] = {-47, 62, -90, -103, 88, 28, 33, 25, -110, -6, 73, -22, 78, 16, 125, 76, 85, -71, 86, -28, -94, 91, 107, -48, -34, 65, -69, 101, 66, 36, -20, 42, -80, -128, -43, 97, -109, 106, -48, 121, 58, -106, -18, -85, -122, -91, -95, -61, 77, 22, 71, -50, -37, -66, 62, -18, -106, 41, 88, -112, 106, 34, 2, 110, 95, -6, 71, -35, 99, -103, 87, 81, 115, -91, -80, -53, 99, 101, 50, -52, -50, -108, 117, 123, -99, 7, -80, -71, -78, 107, 122, 58, -68, -118, -75, 16, -110, -117, -84, -25, -75, 17, 118, 43, 5, -120, -92, 108, 76, 94, -55, -75, 94, -82, 74, 72, 96, -115, 119, -67, 94, -101, 69, 44, -38, 90, 19, -28, 48, -46, 106, 18, -63, 122, -15, 71, -70, -25, 99, 124, -64, -27, 56, 77, -48, 59, 61, 111, 20, 89, 75, 52, 26, 69, 78, -52, 111, -24, 23};
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
    msg.setTimeStamp(0.100720804496362);
    msg.setSource(22210U);
    msg.setSourceEntity(27U);
    msg.setDestination(64173U);
    msg.setDestinationEntity(212U);
    msg.req_id = 31784U;
    msg.comm_mean = 20U;
    msg.destination.assign("HBGUSESIOERLDWLTQZODPMXVCWJR");
    msg.deadline = 0.8365623647715666;
    msg.range = 0.2257893917490731;
    msg.data_mode = 98U;
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.7631012674714576;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TDLOLRFPVPCOOGNSGJGNSSYOHPRTDAZUELFVTSUHXXBMVXICEDHSNTEFYCYX");
    const char tmp_msg_1[] = {-53, 4, -21, 126, -113, 77, 24, 109, 27, 16, 75, -89, 92, 90, -91, -16, 94, 26, -5, 120, -125, -56, -99, 18, 93, 85, -71, 109, 124, 26, 30, -59, -117, 25, 110, 72, 17, 117, -5, 34, -72, 116, 71, -15, -33, 49, 112, -83, -66, 53, 117, 42, 77, -123, -29, 112, -86, 95, -67, 72, 24, 13, -87, -23, -34, 11, -71, 44, 109, -61, -99, 63, 33, 12, 73, -17, 30, 29, -1, 105, 11, -116, 76, 10, 9, -37, -54, -33, -66, 91, -2, -64, 96, 104, 69, 30, -105, -36, -32, 44, 55, 78, -37, -73, 73, -64, 85, 101, 36, -58, -96, 69, -118, -99, 123, -112, -124, -110, -109, -9, 90, 23, 111, 81, 61, 39, 29, -70, 13, 71, 69, 54, -109, -91, -30, 107, -125, 2, -23, 40, 89, 69, -51, -33, -25, -128, -62};
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
    msg.setTimeStamp(0.09008173627321892);
    msg.setSource(7560U);
    msg.setSourceEntity(4U);
    msg.setDestination(53307U);
    msg.setDestinationEntity(235U);
    msg.req_id = 56008U;
    msg.comm_mean = 210U;
    msg.destination.assign("ASOPICWILOZEPIMFAVOXBJKYCTGEDWQQQLMYBCEHHWQOFRUQEHUXEXQSBCJCXPMVRBZPFZWTSAVPZAFRDIEQAKJNSLNZRMPI");
    msg.deadline = 0.4692146392796862;
    msg.range = 0.7437356167333949;
    msg.data_mode = 100U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.05518382608702865;
    tmp_msg_0.lon = 0.0074857011474506185;
    tmp_msg_0.speed = 0.4894243875157577;
    tmp_msg_0.speed_units = 68U;
    tmp_msg_0.duration = 48060U;
    tmp_msg_0.sys_a = 37528U;
    tmp_msg_0.sys_b = 62340U;
    tmp_msg_0.move_threshold = 0.7256265565381267;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CYEQUPGOJOSCZVZGYCNMWBRXYSTNZZWJIHAAETKHNOUWICEPISDVWGYGFRADPWCZIBEKBUAGRLKTLLWVFKECIOSHSDULGNHOSVMQFDRDCRQJQQBMJDLJJWMZAWFRVLBHLVNBHBGXPNIICGVZEURZKWOBSNUFDPS");
    const char tmp_msg_1[] = {-100, 119, 53, 70, -122, 69, -80, -20, 126, -58, 113, 80, -17, 40, -37, -27, 87, -101, -126, 82, 85, 35, 5, -96, 40, -25, -14, 8, -12, 1, -28, -31, -6, 59, 66, 10, 101, -125, 64, -88, -96, 123, -10, 62, 80, 85, 2, -98, 10, 15, 33, -60, -28, 48, -53, -39, 123, 10, 78, -14, -20, 86, -9, -50, 73, -74, -77, -124, -22, 41, -80, -80, -84, -1, -43, 118, -120, 122, -6, 84, -46, -47, 10, 114, -28, -75, 124, 77, -116, 32, -86, 111, -61, 78, -29, 53, 104, -15, -39, -56, 106, -88, -70, -83, -54, -19, -7, 83, 75, -31, 29, 91, -119, 28, -122, 77, -98, 86, 115, 36, 98, 39, 45, 46, 1, 95, -27, -8, -69, -20, -93, 57, 106, -103, 66};
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
    msg.setTimeStamp(0.8458977169690333);
    msg.setSource(36051U);
    msg.setSourceEntity(24U);
    msg.setDestination(27999U);
    msg.setDestinationEntity(27U);
    msg.req_id = 50526U;
    msg.status = 161U;
    msg.range = 0.3076361995200019;
    msg.info.assign("PPAWFWFVJTZXGYHRNKESKHRCLDZHKISDADPWSOBLOKKHQGDDIKUBERBEWHSAFOTGRTWPBNSHVKMIIFCBWQZMDPEHRTNVWUVKUVZETNRXYAXMMVPSBJAYUJNQUSCHOJLIOYFGKYJYEGAACDCUZCMBKUSYIYPWXXOTBQGFMLJFWCNEHLCJFQRZVAWUVNLZFRCSXNPUUXZXLFIJMTQGIXARQLVGX");

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
    msg.setTimeStamp(0.7276492488461155);
    msg.setSource(21485U);
    msg.setSourceEntity(10U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(181U);
    msg.req_id = 14382U;
    msg.status = 243U;
    msg.range = 0.6583538509348928;
    msg.info.assign("PNVMVLVKRGAVPDUALKLMIWNSLZJCTTTQMAKNMGDESKUMHXDDPGSEIQUPIDIOOILIUWFCWRWXMAHKIXYLBDFZETEAPLZHYRHVRNPXYFDCJISCGAESBTBZGRKJU");

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
    msg.setTimeStamp(0.7222805213369102);
    msg.setSource(19016U);
    msg.setSourceEntity(107U);
    msg.setDestination(25215U);
    msg.setDestinationEntity(95U);
    msg.req_id = 25444U;
    msg.status = 47U;
    msg.range = 0.8153907625408553;
    msg.info.assign("TLJBZHWPWCZFXQMKXVXNYOHAFXVGVTQNEDCQTARGGWIWNSBRFHPSKDVYRICUAKRWKDTSVWUQCOBKDFYICEKOUHVRGS");

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
    msg.setTimeStamp(0.35749936940112104);
    msg.setSource(35106U);
    msg.setSourceEntity(199U);
    msg.setDestination(48974U);
    msg.setDestinationEntity(7U);
    msg.req_id = 27454U;
    msg.destination.assign("VENVNGNIDRJHQLKUDBRYWIWNZUOCBQIKMSDHCTSSZUELARGCDTZPFBLKVBYGSG");
    msg.timeout = 0.7116330010788221;
    msg.sms_text.assign("UWJDDYVAFXYPZBLSHVALAXFNCUQNAMDJTH");

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
    msg.setTimeStamp(0.42143588029964374);
    msg.setSource(35493U);
    msg.setSourceEntity(101U);
    msg.setDestination(4179U);
    msg.setDestinationEntity(164U);
    msg.req_id = 61178U;
    msg.destination.assign("WJELGFVKIBDIKUDLGIQAOSBJZTCEZGJNXNTURQPYEXDNRLUUWMCFAQEONFRJGKTEMHZAOSEBCXMMFTQWPTSLUUBVXTARYQDWQYDITYREUKRVBSRNCNQHUGKIXIKVMFQWXLKCPASVORQHUYRBLPWNOTPGOZSHBFJGODHSPDZXLVFWDMZCSLXIWIEASWOPNCBZONVMDMQPJM");
    msg.timeout = 0.01592735384410715;
    msg.sms_text.assign("EPTCEGNBJAKTAGFOJLXSEEPLPZAEDUCKYNZYJHVPVGASLXOCUTYHUSMMTMKUKGFQVGLWMGXNHQRQJSPYRNLLJXBLNVPZKORBNQKMVBWBDWOXZREOLBQCDIIJYCNROTQHDKJNOKZEOMFSRZTOSZSPFAFAVABGFYZDHKCLDCJQTWHATQNAXDFSIJLJCQBUVHUWPVXMUWE");

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
    msg.setTimeStamp(0.03971189882915116);
    msg.setSource(46267U);
    msg.setSourceEntity(148U);
    msg.setDestination(54192U);
    msg.setDestinationEntity(164U);
    msg.req_id = 4898U;
    msg.destination.assign("PQMPSVSETJWURRCZYMYPMJBXSAQACWKUCTLONFJUBISHLWGVFEIZCNKGBOSGAUQ");
    msg.timeout = 0.362416776892589;
    msg.sms_text.assign("ZHMTCCFAJHNFHTMA");

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
    msg.setTimeStamp(0.9100133543338865);
    msg.setSource(13906U);
    msg.setSourceEntity(75U);
    msg.setDestination(11059U);
    msg.setDestinationEntity(40U);
    msg.req_id = 44918U;
    msg.status = 25U;
    msg.info.assign("PXTQYWHUALCDDTHPBPDBWRCXXWCZSCLJWYAMDKKDTVFNBIVEDSHFBLQIVDTQIBSEIOJNYCIHQDBSFNJWNRMGHLQUUYBZOGGCEZRQLFGYEEUKKRVRKXYYD");

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
    msg.setTimeStamp(0.6582786090983551);
    msg.setSource(10785U);
    msg.setSourceEntity(227U);
    msg.setDestination(61536U);
    msg.setDestinationEntity(164U);
    msg.req_id = 56139U;
    msg.status = 37U;
    msg.info.assign("GBAVYHXOZZUROZYPVODMARFVVTTHBZIJXSDZUWTQIYFPRJYCFXLFTHGCLGJDQXGASCEJKOMVEBSIRNE");

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
    msg.setTimeStamp(0.42136557612451053);
    msg.setSource(25461U);
    msg.setSourceEntity(239U);
    msg.setDestination(42450U);
    msg.setDestinationEntity(215U);
    msg.req_id = 18844U;
    msg.status = 227U;
    msg.info.assign("QKKWQYACEYENHMUPUCSNUPCMFVOGNTRKZLSDWCGNZLYPALOATBTWZ");

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
    msg.setTimeStamp(0.6772007707110792);
    msg.setSource(23192U);
    msg.setSourceEntity(7U);
    msg.setDestination(12614U);
    msg.setDestinationEntity(113U);
    msg.state = 2U;

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
    msg.setTimeStamp(0.5683560416732532);
    msg.setSource(17204U);
    msg.setSourceEntity(48U);
    msg.setDestination(44249U);
    msg.setDestinationEntity(175U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.004000569629352024);
    msg.setSource(11738U);
    msg.setSourceEntity(199U);
    msg.setDestination(36395U);
    msg.setDestinationEntity(168U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.2140704559213764);
    msg.setSource(32317U);
    msg.setSourceEntity(45U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(140U);
    msg.state = 88U;

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
    msg.setTimeStamp(0.3610182078065749);
    msg.setSource(63044U);
    msg.setSourceEntity(161U);
    msg.setDestination(9298U);
    msg.setDestinationEntity(80U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.8352106512281202);
    msg.setSource(43840U);
    msg.setSourceEntity(246U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(203U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.10957165858043538);
    msg.setSource(44125U);
    msg.setSourceEntity(40U);
    msg.setDestination(56868U);
    msg.setDestinationEntity(182U);
    msg.req_id = 30882U;
    msg.destination.assign("FYEGGKSDEWOMHPTNZJXFMGJBVAYLPXK");
    msg.timeout = 0.8502727004928315;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 30871U;
    tmp_msg_0.destination.assign("BYGEOLEGIGDBMSYHLRJJJFTEFVKPKWFCQYAYEKIOINQIARMWGMLOPBJHGTWMDIAKKYXUUURPUNQYZVIURFWUBEWOCAMCTKPALNXGBXUQKQBVNVSNCMRKWDWTHQALRCQRLVALOPKJUVNTTSUZIECISMHIHXDDJPLYHYSGZRRZPHKJBUY");
    tmp_msg_0.timeout = 0.16694454526040936;
    IMC::LblRangeAcceptance tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 155U;
    tmp_tmp_msg_0_0.range = 0.20451884682653532;
    tmp_tmp_msg_0_0.acceptance = 90U;
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
    msg.setTimeStamp(0.9729880177567138);
    msg.setSource(49336U);
    msg.setSourceEntity(153U);
    msg.setDestination(44335U);
    msg.setDestinationEntity(58U);
    msg.req_id = 31224U;
    msg.destination.assign("RWFQNDUIEAEXCZUGOJQQCVORLGACKBYLLQRUDXDNAHIJWQIMTECWCPUZIWWJKXFTBXZBMJIKNWKZSXRARNDNNPLBTAJXFVXDTOMSBIETYLRZATKPPTVHYQGYXDVHCJVUARFGECLGOAPEBMUIPHHZIQYKTTSAICOFXUOHZSBJKWPFUNGDRSXWORNMKGERCVJVZDJUNWHVYSGFDFLYU");
    msg.timeout = 0.323008484712777;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 62U;
    tmp_msg_0.x = 14451U;
    tmp_msg_0.y = 31442U;
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
    msg.setTimeStamp(0.6903125577382848);
    msg.setSource(35303U);
    msg.setSourceEntity(76U);
    msg.setDestination(8581U);
    msg.setDestinationEntity(126U);
    msg.req_id = 888U;
    msg.destination.assign("ENFTOXTJYMNDOYSBIMSGNRYAXE");
    msg.timeout = 0.9877234941057441;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4955268091376106;
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
    msg.setTimeStamp(0.7406751887693052);
    msg.setSource(10998U);
    msg.setSourceEntity(188U);
    msg.setDestination(7417U);
    msg.setDestinationEntity(180U);
    msg.req_id = 18664U;
    msg.status = 108U;
    msg.info.assign("IQMOSWWJVXLJUNKZCVRAKKTXWMUEGIWFTGVPMZAABFYNJGATEJSOFNMOXQLUHJHKTPTENELIPUJKUHUKVCFETUOYICQDYEPVJVGXD");

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
    msg.setTimeStamp(0.04644586045556953);
    msg.setSource(32241U);
    msg.setSourceEntity(253U);
    msg.setDestination(55877U);
    msg.setDestinationEntity(67U);
    msg.req_id = 44976U;
    msg.status = 203U;
    msg.info.assign("HQAXZSLVSEOFVLXRZTWFRQEDIRRJIOJMAWAUEPWGMBLCHJOVUSIUDFIHTVEGHJWUHXOLATIUAPXVYNKMPYEVTHCFYSSVYZZEQNNDXAKQDNTGBCBAKNKCSCSDXWFLYFIGRNFKCPPYINGTNAGWTQROBNWGFOZGLIMCRTMHEQHANMKI");

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
    msg.setTimeStamp(0.8836929859283724);
    msg.setSource(4883U);
    msg.setSourceEntity(98U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(213U);
    msg.req_id = 8868U;
    msg.status = 93U;
    msg.info.assign("QPBOKJMIZLGQYPPVDTYMGEKRYAUKOECHCDJRDJBCVFPPTVMWWBHAOCPSATEKCJZYVRRNWKGSITYODUNQIRTDWXUZVTSQNMPIGCQFQUNKSXOQIGWDXZPOYXHHXJOTFAZHIDUJWZBCGYNRQLNGSLMDZUZLSDZEKBBMVESFWYCSMAJLGVFNPWRHMADB");

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
    msg.setTimeStamp(0.2568115699933671);
    msg.setSource(54300U);
    msg.setSourceEntity(130U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(156U);
    msg.name.assign("IWSRQYIYQDCNIS");
    msg.report_time = 0.9086246569381662;
    msg.medium = 224U;
    msg.lat = 0.5127183044586716;
    msg.lon = 0.7579258438013808;
    msg.depth = 0.7089030489486823;
    msg.alt = 0.8455568511840577;
    msg.sog = 0.8898674090908175;
    msg.cog = 0.9991829472173999;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("PDQEBSAMQOGFLCYVZWUBDCSONINJPNMRWSCPIUSJIPWAUQAYZTCWMLVHTIRZJQZWHDSCVO");
    tmp_msg_0.lbearing = 0.7991411162216506;
    tmp_msg_0.lelevation = 0.43975524381815445;
    tmp_msg_0.bearing = 0.9392910274242191;
    tmp_msg_0.elevation = 0.7029887545659271;
    tmp_msg_0.phi = 0.8590106343036484;
    tmp_msg_0.theta = 0.2886181250573425;
    tmp_msg_0.psi = 0.29089716097644047;
    tmp_msg_0.accuracy = 0.9245286344370768;
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
    msg.setTimeStamp(0.6739280724318826);
    msg.setSource(16100U);
    msg.setSourceEntity(141U);
    msg.setDestination(36788U);
    msg.setDestinationEntity(102U);
    msg.name.assign("FDUPNFKWGDMWVAZHDQIHAYCJRWHLPQPTCILSDNZDRTBKLKNAUOGEXAAMUQXWUZBTVVBWEMFXSLEFGIOZZYTFGRWTORAJLWNQYLRPOYXYWQTTFBIQBGBYAJHTDCRTZHPOYCYOGMGXAJPMEUUVOPSUWCCMEHGZKLUISUXZEMNXIFFWANEVDRKVVIQSBJI");
    msg.report_time = 0.8006995652885103;
    msg.medium = 185U;
    msg.lat = 0.13532976207753233;
    msg.lon = 0.26053549191740477;
    msg.depth = 0.12809499985515982;
    msg.alt = 0.8007655403529881;
    msg.sog = 0.58942884862276;
    msg.cog = 0.25575495124366554;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 104U;
    tmp_msg_0.error.assign("LONMCNZJGYFALCHFBGBBHMDACIXXOJAPRLDSWDXUODUCSISUVAICHQJVFFOLMNDLQSGALTMFMBECEBSLPPUKAFKBSTHQGRQVGEWGZKEASNYARWJTZTPRMZYSYNNKOTYJZEZKHVKFCYWPCVMWHXVQYNPQOGFLQDMRRUKGBZWJVOPTYOTZZYEUOKCJVHWBXXRMSXQAIMPJEHQBLJYTFRROCUHWIEGETII");
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
    msg.setTimeStamp(0.2876236967644997);
    msg.setSource(5269U);
    msg.setSourceEntity(97U);
    msg.setDestination(62719U);
    msg.setDestinationEntity(19U);
    msg.name.assign("FLPUWMYHCSDUOQCSDPHTYRXYAOOOUVSWVUTPJEPIXQDFENZQXHGQKTJOCZVZWKUINFRFTRFRMWJKNAMAYVYGGPGNICPCGTQBITEIJNDGFVJGXVRQYNVYRKBLXGYDBZEQOBBLMZWCAIJKVIPHUWMEMNHBALUOONXLWBOXMKGMHNSJZYCBUWAQVCUJIHXTLZZTDODASQPWAUDASZJIR");
    msg.report_time = 0.6175218027648598;
    msg.medium = 25U;
    msg.lat = 0.08836225361494421;
    msg.lon = 0.5736200027090443;
    msg.depth = 0.8493655080543558;
    msg.alt = 0.6832104780618427;
    msg.sog = 0.7597974871607166;
    msg.cog = 0.37677651636137655;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 29315U;
    tmp_msg_0.status = 167U;
    tmp_msg_0.range = 0.32972087304956876;
    tmp_msg_0.info.assign("MZMCXUQKPTTZVRYVISHDASRMSTMKEWOSLCEFVTOXIECGFHLFNZBYUYCQRDNMYLFGJLQLMGUAWYFIAXAUIMKMEOJTHGSCRWFOJXHQREZLQCOHQHKGJKQNTBAGHNUKFTEUWLBKVDNWPIRCEBOZ");
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
    msg.setTimeStamp(0.8253882330045189);
    msg.setSource(47637U);
    msg.setSourceEntity(228U);
    msg.setDestination(16789U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.5221793456049577);
    msg.setSource(46642U);
    msg.setSourceEntity(47U);
    msg.setDestination(45887U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.5024109829791267);
    msg.setSource(191U);
    msg.setSourceEntity(190U);
    msg.setDestination(35424U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.8110919977330278);
    msg.setSource(35415U);
    msg.setSourceEntity(253U);
    msg.setDestination(59376U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("ZQOTPYWEOAAMSCDYHRRAGFNHRBAMVSUWIUAKDZTISSBBMWUGVNNNFPCX");
    msg.description.assign("JRSODDDDPSVGILWUO");
    msg.vnamespace.assign("VDACOTKYBGD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GEVYXWHCPFXSXFRIBJRERLYWDFJDQPZQUSHDLJLNGDYUMYGGNWKGNCISOETPAZTXBHEDIBDQACCMCFWATVRQJNZNXAVZXYHBIMKOHHNKFUYYZQMGZAUUCQYCEJWHNLRJHOEBAXKCGYJZKDKTZMVUWVBIOWJGNLNBTELLMXPDKSRFKSOTFSBAAADXPJPNOLVBRYQM");
    tmp_msg_0.value.assign("XOVHGTUJELYEDTZTACIEMNBEUPGKTZJFTHKIRDYKVLJQVT");
    tmp_msg_0.type = 213U;
    tmp_msg_0.access = 223U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XGGFERDKWRKCHJWVSVFAAQWZEZINECLRMQLTWRIAPIQBDABMNUPFCVYXHOUEHPVFGFAFWXNZPULTDTCJZPVJIHNEKJMLKFGXIVJLKSIOYDSYDNDZSZYNXDYBHYGRIOBGCVMQHCJNMHKTTYLOKJWPSXOBCCKGPUSUIWGZNELSOWSSUUHTXIOVNL");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("DGYSAPBVRFPBLOQWHEKQYTEWESOMILVCSKZGWVWSXNSPRTFOQRRMFJASYFHFNEBKJINRBLPECTAVRQKFMNDYLADYCRHEMLGUHNIQCGLMMTVWHMKXUGGJIZU");
    tmp_msg_1.dest_man.assign("NFLPDEGSNPAXDVJTDKMCEUIMMJNJ");
    tmp_msg_1.conditions.assign("RIRVXDENWXLROYJXGWVLHYDISVHPOETBZMXRSQAZNBVIGJCEOC");
    IMC::FormationControlParams tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.action = 2U;
    tmp_tmp_msg_1_0.lon_gain = 0.7234055709987167;
    tmp_tmp_msg_1_0.lat_gain = 0.9995859454443535;
    tmp_tmp_msg_1_0.bond_thick = 0.9132737202400181;
    tmp_tmp_msg_1_0.lead_gain = 0.9275316400441871;
    tmp_tmp_msg_1_0.deconfl_gain = 0.8159840689534446;
    tmp_tmp_msg_1_0.accel_switch_gain = 0.9143476979360474;
    tmp_tmp_msg_1_0.safe_dist = 0.4644264731988472;
    tmp_tmp_msg_1_0.deconflict_offset = 0.7112306505119803;
    tmp_tmp_msg_1_0.accel_safe_margin = 0.8405750898524751;
    tmp_tmp_msg_1_0.accel_lim_x = 0.9721911313998354;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.26731724300461424);
    msg.setSource(17346U);
    msg.setSourceEntity(211U);
    msg.setDestination(48866U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("OYDLRZJEUIFPPVEAVOCYORYATFZVSLHBSNNAJBWHN");
    msg.description.assign("IRNQABUYZWZTSLXV");
    msg.vnamespace.assign("IQTHLBOTSAULMWZBXVMHNDTY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NZRLURDUKUGCHJCRPNDAPQFWEZSWAZRCLMJMWKOYATMIFFUTIMZWBLXTGOYEMZNVTYWIHFQTESXQVYJACNIDANHPOQYKFVHFIPQFWXMZHGQYQPBRVXYBPPEGJLDKNFZQWABRTTHLBJBUIERXLQME");
    tmp_msg_0.value.assign("FPFIQOFCDQIRTNCVRMXLMYXSZMAZUQTGGVQPGLBQFZYHOHLACYLJNOILKIEBVVWIRHPOENBMWWYLMCXSPRAXDLXDDBPWKALI");
    tmp_msg_0.type = 86U;
    tmp_msg_0.access = 45U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HIJMLDRBHRMCHNSURZWLXT");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("SNGYXJVTTDRSTBFJIZLXASGNCXMWQOOZHPQNYDKSMOJRUPHEDYKDRCAWPZRDMGBZIPZFSLIHZLHN");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.9332271688130843;
    tmp_tmp_msg_1_0.lon = 0.05243797805470529;
    tmp_tmp_msg_1_0.z = 0.08924293939036587;
    tmp_tmp_msg_1_0.z_units = 9U;
    tmp_tmp_msg_1_0.speed = 0.3390248978992496;
    tmp_tmp_msg_1_0.speed_units = 126U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.15624336908964376;
    tmp_tmp_tmp_msg_1_0_0.y = 0.8623950857727738;
    tmp_tmp_tmp_msg_1_0_0.z = 0.7401723953130108;
    tmp_tmp_tmp_msg_1_0_0.t = 0.27597520885960025;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.46436105944128225;
    tmp_tmp_msg_1_0.custom.assign("KNMIYGUEGUSWIXVSANYRGKYOQWEEKHDODZMDJSVCXVTLSDZQBRCJRXDOTJMMYUKRBTYOZAXDBNZWFMUCISUZYSEKNHNFQFNMEVEWRYBCCDHXKYDVGGHGAKTMEPLBOVQSUVIXPUUXFBNLONVFULGBJWJBZEAQUOLBLWIFIALRIYQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::VSWR tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.5285516134928846;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("DJQJOKAYZDZVTVEOZDLWAGMTQZSAFTUGHIMJRVDUEAGXJTRIGKYIZFRCPWCWPOFVWBTZIXNQVHLSLBILLJOXMXBBAIKNAUCLPPSRCIMBDUSPXYBLSOGASQNQYLKBVEPWLNWCSSZYJUCMEQDCKJGKVOFPKGGFMWYCXRTZFWUYIJMAROBTKIUQBUDATEMNCPHOHDUUCHJMASVNYDQRREGH");
    tmp_msg_2.dest_man.assign("XOLXTHNYKKEAOUHFEVJBQTGHMQCFGSLVMKZIU");
    tmp_msg_2.conditions.assign("VUNAUAFRTACCDWMVUPPKSRBYFESUKHWBKKTYHQAQFWHTVZGRWGITCHBXDSU");
    IMC::UsblAnglesExtended tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.target.assign("KOJEPHPURVTDDTPDEHMPARQIJKEWMEWBLBUBLYEMNGHXNZQPFIFMVVDYGAMWUASUHYAONRQOKTSQLGKSEFXTGGIEUXOLIGOXLMQHWRTHJKQYVFBFPBMDRBYZOETCOWNVZJNMSIJWQMKSPTBCADAFDCXNNNPZGRZZIVFFDQDZCSCOVHUUDXARZSVLHLVIBBJUFOKSAWTUWCWZLIL");
    tmp_tmp_msg_2_0.lbearing = 0.7046366756666219;
    tmp_tmp_msg_2_0.lelevation = 0.788792504982514;
    tmp_tmp_msg_2_0.bearing = 0.06816754673478098;
    tmp_tmp_msg_2_0.elevation = 0.4494155599666533;
    tmp_tmp_msg_2_0.phi = 0.21521342584572623;
    tmp_tmp_msg_2_0.theta = 0.32945291722297976;
    tmp_tmp_msg_2_0.psi = 0.7146124512966467;
    tmp_tmp_msg_2_0.accuracy = 0.5363839749818523;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::SimAcousticMessage tmp_msg_3;
    tmp_msg_3.lat = 0.043329334066705694;
    tmp_msg_3.lon = 0.38267763987544323;
    tmp_msg_3.depth = 0.7988156398352737;
    tmp_msg_3.sentence.assign("MZRPAOBZSGOVUIEBQMXCTORRZYMYBEIAGHXHPRTKATCMDXZCQPKNAGQYXRLLTUOBBGWHJFHGUSKZDMFKVYZFSFQZWSNEJPYDULRHLKWPXCUUUSESVHARPWNFBFNEITZCMNOVYGXVDNDJEFTECBMRHPWAJPLOCXNOFIMLYVLYQNGEHIFDYOMJXQAWLIJMVSWYZHAVLBCCIWBQJQGGTKZOKQUIKIUWSDBKAJGKVRFIODSHECQDTSLRDUXTNW");
    tmp_msg_3.txtime = 0.405803176007109;
    tmp_msg_3.modem_type.assign("FZYZYMMWBJOZTDCZLRAKSHDSSJP");
    tmp_msg_3.sys_src.assign("WZLWHUKNGHHMIWQDQCNDZZTOSDDMSQXVPWINXGWBYBGWCTJEZRFNIPRGJVITCGDMDTJJURKFYEVNXKFSTUSAWVLTMQLANAVLAMERBT");
    tmp_msg_3.seq = 16441U;
    tmp_msg_3.sys_dst.assign("CPVACOOYHPPSKDWQHRSNUTMBTYQXGEHPKFVUPBCYRDFJLEVWDGVLLNHQRSCGGKLJOCKUAYSNBFITXHMEKCMJDUIWEAXBWKUAQSVXQJVBICLZVUQXMXVEULRRZWHJRNNBIXJQZFIYESNFGZBOUHRNMHPJWNZKSTUJDWJMMBIWWMOXLCTGAUNTEYMSFPMPLDOYAIZDDYQKFSYZIZLXHATTFQLQDGCTFPYAJIEOZAGA");
    tmp_msg_3.flags = 230U;
    const char tmp_tmp_msg_3_0[] = {34, 114, 23, -120, -76, -11, 8, 36, 83, 5, -15, 47, 95, 56, 87, 104, 48, 69, -76, 53, 72, -37, 46, 50, -33, -58, -90, -92, 81, 49, 95, 42, -63, -117, 43, 39, 111, 40, 9, -68, -4, -61, 101, 113, 20, 18, 2, 19, 33, 8, -123, -93, -47, 29, -98, -33, 116, -92, 10, 83, 37, -24, -128, -58, -81, 125, 84, -110, -8, 32, -108, -106, -56, -40, 48, 96, 118, 32, -103, 89, 106, -127, 29, 56, -113, -2, -96, 75, -126, -86, 19, 117, -38, 27, -89, -33, -25, -3, -102, 63, 45, -99, -104, -88, -103, 55, -27, -21, 106, 6, -21, -19, 100, 51, 79, 13, -35, 97, 99, 53, -45, 25, 91, -98, 65, -122, 52, 45, -64, 75, 122, -81, 2, 18, 2, 87, -48, -83, -4, -99, 46, -23, 7, 36, 89, -67, -85, -106, 54, -22, -5, -38, 28, 111, 104, -45, 113, 6, 79, 105, 121, -51, 94, -74, 30, 57, -67, -126, -88, -31, -121, -86, -99, 87, 97, 108, -55, -90, 59, -8, 40, 102, 66, -118, -52, 64, -116, 6, -123, -19, -72, 1, 75, 17, 31, 115, -87, 95, 9, -18, 83, 70, -36, 56, -91, 83, -42, 114, 109, 69, -67, -19, 72, -33, -44, 12, -97, -51, 79, 27, 108, -121, -32, -25, 9, -6, 105};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.9248091993345304);
    msg.setSource(59139U);
    msg.setSourceEntity(145U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("COKPRUSTAJWFESNIYLTSDRHXBUOGRFFMKFDEBCJEPXVHTNNTSJPEXONORWLPJEJSQKLAMRUHVUIQTNEVVBMBHDRAWLYSQOOUVLHUGTJSQQLQCBKALTCJYRFFWMOYFFKEPWQENDWWXUUAY");
    msg.description.assign("ZHUHIQYJFJYQPTTFJOESKKWOMMYPKJNYKHXLQULZUFNGZXWMPWLEUEBFIIXXVOCGRGYEBAVAVCWJOKQGUSYZBUBTWAOOZLPXMNGRTYCTZVLBRODDFHRFPAJYEQKIJHVBAXTRXHMLJXIGENMNEZSZTENCMFQODHCGTP");
    msg.vnamespace.assign("SXYVCDFFRTTTJDXMUDLQAQHGLWFREAAYJAWULSJRFSMEBHPVOJWON");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PEWLLFDQRZQNSHSIMQKMRHGCGSVGUDNKSSVRPFKMXJOZBWVYGPXOLTQWNOQHIMFDLSVWXOWPAEVSIUBKBZFZTPLIJYTMYZCBBGJLRJXJCATDYDKCRJGTQSACHPWUBNDTWBDROIEHRSAJUFCVKEVYDEQYZTZTNLMMMERMXODXUIAHXGDYXEJWHPLVOGBIRLAFTCUSJKFHUGQOZNVYKZPFNT");
    tmp_msg_0.value.assign("LTLDXEVMFVNFPOUGCQCHCATVKLDIBXQIGCEMIASQQFZDKBRTOBFLQGHRESJMUNPBEVXNNFUAOTWTOEPCDPDWKZCFBDYZYVRLUKZUPCXABGSMHIEZJJILWUQAXDKXEDFJPLZOJXHPGOZXBNGMRSUMW");
    tmp_msg_0.type = 22U;
    tmp_msg_0.access = 190U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RWQBUCTMKRDFSMHEKWKVILEYBJDPWCVHYSFYPSZEKINOKYVTKHUKQAKPGGPOAFVHSYHASMILJDALWDMZBENVJCCGFQHFWAUXPOSHWBFOXMDLXPHJCGGGRVIQZYRVENXDCPDLBRUXPZEJMMHKJNQQTSYDBC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WEJGZCUUFAO");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 30502U;
    tmp_tmp_msg_1_0.lat = 0.12603127292735883;
    tmp_tmp_msg_1_0.lon = 0.12324452040798661;
    tmp_tmp_msg_1_0.z = 0.3461431232323826;
    tmp_tmp_msg_1_0.z_units = 233U;
    tmp_tmp_msg_1_0.speed = 0.2803138819636848;
    tmp_tmp_msg_1_0.speed_units = 164U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.7288685612715698;
    tmp_tmp_tmp_msg_1_0_0.y = 0.08201311139570533;
    tmp_tmp_tmp_msg_1_0_0.z = 0.1879290261142854;
    tmp_tmp_tmp_msg_1_0_0.t = 0.9007661907009203;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("PBPGTJFBPHUTBCUDNASDKFZCOUZNQQXDZMYCFXHWEEJVNPMPNLAZIGTMWIZFDGUOFC");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.2464326471782654);
    msg.setSource(48445U);
    msg.setSourceEntity(121U);
    msg.setDestination(8021U);
    msg.setDestinationEntity(47U);
    msg.maneuver_id.assign("DXFVQEFOTJLJMOHLDEBCHVVYSKMKOLMZNAAWPTXTWZRJRVTRBAREGVRMTYHPCE");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 53952U;
    tmp_msg_0.lat = 0.20443175349235487;
    tmp_msg_0.lon = 0.27725970682558976;
    tmp_msg_0.z = 0.30541448187178866;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.duration = 19973U;
    tmp_msg_0.speed = 0.15633709926293393;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.type = 1U;
    tmp_msg_0.radius = 0.8896191687926348;
    tmp_msg_0.length = 0.8262517901967881;
    tmp_msg_0.bearing = 0.2568318069527008;
    tmp_msg_0.direction = 190U;
    tmp_msg_0.custom.assign("YQOKNXMFDDHBOTMPJHSPVNTGZJGLNLNANHZSKAHOWFDZN");
    msg.data.set(tmp_msg_0);
    IMC::VSWR tmp_msg_1;
    tmp_msg_1.value = 0.7012491625359009;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredLinearState tmp_msg_2;
    tmp_msg_2.x = 0.8646586088158245;
    tmp_msg_2.y = 0.505756126518984;
    tmp_msg_2.z = 0.9679254977307019;
    tmp_msg_2.vx = 0.6775631864457409;
    tmp_msg_2.vy = 0.5038558917638791;
    tmp_msg_2.vz = 0.923480069292204;
    tmp_msg_2.ax = 0.9389198626847287;
    tmp_msg_2.ay = 0.9706678201315267;
    tmp_msg_2.az = 0.6160791351402668;
    tmp_msg_2.flags = 19866U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.8852422200027138);
    msg.setSource(13640U);
    msg.setSourceEntity(203U);
    msg.setDestination(63133U);
    msg.setDestinationEntity(77U);
    msg.maneuver_id.assign("CVMWUPFMEPZTQDNFVGKYYAFBQESJJDZVRALAPLXTOQYLGLVEXRCBOEGQKPUFOKSYAHJYOOJEYMLMUBRVYPTGGRHNZBYGSFVFXBWVNIH");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 38232U;
    tmp_msg_0.lat = 0.4631414120922397;
    tmp_msg_0.lon = 0.8672580447604376;
    tmp_msg_0.z = 0.9830676541241113;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.speed = 0.6815860480868281;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.custom.assign("RGPLOVBTCOSNURWZCOBIKNWJIMXAFBWJZKJSVAYHNMPPBPWDEVMFLTWDKZKEACXCSI");
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
    msg.setTimeStamp(0.3046588288416975);
    msg.setSource(54122U);
    msg.setSourceEntity(123U);
    msg.setDestination(7725U);
    msg.setDestinationEntity(0U);
    msg.maneuver_id.assign("HEBYPXACQASBGROOZZGTYRVJOFEFDSPEYKPJRVXYJWHGTJSUXWGSKHLUIYPQLIYVGIPYLETANXGOKYWGZEDXQDUCSJUTAKUJECXCFKQCDHMBILAFQRLWAOFZCFOINBCNEWUBJKDOSSFRWVPXITTANVBFZRUPLIPQZRKXMQTBRGWEATDLWTHCMNIIMFDNHYAGBUJBOQHEMVHAOXVRW");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 41957U;
    tmp_msg_0.lat = 0.3788677201390781;
    tmp_msg_0.lon = 0.41086888406832134;
    tmp_msg_0.z = 0.7331609750121122;
    tmp_msg_0.z_units = 219U;
    tmp_msg_0.speed = 0.5335909249909168;
    tmp_msg_0.speed_units = 51U;
    tmp_msg_0.syringe0 = 218U;
    tmp_msg_0.syringe1 = 149U;
    tmp_msg_0.syringe2 = 126U;
    tmp_msg_0.custom.assign("GFHNJRHYDYLBTMEZXGNTHDUJOQLVCPXOXWMIBHAIAJOSPCDEKCIIZCDIZJUBFSTFRJOALKQJNWQPCOFUHBDEAUPGAEZNNWGRTHQIXWDOKADWHSCFYSOHFNCGAXRPVRKU");
    msg.data.set(tmp_msg_0);
    IMC::EulerAnglesDelta tmp_msg_1;
    tmp_msg_1.time = 0.8059577107654677;
    tmp_msg_1.x = 0.5008284126552554;
    tmp_msg_1.y = 0.016749877874214225;
    tmp_msg_1.z = 0.836490099776614;
    tmp_msg_1.timestep = 0.6824558692656424;
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
    msg.setTimeStamp(0.3977559714081418);
    msg.setSource(1710U);
    msg.setSourceEntity(17U);
    msg.setDestination(24122U);
    msg.setDestinationEntity(148U);
    msg.source_man.assign("WTXJVTPJCGOHHFJRDTCCYRTAGBUAXBEMFSZIAJSCYDPLEIPFHNNVGOWASKGEQXGQDNFKUCUWEVANDSIKKD");
    msg.dest_man.assign("WUNARTAEOHMZVGIVDFCMYLWZUSVBVEIJXXZLUKRFAELYPPEVLBNODIWATZCAZGFUIDFPYAVXAMRLPPROGILLVHXYWQOBEOVQNBHCKRSUQIQRPODNHKWIIHMBKSNGNQPMSAVDOBTLJRYJURXUCMSTSTEGYNPQQFCHEHGCSNYDGDAAOQTSKXFJSJREKUFBLMMXJOHDWHJPBYQZTWCKDIGKTNBFPGVJZRFM");
    msg.conditions.assign("AMKOZMTGZAPEQNSEDKVXFQFPLUJDPKZSXYJHCMBGIWGNDKTZXBCEQQKPCBBFYDMSGNKMNGLONLEJKSDQMVGPCXERLOWNEILYFWCAJAWHRGBCZIIIQHYOJFRQATEZDKTBYDJQQSSXYZBIOHHYRXTRRVUSRPVVHNGWLUZJJTBYVGTLULVEXHLFAHMLJZHUCRSOEOFMV");

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
    msg.setTimeStamp(0.7617453499121496);
    msg.setSource(39286U);
    msg.setSourceEntity(53U);
    msg.setDestination(29954U);
    msg.setDestinationEntity(92U);
    msg.source_man.assign("IXPGWMTCDAMMNCAULSRUSDCBXXTCYFSVJMODBSUQOAQNWPSFSYZZJWITBUGQFIJEKJRNHQGIQRWYZVQUAOFUPMSJQAKVKWDALWOPYUMBKDEUMGQJONHVHBUWGGHZAYXVSGPXBUPYJRTXNIGHKOQFIYRLLOANXPLKXRWVBDZFBZTSCYDZZWKFRCJAFGCIWHBLTDEGHRXJXINLNZCRBOFIVHMPCLTQVLHYZKTFEETOMLESNIVNPEAK");
    msg.dest_man.assign("AVOPBMRJHALSNXIZWZYRGDNGHZNFVCLMXPTQQKYLFXRSDVIBDGJVRGSNZOBFOHMJHQHKJQZVKOMACYDXLGTAKTXTVJMIISPWOKQCCXQSWNIJUSMREOYUVWAUCUKIDNBWWKIXFTMUIBQTNCTWQLATRDPHPPCCQUPVTFFLHXPWCBAAMEKTBZHYFGYBYZEUFWULOMGGROOOSJKERNLJLLRAXDF");
    msg.conditions.assign("ASJADITMDONPXOSHAWHKDCDEZJMXCZCEUUWUMRHQIAAHNBLFXTJBOXZYVYIGYWWIRJXVCMYZNOTFRQDKMTYMZNFGLOLEHQLNTSXVEGTVSYPJZXGFOPJLECGQRKPNR");

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
    msg.setTimeStamp(0.9528778849945816);
    msg.setSource(51057U);
    msg.setSourceEntity(112U);
    msg.setDestination(45131U);
    msg.setDestinationEntity(179U);
    msg.source_man.assign("ABEGMZABCUGZVHDOISJOVNABLKETOQXCZSBWPWWVJSYLMNWXQPIDZLRTLGXOXJDXIBKJZTODYNKVQCVAWOGTRURVGXPNWDFUQOVHJMLBZGZQ");
    msg.dest_man.assign("EYVNUEQVFKBFLIEHRXUZQIOJGGYVPDBXPWXWLVHJFPYJNOBULMHFXURDWPPTNISEQRHWTSOIJLIDNVNFSSXRFDKAOCNMQBVHZTWIXICOALTLXYJQWVCBMRPKGBCASHCDAQGQWCMDRTPQMGTZABZMCNZSQONRLABSBMJDYMENTGYJOUWOOCXKGJVUHAUKADMULERKELFUQYCRNVGPAHKZYSVRPMKJTXFTAFPIWGHIEBZGZYET");
    msg.conditions.assign("IFZNMDSMJZKHNKUXNWGFXYNWEGRIWHYEAVMTOQDPHHHQOSUEBGVQFXIKBAENMMJXSJIFSLUOWCKWDLLVDTBVNLZKIC");

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
    msg.setTimeStamp(0.38837049936148604);
    msg.setSource(8014U);
    msg.setSourceEntity(253U);
    msg.setDestination(41185U);
    msg.setDestinationEntity(167U);
    msg.command = 126U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DSVSEIIINNZVMKIJYKPOJFJPOIYBSQQIJEVHZRIQRWCXAHUXBDNUKAHBFLWBNGXBDHZBLCCEODDYLTQRHYDFUCHQNQRAMEKPALTLQWUREHQUNWKMOANTZTTPPOXKTGRUYJXBZZCEVSVGSYZVTKSYVMMOXELKGGWXFDRNZFTOYZPWCMGMCJYJSWTFFIKXCPBERWHJPPVKHXBQLGDUALUMVQUEEGLLTAORPSCBJIASFDR");
    tmp_msg_0.description.assign("CNAYNGTXRBYWSPHQKQMVSAXKYXYQJCXQXDOFMCDCCBDCONWVAIWPMMXVPTOBCNVKRNRDFSKAEZEAJZFHSZFOUEYJNUOSBMFTRXUTJOLKPOYTBYOSQFZFJNMUWIRPEUYBZIEACDUBJZETKMASVFIJTGLRKPHYXGADHLPUKJIVZUCTVDEORMHZI");
    tmp_msg_0.vnamespace.assign("BLZXGSMBOLTKNHEBAXTIRGIKSTKNCCGYJOYVLWJPNLXIURRGIUDHFFUSMTTKFHVSMXCNOGHFHXGPLTJMOSSVVPFLOOYGKBVZAXJNRCXVYLKCYQMOVDSPVVEHUSZDMPUWUWBJAFQDCOBRZMWQANJZZYERHIQYMZJQTWJJEABPAZEDARBSHIQPJDNGCHQUWHDZXCSQDUGTKLCEIANCUNWEZ");
    tmp_msg_0.start_man_id.assign("XHSFIGYAOTOFXJRRYAMTBBELHKWVFAHFDYIECHOBLRTPGEWDWOXEPPAWRRKJPBLXMOQZTNRJCQNJPKLWNXKTCHKWJTRIUGKZVCUYVGZBGKCLQUQCNAUSW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KBHLFTLBMCDEPXPMPSCYUPHOKBUWPSQLQQXAHEBFDZYHUJYTGOUHJYNENQHLRDIZZTMFDXVRSQBISOVNNXMKYMSECFJBJBESKCQPEGVNYOUCFCKUAXACCMWOLANWVWUEZDKPZTWSFZLCTMITIYXKAKRRSWXPGTXXGJFCFINTUTRZYRROJVSVFVNVPYJNMEBIPHHOOAUUBAMRADWIVNTJGKZIJLMLQOQDXGLVADWE");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 20210U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4582206344726595;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9112508983087152;
    tmp_tmp_tmp_msg_0_0_0.z = 0.37161614541688415;
    tmp_tmp_tmp_msg_0_0_0.z_units = 36U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3532733764489068;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 127U;
    tmp_tmp_tmp_msg_0_0_0.duration = 47649U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.9725828226147558;
    tmp_tmp_tmp_msg_0_0_0.flags = 31U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("RZVWTLHWPPUNGTBALJXHFYKXHPESEBOCUFVWPQOLJLKUQSIXQJWMMEMSAKVRG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 61075U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.8584142594714553;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.17236592866656575;
    tmp_tmp_tmp_msg_0_0_1.z = 0.7064653913383461;
    tmp_tmp_tmp_msg_0_0_1.z_units = 153U;
    tmp_tmp_tmp_msg_0_0_1.pitch = 0.18070333263717142;
    tmp_tmp_tmp_msg_0_0_1.amplitude = 0.6361025970345993;
    tmp_tmp_tmp_msg_0_0_1.duration = 13505U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.48770754676272976;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 177U;
    tmp_tmp_tmp_msg_0_0_1.radius = 0.9148396393466709;
    tmp_tmp_tmp_msg_0_0_1.direction = 141U;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("FHYLVOXICLNDRVQGHSEPZXQEBDRBTEHXYVLFDHVQBPIZLVRXGVBJLUNPBTKJJGGIOMWLZPWJNYYSLYDXEXKMYJUHQJOBFURGADJADPAZAGDYRWSHXEMSLCKRUKQTAAUEMVWCZZJTZZBRQCSPYPVFTHCCWAIKQKVMOKIBFEHLMENFRITWSDIBROCKPO");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PowerOperation tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 34U;
    tmp_tmp_tmp_msg_0_0_2.time_remain = 0.26821323533316355;
    tmp_tmp_tmp_msg_0_0_2.sched_time = 0.058806990739704745;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Phycocyanin tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3857206743547881;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.27779838252445366);
    msg.setSource(46985U);
    msg.setSourceEntity(248U);
    msg.setDestination(32191U);
    msg.setDestinationEntity(207U);
    msg.command = 148U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ADVBMNDJZEHXSXTKEMVWWIEAXVMFBFNFYNIFOKRZWOITQCRSGJXNNCOTKCRVXDXBNALORPHWUAZAMPJZYEXDPGAYWYDZFUVURPDYHBLXWCHEHENUFLAMZBKGXVTCMQJRGSOKUJQJCLRCHTBBKCMWGHYUYIPGFSITYQRPQPJ");
    tmp_msg_0.description.assign("PEOLWSTQUSDCKTVYYHWERIEMSHTDSVWOYJQFJQFGLDEAMYSNTBEVPTMENZGNRKKBJZARTVENOKLZWZMACBKBXPNRHHYLHPSRWYPUIXMGQDZSMILGPCIJBOWTQBRLIDBIEVJTKOGRFHXYCVJVRCUAZOBNMZQKUXVZLAACXTPUZKDPGGXFIQONUPHFREVHIJWOAFYNHCUASDYKQGQIOMXXJXNC");
    tmp_msg_0.vnamespace.assign("WOTUWNEZKXLOBRSQYYRAKCOYCJSKYZLENFSAFGAQWNASZDBMBVUQZYWJMRIEYMYCGFILMCVSDWNNSKGQNJVJFAXNDTZIQBWLMTOWVJPICDXZVGUKHHUCZLALPPLTETBOXYG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AUFDUZMHRRMLOQAVFHNSXXVAXCSMPHTJFEGPRVWCYAQORDKZBETFLEERPAQZWCRIHDWNDXALDJQEIYGRHQQSAVTBUNPYGNNACZFNVNZLLHZOYQCKEHCJUPQSDSHFUASBSCKQVLOD");
    tmp_tmp_msg_0_0.value.assign("ENVINQERDWGZQIKKBJUHRRSDYUZPGXTIKKMEZMACIPUPWRJHWPCYVUNVYXN");
    tmp_tmp_msg_0_0.type = 39U;
    tmp_tmp_msg_0_0.access = 7U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PRGITYLSEDWKTOYBWLYKUJVOGLMXJDXHAQZVDEWRMASNOQOUPFVFIZNMLDPHQBNRFHGTUAWICWRZKOIOWQSU");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EUWLGNGLADFYAUMPFSJSRWZXPYOTPMNEATQEOHRYTBMFIVQGVAGUKTEACTUYEMHPJXXMPNRKFRGVSIDTCZPUOJQRANDHCYXOLLQZMBIZYEEQAFOFBGLXCSLJEHLYABERWVNNPKUGJOWFRWSWOIHKKXSKQYZHNZLICATRBQGHKZJIBSUIJWVKMVQXBBTGKAKIPVIMDCOTRUYVCEZQSVDJDOOCLWDBLBCSXXHJFUVHPDUNJM");
    tmp_tmp_msg_0_1.dest_man.assign("OSKMRFIILDYPFFVFVQVOLXCKFWAQHQXWHDHMZCSXZOWXYSDGZYWXTRNRRVAJUZEWBNHEBGXRIBIVWIWXMTKAJFABDZADSDMZJBJLKPPVZWOAKISNUVVMQZWSGOABNLLTMGHNVCQTCFXDGKUFBIDRJECOKCOPCNMHNBPJ");
    tmp_tmp_msg_0_1.conditions.assign("JCOCZXJNAXAAOBAOXMZAEGMLISMKYFLKIUPCJFEJGNSQEMSIEMHPIXQOXKEUHTURVRVCWIHBJZOBCQBDIVVRMVQUWVOYFFWPLHCSEWBZFZWKZFZHCNADLYQSDBLKQZNPTGPSXVOLIRGTZQAEGCWIANMKJYGOVSJATKENXKNYSYLBPDHOBTRHMUWDXPRRHFGSWSDUEMTRUGJGWUXBFHTXTPDCNCG");
    IMC::FollowSystem tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.system = 49540U;
    tmp_tmp_tmp_msg_0_1_0.duration = 18730U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.49263315492178095;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 190U;
    tmp_tmp_tmp_msg_0_1_0.x = 0.8958473188204399;
    tmp_tmp_tmp_msg_0_1_0.y = 0.07764644586701452;
    tmp_tmp_tmp_msg_0_1_0.z = 0.6788115400911378;
    tmp_tmp_tmp_msg_0_1_0.z_units = 12U;
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
    msg.setTimeStamp(0.8679012129487298);
    msg.setSource(39143U);
    msg.setSourceEntity(144U);
    msg.setDestination(21776U);
    msg.setDestinationEntity(111U);
    msg.command = 244U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RXEPSIYQYCWFRMXSJEAEDJUFLHBJNMGJWCUDAUWADEQOKOBDIZTOPXCNQYQAFZTORMSOGUHHETLRDEKZTJVCVZUGEPRYKZNYTMDASLNLACPNNQGXWVZEUXJHBHPGJQSBDNIVFMMCTHEFIIFFWIMSYWPDKJQPFCGDLKWLCS");
    tmp_msg_0.description.assign("TMDYPNROMDOJRBZDZABZRKPDTIDYHQOLXBXQBAWUFVDQCUUYSSTOEAFGFNMJKMVIGQVGJVRXWIQNSHTKNSWKNVVCFGVIMPXCFEMHWWOCLECGTHFENESLISO");
    tmp_msg_0.vnamespace.assign("MNCTXSVMUFXHMCKTTLJOHUOOGHUZJTUQQYYBVTEFZCIWWZWLIUGYYMVAOEIZDDQTBFTFOBMSDHPFUXHBY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LCXQOHHVOGLHPIDPMQLMJAWWOHGKNAPGESKMBWPESFCEYOFBARYBUHLNNSAGAHUDVCIGY");
    tmp_tmp_msg_0_0.value.assign("VSQUEWVPQEGHWNOZUCLUABZTPUVXRMBNHDLZUXCJYOAAKFMKOXCBENLIREKSPGAYZBDYHJJOSNUFEQZFUTMO");
    tmp_tmp_msg_0_0.type = 37U;
    tmp_tmp_msg_0_0.access = 18U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JNOPIEMZUNGFJDJPQHGGERQVMJRTXEEYAFZBJOABPKNTZEAZNWQIHDGTTHFHYCPCM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VERAZPGLWYSTVPLWJNDPDRNWXTYBOFSEBQXXZPHNLSBVJGIHEMPRQYUJYZRPURVJWCWQFRLIFJNHBOYBISGZLNFKTOITRTHNKFNMKEDYKBKMJAKHTSSWVGLENCAUSWKRYIQDDAQOQMVFEDTBVWORAJCMFQZXXLNSOSKGLOVHQOF");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 57872U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.4335933332815657;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9245433360597232;
    tmp_tmp_tmp_msg_0_1_0.z = 0.38200628312669904;
    tmp_tmp_tmp_msg_0_1_0.z_units = 66U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.7213490569303094;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.43057479451842806;
    tmp_tmp_tmp_msg_0_1_0.duration = 1909U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6141907520894845;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 57U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.1904181314508605;
    tmp_tmp_tmp_msg_0_1_0.direction = 86U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ODDEQLVGUCTYFZGYPRTGSMKBSKQTJKPAPUBTCGRGCFEJYDSWSLMXKRAUVAPUOIPXBZJBSKSXWXHOEDEVFJSNRFNLXCGMRDGNRKEZFN");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LcdControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 191U;
    tmp_tmp_tmp_msg_0_1_1.text.assign("PHBKIGDJTIFGWWYRQLGKNIAVETZLRGZFCNAERDUKTEZOXNTFVBSWWYMXEMEBBSANLZHYUXPVOHSRYZFITDVESSN");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("QJKUQWSAAIITOVUMYOHZRWPEQGFRWPPDNVVRBMEIBSDLHUYVNQCUNUPFIHG");
    tmp_tmp_msg_0_2.dest_man.assign("IZOONUUVMKGBPXCQNVFCWQFALPNBUQVTMIBBEQVZKHLPVWUTRYGWRSHJYEFDUQRRRXXOBEZGHKWRSLVHIHFOUPIXCMQTIQEJPDGZIPDWFJEPGHYYIQJTANRTAWDXTXBALJDOBRNMSVRMEKSSHSGDBNPOJFYACASUOWLSTUAUWNNOZIEV");
    tmp_tmp_msg_0_2.conditions.assign("PXUNCFFSARYUOJXSGPKTFXLDVKTDVFASUTYWNFNGCRMINDLOSHEVMWFOYLRZLVIXDSWQGSPEKZRJHBLYRMJZBBGWHZXYICLPQMSEGBFHOPGKVPDUYOGNHGDCYVMETITCJAYZQDMKSCUNDCCHRYITVQKERZWEUSZ");
    IMC::QueryEntityActivationState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.8420805384012322);
    msg.setSource(10672U);
    msg.setSourceEntity(48U);
    msg.setDestination(30624U);
    msg.setDestinationEntity(251U);
    msg.state = 226U;
    msg.plan_id.assign("FLQQGPPMRYNNGMKULHSUFLFZSJYUMTDTIDXHXRESIQNSDRCYWWMZPWAUALGJJAZSNUQYLLZVFOIYGCUDVNICVTEDHBTWVRZMGXBTFHK");
    msg.comm_level = 119U;

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
    msg.setTimeStamp(0.4768370121108526);
    msg.setSource(7813U);
    msg.setSourceEntity(220U);
    msg.setDestination(844U);
    msg.setDestinationEntity(51U);
    msg.state = 76U;
    msg.plan_id.assign("HPNMLBEADLRLXPNWZAGSLDMBXQXRMEVQLIDBDQPSHBJQVHHSFCHTZEJYOZHSOCCJQXBVONIMINOUMNJKOCOQZWEWUUCKFDPEWGXBGWQXZLRPJDENRTAMNWVKLAYTFTORVCKTAJYVSYYLVGGKNFBOAQRPUUAMDUPJWZAFYUWZUTHDDTMTRNCBVGIYJXGHKEFSCSCABNVYWEROMIQXKY");
    msg.comm_level = 84U;

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
    msg.setTimeStamp(0.6337651243783838);
    msg.setSource(30841U);
    msg.setSourceEntity(77U);
    msg.setDestination(58335U);
    msg.setDestinationEntity(156U);
    msg.state = 31U;
    msg.plan_id.assign("YDNSHNJBTBEKLQTZIRQCVHABZLNBDMMBSZIMJDWYKWHJQORWBTNGOLFXFUYFVVDFTIMAROYKHCGPNAQJCUJBKDIIGGYVNWZHTPKGFJFTXNXEWSQJLDRVLJECUHDZHVPESCRKYMBDBVTLXLKAFPGXQEPKLWOPXRVQEDENKZFOAEVQHVWS");
    msg.comm_level = 141U;

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
    msg.setTimeStamp(0.9025241016130668);
    msg.setSource(2055U);
    msg.setSourceEntity(5U);
    msg.setDestination(23406U);
    msg.setDestinationEntity(97U);
    msg.type = 196U;
    msg.op = 180U;
    msg.request_id = 1743U;
    msg.plan_id.assign("YMKNSNGRMFEJFVTFRRQKTGQWAYWQJYOJUPGJAWYBAWLNSEKJAXZKGBCZVDMCZVRUMQDNHSBILDRRVBMDGKBILNFLOBUYEWDKOKFHAUPQTOIHTAXOHXVODYRAHCRXUWHEKXCBDIZMYXTQTIBQZ");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 202U;
    tmp_msg_0.value = 0.4149792512770918;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FNVZMIMHZWMHIUVCGEAKZPCGAIULQPHYGRVSLDJQCBTDBKQFUITPBLOXAWSERTCJRJTMVPWMGOFRQOVFGPSVETYHBISXECIZYHBAMDZVQQLVFAEDKPLAJIYHUMXKDZTQOZGAUHYNGJBYSDCY");

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
    msg.setTimeStamp(0.4148796915968418);
    msg.setSource(51739U);
    msg.setSourceEntity(211U);
    msg.setDestination(43702U);
    msg.setDestinationEntity(42U);
    msg.type = 206U;
    msg.op = 235U;
    msg.request_id = 47210U;
    msg.plan_id.assign("QXHXJUKPTNPDKYGLRXHZLXFBRASSSM");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 1414951329U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PUZKHVDHRFLOEUFXTJMUBZZAQJIWPOSOMOAIPYWFVAXGMXYSURBAJVMNYKNESKWKJEVCLGCSWTAQIKQFPBDXSGGPHOYFZRXEMFAUSPCGHOCJZFLIDNAPGILLICQZNYCWQDEWRDBYLSGIUSWPCNJKUKRTTOEWJVS");

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
    msg.setTimeStamp(0.5910549055607179);
    msg.setSource(23019U);
    msg.setSourceEntity(23U);
    msg.setDestination(30712U);
    msg.setDestinationEntity(129U);
    msg.type = 117U;
    msg.op = 122U;
    msg.request_id = 4426U;
    msg.plan_id.assign("FRROFYXCCANHAJRWWUWZFMIAKSVCXWEUZXSRPQDKXFATMBTQALMUKBXEQBD");
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.31339139860348786;
    tmp_msg_0.units = 240U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RJUDXNXMHTKDYJFBZZXHIANCEXACQVHXWUZKFFWHLJYCTBBYRIXNOLKMCGQVWEILHZSRPDJCNLTEBDVMHXIHIFLRUZORUTGGFDETSWUMYBAYPAMTJZPANOBAQOHPKZLSMFPNIWDOWBDFDVZYOYCKQEAXHWOESVQEJVFDZWAKKGFLLCENOVTSHJPWMSRMFTQQISELUZIVRPCMJVOWQELUPYJVJYBRUQBXU");

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
    msg.setTimeStamp(0.4759550524975732);
    msg.setSource(36483U);
    msg.setSourceEntity(202U);
    msg.setDestination(52732U);
    msg.setDestinationEntity(135U);
    msg.plan_count = 47438U;
    msg.plan_size = 3626161835U;
    msg.change_time = 0.0961841706348685;
    msg.change_sid = 12494U;
    msg.change_sname.assign("CTMDZAIRGGURASMLPBTCWYFGDVOTOMTAZOSHJTYQFPAIMHKZFYKMVYJDGSCFUZCWNALJNHJXLJSZKZJXTVFQKRZIJUVIPDTWYYAGFRNJNBDVKGTEYOGYVIOEVLQP");
    const char tmp_msg_0[] = {126, 25, 31, 15, 123, -78, 9, -51, 43, 33, -64, 42, -37, -24, -83, -45, 67, -23, -4, -46, -105, 123, 22, 56, 30, 41, 26, 66, -55, 62, 120, 16, -99, 90, -33, -20, -33, -15, -69, -61, -1, -36, -70, -8, -100, 53, -24, 124, -20, -93, -56, -118, -71, 28, -78, 74, -26, -109, 117, -74, -123, 50, 112, 14, 98, 109, -96, -49, -22, 49, -79, -16, -3, -40, 13, -24, 98, 35, -118, -63, 68, 28, -70, 67, 37, -83, -49, -45, 66, -58, -55, 49, 27, -33, -41, -8, 6, 20, -120, -46, 50, 106, 80, 15, -13, 17, -103, 24, -12, -36, 103, 48, 109, -4, 43, 85, -35, -117, 65, -83, -17, 73, -127, -89, -97, -32, 38, -43, 5, -15, -32, -19, 119, -14, -16, -82, -2, 12, -25, 33, 79, -35, -30, 96, -126, -21, 71, 26, -95, -94, 70, -3, -13, -121, -94, 116, -43, 26, 35, 59, 53, -102, -18, 110, 60, 49, 87, 21, 32, 91, -112, 12, 65, -108, 27, 52, 103, 44, 37, -107, 10, 66, -30, 89, 14, -81, 115, 93, 112, -95, -106, -2, -33, 30, 106, -105, 32, -16, -97, 76, -103, 14, 28, -35, 114, 88, 76, -102, -119, -88, -98, 80, -88, 124, 69, 108, 45, -128, 49, -12, 17, -82, -26, -106, -105, -80, -106, 86, 89, 56, -46, 30, -55, -69, -98, 24, 27, -43, 115, -96, -29, 19, 92, -121, -54, -91};
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
    msg.setTimeStamp(0.7622422104746858);
    msg.setSource(5100U);
    msg.setSourceEntity(20U);
    msg.setDestination(9283U);
    msg.setDestinationEntity(109U);
    msg.plan_count = 44625U;
    msg.plan_size = 1066705135U;
    msg.change_time = 0.1129220734741464;
    msg.change_sid = 35330U;
    msg.change_sname.assign("UPTOSKORRASJPGICFKMZNEDEBSWRTLXQ");
    const char tmp_msg_0[] = {-98, -128, -50, -36, -2, 39, 54, -87, 50, -54, -58, -85, 24, 103, -40, 11, 16, 17, 60, -1, 92, -26, -27, -87, 109, -82, 49, -103, 9, -77, -35, -61, -52, 72, -72, -68, -19, -116, -110, 66, 88, 92, 57, -58, 88, -64, -111, -59, -119, 38, 51, 11, -81, 59, -68, 64, -14, -32, -55, -67, -34, -66, -127, -35, -13, -99, -14, -99, -61, -57, 25, 25, 7, 55, -94, 107, 68, 51, -128, 74, 53, -28, -11, -100, -28, 79, -87, 83, 8, 65, -106, 82, 22, -25, -116, 54, -1, 83, 55, -28, -79, -43, 35, -9, -97, -61, -22, 27, -68, 20, -68, 87, 74, 98, -49, 92, 88, -105, -119, 107, -83, 52, -21, -50, 22, -47, -99, 87, 78, -75, -110, -5, 20, -57, -78, -15, 94, -53, 89, -84, -105, 30, -94, 10, -55, -80, 23, 68, 25, 18, -22, -126, -54, -22, 35, -113, -101, 92, 21, -66, -44, 5, -38, -41, -66, 14, 100, -36};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MMJNDQNGXSHIXSQDTRWEEGUEAAMWOIULJWEXSFOWECFAYOXQCWQLBBNITREDSRMOFIPSSOSPJHXKYEGVNPCFYLCZHXFLIYRPVCITDUPNGVAA");
    tmp_msg_1.plan_size = 4907U;
    tmp_msg_1.change_time = 0.8186364131214512;
    tmp_msg_1.change_sid = 54625U;
    tmp_msg_1.change_sname.assign("ZIHFBHZYCGZNMBEHOARYMQWHWR");
    const char tmp_tmp_msg_1_0[] = {-86, -44, 89, -30, 66, -107, -24, 34, -126, 29, -19, -34, -116, 89, -52, -119, -72, 41, -121, -63, 111, -90, 126, -66, -70, -120, 107, -126, -105, -61, -73, -35, -94, -6, 73, 38, 114, -41, 38, 68, 113, -69, 117, 7, -61, -65, 44, 10, -68, 86, 32, 109, -27, 70, 33, -21, 82, 44, -41, -29, -39, 30, 100, 60, 36, -21, 8, -51, -64, 25, -98, -93, -37, -60, -128, -74, 54, 23, -116, 93, 47, 63, 66, -30, 43, 13, 87, -111, -76, 16, 120, -60, 66, -29, 70, 77, -117, -89, 92, 20, 18, 44, -119, 4, -24, 72, 30, -40, -85, 55, 48, -24, -94, 118, 61, 69, -112, -76, -104, -103, -5, 49, 1, 45, -5, -111, 75, 74, 74, -67, 78, -15, -77, 110, -116, 7, 10, -75, -78};
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
    msg.setTimeStamp(0.5682064496671824);
    msg.setSource(14160U);
    msg.setSourceEntity(5U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(90U);
    msg.plan_count = 54301U;
    msg.plan_size = 2369956515U;
    msg.change_time = 0.6557864044495466;
    msg.change_sid = 64598U;
    msg.change_sname.assign("CTWITSYDHYYMKCZLEEKCZDBCUPEQBOQAZHTNWAZHFZHDXVPVUQTOUOFWVRIBXNJAKEJQVMOGYXP");
    const char tmp_msg_0[] = {-33, -1, -27, -99, -109, -73, 73, -69, -40, -81, -125, 4, -79, -21, 122, -36, 102, -122, 63, -125, 58, -44, -62, 8, 98, 121, 71, -122, 28, 15, -53, -55, 10, 99, 25, 125, -109, 19, 47, 126, -74, 56, 119, 13, 102, 118, 66, 90, 38, -52, 3, -27, 70, 110, 66, 33, -119, 86, 29, -70, -108, 88, -87, 51, 80, 52, -94, -102, 15, -43, -1, 28, 18, -45, -112, 40, 107, -99, -15, -44, -123, -85, -79, -84, -61, 6, 116, 71, 85, -123, 28, 32, 3, -35, -63, -36, -106, 50, -53, -106, -17, -89, -45, -80, 124, -92, 98, -97, -122, 114, -112, -47, 15, -59, 51, -46, -115, -26, -10, 2, 71, -104, -79, 23, 105, 70, 84, 68, 11, 96, 33, 119, -57, 91, 58, 121, 99, -3, 124, 124, -3, -58, 22, -37, 55, 34, 43, 87, 35, -28, 121, -98, -46, -76, -71, 60, 97, 91, -44, 101, -60, 98, -11, 70, -63, 52, 21, -61, -14, -79, 103, 125, 126, 51, -62, -45, -36, 45, -14, 31, -26, 50, 113, 28, -106, 111, 75, -76, 85, 3, 31, 30, -104, 46, -120, -15, 49, -90, 87, 123, 75, 46, -45, -6, -100, 68, -43, 53, -64, 51, -39, 54, -26, 48, -38, 14, 5, -35, -57, 102, 126, 33, -37, 107, 1, 22, 78, 77, 114, -127, 24, 17, -100, -78, 32, 65, -37, 54, -92, 83, 59, 126, -102, 64, 119};
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
    msg.setTimeStamp(0.9672897269882366);
    msg.setSource(5922U);
    msg.setSourceEntity(99U);
    msg.setDestination(9067U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("TDDVICPSHWFKPBQKXUJKAPJYHQEZHYRVWDJKCVOLNDDFJOFAEQYROJIALOXLLTZMPSMQZMMKTAKTBHDGSXLPPQOIOBFKNBOGHXWOTQMJTGIZZNDLEMIUAFMQESBCUI");
    msg.plan_size = 41U;
    msg.change_time = 0.4324576897672875;
    msg.change_sid = 15924U;
    msg.change_sname.assign("PZYHYNUDHDTYZNYQCRWGHMWJQOMSYLTBIBUQZBXBAOTQEZDIOAYPBMPZINWTIKVTCQCJXTGLQVQSEFVUSWDDUBSJBDWPEESKJFEQZIHPFDJTOMHUAFTAJYGSSCKPRHOBZVKNGXUNDORHSJKMRGARKAXGWPIIWVEKYVLKFLMEJSXLTFNNQPWLCBUFFMUCNXVOXILOCLMMMUN");
    const char tmp_msg_0[] = {86, -126, -46, -54, -110, -32, 107, -36, 18, -109, -44, 4, 12, -65, 12, 73, 102, -83, 26, -87, 112, -59, 88, -12, -67, 107, -115, -97, 68, 20, 48, 32, -82, -115, 73, -114, 0, 50, 94, 117, 29, -121, 74, 47, -39, 109, -23, 55, -75, 58, 21, 68, 119, 12, 47, -25, 91, 20, -47, -116, 102, 1, 109, -51, -69, -90, -107, 38, 32, -47, 89, 94, -39, 23, 52, -67, 70, 126, 24, 36, 69, 108, 84, -126, 126, 38, 106, -14, 96, 36, -121, -102, 51, -21, -27, -105, -26, 121, 63, -106, 35, 11, -40, 67, 4, 96, -25, -85, -111, 117, 91, 29, -37, -25, 75, -105, 50, 106, -39, 88, 25, -65, -51, 3, -97, 27, 94, 87, 46, -122, 98, -55, -12, 58, -2, 125, 94, 34, -15, -59, 120, -21, 104, 54, 43, -7, 70, -13, 65, -96, 87, -98, 16, 43, 16, -117, -126, 93, -54, 69};
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
    msg.setTimeStamp(0.6826562022470685);
    msg.setSource(46603U);
    msg.setSourceEntity(138U);
    msg.setDestination(52917U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("MBIXMOAVPPUDQZRKNTWTAGDABBEAOXQTRVNYTWOYIGQWQMIJVABJNQYTOHIWWMNH");
    msg.plan_size = 44184U;
    msg.change_time = 0.7581199331127954;
    msg.change_sid = 22452U;
    msg.change_sname.assign("FLTTBXYCAKNQXMWPZHWHDWHTBFRIAAURRAZQOSSBATZNYPBHADUFFJCWSCPBIPDSEXEFEEXRNPAIMDMORRQVOHKKGWJGIZGCOVHEFVZLXXQEDSVGBMNXXWIOBLCKVCQZOKPZMRKJEIU");
    const char tmp_msg_0[] = {-124, -102, 99, 102, 123, -98, -120, 111, -100, -83, -36, 74, 103, 14, -72, 7, 109, 64, 37, -10, 13, 31, 102, 63, 47, 84, -86, -78, -9, -92, 36, -110, -49, 4, -84, -42, -115, 10, -108, -84, 25, 66, -110, 6, 82, -111, -111, -98, 47, -72, -69, 48, 43, -109, 97, 41, -33, -86, -18, 96, 4, 120, -74, 62, 87, -62, -82, 86, 110, -51, -92, -24, 20, 121, 15, 38, 49, -36, -56, -59, 55, 78, 108, 38, 67, 104, 50, 80, -3, 42, -98, 121, 53, 7, -84, -102, -31, 115, 96, 10, -76, -81, 98, -5, 24, -128, -46, -10, -120, 122, -83, 82, -10, -108, 53, -108, -12, -23, 126, 73, 16, 60, -39, 90, -62, 122, 97, -125, -120, 20, 74, 119, -18, -90, -62, 41, 98, 110, 64, -17, 30, 108, 72, 16, 79, -117, 68, -68, -14, 20, -87, 44, -6, -94, -91, -41, -52, 126, -96, 59, -106, 19, -85, -7};
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
    msg.setTimeStamp(0.3356188118749448);
    msg.setSource(48585U);
    msg.setSourceEntity(35U);
    msg.setDestination(10174U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("LMRHWAPFUMQBVUWBBFUPOKZAWFGXTYLDDCCVURKYYXBVFCIRBAPFJDTQQTEWVVZMVPNXBRNJCPLAWROKCKZJQPALDIDNIOSXUSDEHMXIQZTNQEPCKKOFPJGXRJICYIJZJKTSNXYRSB");
    msg.plan_size = 2861U;
    msg.change_time = 0.735114731974121;
    msg.change_sid = 55990U;
    msg.change_sname.assign("AVNLAFAQGEEIRTDGGITHFUQMORZRMQKVYZWJTXYAPOQGFQAPWPTAOJYHNMVPWTHZOHXIISGU");
    const char tmp_msg_0[] = {5, -8, -60, -119, -42, 67, -66, -30, 37, 77, -97, -117, -107, -81, -79, 124, 1, 8, -48, -114, 66, -103, -113, -91, -48, -35, -10, -67, -116, 68, 120, -45, 47, -122, -117, -111, 83, -9, 38, 62, -17, 48, -80, 108, 37, 108, 113, -3, 95, -124, 111, -10, -15, -102, -14, -53, -23, -2, 54, 10, -50, -59, -68, 38, -36, -96, -74, 71, -22, 52, -78, 84, -13, 35, -98, 44, -91, 34, 7, 82, -27, 17, 17, -9, 112, -68, -56, 20, -113, 123, -117, 81, 117, -126, 108, 70, -93, 123, -88, 23, 42, -89, -36, -6, 94, -48, -108, -25, 53, -102, 57, 119, 111, 122, 101, 30, 46, -105, -84, -42, -32, 11, 80, -78, -80, -28, -77, 28, 33, 90, 118, 27, 14, 24, -14, -107, -107, 81, -31, -15, 78, 109, -124, -56, 96, -11, 4, 14, -120, 34, 63, -19, -77, 44, 94, -124, 93, 19, 79, 80, -64, 23, -16, -20, 11, -16, -12, -22, -126, -14, 35, 44, 35, 120, -93, -22, -92, -91, -90, -7, 104, 81, -51, 55, -17, -57, 27, 6, 59, -45, -94, 55, -88, -55, 101, 43, 112, -3, -54, -107, -90, 109, 107, -57, 4, -74, -50, 66, -62, -14, 21, -100, -22, 83, 56, -66, -59, -1, -110, -59, -85, 25, -22, -2, 26, 60, -122, 106, -46, -110, 86, 24, 79, -43, 44, 59, -46, -96, -40, -99, 105, 21, -127, -11, -13, 65, 43, 33, -63, -121, -99, 76, -57, 110};
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
    msg.setTimeStamp(0.013999261972804211);
    msg.setSource(45698U);
    msg.setSourceEntity(24U);
    msg.setDestination(52292U);
    msg.setDestinationEntity(45U);
    msg.type = 148U;
    msg.op = 53U;
    msg.request_id = 16539U;
    msg.plan_id.assign("FSODMYVUXVMWFGCHGADKKXCKBWQDMYSXQEHLHEGFONFFFPUONJWSUJEVSVBDLCBVXRMHTWNNYLTVUPBPTEJDKNAIVZDPRSKOLZ");
    msg.flags = 64630U;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("UJXPHNOHDAVSXCASLBZWXBDLYMKRYT");
    tmp_msg_0.type = 28U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MZLFSGEWVIAJPFBKWGIEKZAFHKMKMBWZWVPTWOVUYHNNXSDVOAXTRFETCBFQQIZDLCUTJGXSLXGJNCC");

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
    msg.setTimeStamp(0.04585633902864017);
    msg.setSource(16141U);
    msg.setSourceEntity(246U);
    msg.setDestination(8042U);
    msg.setDestinationEntity(128U);
    msg.type = 67U;
    msg.op = 212U;
    msg.request_id = 18965U;
    msg.plan_id.assign("JWECTHQGBCZAPNKIQNDEFJAILOHIMBRLHJPUYLHQAYLKJNHUSOZWSWEUIQAEVUNBPJFGYTNKCZLXMLPTQUQISFDJNPHEUCHGDVKTYFAIWXMZRTDWBSMLTVMMRGXCXEJVKMVEBXPYKRFFGCIXTOZZNM");
    msg.flags = 13340U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.9773692969064526;
    tmp_msg_0.type = 12U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GGOHOFUUMXMWLNTJAWPMEDBDVWUJEIGBLAQXJTCAWEOWXZKHSOHZULQREEMGUKPOXDCGBZYCIWFWRKNHPRJSWAEKQSYYINLOMONORMOAHPNRJXHGKFTNBVPRILVTJVSRPPDSHBZITXAFRZTDBCQSMATIFJSAHMXQUKLBJFO");

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
    msg.setTimeStamp(0.9106142681836145);
    msg.setSource(15179U);
    msg.setSourceEntity(75U);
    msg.setDestination(48971U);
    msg.setDestinationEntity(149U);
    msg.type = 141U;
    msg.op = 125U;
    msg.request_id = 6302U;
    msg.plan_id.assign("QZZEEFWTOHKVFZNCZLKDYSRZQKMXBBAWHVQQGJEUBPBWACYRBTDDJLMAXGNQGAYYGGYBATOTJNTIULHUPTWRHMIMQHIHWNPPCOEICSKCKJJCWRVIMELVDLTERMOMNZSGAQZAOWQPMZBMOLUUSDDBLSVOFPKNNGRFCGPVQYOIRHEXJYGFFVHHDYSNEETABWFRDJJKIUVCWHMJEPSQNOWYK");
    msg.flags = 41846U;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("FPEBDVMQUPZEYQMJGMUIX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FBGWFWCRUCZYPPEIZRLYWPBWAJMUSNWPESHXCGFBMKWVKBYVTKUXHGXYJVPQCWASBCCHSXFSNRDEDCRSQAVYTHBXWAJFHHIORVKLQZKMJLLBLGGAOGGNIIJLOJLIZVYYFXPLWLOUEATYHERZEOGTOMFAMIMIMNSUGNENQDSODZBQGUZTCXYSZVKXCNDPTHTER");

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
    msg.setTimeStamp(0.4810708353828358);
    msg.setSource(44025U);
    msg.setSourceEntity(182U);
    msg.setDestination(61675U);
    msg.setDestinationEntity(1U);
    msg.state = 48U;
    msg.plan_id.assign("SMINDZZNAVBPYLIGAXPGCYLFPMVCLYCJHDJUYLBNJIAXPUFUPOKZNJCKFHGWLXSWRHTDAYSGIYBXLQSZXLTFQADSOGJUNVYBXIJESAQOBGURKGWQFWZQDEWOPEONPLDKKKCGCVTIELZRVVNMZEKPTGCYDBWQMJMEVZTCAMEFFMBOYTZTHRLRNJKPSHISVIEWFBAEUJOOWPOUTDWJAFTUUKDGARXHOSWKCMZRRQHRNMM");
    msg.plan_eta = 477275569;
    msg.plan_progress = 0.44355635227957957;
    msg.man_id.assign("RCZDKEWDRFFFORJMKZSEVBUUPVFJQJDBPNXNYTOMKKRMCSZWXKSSZHYWOIIGVEMWTANDVJGIHPWXFHUCVTLRKUSGANDTRVAOQKAKBUPWQQOPRJPHLLTGELOXUYYYZMUSAQDRCBEFQIFNOXUJPRLKSSAGYVMBVAGNBBIW");
    msg.man_type = 10997U;
    msg.man_eta = 1508128664;
    msg.last_outcome = 160U;

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
    msg.setTimeStamp(0.8747830399688036);
    msg.setSource(40985U);
    msg.setSourceEntity(162U);
    msg.setDestination(16757U);
    msg.setDestinationEntity(113U);
    msg.state = 48U;
    msg.plan_id.assign("XZODXBIIWCJYLGSSCEPQZSVHURKPWGZNLMCGDNKXQTMNCCDYMHSQGKXROQUZMBCASCEOODYMOQNLQAAAEJJIBRBGSHLFZINNTZEZWVPBXXEYGWOAKNMSHVULUCPECFFYKRZTKYDYZNVLGUZDXSKHFPJFUMRPGMJUFKNQJFFIDOBEXUITYPHQAKWWJWBCUTMHIAPRVLBDJXEVOEBVWHLIFVAUSGARO");
    msg.plan_eta = -1321148288;
    msg.plan_progress = 0.6254498093315387;
    msg.man_id.assign("EHPIPOUDNJFWZURCOFVERQGFSTTCJDHPOKUKYVCHBWKXKNQPIKISIJAADHTTROZOXLVBRBZSKFYYAVDKRJLYROPDMQSTMEGSZSADPNABLNMQHJUFLUVOSXDVVEYTAQYNELCZJHGCJNNSWROZALWITXXZDAVMBTTXXYFPDMAGHRFKPNEDUGHBCULIWWFZIFJWCHPVL");
    msg.man_type = 10676U;
    msg.man_eta = -945703186;
    msg.last_outcome = 42U;

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
    msg.setTimeStamp(0.03772080729902472);
    msg.setSource(932U);
    msg.setSourceEntity(233U);
    msg.setDestination(59800U);
    msg.setDestinationEntity(192U);
    msg.state = 152U;
    msg.plan_id.assign("BLWJRCRSGTZUZMSAVBPYXLDIICNAMSIJAMNWWBJTHHMQNDJCQBUVAZGSMDVGEXDUGBLFEIVHKNZYQCTKEQSZKYRTIBRLNZESUBGPDXOHFYBRPRBWGNTSZXZRWPPKYKLIHJFDHDIDZGILPEWJVXYKFRDCCJUAVPRLGMCXHWOYGRYABFDQQUCUXNSHKOOLIC");
    msg.plan_eta = 1287749658;
    msg.plan_progress = 0.8232784469365096;
    msg.man_id.assign("TGYXLUNJOXWTLIZY");
    msg.man_type = 11880U;
    msg.man_eta = -1560247530;
    msg.last_outcome = 134U;

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
    msg.setTimeStamp(0.9495797750586282);
    msg.setSource(58476U);
    msg.setSourceEntity(153U);
    msg.setDestination(12830U);
    msg.setDestinationEntity(202U);
    msg.name.assign("TUANRRGUPPLH");
    msg.value.assign("SKJPYBWRFVVUQUHSSEYLTAWXGWJDFGUOCXNNNCVSQSEBSIZVCLQTHVOGFOFRWDZ");
    msg.type = 97U;
    msg.access = 93U;

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
    msg.setTimeStamp(0.3053038371382497);
    msg.setSource(10377U);
    msg.setSourceEntity(39U);
    msg.setDestination(10828U);
    msg.setDestinationEntity(29U);
    msg.name.assign("TLTVVWRPVHJWMJELDIUJSFNIBTKUPHPMMLEMLHKVIQRUQWHRCBRCKATPWRJXMRKIJKRFYQCPGFLLSDXAOWQWDWBCSZDSOYIZFMDMZEHKLGXFZTAXXSQNRAQDEOTINBCZOOUBGBQZTDRNNJLCHGHBGNYAFFSJJANURYSYVXZXBHWGNTVVZDJCK");
    msg.value.assign("SLJKQMEJKVDIIIBMYVUCPSXUQWNCAXNZWF");
    msg.type = 72U;
    msg.access = 56U;

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
    msg.setTimeStamp(0.407972827206586);
    msg.setSource(41611U);
    msg.setSourceEntity(60U);
    msg.setDestination(65024U);
    msg.setDestinationEntity(66U);
    msg.name.assign("HDYZMLGIQDZODY");
    msg.value.assign("LWUCGOFVDNQOVWAKWYTCZFBQGWGTEHLRRBUOLWRVNGVWUROEALCZSTEVGKFXBRQLFMKLIHJJQBSZZACEPTSWEKOHTDETNMEJDQXNLORVDRLUILUASFZSUURRENCZFWHAYAFBUFHSIOOFMINVSAPWTWQMXMIIHYYCBJXJIOGSQPP");
    msg.type = 159U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.10341341323399389);
    msg.setSource(15402U);
    msg.setSourceEntity(180U);
    msg.setDestination(22841U);
    msg.setDestinationEntity(200U);
    msg.cmd = 3U;
    msg.op = 209U;
    msg.plan_id.assign("CDURGBHIIECXJVJAOYLQMKGPXBMQSGKQNMSFXYNKUQCSAWJDUEBAQTJZSNUDLZRURHZGCICVRSPUWJLKZSFWQLBSUEGRWDFXMEVKVZEPQABZUHCCICDXJOPFZA");
    msg.params.assign("DWLQHIRBKMCKAPOHBIHZEMVMZQDYZKNLEPYCUKHABYXGCIIKUNZTOBZJIUUCPKSEGDDGRYEFRLQBULWLOHUP");

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
    msg.setTimeStamp(0.730773805319798);
    msg.setSource(29744U);
    msg.setSourceEntity(157U);
    msg.setDestination(1266U);
    msg.setDestinationEntity(2U);
    msg.cmd = 126U;
    msg.op = 110U;
    msg.plan_id.assign("OWIYTYLHAZLDHHIP");
    msg.params.assign("NUFANCNCTTQ");

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
    msg.setTimeStamp(0.3835378544829635);
    msg.setSource(33310U);
    msg.setSourceEntity(116U);
    msg.setDestination(19515U);
    msg.setDestinationEntity(4U);
    msg.cmd = 43U;
    msg.op = 178U;
    msg.plan_id.assign("PUFQNMBTCKHWKJRNKZTLYKOIMRCOPTLHFLEVIZBXLRWYDSMJTHJNXYAWNQQBKVCTGQRXKGWTACVREEMUZJTCFFGABZRBPPSFUDARYXNBYPHIDPXWPCVRZIOMKASJUJGEZBZUI");
    msg.params.assign("QBSDKFZLWBOFMPCKBKINEOMHTVMESEJLSJVZKRGDIWWARFQFZDUESLLGDYLCWPCEPMEDPMTIRRBFAMHTRBODOIFIBIUPDXQRSNXHJGXSLURYAHUJVAPIXAYGRLHZGNAAXUCBUCQAQTLMZVMMXFNWOUFNJISFGYNKYQJSTVCTQYVKCUOHBWZHRUOEQPKTWNAXPAYJZYHODCQSVETVRWCIKOGI");

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
    msg.setTimeStamp(0.49709887558463384);
    msg.setSource(21023U);
    msg.setSourceEntity(143U);
    msg.setDestination(17206U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("BGYERGANTXCRWJMXIYRPNQPYZQJAJKOZMKIHVSIWQHNTBLUFFSBYBIRYWICIEBLNLGVALLPDEEDULGTKMGHBTHSAVOKXYPWUVKZHQULVCZFG");
    msg.op = 252U;
    msg.lat = 0.32101207836182766;
    msg.lon = 0.5098223767471103;
    msg.height = 0.15838167680320325;
    msg.x = 0.9174717049789223;
    msg.y = 0.16292266371040165;
    msg.z = 0.029792153458924497;
    msg.phi = 0.3402629529528918;
    msg.theta = 0.18961353161791494;
    msg.psi = 0.890951687900197;
    msg.vx = 0.17574510068931548;
    msg.vy = 0.6261816607630025;
    msg.vz = 0.7562091749576428;
    msg.p = 0.7784522163962334;
    msg.q = 0.4394657186147872;
    msg.r = 0.01065337847877823;
    msg.svx = 0.26103431692979107;
    msg.svy = 0.37123095811241513;
    msg.svz = 0.43487567260501203;

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
    msg.setTimeStamp(0.5559504331541743);
    msg.setSource(12302U);
    msg.setSourceEntity(139U);
    msg.setDestination(58465U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("DECMLBOYRHMZVXDPMWAPNJGKECFVJHJFINZDBEGGNWXCNTCQRLGDHAXYHHIROILKLAOIBZOETCLTWBRFSKNGFUQYZZOQHCNUDSDDVPSJHZWYWQVAGJXKXBMHRKLVVMWAFJPZUNYWMVUMDVHGYBYSRENJAMQDFGTV");
    msg.op = 27U;
    msg.lat = 0.3564308253846934;
    msg.lon = 0.7944457536277504;
    msg.height = 0.8795338429279349;
    msg.x = 0.5483314382193528;
    msg.y = 0.8709084856760142;
    msg.z = 0.14719214241008305;
    msg.phi = 0.8268676725792748;
    msg.theta = 0.4290400336205078;
    msg.psi = 0.7754916988348571;
    msg.vx = 0.648091115705744;
    msg.vy = 0.016355515272967414;
    msg.vz = 0.1156539668684069;
    msg.p = 0.5285550582679963;
    msg.q = 0.588065487957258;
    msg.r = 0.19976339731074666;
    msg.svx = 0.06858951647131373;
    msg.svy = 0.5722387913802127;
    msg.svz = 0.055852516954721154;

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
    msg.setTimeStamp(0.4167347215239503);
    msg.setSource(59215U);
    msg.setSourceEntity(7U);
    msg.setDestination(49622U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("PBRNCIDNYAXGPXKQCXUDZOYNTGIHGOQFZTFHLKCJIFCPNNGTDFBOGSUUKDVNFFEEBRADSLQMJTTDHMSLYCVCLMUKEQRTAODVUZQBPOGTTQHARNSXWYMOUEWXMWSYMMBMLJKVAJVREASMCMAJUWWTRELJHWYGHDNOHQN");
    msg.op = 75U;
    msg.lat = 0.7309043399876747;
    msg.lon = 0.6341308128906562;
    msg.height = 0.40035998390957306;
    msg.x = 0.6095016172259964;
    msg.y = 0.9421350019820385;
    msg.z = 0.6351539892925909;
    msg.phi = 0.25887528834169427;
    msg.theta = 0.569713089606326;
    msg.psi = 0.6087790847805218;
    msg.vx = 0.38616411966255004;
    msg.vy = 0.9305053601751577;
    msg.vz = 0.28975775145270033;
    msg.p = 0.6230520765233789;
    msg.q = 0.7991873273548007;
    msg.r = 0.6567572953016049;
    msg.svx = 0.9669705003771168;
    msg.svy = 0.37397822583036455;
    msg.svz = 0.9228657851725508;

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
    msg.setTimeStamp(0.6344790330063755);
    msg.setSource(52631U);
    msg.setSourceEntity(150U);
    msg.setDestination(49823U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("DJNLNHJTRITZSTJYJVIPELXHAKENKINASMNQMCOFZRWKKTPJEJJWCSMCIVWUTGKVOURLNXHWFXGXYYSHMUUGPNALSLDMFIKLERHVORBRCYAXKQIIQGAZJWXDUZOQEDZQFG");
    msg.type = 116U;
    msg.properties = 182U;
    msg.durations.assign("ZNNLESZHDQPLZEUSXAIQYHAMVFNCKAQCAOAQGMNBXJPRHOTCBRMFTICYSQPPVWPRNJOHZVRMMJCMYIBAYTEMQAMBSIRNJHCKCAPOWUGHXNSWRNSJXKUHUJZFLAKBOOVYRQDVFEWDQDFZWDSLYKYWVGZIHBUEMUHGTS");
    msg.distances.assign("KHCMUIRBHDWXSPYJUYLNWNLJRPNTBMYQTXRDVSQXZBCJOSZSFLQVKJXPJDLSHEOQUUIGAYVRNGYCCHJCCFNEFHWCNFABASUOTMOLMUGNTBLWEKKWAOYUMBQFBRGFHKTJJLZXQNSIGZTEVDCIPDWGEYLEVCFXWPOVFTNZVF");
    msg.actions.assign("YZREGHAIHMEFTNEUSZYMGUNOBBQXOUTXKBQOSNPLNPWIUAAWBTRCVQRMFDVIHZXGIZJBNMWJOXBGDMGIBPFKHFVKQE");
    msg.fuel.assign("EVLISBMEXTOOCXCFNMKHHXOLRBVRCDGLWMYQAXWPLBWCKQKEUUZGRQYNCTYYNAQYGZYHJHQDBHXNJWKTMUGCSSYVZAACIDGAWBTASRVFOIEFAEKDILBXHRGKSEUCQHGNIISMMFYFBYCEDDVGJDOGMJSZRGIBOKVLNWPXZZDAPVEPUZRIVIMXZPSUHNVPKJUVTWBDTKNLBDNWSOPQ");

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
    msg.setTimeStamp(0.5131217766094136);
    msg.setSource(60141U);
    msg.setSourceEntity(18U);
    msg.setDestination(24181U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("EQDINGHXGUXZRXQGLFFAFOCUAOBXNZILGTUKFPSMENPKQNETYHRZSJTWLMWSQIGUNMHHVBCZVZMSKPOLEGHBFSCR");
    msg.type = 73U;
    msg.properties = 52U;
    msg.durations.assign("QILMMSQUWTEARKTXGNLHCJNKBTJIEXVURQICVCATZSWWLZRUXJMFEMBXKAEVXDRHGDLIYOHQBTOFWSSAAEJYRDZGFWGDUTOPSHRBZVFPSFNVKYUHILEHBJFWXZUPCWBLWAHOYINPIQUMYZZKONQPJQLPCBYSLRZINVEHQYIYMGDKNVBJJPEQGYIKJXWUAFVMDBTGOURDYZCCFNVFLEQOOKFXGPXOSZGTADHD");
    msg.distances.assign("QPMNDKRVGASDBUPMKYVSKNKTIGUEMMWVCRSKBZRLCUWQDIILRXSYMJ");
    msg.actions.assign("GNVVBQTUTUNEODLJQRCQMGDXMFBJTYECSRENGMMYPIKQWJPRWOMNXGUCWGLQTTILUEDOCBKSQWNACMDTDMSYTFAHJXRIEOIRWAZDBEVAWQSGBXOLCPSULYYVKGIBXZNYAKOCOHVUZQYMKAAKSS");
    msg.fuel.assign("GKHWRAMLHGUHWBPVPAYYBISAOXLLWHMNSKNFUGTJQWRSHBDDZZZEGJJIC");

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
    msg.setTimeStamp(0.19311706255102645);
    msg.setSource(50634U);
    msg.setSourceEntity(152U);
    msg.setDestination(27920U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("GSEMZEWSOHILVFYGNBUMCPVAHORCYXAZHVBSYICKNSCQDGAZDXHKFJLGLZUYAIXWJDZLNXWNUTETMRCDKEYPTFHKSUDTDWNEVLIYNPYYQHKKVLMPQZBMJHHRFXKJKBFMVWZ");
    msg.type = 206U;
    msg.properties = 35U;
    msg.durations.assign("CKDWCZULVBHBXCNVGLSDJBUQNIQG");
    msg.distances.assign("OKHDQJLEEFTIBNDPBHKLKYIMLJKVQJSLHVERNOUXLZJZOTFSFZCMFLUGIQCVALUQWISBOTFXHLAROYHFCSMTHBJKVVSPZABWUWJGISOGZMRPXHNAIZPGGNRQYZILMJPRPYXSILEKCKACWTTX");
    msg.actions.assign("INNUQKGJMSRTPVVACNQZDGEAXOADEYFVXFYPOICZGIKKVYONTCOYESIFALSSZSOHC");
    msg.fuel.assign("LSYTWQIUAMMPXONUFCRASDDWFKGVGHRYFCTUJLPFVAKNDCBHEDGBGMOBUUXIKENWTSLSZEXAPXKCTDMBRKNRMEMQWESHUZHOJSAJDRKT");

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
    msg.setTimeStamp(0.1730210256464234);
    msg.setSource(17236U);
    msg.setSourceEntity(47U);
    msg.setDestination(63857U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.5301878248181446;
    msg.lon = 0.7109754683002436;
    msg.depth = 0.5922274945934156;
    msg.roll = 0.33758556702019915;
    msg.pitch = 0.6913370142930797;
    msg.yaw = 0.512462434766574;
    msg.rcp_time = 0.8342978455172725;
    msg.sid.assign("NZBYMLTPUYWNDKWDHZOTPQEDNTFDCBGRYRNSYZKCZCHXQEL");
    msg.s_type = 118U;

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
    msg.setTimeStamp(0.8133568702256155);
    msg.setSource(30270U);
    msg.setSourceEntity(201U);
    msg.setDestination(25619U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.9548930730051329;
    msg.lon = 0.22871640161652496;
    msg.depth = 0.7142712783222614;
    msg.roll = 0.728652750040251;
    msg.pitch = 0.8774094783723022;
    msg.yaw = 0.16873831780080084;
    msg.rcp_time = 0.22541497938233912;
    msg.sid.assign("WOXSMXSEKMWOXVOBRHPTTOXFTIQMAGLFLZGOLPNCANDXDEPVQZNDZRENSEABXHKYJQMUJUATHKACFMTMLNBKIKFZQHYYPFPJVKRZEK");
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
    msg.setTimeStamp(0.9771347056941888);
    msg.setSource(31431U);
    msg.setSourceEntity(1U);
    msg.setDestination(37760U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.4784816465736038;
    msg.lon = 0.8531980387529542;
    msg.depth = 0.5798624568167956;
    msg.roll = 0.24460400908836566;
    msg.pitch = 0.6802497735749273;
    msg.yaw = 0.902363314885878;
    msg.rcp_time = 0.7049911295888194;
    msg.sid.assign("UGFUMFBADSPMCGTRNSOUULNZBQOIXXCVCUSDEQKAYADWBQLZXLJDORKDJHGWCNIUPZRBVNMQDQESYZXSKTJKPFYECWBABJCVHWVTCMQDVJVCUSNAXFNOTFYXMGGHINTYCOULHZRXVWY");
    msg.s_type = 49U;

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
    msg.setTimeStamp(0.8148763437482527);
    msg.setSource(64905U);
    msg.setSourceEntity(80U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(175U);
    msg.id.assign("PLCPMINLXTSODRUNBTWHQHNTNHWDHJGSHEWYJKWYNFCPOPICSEEYGINCFDCDXRLMNVNMUIQGFWQVKDDBUHJZBZBKGWQMIREBFOBLELSVMOJFVVUXMLHBRTLRSCITCAQOTNAKMJIQZEIHU");
    msg.sensor_class.assign("ZZTKZPBRRTGINKUFGJCPKNIQFTPGCYEVMDMYMBPGMVQUHWWLZSQUQRHYDITZYUNFJSFWBYARKJELGL");
    msg.lat = 0.17119504424585086;
    msg.lon = 0.5870836611986128;
    msg.alt = 0.010926264788817197;
    msg.heading = 0.3366640054279533;
    msg.data.assign("XRFQBTDIEWBBRCLXSRCHCVPDMRTJVIKXCPSURZJXESXOHRSMUXVUYLIJDDFHKSKTIUBJR");

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
    msg.setTimeStamp(0.9924922661359045);
    msg.setSource(15875U);
    msg.setSourceEntity(154U);
    msg.setDestination(32720U);
    msg.setDestinationEntity(250U);
    msg.id.assign("BQJJIIJBIQVSSNTIGTRUQOOBAZZANCXYMNFUCWFLRBKUXCMELGYPPSLEKVZFUKUUWYASITBFJIVRKYNNIYMHSIAXRKWHPDBVAEXESWJFODJNHWBWZHUGMHALZAKKIHHFCIPTMGOTBSMEYJVXORQLOVRPDOPVDWDYSFTDDLJCUGRCPXEAEVGDCKGYPNYLJDZXQZE");
    msg.sensor_class.assign("YXCLZXXGZEPJADQVFMLKEKLBISUXKYJJMUQEZPDEKLHCGHMQTDIJDMUFSPNNZTAGMGFERIURGIHFTJPUCNYIFLWWNSZWRVWFKEJTDCPEHAYYIPXFYVSDTS");
    msg.lat = 0.7707974045168542;
    msg.lon = 0.9739020264216528;
    msg.alt = 0.011490877053895843;
    msg.heading = 0.2163339164371575;
    msg.data.assign("VMFNIWSLDFTJAHXLRVBWBYDAZZEOOXOWGFZQMTTYIFIYZHILZHKPKXEKZBRKILTHSRSAMBRWJRPKXJUPTRFGRGXGAYOSCETGNPACBNOEBKMXDDFCUCANEV");

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
    msg.setTimeStamp(0.6776017168176118);
    msg.setSource(20919U);
    msg.setSourceEntity(45U);
    msg.setDestination(39943U);
    msg.setDestinationEntity(33U);
    msg.id.assign("NRDHXHYMESECAZODSSAUGZNBMBVYZMJPQNGJFCZDYJTQPHMSQWXPVJYMBVWCVTEKNYWMTFXGIAWLLQIURHYNKBFWBFKRKQGOIBVRIAXEXYPRZLFQIXULWJ");
    msg.sensor_class.assign("QSTGRSEGCQOCYCIBZPXNECEXNVJHFRZUJRLZNCDMUHBRQJVQTAWQERHXBEJHLFCWMDJLKDPATWLZIAGFMAXKULRFZNKMSLQIPWDVYSHGWJN");
    msg.lat = 0.5435532416129399;
    msg.lon = 0.867072620240548;
    msg.alt = 0.6595473077314924;
    msg.heading = 0.8644685427264619;
    msg.data.assign("QGNAFQONYSRHUEITEGQRVZDVLMCCZW");

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
    msg.setTimeStamp(0.2756669177100567);
    msg.setSource(58595U);
    msg.setSourceEntity(17U);
    msg.setDestination(34480U);
    msg.setDestinationEntity(38U);
    msg.id.assign("MOTVODBCVDHNAMQOZ");

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
    msg.setTimeStamp(0.7446711922024755);
    msg.setSource(9198U);
    msg.setSourceEntity(224U);
    msg.setDestination(27337U);
    msg.setDestinationEntity(155U);
    msg.id.assign("TGTJFAZZWDUYULCDPHMBNXRQRYCQWWEKRHNNVMPLLYFVZUKLLAPQHBDWOADHREUPYKISONVSZGTZOYGCGLCUCMROKVPIHSJVXLMKAVSNXEVETFFITFUAFXVIQZTRTIEOJGDOXSOSFKPZRIPERSXBWWONJBOICYQKVYYGWNGYMJXCEWHTUAXHMJLKIQUSHDSBCTMMLGRPJZBMNYQLQJBSJNUVDGWBK");

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
    msg.setTimeStamp(0.4499344957203799);
    msg.setSource(63167U);
    msg.setSourceEntity(75U);
    msg.setDestination(16441U);
    msg.setDestinationEntity(124U);
    msg.id.assign("QUYVIXGEAGYSOQLUXADYPYOTBCADCKUTJHPRCSGUKMNJMRYCPGHQERJPBGADLKECZAZZTRXIDPMLWTFVXIHILEFFKUHPHJGSQMWITTUUZEFYJADXTGBPFKUWKPYMGVLXOQDSQZKVNCKFCPVZOWIZVNBHENGBTFANWUFJFODAJXTMHVSLSMEZBHNBXSNMDCHIQCV");

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
    msg.setTimeStamp(0.33114239947849955);
    msg.setSource(27632U);
    msg.setSourceEntity(139U);
    msg.setDestination(53469U);
    msg.setDestinationEntity(106U);
    msg.id.assign("PQARCREVHARMOPYIXVFDLCCAVUJMVUQDTYXOYZYEWNWUIOJPOEDAFYNDZHINKKLTVEZSYHFUYWUHJMHRWJKX");
    msg.feature_type = 243U;
    msg.rgb_red = 31U;
    msg.rgb_green = 19U;
    msg.rgb_blue = 195U;

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
    msg.setTimeStamp(0.49213771834304376);
    msg.setSource(21772U);
    msg.setSourceEntity(18U);
    msg.setDestination(64010U);
    msg.setDestinationEntity(122U);
    msg.id.assign("OJSNFOSRSHBVAOFECRRDEHIUUFYMDQYCYRPWDXQEOBFZZVRTWIBSSUAGIROGNYPHNKIPYYUNOTWCADCBMMCDOPTUMKBLPBYHKQVGBVPPTTLHUFZLMEJXDJODQLSWFEHZKRJZGYY");
    msg.feature_type = 110U;
    msg.rgb_red = 3U;
    msg.rgb_green = 53U;
    msg.rgb_blue = 19U;

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
    msg.setTimeStamp(0.19819444884323667);
    msg.setSource(1944U);
    msg.setSourceEntity(20U);
    msg.setDestination(11835U);
    msg.setDestinationEntity(68U);
    msg.id.assign("RIMXFMFAJCHEWRTWJZUNZUBMLKYNWXXHPFLVQIGS");
    msg.feature_type = 203U;
    msg.rgb_red = 210U;
    msg.rgb_green = 134U;
    msg.rgb_blue = 41U;

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
    msg.setTimeStamp(0.4120961074407805);
    msg.setSource(20896U);
    msg.setSourceEntity(47U);
    msg.setDestination(27993U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.8768373096025365;
    msg.lon = 0.9288180859281189;
    msg.alt = 0.8577858760407177;

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
    msg.setTimeStamp(0.2182410985742005);
    msg.setSource(6663U);
    msg.setSourceEntity(168U);
    msg.setDestination(45259U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.8705330016350509;
    msg.lon = 0.7595358477595364;
    msg.alt = 0.9964459377197491;

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
    msg.setTimeStamp(0.33606640540367283);
    msg.setSource(39804U);
    msg.setSourceEntity(174U);
    msg.setDestination(19278U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.08296077870417862;
    msg.lon = 0.6837820023373553;
    msg.alt = 0.2005520604733576;

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
    msg.setTimeStamp(0.9361442486570085);
    msg.setSource(34569U);
    msg.setSourceEntity(106U);
    msg.setDestination(61584U);
    msg.setDestinationEntity(218U);
    msg.type = 160U;
    msg.id.assign("LGVHIRUGEUSSNCDLFLOAIRESVYPVHPLDDDZQNQGDCKCWNCZFIVTTNMCGPBQKXPAYPNTFWXEBXMLCYBPGOYMHOMZYSXOEXBCTYJYMFEBRNRBSZNFDVISEITWEVAKCJOOSNZWTKQRMBPJCGULQEQIUIRKJHVOKGWVXUXPBUCJGOXSIHENHAYFFMTJRZYVWMLAUFSTBAUZUQQHUHRLWTKPXAQOOJSHDBFVXRKJGRZKWTDWFANMPQJLGDJAWIYIDLH");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1643700485U;
    tmp_msg_0.value = 246U;
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
    msg.setTimeStamp(0.06496375021504208);
    msg.setSource(46888U);
    msg.setSourceEntity(150U);
    msg.setDestination(6691U);
    msg.setDestinationEntity(11U);
    msg.type = 14U;
    msg.id.assign("FZSISXHJTBEHKYISUHNCUODDHMTLOVQCWGCBQTDDQJXVFZXNAUPUELHIQCDOXZIVVQHUDDITRIKPMNANWNYADUOYJMAGJJRLVPKSJKBOZYGEZAJGL");
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 34061U;
    tmp_msg_0.destination.assign("OWGEBRXPVKZDIFJRISUTGLRLIFYXNGOKXVUQICQRDPHMBQILZLSBLPDXKJDUOFVPKRJOLHOZGSFLDUIQ");
    tmp_msg_0.timeout = 0.45744843556882386;
    IMC::PlanGeneration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cmd = 10U;
    tmp_tmp_msg_0_0.op = 216U;
    tmp_tmp_msg_0_0.plan_id.assign("BTPOHNMPEYTXNDESIANQVEBQLALOHLIBNGMDSMFCMWDRHYBDLJDKQWWPJJOIKAKAZUZYBXDGIACDODWSFDRGBFNKS");
    tmp_tmp_msg_0_0.params.assign("QBZAANUTNMQRRJWQJPQSMKGCUCRFXBYJDKAFNCGIHJDFIHLMTQKQHMLGB");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.48141295371672876);
    msg.setSource(47446U);
    msg.setSourceEntity(145U);
    msg.setDestination(44400U);
    msg.setDestinationEntity(69U);
    msg.type = 35U;
    msg.id.assign("SOLRRPCGVGLJYAVTXEYGGIAXHJKZIVQSXVFZVRUFMHRPMGHSMBIEEPCDRPKBRVAWXHPVKQLCBZSHRNNAVZYFBNXCUEDUNNHXOWQBQTALJEQMZRYCUYMORXCJWTYQNTHWZZNBSNAEIJRKITVWGFJFDNOCFQLUQOKKFFLBGPUOZSTAPBIYOWPMSDTAEOKVDUTCFCGPPBWZIKQIDOSMXIEHEMDULXWYHWKFDDSSHYLAXDEGGJAQLJMT");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1265510036U;
    tmp_msg_0.value = 237U;
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
    msg.setTimeStamp(0.11512980011133911);
    msg.setSource(1138U);
    msg.setSourceEntity(138U);
    msg.setDestination(55212U);
    msg.setDestinationEntity(74U);
    msg.localname.assign("XUFUUIAABPOKDMJNHAPEQVMPVZMDIUJPSJLDCGMQTQEMPJMOVOBKIVXXHZLWFBYGXHPCRTEGJVAZINLJVHXTLBJONCFCLYUCDIOTFIFREWOEBSHOANRZZXLSUMSHGKTCKLRCPGAUUFATVGXLYKYPSSRVNGFJZPGYRNYKREXMWHNBIUJIDLHGWNAIDKHVEBVQSYFDPWBCCZBXFTWOMZCRIDHN");

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
    msg.setTimeStamp(0.7072425651511937);
    msg.setSource(59669U);
    msg.setSourceEntity(111U);
    msg.setDestination(18153U);
    msg.setDestinationEntity(142U);
    msg.localname.assign("SCQKJUWZLPONPHPKUOEGUYGOXWTRVHRMSOEXYTKRQNQSCJFIEPBEBLZELMLMMWWZFKZVTHMNSNDBWTIJNDVIYRHARBMXDPTUASWKAZQIIEVNHIDAXZAORFUNBGQQBFWFHCLIUTULH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YGQAMDZUQGSORFBXYTJGWITHWCAXRSOCWQHNENDUNPNJEOIBAG");
    tmp_msg_0.sys_type = 61U;
    tmp_msg_0.owner = 52048U;
    tmp_msg_0.lat = 0.10162247039781735;
    tmp_msg_0.lon = 0.2698958074564892;
    tmp_msg_0.height = 0.6651710157247126;
    tmp_msg_0.services.assign("NLLLBCKWPAWYTTKPNUQJCRBUNJSNVSZ");
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
    msg.setTimeStamp(0.8622227474358715);
    msg.setSource(41599U);
    msg.setSourceEntity(175U);
    msg.setDestination(9891U);
    msg.setDestinationEntity(138U);
    msg.localname.assign("KYBBWDDSEHMRMGCFTMEKCLMHGNLYXVKONEQIFUIPYXRIINWIOXBMBTZAWEYCEHWGMZMBVGBQXLZKAFYVAYQKAJVATTXIDGJPRKXVAUQNUJICYMSFHHRDPLBTUYHXRHNPUKNUGCZNUWQGLLOHIZIMOOCCRJWAFDFTRWDVVJOYMDBZSONSERDZKSTJQEPEYNXAOCVESCXKEFTSGUCVQSAFPBQVGZWSRKZPJPWBJLLIOQWUHHDRLPLJXGTFQU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QDLMMSWHULZDJWBAMRUCOHMNYXNMLNHJEL");
    tmp_msg_0.sys_type = 133U;
    tmp_msg_0.owner = 48185U;
    tmp_msg_0.lat = 0.26392659282656405;
    tmp_msg_0.lon = 0.20219801957891392;
    tmp_msg_0.height = 0.18123103086484893;
    tmp_msg_0.services.assign("MAYASPPKJLLFAXZXSAIVDOMEVXOTXWJTGTFMSTISNKCBRUGPTKJUCVEZCEISPUAHGRKFBBWHBXNCEQUHPRDLMQYOVQSSLLWCOBEILQODYXIWFWODNYTEVQKBMWVZKDCPXKLCTRBSOHOGCXAHDHZOJFMRVUDMGHPRYUJAMAFKHJZNTKNZIEGBBHGBZNWURLMUDVIDZJYGOWANRQNQGTLSJTHUYFWZSUPPYYAEJLFQNFVKCIV");
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
    msg.setTimeStamp(0.1478531345486953);
    msg.setSource(54994U);
    msg.setSourceEntity(239U);
    msg.setDestination(43287U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("MCPVULMFCKKPZIFZNLEOUXATWQNZUYUCJGYVGDPSTNVPFHNCW");
    msg.predicate.assign("GKDGUDNINDJDXWVLUVWSXFPOLKBHIPBWMLNQKEYQGHVJEBDXYPPAUNJETIZENNHOOUBJIEEXFSLGZUVEHBHPRKIZSRMPYTMBIDWPGWZDRCZWJKTAJBNSRZZOBFOLYQFOMCCRVUWQWHQTAKACCWVWIKC");
    msg.attributes.assign("SBKSRZPLTFALCDCAVVGTFRKICUJMMORSWXBJTCULYLJVRYXCIBUWHDBLGZASDDPOUBZSRPJSMMVGKOWTNHQFU");

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
    msg.setTimeStamp(0.6253617439230094);
    msg.setSource(26422U);
    msg.setSourceEntity(75U);
    msg.setDestination(52306U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("UEJYFHMLUYMZQCFOTDLRWJQZYTFZGVNZOUEIQRPYZGJVGHQPLZFOSXNIVVQDEAXEJSRZJHVGHARIHNDEKNUTYWIRORKRXKMDCNUTFUCIYJYVLDRLNQBITHYCTBCFSMGQXINKCAHQBACLAVPFHWSXAKBBEIVNTGAQBKCYPMPREUIWKMZUVOLPLZLHAKSMUYWXESDVXBFUBWJNQMPWBKEOSCJWTNXAOTIOTJFWDFRGGSMXDCA");
    msg.predicate.assign("EKMWMXIDNJPAIGVISRARXKBDFQNNCPNVWDOYHGLJMJBHKZJLBYLJTMIDNUTKRFUQTEPCLPMHVCAEEEZZXIYDLBCKWYZGLXGBQRPSTWZDHODXJFTGNUCVBZCVTUFQYPMSGUOEFKWAXXSDSEGSDSZABCAEFGFTTWRCOAPURQWDIIXUPSRSYLHEVNQKVHOIVREVMYCSJKUOPWZHJLPLTMYBHQHUTFAQGLAZYOMWIQXJONHZKFIQW");
    msg.attributes.assign("TBLTXSSOPNQCOIJNCLTZWUHIIKEGLMFNFVMJXYODDUGCINZINBEGABNMCGRVLJBUAAQGZRZXMUWEIXEOGECSJSCPQVRPWORDKLRRAJZCUVHBNOWUZOKDVEFFMGZVVXXQOWBXUSPRKHFJS");

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
    msg.setTimeStamp(0.02651426731208173);
    msg.setSource(33903U);
    msg.setSourceEntity(181U);
    msg.setDestination(56216U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("UWNOEVXOBXPNFVWNFGIZAKWHBIGGHMTBCWDQULDZZJUSESCINGLNMIYEQNJQXODRFCGLUVKBVJMMXOZDBZPYYETEJTNKFSJZKCEUSETSVXAVEPZOKLJKQGRTCDPRYODMTX");
    msg.predicate.assign("BPJYWYNTVOHIHTUDMXOKB");
    msg.attributes.assign("RTLICMMXDNOGQWSKPCEJLRIOYWEARSWUVCACHZJTZRYCLLOMNIROKQKEVJHYBSCEZSENIZOLNSEIVNFPRSHTAVCXHVAJRVMLJYCPRUVWNBGFNWKTFHKDQIKWSSDMIJB");

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
    msg.setTimeStamp(0.7450152954228476);
    msg.setSource(6087U);
    msg.setSourceEntity(58U);
    msg.setDestination(13087U);
    msg.setDestinationEntity(155U);
    msg.command = 103U;
    msg.goal_id.assign("VCMXNPENDMCMAYAVDKBGWWPZUQJJWVEWDTHLLVILJPVGAJIOBCVOVJONYENTQFDEAQYAMHRRNOSFKIL");
    msg.goal_xml.assign("NBZCEZFXEIKVGCMZUIRCCNGQNQJINCMIDBDZXKSHSYYKXQFREKXSYRHHXVHASHQFXELGATJCRVZJFBF");

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
    msg.setTimeStamp(0.630699336664627);
    msg.setSource(1122U);
    msg.setSourceEntity(89U);
    msg.setDestination(22964U);
    msg.setDestinationEntity(56U);
    msg.command = 103U;
    msg.goal_id.assign("TZGLIBOABGPIGTYWMDALNPKZHIYJKFFFVRHVRLJCLROSDVSERUYBSARBQDRVYYSMMDNOZSLTHNIFAQTPWGRXUMUJEAWQYBOKHZNGSHYWWROQ");
    msg.goal_xml.assign("VAQNRNUTNMSMQYTTHZEKMHJDBMWGLULFTOQUFVAWAONPGFBTCOMSCVQRXWGDXXYZYFEVWNQRFJJPNTXPXECOIGYUURFVBPDUSCEUFBXBMEVVSKLOTAZUSBJEDIYXLALRMLZASJECFPAXRHJBKIQSKJBWTKCFEVQLPKAWBCIYHNOGNYRUQGLKFRZQDKHKQPGXWVHTHDIHNEZDCAJVHIIOSSI");

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
    msg.setTimeStamp(0.40929157498207624);
    msg.setSource(60882U);
    msg.setSourceEntity(46U);
    msg.setDestination(36246U);
    msg.setDestinationEntity(200U);
    msg.command = 192U;
    msg.goal_id.assign("JTYPKCPSOXLIRHFEGFGPOQSGNKMUHEROGDRHDHFCIDCRBSGEKXRJLPEJAUDIOBOFFCNIBAAVVATBEKAEPTCUNWYSQTCNUCKONQYOXYJSJAIFHYBPCBDVRQGZSXYQZG");
    msg.goal_xml.assign("ICWJOTLBUWCNBMJXTOKNZJDEJTBJVGCWSZFFRSGNKZASDISOPTCGMDPBOWZRYKVQLBMEPAUUNNLILUWZCAQBDIFDVNSWGGSRAHYHPWAGOIYYAFGXKXCBOHTLDXMDTMDTVY");

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
    msg.setTimeStamp(0.8024434153705255);
    msg.setSource(52678U);
    msg.setSourceEntity(66U);
    msg.setDestination(45200U);
    msg.setDestinationEntity(59U);
    msg.op = 245U;
    msg.goal_id.assign("UDOIDIWGQMXYGMJZHNGOKFLOVJJNPEPHCWPOZFXFSKOANPYWNGBTAYYSJDKKGXURFFPCZQBFBYMDCDAXZFEYKAGILHJXCGUFPMSSHBZQOTAWDWIZCSBNGKLMEUZNQNTAXPLLQDNVLHCSAUXIEYWBRTEDLRBIXTALHPVVUWJTTLRMJRRDSVKEHITQWVTEICBEKMRZRSMYH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AEPXQRPHRSARIZPIPJGEGRCUCLUYWKVYQJOZMNFDMVKXBUUQRFMXODUOIWMARLNNAFTHKRZYFPVTJENYPFEDMGNYOBZGCSRGUBDBIDLYMKEDCQEVBJXAXUJTHQKGRVFTHTWAWPJICWEHXYSHOPYOIVSCLCHAVZQFEWIAYVFHSIXEBTEIWOMZCVXYIUWCBKWMLQQKLAJNQKUBPSXRNO");
    tmp_msg_0.predicate.assign("LTBRQFDSROSERIQZIGDHHLZILGMSSTKOIHNNJUJXXVFDUKPZPFNCJPSPXJVASWTFUQLTFDWQJJCRELWACDYXPNMZVVOOZASIRUPNVGRGFUOTXBHHFJABYEEINQNIZTUVNYCIAEQGSUJBYTAZQAYLRHGOVEBKHTBYGVKREKZOUVWCBFEKNLZSYUCCWLXXEQMMQAKACPBQKXOWPGWWMRHBMHEDPVKYKTGRODFXMSIWCDIJZULYWLBPDCJY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NYAEEFSQGZLQBLNYVSKHUNEZCFXOKMREYXTZXUOTNUUQMCTFOTLLLMCXQZHGEAVGDOIWTIFJDIRVUDA");
    tmp_tmp_msg_0_0.attr_type = 69U;
    tmp_tmp_msg_0_0.min.assign("QWUVZAXHYZLQUTJOUQCDJIGTRAZEXDMALMPPCBFPVMXFPIXWEREZQYPXAUTJSECK");
    tmp_tmp_msg_0_0.max.assign("ELGQTGUURNZSAZZAZWEESGVKJLMDGZEPKIJZMRSDTCQVXYOPXMLWOOSTJDMVAPICBIVOMRUOKBIFNFYQZBWXCNBDQBSMNVADIUSLKEXPTXBULDFKJGO");
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
    msg.setTimeStamp(0.6180699322742953);
    msg.setSource(58295U);
    msg.setSourceEntity(15U);
    msg.setDestination(10407U);
    msg.setDestinationEntity(249U);
    msg.op = 173U;
    msg.goal_id.assign("KDKWYTWAGZXPPSCWJXSEOIGPVWBYSZUYQFBUJJTZXBMHDFFLNKCKPTLKFHNNFQGROOIOUOQBTDEHVGUCYRRIOMCNHUAXFLVPLKGBRLVMWLTGXWIVFIBEDINMJHPZXAVMFWXHGYMUVSNNYTSPJHAEHQLVDJRDECAOGCQZEBVXSJPCZRASDYMWCIIMDFEQTKUTAGWRAPQZUAEBOENSTKERUJBJPJOWIRICLNZLOLRYVDY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SUYXFOSHAMJKJEKZYTNOUAMWRXNFUDCIQIRCPDGYAKYZTCLEBHCENSZHGOLYZHEPZZYTBKFBWCVQX");
    tmp_msg_0.predicate.assign("ANGLZBUCTFNHEJQHKRUFPCYYEAYOZFQXCTBHNPVZIALONCIKBGTZEWKIHWQCBHROQFKBTBUGBDIVCWUDOVJRXJEBGDUPXINPPSPFTWTYRMZTNCSPQAKPGUCQOGSOEUCVPXLMMUAHFWPWFGJYYLYVYBQFVEJOT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UXVWNRTEJIMZXHSIISZBBMORPSYQPJWWYXQBCFJEBROBWUANWIVCITUDHULPJZGYOCOSBXWHFXQRKBISRCQLOGDOMRHQYNFAGFNRPXXZVARYYYSOLFCMCENAJM");
    tmp_tmp_msg_0_0.attr_type = 16U;
    tmp_tmp_msg_0_0.min.assign("PGYPZAGBIMMCQDYDWMFZHBRZGMALLLBFHTGMPJKUINSCQZNYFWZEGIJCFPVCIHFLDQEUSVMSBZSDVHCSALBVOZBPROFLTVHGDJJSDSYBQQRTELKHSIOABHEWYTPNQOTDDKNKUNHZBUOXVDJPWYODTYUIPJHMXFUCFRXRXXPEMWNEAJAGSJAWLCTQYUURMVTPOEJXKVCICJZNQBXWTN");
    tmp_tmp_msg_0_0.max.assign("DZPJUAWVQHYXXNGDYKWEQXGCQATUOVDWJMFYQJNETCHBCZMVUPXAZZCBHMZOGGJKNKXHTSMARBEIKQEULIIODARPXFSOYLZWINGD");
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
    msg.setTimeStamp(0.5759695814363648);
    msg.setSource(43242U);
    msg.setSourceEntity(2U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(186U);
    msg.op = 219U;
    msg.goal_id.assign("EFTSPYORECQVYDSOBBKDJFDKJTGNEMKNOFDPOCHMUNQUHVJGTLNXGNHVVAWJAPKMRZVHXFXLAFUBNMMRRFMCJQSBJLYXDRYIDTTCOKBEIXTWVFVPHLARRXOESCPGGMSNWEBMKNLGQYQQFRWBCYUISETZNUBLKCIQAQDWSIIAVAULZTGPNGWDMHZBZEX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AGVTAKTNMGYJYWHWBQKLMZVXXIEMFDITQNYDRUYJSYFWPRILEQCFZOKRHUFW");
    tmp_msg_0.predicate.assign("TDAAGSXQESGCDYLMIXULOUFWSXNOSIJBJWRY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MILFNHEGVWPWERYCPOKQMDGXGXZVUMRUTMYQFCPICYJLUEKSMXXODNHEHVLPLUCHJXTRKTJQIASZIOTMVSWBRBXZOYBGMTNQIIOOKBHZVGDVAUHAMVEDXBDTQRPTJKWIRWWAPTUZUPSMNDJKINCCYAWEKLQNAOEJXSFFQTYGLOFSZKSKLBJXUDRUFFICVFS");
    tmp_tmp_msg_0_0.attr_type = 186U;
    tmp_tmp_msg_0_0.min.assign("ICDBLTZYIGRKVIUVLPGN");
    tmp_tmp_msg_0_0.max.assign("BAKOWDSBVOMUSJCETUEHRAAFRCZIDNSBVCLEPHZOHENVOXMWHXPKYRONWEDTVBWXFAOMDSBRRPZMULVBCBUOWSFABZIXXJIUCWYIPQTQZUNKQKYVRGJMQPQFPELJELCYFKPNLASDIYCTRDEIIXTLHMJJGZUUKJQXSJUOAGKVURNWKBYMZQ");
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
    msg.setTimeStamp(0.9892872006542358);
    msg.setSource(45306U);
    msg.setSourceEntity(253U);
    msg.setDestination(25619U);
    msg.setDestinationEntity(188U);
    msg.name.assign("DTSTCKLZYMWDQQBOXVBTXYGYKGPDPLNRGKFQIXPPQBZHV");
    msg.attr_type = 185U;
    msg.min.assign("UWYKKAPCHQSZITQFBICCBZSXCDPSDPZGUIUBRKNKMXDPFKRXNNBDCEYPHUQLDUZXHTRCFWRJYPEDGEONVHHPGLIJEJIOQRUTEUEZIDIVIJMXGZKMCQXDXHSWLPLMUVUOOYSFGVBORSQFTZQDGCBWRIKLTWLCDRFFEQXG");
    msg.max.assign("QRYDKKWDLHSWJVJUUUAGQSPHXOKXFUYCVKPENVMKXUXUAJSCBKZAGULAMOJTUZQJEVOCGIBZJLCTGPMOFYABIHYQORWHNVRFLRQZKTVCIOTEJZAWTFMWDLMSNUBGFEMLHZHCPNIXSIETCQSKBSLFSNIWDBEKBTQZRNYLJG");

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
    msg.setTimeStamp(0.2729070073982707);
    msg.setSource(21884U);
    msg.setSourceEntity(231U);
    msg.setDestination(36482U);
    msg.setDestinationEntity(126U);
    msg.name.assign("QOXBTLHRJMBQKLJFBHCASMHLXNHJVTEYAVZMENZCUZMVKUFUPWAGCDAFGILFCFZWEYQKVXTTYPRLDJZYMDEBHIDWQGWNNRBSXPKRLXLAPQIECWBIFVVSSOKNICRBORNGFFJFMHBGGMNHPUTZMSPAJZNMSFSUYNMJHQGIDQNJYTCDLUZOKSDLXOWUDOIHOWXGYOPCDYKXQRJCTTBKTIOPDEQEASZRWAVYKWXYJOVCRKUAXETUPGSVEUIEIQG");
    msg.attr_type = 247U;
    msg.min.assign("EUUXZTYWJDPQWBBOSPZKPGHCJQGJFZFOFSLHLBNNYEKWIPARNYOIUGNLQBFWLAIGWAUGKBZSCXEZDVQTHDSEYYUIIJSJOVEILHXFLUNDFO");
    msg.max.assign("XUDLNFLDLFZKUKYRCNPHVMRMUZPIUUQDXSMNZFVNXAESNGCXJSPRLHZZHJAPNVPVQCMASQWROWCXWKYOMEFDLTEFLDYWCLFPCYGUJBOXXEKYEBODAHTBGHBPAKHTFAUTGQY");

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
    msg.setTimeStamp(0.8156511038447007);
    msg.setSource(35885U);
    msg.setSourceEntity(209U);
    msg.setDestination(24969U);
    msg.setDestinationEntity(49U);
    msg.name.assign("VYRTLNUPQDYGODOZEUWQAHCTDCCNPFPATKGHKBKFMYMCOLZOLQKXBOMZEMUJCKYDRFHZLWNPNDIYROEOTMGUHVNJRKKEMKIXIBNYSQCHLSLJVRTELCDIGIEUVJXN");
    msg.attr_type = 112U;
    msg.min.assign("QHZAVNHSIVYJJQSKQRIREGVOKBVDEBXJGUMJFHNFLZRGXFZQUWKSMMTRWQDDLQHIVLSTPUYANXFOLIJNOQEKELPUPLTKXEBSNAYLFWNUYDSPDSZJMGMYOOBZHKCRVCKXTBKUMBONRPWUCYOLXMIGFIXBGXJSHWMHPHAHQDINZYPMCXWYJJFDKTSBEVEWTFLABNCACNTAV");
    msg.max.assign("PITCXIBHACBPMIHPGEMNTQ");

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
    msg.setTimeStamp(0.7230189558718241);
    msg.setSource(12353U);
    msg.setSourceEntity(14U);
    msg.setDestination(40476U);
    msg.setDestinationEntity(118U);
    msg.timeline.assign("ANFYTMJLVIQEMPLUEZTSSKEIWOSPKARMCFIUWFEJOGKWAUYZQHXMHWMYRCSOBNZJFIBJOERLZEKWZEXHZFRTZETXKBIBQMGJUWX");
    msg.predicate.assign("KZUVKTAAUESPDLIQJPZNWNYJWTXGCLHOIMSFRWRGEDLMCJZZJMDFUDOINQEYZVILICXHEYJKGQBRVOMYOGQFYYGKLGWZLFWAWWVOFDJWXOTMAVJYEPTLXPQESFEBOJXHHVTPIINS");

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
    msg.setTimeStamp(0.08785086461027802);
    msg.setSource(50263U);
    msg.setSourceEntity(252U);
    msg.setDestination(59775U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("EMFXBDGTUYCPKZAGOBVZOZZRVRLXCUTQMGOQKJKOTHMEPICFRBGYTUCYPPVT");
    msg.predicate.assign("QOKYCMFCGMTIVCIJBHVQVH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FBWRVTFSQPHFMBTCOBHWZVRIAZMYQQJPVREZGHBIQDBCTEYVCJORNEHWTOZOVRXFHOVCRCBIDANAOEKJHAWVJUIXBPXUTTWFJHBZMSMULZUGJPSPUKVDFN");
    tmp_msg_0.attr_type = 215U;
    tmp_msg_0.min.assign("NDENHGVNOEYFLNAMUJZJWTAUTVXOXIJXZYTS");
    tmp_msg_0.max.assign("ADZTQDOCVLWCMOEXTOZVFOELJGGGDYBTNSARXFLKTHBZGR");
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
    msg.setTimeStamp(0.004442614278081569);
    msg.setSource(54596U);
    msg.setSourceEntity(193U);
    msg.setDestination(26161U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("ZEUWBONYZZBMGOSEKTNHBBAXTIPJREBNJMWTUDNCYRJWOQSYBCXRUNOGCMNRECJVFQNXUPALKQIFHAVVIHOSVJTZXSJZXFGLLWFTKZDQYBOZLFTERXMIKRMVPEPILDOSYMKUEZYRLCDCXXCCHNFAGHQVURVTBFLDCHHYBJLUKAYKDHGIIFSWXSDEGTWLPUOOKVJQWVTZPPUALYNESHIEQDSMPFTAGOWQGMSHICJUMPFZRG");
    msg.predicate.assign("JMJDBXVGGNDQLXKWFSQAAENHFKSZILVZCCCKNBVLOHQMKSBALTJONCTIPESSGQOVCHUUYBWGUIAKCJFBSCADOJZTPYBRDQR");

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
    msg.setTimeStamp(0.40109446432639173);
    msg.setSource(59823U);
    msg.setSourceEntity(26U);
    msg.setDestination(39324U);
    msg.setDestinationEntity(30U);
    msg.reactor.assign("SJGXSWQRFSMSYTOSDZCZEYWOLMXVULCERFBOURICIWDKUJISCFFIYVIPIADGNBNOCZGODMBETUGRKAXKWMRASVFGNZPVBCTFRVKKCIYKUXXTHXLNFEHKNEEUQOJPVQVEMHKWYZYWVZFDNLPVMUSTGZLIWJGZXWUTHTYKLQFOMMHEVCCYULPRMXBFWWPBN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LHQYJXAIOUINLUIWFVZIWNMORPZMWYKVFIRVWPWACTZXYOHZESTMHRMIDADHQAMWTXBYLWLZTPREEDYAXLQJTNZRHCQEHCZMJKLGWJOHIZSGGRMMCTYBFYBGVGGQDS");
    tmp_msg_0.predicate.assign("CILOCHSLTWVFYQAZDKMJKUVLKYBWPSUJICNACSRIMHMNNUAKBBRIISHQQJZVRSGFPRTNHXZVYWAWFAHLTZIYFCVAOGEQYBZSPGBMGRDERPRJLTOVWFPCJONZLQGYIZEDEVQKNWMECYMTOYGNGKBSFYCTNCHUXLBNOGDGTHEOFDVAEILRPPAXJJOWTJAMYHJSLJMSLZQXKHDFUUSZBIOIVQUKUUXXW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZQXQRPQDENLZZQEJUEQILNJDJVOPEPUDJGOROXWYCKMPVFTPOEZDKMLHFRFBSYXOTXJKFCSWYBJMKZKABDZWLMIFNAUAMRLSRDPPABLFTLIMCBTEOJHWLHGXQSTFPNWVZGFRLITSWYHVSDHAYNUXV");
    tmp_tmp_msg_0_0.attr_type = 97U;
    tmp_tmp_msg_0_0.min.assign("ENDQRZGXLCITFZFCWXDKZWOBXDTUHVPDTRQDKGOXVRPEPHLUVUUKGYNRYBWCRUQYNTUXFUEQMJYWRCDJBIHOISJBZSUTOHUXNXQGMERKGSESZBJNCPXWJWEABVBMTHMJKDMZSSHFWJGLAKAMBEOVFSYPZQDMZCLVBJAOATHFLLNKDTWMPHOZAEFLTWFXSNIJFCELPGMAQCJKHLLGFIRPPY");
    tmp_tmp_msg_0_0.max.assign("XTUYAKDSEHJLPTVEVDNUSERCDHRZBSGMPIWHMYAHWJGRBLDGCWUUSZUKIYELTYJVDCOFEROQTRRHNRFUVSMQCKPTATQZDLAHDIAINVBWEYSSJDOFLMXFFUWIDLFTZZXYKCMQKZNYJBTGGBNLOHZNQZIREXJCYBBXWRWJWPQOLOEYOPIOKSNVXBQNCPMOGCCIQVMBUKMKPX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.15205665738101337);
    msg.setSource(45466U);
    msg.setSourceEntity(253U);
    msg.setDestination(35413U);
    msg.setDestinationEntity(155U);
    msg.reactor.assign("XOVJHQCXTODAYAREOJVPUAPQKJGUKNNMZAHEHMXEWBOPVPBIZEKEKZKVAIWDEJIZWBYISJBLWNWCAGSTPCNSUREXTRTYJBHQIPRIYOFNZTHCGDPMEPVLFMQFMMLSHRSFACQKFVPTJZBIOUJGSVUXRBRGHZYAYTCEMWSXCTUZDFJRKGKMPVOCLWEWYRZTWLDWQNZQUGLDYNS");

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
    msg.setTimeStamp(0.4728921627685443);
    msg.setSource(2640U);
    msg.setSourceEntity(3U);
    msg.setDestination(9252U);
    msg.setDestinationEntity(196U);
    msg.reactor.assign("AQANBRSRGDXVOZVGJUWOAXXGBCTZVIMUHBZRCEKDSDNYPIWAPYHLHFKQVDXPNKBDFPFLMSARHJXORCNAPBCZCFICXLMJLYTOMOJTRQIAQYQUVMZYLYUSDTCFEXQPPEGJOGWVGMDIE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CTEDHEWMITWHTOKTEJB");
    tmp_msg_0.predicate.assign("SSNXNPWCECRPVKKBWJGFGGQEQZRJRAOIFRALFEZTHHBPDFZDVGXANIDOHYNLULFVCMLJSYIRGIAYYXTFVDVIIMWPMLBKXWPVDQUVPJRVMEMNPUMEHAOKZNKPOGWAXDSKETFGYQ");
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
    msg.setTimeStamp(0.10810444800193109);
    msg.setSource(28360U);
    msg.setSourceEntity(244U);
    msg.setDestination(28288U);
    msg.setDestinationEntity(228U);
    msg.topic.assign("HTSBJYCCIFXOIAGXFWVIARHAAJDZBCWTCOROZKKJBBSUHJETQTTAQPKWAHJMJSVCCINPDUMLSZIZMENRSOQMHGHYFGLJVZNVHSMHBEMSLGOWCGVEMVNYUVXUNRVYCGWXEFOOESUOOFFKSLDYYZYPLKQNKIAPKTWWEHYBQRXGLQWDQKNNNOUMPZLXYZMXIWUFWPRJUEDNDTPIIVGBCSREKDJPVRBATGPDXXBZARGYMTTALDQBQCUZHIJFX");
    msg.data.assign("WZHMMQYEULZFKQMDGMSRHGEBVPVPTFTJWNXYZTREAZLCHZFJDXCQQJBTOKGUYVXDPEHRKBAUOKRLMHJHIPYGHTRGLYFLCKIZCQINCITWQVSOLDPRFLREVXNGOWJTQQLCAFAVCQGVHQTAOBZGBFSGYWIJGLZBAITDNZAPEXNDCPPXBJMVSURDSEHUOMIIKYWYEAOYUOBBKKNUNPLXXYWFWEDNWPVO");

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
    msg.setTimeStamp(0.5665079402263279);
    msg.setSource(16975U);
    msg.setSourceEntity(230U);
    msg.setDestination(5825U);
    msg.setDestinationEntity(82U);
    msg.topic.assign("WWFQNYJVGGMWTFNJAWOKJCUXKAJCZICEZZKRFQQHDPGCZHSMHQNPRFLBMMWDBVYNQQJOZHZWGJUARMMEPTEUGVPFGIRYPTAICRFPHFWKUFMNXOQIICALOWBJVPHSNUREYSJSODSXOBTXQXL");
    msg.data.assign("AONDFKZUCAJPLVNWDZEVELPHXBEBSXDNZHMXKVINRIQZVRKFAYKC");

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
    msg.setTimeStamp(0.50277001842237);
    msg.setSource(17917U);
    msg.setSourceEntity(54U);
    msg.setDestination(57114U);
    msg.setDestinationEntity(197U);
    msg.topic.assign("GBICEFVMQJLIUUKCPRTPDAIXBBOHZTFSCAMWVRNNOBIMMTUMLAKCWNTBFFXSAAJHYDMIZJJFHYDXRBBEUKTOPX");
    msg.data.assign("RBZAUKNWEDIRMSBNLCEJVFWRWBISSZJEANHYXVPJUPGMIBRZZUKCXMGRSUFEVKZPOXRVXXTHAEGWDGXWYWJODKDXMDSBWMZLDETHQHMHKILFAJBNAPZLQIGHSEILUKHCOLXYJBUUAQMTYPYPKYKAVNCZNYBRCJOAPGHTXULFVRJUYGJDLGDTFTPOKQNCEXQBDEWBCPLTGMWHCLWRCIOQTIYOAFZVSMQ");

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
    msg.setTimeStamp(0.8735890125195735);
    msg.setSource(3264U);
    msg.setSourceEntity(79U);
    msg.setDestination(60326U);
    msg.setDestinationEntity(10U);
    msg.frameid = 101U;
    const char tmp_msg_0[] = {-54, -97, 73, 29, 9, 41, -113, -110, 76, -63, 103, -128, -103, 123, 116, -38, -90, 10, -34, 17, -83, 106, -79, -74, -70, -87, 102, -101, -72, -98, -117, 124, 51, -114, -126, -30, -27, -42, -51, 89, 8, 12, 42, 19, -7, 22, 16, 114, -43, -96, 93, 18, 57, 109, 75, -45, 102, 118, 100, -67, 50, -89, -90, 86, -15, -37, 22, 68, -9, -86, 6, 44, 43};
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
    msg.setTimeStamp(0.8773296768668734);
    msg.setSource(24492U);
    msg.setSourceEntity(168U);
    msg.setDestination(40989U);
    msg.setDestinationEntity(219U);
    msg.frameid = 138U;
    const char tmp_msg_0[] = {120, -73, -114, -34, 100, 67, 59, 32, -126, 38, 5, -81, 126, 78, 114, 71, -49, -26, 19, 41, -38, -17, -39, -33, 113, -107, 41, -78, 13, -60, 23, -84, -37, -111, -98, -57, -3, 122, -125, 14};
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
    msg.setTimeStamp(0.7935825477329137);
    msg.setSource(42751U);
    msg.setSourceEntity(8U);
    msg.setDestination(62049U);
    msg.setDestinationEntity(159U);
    msg.frameid = 19U;
    const char tmp_msg_0[] = {13, 16, 32, 31, 80, -6, 33, 5, -42, -91, 110, 23, -125, -88, -17, 9, -93, 2, -74, 27, -117, -89, -49, 44, 100, 19, -64, 46, -94, 71, 74, -30, 36, -67, -104, -67, 94, -10, -127, 95, -48, -80, -21, -122, -99, 4, 34, 99, 76, -64, 69, 24, -9, -94, 89, 7, 82, 19, -91, -111, -112, -74, -12, 45, -41, 42, 68, -85, 3, -9, 125, 97, -79, -86, -106, 89, 79, -50, -18, 123, -117, 89, 72, -60, -92, -25, -73, -98, 100, 64, -124, 92, 14, -110, -92, -71, -4, 112, 71, 93, 7, 116, -100, 97, 0, 95, 63, 89, 5, -88};
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
    msg.setTimeStamp(0.12562530345193046);
    msg.setSource(9570U);
    msg.setSourceEntity(132U);
    msg.setDestination(5986U);
    msg.setDestinationEntity(213U);
    msg.fps = 189U;
    msg.quality = 197U;
    msg.reps = 18U;
    msg.tsize = 120U;

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
    msg.setTimeStamp(0.3374076818146452);
    msg.setSource(34942U);
    msg.setSourceEntity(122U);
    msg.setDestination(33476U);
    msg.setDestinationEntity(52U);
    msg.fps = 53U;
    msg.quality = 146U;
    msg.reps = 118U;
    msg.tsize = 93U;

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
    msg.setTimeStamp(0.965672421458106);
    msg.setSource(19657U);
    msg.setSourceEntity(98U);
    msg.setDestination(28390U);
    msg.setDestinationEntity(134U);
    msg.fps = 220U;
    msg.quality = 73U;
    msg.reps = 128U;
    msg.tsize = 129U;

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
    msg.setTimeStamp(0.13333050882166186);
    msg.setSource(41282U);
    msg.setSourceEntity(96U);
    msg.setDestination(22741U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.5004064499595995;
    msg.lon = 0.001768365992817822;
    msg.depth = 68U;
    msg.speed = 0.16387211518960776;
    msg.psi = 0.5004889132069996;

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
    msg.setTimeStamp(0.02360082369348393);
    msg.setSource(4463U);
    msg.setSourceEntity(38U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.9874460195562993;
    msg.lon = 0.36989169365053876;
    msg.depth = 33U;
    msg.speed = 0.010083606799162315;
    msg.psi = 0.22151072849109943;

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
    msg.setTimeStamp(0.10290974140290687);
    msg.setSource(13334U);
    msg.setSourceEntity(62U);
    msg.setDestination(17762U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.899615394634653;
    msg.lon = 0.13401025282099877;
    msg.depth = 15U;
    msg.speed = 0.6850307130922048;
    msg.psi = 0.25919041851281777;

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
    msg.setTimeStamp(0.4711550199650849);
    msg.setSource(12305U);
    msg.setSourceEntity(183U);
    msg.setDestination(41177U);
    msg.setDestinationEntity(118U);
    msg.label.assign("LFXJIWOTEFCTVAZRYRZFYUUJVNICZCURVJGUARYYMNHSVUBMOQTJSZVGAFDGGXJYJDWWKWIIIALDNAMGUSZORFLS");
    msg.lat = 0.19311266860555465;
    msg.lon = 0.8771672201534325;
    msg.z = 0.7117792751460866;
    msg.z_units = 53U;
    msg.cog = 0.6903131251531408;
    msg.sog = 0.6575187235567629;

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
    msg.setTimeStamp(0.9785698385320469);
    msg.setSource(11591U);
    msg.setSourceEntity(182U);
    msg.setDestination(17947U);
    msg.setDestinationEntity(241U);
    msg.label.assign("CLNUFEOOKVDYAWOJEFPBURDWDDLFYAFNIDNOKIBRSTQPUMDQRTEKABTCVEZISRZDXSCNTDYWSAHZYVGZRJGTJGQYQFQGCACJIREAEEIBOC");
    msg.lat = 0.6826638328740706;
    msg.lon = 0.0477539804964392;
    msg.z = 0.7215676548707884;
    msg.z_units = 159U;
    msg.cog = 0.0287399096694263;
    msg.sog = 0.48200985437449095;

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
    msg.setTimeStamp(0.5660611426711267);
    msg.setSource(34271U);
    msg.setSourceEntity(38U);
    msg.setDestination(18700U);
    msg.setDestinationEntity(11U);
    msg.label.assign("GHJMRKCBCDTGFYFPZAEWCWKTSJJEUVPCPFPXUJPCHBLKLBCEZLVYEQXFVWAQPSOEGIDTNKAQHXHDEKTWPB");
    msg.lat = 0.7856188787829447;
    msg.lon = 0.36871304046799225;
    msg.z = 0.8943397889014256;
    msg.z_units = 218U;
    msg.cog = 0.5198995988457277;
    msg.sog = 0.09454591194321482;

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
    msg.setTimeStamp(0.6638095115051178);
    msg.setSource(44727U);
    msg.setSourceEntity(133U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(200U);
    msg.name.assign("MQJPTOPEJLJRUPWODVGWMMZUWLHQNXFJURXRHEYVYBXIVHEWTFAUHXNUHMTCXWFJRYRSGASQKXCYXOTFZIHAVSBFQBSZHCQOEBJLFGITTYPFCZEKMJKKBKMOMDAAKZWQPBJSKMZWAUNGNCTYPGXNSDSRHAZCBKDZVNMLNGRVDQDVYRIPX");
    msg.value.assign("EFWJMCVNBYYTJGJPAIBJHBRRIHXRAXUIQAOBMWGHWPOSZFRFLEKNYUVPOWFFXHZEGSRCMDXLWGXTPELLSHYAJOPBGCOXQWCMDNEZCRLXRXASNNKB");

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
    msg.setTimeStamp(0.17915614550484427);
    msg.setSource(58131U);
    msg.setSourceEntity(127U);
    msg.setDestination(28372U);
    msg.setDestinationEntity(2U);
    msg.name.assign("MPQQGCKXLPEQSFQOUNBYBYPLDEJZSKAMOVIYOJEABQPSCUSIIZGWNOSXIAZUYNZDTFVGIFWWJLWJFJFCRXWXHCGDGJHALKVXXLYMREVVDTRWQBSKRDJJJCTXRYDSRSADUVETLKQNQQFWCOHNRIFEUICBWGFAUMBOZHIAWGTXBYZYPTVWFEMXTOOMTCNEDSNAKOLVFJHHYYGRCDMZLBGCZNLX");
    msg.value.assign("NBPJCPGGYJAFRUBSMVNDNRMTDQWDIESLUSYALOKXADAJUTAFPQS");

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
    msg.setTimeStamp(0.8210570683156894);
    msg.setSource(48577U);
    msg.setSourceEntity(24U);
    msg.setDestination(14974U);
    msg.setDestinationEntity(195U);
    msg.name.assign("KWGIQRQKYOZIEKSVAMRZXHQPTWRNNUHZYGPNCFHQKFSIPBYIJECNQPBAYXKGFIFOYRHDBMLRIKDWCQGVNWVSDSWNAVCXJHCXCWMSGTIAUFUQZHKVDOUEPSFVRJYYENMQBRVABAYPCUCPAUPSKPGOEWWIZZLFJDSLZXDGZWQGZNRWMUTPVAH");
    msg.value.assign("NHXVFGCLTKPEFLLRBHUHSNLWSCIJJABYUKPNIOMBQGCEGDV");

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
    msg.setTimeStamp(0.5469927879283247);
    msg.setSource(61203U);
    msg.setSourceEntity(175U);
    msg.setDestination(59203U);
    msg.setDestinationEntity(185U);
    msg.name.assign("PFZXOPNRXUEWMCJHVVOQBIIIUBUVRIOKTBXEGBWTCENIVMQSVBMHTHPYQWMMGHNQESFZRRKMYNBOVNDCFUPEJGDIVFQYPYZGSAGQPKUSENGRJKRDKNWCXHRIFILJZLCGEIHUQLHPIKRMJWOADAWCUSADQZAHNOKUCTNTBYKAJGAOBRMKPTZSWMZCXDSBJTFAUAALLCU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MAVZEKFJLWOANHNUPHRCXATFZSWJNQRXUPSGFVBALLCJQKCBDRGQDUOJOWMSPEDYWHYMTLFIGIYISLDYFVIVJSHBRXZXTIKNZASLZMKJEJRFFJNLXUAVMWITCPKXPFQUAREOBBVPHBKYMKOLAQMHBDEUGIGGDKXXEQOOCBBWDTWZOAFBHUZHJPGZZRE");
    tmp_msg_0.value.assign("YTVAFQHLUUSZPMRDJJVHGBCRVHSQMNTOKIEVIJAIHHXBSKRQUTIGKNLFWNKIYLIDJCRZALFZEQPVZMGCADHTGQWUADSQVWUSNTBWJNZJUFTARPNFXXUVZBPIBRBGHLLDCKQOGBGCGTPHLQWFTXEENO");
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
    msg.setTimeStamp(0.3973802024828975);
    msg.setSource(8433U);
    msg.setSourceEntity(238U);
    msg.setDestination(6810U);
    msg.setDestinationEntity(49U);
    msg.name.assign("EAOETGRZYSVQRFKRKXOGHBQTNNVPDCNWVEITBHEHQFVKVKTTCUHFYCIPEVYDAWLOZZULSPBALOFZVISIQXMJWHFQIJKUZMGGROCZXDAFNST");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BTXLEJWSEEMZAYTLPCVITWEHYFGTCEFHNJCHKXVHMFDAQLUCBNQKODVTINIWQVPKBQMSKDVBGKZTSHAHODBMQXRUUALDQMBIMFDOJQRRLAPAAZEDCZQREPTRIYZSOAZURUNOYHWPKXIBCQZYRTWJYCQPKCLBNGJFWXZSONGOILEWFTRHVRZJUMJINJABNPGCLVPMYHXRABKDWEMNMSE");
    tmp_msg_0.value.assign("OSAAHKFLRJMEFHXOUDPZGULW");
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
    msg.setTimeStamp(0.627541952498843);
    msg.setSource(60301U);
    msg.setSourceEntity(107U);
    msg.setDestination(23586U);
    msg.setDestinationEntity(30U);
    msg.name.assign("HTUXYNAMBWFDCVWNPKYXOFCOLIZXBIGCTQPVSVAKHRFGJJREIEQYYTAVZIHFNULGOEELXDLZIEMVIGHRTARKFTPKVYQSGZBNUNEZIHQODOYFUFNYVSOPEMLPFAAQBBOEPMIJSMGWGMOUJGJUHSRKY");

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
    msg.setTimeStamp(0.3888897403913145);
    msg.setSource(10918U);
    msg.setSourceEntity(118U);
    msg.setDestination(13883U);
    msg.setDestinationEntity(246U);
    msg.name.assign("HDVTIQFCRUWFCQPBUESGCALDIWNOBHATNZVSALIYURPALCHXOWPBZHTMWNJKOCOEAYFTVYGMTIDJQJOFULJHRHLEVQKVRVZRSVGGVGBRKGEOHMNCAEYKHJKMRZUMQMXNSFX");
    msg.visibility.assign("XIBVGOEYKWXBUJHTJQRGETKNKENWTURSCACYHPFOGNADISFIQIPJSXRUVPKAGONBSMDJHACAKQLOAVYGWKLIDULHNYNHTKRWKQCZYYYRDQILCOWXVQTCNIZEZDUVFFUJJDQAWCUXNPBPBFYWEGWBTOMFCYZSIWXVMSZALDXGSVLGPZO");
    msg.scope.assign("YXWLYVOWEGGQLFEFXICUQBIJWDPOUNSMMYIVEAHICAARVXHEHZSUKPBTKBDARCWJQZFPVLTPKTYEBGGVTVNCCCPFQXPCUSIFOSLWHNQHTLHEDMJHZVJMBSKGEFTKMGDSTPMKZOEYFVTOIGEAKUYDYDJBJRTAQTYCLKBWNFJNNNQONJMASBFJWCHXILMPRGZIUYKZYRZXZAWURRXPRLONOSAWIUHOXXVRSDDBMAOIDWUZPXQ");

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
    msg.setTimeStamp(0.24138299269574837);
    msg.setSource(24884U);
    msg.setSourceEntity(2U);
    msg.setDestination(6093U);
    msg.setDestinationEntity(102U);
    msg.name.assign("OMHPCKDNANIMZXAXDYXVTWQLFDVPEHWJAPQGBFIJGKZSRDTPWRIJYCAAOXLQIROTXXTMICEGEGRJWYZUBBIHPSE");
    msg.visibility.assign("EHYQPXWBGNLTLQMCJMLSDEITXUOFIXWSGSZKHCUBYLCDAOWOHXUDSAQZQOWNRMSNDGNFQZEMTPZXUHHPMQPDGFFKCPFDWEMNNDSZMCUTIFPIOFTYVVARHUVPAROKARGTAIBDWGROJQVABXJYKFRJOVVOLUSTKXNXATQEKFTNL");
    msg.scope.assign("JAMTJOAKIKFHXCFYZEZFBDPIFVLAURYGJTTRQLSVRSWMBEJDHXIQKIHTBDFAVVGOJQZBAOJNXZZFPKYEVZOBLPXGKSDALKMPHKOLJVYBKPUJASVTFCKZWDTBQSEIYWEAEEVGHTUGOTDYZSVMNNPWLRQUNXPCVAODCNHQRFDLRMWMCMZIOCGYUFWNYYGLTRGCWSSBM");

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
    msg.setTimeStamp(0.5899350507005506);
    msg.setSource(40292U);
    msg.setSourceEntity(107U);
    msg.setDestination(5815U);
    msg.setDestinationEntity(221U);
    msg.name.assign("TNVIGTEFBRZILUYDJDTDQAPOSILHJNOZHXOWRESCNKPHFJIYHYZFRSEVPCRAQEPOKIOOOMCMYAMTEFVCHHAFKVEQBXCRZWWKFDQVDUBKKOVMHMVZXPLLAWGBGSORKACSHXQGRZQHRVEMXFWUEXNZBYAWCNPTTSMNIDD");
    msg.visibility.assign("UAHHWZGWYIJNDAMECUABSQTNDWWCYPFHIFBFEGZUIECSCOKMLVKAZOXVVXKOZVQLFUQPTZYNDZOTSSNWQEKPWHGJQRWRUWXFSCTPYRDOHXNNHTYJVGZAEAGLHDFVWDAXTBFXTRBKVEMBEGMHMBFXGJAGUUCCQJIHLRCSTURYGQVJDDLMMIQXZWM");
    msg.scope.assign("ZWSXGLSTDDBCZJYBZROILLIEEWCVDQSRUEM");

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
    msg.setTimeStamp(0.8322538746512509);
    msg.setSource(62145U);
    msg.setSourceEntity(126U);
    msg.setDestination(22213U);
    msg.setDestinationEntity(16U);
    msg.name.assign("VSQYRSDKJPNAUATDAUTAYRFOPBZUYILLKTNHDSPQRFBTWIOLBOMEEGPEDXDLGEZBNJDWUFQNMIEBGSVGWVCIRYEORLIQICSVKCHSJAJVFEKPOOCUOJGPREFRMMNQNOQXXWUGPVDXLLCSINJTGDJQLICRHZYRCYHBXZVHMKPVTXCKYZFQHIBSFHWRTVFNNJTXODBGBWAWQZKKIFMJZL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DBTXUQIFUERCLSKRHMZVNPTAFKWVCVVGCYORHVDRVLNBGSWTWIHAMITPNKSLGWTZUWJJSGJMMSNEQGJNQLOXTQYAGOQGAQULMBYCYQTGZQPUIICAUKLNJCMSEXBWWBLGFVNTAUEZWYDZXBFSZPRUKFRKPIYXVENVDETEWBZDXIJOMDEKVAQLRUYQ");
    tmp_msg_0.value.assign("TTQTGCKXVEZHFANDWIDHOZJVEZFNAPMABSRHIVBCLLHPGTBLLCOMYFWHOWOVFGKXMEMWXAKFZXSBDZSTXUUEHVSKRWVKGIHPKWPBWCFNXMZRHD");
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
    msg.setTimeStamp(0.2937477651765067);
    msg.setSource(45581U);
    msg.setSourceEntity(192U);
    msg.setDestination(37357U);
    msg.setDestinationEntity(84U);
    msg.name.assign("TXRBNDMXVQOFCYTKKLTWXCHSJFOTJLLJVLFKYHHDRABBNJCGQTEGFKAUKOPSNBGUVESDXQJWZHXQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CNGXKBWMTLSOAXQVZFYYYRRUZBPDSWSKZTUPEBJYLTPRQLLDSAOWSRQLBDHIXCBGIGEOZUHTVVITDSIAOUECWZJLDMRJVHZFQVDTJXKRIZNVXJYSB");
    tmp_msg_0.value.assign("KGBYYQNHTULGZMGHBNDLESUQBYJSFFHSEPOWUDVGAYIJECQBJHUTLDDLFICWCKOYMYXHWOWDJQMAXTBYKHVYCTYZYHOKPDBEEKAGZ");
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
    msg.setTimeStamp(0.9167289511323182);
    msg.setSource(32476U);
    msg.setSourceEntity(226U);
    msg.setDestination(32277U);
    msg.setDestinationEntity(74U);
    msg.name.assign("CXNGSPYHQNGDLLYCNMSQGZJFSRLWIAIBSERWJPALQEOAMWPEGBICYMWMEHBMYSJXSGBYDLDLEPMGEBQVQEGZHYNNRXJVDKVBUHFRJWKOKQUWAIVVUPSUMPFKTGRAZPJOGFCCCMLWXORUTTJGZNOOSJTLJUFQYRZHBONKAIAIHMIRDZIOTCUEIEFPWMKSDDOYVTPEFFLHTKSUHDBKNDUZVXAFTVKRXYBALNWTXCCQQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TTDFUEETUDELASOUMUZRWYZURHDFVWDFOWTEZJSHGHNXZYLBMGKXFXCLRBIPKQGHAJRYKQYMAVFJFLSVNJBCYGAIBWMCHOUPLHIUIEGTQEATXCSTLENORRJFBJA");
    tmp_msg_0.value.assign("SQXXVXYUCJQEOYROKOBZYDIIHBPOSMKELLHPVLLPSZUFGEWAHBMDTBFNMYZOEJUA");
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
    msg.setTimeStamp(0.36459337595899677);
    msg.setSource(63230U);
    msg.setSourceEntity(190U);
    msg.setDestination(19429U);
    msg.setDestinationEntity(64U);
    msg.name.assign("QEIKVFNFTUAQUWVYYCQUYNNBXHPZUEMURUQMIXWJDBSOLKSGVYRPOYTPJRIRSELZFCOHQFVUDMDVUACMGSQKIJVODUHXHPMMTBYBKWQJHAKWIEPWIQRJMIJWEABFRDEKXGSBDAKWOFJCOTMKPKGLNYBHGXTFOLERFCOMXLQUAYHBDDKWITEXJALRHGBASXPLXWZVAFNDHDGGPETZJAQJNCGCTBTCLZWVMCLGELNOYNNHRSZFPSYOIZ");

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
    msg.setTimeStamp(0.4967518251532135);
    msg.setSource(44662U);
    msg.setSourceEntity(253U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(249U);
    msg.name.assign("AKMHGVXNZUYVNNTUENDUYMVXXQISQFXPOXTXJNWHSCKQOZILJDOEGFYAQCBWNCQYHJBTCXWYLMWZNQFIGTTHMRDRVDHUETTNMZGPGNRGEARVNQKDBSOUOZKADBSSRKSFIDRAFTUVMZMEBZKCYLQLULIPBRSVGAMECQXPGFIEGHLLCXBHWPTCZWPHMWVFJIWQOJO");

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
    msg.setTimeStamp(0.4470087184156979);
    msg.setSource(50001U);
    msg.setSourceEntity(71U);
    msg.setDestination(45107U);
    msg.setDestinationEntity(233U);
    msg.name.assign("ZWCAAVEXDBROBSH");

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
    msg.setTimeStamp(0.8580938918643455);
    msg.setSource(25688U);
    msg.setSourceEntity(240U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(238U);
    msg.timeout = 2978017758U;

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
    msg.setTimeStamp(0.9456114194194555);
    msg.setSource(219U);
    msg.setSourceEntity(173U);
    msg.setDestination(58801U);
    msg.setDestinationEntity(134U);
    msg.timeout = 3380211049U;

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
    msg.setTimeStamp(0.9927335248150613);
    msg.setSource(62014U);
    msg.setSourceEntity(242U);
    msg.setDestination(56644U);
    msg.setDestinationEntity(54U);
    msg.timeout = 1261529778U;

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
    msg.setTimeStamp(0.29280787284076315);
    msg.setSource(24028U);
    msg.setSourceEntity(84U);
    msg.setDestination(37904U);
    msg.setDestinationEntity(150U);
    msg.sessid = 3862049710U;

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
    msg.setTimeStamp(0.1933422931488673);
    msg.setSource(17558U);
    msg.setSourceEntity(36U);
    msg.setDestination(17087U);
    msg.setDestinationEntity(18U);
    msg.sessid = 219125681U;

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
    msg.setTimeStamp(0.39304286156689117);
    msg.setSource(21178U);
    msg.setSourceEntity(94U);
    msg.setDestination(41116U);
    msg.setDestinationEntity(203U);
    msg.sessid = 3217856301U;

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
    msg.setTimeStamp(0.6413637291557077);
    msg.setSource(53085U);
    msg.setSourceEntity(174U);
    msg.setDestination(32720U);
    msg.setDestinationEntity(150U);
    msg.sessid = 3670162649U;
    msg.messages.assign("MUGOHADBMMFUSAEWXDNOAJNPGPANWPBFVFZZZWVPGKRDQBLRTJXJCABIYNKVJOAITTQTVVZDMTOEVSLGXFNYBMGEKYYKJSGUZCAWWXDCCLPYBUMZAXYQMEIBLHISDOWSKQIEEYWGIBCSGHMTSNPFJLRBQUMECYRKRAXUHOMCICFIFZQPVJDNRQZSHPWYHEGLZDQHWRIXHFECLNXD");

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
    msg.setTimeStamp(0.18088015050557094);
    msg.setSource(13375U);
    msg.setSourceEntity(148U);
    msg.setDestination(57104U);
    msg.setDestinationEntity(19U);
    msg.sessid = 2637402374U;
    msg.messages.assign("QCNSAMRWYQHNRFAHLPYQBKVKRWHWLXSIXMCBIJBQZSIQLTEWSPBUXDVXZDSGZNJZRVOZJTNUWXDCXABDDGVACVHAVPLRYMEPQJNYEBKUIOVRKAXJMQWOFKUCIFGPJPEJVYHA");

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
    msg.setTimeStamp(0.1883778587395959);
    msg.setSource(60535U);
    msg.setSourceEntity(230U);
    msg.setDestination(321U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1887720528U;
    msg.messages.assign("TFHYXFARNTVPIFBAAVXDUMJONJCECHFCKSDTKGNXLMZYKWZOPDOWTFKTOMSCZJEGVPLSXHJCXDRCQRDAHATUEMWZUTDOIUVPJQXUOEYRSWURLCQEUQYSIYJMOLIKAEBYGYCLSQLLFBOVMDWEVUYFNKLQPAPLWJ");

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
    msg.setTimeStamp(0.9009625910934073);
    msg.setSource(64224U);
    msg.setSourceEntity(171U);
    msg.setDestination(17169U);
    msg.setDestinationEntity(34U);
    msg.sessid = 4248577439U;

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
    msg.setTimeStamp(0.3445440638276329);
    msg.setSource(44539U);
    msg.setSourceEntity(5U);
    msg.setDestination(47989U);
    msg.setDestinationEntity(253U);
    msg.sessid = 3565041375U;

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
    msg.setTimeStamp(0.9127084991757245);
    msg.setSource(30387U);
    msg.setSourceEntity(62U);
    msg.setDestination(11936U);
    msg.setDestinationEntity(161U);
    msg.sessid = 1316353884U;

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
    msg.setTimeStamp(0.7372324100093105);
    msg.setSource(48035U);
    msg.setSourceEntity(205U);
    msg.setDestination(44036U);
    msg.setDestinationEntity(225U);
    msg.sessid = 27055264U;
    msg.status = 120U;

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
    msg.setTimeStamp(0.507375387166456);
    msg.setSource(57159U);
    msg.setSourceEntity(11U);
    msg.setDestination(38093U);
    msg.setDestinationEntity(45U);
    msg.sessid = 1606820855U;
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
    msg.setTimeStamp(0.5336347957428309);
    msg.setSource(44242U);
    msg.setSourceEntity(80U);
    msg.setDestination(5347U);
    msg.setDestinationEntity(34U);
    msg.sessid = 3930866406U;
    msg.status = 99U;

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
    msg.setTimeStamp(0.14784661395172205);
    msg.setSource(11045U);
    msg.setSourceEntity(96U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(147U);
    msg.name.assign("WGUPYSMTXOQWKQBDXPYLJKEIHRGOYBUGSFJFNORVCWHUFRWEOQTKHINMJWCFZZUKZWPFJFRSMTQAOIICSMCRPLPHBPKSUJORCFPBLNDALMZRLTKCPIHHRVOVDOHVLEVUJUCXKZNINMGIYELTHQEXNNMESEEQBSVUZFHEJIULBYYDMWKSXDXAAZWPUQTBAQHFAACYJLLQTZXIYRAXOAKCGBVPWMY");

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
    msg.setTimeStamp(0.5896313367909911);
    msg.setSource(31515U);
    msg.setSourceEntity(143U);
    msg.setDestination(60304U);
    msg.setDestinationEntity(92U);
    msg.name.assign("OLJHOTFRGZYNRHLQOBBKYQJWIDUPVIKVHVZEFKAJBWEDWADXUSTWIKRYJVBMHYDUXRUSNOZREZIQBGFHLFLCSMQAZACNWEGDUQOPFQZWPCOAPXCOFICNIVGDMBKTZLGBJGYHDWPTSOCPWAMBERPYKTCJSPDIVSRHTLKCEMJMUOECNDZZREYZQJHTEIXGNCXNMLRU");

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
    msg.setTimeStamp(0.5647424972286116);
    msg.setSource(12888U);
    msg.setSourceEntity(154U);
    msg.setDestination(3863U);
    msg.setDestinationEntity(129U);
    msg.name.assign("XVBYHWMUSVNJJUDCGOJIALHDVVUZIBFUZETLTVRHCVZNWQVURSZPFQRSATKYYZFGXMKPHGUTSREUSJKXIRSBCGYEPWFNWZBIPDVENBZJMGHSMASBDFWIOHXOTCKOQPHZWSQNDQEHSMYXDNPJLLKCAMTAMKBOQGLLAWBQDPABYIVKPYBPXXICNLACLVWTYI");

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
    msg.setTimeStamp(0.7348735984730379);
    msg.setSource(23115U);
    msg.setSourceEntity(118U);
    msg.setDestination(35928U);
    msg.setDestinationEntity(25U);
    msg.name.assign("IMWWHYCGQCBTKFCGCNGSJZYYPSBPEAEVJQLFBWQMCGISIMHDUJHZFQ");

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
    msg.setTimeStamp(0.8045149254506208);
    msg.setSource(2490U);
    msg.setSourceEntity(179U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(120U);
    msg.name.assign("ZUBGMWTLGLSXXRNZAEMNQXVDKZSFTERDUJHRLHJAUEDOPITQUSTNTPFQDBBCZXZIIFPMHWWGVOBUUNZTMQKVYFGN");

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
    msg.setTimeStamp(0.3170053586874162);
    msg.setSource(16866U);
    msg.setSourceEntity(26U);
    msg.setDestination(50360U);
    msg.setDestinationEntity(120U);
    msg.name.assign("ZNYJMKQYSGLTPGSYTWASAOCAAAPHZMXHHNUQTQOIRZDYDALIQEVVRFSFBTDJKEEKBHYXCBLACVCHBKUSRSCRMELDFYFLBTUHQNPVNYQNFABMEZBNIGYQBZJJTGMBPWKPODZOVSGLLMEWARMUOUSKIFEXWJVGKTPHGXVUWRPLHNXIOUTMIJIMWTEXEPOFUKDSVWGJHSZTUVFWINYQXRNZZGVDQLNKOACIYMRHFJCWJC");

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
    msg.setTimeStamp(0.9252656948806992);
    msg.setSource(15642U);
    msg.setSourceEntity(84U);
    msg.setDestination(42725U);
    msg.setDestinationEntity(114U);
    msg.type = 135U;
    msg.error.assign("OZVDYCNIFZFGFJWYSETCXDPYXQUSLMHMSQRDMEGBVKKDHZTAUPHJKBXIAJOXOOFNTPJVXESTGSCBJPZWUVOUJVZHBTVQPCEJCNYWMNEENSOWFV");

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
    msg.setTimeStamp(0.8326820679776517);
    msg.setSource(33570U);
    msg.setSourceEntity(241U);
    msg.setDestination(23850U);
    msg.setDestinationEntity(76U);
    msg.type = 195U;
    msg.error.assign("PONERMFSUKTRHNSYHKAKTWVHLKZAJCCQPROWKLIXDGTNWECCNMQDUYBTUK");

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
    msg.setTimeStamp(0.8181230038433619);
    msg.setSource(43384U);
    msg.setSourceEntity(56U);
    msg.setDestination(22944U);
    msg.setDestinationEntity(42U);
    msg.type = 183U;
    msg.error.assign("URSFGBFWSKHBXHXWHYCXZVOSGLKAPVIEHYCBODTCSNBLLPVNQCTTSXMLGIOJQWABMMEOQCJATCEMZQVQXZIFC");

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
    msg.setTimeStamp(0.10282672799260617);
    msg.setSource(56832U);
    msg.setSourceEntity(55U);
    msg.setDestination(22168U);
    msg.setDestinationEntity(169U);
    msg.seq = 46451U;
    msg.sys_dst.assign("UQLEMWICCCNKLPVJZFTXHCPGSLFBOTUKDSBJUOEWNNKMHUNZNZNJCGPKGTVAGHPYWAXXCJMNSDJBFILGYOJTXRZDRCCOXSWMGQBZYVFYDBIZDYCYMK");
    msg.flags = 106U;
    const char tmp_msg_0[] = {15, -99, -28, 108, 56, -4, 4, -124, 102, -46, -124, -1, 123, -113, -35, -110, 115, -123, -16, -50, 84, 42, -2, 56, 97, -44, 12, -111, 44, 84, 49, 71};
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
    msg.setTimeStamp(0.12291819382936764);
    msg.setSource(21928U);
    msg.setSourceEntity(111U);
    msg.setDestination(59822U);
    msg.setDestinationEntity(198U);
    msg.seq = 35559U;
    msg.sys_dst.assign("ZKAQPQJMTZWCIBWUZUWXKXEERUIHHMCKZFHAQTUKNKNIBUKJTSKTNCFDLOWMHGMRKEPBVSADRVHELQQFYGLGLGYRJUBJEKIINHOGTYYNAALCXPOZY");
    msg.flags = 20U;
    const char tmp_msg_0[] = {-27, -20, -85, -126, -60, 22, -103, -111, 109, 14, -123, 49, -16, -11, 21, -103, 50, 110, -68, -124, -45, -32, -94, -127, -102, 36, 60, -6, -99, 113, 67, 78, 58, -25, 2, -120, 1, 109, 109, 33, -27, -35, 18, -52, 12, 56, 43, -51, 80, -26, -26, 47, 66, 75, 124, 58, 55, 2, -58, -95, -29, -60, -41, -56, 75, 70, -30, 76, 80, 112, -67, 62, -38, -37, 19, 37, -108, -78, -106, 38, 46, -12, 5, 47, -4, -74, 98, -45, -27, 24, 96, 1, -118, 59, -120, 46, -115, 65, -64, 88, 41, -4, 118, 115, -24, -93, -108, 120, -76, -111, 99, -7, -79, 2, -79, -126, 112, -85, -63, 60, 86, -11, 75, -58, 75, -18, 69, -62, 24, -82, -71, -10, 29, -19, 36, -126, -65, -2, 37, -124, 69, -96, -46, 15, 0, 91, -51, 78, 82, 47, 100, -97, -21, 108, -1, -1, 103, 69, 94, 1, -31, 118, 53, 93, -21, -93, 119, 62, 58, 121, -108, -29, -29, 97, 5, 79, -19, 61, -40, -116, -125, 45, 72, 53, -55, 125, -32, 95, 64, -39, -21, 71, 81, -72, 76, 82, -103, 79, 11, 95, 56, -62, -33, -67, -118, 34, 102, -70, -127, 99};
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
    msg.setTimeStamp(0.01246400752966037);
    msg.setSource(47655U);
    msg.setSourceEntity(56U);
    msg.setDestination(46072U);
    msg.setDestinationEntity(205U);
    msg.seq = 63105U;
    msg.sys_dst.assign("GXDJRDYGBOVANOKTHIWQXAFTCIWARWPBDFIVLOIMCQXTEUDTMBFYEHJDMDYCHSINMSQGLGXHDORQLVPGLYUUCRRKEOOUFNCXZQOPZS");
    msg.flags = 203U;
    const char tmp_msg_0[] = {11, 46, -49, -56, 113, 15, -22, -63, -48, -51, -27, 110, 53, -24, 42, -4, -47, -9, -120, -100, -41, -109, -77, -110, -123, -114, -91, 118, 14};
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
    msg.setTimeStamp(0.616550725218831);
    msg.setSource(2660U);
    msg.setSourceEntity(252U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(71U);
    msg.sys_src.assign("BZRXYSNSFZRVJXXLMAMIYMZDOFINXAGETOKRXUIWRYUITOLUMEOWXAGLFGCYGSUKHXNGABPVQDYUNCHFUANBJPVWKVNTVJFLANZPVZAPQHIAPFCQGNVHWTWSWAJRDOVSTJXIPJRIHBYZKYOWNVHBOSHZHBHDCJKKPFPLEQGPEJUMXQ");
    msg.sys_dst.assign("JDPXMLBCUYLIRFFHSXYULUETRQXGZOAGDNOQPNJZKQZFFFOTHGWQYDZSSIBCQJASVDQKMNKYWUPYDSMHSLUWEENTPTHQPVKIETUJIABRWXJPPHVNXFSMKXTLXU");
    msg.flags = 252U;
    const char tmp_msg_0[] = {-13, 32, -79, -10, 103, -77, 10, 18, -8, -123, -118, -12, 21, -43, -81, -72, 73, 71, -85, -20, 20, 37, -68, 11, 93, -87, -86, -59, 68, -70, 114, 88, 46, 67, -40, 51, 34, 12, 31, 126, 78, -6, -65, 101, -66, 71, -40, -58, 39, -108, 113, -126, 101, 14, 74, -87, -16, 4, -123, 94, 79, -89, -121, 93, -30, -118, 23, -55, 119, 72, 71, -23, 80, -46, 5, -112, -28, -92, 87, 50, 122, 104, -98, 32, 28, -76, 38, -61, -87, 126, -22, 109, 100, -75, 113, -32, -26, 31, -53, 35, -111, 90, 7, -114, -2, 84, -18, 43, -43};
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
    msg.setTimeStamp(0.8636063545793907);
    msg.setSource(34004U);
    msg.setSourceEntity(222U);
    msg.setDestination(62037U);
    msg.setDestinationEntity(253U);
    msg.sys_src.assign("DZGPLFBNFAVHVTRSJRDDZKACUJBEIBKTVNBRBHPGOXHUYOFLZVYGWLHMEIPNAPFDISYGAJNGQEWSYKIWQVLLVYETITDZEWPLMFPNNPKYQREWKXHAYLWXTKPRHBYBTFUAUQXZSETCSGCJNJZOKYIMSGLEDQGDMRJKCAHXKKAHIFHQMXVWTOMVPBDDFGJQNSQM");
    msg.sys_dst.assign("GQBYTLZLSMEKMBEVUSK");
    msg.flags = 18U;
    const char tmp_msg_0[] = {-44, -87, 108, -44, 31, 19, 106, 89, 2, 78, -93, -117, 96, 51, 83, -27, -48, -95, -116, -112};
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
    msg.setTimeStamp(0.4140540373913052);
    msg.setSource(43223U);
    msg.setSourceEntity(191U);
    msg.setDestination(27371U);
    msg.setDestinationEntity(108U);
    msg.sys_src.assign("JCVRWAOHCOIOFNNNXVPLPMOXEVKWXZKJGBZSQBRYBRZFDCGOJWMIDBPATJMMEDAFGKPFUEVBJFJNCQTSYLUIUUTQTHWYNKWAWEZSNNWKJQLAYDOUCHEVNGHASOGBDNWEBFKCDYIETMDARLLTHBQVRHZSPV");
    msg.sys_dst.assign("HNMWILSCNVUMYNXWCJRAEJLSZVUBYIUWKGFDLFFHADURYDHIAKYHYJGNFBVOQELSITDEIUZKAELPSCHYPWNOFSTKKWYXTXAVQPMVKRXOCPXWDZERSRQBFIGQLJMZOJXABMDDCCEIDTMOEJLKOQDYGYMTPORZOVFCFKQQCTNSASUAULPEZB");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-48, -61, 101, -5, -35, -119, -3, 74, 87, -18, -126, -1, 123, -64, 55, 19, -67, -115, 89, 69, -98, -120, -78, -19, 14, 80, 4, -84, -49, 25, -69, 26, -18, -92, 123, -128, 117, 36, -40, 120, -100, 45, 47, -94, 5, -72, -80, -70, 66, -35, -44, -112, -35, 8, -128, -8};
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
    msg.setTimeStamp(0.44211153863163);
    msg.setSource(65026U);
    msg.setSourceEntity(218U);
    msg.setDestination(44111U);
    msg.setDestinationEntity(114U);
    msg.seq = 63605U;
    msg.value = 162U;
    msg.error.assign("YJDQZWLHVGFYZWDTQADDDGBHTNLEXOJBSWHMJJBRAOCUQLXRRHXINYIAMVWSVALUNDEMJPKEFJDIKQCMOWUQEDINAKUKPHAAIIPLFBAPXCKSFCDZSTMOFOUXKVSZQZUMBFYCPTTGKFGHOMZSOPFMNYBAETLKMVZFHXZRJSRGKYFWQYYJBWOCAYNUHLGNVENEBSCRTXTQOZGVESPJXREYWHGVBLBPWUICGTXUTEWLRNC");

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
    msg.setTimeStamp(0.9121958890184386);
    msg.setSource(26794U);
    msg.setSourceEntity(239U);
    msg.setDestination(4834U);
    msg.setDestinationEntity(250U);
    msg.seq = 49225U;
    msg.value = 237U;
    msg.error.assign("IZQLFYVGVTAVXSQFPNNOTFXERZIUSUCIW");

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
    msg.setTimeStamp(0.9695623124718347);
    msg.setSource(58337U);
    msg.setSourceEntity(58U);
    msg.setDestination(31658U);
    msg.setDestinationEntity(142U);
    msg.seq = 43413U;
    msg.value = 122U;
    msg.error.assign("DTIKTVTWQNWQHEKNUARVTIECWYOZZYCXTMNLSHUMDFRZJTPRKEJCROUGNXFNROVBIAFRZQAHUEKQZQPFXHDISVTCJPSFYGFHSZBRAXUEBVSYBZMFQEIBUBGZUYOKQ");

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
    msg.setTimeStamp(0.7252154079559388);
    msg.setSource(49685U);
    msg.setSourceEntity(152U);
    msg.setDestination(32371U);
    msg.setDestinationEntity(162U);
    msg.seq = 23260U;
    msg.sys.assign("FRDBQKLXRZUXBFZKECEIKLTWYDWWJIYCERDQWFIJYOHSCFTJVBENZYXTTALFSNQNTJVPDHQLBBBFMIZVGZIYSMAHKCUCPXPCYBYWUINLMOHHOUTMJRADTPNUSXEACQMDJNGD");
    msg.value = 0.4269461954422077;

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
    msg.setTimeStamp(0.8359457669888258);
    msg.setSource(53243U);
    msg.setSourceEntity(209U);
    msg.setDestination(58347U);
    msg.setDestinationEntity(35U);
    msg.seq = 12217U;
    msg.sys.assign("DWJXSDSWDUEJYVWYK");
    msg.value = 0.3417142947010128;

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
    msg.setTimeStamp(0.36604240263513554);
    msg.setSource(32395U);
    msg.setSourceEntity(116U);
    msg.setDestination(24033U);
    msg.setDestinationEntity(17U);
    msg.seq = 3553U;
    msg.sys.assign("WYECZNYKUIRCWTORAOMSWFWRJO");
    msg.value = 0.728550700482306;

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
    msg.setTimeStamp(0.17083761109263818);
    msg.setSource(31566U);
    msg.setSourceEntity(40U);
    msg.setDestination(14867U);
    msg.setDestinationEntity(99U);
    msg.seq = 13305U;
    msg.sys_dst.assign("YXCFDIFYNSWVRNEJWXTLSXCGCUKLNRHFJA");
    msg.timeout = 0.8989777676268085;

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
    msg.setTimeStamp(0.8095717223041824);
    msg.setSource(17247U);
    msg.setSourceEntity(115U);
    msg.setDestination(42794U);
    msg.setDestinationEntity(133U);
    msg.seq = 15973U;
    msg.sys_dst.assign("PPTAKWLCYGLJQGAQZCFQCPZYKHHSDJUKSWUYYANMMIMQORNNJXJVIWBEUTPVQKOSOSDMVFTZRJGBBBFBTSDVVHXTWQFBSAFHGMPQGHLVQXPBUFNECSLSMZTRNGLKXMIRHOOEBVGZCBFJICWUTNEMQKIYRXASOAZYOERBELXWUP");
    msg.timeout = 0.523835671828341;

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
    msg.setTimeStamp(0.01311872866831576);
    msg.setSource(26344U);
    msg.setSourceEntity(239U);
    msg.setDestination(26329U);
    msg.setDestinationEntity(181U);
    msg.seq = 11742U;
    msg.sys_dst.assign("HOZHUYKJOAQFUPGOIDQYIEMXZWHVUJSANSTYVAEFQCCGQFINTVTKPRZTYUPKCRDBFEDODTXSVGAZTSEJFZOZLLSNXQABQOGICCBHAURSLHYUGPQCMVCAPLVPPVSOWHAYVTJZNTLPXBEFCHNJBOTVFLORGKISNIOGIRJXJWWJLVEATIEUBDZ");
    msg.timeout = 0.7683457484974383;

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
    msg.setTimeStamp(0.24311748924186316);
    msg.setSource(38284U);
    msg.setSourceEntity(2U);
    msg.setDestination(13938U);
    msg.setDestinationEntity(66U);
    msg.action = 91U;
    msg.longain = 0.008723867771993188;
    msg.latgain = 0.9912195386621443;
    msg.bondthick = 1019209718U;
    msg.leadgain = 0.11877352903720895;
    msg.deconflgain = 0.669618898881318;

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
    msg.setTimeStamp(0.18930686226782456);
    msg.setSource(37327U);
    msg.setSourceEntity(12U);
    msg.setDestination(46861U);
    msg.setDestinationEntity(75U);
    msg.action = 83U;
    msg.longain = 0.3437050949842656;
    msg.latgain = 0.9627617449193322;
    msg.bondthick = 861683951U;
    msg.leadgain = 0.3772953156106402;
    msg.deconflgain = 0.9761868117009267;

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
    msg.setTimeStamp(0.49307299348589895);
    msg.setSource(53691U);
    msg.setSourceEntity(202U);
    msg.setDestination(44706U);
    msg.setDestinationEntity(15U);
    msg.action = 2U;
    msg.longain = 0.5963848456256485;
    msg.latgain = 0.1821365137994937;
    msg.bondthick = 2671492503U;
    msg.leadgain = 0.9438205527711826;
    msg.deconflgain = 0.1243829931015481;

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
    msg.setTimeStamp(0.45695068273265516);
    msg.setSource(20857U);
    msg.setSourceEntity(3U);
    msg.setDestination(21520U);
    msg.setDestinationEntity(190U);
    msg.err_mean = 0.518131110557049;
    msg.dist_min_abs = 0.3438587747052989;
    msg.dist_min_mean = 0.664937315470202;

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
    msg.setTimeStamp(0.5185042821387447);
    msg.setSource(56384U);
    msg.setSourceEntity(85U);
    msg.setDestination(63860U);
    msg.setDestinationEntity(157U);
    msg.err_mean = 0.5840892650500842;
    msg.dist_min_abs = 0.24961367037299964;
    msg.dist_min_mean = 0.5611318862583278;

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
    msg.setTimeStamp(0.0954485822276625);
    msg.setSource(754U);
    msg.setSourceEntity(86U);
    msg.setDestination(40171U);
    msg.setDestinationEntity(105U);
    msg.err_mean = 0.3044378906934476;
    msg.dist_min_abs = 0.7170453828915843;
    msg.dist_min_mean = 0.7947468178333476;

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
    msg.setTimeStamp(0.37998022183849733);
    msg.setSource(44858U);
    msg.setSourceEntity(143U);
    msg.setDestination(23910U);
    msg.setDestinationEntity(157U);
    msg.action = 13U;
    msg.lon_gain = 0.7616429193190114;
    msg.lat_gain = 0.0734835393069353;
    msg.bond_thick = 0.45096389427758654;
    msg.lead_gain = 0.5888728842101703;
    msg.deconfl_gain = 0.5487158881804549;
    msg.accel_switch_gain = 0.2216300233028743;
    msg.safe_dist = 0.4728663290725812;
    msg.deconflict_offset = 0.7557970755094509;
    msg.accel_safe_margin = 0.3412999215512895;
    msg.accel_lim_x = 0.5630907934573395;

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
    msg.setTimeStamp(0.6556717606131878);
    msg.setSource(42103U);
    msg.setSourceEntity(212U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(233U);
    msg.action = 198U;
    msg.lon_gain = 0.4486805279027778;
    msg.lat_gain = 0.36378982342598576;
    msg.bond_thick = 0.2179638432420723;
    msg.lead_gain = 0.4146464623577041;
    msg.deconfl_gain = 0.8727424129771878;
    msg.accel_switch_gain = 0.356646379308861;
    msg.safe_dist = 0.8175727449282149;
    msg.deconflict_offset = 0.7221765922284336;
    msg.accel_safe_margin = 0.3682319642757059;
    msg.accel_lim_x = 0.6486161680259721;

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
    msg.setTimeStamp(0.706082715210818);
    msg.setSource(27764U);
    msg.setSourceEntity(81U);
    msg.setDestination(60071U);
    msg.setDestinationEntity(74U);
    msg.action = 167U;
    msg.lon_gain = 0.4240230595413029;
    msg.lat_gain = 0.2851434337724358;
    msg.bond_thick = 0.6678924457625185;
    msg.lead_gain = 0.7865484891982688;
    msg.deconfl_gain = 0.6168519855636928;
    msg.accel_switch_gain = 0.6940378776715673;
    msg.safe_dist = 0.6734321576971796;
    msg.deconflict_offset = 0.8509764107387507;
    msg.accel_safe_margin = 0.5668164821241518;
    msg.accel_lim_x = 0.9755243142804008;

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
    msg.setTimeStamp(0.06561080773662364);
    msg.setSource(45829U);
    msg.setSourceEntity(133U);
    msg.setDestination(8677U);
    msg.setDestinationEntity(59U);
    msg.type = 60U;
    msg.op = 157U;
    msg.err_mean = 0.15996443495121182;
    msg.dist_min_abs = 0.35079495962635454;
    msg.dist_min_mean = 0.04352565584440937;
    msg.roll_rate_mean = 0.3910317722978225;
    msg.time = 0.2550113310886024;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 56U;
    tmp_msg_0.lon_gain = 0.7764612702064048;
    tmp_msg_0.lat_gain = 0.969350725853447;
    tmp_msg_0.bond_thick = 0.22268740513549679;
    tmp_msg_0.lead_gain = 0.7647182364182755;
    tmp_msg_0.deconfl_gain = 0.258480763918295;
    tmp_msg_0.accel_switch_gain = 0.6079655285969072;
    tmp_msg_0.safe_dist = 0.27115302662226715;
    tmp_msg_0.deconflict_offset = 0.005563308861968319;
    tmp_msg_0.accel_safe_margin = 0.35584641324064425;
    tmp_msg_0.accel_lim_x = 0.37050783983420366;
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
    msg.setTimeStamp(0.9665267914018949);
    msg.setSource(29738U);
    msg.setSourceEntity(57U);
    msg.setDestination(59251U);
    msg.setDestinationEntity(24U);
    msg.type = 4U;
    msg.op = 142U;
    msg.err_mean = 0.42189002040792933;
    msg.dist_min_abs = 0.27201540205927277;
    msg.dist_min_mean = 0.9114709530009989;
    msg.roll_rate_mean = 0.9023339916031009;
    msg.time = 0.08089862750199206;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 103U;
    tmp_msg_0.lon_gain = 0.14706135827821543;
    tmp_msg_0.lat_gain = 0.4650314790418092;
    tmp_msg_0.bond_thick = 0.31667204349003686;
    tmp_msg_0.lead_gain = 0.03063156525350985;
    tmp_msg_0.deconfl_gain = 0.3814516867771943;
    tmp_msg_0.accel_switch_gain = 0.8423152393427722;
    tmp_msg_0.safe_dist = 0.9302516279170813;
    tmp_msg_0.deconflict_offset = 0.27091002491247307;
    tmp_msg_0.accel_safe_margin = 0.5460027325037123;
    tmp_msg_0.accel_lim_x = 0.37741670076928013;
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
    msg.setTimeStamp(0.4570264583379515);
    msg.setSource(39747U);
    msg.setSourceEntity(197U);
    msg.setDestination(38706U);
    msg.setDestinationEntity(89U);
    msg.type = 174U;
    msg.op = 210U;
    msg.err_mean = 0.9862868873552411;
    msg.dist_min_abs = 0.2924087808279108;
    msg.dist_min_mean = 0.0038488552693014544;
    msg.roll_rate_mean = 0.4289024423583422;
    msg.time = 0.3723035114929045;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 39U;
    tmp_msg_0.lon_gain = 0.31578093904535487;
    tmp_msg_0.lat_gain = 0.6498187270117972;
    tmp_msg_0.bond_thick = 0.05475824215123326;
    tmp_msg_0.lead_gain = 0.8301075837813796;
    tmp_msg_0.deconfl_gain = 0.998268733627938;
    tmp_msg_0.accel_switch_gain = 0.18097468646023485;
    tmp_msg_0.safe_dist = 0.1958833806427167;
    tmp_msg_0.deconflict_offset = 0.24683274316108172;
    tmp_msg_0.accel_safe_margin = 0.007362735825236055;
    tmp_msg_0.accel_lim_x = 0.6923900894946255;
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
    msg.setTimeStamp(0.6720937322259196);
    msg.setSource(4589U);
    msg.setSourceEntity(219U);
    msg.setDestination(55953U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.5314358401645346;
    msg.lon = 0.8812850317471279;
    msg.eta = 4209257908U;
    msg.duration = 20166U;

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
    msg.setTimeStamp(0.7770335858724938);
    msg.setSource(34819U);
    msg.setSourceEntity(72U);
    msg.setDestination(37113U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.9852806958181066;
    msg.lon = 0.5884876077883867;
    msg.eta = 3730805143U;
    msg.duration = 38028U;

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
    msg.setTimeStamp(0.8820329580326207);
    msg.setSource(22567U);
    msg.setSourceEntity(211U);
    msg.setDestination(17169U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.5937298728734828;
    msg.lon = 0.08718527256803232;
    msg.eta = 1444955107U;
    msg.duration = 437U;

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
    msg.setTimeStamp(0.6911112550813423);
    msg.setSource(49748U);
    msg.setSourceEntity(187U);
    msg.setDestination(20209U);
    msg.setDestinationEntity(26U);
    msg.plan_id = 20485U;

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
    msg.setTimeStamp(0.44317467614596107);
    msg.setSource(55322U);
    msg.setSourceEntity(7U);
    msg.setDestination(25339U);
    msg.setDestinationEntity(59U);
    msg.plan_id = 14937U;

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
    msg.setTimeStamp(0.953648581298196);
    msg.setSource(61468U);
    msg.setSourceEntity(242U);
    msg.setDestination(33395U);
    msg.setDestinationEntity(110U);
    msg.plan_id = 31572U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8890802195359219;
    tmp_msg_0.lon = 0.36080476936749306;
    tmp_msg_0.eta = 388411261U;
    tmp_msg_0.duration = 6407U;
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
    msg.setTimeStamp(0.8648842098307119);
    msg.setSource(20978U);
    msg.setSourceEntity(171U);
    msg.setDestination(7672U);
    msg.setDestinationEntity(132U);
    msg.type = 122U;
    msg.command = 33U;
    msg.settings.assign("OIJGUKLXVGEGAEIEALFAHDKQDHLAGHCOYKGUUDBUNCQQUMZHANYJSNSGZSVKCPDSPVTLTPSROIZSZVTXOBOPMRBBJVJYDEQWVZNCXOAXGFEFENPIIFNBYDJKZBNUMZSLMCPRIUMAWDSPQHLFXNWOLCOCVVCFTRKIJX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 537U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8375442711076299;
    tmp_tmp_msg_0_0.lon = 0.7392706956153057;
    tmp_tmp_msg_0_0.eta = 3135941377U;
    tmp_tmp_msg_0_0.duration = 61165U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DXTZQXEOBRDFVHIODOQPECEUXABFGOYSYBAMFKBTPJCPVQRBJNRKYYHZUGJKMYTUGOJIJFVEXRCOGGSCGGWHIWQSWKYPLCTNDUGTTNMNYDUIAEZPUSEWVLLNYJGCMLMLRSNJHFQLDYWRBJVZDSTCECQZNBMOIASHTQBEKAIGZIWFWOXCLXQPBJVMDWUSIPFIXAVFWFKPRAMHDOQXUQHDIZZZLHONTFSMKHMRNECLV");

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
    msg.setTimeStamp(0.6821355924205895);
    msg.setSource(43517U);
    msg.setSourceEntity(135U);
    msg.setDestination(5886U);
    msg.setDestinationEntity(31U);
    msg.type = 225U;
    msg.command = 163U;
    msg.settings.assign("XYLKIHGAMLOHRWOCPJSDCCEEYIXTBSRZPORXTMEQABZYVIJJHVYKRKULNLBUPYOYUZHMLUWDRYXKAKUMFYOENZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19678U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JHDTGTFVUBXXNSEMQSVPBINOLAMRNQWCPCTRKHLDUWUZEBSRUJDERHEOJDGREAKXFQBKJTCGBDPVGOPQIXDQLPALMSQYIUFXUY");

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
    msg.setTimeStamp(0.0315207375906027);
    msg.setSource(60496U);
    msg.setSourceEntity(230U);
    msg.setDestination(25960U);
    msg.setDestinationEntity(215U);
    msg.type = 211U;
    msg.command = 199U;
    msg.settings.assign("FIVVSGJDXNIGGBSUMNWEEKGNUFAAMHKAGWHMURWXRWFZDVDKTNBUDJKCEXUPTYLEZYXNLFUBGRIMVUIIFKYQTKDCAJMXSSZURCBQLPFYDHJJSG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 32647U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DSXKRRABNILJUFZCX");

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
    msg.setTimeStamp(0.48629323367742183);
    msg.setSource(40875U);
    msg.setSourceEntity(153U);
    msg.setDestination(12847U);
    msg.setDestinationEntity(117U);
    msg.state = 2U;
    msg.plan_id = 50475U;
    msg.wpt_id = 90U;
    msg.settings_chk = 56873U;

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
    msg.setTimeStamp(0.9267435303500026);
    msg.setSource(18976U);
    msg.setSourceEntity(186U);
    msg.setDestination(41768U);
    msg.setDestinationEntity(30U);
    msg.state = 202U;
    msg.plan_id = 28275U;
    msg.wpt_id = 200U;
    msg.settings_chk = 21562U;

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
    msg.setTimeStamp(0.27789388056052844);
    msg.setSource(60546U);
    msg.setSourceEntity(151U);
    msg.setDestination(22072U);
    msg.setDestinationEntity(224U);
    msg.state = 146U;
    msg.plan_id = 64483U;
    msg.wpt_id = 35U;
    msg.settings_chk = 51772U;

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
    msg.setTimeStamp(0.4068515899528472);
    msg.setSource(43983U);
    msg.setSourceEntity(226U);
    msg.setDestination(39437U);
    msg.setDestinationEntity(235U);
    msg.uid = 63U;
    msg.frag_number = 250U;
    msg.num_frags = 65U;
    const char tmp_msg_0[] = {-22, 74, -86, -32, -98, -41, -81, 99, 124, 34, 97, -55, -62, 105, -42, 71, -39, 91, -66, -124, -12, 80, -108, -83, 11, -120, 30, -118, -113, 24, -31, -1, 61, -96, 113, 19, -29, -5, -83, 126};
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
    msg.setTimeStamp(0.009463309513665585);
    msg.setSource(51480U);
    msg.setSourceEntity(63U);
    msg.setDestination(38456U);
    msg.setDestinationEntity(197U);
    msg.uid = 173U;
    msg.frag_number = 198U;
    msg.num_frags = 74U;
    const char tmp_msg_0[] = {5, -10, 45, 33, 48, -8, 122, -8, -7, 54, 120, -57, 29, 1, -68, -57, -104, 54, 13, 21, 50, 84, -91, -13, 30, -114, -11, -50, -41, 57, -31, -30, 79, 19, -37, 11, 10, 1, -127, -75, 39, 0, -47, 4, -57, 1, 115, -10, -69, 62, -112, 53, 120, 84, -34, 29, -19, 67, -104, 6, 20, -118, 62, 113, 69, -95, 45, 85, 24, -118, -26, -50, -117, -114, -90, -40, -125, -77, 122, 88, -106, -13, -60, 52, -120, 114, -36, 2, 77, 58, -128, 77, 104, 57, -28, -20, 32, 37, 62, 13, -105, 55, 85, 29, -82, 24, 114, 80, -98, 123, 44, -34, -79, -125, -53, -43, 10, 77, 55, -25, 15, -124, -60, -25, -3, -57, 90, 39, -102, 44, -19, 72, 0, 34, 50, 96, 109, 58, 93, -35, 63, -89, -32, -40, 116, 1, 100, -17, -78, 52, 10, 58, 79, 48, 15, 119, -59, 116, 84, 91, 42, -126, -82, -94, 81, -44, -54, -103, -13, -36, -128, 96, 47, -67, 10, -125, 34, -122, -30, 5, 118, 97, 47, 68, 109, -44, -52, -60, -80, 88, 93, -114, 51, 38, -81, 94, -76, 20, 73, 13, 95, 57, -41, 39, -108, 39, 106, -100, 26, -62, 60, -103, 91, -93, -88, 89, -49, -72, -37, 126, -99, -16, -57, -7, 83, -14};
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
    msg.setTimeStamp(0.6730535856374901);
    msg.setSource(63635U);
    msg.setSourceEntity(82U);
    msg.setDestination(49355U);
    msg.setDestinationEntity(16U);
    msg.uid = 139U;
    msg.frag_number = 138U;
    msg.num_frags = 54U;
    const char tmp_msg_0[] = {79, -106, 76, 64, 74, 121, -111, -94, 119, -91, -79, 83, -121, 68, 51, -11, 98, 104, -80, 74, -35, -97, 84, -3, -2, 75, -109, 24, 17, -106, 3, -14, 119, -121, -48, 13, -81, 38, -38, 88, -54, 28, -87, 43, -106, -18, -75, -119, -106, 49, 101, 16, 17, 7, -43, -112, -25, 105, -67, -72, -89, 123, 81, -19, 14, 94, -74, -1, 26, -45, -69, 31, -25, 39, -31, 91, 50, 32, 56, 46, -1, -77, 2, -28, -54, -112, 0, -74, -42, -3, 34, 47, -27, -38, -108, 20, -116, -95, 49};
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
    msg.setTimeStamp(0.9491487775209025);
    msg.setSource(9559U);
    msg.setSourceEntity(77U);
    msg.setDestination(50160U);
    msg.setDestinationEntity(46U);
    msg.content_type.assign("JZALQVFCGETPLPIYLYVMRQUMICVLARWCREBJDLGSYFRUGXCDVMYWTTFUYRKT");
    const char tmp_msg_0[] = {21, -67, -14, -75, -39, -90, -89, -122, 110, 16, -70, 13, -112, 79, 14, 31, -82, -79, 115, -109, 108, -36, 34, 68, -51, -59, 100, 34, -116, -29, -92, 49, 49, 27, -26, 8, 76};
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
    msg.setTimeStamp(0.26520361842106066);
    msg.setSource(18078U);
    msg.setSourceEntity(42U);
    msg.setDestination(41866U);
    msg.setDestinationEntity(196U);
    msg.content_type.assign("JHHCSWPBLEZOBZWTCQUAKUHIFCPKNORZTTXCZX");
    const char tmp_msg_0[] = {111, 60, -4, -30, 62, -42, 46, -106, 112, 104, 44, 3, -106, 123, 56, -67, -18, 6, -93, -3, -96, -18, 42, -116, -36, 72, -8, 90, -62, 56, 28, 120, -111, 67, -2, -41, 112, -64, 40, -23, 96, 53, -74, -54, -88, 56, -61, 102, -128, -41, 41, 79, 60, -27, 4, 58, 0, 122, 95, -98, -44, 69, 43, -67, 88, 2, -106, 37, -88, -8, -71, -39, -25, -108, -111, -17, -33, -106, -78, -47, -116, 50, -124, 87, -62, -102, 98, -122, 90, 34, -67, 53, -17, 34, -50, 122, 8, 7, -40, -101, 16, 13, -33, 125, 66, 56, 44, -111, -125, -110, -112, -7, 56, 72, 66, -33, -12, 104, -127, 102, -14, -63, 26, 63, -86, -66, -69, 84, 56, 108, -51, 115, -7, -96, -78, 39, -125, 14, -14, -41, 61, -21, 72, 114, 39, 110, 27, -65, 61, -90, -100, -104, -32};
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
    msg.setTimeStamp(0.45326026431286903);
    msg.setSource(3902U);
    msg.setSourceEntity(184U);
    msg.setDestination(40901U);
    msg.setDestinationEntity(22U);
    msg.content_type.assign("IOTKQAYRNRBFTBCJAYKYMZBNDAPBDGQHDPHRWFKVGMHAIJZKDWXECWKRYWXNHQTCVGCZWPIWZQTUQPNVPEMCCWFSZQODEIPOSNSBZCXXJZRLVERJHUXLUSBXVFPBGMLEQMBSGYMMZCRNKQGVOAOJUFLKRXTCHGEKPEJTFFKYUAWUBTJ");
    const char tmp_msg_0[] = {102, -25, -77, -107, 47, 69, 58, 100, -111, -102, -85, -22, -47, 49, -55, 65, 51, 97, 9, 5, -25, -49, -114, 111, -125, 35, 30, 125, -13, -88, -111, 9};
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
    msg.setTimeStamp(0.8988730019384371);
    msg.setSource(32760U);
    msg.setSourceEntity(55U);
    msg.setDestination(27409U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.7079535935373964);
    msg.setSource(1687U);
    msg.setSourceEntity(245U);
    msg.setDestination(17120U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.9403558115656919);
    msg.setSource(4182U);
    msg.setSourceEntity(158U);
    msg.setDestination(7148U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.46883893513190844);
    msg.setSource(56110U);
    msg.setSourceEntity(29U);
    msg.setDestination(53561U);
    msg.setDestinationEntity(27U);
    msg.target = 61068U;
    msg.bearing = 0.33391627670189894;
    msg.elevation = 0.8285298378228607;

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
    msg.setTimeStamp(0.7233879667084434);
    msg.setSource(39347U);
    msg.setSourceEntity(14U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(146U);
    msg.target = 46018U;
    msg.bearing = 0.8748401303971933;
    msg.elevation = 0.5098199196136352;

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
    msg.setTimeStamp(0.8157308053525801);
    msg.setSource(3318U);
    msg.setSourceEntity(240U);
    msg.setDestination(1766U);
    msg.setDestinationEntity(102U);
    msg.target = 15141U;
    msg.bearing = 0.13175898675760456;
    msg.elevation = 0.5401062839268098;

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
    msg.setTimeStamp(0.5748986151745604);
    msg.setSource(504U);
    msg.setSourceEntity(152U);
    msg.setDestination(21879U);
    msg.setDestinationEntity(110U);
    msg.target = 45852U;
    msg.x = 0.5631774334023618;
    msg.y = 0.6021006516538522;
    msg.z = 0.8606951020955012;

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
    msg.setTimeStamp(0.3494977265506971);
    msg.setSource(38303U);
    msg.setSourceEntity(161U);
    msg.setDestination(54057U);
    msg.setDestinationEntity(80U);
    msg.target = 22169U;
    msg.x = 0.3317109286462663;
    msg.y = 0.1428165914318621;
    msg.z = 0.149003331493903;

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
    msg.setTimeStamp(0.9250005134770555);
    msg.setSource(23373U);
    msg.setSourceEntity(216U);
    msg.setDestination(15588U);
    msg.setDestinationEntity(38U);
    msg.target = 22421U;
    msg.x = 0.8601708012705168;
    msg.y = 0.24595541623860417;
    msg.z = 0.3418546315570533;

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
    msg.setTimeStamp(0.6768242034977903);
    msg.setSource(50347U);
    msg.setSourceEntity(233U);
    msg.setDestination(28670U);
    msg.setDestinationEntity(61U);
    msg.target = 46940U;
    msg.lat = 0.6822354901145846;
    msg.lon = 0.6113955623576032;
    msg.z_units = 183U;
    msg.z = 0.43684177867736596;

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
    msg.setTimeStamp(0.7565400249474931);
    msg.setSource(17823U);
    msg.setSourceEntity(41U);
    msg.setDestination(33176U);
    msg.setDestinationEntity(32U);
    msg.target = 11992U;
    msg.lat = 0.19018054104571258;
    msg.lon = 0.787365201192948;
    msg.z_units = 100U;
    msg.z = 0.5960657012014886;

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
    msg.setTimeStamp(0.203399688039835);
    msg.setSource(6667U);
    msg.setSourceEntity(5U);
    msg.setDestination(58666U);
    msg.setDestinationEntity(169U);
    msg.target = 40380U;
    msg.lat = 0.13191472140271676;
    msg.lon = 0.6778745401436594;
    msg.z_units = 155U;
    msg.z = 0.366441337911694;

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
    msg.setTimeStamp(0.22717652279974732);
    msg.setSource(44099U);
    msg.setSourceEntity(142U);
    msg.setDestination(17617U);
    msg.setDestinationEntity(248U);
    msg.locale.assign("FBVXLURZDPCWVQWTQLEPMNOAFUCDXAMNMCUYOBFVYOTAQKYPXCVSTOMEGEFOCJBIPZULEBETAGWDAJPGUJHLFKVTFBWYXJZWOWMXXKLSHDERTERLJXKCRZIIXYTMWCGGZGWIDQEGXQFBBNVPNQYTDRPHKPISKDENKYALVJISNYOSFCRSIQFBNAZYHADHCZJKANUWSGHOBHOTKBHGQSVQRV");
    const char tmp_msg_0[] = {14, 106, 10, -122, -43, 95, -85, 36, 76, -8, 19, -91, -45, 65, -46, -82, -122, -70, 22, -111, 53, -92, 35, -16, 86, 94, -118, 13, 103, 85, -98, 76, -36, -72, 82, 27, 30, -88, 86, -111, -90, 19, 85, -73, 77, 63, 74, 105, -128, -38, -63, -58, 62, 111, 78, -73, -45, -90, 20, 94, 59};
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
    msg.setTimeStamp(0.19636894105056968);
    msg.setSource(30800U);
    msg.setSourceEntity(230U);
    msg.setDestination(46229U);
    msg.setDestinationEntity(7U);
    msg.locale.assign("SYIWELSADBEQYEEQNOKFPZSXVHTGLIYJAIL");
    const char tmp_msg_0[] = {-58, -122, 116, -3, 21, 113, -54, 81, 111, -45, 5, -35, -62, 74, -116, -24, -83, -81, -27, 15, 2, -75, -57, 33, 77, -126, -108, -24, 46, 102};
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
    msg.setTimeStamp(0.9569255884543467);
    msg.setSource(11198U);
    msg.setSourceEntity(195U);
    msg.setDestination(55241U);
    msg.setDestinationEntity(132U);
    msg.locale.assign("BYBQKLQACODORLWMIKDWCMTJJINXMPLZENJNGLEYUZPCVZNHDCGHLHLSDNJNEWPBWNTOPROLTSZTXUKAUVNGPQDMFGTFYWOCTTCACFRIHAPDSWGUDPXGIAUOPOAJSZXJALSKBQRSBXUNHBSORBMVFPRLHWMFKREZIVTGDAJVKMJEEIHFOIXIOHFUMUYKSNXIFUVHZTKQJMZ");
    const char tmp_msg_0[] = {-8, 74, -20, 34, -107, 58, 55, 65, -25, -70, -101, -97, 37, 64, -39, 39, 113, -38, 58, 85, -16, -120, -116, 51, -71, -125, -87, -91, -73, -113, 69, -70, -80, -126, -125, 48, 116, -17, -44, -59, 31, -18, 57, -79, 42, -41, 26, -42, -106, 1, 3, -95, 51, 5, -56, 123, 74, -29, 105, -111, -36, 83, 53, -15, -5, -93, -37, 118, -20, 84, 79, 49, -6, -102, 64, 92, 46, -93, -37, -57, 13, 72, 79, -96, 42, -125, 80, -7, 13, 18, -12, -21, 106, 125, 72, -56, 124, 17, 92, 25, -62, 99, 69, -28, -68, 95, 61, -101, -9, -106, -28, -102, 78, -104, 67, 33, -75, -35, 8, -21, 49, -113, -28, 90, 78, -22, -92, 11, 19, -105};
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
    msg.setTimeStamp(0.8910530370943971);
    msg.setSource(4372U);
    msg.setSourceEntity(60U);
    msg.setDestination(64040U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.6219804003108248);
    msg.setSource(42148U);
    msg.setSourceEntity(49U);
    msg.setDestination(20010U);
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
    msg.setTimeStamp(0.6398882705078139);
    msg.setSource(3593U);
    msg.setSourceEntity(72U);
    msg.setDestination(22584U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.09101823032729661);
    msg.setSource(38207U);
    msg.setSourceEntity(111U);
    msg.setDestination(36642U);
    msg.setDestinationEntity(162U);
    msg.camid = 223U;
    msg.x = 55261U;
    msg.y = 51184U;

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
    msg.setTimeStamp(0.8011501014386403);
    msg.setSource(59109U);
    msg.setSourceEntity(97U);
    msg.setDestination(56399U);
    msg.setDestinationEntity(108U);
    msg.camid = 125U;
    msg.x = 39727U;
    msg.y = 16111U;

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
    msg.setTimeStamp(0.43269113113026725);
    msg.setSource(15410U);
    msg.setSourceEntity(237U);
    msg.setDestination(53573U);
    msg.setDestinationEntity(120U);
    msg.camid = 107U;
    msg.x = 26486U;
    msg.y = 46083U;

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
    msg.setTimeStamp(0.18391161194703065);
    msg.setSource(17598U);
    msg.setSourceEntity(152U);
    msg.setDestination(8705U);
    msg.setDestinationEntity(179U);
    msg.camid = 45U;
    msg.x = 21333U;
    msg.y = 64695U;

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
    msg.setTimeStamp(0.41289050494449575);
    msg.setSource(54978U);
    msg.setSourceEntity(141U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(186U);
    msg.camid = 218U;
    msg.x = 49296U;
    msg.y = 22518U;

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
    msg.setTimeStamp(0.9670566540189267);
    msg.setSource(22924U);
    msg.setSourceEntity(64U);
    msg.setDestination(21223U);
    msg.setDestinationEntity(136U);
    msg.camid = 79U;
    msg.x = 46516U;
    msg.y = 50478U;

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
    msg.setTimeStamp(0.4505497312835418);
    msg.setSource(1692U);
    msg.setSourceEntity(237U);
    msg.setDestination(26329U);
    msg.setDestinationEntity(9U);
    msg.tracking = 183U;
    msg.lat = 0.20424681502910946;
    msg.lon = 0.6058251325150149;
    msg.x = 0.3559910090450764;
    msg.y = 0.39343666925053555;
    msg.z = 0.03253602905345199;

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
    msg.setTimeStamp(0.8059206887633165);
    msg.setSource(38079U);
    msg.setSourceEntity(73U);
    msg.setDestination(57916U);
    msg.setDestinationEntity(90U);
    msg.tracking = 12U;
    msg.lat = 0.38618902487773965;
    msg.lon = 0.3511417158926601;
    msg.x = 0.35220795385050196;
    msg.y = 0.05922154546263192;
    msg.z = 0.992911183256835;

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
    msg.setTimeStamp(0.663960302959842);
    msg.setSource(28100U);
    msg.setSourceEntity(43U);
    msg.setDestination(16856U);
    msg.setDestinationEntity(75U);
    msg.tracking = 42U;
    msg.lat = 0.404172290313599;
    msg.lon = 0.01942824866361581;
    msg.x = 0.8281546487415825;
    msg.y = 0.3360968340989091;
    msg.z = 0.3216055334201465;

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
    msg.setTimeStamp(0.2604005038129227);
    msg.setSource(20244U);
    msg.setSourceEntity(176U);
    msg.setDestination(47739U);
    msg.setDestinationEntity(119U);
    msg.target.assign("RXGBKCSGUIGBEOSIDJXAIBVFGMDVGCTYFPUEDBEVGLJFZJMZZTRPVEHLEEILHUCVAMFQCDHCKUKPOMRSMWYQQHNCXOHSDDVZIXECZYM");
    msg.lbearing = 0.4895530007618829;
    msg.lelevation = 0.673353153143773;
    msg.bearing = 0.7151200996706978;
    msg.elevation = 0.6235804937913109;
    msg.phi = 0.15855028310810348;
    msg.theta = 0.2533756038031999;
    msg.psi = 0.7830727962697697;
    msg.accuracy = 0.908118745695384;

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
    msg.setTimeStamp(0.11005185045292365);
    msg.setSource(21119U);
    msg.setSourceEntity(71U);
    msg.setDestination(15033U);
    msg.setDestinationEntity(102U);
    msg.target.assign("JUJOZWVTBNMWRYHLUOPYBYHZEUDTXIWQJBKNZBRPZFRCQGTULVWCNF");
    msg.lbearing = 0.19159589844024982;
    msg.lelevation = 0.7520067791715643;
    msg.bearing = 0.7756276552524796;
    msg.elevation = 0.15347200183311382;
    msg.phi = 0.12552378205879788;
    msg.theta = 0.11150026617741193;
    msg.psi = 0.11421027809405149;
    msg.accuracy = 0.06127555358680925;

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
    msg.setTimeStamp(0.7741676711875094);
    msg.setSource(23964U);
    msg.setSourceEntity(127U);
    msg.setDestination(64686U);
    msg.setDestinationEntity(132U);
    msg.target.assign("DPHHGCNPCTLTAXJIPEZEYEASABCYEEZZVUCDSLFWVFMXZRIUQOEIFONXNRAJMAIGTNOHMLTFYGTWHXJDYJWQXGCFVGCVBKVXSLMYMTHLEFRROKTZPVG");
    msg.lbearing = 0.08327520966728552;
    msg.lelevation = 0.600814883250901;
    msg.bearing = 0.9708413030235893;
    msg.elevation = 0.9767750879740696;
    msg.phi = 0.5739576570840178;
    msg.theta = 0.22147002606642407;
    msg.psi = 0.7274626281820565;
    msg.accuracy = 0.4960253344730132;

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
    msg.setTimeStamp(0.5154278914824014);
    msg.setSource(51691U);
    msg.setSourceEntity(115U);
    msg.setDestination(35067U);
    msg.setDestinationEntity(125U);
    msg.target.assign("ZLEBBNZBXYBXFDVGPWGLUKYXQHYGPNVSHPSDLDQGNIIYEVJAJCJUUAEEKQBEWXQIQSXOHMSAWKFPTTTHBLJZCFEATTYQVPJNS");
    msg.x = 0.9285924477254832;
    msg.y = 0.6297622127393149;
    msg.z = 0.04245263230793139;
    msg.n = 0.2800052618365295;
    msg.e = 0.656443093258895;
    msg.d = 0.08397336973568015;
    msg.phi = 0.8351442144428983;
    msg.theta = 0.8635044403497714;
    msg.psi = 0.12347802215062031;
    msg.accuracy = 0.14744598977036572;

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
    msg.setTimeStamp(0.3882188763465274);
    msg.setSource(56357U);
    msg.setSourceEntity(118U);
    msg.setDestination(449U);
    msg.setDestinationEntity(1U);
    msg.target.assign("JARYGVOZXVTSJAKXWHIRILWMQKRZBSVMNYKEPJLKNFJYEJDFJLTAEEYPDHJUUOLSEQQNQFYACRPPXTPYLHVXBRYVSRNTPBCCLEQMGWGWHNSDGTVLUHPIRGUUIFVCQZSBKJATZAFKOVSZDWZDIMWMBMYMQBMIIHQIWUBEHXDUDJUTGXNMXXQFAOWKTHRGWGFNNJOSCMUNOZCARLVKOBZXEKHDCFSONHB");
    msg.x = 0.6563903568657539;
    msg.y = 0.27336967978262916;
    msg.z = 0.27192264040985425;
    msg.n = 0.7391829116468687;
    msg.e = 0.5640464223003744;
    msg.d = 0.49389353446053263;
    msg.phi = 0.23608414398783828;
    msg.theta = 0.864886208060958;
    msg.psi = 0.14407274015986682;
    msg.accuracy = 0.7193297158527009;

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
    msg.setTimeStamp(0.5795911416057443);
    msg.setSource(3943U);
    msg.setSourceEntity(224U);
    msg.setDestination(41434U);
    msg.setDestinationEntity(252U);
    msg.target.assign("JHUKMGWGXWBSSRECCUHWONTHQJUMHKYEVGBVUNAOKZQOBIMDDZUSCUSZDOCXYBEVVODJIHGMYUNVQSAFFJJCEPRYBQYJXFHQZAZELZOAPTLORAUVHRDALBIVRLNPNKMCGYRAKFOYPCWJBQWFIGIHVTFX");
    msg.x = 0.9431013918329629;
    msg.y = 0.31337535999158306;
    msg.z = 0.11188755062078193;
    msg.n = 0.21563163205531777;
    msg.e = 0.5985330466940079;
    msg.d = 0.9187176510951902;
    msg.phi = 0.955983818811922;
    msg.theta = 0.4428700468667204;
    msg.psi = 0.12433396640415129;
    msg.accuracy = 0.4347628747040544;

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
    msg.setTimeStamp(0.9693007787245104);
    msg.setSource(58333U);
    msg.setSourceEntity(236U);
    msg.setDestination(37909U);
    msg.setDestinationEntity(181U);
    msg.target.assign("WYVEGWBEEGVPSZVYCJYHICCQWOIATNHRTSGXSAPGIYHTWOLJYKUYAPVMEGTOLWXPOSKZODELRKKMGOQFSWNTDWVIKBCJQIRLOIZJQQZCKYEJMYHDZBBPIDHQGLZFDNSEBMXEXWNUSISAUCLQBCZHZURKDHMUFRMJILASAAGMVUQNXYFFFHHLTXBKLXRTXOFTAJVYRFDU");
    msg.lat = 0.03323862608724282;
    msg.lon = 0.05811137158796509;
    msg.z_units = 206U;
    msg.z = 0.9350365940468651;
    msg.accuracy = 0.4904211532972512;

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
    msg.setTimeStamp(0.6384006225172948);
    msg.setSource(12691U);
    msg.setSourceEntity(116U);
    msg.setDestination(42331U);
    msg.setDestinationEntity(230U);
    msg.target.assign("HZCAABJRWONRGKEVPTAHWVBFHIXGMOFDZYWMMOOBQMKGRNJYRLRJDLSPPVRYGCWUUHNFMEECS");
    msg.lat = 0.9552693758457864;
    msg.lon = 0.7442753694707289;
    msg.z_units = 159U;
    msg.z = 0.2715931600196123;
    msg.accuracy = 0.3253994360439584;

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
    msg.setTimeStamp(0.7888493386479221);
    msg.setSource(14013U);
    msg.setSourceEntity(196U);
    msg.setDestination(17322U);
    msg.setDestinationEntity(147U);
    msg.target.assign("HYMHYEWSHWVTRLDOOEMYPQTBDTVCFTXDEERTUECQRKNOCUZNILLXXCLIMLYROCIHBKVOJOOIHNMXHAUPOIU");
    msg.lat = 0.22121713233819562;
    msg.lon = 0.807775330738221;
    msg.z_units = 218U;
    msg.z = 0.23428323004910567;
    msg.accuracy = 0.8355289645562763;

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
    msg.setTimeStamp(0.9162232015319455);
    msg.setSource(49092U);
    msg.setSourceEntity(53U);
    msg.setDestination(46771U);
    msg.setDestinationEntity(2U);
    msg.name.assign("GGOFIVVIFDPIMQDCMIXCXUTBHUPPANQFBNKUXUHKFBMYHAKUMYHEGLINXJRZHYCOIRPVOWNQSJBMNLLVGRRMKYBWEERUYQUHHDTQCJZPDQXYKFLWBQPNEFLSTZUJMZTGCYKEMTAXOJYTLRGTEYXABSRBSOGADDBLHN");
    msg.lat = 0.2119401706077505;
    msg.lon = 0.12127531522480428;
    msg.z = 0.6401137782800564;
    msg.z_units = 59U;

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
    msg.setTimeStamp(0.3221213670733196);
    msg.setSource(3088U);
    msg.setSourceEntity(7U);
    msg.setDestination(48942U);
    msg.setDestinationEntity(230U);
    msg.name.assign("ASYUBKPLWSVKBQZEPPQKTNQXQXJZMWFUKOOXLNZRJBLVTCAWCSPKXPYRTELVRZMYEKTNJDMIYDXKFQLKHGMZHPZHSDJVQ");
    msg.lat = 0.9524535753144696;
    msg.lon = 0.07974018918637149;
    msg.z = 0.9770932557866455;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.8777271928886475);
    msg.setSource(18467U);
    msg.setSourceEntity(9U);
    msg.setDestination(20326U);
    msg.setDestinationEntity(239U);
    msg.name.assign("PLTAWLNWKNAOLOLUUZGWCJQLPEEEHBGCXIVIETAHVYARBCMCFMLLUIQEKGYHARFJNANSNPG");
    msg.lat = 0.5238630962391716;
    msg.lon = 0.8321509912058944;
    msg.z = 0.14981933979621498;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.81952438057282);
    msg.setSource(24546U);
    msg.setSourceEntity(156U);
    msg.setDestination(23726U);
    msg.setDestinationEntity(122U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.046111180136163554);
    msg.setSource(58367U);
    msg.setSourceEntity(2U);
    msg.setDestination(39326U);
    msg.setDestinationEntity(241U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.3440510041689626);
    msg.setSource(3341U);
    msg.setSourceEntity(31U);
    msg.setDestination(38021U);
    msg.setDestinationEntity(192U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.5134150977585809);
    msg.setSource(1976U);
    msg.setSourceEntity(58U);
    msg.setDestination(15595U);
    msg.setDestinationEntity(119U);
    msg.value = 0.09488405411472833;
    msg.type = 144U;

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
    msg.setTimeStamp(0.0558115252873862);
    msg.setSource(39044U);
    msg.setSourceEntity(144U);
    msg.setDestination(21865U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8501431793944837;
    msg.type = 51U;

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
    msg.setTimeStamp(0.9835709783196793);
    msg.setSource(23761U);
    msg.setSourceEntity(224U);
    msg.setDestination(50382U);
    msg.setDestinationEntity(36U);
    msg.value = 0.9598307594549853;
    msg.type = 194U;

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
    msg.setTimeStamp(0.7762653442718329);
    msg.setSource(55954U);
    msg.setSourceEntity(95U);
    msg.setDestination(16667U);
    msg.setDestinationEntity(6U);
    msg.value = 0.06030382227234299;

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
    msg.setTimeStamp(0.1256001492778922);
    msg.setSource(46700U);
    msg.setSourceEntity(57U);
    msg.setDestination(6883U);
    msg.setDestinationEntity(158U);
    msg.value = 0.1755285835331326;

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
    msg.setTimeStamp(0.9611998182035005);
    msg.setSource(21172U);
    msg.setSourceEntity(202U);
    msg.setDestination(53116U);
    msg.setDestinationEntity(129U);
    msg.value = 0.039897897536485316;

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
    msg.setTimeStamp(0.0008857162457117651);
    msg.setSource(34545U);
    msg.setSourceEntity(200U);
    msg.setDestination(17248U);
    msg.setDestinationEntity(156U);
    msg.timestamp_last_service = 0.9974027802522781;
    msg.time_next_service = 0.08571246346979788;
    msg.time_motor_next_service = 0.2761372557725388;
    msg.time_idle_ground = 0.5969948245325767;
    msg.time_idle_air = 0.2742179583889611;
    msg.time_idle_water = 0.06773849563166112;
    msg.time_idle_underwater = 0.6633523709897725;
    msg.time_idle_unknown = 0.2655161460756168;
    msg.time_motor_ground = 0.9666237807358016;
    msg.time_motor_air = 0.045417015976615405;
    msg.time_motor_water = 0.9501204755323224;
    msg.time_motor_underwater = 0.9442675206461574;
    msg.time_motor_unknown = 0.16390161368840872;
    msg.rpm_min = 19068;
    msg.rpm_max = -26504;
    msg.depth_max = 0.9242738938760164;

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
    msg.setTimeStamp(0.8705904667059446);
    msg.setSource(14969U);
    msg.setSourceEntity(152U);
    msg.setDestination(33514U);
    msg.setDestinationEntity(176U);
    msg.timestamp_last_service = 0.43605723801516616;
    msg.time_next_service = 0.8772485306154141;
    msg.time_motor_next_service = 0.5418226074541826;
    msg.time_idle_ground = 0.6819353530479649;
    msg.time_idle_air = 0.08994136921683804;
    msg.time_idle_water = 0.24107841603784363;
    msg.time_idle_underwater = 0.1343148453235764;
    msg.time_idle_unknown = 0.4693364642903146;
    msg.time_motor_ground = 0.2952840063104406;
    msg.time_motor_air = 0.7047100152706369;
    msg.time_motor_water = 0.007477051686321623;
    msg.time_motor_underwater = 0.9767717249359976;
    msg.time_motor_unknown = 0.6318265168141529;
    msg.rpm_min = -16973;
    msg.rpm_max = 25863;
    msg.depth_max = 0.9065577249000276;

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
    msg.setTimeStamp(0.2460257287017904);
    msg.setSource(51847U);
    msg.setSourceEntity(104U);
    msg.setDestination(46951U);
    msg.setDestinationEntity(133U);
    msg.timestamp_last_service = 0.12914745100838287;
    msg.time_next_service = 0.08852479079168063;
    msg.time_motor_next_service = 0.1642861065272816;
    msg.time_idle_ground = 0.1713359676252043;
    msg.time_idle_air = 0.5405070842384726;
    msg.time_idle_water = 0.13579523779340563;
    msg.time_idle_underwater = 0.8515977793078888;
    msg.time_idle_unknown = 0.019342493822629425;
    msg.time_motor_ground = 0.8805402646386635;
    msg.time_motor_air = 0.3042223221718051;
    msg.time_motor_water = 0.6973612906448723;
    msg.time_motor_underwater = 0.5554089655115425;
    msg.time_motor_unknown = 0.8819157871889657;
    msg.rpm_min = 28243;
    msg.rpm_max = -17627;
    msg.depth_max = 0.2155821260051619;

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
    msg.setTimeStamp(0.8882559707973667);
    msg.setSource(39005U);
    msg.setSourceEntity(76U);
    msg.setDestination(31149U);
    msg.setDestinationEntity(79U);
    msg.severity = 153U;
    msg.text.assign("ISRGBYHOZOHNVGQBUDWMPQCLVDJUIPLFEHFNGCWPXJETVFZPOYSSDOSSMJKUQEOBBRSRLYJCCRHANXERPAWBALPGOQQSKLZFTBNXPAJIMRKRQIWTWPJGIZMGWENQDIUOXIIULOBYXHILTELACVCGCFXNKNIEVVMFYFCQMKGRSNPDWUD");

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
    msg.setTimeStamp(0.23921562285570974);
    msg.setSource(35917U);
    msg.setSourceEntity(148U);
    msg.setDestination(16549U);
    msg.setDestinationEntity(246U);
    msg.severity = 192U;
    msg.text.assign("UFHPOEJVLTIDPQXAMZXTXJSQWNYLDMFDHHANEJSPBCSRDRUGAZQXZLNVBFITRFPFIVWNCG");

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
    msg.setTimeStamp(0.012997699794511153);
    msg.setSource(52386U);
    msg.setSourceEntity(246U);
    msg.setDestination(21370U);
    msg.setDestinationEntity(60U);
    msg.severity = 7U;
    msg.text.assign("FUEHEBXBRHZYFCNZLPVXIODTVEDESKGTRNWKMWSQHMKNSPFAUIZBSLGOATALLWAPOQUBQUJILTDXNGDTNRBKPOREOSHRVUKXVGBBMTKQPJMHAXKA");

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
    msg.setTimeStamp(0.6028307955850479);
    msg.setSource(10320U);
    msg.setSourceEntity(194U);
    msg.setDestination(29944U);
    msg.setDestinationEntity(118U);
    msg.channel = 58;
    msg.value = 343593156;
    msg.gain = 252U;

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
    msg.setTimeStamp(0.2629113991075859);
    msg.setSource(37118U);
    msg.setSourceEntity(204U);
    msg.setDestination(32700U);
    msg.setDestinationEntity(135U);
    msg.channel = -120;
    msg.value = 1393409235;
    msg.gain = 49U;

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
    msg.setTimeStamp(0.5221190664409618);
    msg.setSource(45312U);
    msg.setSourceEntity(208U);
    msg.setDestination(19048U);
    msg.setDestinationEntity(13U);
    msg.channel = 50;
    msg.value = 198258343;
    msg.gain = 159U;

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
    msg.setTimeStamp(0.5177396278509768);
    msg.setSource(63962U);
    msg.setSourceEntity(178U);
    msg.setDestination(29626U);
    msg.setDestinationEntity(186U);
    msg.ch01 = 0.22375562720886477;
    msg.ch02 = 0.5439224876401059;
    msg.ch03 = 0.07393451404963525;
    msg.ch04 = 0.5340984264991819;
    msg.ch05 = 0.966927171079608;
    msg.ch06 = 0.7965481070574666;
    msg.ch07 = 0.21179571421445498;
    msg.ch08 = 0.8767533863549478;
    msg.ch09 = 0.14447901356929704;
    msg.ch10 = 0.8560793101612496;
    msg.ch11 = 0.6545632869063261;
    msg.ch12 = 0.11368318491336804;
    msg.ch13 = 0.286422991815916;
    msg.ch14 = 0.5545075763096219;
    msg.ch15 = 0.7722451927823508;
    msg.ch16 = 0.05563625781965165;

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
    msg.setTimeStamp(0.9129269820892005);
    msg.setSource(16135U);
    msg.setSourceEntity(28U);
    msg.setDestination(51088U);
    msg.setDestinationEntity(174U);
    msg.ch01 = 0.7311823484312675;
    msg.ch02 = 0.5901142398879347;
    msg.ch03 = 0.932016150014821;
    msg.ch04 = 0.20190341077256946;
    msg.ch05 = 0.31365148030292633;
    msg.ch06 = 0.02020078267148595;
    msg.ch07 = 0.8684761665433417;
    msg.ch08 = 0.10049643205540615;
    msg.ch09 = 0.8472975191594317;
    msg.ch10 = 0.8685616766518256;
    msg.ch11 = 0.016734590405322547;
    msg.ch12 = 0.016769315951446262;
    msg.ch13 = 0.03581281576108408;
    msg.ch14 = 0.030308073833064997;
    msg.ch15 = 0.5959679946759149;
    msg.ch16 = 0.7193420387170123;

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
    msg.setTimeStamp(0.3204791413132031);
    msg.setSource(59615U);
    msg.setSourceEntity(249U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(36U);
    msg.ch01 = 0.870487772154559;
    msg.ch02 = 0.5504237935255811;
    msg.ch03 = 0.6018213310247521;
    msg.ch04 = 0.6560243631292378;
    msg.ch05 = 0.6106099484935685;
    msg.ch06 = 0.17017264223530182;
    msg.ch07 = 0.5790470223019303;
    msg.ch08 = 0.3802834892556717;
    msg.ch09 = 0.7406064097025621;
    msg.ch10 = 0.9117408943055131;
    msg.ch11 = 0.7731093231230454;
    msg.ch12 = 0.15299477619218083;
    msg.ch13 = 0.8990559431049471;
    msg.ch14 = 0.8444863548092918;
    msg.ch15 = 0.03211839850789289;
    msg.ch16 = 0.49495845553205475;

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
    msg.setTimeStamp(0.7999674960086723);
    msg.setSource(50423U);
    msg.setSourceEntity(103U);
    msg.setDestination(12823U);
    msg.setDestinationEntity(127U);
    msg.op = 254U;
    msg.lat = 0.3000467411600988;
    msg.lon = 0.44169732652009486;
    msg.height = 0.4268626889892969;
    msg.depth = 0.05356238409108849;
    msg.alt = 0.5274715101021675;

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
    msg.setTimeStamp(0.9879016072194885);
    msg.setSource(30519U);
    msg.setSourceEntity(237U);
    msg.setDestination(41515U);
    msg.setDestinationEntity(184U);
    msg.op = 112U;
    msg.lat = 0.8512873636602378;
    msg.lon = 0.5705274357028457;
    msg.height = 0.766599603513534;
    msg.depth = 0.28085304318884863;
    msg.alt = 0.5553570628244302;

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
    msg.setTimeStamp(0.04847278549758138);
    msg.setSource(48417U);
    msg.setSourceEntity(50U);
    msg.setDestination(28946U);
    msg.setDestinationEntity(95U);
    msg.op = 24U;
    msg.lat = 0.785941334965064;
    msg.lon = 0.892313751521622;
    msg.height = 0.3233116230192602;
    msg.depth = 0.12429440066971242;
    msg.alt = 0.05728791529841171;

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
    msg.setTimeStamp(0.18468585334473753);
    msg.setSource(64702U);
    msg.setSourceEntity(214U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(59U);
    msg.nbeams = 6U;
    msg.ncells = 187U;
    msg.coord_sys = 237U;

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
    msg.setTimeStamp(0.9359869423388126);
    msg.setSource(1260U);
    msg.setSourceEntity(40U);
    msg.setDestination(62423U);
    msg.setDestinationEntity(41U);
    msg.nbeams = 186U;
    msg.ncells = 179U;
    msg.coord_sys = 184U;

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
    msg.setTimeStamp(0.2807240896778799);
    msg.setSource(17353U);
    msg.setSourceEntity(16U);
    msg.setDestination(63337U);
    msg.setDestinationEntity(137U);
    msg.nbeams = 127U;
    msg.ncells = 136U;
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
    msg.setTimeStamp(0.6615889947946194);
    msg.setSource(19056U);
    msg.setSourceEntity(86U);
    msg.setDestination(40223U);
    msg.setDestinationEntity(199U);
    msg.cell_position = 0.9256871516241093;

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
    msg.setTimeStamp(0.8320525581339855);
    msg.setSource(54318U);
    msg.setSourceEntity(33U);
    msg.setDestination(10456U);
    msg.setDestinationEntity(118U);
    msg.cell_position = 0.33208161811967307;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.9256874727142854;
    tmp_msg_0.amp = 0.8111195182881248;
    tmp_msg_0.cor = 19U;
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
    msg.setTimeStamp(0.9304753538035891);
    msg.setSource(50072U);
    msg.setSourceEntity(191U);
    msg.setDestination(43462U);
    msg.setDestinationEntity(160U);
    msg.cell_position = 0.14814281871980717;

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
    msg.setTimeStamp(0.3797299915860467);
    msg.setSource(14558U);
    msg.setSourceEntity(88U);
    msg.setDestination(57989U);
    msg.setDestinationEntity(174U);
    msg.vel = 0.6001229884628544;
    msg.amp = 0.7693284374210707;
    msg.cor = 33U;

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
    msg.setTimeStamp(0.05859436092769188);
    msg.setSource(35440U);
    msg.setSourceEntity(191U);
    msg.setDestination(53953U);
    msg.setDestinationEntity(3U);
    msg.vel = 0.3243880299398685;
    msg.amp = 0.1300455517258472;
    msg.cor = 117U;

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
    msg.setTimeStamp(0.10924845671254002);
    msg.setSource(57849U);
    msg.setSourceEntity(174U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(233U);
    msg.vel = 0.7168460109137259;
    msg.amp = 0.30718329320354476;
    msg.cor = 73U;

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
    msg.setTimeStamp(0.9413034962695968);
    msg.setSource(57084U);
    msg.setSourceEntity(129U);
    msg.setDestination(47883U);
    msg.setDestinationEntity(141U);
    msg.name.assign("BKOCALGORWFZVLSGKIIGPRVHEBSCSMIHDPKVJRNXDT");
    msg.value = 200U;

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
    msg.setTimeStamp(0.4510286383926688);
    msg.setSource(2480U);
    msg.setSourceEntity(179U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ZQOZMUJXYQLLHUFJZJQHTNZJHYWOXHREQGNLAYRMFULPQZPQEEHRATOYIQAFDSUHCJZJXJBWUMYDCZBD");
    msg.value = 118U;

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
    msg.setTimeStamp(0.4728441422980042);
    msg.setSource(56133U);
    msg.setSourceEntity(91U);
    msg.setDestination(51892U);
    msg.setDestinationEntity(211U);
    msg.name.assign("UTSWYRUVTJXYSYJTHKCSOUGDHBLCOOXHZOFADDZIQWHNPEXMXXDAGKCCEJPQDPHLZBKBBBZPESRZAGUMFRQERQVGDJRDNOFVLNXVBPKMDTPEYVMZQAOXUDFMFYOMILJQZRACNXTBF");
    msg.value = 143U;

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
    msg.setTimeStamp(0.2159939542057514);
    msg.setSource(65451U);
    msg.setSourceEntity(201U);
    msg.setDestination(24282U);
    msg.setDestinationEntity(188U);
    msg.name.assign("OCRFQNYYUUWKMEJHQSQGIFJMMBNTGGJLDX");

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
    msg.setTimeStamp(0.645399448862817);
    msg.setSource(38632U);
    msg.setSourceEntity(209U);
    msg.setDestination(35952U);
    msg.setDestinationEntity(125U);
    msg.name.assign("GLRXMTUJYJLVFSPNZTSEOAXBNMVHHTDHQAVGWMLFZWZYTDCGSMOHCDRJNXEZMDEJWKTQETCDKXFEHBYQNWRXHVUSERHWKJPJBNZINPGVFPDPRBLOQQANIZBYHVVMXKNAAUKKYGDGMIEQCTWJSLVUJUSKFDAICPNRCKAYMVGIUJUKPBML");

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
    msg.setTimeStamp(0.9221133871584737);
    msg.setSource(23360U);
    msg.setSourceEntity(95U);
    msg.setDestination(25393U);
    msg.setDestinationEntity(19U);
    msg.name.assign("PPIWMURGUWBLNWZLKJQFLZUQVBRJMPCIPQOAWZOJUKHBEGIGHSOAZNUDEWLRHQGPBOBLSYXVOVLFCTEQEWEYTKXIYKDRLKDF");

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
    msg.setTimeStamp(0.8900114681530951);
    msg.setSource(22634U);
    msg.setSourceEntity(212U);
    msg.setDestination(22673U);
    msg.setDestinationEntity(66U);
    msg.name.assign("SAYISXQWWYMXULGEDXYNNAPRMDEKKDPPCBFXPQEGPJQOQLRNOLKT");
    msg.value = 175U;

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
    msg.setTimeStamp(0.4817340704346794);
    msg.setSource(44486U);
    msg.setSourceEntity(168U);
    msg.setDestination(53962U);
    msg.setDestinationEntity(140U);
    msg.name.assign("ZZSXPYQMGMIIFQSWKWSKSNLUIWRYQBPJVKDBEGITRQTNJEAMHJDPPSCGUKYZYAQPONJOCIAPUXUIBTTX");
    msg.value = 149U;

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
    msg.setTimeStamp(0.8941570873790533);
    msg.setSource(13771U);
    msg.setSourceEntity(235U);
    msg.setDestination(17466U);
    msg.setDestinationEntity(125U);
    msg.name.assign("ZNJYTYRGCDGXWZQOKCTHHQXKMECSYYUDZAAAICLTUGEI");
    msg.value = 220U;

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
    msg.setTimeStamp(0.7270781304253087);
    msg.setSource(2020U);
    msg.setSourceEntity(83U);
    msg.setDestination(40297U);
    msg.setDestinationEntity(109U);
    msg.value = 0.7721099896859207;

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
    msg.setTimeStamp(0.9601732251752533);
    msg.setSource(58996U);
    msg.setSourceEntity(226U);
    msg.setDestination(18193U);
    msg.setDestinationEntity(15U);
    msg.value = 0.3981381629592584;

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
    msg.setTimeStamp(0.6039917953608945);
    msg.setSource(41023U);
    msg.setSourceEntity(135U);
    msg.setDestination(64623U);
    msg.setDestinationEntity(166U);
    msg.value = 0.23926001441633948;

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
    msg.setTimeStamp(0.9019700745645532);
    msg.setSource(24945U);
    msg.setSourceEntity(204U);
    msg.setDestination(20904U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8263502148507527;

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
    msg.setTimeStamp(0.8829874629728494);
    msg.setSource(27186U);
    msg.setSourceEntity(166U);
    msg.setDestination(44764U);
    msg.setDestinationEntity(151U);
    msg.value = 0.5330514109523327;

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
    msg.setTimeStamp(0.46125924378572547);
    msg.setSource(10371U);
    msg.setSourceEntity(244U);
    msg.setDestination(18267U);
    msg.setDestinationEntity(12U);
    msg.value = 0.05973413957881779;

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
    msg.setTimeStamp(0.9029612489395844);
    msg.setSource(40924U);
    msg.setSourceEntity(180U);
    msg.setDestination(32672U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5644015614869711;

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
    msg.setTimeStamp(0.8008562498932807);
    msg.setSource(8164U);
    msg.setSourceEntity(9U);
    msg.setDestination(25600U);
    msg.setDestinationEntity(10U);
    msg.value = 0.48225738563891685;

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
    msg.setTimeStamp(0.5721562159946905);
    msg.setSource(16826U);
    msg.setSourceEntity(39U);
    msg.setDestination(5102U);
    msg.setDestinationEntity(226U);
    msg.value = 0.483870222547248;

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
    msg.setTimeStamp(0.47234279692446335);
    msg.setSource(60126U);
    msg.setSourceEntity(209U);
    msg.setDestination(63302U);
    msg.setDestinationEntity(209U);
    msg.restriction = 253U;
    msg.reason.assign("KQXJTENHELCODVUFEWUPPIAAGFDISFMAWTLIMXDAKFXDSBCJMWKJKGMZSIRHDFZODNRHTZOYFMGPBOAYEQLOUTOSZPJNMEQKHJYBTWMRNPL");

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
    msg.setTimeStamp(0.5183439005653202);
    msg.setSource(34214U);
    msg.setSourceEntity(182U);
    msg.setDestination(53732U);
    msg.setDestinationEntity(157U);
    msg.restriction = 33U;
    msg.reason.assign("UGHWRTXFPCDSSPIAOCKDCWNGDFNFSWNZSAHOYYKINPNNYQCHHEGZUXDHMZBLZPAXMPUMNUUAJLRYPHXCAMIXJRJXAKRMNFKQSBFZEBFEFZJVNLWCLJIRIXCAJROEYXPVQWWVETLOHOAYKBCYFXJG");

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
    msg.setTimeStamp(0.501400151750311);
    msg.setSource(51051U);
    msg.setSourceEntity(171U);
    msg.setDestination(4777U);
    msg.setDestinationEntity(176U);
    msg.restriction = 200U;
    msg.reason.assign("JSFUNDJUZKYODMUFBPRBSBROONRFJQNCGQNGVAQYAZGUTDPEVOHZTGMBAEXAHNKZTKCOLBTZBLDNJXJQL");

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
    msg.setTimeStamp(0.9066626424220124);
    msg.setSource(52585U);
    msg.setSourceEntity(172U);
    msg.setDestination(18518U);
    msg.setDestinationEntity(117U);
    msg.param = 0.9702120243918264;
    msg.lat = 0.10718381567870128;
    msg.lon = 0.42746970733000056;
    msg.z = 0.9789124702255751;
    msg.theta = 0.6480418244366752;
    msg.psi = 0.6458098315706785;

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
    msg.setTimeStamp(0.7397069397901098);
    msg.setSource(1956U);
    msg.setSourceEntity(133U);
    msg.setDestination(50942U);
    msg.setDestinationEntity(153U);
    msg.param = 0.5003956998050274;
    msg.lat = 0.7579336858565598;
    msg.lon = 0.5692413862303553;
    msg.z = 0.8684016636694503;
    msg.theta = 0.8123905270538808;
    msg.psi = 0.13743531177960566;

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
    msg.setTimeStamp(0.5198238172548738);
    msg.setSource(30710U);
    msg.setSourceEntity(57U);
    msg.setDestination(30830U);
    msg.setDestinationEntity(231U);
    msg.param = 0.6282317231011083;
    msg.lat = 0.5647639816371073;
    msg.lon = 0.7132884010008852;
    msg.z = 0.1615191785704535;
    msg.theta = 0.6011974583631845;
    msg.psi = 0.8979485169482978;

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
    msg.setTimeStamp(0.6183394193980495);
    msg.setSource(25218U);
    msg.setSourceEntity(10U);
    msg.setDestination(61344U);
    msg.setDestinationEntity(135U);
    msg.path_param = 0.32779164731152366;
    msg.x = 0.6518048044402963;
    msg.y = 0.7110672805514409;
    msg.z = 0.5741091279831428;
    msg.r_f = 0.5413679614404119;

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
    msg.setTimeStamp(0.3423668576312364);
    msg.setSource(17723U);
    msg.setSourceEntity(237U);
    msg.setDestination(15162U);
    msg.setDestinationEntity(113U);
    msg.path_param = 0.08056337882926701;
    msg.x = 0.7611762127219507;
    msg.y = 0.7424426510596932;
    msg.z = 0.10475020713054206;
    msg.r_f = 0.5996513496783499;

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
    msg.setTimeStamp(0.5726272106522046);
    msg.setSource(17812U);
    msg.setSourceEntity(41U);
    msg.setDestination(57900U);
    msg.setDestinationEntity(136U);
    msg.path_param = 0.6161242912183319;
    msg.x = 0.6955690119616718;
    msg.y = 0.6728052810142615;
    msg.z = 0.16724322276361225;
    msg.r_f = 0.8404796360532487;

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
    msg.setTimeStamp(0.28937614632928876);
    msg.setSource(32729U);
    msg.setSourceEntity(104U);
    msg.setDestination(51443U);
    msg.setDestinationEntity(187U);
    msg.path_param = 0.4852510218143813;
    msg.x = 0.2952410719339491;
    msg.y = 0.8349561898478678;
    msg.z = 0.42214122026980305;
    msg.r_f = 0.21235344750558904;

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
    msg.setTimeStamp(0.20593662367014232);
    msg.setSource(5351U);
    msg.setSourceEntity(192U);
    msg.setDestination(18519U);
    msg.setDestinationEntity(35U);
    msg.path_param = 0.2609026199839791;
    msg.x = 0.4112937097134026;
    msg.y = 0.9144488856565758;
    msg.z = 0.4766040366726867;
    msg.r_f = 0.8841814019951239;

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
    msg.setTimeStamp(0.6225217066687445);
    msg.setSource(47780U);
    msg.setSourceEntity(64U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(165U);
    msg.path_param = 0.8392719954395517;
    msg.x = 0.43394715314851595;
    msg.y = 0.7044814797852851;
    msg.z = 0.3421580233491047;
    msg.r_f = 0.35567681260471007;

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
