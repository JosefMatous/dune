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
// IMC XML MD5: db38089ebb053077c1fe78eda6b1439b                            *
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
    msg.setTimeStamp(0.03806841097875402);
    msg.setSource(13071U);
    msg.setSourceEntity(2U);
    msg.setDestination(31747U);
    msg.setDestinationEntity(75U);
    msg.state = 173U;
    msg.flags = 102U;
    msg.description.assign("PSTSSWQZZNYZKSPINRBKVIVGQMQRYJLAPAHCTHMAKRWGANKNQAZCNHXDJIMCHGFRKLBKSUKBYLAPNLQSQRNZYBYCTOZIKMSXSFTPJEBLZHUJDFGGNEWDBTEFCYBKOXIBBXCJNVIXETPGHVOIWMAXZFVYEDUOOYOWRFXIXROKUJCYPRUXVDRGFVUTTJVOZPDUW");

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
    msg.setTimeStamp(0.216938756012924);
    msg.setSource(18389U);
    msg.setSourceEntity(221U);
    msg.setDestination(55282U);
    msg.setDestinationEntity(210U);
    msg.state = 130U;
    msg.flags = 91U;
    msg.description.assign("IELGXPKHNYESXXOONHBHBZYVLGPDSNJDQKCSSCIEMCNZLSKMATUWHRBRODKUXDLUJBYDPBAMXIJJAYJLVNNIVDPRENVUUQVNYGPPRZJMEVATQIFUAUCBCPSSMS");

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
    msg.setTimeStamp(0.24153041869690817);
    msg.setSource(38321U);
    msg.setSourceEntity(55U);
    msg.setDestination(53788U);
    msg.setDestinationEntity(131U);
    msg.state = 161U;
    msg.flags = 167U;
    msg.description.assign("CQHGPKJBSLEVLQCRTTWQWHMRLGBKBJBOFVPHGKHOFBZGFZYOKNDGYFSSRPMAVYHUACLXDEQSIAPSWNLWSJRXUZQNFQYZECXWVIANDCFUVLPBXWXCHVGUITTYCRBEZEENNMXOD");

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
    msg.setTimeStamp(0.4254063916543481);
    msg.setSource(58651U);
    msg.setSourceEntity(178U);
    msg.setDestination(12124U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.7332048166524575);
    msg.setSource(14142U);
    msg.setSourceEntity(39U);
    msg.setDestination(11226U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.8030632739037163);
    msg.setSource(23393U);
    msg.setSourceEntity(187U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.6672368886561963);
    msg.setSource(38815U);
    msg.setSourceEntity(101U);
    msg.setDestination(63124U);
    msg.setDestinationEntity(56U);
    msg.id = 87U;
    msg.label.assign("CMJCCLTBYQAIPGFUSRVKOMITZNKRXMTAXKTQWMQYNPEELYDZQNACHUQKVABEDBIHLCTZGKIVOBOCSRONUWFIQEDZJTWJOPPBGDFXNXDOYWRXIQCHKSECZQUHSRUUCLXOPTFYDIGGJMINBFILNJJHWPMEAPDB");
    msg.component.assign("SHPGZYKHVFOXROBXPJGEHWAEUABSXCYUZUTLHOUGSRIDEDMNYLIIKAQGJZRMQLABCPAUGGFAMKLNJLVTNOWQNPAEKFSTQQQDGEDRZLNOFZBQVCRVWTEYXXYEUKPMFSNCWSPYDYVDBYSDNJFGTHUNPLTRRTSHQJXIWWMISWWMLPOIXGUINBCFILBXQCOHMVDZVRJGFOJCBXVKFREMVKQKYJBZCEJZWYBHHDKNMKPMCA");
    msg.act_time = 3891U;
    msg.deact_time = 30512U;

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
    msg.setTimeStamp(0.21589122778975778);
    msg.setSource(21428U);
    msg.setSourceEntity(152U);
    msg.setDestination(38268U);
    msg.setDestinationEntity(107U);
    msg.id = 150U;
    msg.label.assign("HPWJBSHPVRTAILSOVDDDKJDUIYIQGFKANNRMWAJWZITDTNDEULIYUPHYQMWFDIBXBKOAARKQWSCYGVXESUPQODEXZPTKJRLFZSOZSAXONBXAVARFUUCCEVHCHXLGMTNCCLRVIPQSERNDMELFNXMQAGSHIMZWXHYBM");
    msg.component.assign("KIFQTPUTLXBHFQSKJFHJTSDBUDWVRQYOXXNSGBSZTPAHUPELSIPPPWCDGWWWUCHUEIYXPTWR");
    msg.act_time = 13928U;
    msg.deact_time = 55995U;

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
    msg.setTimeStamp(0.13030388452261787);
    msg.setSource(48261U);
    msg.setSourceEntity(124U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(238U);
    msg.id = 203U;
    msg.label.assign("UMOBAMRRAATKZUMXSBFOENIPPCQAR");
    msg.component.assign("ZPBAYHRIUPGAAXRAMMOTYWQEJYLPAIAYNGYNGUFUQHENDYZXLKCHAOWLMOUFKDMIDNBATVSKOVTLXBLWGNMUGIGNBP");
    msg.act_time = 56782U;
    msg.deact_time = 17980U;

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
    msg.setTimeStamp(0.715509395054334);
    msg.setSource(63772U);
    msg.setSourceEntity(75U);
    msg.setDestination(18751U);
    msg.setDestinationEntity(199U);
    msg.id = 0U;

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
    msg.setTimeStamp(0.1517222094211078);
    msg.setSource(63706U);
    msg.setSourceEntity(10U);
    msg.setDestination(53314U);
    msg.setDestinationEntity(86U);
    msg.id = 215U;

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
    msg.setTimeStamp(0.5831052254795215);
    msg.setSource(21224U);
    msg.setSourceEntity(239U);
    msg.setDestination(39266U);
    msg.setDestinationEntity(13U);
    msg.id = 34U;

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
    msg.setTimeStamp(0.1145731963982981);
    msg.setSource(3206U);
    msg.setSourceEntity(146U);
    msg.setDestination(25651U);
    msg.setDestinationEntity(197U);
    msg.op = 110U;
    msg.list.assign("JCYGEHZFXHNHTPWGJLWLIFN");

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
    msg.setTimeStamp(0.9128798180762819);
    msg.setSource(60837U);
    msg.setSourceEntity(28U);
    msg.setDestination(57807U);
    msg.setDestinationEntity(178U);
    msg.op = 73U;
    msg.list.assign("YTBXHQOWLRLRSPYRISXMJTTDIBBOGNCMCCJWSYDFTZQECZVQCUEOTZIRXLUWAPRFBWILDD");

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
    msg.setTimeStamp(0.4729028846531933);
    msg.setSource(60165U);
    msg.setSourceEntity(116U);
    msg.setDestination(63328U);
    msg.setDestinationEntity(244U);
    msg.op = 208U;
    msg.list.assign("WWZDKPHOBMHOSYTAWQZLJUEIQGGOELHPWLIFOBOZEVHGRJ");

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
    msg.setTimeStamp(0.0709546542055508);
    msg.setSource(53089U);
    msg.setSourceEntity(13U);
    msg.setDestination(4930U);
    msg.setDestinationEntity(18U);
    msg.value = 127U;

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
    msg.setTimeStamp(0.6952584788474037);
    msg.setSource(60520U);
    msg.setSourceEntity(188U);
    msg.setDestination(21841U);
    msg.setDestinationEntity(110U);
    msg.value = 220U;

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
    msg.setTimeStamp(0.19616048218517512);
    msg.setSource(3807U);
    msg.setSourceEntity(74U);
    msg.setDestination(46748U);
    msg.setDestinationEntity(132U);
    msg.value = 43U;

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
    msg.setTimeStamp(0.9006575528410493);
    msg.setSource(24953U);
    msg.setSourceEntity(139U);
    msg.setDestination(30593U);
    msg.setDestinationEntity(17U);
    msg.consumer.assign("KPSWEPLYYPZHQTQWTZYUKTCAUSNQBRXTNYTWFCOCSAVXZRIPJXLIUFFGDLVSFPGHZHIURUIQXIJDNRWTBMWPECDVMPAQEUHGDJBEDFBLKUAYANOZBMCBRYIOZUSFVSLNJQSBLPQICDSCGTLOYNQRSEHZJGEGODXERVRGIZKPVJODAPDZHCVLYYKINJECHFGVRMHFXWGWVOENJXOIJWMCOYWUUFXDTRMK");
    msg.message_id = 10246U;

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
    msg.setTimeStamp(0.44586939042355767);
    msg.setSource(16544U);
    msg.setSourceEntity(143U);
    msg.setDestination(24993U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("KYMEJXSMGEOIMLQCEXJJHGTPJRKZVHODNFGAISMTPOVCVOOLIKKDQNETIFPZCKMPFBEDHRWCDOJPJCEZMBWLINPNGXXZVDLEVIVTJXUWKBUHHROHWBQMDSCOYASHSAWKWSYZADCGRMQSFYBRHDATYDHNYXCAFVASGMUIWMVZHNAEUBUOBPGJUPKNWISLBLTXWZEVQPQUZROYUGITKNWRNRTIFYEKBXLARXDLAVSZYYFQQRF");
    msg.message_id = 42801U;

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
    msg.setTimeStamp(0.4565916908979054);
    msg.setSource(5226U);
    msg.setSourceEntity(175U);
    msg.setDestination(27060U);
    msg.setDestinationEntity(152U);
    msg.consumer.assign("DRAQBLKLVKCHBGCTWXNCUFUTEVOYXBZEGJTCRONRZELYUWVZHUTHEPIKEFZPSDZAPODHVEGNTA");
    msg.message_id = 47177U;

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
    msg.setTimeStamp(0.209363243147481);
    msg.setSource(22925U);
    msg.setSourceEntity(16U);
    msg.setDestination(44869U);
    msg.setDestinationEntity(113U);
    msg.type = 189U;

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
    msg.setTimeStamp(0.21069878505258066);
    msg.setSource(42578U);
    msg.setSourceEntity(241U);
    msg.setDestination(42735U);
    msg.setDestinationEntity(5U);
    msg.type = 130U;

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
    msg.setTimeStamp(0.9096421784393277);
    msg.setSource(8267U);
    msg.setSourceEntity(47U);
    msg.setDestination(7935U);
    msg.setDestinationEntity(48U);
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
    msg.setTimeStamp(0.30276370760608273);
    msg.setSource(51566U);
    msg.setSourceEntity(253U);
    msg.setDestination(33782U);
    msg.setDestinationEntity(117U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.9004131069300453);
    msg.setSource(27794U);
    msg.setSourceEntity(70U);
    msg.setDestination(32962U);
    msg.setDestinationEntity(116U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.8620983734127808);
    msg.setSource(29852U);
    msg.setSourceEntity(159U);
    msg.setDestination(46118U);
    msg.setDestinationEntity(109U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.12319838036382647);
    msg.setSource(2986U);
    msg.setSourceEntity(133U);
    msg.setDestination(46638U);
    msg.setDestinationEntity(9U);
    msg.total_steps = 140U;
    msg.step_number = 2U;
    msg.step.assign("IFQFGJURGQYPESETADBQHVUMAKSPVDXZCHGJSNIPPCWIKLSVWPCQJGWZWGCKALZTINYBMLHDARKCJYLROEEYWTVOFNSONOZWBNPEJQP");
    msg.flags = 78U;

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
    msg.setTimeStamp(0.0022914763374841662);
    msg.setSource(30427U);
    msg.setSourceEntity(190U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(246U);
    msg.total_steps = 169U;
    msg.step_number = 134U;
    msg.step.assign("KKMCGORHVECUJJPITV");
    msg.flags = 105U;

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
    msg.setTimeStamp(0.7480572588502421);
    msg.setSource(24652U);
    msg.setSourceEntity(43U);
    msg.setDestination(31675U);
    msg.setDestinationEntity(1U);
    msg.total_steps = 59U;
    msg.step_number = 58U;
    msg.step.assign("NFFVAXBZMKONCHDEVZQFLCEDBPSGMBUVIPKUDGJMIQNJPZOWGLTPTDWSHVJZTZHPRJPLESAYBAOTPIMCIGGERCZODACLHYPTUMNDKWQBHAQQWUBDNTSVSGCQBBDFRALKXXRXZWYRUXKNIQFKGDLUZZSTARLWRMKV");
    msg.flags = 102U;

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
    msg.setTimeStamp(0.5114019922501655);
    msg.setSource(63837U);
    msg.setSourceEntity(46U);
    msg.setDestination(54497U);
    msg.setDestinationEntity(213U);
    msg.state = 225U;
    msg.error.assign("JGCNJTCODEAXP");

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
    msg.setTimeStamp(0.7867675178294568);
    msg.setSource(423U);
    msg.setSourceEntity(133U);
    msg.setDestination(51843U);
    msg.setDestinationEntity(212U);
    msg.state = 39U;
    msg.error.assign("VGMONVFPGFYBOJXBENTAWPZLACXTLJIMEPYSNQGZHEWHHPWDDHSFNLPTHKLPEGJXOTJQOAWEVDBUIRSAYY");

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
    msg.setTimeStamp(0.20919695882106004);
    msg.setSource(6064U);
    msg.setSourceEntity(52U);
    msg.setDestination(37126U);
    msg.setDestinationEntity(56U);
    msg.state = 241U;
    msg.error.assign("UKLGAXGDNITCTMHKOEHRBJQMXVTXOBBIGIWNCGICILH");

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
    msg.setTimeStamp(0.9988063013870524);
    msg.setSource(42289U);
    msg.setSourceEntity(109U);
    msg.setDestination(41186U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.7508857890470897);
    msg.setSource(44724U);
    msg.setSourceEntity(151U);
    msg.setDestination(28465U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.9914172436166548);
    msg.setSource(5012U);
    msg.setSourceEntity(243U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.6746532241174074);
    msg.setSource(34653U);
    msg.setSourceEntity(93U);
    msg.setDestination(47040U);
    msg.setDestinationEntity(170U);
    msg.op = 202U;
    msg.speed_min = 0.1825668236159278;
    msg.speed_max = 0.9905221088718519;
    msg.long_accel = 0.7170615758595396;
    msg.alt_max_msl = 0.10111406820922753;
    msg.dive_fraction_max = 0.917428212154563;
    msg.climb_fraction_max = 0.8525749366486631;
    msg.bank_max = 0.14277936230381905;
    msg.p_max = 0.1453268353997147;
    msg.pitch_min = 0.022952843211106688;
    msg.pitch_max = 0.9446315507636027;
    msg.q_max = 0.46088954697350026;
    msg.g_min = 0.45898530576424124;
    msg.g_max = 0.19490073167395705;
    msg.g_lat_max = 0.7380665182720864;
    msg.rpm_min = 0.434181710727225;
    msg.rpm_max = 0.21279593762116622;
    msg.rpm_rate_max = 0.21172706225002114;

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
    msg.setTimeStamp(0.7417054898587885);
    msg.setSource(47632U);
    msg.setSourceEntity(3U);
    msg.setDestination(11164U);
    msg.setDestinationEntity(151U);
    msg.op = 173U;
    msg.speed_min = 0.9296065821933396;
    msg.speed_max = 0.10791945477409803;
    msg.long_accel = 0.9658146779151081;
    msg.alt_max_msl = 0.9365387795100539;
    msg.dive_fraction_max = 0.00267422889646296;
    msg.climb_fraction_max = 0.4561968052531684;
    msg.bank_max = 0.18642964707451004;
    msg.p_max = 0.7336475947335639;
    msg.pitch_min = 0.23057374973918054;
    msg.pitch_max = 0.34344419198351916;
    msg.q_max = 0.488866633076132;
    msg.g_min = 0.7344870365713634;
    msg.g_max = 0.35914309720847903;
    msg.g_lat_max = 0.38083809798173285;
    msg.rpm_min = 0.9718998910552845;
    msg.rpm_max = 0.17636290031845003;
    msg.rpm_rate_max = 0.2987142828179107;

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
    msg.setTimeStamp(0.09554456240534592);
    msg.setSource(63845U);
    msg.setSourceEntity(57U);
    msg.setDestination(8530U);
    msg.setDestinationEntity(89U);
    msg.op = 120U;
    msg.speed_min = 0.14214088246282208;
    msg.speed_max = 0.4216573576069127;
    msg.long_accel = 0.6936812401247309;
    msg.alt_max_msl = 0.02269858095293842;
    msg.dive_fraction_max = 0.28111248081384854;
    msg.climb_fraction_max = 0.6109921120121572;
    msg.bank_max = 0.8351856204198073;
    msg.p_max = 0.38193917189501725;
    msg.pitch_min = 0.27155215147560763;
    msg.pitch_max = 0.12441693688277666;
    msg.q_max = 0.6360573178215618;
    msg.g_min = 0.534223634749283;
    msg.g_max = 0.16292891392969022;
    msg.g_lat_max = 0.9950869843862765;
    msg.rpm_min = 0.22045869180566846;
    msg.rpm_max = 0.8396518516177978;
    msg.rpm_rate_max = 0.0763230000784666;

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
    msg.setTimeStamp(0.2822803074003615);
    msg.setSource(5804U);
    msg.setSourceEntity(177U);
    msg.setDestination(8539U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.5419569829888513);
    msg.setSource(16480U);
    msg.setSourceEntity(137U);
    msg.setDestination(48106U);
    msg.setDestinationEntity(152U);
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 47443U;
    tmp_msg_0.destination.assign("KTJQVVVMRXDHPRFMLMNMFYTUNSBKRICXMOPFDQNILVHXSIDMDSZPTCUHWCNQQOFTDYNCHHEIVLRDWCKUSSDVXBXFRLABEKBPAXPOCQGJUJLNAEYWGHIQPZZTEXTPGYOJFWLCDFKSASZKDSXXCZXBBEYVZWEZCUGAVHAFRJYKHPI");
    tmp_msg_0.timeout = 0.9692925886793754;
    tmp_msg_0.sms_text.assign("VSFIAXVABEQLDGUAVMSOGUHIKOCGONUOWHZXQQAMLKWIDCVCUXHOSLVHKCNURI");
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
    msg.setTimeStamp(0.7842647963759454);
    msg.setSource(11424U);
    msg.setSourceEntity(150U);
    msg.setDestination(48457U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.01736039205644846);
    msg.setSource(23389U);
    msg.setSourceEntity(146U);
    msg.setDestination(52028U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.9500874882062659;
    msg.lon = 0.5191886774671148;
    msg.height = 0.5873370806325972;
    msg.x = 0.9012693992181225;
    msg.y = 0.9026815733066686;
    msg.z = 0.30071011167894324;
    msg.phi = 0.6875558491032399;
    msg.theta = 0.6837402477824103;
    msg.psi = 0.7376066831108051;
    msg.u = 0.11759108745030078;
    msg.v = 0.520620326074234;
    msg.w = 0.6707020766252575;
    msg.p = 0.6619941628065458;
    msg.q = 0.4930676314845538;
    msg.r = 0.278371600071445;
    msg.svx = 0.7172882299221303;
    msg.svy = 0.5423464204849269;
    msg.svz = 0.16952166279515668;

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
    msg.setTimeStamp(0.9204748461305647);
    msg.setSource(40623U);
    msg.setSourceEntity(113U);
    msg.setDestination(55693U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.5909345431129993;
    msg.lon = 0.7732632218038925;
    msg.height = 0.7064075831696822;
    msg.x = 0.04288213511576189;
    msg.y = 0.7420169865812689;
    msg.z = 0.6741616418188056;
    msg.phi = 0.1308102440287794;
    msg.theta = 0.19801400082117815;
    msg.psi = 0.8949796793926894;
    msg.u = 0.7079771876624481;
    msg.v = 0.22267498553088028;
    msg.w = 0.9112374137803635;
    msg.p = 0.9452952991315827;
    msg.q = 0.470710723312744;
    msg.r = 0.8194009066828033;
    msg.svx = 0.08876762196704713;
    msg.svy = 0.21029248778844079;
    msg.svz = 0.5706754664095621;

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
    msg.setTimeStamp(0.6241255632802226);
    msg.setSource(29830U);
    msg.setSourceEntity(184U);
    msg.setDestination(23566U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.6935911585928807;
    msg.lon = 0.13247098327178963;
    msg.height = 0.08887864664437606;
    msg.x = 0.11546355368033956;
    msg.y = 0.04273804625407074;
    msg.z = 0.9899358565491077;
    msg.phi = 0.1615357805626011;
    msg.theta = 0.19812185646923797;
    msg.psi = 0.16289527784695834;
    msg.u = 0.30887141528943496;
    msg.v = 0.9790577799797979;
    msg.w = 0.11002404152527623;
    msg.p = 0.38581843726644394;
    msg.q = 0.021210502162545386;
    msg.r = 0.5210850849509573;
    msg.svx = 0.8998316129372667;
    msg.svy = 0.10898554424549223;
    msg.svz = 0.8062427927407967;

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
    msg.setTimeStamp(0.8883134197160745);
    msg.setSource(43097U);
    msg.setSourceEntity(186U);
    msg.setDestination(27174U);
    msg.setDestinationEntity(103U);
    msg.op = 251U;
    msg.entities.assign("WNAYDRWUTAMQRAACVHGKLMCCZDSPTVPUEZDZZCAMFDSWTADPJOYXKQYINKXUBJKHGVVQNFXUUSGETKJRDDSPHIJBCTNIQLEIBHNOQFWLVUOCZWBQOGLEWETWMIJRFGUAXMWSVFVAYRFYHUCISRSUZMAZJXGPKVRBLFQWMMYBBOBPLKTWGHLCILNAPPFUERSIXJHDTOXNZEGZCMINVTJOPDGFXHOYTJFEHSBCHXKDRNNEEIYOL");

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
    msg.setTimeStamp(0.16830578745753144);
    msg.setSource(13194U);
    msg.setSourceEntity(82U);
    msg.setDestination(22281U);
    msg.setDestinationEntity(134U);
    msg.op = 134U;
    msg.entities.assign("JOPMDKNLONAOWBSQDPTKSOFEMEQXXYXUOJSXUEDBVSCJMXVYLFAHTHZWKMVXYACNLCBWPINWPLYZGXNHFRURRUIESADMADONCOWQUFVAXKCZGRHBDNWSTCBRTFRFYJMEVOYDBUGJQZWATBLTZWCRNIEHZGAITEDCPLBTICZQWSCQLHPPLKHSVGTIDFKYGM");

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
    msg.setTimeStamp(0.3894724959084014);
    msg.setSource(20973U);
    msg.setSourceEntity(56U);
    msg.setDestination(43726U);
    msg.setDestinationEntity(26U);
    msg.op = 224U;
    msg.entities.assign("HXPRENXOHHJCQIVUSAJTITPLZFRRFWLOCRRGKFMBEIQZUZUWQCQMGXNEVAQJQZXXSVFPZZUIFBXSJBIEWOYXOJQNJMCAMJRKFNLKWNLRWUJTLOOHSFKYQOPUGQKSYGHHVEGGEWEBGREDDAUWYNAGPOBZJFKJEIFBVSLNCTDPDOHZNBRAMLDKOUYZTWDACBSKTTAIHHTRLMCIKYPXXVNMHZCLMMPDFSSTY");

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
    msg.setTimeStamp(0.7018476682696497);
    msg.setSource(19967U);
    msg.setSourceEntity(18U);
    msg.setDestination(26860U);
    msg.setDestinationEntity(250U);
    msg.type = 10U;
    msg.speed = 41943U;
    const char tmp_msg_0[] = {-8, 107, 103, 55, 3, 60, -101, 18, 28, 5, -55, -84, 87, -60, -73, -82, 38, -26, 19, 77, -115, -49, 12, -57, 43, 39, -16, -51, -75, 29, -125, -64, -33, -91, -106, -87, 120, -90, -34, 5, 25, -11, 54, 121, -66, -125, 6, 109, -67, 10, 45, 85, 20, 44, -27, -53, 104, -20, 77, -128, -64, 80, 90, 119, -117, 48, 99, -111, 24, 54, 9, 52, 85, -106, 120, 36, -74, -30, 106, 35, 23, -122, 24, -97, 102, -32, 93, -90, -113, -92, 70, -53, 15, -32, -23, -3, -120, 48, 26, 88, 61, 11, -96, 75, 64, -99, 58, 7, 40, 115, 8, -5, 52, -86, -101, 10, 62, -42, -23, -58, -7, 11, 100};
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
    msg.setTimeStamp(0.16816516141371896);
    msg.setSource(45862U);
    msg.setSourceEntity(48U);
    msg.setDestination(49046U);
    msg.setDestinationEntity(126U);
    msg.type = 149U;
    msg.speed = 3367U;
    const char tmp_msg_0[] = {5, 121, -19, 118, -38, 13, 93, -40, 106, -125, 66, -42, 14, 72, -23, 93, 98, 66, 13, -117, 82, 55, 56, 24, -72, -90, -64, -68, 26, 122, -76, 47, 119, -108, -13, 101, -88, 74, 113, -27, -87, 35, -107, -72, 68, -47, -48, 42, -52, -52, -110, -90, 28, -97, 110, 119, 125, -118, 26, -40, -16, 46, 58, -4, -51, -58, -3, 0, -86, 52, -73, 54, -9, -26, 12, -127, 117, 53, -111, -36, -56, -84, -80, 62, 81, -110, 21, 13, -22, 121, 120, 61, 50, -65, -6, -86, 80, -54, -39, 14, 39, -54, -7, -55, 24, 10, -103, 8, 28, 0, 13, -76, 6, 20, -13, 98, -112, -30, 82, -7, 33, -2, 59, 0, -53, 68, -3};
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
    msg.setTimeStamp(0.5379333767092244);
    msg.setSource(30036U);
    msg.setSourceEntity(46U);
    msg.setDestination(42491U);
    msg.setDestinationEntity(147U);
    msg.type = 219U;
    msg.speed = 29715U;
    const char tmp_msg_0[] = {31, -26, -94, -4, 114, 10, 125, 79, 115, -127, -104, -57, 35, -27, 124, -4, -81, -95, 126, 87, -65, -118, 62, -12, -99, 47, -70, 77, -43};
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
    msg.setTimeStamp(0.20733669504294772);
    msg.setSource(59448U);
    msg.setSourceEntity(100U);
    msg.setDestination(59140U);
    msg.setDestinationEntity(180U);
    msg.op = 144U;
    msg.tas2acc_pgain = 0.5338654199602052;
    msg.bank2p_pgain = 0.4231731295581076;

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
    msg.setTimeStamp(0.5484865606762166);
    msg.setSource(36411U);
    msg.setSourceEntity(152U);
    msg.setDestination(23800U);
    msg.setDestinationEntity(165U);
    msg.op = 95U;
    msg.tas2acc_pgain = 0.3258653113640434;
    msg.bank2p_pgain = 0.25337153220861186;

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
    msg.setTimeStamp(0.22549609755008737);
    msg.setSource(61671U);
    msg.setSourceEntity(236U);
    msg.setDestination(4997U);
    msg.setDestinationEntity(136U);
    msg.op = 189U;
    msg.tas2acc_pgain = 0.6876823915619059;
    msg.bank2p_pgain = 0.21414426436378187;

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
    msg.setTimeStamp(0.012084732094085227);
    msg.setSource(6193U);
    msg.setSourceEntity(248U);
    msg.setDestination(8342U);
    msg.setDestinationEntity(229U);
    msg.available = 2540834260U;
    msg.value = 10U;

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
    msg.setTimeStamp(0.3386240086725051);
    msg.setSource(21407U);
    msg.setSourceEntity(101U);
    msg.setDestination(32266U);
    msg.setDestinationEntity(11U);
    msg.available = 1990373504U;
    msg.value = 73U;

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
    msg.setTimeStamp(0.5248247981097635);
    msg.setSource(50200U);
    msg.setSourceEntity(98U);
    msg.setDestination(57791U);
    msg.setDestinationEntity(125U);
    msg.available = 1223549162U;
    msg.value = 211U;

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
    msg.setTimeStamp(0.2579808769304647);
    msg.setSource(28027U);
    msg.setSourceEntity(115U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(117U);
    msg.op = 62U;
    msg.snapshot.assign("XRWKXHSXDNLTACFWDSKIFFJAWQGHOQBBTHMCAPPQYZKHMDWEKJBVTMYBMXASPRIXCVZJVZSVOCWIGAADEXJHUBLWYYOPNUDFUFNUMPOYOTBABIPHYZ");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.44428503497439475;
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
    msg.setTimeStamp(0.8424066344658034);
    msg.setSource(47214U);
    msg.setSourceEntity(83U);
    msg.setDestination(52936U);
    msg.setDestinationEntity(114U);
    msg.op = 2U;
    msg.snapshot.assign("TCKTSCVTQFOUGQPHLGRMEPXFPNFYXNHKIQEXQZLIGINBURRNTLTVPHKNOWADJVGPNFCHXUYFRDJSMZBIIYHHYKRBBWDBWILCVAMMLJYLUUFDLNQACMFZWTOEPDMSSTREJXVNBCHRBIDBAMJKABECODKQMWHWHMJNRZYVSBUYADZDEWKZPUCSOFQXXETOMZXCPTLZOCSRQJEAKWOGVEJJZJSRLWSQVAUGGQZYEXNW");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.25726775393296164;
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
    msg.setTimeStamp(0.9807411443392545);
    msg.setSource(25645U);
    msg.setSourceEntity(119U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(183U);
    msg.op = 149U;
    msg.snapshot.assign("UMMZVLRPVWGSNBXKNSVHVZXJFTFHPPQBILWSPKXNODFOAXRHKU");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.7095846638109548;
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
    msg.setTimeStamp(0.1938968277291302);
    msg.setSource(22285U);
    msg.setSourceEntity(175U);
    msg.setDestination(23910U);
    msg.setDestinationEntity(27U);
    msg.op = 231U;
    msg.name.assign("QIJSQWPCRNSCDRQOLJWFMYUXCXQDPYBFMXUSKNUGGHGCKZOVZDVZLHWPBVYLDCVBKTZGNBJSYKUDHFNTNAGYVTLDYGRVNUYFUYMEIABEXDFIDSFZILCIKHIJFTVIIVXKCNMOQHAQOEMJWAUBHZCLTPOKSHSNAAOEIXPRJROPJDIZERFXSMAUWYKZCHEVFGQMFPBWRPUK");

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
    msg.setTimeStamp(0.9795008224642132);
    msg.setSource(33525U);
    msg.setSourceEntity(203U);
    msg.setDestination(60903U);
    msg.setDestinationEntity(81U);
    msg.op = 201U;
    msg.name.assign("HLCIWFGWVDZISWIOICCCQJAKXHVGDXGDMWXZZLHSVLAVBERSFPDOKXGADBENDUGVURMPWTWAHJWVZBVZTRHYACYHVOCYELFQPJNBNXKURMISKKUEIEWENMHUBTHNXXKNRKZZUUQTSKZOWZAISY");

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
    msg.setTimeStamp(0.14211055204158685);
    msg.setSource(24082U);
    msg.setSourceEntity(35U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(135U);
    msg.op = 94U;
    msg.name.assign("AHEXUTIGPBXZDUVVWTSCLXCFYPQFYLGSNJUDOHKFEOAAYSQOTVHZNYRQMLKALROBDULELGBPXLIGPKUIGCERQRVJJREBMYRPWUIVZCHYQWPBNINSJVXBKTZQNCOIHPAKCKUVHTAHHFDDEZKQCEDNXTSNRMETWYJLNROI");

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
    msg.setTimeStamp(0.07233328463685929);
    msg.setSource(17773U);
    msg.setSourceEntity(167U);
    msg.setDestination(46115U);
    msg.setDestinationEntity(82U);
    msg.type = 21U;
    msg.htime = 0.1701679843312457;
    msg.context.assign("MODZEAXQFZAAROBOONKDOWEWTXIQBNIXFQMMPUNCEVYPKZKCJZKTJEALPHVHXRUGVBH");
    msg.text.assign("QZAVOQLDWPYBTBBMLFIRAEOXDMIHEYUFYWLEOFJMJQTRSWNJUWCEAYEYCKRBWJNIXJPVSHPHAQXNTTLGZLLBITKLWZGBRKPJDOICCVRWNVEEDYOYMDOHXLRICTSCENXMOSSOHKSUFUZULQARGGAYUHZBCOGFKIAFCK");

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
    msg.setTimeStamp(0.24811945616000097);
    msg.setSource(60780U);
    msg.setSourceEntity(72U);
    msg.setDestination(48157U);
    msg.setDestinationEntity(93U);
    msg.type = 54U;
    msg.htime = 0.49003770937537805;
    msg.context.assign("QAUBWGHHIPNGDHYNPZTBHOSOGOMJ");
    msg.text.assign("SNIDQQPYMYKCNQZHPJMLCUOTRMYGCXVPLKEYSIVYUVQTLO");

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
    msg.setTimeStamp(0.7257565025720504);
    msg.setSource(25436U);
    msg.setSourceEntity(143U);
    msg.setDestination(57334U);
    msg.setDestinationEntity(172U);
    msg.type = 89U;
    msg.htime = 0.04466780271100679;
    msg.context.assign("ODMBRVVIXYJQRBSCWIHSIKZPPMQBLSYDOGJRMNHHYTDPXGYOECTLEXFZPOFGSFDNLVPRQCWB");
    msg.text.assign("EYRDSKGAAXAOQXJIMFXOGDLCCAXSPCVOGFWEINXPHUVUCEZSSZXGEJJMMYHAKKPHAOTGHMNFCZJWJOPQGGQMIZJNMURTKHBVTVPQUQWTKIKKPWAZBIWBZEQORYCQNWETFILWBPEKUTPFMSSYJUALOBBZZSIDYSSNRDXRNLWLDYZJMRTKUFNWMNLUOCOFBNPMRVFYDVCUOHVXJDYGFRCIKJELBDTEPZGDILRVNIHHEB");

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
    msg.setTimeStamp(0.0714667798813654);
    msg.setSource(11299U);
    msg.setSourceEntity(53U);
    msg.setDestination(30230U);
    msg.setDestinationEntity(139U);
    msg.command = 163U;
    msg.htime = 0.3064480882290027;

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
    msg.setTimeStamp(0.26160195850436174);
    msg.setSource(35682U);
    msg.setSourceEntity(152U);
    msg.setDestination(64052U);
    msg.setDestinationEntity(92U);
    msg.command = 86U;
    msg.htime = 0.49258524779051793;

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
    msg.setTimeStamp(0.0006823932187908222);
    msg.setSource(17788U);
    msg.setSourceEntity(213U);
    msg.setDestination(47815U);
    msg.setDestinationEntity(175U);
    msg.command = 212U;
    msg.htime = 0.4102771350101905;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 55U;
    tmp_msg_0.htime = 0.6161335140998537;
    tmp_msg_0.context.assign("ZYCOXRIVMSULRFNOBBWUQGVGDPYZASVBIVTWLAXMMHIJFERQEUGKITHSJTTNASKMDOFJQKMQSLBPNGVPFYODMDECRCETJKDWICBZBVOM");
    tmp_msg_0.text.assign("VWCFDMHGGZQFQAOJLARENSHNEYWHTMDYLLZAVEMYGKTGVPBNNCJAPL");
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
    msg.setTimeStamp(0.32676274516573955);
    msg.setSource(57173U);
    msg.setSourceEntity(216U);
    msg.setDestination(37565U);
    msg.setDestinationEntity(143U);
    msg.op = 208U;
    msg.file.assign("SXPKASOTESRAVVJKLHKPLZKARHRJNLAXGBDLWCIJMTOXQRTISVOMCPQGYJKZTAGHNCCTTWJXDVSDUIWMQIPQOVLCEZEBHPGODLJMPCAZLIYOKFNYINKHMJWMHGXYMKZCLSSWYSBFWJQRQHEGZPKZPEYBMTFRMLZGLBCXHDAFYFBVBCNETR");

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
    msg.setTimeStamp(0.8695129691104987);
    msg.setSource(61221U);
    msg.setSourceEntity(227U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(160U);
    msg.op = 116U;
    msg.file.assign("WFFSIDJUCEYGRFNQZOTYMWLLZXINEDVYNUJRXVXHRLTPDELXFSSBZBYIWHERMMVZIEPZHAKLIOHPKSACREJHETWTQGUYAPHDCKCNRMDBCUCTYMCWISRAQYGJJWBKNBPGBNTFOFIYTGFJHKXZPEWOUDLCZLIXSRQOHSIBQRLJPSAUVHQQJKMQPNDFUQXMNZMUDBJCJVRYBVGHSKOVXCMLKG");

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
    msg.setTimeStamp(0.049511027545828146);
    msg.setSource(5499U);
    msg.setSourceEntity(112U);
    msg.setDestination(35448U);
    msg.setDestinationEntity(224U);
    msg.op = 50U;
    msg.file.assign("ZVHTEILOUBXGLPHTBZYZBGWVYIWAXEEGCHBWNDHEILCWKBFCCNARYTEGKHVRAISDFDAYBUHNNDURTVUDZIPIXOQVQGOJCFLWMBFFOUSJJGQTPCCOTGRZDPLSOUJJQZOXVKKPKAEGMTYVRJBGUYPHAWPFCOP");

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
    msg.setTimeStamp(0.9132013346104917);
    msg.setSource(56077U);
    msg.setSourceEntity(27U);
    msg.setDestination(16083U);
    msg.setDestinationEntity(162U);
    msg.op = 34U;
    msg.clock = 0.7866569812464251;
    msg.tz = 29;

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
    msg.setTimeStamp(0.6076067745248572);
    msg.setSource(11727U);
    msg.setSourceEntity(226U);
    msg.setDestination(27739U);
    msg.setDestinationEntity(107U);
    msg.op = 121U;
    msg.clock = 0.6284442257409688;
    msg.tz = -23;

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
    msg.setTimeStamp(0.5494617605031092);
    msg.setSource(48364U);
    msg.setSourceEntity(160U);
    msg.setDestination(37555U);
    msg.setDestinationEntity(240U);
    msg.op = 46U;
    msg.clock = 0.6361753724717941;
    msg.tz = -28;

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
    msg.setTimeStamp(0.29553360601694423);
    msg.setSource(7460U);
    msg.setSourceEntity(26U);
    msg.setDestination(13497U);
    msg.setDestinationEntity(69U);
    msg.conductivity = 0.9641254580295753;
    msg.temperature = 0.5970348824493921;
    msg.depth = 0.9450334525812131;

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
    msg.setTimeStamp(0.23298665386549366);
    msg.setSource(62474U);
    msg.setSourceEntity(170U);
    msg.setDestination(32121U);
    msg.setDestinationEntity(98U);
    msg.conductivity = 0.6914514130391711;
    msg.temperature = 0.2654247324438068;
    msg.depth = 0.7147498166339964;

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
    msg.setTimeStamp(0.3613765148454826);
    msg.setSource(41012U);
    msg.setSourceEntity(145U);
    msg.setDestination(50321U);
    msg.setDestinationEntity(14U);
    msg.conductivity = 0.32809095680755485;
    msg.temperature = 0.6619863189801244;
    msg.depth = 0.8487865524058178;

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
    msg.setTimeStamp(0.17474704559969256);
    msg.setSource(45519U);
    msg.setSourceEntity(43U);
    msg.setDestination(43356U);
    msg.setDestinationEntity(51U);
    msg.altitude = 0.7328737821249472;
    msg.roll = 26707U;
    msg.pitch = 42065U;
    msg.yaw = 57278U;
    msg.speed = 20138;

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
    msg.setTimeStamp(0.4699095714201639);
    msg.setSource(36746U);
    msg.setSourceEntity(210U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(93U);
    msg.altitude = 0.270016047824169;
    msg.roll = 174U;
    msg.pitch = 29959U;
    msg.yaw = 6474U;
    msg.speed = -14493;

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
    msg.setTimeStamp(0.08700927663805069);
    msg.setSource(30356U);
    msg.setSourceEntity(188U);
    msg.setDestination(12990U);
    msg.setDestinationEntity(107U);
    msg.altitude = 0.7527868318591538;
    msg.roll = 7045U;
    msg.pitch = 57583U;
    msg.yaw = 14924U;
    msg.speed = 6473;

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
    msg.setTimeStamp(0.12589178708609983);
    msg.setSource(339U);
    msg.setSourceEntity(222U);
    msg.setDestination(60773U);
    msg.setDestinationEntity(150U);
    msg.altitude = 0.6567683987330574;
    msg.width = 0.36096859631546163;
    msg.length = 0.7718264485490409;
    msg.bearing = 0.7967795546627773;
    msg.pxl = 13309;
    msg.encoding = 247U;
    const char tmp_msg_0[] = {-113, -64, 59, 36, 101, -10, 80, 76, -11, -19, -18, 71, 117, 34, -121, -122, 36, 93, -128, 28, -94, -58, 117, -34, 7, -48, 70, 98, 94, 29, 53, -14, -105, 55, 25, 119, 34, -45, 33, -25, -125, -114, -101, 81, -7, 8, 113, -82, -17, -92, -32, -92, 11, -12, 108, 33, -65, -50, 45, 64, -97, -64, -110, 94, 120, -26, -105, -49, -104, -1, -121, 42, 3, 125, -52, 87, -117, 110, -37, -45, 5, 95, 76, -76, -9, -12, 36, 34, -116, -44, 25, -106, 80, -58, 90, 71, 88, -2, -74, -81, 49, 48, 22, 35, 4, 103, -54, -42, 92, 5, 73, 113, -49, 45, -95, 34, -37, 108, -14, 98, 28, -122, 57, -23, -96, -70, -69, -100, 6, 50, 73, 19, 30, 119, 108, 99, 124, 36, -109, -87, -7, 111, 54, -1, -83, 1, 76, 7, 16, -68, 60, 62, 37, -72, 11, -20, 25, -123, 16, -39, 8, 87, 36, 34, 53, 28, 25, -68, -16, 118, 93, -43, 126, -107, 97, 120, 104, -43, -105, -31, -34, -82, 123, -107, 91, 87, 29, -76, -126, 108, -18, -20, -113, -97, -52, 13, -96, 31, 5, 6, -114, 108, 85, -26, 8, 22, 36, 66, -97, -51, -107, -125, -84, -67, -69, -92, -18, -98, 109, -116, -22, -70};
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
    msg.setTimeStamp(0.8628127331732433);
    msg.setSource(4016U);
    msg.setSourceEntity(12U);
    msg.setDestination(46515U);
    msg.setDestinationEntity(7U);
    msg.altitude = 0.3892651350998392;
    msg.width = 0.7946428087633366;
    msg.length = 0.19505922740925863;
    msg.bearing = 0.07786877820632876;
    msg.pxl = -3129;
    msg.encoding = 153U;
    const char tmp_msg_0[] = {11, 123, 44, 67, -57, -33, 124, 30, 40, 123, 119, 125, -8, 18, 55, 114, 84, -90, -108, 26, -7, 47, -49, -70, -118, 94, 57, -27, -111, 93, -12, -120, -49, 91, 110, -104, 83, -75, -72, -61, 90, 47, -60, 121, -109, 40, -109, -33, 126, -113, 38, -120, -126, -36, 17, -11, 100, -94, -59, 0, 27, 56, 17, -107, 19, -78, 17, 119, -110, 71, 36, 106, -5, 11, -2, -21, -87, -85, 74, -66, 113, -115, 104, 13, -128, 96, -42, 18, 55, -69, 64, -68, 89, -4, -115, 49, -87, -64, -35, 34, -117, -128, 94, -108, -122, -68, -18, -40, 12, 10, -42, 117, 75, -118, -59, 121, -88, 95, 13, 19, -61, -86, 4, -118, 95, -37, -96, -19, 95, -5, 34, 73, 43, -123, 39, 0, 119, -36, -116, -29, -84, 125, -10, 75, 65, 77, 44, 31, -124, 51, -120, 79, -77, 112, 45, -122, 93, -3, 35, -3, 93, 13, -51, -32, 56, 73, -17, 2, -103, -41, 27, 74, -39, -51, -13, 61, -111, 67, -122, 79, 82, 45, 111, 12, 35, -1, 6, 115, 110, -3, -91, 6, 63, 121, -7, 115, 69, 68, -113, -49, -72, 54, 58, -86, 23, 48, 71, -31, 14, -72, -56, 43, -11, -70, 1, 110, 124, -36, -16, 89, 14, 6, -86, 53, -85, -22, 72, 82, -12, -74, -48, -79, -3, -15, 113, -53, -33};
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
    msg.setTimeStamp(0.3307901317463312);
    msg.setSource(22710U);
    msg.setSourceEntity(30U);
    msg.setDestination(13812U);
    msg.setDestinationEntity(154U);
    msg.altitude = 0.019420521740907137;
    msg.width = 0.4960252787824231;
    msg.length = 0.6374412806025859;
    msg.bearing = 0.42208651800951147;
    msg.pxl = -23490;
    msg.encoding = 14U;
    const char tmp_msg_0[] = {126, 23, 16, 27, 119, 81, -107, 76, -98, 26, 41, -101, 69, -6, 56, -84, -58, -49, -20, 116, -3, 66, 63, -87, -35, -12, -85, 123, 5, -34, 97, 69, -110, -124, -62, -9, 29, 24, -94, -19, -110, 64, -88, 59, -128, 78, 95, -76, 54, 49, 4, 43, 104, 66, -62, 60, -90, -94, -46, 81, 24, -94, 100, 110, -7, -25, -11, -30, -125, -128, 19, 120, 20, 77, -84, -2, -52, -87, -26, -35, -102, -68, 115, -4, -122, -44, -103, -72, 7, 113, 56, 39, -110, 116, -6, 18, -52, -46, 61, 67, -26, 44, -25, -25, -58, 80, -117, -97, 17, 82, 50, -123, -29, -80, -25, -102, 31, -73, -95, 19, 95, -38, -12, 67, -79, -107, 20, 72, 57, 63, 27, -112, -50, 96, 25, -27, -3, 120, -69, 16, 28, 84, -88, 32, 25, -48, -53, -94, 80, -96, 120, -81, -34, -6, -57, 122, -25, -10, -66, -96, -81, -108, 25, -117, 54, -51, 4, -59, 98, 8, -60, -104, 112, 6, 63, 104, -65, 5, 122, 39, -109, -107, -89, 66, -41, -93, 81, -103, 69, -87, -102, -72, 82, 118, 123, -57, 80, -16, 33, 108, -73, 62, -34, 94, 24, -50, -34, 27, -67, 39, -92, 4, 65, 123, 108, 119, 52};
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
    msg.setTimeStamp(0.3547246519324062);
    msg.setSource(13100U);
    msg.setSourceEntity(14U);
    msg.setDestination(12314U);
    msg.setDestinationEntity(167U);
    msg.text.assign("NBEULOPAACDNALLCSJCLPKQBDLJQUNZKLNEFNFOCVUKSYWUYQJQIPYXPYXUDOZGDZDMEADUHCMHVJAOBSYEMUSHPEVPMAGIDXGXDKZWTQRNUTYTHJHPAWIEQMSGSOSSHCFFHIZXTRTTLPREBGYFYTKQOOINRCEWBGIDFWAPAHMRWLVNOKLXVOZWCHBYXFVIABKBVDCJSRVWEGZNZFQXRONCGYMVXGQRMQGKWMEBZIIZTLKSUWRTRFVBIMXJJ");
    msg.type = 29U;

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
    msg.setTimeStamp(0.008362810651822317);
    msg.setSource(57614U);
    msg.setSourceEntity(113U);
    msg.setDestination(37972U);
    msg.setDestinationEntity(17U);
    msg.text.assign("VAQXPAMVOXXOSOMIQRZCECC");
    msg.type = 70U;

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
    msg.setTimeStamp(0.5803546303207107);
    msg.setSource(61474U);
    msg.setSourceEntity(229U);
    msg.setDestination(13729U);
    msg.setDestinationEntity(171U);
    msg.text.assign("EIMNGCAHLHWGODSIKSZCTVVAXOPMWJFTLRUISYZPCBMSRQBJWPUGIMTDFTKHYKXNRNVZGDGHCRASEPOFIMSVZBCBCLJWSCDWDJPTYJAZYBLMVUVGFQTLUWEOTJPLMTRNAEORXAKIBDSFIOLXTNQNXUJVAESXZJGYAVOMYNNCDQBHGRYGLKPDTWKEFRVPZFUHYXFRMCLIZAQXUMJQPBWKEOKIGNERBOWHNYUQEQLKIXFUZXQCSEQHDWBZ");
    msg.type = 131U;

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
    msg.setTimeStamp(0.40059197759957266);
    msg.setSource(38312U);
    msg.setSourceEntity(139U);
    msg.setDestination(51126U);
    msg.setDestinationEntity(0U);
    msg.parameter = 225U;
    msg.numsamples = 11U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 600U;
    tmp_msg_0.avg = 0.34335627358858034;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7154621408422113;
    msg.lon = 0.4167919585626263;

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
    msg.setTimeStamp(0.0800620410758488);
    msg.setSource(36200U);
    msg.setSourceEntity(33U);
    msg.setDestination(21856U);
    msg.setDestinationEntity(118U);
    msg.parameter = 4U;
    msg.numsamples = 179U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 38756U;
    tmp_msg_0.avg = 0.6148319109669527;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.010722680767976556;
    msg.lon = 0.5293463025506874;

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
    msg.setTimeStamp(0.5687811532253764);
    msg.setSource(11246U);
    msg.setSourceEntity(124U);
    msg.setDestination(33383U);
    msg.setDestinationEntity(6U);
    msg.parameter = 126U;
    msg.numsamples = 164U;
    msg.lat = 0.0691318703958188;
    msg.lon = 0.47456178708330965;

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
    msg.setTimeStamp(0.9862206310299625);
    msg.setSource(48419U);
    msg.setSourceEntity(112U);
    msg.setDestination(45262U);
    msg.setDestinationEntity(77U);
    msg.depth = 2540U;
    msg.avg = 0.1585948354731852;

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
    msg.setTimeStamp(0.3540989350279784);
    msg.setSource(41199U);
    msg.setSourceEntity(253U);
    msg.setDestination(63525U);
    msg.setDestinationEntity(0U);
    msg.depth = 4546U;
    msg.avg = 0.24170851102533109;

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
    msg.setTimeStamp(0.0933661108678453);
    msg.setSource(3012U);
    msg.setSourceEntity(117U);
    msg.setDestination(61470U);
    msg.setDestinationEntity(145U);
    msg.depth = 57176U;
    msg.avg = 0.3492266550417681;

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
    msg.setTimeStamp(0.9589068312280198);
    msg.setSource(29961U);
    msg.setSourceEntity(236U);
    msg.setDestination(55574U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.7129363490053858);
    msg.setSource(13146U);
    msg.setSourceEntity(149U);
    msg.setDestination(32389U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.9778208584762816);
    msg.setSource(33764U);
    msg.setSourceEntity(114U);
    msg.setDestination(33680U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.3418275069679805);
    msg.setSource(9157U);
    msg.setSourceEntity(157U);
    msg.setDestination(53084U);
    msg.setDestinationEntity(12U);
    msg.sys_name.assign("UZFMODNFEIHCLNCKCHADUMQVTGZAHCROPSLMGISWNTQHFMTMGGJURSQQJBXFHTZOEANGTFSRNZUWVZDGQCGXEPEEJWYKYKSKHRPYJBCSSIONXRDLYESWIGZQRYCIVAEXALLSZAITBWIPTJVDVIOVXZWDWHJBFVPPTGRCPUNPUKDQSREOMCMAXUFBFVYVYYEFTU");
    msg.sys_type = 92U;
    msg.owner = 62664U;
    msg.lat = 0.9902027656932366;
    msg.lon = 0.08485068309330701;
    msg.height = 0.9132003579826957;
    msg.services.assign("SLLGENKROARDNLNRQJNWIHQIQWYJWUJPWHTZYKHMUFFUKSNVPUVKPEGWEBQHAGCQUIAJQAMDAARTRFXLJBVXRAGYNQGYZFNDJXHPWSBZYJMCITVZMPTRMZKQNSBOQFSBFHOSWIUFHSKBOXZVERTSIJCCGPZMJGUYSXDOMPBVCUIBNLOEOIQHMFDPEBXUYPELMYTVLGXDKVLUOMYTDWVFEBLYIKEXDHIOWHRCFWZKTCNCCSCPDGTVEGA");

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
    msg.setTimeStamp(0.7966001504204696);
    msg.setSource(14038U);
    msg.setSourceEntity(133U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(184U);
    msg.sys_name.assign("OWZIZIOLPYYXLMVDOCVVJFYZLEYSEXOZLNVGSWDKSPHNBZTWEUTKQEFXSOCQSUURUHIKRMNIDFMONQJFFRNROLULLHYMXCGGW");
    msg.sys_type = 66U;
    msg.owner = 10766U;
    msg.lat = 0.38963868984854444;
    msg.lon = 0.8857024519661926;
    msg.height = 0.22514653902585868;
    msg.services.assign("GWIKVEGNUBVDAQVIKHLDOCXLMJUGYRBEXUJFNFBJOAHNRYTBCRHPPVZVEKXMNGZAYCZPMRMTKAWZPA");

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
    msg.setTimeStamp(0.9174645275783122);
    msg.setSource(12076U);
    msg.setSourceEntity(195U);
    msg.setDestination(16033U);
    msg.setDestinationEntity(25U);
    msg.sys_name.assign("SUTMMQOPLVQDSAUZYWNPKQNPLBOXUEMXSQOVYYTBTJSFEJXBIGAUBJIWGGDFFKWILUIQCAOUAMHTIZDBOIMCRJQKJYPEZCDMXNWXEUYZ");
    msg.sys_type = 190U;
    msg.owner = 42809U;
    msg.lat = 0.11514948417568904;
    msg.lon = 0.029543916686987304;
    msg.height = 0.2858083857053342;
    msg.services.assign("KWOGSNJQNMQFGHLYIOLPJXJNYCCKQWJUZPESULYUNFXXZZFHKRLHVTASISMJXEBGFKEPNJBMDDDUGLTKYLORYFNLMZBYBDJTKPZEMKAVFKYCVQJUHOUHDPAIESMSXSTWXDWABZUUEODBMVOTWLQNXCFXQIQSQKRJPPHMVFRBOHWRQIVTZWAJBWEXDCSM");

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
    msg.setTimeStamp(0.8561134385418713);
    msg.setSource(31636U);
    msg.setSourceEntity(138U);
    msg.setDestination(27937U);
    msg.setDestinationEntity(130U);
    msg.service.assign("CVTQWMMZCYOWQBGVDRTHAACUUGBJRLGVSSYKIVJGUNGCBWKDMNHWECSOVXGLGUBHVRBNUEHVGTWHDCIJMQKMSSZOMXWRLPQTJKFIUUFQTQFFVFMFRRCYJOCXBPIXIRNODMEQLXFPAJHNIJEKZANKZRPDSOABXDIEXXKDSSTPOYBQPFVYYWIEALOGLZATNZIP");
    msg.service_type = 39U;

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
    msg.setTimeStamp(0.05273559100662106);
    msg.setSource(44091U);
    msg.setSourceEntity(186U);
    msg.setDestination(39702U);
    msg.setDestinationEntity(242U);
    msg.service.assign("GLVNAMFAPMHQAAEZOYFIGPOTQBUUDRRBMFLDPYRWQDJHMVNAIJJTWBCPUEVIWDFYSFKVUVOFEZHYIJUNPCLVJFEEJTJYDYQCKKSZWVCRHRTXQKNUGTWKXNHKXTQXEZHOFEMUAGNUCSXMLOPODKSBWSDQKJMMSXXGSBGWVIIOZGQNXVINDLIACZJ");
    msg.service_type = 147U;

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
    msg.setTimeStamp(0.709222309578766);
    msg.setSource(23097U);
    msg.setSourceEntity(54U);
    msg.setDestination(20071U);
    msg.setDestinationEntity(129U);
    msg.service.assign("XDASZMBGEEQMFXZDXKIUHJJBPJTHIPBQQVXFGZ");
    msg.service_type = 61U;

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
    msg.setTimeStamp(0.8701627970498789);
    msg.setSource(15618U);
    msg.setSourceEntity(153U);
    msg.setDestination(48441U);
    msg.setDestinationEntity(89U);
    msg.value = 0.2453654514194339;

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
    msg.setTimeStamp(0.5821034089679837);
    msg.setSource(30718U);
    msg.setSourceEntity(139U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(128U);
    msg.value = 0.1605018001573566;

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
    msg.setTimeStamp(0.2290725731218436);
    msg.setSource(32934U);
    msg.setSourceEntity(163U);
    msg.setDestination(22684U);
    msg.setDestinationEntity(84U);
    msg.value = 0.8849453422149649;

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
    msg.setTimeStamp(0.4028433809902585);
    msg.setSource(13242U);
    msg.setSourceEntity(223U);
    msg.setDestination(6355U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8640802929486555;

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
    msg.setTimeStamp(0.7148132586291038);
    msg.setSource(7364U);
    msg.setSourceEntity(232U);
    msg.setDestination(27062U);
    msg.setDestinationEntity(46U);
    msg.value = 0.2825548069399689;

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
    msg.setTimeStamp(0.24011702488498832);
    msg.setSource(52084U);
    msg.setSourceEntity(223U);
    msg.setDestination(30001U);
    msg.setDestinationEntity(48U);
    msg.value = 0.24673061927738438;

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
    msg.setTimeStamp(0.8689574385291612);
    msg.setSource(3381U);
    msg.setSourceEntity(132U);
    msg.setDestination(17068U);
    msg.setDestinationEntity(235U);
    msg.value = 0.26923865389993673;

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
    msg.setTimeStamp(0.5212215870290511);
    msg.setSource(41359U);
    msg.setSourceEntity(104U);
    msg.setDestination(58988U);
    msg.setDestinationEntity(251U);
    msg.value = 0.03508097402850863;

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
    msg.setTimeStamp(0.9839289797026562);
    msg.setSource(6876U);
    msg.setSourceEntity(202U);
    msg.setDestination(42401U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7964153995986345;

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
    msg.setTimeStamp(0.8913566990716735);
    msg.setSource(56018U);
    msg.setSourceEntity(147U);
    msg.setDestination(2288U);
    msg.setDestinationEntity(145U);
    msg.number.assign("ZZHCMFVPTWWPHGQYPMRIQFPYXGCWBQEWFZKODLYPGJHNWQOIDLJCDSGOUYXHLZAFMMV");
    msg.timeout = 41477U;
    msg.contents.assign("ZOKZHEIKACWPGZYOHLOCEVZVCZGKARDCKXLJBKRABCJPIQMBSRJDXFJAAUGGCHCKJBIYFFUSQYBHQKOVPSLJVMWMWOLZTRYGTMWGIWXIYZSXIJGVAORDFEMRPICDQBESOFDGXUVVTPNPGTUHJTMBLNSYYEWQVEDVUZIWTKOEPCTWLRYKPLYPOKQNIFHNSHUPTFSHBRVYWDXJNFBSURXADTLTNLRHNXGNZ");

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
    msg.setTimeStamp(0.5751588434099325);
    msg.setSource(52990U);
    msg.setSourceEntity(218U);
    msg.setDestination(26110U);
    msg.setDestinationEntity(16U);
    msg.number.assign("TOKHDXZVTLQUUHPHOYYCXULHJXEZCXOPCLJOMEVOILSSDSPBXHIDZCKPNFZDAUWVTXUFZDECBWJFTQSUCLMVIGBOEWDPYZKVRLZVNQKILLKKNHQMHFFBEDFNEOKYSRPIWPDRYABVAIZFKWQVPKIMPGFAFXAGRQEPRNNIMOSKGTTWLNZIWWTLMWBYJGXCGFCJBGGATQAWEZSYQROIUNQVBTEGCRCTMMUYJRHRVSGQ");
    msg.timeout = 24946U;
    msg.contents.assign("NOHBXERJYVBPUXOTAZKYZHRZEGSLKQWFLISUEBRRQIDLOWBGFJRWLPTWHPOPGOVMWICFDZWNUJDQHBYCEDSNFSWKXHLQWCSSHQEXMOOPKBYECAVYXGUIMMVQOXBLXXTUKATUJTJGFVYVZAKZFXCAXMGFQYBEASWZLYRAFEBCZENUTCDLKTVYVNHPJJDSSUGJUGDHDHQCKDJINIZZPMM");

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
    msg.setTimeStamp(0.5112749173814584);
    msg.setSource(48576U);
    msg.setSourceEntity(8U);
    msg.setDestination(55091U);
    msg.setDestinationEntity(146U);
    msg.number.assign("RBKGEDUIDAOMJWLQILVIYTHMPSBEACQPIXGVRUMPSHQQJHDVZZTR");
    msg.timeout = 13321U;
    msg.contents.assign("GPWTSFNBYOFZZWKEVTAUAXSBIFSSQYOKWVMDCDFDSMZRYGNPNLAQBJXLLMTFNCBEWBIZOYOOMPKGWTLHREBJKQYUIEVNXYSXADICRFNUITTUCDMZLJAJBLMXUVTNZLRVQQAOHAIVVVTGHMPXEPQGIKU");

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
    msg.setTimeStamp(0.4268670614999175);
    msg.setSource(35835U);
    msg.setSourceEntity(224U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(233U);
    msg.seq = 303018343U;
    msg.destination.assign("SABYYXQPIOPCJKGCH");
    msg.timeout = 41056U;
    const char tmp_msg_0[] = {-102, 105, -28, 67, 71, -21, -16, 70, -103, -64, -77, -37, 41, -62, -83, 121, -65, -111, 97, -101, 102, -55, -86, -23, 117, 16, -84, -117, -8, -87, 96, -43, 86, -83, 12, 55, -127, 100, -54, 77, -22, -35, -10, 36, -1, -8, -58, -91, 93, 4, -33};
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
    msg.setTimeStamp(0.22235829818914676);
    msg.setSource(25967U);
    msg.setSourceEntity(17U);
    msg.setDestination(43872U);
    msg.setDestinationEntity(101U);
    msg.seq = 1979383580U;
    msg.destination.assign("HRVXKXCNCXHQTXBUYCEXGBNIAPEWRMADMPHPNJTGCFHJHPXDSKNAGKUWFTZIQK");
    msg.timeout = 42709U;
    const char tmp_msg_0[] = {-96, 90, -59, 26, 122, -105, 113, 50, -69, -125, 103, -118, 29, 20, -87, 1, 20, -16, -101, 125, 41, -31, -61, 102, 69, -83, 114, 113, -62, -29, 72, -8, 30, 117, 74, -50, 65, -15, -120, 99, -45, 112, -32, 9, 126, -123, -84, 54, -108, 63, -108, -15, 5, 98, -29, -77, 17, 15, 6, -124, 31, 110, -40, 86, -122, 100, 92, 10, 66, 95, -25, -56, 32, -14, -11, -101, -72, -99, -127, 101, 35, -23, 58, -116, 38, 75, -36, 11, -104, -54, -32, -39, -65};
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
    msg.setTimeStamp(0.4579616040981196);
    msg.setSource(45999U);
    msg.setSourceEntity(87U);
    msg.setDestination(1581U);
    msg.setDestinationEntity(207U);
    msg.seq = 331758100U;
    msg.destination.assign("VVWNJFURJNGQVZDJPGKJPXHJEXLDWRCOOBHPCQSDSORFGGFVRLASTOYYXXFDMDRVQVYTSEQLFEWHUUAARCKWIIZAKJCTJTQPRXXWAWCWKNZZCWIEHUSLYSFZM");
    msg.timeout = 46312U;
    const char tmp_msg_0[] = {6, 49, 7, 95, 83, -42, 122, -102, 49, -124, -57, -26, -46, 30, -2, 31, 97, 104, -36, 108, 114, -92, -90, -59, 118, -61, 108, 14, 94, 84, -119, 26, 55, -87, -38, 28, -52, 42, 93, -45, 101, -122, 104, 89, 30, -82, 26, 76, -47, 99, 74, 75, -14, 64, 6, 100, -14, -65, -80, 47, -59, 38, 34, 19, 86, -114, -37, 97, -45, -25, 11, 112, 116, 77, 73, 24, 110, -59, 66, 64, -124, -92, 49, -115, -34, -36, 105, -83, 82, 123, -47, 48, 117, -58, 49, 0, 28, 82, 30, -88, -41, -85, 0, 114, -5, 31, 109, -126, 21, 43, -127, -125, -89, 89, 55, 11, 96, 106, -42, 119, -47, -117, 94, -7, -112, 93, 26, 2, -122, -16, 54, 110, 4, -38, -2, 102, 105, 46, 68, -24, -112, -57, -24, 121, -102, -90, -127, -7, 108, 81, -11, -47, -39, -124, -47, -9, 20, 13, -90, 32, -24, 82, 108, -81, -28, 9, -72, -14, 37, 101, 95, 75, 44, 113, 95, 120, 19, 117, 53, 20, 101, -87, 122, 32, 6, 8, 10, 92, -63, 67, 37, -39, 110, 104, -40, -90, -49, -67, -121, 15};
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
    msg.setTimeStamp(0.9583539857902559);
    msg.setSource(35197U);
    msg.setSourceEntity(224U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(247U);
    msg.source.assign("DFHTKNQCFDENFZWXQIWTQJEAGZUVNPJATWMMDIOZJIPDNLRDBNMXYXMGGMPFKPSEVURCQPGUQRREUFVILFYVPCNGXTDNQUBZNOLIYUFCDLWHXSBISY");
    const char tmp_msg_0[] = {100, 83, 21, 113, -79, 110, 104, 122, -116, 35, 109, -34, -74, -68, -52, 21, -110, -32, -49, 50, -55, 15, -124, 65, -21, -15, -127, -119, 61, -44, -59, -103, 48, 103, -107, 67, -75, 103, 9, 109, 97, 93, 106, 44, -7, 15, -60, -125, 117, -33, 18, 64, -110, 100, -65, 113, 11, -82, 1, 31, 4, -116, 71, -10, -35, -81, -39, 19, -111, 98, -122, -93, 0, -82, 92, -6, -120, 96, 42, -125, 97, 19, -79, -58, -4, -53, 49, -90, -51, -106, -81, -113, 24, 96, -113, 87, 49, 19, -29, 3, -127, -89, 96, 17, -5, -123, 0, -97, -85, -92, 118, 46, -99, 108, 68, -113, -70, 80, 89, -77, -70, -46, 2, -87, 92, -43, -87, -89, 44, -48, 102, 65, -107, -34, 109, 77, 73, 76, 116, -51, -32, -96, -93, -28, -63, -92, 18, -73, -103, 99, 12, -35, -2, -109, 41, 109, 2, -108, -30, -59, -10, 111, -50, -58, -119, -51, 39, -112, -109, 103, 94, -38, -63, -99, 8, 49, 37, -84, 81, -75, -90, 120, 65, 101, 90, 16, 69, 49, 52, -4, 116, -66, -30, -63, -104, 44, 25, -69, 69, 60, 60, -13, -38, 46, -42, 5, -104, 45, -43, -116, -57, -52, 45, 108, -11, -58, 28, 37, -85, -125, -64, 48, 103, 84, 100, 112, -4, 11, 121, -113, -32, 102};
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
    msg.setTimeStamp(0.05048628500540253);
    msg.setSource(37206U);
    msg.setSourceEntity(48U);
    msg.setDestination(14345U);
    msg.setDestinationEntity(45U);
    msg.source.assign("ZEKQSNNYLWPXUXMIVSTSNCYZTEZDROMAXWYOIWQNFQGUWGYRJXYCAKWWPVFGDBPJFSJHHCSNISMUVGKVDTHFBRVLPPMQUNPGJOKXSEHSZRNCZOAXHIHGRGUOOPWXMXLLDKQAHQLZUFJRNBRFEGMOESEYQSZXJDIKBEOPAIBBHYWQTUILMHNADGDYYLRVHRWCVKOLCCBEDKEVIJXUTMZDVYFCOBBAGFRTNMTDJEMAPFTTILK");
    const char tmp_msg_0[] = {23, 10, -32, 5, -34, -80, 24, 76, -33, 7, 85, -94, 61, 36, -126, 17, 14, -30, -118, 28, 71, -78, -24, -121, -113, -1, 1, 42, -59, -33, -59, -101, 78, -52, -92, -22, 8, -19, -55, -62, -120, -97, 120, 126, 22, -109, -126, -107, -19, 118, -70, 56, -62, -41, 32, 87, -84, 72, 83, 65, -58, 61, 24, -27, 62, 125, 72, -41, -9, 6, -80, 8, -54, 63, -23, 13, -51, 32, -63, -82, 23, 69, 55, 83, 81, 97, -126, 43, 26, -64, 113, 97, -48, -98, 34, -15, -104, 111, -13, 102, 32, 22, -23, 87, -18, 60, -104, 53, -109, -47, 14, 84, 109, 48, -94, 37, 42, 12, -110, 25, -110, 25, 40, -43, -73, -3, -111, 6, -101, -112, 30, 34, 114, -128, -54, 119, 9, 24, 124, -37, 49, -30, 101, -38, 58, -103, 74, -32, 66, -112, -61, -58, 44, 116, -22, -6, -128, 51, -70, 126, 82, -93, 64, -92, -46, -120, -81, 6, 84, 90, 75, -113, 104, 25, 103, -51, 9, -80, 46, -44, -62, -115, 21, 125};
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
    msg.setTimeStamp(0.16772244129367997);
    msg.setSource(55253U);
    msg.setSourceEntity(30U);
    msg.setDestination(29925U);
    msg.setDestinationEntity(235U);
    msg.source.assign("UIDQTYZUDLOJAKFNJWPNUBCIHAZLFMRZSCMTLTEEMNXFHGNXZATHEOAGXIHRGLBRSQZDGTLNAOYLIUVJEGEYIZMFUPQKWFVXQEZSPYOFGLQDKDLDTTSOKRPCQCPAXVGJ");
    const char tmp_msg_0[] = {-3, -97, 66, -72, 99, 107, 52, -70, 108, 66, -71, 88, 52, -123, -35, 115, -106, -11, -77, -69, -71, -108, -38, 97, -72, -86, 15, -59, -72, -58, 85, -16, -10, 35, 38, 83, -32, -74, 27, -51, 111, -41, 68, 106, 31, 55, 11, 24, 100, -17, -119, -24, 84, -7, -42, -38, -120, -94, 63, 11, -38, 2, -11, 21, 20, 16, -43, -100, -123, 125, 74, -119, 115, -62, 87, -7, -109, -113, -63, 36, 14, 117, 46, 94};
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
    msg.setTimeStamp(0.9523879428495615);
    msg.setSource(33750U);
    msg.setSourceEntity(79U);
    msg.setDestination(55183U);
    msg.setDestinationEntity(67U);
    msg.seq = 2105986845U;
    msg.state = 185U;
    msg.error.assign("OTDGRGOINOUDUWWTILCGRWBMFEIHYFCJVKWBWGJNCLNOYPEDGJALIBSBWNHSVQYMQBSCIHPJGWLXJXNKRBXYNDVUVPZMUAWAAYAQQHVLONJXAWBAYQEJUQCULYUMJDSLTPZ");

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
    msg.setTimeStamp(0.5949331783826177);
    msg.setSource(31301U);
    msg.setSourceEntity(244U);
    msg.setDestination(13408U);
    msg.setDestinationEntity(25U);
    msg.seq = 4171785430U;
    msg.state = 210U;
    msg.error.assign("JLECBOVQBVGWLKDALGAGSOXJSZWOONYTQXHAUEJYYZCFSUEBKZGRSUSMTXMGBHDPMCOMDZAICIKNVZUDNLYFIZRFXPSKOAQQTRBUPLOMNYXEBMOPDYRZ");

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
    msg.setTimeStamp(0.49932602965093587);
    msg.setSource(7409U);
    msg.setSourceEntity(79U);
    msg.setDestination(6337U);
    msg.setDestinationEntity(93U);
    msg.seq = 1969775210U;
    msg.state = 70U;
    msg.error.assign("BKXDUIKFYEEYGQIZOHBUCMZWSTIGTZMODFKWBVFARMVUVWSGFHQDHQKDATXYALDJRINTVDJFNNPOLWHPJQCJUIYOIUZPVJAXBGCLLEXQYDRFSKPMZRRKZTYVEAZUKGYTWTRAYJGDQVWCEJJNZEYRRZBLAPSXMQBWXYSTDCHMLHLERZJDOLEWTUCXMSSHOV");

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
    msg.setTimeStamp(0.10104851050080976);
    msg.setSource(4277U);
    msg.setSourceEntity(214U);
    msg.setDestination(63870U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("KREVNQXLGSYISKUV");
    msg.text.assign("TAXDWFXPLSCBQXCWACLPBDYQMEMASDLZZZHMUSEGPPQEWONBBGGVKHUSLQFBKENHIIJKSKRCIGFYTZXMLODWOFAMCCPTBZROLUMQAQTAFORVKJMYKVYPAYQQZGDIHTNNNOJKLGPVJXTLUTJSSOGCVNEJVGMTEYFARKDZJJUWQSPFQAJERBUSBNY");

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
    msg.setTimeStamp(0.5912210504952752);
    msg.setSource(16948U);
    msg.setSourceEntity(53U);
    msg.setDestination(4663U);
    msg.setDestinationEntity(46U);
    msg.origin.assign("KIWYZCVZVJRQQPJGEDSAHUJFQGUXBKEPBVLYYHHFNKVEZRFEQSMWADQLXSHZCWROITLMKPGMNCDUNCYLEOEMZRWCBFNRFDUXUVRCVWSYPRUBKFMYALPIASJVOCIGBSFFABNNJQEOXNYYHIKLQXMINCJBWAXUGWPTTUEHGXI");
    msg.text.assign("EWLKFIILUQWVZISOPBJXEAGYTFJGMWFRVPXNXMFYTBSHSAWEUDVMFDMUCBGYBBJKRDJLKOBGFKAXKDZWQKUVYZWPCNZNEQEPWFTETGXJAPSYZYVZXNJPYXMUXAUOAKJMLWJQHTBUNAMKPHNLXPRHPTRIEXHGZDDVQDDTBROCHRIGORLIJVNQVHKHNFITGEIMVCSUYFMQDFAOSPSRCSTVTCUSRHMWOZGLQZ");

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
    msg.setTimeStamp(0.9072673733124005);
    msg.setSource(15965U);
    msg.setSourceEntity(252U);
    msg.setDestination(63879U);
    msg.setDestinationEntity(194U);
    msg.origin.assign("MHJUMGJMLFPIHFBKZEYRCUTHAOZXVP");
    msg.text.assign("VDEMINFVEPZCGAFMPPSBUNKFSTBLAIWXCZTBPIQHAIYCWLFPJHDQSZLGKJAUUKYTVWYSKWLFMODAIRCJGWADCUXLIORYGQDELDABEQZQQHKISSTKFJUTSYWQXBNMOWKHMPVGMNLZVLEVNEWPEHGTGUDOQROINQLFUUGVXAAROJCKMHSACSGXTRBMZERBZKJEZONVFWZTRDYONYBOYDXNGTK");

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
    msg.setTimeStamp(0.1610338573388912);
    msg.setSource(18512U);
    msg.setSourceEntity(231U);
    msg.setDestination(38233U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("EEKGMOVBASUECJFEFMVSBWDSVYIHATQSYDNSHEASSBELXDCUJHFNPHLKDQRNXVMXMHIKJVBJLDRIOJQPYANHORERQYNRORZKZGTJXZIYNMOPNYQ");
    msg.htime = 0.9978709611341808;
    msg.lat = 0.1240871108988939;
    msg.lon = 0.34209921604872007;
    const char tmp_msg_0[] = {-96, 109, 4, 87, -19, -127, 10, -37, 111, -82, 66, 121, -48, -8, 21, -8, 112, -45, -127, 121, -52, -52, 79, -107, -70, 51, 112, -100, 103, -84, -52, -111, -65, -96, 19, 93, -76, -106, 119, -12, -84, 122, -12, 75, -2, 19, 7, -89, 20, -7, -93, -89, 124, -27, 80, 91, -12, 89, -5, -94, 93, -39, 92, -82, 93, -35, -6, -6, -3, -66, 110, 113, 120, 66, 36, -124, 80, 58, 19, 70, -72, -29, 66, 104, -42, 69, -88, 12, 116, 95, -98, -1, -75, -13, 116, 109, 47, -86, 100, 116, -99, 87, -28, -110, 0, -102, 26, -85, 87, -83, 15, 65, -102, -121, -63, -108};
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
    msg.setTimeStamp(0.13676761990395758);
    msg.setSource(34110U);
    msg.setSourceEntity(52U);
    msg.setDestination(49314U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("GWLTMQTPKVAYOONLLLB");
    msg.htime = 0.6432540501135084;
    msg.lat = 0.485026515444099;
    msg.lon = 0.70108170886;
    const char tmp_msg_0[] = {-60, -36, 98, 119, -18, 7, -51, -29, -55, -38, -95, -83, 116, 83, 73, 114, -19, 45, 32, 79, 121, 102, -16, 118, 7, 41, 59, -58, -88, 104, 111, -76, 13, -23, 101, 105, -52, 116, -105, -6, -113, -42, -45, -40, -120, 83, 67, -110};
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
    msg.setTimeStamp(0.36505685568136625);
    msg.setSource(40732U);
    msg.setSourceEntity(73U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("YHLTVCBYHWCDOQDJEXVRFXXNITBFIQVYSMYIVUGBQUZGNXESXBVBWWFWOBYTGOFRAEDDPLNMUOJLGJXDUBKWZJRPFUEBMUWUCMBFCQWRVYLEDZITQAUNREKPKYSSZWCISGJJDJWRMNHQOCFIKVSRFDSTZVAJWCMPRFPYUQGERTLAGSJHMHZKDVAPRAVDAZXNTITUG");
    msg.htime = 0.09543222064749246;
    msg.lat = 0.44989017618061544;
    msg.lon = 0.7252429051252349;
    const char tmp_msg_0[] = {11, -97, 74, -116, -77, 9, -43, -28, 46, -14, 39, 70, -92, -1, 24, 14, -80, 46, -2, -116, 126, -92, -30, -105, 67, -59, -61, -91, 99, -6, -128, -86, -85, 0, 109, 108, 70, -108, -42, 12, 23, 59, -73, -125, 119, -29, 7, 108, -76, 62, 77, 42, -43, -65, 12, 27, -28, 14, -87, -15, -25, 63, -120, 125, 122, 106, 6, 108, -120, -64, 65, -91, 110, 58, 77, -34, -13, 85, 41, 35, -23, -64, -117, 50, -80, 68, -41, 40, 126, -107, 0, -61, -40, -27, 16, 81, -71, -3, -100, 14, -48, -124, -53, 44, -114, -11, 72, -28, -13, -89, 2, -21, -99, -89, -22, -119, -127, 97, 27, -41};
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
    msg.setTimeStamp(0.9184660790475703);
    msg.setSource(57139U);
    msg.setSourceEntity(107U);
    msg.setDestination(64768U);
    msg.setDestinationEntity(197U);
    msg.req_id = 18879U;
    msg.ttl = 22794U;
    msg.destination.assign("XHVKVUCMXMZRQJZNCUIEVOOHIQWPEJBQHHIGDYWIVZBNLGMVHPAJQTURLHAIVTEFVPEYDAJUATMUSSFCMMPCLEBVSJADDYBNKYRHXHAXDKPPHONDAKDWIDEKOLZRKGWUBSABMUXCSXBLKYQRSNJLYJPGMMGBQNFECFNZTDSXZPQZIFKOTOKLFFLXWZCLOCYUMIFJOZSI");
    const char tmp_msg_0[] = {-36, -49, 89, 62, 68, -109, 65, -66, 8, -69, -47, 66, 89, -59, -64, -94, 5, -80, -2, 20, -112, 81, -44, -82, -63, -72, 35, 58, 106, -60, 7, -120, -4, 74, -86, 39, -106, -103, -100, 93, 83, -81, 62, 18, 119, -45, -27, 38, 24, 86, 79, -37, 54, -72, -62, -97, 104, 93, 66, 126, -75, -117, 68, 14, -92, -86, -20, -82, 111, 35, -66, -102, -85, 58, -52, -66, -57, -112, 109, 20, 17, -81, -74, 33, 1, -79, 99, -64, 71, 63, 0, -82, 76, 32, 104, -118, -15, -88, 86, -17, -55, -70, -85, 17, -118, -47, 7, 63, 35, -63, -2, 10, 36, 117, 116, -107, 114, 112, -96, 30, 48, 57, -27, -128, 85, -79, -122, 11, 97, 25, -37, -40, -114, -86, 71, -126, -53, 91, -21, -87, -73, -119, -36, 110, -77, -40, 43, 28, 25, 41, 124, -104, -32, 4, 56, -91, -127, -119, -97, -112, -13, -2, -40, -128, -124, -80, -92, 74, -120, -107, -62, 52, 7, 57, -78, 25, 2, -96, 4, -119, -70, 25, -111, -40, -51, -104, 115, 69, 36, 47, 55, 46, -54, 95};
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
    msg.setTimeStamp(0.9560432984426624);
    msg.setSource(63576U);
    msg.setSourceEntity(189U);
    msg.setDestination(63302U);
    msg.setDestinationEntity(232U);
    msg.req_id = 4111U;
    msg.ttl = 37000U;
    msg.destination.assign("LNTRBMBUUHOBHHPKINFEATSRIYOPIYJNQGCICCWDKNJEMVDPTLXJCKAUWSVRLROIUYMLDZPXOAQLGEDOUKWJKXEETMCUHUZGZIZNSQVVAXYUEXQICSBHXMJTWNCARQOTUTRBHKAQVLYMQFEMGKWFFYTWBVJSNBGVZDRKJWEBOWSDNOMGGMXYXBZTPASJFIGIDAVGBFFXZUKFCFLRYQNLWPXIZOAEWDRHCPR");
    const char tmp_msg_0[] = {36, -68, 7, -41, 32, -87, 73, 94, 9, -92, -82, -110, -56, 66, -69, 44, -13, 23, -31, -42, 116, 46, 41, -13, 34, -23, 22, 66, -113, -33, -39, 125, 101, -86, 13, 91, -91, 94, 65, 79, -86, 71, 119, -111, 112, -92, -58, -125, -66, 23, -73};
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
    msg.setTimeStamp(0.12841479630866504);
    msg.setSource(41572U);
    msg.setSourceEntity(198U);
    msg.setDestination(37987U);
    msg.setDestinationEntity(63U);
    msg.req_id = 31665U;
    msg.ttl = 45956U;
    msg.destination.assign("ONWSVPLCZUQWNTLMZUOXNDYEHMGJOARKLAXWSYDUIQFSWTDVHDRZAOW");
    const char tmp_msg_0[] = {71, 21, -105, 73, 44, 12, -63, 95, 103, 27, -103, -53, 126, -86, -90, -49, 33, -70, 65, -52, 42, 68, -4, -53, 39, 90, 37, 58, 119, 52, 36, 125, 103, 75, -29, -67, 55, 118, 81, 2, -57, 74, 78, 42, -58, -81, -124, -86, -39, -106, 14, -112, 53, -24, -44, -88, 105, -92};
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
    msg.setTimeStamp(0.48412307041439206);
    msg.setSource(11313U);
    msg.setSourceEntity(23U);
    msg.setDestination(9240U);
    msg.setDestinationEntity(132U);
    msg.req_id = 48387U;
    msg.status = 94U;
    msg.text.assign("TCVZVHXKIECGTUGLAQDGUOQGYWFKRVRAEUZXKAIVIBLNEIXGNLKMHKOFUIPPSHYYNJSCBHCWTXWRXSHEJJYQGQVKULXKPCHFTZYBDVBKWRABNNZRWPAKAFPTJFMNOOTCEWKWXIUMXVAZPCHQNCYMPPUDGSQFZBLQSSLEMFIHUOCLGQGDDMEWIPTVOJIDUQCFGLIEASVUSNENBMZARBRYMNESD");

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
    msg.setTimeStamp(0.48677197368779823);
    msg.setSource(45554U);
    msg.setSourceEntity(251U);
    msg.setDestination(46955U);
    msg.setDestinationEntity(197U);
    msg.req_id = 8352U;
    msg.status = 200U;
    msg.text.assign("LPMMJULQQGKFBAECWBMISESBTRAYCTIURCVVWN");

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
    msg.setTimeStamp(0.8602360551698232);
    msg.setSource(26864U);
    msg.setSourceEntity(111U);
    msg.setDestination(18451U);
    msg.setDestinationEntity(188U);
    msg.req_id = 9878U;
    msg.status = 117U;
    msg.text.assign("NPWFSZBERCZJYEGZSZCVCEYLMGMTCTKJGDXHCLDNTMNREQVMCIE");

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
    msg.setTimeStamp(0.3612761909331724);
    msg.setSource(40548U);
    msg.setSourceEntity(139U);
    msg.setDestination(55387U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("RXLKCWFOWBUNKAVTATDRNRHZCNLZSQUQCEZITIDYUPPXFEAUGQCOOCLZUTQHQMVL");
    msg.links = 3675725756U;

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
    msg.setTimeStamp(0.696534794681387);
    msg.setSource(54320U);
    msg.setSourceEntity(10U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("BFYFSXZZKVBJCQFRGNPLZHVOTJYXDJOWIPAVDHTVXREPEMANEZZIOLBFVKFIUQDANEVFCMASKTZYRUIEEYUKOMNVBNIHKWOGAEUDTEPTCVTCOEZGKVHDUZQMYNABLMSJFAXRB");
    msg.links = 3297366557U;

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
    msg.setTimeStamp(0.841618144853788);
    msg.setSource(59940U);
    msg.setSourceEntity(92U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("OVTHPUHTKUNIHTYJTXZEGMQGBQPXBDAEQKZGHJOPSPMBAERKANEIDDUGTEMLCOPUCXVSVZKAZRJRLPYRSLNGOXGMMVJGQXYZUEUFXMBKBQNPBWMMDTAWWVHTXWQRBVSLZRQWCODDGYRZRDLTAEWYAJKDVLXJJLNOHPDDTLBSOMECLZNPICNXKOZUFLOBOIAWICVVKSUHJIQJIIFCSHEFGMWSYFWFYYCHNYIFRTEGKCRQSFCFFSZAUVYXUN");
    msg.links = 624250954U;

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
    msg.setTimeStamp(0.5452237287502095);
    msg.setSource(42200U);
    msg.setSourceEntity(193U);
    msg.setDestination(62102U);
    msg.setDestinationEntity(47U);
    msg.groupname.assign("KWNJULXHEDCDBIYMNYLQSYJUNHGYTNRHIDAEHRKMFWVWBVQNETJDGDCEMEBPDURGFTDZCVPLUZXGMMLMPJHGSZQVCWQPTANAYMFTIYXQOIROEOPBQZSFMIUGUSQKUCBSFOEXAXKCAOBGWRTPYRZUBDBZPTFHLQTQSMOSLYKKJLCVEZPNJKSMNPWVIHAISODOUCIXVRHGRFCJJJKLXDHWIFLXZTVYEICXFAFBUANKAZSWVQEHBPOGZGNOVJWXK");
    msg.action = 211U;
    msg.grouplist.assign("DYTNQXRGLVFCEUXAHTKSAYWANKCUBENZPMJJTNQZZVIQLUFUMQNQHLDAHMNGKROCCZFCPGDSTIQQGDSPYHLVGYVYGOJQLHZONBIMIXWJROBHLWJZVDBEWSILRUEAIJWKCHBFOWFRDXCIXSOSYKBHTMBKAWZVKXOITYPUUWFTLDFWY");

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
    msg.setTimeStamp(0.20003540880371473);
    msg.setSource(53202U);
    msg.setSourceEntity(88U);
    msg.setDestination(51796U);
    msg.setDestinationEntity(109U);
    msg.groupname.assign("JATRSHWIYDROFZLQSJGOKHUNMDHUCNNJKZPFRXZKNVPVTAFZCNVERFJBBUQRBRECYAFGAEIKGUMIUZIVHUTXVBHICOZCPSJHQTDFTNVSCLPAONSDTKJVTQWUSBUYEKZXNQVGCZNMBJXKXMWIKYIHMXALPFPUIFLOOZGYBDTYLWYEXMQAQIW");
    msg.action = 202U;
    msg.grouplist.assign("LTJUSZLJQNPUPJHCVUCANQVWVSGWZAMTKWHBWPFZJZXEURVANYOCJRAYXPYFGUMSZYXNDDLDILDKYXMVYKBKLEEHBLHGYIIVEOITNONUCZSZAEQELNQIZCHGPBGJICLNUEJZHSDBMMKFFXMPHCIURIRGPRLVBAKTCEQWTOSBWYGFDTLFMFNFXSKSWU");

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
    msg.setTimeStamp(0.17895717010344225);
    msg.setSource(32769U);
    msg.setSourceEntity(15U);
    msg.setDestination(42101U);
    msg.setDestinationEntity(71U);
    msg.groupname.assign("NWTGYCVZTVWDDEQTFZFCAUOPMLVZHSDJATVUNQYSNIZEYFRRPQMOOYJPNOHSAVUTPUTTFMIXPCQNUFSZHRTLGWSXBKJZXDBWCLEEILKMXHVYEEOABNFQYJBKHBGWICDEAJNDZVL");
    msg.action = 11U;
    msg.grouplist.assign("MQSNYECAZRJLTZBKGXBLNBYIZKWYRXIUWLOPVDKMXQRPIDHJVTZIFXTMSCQDXCVCHMQUPYFDTSLBTFDKOJHSXROTUZHWEUMFICFGQZSKAOIJBFUESSWBIPCDEKQRECBEJCZCNKEJVFHAJZUWPCQRDSODPUWNIVIBVQGKWJNQGHHJIGKZFNRNTYLYFMSLV");

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
    msg.setTimeStamp(0.04953152709902964);
    msg.setSource(15892U);
    msg.setSourceEntity(99U);
    msg.setDestination(63933U);
    msg.setDestinationEntity(220U);
    msg.value = 0.5568327980368428;
    msg.sys_src = 15811U;

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
    msg.setTimeStamp(0.7039778579687094);
    msg.setSource(44085U);
    msg.setSourceEntity(58U);
    msg.setDestination(56748U);
    msg.setDestinationEntity(107U);
    msg.value = 0.43785810276205095;
    msg.sys_src = 23044U;

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
    msg.setTimeStamp(0.025834188835725858);
    msg.setSource(41060U);
    msg.setSourceEntity(92U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(71U);
    msg.value = 0.11647317918909916;
    msg.sys_src = 9965U;

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
    msg.setTimeStamp(0.32915834693494883);
    msg.setSource(24001U);
    msg.setSourceEntity(250U);
    msg.setDestination(64581U);
    msg.setDestinationEntity(123U);
    msg.value = 0.9690330484406844;
    msg.units = 88U;

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
    msg.setTimeStamp(0.3272224544807456);
    msg.setSource(10196U);
    msg.setSourceEntity(252U);
    msg.setDestination(6730U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5154415500334821;
    msg.units = 50U;

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
    msg.setTimeStamp(0.7117742045360756);
    msg.setSource(10266U);
    msg.setSourceEntity(173U);
    msg.setDestination(1317U);
    msg.setDestinationEntity(127U);
    msg.value = 0.7145995453137728;
    msg.units = 208U;

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
    msg.setTimeStamp(0.5873762419131952);
    msg.setSource(55091U);
    msg.setSourceEntity(178U);
    msg.setDestination(5654U);
    msg.setDestinationEntity(162U);
    msg.base_lat = 0.529706172318004;
    msg.base_lon = 0.2338199519018277;
    msg.base_time = 0.01795705026733485;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 54717U;
    tmp_msg_0.destination = 2555U;
    tmp_msg_0.timeout = 0.16511942268862878;
    IMC::WindSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.direction = 0.8551820107548855;
    tmp_tmp_msg_0_0.speed = 0.5921843945823184;
    tmp_tmp_msg_0_0.turbulence = 0.5083965638923137;
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
    msg.setTimeStamp(0.8455910346424717);
    msg.setSource(27987U);
    msg.setSourceEntity(77U);
    msg.setDestination(23025U);
    msg.setDestinationEntity(159U);
    msg.base_lat = 0.8104353370810176;
    msg.base_lon = 0.9648172065809365;
    msg.base_time = 0.4953335013172333;

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
    msg.setTimeStamp(0.159527511041185);
    msg.setSource(58449U);
    msg.setSourceEntity(212U);
    msg.setDestination(37323U);
    msg.setDestinationEntity(184U);
    msg.base_lat = 0.8684409051011623;
    msg.base_lon = 0.27287036893358674;
    msg.base_time = 0.4017628641726715;

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
    msg.setTimeStamp(0.48797787877012366);
    msg.setSource(13959U);
    msg.setSourceEntity(248U);
    msg.setDestination(37883U);
    msg.setDestinationEntity(141U);
    msg.base_lat = 0.6889036397504543;
    msg.base_lon = 0.3902188875112773;
    msg.base_time = 0.5936682783545588;
    const char tmp_msg_0[] = {9, 66, -97, -73, -81, 113, 61, -62, 26, 61, 124, -79, 74, 73, -98, 71, 45, 3, 37, 79, 70, 1, -107, 12, 41, -93, 87, -4, 55, 120, 108, -105, 86, 6, -84, -93, -75, -121, -34, -80, 80, -70, 6, -79, -55, -85, 54, -33, 19, 18, -14, -117, -77, -47, 7, 27, -69, 91, 59, -107, 70, 66, -93, 110};
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
    msg.setTimeStamp(0.4756534850667462);
    msg.setSource(37207U);
    msg.setSourceEntity(122U);
    msg.setDestination(23330U);
    msg.setDestinationEntity(90U);
    msg.base_lat = 0.8155448323475551;
    msg.base_lon = 0.6278733281719308;
    msg.base_time = 0.17900164928127482;
    const char tmp_msg_0[] = {110, 84, -49, 58, -106, 3, 68, -91, 28, -120, -63, -3};
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
    msg.setTimeStamp(0.37339820505485677);
    msg.setSource(36603U);
    msg.setSourceEntity(44U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(9U);
    msg.base_lat = 0.8530057021890934;
    msg.base_lon = 0.8072689932207618;
    msg.base_time = 0.09787361126967264;
    const char tmp_msg_0[] = {-28, 68, 52, -70, -65, -7, -112, 75, 11, 118, 97, -4, -124, 102, -39, 22, 22, 89, -100, 81, -33, 27, 16, -77, 40, -122, 4, 66, -2, 115, 92, -29, 82, 51, -124, -18, -34, 41, -10, -37, -28, 114, 34, 111, -17, 21, 40, 96, 94, -89, -18, 119, 33, 90, 36, -6, -89, 109, -55, -53, 30, 80, 53, -81, 109, -111, 10, 0, 125, -3, 109, 58, 18, -12, -115, -82, 96, 56, 89, -39, 121, 0, 16, 13, -59, 52, 107, 65, 67, -73, 17, 14, 62, 65, -21, 11, -103, -86, 44, 41, 20, -64, -68, 44, -7, 47, -56, -66, -23, 106, 45, 21, -101, 79, -107, -108, 20, -114, 115};
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
    msg.setTimeStamp(0.0732383661675754);
    msg.setSource(56253U);
    msg.setSourceEntity(195U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(109U);
    msg.sys_id = 28065U;
    msg.priority = -3;
    msg.x = 20336;
    msg.y = -4583;
    msg.z = -4884;
    msg.t = 275;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1544396593U;
    tmp_msg_0.state = 102U;
    tmp_msg_0.error.assign("LHFQJOMLIVDBQBKXWJVFTBIXQUWYRYAMRKGIKZXNERANWJYSZBWOXQPVOMNIWRRFLUTFXATEORE");
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
    msg.setTimeStamp(0.9162144455906988);
    msg.setSource(10524U);
    msg.setSourceEntity(108U);
    msg.setDestination(61292U);
    msg.setDestinationEntity(56U);
    msg.sys_id = 26739U;
    msg.priority = -2;
    msg.x = -5485;
    msg.y = 32059;
    msg.z = 24113;
    msg.t = -18262;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 66U;
    tmp_msg_0.label.assign("TAXGKGPNEEYWEHFVFCDOPNYVDDDSDKRTHTSCYLBQMLFCIBUAQRMCJXGUGUOVWRLWOUDXJBLUFRXWRTGZISWZRZYPZRNVBNAALGAQHHXXCSLBEINMCKTNBMNBNSUISEQIACRFGUHNPZYOQYHDOJVZTVWPUYDZVMSRLJ");
    tmp_msg_0.component.assign("YYJYNXKELVRECPNEQWVZLSUCSSFFXWSTYXFIZQRTVJIDOFZRCCAJDAFPKGBEHHOYIWCKXJLFHEGDJTCHKKIHVFZKBJFHLGDQTIWBAVQOKHLOQUIEDDGQSPMBNAQSTUVCYKMHZWRFMMPUXXWQZXOJBGGISARVEBERRGJLAIZNDYQABRVDNWXONUMHCGMLPIINBTZRBAPSLKNUQYDJTPATZBPMGVSYXTOU");
    tmp_msg_0.act_time = 62095U;
    tmp_msg_0.deact_time = 19752U;
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
    msg.setTimeStamp(0.6576452578383948);
    msg.setSource(41231U);
    msg.setSourceEntity(246U);
    msg.setDestination(21911U);
    msg.setDestinationEntity(137U);
    msg.sys_id = 61311U;
    msg.priority = -88;
    msg.x = 8438;
    msg.y = 11052;
    msg.z = -21001;
    msg.t = 18173;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.21385971646363633;
    tmp_msg_0.units = 130U;
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
    msg.setTimeStamp(0.3132984122609207);
    msg.setSource(25976U);
    msg.setSourceEntity(141U);
    msg.setDestination(8253U);
    msg.setDestinationEntity(208U);
    msg.req_id = 60389U;
    msg.type = 53U;
    msg.max_size = 53862U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5351821642113023;
    tmp_msg_0.base_lon = 0.5636484143206127;
    tmp_msg_0.base_time = 0.5319119038076785;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 43882U;
    tmp_tmp_msg_0_0.priority = -54;
    tmp_tmp_msg_0_0.x = 8566;
    tmp_tmp_msg_0_0.y = 27455;
    tmp_tmp_msg_0_0.z = -15764;
    tmp_tmp_msg_0_0.t = 6717;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.action = 136U;
    tmp_tmp_tmp_msg_0_0_0.lon_gain = 0.44607661827203415;
    tmp_tmp_tmp_msg_0_0_0.lat_gain = 0.6021322605641714;
    tmp_tmp_tmp_msg_0_0_0.bond_thick = 0.4130078673555493;
    tmp_tmp_tmp_msg_0_0_0.lead_gain = 0.17866843093687934;
    tmp_tmp_tmp_msg_0_0_0.deconfl_gain = 0.9774551662631825;
    tmp_tmp_tmp_msg_0_0_0.accel_switch_gain = 0.5992087819082067;
    tmp_tmp_tmp_msg_0_0_0.safe_dist = 0.8770788565807179;
    tmp_tmp_tmp_msg_0_0_0.deconflict_offset = 0.7378095099886041;
    tmp_tmp_tmp_msg_0_0_0.accel_safe_margin = 0.842340547361442;
    tmp_tmp_tmp_msg_0_0_0.accel_lim_x = 0.3867001817885388;
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
    msg.setTimeStamp(0.37512232267679047);
    msg.setSource(49103U);
    msg.setSourceEntity(94U);
    msg.setDestination(55007U);
    msg.setDestinationEntity(83U);
    msg.req_id = 27575U;
    msg.type = 120U;
    msg.max_size = 15914U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6335849690990455;
    tmp_msg_0.base_lon = 0.9719364288141191;
    tmp_msg_0.base_time = 0.16675265405100204;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 42111U;
    tmp_tmp_msg_0_0.priority = 91;
    tmp_tmp_msg_0_0.x = 30279;
    tmp_tmp_msg_0_0.y = 8267;
    tmp_tmp_msg_0_0.z = -18640;
    tmp_tmp_msg_0_0.t = -29897;
    IMC::VehicleMedium tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.medium = 181U;
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
    msg.setTimeStamp(0.604975514058348);
    msg.setSource(43903U);
    msg.setSourceEntity(132U);
    msg.setDestination(27934U);
    msg.setDestinationEntity(13U);
    msg.req_id = 54908U;
    msg.type = 128U;
    msg.max_size = 45884U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7621094372255962;
    tmp_msg_0.base_lon = 0.5482940690096739;
    tmp_msg_0.base_time = 0.6848986882647541;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 60743U;
    tmp_tmp_msg_0_0.destination = 39037U;
    tmp_tmp_msg_0_0.timeout = 0.8193599363641891;
    IMC::NavigationData tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.bias_psi = 0.48086695725646167;
    tmp_tmp_tmp_msg_0_0_0.bias_r = 0.4022500091665925;
    tmp_tmp_tmp_msg_0_0_0.cog = 0.5258339579790752;
    tmp_tmp_tmp_msg_0_0_0.cyaw = 0.42247628742366716;
    tmp_tmp_tmp_msg_0_0_0.lbl_rej_level = 0.2189235398189816;
    tmp_tmp_tmp_msg_0_0_0.gps_rej_level = 0.3087064378035139;
    tmp_tmp_tmp_msg_0_0_0.custom_x = 0.5374260657509956;
    tmp_tmp_tmp_msg_0_0_0.custom_y = 0.37680774377124093;
    tmp_tmp_tmp_msg_0_0_0.custom_z = 0.7259717189325215;
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
    msg.setTimeStamp(0.1292423523630759);
    msg.setSource(60125U);
    msg.setSourceEntity(221U);
    msg.setDestination(50319U);
    msg.setDestinationEntity(232U);
    msg.original_source = 38732U;
    msg.destination = 15840U;
    msg.timeout = 0.004110299081150015;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 180U;
    tmp_msg_0.clock = 0.8925172957597997;
    tmp_msg_0.tz = 112;
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
    msg.setTimeStamp(0.5234778767857815);
    msg.setSource(38603U);
    msg.setSourceEntity(245U);
    msg.setDestination(4604U);
    msg.setDestinationEntity(171U);
    msg.original_source = 58108U;
    msg.destination = 34978U;
    msg.timeout = 0.5602995136042497;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.8105300634469372;
    tmp_msg_0.lat = 0.5622106406502255;
    tmp_msg_0.lon = 0.7933099354585499;
    tmp_msg_0.z = 0.6177746382379049;
    tmp_msg_0.z_units = 185U;
    tmp_msg_0.travel_z = 0.25110327745455585;
    tmp_msg_0.travel_z_units = 188U;
    tmp_msg_0.delayed = 179U;
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
    msg.setTimeStamp(0.49680975843296915);
    msg.setSource(46717U);
    msg.setSourceEntity(111U);
    msg.setDestination(17708U);
    msg.setDestinationEntity(163U);
    msg.original_source = 4451U;
    msg.destination = 22207U;
    msg.timeout = 0.6539455942323154;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 133U;
    tmp_msg_0.op = 157U;
    tmp_msg_0.request_id = 55885U;
    tmp_msg_0.plan_id.assign("HDBVZKTNDLDUFSLCKZFQFCYMJJUFGNZCYCVWRNTMTVPJBGSLDYJOKTMZIWUMAHRLOJWWWAIJGRQWJCBYLNIOBDKZFBYIRPAQEXUDDLLXVEYSAQSWGRITCQGPVHTKOXRHUBXUWPVAPISIUGHMRTEVKPQZWENXJZDVHEZEAGRKULCFPYXMSVXTZNHDDCB");
    IMC::AcousticLink tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.peer.assign("JOUEDKKLTXJBPUVDLHMICMCODEXNYTXJATWZUPMGKAHSTPTPQVENMINWSJWWNUFHVEJBHSAOYBMFUGZLWWUGSXPRTQRLVCPIEXLCQHJVBSWOINHP");
    tmp_tmp_msg_0_0.rssi = 0.2919638117309775;
    tmp_tmp_msg_0_0.integrity = 61222U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("OKBNLENVVICWQKNSGYMJAYDBJIRTZATNUOBWCMSRHTUOPUXGVUUDEBDTFAFWTFZXKKXKCXZFTBWMCFAAJVFXQQXVFBKGRBUL");
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
    msg.setTimeStamp(0.35249636004141705);
    msg.setSource(40564U);
    msg.setSourceEntity(222U);
    msg.setDestination(60198U);
    msg.setDestinationEntity(103U);
    msg.type = 70U;
    msg.comm_interface = 1648U;
    msg.model = 28035U;
    msg.list.assign("JFVNBMFTCBRDLEZNGCBDSLRNFTNGUTUYGQJEIEXVKEXSWNMVCINDGKFDQSOHQCOZRYTHXSNTYHLZKTTBKVIHMAWXRERJTOLPXUNRMVLMLJMPUAFQWGZYKEFFHQFJKBTSDAUPGAWCVRJPWSZICURTJQWPMXCIHQOUZIRCAGVZOUXWOHOLKEYXFDQONAXXVKAZSBDAUBYEQKGRBPAAM");

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
    msg.setTimeStamp(0.19922517762453806);
    msg.setSource(2553U);
    msg.setSourceEntity(229U);
    msg.setDestination(40723U);
    msg.setDestinationEntity(51U);
    msg.type = 251U;
    msg.comm_interface = 64711U;
    msg.model = 50326U;
    msg.list.assign("OTZEOFOTKVKKJWSQSUQVLXYEJTTTAGQUAJTVSLGTXECRGRDLMRSNUCPHMHXCPUIUK");

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
    msg.setTimeStamp(0.3972526885772414);
    msg.setSource(62345U);
    msg.setSourceEntity(250U);
    msg.setDestination(46497U);
    msg.setDestinationEntity(174U);
    msg.type = 224U;
    msg.comm_interface = 8886U;
    msg.model = 7426U;
    msg.list.assign("JOSQBHDBSUEJGSORGFMAZTGMSMNKGBZPJIXVDYDTYZEXCEQWFULRZMYVEHAJMWAKDIGLLZNDOVTZEYFWFOJOHTNBZPYJWFYXCQQXAUZQTRFNVLRDOBML");

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
    msg.setTimeStamp(0.3648539409870042);
    msg.setSource(38978U);
    msg.setSourceEntity(117U);
    msg.setDestination(61385U);
    msg.setDestinationEntity(73U);
    msg.type = 135U;
    msg.req_id = 3013446255U;
    msg.ttl = 14006U;
    msg.code = 185U;
    msg.destination.assign("VNNGFDIFZGMYXHVNOIYXLSPWACRZXPTUECLEAIPISMIUWPSBJCOQSMEDETYOUOGUYHQSXBXSCQJGDQBNAWKAOHQPMOAZLKRAPSJMFVNTHYMXKUJQJOZUDBCQYPJDZRLIURRMHGGBDRLICQVJKTEVPWCEGYDMHECNWFPLGKJFBLZADILSBURBFDXCVVFFEAZLY");
    msg.source.assign("TEWNOVMMYAXLQPWDDXOFCQ");
    msg.acknowledge = 95U;
    msg.status = 242U;
    const char tmp_msg_0[] = {111, -41, 106, -107, -52, 91, -108, 103, 114, 59, -39, -110, 9, -70, -80, -116, 84, -5, 79, 54, 102, 8, -24, 105, 12, 15, 3, 79, 85, -27, 54, -124, -72, -17, 35, 1, 112, -106, 108, 66, -24, 76, 6, -29, 109, 16, 28, 6, 115, 84, -17, -61, 97, -68, 77, -105, -95, 66, 82, 5, -82, -47, 115, 55, -1, -3, 30, -88, 1, 22, 67, -58, -29, 32, -33, -123, 91, 60, -123, 117, -30, 31, 77, 9, 7, -19, -74, 52, 58, -125, 81, 1, 52, 28, 115, -54, -26, 60, 115, -63, -70, 91, -62, -84, 120, -69, -15, -16, -1, 29, -31, 48, 21, 61, -110, 89, -13, 118, -40, 117, 67, 104, -16, -84, 35, 15, -11, 122, 51, 55, -19, 90, 86, 49, 90, 108, 42, -17, -4, -2, 86, 77, 89, -116, -64, -78, -59, -24, 104, -71, -23, 31, -127, -106, -67, -3, 12, -125, -27, -58, -51, 5};
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
    msg.setTimeStamp(0.09361037230013936);
    msg.setSource(38793U);
    msg.setSourceEntity(241U);
    msg.setDestination(43698U);
    msg.setDestinationEntity(191U);
    msg.type = 7U;
    msg.req_id = 3862299601U;
    msg.ttl = 31603U;
    msg.code = 251U;
    msg.destination.assign("RRWEMGXJVUXRYMAOWYQEXXVOYBKRFJHPCYJPCMKKZIUTZFSVBYANQJCRZLIAGBXWO");
    msg.source.assign("YSGAYYMFFKKQOIBXMRGAULWGTQESWNEECCMNEXHHJUZIBYDOBZBUXOIAXPIXNCTHKYCHAZWYKGMLJJNPRQESVNBDVSJEQQCBRQXOSQEHGPJRZDUKLBJKRSWCVJAYAUJXANTUFFNXHZOGTGOOIPRRPTMSUFNIDTVBLWGIMKMMLLVDLZLAXSWUKIFCQZOWLNZDPZBVV");
    msg.acknowledge = 101U;
    msg.status = 32U;
    const char tmp_msg_0[] = {73, 92, 109, 101, 77, -36, 30, -105, -6, -55, -42, 52, 62, 113, -38, 50, 91, -17, -103, -126, 55, -111, -38, -30, -66, -110, -103, -31, 106, -40, 109, 59, 79, -1, -26, -101, 47, -110, 101, -116, -57, -82, 38, 71, 98, -118};
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
    msg.setTimeStamp(0.24370381680599973);
    msg.setSource(17808U);
    msg.setSourceEntity(118U);
    msg.setDestination(26547U);
    msg.setDestinationEntity(106U);
    msg.type = 42U;
    msg.req_id = 2540352532U;
    msg.ttl = 15621U;
    msg.code = 161U;
    msg.destination.assign("FVIQVOYMFAIJFHSXIDGVQUUYBMYNEWCRKLGVKKIZGMNUEEPSHGVUXOASYDATSNVDWEXXKIOPXKZZHXCLVHOUGQEYSQUITKBERVNXFROOCAKNTWQMBLJCMBXXYBJQGQGUZBXTLQOAPHT");
    msg.source.assign("KDRUQPUBASNXSTMOHUZGKWIXHETQTLCDCFEDYVMVWWGPUUWSYYWJPURSHQUAFPHZNIEOPGXIHVMKANXZMHYBNEAIKZQHYTQEMNYRZGJDZOBIPDTDKFBKOCVTENIOHCVLSSCXYNMPYAGRFUXDIALEIUEOGLVZZATZCNAJCNLSFIMKSRWGJLJOBQKMNJKACRVBZLVJLJVPHHBBWFBMF");
    msg.acknowledge = 113U;
    msg.status = 23U;
    const char tmp_msg_0[] = {-93, 121, 95, -88, -124, -127, -112, -14, 25, 56, 119, 54, -54, 21, 36, 108, -75, 6, -104, -114, 117, 63, 35, -13, -79, -58, -11, -69, 29, 88, -123, 112};
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
    msg.setTimeStamp(0.3369540659366572);
    msg.setSource(47139U);
    msg.setSourceEntity(129U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(249U);
    msg.id = 14U;
    msg.range = 0.2492209031401449;

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
    msg.setTimeStamp(0.4101286390872553);
    msg.setSource(63574U);
    msg.setSourceEntity(20U);
    msg.setDestination(20007U);
    msg.setDestinationEntity(64U);
    msg.id = 12U;
    msg.range = 0.562214542685234;

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
    msg.setTimeStamp(0.2797438265533928);
    msg.setSource(12633U);
    msg.setSourceEntity(114U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(212U);
    msg.id = 170U;
    msg.range = 0.18975111260223954;

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
    msg.setTimeStamp(0.15630748513459047);
    msg.setSource(22581U);
    msg.setSourceEntity(242U);
    msg.setDestination(170U);
    msg.setDestinationEntity(61U);
    msg.beacon.assign("LRDMFACEMCRONIGSKTBGESWQFCAYSUOQGTFCPUVZCDWYVFBTEHWIFWWWGMUDXKACLZGOSNKVFKIFEJYRGHEMKDBHPGFBDJMPEYHJVXQVUOJBVOXIQZASBYNFMCNLLRZCNBGMOKPLWBUTQBAUZZRXVKDVOPJMVPLGLTUZVAOBISEISZWQYKWJUSEPNIEXESXHRNKTCYADRJPXWXPLHXAIRSODGA");
    msg.lat = 0.9849512344960105;
    msg.lon = 0.9419159395545686;
    msg.depth = 0.06369750261301665;
    msg.query_channel = 112U;
    msg.reply_channel = 93U;
    msg.transponder_delay = 70U;

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
    msg.setTimeStamp(0.7014722105894331);
    msg.setSource(25102U);
    msg.setSourceEntity(136U);
    msg.setDestination(17371U);
    msg.setDestinationEntity(222U);
    msg.beacon.assign("TRLNUZQFWZWTLJEOSBKYMRZTXXPGUFVGAQFVAKYCUWJXUSXVKHBMZYXHHSOCRIJKQAOCRBODVYPKXWMUSKNFMIPJJFGPWDRCJIWPGHVEYMRCWNDXGKCIZMVADHVPWQVYUZNPLZMLDYNGRWQQEMXMEYYIQHMODCASUKHPTLELPAQYDGCOSSBTNDUBJRBHJFFWCFVZTTGFXIIEORFZTBLGNIINGLOLIXUQBUNHSEJZAA");
    msg.lat = 0.03274532700777111;
    msg.lon = 0.3363026681744524;
    msg.depth = 0.8897048505440248;
    msg.query_channel = 74U;
    msg.reply_channel = 1U;
    msg.transponder_delay = 220U;

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
    msg.setTimeStamp(0.4806930427057793);
    msg.setSource(27702U);
    msg.setSourceEntity(252U);
    msg.setDestination(11236U);
    msg.setDestinationEntity(131U);
    msg.beacon.assign("IKVQJVOJSAAIYHZDXWHAWSXDBXGIDCGYROEEBZPKTXIDRTNEPBRNAJQSEJQXUFQJSUBBRGBCULLDJTAYWKYJHUSUVSHVKAQFUOECDYGROPYELOXTZWTSNLFDOGLVLKMIOWHHQMYFVHLNNFUSFMKVEXGHZFLPDPBVHGATIWNXRRTHPWUYOKYGNMBJECQITUMEZIQOYJLQWKZCAWOZMXAWMCPNGBRKFZXECZCSCNF");
    msg.lat = 0.056618488225669616;
    msg.lon = 0.3754307971823647;
    msg.depth = 0.7788456240481958;
    msg.query_channel = 187U;
    msg.reply_channel = 253U;
    msg.transponder_delay = 115U;

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
    msg.setTimeStamp(0.789241432545172);
    msg.setSource(33731U);
    msg.setSourceEntity(172U);
    msg.setDestination(40253U);
    msg.setDestinationEntity(11U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.31512225754298273);
    msg.setSource(22257U);
    msg.setSourceEntity(39U);
    msg.setDestination(45873U);
    msg.setDestinationEntity(198U);
    msg.op = 51U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FMLOAJPCEBFVYKTYNUHQIEPQHKINFQVXOLNQMDMZLIPINRKWPJZRZMJSOEGINXVJKABXOYVWGUCDLRSQAQ");
    tmp_msg_0.lat = 0.22733345501804492;
    tmp_msg_0.lon = 0.8625423754673082;
    tmp_msg_0.depth = 0.7473758845167492;
    tmp_msg_0.query_channel = 223U;
    tmp_msg_0.reply_channel = 197U;
    tmp_msg_0.transponder_delay = 73U;
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
    msg.setTimeStamp(0.2203856662378193);
    msg.setSource(37789U);
    msg.setSourceEntity(144U);
    msg.setDestination(59852U);
    msg.setDestinationEntity(4U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.38994559862414246);
    msg.setSource(10585U);
    msg.setSourceEntity(109U);
    msg.setDestination(50332U);
    msg.setDestinationEntity(128U);
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("XHTNYPPUQZREFLMTUGSTDENNGMUAILTDYZHUSDNMKOZYWFBOLTHRKZHTPQCXYVCXXIWZEEQMGSSPJLMVLRYCFWLDODVHDJOANHJJJLSKFFGPWZGRBREJMXQPQVVPERYQUZYCCSMAZVVWLUYOFWNBBCNNGSPVZOOCVATIRTIHCKQFKGIINUJTKWFYMLUSWNDAQMSGXUFXQMDOJHZBXWOAEPBCKCLTEXQUKAFREGJPDGAWIKIOERIBHKRBSDYAJ");
    tmp_msg_0.lat = 0.37417631705001686;
    tmp_msg_0.lon = 0.755851320782909;
    tmp_msg_0.z_units = 177U;
    tmp_msg_0.z = 0.06894015105407159;
    tmp_msg_0.accuracy = 0.8319595877840468;
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
    msg.setTimeStamp(0.33639880755021956);
    msg.setSource(20549U);
    msg.setSourceEntity(146U);
    msg.setDestination(4800U);
    msg.setDestinationEntity(97U);
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.8367372932978878;
    tmp_msg_0.speed = 0.6561478631540703;
    tmp_msg_0.turbulence = 0.03086447146790383;
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
    msg.setTimeStamp(0.38588744700960653);
    msg.setSource(26534U);
    msg.setSourceEntity(84U);
    msg.setDestination(54125U);
    msg.setDestinationEntity(231U);
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LBLCKZUWFKEJHBWQHPJGCQQAECYNFBFTZDPLKFMWEVFKHNABTQSMQINMOGKTQWOXD");
    tmp_msg_0.attr_type = 107U;
    tmp_msg_0.min.assign("GGQEJAOHDFRESYCGJBPPKBSHLTOQDHCHZGDYKXEIILCPSUUEZEWVIOSLQYPIFZOUBVKFMIXORMZWSRUTUOMUBFSFIRGRCQQWPLWAHVTYAOMQFDGXXNDQIXXXZWKXZBUYWBMDPJNHCLYPDZHSNRJNWNWUDLJCKAYHECSQGKMTYGKPRT");
    tmp_msg_0.max.assign("BQZJNIRWEMANFOIKFTOKWHLQ");
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
    msg.setTimeStamp(0.4243977263794879);
    msg.setSource(59634U);
    msg.setSourceEntity(182U);
    msg.setDestination(60322U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.6181673868950978;
    msg.lon = 0.3340417624454174;
    msg.depth = 0.3164756247504473;
    msg.sentence.assign("KWWFGTLBDFWTUZIVIESXVYRMPOMQKHOLPXEHCTIUBUWIUFPBGKRQKQNCOSXCWONXJHJKPDQXGWIGBZ");
    msg.txtime = 0.12393344223824099;
    msg.modem_type.assign("GPFVSAKXQCELENOHCOYHJIWFQJNMNJBVYZDCQWWTVFYDKYOEHXZQKLGFHPPIYNPRVTOUMIANSMCKDOCTRKKPMHYEVEXEJWKQACMRMMLAORDIPIDEPZECZRVAIHMWDBSYIJHWZAVQRJBBZNUGOZVLUXULNQRGATUGTNAXXUPWGVOBRULNBVSPJYHEBYULORLELTIDHKRC");
    msg.sys_src.assign("MHUPALPMHSZFVCMDZRCJVYYASMSRPZOQOASYGYDYBMZYBPJDZFEUNIIIRJDPYJXRHQMKJCPKWJHHTNUBXTWCFLTIEFXMGCQOBOQHHKKDMTFBAUURQLQAZLUWOIGGGEEUPAGTRJLGSNRKZUYOYSDOANSXLCMNXSIKNTFCLOJKBEIACZVPBZTWLELEDXVBVWUXQDXSBOJYGDEWAGKRWTIXFKVQWNNFVEHTZREVAXCPNWHDCIOGLFSTWMKIBNUQQ");
    msg.seq = 23431U;
    msg.sys_dst.assign("HNMDJCWSRLWVGEEYJDTXNVEVIARPUFWHTWXUN");
    msg.flags = 251U;
    const char tmp_msg_0[] = {89, -73, 54, 5, -69, 11, -28, 49, 42, 117, 8, -8, 101, -122, 95, -13, -64, -31, 66, -117, -45, -68, 22, -96, 35, -3, -121, -74, -53, 101, -62, -79, -65, -99, -61, -5, -95, 62, 66, 115, 11, -15, 64, 45, 43, 61, -10, -91, 24, 83, -17, -125, 113, -120, -64, -51, 86, 42, -81, 32, 105, 79, -14, -88, -104, 117, -1, 85, 89, -94, 14, 86, -29, 15, -52, -4, 126, 19, 66, 10, -1, 124, 103, -43, 10, -75, -87, -41, -43, 118, -9, 51, -53, -69, 97, 12, 34, 40, 20, -35, -37, 29, -26, -97, -12, 99, 100, -105, -19, 14, 5, 87, -102, 34, 19, -96, 67, -95, -66, 25, 109, 97, -48, -39, -1, -61, -125, 110, -86, -48, 59, 80, 124, 67, -45, 52, 62, -28, -19, 7, 8, 50, 65, 100, 108, -103, -85, -71, -81, 40, -116, -7, 68, -67, 120, -116, 86, 58, 75, -65, -82, -68, -101, 14, 53, 22, -91, -21, 40, -56, -64, -109, -3, -4, -20, -27, -36, -47, -94, 122, -67, 38, -69, 67, -80, -100, 81, -67, 117, 34, 5, -127, 19, 54, -76, -37, 14, -90, -80, 58, -57, -49, 14, 19, -65, 118, -6, 11, 74, -57, -24, -31, -14, -113, 88, -71, 24, 106, -85, 74, 71, -24, 112, 64, -69, 72, 73, -65, 47, -5, 47, 38, 51, 39};
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
    msg.setTimeStamp(0.27693549616473623);
    msg.setSource(43775U);
    msg.setSourceEntity(153U);
    msg.setDestination(6156U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.12165232383950897;
    msg.lon = 0.9940755826528653;
    msg.depth = 0.7663225732156893;
    msg.sentence.assign("EPEHLAHWVVGCQSFFSLXJKEPYYDVKEIUBHHTZCTAZOQUDVGBZSQGANNDXXZTAVJJRBYKEVJEVWEJRKYUAWMBMBTXMWCXIGDIBZYWJTTCQVNXVUKZUDNEOKSHUFLKMJCKDFOTBMZLMPIRUOCHNPSCRAKSPFFSQOWOQOSCRBOSGDIPAHDTBYPFJ");
    msg.txtime = 0.5156870783822883;
    msg.modem_type.assign("DEBMQGLTOKGAOILHZLVMSPOVYXKOYPAGDESEFIZYHZLQYDNGQIKYUYZDXXLWZSWVYJNUHTCOKOXJECLGHQQGIFZMWCUEPMCXRSNJPCVLIJFOUACPSRDRYBRQUMEGZJSEKDBBTVLHJSAHKZACVWQNAUZMVDIJRZKFRIPJVOAWXIHQTSMKDBTSIJHTDWTCUXKARGJPGEEMFYN");
    msg.sys_src.assign("MSMOVKJWGCFFCRJDXWVWZDWEGJCMBQFZVPIECHONBSVWSZBLPT");
    msg.seq = 42975U;
    msg.sys_dst.assign("UXCAASDGALBIFDREQCYFVJOWWZCLWRJKOSCKUNNWHCBSDVIVQZZHWSEETCKNIDJGHSOUKJWVTUIFXALIWFSPTMZTGESLOUPGCQYNKEMNTPFUOQXFZRMMQGBTIFIIORMIHXXGBZRRODJRHUJLTGNGEZNBFKBXMVFYSHCOBAQKJWEEOEPGUTZEZQBRMYCLAPYYVKDXVQ");
    msg.flags = 50U;
    const char tmp_msg_0[] = {60, -74, 15, -49, -5, -119, 111, -84, 114, 49, 100, 120, -121, 54, -113, -4, 50, 107, 40, 53, -59, 5, 98, 126, 96, -31, -90, -8, -71, -88, -110, -16, 55, -126, 14, 98, 85, -2, -109, -36, 58, -102, 57, -102, -15, 7, -2, 20, 38, -2, -117, 17, 92, -119, -20, -53, 15, 68, 17, -39, -86, 106, 118, 116, 31, -60, -90, -83, 44, -34, -29, 29, -128, 77, -98, 56, -41, -98, -97, 7, 74, -12, 46, -72, -64, 98, -128, 99, -56, 121, -11, -72, -27, 55, -105, -50, -2, 105, -40, 110, -123, 50, -113, -79, 83, 70, 105, -55, 36, 53, -20, -69, 46, 26, -54, -122, -23, -60, -96, 119, 33, -76, 37, -102, -38, -87, -118, -38, -88, -52, 49, -97, -107, 39, 80, 13, 122, 39, -111, 111, 103, 102, -71, 52, -87, 66, -89, -28, -3, -48, -56, 98, -111, 42, -124, 60, 51, 53, -91, -82, 84, -64, -97, -61, -41, 103, -73, 97, -79, 11, -72, -112, -16, -86, 65, 45, -15, -35, 112, 27, -52, -102, -77, -73, -101, 71, 50, -112, -37, 115, 70, -23, 68, 77, -11, 74, -81, -18, 26, -106, -70, -100, 107, 71, -24, -76, 77, -62, -8, 116, -48, 48, 68, 87, 5, 105, 43, 117, 121, 21, -6, 112, -90, -59, 63, 67};
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
    msg.setTimeStamp(0.755702232979879);
    msg.setSource(9188U);
    msg.setSourceEntity(144U);
    msg.setDestination(48281U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.6813984345874549;
    msg.lon = 0.15179700810772867;
    msg.depth = 0.525461857073053;
    msg.sentence.assign("QZZEJKIJSQCLFDPCOSVECOPOWNYTTZMFXBBCNXAFTHAVRIPUXSOHAMZKRNUNEFHUXZHRGEPLXEMXJVSRTNCQYTJAAHMRJPJPRDWAFWUOFKICDUGTXPZBNDFDMILJKSLDGKBLEVOMXFYVYASSIPAHMFBSWVGGTHDJNOHKYCGBEO");
    msg.txtime = 0.3393814667339934;
    msg.modem_type.assign("QOOLJITNRDEQQTUSPWKMDFBXMMPGXKWZZCNZMINRFHIPLIULFXDKAIGVPMEPEMABXCWFLHSVOYTQZUIHWFGTWMYJJPUTKZNNYHIKBEGMFHYUZM");
    msg.sys_src.assign("CPWARGLSYWNDVBZSJKBFACJRMXFQZBXFWUJHWICVAVXHCOVRQEEWRPEOEBNRWYOAZGDRIFFQKZDTDNNTJPXNMAOWNYMDDPUBLLPSUBXPMXLNMXUVASFJWDVIFNRGCTKEYOTGNTZZAHWGHAEUGDIXQLHHOSUCPSDSSOJXGRLYZZMMFUESMAHGIZIVVPUIYJZKLKLYEYQEPOCUQKCIGLJHTCKQRSKMIVBOQGLNEKPRBTMVXCTJBDKBTFWYITQYH");
    msg.seq = 31926U;
    msg.sys_dst.assign("NYQBGLWHBFXJSZWEUWOPYQOLGKBDJBQVSAFMXTKGULQUCRKJCSACGPTSJQODBXOEHWDLIZTMOQTZXIZFBCRKCCQETICSIA");
    msg.flags = 238U;
    const char tmp_msg_0[] = {-116, -111, 77, 125, 107, 46, 31, 69, 0, 38, -18, 46, 44, -99, -52, -124, -65, 93, 116, -68, 41, 65, 43, 83, 95, 55, 5, 31, -11, 28, -15, -89, -24, -110, -47, 2, -26, 16, 47, 109, -89, -35, 2, -79, 14, 72, -92, 6, 51, -35, 112, 63, -73, -22, 113, 105, 31, -87, -124, -3, 37, -109, 116, -75, -48, -36, 108, -33, -57, -36};
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
    msg.setTimeStamp(0.1615330069164549);
    msg.setSource(30987U);
    msg.setSourceEntity(36U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(233U);
    msg.op = 132U;
    msg.system.assign("UPWZTOFEQIHHJBXOOIJSARHNDLMXEKVCLGGCEMAJTGNSVMLWTTZBKEHFAPFOAOBYTCJRFYACUBENIGTHFYURBSXAIVLXZQQHFPDOUMWXTQAFGDYMVBWZNQYQCOZLVQUUXGJISUOISTJHIUCBDGXSJIOKWNGPXZVKVLTPWBPEEVQDHCLRLMPSKUFGMNTIQK");
    msg.range = 0.379352008751736;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 45U;
    tmp_msg_0.period = 2996226416U;
    tmp_msg_0.duty_cycle = 2765788673U;
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
    msg.setTimeStamp(0.709162073405663);
    msg.setSource(11752U);
    msg.setSourceEntity(95U);
    msg.setDestination(45683U);
    msg.setDestinationEntity(52U);
    msg.op = 170U;
    msg.system.assign("KXBQNKEPARLHJUQJDCDVRRATWTLSPHVNLNMKQHCBDWQOOMZKTXAUBDNPKKKCUBWXBGIPIABCZAGZMOCYIMETHWZHGPDF");
    msg.range = 0.14834457980775406;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.12684932110220448;
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
    msg.setTimeStamp(0.5184989383035083);
    msg.setSource(1093U);
    msg.setSourceEntity(236U);
    msg.setDestination(39204U);
    msg.setDestinationEntity(217U);
    msg.op = 240U;
    msg.system.assign("UFSFNSTOXOTBAALCWXECNFNAZKUBSGMCHDTXVJJYBICPJZWFDHVIOLQYWDWPLTJVLGVTWWYNSRZRXGIBYMZKZFOPZWYNIVKIWPGPWBVDVREJTRKCBIMMIUMMEJDAHEJPUFOJVOUOIKDE");
    msg.range = 0.3385469866153912;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 45331U;
    tmp_msg_0.lat = 0.9354323742597532;
    tmp_msg_0.lon = 0.2731765267265327;
    tmp_msg_0.z = 0.46281011083016454;
    tmp_msg_0.z_units = 224U;
    tmp_msg_0.speed = 0.17714175939792132;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.syringe0 = 178U;
    tmp_msg_0.syringe1 = 93U;
    tmp_msg_0.syringe2 = 135U;
    tmp_msg_0.custom.assign("SLLFYRRQDWCHKTUGFSXYXTGVKYMJANZJIABTOKGHXBENBPLTTRUMWGGLKLVBQHUBQEJKIXTDEAUOEDUZCPRNMRINFCZPZNYDMIWWCKKACMUOUSPVUVHHHNVJOASJRGBABXALOSMPPVUTTWWALCQGTSHHPDCPDDBNSFMDOMDSAQAXSVEXVJNBITYQWXZKGZMKHUPF");
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
    msg.setTimeStamp(0.5202840287948967);
    msg.setSource(48159U);
    msg.setSourceEntity(157U);
    msg.setDestination(19408U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.34062942740423163);
    msg.setSource(24217U);
    msg.setSourceEntity(46U);
    msg.setDestination(19849U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.6773271732115259);
    msg.setSource(6061U);
    msg.setSourceEntity(160U);
    msg.setDestination(63948U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.18611035766337491);
    msg.setSource(49240U);
    msg.setSourceEntity(128U);
    msg.setDestination(6177U);
    msg.setDestinationEntity(152U);
    msg.list.assign("TNVDLFIQZONUTNLBAPYJOKLSYYSPCRIAOFQDCPRZYPBIEQBJZHV");

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
    msg.setTimeStamp(0.5971307957295637);
    msg.setSource(20675U);
    msg.setSourceEntity(226U);
    msg.setDestination(46399U);
    msg.setDestinationEntity(249U);
    msg.list.assign("IBOPHKVQTTARDXRPKORQFSBWHAFWUJMXJDKMXAEXILLMGQKPLUJNHVXYJNZQKGFTWJSITBMPGGTXWMOC");

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
    msg.setTimeStamp(0.06102296788265038);
    msg.setSource(9847U);
    msg.setSourceEntity(36U);
    msg.setDestination(11875U);
    msg.setDestinationEntity(65U);
    msg.list.assign("FULNJJYKLGNVSUBOJQERMWTXILMPIGBFGGUZJQQOEMHFVBBGTAEROLARCUCTYSWYHHZAQQUXALYBUKXFFZMEFMSSUYKPMHHXVSBJXOPKGKECBIINKLYDHUJVZIKRDDPEDBZLYOBTCTDLWNFJRCZKIQATTCWWRJHZGNPNPOUMXSROQXCXYVPDAHOIWACSCZDJWDZOLLUMWSOPHRMMAVFEPNVGEKYSVIGAXWRNXTEIGFWTBAP");

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
    msg.setTimeStamp(0.22847114996433993);
    msg.setSource(36476U);
    msg.setSourceEntity(249U);
    msg.setDestination(58932U);
    msg.setDestinationEntity(98U);
    msg.peer.assign("DKMZJJQHQLEUHGAAPDVVRUIGYCMICICVKWMOXRYBLFSFFHSJDXRDSGBPZVAQMAPDCAURTPBEPCICUTKIBOJNLKNSWTGKPREVBYGZXWNREKFDUPYFFUUBQOMCHKWXEBJDLHLXEVHNOFDXASQVOEHSNYZXZBHHFTAIZTADMNHWTMINF");
    msg.rssi = 0.9730946938111302;
    msg.integrity = 17715U;

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
    msg.setTimeStamp(0.8231222239235847);
    msg.setSource(22140U);
    msg.setSourceEntity(89U);
    msg.setDestination(7951U);
    msg.setDestinationEntity(246U);
    msg.peer.assign("XOTXKMOCAUQAFTZIMKLASUQNRSQEVCSMCDKRPVZFQCTTGDOHNHJSDQSYVWHYKXWNBLAOWADYRDFXBMLJLWCAGJIFQROAVENE");
    msg.rssi = 0.43580765300898683;
    msg.integrity = 13770U;

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
    msg.setTimeStamp(0.5954291371678919);
    msg.setSource(43066U);
    msg.setSourceEntity(175U);
    msg.setDestination(27098U);
    msg.setDestinationEntity(231U);
    msg.peer.assign("LINHZYZQSCWQYPQMNOTGIOUJGNCMKCWQAFIRSTVJOYHFXYMXFEPVKVDDFTGNDAMREMEOEPBUXWCAZUJMGLFHOLEKBXCHSYCTJWSYZJRNWMPVXQTQESVTWDRXAPYVUSV");
    msg.rssi = 0.2679824460936703;
    msg.integrity = 7980U;

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
    msg.setTimeStamp(0.7622046621954984);
    msg.setSource(31451U);
    msg.setSourceEntity(211U);
    msg.setDestination(26741U);
    msg.setDestinationEntity(242U);
    msg.req_id = 58061U;
    msg.destination.assign("GHGLAGXVCXMMTJWNWNEIQVTYQLMYZVPKFUZZBLESGRFCGBWZPQGFAUZCLSBKSHEEJXIBEYRLSANHWRDAHGEAFBNCJNDRJOMYIJLZFIHVKNWUOVOIOUBEODIVFJKTUGZNPFRFUSXXZYYEAUBXCNLKEVKROQD");
    msg.timeout = 0.7642733667709759;
    msg.range = 0.8871631858151144;
    msg.type = 69U;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 245U;
    tmp_msg_0.eta = 38936U;
    tmp_msg_0.info.assign("AARMXCWNHDQGJCKOJZUTURBFGPBWMKAOYLEEMWDNRXZAMNLJXGWFHGMUHBWFDMDOBZYUTSVLQNYRVSUGHAPKBUDZSYCURESYZSPNGGOINIQKYHNDMTAJSXLDBTHIVOVNKQAUOVCODWLTUWCXRWQXJELMCIEFKYSMXAZQDOGLBQMZJVIXCFEDXPWIBPVGUACZRSOTIKPSXEEPQKFBATERVKHLYNYEVJJRZKYFBPIWCJFJRF");
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
    msg.setTimeStamp(0.81576471992345);
    msg.setSource(60115U);
    msg.setSourceEntity(65U);
    msg.setDestination(56692U);
    msg.setDestinationEntity(15U);
    msg.req_id = 33137U;
    msg.destination.assign("FNVDCBCBIOB");
    msg.timeout = 0.8381362665038685;
    msg.range = 0.5503248201411792;
    msg.type = 200U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("NMZPZDOYLJEGCMSDYPQRKBOHLVZPUSGXPZUWFZGOPTUXHNVJWNMWDDWQVYHINSUFSJIAELJCUMHCNELROKXXFOKFKTMDAFO");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YCLIYPWEKWHYVDNUKVSJIIDZCMKFGFXDXFOHNDHWNRPOHWQSMFMCUPBTDHWAOKZZNOXMRMQLYMABSUJBSONYUNGNVFAUDLJITQMITEVPJNJWNQRZBVCFYUTFWXIPEMDPAXLQBEMJUFLQTUJXMHKSPLAXZDUXYTEJOTKZBZYJADCHIQCRGSRCJRGLYK");
    tmp_tmp_msg_0_0.value.assign("PJIHTYEBXVFKVEKEINJXOCHOOKUAYDCWIGGFZDGAAYIXYHURLTZJCHBASVTLBDKUEMKNLIAVCDEYRNAJOMSHQQGUVLMZHZZDQWUUCLWCXFXJCGYNNWPNPLYHJJQRIBNROSOBTGNPVCSWRXOKTWIZZCFRVGFULITSLREYSBADKTOV");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.20962424361431564);
    msg.setSource(48038U);
    msg.setSourceEntity(59U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(236U);
    msg.req_id = 19344U;
    msg.destination.assign("ZTLWAVIUTPJOMROOPQAZALPHOEIQWNWONGTFHGDQHCLS");
    msg.timeout = 0.6301691750736073;
    msg.range = 0.44083357104514564;
    msg.type = 238U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("RCICUGRKLSJJNSCWFXWLHW");
    tmp_msg_0.op = 68U;
    tmp_msg_0.lat = 0.3827136814494202;
    tmp_msg_0.lon = 0.5638405359991188;
    tmp_msg_0.height = 0.7686308742963675;
    tmp_msg_0.x = 0.4158576971830267;
    tmp_msg_0.y = 0.186827384419326;
    tmp_msg_0.z = 0.4389410484004045;
    tmp_msg_0.phi = 0.623621159657054;
    tmp_msg_0.theta = 0.6123154296261595;
    tmp_msg_0.psi = 0.7693858758194739;
    tmp_msg_0.vx = 0.7685614335351671;
    tmp_msg_0.vy = 0.7831156740202692;
    tmp_msg_0.vz = 0.21985756266445977;
    tmp_msg_0.p = 0.5112381792610137;
    tmp_msg_0.q = 0.6356960976951779;
    tmp_msg_0.r = 0.8239390145339688;
    tmp_msg_0.svx = 0.8471152615218822;
    tmp_msg_0.svy = 0.8362673014684089;
    tmp_msg_0.svz = 0.3018356907883408;
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
    msg.setTimeStamp(0.7713605033029268);
    msg.setSource(41550U);
    msg.setSourceEntity(135U);
    msg.setDestination(52338U);
    msg.setDestinationEntity(122U);
    msg.req_id = 1808U;
    msg.type = 129U;
    msg.status = 111U;
    msg.info.assign("WUGONTESJNZSLQAEKTKUNVDMMWBJLQBINVGNJWXARON");
    msg.range = 0.5407486400568341;

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
    msg.setTimeStamp(0.5548932967156597);
    msg.setSource(35219U);
    msg.setSourceEntity(132U);
    msg.setDestination(51457U);
    msg.setDestinationEntity(53U);
    msg.req_id = 24347U;
    msg.type = 20U;
    msg.status = 24U;
    msg.info.assign("AMQWLIYYZVKMHDYVCYHLJZKUSNKZGMRRCCVQDULIGABOHPJWQJHAEKOCXMFXTAILXUXOHISEPOOFDEUEVEQFRWPKUWJBGHPFVFQAMEMPOLTDTNMTZRLQNUVKOLUDVANYNBAGSABJVXNBPGPFHWXJCWIJHRZFKOSMAPGXEKGGWLEYIFHRXCDGUXSNCVDQNYIBFSSTSQJUKOTGIDBHSENXPBJZZJCRDCMQCWIRYWRAPVWNSZEYILBYTQU");
    msg.range = 0.8051642555774393;

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
    msg.setTimeStamp(0.8036743398895364);
    msg.setSource(13286U);
    msg.setSourceEntity(50U);
    msg.setDestination(51459U);
    msg.setDestinationEntity(147U);
    msg.req_id = 53993U;
    msg.type = 179U;
    msg.status = 28U;
    msg.info.assign("BOJALWYUJZGVDPUZZDPOMZQPZYJVIDC");
    msg.range = 0.7825620340044708;

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
    msg.setTimeStamp(0.3970305369785455);
    msg.setSource(6501U);
    msg.setSourceEntity(12U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(196U);
    msg.value = 9388;

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
    msg.setTimeStamp(0.15939452320406455);
    msg.setSource(863U);
    msg.setSourceEntity(201U);
    msg.setDestination(14622U);
    msg.setDestinationEntity(171U);
    msg.value = -21680;

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
    msg.setTimeStamp(0.6122801243913001);
    msg.setSource(30117U);
    msg.setSourceEntity(10U);
    msg.setDestination(62141U);
    msg.setDestinationEntity(10U);
    msg.value = -26193;

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
    msg.setTimeStamp(0.018253681804835886);
    msg.setSource(38022U);
    msg.setSourceEntity(176U);
    msg.setDestination(37997U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7694391286118242;

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
    msg.setTimeStamp(0.5696780402709088);
    msg.setSource(3560U);
    msg.setSourceEntity(137U);
    msg.setDestination(30648U);
    msg.setDestinationEntity(211U);
    msg.value = 0.6816478939223187;

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
    msg.setTimeStamp(0.3787765192767406);
    msg.setSource(8355U);
    msg.setSourceEntity(75U);
    msg.setDestination(47836U);
    msg.setDestinationEntity(195U);
    msg.value = 0.9435401726854992;

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
    msg.setTimeStamp(0.8467359692244673);
    msg.setSource(63267U);
    msg.setSourceEntity(36U);
    msg.setDestination(44507U);
    msg.setDestinationEntity(105U);
    msg.value = 0.045059690057652646;

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
    msg.setTimeStamp(0.7677669961400404);
    msg.setSource(44486U);
    msg.setSourceEntity(54U);
    msg.setDestination(63146U);
    msg.setDestinationEntity(230U);
    msg.value = 0.06607278057927624;

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
    msg.setTimeStamp(0.7528014053038681);
    msg.setSource(14639U);
    msg.setSourceEntity(40U);
    msg.setDestination(23149U);
    msg.setDestinationEntity(117U);
    msg.value = 0.5446888931577974;

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
    msg.setTimeStamp(0.42214623818780883);
    msg.setSource(5185U);
    msg.setSourceEntity(230U);
    msg.setDestination(33507U);
    msg.setDestinationEntity(172U);
    msg.validity = 11645U;
    msg.type = 136U;
    msg.utc_year = 44274U;
    msg.utc_month = 115U;
    msg.utc_day = 238U;
    msg.utc_time = 0.5427415188648698;
    msg.lat = 0.08344461206819187;
    msg.lon = 0.8592930241085459;
    msg.height = 0.8949619879644054;
    msg.satellites = 208U;
    msg.cog = 0.4419443485575929;
    msg.sog = 0.11133694085673596;
    msg.hdop = 0.06323466069722028;
    msg.vdop = 0.41755721059778805;
    msg.hacc = 0.18670031690562883;
    msg.vacc = 0.850926193722843;

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
    msg.setTimeStamp(0.34596969751020135);
    msg.setSource(63989U);
    msg.setSourceEntity(14U);
    msg.setDestination(14310U);
    msg.setDestinationEntity(186U);
    msg.validity = 35744U;
    msg.type = 217U;
    msg.utc_year = 35038U;
    msg.utc_month = 20U;
    msg.utc_day = 32U;
    msg.utc_time = 0.5743692985115175;
    msg.lat = 0.3723927122730156;
    msg.lon = 0.7728349962080738;
    msg.height = 0.4905366048072506;
    msg.satellites = 171U;
    msg.cog = 0.05752955640390389;
    msg.sog = 0.9362351064038291;
    msg.hdop = 0.23357043100938257;
    msg.vdop = 0.9615421336205721;
    msg.hacc = 0.09670700029902723;
    msg.vacc = 0.758100581685926;

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
    msg.setTimeStamp(0.2984221740117421);
    msg.setSource(62960U);
    msg.setSourceEntity(219U);
    msg.setDestination(13495U);
    msg.setDestinationEntity(104U);
    msg.validity = 64161U;
    msg.type = 158U;
    msg.utc_year = 64628U;
    msg.utc_month = 241U;
    msg.utc_day = 17U;
    msg.utc_time = 0.5639389153214457;
    msg.lat = 0.7922135979184206;
    msg.lon = 0.7363398000870522;
    msg.height = 0.40957629810981444;
    msg.satellites = 172U;
    msg.cog = 0.4331919553754061;
    msg.sog = 0.17403388137857123;
    msg.hdop = 0.1563286731708009;
    msg.vdop = 0.5624312983523906;
    msg.hacc = 0.6613150647157805;
    msg.vacc = 0.701581063223049;

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
    msg.setTimeStamp(0.5623708411430479);
    msg.setSource(48751U);
    msg.setSourceEntity(124U);
    msg.setDestination(4867U);
    msg.setDestinationEntity(113U);
    msg.time = 0.060940929968103075;
    msg.phi = 0.512436175577429;
    msg.theta = 0.11964109580274918;
    msg.psi = 0.9316554740345744;
    msg.psi_magnetic = 0.36211957127901995;

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
    msg.setTimeStamp(0.27966170188856465);
    msg.setSource(18645U);
    msg.setSourceEntity(39U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(16U);
    msg.time = 0.6527061863405814;
    msg.phi = 0.906968714017482;
    msg.theta = 0.04349434524135354;
    msg.psi = 0.27291285835521384;
    msg.psi_magnetic = 0.44564915339410316;

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
    msg.setTimeStamp(0.8245393606299684);
    msg.setSource(49193U);
    msg.setSourceEntity(97U);
    msg.setDestination(61727U);
    msg.setDestinationEntity(153U);
    msg.time = 0.71263805833892;
    msg.phi = 0.7723628558665337;
    msg.theta = 0.8448032630124668;
    msg.psi = 0.09705563133145889;
    msg.psi_magnetic = 0.11156985801622465;

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
    msg.setTimeStamp(0.9561818238533571);
    msg.setSource(40462U);
    msg.setSourceEntity(11U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(70U);
    msg.time = 0.7921450480433259;
    msg.x = 0.23387738069280573;
    msg.y = 0.017278203457616437;
    msg.z = 0.685003806245226;
    msg.timestep = 0.3345795158193442;

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
    msg.setTimeStamp(0.3078915990991691);
    msg.setSource(63938U);
    msg.setSourceEntity(183U);
    msg.setDestination(16809U);
    msg.setDestinationEntity(137U);
    msg.time = 0.17940528238395137;
    msg.x = 0.44280098415315117;
    msg.y = 0.1415207191783331;
    msg.z = 0.27818350543042913;
    msg.timestep = 0.6725777306978041;

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
    msg.setTimeStamp(0.1620738194868876);
    msg.setSource(18088U);
    msg.setSourceEntity(235U);
    msg.setDestination(61275U);
    msg.setDestinationEntity(183U);
    msg.time = 0.8657463948272947;
    msg.x = 0.6067337740106922;
    msg.y = 0.8478624737256114;
    msg.z = 0.3127034734936056;
    msg.timestep = 0.6456218998783867;

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
    msg.setTimeStamp(0.5796720526864434);
    msg.setSource(64925U);
    msg.setSourceEntity(108U);
    msg.setDestination(41749U);
    msg.setDestinationEntity(52U);
    msg.time = 0.4582102186188214;
    msg.x = 0.8631158585996777;
    msg.y = 0.15969340396648335;
    msg.z = 0.5714962497999837;

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
    msg.setTimeStamp(0.7856274520300536);
    msg.setSource(60437U);
    msg.setSourceEntity(200U);
    msg.setDestination(45490U);
    msg.setDestinationEntity(97U);
    msg.time = 0.1836069684403311;
    msg.x = 0.20361582172478132;
    msg.y = 0.5234057920939614;
    msg.z = 0.7518624259734411;

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
    msg.setTimeStamp(0.022588450631353396);
    msg.setSource(25105U);
    msg.setSourceEntity(35U);
    msg.setDestination(2778U);
    msg.setDestinationEntity(211U);
    msg.time = 0.499574790411506;
    msg.x = 0.5427562403201441;
    msg.y = 0.9270117778609597;
    msg.z = 0.5222282873716736;

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
    msg.setTimeStamp(0.947758273784867);
    msg.setSource(18646U);
    msg.setSourceEntity(78U);
    msg.setDestination(18881U);
    msg.setDestinationEntity(78U);
    msg.time = 0.8062647605332509;
    msg.x = 0.8306074139976737;
    msg.y = 0.16138081129442206;
    msg.z = 0.8201746064707347;

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
    msg.setTimeStamp(0.9177570554246366);
    msg.setSource(22457U);
    msg.setSourceEntity(193U);
    msg.setDestination(5871U);
    msg.setDestinationEntity(89U);
    msg.time = 0.917155942186161;
    msg.x = 0.20624700080869263;
    msg.y = 0.2626966684528461;
    msg.z = 0.7165906922379174;

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
    msg.setTimeStamp(0.3735126055344816);
    msg.setSource(6730U);
    msg.setSourceEntity(201U);
    msg.setDestination(11893U);
    msg.setDestinationEntity(225U);
    msg.time = 0.4001941074032712;
    msg.x = 0.9540362192710258;
    msg.y = 0.6693175875099288;
    msg.z = 0.19400057161815254;

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
    msg.setTimeStamp(0.3580758048695596);
    msg.setSource(39380U);
    msg.setSourceEntity(92U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(50U);
    msg.time = 0.24997988880738908;
    msg.x = 0.05722251505206699;
    msg.y = 0.8628559727674213;
    msg.z = 0.5245567924901388;

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
    msg.setTimeStamp(0.938100257000834);
    msg.setSource(13390U);
    msg.setSourceEntity(33U);
    msg.setDestination(16689U);
    msg.setDestinationEntity(44U);
    msg.time = 0.9514181950796344;
    msg.x = 0.2713258901680219;
    msg.y = 0.670991025265659;
    msg.z = 0.5701601923707696;

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
    msg.setTimeStamp(0.9006448420203479);
    msg.setSource(20851U);
    msg.setSourceEntity(196U);
    msg.setDestination(45924U);
    msg.setDestinationEntity(253U);
    msg.time = 0.9380783678227503;
    msg.x = 0.21156114908363088;
    msg.y = 0.5090963723264691;
    msg.z = 0.8472361334528888;

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
    msg.setTimeStamp(0.7571687915240537);
    msg.setSource(32983U);
    msg.setSourceEntity(182U);
    msg.setDestination(53204U);
    msg.setDestinationEntity(179U);
    msg.validity = 57U;
    msg.x = 0.5225798779608478;
    msg.y = 0.7955979798549503;
    msg.z = 0.16823788693274222;

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
    msg.setTimeStamp(0.9162388889690685);
    msg.setSource(1933U);
    msg.setSourceEntity(169U);
    msg.setDestination(54014U);
    msg.setDestinationEntity(175U);
    msg.validity = 131U;
    msg.x = 0.3353902217414094;
    msg.y = 0.9720785025616612;
    msg.z = 0.42672659052253104;

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
    msg.setTimeStamp(0.011783130223543048);
    msg.setSource(40889U);
    msg.setSourceEntity(83U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(65U);
    msg.validity = 201U;
    msg.x = 0.8214359431014635;
    msg.y = 0.6599639507766143;
    msg.z = 0.1607987420257163;

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
    msg.setTimeStamp(0.4127651160094732);
    msg.setSource(37887U);
    msg.setSourceEntity(237U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(117U);
    msg.validity = 76U;
    msg.x = 0.30420108103263777;
    msg.y = 0.7410233499706357;
    msg.z = 0.39137666629298673;

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
    msg.setTimeStamp(0.7690713526940112);
    msg.setSource(1292U);
    msg.setSourceEntity(80U);
    msg.setDestination(36500U);
    msg.setDestinationEntity(154U);
    msg.validity = 230U;
    msg.x = 0.42213363650081437;
    msg.y = 0.003634429117096216;
    msg.z = 0.7782461206013074;

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
    msg.setTimeStamp(0.18881872104227715);
    msg.setSource(49338U);
    msg.setSourceEntity(3U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(9U);
    msg.validity = 16U;
    msg.x = 0.5163595674989867;
    msg.y = 0.6961969863516441;
    msg.z = 0.8764120005332595;

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
    msg.setTimeStamp(0.006571211433029633);
    msg.setSource(1252U);
    msg.setSourceEntity(171U);
    msg.setDestination(64075U);
    msg.setDestinationEntity(169U);
    msg.time = 0.28451792817329213;
    msg.x = 0.9213392774794303;
    msg.y = 0.8817995969440596;
    msg.z = 0.4112590230374744;

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
    msg.setTimeStamp(0.708871782351572);
    msg.setSource(15491U);
    msg.setSourceEntity(80U);
    msg.setDestination(30149U);
    msg.setDestinationEntity(175U);
    msg.time = 0.03582855517934069;
    msg.x = 0.26362494597801556;
    msg.y = 0.18894840619335773;
    msg.z = 0.36417621084473717;

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
    msg.setTimeStamp(0.4917484575222576);
    msg.setSource(25695U);
    msg.setSourceEntity(29U);
    msg.setDestination(28723U);
    msg.setDestinationEntity(48U);
    msg.time = 0.9579570276935538;
    msg.x = 0.8947014620608836;
    msg.y = 0.6131639455345567;
    msg.z = 0.13506557654711593;

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
    msg.setTimeStamp(0.3272094357626455);
    msg.setSource(9781U);
    msg.setSourceEntity(64U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(88U);
    msg.validity = 82U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5877388340635965;
    tmp_msg_0.y = 0.9581201523944213;
    tmp_msg_0.z = 0.7669826343530675;
    tmp_msg_0.phi = 0.1818434209458425;
    tmp_msg_0.theta = 0.6117002011863948;
    tmp_msg_0.psi = 0.4288872985084986;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.30993513978538667;
    tmp_msg_1.beam_height = 0.5398344494788617;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.18258832728798657;

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
    msg.setTimeStamp(0.6648106142084319);
    msg.setSource(65154U);
    msg.setSourceEntity(185U);
    msg.setDestination(56473U);
    msg.setDestinationEntity(75U);
    msg.validity = 148U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7695362888522806;
    tmp_msg_0.y = 0.6080691883759278;
    tmp_msg_0.z = 0.00726907359939144;
    tmp_msg_0.phi = 0.6855137735730115;
    tmp_msg_0.theta = 0.42197690340879324;
    tmp_msg_0.psi = 0.9489097787705888;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.34687881799407516;

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
    msg.setTimeStamp(0.025791306248616364);
    msg.setSource(2198U);
    msg.setSourceEntity(184U);
    msg.setDestination(5821U);
    msg.setDestinationEntity(217U);
    msg.validity = 181U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7167825017407379;
    tmp_msg_0.y = 0.6505045609891283;
    tmp_msg_0.z = 0.9404505413347048;
    tmp_msg_0.phi = 0.6203392917751741;
    tmp_msg_0.theta = 0.15591432015418294;
    tmp_msg_0.psi = 0.6990357405404416;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5035665860978648;

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
    msg.setTimeStamp(0.06285409275794474);
    msg.setSource(4656U);
    msg.setSourceEntity(102U);
    msg.setDestination(51396U);
    msg.setDestinationEntity(144U);
    msg.value = 0.03236158458764604;

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
    msg.setTimeStamp(0.017032523139591915);
    msg.setSource(14961U);
    msg.setSourceEntity(88U);
    msg.setDestination(6667U);
    msg.setDestinationEntity(185U);
    msg.value = 0.4783737381407279;

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
    msg.setTimeStamp(0.5731787929267586);
    msg.setSource(45766U);
    msg.setSourceEntity(135U);
    msg.setDestination(11628U);
    msg.setDestinationEntity(59U);
    msg.value = 0.021467967763915907;

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
    msg.setTimeStamp(0.988094511043754);
    msg.setSource(20459U);
    msg.setSourceEntity(218U);
    msg.setDestination(62711U);
    msg.setDestinationEntity(162U);
    msg.value = 0.24933962254151865;

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
    msg.setTimeStamp(0.3327971948902708);
    msg.setSource(58708U);
    msg.setSourceEntity(133U);
    msg.setDestination(27694U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8047107348400566;

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
    msg.setTimeStamp(0.4140155125438545);
    msg.setSource(16948U);
    msg.setSourceEntity(34U);
    msg.setDestination(41410U);
    msg.setDestinationEntity(105U);
    msg.value = 0.08153565048522571;

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
    msg.setTimeStamp(0.031039723162589627);
    msg.setSource(6370U);
    msg.setSourceEntity(30U);
    msg.setDestination(63880U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5103715128496101;

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
    msg.setTimeStamp(0.6317957639132127);
    msg.setSource(35656U);
    msg.setSourceEntity(116U);
    msg.setDestination(9150U);
    msg.setDestinationEntity(241U);
    msg.value = 0.972552960063987;

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
    msg.setTimeStamp(0.36358409783365286);
    msg.setSource(51944U);
    msg.setSourceEntity(92U);
    msg.setDestination(28169U);
    msg.setDestinationEntity(13U);
    msg.value = 0.22686267183557618;

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
    msg.setTimeStamp(0.7064279357444935);
    msg.setSource(17492U);
    msg.setSourceEntity(61U);
    msg.setDestination(46345U);
    msg.setDestinationEntity(249U);
    msg.value = 0.23316119383321943;

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
    msg.setTimeStamp(0.3189671444004103);
    msg.setSource(16895U);
    msg.setSourceEntity(254U);
    msg.setDestination(13608U);
    msg.setDestinationEntity(168U);
    msg.value = 0.7284281201038684;

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
    msg.setTimeStamp(0.9006427543893375);
    msg.setSource(62065U);
    msg.setSourceEntity(68U);
    msg.setDestination(17315U);
    msg.setDestinationEntity(66U);
    msg.value = 0.8034605471820401;

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
    msg.setTimeStamp(0.6655725310436208);
    msg.setSource(48873U);
    msg.setSourceEntity(77U);
    msg.setDestination(58500U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7408176144228187;

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
    msg.setTimeStamp(0.05568844284223973);
    msg.setSource(30727U);
    msg.setSourceEntity(136U);
    msg.setDestination(60283U);
    msg.setDestinationEntity(64U);
    msg.value = 0.8928962209261339;

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
    msg.setTimeStamp(0.5034634666953791);
    msg.setSource(14110U);
    msg.setSourceEntity(132U);
    msg.setDestination(21023U);
    msg.setDestinationEntity(137U);
    msg.value = 0.3221084640573755;

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
    msg.setTimeStamp(0.4838921010958128);
    msg.setSource(40783U);
    msg.setSourceEntity(220U);
    msg.setDestination(51302U);
    msg.setDestinationEntity(243U);
    msg.value = 0.12813015805307204;

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
    msg.setTimeStamp(0.5330375446487351);
    msg.setSource(64987U);
    msg.setSourceEntity(48U);
    msg.setDestination(37378U);
    msg.setDestinationEntity(218U);
    msg.value = 0.4721182718888468;

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
    msg.setTimeStamp(0.9480927088967955);
    msg.setSource(38417U);
    msg.setSourceEntity(250U);
    msg.setDestination(40745U);
    msg.setDestinationEntity(110U);
    msg.value = 0.7923025341369965;

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
    msg.setTimeStamp(0.5190977679648914);
    msg.setSource(33977U);
    msg.setSourceEntity(213U);
    msg.setDestination(2482U);
    msg.setDestinationEntity(225U);
    msg.value = 0.1350346534305965;

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
    msg.setTimeStamp(0.5455610191188155);
    msg.setSource(42312U);
    msg.setSourceEntity(52U);
    msg.setDestination(21890U);
    msg.setDestinationEntity(5U);
    msg.value = 0.418314661788066;

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
    msg.setTimeStamp(0.3539875782716254);
    msg.setSource(16690U);
    msg.setSourceEntity(173U);
    msg.setDestination(33678U);
    msg.setDestinationEntity(140U);
    msg.value = 0.9007992917819292;

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
    msg.setTimeStamp(0.04856375985002559);
    msg.setSource(39628U);
    msg.setSourceEntity(85U);
    msg.setDestination(3630U);
    msg.setDestinationEntity(75U);
    msg.value = 0.4447353416155233;

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
    msg.setTimeStamp(0.25977652174545773);
    msg.setSource(52746U);
    msg.setSourceEntity(111U);
    msg.setDestination(37579U);
    msg.setDestinationEntity(105U);
    msg.value = 0.4052523664965313;

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
    msg.setTimeStamp(0.3086231239894852);
    msg.setSource(23618U);
    msg.setSourceEntity(173U);
    msg.setDestination(39890U);
    msg.setDestinationEntity(95U);
    msg.value = 0.7333806227878765;

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
    msg.setTimeStamp(0.416304474221725);
    msg.setSource(32174U);
    msg.setSourceEntity(130U);
    msg.setDestination(1833U);
    msg.setDestinationEntity(215U);
    msg.direction = 0.7891014720167127;
    msg.speed = 0.43124678525772153;
    msg.turbulence = 0.4161223579984291;

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
    msg.setTimeStamp(0.733552620241549);
    msg.setSource(19029U);
    msg.setSourceEntity(75U);
    msg.setDestination(44246U);
    msg.setDestinationEntity(1U);
    msg.direction = 0.3563734181671161;
    msg.speed = 0.3646099156818873;
    msg.turbulence = 0.9000965116708176;

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
    msg.setTimeStamp(0.46509834497121316);
    msg.setSource(21472U);
    msg.setSourceEntity(225U);
    msg.setDestination(46263U);
    msg.setDestinationEntity(202U);
    msg.direction = 0.2134115795542436;
    msg.speed = 0.6402366631395112;
    msg.turbulence = 0.9674510580892591;

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
    msg.setTimeStamp(0.9319708383251578);
    msg.setSource(8800U);
    msg.setSourceEntity(148U);
    msg.setDestination(25535U);
    msg.setDestinationEntity(205U);
    msg.value = 0.5559017807301406;

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
    msg.setTimeStamp(0.7930455492285902);
    msg.setSource(36986U);
    msg.setSourceEntity(2U);
    msg.setDestination(62438U);
    msg.setDestinationEntity(132U);
    msg.value = 0.7550246134304337;

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
    msg.setTimeStamp(0.5890992618289773);
    msg.setSource(48309U);
    msg.setSourceEntity(27U);
    msg.setDestination(23203U);
    msg.setDestinationEntity(48U);
    msg.value = 0.0011375657165559883;

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
    msg.setTimeStamp(0.11798661657064025);
    msg.setSource(1596U);
    msg.setSourceEntity(96U);
    msg.setDestination(47827U);
    msg.setDestinationEntity(233U);
    msg.value.assign("PKLTABSYADZTEZDLWLJDVMHUZQPRAQKSWIXJPLNWYFSCURYRVTDBXTGDGESWDNPWQMZMBYOSMMKFAPJVDQWOIPLXUCFIGYISNCUGBMGEUBYYVLAPI");

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
    msg.setTimeStamp(0.3768212355358419);
    msg.setSource(63679U);
    msg.setSourceEntity(65U);
    msg.setDestination(9198U);
    msg.setDestinationEntity(229U);
    msg.value.assign("LHOCLWZEJPFRZFMSXZHBAQNTQQNGYIPNVKUFYIKJQIYSFUTLCPZYXLQXOSMABXPJAWHGWVITSMDISSTSEIJNJBNAYZXAKEMYVUEMQXAQTDBQUDGCNRYMUDPECUMQFGCXKVJRDEAHDWPZNWTROUCIG");

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
    msg.setTimeStamp(0.9098229857260105);
    msg.setSource(37759U);
    msg.setSourceEntity(76U);
    msg.setDestination(37361U);
    msg.setDestinationEntity(92U);
    msg.value.assign("CUWVYGILQKTDLLXUFAGLOHRITBAWQUZZWBGRRASIPFCXWLIBEAUZUXZSHZNN");

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
    msg.setTimeStamp(0.3704331414298909);
    msg.setSource(51412U);
    msg.setSourceEntity(89U);
    msg.setDestination(15291U);
    msg.setDestinationEntity(10U);
    const char tmp_msg_0[] = {84, 108, 24, 125, 30, -30, 43, 42, -124, -80, -6, -89, 41, 87, 39, -36, 100, -115, -62, 114, -82, 102, -128, -108, -113, -21, 76, -63, 105, 21, 56, 81, -117, -53, -49, -73, -22, 81, -32, -36, 95, 78, -28, -91, -30, 83, 35, -16, -119, -16, -82, -77, -40, 31, -53, 66, 53, -121, -47, 10, 62, 46, -121, -10, -24, 60, 95, -22, -94, -39, 112, 103, 110, 25, 43, 64, -7, -128, -88, -77, -41, 65, 70, 111, 53, -20, -117, -37, 117, -3, -56, 23, 90, -124, -69, -105, 32, -56, 44, -80, 41, -26, 114, -62, -3, 66, -21, -9, -94, -33, 23, 13, 88, 43, -24, -14, 85, -128, 97, -42, -87, 31, 84, -98, -15, -3, -59, 15, -43, 46, -117, -64, -98, -99, -24, 49, 32, 100, 49, -77, 4, -63, 89, 73, -13, 46, -80, -12, -15, -79, 58, -62, -40, -113, 11, 122, 114, 27, -85, -94, 45, 110, -125, -94, -74, -94, 4, -38, -32, 65, -102, -10, 45, -124, 35};
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
    msg.setTimeStamp(0.23620558182711882);
    msg.setSource(64952U);
    msg.setSourceEntity(95U);
    msg.setDestination(28142U);
    msg.setDestinationEntity(36U);
    const char tmp_msg_0[] = {65, 74, 119, 28, 70, 39, -87, 121, 19, -81, 100, 64, -19, 65, 100, -101, 49, -109, 30, -69, 122, 21, 21, 90, -120, -85, -109, 124, -41, -2, 96, -55, 108, 27, 67, 31, -118, -90, 59, 81, 49, 37, -48, 44, 72, -54, 74, -114, 69, 125, 93, 15, -127, -47, -60, -76, -125, -95, 16, 25, 25, -110, -76, -18, 69, 14, -17, 100, -123, -96, 77, -115, -45, 113, 58, 109, -58, -33, -54, -56, -124, -83, -108, -99, 65, 17, 24, 119, 27, -62, -119, -66, -55, -27, -48, -123, 0, 84, 113, -3, -111, 108, 57, -94, -39, 43, 89, -65, 69, 126, 27, -38, -102, -13, -21, -105, -25, 124, -119, 32, -37, 125, 80, -19, 6, 121, -24, -23, -66, -23, 100, 45, -90, 57, 121, 60, -14, 115, 103, 122, 11, 29, -9, -21, -98, 94, 61, -43, -93, 101, 105, -14, -21, 46, 75, 82, 12, 113, -38, 118, 3, -35, 18, -53, 46, -115, -33, -102, 21, 39, 42, 114, 97, -116, 6, -11, -37};
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
    msg.setTimeStamp(0.0334122322847038);
    msg.setSource(48251U);
    msg.setSourceEntity(109U);
    msg.setDestination(35947U);
    msg.setDestinationEntity(170U);
    const char tmp_msg_0[] = {91, -18, 50, 38, 43, -87, -31, -62, -43, -34, 72, 105, -2, -11, -77, -78, -92, 104, -4, 36, 93, -117, -91, 73, -26, 92, -68, -109, 22, -30, 6, 58, -22, -118, 91, 61, 33, -85, -111, 109, -31, 62, 46, -15, -94, -92, -112, -40, 51, -123, 84, -83, -55, 28, -86, -35, 64, 37, 81, -125, -44, 33, 18, -83, 71, -108, -93, 0, -109, -119, -40, -94, 107, -72, -39, 101, -32, 38, 82, 2, 15, -87, -64, 65, -128, -109, 56, 36, -82, -73, 55, -69, -116, -93, -122, 97, -23, -91, 23, 118, 6, -110, -26, -37, -49, -85, 58, 34, -48, 72, -40, -8, -67, -8, 28, 26, -76, 10, -39, 33, 34, -35, -14, -68, -87, -25, 64, -75, -109, 123, -36, -85, 101, -101, 17, 1, 110, 59, -20, 57, 17, 41, 111, -19, 91, 55, 85, 20, -98, -73, -120, -118, 73, -41, -117, -13, -105, 25, 55, 92, 6, 68, -17, -2, -44, 53, -122, 98, -37, -84, -98, -49, 28, -53, 103, -31};
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
    msg.setTimeStamp(0.6339324589456092);
    msg.setSource(8368U);
    msg.setSourceEntity(195U);
    msg.setDestination(51339U);
    msg.setDestinationEntity(24U);
    msg.value = 0.658536268926506;

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
    msg.setTimeStamp(0.9867806887387445);
    msg.setSource(18132U);
    msg.setSourceEntity(116U);
    msg.setDestination(41126U);
    msg.setDestinationEntity(189U);
    msg.value = 0.046505910751427626;

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
    msg.setTimeStamp(0.9280271200808765);
    msg.setSource(62084U);
    msg.setSourceEntity(36U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(213U);
    msg.value = 0.3425198818677925;

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
    msg.setTimeStamp(0.5084350368882609);
    msg.setSource(55178U);
    msg.setSourceEntity(53U);
    msg.setDestination(1764U);
    msg.setDestinationEntity(37U);
    msg.type = 252U;
    msg.frequency = 1810784368U;
    msg.min_range = 38965U;
    msg.max_range = 7096U;
    msg.bits_per_point = 114U;
    msg.scale_factor = 0.21884962777186345;
    const char tmp_msg_0[] = {46, -70, 17, -71, -58, -114, 2, -10, 114, -8, -34, 49, -6, -40, 46, -95, -43, -5, -117, 19, -102, 22, -62, -51, 18, -2, -59, -3, 13, 59, -89, 28, -112, 57, -104, -97, 115, 67, 24, 105, -84, -114, -63, -22};
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
    msg.setTimeStamp(0.9862301834028638);
    msg.setSource(8723U);
    msg.setSourceEntity(141U);
    msg.setDestination(47373U);
    msg.setDestinationEntity(206U);
    msg.type = 25U;
    msg.frequency = 2303958331U;
    msg.min_range = 27644U;
    msg.max_range = 36158U;
    msg.bits_per_point = 129U;
    msg.scale_factor = 0.034524366047461896;
    const char tmp_msg_0[] = {117, 43, -75, 73, -2, 80, 57, -104, -125, 107, 90, -94, 61, -34, -106, 109, -31, 124, -111, 81, -41, -43, 93, -6, 109, 11, -72, -24, 118, 73, -16, 30, 36, -18, 102, -122, 104, 106, -127, 93, -26, -66, 56, -15, 62, 52, 15, -12, -48, 47, 29, -34, 40, -95, -109, 120, 14, -108, 28, -17, -43, -85, -121, 25, -8, 47, 81, -14, -100, -51, 102, 74, 46, 17, 22, 84, 86, -35, 36, 70, 39, -13, 32, 76, 65, -82, 14, 112, 113, -95, -103, 53, 61, -88, -18, -54, 39, 96, 61, 11, -121, -11, -122, 82, 123, 86, -34, -37, 84, -69, -88, -40, -31, -15, 64, 80, -29, -68, -88, -22, 61, 32, -29, 110, 19, 48, -128, -123, 91, -53, 91, 116, -106, -7, 54, -108, -19, -66, 7, -96, 66, -127, 33, -104, -53, -44, -33, 26, 27, -73, -59, -5, 30, -55, -77, -26, -50, -11, -45, -56, -60, -105, -106, 34, 67, 41, 89, 46, -64, -64, -21, 38, 91, -4, -120, 44, -53, -89, -86, 51, -41, -17, 118, -34, -69, 96, 78, 123, 36, 90, -119, 108, 31, 34, 102, 15, -21, 114, -29, 55, 35, 124, 41, 65, -108, 23, -42, 107, -127, -110, -27};
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
    msg.setTimeStamp(0.977715981823802);
    msg.setSource(53521U);
    msg.setSourceEntity(23U);
    msg.setDestination(18195U);
    msg.setDestinationEntity(144U);
    msg.type = 194U;
    msg.frequency = 1151330425U;
    msg.min_range = 46852U;
    msg.max_range = 8272U;
    msg.bits_per_point = 43U;
    msg.scale_factor = 0.48881211465220686;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.590236863070622;
    tmp_msg_0.beam_height = 0.12200949094246949;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-109, 73, 45, -76, -118, -10, 18, 33, -123, -103, 12, -69, 61, -68, 87, 63, 123, -78, 76, -10, 32, -49, 6, 123, -97, -81, -66, -5, 16, 23, 38, 65, -111, -121, -109, -67, -71, -27, -102, -19, -18, 25, -92, -51, 65, -46, 107, 40, -78, -77, 44, -76, 53, 28, 10, -83, -16, -71, -98, 110, -62, -30, 29, -93, -97, 113, 113, -25, 60, -36, -51, 61, -42, 82, 77, 110, -87, -59, 112, -12, 17, 126, 19, -80, 15, 54, -82, -91, 77, -69, 116, -79, -26, -69, 107, 20, -108, -106, -110, -51, 48, -76, -6, 119, 70, 67, 36, 52, -123, 72, 125, 81, 77, -42, 54, 115, 99, -92, 4, -81, 26, 79, -80, 70, -43, 16, 105, 43, 36, 85, 114, 53, -19, 96};
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
    msg.setTimeStamp(0.3385782604893218);
    msg.setSource(65326U);
    msg.setSourceEntity(96U);
    msg.setDestination(10007U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.6013422380843831);
    msg.setSource(40329U);
    msg.setSourceEntity(48U);
    msg.setDestination(37685U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.5929287268814697);
    msg.setSource(15171U);
    msg.setSourceEntity(0U);
    msg.setDestination(50849U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.24886707201818958);
    msg.setSource(39535U);
    msg.setSourceEntity(126U);
    msg.setDestination(9769U);
    msg.setDestinationEntity(26U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.5669332982097902);
    msg.setSource(33786U);
    msg.setSourceEntity(191U);
    msg.setDestination(39510U);
    msg.setDestinationEntity(162U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.16365853141019915);
    msg.setSource(30629U);
    msg.setSourceEntity(79U);
    msg.setDestination(7871U);
    msg.setDestinationEntity(159U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.37910803203175614);
    msg.setSource(52505U);
    msg.setSourceEntity(242U);
    msg.setDestination(29704U);
    msg.setDestinationEntity(163U);
    msg.value = 0.5502306406121066;
    msg.confidence = 0.4031025451728597;
    msg.opmodes.assign("EWQFQSGJPGXYLJCPOKFYFGYTNNUPTZZLUUYSFWGMWKNIRVKCLQADVVJAXNVTABPHICSEICNDBAMVLYVEUDOOPRBMMUZQBTHWRSORF");

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
    msg.setTimeStamp(0.38908647318428324);
    msg.setSource(53927U);
    msg.setSourceEntity(154U);
    msg.setDestination(2278U);
    msg.setDestinationEntity(181U);
    msg.value = 0.756344233695192;
    msg.confidence = 0.5540469328785109;
    msg.opmodes.assign("WQKQEMBKFAT");

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
    msg.setTimeStamp(0.3218054210781167);
    msg.setSource(22842U);
    msg.setSourceEntity(187U);
    msg.setDestination(21313U);
    msg.setDestinationEntity(141U);
    msg.value = 0.04845654901126972;
    msg.confidence = 0.7862500848344828;
    msg.opmodes.assign("DOWRWSFTMXMOALXXJNBGJWFUDBLNBJGLPNVHJIJTPVXKGCKEACONCAPTQZUESDCZHDALAFTVQYTSSUEZUORKHCSKUFIKVWQIRTQZBIOUHJOFBABEVSGKFYJLYWNRMBSTAZFPM");

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
    msg.setTimeStamp(0.8319511236067413);
    msg.setSource(53832U);
    msg.setSourceEntity(226U);
    msg.setDestination(19015U);
    msg.setDestinationEntity(246U);
    msg.itow = 2804366930U;
    msg.lat = 0.18463384700797802;
    msg.lon = 0.1246642528329791;
    msg.height_ell = 0.8263284288027678;
    msg.height_sea = 0.6339967544132747;
    msg.hacc = 0.44365010140885097;
    msg.vacc = 0.4612241292814062;
    msg.vel_n = 0.8606067903508847;
    msg.vel_e = 0.807632731984129;
    msg.vel_d = 0.6328601526771201;
    msg.speed = 0.6053117015399213;
    msg.gspeed = 0.2303146649543928;
    msg.heading = 0.07860153310239926;
    msg.sacc = 0.24760025772522798;
    msg.cacc = 0.8916259228679556;

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
    msg.setTimeStamp(0.6813897186339666);
    msg.setSource(63132U);
    msg.setSourceEntity(8U);
    msg.setDestination(25565U);
    msg.setDestinationEntity(119U);
    msg.itow = 296354547U;
    msg.lat = 0.7697727793603175;
    msg.lon = 0.21309615930406622;
    msg.height_ell = 0.7764232311048911;
    msg.height_sea = 0.7210098453032403;
    msg.hacc = 0.5138572430785011;
    msg.vacc = 0.04733213210267739;
    msg.vel_n = 0.16180552150438365;
    msg.vel_e = 0.12548636288015835;
    msg.vel_d = 0.6806048937048521;
    msg.speed = 0.4699612635164758;
    msg.gspeed = 0.33168945240206815;
    msg.heading = 0.366954961371882;
    msg.sacc = 0.20155016898377032;
    msg.cacc = 0.5541976802048421;

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
    msg.setTimeStamp(0.28029353071114005);
    msg.setSource(6483U);
    msg.setSourceEntity(186U);
    msg.setDestination(13923U);
    msg.setDestinationEntity(149U);
    msg.itow = 2121418591U;
    msg.lat = 0.13371993892231449;
    msg.lon = 0.14852276945220733;
    msg.height_ell = 0.8366017728776501;
    msg.height_sea = 0.540261159127322;
    msg.hacc = 0.4564848575100986;
    msg.vacc = 0.5693490759272397;
    msg.vel_n = 0.7697109572966861;
    msg.vel_e = 0.4467552168257155;
    msg.vel_d = 0.7621223271472792;
    msg.speed = 0.5574725358390866;
    msg.gspeed = 0.9153928857147857;
    msg.heading = 0.8194250292301208;
    msg.sacc = 0.026139244594033162;
    msg.cacc = 0.432743030953309;

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
    msg.setTimeStamp(0.5099721371904599);
    msg.setSource(48757U);
    msg.setSourceEntity(206U);
    msg.setDestination(6689U);
    msg.setDestinationEntity(162U);
    msg.id = 1U;
    msg.value = 0.8679325365761229;

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
    msg.setTimeStamp(0.7316959475757534);
    msg.setSource(64952U);
    msg.setSourceEntity(235U);
    msg.setDestination(2886U);
    msg.setDestinationEntity(169U);
    msg.id = 100U;
    msg.value = 0.4548655905369994;

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
    msg.setTimeStamp(0.026054873108799725);
    msg.setSource(45678U);
    msg.setSourceEntity(144U);
    msg.setDestination(39151U);
    msg.setDestinationEntity(137U);
    msg.id = 108U;
    msg.value = 0.23867480242132244;

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
    msg.setTimeStamp(0.9360587597744401);
    msg.setSource(42998U);
    msg.setSourceEntity(157U);
    msg.setDestination(15701U);
    msg.setDestinationEntity(130U);
    msg.x = 0.33459104904789594;
    msg.y = 0.8177562910298757;
    msg.z = 0.9711960227618525;
    msg.phi = 0.9960439397028714;
    msg.theta = 0.9973358095974225;
    msg.psi = 0.7202798852328982;

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
    msg.setTimeStamp(0.4371342037690893);
    msg.setSource(18152U);
    msg.setSourceEntity(100U);
    msg.setDestination(53478U);
    msg.setDestinationEntity(118U);
    msg.x = 0.6459791018290993;
    msg.y = 0.8134239226960058;
    msg.z = 0.37286448601562516;
    msg.phi = 0.7758893301025528;
    msg.theta = 0.177486826843818;
    msg.psi = 0.003192293445042793;

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
    msg.setTimeStamp(0.06620441034241253);
    msg.setSource(27372U);
    msg.setSourceEntity(206U);
    msg.setDestination(21558U);
    msg.setDestinationEntity(116U);
    msg.x = 0.4392347895015477;
    msg.y = 0.725075569078734;
    msg.z = 0.661196711443389;
    msg.phi = 0.7354531118385562;
    msg.theta = 0.27722520331198974;
    msg.psi = 0.21473051290087652;

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
    msg.setTimeStamp(0.6728023426091688);
    msg.setSource(8498U);
    msg.setSourceEntity(217U);
    msg.setDestination(47092U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.13659129160649042;
    msg.beam_height = 0.11896845202618078;

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
    msg.setTimeStamp(0.27126686764488794);
    msg.setSource(24923U);
    msg.setSourceEntity(66U);
    msg.setDestination(53301U);
    msg.setDestinationEntity(235U);
    msg.beam_width = 0.08938293725971025;
    msg.beam_height = 0.2574783691748046;

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
    msg.setTimeStamp(0.14166426147703515);
    msg.setSource(54373U);
    msg.setSourceEntity(234U);
    msg.setDestination(42201U);
    msg.setDestinationEntity(182U);
    msg.beam_width = 0.8381482398860529;
    msg.beam_height = 0.10161160638427824;

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
    msg.setTimeStamp(0.9052035597976826);
    msg.setSource(48295U);
    msg.setSourceEntity(131U);
    msg.setDestination(28882U);
    msg.setDestinationEntity(61U);
    msg.sane = 156U;

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
    msg.setTimeStamp(0.7704890245268766);
    msg.setSource(9358U);
    msg.setSourceEntity(78U);
    msg.setDestination(8562U);
    msg.setDestinationEntity(100U);
    msg.sane = 86U;

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
    msg.setTimeStamp(0.7081550520261958);
    msg.setSource(172U);
    msg.setSourceEntity(252U);
    msg.setDestination(2310U);
    msg.setDestinationEntity(34U);
    msg.sane = 189U;

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
    msg.setTimeStamp(0.2195642091767811);
    msg.setSource(30369U);
    msg.setSourceEntity(89U);
    msg.setDestination(55475U);
    msg.setDestinationEntity(141U);
    msg.value = 0.12082184100682003;

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
    msg.setTimeStamp(0.9739278955820274);
    msg.setSource(33942U);
    msg.setSourceEntity(67U);
    msg.setDestination(17357U);
    msg.setDestinationEntity(151U);
    msg.value = 0.369210366996646;

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
    msg.setTimeStamp(0.4457568424252336);
    msg.setSource(13460U);
    msg.setSourceEntity(52U);
    msg.setDestination(44847U);
    msg.setDestinationEntity(103U);
    msg.value = 0.7016787843045765;

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
    msg.setTimeStamp(0.6589009285513521);
    msg.setSource(22075U);
    msg.setSourceEntity(9U);
    msg.setDestination(61003U);
    msg.setDestinationEntity(42U);
    msg.value = 0.39318130443147714;

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
    msg.setTimeStamp(0.05607098910665831);
    msg.setSource(18423U);
    msg.setSourceEntity(59U);
    msg.setDestination(20475U);
    msg.setDestinationEntity(55U);
    msg.value = 0.4756083414908082;

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
    msg.setTimeStamp(0.028986508872963723);
    msg.setSource(7464U);
    msg.setSourceEntity(49U);
    msg.setDestination(20881U);
    msg.setDestinationEntity(183U);
    msg.value = 0.7830714187786042;

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
    msg.setTimeStamp(0.17099690958825065);
    msg.setSource(50294U);
    msg.setSourceEntity(158U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(115U);
    msg.value = 0.39520364248889917;

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
    msg.setTimeStamp(0.6822964958554572);
    msg.setSource(39145U);
    msg.setSourceEntity(2U);
    msg.setDestination(43298U);
    msg.setDestinationEntity(105U);
    msg.value = 0.28552921491600214;

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
    msg.setTimeStamp(0.2625690272052358);
    msg.setSource(52413U);
    msg.setSourceEntity(37U);
    msg.setDestination(64184U);
    msg.setDestinationEntity(102U);
    msg.value = 0.4181681013141889;

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
    msg.setTimeStamp(0.38730904095479357);
    msg.setSource(58588U);
    msg.setSourceEntity(68U);
    msg.setDestination(57831U);
    msg.setDestinationEntity(4U);
    msg.value = 0.5693347785833845;

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
    msg.setTimeStamp(0.7623818863374);
    msg.setSource(43687U);
    msg.setSourceEntity(194U);
    msg.setDestination(1517U);
    msg.setDestinationEntity(100U);
    msg.value = 0.7478598253585835;

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
    msg.setTimeStamp(0.3808064323992706);
    msg.setSource(7551U);
    msg.setSourceEntity(50U);
    msg.setDestination(10069U);
    msg.setDestinationEntity(50U);
    msg.value = 0.5781922161284274;

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
    msg.setTimeStamp(0.05592389957990562);
    msg.setSource(7631U);
    msg.setSourceEntity(41U);
    msg.setDestination(33064U);
    msg.setDestinationEntity(87U);
    msg.value = 0.4991080536060112;

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
    msg.setTimeStamp(0.04190131980903433);
    msg.setSource(32402U);
    msg.setSourceEntity(44U);
    msg.setDestination(33457U);
    msg.setDestinationEntity(114U);
    msg.value = 0.467131097709628;

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
    msg.setTimeStamp(0.4201716891775975);
    msg.setSource(56281U);
    msg.setSourceEntity(17U);
    msg.setDestination(54142U);
    msg.setDestinationEntity(176U);
    msg.value = 0.0005574672812610482;

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
    msg.setTimeStamp(0.44280586462377214);
    msg.setSource(64533U);
    msg.setSourceEntity(105U);
    msg.setDestination(23415U);
    msg.setDestinationEntity(1U);
    msg.value = 0.053764595789273284;

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
    msg.setTimeStamp(0.6477254441434473);
    msg.setSource(5451U);
    msg.setSourceEntity(95U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(45U);
    msg.value = 0.7021768079868346;

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
    msg.setTimeStamp(0.39647655272554194);
    msg.setSource(54545U);
    msg.setSourceEntity(83U);
    msg.setDestination(51194U);
    msg.setDestinationEntity(253U);
    msg.value = 0.185086591978738;

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
    msg.setTimeStamp(0.8013242818710552);
    msg.setSource(63371U);
    msg.setSourceEntity(166U);
    msg.setDestination(38044U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8721707057719165;

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
    msg.setTimeStamp(0.443673905446788);
    msg.setSource(2887U);
    msg.setSourceEntity(251U);
    msg.setDestination(47006U);
    msg.setDestinationEntity(27U);
    msg.value = 0.0344493655426682;

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
    msg.setTimeStamp(0.03583250283792716);
    msg.setSource(40583U);
    msg.setSourceEntity(20U);
    msg.setDestination(35945U);
    msg.setDestinationEntity(38U);
    msg.value = 0.7729045473492296;

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
    msg.setTimeStamp(0.06623019259669272);
    msg.setSource(10857U);
    msg.setSourceEntity(30U);
    msg.setDestination(9697U);
    msg.setDestinationEntity(155U);
    msg.value = 0.8554584897747332;

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
    msg.setTimeStamp(0.5070240974715526);
    msg.setSource(56019U);
    msg.setSourceEntity(184U);
    msg.setDestination(64245U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8205758092010527;

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
    msg.setTimeStamp(0.6061148489099591);
    msg.setSource(8854U);
    msg.setSourceEntity(78U);
    msg.setDestination(13943U);
    msg.setDestinationEntity(173U);
    msg.value = 0.5953279400370446;

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
    msg.setTimeStamp(0.26207331021309366);
    msg.setSource(44675U);
    msg.setSourceEntity(202U);
    msg.setDestination(3983U);
    msg.setDestinationEntity(122U);
    msg.validity = 62185U;
    msg.type = 91U;
    msg.tow = 1539815973U;
    msg.base_lat = 0.363014649260039;
    msg.base_lon = 0.5485091439809012;
    msg.base_height = 0.9777464988569271;
    msg.n = 0.9807893254581349;
    msg.e = 0.6818136433223664;
    msg.d = 0.0031844652220760494;
    msg.v_n = 0.18302349404564544;
    msg.v_e = 0.9874282444759088;
    msg.v_d = 0.9644973126165676;
    msg.satellites = 181U;
    msg.iar_hyp = 8087U;
    msg.iar_ratio = 0.31609339559355787;

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
    msg.setTimeStamp(0.3085014130015421);
    msg.setSource(10454U);
    msg.setSourceEntity(105U);
    msg.setDestination(60242U);
    msg.setDestinationEntity(40U);
    msg.validity = 2015U;
    msg.type = 134U;
    msg.tow = 3771968902U;
    msg.base_lat = 0.2910109824633055;
    msg.base_lon = 0.39763159129258474;
    msg.base_height = 0.7617016547357961;
    msg.n = 0.06032864260356885;
    msg.e = 0.08399348427900677;
    msg.d = 0.1558731428260346;
    msg.v_n = 0.35401040039387555;
    msg.v_e = 0.4662700200447657;
    msg.v_d = 0.8282710723129368;
    msg.satellites = 45U;
    msg.iar_hyp = 13015U;
    msg.iar_ratio = 0.8919714944318308;

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
    msg.setTimeStamp(0.7833591629351871);
    msg.setSource(28053U);
    msg.setSourceEntity(243U);
    msg.setDestination(64290U);
    msg.setDestinationEntity(158U);
    msg.validity = 28265U;
    msg.type = 120U;
    msg.tow = 1921949194U;
    msg.base_lat = 0.3415204553046761;
    msg.base_lon = 0.5194980596564196;
    msg.base_height = 0.03210853120967205;
    msg.n = 0.41308868569750645;
    msg.e = 0.6966618346049683;
    msg.d = 0.06187101684807084;
    msg.v_n = 0.17822735307489412;
    msg.v_e = 0.0466461590557663;
    msg.v_d = 0.32549261363203175;
    msg.satellites = 36U;
    msg.iar_hyp = 3566U;
    msg.iar_ratio = 0.9646886634567216;

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
    msg.setTimeStamp(0.4932853398497541);
    msg.setSource(63687U);
    msg.setSourceEntity(120U);
    msg.setDestination(54759U);
    msg.setDestinationEntity(83U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.010832117227658422;
    tmp_msg_0.lon = 0.3308725781233447;
    tmp_msg_0.height = 0.3988826537277075;
    tmp_msg_0.x = 0.4306515207582925;
    tmp_msg_0.y = 0.7456697065283105;
    tmp_msg_0.z = 0.45277739186002086;
    tmp_msg_0.phi = 0.13014065985588252;
    tmp_msg_0.theta = 0.7397133641983674;
    tmp_msg_0.psi = 0.7050354447785226;
    tmp_msg_0.u = 0.14084401068612673;
    tmp_msg_0.v = 0.17589080506098742;
    tmp_msg_0.w = 0.3188042965805382;
    tmp_msg_0.vx = 0.0695529336166294;
    tmp_msg_0.vy = 0.6852252929057462;
    tmp_msg_0.vz = 0.7371923157869134;
    tmp_msg_0.p = 0.20266820256565754;
    tmp_msg_0.q = 0.2001622200560068;
    tmp_msg_0.r = 0.27067544730307325;
    tmp_msg_0.depth = 0.9890434148483358;
    tmp_msg_0.alt = 0.1562916477554286;
    msg.state.set(tmp_msg_0);
    msg.type = 234U;

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
    msg.setTimeStamp(0.42727999499132385);
    msg.setSource(38946U);
    msg.setSourceEntity(60U);
    msg.setDestination(55888U);
    msg.setDestinationEntity(113U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5682545018216374;
    tmp_msg_0.lon = 0.8410638732120586;
    tmp_msg_0.height = 0.9830823458493126;
    tmp_msg_0.x = 0.5040141808696459;
    tmp_msg_0.y = 0.4439241917294492;
    tmp_msg_0.z = 0.022952345051349132;
    tmp_msg_0.phi = 0.6923755551761211;
    tmp_msg_0.theta = 0.4107770822724204;
    tmp_msg_0.psi = 0.42020279574794184;
    tmp_msg_0.u = 0.1356369592068768;
    tmp_msg_0.v = 0.8434689034381226;
    tmp_msg_0.w = 0.2813449033220655;
    tmp_msg_0.vx = 0.8650051769594524;
    tmp_msg_0.vy = 0.5794068470122519;
    tmp_msg_0.vz = 0.06293334997845501;
    tmp_msg_0.p = 0.9781512397696129;
    tmp_msg_0.q = 0.21239371686679887;
    tmp_msg_0.r = 0.7431721690541586;
    tmp_msg_0.depth = 0.034080571149757155;
    tmp_msg_0.alt = 0.5704208602555365;
    msg.state.set(tmp_msg_0);
    msg.type = 90U;

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
    msg.setTimeStamp(0.09274599693507535);
    msg.setSource(19388U);
    msg.setSourceEntity(20U);
    msg.setDestination(34689U);
    msg.setDestinationEntity(177U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2716804290282808;
    tmp_msg_0.lon = 0.38130029108308916;
    tmp_msg_0.height = 0.9606451316839708;
    tmp_msg_0.x = 0.29814938882693376;
    tmp_msg_0.y = 0.1747926111864997;
    tmp_msg_0.z = 0.7854079958717526;
    tmp_msg_0.phi = 0.6331393932065122;
    tmp_msg_0.theta = 0.25569715008504657;
    tmp_msg_0.psi = 0.9740378846246138;
    tmp_msg_0.u = 0.317488466228084;
    tmp_msg_0.v = 0.559377935782207;
    tmp_msg_0.w = 0.2989842325274462;
    tmp_msg_0.vx = 0.9720873720945512;
    tmp_msg_0.vy = 0.7881989509866797;
    tmp_msg_0.vz = 0.5010836171961497;
    tmp_msg_0.p = 0.11889001975158964;
    tmp_msg_0.q = 0.6548444258208612;
    tmp_msg_0.r = 0.603558772376988;
    tmp_msg_0.depth = 0.21573670295492786;
    tmp_msg_0.alt = 0.010599819538913868;
    msg.state.set(tmp_msg_0);
    msg.type = 218U;

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
    msg.setTimeStamp(0.9623089306460891);
    msg.setSource(34925U);
    msg.setSourceEntity(89U);
    msg.setDestination(61432U);
    msg.setDestinationEntity(54U);
    msg.value = 0.3019436381961934;

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
    msg.setTimeStamp(0.6579062571126837);
    msg.setSource(55788U);
    msg.setSourceEntity(65U);
    msg.setDestination(50455U);
    msg.setDestinationEntity(224U);
    msg.value = 0.3050629004699652;

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
    msg.setTimeStamp(0.5387193095609145);
    msg.setSource(90U);
    msg.setSourceEntity(79U);
    msg.setDestination(8590U);
    msg.setDestinationEntity(146U);
    msg.value = 0.42636387915818474;

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
    msg.setTimeStamp(0.5287632126234435);
    msg.setSource(17364U);
    msg.setSourceEntity(196U);
    msg.setDestination(38898U);
    msg.setDestinationEntity(207U);
    msg.value = 0.26755684418395076;

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
    msg.setTimeStamp(0.6538247293098777);
    msg.setSource(26084U);
    msg.setSourceEntity(190U);
    msg.setDestination(9004U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5241024729701945;

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
    msg.setTimeStamp(0.3306832497634654);
    msg.setSource(32776U);
    msg.setSourceEntity(72U);
    msg.setDestination(49362U);
    msg.setDestinationEntity(228U);
    msg.value = 0.15221026308841246;

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
    msg.setTimeStamp(0.4329686338619727);
    msg.setSource(31157U);
    msg.setSourceEntity(175U);
    msg.setDestination(38532U);
    msg.setDestinationEntity(90U);
    msg.value = 0.8464305884352931;

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
    msg.setTimeStamp(0.6146959428993177);
    msg.setSource(19483U);
    msg.setSourceEntity(190U);
    msg.setDestination(58294U);
    msg.setDestinationEntity(155U);
    msg.value = 0.27102257145230113;

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
    msg.setTimeStamp(0.7450471928570558);
    msg.setSource(60166U);
    msg.setSourceEntity(214U);
    msg.setDestination(33908U);
    msg.setDestinationEntity(31U);
    msg.value = 0.3143287171197262;

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
    msg.setTimeStamp(0.6364730100307437);
    msg.setSource(52113U);
    msg.setSourceEntity(125U);
    msg.setDestination(19390U);
    msg.setDestinationEntity(23U);
    msg.value = 0.17897141555686213;

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
    msg.setTimeStamp(0.5086990626967822);
    msg.setSource(35444U);
    msg.setSourceEntity(105U);
    msg.setDestination(31802U);
    msg.setDestinationEntity(64U);
    msg.value = 0.38073589738282454;

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
    msg.setTimeStamp(0.2699612277585023);
    msg.setSource(35147U);
    msg.setSourceEntity(24U);
    msg.setDestination(15884U);
    msg.setDestinationEntity(54U);
    msg.value = 0.8475595615849185;

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
    msg.setTimeStamp(0.05886780055143004);
    msg.setSource(60363U);
    msg.setSourceEntity(154U);
    msg.setDestination(1319U);
    msg.setDestinationEntity(175U);
    msg.value = 0.8699778602030973;

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
    msg.setTimeStamp(0.1719696565685519);
    msg.setSource(45309U);
    msg.setSourceEntity(21U);
    msg.setDestination(1224U);
    msg.setDestinationEntity(84U);
    msg.value = 0.14033824409517126;

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
    msg.setTimeStamp(0.26435635049233963);
    msg.setSource(65289U);
    msg.setSourceEntity(160U);
    msg.setDestination(1906U);
    msg.setDestinationEntity(88U);
    msg.value = 0.5583862406267197;

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
    msg.setTimeStamp(0.1875192896461021);
    msg.setSource(53020U);
    msg.setSourceEntity(2U);
    msg.setDestination(46149U);
    msg.setDestinationEntity(120U);
    msg.id = 87U;
    msg.zoom = 156U;
    msg.action = 45U;

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
    msg.setTimeStamp(0.7777483860588733);
    msg.setSource(32526U);
    msg.setSourceEntity(104U);
    msg.setDestination(11097U);
    msg.setDestinationEntity(17U);
    msg.id = 68U;
    msg.zoom = 170U;
    msg.action = 127U;

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
    msg.setTimeStamp(0.316449905336773);
    msg.setSource(41988U);
    msg.setSourceEntity(86U);
    msg.setDestination(52023U);
    msg.setDestinationEntity(71U);
    msg.id = 222U;
    msg.zoom = 246U;
    msg.action = 191U;

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
    msg.setTimeStamp(0.3163801516368915);
    msg.setSource(1759U);
    msg.setSourceEntity(95U);
    msg.setDestination(56668U);
    msg.setDestinationEntity(192U);
    msg.id = 3U;
    msg.value = 0.030381636428148062;

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
    msg.setTimeStamp(0.03974045224129863);
    msg.setSource(29112U);
    msg.setSourceEntity(113U);
    msg.setDestination(32252U);
    msg.setDestinationEntity(127U);
    msg.id = 234U;
    msg.value = 0.9396535482308381;

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
    msg.setTimeStamp(0.8974373914707936);
    msg.setSource(36798U);
    msg.setSourceEntity(138U);
    msg.setDestination(8284U);
    msg.setDestinationEntity(150U);
    msg.id = 238U;
    msg.value = 0.49691261790705943;

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
    msg.setTimeStamp(0.33022082555355003);
    msg.setSource(37346U);
    msg.setSourceEntity(136U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(36U);
    msg.id = 8U;
    msg.value = 0.08714652999224914;

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
    msg.setTimeStamp(0.48683861196178413);
    msg.setSource(61199U);
    msg.setSourceEntity(134U);
    msg.setDestination(39995U);
    msg.setDestinationEntity(126U);
    msg.id = 177U;
    msg.value = 0.819845594143149;

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
    msg.setTimeStamp(0.9038754103657053);
    msg.setSource(39692U);
    msg.setSourceEntity(21U);
    msg.setDestination(15903U);
    msg.setDestinationEntity(27U);
    msg.id = 250U;
    msg.value = 0.6010133557575656;

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
    msg.setTimeStamp(0.3536881434315815);
    msg.setSource(27132U);
    msg.setSourceEntity(163U);
    msg.setDestination(54677U);
    msg.setDestinationEntity(3U);
    msg.id = 204U;
    msg.angle = 0.33507505024477247;

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
    msg.setTimeStamp(0.5898433124264117);
    msg.setSource(32923U);
    msg.setSourceEntity(110U);
    msg.setDestination(46477U);
    msg.setDestinationEntity(126U);
    msg.id = 28U;
    msg.angle = 0.7623254002531579;

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
    msg.setTimeStamp(0.900764061638525);
    msg.setSource(60249U);
    msg.setSourceEntity(186U);
    msg.setDestination(45887U);
    msg.setDestinationEntity(192U);
    msg.id = 82U;
    msg.angle = 0.9832151252687338;

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
    msg.setTimeStamp(0.4911037360756966);
    msg.setSource(54248U);
    msg.setSourceEntity(140U);
    msg.setDestination(45334U);
    msg.setDestinationEntity(27U);
    msg.op = 138U;
    msg.actions.assign("BQHKWQOGXOXFYXHRVFTPFBJCQMUWFMMUXBDJYWTGTBQOOJWROCWSTUASKKKDWQIJFVLGZKCLAVGDIIXHIJZYSAKPAXEZTPAHULWNEKYFIGRLCJMEROHLZOTVADIUYIRHIMCYONCKDGMVZZNGRFLEPLN");

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
    msg.setTimeStamp(0.5472583281523897);
    msg.setSource(37049U);
    msg.setSourceEntity(213U);
    msg.setDestination(1177U);
    msg.setDestinationEntity(85U);
    msg.op = 23U;
    msg.actions.assign("OYEWKTHRYSCUPFXVIZLBVJBYYQUMCTLOYYDCLWWAWEWKPXCUHIMTBVGNQNTISOTQKJKAZUZEZDECQPKEZNRREZBBGXAYJLAOIRBGFEVHPFOMGKRVQGDDWOXWEOZKSVFSPXUKKDYPADCHRSHFPHSJXHHZJRSQGHNNMXPLCOXCGFOTLFAKGNBIRIAUYTIRTFDDNAMTBUQQUWDMJMVCQOPRPBIVJWLEESMUZ");

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
    msg.setTimeStamp(0.7618382844090118);
    msg.setSource(6353U);
    msg.setSourceEntity(89U);
    msg.setDestination(28986U);
    msg.setDestinationEntity(140U);
    msg.op = 114U;
    msg.actions.assign("AJGKNSKRROYDEENWIUJKXHDOPZCZXYDEIBMQUYRHNUQQALTWLIOWVTFQYFETUFBZQJBXTXGNIVKGV");

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
    msg.setTimeStamp(0.12132420674912947);
    msg.setSource(51038U);
    msg.setSourceEntity(145U);
    msg.setDestination(57917U);
    msg.setDestinationEntity(202U);
    msg.actions.assign("TULSMNYXNPEMLBGSVHRJJOWOHIWTRXPUTZLZSFFNMFKOCCZDAWNFPUXPRCABTWMQOGETFTZLLXXSVXIQYTRRYIIQONCFQQKWHPNJGJOGIZVHXEJZDUCQHDPRMALGZKBULVBDKEHEBMHMGSXJCVEDVNCBKK");

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
    msg.setTimeStamp(0.9125812752766991);
    msg.setSource(43456U);
    msg.setSourceEntity(46U);
    msg.setDestination(39302U);
    msg.setDestinationEntity(132U);
    msg.actions.assign("BDCIEMRRYAMXCCYQQIHSFDMYZHNYLFUPFDPGPWNOUFBHMQARNGIJTLDLTOWLVRWBKGTGZKPJMQCEJQJYPIVDXOEHVAXWHVMUHMNFCWPKTISTUOPGRSLBSIIIXNDJOTPKTAFWBGUBSEUD");

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
    msg.setTimeStamp(0.9810628203517001);
    msg.setSource(17447U);
    msg.setSourceEntity(69U);
    msg.setDestination(1855U);
    msg.setDestinationEntity(191U);
    msg.actions.assign("NIGSMMFWWWQCNCOEDRURYVZBEFPKBPMPMFODLULHXBYCPUGSXTEFWAPEXMECDHYTXTNZTYHGKZLPICSWSKVTBQJGSJQMQOGZZKALAIVKHLOYXCBAMKRQSQDHZAHOKYAKGKUTRWDMDSWUFNWRCEJVDUPI");

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
    msg.setTimeStamp(0.5192008978905069);
    msg.setSource(53228U);
    msg.setSourceEntity(91U);
    msg.setDestination(15956U);
    msg.setDestinationEntity(162U);
    msg.button = 165U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.8786597959236404);
    msg.setSource(17493U);
    msg.setSourceEntity(16U);
    msg.setDestination(2616U);
    msg.setDestinationEntity(120U);
    msg.button = 178U;
    msg.value = 230U;

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
    msg.setTimeStamp(0.4293406767986705);
    msg.setSource(65440U);
    msg.setSourceEntity(162U);
    msg.setDestination(16383U);
    msg.setDestinationEntity(239U);
    msg.button = 67U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.4394202817345563);
    msg.setSource(22981U);
    msg.setSourceEntity(189U);
    msg.setDestination(34667U);
    msg.setDestinationEntity(24U);
    msg.op = 215U;
    msg.text.assign("CUAVNAZFPYXODYVKPHFWYMBXQUBRSEMRCMQSJHNMXTUBVZQIWRJACWYWXMIRNKHPUMCEZCTOGFKLSULMMCDKHYWDZQLSXBHZLBJEUOKFQNSPRHGPEXAGVBLWIIYRVFRGNJTSQJEGDEFKPPRWVQZFRIIJUDDCJHVZIOGNOTYVSGAXBKEBMZHLIATLKIOJGOMPVTAPGCOUYYZCUHTQSKDNFILEJAXCLHPLNFQZOT");

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
    msg.setTimeStamp(0.5281325374870528);
    msg.setSource(57341U);
    msg.setSourceEntity(3U);
    msg.setDestination(23588U);
    msg.setDestinationEntity(249U);
    msg.op = 229U;
    msg.text.assign("IZYUOLYWWEHXFGGRFWVLLQTSAMQ");

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
    msg.setTimeStamp(0.3603572071101899);
    msg.setSource(3883U);
    msg.setSourceEntity(77U);
    msg.setDestination(8793U);
    msg.setDestinationEntity(117U);
    msg.op = 14U;
    msg.text.assign("AKJCAQZSYVHUPSEANPCSNVWOTFDBJPWYGZWUNBGOZCABLYWRCE");

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
    msg.setTimeStamp(0.9961086852519394);
    msg.setSource(13382U);
    msg.setSourceEntity(98U);
    msg.setDestination(36250U);
    msg.setDestinationEntity(94U);
    msg.op = 53U;
    msg.time_remain = 0.3622536355109185;
    msg.sched_time = 0.5895562490759613;

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
    msg.setTimeStamp(0.21593630954852316);
    msg.setSource(59980U);
    msg.setSourceEntity(102U);
    msg.setDestination(39471U);
    msg.setDestinationEntity(157U);
    msg.op = 123U;
    msg.time_remain = 0.7478275605625347;
    msg.sched_time = 0.20331900873292075;

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
    msg.setTimeStamp(0.6526414376201817);
    msg.setSource(33538U);
    msg.setSourceEntity(59U);
    msg.setDestination(33974U);
    msg.setDestinationEntity(172U);
    msg.op = 195U;
    msg.time_remain = 0.752098657666113;
    msg.sched_time = 0.8306641341549185;

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
    msg.setTimeStamp(0.006880706288784233);
    msg.setSource(63747U);
    msg.setSourceEntity(190U);
    msg.setDestination(1612U);
    msg.setDestinationEntity(178U);
    msg.name.assign("LBOYWCEGKZURKFMHCLEAOAXOALYCDYWZRYBIKDNVSKXDVDJRNUQHEDNIQLKRULQXHJKNVQIGDBJSEYWAZQNJTPYAPZOAZWBEVYDFFCWSHSSWBPSFCOBYLBAIYVETWZSMLVRFMXQQOFVLFONPZCJBXRGIZRQKDBPXLHRUWXCIUWGTZJCH");
    msg.op = 115U;
    msg.sched_time = 0.1318432640085514;

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
    msg.setTimeStamp(0.2007972670308571);
    msg.setSource(51556U);
    msg.setSourceEntity(52U);
    msg.setDestination(55518U);
    msg.setDestinationEntity(115U);
    msg.name.assign("FPPMGPYYBWDXBAOQXHZUDCGNMOATRONOACLR");
    msg.op = 153U;
    msg.sched_time = 0.6708977767226472;

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
    msg.setTimeStamp(0.10803456006249457);
    msg.setSource(27656U);
    msg.setSourceEntity(117U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(16U);
    msg.name.assign("WMCNUNLUDUBXKZTLHZTIJVNELYKMCYPKIBHAIMFGDRDBIEZYMFNREXSIVJXQTDCONHISFOZUJJKRXAINYKYLCOGZ");
    msg.op = 99U;
    msg.sched_time = 0.5227724230799772;

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
    msg.setTimeStamp(0.5439718455266386);
    msg.setSource(12984U);
    msg.setSourceEntity(118U);
    msg.setDestination(42743U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.19344931451078295);
    msg.setSource(33337U);
    msg.setSourceEntity(90U);
    msg.setDestination(15439U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.608286539079705);
    msg.setSource(12186U);
    msg.setSourceEntity(76U);
    msg.setDestination(29129U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.42053443612070307);
    msg.setSource(34379U);
    msg.setSourceEntity(188U);
    msg.setDestination(55020U);
    msg.setDestinationEntity(100U);
    msg.name.assign("ORFCUSRINSNBDMGUUEZJLWESZEDVALOLHPXWMBHIAPIKXZBBNPPJCDNTTVREUPXTQEMRPNLWJFEJBXOFCWIJHOSALVOHBXTCEOYVHMXTKCY");
    msg.state = 205U;

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
    msg.setTimeStamp(0.43975219352529193);
    msg.setSource(26483U);
    msg.setSourceEntity(53U);
    msg.setDestination(30305U);
    msg.setDestinationEntity(240U);
    msg.name.assign("KUAAZTSNELUIPKWWGCNMMYDJVBAIDJPBOOBWUXEXBMYBNVHCPNKBSVOCXDQHRXVVVRHYFNZOVHOUVNDPYCIESBPLHLNLHGLRGJSAFJSUJEPKWWEZIOPUEDLMGQKTHUZTDIKKLDEDYJKGZXROHEQTTXKTFEMGGFPMSAFJSHXXWA");
    msg.state = 82U;

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
    msg.setTimeStamp(0.8693028569778842);
    msg.setSource(29634U);
    msg.setSourceEntity(189U);
    msg.setDestination(42467U);
    msg.setDestinationEntity(221U);
    msg.name.assign("WVXNLBUNWUAKPDSXZPAHVZQMBYOYNNCRPAFWWNHPVFUVZCODJJTJSBAJPRFNVBGZEPSHYIGBLZWDFYMYTLDKDHIWEPKCDLPZDJLEXRXYAUQFRKOVFWGKHUJKANEMLQGQJBYBQGUDRCHYHZETXEVGISVLVJCXIMIPM");
    msg.state = 212U;

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
    msg.setTimeStamp(0.8582788724091058);
    msg.setSource(25381U);
    msg.setSourceEntity(171U);
    msg.setDestination(34462U);
    msg.setDestinationEntity(209U);
    msg.name.assign("CCZIARBBFQCIHYMV");
    msg.value = 109U;

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
    msg.setTimeStamp(0.08605585031867868);
    msg.setSource(43165U);
    msg.setSourceEntity(124U);
    msg.setDestination(33759U);
    msg.setDestinationEntity(112U);
    msg.name.assign("HSGCARKKWTYBEGWWSZRVCLWNPFWZJLCDHYKQNDCXJUNPFIEPUJOLANSFOXLOIGDBIDXVZYYUBFJHZHBOJAQVMTYFDJAXMKBTGTVZLHRQIXAQJENCMRYIGFVMXSPQYPBGFQGATMAUEKQFBKUOLZZJAIEEUHWCXBVONIWKTRYSBNTHVYNNEUCZMLKDICWGWPZMTSROSQXFNDSVJMOPTOCHDLRRMDAQF");
    msg.value = 132U;

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
    msg.setTimeStamp(0.9698578205702111);
    msg.setSource(39185U);
    msg.setSourceEntity(88U);
    msg.setDestination(51948U);
    msg.setDestinationEntity(156U);
    msg.name.assign("QWPNOEGJHIFDORKVNIHACPAZRTURJQDHKXMQBARDLHTIWIUPXTOQKYMMNVJTDUFJTCGEHXTGFSXNACJZHWCKRYBVPELDQPYSGHHPYGUOIBHFQNNZOCCIGXXMBSLMLVAJQOEAFKTWFWRCUGEQSLUCWDKITIDCVZQRSNVSCYLLWEPM");
    msg.value = 251U;

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
    msg.setTimeStamp(0.4465513678293236);
    msg.setSource(56636U);
    msg.setSourceEntity(65U);
    msg.setDestination(44215U);
    msg.setDestinationEntity(195U);
    msg.name.assign("CSTGXBHOBKPMWLAWTWYXMKNRNDVOFBHIYCSAVBSBHDDQIFVIJEEEILCREYLJTYTRCEGUFMUZLVKHDRZPOXMOGCQHEKLMXOYUEXXJZSPDZAVPPWTZWVYRWRZSFFCSXNJQJPRPUFNILQKFMQESGJOIDNBOBINGEKSH");

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
    msg.setTimeStamp(0.09988765759065765);
    msg.setSource(15526U);
    msg.setSourceEntity(214U);
    msg.setDestination(3184U);
    msg.setDestinationEntity(227U);
    msg.name.assign("TEEWKISWYZKCNPJOHSZYDNARKIGFPLPGSOHXFNPMRMHOND");

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
    msg.setTimeStamp(0.8719170532079381);
    msg.setSource(37722U);
    msg.setSourceEntity(87U);
    msg.setDestination(35107U);
    msg.setDestinationEntity(213U);
    msg.name.assign("RNEAMKULUSBPWMDFZSCSBPXJGHFMRNCDDVIYWYXPHJVWPUOTTNGKBHCPP");

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
    msg.setTimeStamp(0.6548787274540797);
    msg.setSource(5905U);
    msg.setSourceEntity(102U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(239U);
    msg.name.assign("RYPBWONJUSSCYQMVOWVZSHMWGTNVZONPBBNWTUKAALTUOHMHWWCADGXJHVULFHUGXIJMEFRNCQRTUCZGYBUEPLXWKDIPNKBFVKEQZADBM");
    msg.value = 144U;

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
    msg.setTimeStamp(0.6436972967479969);
    msg.setSource(13181U);
    msg.setSourceEntity(49U);
    msg.setDestination(49482U);
    msg.setDestinationEntity(60U);
    msg.name.assign("UDXKSJICGOIFCAQWIHSLEJVMPWLPPPERXRKREGHMBKQDZCLRKXENDREKWUHIFIVFAEQAIOGAQXZVNLXPWRHLUCSWINXIOYDUMQGPGYCXEYSTODNMLBNVABWKVMMINQOBGKGAHBCYZCODWJQHCTRJQQEUJTOJNUAYNPWDLDV");
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
    msg.setTimeStamp(0.03517553936296336);
    msg.setSource(93U);
    msg.setSourceEntity(140U);
    msg.setDestination(21873U);
    msg.setDestinationEntity(17U);
    msg.name.assign("SAQROJERRJRHCTKKVZTXFESSCOTIKKFWNUGTNKWACGSH");
    msg.value = 145U;

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
    msg.setTimeStamp(0.007024670035757907);
    msg.setSource(55436U);
    msg.setSourceEntity(127U);
    msg.setDestination(39271U);
    msg.setDestinationEntity(117U);
    msg.id = 138U;
    msg.period = 2258584582U;
    msg.duty_cycle = 3366267919U;

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
    msg.setTimeStamp(0.06622901755480926);
    msg.setSource(9503U);
    msg.setSourceEntity(140U);
    msg.setDestination(20822U);
    msg.setDestinationEntity(191U);
    msg.id = 133U;
    msg.period = 601134501U;
    msg.duty_cycle = 1763305103U;

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
    msg.setTimeStamp(0.13331579725965836);
    msg.setSource(13063U);
    msg.setSourceEntity(249U);
    msg.setDestination(53517U);
    msg.setDestinationEntity(185U);
    msg.id = 201U;
    msg.period = 2457772122U;
    msg.duty_cycle = 2743863670U;

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
    msg.setTimeStamp(0.18939917733203526);
    msg.setSource(5452U);
    msg.setSourceEntity(194U);
    msg.setDestination(55765U);
    msg.setDestinationEntity(37U);
    msg.id = 89U;
    msg.period = 177260022U;
    msg.duty_cycle = 4165681493U;

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
    msg.setTimeStamp(0.9698803313855562);
    msg.setSource(54986U);
    msg.setSourceEntity(11U);
    msg.setDestination(18835U);
    msg.setDestinationEntity(202U);
    msg.id = 206U;
    msg.period = 1932092062U;
    msg.duty_cycle = 2336167698U;

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
    msg.setTimeStamp(0.7666366233271844);
    msg.setSource(28605U);
    msg.setSourceEntity(60U);
    msg.setDestination(6123U);
    msg.setDestinationEntity(214U);
    msg.id = 232U;
    msg.period = 1236507007U;
    msg.duty_cycle = 2808278064U;

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
    msg.setTimeStamp(0.20606770956882725);
    msg.setSource(6740U);
    msg.setSourceEntity(91U);
    msg.setDestination(33135U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.4545082041349504;
    msg.lon = 0.9449079422582418;
    msg.height = 0.26545052536986313;
    msg.x = 0.9362980956866258;
    msg.y = 0.5698072057566036;
    msg.z = 0.29971287862091545;
    msg.phi = 0.6441516452734807;
    msg.theta = 0.5908575005430332;
    msg.psi = 0.5869533738083679;
    msg.u = 0.5754630198690551;
    msg.v = 0.3848589897424003;
    msg.w = 0.6675756918389107;
    msg.vx = 0.6489065452761316;
    msg.vy = 0.4157553798157996;
    msg.vz = 0.6491361844127463;
    msg.p = 0.11806258331295927;
    msg.q = 0.21853718290281643;
    msg.r = 0.5895616127346104;
    msg.depth = 0.0916053389052861;
    msg.alt = 0.9832321824815248;

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
    msg.setTimeStamp(0.3285141866549246);
    msg.setSource(23529U);
    msg.setSourceEntity(74U);
    msg.setDestination(41031U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.773386097191311;
    msg.lon = 0.2640817775668559;
    msg.height = 0.5375244228236454;
    msg.x = 0.8752586480277593;
    msg.y = 0.5176210730719881;
    msg.z = 0.9879458206148636;
    msg.phi = 0.3020458432281078;
    msg.theta = 0.5641460242094725;
    msg.psi = 0.07249254631989566;
    msg.u = 0.27551056286422493;
    msg.v = 0.899650870513405;
    msg.w = 0.22202980349115242;
    msg.vx = 0.6341382762413373;
    msg.vy = 0.6242536976285771;
    msg.vz = 0.8364743420773957;
    msg.p = 0.5006265370509617;
    msg.q = 0.8069767844299927;
    msg.r = 0.597920689775953;
    msg.depth = 0.36488896771728263;
    msg.alt = 0.4204149729426967;

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
    msg.setTimeStamp(0.8688127996367424);
    msg.setSource(49353U);
    msg.setSourceEntity(91U);
    msg.setDestination(9010U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.4486303601057099;
    msg.lon = 0.08555545737143633;
    msg.height = 0.9830479322234407;
    msg.x = 0.9058556327915853;
    msg.y = 0.9929502923715948;
    msg.z = 0.8262739925528256;
    msg.phi = 0.3825053718472057;
    msg.theta = 0.5285445044558872;
    msg.psi = 0.29221699370527177;
    msg.u = 0.9258501576594623;
    msg.v = 0.5447202079051351;
    msg.w = 0.5294870349612083;
    msg.vx = 0.9628634540125628;
    msg.vy = 0.5073993223053227;
    msg.vz = 0.5742160932142121;
    msg.p = 0.11591385782820496;
    msg.q = 0.5967880097317904;
    msg.r = 0.8120306136679738;
    msg.depth = 0.5710540797890911;
    msg.alt = 0.8675273807965225;

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
    msg.setTimeStamp(0.8858392875798202);
    msg.setSource(44559U);
    msg.setSourceEntity(21U);
    msg.setDestination(19570U);
    msg.setDestinationEntity(148U);
    msg.x = 0.3188320353394035;
    msg.y = 0.573214747887435;
    msg.z = 0.8933718797328641;

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
    msg.setTimeStamp(0.125833063794062);
    msg.setSource(38933U);
    msg.setSourceEntity(86U);
    msg.setDestination(19912U);
    msg.setDestinationEntity(210U);
    msg.x = 0.3710593960711599;
    msg.y = 0.8558564023042514;
    msg.z = 0.2641126823919413;

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
    msg.setTimeStamp(0.38114626146982267);
    msg.setSource(59733U);
    msg.setSourceEntity(185U);
    msg.setDestination(58365U);
    msg.setDestinationEntity(50U);
    msg.x = 0.9892117327435227;
    msg.y = 0.49577152472564856;
    msg.z = 0.4286492816870847;

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
    msg.setTimeStamp(0.4886210239334452);
    msg.setSource(49691U);
    msg.setSourceEntity(20U);
    msg.setDestination(6338U);
    msg.setDestinationEntity(112U);
    msg.value = 0.14243680170914952;

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
    msg.setTimeStamp(0.799027430582207);
    msg.setSource(26301U);
    msg.setSourceEntity(137U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(16U);
    msg.value = 0.4065588861302091;

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
    msg.setTimeStamp(0.8034063162786684);
    msg.setSource(64734U);
    msg.setSourceEntity(102U);
    msg.setDestination(40413U);
    msg.setDestinationEntity(103U);
    msg.value = 0.5037414391088945;

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
    msg.setTimeStamp(0.5143451980978977);
    msg.setSource(30739U);
    msg.setSourceEntity(194U);
    msg.setDestination(36183U);
    msg.setDestinationEntity(206U);
    msg.value = 0.33859731315363906;

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
    msg.setTimeStamp(0.5785920431982359);
    msg.setSource(62507U);
    msg.setSourceEntity(91U);
    msg.setDestination(37757U);
    msg.setDestinationEntity(225U);
    msg.value = 0.36601352537813703;

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
    msg.setTimeStamp(0.0857319253767641);
    msg.setSource(49054U);
    msg.setSourceEntity(103U);
    msg.setDestination(36470U);
    msg.setDestinationEntity(221U);
    msg.value = 0.034745001628593286;

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
    msg.setTimeStamp(0.029200831152548457);
    msg.setSource(20301U);
    msg.setSourceEntity(147U);
    msg.setDestination(12835U);
    msg.setDestinationEntity(85U);
    msg.x = 0.04914808442824781;
    msg.y = 0.8668490193061702;
    msg.z = 0.9752194310205737;
    msg.phi = 0.7861604410141543;
    msg.theta = 0.25330969591077035;
    msg.psi = 0.6457349483612989;
    msg.p = 0.003447590105021936;
    msg.q = 0.9478182789894944;
    msg.r = 0.33437378072995605;
    msg.u = 0.9880755094182505;
    msg.v = 0.7552574701873166;
    msg.w = 0.9510389718847989;
    msg.bias_psi = 0.5112282185085267;
    msg.bias_r = 0.9410961815827105;

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
    msg.setTimeStamp(0.6174371043720497);
    msg.setSource(63930U);
    msg.setSourceEntity(199U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(37U);
    msg.x = 0.8279174670454017;
    msg.y = 0.45453227879781133;
    msg.z = 0.8687900804537436;
    msg.phi = 0.0519819662296096;
    msg.theta = 0.4198578695573919;
    msg.psi = 0.01531803453021141;
    msg.p = 0.9609094767515954;
    msg.q = 0.08654635998293148;
    msg.r = 0.028258707776683267;
    msg.u = 0.12958741430072307;
    msg.v = 0.6592460148119882;
    msg.w = 0.9727495405044193;
    msg.bias_psi = 0.13930640863279797;
    msg.bias_r = 0.7359488628046278;

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
    msg.setTimeStamp(0.3578515343772469);
    msg.setSource(61106U);
    msg.setSourceEntity(31U);
    msg.setDestination(58029U);
    msg.setDestinationEntity(214U);
    msg.x = 0.9472388657353974;
    msg.y = 0.5498175997015027;
    msg.z = 0.33637869356120376;
    msg.phi = 0.13410524769274756;
    msg.theta = 0.060929770537457184;
    msg.psi = 0.8165043486959787;
    msg.p = 0.6858548020931772;
    msg.q = 0.47562131771697647;
    msg.r = 0.9329182140547931;
    msg.u = 0.04685430919283895;
    msg.v = 0.6009768987376605;
    msg.w = 0.6732093370066564;
    msg.bias_psi = 0.28886667904412777;
    msg.bias_r = 0.38005654516163256;

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
    msg.setTimeStamp(0.3453662380738728);
    msg.setSource(56150U);
    msg.setSourceEntity(151U);
    msg.setDestination(29138U);
    msg.setDestinationEntity(163U);
    msg.bias_psi = 0.3279954213227887;
    msg.bias_r = 0.9970656664206565;
    msg.cog = 0.34599726693391564;
    msg.cyaw = 0.1421552501693405;
    msg.lbl_rej_level = 0.8773793789404187;
    msg.gps_rej_level = 0.20477422880725527;
    msg.custom_x = 0.3229891350431363;
    msg.custom_y = 0.456176833433906;
    msg.custom_z = 0.6509179266360096;

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
    msg.setTimeStamp(0.9375134375180879);
    msg.setSource(31395U);
    msg.setSourceEntity(92U);
    msg.setDestination(21233U);
    msg.setDestinationEntity(183U);
    msg.bias_psi = 0.7057323917277483;
    msg.bias_r = 0.5636117076457677;
    msg.cog = 0.28991961760440477;
    msg.cyaw = 0.36436706686394327;
    msg.lbl_rej_level = 0.5489973656203366;
    msg.gps_rej_level = 0.7394657261752008;
    msg.custom_x = 0.6841319489615165;
    msg.custom_y = 0.8756654585631369;
    msg.custom_z = 0.33108959023717055;

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
    msg.setTimeStamp(0.7546861756806698);
    msg.setSource(28616U);
    msg.setSourceEntity(221U);
    msg.setDestination(50224U);
    msg.setDestinationEntity(251U);
    msg.bias_psi = 0.7365340285180481;
    msg.bias_r = 0.4438825395941052;
    msg.cog = 0.5749036196266286;
    msg.cyaw = 0.6649949325805419;
    msg.lbl_rej_level = 0.7251926250579196;
    msg.gps_rej_level = 0.39342886248995157;
    msg.custom_x = 0.2747083484713364;
    msg.custom_y = 0.26376813928832965;
    msg.custom_z = 0.07178360310643683;

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
    msg.setTimeStamp(0.7528382164767711);
    msg.setSource(42947U);
    msg.setSourceEntity(222U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(73U);
    msg.utc_time = 0.10874177686539721;
    msg.reason = 4U;

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
    msg.setTimeStamp(0.3075901333563362);
    msg.setSource(45353U);
    msg.setSourceEntity(223U);
    msg.setDestination(46491U);
    msg.setDestinationEntity(140U);
    msg.utc_time = 0.8577399464299973;
    msg.reason = 151U;

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
    msg.setTimeStamp(0.1077670491085172);
    msg.setSource(51573U);
    msg.setSourceEntity(132U);
    msg.setDestination(64739U);
    msg.setDestinationEntity(57U);
    msg.utc_time = 0.33979005505713344;
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
    msg.setTimeStamp(0.6239014450868613);
    msg.setSource(60887U);
    msg.setSourceEntity(224U);
    msg.setDestination(48619U);
    msg.setDestinationEntity(54U);
    msg.id = 145U;
    msg.range = 0.27706811430553735;
    msg.acceptance = 192U;

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
    msg.setTimeStamp(0.6089716540311102);
    msg.setSource(46722U);
    msg.setSourceEntity(82U);
    msg.setDestination(42912U);
    msg.setDestinationEntity(146U);
    msg.id = 50U;
    msg.range = 0.8876357400933437;
    msg.acceptance = 64U;

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
    msg.setTimeStamp(0.43893803257638786);
    msg.setSource(26781U);
    msg.setSourceEntity(31U);
    msg.setDestination(9891U);
    msg.setDestinationEntity(230U);
    msg.id = 163U;
    msg.range = 0.07154769738173372;
    msg.acceptance = 68U;

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
    msg.setTimeStamp(0.5959024146983669);
    msg.setSource(24171U);
    msg.setSourceEntity(30U);
    msg.setDestination(6911U);
    msg.setDestinationEntity(84U);
    msg.type = 123U;
    msg.reason = 65U;
    msg.value = 0.764832491244828;
    msg.timestep = 0.6031726992471165;

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
    msg.setTimeStamp(0.24284923614794307);
    msg.setSource(54294U);
    msg.setSourceEntity(204U);
    msg.setDestination(54005U);
    msg.setDestinationEntity(194U);
    msg.type = 2U;
    msg.reason = 199U;
    msg.value = 0.26810143685586174;
    msg.timestep = 0.44889203749969264;

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
    msg.setTimeStamp(0.5106003806768729);
    msg.setSource(64783U);
    msg.setSourceEntity(95U);
    msg.setDestination(40494U);
    msg.setDestinationEntity(140U);
    msg.type = 45U;
    msg.reason = 241U;
    msg.value = 0.465508001406031;
    msg.timestep = 0.9171430219712652;

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
    msg.setTimeStamp(0.006534809466010039);
    msg.setSource(58892U);
    msg.setSourceEntity(113U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(243U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TEZMAERCMPORJLECHRDXVHBDIVQNJEGYWXZYMYLTSJCTHZLRZGKRHAWJBCAYSANDBZYVFPNHZPUZPRNCGBODNWSQLAKDAMUPTFKQKOXSFWBSFLOFOFYIQSEFJDXXETTMEYCRRMXSMGAJWOACRDTNWBEFVBLTPBTJIKHXGMKBIIHLSUIEQQCHXSFPYKQJTWMNOIZROJ");
    tmp_msg_0.lat = 0.33315792668138444;
    tmp_msg_0.lon = 0.21994524927670045;
    tmp_msg_0.depth = 0.4731657281479532;
    tmp_msg_0.query_channel = 125U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 81U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.38837706665284133;
    msg.y = 0.9859170136482571;
    msg.var_x = 0.1330559924898529;
    msg.var_y = 0.5645534988395428;
    msg.distance = 0.4249140761457465;

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
    msg.setTimeStamp(0.5411412176091186);
    msg.setSource(64731U);
    msg.setSourceEntity(54U);
    msg.setDestination(18859U);
    msg.setDestinationEntity(174U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TYGJJKHBYSD");
    tmp_msg_0.lat = 0.19886618390174526;
    tmp_msg_0.lon = 0.14171665523334642;
    tmp_msg_0.depth = 0.7327316733481106;
    tmp_msg_0.query_channel = 172U;
    tmp_msg_0.reply_channel = 61U;
    tmp_msg_0.transponder_delay = 172U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.31445430695544596;
    msg.y = 0.9664345084924663;
    msg.var_x = 0.7108809144137421;
    msg.var_y = 0.12712367155254478;
    msg.distance = 0.32167606861511144;

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
    msg.setTimeStamp(0.7102934613521094);
    msg.setSource(57782U);
    msg.setSourceEntity(100U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(73U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GKHSFHGIHJQRUIWZXIKNAFDYXBAINZTDTRQABTAGAOKWLHSESYULXJEDGTTLWFJIXFMOGYYMFSPPEFEFIELYHJZCNBAYAKAFZTNVSCJGDDCLCZQRDECONPNGMMUPBKBIXZWOJUUHSTRXTQMXHOVWMLYUJOMWRQULQRSWDQRHVEBQZNJKAECCLPVOWAPVCGFIKXZBMSUEDOTNUJVEMHYXRDSKPVNGVSZBRXWFNPVCBYWVUZBKTDPQKHOPLY");
    tmp_msg_0.lat = 0.45791637153148657;
    tmp_msg_0.lon = 0.8578821297299487;
    tmp_msg_0.depth = 0.21362266809649966;
    tmp_msg_0.query_channel = 243U;
    tmp_msg_0.reply_channel = 48U;
    tmp_msg_0.transponder_delay = 110U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.37062871970076383;
    msg.y = 0.847657302034858;
    msg.var_x = 0.14572075700972986;
    msg.var_y = 0.27461473913606915;
    msg.distance = 0.9602988109583465;

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
    msg.setTimeStamp(0.49285208409157166);
    msg.setSource(47579U);
    msg.setSourceEntity(155U);
    msg.setDestination(41835U);
    msg.setDestinationEntity(12U);
    msg.state = 217U;

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
    msg.setTimeStamp(0.6029703111864378);
    msg.setSource(35189U);
    msg.setSourceEntity(24U);
    msg.setDestination(11012U);
    msg.setDestinationEntity(240U);
    msg.state = 98U;

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
    msg.setTimeStamp(0.43504394254907897);
    msg.setSource(48940U);
    msg.setSourceEntity(39U);
    msg.setDestination(12596U);
    msg.setDestinationEntity(193U);
    msg.state = 109U;

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
    msg.setTimeStamp(0.5681053989380689);
    msg.setSource(54323U);
    msg.setSourceEntity(226U);
    msg.setDestination(31363U);
    msg.setDestinationEntity(67U);
    msg.x = 0.5432489792542573;
    msg.y = 0.7642640401641212;
    msg.z = 0.6446146085845806;

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
    msg.setTimeStamp(0.042609529605475926);
    msg.setSource(11445U);
    msg.setSourceEntity(84U);
    msg.setDestination(1799U);
    msg.setDestinationEntity(83U);
    msg.x = 0.7879154895929721;
    msg.y = 0.13601517807855457;
    msg.z = 0.9778870990990524;

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
    msg.setTimeStamp(0.24507551502130764);
    msg.setSource(21140U);
    msg.setSourceEntity(163U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(145U);
    msg.x = 0.373125009023349;
    msg.y = 0.691772715557818;
    msg.z = 0.9443462438759608;

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
    msg.setTimeStamp(0.8596507687789697);
    msg.setSource(19005U);
    msg.setSourceEntity(149U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(87U);
    msg.va = 0.28796804953658384;
    msg.aoa = 0.5915956982638299;
    msg.ssa = 0.9184596950020232;

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
    msg.setTimeStamp(0.159684774618286);
    msg.setSource(44974U);
    msg.setSourceEntity(87U);
    msg.setDestination(16644U);
    msg.setDestinationEntity(39U);
    msg.va = 0.8689138482393982;
    msg.aoa = 0.06950388384958817;
    msg.ssa = 0.48939311230677507;

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
    msg.setTimeStamp(0.7857423658615353);
    msg.setSource(31473U);
    msg.setSourceEntity(237U);
    msg.setDestination(4747U);
    msg.setDestinationEntity(99U);
    msg.va = 0.17930768571899236;
    msg.aoa = 0.736624582421738;
    msg.ssa = 0.9927810754557298;

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
    msg.setTimeStamp(0.6537901505827383);
    msg.setSource(31274U);
    msg.setSourceEntity(15U);
    msg.setDestination(13821U);
    msg.setDestinationEntity(8U);
    msg.value = 0.836080551092863;

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
    msg.setTimeStamp(0.39490654421406923);
    msg.setSource(41458U);
    msg.setSourceEntity(46U);
    msg.setDestination(26638U);
    msg.setDestinationEntity(18U);
    msg.value = 0.16193687562401282;

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
    msg.setTimeStamp(0.8671371751414624);
    msg.setSource(1760U);
    msg.setSourceEntity(241U);
    msg.setDestination(57663U);
    msg.setDestinationEntity(30U);
    msg.value = 0.2862367643706889;

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
    msg.setTimeStamp(0.7213713643263926);
    msg.setSource(40178U);
    msg.setSourceEntity(148U);
    msg.setDestination(53743U);
    msg.setDestinationEntity(140U);
    msg.value = 0.05701902946415427;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.22120499552667572);
    msg.setSource(12330U);
    msg.setSourceEntity(38U);
    msg.setDestination(27592U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8349216828513056;
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
    msg.setTimeStamp(0.9875254339308461);
    msg.setSource(46616U);
    msg.setSourceEntity(212U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(25U);
    msg.value = 0.9899320641295304;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.3153648415111364);
    msg.setSource(21416U);
    msg.setSourceEntity(147U);
    msg.setDestination(41155U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6351091544454218;
    msg.speed_units = 46U;

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
    msg.setTimeStamp(0.19342863126274612);
    msg.setSource(29960U);
    msg.setSourceEntity(78U);
    msg.setDestination(10726U);
    msg.setDestinationEntity(33U);
    msg.value = 0.1420795407311476;
    msg.speed_units = 57U;

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
    msg.setTimeStamp(0.2925826208562323);
    msg.setSource(64208U);
    msg.setSourceEntity(223U);
    msg.setDestination(10688U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7387053711029462;
    msg.speed_units = 58U;

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
    msg.setTimeStamp(0.8707881663043707);
    msg.setSource(51447U);
    msg.setSourceEntity(167U);
    msg.setDestination(65176U);
    msg.setDestinationEntity(71U);
    msg.value = 0.9012430558825026;

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
    msg.setTimeStamp(0.9520511361541786);
    msg.setSource(34237U);
    msg.setSourceEntity(122U);
    msg.setDestination(9698U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8073890539765669;

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
    msg.setTimeStamp(0.1282738287464269);
    msg.setSource(57943U);
    msg.setSourceEntity(173U);
    msg.setDestination(45463U);
    msg.setDestinationEntity(89U);
    msg.value = 0.11692580114715811;

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
    msg.setTimeStamp(0.6713774895851947);
    msg.setSource(7134U);
    msg.setSourceEntity(10U);
    msg.setDestination(55499U);
    msg.setDestinationEntity(22U);
    msg.value = 0.07024256972566945;

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
    msg.setTimeStamp(0.46956209123744097);
    msg.setSource(11963U);
    msg.setSourceEntity(211U);
    msg.setDestination(21829U);
    msg.setDestinationEntity(225U);
    msg.value = 0.11505715930673832;

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
    msg.setTimeStamp(0.08307390791656766);
    msg.setSource(33431U);
    msg.setSourceEntity(128U);
    msg.setDestination(48066U);
    msg.setDestinationEntity(8U);
    msg.value = 0.35226029035997375;

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
    msg.setTimeStamp(0.20556665457036005);
    msg.setSource(38532U);
    msg.setSourceEntity(3U);
    msg.setDestination(22702U);
    msg.setDestinationEntity(236U);
    msg.value = 0.4636302345293928;

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
    msg.setTimeStamp(0.5105770140509037);
    msg.setSource(43487U);
    msg.setSourceEntity(62U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5624857138916318;

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
    msg.setTimeStamp(0.8100231648576467);
    msg.setSource(19231U);
    msg.setSourceEntity(175U);
    msg.setDestination(9387U);
    msg.setDestinationEntity(121U);
    msg.value = 0.337211785192731;

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
    msg.setTimeStamp(0.824028258096942);
    msg.setSource(31551U);
    msg.setSourceEntity(58U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 4240503006U;
    msg.start_lat = 0.3509064772192265;
    msg.start_lon = 0.24645455388505277;
    msg.start_z = 0.017873264669506894;
    msg.start_z_units = 155U;
    msg.end_lat = 0.16386371498984587;
    msg.end_lon = 0.6893163283154614;
    msg.end_z = 0.4126875367222259;
    msg.end_z_units = 162U;
    msg.speed = 0.8564357412995666;
    msg.speed_units = 248U;
    msg.lradius = 0.3407541427885413;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.06802550814362696);
    msg.setSource(21932U);
    msg.setSourceEntity(103U);
    msg.setDestination(54906U);
    msg.setDestinationEntity(243U);
    msg.path_ref = 3575874236U;
    msg.start_lat = 0.346107711339367;
    msg.start_lon = 0.5391334301348831;
    msg.start_z = 0.062039926747822216;
    msg.start_z_units = 97U;
    msg.end_lat = 0.29431312334103454;
    msg.end_lon = 0.9443854679427305;
    msg.end_z = 0.41158840363075755;
    msg.end_z_units = 234U;
    msg.speed = 0.8421739470174051;
    msg.speed_units = 112U;
    msg.lradius = 0.555729639277806;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.9184348018408195);
    msg.setSource(26146U);
    msg.setSourceEntity(93U);
    msg.setDestination(52273U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 1984653649U;
    msg.start_lat = 0.6073098948664154;
    msg.start_lon = 0.5330782592394518;
    msg.start_z = 0.4723077355607824;
    msg.start_z_units = 189U;
    msg.end_lat = 0.2608383593764291;
    msg.end_lon = 0.6251991420116584;
    msg.end_z = 0.9654358190087965;
    msg.end_z_units = 4U;
    msg.speed = 0.1474009360402445;
    msg.speed_units = 103U;
    msg.lradius = 0.2835244801172655;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.6770774331566195);
    msg.setSource(45196U);
    msg.setSourceEntity(145U);
    msg.setDestination(63359U);
    msg.setDestinationEntity(90U);
    msg.x = 0.345953078453484;
    msg.y = 0.03334217377804205;
    msg.z = 0.5656461513699573;
    msg.k = 0.7685733941824595;
    msg.m = 0.5072235161256718;
    msg.n = 0.7378398115144987;
    msg.flags = 71U;

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
    msg.setTimeStamp(0.7281102232549174);
    msg.setSource(2715U);
    msg.setSourceEntity(3U);
    msg.setDestination(62166U);
    msg.setDestinationEntity(183U);
    msg.x = 0.7199908978917854;
    msg.y = 0.4382861972217782;
    msg.z = 0.3450534981803366;
    msg.k = 0.8849278929596125;
    msg.m = 0.6646259304337189;
    msg.n = 0.29898470060510296;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.4011825917351127);
    msg.setSource(12141U);
    msg.setSourceEntity(7U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(115U);
    msg.x = 0.23811902438761068;
    msg.y = 0.46274418522023786;
    msg.z = 0.3050235916988788;
    msg.k = 0.9290322470959956;
    msg.m = 0.32288708812255984;
    msg.n = 0.48644532214103997;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.9789257944604939);
    msg.setSource(47573U);
    msg.setSourceEntity(122U);
    msg.setDestination(52168U);
    msg.setDestinationEntity(36U);
    msg.value = 0.9726712159935251;

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
    msg.setTimeStamp(0.8202419979923269);
    msg.setSource(46523U);
    msg.setSourceEntity(138U);
    msg.setDestination(58590U);
    msg.setDestinationEntity(109U);
    msg.value = 0.2904744146491256;

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
    msg.setTimeStamp(0.07584896795060059);
    msg.setSource(13420U);
    msg.setSourceEntity(140U);
    msg.setDestination(20716U);
    msg.setDestinationEntity(50U);
    msg.value = 0.4966864318926737;

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
    msg.setTimeStamp(0.03976676809257729);
    msg.setSource(2564U);
    msg.setSourceEntity(113U);
    msg.setDestination(382U);
    msg.setDestinationEntity(69U);
    msg.u = 0.9956840445724853;
    msg.v = 0.6336790519525586;
    msg.w = 0.013197152738517404;
    msg.p = 0.9899778159454032;
    msg.q = 0.17365211579250017;
    msg.r = 0.012467321167971668;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.6406972554316535);
    msg.setSource(61700U);
    msg.setSourceEntity(212U);
    msg.setDestination(21872U);
    msg.setDestinationEntity(182U);
    msg.u = 0.5448249582026986;
    msg.v = 0.15240897881201487;
    msg.w = 0.5109239665299294;
    msg.p = 0.9821938429845218;
    msg.q = 0.39396563576966137;
    msg.r = 0.49825428055905296;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.8908086639865395);
    msg.setSource(51824U);
    msg.setSourceEntity(78U);
    msg.setDestination(58756U);
    msg.setDestinationEntity(94U);
    msg.u = 0.34177608639580503;
    msg.v = 0.8218016552524359;
    msg.w = 0.8333722016313266;
    msg.p = 0.9691268889797622;
    msg.q = 0.6291871632012218;
    msg.r = 0.26195690801009963;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.39202058807505136);
    msg.setSource(2757U);
    msg.setSourceEntity(124U);
    msg.setDestination(26973U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 2001185465U;
    msg.start_lat = 0.049515771144517995;
    msg.start_lon = 0.32631059867893186;
    msg.start_z = 0.45356551952482904;
    msg.start_z_units = 183U;
    msg.end_lat = 0.061045407681965314;
    msg.end_lon = 0.5537048042718884;
    msg.end_z = 0.5549708686273228;
    msg.end_z_units = 56U;
    msg.lradius = 0.9725647041087657;
    msg.flags = 137U;
    msg.x = 0.22368263098710073;
    msg.y = 0.16471039377293606;
    msg.z = 0.6233573533957982;
    msg.vx = 0.940821798420139;
    msg.vy = 0.03795559961098516;
    msg.vz = 0.5683759983442829;
    msg.course_error = 0.27838963718268095;
    msg.eta = 18807U;

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
    msg.setTimeStamp(0.5066282323565353);
    msg.setSource(15457U);
    msg.setSourceEntity(129U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 1107440248U;
    msg.start_lat = 0.7846436691897467;
    msg.start_lon = 0.26739187595830294;
    msg.start_z = 0.4694882147319648;
    msg.start_z_units = 4U;
    msg.end_lat = 0.6948278585302436;
    msg.end_lon = 0.7942599913840129;
    msg.end_z = 0.3547651136660783;
    msg.end_z_units = 52U;
    msg.lradius = 0.2904518429638633;
    msg.flags = 153U;
    msg.x = 0.7793694544434199;
    msg.y = 0.43262866595707017;
    msg.z = 0.8494389765774913;
    msg.vx = 0.9783843395018895;
    msg.vy = 0.8933457616141842;
    msg.vz = 0.48554535936037335;
    msg.course_error = 0.44116122804160374;
    msg.eta = 6107U;

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
    msg.setTimeStamp(0.7790030404169966);
    msg.setSource(31866U);
    msg.setSourceEntity(215U);
    msg.setDestination(16574U);
    msg.setDestinationEntity(44U);
    msg.path_ref = 2961175093U;
    msg.start_lat = 0.41702708765568464;
    msg.start_lon = 0.7214060269001485;
    msg.start_z = 0.3333104462590637;
    msg.start_z_units = 204U;
    msg.end_lat = 0.985548698819401;
    msg.end_lon = 0.3971458444925383;
    msg.end_z = 0.29508889327694443;
    msg.end_z_units = 182U;
    msg.lradius = 0.809376894564089;
    msg.flags = 113U;
    msg.x = 0.2852560569789384;
    msg.y = 0.30177935577240245;
    msg.z = 0.15385132536932633;
    msg.vx = 0.5348587333801579;
    msg.vy = 0.08024183313906752;
    msg.vz = 0.1250109402459898;
    msg.course_error = 0.2436931132188601;
    msg.eta = 42136U;

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
    msg.setTimeStamp(0.9842727222623566);
    msg.setSource(1051U);
    msg.setSourceEntity(101U);
    msg.setDestination(37124U);
    msg.setDestinationEntity(149U);
    msg.k = 0.5768022452602386;
    msg.m = 0.020972264460577872;
    msg.n = 0.4852562551049858;

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
    msg.setTimeStamp(0.6824728572114458);
    msg.setSource(21725U);
    msg.setSourceEntity(210U);
    msg.setDestination(32371U);
    msg.setDestinationEntity(188U);
    msg.k = 0.5109985912370193;
    msg.m = 0.28520650995170904;
    msg.n = 0.43852964623650725;

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
    msg.setTimeStamp(0.807534064736023);
    msg.setSource(29282U);
    msg.setSourceEntity(78U);
    msg.setDestination(17755U);
    msg.setDestinationEntity(74U);
    msg.k = 0.5681541078466096;
    msg.m = 0.772974229462445;
    msg.n = 0.3970424847414701;

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
    msg.setTimeStamp(0.05671744496774589);
    msg.setSource(40203U);
    msg.setSourceEntity(251U);
    msg.setDestination(35612U);
    msg.setDestinationEntity(35U);
    msg.p = 0.505533046102249;
    msg.i = 0.6158539623502993;
    msg.d = 0.09367755647819298;
    msg.a = 0.3976288142646348;

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
    msg.setTimeStamp(0.05520760058772711);
    msg.setSource(17739U);
    msg.setSourceEntity(79U);
    msg.setDestination(11154U);
    msg.setDestinationEntity(237U);
    msg.p = 0.4192828909573435;
    msg.i = 0.5395934976695071;
    msg.d = 0.13410658484318383;
    msg.a = 0.35928360993925457;

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
    msg.setTimeStamp(0.9991919616044784);
    msg.setSource(44714U);
    msg.setSourceEntity(11U);
    msg.setDestination(55662U);
    msg.setDestinationEntity(19U);
    msg.p = 0.5154461983953084;
    msg.i = 0.9526090990945043;
    msg.d = 0.7523857698214722;
    msg.a = 0.46109052458513555;

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
    msg.setTimeStamp(0.31234389706664667);
    msg.setSource(29510U);
    msg.setSourceEntity(96U);
    msg.setDestination(2269U);
    msg.setDestinationEntity(67U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.21084922366537784);
    msg.setSource(38360U);
    msg.setSourceEntity(36U);
    msg.setDestination(52291U);
    msg.setDestinationEntity(47U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.13217926778094824);
    msg.setSource(31601U);
    msg.setSourceEntity(9U);
    msg.setDestination(62589U);
    msg.setDestinationEntity(111U);
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
    msg.setTimeStamp(0.7559326317545414);
    msg.setSource(50608U);
    msg.setSourceEntity(52U);
    msg.setDestination(40113U);
    msg.setDestinationEntity(169U);
    msg.x = 0.09702281238360277;
    msg.y = 0.15368044020052885;
    msg.z = 0.32137407282189556;
    msg.vx = 0.8403349445795062;
    msg.vy = 0.384829900543998;
    msg.vz = 0.41089292226397967;
    msg.ax = 0.5864635119800427;
    msg.ay = 0.7015662198715631;
    msg.az = 0.8474994519664398;
    msg.flags = 41673U;

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
    msg.setTimeStamp(0.259367289306051);
    msg.setSource(21020U);
    msg.setSourceEntity(103U);
    msg.setDestination(37322U);
    msg.setDestinationEntity(0U);
    msg.x = 0.6165895061656894;
    msg.y = 0.4750590676266788;
    msg.z = 0.688730338221027;
    msg.vx = 0.35595870421049347;
    msg.vy = 0.2773719953867121;
    msg.vz = 0.910027380987002;
    msg.ax = 0.9245641197738717;
    msg.ay = 0.1477690436236987;
    msg.az = 0.7634819048823575;
    msg.flags = 9031U;

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
    msg.setTimeStamp(0.7599574393184778);
    msg.setSource(8768U);
    msg.setSourceEntity(163U);
    msg.setDestination(55871U);
    msg.setDestinationEntity(65U);
    msg.x = 0.4699024040363208;
    msg.y = 0.747829606645061;
    msg.z = 0.6993322751821575;
    msg.vx = 0.875814309661901;
    msg.vy = 0.7762405053826564;
    msg.vz = 0.5302195278020445;
    msg.ax = 0.24226027363976643;
    msg.ay = 0.3506743381764049;
    msg.az = 0.6272713679700326;
    msg.flags = 50325U;

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
    msg.setTimeStamp(0.8016729625978);
    msg.setSource(17388U);
    msg.setSourceEntity(10U);
    msg.setDestination(17432U);
    msg.setDestinationEntity(74U);
    msg.value = 0.9959265210094919;

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
    msg.setTimeStamp(0.30341902375093355);
    msg.setSource(58295U);
    msg.setSourceEntity(62U);
    msg.setDestination(51572U);
    msg.setDestinationEntity(101U);
    msg.value = 0.8158706216816124;

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
    msg.setTimeStamp(0.245089365443666);
    msg.setSource(23201U);
    msg.setSourceEntity(163U);
    msg.setDestination(18905U);
    msg.setDestinationEntity(4U);
    msg.value = 0.7647457193679514;

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
    msg.setTimeStamp(0.6938421611034726);
    msg.setSource(62223U);
    msg.setSourceEntity(221U);
    msg.setDestination(41353U);
    msg.setDestinationEntity(52U);
    msg.timeout = 46437U;
    msg.lat = 0.20449732743223226;
    msg.lon = 0.3190376796418718;
    msg.z = 0.3738384173932152;
    msg.z_units = 228U;
    msg.speed = 0.14775054423150635;
    msg.speed_units = 3U;
    msg.roll = 0.7881908706426032;
    msg.pitch = 0.4808496218106221;
    msg.yaw = 0.7861762752260397;
    msg.custom.assign("CUZPQYNSOYWBIBKYCAEBWANUZE");

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
    msg.setTimeStamp(0.02212700214747787);
    msg.setSource(35241U);
    msg.setSourceEntity(126U);
    msg.setDestination(16347U);
    msg.setDestinationEntity(44U);
    msg.timeout = 19247U;
    msg.lat = 0.1748072995692016;
    msg.lon = 0.42442990169853634;
    msg.z = 0.7711072137254822;
    msg.z_units = 78U;
    msg.speed = 0.5720627127043374;
    msg.speed_units = 202U;
    msg.roll = 0.9183101389987676;
    msg.pitch = 0.6060223114017552;
    msg.yaw = 0.34877583539329093;
    msg.custom.assign("ZAGQXIWSSTITZMERLUFTQFBFZCJMBXLFYAOWFZNGQLMJXVNQIPPUOLCHNPPPNKABUVNZEYITV");

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
    msg.setTimeStamp(0.6972002455465198);
    msg.setSource(16684U);
    msg.setSourceEntity(147U);
    msg.setDestination(58219U);
    msg.setDestinationEntity(29U);
    msg.timeout = 40555U;
    msg.lat = 0.7551699195130607;
    msg.lon = 0.8049469918514904;
    msg.z = 0.9863895026124782;
    msg.z_units = 198U;
    msg.speed = 0.4432999028663396;
    msg.speed_units = 84U;
    msg.roll = 0.46707018621228125;
    msg.pitch = 0.4946363122053773;
    msg.yaw = 0.1611301797942245;
    msg.custom.assign("QCVXIYQAYJLFSNSHCMIU");

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
    msg.setTimeStamp(0.7621063100090801);
    msg.setSource(9237U);
    msg.setSourceEntity(136U);
    msg.setDestination(39613U);
    msg.setDestinationEntity(17U);
    msg.timeout = 37301U;
    msg.lat = 0.37869209936112014;
    msg.lon = 0.1693502573795146;
    msg.z = 0.8508447627998755;
    msg.z_units = 218U;
    msg.speed = 0.5583254904245712;
    msg.speed_units = 247U;
    msg.duration = 55286U;
    msg.radius = 0.010410296431194621;
    msg.flags = 184U;
    msg.custom.assign("KBGWUTBSHZFQRXCMHLSXEVKIFOHVUGHQHOGJRIUGWVRSWFFTBMVNHCESGXECAJLMBFIDAXWOZVRIOWNBSEETZROLQDTYKYJFCOKYVAPOTMZSIOTRLXGNRQKEDPHBAUZTKLYGPUGFREXUJDCXDBCBN");

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
    msg.setTimeStamp(0.24022961048771985);
    msg.setSource(14423U);
    msg.setSourceEntity(54U);
    msg.setDestination(22117U);
    msg.setDestinationEntity(204U);
    msg.timeout = 26244U;
    msg.lat = 0.8639405186674141;
    msg.lon = 0.6730050559670437;
    msg.z = 0.26882939057962374;
    msg.z_units = 47U;
    msg.speed = 0.2535800903305019;
    msg.speed_units = 232U;
    msg.duration = 54599U;
    msg.radius = 0.6309192711605305;
    msg.flags = 81U;
    msg.custom.assign("SPAIXYNTMKUJLYPVXPNDBTJEERKZNMYRHRIYBIRSSOHMHJZNEEGTUHAHJOQGYHCKKVTDVULITUDMWEDJYALQNMNAFYBLWRCMEODTLXCVUGZURXSAEZLXZGXCKHVQWZRUZCDLBXOFIFIBHSKOUEMGVOELMJRWBHBSVXVQXELCNPKAFQDIBTB");

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
    msg.setTimeStamp(0.9064914491117598);
    msg.setSource(40594U);
    msg.setSourceEntity(164U);
    msg.setDestination(23591U);
    msg.setDestinationEntity(188U);
    msg.timeout = 13948U;
    msg.lat = 0.8329051727471266;
    msg.lon = 0.8978376559668557;
    msg.z = 0.3720390715049118;
    msg.z_units = 183U;
    msg.speed = 0.16810951456540058;
    msg.speed_units = 181U;
    msg.duration = 63473U;
    msg.radius = 0.894066864066342;
    msg.flags = 109U;
    msg.custom.assign("IMUTUBSMXOMSGRAMACLPFGSGQEZCSPWJKPYLSHFCUELUTMOTLKBKWDZYJYFOXANIHDCPNHWUVFNDOCDUBUNOPYZXNUDJGK");

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
    msg.setTimeStamp(0.5039168032129718);
    msg.setSource(20458U);
    msg.setSourceEntity(25U);
    msg.setDestination(38251U);
    msg.setDestinationEntity(153U);
    msg.custom.assign("TGJJTNKWDFXAKSZWDWGAFBDELCNVSLOWGKQFXVMNBCXAUDAYITUCLRDJFCRHVNKOMQIVSDZNXWCRMEQPSAGKBWYOGSQAMZJ");

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
    msg.setTimeStamp(0.28532945496891526);
    msg.setSource(6367U);
    msg.setSourceEntity(231U);
    msg.setDestination(45889U);
    msg.setDestinationEntity(242U);
    msg.custom.assign("CFEEQIYLLXEGWGFQMKEWFFVQGYL");

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
    msg.setTimeStamp(0.6786534469981803);
    msg.setSource(52705U);
    msg.setSourceEntity(215U);
    msg.setDestination(15622U);
    msg.setDestinationEntity(44U);
    msg.custom.assign("GYPLYCHIEHPVKHTDBJRNJIFZXKLKNDCIOHQEYPRDLSWCMGREWINMUIOTXWMNNRRCUWQAMDEKVBIQPDFCLBGDZUKUVWXKHHVASMMGFSXJXQ");

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
    msg.setTimeStamp(0.702238887141702);
    msg.setSource(18676U);
    msg.setSourceEntity(83U);
    msg.setDestination(22144U);
    msg.setDestinationEntity(28U);
    msg.timeout = 4627U;
    msg.lat = 0.7442687679751276;
    msg.lon = 0.41551878155275845;
    msg.z = 0.7701514973308349;
    msg.z_units = 21U;
    msg.duration = 55383U;
    msg.speed = 0.9182309797370186;
    msg.speed_units = 238U;
    msg.type = 41U;
    msg.radius = 0.4000536175015189;
    msg.length = 0.06436455273839259;
    msg.bearing = 0.9985121850418436;
    msg.direction = 177U;
    msg.custom.assign("MIFQPWCCCWCONUETZIWGKZQJAYRRMAWRTCCYXMBAKBZCBKEFOBHFJIKJUGMKPTMPBFNNOQNHWNHIFIHSLDLAKVNLBXCVWMXVSVDREXUGEMAGZIFLNDSEJNSLHVFAXFQLEUADPYSATMSYZPIYBLXQPYWTGPSZPDLBEDLBDMZTVTUXTYODU");

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
    msg.setTimeStamp(0.7746530277879267);
    msg.setSource(4813U);
    msg.setSourceEntity(2U);
    msg.setDestination(63177U);
    msg.setDestinationEntity(149U);
    msg.timeout = 483U;
    msg.lat = 0.13383523923058427;
    msg.lon = 0.6537325586599988;
    msg.z = 0.7323748269901043;
    msg.z_units = 214U;
    msg.duration = 50424U;
    msg.speed = 0.8607540575131627;
    msg.speed_units = 223U;
    msg.type = 165U;
    msg.radius = 0.7170972271238604;
    msg.length = 0.7329272814981341;
    msg.bearing = 0.4046434597688995;
    msg.direction = 6U;
    msg.custom.assign("IJZNRLNCELNRAKURQYFGVKZUYTIEW");

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
    msg.setTimeStamp(0.9572214226122426);
    msg.setSource(21657U);
    msg.setSourceEntity(176U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(95U);
    msg.timeout = 42277U;
    msg.lat = 0.16554233051447997;
    msg.lon = 0.7074511909779386;
    msg.z = 0.11445926079530544;
    msg.z_units = 110U;
    msg.duration = 33762U;
    msg.speed = 0.6657666978454466;
    msg.speed_units = 129U;
    msg.type = 116U;
    msg.radius = 0.15860663142609843;
    msg.length = 0.6469642606718214;
    msg.bearing = 0.7301326205194296;
    msg.direction = 101U;
    msg.custom.assign("UVGUOHBYOOZZJAEQYNWIGHUMXGCZMHGEEBTYZCPPDNROMDBTJSVPQIPXNYVEYGZCCZUXWQJAUSHYRHLVKDFINCWXGBXJQPADMPNZNGUSLZLSICJOONIQXDFKUMSJTUNLLCSRWFOFHAPEFPVTFNMKFTDSJDRAWYWKPYVYRQOO");

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
    msg.setTimeStamp(0.49650339213917516);
    msg.setSource(26531U);
    msg.setSourceEntity(174U);
    msg.setDestination(58007U);
    msg.setDestinationEntity(72U);
    msg.duration = 28250U;
    msg.custom.assign("NZRJYGALTCWWSVTBCMEUMURDKENLJYANGQDVLQICSSCTBIHRQHYBYYRBHYYMWVURVSXJNVHPDPWSFVLXVCOIJOKTOFZZRBKWXGQUPLSTNODETDBUWZKKGTKLMGXXR");

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
    msg.setTimeStamp(0.8566175557468079);
    msg.setSource(6867U);
    msg.setSourceEntity(249U);
    msg.setDestination(18922U);
    msg.setDestinationEntity(29U);
    msg.duration = 33602U;
    msg.custom.assign("AJFICSYORLMLINAVQKGCDWQJAPBWRRSQXMKTDVVBZWEFUXWFSFOTKKI");

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
    msg.setTimeStamp(0.10095206494253117);
    msg.setSource(54463U);
    msg.setSourceEntity(202U);
    msg.setDestination(16154U);
    msg.setDestinationEntity(210U);
    msg.duration = 49016U;
    msg.custom.assign("INONIVBODKWFLYXHGUOHXDLVKFSRUUFWSCKCEWGHPQYVPF");

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
    msg.setTimeStamp(0.46016225464604077);
    msg.setSource(9732U);
    msg.setSourceEntity(132U);
    msg.setDestination(41975U);
    msg.setDestinationEntity(115U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.4961180151554573;
    msg.control.set(tmp_msg_0);
    msg.duration = 28381U;
    msg.custom.assign("ZJVZEONKFWCBJZOAXFLEKYYFNHHGTNMORDSQRGVEMIREXPGFKQRWUWRCXUUZBNJAEHTWVDRKMRBCTPOTRGHNHTEAOZFYPNSQBPFCDIWUSIKBBYVJXUQRBUGQPPMJHHUSGCILIAOCGDUSMOCTMHZBAAXDPGTNDJIWZVVIAPNAKTLBLX");

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
    msg.setTimeStamp(0.08829689618462333);
    msg.setSource(15361U);
    msg.setSourceEntity(182U);
    msg.setDestination(42905U);
    msg.setDestinationEntity(250U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.9740786122533464;
    msg.control.set(tmp_msg_0);
    msg.duration = 50833U;
    msg.custom.assign("ABVGTCUCUVTPHYNKNLSCXFOTJFFLBWFHJUGCMYCBUIARNFJTMGNEMPUYDLPOQXVEYQUZ");

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
    msg.setTimeStamp(0.8456407785269004);
    msg.setSource(26948U);
    msg.setSourceEntity(182U);
    msg.setDestination(54405U);
    msg.setDestinationEntity(97U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1281059828U;
    tmp_msg_0.start_lat = 0.22710295345044684;
    tmp_msg_0.start_lon = 0.608614682142026;
    tmp_msg_0.start_z = 0.05990525294331983;
    tmp_msg_0.start_z_units = 36U;
    tmp_msg_0.end_lat = 0.25550147525092015;
    tmp_msg_0.end_lon = 0.447422127507325;
    tmp_msg_0.end_z = 0.6874447534472894;
    tmp_msg_0.end_z_units = 32U;
    tmp_msg_0.speed = 0.8235473361924966;
    tmp_msg_0.speed_units = 68U;
    tmp_msg_0.lradius = 0.6582660961337498;
    tmp_msg_0.flags = 188U;
    msg.control.set(tmp_msg_0);
    msg.duration = 39139U;
    msg.custom.assign("RVKYZEBHEPBZGUJECVQZMQRMNAGQBULUIQSZKRXLJEOAMOPTXDOHGKHUYCPFCAIJHNFISJLUHUCXWVLXRXYTLRWHDYV");

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
    msg.setTimeStamp(0.12577159074284971);
    msg.setSource(46538U);
    msg.setSourceEntity(241U);
    msg.setDestination(57881U);
    msg.setDestinationEntity(218U);
    msg.timeout = 28898U;
    msg.lat = 0.4425127088418269;
    msg.lon = 0.441969985304992;
    msg.z = 0.8862743049090953;
    msg.z_units = 2U;
    msg.speed = 0.9975320241109962;
    msg.speed_units = 174U;
    msg.bearing = 0.893178071916725;
    msg.cross_angle = 0.3151037048193731;
    msg.width = 0.5195288097532954;
    msg.length = 0.8848359601995015;
    msg.hstep = 0.685265427157348;
    msg.coff = 140U;
    msg.alternation = 23U;
    msg.flags = 18U;
    msg.custom.assign("UKTXJINJECDAKICBNWAJZUBBRFSHKTSZJFXYSWSLCOHYQBOMRFTTYNGBLNIOHMUWIQMXYLPWAVLDQCKTSO");

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
    msg.setTimeStamp(0.0029839003997805813);
    msg.setSource(12592U);
    msg.setSourceEntity(201U);
    msg.setDestination(18538U);
    msg.setDestinationEntity(97U);
    msg.timeout = 2182U;
    msg.lat = 0.009702372687513616;
    msg.lon = 0.7285424185603477;
    msg.z = 0.9847030731563495;
    msg.z_units = 17U;
    msg.speed = 0.7983326607197694;
    msg.speed_units = 65U;
    msg.bearing = 0.7995462523035695;
    msg.cross_angle = 0.9469716548221336;
    msg.width = 0.49043575329457534;
    msg.length = 0.11923422569873476;
    msg.hstep = 0.5561319786511583;
    msg.coff = 187U;
    msg.alternation = 239U;
    msg.flags = 120U;
    msg.custom.assign("QYXYNKDCMDTQNPHWITVQSKURJRTEFSISJEXDAVLOZORMHNNXPBJGSGIZGJIMMBOBYBLARMXKQFJZGRHVTECUCTLTTRHWSKALTVQAOWCPHILYMJJPFUPWHCLUOREVZZQAFHQGFIHYKHUEBUXYTDAJVKDWGDIFAZNLIPHLXFZNMVQGVDGYPAXUWOTOQOWYDRKSROXLAZYOPBWYWMGCBLKZFSXMGCF");

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
    msg.setTimeStamp(0.8678337392572121);
    msg.setSource(18608U);
    msg.setSourceEntity(109U);
    msg.setDestination(55780U);
    msg.setDestinationEntity(244U);
    msg.timeout = 14376U;
    msg.lat = 0.9064621735041746;
    msg.lon = 0.09417065959069293;
    msg.z = 0.3341947227703529;
    msg.z_units = 193U;
    msg.speed = 0.05054824423759441;
    msg.speed_units = 21U;
    msg.bearing = 0.2264271323256528;
    msg.cross_angle = 0.33269521401830005;
    msg.width = 0.8139756712173004;
    msg.length = 0.056166566807904994;
    msg.hstep = 0.7461745933172967;
    msg.coff = 178U;
    msg.alternation = 69U;
    msg.flags = 39U;
    msg.custom.assign("VIMEALSDHKWIHQOQBCTAGIFXCXTPIBWBLEGVPYSKBROLFNZOHXTWVLLSFLHCIFLZAKCAPYBPTQJOIJRXPGNDGUOBPKDJNDZRRUGVKSTOXURTYWZYFINBIQJPRSXSYSUFKBMHCVANEUXUCAMBUMGFVPYGCNBMQYEFKKOWGEC");

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
    msg.setTimeStamp(0.9412582627982786);
    msg.setSource(24088U);
    msg.setSourceEntity(140U);
    msg.setDestination(13228U);
    msg.setDestinationEntity(168U);
    msg.timeout = 53357U;
    msg.lat = 0.7061916008624777;
    msg.lon = 0.4885894843607229;
    msg.z = 0.0374476773029081;
    msg.z_units = 29U;
    msg.speed = 0.9693122004061592;
    msg.speed_units = 198U;
    msg.custom.assign("ZTUUWEQCDKCHRWYEHBCPTOSKDCWJZNAHEUNESRLNAAAQGNXBBSGGZIUPSIGPJZNKPDVCUURPMXKUDJMXTXJPLWTVRYGDVWRPDWYANRXZRQSICBLEGWXTXAEGGZZLFVBPVSCIJYCBNNKOAISOQJY");

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
    msg.setTimeStamp(0.30096400833790793);
    msg.setSource(62339U);
    msg.setSourceEntity(208U);
    msg.setDestination(42572U);
    msg.setDestinationEntity(58U);
    msg.timeout = 43505U;
    msg.lat = 0.5472753466633851;
    msg.lon = 0.9981357579421941;
    msg.z = 0.47552123519456746;
    msg.z_units = 43U;
    msg.speed = 0.6191988597949929;
    msg.speed_units = 239U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9861334921641424;
    tmp_msg_0.y = 0.8954752959223627;
    tmp_msg_0.z = 0.4992857373982481;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IPHSMLHURHZWUPINFJRSFXCOIYVMQEKFWYGHVPGOMTGQZYSTTXLUHFXVQXTGCCMXZGYRWCXPVGSIDJGNOIZZPBBWCTABMMOZEYNMJMPRSIEVWJDFZENABVAQBDZ");

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
    msg.setTimeStamp(0.8994510606153951);
    msg.setSource(50140U);
    msg.setSourceEntity(229U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(207U);
    msg.timeout = 17802U;
    msg.lat = 0.18459402398022462;
    msg.lon = 0.1389275065999569;
    msg.z = 0.5216243808154072;
    msg.z_units = 51U;
    msg.speed = 0.9483400299670621;
    msg.speed_units = 222U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4115980860237992;
    tmp_msg_0.y = 0.8957658169861347;
    tmp_msg_0.z = 0.5953468695411803;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NVHBSIWRJVCHUKAXHXYIFFFAVTUGDCLSZJZUHNDSPGVCPTXOABLQKXUPEDILWDNQDAWCMTDYDNQWRISUSCGUMZQKLGNEBBIEJORTPLJNKKUJWLBOZWMKVZLXQEDXLAOBXOZNMMJWRERQOZIPFJFSCIHMILMGEDYVABHTWMGBVCNHPZOXYYCTHPREOVWIEQFFUYZMKMSRQWATYGFSKSN");

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
    msg.setTimeStamp(0.22136137420905067);
    msg.setSource(9864U);
    msg.setSourceEntity(179U);
    msg.setDestination(59443U);
    msg.setDestinationEntity(38U);
    msg.x = 0.5370179124092648;
    msg.y = 0.7664237585030872;
    msg.z = 0.909627680390137;

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
    msg.setTimeStamp(0.9998491727008042);
    msg.setSource(45274U);
    msg.setSourceEntity(236U);
    msg.setDestination(796U);
    msg.setDestinationEntity(84U);
    msg.x = 0.11046330736447019;
    msg.y = 0.5002941898202233;
    msg.z = 0.29242499008302647;

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
    msg.setTimeStamp(0.2447468286514305);
    msg.setSource(63013U);
    msg.setSourceEntity(109U);
    msg.setDestination(41575U);
    msg.setDestinationEntity(218U);
    msg.x = 0.057045859165084534;
    msg.y = 0.8256504121882579;
    msg.z = 0.6063838497635;

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
    msg.setTimeStamp(0.19311682280953613);
    msg.setSource(57024U);
    msg.setSourceEntity(248U);
    msg.setDestination(14740U);
    msg.setDestinationEntity(174U);
    msg.timeout = 47230U;
    msg.lat = 0.1806250399500473;
    msg.lon = 0.6353877418881604;
    msg.z = 0.32168860967367574;
    msg.z_units = 90U;
    msg.amplitude = 0.257956842711633;
    msg.pitch = 0.19066961900539647;
    msg.speed = 0.27886014002876547;
    msg.speed_units = 182U;
    msg.custom.assign("NGXDCUFQEUQRVMHATPMKPXOKDIRAGORUMTLIWKODDXQTGYRMPFHCKTMLAQMJKRYJSGMPGLQYRJYIHYFZUIWPROBTBIBACIBRJ");

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
    msg.setTimeStamp(0.9292169861639261);
    msg.setSource(39873U);
    msg.setSourceEntity(150U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(228U);
    msg.timeout = 46730U;
    msg.lat = 0.7720914928372489;
    msg.lon = 0.2433814940062523;
    msg.z = 0.10601768920638277;
    msg.z_units = 179U;
    msg.amplitude = 0.3959489953233878;
    msg.pitch = 0.36422535799560185;
    msg.speed = 0.9087914556518821;
    msg.speed_units = 167U;
    msg.custom.assign("KXRIIYCGXDFTEUMQRYPWIWFRDAMOYMEZVNNPKTJXLEUKBMLZAPKJTHLGNBDPQZLTSSNAGIFYOZUSQXKGVMIQXJJVTYRFOBXYTDZPACOERUSJUNWGEUGLQRCUICAFSCWSODHPOKVZWOMDAULMHRAKDOAWHEHWJJLBYFDIXBWMHWNRCQFFXEVXMXTUQBCVDFVG");

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
    msg.setTimeStamp(0.32666993014641377);
    msg.setSource(1336U);
    msg.setSourceEntity(78U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(229U);
    msg.timeout = 55282U;
    msg.lat = 0.9181032923484918;
    msg.lon = 0.21658189761383861;
    msg.z = 0.9671466496244157;
    msg.z_units = 81U;
    msg.amplitude = 0.8949068105561374;
    msg.pitch = 0.7581417320003526;
    msg.speed = 0.6742547872378952;
    msg.speed_units = 242U;
    msg.custom.assign("CQORVBBYVZKQZOWESWBMHEHMGHTJUTQODBKYDTWXZBRXXRLAXIEVPEQBJLDMFFXWSRWAJJBAKOTGNHRRYJGCCMGBELFRWGTYLQIZXFZFHEUIHEDPFUKISMCPNOXLNWCRGGVQOFPZVBVQFAPYJFTYMKQSNXCCQMO");

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
    msg.setTimeStamp(0.7351742868087006);
    msg.setSource(6055U);
    msg.setSourceEntity(146U);
    msg.setDestination(58492U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.8254031686075541);
    msg.setSource(57519U);
    msg.setSourceEntity(149U);
    msg.setDestination(62865U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.5456857337153741);
    msg.setSource(16963U);
    msg.setSourceEntity(54U);
    msg.setDestination(35515U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.9156364849777145);
    msg.setSource(42528U);
    msg.setSourceEntity(22U);
    msg.setDestination(42542U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.47816006287916035;
    msg.lon = 0.45954163908745393;
    msg.z = 0.6054431912347692;
    msg.z_units = 43U;
    msg.radius = 0.39717822767139044;
    msg.duration = 13352U;
    msg.speed = 0.9742089622047534;
    msg.speed_units = 31U;
    msg.custom.assign("AEGCSZENPPDBTODDQKIULJGZGWOSEABOZSFYHWLNQWQFYBVKBFIDKCAUHOIQZYEJVDAWYFVEVCOIBZTNHETIYHYGQXRAMKUHTIREOZJNXJQTAGSHCFOLJBITNNJTPGWGMSNZHUNDBLLZOARWKFCAILMBJHKMJKCUFVJCSWDKEIQLVRUPRXXSFWROZPCYMTQGRLRPUUPOPGFXFKVWIUDX");

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
    msg.setTimeStamp(0.14966841093185368);
    msg.setSource(15221U);
    msg.setSourceEntity(101U);
    msg.setDestination(40456U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.8415725449289496;
    msg.lon = 0.854046250208568;
    msg.z = 0.18486699713864962;
    msg.z_units = 160U;
    msg.radius = 0.8319383998135111;
    msg.duration = 54790U;
    msg.speed = 0.7681757181754311;
    msg.speed_units = 174U;
    msg.custom.assign("KNXXBSMATZFRNMUXERFPPZOQIIUJOOHERDTVIHUNRMLPMCNMXDFECNGXBQZSKSSSVTXZTLJZYMEGOVDAFMADAYWYICVKEJNKDSTDZYOITWURHPCNFLGGQLOAITBCO");

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
    msg.setTimeStamp(0.22978031563001133);
    msg.setSource(26825U);
    msg.setSourceEntity(114U);
    msg.setDestination(2713U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.1740063956555623;
    msg.lon = 0.009564549817034362;
    msg.z = 0.05103384419663892;
    msg.z_units = 58U;
    msg.radius = 0.03200158490552096;
    msg.duration = 23274U;
    msg.speed = 0.10298471272745824;
    msg.speed_units = 142U;
    msg.custom.assign("JFLQWDBJTIOXXDQBAUVDDCIYHPNBYDXTSMJOIHOFMDBKWF");

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
    msg.setTimeStamp(0.7991440819237376);
    msg.setSource(21087U);
    msg.setSourceEntity(166U);
    msg.setDestination(37590U);
    msg.setDestinationEntity(157U);
    msg.timeout = 50140U;
    msg.flags = 145U;
    msg.lat = 0.39238161978029795;
    msg.lon = 0.9220005228330787;
    msg.start_z = 0.41789006204817825;
    msg.start_z_units = 106U;
    msg.end_z = 0.8507492335550887;
    msg.end_z_units = 82U;
    msg.radius = 0.7542412881032038;
    msg.speed = 0.9356622198185449;
    msg.speed_units = 190U;
    msg.custom.assign("XJDFMTVOFQOYJCRISAK");

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
    msg.setTimeStamp(0.07237233399949183);
    msg.setSource(37058U);
    msg.setSourceEntity(236U);
    msg.setDestination(9284U);
    msg.setDestinationEntity(107U);
    msg.timeout = 10746U;
    msg.flags = 87U;
    msg.lat = 0.28179186189901584;
    msg.lon = 0.9608558412643439;
    msg.start_z = 0.11028937006664175;
    msg.start_z_units = 231U;
    msg.end_z = 0.7619126219147859;
    msg.end_z_units = 197U;
    msg.radius = 0.7556712122953926;
    msg.speed = 0.11923976019082716;
    msg.speed_units = 69U;
    msg.custom.assign("UTTVQEKCGTKOYJPIFHUUMDVGDXKGXWFJPIVNXFCSAWFVHMUHOYIXARAZZATOQTKFMQMHRRYBPFCFWLMXNQQRCVZFEIYI");

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
    msg.setTimeStamp(0.6858463722531926);
    msg.setSource(37445U);
    msg.setSourceEntity(111U);
    msg.setDestination(8457U);
    msg.setDestinationEntity(227U);
    msg.timeout = 43756U;
    msg.flags = 160U;
    msg.lat = 0.7666098359512689;
    msg.lon = 0.12752821355730248;
    msg.start_z = 0.9930696901014556;
    msg.start_z_units = 133U;
    msg.end_z = 0.03814755290672511;
    msg.end_z_units = 215U;
    msg.radius = 0.5512425407455088;
    msg.speed = 0.8052191187896587;
    msg.speed_units = 97U;
    msg.custom.assign("CBWCSOLYEFHDLLTGQVBZDN");

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
    msg.setTimeStamp(0.20575931957544402);
    msg.setSource(22235U);
    msg.setSourceEntity(243U);
    msg.setDestination(2489U);
    msg.setDestinationEntity(241U);
    msg.timeout = 28530U;
    msg.lat = 0.07077834259999438;
    msg.lon = 0.02967132419216878;
    msg.z = 0.0045196108912429755;
    msg.z_units = 115U;
    msg.speed = 0.6801844505113194;
    msg.speed_units = 146U;
    msg.custom.assign("WALKREGMBHVIGOGCZDDUQWELJIXFTDEBSIRWHPUUGDPHMUMWZXHTLKZZMYLQYAKFRFWESRCUTQLIWLQKINYOOTJOSQHMCJPIOMANWEZOETQXUINOLYAPPDOWVCCBBGQFHIBYNDYRQNSXQFUZXLMZREEFVWGSCDATRJCPXFA");

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
    msg.setTimeStamp(0.6340877002956425);
    msg.setSource(39083U);
    msg.setSourceEntity(135U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(175U);
    msg.timeout = 25971U;
    msg.lat = 0.8933559238147156;
    msg.lon = 0.869166237868024;
    msg.z = 0.9927912204856378;
    msg.z_units = 92U;
    msg.speed = 0.8834252845478322;
    msg.speed_units = 66U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5881111919154755;
    tmp_msg_0.y = 0.3059342496013695;
    tmp_msg_0.z = 0.6139284233090054;
    tmp_msg_0.t = 0.006796375220035955;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZMTSCLTRGWPIKFIWSGRZVGEEPPAQHWYZUKVXGNZIOXOBWNNDODQMUZDZYAOHVMFQIGBDONWEGAFTBDJJPVDCYHOWUHRINYQNLRPMEIQCSAFDUEHSYCDXIWMPLQOLPZEWVUWJKTACVDDCHYBVTMBTMOJAJGKSJLPTQNTOVUHMEQRLXRBJYTRV");

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
    msg.setTimeStamp(0.0675211965417456);
    msg.setSource(22356U);
    msg.setSourceEntity(131U);
    msg.setDestination(6654U);
    msg.setDestinationEntity(214U);
    msg.timeout = 53585U;
    msg.lat = 0.5675188339172457;
    msg.lon = 0.9885882410114863;
    msg.z = 0.02736564265364172;
    msg.z_units = 2U;
    msg.speed = 0.45549046519922287;
    msg.speed_units = 128U;
    msg.custom.assign("WZZKHOHYAJFMLHVEOXBLRADURMUSCDUEVMOBZHNIDLDFHPSXVYGYLTIJWBTXXNVSGWVNQVMQGFJMQKPW");

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
    msg.setTimeStamp(0.4213244369439001);
    msg.setSource(46721U);
    msg.setSourceEntity(247U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(155U);
    msg.x = 0.9002913069945564;
    msg.y = 0.05453451887027605;
    msg.z = 0.8303253506061298;
    msg.t = 0.06467864153695624;

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
    msg.setTimeStamp(0.16271487657950756);
    msg.setSource(36282U);
    msg.setSourceEntity(159U);
    msg.setDestination(19226U);
    msg.setDestinationEntity(156U);
    msg.x = 0.40078175972799546;
    msg.y = 0.5337333056582535;
    msg.z = 0.17298411164087102;
    msg.t = 0.11885227360729711;

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
    msg.setTimeStamp(0.05909655390784685);
    msg.setSource(5561U);
    msg.setSourceEntity(1U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(129U);
    msg.x = 0.08506432411196307;
    msg.y = 0.3801472424875446;
    msg.z = 0.12651179875861762;
    msg.t = 0.4513670537236022;

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
    msg.setTimeStamp(0.7305771839821953);
    msg.setSource(18849U);
    msg.setSourceEntity(32U);
    msg.setDestination(8706U);
    msg.setDestinationEntity(94U);
    msg.timeout = 15201U;
    msg.name.assign("JXXXKCGKJLOOERJCBKPEUSLGGPXXVYXHRBJAGOIBJBVBUGYQTKWPPWNVEVTSNCUCZDKNVFXEODFIWYZJKWFIWTMLEDAAHOTUMWMNERSARRPPQJROSZYGWLUKZBFIOMMTYMUHTILFNCLCDYLGFRFFSEQJAUHGUZEZTCNMDFKPQDPKDIHMVQAONCTAIHDCAQXPSUBQONVGFRYBQVTYEVEZOYHDZJW");
    msg.custom.assign("NDOOFVYOBPHPSHUMGGNSXJSCTKWAOQWJQYYDYQWRRYA");

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
    msg.setTimeStamp(0.31802338833364274);
    msg.setSource(36750U);
    msg.setSourceEntity(184U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(237U);
    msg.timeout = 11822U;
    msg.name.assign("JENUEDOMMAOFDG");
    msg.custom.assign("ODNIBVOSZDGKMVOFURRQGSHRWMSBBNJEAXRPIEGXUGFSPAUQATSATFYSMVOXUDWXVBQLDODDOHNHMKXXZNAWIKKODTOUEQYPYHEQEDPRLGPIEDMWLTRFBGJURLLNFSSNMKFKLBIZWYJGTYNXUPZAAJTHICVVBXPQNFZHWWUPBYUVCZVHWJRCCQERHJB");

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
    msg.setTimeStamp(0.9811298190078208);
    msg.setSource(20134U);
    msg.setSourceEntity(120U);
    msg.setDestination(37064U);
    msg.setDestinationEntity(108U);
    msg.timeout = 31288U;
    msg.name.assign("TUWAIZWLAOMFBHPMSSSDTBZDUYQPMBSQLVNVGILLRLYGCLKMQBKXHJKBUAENFXQZJTLZJBHTWNHESUSVFTFRTEHPICNCXJXVREZNJWFRINYEEJJOYCIGFOMBLMCAVZSBEWZGAQFOWYVGIPOMFIVCUOZECUGTJFOGPXKMKGYSKITAAIDVUUOOKJZVTFHDKDXBKEQDOHNURRD");
    msg.custom.assign("GDQQYUTNXXWPKUZSFQBHLHWXQBUQJYPZOQILKUFLMBTACVJFCHNNTERVCWXCRNXXTZBWZKFOIPXEDMELVDAJOXBZMNTAPBMPGYEYINITRVYAEJDSOWOHRSERPESMBPSIAGLFHSGMRJGGVRGYVAZHSNBLDUHMIWQIDSYVJUYTWGCKGT");

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
    msg.setTimeStamp(0.9722875794186041);
    msg.setSource(22968U);
    msg.setSourceEntity(46U);
    msg.setDestination(41681U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.7660359227147334;
    msg.lon = 0.23620728199310426;
    msg.z = 0.7335706716571104;
    msg.z_units = 222U;
    msg.speed = 0.01269086946893061;
    msg.speed_units = 97U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25556U;
    tmp_msg_0.off_x = 0.527543377388877;
    tmp_msg_0.off_y = 0.8853408780863943;
    tmp_msg_0.off_z = 0.37190869418031114;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7720581314750056;
    msg.custom.assign("LFKEPSQBKWZCJPLGJWEUEHTVPYZHNNQRCZQKOPAVHQSUCGAJHWOBMPQGLUXQRUUJADAMHWAWVXWPAKGTGZCNTABSCBXEIQYZWFIZKOVNIFCJNUBKGYPUNTETDGDIJAJMVRFDOMYBLEZCMEIRJKGOMDPOFKFWHISNBJRVMRXUWLXTVOFYZRAXECTOSZXQMULLIVRBCXMZBAGILDSMRLWSYSDYEHNNDPTHYDYVFDSIUITYHRFNFOK");

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
    msg.setTimeStamp(0.04818324882121883);
    msg.setSource(63894U);
    msg.setSourceEntity(78U);
    msg.setDestination(57736U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.8121514055263352;
    msg.lon = 0.1865108068176169;
    msg.z = 0.18247868404716905;
    msg.z_units = 91U;
    msg.speed = 0.0372451961428536;
    msg.speed_units = 197U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52902U;
    tmp_msg_0.off_x = 0.8139797898101465;
    tmp_msg_0.off_y = 0.47941377502474647;
    tmp_msg_0.off_z = 0.7928711715390211;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.03150094867954656;
    msg.custom.assign("XNKMRSPPKGMQVWMVGEEYDHJYJTFWQFNAGUEYZBOJOSVDNHSCDBDRMVTUZSEZVWAGRQNIFXTZQSVHTNNCFOUEJPLXWSDXIMWRBKTDWHTAYOMZACITYBPQIJIVYVQIZHTMSUFTQBKQDYMEEOLERELNYOTOPPHJIHOSHBPHPUFXKELUKJMGQFG");

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
    msg.setTimeStamp(0.570912291732269);
    msg.setSource(49693U);
    msg.setSourceEntity(34U);
    msg.setDestination(6671U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.7894127041702397;
    msg.lon = 0.35108172046587005;
    msg.z = 0.09053991221143443;
    msg.z_units = 17U;
    msg.speed = 0.880431050145023;
    msg.speed_units = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20913U;
    tmp_msg_0.off_x = 0.7916443826286039;
    tmp_msg_0.off_y = 0.15231623630129887;
    tmp_msg_0.off_z = 0.9555139985011891;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5999777348481872;
    msg.custom.assign("GYJZQFZSSLTLWDMKZHOWDBPCKCYVSEJSXNQKDUTIEMYJBBQQJSOTIAFGIQQZRZPRNRFTHCGGUHVXLAWXHNRTKQDBBIERVPNUBOBTIKZMQWJEAQPLLHPFFOHUXKLAUCYQLDRWMGHBXVAM");

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
    msg.setTimeStamp(0.3289729239064759);
    msg.setSource(20673U);
    msg.setSourceEntity(121U);
    msg.setDestination(10601U);
    msg.setDestinationEntity(133U);
    msg.vid = 6690U;
    msg.off_x = 0.46640294547825145;
    msg.off_y = 0.625397819085743;
    msg.off_z = 0.12237630429165991;

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
    msg.setTimeStamp(0.43391291195584747);
    msg.setSource(39858U);
    msg.setSourceEntity(249U);
    msg.setDestination(21246U);
    msg.setDestinationEntity(223U);
    msg.vid = 59476U;
    msg.off_x = 0.22291384133809988;
    msg.off_y = 0.5500647908095091;
    msg.off_z = 0.47174993198935866;

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
    msg.setTimeStamp(0.26232146148720703);
    msg.setSource(28228U);
    msg.setSourceEntity(50U);
    msg.setDestination(30089U);
    msg.setDestinationEntity(142U);
    msg.vid = 61937U;
    msg.off_x = 0.4377047518455216;
    msg.off_y = 0.43267062184150484;
    msg.off_z = 0.5885706333102793;

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
    msg.setTimeStamp(0.7309444925116713);
    msg.setSource(14705U);
    msg.setSourceEntity(157U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.05847915063751308);
    msg.setSource(57096U);
    msg.setSourceEntity(77U);
    msg.setDestination(53974U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.15477782292456288);
    msg.setSource(49373U);
    msg.setSourceEntity(204U);
    msg.setDestination(52210U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.7803769419710083);
    msg.setSource(32274U);
    msg.setSourceEntity(37U);
    msg.setDestination(29868U);
    msg.setDestinationEntity(25U);
    msg.mid = 33824U;

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
    msg.setTimeStamp(0.945845647272301);
    msg.setSource(37875U);
    msg.setSourceEntity(57U);
    msg.setDestination(44274U);
    msg.setDestinationEntity(167U);
    msg.mid = 23566U;

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
    msg.setTimeStamp(0.6404494411722691);
    msg.setSource(33519U);
    msg.setSourceEntity(253U);
    msg.setDestination(37385U);
    msg.setDestinationEntity(202U);
    msg.mid = 59981U;

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
    msg.setTimeStamp(0.28673041679039724);
    msg.setSource(25654U);
    msg.setSourceEntity(245U);
    msg.setDestination(23143U);
    msg.setDestinationEntity(53U);
    msg.state = 122U;
    msg.eta = 17191U;
    msg.info.assign("VWLAVWKDTDPZBWEUABRPAKMOYGYRRTLTDJYR");

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
    msg.setTimeStamp(0.4005230587931031);
    msg.setSource(45186U);
    msg.setSourceEntity(175U);
    msg.setDestination(21637U);
    msg.setDestinationEntity(5U);
    msg.state = 99U;
    msg.eta = 28177U;
    msg.info.assign("OMYXKNQGLDNWCUKSCJFPLCZRFSGYUISVMIJYDMPCLYBNTJDYDWFRIZQINALIHMUDNOAZEXXQEKZQXZJIOWKPBECQVJIBWSGATKFEGHZSRLRDACWKGFMPBEXIVAXATNMTTOTPCHSYRJUOMZEVXSPHNVOFFLMLLHSPVQ");

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
    msg.setTimeStamp(0.3388036735656865);
    msg.setSource(54154U);
    msg.setSourceEntity(24U);
    msg.setDestination(46303U);
    msg.setDestinationEntity(208U);
    msg.state = 178U;
    msg.eta = 39881U;
    msg.info.assign("IHMFZMXLGOIPLRMMBFDEIKSRKWLTMBEOTOPWYZBUFEAQMNRMXCPLSINZJPEDOYEHKAJDABHZLDWIYQKRHVXAFCJGPSEVCNOU");

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
    msg.setTimeStamp(0.16294951666198165);
    msg.setSource(17905U);
    msg.setSourceEntity(202U);
    msg.setDestination(55197U);
    msg.setDestinationEntity(159U);
    msg.system = 5400U;
    msg.duration = 63935U;
    msg.speed = 0.7843608083135429;
    msg.speed_units = 25U;
    msg.x = 0.5048413923046258;
    msg.y = 0.09071815842182407;
    msg.z = 0.9899206413337308;
    msg.z_units = 31U;

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
    msg.setTimeStamp(0.20429945976210762);
    msg.setSource(35741U);
    msg.setSourceEntity(70U);
    msg.setDestination(20597U);
    msg.setDestinationEntity(248U);
    msg.system = 42960U;
    msg.duration = 9335U;
    msg.speed = 0.9111468611892315;
    msg.speed_units = 141U;
    msg.x = 0.10080748206919643;
    msg.y = 0.48650463514210773;
    msg.z = 0.01178435157016866;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.5695250895786662);
    msg.setSource(38655U);
    msg.setSourceEntity(118U);
    msg.setDestination(36804U);
    msg.setDestinationEntity(90U);
    msg.system = 62869U;
    msg.duration = 13309U;
    msg.speed = 0.7267867140475347;
    msg.speed_units = 158U;
    msg.x = 0.6473463499548856;
    msg.y = 0.1573630592236085;
    msg.z = 0.7830494420866768;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.9157967490341588);
    msg.setSource(57266U);
    msg.setSourceEntity(230U);
    msg.setDestination(8042U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.05751810345395958;
    msg.lon = 0.025827323961821858;
    msg.speed = 0.8183736494071961;
    msg.speed_units = 98U;
    msg.duration = 47766U;
    msg.sys_a = 59098U;
    msg.sys_b = 21734U;
    msg.move_threshold = 0.1970247656349572;

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
    msg.setTimeStamp(0.9682574783704319);
    msg.setSource(43022U);
    msg.setSourceEntity(201U);
    msg.setDestination(38570U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.9493416285354679;
    msg.lon = 0.8668078191014191;
    msg.speed = 0.5858522046948892;
    msg.speed_units = 191U;
    msg.duration = 9250U;
    msg.sys_a = 60240U;
    msg.sys_b = 60434U;
    msg.move_threshold = 0.2650924858826763;

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
    msg.setTimeStamp(0.9401086063485863);
    msg.setSource(34450U);
    msg.setSourceEntity(8U);
    msg.setDestination(46224U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.4447115651749488;
    msg.lon = 0.08805943983882425;
    msg.speed = 0.5575802193057856;
    msg.speed_units = 7U;
    msg.duration = 29177U;
    msg.sys_a = 58202U;
    msg.sys_b = 17676U;
    msg.move_threshold = 0.8361573036053114;

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
    msg.setTimeStamp(0.40768822535430405);
    msg.setSource(47765U);
    msg.setSourceEntity(55U);
    msg.setDestination(18067U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.022379189934653265;
    msg.lon = 0.4842455673364271;
    msg.z = 0.747627778798377;
    msg.z_units = 90U;
    msg.speed = 0.11075373469442429;
    msg.speed_units = 236U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.75426448400539;
    tmp_msg_0.lon = 0.3497712590203834;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GDBDFTNPMJB");

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
    msg.setTimeStamp(0.3557616509976588);
    msg.setSource(17462U);
    msg.setSourceEntity(64U);
    msg.setDestination(23140U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.9386274367200831;
    msg.lon = 0.3102615938245543;
    msg.z = 0.8235873930642659;
    msg.z_units = 26U;
    msg.speed = 0.35522416738763174;
    msg.speed_units = 47U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.20534027467789773;
    tmp_msg_0.lon = 0.5581919110420294;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DXPWGGCGYFLINVDEFNJCOSTCRPUTECEGMYHEKYLMERKFTADAJUXLEZRJOYYJPTTLSTVBHGZREAGZJPRIKWSNBCAMJJUBSWXKOUHMOUVQXKDRSPGDFQBHXMHQQHWPMNQNFEMFDOZZLZZNKAFLDQKBTLQWGYPZCSBUCERPAWDUDIKVVOCSBXVVMGONXLJHOXKASNIHUZMIIXFYNHZBAWICSAIGS");

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
    msg.setTimeStamp(0.5456129591032783);
    msg.setSource(14097U);
    msg.setSourceEntity(183U);
    msg.setDestination(1120U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.005919306488975873;
    msg.lon = 0.5328658059268332;
    msg.z = 0.07277460611152387;
    msg.z_units = 224U;
    msg.speed = 0.20757611461215564;
    msg.speed_units = 34U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8912513454500729;
    tmp_msg_0.lon = 0.9580662443093468;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MDELICOWFKRLHXTRDFNIFQRHVFQSOFVMPOYIBBOKUMILRVKXZWSSBNATJYJZQYPWSBFLJHVQGSXDZONSHTUATNVBXUCIJKBELGKUTNNYHWZQGGFPPRUAOXUZVQXCJBSURMWJC");

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
    msg.setTimeStamp(0.2171849353578702);
    msg.setSource(25795U);
    msg.setSourceEntity(201U);
    msg.setDestination(14511U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.6092243997981327;
    msg.lon = 0.11737094608962184;

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
    msg.setTimeStamp(0.9260736196565212);
    msg.setSource(44872U);
    msg.setSourceEntity(96U);
    msg.setDestination(22612U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.5231101483939394;
    msg.lon = 0.6337324618773196;

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
    msg.setTimeStamp(0.046407271168414144);
    msg.setSource(25238U);
    msg.setSourceEntity(38U);
    msg.setDestination(52297U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.1960789827046957;
    msg.lon = 0.9875512148911538;

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
    msg.setTimeStamp(0.25806776558029887);
    msg.setSource(10706U);
    msg.setSourceEntity(195U);
    msg.setDestination(23257U);
    msg.setDestinationEntity(193U);
    msg.timeout = 41618U;
    msg.lat = 0.288535276706407;
    msg.lon = 0.6589969995207198;
    msg.z = 0.578231711412749;
    msg.z_units = 99U;
    msg.pitch = 0.7564029191461108;
    msg.amplitude = 0.9866678331758593;
    msg.duration = 20543U;
    msg.speed = 0.7545642856751925;
    msg.speed_units = 149U;
    msg.radius = 0.48876762287062725;
    msg.direction = 178U;
    msg.custom.assign("XPRCKAUTMOUUWJUCAQQKJHVEPBTVWYEWOJWZWLBLERYADDSUJBBNEAPTIGT");

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
    msg.setTimeStamp(0.26228062050608836);
    msg.setSource(56382U);
    msg.setSourceEntity(122U);
    msg.setDestination(63417U);
    msg.setDestinationEntity(246U);
    msg.timeout = 30276U;
    msg.lat = 0.9261542856910893;
    msg.lon = 0.12050822213457024;
    msg.z = 0.04582292964069057;
    msg.z_units = 246U;
    msg.pitch = 0.8239870959107757;
    msg.amplitude = 0.18069179492747744;
    msg.duration = 20322U;
    msg.speed = 0.7920968697679368;
    msg.speed_units = 31U;
    msg.radius = 0.9743159485587913;
    msg.direction = 130U;
    msg.custom.assign("QOEGPIRIGTSKUKFVPZLYBDLGKVGVBZZHXWJKEMILYRDYMSAHXIAVTZJWLRDILRQZILTWCWVFEAEAWFTMYYZWVXKDUETU");

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
    msg.setTimeStamp(0.12758701917860704);
    msg.setSource(30096U);
    msg.setSourceEntity(57U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(138U);
    msg.timeout = 36038U;
    msg.lat = 0.4131283623362032;
    msg.lon = 0.5737809502059534;
    msg.z = 0.6646333377432229;
    msg.z_units = 168U;
    msg.pitch = 0.5130067048293032;
    msg.amplitude = 0.9068062655557387;
    msg.duration = 60760U;
    msg.speed = 0.9713071969547293;
    msg.speed_units = 151U;
    msg.radius = 0.6423463442091052;
    msg.direction = 221U;
    msg.custom.assign("URMZWPRWGJJNULWAZSBKSELDLXAXDRNOMQNRXUVIUEYFTNQPTCXRTZHUEHISOCFKBITFQJSYIMHIRUGWDVDBEFHSVBOIPZIOPVZYYWYWLRFRMCQQCQZOPJ");

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
    msg.setTimeStamp(0.4135850557852022);
    msg.setSource(53733U);
    msg.setSourceEntity(53U);
    msg.setDestination(58122U);
    msg.setDestinationEntity(123U);
    msg.formation_name.assign("DSPHSKIGGHYU");
    msg.reference_frame = 56U;
    msg.custom.assign("GXUHPHMUBOLMDRFKEOJTILTILFCHMFWMDPXRCJBEWFXJP");

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
    msg.setTimeStamp(0.17489050332104183);
    msg.setSource(23614U);
    msg.setSourceEntity(178U);
    msg.setDestination(7061U);
    msg.setDestinationEntity(25U);
    msg.formation_name.assign("ALPGKDAIYGHPKCDEAUPTZVYJBJOJJTLZVKWVUQRACWQBRYVWXYZQRSKELQTJBZFLJCQVNUHPAVWEWWHHUNERTSNNMUGYFOKQWDIKUBDOFNOSXFBAGRFXCJEXRJOATHBGSWGO");
    msg.reference_frame = 141U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22059U;
    tmp_msg_0.off_x = 0.2565063033587077;
    tmp_msg_0.off_y = 0.8164537281864938;
    tmp_msg_0.off_z = 0.34870342811955923;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CBKEEONYUEZJZ");

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
    msg.setTimeStamp(0.27334817197265526);
    msg.setSource(55744U);
    msg.setSourceEntity(77U);
    msg.setDestination(44870U);
    msg.setDestinationEntity(64U);
    msg.formation_name.assign("WIIYGXRTKXMYHUBNHWEBIFZYOVOIRTUCMNMMDZIQTTMRFGOMHTAKEUBOIAPKVPDBJSHESWJYSNDSNMHLBTJMFTGVCXJANTBZEFCXW");
    msg.reference_frame = 39U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40186U;
    tmp_msg_0.off_x = 0.0005695431382594096;
    tmp_msg_0.off_y = 0.05891941463903594;
    tmp_msg_0.off_z = 0.18880945564138385;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FKGUPHJCIQDFGBBJLLNHKJSCMDBLYIWUOWQUHXQKNYYUQPJADEEENWZJZPSMBEDZJAFWKCFNPDBFZIWRNSVFBEZQMWSKAUYITOXCSILHFTTZLHJIXXRNLCGGSKDRUMHCFUYOHCDUWZRZVQYVXORCAYFTJPVUGWQPMOGHBMTAEAPKA");

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
    msg.setTimeStamp(0.3183793384658491);
    msg.setSource(63917U);
    msg.setSourceEntity(181U);
    msg.setDestination(14426U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("FAQCEMXJFUKXTQYHSUYMGDUEADDCIFOEJLJMQVARZFTDXHZJUBBOVGZPVZOSSWOCJHNOPRPCEWRDYHGUKOKMMMVUZTWHFYBLXSTCFSISTSHIWLSBLVLAPRNWHAQXGNWUITOPCWQQOJAGRAY");
    msg.formation_name.assign("QIPHTIMHGCELBUENIXADEOGRVCICEPLZISVLRYTCTZJWCDVSDTVGKFSIVMPXNBWSXYUKGUONJPBPUBQEDSANIZGAHFGJTUSBIQSOXWGJJOXRNIQHYWGDIKVLFRRKJAFCGCMDBMSKSWALOJSNORLVVYKZLXOQJUVDYDTWWLWNKAEAFXEQNPYBPQZFWMHMMHPFYJDFYMRBGAHLBWUMFCHLQXMUD");
    msg.plan_id.assign("EHJSTIJUCAKOSJQGGCBLPXYYVOABVLQSPMEVBUCXUMQZZLEPGSWDNJJZSATVLEANXTWKPEYRHDRAVBZRJQYFYYUDETEHGKFSUUFPQHITRLQZPNCNKKULIZRMQBLNVDLOOWWTMKIDWZBIACMXXDDBJJRABFGUPGUMMTDWVCYOMSUCLGPNKYJYNRPFBINKDOIHTCJOQFWYBVHZXFNVQHTXSGOMFPXRKNEVOWHCIQERSHEWFAIFZ");
    msg.description.assign("OVCJYDIOMJQKOSJBQRIYMRMPNVURYPEXPWXZZFKHUOHLNFANQEZUTTSYNBBVWFUXDATWEWPHVWVMCYKSHZ");
    msg.leader_speed = 0.12415948450934666;
    msg.leader_bank_lim = 0.8388745944336449;
    msg.pos_sim_err_lim = 0.5369157390811017;
    msg.pos_sim_err_wrn = 0.7557809729362718;
    msg.pos_sim_err_timeout = 50522U;
    msg.converg_max = 0.48004194628442753;
    msg.converg_timeout = 53553U;
    msg.comms_timeout = 21831U;
    msg.turb_lim = 0.1539138764808219;
    msg.custom.assign("JQNUJZQGXIRXAIECCKWOOLJWCSCMZAOBBIGAFGSMOQIHYDQEVRRTBHBNIFEPVGYVONQLEQTSHPYDGCAZOMQSMMZIXSBVNGTYHHPKKYTDLVHRYVBUOHWLBRDUGLUATWNSHWKNQVMFQMYKMXTTERPNZDAJCGKFIZESJBHBYAEQUWXHKOXSUEOCJFFJXMDLUUCGPZZRPLCEPKVRWFTXKXJRNPSBUAPIRNDVKAZYOFDLMWJYPTLZCGNEIWIWDXDAS");

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
    msg.setTimeStamp(0.27421883151459836);
    msg.setSource(9353U);
    msg.setSourceEntity(85U);
    msg.setDestination(37556U);
    msg.setDestinationEntity(29U);
    msg.group_name.assign("QNVTWXZKCDODPBROKOXYTIUWVJGRITMLAQIMDBTNOYWXFMMVEXCJUFAPPUGPSJHKSWGUNFVBLKMSQHPAZMSOOLDHNULVZNHEQMSQUTAYVNYEAGHVFFAEBLZDGQCGWYQRUZSGNETMVEAEOTRFPQRWJXPXQRLQNURKMGAHNLFKRGGCYAZPDLXJWXJTABIVHCSJCCWHEUYBKIHPJDBUI");
    msg.formation_name.assign("UGTCSZJSYNFPRAMAYGECOGKGKJLZRLKRBMCQDHYVXVAPPTINEBJOXOLYOFPTTQNGWNLEANCUJOYFCXVYSRFMRBQKJJHKUFZFWOGXJRVFHMSVBDSPDGRGJNLWQZFEPYNWOHEVOWHGQAIUKMVTHTMHINLPOWRDCUPMVA");
    msg.plan_id.assign("PCDNLAXGWBXPZ");
    msg.description.assign("CBLVTVWAAHHRXRNKSWUZCTPQDNDJCQWKVCHTNMKKIZLNVVBODJWVPOEZFNBHBNMUVSXWSIICXITTYUWYYWNLNEJLINKCYJEUJWWVXFZLKGYBQOCEFI");
    msg.leader_speed = 0.7778066720227291;
    msg.leader_bank_lim = 0.7741011827091687;
    msg.pos_sim_err_lim = 0.4768477649744691;
    msg.pos_sim_err_wrn = 0.03303983997955928;
    msg.pos_sim_err_timeout = 966U;
    msg.converg_max = 0.42180414108709474;
    msg.converg_timeout = 36755U;
    msg.comms_timeout = 9890U;
    msg.turb_lim = 0.5607934084522956;
    msg.custom.assign("LCHXSWYDAPSUAMWQXAEAZWIHLQNBRVCRBJFDKJTRZNTYXOFCQKURZXKGYZVDBYO");

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
    msg.setTimeStamp(0.5746960539201933);
    msg.setSource(59851U);
    msg.setSourceEntity(1U);
    msg.setDestination(17695U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("KXSDFWFJJBUMGVNJOZAFGZPTYNZUVZERYSDZYRZUMQZJIDBFTJLAUWRKIJBHRERAHCPWQXRMLGHPQTBDBDVCNSIODGYIOJGMJFLHTTWTDLZEOSABXIVOUNOGMCCDPCHF");
    msg.formation_name.assign("ZDSYKKCSMFROEJSLZOHMADHVFXVAXJBQQXTTNGJV");
    msg.plan_id.assign("EJXLGVHGCYEVUUGSGDYWKOBSUFVVNPLEDMHNKNOEEKRCLUYDKJATKATLOPGOMNTVWJWAIKNWUSBFMHM");
    msg.description.assign("GOHKHTRJOCVNYXJYYXHNCAUWRKVCSXZUYGOUPAELUJXWIYWPCFTNLYQOFDIHZHRKDBPDMNTIWYQVUFIHRMUHLELFDQCSSJGMOBNKKWRQPEGIFVZQZGMWXRKOKBDQCAXJOTXLGHGFETJUNJACILXDPQHNYSZ");
    msg.leader_speed = 0.7189246892995905;
    msg.leader_bank_lim = 0.800901347989813;
    msg.pos_sim_err_lim = 0.4909116437952016;
    msg.pos_sim_err_wrn = 0.9025107336093585;
    msg.pos_sim_err_timeout = 45085U;
    msg.converg_max = 0.25398736579425296;
    msg.converg_timeout = 47522U;
    msg.comms_timeout = 34313U;
    msg.turb_lim = 0.9274167151453196;
    msg.custom.assign("FVZVXEBIFPCWJQHXZCZRHBPIMPTWEKFUIWWBNAAMNSUWYNIISNEYCUBJESCHNZOCJBHJURTRKLFOEALZKYXGOXSBXZQKLOGVCCQGIXGOEIJQMLMJNYHKXKVOQHIEKAGMNLWDOLKPFIAXVYTVZTLISHPVTQAPKJGRGFH");

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
    msg.setTimeStamp(0.7753632976628002);
    msg.setSource(16452U);
    msg.setSourceEntity(121U);
    msg.setDestination(3046U);
    msg.setDestinationEntity(87U);
    msg.control_src = 30202U;
    msg.control_ent = 228U;
    msg.timeout = 0.1929226035598519;
    msg.loiter_radius = 0.2614890961631129;
    msg.altitude_interval = 0.26308232642325147;

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
    msg.setTimeStamp(0.9092293184056575);
    msg.setSource(42153U);
    msg.setSourceEntity(181U);
    msg.setDestination(47160U);
    msg.setDestinationEntity(120U);
    msg.control_src = 22584U;
    msg.control_ent = 139U;
    msg.timeout = 0.1450359163699554;
    msg.loiter_radius = 0.3626108205894668;
    msg.altitude_interval = 0.9873274108242658;

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
    msg.setTimeStamp(0.14963683868163735);
    msg.setSource(53072U);
    msg.setSourceEntity(87U);
    msg.setDestination(5459U);
    msg.setDestinationEntity(148U);
    msg.control_src = 46439U;
    msg.control_ent = 177U;
    msg.timeout = 0.5887415300850464;
    msg.loiter_radius = 0.23428321545797526;
    msg.altitude_interval = 0.46974827830464316;

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
    msg.setTimeStamp(0.6117115606660982);
    msg.setSource(43525U);
    msg.setSourceEntity(0U);
    msg.setDestination(22338U);
    msg.setDestinationEntity(92U);
    msg.flags = 208U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8403306942935066;
    tmp_msg_0.speed_units = 253U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9027081571139858;
    tmp_msg_1.z_units = 125U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5043292807333117;
    msg.lon = 0.7399683748527883;
    msg.radius = 0.07666490663521808;

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
    msg.setTimeStamp(0.7482603169590915);
    msg.setSource(1124U);
    msg.setSourceEntity(29U);
    msg.setDestination(39325U);
    msg.setDestinationEntity(120U);
    msg.flags = 92U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.28682551125557054;
    tmp_msg_0.speed_units = 54U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5225925291309519;
    tmp_msg_1.z_units = 72U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3143587499200863;
    msg.lon = 0.3311154666707089;
    msg.radius = 0.2550272749641169;

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
    msg.setTimeStamp(0.010500773156077226);
    msg.setSource(60569U);
    msg.setSourceEntity(14U);
    msg.setDestination(38845U);
    msg.setDestinationEntity(37U);
    msg.flags = 103U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.05368428319893681;
    tmp_msg_0.speed_units = 232U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09556978419190276;
    tmp_msg_1.z_units = 165U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.07605120739137172;
    msg.lon = 0.3685208713116327;
    msg.radius = 0.9800934065912169;

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
    msg.setTimeStamp(0.9743522096068905);
    msg.setSource(35216U);
    msg.setSourceEntity(105U);
    msg.setDestination(51156U);
    msg.setDestinationEntity(245U);
    msg.control_src = 31441U;
    msg.control_ent = 44U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 55U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.554776831532699;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7080163997818972;
    tmp_tmp_msg_0_1.z_units = 146U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7776087047779188;
    tmp_msg_0.lon = 0.8473129023233765;
    tmp_msg_0.radius = 0.9016889772586268;
    msg.reference.set(tmp_msg_0);
    msg.state = 160U;
    msg.proximity = 8U;

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
    msg.setTimeStamp(0.43956683123557383);
    msg.setSource(17620U);
    msg.setSourceEntity(128U);
    msg.setDestination(39350U);
    msg.setDestinationEntity(192U);
    msg.control_src = 43639U;
    msg.control_ent = 18U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 188U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.035288175422479306;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5845379719614945;
    tmp_tmp_msg_0_1.z_units = 58U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7753885727308933;
    tmp_msg_0.lon = 0.5134069534254467;
    tmp_msg_0.radius = 0.3641556474196733;
    msg.reference.set(tmp_msg_0);
    msg.state = 235U;
    msg.proximity = 37U;

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
    msg.setTimeStamp(0.64623879254477);
    msg.setSource(26492U);
    msg.setSourceEntity(2U);
    msg.setDestination(22410U);
    msg.setDestinationEntity(189U);
    msg.control_src = 33664U;
    msg.control_ent = 173U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 103U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.06983598431760318;
    tmp_tmp_msg_0_0.speed_units = 167U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4325104544970767;
    tmp_tmp_msg_0_1.z_units = 254U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.13329012606391366;
    tmp_msg_0.lon = 0.6278669791847972;
    tmp_msg_0.radius = 0.07992963927608276;
    msg.reference.set(tmp_msg_0);
    msg.state = 9U;
    msg.proximity = 20U;

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
    msg.setTimeStamp(0.5941504931840333);
    msg.setSource(2882U);
    msg.setSourceEntity(3U);
    msg.setDestination(42770U);
    msg.setDestinationEntity(164U);
    msg.ax_cmd = 0.005742083428432521;
    msg.ay_cmd = 0.004931555581857983;
    msg.az_cmd = 0.24770375876502781;
    msg.ax_des = 0.3050603105130957;
    msg.ay_des = 0.879342574329384;
    msg.az_des = 0.9863870500477088;
    msg.virt_err_x = 0.08876763479162852;
    msg.virt_err_y = 0.8889720588262853;
    msg.virt_err_z = 0.9133871971574956;
    msg.surf_fdbk_x = 0.6446207107406665;
    msg.surf_fdbk_y = 0.7800083336626366;
    msg.surf_fdbk_z = 0.5546902933117506;
    msg.surf_unkn_x = 0.1085678280963448;
    msg.surf_unkn_y = 0.37350685419807683;
    msg.surf_unkn_z = 0.2529511198851967;
    msg.ss_x = 0.15508811585847115;
    msg.ss_y = 0.23533798223766234;
    msg.ss_z = 0.21744170566529208;

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
    msg.setTimeStamp(0.9666614117373263);
    msg.setSource(32830U);
    msg.setSourceEntity(38U);
    msg.setDestination(13461U);
    msg.setDestinationEntity(57U);
    msg.ax_cmd = 0.18768706429179538;
    msg.ay_cmd = 0.5648801713458195;
    msg.az_cmd = 0.27730189927837445;
    msg.ax_des = 0.325241128633185;
    msg.ay_des = 0.08719716244071085;
    msg.az_des = 0.8712411161765646;
    msg.virt_err_x = 0.3483234606525516;
    msg.virt_err_y = 0.5256661166431913;
    msg.virt_err_z = 0.5123942214924884;
    msg.surf_fdbk_x = 0.11558717192595647;
    msg.surf_fdbk_y = 0.7329379886382911;
    msg.surf_fdbk_z = 0.3579026884846289;
    msg.surf_unkn_x = 0.8275756667164558;
    msg.surf_unkn_y = 0.2509082006537643;
    msg.surf_unkn_z = 0.5849840501361745;
    msg.ss_x = 0.21294873666717162;
    msg.ss_y = 0.02091048473649526;
    msg.ss_z = 0.5474569332806717;

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
    msg.setTimeStamp(0.12449910499375172);
    msg.setSource(51260U);
    msg.setSourceEntity(52U);
    msg.setDestination(15740U);
    msg.setDestinationEntity(25U);
    msg.ax_cmd = 0.40596441307085707;
    msg.ay_cmd = 0.3602163094303781;
    msg.az_cmd = 0.7138472566570901;
    msg.ax_des = 0.34410157303868705;
    msg.ay_des = 0.4540135254272164;
    msg.az_des = 0.14544384876514582;
    msg.virt_err_x = 0.5362805494022976;
    msg.virt_err_y = 0.3794614673763599;
    msg.virt_err_z = 0.11803098928365374;
    msg.surf_fdbk_x = 0.5333459005076793;
    msg.surf_fdbk_y = 0.06278882025002441;
    msg.surf_fdbk_z = 0.5346157287189821;
    msg.surf_unkn_x = 0.4027018582351376;
    msg.surf_unkn_y = 0.9374928518594687;
    msg.surf_unkn_z = 0.90567528593557;
    msg.ss_x = 0.8778152360799628;
    msg.ss_y = 0.9091712980028303;
    msg.ss_z = 0.541195960055285;

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
    msg.setTimeStamp(0.03690282594837879);
    msg.setSource(65346U);
    msg.setSourceEntity(161U);
    msg.setDestination(29494U);
    msg.setDestinationEntity(66U);
    msg.s_id.assign("AEUUIBDJCSYFQXMVQSTRMBDSEHPAVLHQWFLFDJHUMXQBPONLWJQAOQGRTOD");
    msg.dist = 0.865829531667941;
    msg.err = 0.7193889054778267;
    msg.ctrl_imp = 0.32153291850823584;
    msg.rel_dir_x = 0.6854203334786574;
    msg.rel_dir_y = 0.627550226151397;
    msg.rel_dir_z = 0.06100186487419723;
    msg.err_x = 0.5724858197377413;
    msg.err_y = 0.10159103562705674;
    msg.err_z = 0.34359836432000745;
    msg.rf_err_x = 0.4328810822369681;
    msg.rf_err_y = 0.395014265055848;
    msg.rf_err_z = 0.48042930961930785;
    msg.rf_err_vx = 0.8359191916051273;
    msg.rf_err_vy = 0.6492078557087045;
    msg.rf_err_vz = 0.027720467570297558;
    msg.ss_x = 0.9636743933572071;
    msg.ss_y = 0.8846689852509972;
    msg.ss_z = 0.8705012921317656;
    msg.virt_err_x = 0.6144815497098943;
    msg.virt_err_y = 0.819993956785452;
    msg.virt_err_z = 0.6702519480448865;

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
    msg.setTimeStamp(0.35046040117524946);
    msg.setSource(51882U);
    msg.setSourceEntity(233U);
    msg.setDestination(9096U);
    msg.setDestinationEntity(12U);
    msg.s_id.assign("XHOGIHCTLZJBCNTNDOCWMHZTGEOIVRVNEDWUSQIZWEUDJBLBMXPOMICRRLSOTAMWNCYNRJFAXGEGOLIGRIHKHQUFGOUSNHSJKJWNDDKZYDLRQLYBXC");
    msg.dist = 0.36635843533671175;
    msg.err = 0.9435323309952753;
    msg.ctrl_imp = 0.08510876083448493;
    msg.rel_dir_x = 0.9701033714409562;
    msg.rel_dir_y = 0.3823246487740172;
    msg.rel_dir_z = 0.6498042341214179;
    msg.err_x = 0.07708820690507945;
    msg.err_y = 0.33155296584199945;
    msg.err_z = 0.9287110072029099;
    msg.rf_err_x = 0.01963546581207465;
    msg.rf_err_y = 0.4267051553293528;
    msg.rf_err_z = 0.42778918431898294;
    msg.rf_err_vx = 0.042536111122732256;
    msg.rf_err_vy = 0.30367885914514525;
    msg.rf_err_vz = 0.22549112099618807;
    msg.ss_x = 0.7355495100523668;
    msg.ss_y = 0.03267561931828056;
    msg.ss_z = 0.5033984555609018;
    msg.virt_err_x = 0.8241256829053044;
    msg.virt_err_y = 0.7292532101987065;
    msg.virt_err_z = 0.09448556647274275;

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
    msg.setTimeStamp(0.8451254298667573);
    msg.setSource(27070U);
    msg.setSourceEntity(86U);
    msg.setDestination(25558U);
    msg.setDestinationEntity(226U);
    msg.s_id.assign("KLNSMBVPSRACQTCBHXSAAQZEKAEAYRVHLBUWRYYJPMCNWUBYMUDMONIJTQANNHVAHKPRXEIWPQFVYHOKIPTWWVJHODQYYZCDEKHIWKVMHFIXEZFOOCCILJLLU");
    msg.dist = 0.4493492498517856;
    msg.err = 0.4849499325669099;
    msg.ctrl_imp = 0.31644881718154694;
    msg.rel_dir_x = 0.35831046539719236;
    msg.rel_dir_y = 0.288585066285853;
    msg.rel_dir_z = 0.046854781942079815;
    msg.err_x = 0.11734510795979358;
    msg.err_y = 0.4271793860549612;
    msg.err_z = 0.8882851849593506;
    msg.rf_err_x = 0.35536042062584705;
    msg.rf_err_y = 0.31871725699695996;
    msg.rf_err_z = 0.16435499979421742;
    msg.rf_err_vx = 0.6909127651271593;
    msg.rf_err_vy = 0.4990906080548443;
    msg.rf_err_vz = 0.9522780276613473;
    msg.ss_x = 0.8493342574402158;
    msg.ss_y = 0.8484826214519231;
    msg.ss_z = 0.414382442591014;
    msg.virt_err_x = 0.5583575209498228;
    msg.virt_err_y = 0.10843051438128237;
    msg.virt_err_z = 0.6559054449471748;

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
    msg.setTimeStamp(0.3258496524061605);
    msg.setSource(11051U);
    msg.setSourceEntity(155U);
    msg.setDestination(29406U);
    msg.setDestinationEntity(208U);
    msg.timeout = 63154U;
    msg.rpm = 0.28804253189533624;
    msg.direction = 61U;
    msg.custom.assign("QFXNFHECLUBCZORYLIYVZPMJYLYCIQUYSTNHB");

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
    msg.setTimeStamp(0.9844866634743549);
    msg.setSource(29408U);
    msg.setSourceEntity(165U);
    msg.setDestination(44753U);
    msg.setDestinationEntity(15U);
    msg.timeout = 21895U;
    msg.rpm = 0.929470632447666;
    msg.direction = 28U;
    msg.custom.assign("DVVQDGGPRVTBDPFMIINBMQYDHMEYMUCHDCKBKYQSZBCRQRFBNZREJTDSXAOCKVCDQRESUCGJVJZSMPTCTOCCPLOWOMPBIJYBSXZGWNOQEYLPITLSHVRRINLOWFNXJTFXGHLVFAKDWRXKVXFQIWOMJXBWHWEPJXFNRKHYKAHQNLWSZKMPTEEBMEAGHJQIDZRUOTZGWUGSKFUIUHKXGXAVELPHAUL");

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
    msg.setTimeStamp(0.9003515238349244);
    msg.setSource(45861U);
    msg.setSourceEntity(64U);
    msg.setDestination(42173U);
    msg.setDestinationEntity(216U);
    msg.timeout = 59024U;
    msg.rpm = 0.12107942678679096;
    msg.direction = 157U;
    msg.custom.assign("NPAMPATLZQRFHMQMUCBRXVDPKCFDTMBLDLSTMEGFOPFUJYTDILOCGGCSFMVN");

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
    msg.setTimeStamp(0.35653315754492343);
    msg.setSource(8379U);
    msg.setSourceEntity(85U);
    msg.setDestination(39635U);
    msg.setDestinationEntity(192U);
    msg.formation_name.assign("FLUHMEEQAEXRJVUZUMCDVWGQXYMDGJONV");
    msg.type = 72U;
    msg.op = 96U;
    msg.group_name.assign("SADGDLYJSZRPSDIEURVXPCYLUKDMKPGKIMXPFKCOLWWCZHBINPJWIKNXDBJJMYZQLXMWIXREVUBSPMWQRVHEAQCRFYKDOCAASFAZQBJZMIFJVBIQMYRHDDYYBLHOQKSWJWFEONTLVCLPUDBAHQMJZBAFCYEMTUAXGTLWNGFVWTWJGOXZOTSQUATAVTIUJHUXNGHZFUXN");
    msg.plan_id.assign("KEEALVFXYTAUSGPJCWJVGIJMSBIEEPHNAMGGGWJA");
    msg.description.assign("RMIATLECFFXRWMWDSLDZCDQLHXMSPWTRFDOALLSHICGQXAWNOHYLBUTENYYNNZRIUTEGOQVVURSDALTDCBOWBGETBCYXWHSJKTGMFPNGJMIJDRSPXYFWPUZCKJRIPBMHKCGVNQZXXPHATWZVJMPFZYGPTUVVVAQQERZVODQEAD");
    msg.reference_frame = 228U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32561U;
    tmp_msg_0.off_x = 0.33694692535425275;
    tmp_msg_0.off_y = 0.7235716281871819;
    tmp_msg_0.off_z = 0.39034433271179325;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5420604023260143;
    msg.leader_speed_min = 0.05007724418465864;
    msg.leader_speed_max = 0.508757901910432;
    msg.leader_alt_min = 0.947817416841439;
    msg.leader_alt_max = 0.017993335992737558;
    msg.pos_sim_err_lim = 0.992641970985686;
    msg.pos_sim_err_wrn = 0.21944975919879728;
    msg.pos_sim_err_timeout = 17105U;
    msg.converg_max = 0.2504490483231002;
    msg.converg_timeout = 45727U;
    msg.comms_timeout = 37065U;
    msg.turb_lim = 0.837105404218706;
    msg.custom.assign("ISVKVTNDGELSXFWIXTXKCBBVOMCNXYAQMWOFJFREMEWOWZCMNLUBV");

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
    msg.setTimeStamp(0.886296995325469);
    msg.setSource(17220U);
    msg.setSourceEntity(72U);
    msg.setDestination(23166U);
    msg.setDestinationEntity(89U);
    msg.formation_name.assign("JTLEDIJQDVCZMNTOEWEFOEIRPIAWAUEPACLJSRWYENRNJZBBJAJGAMCRUHCOHITRSCFKAHSYQVKLVMWGVSKLLXXPHDPWDRIIBVHSHMVTENLJKFBTCYUXDXUEMIXGUBFJEWNZCYFMFMYGYCCZMUWOFAPXODXSVIKWUTUQXZXRPGCPAUYMVRPEQIHLHTGWOLATQFWDHXSSGGBOULYJZNGDKKZKLTFKVZGDJYNTOF");
    msg.type = 162U;
    msg.op = 44U;
    msg.group_name.assign("KTKBTQVZATGFXZRKXIIPEGYVMHSMJFCLRHVQIRZXYWKEGODFJIYHJOUONBPHNSRVFGAAOTWBCNWBWREFQ");
    msg.plan_id.assign("DXAAYNHQKIOEONQTFCVISFSKGKVHOMXPPLZFQWOMUHUKGOHRHRERJZFOBYEBHAGAKEYZY");
    msg.description.assign("HYWOXXJYRXVAOFBPAHGMZERKFIKVVW");
    msg.reference_frame = 83U;
    msg.leader_bank_lim = 0.8712448450167307;
    msg.leader_speed_min = 0.08347756625177127;
    msg.leader_speed_max = 0.9934426862743582;
    msg.leader_alt_min = 0.36003345726144476;
    msg.leader_alt_max = 0.43900121777992396;
    msg.pos_sim_err_lim = 0.39779558634805057;
    msg.pos_sim_err_wrn = 0.8861336730883353;
    msg.pos_sim_err_timeout = 53566U;
    msg.converg_max = 0.6667092566334182;
    msg.converg_timeout = 31640U;
    msg.comms_timeout = 51562U;
    msg.turb_lim = 0.07028772825306429;
    msg.custom.assign("VUHXELYRDNAKWSGISQHOATBVVGFKDMLBRUFIOKXIWIAYUNHUARBDKPMJBRWNQONILQBIWQGSZTIDUXUJCCXVHWQTFMFIMQEGUGXHPMBSUFGEEJLJKLVDVPEYDXFKVTCNXQLJPXGHAEYCNXSZLEOVDRKSIJMEGNBEORCDHDQZYTSFJDTANHNBZRQAZWYZQZOKGMUJCBYPSZTZCCMA");

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
    msg.setTimeStamp(0.4863739970227401);
    msg.setSource(64703U);
    msg.setSourceEntity(117U);
    msg.setDestination(1328U);
    msg.setDestinationEntity(210U);
    msg.formation_name.assign("QWVMHDAXPOWEXAMHPXNAOOLSSEKVVZZZHUWDMUFKXNGGNGYFLSOVNQEIUESSHYTBCGYTYFSRKBMIRFFFBIQFWRFKXNWXJOIPJAFDLMWPDGRATUJRISWZKBCKZKUGHDLBEVW");
    msg.type = 4U;
    msg.op = 7U;
    msg.group_name.assign("NPYFAMMDOIIJOQPFONGTINXOHSDODUAJZKVL");
    msg.plan_id.assign("XRQELFATHEHXSSHRMOJPNDSSBIGZXNAQUCDTPGZCFIUBMICXDRMSHBYXRKXVAWIVIMMLFVICRLJQVNJDZHKPLUFJTZJQNMKNTUDLKZPEOHOOVPIWAEWDMQQYLGBYLEOIUGJFNXABCFPFRVNXMDKPBEYOSMUQMTJCEXRBWDUCHEOTTRLWUYDVPGEWCYAPYJJXZIAHKTVTDZZYBBZGCCBYSWHIVURASQQZKEFKORUFKSGNKWQPWOSOFN");
    msg.description.assign("HJWTBETSEBIUZXPXZ");
    msg.reference_frame = 43U;
    msg.leader_bank_lim = 0.04583035250030587;
    msg.leader_speed_min = 0.6043170558088271;
    msg.leader_speed_max = 0.39093890965050015;
    msg.leader_alt_min = 0.387103762663901;
    msg.leader_alt_max = 0.842408603473788;
    msg.pos_sim_err_lim = 0.6246880628360992;
    msg.pos_sim_err_wrn = 0.2593192032928091;
    msg.pos_sim_err_timeout = 17231U;
    msg.converg_max = 0.7282160237562425;
    msg.converg_timeout = 23140U;
    msg.comms_timeout = 12202U;
    msg.turb_lim = 0.5479052982313087;
    msg.custom.assign("PVDPVTNTRZPHCXGYJFQC");

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
    msg.setTimeStamp(0.2653288547130811);
    msg.setSource(28466U);
    msg.setSourceEntity(32U);
    msg.setDestination(53175U);
    msg.setDestinationEntity(253U);
    msg.timeout = 63456U;
    msg.lat = 0.633186535958091;
    msg.lon = 0.1742340299531947;
    msg.z = 0.06233564742009634;
    msg.z_units = 31U;
    msg.speed = 0.5300426865046789;
    msg.speed_units = 231U;
    msg.custom.assign("ZWNNIBNGPFIQIGPCXYXGCXSD");

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
    msg.setTimeStamp(0.789461913429191);
    msg.setSource(64869U);
    msg.setSourceEntity(103U);
    msg.setDestination(187U);
    msg.setDestinationEntity(160U);
    msg.timeout = 20685U;
    msg.lat = 0.0932247372553282;
    msg.lon = 0.07247657371397953;
    msg.z = 0.2388612025001714;
    msg.z_units = 73U;
    msg.speed = 0.4202191716002618;
    msg.speed_units = 68U;
    msg.custom.assign("RDWNUMOHOTQSUPCYSIFQKKQKLARCAZWCOUXBJWTGDNMYGBAGOWZKHPEIRCGMKHRJCPCPMFXYAKHPVBBVNSMVMFJZFQHOEWNXKSTEQNECLEOCEASVVBAYNJAOBGGYEIHMHLXDTYLIV");

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
    msg.setTimeStamp(0.1361040714764984);
    msg.setSource(28889U);
    msg.setSourceEntity(235U);
    msg.setDestination(43592U);
    msg.setDestinationEntity(105U);
    msg.timeout = 3975U;
    msg.lat = 0.1278116873058407;
    msg.lon = 0.2662694578778311;
    msg.z = 0.23259792102020704;
    msg.z_units = 248U;
    msg.speed = 0.8150608551510772;
    msg.speed_units = 214U;
    msg.custom.assign("KHTRAPYCZOBXARDYVZXODWBYHHELMULVGYJEIMYLJKECONMUYPWZIJFPYMUFVJAAVIXHRKKZGSOIWDJSJQOJBQSUMKRLPEGWWZTFLJOKGCEDFYFITKPDPLNUQUSOZRWFGCVDXDQCTBMXVDEVXLPKJSGLBUZ");

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
    msg.setTimeStamp(0.009932156113646617);
    msg.setSource(30119U);
    msg.setSourceEntity(199U);
    msg.setDestination(54063U);
    msg.setDestinationEntity(103U);
    msg.timeout = 1899U;
    msg.lat = 0.37876836561505645;
    msg.lon = 0.8212902075672205;
    msg.z = 0.5253167390291762;
    msg.z_units = 234U;
    msg.speed = 0.3808819509298491;
    msg.speed_units = 22U;
    msg.custom.assign("KTBIPUTBYNKDZKBTDUIFMCPIQNRPAQZBPOGVXBFGOAWHWACEXDDEFNSNNCJQOSLTUNOPKEIEVMHYYLIIPPWNBLOZVROGGLHAAIGPEGOTDLANRSJVUMZXCRJVESXH");

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
    msg.setTimeStamp(0.44958096770737155);
    msg.setSource(39311U);
    msg.setSourceEntity(245U);
    msg.setDestination(11548U);
    msg.setDestinationEntity(132U);
    msg.timeout = 15844U;
    msg.lat = 0.20213260617385365;
    msg.lon = 0.23564792538913149;
    msg.z = 0.681007750452691;
    msg.z_units = 238U;
    msg.speed = 0.11815121155948916;
    msg.speed_units = 253U;
    msg.custom.assign("LPBVFKWYHGBAFDZEWKAXTHBYJABKUVXOSBTQJJRZ");

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
    msg.setTimeStamp(0.5524875473707489);
    msg.setSource(570U);
    msg.setSourceEntity(134U);
    msg.setDestination(50203U);
    msg.setDestinationEntity(244U);
    msg.timeout = 48208U;
    msg.lat = 0.9844565118986152;
    msg.lon = 0.962833908958503;
    msg.z = 0.870369334430447;
    msg.z_units = 138U;
    msg.speed = 0.08418321635423587;
    msg.speed_units = 189U;
    msg.custom.assign("YJHNRUDEVHXIKRRKFEYHCJKAALBLZUOANEIGWJZBBPAEQHPCASXLAGFKSNSZHOEQQUYKSFVGONVFYWQM");

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
    msg.setTimeStamp(0.7054546105542696);
    msg.setSource(4140U);
    msg.setSourceEntity(199U);
    msg.setDestination(22085U);
    msg.setDestinationEntity(141U);
    msg.arrival_time = 0.3370985960036046;
    msg.lat = 0.05836367014392052;
    msg.lon = 0.7176678134805725;
    msg.z = 0.5700882335972288;
    msg.z_units = 143U;
    msg.travel_z = 0.004891519773223774;
    msg.travel_z_units = 179U;
    msg.delayed = 47U;

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
    msg.setTimeStamp(0.036009002409619795);
    msg.setSource(52517U);
    msg.setSourceEntity(3U);
    msg.setDestination(41077U);
    msg.setDestinationEntity(34U);
    msg.arrival_time = 0.35892615476045;
    msg.lat = 0.5402210208772156;
    msg.lon = 0.8533238792177241;
    msg.z = 0.5278529119892643;
    msg.z_units = 71U;
    msg.travel_z = 0.3017799393559836;
    msg.travel_z_units = 187U;
    msg.delayed = 222U;

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
    msg.setTimeStamp(0.8879406506900239);
    msg.setSource(29777U);
    msg.setSourceEntity(140U);
    msg.setDestination(17918U);
    msg.setDestinationEntity(71U);
    msg.arrival_time = 0.6005978294859724;
    msg.lat = 0.2627282724213921;
    msg.lon = 0.8350298952339876;
    msg.z = 0.23640355675862856;
    msg.z_units = 181U;
    msg.travel_z = 0.4200396311928717;
    msg.travel_z_units = 230U;
    msg.delayed = 9U;

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
    msg.setTimeStamp(0.4255525133553266);
    msg.setSource(55441U);
    msg.setSourceEntity(162U);
    msg.setDestination(47901U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.5648722811928026;
    msg.lon = 0.7330121814206425;
    msg.z = 0.8750921038753728;
    msg.z_units = 155U;
    msg.speed = 0.6780828929002803;
    msg.speed_units = 29U;
    msg.bearing = 0.6352324900604723;
    msg.cross_angle = 0.519356460132949;
    msg.width = 0.9178101427590326;
    msg.length = 0.13691360229388505;
    msg.coff = 23U;
    msg.angaperture = 0.827154617501907;
    msg.range = 49556U;
    msg.overlap = 21U;
    msg.flags = 223U;
    msg.custom.assign("GMSACTCTDSMAGCHXVIQUPEBWNGVXBYYRJCZYBUQGOMHZYRGLBAUSSEWDHLEYIKSSWHSLJLETGP");

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
    msg.setTimeStamp(0.857284732502436);
    msg.setSource(3224U);
    msg.setSourceEntity(15U);
    msg.setDestination(25481U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.4028719994537543;
    msg.lon = 0.6546717566282052;
    msg.z = 0.8019443827738231;
    msg.z_units = 145U;
    msg.speed = 0.3218871165653222;
    msg.speed_units = 167U;
    msg.bearing = 0.3090610288607841;
    msg.cross_angle = 0.48437052025043636;
    msg.width = 0.8099471210159892;
    msg.length = 0.008525080279892405;
    msg.coff = 20U;
    msg.angaperture = 0.4179770642658367;
    msg.range = 22813U;
    msg.overlap = 91U;
    msg.flags = 241U;
    msg.custom.assign("ULUMNCAKAKUGXLILCUGNIJRBGIEZTEBQEIHFXZMMUAVYJRDQSVINZICRNHQGWOFRNYWYJDYMWHCPXTPZIPUERPSMKBPFOZYOTZLJLMNVHLRSBLHFQQOQILBPMDJRPJNEOTJWIOCUSTPQRNDFTFTWOMYBKVBXSTXPG");

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
    msg.setTimeStamp(0.9520516094223007);
    msg.setSource(33987U);
    msg.setSourceEntity(237U);
    msg.setDestination(48068U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.7459501089419113;
    msg.lon = 0.8217284024770865;
    msg.z = 0.3402681520373334;
    msg.z_units = 200U;
    msg.speed = 0.1520032257063978;
    msg.speed_units = 121U;
    msg.bearing = 0.9118695227401543;
    msg.cross_angle = 0.002147280420944031;
    msg.width = 0.4060347321889103;
    msg.length = 0.8753533428978455;
    msg.coff = 221U;
    msg.angaperture = 0.016153001645315634;
    msg.range = 32344U;
    msg.overlap = 181U;
    msg.flags = 163U;
    msg.custom.assign("RPXUNWGQFHUZYQLGIXEKCDBQRRFEPOXLEHMNWOQSFLQUQXUXAPKDPOMKLKGIDAWJTRCTSZGOGFVNOTZMLGFCKZTPXRXOOQZVHKSEIIOMUNNCBWRJBYRWJHYIGBHWDSLLYTPINJAAYJVFOQALZE");

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
    msg.setTimeStamp(0.5531080330580208);
    msg.setSource(61416U);
    msg.setSourceEntity(117U);
    msg.setDestination(60669U);
    msg.setDestinationEntity(149U);
    msg.timeout = 64015U;
    msg.lat = 0.14456052857795687;
    msg.lon = 0.07515065436004598;
    msg.z = 0.8588210579960576;
    msg.z_units = 61U;
    msg.speed = 0.11160046006378732;
    msg.speed_units = 227U;
    msg.syringe0 = 6U;
    msg.syringe1 = 6U;
    msg.syringe2 = 34U;
    msg.custom.assign("SMJXEJEWVHUMFBEWWDHLENUSGQVRXTPGWYPMUENNAVCLCMKNIDEHQWPGYKZFXRLKGAJIIOFHRNQYVCTFYAZCXEHZXGZJESZFBIAWZKIFUOJYLDUAMGHWASADFSKQWHSPGMNBCBTEPGDONRAVFVPSDOXGIWJOQPQVKRKZBQYDNKPRLDZYMLTFRTURCQBEJXTXALAXS");

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
    msg.setTimeStamp(0.7685838144064043);
    msg.setSource(30853U);
    msg.setSourceEntity(132U);
    msg.setDestination(49147U);
    msg.setDestinationEntity(81U);
    msg.timeout = 32402U;
    msg.lat = 0.8880919948884254;
    msg.lon = 0.7672361191550301;
    msg.z = 0.24436218269646193;
    msg.z_units = 45U;
    msg.speed = 0.8691674008724247;
    msg.speed_units = 0U;
    msg.syringe0 = 0U;
    msg.syringe1 = 10U;
    msg.syringe2 = 93U;
    msg.custom.assign("RXNSQLRSLITYMHMJVWVOAZSUJNOTLAIBYGWRRWXULHZNKMWXTQZJS");

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
    msg.setTimeStamp(0.407696786078778);
    msg.setSource(61030U);
    msg.setSourceEntity(135U);
    msg.setDestination(53986U);
    msg.setDestinationEntity(86U);
    msg.timeout = 8778U;
    msg.lat = 0.7523345730846341;
    msg.lon = 0.19245432807901885;
    msg.z = 0.2975641993422099;
    msg.z_units = 20U;
    msg.speed = 0.8024660982525996;
    msg.speed_units = 61U;
    msg.syringe0 = 247U;
    msg.syringe1 = 25U;
    msg.syringe2 = 46U;
    msg.custom.assign("TBYUPGXJYMZRHNMGVTTMYAKSERNRHQKPZFNDDYVGTANAWHYOVZEJHLAIWZKHUHPLOGLEHNUVRLRBXBKSFVCQNHQQSDVIOOODPQLXBESQBIBUWDRCPJYP");

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
    msg.setTimeStamp(0.9704747165128678);
    msg.setSource(37028U);
    msg.setSourceEntity(253U);
    msg.setDestination(42529U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.7544240920980785);
    msg.setSource(34986U);
    msg.setSourceEntity(253U);
    msg.setDestination(24316U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.9484284173460201);
    msg.setSource(57803U);
    msg.setSourceEntity(131U);
    msg.setDestination(61943U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.28927352776337134);
    msg.setSource(55254U);
    msg.setSourceEntity(217U);
    msg.setDestination(11634U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.7705916545270054;
    msg.lon = 0.12545661264857177;
    msg.z = 0.45540881975291214;
    msg.z_units = 91U;
    msg.speed = 0.6781154639069717;
    msg.speed_units = 15U;
    msg.takeoff_pitch = 0.27477892077431587;
    msg.custom.assign("GBVIMSDQMJDOIUDDGSVHTKPXGYGCFBARHDOWXLVVFUPHNRWWFZJUCLNEDEUQVCIVLZMFLQYHQBZVNXBMMYPTXKCWKRAALLNEIEJLQBPQGNDTPTXEOGEUCRLYBWZSWKAFJOYPGMHSEROTIFMEOZTHPASXZBSWPYALRWYSGKVPXRKZWZYIQOYITQDJASTKVE");

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
    msg.setTimeStamp(0.3056777028743848);
    msg.setSource(2701U);
    msg.setSourceEntity(124U);
    msg.setDestination(32735U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.23060007629135248;
    msg.lon = 0.20144803531021793;
    msg.z = 0.9248821825083922;
    msg.z_units = 39U;
    msg.speed = 0.6054056310044084;
    msg.speed_units = 45U;
    msg.takeoff_pitch = 0.7323650787110639;
    msg.custom.assign("BFFHWWXMCIITXAHUFDCLXSOYLKSOLIMTFJESGKZWOCBRPRFYQWDOPIIIRQOENJQRGUUDLGVGPBKRSCPUMREUGSTVVMUACVDNJHYPYJWBKDSJVKEPZHWYAVWVIMQELZSGANJWBGTMJUKFMOIZDBUDALGBFXZFPCXYAQVNVODTMEDBTAPCBZRJQQTEQSFEIHMJKOMZUORHDXJXKLGCNSNHWZLZNKAHYEQYRYAWLZILYPOPUGBHC");

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
    msg.setTimeStamp(0.3757684978703172);
    msg.setSource(11997U);
    msg.setSourceEntity(191U);
    msg.setDestination(24626U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.9535110069140382;
    msg.lon = 0.9884880792631773;
    msg.z = 0.8454763458876818;
    msg.z_units = 200U;
    msg.speed = 0.7013136168309742;
    msg.speed_units = 28U;
    msg.takeoff_pitch = 0.609754348471721;
    msg.custom.assign("XDMQYRBJEXCAYESTZVJ");

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
    msg.setTimeStamp(0.07528614517271404);
    msg.setSource(13382U);
    msg.setSourceEntity(67U);
    msg.setDestination(61657U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.014497019457855753;
    msg.lon = 0.006229864573380928;
    msg.z = 0.8480444781510934;
    msg.z_units = 146U;
    msg.speed = 0.626968294369991;
    msg.speed_units = 117U;
    msg.abort_z = 0.19335576389101305;
    msg.bearing = 0.5087052398850954;
    msg.glide_slope = 176U;
    msg.glide_slope_alt = 0.8680519014426465;
    msg.custom.assign("UDMUCTYWWNUJMZSBOPGGMGRJCYHSWKMEYRSDEJRHLDHAMPGKYMIJURIGXDQLTYYNPJLRXQYHSZSFXESQPRZNNKTPGITJRCEYQZSOBFLCVKIHVNQ");

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
    msg.setTimeStamp(0.19816416446424423);
    msg.setSource(23383U);
    msg.setSourceEntity(139U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.33511935927980285;
    msg.lon = 0.7518792869591039;
    msg.z = 0.14760855153898877;
    msg.z_units = 26U;
    msg.speed = 0.6565851741117259;
    msg.speed_units = 135U;
    msg.abort_z = 0.6185509622330009;
    msg.bearing = 0.6118666628210638;
    msg.glide_slope = 252U;
    msg.glide_slope_alt = 0.6891442276342736;
    msg.custom.assign("UGVWPIAPAMHIODRYLOTGMRCUUWEVVWUHLENBAKJPRYKZQXJXGKATLSPNIMHMYGHQODXJEEQCQEXXNCGWDNBASYJLFQQQFEJZZOEDIJFZUHPAPFCSIFZEUBIHU");

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
    msg.setTimeStamp(0.9600748852752037);
    msg.setSource(12901U);
    msg.setSourceEntity(0U);
    msg.setDestination(12329U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.6079790753950652;
    msg.lon = 0.09263915926891053;
    msg.z = 0.8030360204125915;
    msg.z_units = 72U;
    msg.speed = 0.5722564908024267;
    msg.speed_units = 124U;
    msg.abort_z = 0.3806674199938296;
    msg.bearing = 0.32132060382332817;
    msg.glide_slope = 67U;
    msg.glide_slope_alt = 0.7292635386664099;
    msg.custom.assign("DPJFAKWDBIIXCYKPHOUNYVUZKSLEMVRYCAQKVJOXPSBOHGIANCPRGWQBRBQYDGQNLLGCKXZXLYEQEYWTKOXFFJEXWRHONUJFGWLGJMVQCMDRFQMRODXHCQUNZSMZERBPIZFDGRVSBWHQTEYZKANLZOBNFDXUDYIESTZOICUYLBHAMOWVLJQATEKCMMLNVFJFNTCPSWMVTZWGRHKHPSPEDBXJRVXBAOWSZAHAISYFIUUCLUPIGPS");

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
    msg.setTimeStamp(0.3182245833132815);
    msg.setSource(37625U);
    msg.setSourceEntity(214U);
    msg.setDestination(34648U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.5624020108825227;
    msg.lon = 0.9106526942151839;
    msg.speed = 0.3173856658789649;
    msg.speed_units = 84U;
    msg.limits = 5U;
    msg.max_depth = 0.130904623929206;
    msg.min_alt = 0.8471512837431378;
    msg.time_limit = 0.21906676104276068;
    msg.controller.assign("DBCEBQAVOILNVVPYRUBQQIPYUZRIMDKJZRYLJFUJCPSCOGFXWHUC");
    msg.custom.assign("AHIQCUDBEVAURDQRCWQIJXDYCAZLWNQEJTV");

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
    msg.setTimeStamp(0.8734095271284386);
    msg.setSource(32629U);
    msg.setSourceEntity(204U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.35811916209836137;
    msg.lon = 0.8250009113724397;
    msg.speed = 0.8032691373498755;
    msg.speed_units = 103U;
    msg.limits = 97U;
    msg.max_depth = 0.3486783529901215;
    msg.min_alt = 0.5657547800251991;
    msg.time_limit = 0.5943595877641844;
    msg.controller.assign("RYYMHANMFNKIEUCIXXWXCRUNAHDPTEREJYJARUXPLIKHOCQWEYTDWEOEHVTPLCFOJNTSOGNFKABFRGPNSGBTRMPTTUHGWIQMAIQOBEFQUSVBQGBDJUBOICKQODVZLQBKHHLGZYJVYADEHRDUVSULUTSOWJLNCDCOKAFWPBKRZDXBAFD");
    msg.custom.assign("XTDHYHJWTWUPVATNAFLIOQHLVWUVXWFSJRWPJIZOPWITXTYVYLIYTGFOBOVEFXUSBS");

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
    msg.setTimeStamp(0.6294615668755705);
    msg.setSource(24010U);
    msg.setSourceEntity(136U);
    msg.setDestination(63465U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.15103962887387434;
    msg.lon = 0.762870095312459;
    msg.speed = 0.34362508686796334;
    msg.speed_units = 191U;
    msg.limits = 108U;
    msg.max_depth = 0.4145812430117367;
    msg.min_alt = 0.9342672442884897;
    msg.time_limit = 0.6221742837794533;
    msg.controller.assign("EPUMJBTPJJHSGZKSLMMJBRNODZQUCBIJRLQVETKNSXWFOMACSPDNTATVHBAAYROAXDREIWYOINSMJFAZOOWSGTGQHHMRTXVGVCCMFVIBDERCRCNZFLZGJ");
    msg.custom.assign("FFTUNDVJJCFHKPQDODTXFDIJYKPFMTMROVWXEQQKIHEELKRSRZNLQYGGUTZUAXWWTMJQTIGCI");

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
    msg.setTimeStamp(0.7764024554725564);
    msg.setSource(18951U);
    msg.setSourceEntity(183U);
    msg.setDestination(19985U);
    msg.setDestinationEntity(248U);
    msg.target.assign("MHPJSWPFIWDWJTQEXARSPYRADTXOPNYAFNIBXXOBHPQYUABPIUETGGMKKNKHKZJQDXVAITVQLTIJNCDTFDALLJORPBQOOFEN");
    msg.max_speed = 0.41741162091419437;
    msg.speed_units = 189U;
    msg.lat = 0.6387295568605597;
    msg.lon = 0.12108265561543008;
    msg.z = 0.22153687981072845;
    msg.z_units = 104U;
    msg.custom.assign("BOWMTRQYKRFXJNWGTBTEKGERESNOVGQJGIPJLPQLHG");

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
    msg.setTimeStamp(0.6695971265315875);
    msg.setSource(29359U);
    msg.setSourceEntity(24U);
    msg.setDestination(28071U);
    msg.setDestinationEntity(151U);
    msg.target.assign("BAWMTWVXGNEFKOVJQTCIFKIRCUGZJGZQZMXHUQRDMLMHPSGUKDYVRNAPZYZABCWIPXCIKLLTGYVDQSHEFNJBMMOMXTXHJFHWCYTYQAHDHNSLTORENOIYRXORLPNPBNSJZVKU");
    msg.max_speed = 0.6606226656621053;
    msg.speed_units = 155U;
    msg.lat = 0.15970016834558698;
    msg.lon = 0.0556798514548813;
    msg.z = 0.7533588805896958;
    msg.z_units = 12U;
    msg.custom.assign("JFYXTLPCALVTEUHCPKEGTBUABORLAGZYRBWYHVSUDXNJNIOCDEYYPLSV");

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
    msg.setTimeStamp(0.31290691146444416);
    msg.setSource(52471U);
    msg.setSourceEntity(148U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(101U);
    msg.target.assign("DRXUKIROKFOJYNNQFAVFYOVXRGMTZZDDEHKYOFAIMUQPAWQSAKLVDHXGPULEAXMDHCJOWSPZUUNQXNWKCNNXPMSQLSLAOOVCQBPDRTWHBJSDLTLCIKDYZCGBMYRMCOEBXIGCJWGACHBBGNTUSTRLQELGFAMZHGGITTEZHWUSWMVTWTSUVJDSQBXNWEJIUSVOJHKQVPYRIYFOQRFKYYLEFZNNEJGEXKJTFWHJCIIPE");
    msg.max_speed = 0.7461086403628866;
    msg.speed_units = 165U;
    msg.lat = 0.5560238885403646;
    msg.lon = 0.6148228131613955;
    msg.z = 0.12229026303291679;
    msg.z_units = 78U;
    msg.custom.assign("VEWYHLIZEWKQRIOASTIPIWUVFIMMAHZRINSHYBADRFBSYAZTQCUZZYKNSOKAQXENSWTGUNYFYXGLTBOVQLXUJSVHLLHHDRSQICXFRDTRZCCHMCEJKUGUBKGEHXWWVMQQJSPLAIMZLNUKTBNPGAJZNOOCBTPILWXYDCYHGJXDDUMNVOZJOVWJGGBBDENOEOAJPTIPFYC");

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
    msg.setTimeStamp(0.9203370009869185);
    msg.setSource(31321U);
    msg.setSourceEntity(101U);
    msg.setDestination(53729U);
    msg.setDestinationEntity(250U);
    msg.timeout = 47949U;
    msg.lat = 0.4018341617349219;
    msg.lon = 0.17940184574700202;
    msg.speed = 0.5107440317717532;
    msg.speed_units = 208U;
    msg.custom.assign("NUZGHYHKZNWJSEPVNWIOUFAXWEBCSYUWTVAYEIEHXCCTK");

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
    msg.setTimeStamp(0.135246683456275);
    msg.setSource(13687U);
    msg.setSourceEntity(129U);
    msg.setDestination(43547U);
    msg.setDestinationEntity(20U);
    msg.timeout = 56554U;
    msg.lat = 0.6676307687495513;
    msg.lon = 0.38026727117595227;
    msg.speed = 0.3452017542430631;
    msg.speed_units = 68U;
    msg.custom.assign("MGNSXLRAEMOEDCBVLYCXAJTAWAAZEWVWOUKNQNQZMPKXKESHBNMBUCQNPJRFJTBVTLIQWANIYBRDWMVNIPQZDDBBGDFORPTMIKGCXQSFEZUUXSIHKNIGXCRDOQIICXSLPY");

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
    msg.setTimeStamp(0.525470097850938);
    msg.setSource(12510U);
    msg.setSourceEntity(236U);
    msg.setDestination(39799U);
    msg.setDestinationEntity(123U);
    msg.timeout = 59161U;
    msg.lat = 0.5271001497090292;
    msg.lon = 0.6539485125107087;
    msg.speed = 0.5768212005019634;
    msg.speed_units = 166U;
    msg.custom.assign("KYULYAJXUHQOICKBWRCTJGHTQTGXMWDLKQEBPJSGLUHQDAUAWZNWYGDUIBIHIRRVIIIPFPAERLEDFFJJVDKIAKNHZCXHSBFYBKGCSXXLOBMPBLZTAVVHVFMYCLBINJRQXVKZGRXGZKWJPYPLNNQVSKSJCRGPUEMWNUKOLUCSDRSYUBFQWMTODTPSCDMOEZTGCVAQCFOAN");

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
    msg.setTimeStamp(0.6561955417347124);
    msg.setSource(31540U);
    msg.setSourceEntity(226U);
    msg.setDestination(42264U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.3352817166453721;
    msg.lon = 0.5772010471724428;
    msg.z = 0.06923981359789877;
    msg.z_units = 252U;
    msg.radius = 0.14546790288884093;
    msg.duration = 9570U;
    msg.speed = 0.0695409609023021;
    msg.speed_units = 26U;
    msg.popup_period = 14945U;
    msg.popup_duration = 56040U;
    msg.flags = 102U;
    msg.custom.assign("UONTIOLNVYCFLYTQWKJISHQXFWOSMSHCQUUTGQNBMWXAMTTDJTWRXZNJEFKGCPAIWNECOFUSDJVPUHMGLHHBQATGRAJYCXTEGSUIFZHYBFBCRADCVINADMVOSXKVKKQPBNKHGRSRVZLOYWHGHLY");

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
    msg.setTimeStamp(0.5019096572482235);
    msg.setSource(21186U);
    msg.setSourceEntity(191U);
    msg.setDestination(55668U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.1538927594944557;
    msg.lon = 0.5687567505761274;
    msg.z = 0.08098590122916005;
    msg.z_units = 177U;
    msg.radius = 0.9679222088059631;
    msg.duration = 55101U;
    msg.speed = 0.12660697847951552;
    msg.speed_units = 123U;
    msg.popup_period = 53757U;
    msg.popup_duration = 5792U;
    msg.flags = 203U;
    msg.custom.assign("ERIHVYSLCORKQYUPDHUSTPYICXZKXPWESJETZIYFOYOZLVMFMYGAKPVHQFJYNGKPKUWCGQBPZDBMZYLFCMSVMJUWOJVWQBOBUZEPDDQBMNICZUAXCXCONBRBSZOWJCYIPMJEQGSBIEJTCZTDAEOATOQKIKFIXHIRLAFDSKJENXAFOVGTDS");

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
    msg.setTimeStamp(0.6464518151430546);
    msg.setSource(58946U);
    msg.setSourceEntity(31U);
    msg.setDestination(59945U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.9996723066152376;
    msg.lon = 0.4425479125419587;
    msg.z = 0.6136580953273124;
    msg.z_units = 212U;
    msg.radius = 0.6515693058404632;
    msg.duration = 37550U;
    msg.speed = 0.8432978063966847;
    msg.speed_units = 107U;
    msg.popup_period = 39140U;
    msg.popup_duration = 11648U;
    msg.flags = 36U;
    msg.custom.assign("EGHICKRBCXIJPEDSFKNQZVGDZNZBNTUUGFPQKZFIESRPTWARMAJACSPDCYHXRHOUODMKSHTOGDYLUJFUHDGODNMAHXAULABLTZBJXXIQXVCNMBUJTEOEVFLJQIZOWQTNRNWZKKYW");

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
    msg.setTimeStamp(0.44534360164686704);
    msg.setSource(49627U);
    msg.setSourceEntity(130U);
    msg.setDestination(10238U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.21388485620045328);
    msg.setSource(9907U);
    msg.setSourceEntity(254U);
    msg.setDestination(32219U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.30505242664820176);
    msg.setSource(45666U);
    msg.setSourceEntity(199U);
    msg.setDestination(36633U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.7150487086262569);
    msg.setSource(61234U);
    msg.setSourceEntity(213U);
    msg.setDestination(36418U);
    msg.setDestinationEntity(91U);
    msg.timeout = 41273U;
    msg.lat = 0.17696181055395366;
    msg.lon = 0.20414507350790723;
    msg.z = 0.06796290154064755;
    msg.z_units = 15U;
    msg.speed = 0.6554626058993398;
    msg.speed_units = 86U;
    msg.bearing = 0.8391628156599287;
    msg.width = 0.543141440876175;
    msg.direction = 130U;
    msg.custom.assign("WTDLHESZZNPVOUAADJSQMWBVTEFBXCKTOYHXCXLIOJNDHCFHMPIIFRHIXQSIRSSDFQJEDTUVEPCNKUIUNOLWZQMMYKXYAFRGXDFAZNKLHYAHDUKWBLWYWVCOKRTEIACMQADGSUZEJQOOQVWTGNRNSJBYDGLJNFRPJIMLSRVGQQRZZWUKHCRJVYTEEMTOEAOTCLGPJHGZJUYZWXADKPIUFBMBPYVRTKMI");

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
    msg.setTimeStamp(0.8994887442657218);
    msg.setSource(2473U);
    msg.setSourceEntity(18U);
    msg.setDestination(32039U);
    msg.setDestinationEntity(53U);
    msg.timeout = 59106U;
    msg.lat = 0.7236336003594598;
    msg.lon = 0.5187067785988604;
    msg.z = 0.24801298237059033;
    msg.z_units = 161U;
    msg.speed = 0.03415124984622686;
    msg.speed_units = 21U;
    msg.bearing = 0.9908091863343175;
    msg.width = 0.3483504309955058;
    msg.direction = 239U;
    msg.custom.assign("MDDTLUMJWNYLCRFOHUSJUNCZAPAPCSCLKK");

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
    msg.setTimeStamp(0.6621333175107601);
    msg.setSource(61842U);
    msg.setSourceEntity(189U);
    msg.setDestination(40536U);
    msg.setDestinationEntity(136U);
    msg.timeout = 15018U;
    msg.lat = 0.2863916151783983;
    msg.lon = 0.9306990277924928;
    msg.z = 0.254501917559265;
    msg.z_units = 243U;
    msg.speed = 0.07163252962623878;
    msg.speed_units = 23U;
    msg.bearing = 0.5541959721567319;
    msg.width = 0.4286124414748578;
    msg.direction = 42U;
    msg.custom.assign("GICOSZYQTSOOJDBOHTAVYLDGHYRWKLZXPUQBWODGTWTIMCJORABREWYABMNPPKPHTPYRERQNWMQGEGQQSKIZMZPIFEQPHBCEWLSSRVXMSJZCCDESUMSDIRECNORHGYVJOEBUOVDBUEMPUKFYAHBW");

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
    msg.setTimeStamp(0.908695915109069);
    msg.setSource(27920U);
    msg.setSourceEntity(70U);
    msg.setDestination(32668U);
    msg.setDestinationEntity(121U);
    msg.op_mode = 151U;
    msg.error_count = 76U;
    msg.error_ents.assign("BIZMBHFMSGYIDEOXZZXUYJXBGAUVCEAFTCBVDFWMOLAQMNRLQPTHYKPIUWNTQOIKYGHYFUTVDIAJBJYWBCQPNYMMJEXWIMETRRLBEOXTLLASUGVEUQKLLHBNUBDFDRPZDGNRRTDRJCUTCIKC");
    msg.maneuver_type = 36579U;
    msg.maneuver_stime = 0.6266224757858965;
    msg.maneuver_eta = 61566U;
    msg.control_loops = 2516199969U;
    msg.flags = 39U;
    msg.last_error.assign("ZBQPMCABBYXIWWIXNKNIVRGEFLYIKNLXUMMSWVHHWFEDCNJMLRAZVZGWVNQKANXGBYJIUSKLGLJNWPIETGZIPNQJXCMXADEXDOYPKMGOIOSTOHSYOYOQANJ");
    msg.last_error_time = 0.9606555147428657;

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
    msg.setTimeStamp(0.9215289656989292);
    msg.setSource(57074U);
    msg.setSourceEntity(22U);
    msg.setDestination(31477U);
    msg.setDestinationEntity(188U);
    msg.op_mode = 232U;
    msg.error_count = 179U;
    msg.error_ents.assign("QAGILPOMFAQEGIVTRORBGRZPIHLVCEGMCXDDZLOZBDDIUITYRMZVGQBJFHUNFERKS");
    msg.maneuver_type = 34802U;
    msg.maneuver_stime = 0.3233000801347471;
    msg.maneuver_eta = 25913U;
    msg.control_loops = 172928683U;
    msg.flags = 55U;
    msg.last_error.assign("WQKGZSPBAWOAIFQMNHLVWTTLV");
    msg.last_error_time = 0.6662637790857452;

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
    msg.setTimeStamp(0.11391976081525379);
    msg.setSource(59598U);
    msg.setSourceEntity(48U);
    msg.setDestination(18759U);
    msg.setDestinationEntity(221U);
    msg.op_mode = 204U;
    msg.error_count = 233U;
    msg.error_ents.assign("LPXIVSUYWRUJMGHLFUWNSKVXQDHUZOHFCEQKEGVXZNFGYHRDSWVWKJUMIZLUIBDEOWRHJSA");
    msg.maneuver_type = 40664U;
    msg.maneuver_stime = 0.3908997169861479;
    msg.maneuver_eta = 46677U;
    msg.control_loops = 2494623411U;
    msg.flags = 85U;
    msg.last_error.assign("UJYVGCDKZLIVELECQJCRFRXAFJDWKHUKKYWDYBSSZPMQXAXXAGWJRLAPPTQFKGRFPFVBGZGHNDMZEGSDQXZQKSAALEKNHBHPJELGXDUPMFLUMTGNRDRCYIDLISTOCDROLETVMVOSKEEBTRSMBMCNIZTTVARBOWNIFAZZFUINJWPAYONHKJYBWMWBW");
    msg.last_error_time = 0.5692840134040636;

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
    msg.setTimeStamp(0.9743076447817913);
    msg.setSource(6874U);
    msg.setSourceEntity(3U);
    msg.setDestination(21959U);
    msg.setDestinationEntity(66U);
    msg.type = 89U;
    msg.request_id = 52549U;
    msg.command = 104U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.886130669882377;
    tmp_msg_0.lon = 0.07917440484668037;
    tmp_msg_0.z = 0.37160316022247397;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.speed = 0.7016864406926859;
    tmp_msg_0.speed_units = 219U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.475141041965076;
    tmp_tmp_msg_0_0.y = 0.4836559328801533;
    tmp_tmp_msg_0_0.z = 0.5332610494875288;
    tmp_tmp_msg_0_0.t = 0.6700630998564676;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.07067355868103764;
    tmp_msg_0.custom.assign("BLUJOIZIHFXDFQMTVVISBRTJQFWUFNGIRLSYUUCQWQZCFPPWWTAVHZELXYLUCOHPDJBKTAWDADCHZXJWIBJBUZZJTHPEHEJGWQDDSGBHDYBTDYWROVQYFQZQLKWBVEXTDDYQLXNXCMUYEGTFASHIZKISKGMRFLGZSOVFAEYTMEKSKMYPSKAPMJCEIBUORZMWHVJUFLGRSMSGAHOOAOXPPXPNRVNUVVPKOACBO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14769U;
    msg.info.assign("NSSEHSVJVOHTBLBFQMEYYVUHEGMBAIFILNFNXJFAKIORQPVRHNXOAKOQEDXAOTYYWCXVMTFNKPBJBCWLLLKCZXYFBIRPVPHILQHCGUUWPVFWXZGIEPMZBNDYWADQHTGAUSFCZEDISXFVKRDR");

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
    msg.setTimeStamp(0.9838788281292533);
    msg.setSource(1921U);
    msg.setSourceEntity(173U);
    msg.setDestination(7440U);
    msg.setDestinationEntity(198U);
    msg.type = 121U;
    msg.request_id = 18924U;
    msg.command = 79U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 7962U;
    tmp_msg_0.lat = 0.15868734379577387;
    tmp_msg_0.lon = 0.5594647834569583;
    tmp_msg_0.z = 0.23727257916827948;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.665684576774792;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.bearing = 0.7561196314786689;
    tmp_msg_0.width = 0.7739024843693478;
    tmp_msg_0.direction = 177U;
    tmp_msg_0.custom.assign("YAVWCDUYLJFKRQSOCPTYQNVUERPSNJACPWGSBZXMJQAJAMMVKZMLMACMIMYBATVDBFQRDGZQGOLVSTIG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2454U;
    msg.info.assign("AKOTJTDQZWFESZHYYXVNMIBCBIMRJAINQBAAOUQCRZYEKSIUSRBGNMYGONRPTJFDCWFDEMUCXFFNKEXOGXTERIJLBCTZIACUTPZP");

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
    msg.setTimeStamp(0.5286312462865508);
    msg.setSource(56807U);
    msg.setSourceEntity(137U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(15U);
    msg.type = 5U;
    msg.request_id = 4357U;
    msg.command = 12U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 40561U;
    tmp_msg_0.lat = 0.4058178515024704;
    tmp_msg_0.lon = 0.6652721975294805;
    tmp_msg_0.z = 0.039326295570325964;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.36385722021055367;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.bearing = 0.505635186496065;
    tmp_msg_0.cross_angle = 0.9579907700898769;
    tmp_msg_0.width = 0.5851621520646247;
    tmp_msg_0.length = 0.9738307972131255;
    tmp_msg_0.hstep = 0.1726234749644331;
    tmp_msg_0.coff = 57U;
    tmp_msg_0.alternation = 124U;
    tmp_msg_0.flags = 65U;
    tmp_msg_0.custom.assign("RDBUHGFAZMRQUYWVRVDMD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 54692U;
    msg.info.assign("WTWFEPDUEAVOYNVKKHMIRNAUDSSSBHRECJRAYIZQSPWQRHMMUBJIEMWYVSVDOFKXOXZDDWXIQATMNYFHXPCKGHKVJDVLIYKTTYLYBLQCCWCFZMEGNFIFGBWNPFPCOCSJOUS");

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
    msg.setTimeStamp(0.19327283302875786);
    msg.setSource(36756U);
    msg.setSourceEntity(186U);
    msg.setDestination(56609U);
    msg.setDestinationEntity(71U);
    msg.command = 216U;
    msg.entities.assign("PXDFGHGFDAGLX");

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
    msg.setTimeStamp(0.0020651288066964035);
    msg.setSource(37156U);
    msg.setSourceEntity(129U);
    msg.setDestination(24571U);
    msg.setDestinationEntity(46U);
    msg.command = 182U;
    msg.entities.assign("UEXJBVPLZGONCFTBUSRBIYRYQCMYXIYIRGADBXPEQXHCZHTMFVZSTOVTXRJQZVDKZKADYSNKMSGLDSTHTFVLBOOWNTEWYLWFWKHSADHIBJAECJYVFPXQOKJDVUMOQYRSDAANGPFUGXKGOLGZVDXNIKJAHRREZCYCDOFBAHUJKGESRURPMQIMCKUAUNXNSMTQROUQSQHEQFPWZZLOLMUAIWCENWNGTZNLHW");

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
    msg.setTimeStamp(0.4714512328439393);
    msg.setSource(32853U);
    msg.setSourceEntity(56U);
    msg.setDestination(34983U);
    msg.setDestinationEntity(35U);
    msg.command = 46U;
    msg.entities.assign("TSSOEECVRABKWHMORTGBFUXVFXAWEPAKFDGLVWQLTSANAFLXCSYWJDZBMWASDFBXIDWJNSGZHQTUDNGJRKTTRAURHQIIJHXJYIZPIMEJIYZMGBJWVXLNMBJCNNCKIGYZTHSPLTDESCTVHFHOWUMKVYGECSI");

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
    msg.setTimeStamp(0.3921393996747904);
    msg.setSource(49497U);
    msg.setSourceEntity(207U);
    msg.setDestination(51566U);
    msg.setDestinationEntity(8U);
    msg.mcount = 41U;
    msg.mnames.assign("BUUXVKXFKSEWKZOVM");
    msg.ecount = 217U;
    msg.enames.assign("JAFHPFOOZTVWXWHKPZLEIMZMXJCQ");
    msg.ccount = 70U;
    msg.cnames.assign("PGCXDCRNLEEIOTMESOGGJDLYTGTAAHOFJJGVHFHYZRDFGMJBHRDAUASTKSUKBELWKQCAUBFOCQRUIOWNBECQQRNXMJYEJEIXKYZFJVFXVSMYZZLDIIJHSAYUOKMNTOYLUJQEWXRXFTFTDJNWYISUCBGSWAUPCNGZKZLALNWNPXHDSQGOIQBMRRTKHIMZWPIYCBPEDTVVKIHPSPKBATWEHVG");
    msg.last_error.assign("YDHXOBNILIEFKBMORRJNGZKGJCBYMNZNMBZLVVAJMTZBNVMQOWCPNVQRTMASFYDHSWAEPAGIOLEODCLIUWKHAPBPPQUVASCSXEFLUFTXRFIRXLTBDRQCOTLQGDIHCCQEUGKYZ");
    msg.last_error_time = 0.7608221434904547;

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
    msg.setTimeStamp(0.035914589125287444);
    msg.setSource(7989U);
    msg.setSourceEntity(55U);
    msg.setDestination(61753U);
    msg.setDestinationEntity(55U);
    msg.mcount = 198U;
    msg.mnames.assign("BKGCGTKCKBLPVSXDISKWFTVHRYMGHKGARYZJHUWDIOFPIGYCYCRWUZEAVJJTMKZNJWGVVDXMYHFLFGSYPKEWVPNLEOQQVSWX");
    msg.ecount = 178U;
    msg.enames.assign("CUXULCSJVQNKRGMRMBNBJTXGOGKAKDDIYVCFYAYXMAMXIETTELXBFIMBCQKPLMNPLDQFNXQTCMHBVXZLUOUTJBWIGJAWSDHPJIHRYCAUTZHRKFWU");
    msg.ccount = 192U;
    msg.cnames.assign("PVPDMPMCSVBHZVFIOLPNYSCKBIZUOZQWDGKYGHCVXSCNWTPKFLETXKLWBUTHDQIGYPMYFFUUDEJNTJYKWXBAEFWJYQASMGVFTRYAATSZLIEZJRSGIOAMZVEZZESRBGOLZ");
    msg.last_error.assign("ABCISJVSKXGUWWETRUGLEBBKMCR");
    msg.last_error_time = 0.729824479561539;

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
    msg.setTimeStamp(0.6400952858249369);
    msg.setSource(64098U);
    msg.setSourceEntity(115U);
    msg.setDestination(43070U);
    msg.setDestinationEntity(223U);
    msg.mcount = 62U;
    msg.mnames.assign("CKJEUWOMXLBCCGXRRHDTIJWJUQCPMKAFEJRDDYGBBUNZZAADRHVXJEJPKPSSIMCLWQKHILFEYUYHRZEAQKSGFWVOQIKGAZVLAYMYLSDBIRFGCPUEQCGTENZRSOLDHLJIXAONVSPHHWTRWPUMXTTXNOQDAVVDNFLFFXLYQWWTMPICIDQYVWCFKGOUXMUABJFBVCRHMSOEKGPBVZZTVPFDZBTYSZGYOJHIBIXHQEONZNYNSEX");
    msg.ecount = 172U;
    msg.enames.assign("CDOXPTWACOALZPDAOTDOUHNRG");
    msg.ccount = 88U;
    msg.cnames.assign("XILNADSMFTHYSGKOROCUXDRUYMIZVXSABNORCHNGZPOLTOYQRXGZWHCWAQQFEDNVGFHQIQTKBCNDJICRNWBVHJJZOSFMPYKFNMVCUUYBIPXMM");
    msg.last_error.assign("YDGFXTULAINTJWNJAVPGGYRZMCTKEAVNTJOYWXXABTWOBRJOHDFBTNUEGVIYRJZKRWZCDOCWKXL");
    msg.last_error_time = 0.9193217400452263;

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
    msg.setTimeStamp(0.2576432481444074);
    msg.setSource(2760U);
    msg.setSourceEntity(227U);
    msg.setDestination(6468U);
    msg.setDestinationEntity(238U);
    msg.mask = 3U;
    msg.max_depth = 0.36809552852502936;
    msg.min_altitude = 0.7043216292408907;
    msg.max_altitude = 0.6802098679070896;
    msg.min_speed = 0.904771230653279;
    msg.max_speed = 0.948109175656255;
    msg.max_vrate = 0.4499316333208583;
    msg.lat = 0.3853781317091374;
    msg.lon = 0.7755376965133043;
    msg.orientation = 0.7163333739222202;
    msg.width = 0.3149353986854617;
    msg.length = 0.2845136321817858;

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
    msg.setTimeStamp(0.5740433522050544);
    msg.setSource(11258U);
    msg.setSourceEntity(198U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(92U);
    msg.mask = 222U;
    msg.max_depth = 0.19133801171074394;
    msg.min_altitude = 0.897053023323584;
    msg.max_altitude = 0.9682225489250937;
    msg.min_speed = 0.22091691929180857;
    msg.max_speed = 0.43318238127015507;
    msg.max_vrate = 0.9868904260530243;
    msg.lat = 0.30896399010747067;
    msg.lon = 0.639105014160387;
    msg.orientation = 0.6513329744163163;
    msg.width = 0.05181454660395601;
    msg.length = 0.18998468740911956;

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
    msg.setTimeStamp(0.8478548358486147);
    msg.setSource(6189U);
    msg.setSourceEntity(4U);
    msg.setDestination(36762U);
    msg.setDestinationEntity(237U);
    msg.mask = 115U;
    msg.max_depth = 0.6762510448853609;
    msg.min_altitude = 0.34692000348901975;
    msg.max_altitude = 0.30971638717816297;
    msg.min_speed = 0.32209402126900377;
    msg.max_speed = 0.2012717805869909;
    msg.max_vrate = 0.5535046528585117;
    msg.lat = 0.4809918241844201;
    msg.lon = 0.6116916826589831;
    msg.orientation = 0.06687098901278354;
    msg.width = 0.29580386194275643;
    msg.length = 0.31495622438626436;

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
    msg.setTimeStamp(0.7661545567238024);
    msg.setSource(28925U);
    msg.setSourceEntity(21U);
    msg.setDestination(11914U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.35096976476463104);
    msg.setSource(17153U);
    msg.setSourceEntity(192U);
    msg.setDestination(57435U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.5244725108256468);
    msg.setSource(62427U);
    msg.setSourceEntity(186U);
    msg.setDestination(50755U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.7849622964261344);
    msg.setSource(43721U);
    msg.setSourceEntity(7U);
    msg.setDestination(27656U);
    msg.setDestinationEntity(176U);
    msg.duration = 22008U;

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
    msg.setTimeStamp(0.44636264050176977);
    msg.setSource(53511U);
    msg.setSourceEntity(174U);
    msg.setDestination(51044U);
    msg.setDestinationEntity(127U);
    msg.duration = 23532U;

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
    msg.setTimeStamp(0.7657654234249524);
    msg.setSource(42058U);
    msg.setSourceEntity(70U);
    msg.setDestination(34809U);
    msg.setDestinationEntity(47U);
    msg.duration = 44617U;

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
    msg.setTimeStamp(0.548572764961176);
    msg.setSource(15949U);
    msg.setSourceEntity(15U);
    msg.setDestination(26093U);
    msg.setDestinationEntity(33U);
    msg.enable = 191U;
    msg.mask = 4210458008U;
    msg.scope_ref = 2685295043U;

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
    msg.setTimeStamp(0.7451872773868371);
    msg.setSource(47021U);
    msg.setSourceEntity(239U);
    msg.setDestination(38438U);
    msg.setDestinationEntity(104U);
    msg.enable = 12U;
    msg.mask = 2700860887U;
    msg.scope_ref = 3637245831U;

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
    msg.setTimeStamp(0.8037445454066837);
    msg.setSource(53460U);
    msg.setSourceEntity(98U);
    msg.setDestination(40838U);
    msg.setDestinationEntity(6U);
    msg.enable = 4U;
    msg.mask = 626249473U;
    msg.scope_ref = 107096090U;

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
    msg.setTimeStamp(0.7242349654150588);
    msg.setSource(39748U);
    msg.setSourceEntity(172U);
    msg.setDestination(32717U);
    msg.setDestinationEntity(41U);
    msg.medium = 122U;

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
    msg.setTimeStamp(0.660547075450591);
    msg.setSource(55824U);
    msg.setSourceEntity(175U);
    msg.setDestination(37063U);
    msg.setDestinationEntity(13U);
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
    msg.setTimeStamp(0.9786482499325773);
    msg.setSource(40249U);
    msg.setSourceEntity(49U);
    msg.setDestination(27011U);
    msg.setDestinationEntity(3U);
    msg.medium = 164U;

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
    msg.setTimeStamp(0.6442390970452363);
    msg.setSource(10514U);
    msg.setSourceEntity(30U);
    msg.setDestination(17360U);
    msg.setDestinationEntity(92U);
    msg.value = 0.12688427202531039;
    msg.type = 128U;

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
    msg.setTimeStamp(0.5252307830439542);
    msg.setSource(17240U);
    msg.setSourceEntity(174U);
    msg.setDestination(64306U);
    msg.setDestinationEntity(159U);
    msg.value = 0.2454436674762701;
    msg.type = 46U;

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
    msg.setTimeStamp(0.995626656100027);
    msg.setSource(36146U);
    msg.setSourceEntity(126U);
    msg.setDestination(35778U);
    msg.setDestinationEntity(156U);
    msg.value = 0.07570150841820544;
    msg.type = 106U;

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
    msg.setTimeStamp(0.22133702138474987);
    msg.setSource(58740U);
    msg.setSourceEntity(205U);
    msg.setDestination(46455U);
    msg.setDestinationEntity(34U);
    msg.possimerr = 0.206660781287069;
    msg.converg = 0.07788941492890455;
    msg.turbulence = 0.9869642955114651;
    msg.possimmon = 188U;
    msg.commmon = 243U;
    msg.convergmon = 104U;

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
    msg.setTimeStamp(0.5927454199008438);
    msg.setSource(23421U);
    msg.setSourceEntity(117U);
    msg.setDestination(20964U);
    msg.setDestinationEntity(137U);
    msg.possimerr = 0.6543588228489938;
    msg.converg = 0.8508438469040178;
    msg.turbulence = 0.863583065144102;
    msg.possimmon = 172U;
    msg.commmon = 119U;
    msg.convergmon = 41U;

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
    msg.setTimeStamp(0.9472030332984509);
    msg.setSource(17935U);
    msg.setSourceEntity(129U);
    msg.setDestination(46060U);
    msg.setDestinationEntity(152U);
    msg.possimerr = 0.8005960555512047;
    msg.converg = 0.9272116902235507;
    msg.turbulence = 0.496140051289364;
    msg.possimmon = 221U;
    msg.commmon = 17U;
    msg.convergmon = 217U;

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
    msg.setTimeStamp(0.8780692169957587);
    msg.setSource(41919U);
    msg.setSourceEntity(36U);
    msg.setDestination(9357U);
    msg.setDestinationEntity(90U);
    msg.autonomy = 206U;
    msg.mode.assign("ADIDWEPFFNMVHNLFOQVBKMUMLBEXRLHHSPBDWTYZNTNPORBISXMJKXRGFIUEIPERIJOBLUSORUAYAZFOQFIKEFCAANWGVNCTPUHVEKVCXMAWTETFGVDXLCZWJFIDMZSFTHGTWEYYGSLROPZHQAVYJGJWYQNGBHOQVMIUKCDBVHKYDAPASOUXC");

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
    msg.setTimeStamp(0.8922924870239467);
    msg.setSource(61563U);
    msg.setSourceEntity(169U);
    msg.setDestination(28419U);
    msg.setDestinationEntity(122U);
    msg.autonomy = 233U;
    msg.mode.assign("AKDXMHRDIRJQANNZGNAYYENNAXNKEEOZQWPELJFEMUCYCYXJFKIKJAYWFSPFDJPRKKGFVPSZOUESCIQGRFS");

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
    msg.setTimeStamp(0.6094660692882328);
    msg.setSource(17558U);
    msg.setSourceEntity(239U);
    msg.setDestination(35566U);
    msg.setDestinationEntity(22U);
    msg.autonomy = 198U;
    msg.mode.assign("UQCLQHMQTIVLDAILGJBQZPUUHQBCTOBSSPKMRNQGZCVSXEU");

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
    msg.setTimeStamp(0.4428997322474849);
    msg.setSource(19629U);
    msg.setSourceEntity(0U);
    msg.setDestination(25609U);
    msg.setDestinationEntity(147U);
    msg.type = 65U;
    msg.op = 119U;
    msg.possimerr = 0.43093719326672675;
    msg.converg = 0.8927252185823384;
    msg.turbulence = 0.07794025398491478;
    msg.possimmon = 195U;
    msg.commmon = 182U;
    msg.convergmon = 251U;

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
    msg.setTimeStamp(0.35586615534809074);
    msg.setSource(55522U);
    msg.setSourceEntity(185U);
    msg.setDestination(19098U);
    msg.setDestinationEntity(120U);
    msg.type = 76U;
    msg.op = 128U;
    msg.possimerr = 0.07650283105186562;
    msg.converg = 0.43216387845159754;
    msg.turbulence = 0.07318254390964107;
    msg.possimmon = 225U;
    msg.commmon = 46U;
    msg.convergmon = 78U;

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
    msg.setTimeStamp(0.5775963218903005);
    msg.setSource(34582U);
    msg.setSourceEntity(163U);
    msg.setDestination(21183U);
    msg.setDestinationEntity(170U);
    msg.type = 84U;
    msg.op = 125U;
    msg.possimerr = 0.7974029375232307;
    msg.converg = 0.03196414086868271;
    msg.turbulence = 0.6757175842465956;
    msg.possimmon = 234U;
    msg.commmon = 161U;
    msg.convergmon = 128U;

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
    msg.setTimeStamp(0.32619519673822717);
    msg.setSource(22132U);
    msg.setSourceEntity(117U);
    msg.setDestination(3140U);
    msg.setDestinationEntity(113U);
    msg.op = 172U;
    msg.comm_interface = 43U;
    msg.period = 2787U;
    msg.sys_dst.assign("VFXZTXXAIKKKAQNBIEJVYXUQBWOQJGFLLFDAJJRYJOCRLRXSHYTIQJZPVOCWPPLWGMPVBNJRYIFWELAMWWSHNYOMBDHZLHSZBN");

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
    msg.setTimeStamp(0.9950508299894858);
    msg.setSource(32242U);
    msg.setSourceEntity(120U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(6U);
    msg.op = 121U;
    msg.comm_interface = 71U;
    msg.period = 50765U;
    msg.sys_dst.assign("AMNCOJFMMTGMJBBIHHARNESQSDZGV");

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
    msg.setTimeStamp(0.7240253984721549);
    msg.setSource(56856U);
    msg.setSourceEntity(175U);
    msg.setDestination(58608U);
    msg.setDestinationEntity(251U);
    msg.op = 149U;
    msg.comm_interface = 161U;
    msg.period = 10170U;
    msg.sys_dst.assign("CAPTKGCSEPTKOBDEKWXGXWQMRJXHHPH");

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
    msg.setTimeStamp(0.11950274334370736);
    msg.setSource(50485U);
    msg.setSourceEntity(237U);
    msg.setDestination(63089U);
    msg.setDestinationEntity(162U);
    msg.stime = 110877479U;
    msg.latitude = 0.7971307213185953;
    msg.longitude = 0.5895986158547651;
    msg.altitude = 63659U;
    msg.depth = 51351U;
    msg.heading = 61350U;
    msg.speed = 21174;
    msg.fuel = -71;
    msg.exec_state = -85;
    msg.plan_checksum = 17517U;

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
    msg.setTimeStamp(0.3796356894034413);
    msg.setSource(17484U);
    msg.setSourceEntity(226U);
    msg.setDestination(4658U);
    msg.setDestinationEntity(248U);
    msg.stime = 2359936410U;
    msg.latitude = 0.4170663233020012;
    msg.longitude = 0.5014746691099281;
    msg.altitude = 5280U;
    msg.depth = 32632U;
    msg.heading = 24770U;
    msg.speed = -19101;
    msg.fuel = 15;
    msg.exec_state = 15;
    msg.plan_checksum = 23502U;

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
    msg.setTimeStamp(0.6715647963050155);
    msg.setSource(29946U);
    msg.setSourceEntity(27U);
    msg.setDestination(53298U);
    msg.setDestinationEntity(136U);
    msg.stime = 4013139613U;
    msg.latitude = 0.014154968014584268;
    msg.longitude = 0.0018002700236778857;
    msg.altitude = 798U;
    msg.depth = 18354U;
    msg.heading = 29777U;
    msg.speed = -11559;
    msg.fuel = 12;
    msg.exec_state = 113;
    msg.plan_checksum = 34515U;

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
    msg.setTimeStamp(0.27441012943498944);
    msg.setSource(55855U);
    msg.setSourceEntity(253U);
    msg.setDestination(2733U);
    msg.setDestinationEntity(73U);
    msg.req_id = 85U;
    msg.comm_mean = 20U;
    msg.destination.assign("CAHEIHMJKUR");
    msg.deadline = 0.08678623944445163;
    msg.range = 0.18875457747632207;
    msg.data_mode = 86U;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 111U;
    tmp_msg_0.comm_interface = 191U;
    tmp_msg_0.period = 42483U;
    tmp_msg_0.sys_dst.assign("WMFPDEMELOGTROMEAXANIDVKHKEENFSCLHUIMGGJIAKVTUWSDPGEVXCE");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CQVMGSFUMEHFYDYCWZBIAVJQRBZQXWTFXBJNJUGNBMNWKIAMPBNYTHGYFMIBQILHXREDITTESWSGSCKIDNLSMOFJCDBDQZRZJPFIAADJJXDG");
    const char tmp_msg_1[] = {5, 94, 123, 40, -30, -55, -82, -29, -32, 21, -55, -39, -19, 122, 84, 92, -5, 84, -97, 43, -53, -15, -57, 113, 103, -85, -98, -91, 72, -21, -48, 96, -69, 114, -51, 101, -86, 69, -8, 65, -22, 56, 121, -6, 56, -53, -74, 74, 91, -49, -67, -87, -52, 32, -32, -6, 36, 5, 95, -92, -62, -31, -51, -22, 22, 42, 68, -26, 52, 105, 33, -80, -110, 56, -31, -116, 78, -105, -105, -54, -39, -50, -2, -67, 63, -32, -92, -57, -47, -107, -93, -19, -111, 50, 40, 90, 101, 24, 34, -47, 93, 22, -106, 4, -27, -104, 111, 79, 44, -47, 14, -33, 22, -85, -88, -25, -80, 21, -35, 124, 124, 27, -47, 48, -41, -39, -27, -126, 98, -97, 56, -10, -77, 13, -124, -37, 82, -69, -68, 65, 53, 89, 29, -83, 83, -13, -57, 31, -111};
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
    msg.setTimeStamp(0.9100967521399976);
    msg.setSource(30185U);
    msg.setSourceEntity(179U);
    msg.setDestination(27182U);
    msg.setDestinationEntity(46U);
    msg.req_id = 48698U;
    msg.comm_mean = 84U;
    msg.destination.assign("HRADEBXBRXQIVLFVPBOBDIQLMJUKOVDRMVEYPFEVBJEGVTJZZTZWMMLSYNABJZLWVIDEJOEZOCTYIFOARVRCOYXUDBKXYQXKSJDPPVHQQESSTNFCEDYFHNSJGYOKOKDHJAVWRNGHNFMKWKYWQTSJXXZUCXGCQUQUDWABPHAGBZJGENQUCXSLOIPHFTUZGRHALRLKKGNWSCSTNGX");
    msg.deadline = 0.8257829191059214;
    msg.range = 0.79370301427945;
    msg.data_mode = 148U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 60494U;
    tmp_msg_0.lat = 0.6966061860172156;
    tmp_msg_0.lon = 0.013069501359875724;
    tmp_msg_0.z = 0.6418758524224043;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.duration = 11650U;
    tmp_msg_0.speed = 0.15065904014361775;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.type = 207U;
    tmp_msg_0.radius = 0.847511993661572;
    tmp_msg_0.length = 0.35201621743037337;
    tmp_msg_0.bearing = 0.29704597822588663;
    tmp_msg_0.direction = 5U;
    tmp_msg_0.custom.assign("SXBITMGVHHHSCSTLHJHWRRUHJWOWQLJLFJ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OQZTPHNWTVBLQZCKOCIDJRXICQVOYVZZNQJHBAIFEXDETSFXRMJFYRTRYPJLWR");
    const char tmp_msg_1[] = {120, 73, -127, 45, 67, -24, 83, 103, -84, -74, 23, -41, -35, 62, -49, 59, -127, 5, -120, -61, -61, -54, -48, -123, -95, -16, -49, -2, -116, 24, 39, 90, 88, -14, -127, -40, 14, -50, 36, 20, 2, -114, -56, -49, 89, -127, 121, 77, -121, -5, -12, -57, -86, -85, -84, -85, -18, 29, -3, 116, 41, 102, -10, 79, 67, -128, -105, 10, -51, 15, 100, 35, -43, -24, -40, 32, 71, 8, 114, -122, -121, -100, 126, 47, 22, 119, 34, 62, 102, 110, 1, 92, 68, 5, 61, 28, -62, 27, -52, 96, -86, 84, -89, -60, -71, 27, 75, -95, -108, -6, 121, 30, 24, -80, 33, -95, -48, -51, -128, 123, -90, 124, 66, 68, 107, 81, 90, -105, -104, -104, 74, -24, -13, 39, 114, 39, -106, 87, -103, -38, 47, -78, -62, 5, -96, 4, -39, -71, 57, -51, -92, -42, 86, 37, 93, -36, -70, -112, -49, -82};
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
    msg.setTimeStamp(0.9626667702989157);
    msg.setSource(2689U);
    msg.setSourceEntity(177U);
    msg.setDestination(50630U);
    msg.setDestinationEntity(124U);
    msg.req_id = 29427U;
    msg.comm_mean = 217U;
    msg.destination.assign("YQZOXEFRLWNCDLLIONRHYFRGGYIZVSYFNLLTPCQJTTSDLUSOINNOGSIIUAATQMEPMKCJGKTHVWRFIYXNXEMTAHREUFOKYE");
    msg.deadline = 0.4685256794310728;
    msg.range = 0.3577164223531335;
    msg.data_mode = 50U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 12093U;
    tmp_msg_0.control_ent = 246U;
    tmp_msg_0.timeout = 0.9252841866714356;
    tmp_msg_0.loiter_radius = 0.5689185177182073;
    tmp_msg_0.altitude_interval = 0.5253785178463601;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GKSNZHOLVCJMHQLYDXKMTNHZEPDWRUAMRAOQBLPASQZCNGMAHKIXJRLDRQTDBRQLERKRKAOYIVNOWNCSGXEFPGVSCBEPBBOTYEAJXZIVVIUQDOGEFFRSMOYJIZRKIDEGCGVOZUXPTXS");
    const char tmp_msg_1[] = {39, -18, -29, 111, -94, -119, 8, -2, 45, 3, -65, -91, -101, 6, -93, -81, -91, -107, 98, 105, -115, -122, 68, -26, 31, 32, 73, 104, -126, -18, 18, 22, -83, -61, 49, -76, -29, -62, 88, 42, -121, 41, -86, -6, 90, -80, 111, -5, 24, 28, -2, 108, -10, 27, 42, -81, 75, -112, -68, -104, -41, 32, -128, 117, 109, 30, 90, 112, 114, -104, 21, -104, -22, 125, -109, -112, -84, 101, -58, -6, 101, -20, 100, 102, -5, 32, 64, -81, -42, -82, -45, 26, 28, -85, -98, 96, 62, -45, -10, -104, -2, -90, 81, 19, 99, -75, -81, 112, 55, 65, -93, 103, -86, 14, -4, -67, 28, 9, 81, -91, -75, 18, 16, -110, -88, 34, -29, -53, -29, -35, -97, -96, -88, 13, 75, 80, 65, 94, -2, 6, 116, -12};
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
    msg.setTimeStamp(0.9386651967405465);
    msg.setSource(57657U);
    msg.setSourceEntity(158U);
    msg.setDestination(33298U);
    msg.setDestinationEntity(224U);
    msg.req_id = 11303U;
    msg.status = 169U;
    msg.range = 0.6640216695580732;
    msg.info.assign("RNPYVGWILZBBSIPGIYTMMHWXFJEURRTTAOXLJDCFUJEKDOQLCVCGZEBKZXDLBOPRMJNHXKZAYPNJVETSVSWJVAATLHPICOWQUEBPHAYUKEKWEIOCQXIWQGBUCDIMPMVNLBWJYYGQVXUGBZHOPXFRAMWWSUMJOKKVDIDOTYRUAHKDYXFNVBKDNQEJDTVFKUSHIXSTCHECWNGUZGLIHRFMZPBGNXMZQOTQRYLDSFRNGAPCOFEZNAAYSTFHSSQLM");

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
    msg.setTimeStamp(0.8404007090794194);
    msg.setSource(60949U);
    msg.setSourceEntity(61U);
    msg.setDestination(58872U);
    msg.setDestinationEntity(58U);
    msg.req_id = 48555U;
    msg.status = 175U;
    msg.range = 0.1780303518212053;
    msg.info.assign("KLOLKAMSEMUSTJAZLUKKAWBWMQBOHBFEZXXOKOUKWUGOWRXPN");

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
    msg.setTimeStamp(0.05567355484939995);
    msg.setSource(5022U);
    msg.setSourceEntity(163U);
    msg.setDestination(46835U);
    msg.setDestinationEntity(103U);
    msg.req_id = 57061U;
    msg.status = 203U;
    msg.range = 0.5108570335141678;
    msg.info.assign("ZEUYOUBTXBNFKNNTSVXWELLVASWZHXQAWCTOKGVAIDTQPDMQRMXFVGKGDHJSIJVCTPUYHRITFJCSVKYOGMQXRVWIRPDYZIDBOXJKQUSUFAZWFNZOHVEGORAAKWWDHXQYMBHNWLQZIUXENZCFECUERHDJBJEDVXFBYCIRLMAOJDHZPGGYYSGAPLGYPIUPOZMWKBSMCLUR");

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
    msg.setTimeStamp(0.9186602911402632);
    msg.setSource(64502U);
    msg.setSourceEntity(125U);
    msg.setDestination(48090U);
    msg.setDestinationEntity(193U);
    msg.req_id = 64888U;
    msg.destination.assign("YTDQGWMHZJOGUKANTUTEHGXBMSKOHGJQYVRNOOXBKNMSXMYFSPNJODVZJFPOMSDRLKSFIIPQRPWLXJOZQQYLSDRFRABXCJPGIILHDCQVPMVMYDRJUOYVSIBNCDJU");
    msg.timeout = 0.915867047459397;
    msg.sms_text.assign("CUCMUXQFRHLLLBGEWOIOPVZYKHEMVZQKIDABFVPWHSNMDDYBCIJQKRIJZIXJJDVLINJWPKHYKVWKRJRBTDMNJBXFEZAYHOSGFMNYCATCPJWPBLYXBXNVFWCTRUHDPPSSEHIMVBKQOOHSAYUJQTCZDDIFNHXOZMUXARRGBRQQDSLQFUMGWAAGSTA");

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
    msg.setTimeStamp(0.15559476050305387);
    msg.setSource(58703U);
    msg.setSourceEntity(113U);
    msg.setDestination(38706U);
    msg.setDestinationEntity(23U);
    msg.req_id = 30342U;
    msg.destination.assign("UOOFLUTKNAOEEZUCWSYFNFSLEYQIGEQTFMXWHPVGVYOIPRJXHALMYMCIDXZIBUATVAELTGXVZLZNDMDZDBHKIMJEDFRCCPSWXHEESNAVJVYGOGQCNUVLYDHQIFLIINRLHEGFBJSBIRFUQROXRHFXJBCPKKATUGRAHVBGWSGFSHIZPYKMVQYPDWZXKBQKBQWGNTPZCURDTMUMVZNWNOJSOJKZCTXYASPSBHMWMPWJCDRKTLBOCRLETNOQPYAAD");
    msg.timeout = 0.8048136035468002;
    msg.sms_text.assign("YAZLDRMUKMRUANCRQEOQPFHCJJOTLTZHHSSXDPMOGKWWRILMZURLXDHYDBIYCNPTQZTEWWYCMFDPPMZSSHOPKNHTKCAXSIVALVGJKCNYLBEGIGZWEAIZBLMBGNJRSQEKUVYQUXCUMAPCXJAGQOOEMLPLTRBCFNDUVFWVEFTNVQRNMZIFJXOWWZAIABSUIFDVTBOVYPEAVGQJDGOXEZHLFBXXDDUBSKIWEKWGCHNYHISUHKRRPYNFGB");

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
    msg.setTimeStamp(0.2727124011743016);
    msg.setSource(63196U);
    msg.setSourceEntity(239U);
    msg.setDestination(1863U);
    msg.setDestinationEntity(7U);
    msg.req_id = 46303U;
    msg.destination.assign("OANANYEIQTUPDEIDLZOJURVZCMIZZKRTXFVOEWDWULBMUXANIBYXGZACYZPOTSKELNDWMGCBB");
    msg.timeout = 0.5267993850643546;
    msg.sms_text.assign("DHIJXMCQIKHJTNWJLRRMNIAZWOFCGELWYBAZRIXQMRWKJUYWUWXQPPYDOBTFYBXNOPCLPFLHNSFVFMFVMCLKMJVOGHGPWYEDDBGKOLYKYISEVJHZXBFPFKDEEMTOTGKELVDQZEYKBDUJRUVVPDOFTUAECBZWFTSSRAQIXSZWONVVMXSYOJ");

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
    msg.setTimeStamp(0.8827233313097771);
    msg.setSource(46177U);
    msg.setSourceEntity(140U);
    msg.setDestination(16258U);
    msg.setDestinationEntity(81U);
    msg.req_id = 7967U;
    msg.status = 227U;
    msg.info.assign("WWBEUJYTTPVYCJVYVBZDLLYIQACHYNPOXHGHXZIFZKEWVJNJWCZDSFEHNGRRGXZEZDMQAEPDRRLIOCWXFUKMKERRMVWZXQMTNMPVTGUQZ");

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
    msg.setTimeStamp(0.7049998722865579);
    msg.setSource(24293U);
    msg.setSourceEntity(156U);
    msg.setDestination(32683U);
    msg.setDestinationEntity(204U);
    msg.req_id = 23262U;
    msg.status = 47U;
    msg.info.assign("SYCFRKQFVVTQVESVNSNJWZECUXREZHRKVBEVFYNZFBFUUHPSPILSCEPAYUKTZIMGCLIHFMOXCQWUOTLIPJDNDLICBRXFGKPUYVNGCBTQQOJQPXJDKZCAMDGOYLSHBCFPXZQJBJXXORZXRYCTEQWAJTUJGELVFSOXTBELAQIQGN");

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
    msg.setTimeStamp(0.43872447650333646);
    msg.setSource(9058U);
    msg.setSourceEntity(249U);
    msg.setDestination(50795U);
    msg.setDestinationEntity(78U);
    msg.req_id = 26002U;
    msg.status = 223U;
    msg.info.assign("RGEHCVLPNQRTOYHRCKYDYBAUDLMNDEEMEORZIJQWTOUXYARBZKFIXSIDJQGBWBDTETKJLXHTUCFAIUJEIONDZPVFAWOYNXKRPJBQ");

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
    msg.setTimeStamp(0.13781010179762698);
    msg.setSource(32999U);
    msg.setSourceEntity(69U);
    msg.setDestination(11736U);
    msg.setDestinationEntity(68U);
    msg.state = 246U;

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
    msg.setTimeStamp(0.2479779594997804);
    msg.setSource(20171U);
    msg.setSourceEntity(22U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(176U);
    msg.state = 158U;

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
    msg.setTimeStamp(0.5917641916192339);
    msg.setSource(54344U);
    msg.setSourceEntity(201U);
    msg.setDestination(61064U);
    msg.setDestinationEntity(215U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.20461825843620562);
    msg.setSource(33253U);
    msg.setSourceEntity(87U);
    msg.setDestination(7786U);
    msg.setDestinationEntity(60U);
    msg.state = 63U;

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
    msg.setTimeStamp(0.4320553291462226);
    msg.setSource(32746U);
    msg.setSourceEntity(248U);
    msg.setDestination(228U);
    msg.setDestinationEntity(71U);
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
    msg.setTimeStamp(0.8674062545993705);
    msg.setSource(61804U);
    msg.setSourceEntity(217U);
    msg.setDestination(17888U);
    msg.setDestinationEntity(148U);
    msg.state = 190U;

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
    msg.setTimeStamp(0.744589058207702);
    msg.setSource(10868U);
    msg.setSourceEntity(202U);
    msg.setDestination(11568U);
    msg.setDestinationEntity(119U);
    msg.req_id = 50384U;
    msg.destination.assign("RKLWOMUQVSRGSWXDHTXAUFQIBJOIGSZTOQANEWSEKIHIWQZFVWVDUOXRYUIDTYDAACKKVCZJROBPQEHXHUYXFNDZAZAGQKBFKVZJHXJGRGWCXZANMUPTZNMLWINCOJLFUZKGBHDMFYIKEMRLHGYVXJSFCOOMDSGPTVZFEPALMTCBQTOTVWYFPBWCLYSLRPNRIUJHAELTBDIYCGYMVEJBOUJTFPQPKENSQDBJRIMHCQSKNYWULHNLNEC");
    msg.timeout = 0.9037522834144004;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.3053300853721487;
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
    msg.setTimeStamp(0.8496368184428292);
    msg.setSource(48546U);
    msg.setSourceEntity(57U);
    msg.setDestination(16942U);
    msg.setDestinationEntity(233U);
    msg.req_id = 4047U;
    msg.destination.assign("RZHSEQLFJOZQAQUHFEHHUBHKDNZSNHOABLHAQOMXUCXXWEPAKVMIKJQRDGJWTLJIPIFUIRNYXUWVYEGRZPVPYCBWKJOSTRXQIWNBN");
    msg.timeout = 0.32466074446484827;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 147U;
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
    msg.setTimeStamp(0.10633946673518457);
    msg.setSource(244U);
    msg.setSourceEntity(235U);
    msg.setDestination(8972U);
    msg.setDestinationEntity(199U);
    msg.req_id = 36899U;
    msg.destination.assign("BZOYXATQRXQTZZVLI");
    msg.timeout = 0.9715343940444475;
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.6594525731017928);
    msg.setSource(22575U);
    msg.setSourceEntity(7U);
    msg.setDestination(26647U);
    msg.setDestinationEntity(123U);
    msg.req_id = 3769U;
    msg.status = 137U;
    msg.info.assign("TJDKYNFCBRKHUDFMTNGVMYEPEQBMAOMEYWJFUVQWOYQLPJINXIAPZIHOVSCVBZOXADXMIZYSQDSVUBQQMFYZCJOWROXCVPUQAOSRAXRGXPFKUJHBVDDVCFKLDZWJRNZHNDOVWBDRPGJNRJKGLSSNOGPDLRCXGHETUJQTEZXRLHQITEHGALNNAYF");

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
    msg.setTimeStamp(0.36564969846937223);
    msg.setSource(13642U);
    msg.setSourceEntity(146U);
    msg.setDestination(25521U);
    msg.setDestinationEntity(53U);
    msg.req_id = 13692U;
    msg.status = 79U;
    msg.info.assign("GQTZUVTFCJQANTMOFEAOOJVDIWDTAHBDBIGFKGVJYUEY");

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
    msg.setTimeStamp(0.9719221629976514);
    msg.setSource(11081U);
    msg.setSourceEntity(21U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(164U);
    msg.req_id = 63296U;
    msg.status = 20U;
    msg.info.assign("ATKOVSIKBQXBIYQVFDWINBNVCZPKESTMPVPLHGZQCJWVUUESSSNDADSEIJNWUBMZHXKDXOZHZJAVNVOERALOFQFRHOFLFDGVFJIXDXEEUZHQRMVLIATDAKKLPUMWSNJJGUHUMOYTTHYPOGXSBMQ");

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
    msg.setTimeStamp(0.3532262916309551);
    msg.setSource(25869U);
    msg.setSourceEntity(194U);
    msg.setDestination(46372U);
    msg.setDestinationEntity(233U);
    msg.name.assign("MQSNBZEPZSYAHELRHNLTKCPIHWDLZSOHTKCBAJEEMYUYDRNEU");
    msg.report_time = 0.07503256622575605;
    msg.medium = 242U;
    msg.lat = 0.4908810538299313;
    msg.lon = 0.8022530112589581;
    msg.depth = 0.1788869325078153;
    msg.alt = 0.9250861250892157;
    msg.sog = 0.05369781912336058;
    msg.cog = 0.7656158392341346;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.32105511893856786);
    msg.setSource(32436U);
    msg.setSourceEntity(115U);
    msg.setDestination(41859U);
    msg.setDestinationEntity(69U);
    msg.name.assign("FALNEBGQTVDKNIPKVPZIDCXBQJFEZAPUNXH");
    msg.report_time = 0.10493681156937551;
    msg.medium = 253U;
    msg.lat = 0.3827235330932611;
    msg.lon = 0.3557184376411733;
    msg.depth = 0.9192405467372896;
    msg.alt = 0.4005088078977169;
    msg.sog = 0.3334706727983824;
    msg.cog = 0.37412055220432583;

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
    msg.setTimeStamp(0.44747809708728825);
    msg.setSource(42313U);
    msg.setSourceEntity(81U);
    msg.setDestination(46082U);
    msg.setDestinationEntity(57U);
    msg.name.assign("PRTXIGDFHZUSBUNVVOLAYSVPDQFIARUDRJGZZYBBMEDHX");
    msg.report_time = 0.8793462858834625;
    msg.medium = 8U;
    msg.lat = 0.5639632263198682;
    msg.lon = 0.8386188136069537;
    msg.depth = 0.5281396041447509;
    msg.alt = 0.4875629499632429;
    msg.sog = 0.13771355203055835;
    msg.cog = 0.047100823716562545;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.036762488888196554;
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
    msg.setTimeStamp(0.894335380774393);
    msg.setSource(12722U);
    msg.setSourceEntity(165U);
    msg.setDestination(26487U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.9727259256482095);
    msg.setSource(63173U);
    msg.setSourceEntity(58U);
    msg.setDestination(56020U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.9186736467806615);
    msg.setSource(63260U);
    msg.setSourceEntity(65U);
    msg.setDestination(10321U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.5741052352541415);
    msg.setSource(56900U);
    msg.setSourceEntity(248U);
    msg.setDestination(51436U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("VGEFDEFOAZHHSRCNHSYZZ");
    msg.description.assign("VKMCVEKDMSULBUOSNEILFVIMJZVSWRVWPWBGEATSFBPEBMMCNLZWLJLPZNTKYQZ");
    msg.vnamespace.assign("HGVHPSMAXHDPWWBMXWTSBXLBYVQDCAKWPYNOWZMYXEXIPIYDEQFMRLRV");
    msg.start_man_id.assign("OKSTFHZZDFXEMIGPLTAJAMGYKHTYZMQUOGZKPHWWDKTBJXBFIQVTEMCEKCIANDDJFLZVQJCWCBYNISFQSOABQQDABOIXQMIPKDGRZTMUSAFGISHYOBQARPQRZFBHTDBUNVRACNUWEVLLDYEQWTOJCGJNKRHUMEXUUGPXCVBUXAEJNWZRBDJXRPYLENYDXKIUPWUZTLIYMYOMR");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 43344U;
    tmp_msg_0.lat = 0.7397134222878886;
    tmp_msg_0.lon = 0.1302953615847835;
    tmp_msg_0.z = 0.5028650034779986;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.speed = 0.11395706626799174;
    tmp_msg_0.speed_units = 2U;
    tmp_msg_0.roll = 0.6981713776401889;
    tmp_msg_0.pitch = 0.13025652929997933;
    tmp_msg_0.yaw = 0.8727807612096458;
    tmp_msg_0.custom.assign("TXTDGWFHNRCEOEPDTGEYSVSFEUKVJXIRDUJHYGVNQMBRGGOYOHFTFUJJDGZUHSQZAYUBVDGOCNNVPONBJCLXLHYTDKUVURBPMQAFNNGPPAOIXHKRPFJECWPSZCCZDJPWPQRDPRTBWJKMAHZHMXKFUUWIBRIDTCBKRAOENZLAITKKXWEECXSANWMYQLRWMWYEMQSJGYIZTASKBOILHQVXXNZ");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.91124354659903);
    msg.setSource(49494U);
    msg.setSourceEntity(70U);
    msg.setDestination(38391U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("RIIUOBUNPORCEGEMSRPRTEVELBHCDHYLJNKKGWLMQYAJCMFRPPOEDPXXVFOWECOHDBVISQHSDTLNKAZOPFTKTMIAPCXDVFCEUUGSOGQYKLJWBZJVDFWXXUWBXABQGQZWKBYVMSNHXJYGNRKDULWCQHGQZRSASHZMICVWWOKQZXMBSSEUGJTZAKJLNCHMJWVZARJLINOLZMUYDDPGYPAPTVHFO");
    msg.description.assign("BPISKKTMSZTPWTFPKBOXVGLMWPMERUXCHZCAIJZUVQAOAZPHFUFSJATEWNWDVTOKFLJMFQGXBGCUYAIGTPVHDNJBBIKZXECEOADWQJFLNOOWWRCJOYBOSH");
    msg.vnamespace.assign("OCEEVQHAMZNYKGMVBWLVZNLERBVEHLKUENUDDWZXZNVRQGBWXJOXTQLYIRNVJIUEABNGGCZZPAXCOYBQQZSXVMQENYXTHXSGNFTCOPAUDFPPTRUFSROSMKSERAXWMJITDBSNQSSMVPRDLTWUVDCPHOWQJJOSGBRXK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XBBRHEJAILSGULDSBCYUNABNPWLXSOCFGCSPAFVYQFVCWOGHDOZAWXMQMTZSNEZAJZQTBVHKKINTVGMTMWYGDNUAHRIKYJEQEFSPRQQDFZZRLPKMGVZMMSHKDCDFZNSJONXXCYCHDFETQPXFBJCAJKPEGUNTUUUHSXNHOTWTJTDLMOIXWWGJYIXLHLNRIOGVYJIPAKCKITZWWCOQFMYUVWBDMDQYY");
    tmp_msg_0.value.assign("JDEWAPCOTKKVTNPIQWXRKPVNPFSBTAGVUMQUFNRJOKYNSXEQIPWDOTJUVNMXKPZSZKUXCHQYSTYWTARNAZQDUXMRIEIIJZVTMBXRGERUWRDSEUXFKHPMULLCZQMWFJOXIOSIBDVFVBEWDFFYWAACGCFGABSRWYOSVGPZLCXGRQHWZACLDLUSOCTMHPJT");
    tmp_msg_0.type = 97U;
    tmp_msg_0.access = 189U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VMPDDICDOUMJSBAXALGSZZAOVTCQGEIPYIZMHFLNXLAOJWCZYGNVUBHZBPLASGJBHKEELTLJECZBPDTXBPZBDPZNBQOVWPROLKGYNOEWLMVASUWIGPUAUITHFDQISHOEESGNUTTKWKOSMYAWRRMMXQCGIMVJWMOYWRN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZWVJWFXUOZGQDHOWCRQAUOGOQFUGULINKJFVPIUWPRRYDKSTXYKZILHRGYLBBECLV");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("GFQZLJLJSQCAHMKLKOZGBEOSXVYQBVYAJRJITXZYCPLEHXSNVBIMFJUYYAUXOFKUNWMQBEPAUWTEWHIVWJTVRUXBMLKGPCATTCDRJOPEPULIVKWPDISHNHODPUXNHMODMLYFGDZEDIFOSDRJNAQBQBFNQNVIBZEEUXGZWMWTTECYOQRNZJYVZHCRYTOZSBVJWSDYNKQGSMNGIAPEFCCGX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::IridiumMsgRx tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.origin.assign("TWHWJYXKNMLEJCSIRNKBMMVDHZZSHBATCKRDPOQCQMPOHFLWUUAKOXPLLFGZEUSCGZEZKL");
    tmp_tmp_msg_1_1.htime = 0.7835125582278404;
    tmp_tmp_msg_1_1.lat = 0.8035521871239535;
    tmp_tmp_msg_1_1.lon = 0.4888110394044678;
    const char tmp_tmp_tmp_msg_1_1_0[] = {72, -119, 42, -69, 37, 125, -104, -8, 40, 14, 0, 59, 91, -95, 17, -113, -76, -107, 67, 80, -82, -38, 102, -121, 125, -69, 31, -67, -14, 123, -98, -6, -19, -87, -75, 93, -62, -52, 87, 65, 91, 57, -44, -29, 84, -71, -109, 106, 93, -42, -14, 25, -64, 50, 8, -14, 118, 78, -12, -82, -44, 70, 65, -59, 118, 7, 29, -20, -104, 58, 61, -32, 63, -13, -59, 32, 107, 67, 90, 82, 12, -17, 92, 29, -114, 98, 63, 19, 27, -47, 6, -8, 18, 126, 86, -73, 0, -28, 102, -123, 45, 49, 8, -40, 31, -5, 100, 42, 27, -100, 118, -46, 9, -107, -81, -103, -125, -68, 42, 62, -124, -128, 74, 25, -97, -47, 3, -84, -37, 122, -13, 18, 74, 8, 73, 13, -43, -57, -31, -117, -6, 88, -3, -32, 72, -20, -50, 118, -85, -110, -115, 102, 1, -23, -103, 50, -120, 39, 61, -17, 54, 115, 114, -37, 76, 121, 32, -70, -121, -26, -87, 73, 88, 71, 65, -123, 121, -46, 29, -51, -27, 1, -40, 29, -10, -39, -18, 74, -107, 51, 0};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("WPUCECECXLHWBBUFNIVNSDFCSAVSQSAWYEYZJ");
    tmp_msg_2.dest_man.assign("HCVISPRSEJIXKNEFXUGMLMOGOHUCHBCOKXXXYIGKEYTUGAWZILLRZGGEANHFWOASMUDRCWQQEZBDBRPLCABMQBOZKIIFFVVDSCPUFPTVSTMHVNTTLRKWHDZAEQXVZFWYVPPHVOTJJRSGUUSDOTGANLJMBDXQWJONCJYFJBPLZRYACOHLCIIAWABPVXNGYWWETKNUUCLQMNDMAYHXNRYKEKRPQFTJVWMZEIDXJQMJSBYRLTBFZSQHKEOINGFD");
    tmp_msg_2.conditions.assign("LTGBPTUICWSMLARNROGWWYTXLZOUTBHVMOBQAXCSPV");
    IMC::NSBState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.path_param = 0.854498272869415;
    tmp_tmp_msg_2_0.x = 0.7808507747627272;
    tmp_tmp_msg_2_0.y = 0.19397990816754285;
    tmp_tmp_msg_2_0.z = 0.13453184264491835;
    tmp_tmp_msg_2_0.r_f = 0.9530729316514672;
    tmp_tmp_msg_2_0.p = 0.8556955109845192;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::MsgList tmp_msg_3;
    IMC::NavigationUncertainty tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.x = 0.5983559140052775;
    tmp_tmp_msg_3_0.y = 0.4465776458954477;
    tmp_tmp_msg_3_0.z = 0.6279714396472887;
    tmp_tmp_msg_3_0.phi = 0.3032570420061511;
    tmp_tmp_msg_3_0.theta = 0.8947370488156325;
    tmp_tmp_msg_3_0.psi = 0.18045642569222886;
    tmp_tmp_msg_3_0.p = 0.7072849292099378;
    tmp_tmp_msg_3_0.q = 0.3231461930138029;
    tmp_tmp_msg_3_0.r = 0.2760230016727333;
    tmp_tmp_msg_3_0.u = 0.9955269770716667;
    tmp_tmp_msg_3_0.v = 0.432390140458366;
    tmp_tmp_msg_3_0.w = 0.7286816858877441;
    tmp_tmp_msg_3_0.bias_psi = 0.4929872679131443;
    tmp_tmp_msg_3_0.bias_r = 0.2551017559176064;
    tmp_msg_3.msgs.push_back(tmp_tmp_msg_3_0);
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
    msg.setTimeStamp(0.7817372713551911);
    msg.setSource(9573U);
    msg.setSourceEntity(88U);
    msg.setDestination(54965U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("OIQFDVSJNBFVKENGHAGOHMAYCPJIGFFMEFJHJMKHAZYUIWDDPBKKIYLGWIBWGZSRGIVVPWMNCCLSUGZSATBQVLWCWMXRJFBNYYYOASPUMEZ");
    msg.description.assign("SBTQYMTJXBLBJIOUPFZRVKEFZIACWHWRSHFLZLGFQBEFIELYGAJJDCWXKSLDWBHNCOMCYFAUCRWNRGBLKOLZSDUSTTTYRBQLXPYZMJRQFVWRTGEPNAVGENIJCWXLMPNZUQVVFZPOVGDVBNXJDFOWC");
    msg.vnamespace.assign("BDEAXTKFJMWZFKTWDUMHQWHCQFYKCDOPVPTSPJVTTQUAPCKSUYBOGMEBSYMYNHRLWGXJYJDKUHNUZYQZHTJALLMIYACAXZRIGXSXYBRZRINBDUXIQLWFRFMVCJBQQFWSVLO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZFGGQUNCHIPIRQAWJ");
    tmp_msg_0.value.assign("XDCKWMHTWXEQJPVDZXAQCFYKJ");
    tmp_msg_0.type = 76U;
    tmp_msg_0.access = 60U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DTQTLKSBSSQNWTAHQCWVWJGOFLTPGPUVSSRPHMRCCXHHLTNGYDEDAUMMDOCIPMQYINVJAZEITJPXAYUSZBXAEPIOTOMQDJFANDDXLSLGUMGCUOWRFKZTSWZZBBJNEWOUIRFKJMIIQLQRYKTFLERDPAGOGBVCIGEKNYVVGVBCDNGESFYHYJTY");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JCXFUZNLPIRKFBWYEVSJHGOVGGTNVPQLBDHHRDUQSZWDRQBZLQOWROGEZKXJTJLPJBTVUAKJTIGHUBQZEKUMFNDHUDKYXFIJCKCYLMDPHYCSXPXNCXFLFULFYPCIDOMJWCSXHKQVQEZQTDMQYORFOPYXOAKLLZBENBGUFZWMJSBHITASVXEAEDATHEGBIYAWHOCVIWBAWYMTZISIADAENOPCGVMATWURTFMNCMNG");
    tmp_msg_1.dest_man.assign("GOUPSDBWORTPEJPWJMBLYDOQEHLFVVCZNQQAQHKWLIFAUOTDLVWPANBMFLQYFUTOHMVDXKQJNYPUZXBCJXHESFALYZMFZZBRQWU");
    tmp_msg_1.conditions.assign("ZASLWYIOPYCGPQJRIQGUEDSBEESICOHNSRDQTBXPGUQHCXDQKZIUAOJLYNYEFKOBKLNXVXKCYCEFJJOTOTIMKWVIMTNIYMUNDSMAZ");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9307523925289599);
    msg.setSource(51253U);
    msg.setSourceEntity(121U);
    msg.setDestination(62817U);
    msg.setDestinationEntity(233U);
    msg.maneuver_id.assign("NTYHLNZAOXBHZLYCBQDVTPGJPTGIFVUKFOPYKOTQLFUFYOSXEYVLARLWEHNDBEWVNZAKVQILKWPZGDXBPQWDKAOFHGQDSPWRUMLGLFQMXORNIJKDGEFEMYJMAUCVTVHIURDXDVVJPTAXJBRHGCMWUBCZPSWCKDRQGSSPIOTBHGEURSOJNWJEMTXAXMBSMBXUOZYNUDCCNNHYOJSHEYYZWAVIKJZPRHFIEZTUJLGF");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 34045U;
    tmp_msg_0.lat = 0.1387894392949358;
    tmp_msg_0.lon = 0.5181929262944515;
    tmp_msg_0.z = 0.39199603348412515;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.duration = 58116U;
    tmp_msg_0.speed = 0.35889408560177727;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.type = 203U;
    tmp_msg_0.radius = 0.5686682368274463;
    tmp_msg_0.length = 0.38750660950276217;
    tmp_msg_0.bearing = 0.5940766075750441;
    tmp_msg_0.direction = 90U;
    tmp_msg_0.custom.assign("NRZCYFQCUMAWSBIKVXZRNWSTLULUKVVQKEBYIBHSDNMGALRFAJJXHQXPTPAPXYORQSAHXVLSEWDKLFGUQLBFXYFTDJXCMWOAJCIQTEKSZCBUODUWVZDWGIYSRZVLJOXKGMQMPZAZCOTPPNDUYIFDPYFHKWAVHVNJSZWIMJHPQVOHBTMBD");
    msg.data.set(tmp_msg_0);
    IMC::ArmingState tmp_msg_1;
    tmp_msg_1.state = 10U;
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
    msg.setTimeStamp(0.7283177674565255);
    msg.setSource(49169U);
    msg.setSourceEntity(6U);
    msg.setDestination(58350U);
    msg.setDestinationEntity(207U);
    msg.maneuver_id.assign("FIQDQRCSRLAHOFFTSUKMDRZTGXUCJLGS");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 47714U;
    tmp_msg_0.lat = 0.08520827402663067;
    tmp_msg_0.lon = 0.10766254582560975;
    tmp_msg_0.z = 0.6423795021346956;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.speed = 0.7399811915690555;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.bearing = 0.6892427021963496;
    tmp_msg_0.cross_angle = 0.046157514292630264;
    tmp_msg_0.width = 0.5570181002255703;
    tmp_msg_0.length = 0.23408959103343008;
    tmp_msg_0.hstep = 0.2441898687131986;
    tmp_msg_0.coff = 84U;
    tmp_msg_0.alternation = 171U;
    tmp_msg_0.flags = 162U;
    tmp_msg_0.custom.assign("IVKXPCVWADRZOXLRUEJOZGNNGPVXMDMYYQZFBWMMWUPIWDJZFUMIEAHRNERBIYOSFNJEVJGDXIRCTMKONBEZYFZHJQIZZCKOPCHXGXTGHQRUWAJBWGQPANSLEHMKIUWTPYRHQVLRWSUQXKHBJPG");
    msg.data.set(tmp_msg_0);
    IMC::UsblAnglesExtended tmp_msg_1;
    tmp_msg_1.target.assign("JUGQGTUBCCAZEKEMAUNNSQJVDTTYFPZRQETOTKWYVPSKXFPDJCKRNABCGLNPOEDLRMWUUIXPSBRZHOSXUDZNGMLQZHDFZKTLSOUNTWBIHSWMOJFXQPIYDHFAAMIFYEJGRQEETRJJSVNBSEGTBQRAKQIFSCFGPMHLYGPGAHHHUBDARDXVOVQIZNIIZMDNWMCJLRWXFKYNMVZCAJCP");
    tmp_msg_1.lbearing = 0.5749409012090303;
    tmp_msg_1.lelevation = 0.13727844809661927;
    tmp_msg_1.bearing = 0.5450489670146889;
    tmp_msg_1.elevation = 0.25680858863911704;
    tmp_msg_1.phi = 0.7722091845067544;
    tmp_msg_1.theta = 0.20909797477462355;
    tmp_msg_1.psi = 0.9099031428439016;
    tmp_msg_1.accuracy = 0.07632403044198321;
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
    msg.setTimeStamp(0.5802745391978705);
    msg.setSource(50996U);
    msg.setSourceEntity(106U);
    msg.setDestination(42232U);
    msg.setDestinationEntity(61U);
    msg.maneuver_id.assign("CYLYDVMKMALOTKTCQSBBFIWGAFVZZQXWLDIWXJLVPUIXYGLEEIMSNDGQOILEQIPXSHWDPTNNOZMDNPEGQFZRNTFOWCJUFPXKSAABENZLRJUQKKWBKSYJPJAJ");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7967885546012554;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 43850U;
    tmp_msg_0.custom.assign("IOALUMJOXEQJDLOQJGZMVQEHIEBXYOTLQZVQNBTXNDRVDARBKWMNYQCHMBHFNNVCZWMTSDCFVSEDZJJYUUTCPHGPMHRZZTGHXGGOKQLEPARTDEUPFAGNPVKAFGZALNIOQFSROBRBCHNRWDHTQMIMSICC");
    msg.data.set(tmp_msg_0);
    IMC::UamTxStatus tmp_msg_1;
    tmp_msg_1.seq = 53479U;
    tmp_msg_1.value = 102U;
    tmp_msg_1.error.assign("XAIWIZHSPZNBPKFMGAJJC");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SonarData tmp_msg_2;
    tmp_msg_2.type = 85U;
    tmp_msg_2.frequency = 3166260873U;
    tmp_msg_2.min_range = 8087U;
    tmp_msg_2.max_range = 16438U;
    tmp_msg_2.bits_per_point = 107U;
    tmp_msg_2.scale_factor = 0.3849103797500012;
    const char tmp_tmp_msg_2_0[] = {5, -29, -89, 43, -123, 22, -35, -37, -12, -55, 72, 42, 114, 51, 71, 112, -59, -87, 106, -19, 80, 40, -29, 60, -117, 99, 61, 93, 110, 12, -59, -102, 10, -18, 73, 66, -115, 2, -75, 5, 2, -41, 41, -74, 49, 83, -25, 27, 71, 19, 105, -33, 106, -3, -122, 115, -11, 3, -116, 38, -45, -1, -116, -116, -97, -43, -106, 87, -26, 19, 100, -1, -36, 116, 47, -86};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.005188612985258634);
    msg.setSource(985U);
    msg.setSourceEntity(242U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(27U);
    msg.source_man.assign("YOGWPJFVXBIBCBVDJCRZUUGMXZVMSZIQBSSBHDCXNSYCWYUYPREMVOJNZEXRPFQYULHRGLFDQUODWQCIGKGEJUUALSWUTQPRCEXHKHRBFHCKXSXHQKAGTMFNACCPWUHGEUOOIOFMPZTJMLQFTTIATBWKTWYDHHDZHSMIQLILVNOYOIGZKOVPTWGEAKESTYAVF");
    msg.dest_man.assign("LVXOCHIYSRSWVBCGCGSMSIULUAWLZTODNVTXDGVUUHXFLEWVVCJQZMJVEGQCKYEHSCRMEKQOTYYYPLGRQKBFOGRLRFORIWUPWEIZPJAZKYNFWNSDAKIDYTZRPQSFQDBPMW");
    msg.conditions.assign("HZTNCKMAEBUOWEWYQDSIOQQMWULREPGXSBSNTYLZRRVXDRZCWFDWGBNNQYMISUOIPBJFFQEMXLUULVAAKKI");

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
    msg.setTimeStamp(0.4138380375552697);
    msg.setSource(19441U);
    msg.setSourceEntity(113U);
    msg.setDestination(10054U);
    msg.setDestinationEntity(225U);
    msg.source_man.assign("NYHTPYRPCKTOLRXYIUOMJPSTDGACUQPGKGOBGGPFUBYXBZKIQPWMVJDIQWCANJIMGXZFREQROCXDYXOFNLHMVHZZSNTSTEBGFMQKHJRYIFFBEYSSTAUMIPQBXADLCWKORITFUJIKJBQVYFAZVCEVCRHPBDGNWWVOEE");
    msg.dest_man.assign("VTBLTAFNGMIYFWSHYPUCUHSJNEMEGMOTPTUKOZGQPCWYDBORIBKPYGUPVBDIURTBEXCIFQIXSCWTNMHGEADJOVLNFMVANMMFAQDZVEDCIVPMXHMDWRORRKAZCREXQYJUQXNJHOVDOOUZGESAAIURCP");
    msg.conditions.assign("QAJGYTBPGEPRDHVMWOQGLLTWLQXUHZCRCETUDFMQQXPAKWTNQRLSHVNYGFATRBEBKFRLUAAADNZZ");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("SVVGACHTEIYMLBMRWSCUMTXGFVKOGIJHZLVTWRQQQDEWFKNEXJDNIJOPVMHANYSLTGFFOCBTVHBSOJWFRKMJWQEWNMLUGPUMKQHBZLPNCEVLZXQRXAYHYSPSHKYOVBLUDNQPKXHCRDJUCBENGIAPMPZZXADSKYCQQAIHGGPZWENBPJRUVCFJCDSIJFXTTNEWOFQFBRPUSBAZOALWUJYUKOAFAYHCDOGZITDIIXXMNIRRYL");
    tmp_msg_0.lat = 0.8946858400352773;
    tmp_msg_0.lon = 0.8911877235497018;
    tmp_msg_0.z = 0.18811706100445702;
    tmp_msg_0.z_units = 221U;
    tmp_msg_0.cog = 0.8877978531966556;
    tmp_msg_0.sog = 0.9608691166795369;
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
    msg.setTimeStamp(0.005983269565404181);
    msg.setSource(7410U);
    msg.setSourceEntity(184U);
    msg.setDestination(43096U);
    msg.setDestinationEntity(193U);
    msg.source_man.assign("ZWTMLOQHUUEWLKOYRTTXLEPHQVGGTONLMISXLZMMGQARCDWGHPCRACDMDTPTWBNVBRENDDJFMFFLFRIVSEYEZJXZSZEIAGBPHCFZADSJGGCBKPUEHJQYAFLAUXBWOKTEUSTXOCOHZNJWRYIJQPPNPSYGYP");
    msg.dest_man.assign("LAGLZFXYQMKSBJWUEAONCXXVHONGRYBNDQPRNNSXLAGRAFMKYQMHGN");
    msg.conditions.assign("ZEKGZYFAQVEQSMIYSBYKLUFXNIBJTYVAVPTZGNOZOMPAKHRWBTOJVFKQUAADQDNVIBAESPTKQJBNTRNDRVDNUYJNSHXRQCWDHGCDASXGILZEXIPBZJWOIYJYFJMLMWGQZQOSMPLYCEDUCLKHWZBDRHGIIHWUXPUGMCOUSVJIYTWTKUBPCENLXURULZBSAMLDPXXOSTVKCGZMQEOWWVEHEVFMXGAOFGRONTJXHE");

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
    msg.setTimeStamp(0.16011819880916556);
    msg.setSource(5106U);
    msg.setSourceEntity(118U);
    msg.setDestination(65249U);
    msg.setDestinationEntity(83U);
    msg.command = 145U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FYOGPXWAXEZEWHRWPYKIYJDXBXZXYUGHZNEERSLJOGFQAAGBHDJDEGPYNPTJWOSAZZPFSUVMLKYCWQZFCZSNVARPPNVQJQJQUBAQRKDQHYCOSBSVXEMIAIHHFSDGBGLWZXOHKCTOKPKU");
    tmp_msg_0.description.assign("XOVXTOVBPGAYBOBVOLMZIYUCTEAYNSATRTYKXLUAQJEVKMUIHARBCEBTMUTALZFSZQLEDIKPQXUCDPEVPPGIJSBYVWXDONGGLBMUNWQMJJFSCJNETYMMNBZTWUSPYCMGWWDWZAVLAGEZJCXAQQGIQFWSAKLEMHCWFJUPFSQHEOGHBRFDFUYXDDINWCRKNOHHFTHIWCQUSSDPGR");
    tmp_msg_0.vnamespace.assign("VJWYTGFMSXZPPDKSLPPUZHUEJNPWGJRBNNLLWXJJDWUTADTONKRTRJDJHCNDDICIKQCWUBATHEHMRTMLFAHWO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LZHRCSTUJHMPVBZSDDDNYVGBNGTFJFBNEHIUIEXCQLLBZCEIRCWCW");
    tmp_tmp_msg_0_0.value.assign("NUVDIDWFBGTQXPADYANVVVJXHCWYMWUOZOPQBUGYMRRISVXHKMQFVMQTLCOTYSKKQMUNZWPJTQELLSJAZAEEMXYQKIPJXGUKAECIBYDPXCOVFGTAVNZPDMDUHLYEXIOXGSF");
    tmp_tmp_msg_0_0.type = 124U;
    tmp_tmp_msg_0_0.access = 217U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FERUHMCVYFDPNUGNMJQMJUOAEOYJZZCPAHVSPBWIEVHIEWTQQQHSRTAJQOCJFFZFRGGWLRCXFAXBVSTFIVUGKAKSQCRT");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("GULPRZFZWSMFVZEFDGALRFXRIZIVUPANKWWWIIPMTHNVCDJFQXRWICTDXVBSEULEHCOULWPURGCYDRXGQDCAZJFRYMJEXYTPSSMIUPETQGTDKQQTBOMEMDKAXSZQVGFVNAYGJSRQLBVPNULQKMRXCZOODRACPNWYSEMAGMFYAVHEIHICQNZJYHVOOJHBWXLYJGMUTKJUDHLXDW");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5491141599770415;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.25954690203271336;
    tmp_tmp_tmp_msg_0_1_0.z = 0.32086646612657665;
    tmp_tmp_tmp_msg_0_1_0.z_units = 108U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6425453562215129;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 80U;
    tmp_tmp_tmp_msg_0_1_0.start_time = 0.6400729245889034;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OJGLRXZDSKTXRYTWCWCFAJTPGDNXZEZYQXLNFAHAMSVMWNOEHBZRPFEBSSNSLXGBLWOAWDCGAREHCGAEBVTQUTAKBAJEVWMVPBDTBXPYHUPWKEHCLNOUNUJPJVRYKNSF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TCPRequest tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.req_id = 50861U;
    tmp_tmp_tmp_msg_0_1_1.destination.assign("XXHAUPEBVINGTRXSHJLZDYDPZQKQHUZUQIOAATBSENM");
    tmp_tmp_tmp_msg_0_1_1.timeout = 0.47325025325332515;
    IMC::StationKeepingExtended tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.31859517334515686;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.8340165054656402;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.z = 0.40734168536658655;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.z_units = 53U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.radius = 0.9632973323555664;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.duration = 62429U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.speed = 0.963154797419628;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.speed_units = 209U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.popup_period = 40821U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.popup_duration = 48672U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.flags = 66U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.custom.assign("FNOFECDKADCGLTYWPGZGCPLJQQTR");
    tmp_tmp_tmp_msg_0_1_1.msg_data.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("OZPJTIKEDBAWQHVNTHZXHIHIYKJTWWGYOLHZSDNFNISWDXUEEABOEZPVPCUPCCMLCPIBGXUAUDMMA");
    tmp_tmp_msg_0_2.dest_man.assign("DAMSEQKXKYHGQORCZRALRMTZEINFDQJENZBYZXSSVKXVGZIHUUNSULRFTIDYMTYIOYRSCPHWPHTAJPVHVACGIJDKQHKGNJCWJMZUBTOFHFZJNLPBDXOGRTCKEAGUHYZRDSQLQEKLLKYGMVWFHLMBEOPOUPWISDJEREFNTCONIXMMLKOVNC");
    tmp_tmp_msg_0_2.conditions.assign("HXLGVOJANKTWXQXKPQVHHAAJSMDHMMGLICOXYXEDZTVUCDDJKIGARBZNUKDVEFHFMSEFLQEWRZIFBQONDZAIRNHHMKJSJZEJRQXYBZQTPIAHCVOVMPEWSKVGUBRNFIYEVIQPES");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.7947351156306292);
    msg.setSource(50295U);
    msg.setSourceEntity(140U);
    msg.setDestination(30075U);
    msg.setDestinationEntity(56U);
    msg.command = 30U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YWGOFWVLKOIUTJXOCHZTQDTCKIDHNYMJLOOPNXTTBFRVILRLQIBSHFUYZSHXPBBRFEJQJJKPEGWMJQKAZJACAQCPOTCLKARHXBDFOSVCOFMEIHDHNULVNEGCBMMGPBAMUUFMYSDVIGZRLPVXNAXXSGRAGUBQPXLOVQWFWSNVBFEREVLMDUIKZYUFCZWNSBETSYIAUNJCHANOTSZDZWGXEDTRSMEWYVQZJYXW");
    tmp_msg_0.description.assign("CSGLXXWJXZVDOYPTOSAZFNXERYHHYNKEYESJGDZVXAKXDMUOWBNTPORVDQREBSIQMIMBOPXIJAWRBZGLUHTRFNODVSTNPUWAJOJHCXCMLPUHFJDLKOHGTJCIVKKTLQZORAMFNISNAZWFDBHUIYEVCCOKCPXGVPTRDLLULBKXUYNQISQUMYJAAGJZWESIRKUGCKLFEIBTEHMFEWZPGEKCDWWDYBZLAG");
    tmp_msg_0.vnamespace.assign("GKXXYXVAIQADEQLPYWTYZCZGGTAFZKQNSSUTCRJMZEZWSBYRMVOGIRPBCADVYHHZYOMKYYTRZDHMIOKHCHMSQIUSSMEVFLAGFJKHSB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BXEUJJNQFDIZNBYYIXPLEBAZIPBZHLSWVBQZGCJVPUODJNXFQLBOHRFSIDJLMYOAPRFBKVGVKLDARKVXDHWRXQPFVVNATME");
    tmp_tmp_msg_0_0.value.assign("EOTEDVRDQACYLDNOORZOSFSXAWFGUQMXWTCTPIEEJYCRZQQTBJUAXUKLXZIDEGXOYICWBGWUNRYSVGDFBDHNRLOZVNIFYTCRBXHISTUUUPGANZXLTDEOKRLHHMBKKWGJOVAMMJZBSVKSEYMLFKGPCLYAANDGCIAJUJNPWEMQSTPCIEUWQYIKFRMPMHKOKGZCSSGIYPLAQVFR");
    tmp_tmp_msg_0_0.type = 101U;
    tmp_tmp_msg_0_0.access = 122U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QMVAGCCJUOHAJNKOEGKYOLDLXAZQQSDJSYHLVYSPDDJFMRNWRSYHIAEEZTVZWIAUPSJWMQIUSZXXMUQQLORNPUBVOLHIVBJORWVAYSVIEFSZXJRZPKNNXTMGEXGWIGRHEAYYWAKLHNI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VCPCXUPUHFZUGXJIXTRZIBVSETZARKQNRSOOKLHLLTXCAXMVYOYXIMWXFIHQHMMIJDEWLHLRQMOQTOOCKZDBACPVJZTSCETIZJCUJAFAOJESSOTGLYTKVWFWFWXPBKPQDJONLFWUVDNLBYGPITPQWPDENZQQHNKDGNNRTAFUFMNDBKFAKBGWZEAVGABYLEKXYGHKRMLMIJZOGWFBDEPCMXWCSDY");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 34069U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.22676412395484902;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.4846965492757863;
    tmp_tmp_tmp_msg_0_1_0.z = 0.8463545535411454;
    tmp_tmp_tmp_msg_0_1_0.z_units = 22U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.8462818789448724;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.8224008442541738;
    tmp_tmp_tmp_msg_0_1_0.duration = 673U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9737318699909197;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 125U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.7854417690222651;
    tmp_tmp_tmp_msg_0_1_0.direction = 181U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ZZFRPKMMDFMVRUYAHPWIEWGCMMXBVJMTRVRZQHLYVQKQBZDTDPOKFQXPBVESPHFWQSSUNDDLWHOTAJLYMTBEDULBCJAIEWUABEEGPOOUSIAEJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::NavigationData tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.bias_psi = 0.7287207861025772;
    tmp_tmp_tmp_msg_0_1_1.bias_r = 0.4533286629225298;
    tmp_tmp_tmp_msg_0_1_1.cog = 0.5913358874357577;
    tmp_tmp_tmp_msg_0_1_1.cyaw = 0.8322170668775634;
    tmp_tmp_tmp_msg_0_1_1.lbl_rej_level = 0.8005754806575767;
    tmp_tmp_tmp_msg_0_1_1.gps_rej_level = 0.5401613546867414;
    tmp_tmp_tmp_msg_0_1_1.custom_x = 0.86519992072996;
    tmp_tmp_tmp_msg_0_1_1.custom_y = 0.497788106020694;
    tmp_tmp_tmp_msg_0_1_1.custom_z = 0.09454317974532422;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SmsState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 431965853U;
    tmp_tmp_msg_0_2.state = 0U;
    tmp_tmp_msg_0_2.error.assign("LWASARBHTMFMYGMQSUDXTCIAMYTWSOKQCHPHBZJBJEQVOWXGNOXPCXPRLQAKFYSPEYINPQKMFYFSZTQEJGAVFXWDHCXIPGHVRBTUUUJEDKFALOZXXLFEFGWSVKLZEBZFLCYAKIV");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Loiter tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 3936U;
    tmp_tmp_msg_0_3.lat = 0.9980875823157471;
    tmp_tmp_msg_0_3.lon = 0.11640167250427902;
    tmp_tmp_msg_0_3.z = 0.16413419350958713;
    tmp_tmp_msg_0_3.z_units = 248U;
    tmp_tmp_msg_0_3.duration = 40835U;
    tmp_tmp_msg_0_3.speed = 0.9175894737578254;
    tmp_tmp_msg_0_3.speed_units = 26U;
    tmp_tmp_msg_0_3.type = 225U;
    tmp_tmp_msg_0_3.radius = 0.48243505452478874;
    tmp_tmp_msg_0_3.length = 0.04417976670973778;
    tmp_tmp_msg_0_3.bearing = 0.5115967555988542;
    tmp_tmp_msg_0_3.direction = 6U;
    tmp_tmp_msg_0_3.custom.assign("RRSXPFYOWSNQALEHEMIWZIOFQRKUBAOAIFGRDKDGETKIIGYNNDKUDMUQUWKGEMKYNJYGJGFJYTLLVYPLQSIKLTJWPVWCCFPYVPTJJBWHTAUUFYYVGASTNMQNBXVJPHTZXBXPZCDOWDITSHEMSNZFMCOLMESBSCZZLMQXHPSGOXBJOZTALHDRIKDXBUNGHDCUANIM");
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
    msg.setTimeStamp(0.24333957718429877);
    msg.setSource(53990U);
    msg.setSourceEntity(8U);
    msg.setDestination(19110U);
    msg.setDestinationEntity(102U);
    msg.command = 17U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TYAQTUWKLBVQYYKBREJELVBSSXFODVKIAIZHPNOTEAFCUPZCZDUNBHTBOCBKCUHJAXRZCHXFPCUMSEWJRYSDFBGTAANHYFSREJOJWLAXNMGVUOXVLSMRFWGSVOSMJOPYMTPQVWIOSWTJHQLXGQFGAUITDTYDIPFHKBRACDCRFGCJUIQLKMKNZYDVGMKVWNHQMILMYWYEQXTWPIDXANREWPCJPQGDVZSIEQB");
    tmp_msg_0.description.assign("YOWKASDGFZV");
    tmp_msg_0.vnamespace.assign("GHDEOENIKIIBKVLXSYQMZZUZUFXGXGGXHVQHZBKEZGYPEAWWCDENXPLO");
    tmp_msg_0.start_man_id.assign("GJPPVLNQILFEPPSLZFXHNWILKBBXWDAYTOECHIPVNLGKKWECHVXZKPGWBOCKMJAUPYBPVRCODTKZFYNYYEYJERFGZBERZKXRDZPHFMBFAQSEGJJFACDLLRSXLCMGKYTUKDVIO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QJBBUHSQACOVOXTDPUWTMFHTNHHKECQLYBRYNASXNNAEKVFDMZVLIMLBTEUGDHBNSWGJAJWFAFPJGDEOUKRPYPAFQRXTCWGNEPZLQMQHCCTOQWXEYNSOUIABEZIRAJYMVYJMIVZCSKPLIFLQZUMHLDTXGRSMSX");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 35666U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6752273900163512;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6326854587441122;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7033441413564363;
    tmp_tmp_tmp_msg_0_0_0.z_units = 253U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3828621251713039;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 201U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.8388226473731042;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.1493312494365152;
    tmp_tmp_tmp_msg_0_0_0.width = 0.6388521995847178;
    tmp_tmp_tmp_msg_0_0_0.length = 0.7043756947866168;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.3428428904408779;
    tmp_tmp_tmp_msg_0_0_0.coff = 138U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 155U;
    tmp_tmp_tmp_msg_0_0_0.flags = 7U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MLHACDDICRCQAGSGUDFZXNPKUDUENLNKSQOQIWJNQYGXWFOQPYRPGLHJFZJCLTPKKXWFIKQARZGTQDAZUEEITCDFFZJBSWMHGHXMTNYHUORLABERVSRFIGBIKDOFBP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Formation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.formation_name.assign("ZMRPXKSGIWFLTCNDKUZBBHRIPKXGINYUSECYVTKOLOAEQYDCTQZKGWGVOHERUBXWRLGHNDDQYOZOIOJTHMRFSQRXREWWQJT");
    tmp_tmp_tmp_msg_0_0_1.type = 131U;
    tmp_tmp_tmp_msg_0_0_1.op = 37U;
    tmp_tmp_tmp_msg_0_0_1.group_name.assign("UILRZYZASNWHJWIWDIQHQKKZCUFYOWOYPZLOMFOVLDFEDHCSKVVXGRSHMUZWLBIGZGTSDLISWAKYVEATXBWGJQIPKYRRCVFMMVAGUXUKXNVPDANOO");
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("OOTVBKXRKEEMKEYEHGIIPWJRLRILHNSUQBVRGFDFFDCUEOOFQCRZPJGFWMFGPHAGKDFSVNHALAKGZXMAXZJJOTMULGDHKVZYUSXJYPRSDYQKDUQWIXBWCHITYPTQAJSFIDIAOQCTGZYOULFISWXVSXPQBMPYGIANLPXSUFZAEN");
    tmp_tmp_tmp_msg_0_0_1.description.assign("QHKCFRGBYHUNZPUJQZDODZQARUCQJYTAB");
    tmp_tmp_tmp_msg_0_0_1.reference_frame = 125U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.vid = 48270U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.off_x = 0.8890059358257479;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.off_y = 0.27464398044994165;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.off_z = 0.1655053009648434;
    tmp_tmp_tmp_msg_0_0_1.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.leader_bank_lim = 0.6869658757923973;
    tmp_tmp_tmp_msg_0_0_1.leader_speed_min = 0.5577854494535545;
    tmp_tmp_tmp_msg_0_0_1.leader_speed_max = 0.9986485625927238;
    tmp_tmp_tmp_msg_0_0_1.leader_alt_min = 0.11550097736357523;
    tmp_tmp_tmp_msg_0_0_1.leader_alt_max = 0.7675604023933889;
    tmp_tmp_tmp_msg_0_0_1.pos_sim_err_lim = 0.7348384045746151;
    tmp_tmp_tmp_msg_0_0_1.pos_sim_err_wrn = 0.843760142204377;
    tmp_tmp_tmp_msg_0_0_1.pos_sim_err_timeout = 29833U;
    tmp_tmp_tmp_msg_0_0_1.converg_max = 0.8079649239949163;
    tmp_tmp_tmp_msg_0_0_1.converg_timeout = 35230U;
    tmp_tmp_tmp_msg_0_0_1.comms_timeout = 26723U;
    tmp_tmp_tmp_msg_0_0_1.turb_lim = 0.14914781583218362;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("WHPPDFQJNHWQJOYZSCKWVCYCPPZSYTMERISLUOQBKWYIGLFMAGCJZNUQPIAEEHSFFRBEXLEDIDTYWNMWGJHQRNJGRAQDBBVVJWKKFXMLVANOPT");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("OWNMQPNQCMZAEWGKWTXVPUYZMIIHBRVDWLOQZREWALTGTUQHFBPFSWEWRLXTZQFOTOKHVSFJHKEVIEZCCSFGVSWMYVZLDTCUJDHGTBQZWIQUHDDNRUBSKWEPIPXUXNUCOPGJBZZQDXFMQKBBJSUJCHRCKTDLIMJYOHFJOSAAJNTUGMZPGRGBEEIDKAGSXFLVYARKIECYCOLCORRDYLYTBPIMHG");
    tmp_tmp_msg_0_1.dest_man.assign("CLZZVNIIXWUVIUMJEEAICMBZMDHDDEYQOAVFOQQEGLSSRPTHACREUCCPKKNVYTHDRGDQINBJISNUVFPIOMTUEGSFLUPGJGICRWOPFXNYKRFESIMLXJULYRZBZD");
    tmp_tmp_msg_0_1.conditions.assign("LOFFVENNDQULROMGFOSGAPUYDJDHJZHEAEPJBTRPPNIEKXMJWYWIKNOTSDKIGNPOHJKGQYQDSZKIXVABRSBFABZUZKBHRZCBLFJRANIWWUNYLLRBHHMUY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsFixRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.utc_time = 0.7489030601333361;
    tmp_tmp_msg_0_2.reason = 235U;
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
    msg.setTimeStamp(0.8830736062503185);
    msg.setSource(15899U);
    msg.setSourceEntity(151U);
    msg.setDestination(51286U);
    msg.setDestinationEntity(112U);
    msg.state = 192U;
    msg.plan_id.assign("ZIARNYUHJWHBSGRQLESMFMINXVUOJDZNCOZVTKAHMPAVONDTPRFYJKVLWOBXAKOSLBGAXKXDAKYQIVFCMULEEFAZPHRYBUYDXEQSEBOUBSUVITMCSRLFKSWWIGOUBLRKVLIEGGYAYXPRPIWVPGMEJTJJQQETWPZGGMIEJDQJHBZKLUSFQYHDUPKVHGFXWNDTRXDBDRZGKHCFQCTVZFWANTNNDYEFLJACOZQ");
    msg.comm_level = 85U;

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
    msg.setTimeStamp(0.20020624506070428);
    msg.setSource(26970U);
    msg.setSourceEntity(211U);
    msg.setDestination(4700U);
    msg.setDestinationEntity(60U);
    msg.state = 93U;
    msg.plan_id.assign("DVRMUOPESENBXYBUAXUDRTGPXAYDNRIMGJEZBMQWIYPWKVJMBUTMAOOVWNKQJNUHXJZSLEKJSAXQMUOLTADPFRQCFAGPCIYFWOVZJZLPTGBQQCNYXCRCWEARFIIKLOLOSSUQDKTRTNISOLHVYEGWYVZRUSHIBHFBDVGAQXTXEOKVRJGKN");
    msg.comm_level = 216U;

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
    msg.setTimeStamp(0.23248531005432915);
    msg.setSource(27366U);
    msg.setSourceEntity(14U);
    msg.setDestination(17570U);
    msg.setDestinationEntity(128U);
    msg.state = 92U;
    msg.plan_id.assign("JBLGFXPZWFSEHOVJGYVAOCIBHRCZEXVUQSBXCPTXVIHNAMQYOZXQRBSZEDNWEDHTCWKWQTJTKLTYLYRDAFRBSVJJKMRQKJEWLSOLFFPRBPIFKFPWQMCUHZDVBIGKONGNSAIGRYAQPTPGCNIVLUDUBODSRPPSOBVSKQKLWHUVEMRTXDLTMIMCFOCUDMAAFGYMLKW");
    msg.comm_level = 80U;

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
    msg.setTimeStamp(0.11978235694089145);
    msg.setSource(20578U);
    msg.setSourceEntity(79U);
    msg.setDestination(18872U);
    msg.setDestinationEntity(164U);
    msg.type = 228U;
    msg.op = 166U;
    msg.request_id = 2887U;
    msg.plan_id.assign("UQLXXVFDYLARAYWPBNDKJLAGQTNWVXJTQWHXYWHJFLUPECBZCKOKCJRCAJXCKKDZHVLMERBNHIECFQSFAYKOLMHVDDXHOJBITPHSUSGTGZIINZHPRGPFZEONSQHBJRDTGERSCJUWS");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BCDQTOEAMIRIISVAEFSRAGNBWDKVHEDTWVYFXPNZAGYZVCIZIONLEWSATJUHBJRYZRJJVWITYVLQCMDZWUNJDNDDZUJFQOGQUHSQEDCEECEZQKIXVTCHLVMMSGFSKYKRNUZGDLBBZHEGPCGHTBCBPZXXQHAMGXBNXJXPRMCSQFOTFODQNYYOEQMWRPJWFFXLAMXTKUMJPXPKPNFFCL");

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
    msg.setTimeStamp(0.382973463454396);
    msg.setSource(4382U);
    msg.setSourceEntity(71U);
    msg.setDestination(28567U);
    msg.setDestinationEntity(67U);
    msg.type = 231U;
    msg.op = 110U;
    msg.request_id = 9497U;
    msg.plan_id.assign("YDFHYMSXKFSUZTIBTYBOEILAQGUVDSLUYZERLYADNRVMCLOPPGQ");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.08869051625925783;
    tmp_msg_0.x = 0.5944060244746903;
    tmp_msg_0.y = 0.6669060646143338;
    tmp_msg_0.z = 0.894138458395427;
    tmp_msg_0.timestep = 0.07399928917272947;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UBPQUSXMQSBLZV");

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
    msg.setTimeStamp(0.37169264102714994);
    msg.setSource(1854U);
    msg.setSourceEntity(84U);
    msg.setDestination(5859U);
    msg.setDestinationEntity(111U);
    msg.type = 115U;
    msg.op = 21U;
    msg.request_id = 8529U;
    msg.plan_id.assign("FBPZQCBXVEA");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("DNWSFPZJKNLJPGDXNVBRAPYFPGCNLNTQENRNAHB");
    tmp_msg_0.action = 226U;
    tmp_msg_0.grouplist.assign("HJGSZEIDORKYILFRPBCPGEARVTSXMYKERBCRUEMQWKPLQJJHUBXIQGMQIGWPBWAHUZFLDYOLGPYKRUVUVKUDDYJGGNHWEZXETOJHCXUKZOTJAICQPVVSEERINLDAQCSMHVNDEXFMDMHTHUNMPTLZBCGMIPWLWWKSLZUOKGSLQUZNDVKRXFXWOWNAMOANTNRFYAJTLQQYVVHDRFETZSDXSBCCAXZIQBITJYBJNCSAHFOYAP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EHCCENKCANFHKVEABYYBTKKMEQWVVXZTWCBRYCVQCJBBZMSITHQSUBXRDQJASHRFTPDJWZLVZFKGIARYRLKVIOWRGIXCRWIXGDDMZJGYOUYQHNPUFFPDYNYAQZLIFEVJQLIYCFTOGMLVOJZPTFAYBSXGSMULAIDXCOUPKOSQGLSTMWGXNZTVA");

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
    msg.setTimeStamp(0.5771281137612899);
    msg.setSource(1983U);
    msg.setSourceEntity(21U);
    msg.setDestination(47154U);
    msg.setDestinationEntity(128U);
    msg.plan_count = 30259U;
    msg.plan_size = 1372908439U;
    msg.change_time = 0.6891066434412806;
    msg.change_sid = 56326U;
    msg.change_sname.assign("OTDROZOEJXGZYKZDTBPBQJXRKSNFYUBAUCAPRUQVQDNIDFCIEXALMHIUQXWDQKVYWYBCROXNZWWCEHPSRMCUJLFFCPLTSYMYHQIVDMXKCIDHGFTFFNYZLWGMFBIAXAHEYDNNPZUHSGVRWN");
    const char tmp_msg_0[] = {-97, -111, -9, 24, -128, 16, 107, 30, 46, 108, 82, 96, -121, 102, -35, 105, -20, -60, 8, -50, -1, -61, 16, 46, 97, 124, -78, 21, -56, -95, 121, -30, -11, -127, -20, 95, -34, -58, 89, 95, 31, 13, -45, 3, -81, 112, 6, 94, 5, -56, -75, -25, -67, 23, -58, -93, 10, -20, 37, 18, 92, -95, -15, -29, 89, 27, -106, 59, -98, 111, 107, -1, -5, 32, -109, 5, 73, -58, -26, 2, -96, 19, -68, 44, -122, 52, 53, -44, -54, -3, -66, 38, 89, 89, -120, -49, -41, -3, -46, 65, 18, -78, 32};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HXUUHUXDNXGGSLSDFXUMKQVFCFIMNZQVHELYOCQBBQZJHKZSTDYLUFIXDCURRWXTBMBYJHRWTZNRQAKGQLMATFLSEVMEJIDCSDODHKWHXJXDNKBEYYWKREFTVJKNOWVEJPZCACJAWSOTTBCVWNTORUKRGPBZPPSEOGFLBYQIUPKPYQPNPUTKOWIGZCCIHJMPSFEUQGMAEOZOMDRRLVZVBIAHMTFNIYAA");
    tmp_msg_1.plan_size = 18866U;
    tmp_msg_1.change_time = 0.03877583843786081;
    tmp_msg_1.change_sid = 55887U;
    tmp_msg_1.change_sname.assign("XLQDGEZNAGPHWCOIEDQVNJWFJESBRZRYIVTKGELNIFSMIMKVCLCMBBBNPHOYZPNAGOEAPKRUHUFFOVVKGLOVTYAUHNPIIKYLGCQVJTYTFRJBZYOZDIQUSLZSALNOTUXDYIFPKXUJBWTMSUJACRX");
    const char tmp_tmp_msg_1_0[] = {-106, -105, 12, 13, -115, 96, -73, 99, -100, -70, 99, 32, -16, -94, 3, 102, -31, 117, 31, 124, 14, 58, 44, -116, -51, 114, 103, 44, -102, 78, -83, 29};
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
    msg.setTimeStamp(0.1372295687509163);
    msg.setSource(40500U);
    msg.setSourceEntity(203U);
    msg.setDestination(22097U);
    msg.setDestinationEntity(65U);
    msg.plan_count = 17312U;
    msg.plan_size = 416564905U;
    msg.change_time = 0.8254440697438331;
    msg.change_sid = 24976U;
    msg.change_sname.assign("OWFSEJZSMUWPLYNLXTSMAEHIFWRFRVLHESPVBTWYGQRLYBFHACQGRJDDJUOZUGTQTIPEBCUCWBRCJDNTGXLQCVOWSMUSAEYFVPPRJFIFWPAVQGYKBH");
    const char tmp_msg_0[] = {1, 99, -36, -78, -80, 91, 55, -111, -47, 56, 24, -50, -28, -35, 114, -52, -80, 84, -110, -86, -86, -75, 118, 31, 34, -108, 12, 64, 84, -84, 93, 31, -23, 33, -11, -59, 2, -48, 34, -73, 106, -45, 97, -13, -62, 39, -27, 120, -95, 40, -114, -63, -67, -11, 120, -28, 5, -39, 69, -125, 118, -125, 39, -34, 111, 86, -30, 88, 126, -117, -50, 45, -5, 59, -21, -85, -50, -75, -93, 38, 102, -74, -117, 85, 86, -125, 64, 21, 98, -20, -45, -71, 38, -10, -37, 89, -123, -107, 30, 29, 83, 87, 54, -27, -6, 44, 68, 59, -38, 93, 1, -80, -27, 18, 12, 53, 106, -42, -23, 102, 35, -108, 119, -71, 8, 65, -99, -32, -30, -45, 108, 4, 44, 104, 30, 48, 123, -107, 8, -104, 1, 88, 88, 115, -53, -70, 63, -35, -52, -128, 107, 10, -104, -80, -11, -126, -46, 97, 4, 35, 75, 53, -87, -113, 60, 44, -13, 44, 50, -10, -41, -112, -12, 85, 33, 52, 108, 36, 11, 20, 19, 51, 105, -108, -48, 45, -3, -51, -107, -10, -23, 86, 0, -87, -89, -19, -29, 87, -46, 116, 30, -115, -99, 3, -104, 11, 32, 60, -123, -94, 34, 20, -21};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IUNELYJJGHGHPGFNTFTOHLGWABGYDZZNMTABYRYMU");
    tmp_msg_1.plan_size = 5022U;
    tmp_msg_1.change_time = 0.33602484150632916;
    tmp_msg_1.change_sid = 30862U;
    tmp_msg_1.change_sname.assign("WTWTZQXWNWIPURUQPXJKEVOJMDGFLVQTOQHYBRYPSCTYIHNSTFNRSDLFLIHBPXRNENCYNN");
    const char tmp_tmp_msg_1_0[] = {55, 117, 59, 77, -90, 38, -62, -37, -69, 46, -71, 27, -83, -60, 11, -125, -68, 44, 95, -99, 93, 60, 66, 69, 98, 64, 22, 35, -102, -95, 2, 121, 76, 91, 107, 36, 121, 50, 21, -110, -49, -51, 18, 24, 31, -101, -101, -80, -22, 30, -122, 117, 6, -94, -106, 93, 116, -14, 113, -117, -119, -49, 56, 101, -44, 45, -115, -57, 48, -122, -105, -81, 107, 113, -55, -16, 26, -21, 110, 6, 85, 77, -69, -79, -4, 7, 88, 113, 30, 34, 70, -116, -125, -104, -26, 96, 8, -63, 18, -30, 125, 71, -43, 79, 119, -64, 71, 33, 52, -56, 77, 95, 10, 51, 88, -37, 117, -117, -81, 35, -99, 5, -96, 61, 89, -72, -1, -120, 96, 119, -100, 44, -74, 41, -12, 30, 90, -61, 69, -89, 45, -110, -88, 7, -64, -121, 74, -118, 122, 15, -25, 40, 10, -92, -65, -97, -37, 100, 24, 73, -98, 124, 30, -96, 5, 60, -17, 11, -123, -30, 63, 83, 46, -39, 91, 11, 42, -128, 113, 54, 112, 8, 47, -112, 74, -71, 125, 64, 19, 23, 21, 83, 94, -90, 3, 43, -6, 77};
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
    msg.setTimeStamp(0.17194140990735796);
    msg.setSource(37662U);
    msg.setSourceEntity(93U);
    msg.setDestination(19634U);
    msg.setDestinationEntity(81U);
    msg.plan_count = 32594U;
    msg.plan_size = 3823507225U;
    msg.change_time = 0.8030867547446456;
    msg.change_sid = 2306U;
    msg.change_sname.assign("TFOMUCLGPRRNWGSNYRLRQZXLMTCOVXKWGGHLJOEXTKCLKFYEMYFTUQPHSDWZVYNEABOZHGJCAAVOYUQXCSPKLEJZWBBMXUYVVFPJCUBDVDDEDUWDBA");
    const char tmp_msg_0[] = {97, -95, -86, 58, -44, 34, 0, 91, 85, -61, -44, 5, 7, 81, 27, -35, -13, 48, 49, 38, 58, -48, -54, -71, -47, 56, 31, 84, -114, -93, -77, 42, -81, 38, -12, -96, -53, -6, -8, -104, -77, 64, 32, -121, -56, -119, 76, 16, -12, -34, -103, 30, 28, 77, -47, 84, -22, -25, 67, -75, -89, -89, -99, 8, -126, -30, 69, 76, -79, 84, -29, 53, 47, 41, 42, 18, -110, 117, -57, -88, 104, -107, 125, 7, -25, 45, 66, 35, 12, -62, -60, -118, -118, -119, -69, -41, -70, 109, -112, -77, 58, -25, -1, -108, -64, -85, 86, 64, -127, 14, 84, 77, -81, 4, -121, 114, -14, -11, 21, -10, 11, -43, -80, 120, 26, -49, -31, -67, 100, -87, 77, -33, -126, -42, 38, -32, 8, 23, -53, -80, -40, -26, -69, 116, -88, 109, -43, -41, -69, -7, -35, -52, -106, 4, -61, 3, 97, -41, -77, 65, 37, 105, 111, 33, 87, 93, -45, 27, 79, -5, -5, 42, -88, 70, 75, -47, 59, 28, -107, 31, -95, 107, 19, -15, 3, -108, 36, 115, -34, 18, 114, -98, 33, 34, 0, 73, -13, 80, 9, 94, 57, -109, 34, 67, 122, -20, 0, 125, 68, -58, -92, 50, -117, -15, -98, -122, -95, 112, 70, 50, 12, -37, 54};
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
    msg.setTimeStamp(0.9728773977677675);
    msg.setSource(15949U);
    msg.setSourceEntity(102U);
    msg.setDestination(52753U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("CPDFZWKTVYIKBWNUALAMTQHEWCOPEAVYVAXGRGTNXMOSCCSLOOBPTCTLNRLGLJBDUVPGSNIDVHHYBBIFPEUSWELVHESOBZZUZXJHYQYPQQPDQBXLBFNQRLSSMECJZDNXYVFQIESJOETKNXMCIXVWHJKXMOZZKWJKRWAIDOICSBYHUMDACRZHTPJUVWOUIGFJQ");
    msg.plan_size = 34634U;
    msg.change_time = 0.6103518249340225;
    msg.change_sid = 32382U;
    msg.change_sname.assign("MABSGVELSGFTFCUWSXPJORNTANFYCBPVOKIDHPMBTYOURUECTRFQLRWZUBTHIGTLKMV");
    const char tmp_msg_0[] = {-39, -126, -92, 12, 82, 13, -107, 56, -68, -111, -104, 83, -25, -52, 100, 24, -98, 119, -51, -65, -13, -87, -25, -60, -19, -113, -42, -35, -95, -98, 121, -48, 19, -67, -103, 50, 76, -106, -96, -68, -100, 71, 123, 53, -93, -36, -118, 125, 99, -102, -88, 85, -76, -9, 61, 96, 40, 0, 56, -98, -45, -53, 59, 106, -73, 38, 114, 16, 40, 8, 5, -48, 46, -121, -22, 91, 50, 113, -98, -28, 96, -46, 18, 105, -38, 36, 0, 70, 4, 6, 18, 50, -36, 14, 10, 72, 4, -14, 56, -112, -68, 99, 86, 91, -28, 12, -112, 105, 78, -115, -103, 30, -68, 111, 44, -39, -124, 104, -5, 87, -69, -103, -79, -53, 115, 117, -32, -89, -92, 100, -12, -48, -41, 30, 64, -32, -64, -121, -22, -120, 10, -1, 16, -95, -67, 24, -69, 24, 81, 75, 113, -120, 26, 83, -75, 3, 126, 85, -103, -74, -93, 8, 107, -82, 122, -43, -12, 85, 95, -42, 110, -112, 74, 98, -83, 35, 40, -41, 97, -53, 51, 44, 124, -50, 75, 1, 90, -55, 40, 29, 103, 78, -86, -13, 38, -9, -23, -25, 81, -102, 23, 21, -11, -110, -75, -105, 12, 82, 12, -76, -47, -27, 36, 3, -45, -115, 34, -86, -93, 80, -74, -34, 14, 78, -126, 44, 93, -7, -122, -13, -120, -93, -120, 21, 65, -71, 105, 63, -34, 89, 50, 37};
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
    msg.setTimeStamp(0.18589375117212348);
    msg.setSource(9795U);
    msg.setSourceEntity(55U);
    msg.setDestination(2429U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("JLTYRJKKXGWOTEONHCXRZBJHHNHSTTMJRSEQXF");
    msg.plan_size = 49079U;
    msg.change_time = 0.5844877806752468;
    msg.change_sid = 57835U;
    msg.change_sname.assign("YSLFJRMYDSQLHJDVJWYXQEEWFGJOJKNUMCYHPSMTSJAOXRHZRBWHUKVESIEXOUTJOQRSXAPXKBNMTIVVABJCWQBWNZKTVUZYSPGDTLTQGKBOJQKRIAZPAIMIXWLIMCIHCCDZXEHZZVBAEYLREZXPFFAPNANB");
    const char tmp_msg_0[] = {22, -83, 88, 122, -33, 114, 21, -9, -22, 11, 22, -35, -95, -41, 30, -25, -127, 63, 80, -95, 18, 31, -69, -41, -122, 100, 62, -79, -126, -68, 83, -95, -72, -38, -43, -40, 46, 85, -23, 115, -22, -61, -86, -60, 16, -37, -50, -126, -127, 77, 53, 22, 37, -24, 120, -95, -100, -128, -4, -47, 16, 111, -14, -115, -89, 0, 44, 10, 101, 105, 15, -99, -113, 94, 70, -22, 101, -79, 68, 24, 34, -37, -18, 5, -73, 76, 54, 78, 57, 66, 1, 82, -63, 9, -115, 40, -80, 87, -116, -44, 122, 77, -113, -114, -25, 94, -118, 34, -27, -4, 99, 76, -68, 31, -84, 84, 83, 20, -105, -35, 28, 8, -20, 108, -90, -118, -98, 101, 51, 121, 48, 28, -19, -95, 118, -19, 115, 10, 121, -41, -113, 3, -70, 101, -21, -107, 52, 72, 55, -47, -33, -100, -6, -38, -63, -38, 93, 71, -46, -14, -65, -77, -40, -66, 38, -65, -117, -29, -110, 85, 121, -14, -110, -2, -25, 111, 49, -123, -65, -35, -18, -82, -40, -29, 87, -71, 67, 97, 110, 117, -115, 116, 88, -70, 37, -7, 31, 71, -89, -30, 87, 107, -57, -26, 41, 76, -13, -79, -9, -53, 72, -12, 36, 84, -72, 48, -24, -19, 93, -121, 8, -122, -86, 34, -6, -3, 35, 3, 75, -63, -99, -41, 101, -36, 75, -34, 31, 44, -125, -62};
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
    msg.setTimeStamp(0.537676352567016);
    msg.setSource(6883U);
    msg.setSourceEntity(59U);
    msg.setDestination(38119U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("HJLFOQJJESYERPXMYQFEFSXHNGVZGYERBVMMCCJVKNDWJUIDUKJJEYAVGOSLTNPETOAFIYWZHSNZOMERFBHXNPUQVSDMOBPHTLUUZPNSZHGRLCDZTOPZ");
    msg.plan_size = 61797U;
    msg.change_time = 0.4155609700763334;
    msg.change_sid = 7712U;
    msg.change_sname.assign("OEJCWVEIDVUKYNWTXIQCCQNLEOAPSVAKKHJIPEAMTKVHTCEVPOFNYQFEELYEGBBLLQGPGYXIOXDAQRA");
    const char tmp_msg_0[] = {22, -1, 80, -106, 105, 110, -56, 90, -14, -13, -19, 119, -85, -85, -121, 109, 81, -101, 19, 99, -57, -49, 1, 61, 23, 85, 19, -104, -92, 78, 101, -24, -40, -50, 81, 49, -113, 12, -41, 62, 114, 104, -36, 84, -121, -73, -1, 55, -111, 85, -112, -18, -70, -52, -68, 109, 107, 59, 58, 43, -60, 0, 99, 97, -45, -31, -124, 99, -52, -76, -64, -17, -13, 75, -112, -92, -28, 80, 8, 11, 12, 113, -27, 0, 52, 51, 97, -76, 29, -37, 99, 47, 44, 105, -12, 36, 117, -57, -48, -19, 20, -94, -53, -113, -58, 1, 10, 79, -48, -92, 114, -85, 105, 37, 99, -44, 103, -27, -10, 56, -77, -29, -74, 36, 57, -52, -29, 5, 5, 117, 77, 58, 76};
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
    msg.setTimeStamp(0.8163294331839082);
    msg.setSource(16847U);
    msg.setSourceEntity(160U);
    msg.setDestination(19705U);
    msg.setDestinationEntity(177U);
    msg.type = 243U;
    msg.op = 172U;
    msg.request_id = 51999U;
    msg.plan_id.assign("VFZPFLPNMXFROIMLHGBHPUUPYMRINUHCKQTZIJLDQIUBLQQCFKWUYAEPJTQIJSBCPSXZXHDAUCNRUCHVLIWFTNVEWBXNRUDGCEXXBGWYAJHOMFXSIOTRAJVDETDADBBZYOAVCOLREOPGKLZKAWVMXJSXKMQHGEGDLSOY");
    msg.flags = 52098U;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 205U;
    tmp_msg_0.value = 213U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("INJEHAWWWIPRMCJDUJGBXQYCHOVBQNJJBCRVUBKQMBUDLVKZZGSZHFAAPTUKSMYFDLOZRDHOHHPLIKFDSYCI");

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
    msg.setTimeStamp(0.02914706247349097);
    msg.setSource(63190U);
    msg.setSourceEntity(68U);
    msg.setDestination(39897U);
    msg.setDestinationEntity(197U);
    msg.type = 83U;
    msg.op = 208U;
    msg.request_id = 12509U;
    msg.plan_id.assign("CHCJXANZOQCMKTWTJTGOFMCLYHIRJUHVUVXBYAOSBLYCEPDWNVLFUJIVODPGLVMEOMXLBEHUMEULAFNBRTWJNHEAPHAPIPFEBYZ");
    msg.flags = 6672U;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 23416U;
    tmp_msg_0.destination.assign("NUXTSUPPQWSESPXSUAZ");
    tmp_msg_0.timeout = 0.21763567589178534;
    tmp_msg_0.range = 0.12187122209392665;
    tmp_msg_0.type = 165U;
    IMC::Fluorescein tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.06747146050559094;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WXMADGMRYBJUQODEPVLICFJZEUVEVNKSGVCCIUIZEFBKDXKFYXDZHMVMUGYLGNQYSJRCMQTZROXGTAPSCJSACQVXZEBPXKHGNOCTJHDIAUOETAYQEOKBWHFSLOJGKZUQRJMSSWIPLLF");

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
    msg.setTimeStamp(0.03653650380710638);
    msg.setSource(4730U);
    msg.setSourceEntity(19U);
    msg.setDestination(54238U);
    msg.setDestinationEntity(156U);
    msg.type = 188U;
    msg.op = 101U;
    msg.request_id = 56757U;
    msg.plan_id.assign("RZRCWIFKBFTUXPYNBJWSZPDEBPYYANXVRKVYMBRFANINZCOGCRVZVIARSDHSARBEBOXNWBEHOMGUUNTRAWXMJGGLCDQFQULSMXQMZEPKLGKAZSMJEWZRTAUPVUOLF");
    msg.flags = 38110U;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.9119971815194503;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZGDVXEOGWXUMMHBSMICCFZKYKPQWVICMIWJKPWBSMYCXARIUYQCQTGRRDEMLOBACZKXXUPUHJJBOPBPFNWFDQDDPDJTFPFNAFWLYVISCERPHHGSLNFNXEHLOOMOBGHFCUHQTXWWTGNLQTRKRZAS");

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
    msg.setTimeStamp(0.2577799764602797);
    msg.setSource(20904U);
    msg.setSourceEntity(70U);
    msg.setDestination(34231U);
    msg.setDestinationEntity(223U);
    msg.state = 238U;
    msg.plan_id.assign("TLCHFFJKQRDCIHZUUCPHOGFOKLWLJYVOXCNPDYRG");
    msg.plan_eta = 1563102176;
    msg.plan_progress = 0.77813319015707;
    msg.man_id.assign("KXHBTHZGKYFIJOJPGULPM");
    msg.man_type = 46965U;
    msg.man_eta = 1179399422;
    msg.last_outcome = 21U;

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
    msg.setTimeStamp(0.3091979953900551);
    msg.setSource(43483U);
    msg.setSourceEntity(173U);
    msg.setDestination(31648U);
    msg.setDestinationEntity(92U);
    msg.state = 46U;
    msg.plan_id.assign("MCWCVGNKNFXNSLQFYXEEMASVFIQSYCDOGVGUUHQWQNRWWRWGZGKWHXPYKUAOLJJSMYQNUTFSZPBIYHMLLRBJDEAZJQUVBKFSDKTHCPOFZDYOBTALKFAWFMIQJDPYJISTHYIOITUKJTVOWXRAKJXPPQXZZEBGNEGTHVMASEAYTLEEQHXXLRMSJPJNIUHPMZWZDKMVLCGYNPPGRCRASGHFADNVITCOVBRFLMEODWUU");
    msg.plan_eta = 424842983;
    msg.plan_progress = 0.5251778902784268;
    msg.man_id.assign("ZXDBDATHSBSELKSQVQRIARNFCLJDFSTMXCJHZASORZHZLOJMCXIYMVRWYZJKMZHSIRXEVUZMGGRRLFDQLYECFWVLGUOVEHUSVSGAAMBMCWCDTPUQJIMAYVPBENBKUKGHWLOHYXWCOHWGQYRSXKPTKWUGNQUDLVBLXOJUXM");
    msg.man_type = 51899U;
    msg.man_eta = -1071805552;
    msg.last_outcome = 95U;

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
    msg.setTimeStamp(0.38236018709996733);
    msg.setSource(62293U);
    msg.setSourceEntity(69U);
    msg.setDestination(32381U);
    msg.setDestinationEntity(129U);
    msg.state = 95U;
    msg.plan_id.assign("VCQUZUMSBFHEWZZULFMFOKISQIKTUTAJRDFYFLOBDEZCQDEGPZALSGBSNJCIKSDOYTWYGTWUJJOCCCADWCMIERBPNDTBXZNFLMPFXVVKKTBKOTYPHBXNMRYDORSLBSGUOSAWJOWNUXASKTYEBEKGGPQZRLCMXPNPOZHEBXVHUEFQERQS");
    msg.plan_eta = 248719382;
    msg.plan_progress = 0.027597290605833935;
    msg.man_id.assign("BYEMFUYXXPGFIBFWCGJQKVCFNDVOVPNVHOTFULRTRWMKQISJCRBPMNUSNKBKLTOWZUDRPWEQQVQAZIESLLQODAWYQXKNLVXUVATXSXNLEBDXIZTBWAESYOPGYK");
    msg.man_type = 20050U;
    msg.man_eta = -1844106821;
    msg.last_outcome = 181U;

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
    msg.setTimeStamp(0.6402534713777122);
    msg.setSource(62092U);
    msg.setSourceEntity(98U);
    msg.setDestination(15677U);
    msg.setDestinationEntity(228U);
    msg.name.assign("HMDMDPKYLXMAQRIYTMVZYJHAUZBJSDXJZRUDRUMNXJAARUTOYXYCJBSAVCLDMBHKGEGPCYQMGZHCZSSJGNWEQXGWBOQXZLPFIHDLSMWFCOKBEPGEIUGEEHNNWSKVOBXXIJIQNCBOYKTQYNCR");
    msg.value.assign("TXZGMREGDUNMUGQVZEFHLYSDUZOAVSLPLAPKQMXTVQKTGFFLQPZCKHKWUQLYRGOBZINPWIIDUVZEINFMOJUCJHIMRVDCBBSBZCWEXSHKROAEKMYASUOBWGACH");
    msg.type = 45U;
    msg.access = 204U;

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
    msg.setTimeStamp(0.1799979857165439);
    msg.setSource(44296U);
    msg.setSourceEntity(172U);
    msg.setDestination(34351U);
    msg.setDestinationEntity(7U);
    msg.name.assign("FAZQSTNQMJILHWSZYTZYSFKZEDZGDVIJFPUWRJNPDHIUFTIAREHAWPUVNQBKSIMJHQLOBXLGRJCPSNQZMRPJYVUZLIXBHGNWCVXRAWOMUCCDCVHVVOSSACGTRSLTWOQANNIBRNKBWZJMYPZBDRJXPUHJAMEXFBKOQWLIWETMRD");
    msg.value.assign("MAYDTOCMWKDKVCBQMNPOAZEFVSANPIGKYOWIWLHURZPMJVDSMWRJWBPLEJKWESJYEUDVNEJUGWCKTDHPESFGXCOJXTKEAMIGIZEGVZQUOSBIQGHHRCNGQQCZGECLNMRFKLAVBDMNYFTPVTNHRYKSPZAYDJFDHBIXGGRCXAPHDXTTHNSWTAROLIDKBWJVZU");
    msg.type = 106U;
    msg.access = 215U;

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
    msg.setTimeStamp(0.12586599415584565);
    msg.setSource(53836U);
    msg.setSourceEntity(142U);
    msg.setDestination(56483U);
    msg.setDestinationEntity(254U);
    msg.name.assign("ZKEBMPWACBMWSLJJLZMXSENVASBWNDXHZWBU");
    msg.value.assign("JUBRAEJMSIWWJKJREHTCMJNHDQDMTBQPPNGVRVTAZNEIOBOQNTAHLRDQGKBXKIVWANAPKFMJFKJRECSAUWACCXMYLXMCVOMOC");
    msg.type = 87U;
    msg.access = 95U;

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
    msg.setTimeStamp(0.09226341343536493);
    msg.setSource(53610U);
    msg.setSourceEntity(56U);
    msg.setDestination(49159U);
    msg.setDestinationEntity(137U);
    msg.cmd = 241U;
    msg.op = 218U;
    msg.plan_id.assign("ANWLKIUTNWCMLGURPIIVBQSIVTPCVZOWQGKKFMSQNSRBUHAGLAQDJSSXLVMITOXHBGSXBDGZAMZPIGUHHCEXVZYOXFWJWPISLVMMDRTPTGCVLFCWEUAWRUJREGKIBRPDKMJOENTUYCQDJZYQRLEEFFXNZJQAGDFKTNJYAEXMCOQHPOEMEDQIYVNWNLHJFHR");
    msg.params.assign("LVARBPYHTWIMXBIFSEMQZZXFNCPXOMYVCOPASVTQWSUNDQHAJMJSDZUZITUBUEXJRUWGLOITDYNHKWOTKYJEXXZKLVJIGYFDMSCBFRNCAEKUNGUQXLNVGZJKYBDFOVPABSVZMAQUQGUYHQDGDTEEIWGS");

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
    msg.setTimeStamp(0.989386581007122);
    msg.setSource(58347U);
    msg.setSourceEntity(131U);
    msg.setDestination(15784U);
    msg.setDestinationEntity(57U);
    msg.cmd = 160U;
    msg.op = 168U;
    msg.plan_id.assign("TPTBNTSIASDKMAQANLEOUVINEHZFJGARXJGGILPYIYKUHCOUILECEHKYPMHIAXCXQVVBSODRKVVTVPXRJQEWBETZETJOKMNNQIYUJYDRYLZSROMXKDOCGDJUOEXFGGMLKOFKHSJADNHMVEZBULLSYTFQRCPZUPYFPZMAVQBEGXQUWFIFXTKGBZCZRTVMYWDTBDDWQYHFOJLQBRSANPCQMKGJHA");
    msg.params.assign("BMFZSDCCGYDCHKNFRTTXGAGOMVHTKVHVTKTXJBRNWCFGIKZLTODKEPWDHERFKNMQAYEVIPEYCDCABVLDDGPVQLEXNCIRZKLNPCOUSCLWSPNGKUHLYWMSUCTALUWFOQLRJMOFOOBIREGEEYTUDXJTQBYPWWEJWUSYMZJSEAQZJIBIIQHAFKIAYGRHUXQKNNSGIXFVMUBJXMYSXXLPWBNBJOD");

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
    msg.setTimeStamp(0.25864743791166933);
    msg.setSource(63066U);
    msg.setSourceEntity(174U);
    msg.setDestination(14951U);
    msg.setDestinationEntity(68U);
    msg.cmd = 173U;
    msg.op = 234U;
    msg.plan_id.assign("WXVGEWUHOFDZXKFLMPGHQSNTSZCPDNBNPVJAGGUUEVXKIEQWXVXSZPOSHEIMVMPKGCYYYWNOLMDTHKEZMUCHEZSFBNSOLQLRWYLDFCEWBDUILQYMNOHKBCVDTZEJDJKVIQAOTJAGLGHASZLLXXZWDTAMKYGUFLPOYBCHUCEBGYFJTTTXRMNNRDVJBCNMWJARFRIAQYRKHUTFEMPSSIBFXDNAQRVVRYRZFWCJKOJSROAJPIBCIQPBWI");
    msg.params.assign("ZVIOWKSBWOJNCCRHFFQTZRVVGCXWMMNHDRHGQEXMZFEKAYKSMHTYIAUBZOBMXEZHEQYUUICUNRPWAMDEYDGPJKLTAXVSEIAYALCJFXSZJCOAKELYKBGRGTNARTP");

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
    msg.setTimeStamp(0.671755917319531);
    msg.setSource(3095U);
    msg.setSourceEntity(227U);
    msg.setDestination(31015U);
    msg.setDestinationEntity(147U);
    msg.group_name.assign("WTXGUSLONKDPCEWQLBOHPPVGCUBYDDZEOBHRDHMTSAJQYOARJYOSPFSYSPVGVLBQGYRXJWZZWIXGMXQBLPHAHWKCVDIVRVXPZYHMUZANZIKQQWLEXNIPKMUIIFHFNMUQFZHPMJTIGCAJEKEAE");
    msg.op = 122U;
    msg.lat = 0.2884832287459256;
    msg.lon = 0.9879201913717842;
    msg.height = 0.4647264254273292;
    msg.x = 0.8955016445937073;
    msg.y = 0.3362563057769836;
    msg.z = 0.5269245025639276;
    msg.phi = 0.9665216515814041;
    msg.theta = 0.38299185924253953;
    msg.psi = 0.5262166819174701;
    msg.vx = 0.007062906081054643;
    msg.vy = 0.9128768841942374;
    msg.vz = 0.6924267394452104;
    msg.p = 0.9712461125504978;
    msg.q = 0.6913550092085181;
    msg.r = 0.07324530782692851;
    msg.svx = 0.4504371822925245;
    msg.svy = 0.6993929359277399;
    msg.svz = 0.630251971979097;

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
    msg.setTimeStamp(0.04954437276109558);
    msg.setSource(14175U);
    msg.setSourceEntity(15U);
    msg.setDestination(62352U);
    msg.setDestinationEntity(199U);
    msg.group_name.assign("GPKTDSPOOQDZIDIZWCYEDUIFUMUSRLQCQXWUAUUPIEXVWVYJKOCAHDHORDPQSFTANYTDRATMMEVEOKHEINXRJKWQHYLRGFFYGEFIBVTIALQCBCFZFOWGHHQRNBTZWKTJTJHNWBNHKSPRZNFQPYNAIDZXGMCJJXDIQCXPVAVMZPMRJAICLTEMGADZKYKMSWJSNMNLHLGPBSXERNYOAGCBGBZVJFWEUXZSVRBXJVEOTGLKUHOC");
    msg.op = 247U;
    msg.lat = 0.02890791480641397;
    msg.lon = 0.1082061981784821;
    msg.height = 0.6302483718985187;
    msg.x = 0.6750774520767076;
    msg.y = 0.42286599185717344;
    msg.z = 0.5997828255724834;
    msg.phi = 0.5048137468215796;
    msg.theta = 0.7846443314699422;
    msg.psi = 0.1155316363443133;
    msg.vx = 0.6263985366536801;
    msg.vy = 0.18088877630903366;
    msg.vz = 0.9996930178430465;
    msg.p = 0.971462661369277;
    msg.q = 0.5034199551875064;
    msg.r = 0.9103536463783576;
    msg.svx = 0.05377115491096707;
    msg.svy = 0.9913979758939178;
    msg.svz = 0.256666827566545;

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
    msg.setTimeStamp(0.5627456290601763);
    msg.setSource(57175U);
    msg.setSourceEntity(214U);
    msg.setDestination(31335U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("OBUKXJGPQLBWMWWQNAEKJFBETDDTJMEBCKYXNZIBKFKWXKJTFDGUBNJPLQVKBYOQHGARIOHRGHFXLGVZALTPUUBTFECMROAYHCVUFDWIINAYERDDGHZZOMMTJCXMFIZVGXEVADAKJZLZRMCDCTOOLJTSUYXVLOYSNHIPNMZKFITXTRWFHSARHSMJCUPPEUWPLWSOBXVBZRQQYFXCVGDEEVLMNHDCGPOPGJ");
    msg.op = 64U;
    msg.lat = 0.887061553935995;
    msg.lon = 0.11080228955516691;
    msg.height = 0.16232072802005515;
    msg.x = 0.6892281250806479;
    msg.y = 0.8808775802432969;
    msg.z = 0.46856908895813276;
    msg.phi = 0.1284786852038804;
    msg.theta = 0.9556069352986898;
    msg.psi = 0.13879390535264025;
    msg.vx = 0.3050479126164818;
    msg.vy = 0.10757810199113937;
    msg.vz = 0.5972903871840468;
    msg.p = 0.860927257751588;
    msg.q = 0.10542242817066272;
    msg.r = 0.7244801018713518;
    msg.svx = 0.4886471864270462;
    msg.svy = 0.19910098535363085;
    msg.svz = 0.5661177348575183;

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
    msg.setTimeStamp(0.5333232454541421);
    msg.setSource(19217U);
    msg.setSourceEntity(113U);
    msg.setDestination(19063U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("EZCATVPIQMLUBTYZGYBECZZYZRAWICQYFHGODPVDYKNTPMDWYUZPRJKSFCNWECTIMLBUIKUNUMHXBVJCJIVHJKSPBXRZOTIMAZSAXJEMGSDWVGVQGDYPKLDUNTLETARINHEQCRECOWLGJOCKAKFUSBFRTFMBHSAHFHGBIVYQQQQPMRGQCJPGKNXDXLVSJOPBOFJXIIXZMWJGTKBDSOAKOWEWOHOPXEW");
    msg.type = 49U;
    msg.properties = 208U;
    msg.durations.assign("WUXOUELTIHMSXOJNEHFRRLNPHVZJQVZQXWLXFWPXLHPULRNDNCOKQCSMUYHYRMGXKHBBHEUAMKPBLZCCTSEPCRJTRZKZTPAGICYDJWCGNUGAQHVPAXEDYGECSIJXJWDDSMGSOFEKBJQBQMHDOMZKINYLBTZQRECKLBOBVIMWNTGABRJDEYTHIANWZPJIREFIOMUFBWFDZTFOIOTVCLGGPYWAZYFAMIAYQD");
    msg.distances.assign("GMVOATJPVQOYMMSZXWNNRTM");
    msg.actions.assign("UTWQPVHRKLVRLLAJWSYDYGDXQFUPHELUWAKIOINMUOJOVKMXMXTLMNBB");
    msg.fuel.assign("GUWWJRLIEQOVNZYAFGSANLEHGWBNVCCYRRBXHHCVIJLEHZMBXJFMSMUGLWVGDDPDRZZWKYOOMYAZDZLAEXUITKSQHHMSHPPPTIZHNGVERENNTMCFRFAAKYEMYYJQDDOFDFXSUSPMCROBUEDATCICWHNBZFLXWFPVARBSXUXQBJFEQKIOCOQLKOQYXJAG");

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
    msg.setTimeStamp(0.11258280338971283);
    msg.setSource(14250U);
    msg.setSourceEntity(231U);
    msg.setDestination(14307U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("GQJKLUUHMOWFPFELJBRDYFRRTIWZOSUIDTWAZEGKHXVUVNVFHAOGMHWFPWGWUPMYMYYXAALVEFHRJZGMJVVYKAODZFOKCDTGLHHQFEMPISSZJVCCDLBXYIAPCSQBQG");
    msg.type = 187U;
    msg.properties = 163U;
    msg.durations.assign("LNEIPCBUAPIQBZQUPHTSHJEJRSQGPNAVYRYUTFSJHUASACYBSBRDEVGMWQDUBZZMJLEUGTYKOKXDUIMVHZPQJLCENTOKGCFEMHVNXAHDNFACMVKTIRTFKWYBYFJTLSYYAGPCFSGFFHWDSLPIZXUXHYFVYLSXBLJXTILNBGPWRZBJMDVOWCNOQJKFHCAZBKOXEVSKPDZRXEOZTRINQKLNCIQXGWVOIOEWWHODMGQMKRRQDOZDWUXAEU");
    msg.distances.assign("HCXDOQIXTDFGHUTJFFMSTXWTBUJALKNZIUKSPNHVEPNGEVBWARSCZGTVPYGXWTXWAOFYSQSIXTPIVRGGBATBKYOOEYDBANXJQLHYKBBEHNYUFQMCFZZQZPEYIJBEOIGYCBMDMGRULYDDHMQZJSCLWNDRHKMPAVTHRRERLVWPPKSCZJEWTMXIALNSFPOXLVFNNUNCWKSMLVJDEUDGWJIMCUAGCCKHKBFZ");
    msg.actions.assign("BAVSOADWMIAFWXGKOHNGBDOEKLYTQESHJEVCAPYIRRBCEBYAYSXDIKSUMJBTFZVZDOITPFGNDVHQFZRZBMANGFLUVCLWONTNIHJIQUMEBAUKLCFCMWBZYNFPRSSASIMZKEKXWUJHXTRZHSNQRGGVTULBOQMQLKSYYDYDMJNTMCELOVZHTWQQFJKVINVEBGALUDCCWHKCSOQGHXHPROPEWROPFUIQPXPUJPRXLAGMEJFYTZGTUDKJIX");
    msg.fuel.assign("MAMJKNMKMUQWQVIEJFNQRYRYADOVSKGVNCC");

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
    msg.setTimeStamp(0.4772985410616607);
    msg.setSource(44830U);
    msg.setSourceEntity(157U);
    msg.setDestination(40593U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("RSTXQPVDJACDHQNRGEXUQIKSFZCFGAYHKHSOYYKBDFOZSBTNVBICIVEDWATLVXUMGTQGYERIGUTRXUYSYRHRZWTIIJIWQCYLZPMWXSAZLDKBIVXHJZQAEWCOGKPLCPTGYWIDJPRPKANHALLVFAHEO");
    msg.type = 233U;
    msg.properties = 17U;
    msg.durations.assign("SELPQSTSJDDYNZQONIGZWHGUDPWAHYVROMPZUYJOCWAFZVNHEFJKDWQVBBPCCRSMIJZTLCMRWJRKZNLCHDKWKKGVSJEHXBWKBEKUTWIQWITYPKXTBMGHGVQFILPNFOOELCAVTAJWMEVXSKLG");
    msg.distances.assign("AXPTYEJEAHQNEWCPBLJZIFSMJGUJGOVFOLUXVECRLADMSGBSUTRYTYHIQQFKKGBKVSEKXURGPCCDBQQGTZUPFSKIFVOHSUHNMHICTJBOXQKZZNPPMHSJYVZZFFADMYLVPOIFQSHWCUXWFKVEIXDJTIGMAOBEWXUPUQFWLL");
    msg.actions.assign("QLUQHMMVWPTCWYJTBNQMQBVCAEUYJRUBLGSMDXSJIXIFELNBWPKQYYTAPXFQYITIXAYVFZHHESSCVNIPEJQJL");
    msg.fuel.assign("JNVIREFOAGSQHWQYWODJMJGZEFQYMXTIQNVUEVYASEBOWMYUKCLXYYJLDRBTDBXDGVWKUUSVLHX");

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
    msg.setTimeStamp(0.31631590356090267);
    msg.setSource(49092U);
    msg.setSourceEntity(52U);
    msg.setDestination(11637U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.22847058870316472;
    msg.lon = 0.6221098713134113;
    msg.depth = 0.758427574812329;
    msg.roll = 0.673557828584131;
    msg.pitch = 0.3061311505751668;
    msg.yaw = 0.3112479992204342;
    msg.rcp_time = 0.3525475491534308;
    msg.sid.assign("HYWOUPFDGSFXUQGJTZGDFEPDMMEJLLUMOIZURKLYYUMEBVQIAJJBACBVXSDHOFHFCNQGTMVRPJQQDKKVHWYCOSYVJEZGINHAODRSXZJPJUACWWMZLNXKNKGMRTCADXFLLQKDSAENZESQYIXXOMBUHROTZJHSHPCZ");
    msg.s_type = 251U;

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
    msg.setTimeStamp(0.24718765864218162);
    msg.setSource(42073U);
    msg.setSourceEntity(40U);
    msg.setDestination(52816U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.4269508055718346;
    msg.lon = 0.4266584083256981;
    msg.depth = 0.023756130174190315;
    msg.roll = 0.9819409160346358;
    msg.pitch = 0.862539916747032;
    msg.yaw = 0.7321933192809401;
    msg.rcp_time = 0.02875725896097958;
    msg.sid.assign("VBSKSSPAINTFDSHLJJEQJWMKPILOOYDDKNJRXVYGWNPIFMGIQLREZCOBUFMQVBCVAYLWKVIGIEKCIBTHVPXUEMTFORZSZSXCCYBFAZLWXDNTXHHWFOPUDLCWJEPNTPFSNSAINAXXGOMKMKZKURQLNSADOGYXXTMZQYJJTIQTJWEVVHUAVHOCQBWZGRMDIGKBOYBRMLTYZBDPWBHRLMAHQUSCRZYAKGAJQJFN");
    msg.s_type = 93U;

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
    msg.setTimeStamp(0.24873537596902695);
    msg.setSource(4204U);
    msg.setSourceEntity(222U);
    msg.setDestination(13390U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.3902249842880017;
    msg.lon = 0.7571490384165533;
    msg.depth = 0.23491549844870907;
    msg.roll = 0.8842443463010015;
    msg.pitch = 0.23499689276878544;
    msg.yaw = 0.7643428805370401;
    msg.rcp_time = 0.9353736577414606;
    msg.sid.assign("GGYMYGMEQEJHNGJYTACXVKNCERIAUMHWBVMNXXEXLIEJDEWMLAHLOCFXJSMDEIBBGZSRVRRQYJOGIZVHNPULQRTKHQBOOZFSVZLVNNBODJQTAFVKPNHNGLFSHUCSCRXFFVEWAOWIERUWVA");
    msg.s_type = 254U;

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
    msg.setTimeStamp(0.5105675805718197);
    msg.setSource(53439U);
    msg.setSourceEntity(80U);
    msg.setDestination(19087U);
    msg.setDestinationEntity(49U);
    msg.id.assign("TGGWDRTVPILUNWQHLUVJKJRYNHHKPRFSUZAPLBRWSTESCCNAJUDAAFUBDGWHUAWEGFVJVGETSXDZCVICZYOTSJPCQNZVOOTAECDQZLOVBKTKMMMSRRKHPOLNGXGFHAVXFOELB");
    msg.sensor_class.assign("SPEZTVSPYPTFBRXLLCIYCZQOGJVRWMGCMFIUPBABFWSYYNHUKHPEASJFQGGXAMQLNJNXNXYHBTCJAKPJJZUFLXKQGXTSHFHLDITMVKUPTSWRCVPMSQMDKHVYSNNHXDWWDOUCLQFIEIUNOXJZE");
    msg.lat = 0.6556290829379549;
    msg.lon = 0.6525842315729664;
    msg.alt = 0.33741984832223004;
    msg.heading = 0.9349115315252757;
    msg.data.assign("ADNHEQNSTMRISSFHLGZQVOHCCJRATAYWMDOQEXORPKHWOTMYNJLQIATXVJJQTGTSAYLDXCB");

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
    msg.setTimeStamp(0.35033100670364536);
    msg.setSource(58118U);
    msg.setSourceEntity(219U);
    msg.setDestination(4237U);
    msg.setDestinationEntity(251U);
    msg.id.assign("YWZBKRQQNOTPOCSENSWXWRCNJUDUBTMEUOCVVWSJDUTIGABLYXOKMZAKZPEAYNYXFSDLMRQVHLSNQXIQBYCNJGFUBABWQSUKEENPGCZKYGSISFQDIIREOTBQEPORFET");
    msg.sensor_class.assign("NYRGYRUDLJLAIUHAHTK");
    msg.lat = 0.6174014331498923;
    msg.lon = 0.475505693977581;
    msg.alt = 0.47574057611181986;
    msg.heading = 0.23959348567087202;
    msg.data.assign("MZMJMDYZBKFCECIFFSAKZEWAOULPUAVSPEOLJULWGZMUEJHHDIBATCZEKVKXOEDNAUSTXMIUSHDUGHQJXXFEYQIPBXTRPPVVNWBVSDFHKQLXBOKGFCWGQRIDJZBTUYVIJPHHIFSAWOXZYUPRWBSWDRFHLMOYTONCKATDXQEPCWDQMLQZCYRGOKRWNLIY");

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
    msg.setTimeStamp(0.3767973065855478);
    msg.setSource(32483U);
    msg.setSourceEntity(210U);
    msg.setDestination(61740U);
    msg.setDestinationEntity(135U);
    msg.id.assign("TFASIQBWOHFJJLJDIERGJMARHHAIVSLXQZPYRTXAGZTBWZEVFAMASBMIYSIKECHWZKQIHIPNWRMTPQPNIKRVZIVURHGYTDZZRFMOXOOVU");
    msg.sensor_class.assign("MTZFOBXGZWCYBUPAJSJKHYKGXYZDYAYEULGJRIQKTEREDJTYXZIELMIXPNBZNHENJWTLGRSWQUOQHNSDXXJNCIKNRHKYFNVBTTCIMPGQFBPSMVWNPPBBSSG");
    msg.lat = 0.5624484465179418;
    msg.lon = 0.8810251972958655;
    msg.alt = 0.08525929329978565;
    msg.heading = 0.6949521379189058;
    msg.data.assign("VECGLQYLZRSAJFXEAKCHFRJRGTMMKFFJRLDVURGYOCQPLDVSNITKSGUPYRMCUIBZCOQQXNVELSVWLDUSYZOTAHDUQNHMWNKYMQQJHOAOHSJRZIUHWVJM");

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
    msg.setTimeStamp(0.4415439067567024);
    msg.setSource(41090U);
    msg.setSourceEntity(77U);
    msg.setDestination(10954U);
    msg.setDestinationEntity(67U);
    msg.id.assign("MJAOFZIRGHTCEGQIYEIEHZWFFMSBWADFDDLDOEPQPCKSGTZIXZQHIKONZVALTQHZKJAWGVABZTSAKHKESUQYPEEUIXLMXOYFJYVJDVZBOXPLGZQAMBUUOJWRWHNCFCUOLCSVNTQNFRTCSZAVLRBLPMPMPJN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NWMMQUQDITJPCBNVCZLHRIYRJYSWENHFLHDKRMGLQOJMBEZNUFOHNEIYNELRZCKXLNGVCWGPHQOYZFPFJUCKVWAAITDXIDAAYBJOSLPZ");
    tmp_msg_0.feature_type = 219U;
    tmp_msg_0.rgb_red = 123U;
    tmp_msg_0.rgb_green = 186U;
    tmp_msg_0.rgb_blue = 117U;
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
    msg.setTimeStamp(0.8916036695179644);
    msg.setSource(63600U);
    msg.setSourceEntity(53U);
    msg.setDestination(49383U);
    msg.setDestinationEntity(10U);
    msg.id.assign("SESUPGACCJFGTSAWVOFRYZVPKHFVMRRHKOCPASVOJRDPTVFSIPXMPGMXSZJBFYHJOITMNQWWOOPJGHTFRLDCIGXKLQYLXXFDEXZYXRQNYBFGYBWYYZQSDFISEUWTLZMJBNSGKGNOZTBCANUCLNEJZIYWKFCVEITAPWZEIDKXAJBKIDLBQDRQUVTXBWHAIEQAEASVBJDQBWWN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QOZSPZQFBQKSUZESVUYCXNRBEAKACOYJJSWIAOPPSOERUHBTIAMXWGDZDHAOFTEWNEKPODQZDLHVVHFGBHUPYDMWRUYWOGXSVTXCFTSOPXIUVHBLETGXUQNIFYSAG");
    tmp_msg_0.feature_type = 138U;
    tmp_msg_0.rgb_red = 117U;
    tmp_msg_0.rgb_green = 99U;
    tmp_msg_0.rgb_blue = 232U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3813765010236677;
    tmp_tmp_msg_0_0.lon = 0.9967662961958182;
    tmp_tmp_msg_0_0.alt = 0.4054209820356629;
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
    msg.setTimeStamp(0.9328172834600391);
    msg.setSource(35425U);
    msg.setSourceEntity(82U);
    msg.setDestination(27440U);
    msg.setDestinationEntity(100U);
    msg.id.assign("QZMMWSTCCOQAFBKEVMTUEQCNCNDFOJKSMATIKSSBLPYDSDSAIPBTUREGVGMMYKFXCBJZCXAMSGACJVRFRARHXOIPWIEXWXWZHWBNXWNUPNVRWQOVGUKPNKTNELZYIKCFPMTYFBUDAPDBONLDDYUPQHZBQYDYBJGVVAIROETRHZZLFJOYIPNSEYLOEULAILHXELHJGLWQJDSRMZTVRKH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DYTPJFRSEPODZTXBTPXTIMJHWKCQEDHMWVONGRAKDIUXVIBIPZORAVZFLUNTJZOMTPMXANFHJWLAIUGFAVKYNPOCXZESTGCCRQKCPKVROIGFXKPIEMXHUNKBHBHBTAMOIULISUREVKYROPZW");
    tmp_msg_0.feature_type = 174U;
    tmp_msg_0.rgb_red = 47U;
    tmp_msg_0.rgb_green = 28U;
    tmp_msg_0.rgb_blue = 146U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.12631691180699767;
    tmp_tmp_msg_0_0.lon = 0.6585591626159404;
    tmp_tmp_msg_0_0.alt = 0.402168823897569;
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
    msg.setTimeStamp(0.8102072935235365);
    msg.setSource(63854U);
    msg.setSourceEntity(204U);
    msg.setDestination(43494U);
    msg.setDestinationEntity(219U);
    msg.id.assign("IOLGHVQRPOYNUWXIMGDETKQWWITPLXTVUTHHIYSXRZBKQSPY");
    msg.feature_type = 221U;
    msg.rgb_red = 158U;
    msg.rgb_green = 70U;
    msg.rgb_blue = 236U;

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
    msg.setTimeStamp(0.11921659723025613);
    msg.setSource(4215U);
    msg.setSourceEntity(0U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(149U);
    msg.id.assign("SGLXRWHZPLSPZQQAAMYOVOMHUOCIOINOYYPXUJRMCJQDGITWAOSPQDDBGWRLXLXSMTKXTQUHHHXVQOCLADISNMGAKJVWQIEHGWXUWREYGVTGCEIOAWKPWAZJVMNHZTTLBCECKJGCRPQFDZCYFDYZFURVFVBJRIDRBTIIZFBTQNFKDWEZHTZQNUKSYX");
    msg.feature_type = 31U;
    msg.rgb_red = 171U;
    msg.rgb_green = 164U;
    msg.rgb_blue = 139U;

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
    msg.setTimeStamp(0.03908540430115348);
    msg.setSource(34280U);
    msg.setSourceEntity(172U);
    msg.setDestination(34155U);
    msg.setDestinationEntity(65U);
    msg.id.assign("ZDSWLRNAYAWTFFGBBNWBPIGISNSIKNWORIEZNZFLTEYKGTUGHIHEUCJVTCKOGLLWGJPKTLVHAEUXZPDCBNMJQRPNEDBCTEOMDASQSFMQDYHQMMCKZLTSHYOKFRCZAMELFNINDVCLBXVWPSWYDOLZQAAYZFAPIVJITBJPJZQOGGWYUXCRJDUKXOSUBFUSRQNBOBHRLKVAMVPJHIZWGCFRXVDHEIYHY");
    msg.feature_type = 130U;
    msg.rgb_red = 242U;
    msg.rgb_green = 56U;
    msg.rgb_blue = 214U;

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
    msg.setTimeStamp(0.11488251408171957);
    msg.setSource(36218U);
    msg.setSourceEntity(107U);
    msg.setDestination(2129U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.1561049185840352;
    msg.lon = 0.7025879179299795;
    msg.alt = 0.4152618971198382;

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
    msg.setTimeStamp(0.6681220949770132);
    msg.setSource(28714U);
    msg.setSourceEntity(213U);
    msg.setDestination(9234U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.5307520159926199;
    msg.lon = 0.9082074852632774;
    msg.alt = 0.5813198031272092;

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
    msg.setTimeStamp(0.2310026169281847);
    msg.setSource(54509U);
    msg.setSourceEntity(155U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.4416579789751064;
    msg.lon = 0.8134614604852898;
    msg.alt = 0.987533854662832;

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
    msg.setTimeStamp(0.6607119963566245);
    msg.setSource(63108U);
    msg.setSourceEntity(127U);
    msg.setDestination(22491U);
    msg.setDestinationEntity(69U);
    msg.type = 243U;
    msg.id.assign("FPBLGLDAMGPCVAJDBTJOPYRXZDZGXNKAKPSFHSLZHSSXOHMTZSREUQIDEWFTAEEAPMPBGPEQHJQEWAEGUPIBTOIYQMDGUNPWNKERKLCIKNSORILUISNGYUHWCTEKLRORTGQUOAEXVKICTSLBBNHCHTZUMYBXKBWRCNVMKDNXIDMJCIZRYAXVLYXZDJFYNRQJQHFTUMGFIQOLJYW");
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.394872501593188;
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
    msg.setTimeStamp(0.9226762864073251);
    msg.setSource(63020U);
    msg.setSourceEntity(64U);
    msg.setDestination(40038U);
    msg.setDestinationEntity(121U);
    msg.type = 154U;
    msg.id.assign("UCPLPZZIBNGMSWVXSKBHIEXBXMFRHRINGUVTYKPHEFQUBLJCAQSMYTJIGEOSNCDGTVWEJPHZCRJQPXWYJKDTKCQDSZOWZSTRAELOHNYSMRQRKCBYFRZYGMFNPNSDLMOANAOPHQKWJLPWGDNAUJUXXRUPFRICZOJBEOEQOEMYHGZVTDCITXXHDVTLCLBMOLHWQAGEFAVDNGETMIFLRDIYWSKLYG");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 46651U;
    tmp_msg_0.sys_dst.assign("CRDLTNPQWWMNDEKMVINQKLUVMUGEXENEFYJGXRURZTTEPLCDL");
    tmp_msg_0.flags = 130U;
    const char tmp_tmp_msg_0_0[] = {107, 51, -110, 82, 104, -99, 121, -15, 102, -91, 17, -61, -107, -112, -124, -91, 3, -11, 70, -74, 124, 71, 8, 32, -44, -81, 95, -108, -101, 112, -97, -107, 96, 68, 3, -22, -18, -106, -9, 0, 111, -51, 39, 74, 47, 66, 29, 73, -108, -99, -4, -99, 93, 54, 98, 19, -32, -117, 126, -116, -21, -1, 32, -100, 6, 91, -40, 70, -29, 72, 38, 56, 25, 87, -31, -90, 14, -43, -39, -103, 11, 41, 108, -40, 104, -50, 52, 24, -81, 75, 57, -40, -101, 5, -103, -76, 103, 10, -54, -63, -68, 61, 0, 2, 91, 25, -54, -87, -94, 0, 38, 91, -98, -45, -22, 59, -45, 46, 7, 110, -91, -116, 8, -109, 50, 65, -30, -52, -16, -58, 108, 3, 97, -42, -128, 122, 55, -83, 93, -38, -36};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.33320075656210413);
    msg.setSource(10920U);
    msg.setSourceEntity(100U);
    msg.setDestination(63522U);
    msg.setDestinationEntity(117U);
    msg.type = 86U;
    msg.id.assign("BEVQNUDYEODIYDWMPGZQECPKXZHZUVAAUVUXESLMSNNIPGLIPXRUCZVPZRQPWZJSTJNKJRTORAIORMFWFVYFMILKEVOTSUMKRIANEWTKQJBGAHSTHNXFHXRCOLGWQDRGGLPTBQCYYJXFHDBVBMWESZNRYYFUVHYJGBHVKLMIIQTYMXUTVOEDTDBXSFNFWOBMSWFLCAEAPABCNOSCXKFGLRZOHDIAQKHMKKDCJGZPDYAQOHLJTQJCCWWS");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 26525U;
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
    msg.setTimeStamp(0.08758001155968997);
    msg.setSource(30696U);
    msg.setSourceEntity(238U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(229U);
    msg.localname.assign("LGZXKIPVEVCUMAKKZWJFYJELLDFCUXDBSRPQUANDGUYIJAZGCNIT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MQATITPVAKRAAZFJNWGZESWOWFPSVKFZRDCSVSYDIKZMYNVOXBAMTCBJLNGCJBOYSXKSBHPRYXBWWSFZFQOLOHVIDNURB");
    tmp_msg_0.sys_type = 182U;
    tmp_msg_0.owner = 53800U;
    tmp_msg_0.lat = 0.28967466950743226;
    tmp_msg_0.lon = 0.7057805671266985;
    tmp_msg_0.height = 0.09032230679580022;
    tmp_msg_0.services.assign("LEAXEQYUVADBDBHKSRMGHZRPRINXISOYSQTMEYQALOVNTLOSZHKGUFPUFBASJBNMJZOTWIHDSRSCVQXLAOFKVUSPWTMWNLZLBLDWQBHXPQMZVCTUPYKVGEGCJPYADMEHWIQ");
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
    msg.setTimeStamp(0.6896627886818981);
    msg.setSource(20908U);
    msg.setSourceEntity(192U);
    msg.setDestination(54740U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("EXVSSBIGKRWVJCCTLWVSNOLUPWHTPOYMEJIHQXKFOQXLCGURIGPZWFRKJIZZKQLWNJMSPPBBXJNTJXLGUSRIQZNHXPUMOKMPDYWXPNTFAGEBVZNKTYDWBLHEBGMMMHXOFWZDDTU");

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
    msg.setTimeStamp(0.4850940007715304);
    msg.setSource(7191U);
    msg.setSourceEntity(242U);
    msg.setDestination(56352U);
    msg.setDestinationEntity(30U);
    msg.localname.assign("OLIXNVXOFBTXVWMTGSIVWISNKZQBEGBJGTFEWHZULDDDSPGECUPUDBFQAFXPVZQCSRRFTCRNHMROAOZCKVJHODOBRCZPMNXFSLSYTEVWRPTOTUFJBBMKMUKYXOXWNEZGYXLABZNSHCLDMWKHXFAPIYZJRPRQHUOLDLOXHSCJGYEYYTQVQKMHUWRHWMNTJGHQUBFCJQAQADAZEEAWIKGAVSTZJGBEDKACMIUIPGLELIKYYS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HJVHGAODVRIHGJHIKOEVEPSWJHDACWLSWQRBMHFLCPGNJICYGWR");
    tmp_msg_0.sys_type = 114U;
    tmp_msg_0.owner = 2630U;
    tmp_msg_0.lat = 0.5321942473118533;
    tmp_msg_0.lon = 0.7853726102730982;
    tmp_msg_0.height = 0.2998282065382587;
    tmp_msg_0.services.assign("QZYGDTICRNZBXJXGZAQIPHRXHJWRXLCRHKOVIJXJIPREUVDOEFZCXWPGUOTBSVCRHYAAEZNXXNLSDOIUMPSEWTKJGK");
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
    msg.setTimeStamp(0.3611657311960691);
    msg.setSource(34821U);
    msg.setSourceEntity(95U);
    msg.setDestination(29505U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("KPHOPXGSREHWFDMUXGFYXIHPADZWJKLWMQKQFTYTKLGCKUMAYSOTJCXTQZFMKCWVKPMYLCROBFNBIJWGZLZIURANELTZASHFOEQIZDTVPKQGDFRRITRNXWRFVXHJBNIIVMZCBGJYRRTCFSOGHIAOTJNHEVPUYETPEBWIPUDMLUOFAMLJBSOMCYNNGWHALYVDWUQK");
    msg.predicate.assign("FEGYVCDZLHBTCIMDAMZQULRJHTCPSMNPJQXHHLWKWQJKPMYOYSKYIBYBXJDRGYGNVLYJZSYAUJBFQWCSVIAHVVOWZXNNEUSQUFMHWBFZFOTZNAVZDKZYFCKVBDLQTXIBPPAHFPIGMQCULAYGRPBPJMVIKIACFTAJRIWNCSXTEPROUXRROKKGOEXQDSEFNXDOSOWAUEALDLJEHW");
    msg.attributes.assign("UYOQEDOQHQPKJQSSUUSTRLMTTVLZZCNWFCVVFILDJCYYLXOTDDHZUNCQSVTRHGZSMQDTWVGAHBMWFOCIVRFMQAEJRNBOXXXOEVCWGVGTXDLNTKKORNSACKGGJHMESNILUJSJWWLFIOCRBJUVLDNIZGRDZGMKBZRPM");

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
    msg.setTimeStamp(0.920320056270706);
    msg.setSource(48435U);
    msg.setSourceEntity(25U);
    msg.setDestination(32836U);
    msg.setDestinationEntity(44U);
    msg.timeline.assign("IFXWTHVVAELVFMECGUHFJGUQKPGYYXSHTDKKPGSSWAASDPJTWZLXBFIIBHOEFPZRJAXLYYYOGGMUDPQDOBLSHIDNRBCNUDXECV");
    msg.predicate.assign("BNUQTICAEBHBNWKIGMALVSRZRYVDQVNIVNOLDMGEUMKXEUDYSTMMTRYGWEPZKZYHUPZIWHZUQLRQFRXXTFPQTCEKYXBSJXECAQBVLGUSWUKCEALNADBMTLPCCXYGKHCTIFFDGQWOVOHROUWHDVNJFWVCLFYSEFXKODTFQPPOAYQKHMPVIPBTNIJXHRBLYALHKJINJZJUCGEZOSRMSWYD");
    msg.attributes.assign("DCBAGOUJNSSOIPEOOIQCDHEPWQRYVTYDEXRQPKPJCNMSMJBTFQEMZVONLTKILJLTKYKYWBWVFPHCVGWXHYZUGNSXAIBXQZMFDBTWFRZMOGGYIXZMLAGZXYIPUNUJPCHEMHHSTFUJYSLCSRQDFOZQAQJOXGXCUESRAYBELRNIWHEUFASJSUZAOLNWIZMPQRLWL");

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
    msg.setTimeStamp(0.6653477705851784);
    msg.setSource(44653U);
    msg.setSourceEntity(47U);
    msg.setDestination(22082U);
    msg.setDestinationEntity(153U);
    msg.timeline.assign("RXRUXHPLTPMAIZZCZOEWJRJSEKCZBSGE");
    msg.predicate.assign("SISGGWFAPPKNTJFKKXFWDBILFYOSLFVHDTEXUONRWVLRJQLCVSQPIKEHHEIIICCBCDUBUUCKOPXBVPVNYCZRAXLTQEHGVZQFTDUQRMELTRVNNFEKVCWIDZHPBLS");
    msg.attributes.assign("MGYXADKBLUIUGVGLGTZBMKGLRPYAPEAS");

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
    msg.setTimeStamp(0.21501865286124833);
    msg.setSource(24242U);
    msg.setSourceEntity(239U);
    msg.setDestination(56111U);
    msg.setDestinationEntity(123U);
    msg.command = 226U;
    msg.goal_id.assign("NHFOERBXYWTLJDVHCMQHFYPNTVX");
    msg.goal_xml.assign("DJBJTQJUYNTQLPZCQIESSFYRUHPBBYDJBOQVHCLSODUHKODVPEGECDOCGUATYFXBYWNFNILEIQVSAMLEYLZHNO");

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
    msg.setTimeStamp(0.9713348415482377);
    msg.setSource(53625U);
    msg.setSourceEntity(170U);
    msg.setDestination(52825U);
    msg.setDestinationEntity(60U);
    msg.command = 15U;
    msg.goal_id.assign("MVVVSWFUVZFNSMDUEHOYWQANMEUWFKIGNVLJSBTNOJXKHAFLBTTTIGTHESKQTYOUEPRXQDUSPGZCSQDKLJJOQAEBRSBXUKPYOBRIARXGWZIUAYDYSVGAANAUVV");
    msg.goal_xml.assign("RAYWKWXOZHYCSEAMIYZEKKCTAHVFLQUNIYBRRFLTQKTPQENA");

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
    msg.setTimeStamp(0.3741621984595189);
    msg.setSource(8621U);
    msg.setSourceEntity(196U);
    msg.setDestination(27026U);
    msg.setDestinationEntity(147U);
    msg.command = 204U;
    msg.goal_id.assign("MEAARIGEJBIURKPMGIFTPLBZCIEAKTXYLFCMXWUAGWNOWFATKIBNMFYWBTLGOETZECOOGRZLFIVMHRBVVCPOYNHEKXUCVDSLTKNLKACNHCBONPQSDRFQABMSLILQVPXBNHYEVYYYMFYUUNUAGSEFOPMQUDO");
    msg.goal_xml.assign("USLGPOXFEDITESSLJTPXJMBDXFEEXGIYQSRMTVKNPKRGEVJLMCTAIAMKYZXPYGYBZWSFWCGSSTOOSGUDVFPGPRXLRMQOHZDPINHYKAVRFPKIAMYRTTKDVPJFUAJK");

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
    msg.setTimeStamp(0.9728784154761878);
    msg.setSource(50569U);
    msg.setSourceEntity(192U);
    msg.setDestination(30297U);
    msg.setDestinationEntity(229U);
    msg.op = 35U;
    msg.goal_id.assign("JYUQFKIHSEFZEFXYWVVEJHKKWUBNWJSJIAARDNMVDQSCWGCNLXWGKNCCXHWCDIDMXXLDEYBZLUAYFJXEZZGLBRVTQISUAMXFPFOPLVANOOKKYPZRLSDVCKBDHKMZUTAXEJLMWAPKF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SAXDINQCGAAJRCWNAUIUZMCIMPYRJGWBVHFCQOYGLGBYURRXDLAGTKNSDJBLEXFRFXLHPDEWUGY");
    tmp_msg_0.predicate.assign("KUCWOIEVMSOIUOPULQAJFDOXDDYPCXXPWBNIVR");
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
    msg.setTimeStamp(0.5839133106706701);
    msg.setSource(16525U);
    msg.setSourceEntity(10U);
    msg.setDestination(23028U);
    msg.setDestinationEntity(165U);
    msg.op = 126U;
    msg.goal_id.assign("CFOUCWRTFTOEQUVTIIZFRHQRMDWXFTYVJGCSVCPCZLJLSIXKIEQJAPMBZFQZEPBFDHSKMKGKRWRGHOZBQALHQZSRPWLUHFAMDXNBXHUBVFSXVNNJADGZLOWVJVDHEIRJHXMNFZRADOCMPTHBIYISYDTPQZWDYXJPTEXOVUHENQTWEKRAOAPTECUGAMKOUYKJWYXYGBXKMGCKBQLIVLFJNSUNWMLNVPBSOGZGKDOD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BPJIURKOOVQPSJGIBPUWJVDSGCXTDLWSCFASYDFIJWFZNDNREMMOYCFTOWJGFLLFSTDYBHNC");
    tmp_msg_0.predicate.assign("TVCWEYGGGBDFFTPMSVEBCXIKXFGQBYAOMNWRXEZBMVXESZWVHGHOFPHCBJEKBRHTOCIZDAJILHUHOWSA");
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
    msg.setTimeStamp(0.1229475248138514);
    msg.setSource(20088U);
    msg.setSourceEntity(79U);
    msg.setDestination(11050U);
    msg.setDestinationEntity(212U);
    msg.op = 230U;
    msg.goal_id.assign("XXFOWRRJKVGMYVIWXWXQYJUASMWOEVORUQUAYCOELMSTEJBTSJCPMCDXBNBCAAM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WKGUFKMHMGQBCGITSOVJVIODRBRCSCWCCFDPADWUCTNURYTULXYAVJULKFBRUFQSGGZHJNGZEIABKOLEZYTJEPHYZIJRVLYKBITYTMQNFURJRPOHNWAEIGVBEPB");
    tmp_msg_0.predicate.assign("EKQKHLKADUPXJREJGWNWTNPXVAVACVTZTMXYWMCWZVCOHXZOUKFFMUPIRMWHFYZSGGJKGWNMZJDUSREDCNCSWHFBGYYHABLSGIMQRKATHSOBDAUDBUBCZKPRBBGLQAYIYBTLVOJGUQVOXPCPIIDZRJZI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LKFJEIZIGDZZTADDUWGKRRWFITWSFNNQRPVFJXOVLKZTKQYUZHHTBQLMZMJXMVWTQXSEOAULJJXGAUVPQLOBDNXNXSMTEYAOLSCHFEYMGVWFBNRISKJGJMNQYCECWPXHBEDFXJOPEBKDVBGHNHCMIUSNROIZRPCHIGRZYDCDBFHUGDYLWMURBZSOTCOOBCQPKTIJVHSRAZRLUTEVPUQSLKFYCM");
    tmp_tmp_msg_0_0.attr_type = 56U;
    tmp_tmp_msg_0_0.min.assign("OIVEQWYGIYTPRORNMZJJKZBRGXIIGIPFHVHJFACMTORHESHQPWNUBEWOEAGIDTWGZXUCEVPSXKEGXUILYJDQKQMSPCCUVRSNMOGMVCJBKETMJVRYRDDNLVNXJQKXBPDBYMLPZOYTHYQFGDMBZZLBALKROFSDONMIYCAWJNXLEFAMAWAITKGURFURWUEZVFQCDOAKNWOCYTSS");
    tmp_tmp_msg_0_0.max.assign("IMWUUVZLQCSIYAFYEEYKFORVMPKFOCJLINBXCSAGQGNROFBJTCWLZGRKPEVAOYYALIMZRWCECMKTGQGGNHSTVPIVRZOPUIJJZNHXHWDTNQUUKJIGEFQIFTMRKPLRMRHAV");
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
    msg.setTimeStamp(0.6521752814273576);
    msg.setSource(11550U);
    msg.setSourceEntity(164U);
    msg.setDestination(23961U);
    msg.setDestinationEntity(236U);
    msg.name.assign("ERLIJNVTOYEDKTXMGXNFDTPREYVPBMFSRFJVCMWIAHEPOLYUWBQYTRLBOAWWFSBQJXCZBRKKXDPTSOQFNXXIAELFHWLOMVMIIXZCGRTHDKSANHLHMVQGCAYNKOSLHDOIRLPJBGPPXYPYNMYHEXZUQPCJUXZJSEMNVTKHHFAUDSWCSCGJJRE");
    msg.attr_type = 228U;
    msg.min.assign("JTSATLNPOFMYHVRLSFVNTXQIFHNNNDWYABFRLVDVEMMCSEETBZOWFSCXQERUICNLUULZAOBORSUZPWAWXLEJGNMFYLEOAADRDUFOURSVJYXPQ");
    msg.max.assign("DSKRFHUOJNZYSEYRQLOTTUFLXDAODYLLYOZPVJFVAFCUFPIWTNPKRMRWMUMKCQPCVQXNBXWRIRBVFLPHTIHQXZQOZPOTBGNTRDASMBXQTKYEPBJUBXLSHHOWHACQJNDBMZWMYNRQSMGAILVHLXCHRELNYAMFWSKZCPSSGBVVAETFQX");

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
    msg.setTimeStamp(0.7996573961351634);
    msg.setSource(34305U);
    msg.setSourceEntity(67U);
    msg.setDestination(33069U);
    msg.setDestinationEntity(70U);
    msg.name.assign("TESOAQVSRMHUMBOPVOSMFOMKTYYHTUECXFSGGSGAYLBITNFZDMIRVAVZPZECWNWELSDQBKMZFOVDBBAWCYNLMKUIOMLDUPXFPWDWGZAJTXEXCJGIQWELDQOTCWKYOGIFNBPCXNXZISNURGRTEIGAVPHJVAJNDHJNNVBWCUGLPQYDRTDEZSHBOZJBXVCERFKRPIQKLKHQCZYAZQ");
    msg.attr_type = 196U;
    msg.min.assign("HRKVINPFIQQHMXXJLMNEVYVBWYNOVLLIBCJZENBAZEMJOTPQSQUQCVVCQPXLYFCRYVUCEOUTRNXFFTIAODVWRGSFRFDYABUINBETGUILBUHOGWWVIFCAKPZPODWMODQAWDXPZDGTMCQFGCOKXRKKPKSZETZHJAPGDEBEHVNHUGPU");
    msg.max.assign("TBIIOHHROVYTZBHPWQJONAMMPMNUSQMYSNKSFNPFRKNGHCVCZPEAZRVWJGHZXYCNIDZJWDRVLPKTYLPKCDRBEQLJBQXUEUXUMWWFUWCENOLYETSBDXFILXNPAYJSGDTZFVYAAIPEARUVTUQAKCPQSQOFYFXUFEPFDJJVFNXRJIOILOEBMGTLLVKITMKHRZLKYTJKJDOZBCEGEGCSRNVOGCAKUUBHGQWWZOQARDVSZIGXASIYHSXHDWLXHM");

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
    msg.setTimeStamp(0.829191761235092);
    msg.setSource(20750U);
    msg.setSourceEntity(238U);
    msg.setDestination(64829U);
    msg.setDestinationEntity(11U);
    msg.name.assign("HAGBPXPVWAZPBNNWBIMJGSCPRKDTTIDRYPIVKQJHUPUICLNUHSDHXYIHXSGDAOYZRFDLSEHKNZVWZRHVAFBGDSMFFGQNPBQTMTOMRFPTIJGHDCAYOO");
    msg.attr_type = 242U;
    msg.min.assign("ZUZAFPPPQPXRDGHNSREVNUFBLAIJSOHEMBOEUVREMIHG");
    msg.max.assign("EEEVBUDIACGDUYXFIUQPKHWZBTMHZYVMXUTRNFXKTIKIYFSPAJPPTZWMMZUFHUGQCRYQYAEICVNLXSCBTYMGXRMCLQMEBKSHWXFCBLPVTBCOEUWIQSIGCDETQXBRCANPSZMNGAOUZAPVLAJATOSNLJEIRDGLUOFROJDHDBDMECLKSFJVKAXNLKNKIQHSV");

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
    msg.setTimeStamp(0.030900487225464346);
    msg.setSource(12249U);
    msg.setSourceEntity(52U);
    msg.setDestination(6846U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("XDYMMTGDZOSRVKQQCIKBKFQOXXSIGTRJLIHHGFNHDMHUCEBSDBPRTHNWSVPYKWVKGLNTSJSBGQEHGUXPLTEOXJH");
    msg.predicate.assign("UPGSZZTPUMHEZGUJXJUBCSUVCJIFVYKAHUIXZQFWVLLHYDQMMSHYQTOFMTVYSZFNTIHRAWQYXNERTLEHIAZPNGJUCACRNZDLFZKFTADAJKNXOIUQEJRWLELCKPMQKVIBWXHAFFKIIBRLCOODDSZDMEVSPNETISVEOTCMEWLOEZWBXVHDPQGNOUCRBBYX");

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
    msg.setTimeStamp(0.18814656550101094);
    msg.setSource(35793U);
    msg.setSourceEntity(161U);
    msg.setDestination(48584U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("QFYJFCHQDNZEENUOZCANSKBDRMHPQCNXANWEZG");
    msg.predicate.assign("FAEYJXIRSDTJSUPCWYBAKMQPALEEJCZOROVTJNVUFRBVTSLDROWPAGFNMKGJMIRUMNXVKGBXFPSXMRDKKFECVHDZXGTGYMNGXRFOTDYQOBUWPYLOHQJXFLCBOYYSDLXSYZIMMUCFLTHHPATMDFGNZLUROBZZVBVXNPBNEQTAY");

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
    msg.setTimeStamp(0.8852336315337946);
    msg.setSource(35854U);
    msg.setSourceEntity(118U);
    msg.setDestination(25473U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("UKKNZALEAHJNQBSGDKFDPHOSGFBVPOOKYOVXRIFYDMPOAMNTKYLGIZFYJXEAPLCHSLZBMWDYUODBEPADYEVWTOWNZSJRIFTVBTPXERGBKZYQAXTAVDAIIOPCXDCQKQSHMVLXMRNNXWEPNHJRFJMGUWYANWJQOQFNCGXRNZUZCHGBGTUOTWWHFIRLUIFMDPVIJSCKLYUIKHKWHRTCQTMQSQRJEBVZZSV");
    msg.predicate.assign("OBVEJORWRTBKDPETZAYYFJWLRNCZGMUJBPJVBQHXGUJWHMMJVZKYJYIFQBPZHGCTOGEGTDCFZFKCRUZWMNQAUSMKFANEVCIMLXZHGSRBNHLYLMYHSYIAUTEKZINNAXWHJNSGCAGUXCZSDQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QXAASGYPTWIASKZBSZRBZRQDRCMPMIFUPEWCQNWFWNBUVWYALBOEHAZEFYNCWLTNJNCUDUEHMLWOHOUBPJIFHSBEOQJUMAGAHKRXYRDOZFWIDCMGZJTQXPVMNACIXNDCYZFDVILRRBHGJKCIJRXOYESQGLTTDKI");
    tmp_msg_0.attr_type = 137U;
    tmp_msg_0.min.assign("EKFXMBOIAGAOMQQKNZPGBAVUAQHQREEBSEGLUNQCCZPILLOJFVAYLTAOHLRKJPYBZKUGOYFERUSDBRGIJCJDMWMEAEWDRSPGODXIPLFWNOQMFVZWINCRVXXZHMJWDSXYYHPRNFFQZYCAYTCZSTLJDPGUC");
    tmp_msg_0.max.assign("NDVNOKLYGVOMNPEQUUTWZAIAAIGGH");
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
    msg.setTimeStamp(0.4368515253976868);
    msg.setSource(63416U);
    msg.setSourceEntity(100U);
    msg.setDestination(32291U);
    msg.setDestinationEntity(151U);
    msg.reactor.assign("VEQXLVDZFMOKPRGDNKIJDYBISDUJIDTMDHCVZCKRWWXGOSORSNJIJMMTKKVWZEUXAYHPWOKDRVQFONGHSNENHHBQVZXFIGHLJGLOOFYRMWSHQDBBCBEVCFYGUIFLBALUELFJKAAMWGQQXLZHUTAAWZRYWJJJBYIOYOAKXRTNKCPQNJEDTT");

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
    msg.setTimeStamp(0.9375575379452742);
    msg.setSource(64738U);
    msg.setSourceEntity(247U);
    msg.setDestination(37071U);
    msg.setDestinationEntity(182U);
    msg.reactor.assign("KVWTKAOESKEOLJVXFTHPZEMXMDTSSNRFZKOTZRCWYXTTIYNRGQWKVAKAQCAURHTJTJJQZNBVJDMKSZBUIYZCSYRMCOWUVSERZCUSIYGPRXZSBDDYOLKWYQQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PVPULZGPOKVXAHJBFBNEGEVYDHUSGSHEKWBBSNRZTDWDJNOGRQOCTJEEIIGDEIUVJXKTSCDHXNZNHHUPXLHYOUVTUNAUCOFYWBCFQNOEFZAOIKXWCOVQVPKKRAFIZIITBIAHDJWSGWNRQDPTMAKWWHIORDTXWMMJSMYPVYMBLLLCFCQRECJRMMCBGYPRZUBSSPSXLJUZRXALUAGJQDLTQDYTYLNQFRQXFGZQVCAZHGEYWLJPKSZXTENVMM");
    tmp_msg_0.predicate.assign("YQOEOWAIXGEKWDHALIXAZJFYSENDUXPBOTSUNALKQLRRETJKBDBWYQBFRGGUJWFZXDHIGSLGXQFLIUYHJLYGFKUVUCVPPCOEJKTHINS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QICJGSTCLGKTDDVCDBFSCVIFBCPDZMZPSVRGGBOLUFWCFBJEDRPZNUONZRYPAIEFUSOHDSITARUVYAFYLLOIPMEYUNLGNFHRKHDHJHWOUTXJEHHKTZWSYYWEKKPRYQWBXWFNJIAVQGEUFE");
    tmp_tmp_msg_0_0.attr_type = 4U;
    tmp_tmp_msg_0_0.min.assign("HCQXOPJZEEDNHKJRDJZCXMBWTAKKGIACLKTKRTFPQBLQMBGQVHHSASXAPJMOVNEUFAPRPJOJDDVPITFYNWZYVNLLBIQVXUJQHXZWHSGKAOCKYECACFJUZMFBBNHSOTTVUZLUMTJRQGRWQLVBYPJGYRSNLMRVMYZIKTPTUXZGFFRCWVWQXISMFDPCSUOEMOIIBSIUADLWRNMWCKBD");
    tmp_tmp_msg_0_0.max.assign("YHSPJWZBBTDFRAESWECYNUAXDKJEFQCNDMGZCMKLZYQVNO");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9533183499852408);
    msg.setSource(29310U);
    msg.setSourceEntity(229U);
    msg.setDestination(38174U);
    msg.setDestinationEntity(177U);
    msg.reactor.assign("UOOHBHWOLCYUNGALXEZEZEKUVGBPVUMCQJFTSDFOKBOASYVCHWHWIKVUJZFDEXMRSWNDTXFJZBJLGAMQDKWHMLLZNUMRCCXJYPQVYXWSKITWSRDIRBEORSBGNXSAGTQKPBGTX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DLGTVNYEUHKLDSVUNGHQWKRPCDLUKIHXYPEFTCLJERBSWPMISYIKZRSSOJYWLJRQBGPVTZWOTIPKXKFNHBMRMNZTZVZUIEACZOKGTOPIALLEBNUQWQWMGNHDYVWFMQINHJZYTIPAIYOAJBSOTAUCXQLUFKEEP");
    tmp_msg_0.predicate.assign("OGVJMQLPPRRQNLFDTRHITUZWCXLXHMFQBJVUJDECTRMZAQCCJMMXTOFYILHPALKPZQKMCVAFBZQGUQRYGADTOUASYRHVDDTJMWIYWWEPAZLAHKNMUKEBWCTJHOPMSXNISPIVUOHITBLGXYOABZZQNIVJVGWE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QIIBMMXMXEFXGNIZTUXLJYPBFKCQPPYPLVVDEJRTKSACTHHFSELUWZLURQBOICIUWYRXKMUYNSHJUGFUDOLPAZAGIFDXBEXYJYYKKCCHHYPASDTVKTNTCKOHIPEEWSKTDFOXBJZFCJKZRQEOSODTWVSMONREZRPMDVHWBNQXXIMWQRGMULCFEGYZNABPQDVCFABJWGDRNGWLONHHFQGNVAYRTQSWLCEOWUPQJNDTZAZVBB");
    tmp_tmp_msg_0_0.attr_type = 242U;
    tmp_tmp_msg_0_0.min.assign("TFHDUGCTZABQJINRMSKYIDDFECARJHVLETDIZXDRBIENNZTALRXUYLWSJXB");
    tmp_tmp_msg_0_0.max.assign("BHEQIDLRMNBAJDPNDMZFRRXMXJAHKGVNGZL");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.1146182393508075);
    msg.setSource(38600U);
    msg.setSourceEntity(102U);
    msg.setDestination(46196U);
    msg.setDestinationEntity(102U);
    msg.topic.assign("IIGASRYATSSGLJCOOFDXMIEISHLOVKPKSCTRJWTTKVMPBLHFOFBYPXGXPFHLMYEDZUBASKUAEUJJTVFKDNNZXRIZZUUQKVKFRCDRBYGNIXGRXUPHTONCWSECLQAWBMZWOINLAPJWGNCFWTOCNRDVXPAPUJDOBWVCMTCGNZTJYYFKUKMLBMGDEZT");
    msg.data.assign("XUNNYSLTVKHTWATUYCMROPGSHUHLPTMRGRHKDYROMMHGJJGZWSMMEMUNYTVPQXGUBTKCXCFOIKSEUWIXWLHZVKQVIANBBDBBDIZRZDSQJAURHWRFJWBEOYFFSTYZVALNBUFCVH");

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
    msg.setTimeStamp(0.14065835043205854);
    msg.setSource(9041U);
    msg.setSourceEntity(98U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(27U);
    msg.topic.assign("UDOUMDTRQBEWYGXTNQYLJITBJNOGDSCCYJUFOOQTPXHWWUOSTULFENIEGGIODBYMTWJKOXQPMBZYFWLAVVQOHSTJSPFNLTIPRZXIEPSAIFFBPRQMKAGYJDXKHHWRCLQJNZCNHKHZYSJILVDMMQTUJMAGJVQOXNOHCKCGWFFVDHKYCBGAERSEPUXMWFKVKN");
    msg.data.assign("WKHRDBXIQSIWDODKWDKVANSIIYNXMAHTEMPPTABEDGETIHGPLYGBLBXIGVZQFQMOCORXXCPNOERTWR");

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
    msg.setTimeStamp(0.02467431644072815);
    msg.setSource(51727U);
    msg.setSourceEntity(22U);
    msg.setDestination(44690U);
    msg.setDestinationEntity(231U);
    msg.topic.assign("WSKCAWIPQBGXJQJMTVPX");
    msg.data.assign("QCCFJIXSBNRLPUNUGGRIBDJFMOZLABIYTJIMOFOZAYCVDPKGGNPJRXENRVHMEDNWDDKLMCPQVZFOGAXNUQHYCUXDWGDFVKNAKCVXPOAEFYHQOTKRBWKJAJXRYWQZNQZSPSLTIHHDOSBWRYFGYFXHKOUQMDITIUVVOLSHCVWIGFEAKMMXCV");

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
    msg.setTimeStamp(0.6098009379474212);
    msg.setSource(29067U);
    msg.setSourceEntity(204U);
    msg.setDestination(57758U);
    msg.setDestinationEntity(7U);
    msg.frameid = 27U;
    const char tmp_msg_0[] = {123, -113, -106, -88, 68, 9, 49, 21, 78, 51, -77, -114, -123, 89, 122, 42, -48, 69, 35, 44, 7, -115, -37, -63, -13, -80, 21, -59, 49, -71, -97, -69, -125, 103, 67, -96, 37, -39, -43, -41, 38, 106, -22, 92, -122, 1, 89, -80, 98, -73, 97, 109, 91, 90, 73, 57, -62, 69, -110, -70, 114, 19, -38, 124};
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
    msg.setTimeStamp(0.02599660371302126);
    msg.setSource(44186U);
    msg.setSourceEntity(154U);
    msg.setDestination(2593U);
    msg.setDestinationEntity(105U);
    msg.frameid = 172U;
    const char tmp_msg_0[] = {-102, 69, 90, -64, 51, 4, -87, -77, -85, -127, 3, -31, 119, -38, -107, -70, -101, 119, 10, 43, -49, 79, -114, 56, 37};
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
    msg.setTimeStamp(0.7365694657932893);
    msg.setSource(50860U);
    msg.setSourceEntity(162U);
    msg.setDestination(4186U);
    msg.setDestinationEntity(14U);
    msg.frameid = 102U;
    const char tmp_msg_0[] = {-112, -3, 16, 105, 109, -88, -42, 116, -17, 29, 116, -106, 99, 107, -45, 97, -124, 36, 77, 50, 15, 55, 38, -80, -57, 115, 49, 94, -32, 1, 81, -65, 37, 70, -49, -24, 28, 102, 86, -85, 14, 108, 29, 10, 121, -88, 44, -69, 60, -68, 58, -66, 62, 74, 59, -9, 98, 96, 96, 99, -101, 9, -77, 64, -115, -12, -80, 107, 74, 5, -64, -56, -39, 69, 81, 20, -113, 66, 92, 7, 94, -78, -127, 36, 64, -111, 68, -22, -58, -27, 25, -122, -95, 97, 5, -78, 24, 49, -4, 15, 81, -124, -126, 51, 1, 83, -49, -49, 35, 58, -127, 63, 9, 98};
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
    msg.setTimeStamp(0.4432146046398884);
    msg.setSource(44603U);
    msg.setSourceEntity(44U);
    msg.setDestination(43619U);
    msg.setDestinationEntity(99U);
    msg.fps = 81U;
    msg.quality = 67U;
    msg.reps = 180U;
    msg.tsize = 222U;

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
    msg.setTimeStamp(0.020204205043071632);
    msg.setSource(55519U);
    msg.setSourceEntity(189U);
    msg.setDestination(3533U);
    msg.setDestinationEntity(181U);
    msg.fps = 97U;
    msg.quality = 193U;
    msg.reps = 186U;
    msg.tsize = 65U;

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
    msg.setTimeStamp(0.8170489516159753);
    msg.setSource(16159U);
    msg.setSourceEntity(134U);
    msg.setDestination(18194U);
    msg.setDestinationEntity(173U);
    msg.fps = 104U;
    msg.quality = 199U;
    msg.reps = 36U;
    msg.tsize = 135U;

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
    msg.setTimeStamp(0.9774144739075742);
    msg.setSource(63299U);
    msg.setSourceEntity(237U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.0807532056695176;
    msg.lon = 0.17531406037644381;
    msg.depth = 106U;
    msg.speed = 0.7960283539533449;
    msg.psi = 0.35656885773798586;

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
    msg.setTimeStamp(0.539205109993706);
    msg.setSource(45571U);
    msg.setSourceEntity(168U);
    msg.setDestination(43080U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.2155540666347726;
    msg.lon = 0.46389149567005095;
    msg.depth = 195U;
    msg.speed = 0.6413874139532489;
    msg.psi = 0.3073423398526922;

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
    msg.setTimeStamp(0.8165508086229893);
    msg.setSource(3192U);
    msg.setSourceEntity(106U);
    msg.setDestination(44700U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.0783059606587978;
    msg.lon = 0.00410508105780083;
    msg.depth = 132U;
    msg.speed = 0.5818900093258497;
    msg.psi = 0.36324471349319354;

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
    msg.setTimeStamp(0.28853446756689605);
    msg.setSource(34822U);
    msg.setSourceEntity(22U);
    msg.setDestination(23238U);
    msg.setDestinationEntity(36U);
    msg.label.assign("YVOOTXBUNPFMNKWBOWRWIJRUEIZHECPTCLVNYOBADATNKDO");
    msg.lat = 0.339099680725624;
    msg.lon = 0.2372167926027151;
    msg.z = 0.5651132884918024;
    msg.z_units = 170U;
    msg.cog = 0.9597884808719572;
    msg.sog = 0.7541323200937644;

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
    msg.setTimeStamp(0.20161860593238667);
    msg.setSource(21631U);
    msg.setSourceEntity(65U);
    msg.setDestination(11857U);
    msg.setDestinationEntity(143U);
    msg.label.assign("RUHPEAMURBXKJNDHZWCGFJKEMSQORJDBYBHYDWEEVQSAJHPWVDGYPTCNZ");
    msg.lat = 0.3967815112437446;
    msg.lon = 0.801892589164767;
    msg.z = 0.6442057922191717;
    msg.z_units = 15U;
    msg.cog = 0.9059401157017521;
    msg.sog = 0.16486031520722766;

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
    msg.setTimeStamp(0.24399127876775828);
    msg.setSource(6071U);
    msg.setSourceEntity(133U);
    msg.setDestination(45666U);
    msg.setDestinationEntity(38U);
    msg.label.assign("CHXLBIUUZXIVYNYUJKCSNKEJOHSGQDJRELBMSRYUYBZPYSVOMCCQOPAZFRLHEAFWCDJUBWHVKEZWTPEDCJHCRGEWBADRGUOTOXAQAZLNSWIICLRPWYBQHPKSQHFTVWGIPMTTLMRBTUGPHIZXEHGWUDBWFXLNDTAJDNCYPVRIVFJMQFOFZEPGFWJKMJALDQNFGTMOVY");
    msg.lat = 0.5957664949290111;
    msg.lon = 0.18668975835796875;
    msg.z = 0.9785936066535669;
    msg.z_units = 160U;
    msg.cog = 0.3244180218133117;
    msg.sog = 0.06430847303920295;

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
    msg.setTimeStamp(0.12018504478469505);
    msg.setSource(35040U);
    msg.setSourceEntity(33U);
    msg.setDestination(47461U);
    msg.setDestinationEntity(112U);
    msg.name.assign("VVENIACHIXJXFKBNYWPXZWBLNGCDNEDPTENGUZMUGORQKFVOYMYEXRHMHNQEACIUJFTBYDGWCTDH");
    msg.value.assign("KGLEVCIKHHTPQUBMAOMEIJUSTXJWFNLFSGQODUDTXYGYFEADPILDIXARXQSKFVZXMISVDAXUFDWOQJGCRHBOZCYAKPHASCXGZCFLTHTTOURFJIBROIZQZAMBLWHYCVOBPEEFOPZISNJLRDRZGFRHNXEBAJVMYUZTYWTSKGMUVJCEWHLMBBDCVPLYLZRQWYWNCKKSZMGQFPNMUBVKWIKYDEQVINAJ");

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
    msg.setTimeStamp(0.7644881704410457);
    msg.setSource(46678U);
    msg.setSourceEntity(208U);
    msg.setDestination(64603U);
    msg.setDestinationEntity(203U);
    msg.name.assign("VYSVQAFEJBNMJBTTXCPHESMKQSBAKSJDKHELZIBUIDAVYXQQRNWMOVNFUKJURLJCWIEVFJETUCUMEAGDWOHSRDPHHDNIVTCZILRXTCJPFCPFMJXWOPGYQHYDPRINEPKFGTOIGVPANZSLRKCWXPMUQLCGYFVMUGB");
    msg.value.assign("DJNBTDNEGTHJGVNAZHQBQBFEQLQYHVIAIKCNFSPEFNVBDALPSHYZEVUKEOEXWUDDTSLVONMF");

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
    msg.setTimeStamp(0.6650354220877344);
    msg.setSource(45701U);
    msg.setSourceEntity(112U);
    msg.setDestination(30997U);
    msg.setDestinationEntity(180U);
    msg.name.assign("HXVQFQCRGVGVAHLWDAQLSBIEDIXFJAVZTYWKGTIBZPUBGPQZVKBZHJLFYKPOAJVRSYKQBORTXQXRHYYLOPQFTRIZJXYBHOYISVMSUUSOQVUTQIGKHCBZNCXHMDT");
    msg.value.assign("WXGELPRWYPOJCIYZZTFYBHXDBIUWIHWDWBEXDOYUJHHVSSXRXCFVPQCSUMJKOJLJFNHYHJLVJRCEFAQGLLLADSVUGDWDBGNEFSWYQPHINLKRTTAIEICWOYPQZTZQNRVNNSAYXDKVFOAHRTLBSDTHVIFUXARCANJMAZYETXZSTJHIGBQCQCKUEEBG");

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
    msg.setTimeStamp(0.13338186831238363);
    msg.setSource(7530U);
    msg.setSourceEntity(204U);
    msg.setDestination(21653U);
    msg.setDestinationEntity(243U);
    msg.name.assign("FWDCYUFCPHCPNLZSWOROJRALUSWDQQXFDIDZNQSXOTGFNVYSAMPMWCUYUJPPIMEKMXJRRTMCCAQIORHKEBTRIQKDPAZWVSZTAPNAUKNQXTTWVBYHLHJGCWJZLBHHYBXDGXJLADGZPHDKKTYTNOQWIFIOOGHVLCDHOKEZZFFXMSMYUSZRLJDXVPFUH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XTUIGMRURFPBQZICMXMFWXMQMFGWCLFAYUNNWWTLZWHEYQGOVCZTXZOXYGUAASKIKAQSINUJOHXNWEUGJYIZUHZSDTCBSRKJPJCDDSUPGBKNVYOGQCYYJXJEDNPTHDOHHBZTMMPLGHPVLBBVDJLSVBRWXD");
    tmp_msg_0.value.assign("HFDBHOWSSMAHOGBYELSUQJJEFFORRTTNUXSYMIDETDACJQKFKONCTKMGFGGQTNJVSETIYIMXYYXMWVESIYALBWQNAETJNBHRPTHOEMGRUVUJFXEQVCQOBPAIZTOPDLOPCPIXRZAQDMSDXANUWISDUFCPLXKHGHVQHDUNDK");
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
    msg.setTimeStamp(0.46490635112055556);
    msg.setSource(54938U);
    msg.setSourceEntity(3U);
    msg.setDestination(19212U);
    msg.setDestinationEntity(110U);
    msg.name.assign("GRZJBUCNOUTSBEAZUXIGYJDFNEHWPMMNCLIXWSRPMBDQNVGZBUVVGPGBSMQIJOJNPKKZBQKJQKAVGTODRUAMLZPYRNXPNLYWCOXQHHUZESETQTAKCCTGKIEWCBDWSNCTDUWXLRGMIVOFIRXSSETCOSRTYYAMLQHTWKDJCDWVYGQDOPFFMOZHEKRAPLVUEBLIEHPWYJLFLAMAKULFZZWJBFPYVFNHFXRSABTIDZQCVIJIUVNHHXYJXSMEAR");

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
    msg.setTimeStamp(0.29849886645631474);
    msg.setSource(39464U);
    msg.setSourceEntity(92U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(77U);
    msg.name.assign("TAUVSPYSKCBBEGGNP");

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
    msg.setTimeStamp(0.055155401878769106);
    msg.setSource(28526U);
    msg.setSourceEntity(130U);
    msg.setDestination(43700U);
    msg.setDestinationEntity(10U);
    msg.name.assign("TOFBONQIPRDHQFJLZUQZYDNMIOWKRCREAUVXABMGBGHWJNTGFFOSRJQVKNTJNRAKW");
    msg.visibility.assign("CEPYYWRUTDAXVQHZZRVDDNQLWUPPFKCUVADFPNRHAOAIJEN");
    msg.scope.assign("TJKFLHVRFRYTUZPIXBNASEALOALKTBFRFSQVGYGXZDPAHKALOLTODXWYTKGKZMUHCFFPMHUSUWQCEEZDGNUAWPPGI");

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
    msg.setTimeStamp(0.15235869051541417);
    msg.setSource(6041U);
    msg.setSourceEntity(22U);
    msg.setDestination(19495U);
    msg.setDestinationEntity(14U);
    msg.name.assign("SZXOIXCGMQTNTFVRKJHQSZAHPPNQUZJGUTCXBOTVWBVZUXRDHLWVYKJOWLLDDQPOWOJMUGEOTDRINVQTOHMKFVVSTLLNPPYAIKDZGOAHXSNEQFECXFIONIYBIZJRFWBYUSBHJSWYEVRKGFIKUFFBLSADAXAPHNEMUXEUPGBLBMCWCCAKIFWMFSNKT");
    msg.visibility.assign("GAHBIYKKEQPMMQOIUFQDRSKONHIFHLSDTSOHHCIEQOYMRJZELKEUHJPXFNDJKBDGBXLWXMZN");
    msg.scope.assign("OGMQHYLRSPZPLISQBDVXSQYJEVXIARXCUKFKDEZZNZOZFKTELGSFLRIPCTCVYOX");

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
    msg.setTimeStamp(0.8408629010061573);
    msg.setSource(55867U);
    msg.setSourceEntity(174U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(15U);
    msg.name.assign("XLYTUVZGUIPMVYXWPXWDAKFJGRIHLFMNIFAAAJSYVESPYXOKZRKOCPKLOSDBMQDYJBVVNLMGTS");
    msg.visibility.assign("CMDKZIFTZFKMWFSQOFXASCNAEHSDYYZLQRRFTZCMQUPHBMAHSJNDLN");
    msg.scope.assign("FVNBJZUWWPGLRECBTGRCTHPVELJLVXKRBNAGWUWSGSZAJNMOCSGZPLISEEFTOMNTPNMUUSWSHQMGMACHJFQFQDXXTXLQELRNJNVUPKBLTNVDSOXDIFJWKWPCMBCROPVKXFOZMQYACYDXKOOUPZJRBCYJICTEZAIKUXWJVYADRIJKIFGYHKFARLQVKAZKYTGCXLDHOVZHQMWBTDISRZHDQGAOEQVFBISEYBPWR");

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
    msg.setTimeStamp(0.07167585843963364);
    msg.setSource(54328U);
    msg.setSourceEntity(73U);
    msg.setDestination(47420U);
    msg.setDestinationEntity(97U);
    msg.name.assign("IBLKFNMODUOEVEDCORFJMANOJHVGMAWFGVRZCBCAAGZKQDMDCCVFYSGQTQYRMWHLIUKXDJWYXTREYURXNZZSSEXJJVHCPGPFGXEDTYFUKMCVIEXYVHNPJNTZMKBHHAQIPVZGOPRDJHRBLQOPQXFAIBZAEPNSSLJAODBDMUUYMGWVYSHZTKTSFZICVBYNLBIKGEKJTYSZLK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DPBTOJFMKGYBSCWNGOWQALSRYTJQQXYHNXJHCZPHWZWJHNXPTQJEOSANGAUSCSPUVCJHLCSOLYSWDPFOXKE");
    tmp_msg_0.value.assign("WRDYSXYXZFLFGKGUKWWURVLNIRGXLVJPVGKYZQPMOYMNGRLSTSVQETIWBUQEDCRJDPCQLBADEVLCYQKSHHZHWBRXZGTVCJKZVFSFXGIEUHPVHNHDNTUKFOBMELODPIBMEVKCAZLNMLNAXAOJUCXTRZSAQYJWZQAUOIIJAOMNTNUTPBGMEVCLHCKEHOGSWOXFPTTCJJBMWMXURPEUSHBCMYXFKDZGTFHDSQIQDAWAWPSOYOIKQNRDINJZ");
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
    msg.setTimeStamp(0.2764425701652392);
    msg.setSource(54394U);
    msg.setSourceEntity(118U);
    msg.setDestination(24979U);
    msg.setDestinationEntity(38U);
    msg.name.assign("DNSIXOYRXHUWVDTOOQPTHAFOBNMPECFGXCKYCMKIACRQYKNNLCPNHBFDWIGAYEZJSCLPGS");

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
    msg.setTimeStamp(0.15460455948976248);
    msg.setSource(13473U);
    msg.setSourceEntity(32U);
    msg.setDestination(19720U);
    msg.setDestinationEntity(137U);
    msg.name.assign("EZFGDJNYTSEPQZEUAT");

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
    msg.setTimeStamp(0.587248764578927);
    msg.setSource(11673U);
    msg.setSourceEntity(103U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(54U);
    msg.name.assign("LIUHOEOZWPSFWELEUIHXBAXUABRRTJDVCJVUFINTGCUILDZQENNTSXWXDCZCYIAFELMTEVBWRJVRSTSKAMNDTOEXYPFEWCNZPFISXGMGHAUGOMWKJZFHGBHLAQGDKZMPBVNFSNYGYQPUGQDYBAKDQTXCVYH");

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
    msg.setTimeStamp(0.030353101923943027);
    msg.setSource(4753U);
    msg.setSourceEntity(221U);
    msg.setDestination(15811U);
    msg.setDestinationEntity(186U);
    msg.name.assign("YNDXZMNBAUIDCIKGDHCULHBOVTIKPDWCRJTXLGTJWPQAKZOKPDXEOHJRSICGYIJFDHFMVMMTCEXCEMSSZLQVQRYQIPPAPUISYMTOIXUDCAPWORJRBPBPYNVBAJVFQNGELTLXCENSIHHFVGTWAWNSJOBZYOQOIXRZZSUKSQKLBWLYTGBOQGSHLURDFZFEORRXVMNCZKVXVDCYVENUAWPRHFXYNLWGEAFMTWJKHDKJFGUABMYFG");

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
    msg.setTimeStamp(0.7368762916931069);
    msg.setSource(43093U);
    msg.setSourceEntity(167U);
    msg.setDestination(42854U);
    msg.setDestinationEntity(149U);
    msg.name.assign("PFWMBSRQJKCCNRHHUXTGULMISDKAAKXFEVSSPSPXIZPYUGYFTCPVKGUJFUOFQJLNGDTNMAIBYXHTSMINDRAEJOLAPWZJEZVLFXKGVYSEVQDQPMRRDWAHXPQBETRXJDMYHOZZGWOCFKYLANOQMSINEHKDHGTMYUNVLTFBYZUIMBTUCJUXPZZLOHPFFCJVUCOHIDCEGGBKBDSAOMWAIJXKDEEQGNTBZ");

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
    msg.setTimeStamp(0.2927443804938362);
    msg.setSource(40630U);
    msg.setSourceEntity(73U);
    msg.setDestination(46989U);
    msg.setDestinationEntity(148U);
    msg.timeout = 1731278358U;

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
    msg.setTimeStamp(0.39257690746461393);
    msg.setSource(38022U);
    msg.setSourceEntity(219U);
    msg.setDestination(4752U);
    msg.setDestinationEntity(70U);
    msg.timeout = 1705631495U;

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
    msg.setTimeStamp(0.7707916440125097);
    msg.setSource(54314U);
    msg.setSourceEntity(6U);
    msg.setDestination(29086U);
    msg.setDestinationEntity(169U);
    msg.timeout = 417501679U;

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
    msg.setTimeStamp(0.26131074215822137);
    msg.setSource(56292U);
    msg.setSourceEntity(245U);
    msg.setDestination(63441U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2933076542U;

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
    msg.setTimeStamp(0.5213613865038346);
    msg.setSource(701U);
    msg.setSourceEntity(22U);
    msg.setDestination(47152U);
    msg.setDestinationEntity(113U);
    msg.sessid = 1538069613U;

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
    msg.setTimeStamp(0.4140373623662894);
    msg.setSource(41672U);
    msg.setSourceEntity(113U);
    msg.setDestination(838U);
    msg.setDestinationEntity(38U);
    msg.sessid = 2245624011U;

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
    msg.setTimeStamp(0.863309755920904);
    msg.setSource(55798U);
    msg.setSourceEntity(191U);
    msg.setDestination(6211U);
    msg.setDestinationEntity(80U);
    msg.sessid = 161790576U;
    msg.messages.assign("ZFSASCXDHTPLESSTYVKRKQZ");

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
    msg.setTimeStamp(0.9732854605432693);
    msg.setSource(56020U);
    msg.setSourceEntity(92U);
    msg.setDestination(2223U);
    msg.setDestinationEntity(21U);
    msg.sessid = 3326928210U;
    msg.messages.assign("IHIRVRMPNZUGRNFCUYHEZXUYSKSPMCTLPWODKJIAQFZFSXVJFYGWIWXEBETLPOAEADDCYGUDPJFQMJMCBLFYJZGYALWGFKRPNKJNMXTJEXYSHVWDVKVVMCHUQEMELIKOGSUHAZZRRMAVQGDOWYLVAPCQBOQNFNRXNZOHPTUSCXONPTGTUIUHCLWBEVWXQOGOERTXNA");

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
    msg.setTimeStamp(0.16155214686139407);
    msg.setSource(46740U);
    msg.setSourceEntity(232U);
    msg.setDestination(6489U);
    msg.setDestinationEntity(21U);
    msg.sessid = 2145866663U;
    msg.messages.assign("ONEPHTVHQEQSRRIIOCRBKGCTTRNIPVFZTLFZWYBGUHGCFASUBDKWURMSOMJPWKGMAWZFSBLCZQRJVBVQVEHWMLBQHNPYZPKXGPUORNMJSICDUPNLOVCZUUSZDNHQORDJPGWTVOWYATUNQLDKMOIHGKZAXZYFEVSDJSFIAJBYKPEFYHDAXMIASNXMGELIWBXETOAKETZLBMLAYE");

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
    msg.setTimeStamp(0.8006356468597974);
    msg.setSource(45973U);
    msg.setSourceEntity(44U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(33U);
    msg.sessid = 2937233696U;

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
    msg.setTimeStamp(0.1986062210954186);
    msg.setSource(39396U);
    msg.setSourceEntity(175U);
    msg.setDestination(62021U);
    msg.setDestinationEntity(73U);
    msg.sessid = 2390217162U;

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
    msg.setTimeStamp(0.4696152031700238);
    msg.setSource(61820U);
    msg.setSourceEntity(46U);
    msg.setDestination(14745U);
    msg.setDestinationEntity(211U);
    msg.sessid = 1781455715U;

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
    msg.setTimeStamp(0.489383546273514);
    msg.setSource(56163U);
    msg.setSourceEntity(121U);
    msg.setDestination(8569U);
    msg.setDestinationEntity(57U);
    msg.sessid = 1874456742U;
    msg.status = 99U;

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
    msg.setTimeStamp(0.7540561037465582);
    msg.setSource(44705U);
    msg.setSourceEntity(68U);
    msg.setDestination(15120U);
    msg.setDestinationEntity(224U);
    msg.sessid = 3080561921U;
    msg.status = 202U;

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
    msg.setTimeStamp(0.9027128512650434);
    msg.setSource(20325U);
    msg.setSourceEntity(125U);
    msg.setDestination(41846U);
    msg.setDestinationEntity(152U);
    msg.sessid = 4157694371U;
    msg.status = 21U;

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
    msg.setTimeStamp(0.048065799922365704);
    msg.setSource(14721U);
    msg.setSourceEntity(27U);
    msg.setDestination(55246U);
    msg.setDestinationEntity(243U);
    msg.name.assign("PVZEUFCMWFBHFETAFEKYIWAUJNHMANZJJIBEKEVFYMQTZJCKBUOGMTSGLLKCIWCPQUAWPTLIQMPPGABGDWXHJVHVOQTFTETDXSSRUAWCLVCUMVGOVDESRLMHGJJQPZXLKXLNRMSEXYBHCWSLIYYVJLBCANDAWHNSROQTPYZIHGQDLQZXXMXROI");

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
    msg.setTimeStamp(0.8135212181425813);
    msg.setSource(65250U);
    msg.setSourceEntity(159U);
    msg.setDestination(32489U);
    msg.setDestinationEntity(193U);
    msg.name.assign("BGSKJAEFOFTQQDRZZXZNORKUXVMMRRWXRSIKRDTJHLOWUPUIOPWIHPSHBOOUBTHNJVFRQMTYDBCVXDZGWAOQSWUQPPFPUVIKMZALQAQGVLTAZAGLJVYPNESHLVMJYRLVBOSDBKNLNWUEBJSYMJRCQTHCXPZDTEXGYKFBDXFKXNZMCQEH");

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
    msg.setTimeStamp(0.8293006991239097);
    msg.setSource(43194U);
    msg.setSourceEntity(236U);
    msg.setDestination(20089U);
    msg.setDestinationEntity(226U);
    msg.name.assign("ADLJKGWGNAPROMONNOZQBUJLMDXCZXSKLKQHVDXPIVOZSHWBCAYVZXFPXNHVGMUBKJGYNFSANZRWFJEWMCZIRIBJYTJVACFSIQUGQWHPBDAAIQ");

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
    msg.setTimeStamp(0.34515673614014963);
    msg.setSource(53230U);
    msg.setSourceEntity(190U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(41U);
    msg.name.assign("HKBRGJLZSRAYQLOJJBVLMWPGPRQCZOMXDHSVJSVOUVIQSDXUEOCRCIFJNRLXYIFHIZESEDMTWWTFWUCEWKFLBFPZZEKEQLWKPQGKSCLDBNPJSCWTCGEKAKBUBZNBVFBAWJSTJAWQHAPXADSPMNVACMTUDDGOGMNFTHDXUXKUOLRQIINZMKNPJOAXPWPQNMVGHENYYFXBRLYYUFTRCXAQHKTDSXRZEYATGNHFBVVHRMOHDIYLOGYTVIJ");

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
    msg.setTimeStamp(0.272759595803987);
    msg.setSource(57661U);
    msg.setSourceEntity(127U);
    msg.setDestination(47264U);
    msg.setDestinationEntity(7U);
    msg.name.assign("NFQYXCDDLEMKTTYSCATABBBRDDQDRNPSYOGJPMOMJVEUMCFVIIFSOOBEXAWDKGSVHHCMHVAOZDBKGLYYWCGQQOHWPALNAGWFMEZAITGDPYKAYPACKNJCKRRTWNKURCKUHZSLLUICNRZZPNGHSORENCKLQFOQISAUJVBZILFXWUBSURPVERPIWZJRXNXEYLXFOJILXENJYQ");

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
    msg.setTimeStamp(0.3844979710881983);
    msg.setSource(5807U);
    msg.setSourceEntity(242U);
    msg.setDestination(49323U);
    msg.setDestinationEntity(56U);
    msg.name.assign("QYDIULZSOCGBEOHAIHHUBWCPWGZFIB");

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
    msg.setTimeStamp(0.844040829626657);
    msg.setSource(43783U);
    msg.setSourceEntity(73U);
    msg.setDestination(61639U);
    msg.setDestinationEntity(184U);
    msg.type = 119U;
    msg.error.assign("TCZQIBEAFYBHOKKPSZZBQQEMAXLACSRNRNSQPUUZPFWPNTPGAWGQWSVLWERPEOOPFJIVDMJDIZAVGILHLMRFYNK");

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
    msg.setTimeStamp(0.9603225705719461);
    msg.setSource(24795U);
    msg.setSourceEntity(228U);
    msg.setDestination(23570U);
    msg.setDestinationEntity(132U);
    msg.type = 61U;
    msg.error.assign("DJJDTMRHAPIOTXJHLGAMKUXKACSJNQBNQSMOLTJWVERGIXYRPNZCKJBUTRMYBVWNOMPBIAXTZFYTCKQQPOZVPDEIE");

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
    msg.setTimeStamp(0.8091585768530756);
    msg.setSource(46599U);
    msg.setSourceEntity(100U);
    msg.setDestination(45645U);
    msg.setDestinationEntity(158U);
    msg.type = 215U;
    msg.error.assign("MKMKGSFXPUBEYDXQVBELOKIEISDKFCNUFTCUWHPTFZETJGSDWCVCTGXUDCLRYEIHUOWBNUTBNADPHMVUQMYXGKYQYQCGHRZFPYBIORBOLVOZRSCWHQURTTDOJELTNDAHFFXUCCZMPQHSWVGHMXMLJPQFLJMKW");

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
    msg.setTimeStamp(0.37736748117565355);
    msg.setSource(49491U);
    msg.setSourceEntity(38U);
    msg.setDestination(57048U);
    msg.setDestinationEntity(214U);
    msg.seq = 52641U;
    msg.sys_dst.assign("PBTBWJCICVDQNBNVTFENSKUNYSQEPLXVCFSIUCUGNEZYGAYHBGIJPKWAZAZQWILTEYAJYZEZTEIFRBODRSDLBQROKMRJGIHNOQSONWXLFLQFDXMJWHFNPDGXDLGWG");
    msg.flags = 50U;
    const char tmp_msg_0[] = {-31, -63, 101, 118, -106, 119, 25, -66, -123, -29, -85, 126, 85, 52, 48, -24, 11, 124, 74, 44, 11, 20, 1, 29, -70, -122, 119, -20, 29, 37, -80, 26, 66, -89, -80, -90, -96, -97, -102, -64, 5, 120, 116, 107, 64, -88, -119, -84, 10, -45, -118, -43, -72, 43, 79, 55, 81, -14, 21, -16, 96, -8, -123, 124, 89, 100, 108, 41, 67, 81, -81, -65, 14, -110, -75, 84, 101, -65, 33, -99, 0, -110, 103, -37, -125, -41, -5, -82, 67, -21, 18, 33, 45, -110, 20, -64, -9, -27, 85, 22, -10, 12, -65, 17, -71, -44};
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
    msg.setTimeStamp(0.8585288456820788);
    msg.setSource(15530U);
    msg.setSourceEntity(95U);
    msg.setDestination(60349U);
    msg.setDestinationEntity(2U);
    msg.seq = 7210U;
    msg.sys_dst.assign("KCBXCLGCJFFFPUFFDYSTHYDXZOSYPMOIXTBBBJRDCUONATSEDPPQQEOZSOMHZJLHDYRKVVEDCINZEHFDVPGAZFAUTYTVASNUHSVNNRRKXHIZXSPNQKLTEYRWESQPFGMMLPWFKQBJMINDSGMZVNLAVQGKXCHWIYCMDYXBRBQABUTMQHOXIETRFLIJAYELZJPGGJUPTVZCDIWUXOGENERKWLSGKIUQWCGMWKWVJUNQOOBRJCJYVKRALMAAWLBH");
    msg.flags = 130U;
    const char tmp_msg_0[] = {-119, -16, 18, -111, 22, -26, 26, 66, -109, -101, -42, 106, -32, -91, 48, 25, 61, 97, 56, 116, -51, 107, -107, 105, 68, -128, -74, 100, 72, 58, 70, 99, -21, -124, -114, -34, 99, 82, -53, 46, 20, -73, -109, -45, -7, -101, 113, 80, 114, 82, 77, -33, -61, -41, -18, -43, 41, -114, -115, 9, -66, 123, -67, -122, -92, -115, 69, 115, 72, 29, 29, -5, -65, 65, -125, -56, 43, -74, 52, 6, -94, 25, -49, -52, -1, -63, -47, -11, 75, 0, -16, 31, -16, 98, -30, 105, 35, -123, -99, 51, 119, 9, -43, -102, -64, -30, -82, -25, 21, -94, 19, -123, -119, -47, 123, -13, 83, 29, -44, -17, 32, -72, -46, -55, 31, -77, -22, 57, -8, 7, 102, 43, 103, 120, 124, 15, 33, 19, 8, -76, -66, -48, -107, -102, -33, 61, -66, -66, 91, -123, 100, -100, -109, 113, 0, 50, -21, -99, -42, 45, -30, -60, 50, -83, -48, 63};
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
    msg.setTimeStamp(0.5605296089780724);
    msg.setSource(17476U);
    msg.setSourceEntity(209U);
    msg.setDestination(58765U);
    msg.setDestinationEntity(228U);
    msg.seq = 28047U;
    msg.sys_dst.assign("QLIJPLFHEETUOOINKUWFNGIWZWUNGVINYVQJNBBDSWRXNWLATKCJHIHXSJGDRMDEDBGLIYXJUKFTYFCRJZSKDEUTGFHHGWRTCRE");
    msg.flags = 83U;
    const char tmp_msg_0[] = {30, 43, -23, -67, 67, -95, -66, -128, -91, -23, -30, 101, -126, -114, 31, -29, -52, -11};
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
    msg.setTimeStamp(0.8087107103759725);
    msg.setSource(18853U);
    msg.setSourceEntity(135U);
    msg.setDestination(46082U);
    msg.setDestinationEntity(240U);
    msg.sys_src.assign("ROGQLNFBTRVGRNVCSDHWBXDJYWQBMRFVKDCIBKKXA");
    msg.sys_dst.assign("VLEVLGFMKVHGCEYERGAZZKEORC");
    msg.flags = 101U;
    const char tmp_msg_0[] = {100, 7, -26, -53, 121, -63, 119, -123, -103, -81, 52, 84, -26, -30, 110, -106, -28, 66, 35, -30, -7, -90, -6, 54, -110, 23, 103, -63, 48, 37, -114, -58, 90, 53, 76, -89, 106, 27, 125, -25, -107, -46, -80, 13};
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
    msg.setTimeStamp(0.04193774273446449);
    msg.setSource(42477U);
    msg.setSourceEntity(232U);
    msg.setDestination(57147U);
    msg.setDestinationEntity(236U);
    msg.sys_src.assign("LQLBGOFBFHZXIHGVQSWQEABEDCPPRRQHKYYQZNNPQVSOHKFIUDTADXDWIOPQKKVDGJZGANVDV");
    msg.sys_dst.assign("OEXUOTQHFJZYBKBRJMXQPRHPROGOJGXEYZ");
    msg.flags = 114U;
    const char tmp_msg_0[] = {2, -101, 90, 83, -104, -55, 88, 113, 0, -98, -78, 13, 75, -21, -50, -96, 97, -117, -10, -58, -61, 3, 83, 62, 25, -40, 69, 105, 14, 61, -7, 67, -48, -128, -114, 122, -17, 70, -25, 8, -96, -27, 34, 123, -116, 22, 54, 8, 63, 52, -109, -77, 72, -92, -64, -123, 57, 107, -105, -31, -46, 91, 61, -43, 93, 57, -54, 87, -23, -58, 10, 46, 64, -67, -78, -128, -42, 111, 12, -107, 14, 115, -60, -27, 23, -114, -92, 122, -56, 18, 27, 12, 47, -81, -11, -125, -102, -60, 27, 104, 82, 105, -43, 94, 122, -39, 84, -120, -119, -63, 44, -61, 30, 24, -33, -65, -92, 20, -20, -88, -6, -65, 15, -62, 66, 110, -32, 27, 112, 108, 62, 113};
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
    msg.setTimeStamp(0.265848943187616);
    msg.setSource(30289U);
    msg.setSourceEntity(116U);
    msg.setDestination(20544U);
    msg.setDestinationEntity(182U);
    msg.sys_src.assign("NMENRVUJEUJPYJVUFTYZNLQHDLQIBIKWGEYSBGBMRSPSAPTQJVTPPXYZSVEVOCKSLBOCPGYOMXENVNKCZKYYDQXWGSIDRUKHFVOUQRPBKKSMMEWUHAKMFCWTHAOZYFVFXDSWMXDFHYHPADKLAUBIEJHGXLQIDRXK");
    msg.sys_dst.assign("IWCABWYVXDTKZYJSNSDVFLOEDRXTMYDCDGFVVDURIDLZMAUFGGKATFGJRYRSVMEOLCUHQRLGTLTVEENEMNLMPSXGHRHDGHOGFBCSKJMPHHQTCVQJCBBLNMFAZIKYOPAJZJIOI");
    msg.flags = 179U;
    const char tmp_msg_0[] = {7, -28, -89, 64, 106, -96, -123, -68, -119, 35, 35, -82, -30, 113, 124, 37, -19, -109, 112, -36, -74, 26, 96, -99, 49, 82, -84, 56};
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
    msg.setTimeStamp(0.586704280373853);
    msg.setSource(27404U);
    msg.setSourceEntity(12U);
    msg.setDestination(50682U);
    msg.setDestinationEntity(14U);
    msg.seq = 37198U;
    msg.value = 144U;
    msg.error.assign("OFKLNTSZUXJKYLQFQIIMSLMGBGXSYWRXJPMEJQAIAYIMHLQNHXCMDVAAVBZOTEZDFFMCLXEBTZCFEWSVCEIUFMDPCUDXNFAJTOGWPUMBPRHTWDHWQXDBQSZJJENIRYSLHGEKULTBUZYAEAKNHSGISAIXPPEYUWRBYRPVVDKWOCXTUHDUQCIGGDHWJKBTOUZDGIZ");

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
    msg.setTimeStamp(0.7309568768088641);
    msg.setSource(31022U);
    msg.setSourceEntity(234U);
    msg.setDestination(6730U);
    msg.setDestinationEntity(100U);
    msg.seq = 49656U;
    msg.value = 170U;
    msg.error.assign("KFDRFQLDUKNFKGOHRGSXHNNCKGJSPBDWXMETGYZXQYCYFHVBZORXUWRGJYYYNXFRPKHXATJAMZALBUAZOVTQCDCUCPHUNSJAEWXDRGHTQEAVLIVGFAOBMIKLDZJWZLYAMGOVUQNBCMBZTMFGEXBVNBTIKRVQTCQKZFSKXSNLIDOILDTYPCEUWJENUHURTCMZNOASRJWHIFPZWBEIOJVDYPQHLUELPDMIGSWJJ");

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
    msg.setTimeStamp(0.7209522546219312);
    msg.setSource(22081U);
    msg.setSourceEntity(254U);
    msg.setDestination(45735U);
    msg.setDestinationEntity(145U);
    msg.seq = 44761U;
    msg.value = 143U;
    msg.error.assign("YLMHTJULENCSYXGCIBGONZXXDFRAIDSUVHTFRIGTCKUXDZZIPFOIGWXJHCPQCAMYZYLVIOSLWTFFXNMTGAMUEUWGKSUEKVEJBCKSIRKZQZTAMFHKPBRRXAWDVRZOEQXYRWBJMNEMYMBLYHEJNDEHAMPDLLJGVQADBCBJCHRSQQCWOJKKYOLFFGNZCFBPVZEHMAPLLARUOQHSYUQNPWVSUF");

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
    msg.setTimeStamp(0.8210348836159664);
    msg.setSource(40973U);
    msg.setSourceEntity(240U);
    msg.setDestination(33244U);
    msg.setDestinationEntity(226U);
    msg.seq = 23257U;
    msg.sys.assign("SGKKFJVUGSZJDSTSEVWILKYATXOSZQECTRFZLKXDOAIMVMRWJBTYMRGTHHXKVXLLMCCWYEOLUSVRCZLGCTEHUWPBSBNMBAWUJPBADYGIVNTXGYQQIKBXMPJFHHGHZCUZIRAJGHFOJAJFUWUPWLPAEBYEFUODKENRQZIUQT");
    msg.value = 0.7198769818350733;

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
    msg.setTimeStamp(0.7388183592113481);
    msg.setSource(56312U);
    msg.setSourceEntity(165U);
    msg.setDestination(47608U);
    msg.setDestinationEntity(112U);
    msg.seq = 50589U;
    msg.sys.assign("OUYVWBSXOGNQNAQKWFMGSELMHVHZCFRHXLBEDFTOVWKAZQLQXGVVYMSDNPJMWGARKCHOTPWGBTGN");
    msg.value = 0.5150119070433578;

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
    msg.setTimeStamp(0.23330692413132137);
    msg.setSource(35328U);
    msg.setSourceEntity(48U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(149U);
    msg.seq = 6499U;
    msg.sys.assign("ISGYVDLZJOUXCAMHXQVZLZCYWUMZGUUSYDVLTWFYKNIYQPIYHVVZBNEOKTNVNVCUJENJTSGUOEFZAWXQSRPQKYTQTZHLDGHCQJUHJRTLBNXQTCYPOAOCEJFWELIWKRMQEHRGPIAIPMHVNDGKFXGAADIKQDYXWAZFOWCRKDZETGMTPJBXNSABVGSJRHFKAEUXWOVBPH");
    msg.value = 0.19192068197393364;

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
    msg.setTimeStamp(0.9839033032899117);
    msg.setSource(50981U);
    msg.setSourceEntity(170U);
    msg.setDestination(42885U);
    msg.setDestinationEntity(25U);
    msg.seq = 48871U;
    msg.sys_dst.assign("OHKMKBXHMIPZRSVWHOQPZEAIDCFCRUNMZERQTVIJNLGRDPZWNSHEPZJYIKRVNCMLFSGAXHJMYCXQSCCOCNHAGFCFGXVNUUWAXGNJZGUWKOFJAVJYYAYLQXCYMBIXYJAASITDTOZSZRTEEGNTKOVLQDBMXGTDSIFDYWBCGNTTHPQUXHMRXESDEKHVHNBPLOVEDSBUUDMRBVJJZMUFIQGRAPQFKRBLVQWLLDWOKSUIKBPQYFTKWFOZTYEAPIWWLB");
    msg.timeout = 0.22516557184495467;

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
    msg.setTimeStamp(0.3509634531208723);
    msg.setSource(36268U);
    msg.setSourceEntity(246U);
    msg.setDestination(65490U);
    msg.setDestinationEntity(33U);
    msg.seq = 21881U;
    msg.sys_dst.assign("NLAGZMBKACIOXEYZWDOTVCOBMKARLGRUOWBTVTIFDPRYNMIVCUXWKUYSZFVDAOCHGWPPMEGECFDOCLGMCAPPZDWDRQEVUKUSVJLBSSKHDTGDWZABXRKQZESMYNXHZANSBXJMTNKWSRJZMLBOHFETKLPFHJKGULTQBYLXEYPHRFLJRFSNOVUXGDBOWZC");
    msg.timeout = 0.27415488300733803;

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
    msg.setTimeStamp(0.4942917617888387);
    msg.setSource(26032U);
    msg.setSourceEntity(63U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(57U);
    msg.seq = 65369U;
    msg.sys_dst.assign("LIRWHOEOKHURCPSFHGCGQPYDFDASVZNSBVLEXEJZSASPVKMMQYBJSPTERSDIIEXPFKBKNRZUBGKOYGTDRATFTIEHCZULVGXUPWGPLCILTZBZAVGANDZJYWJFVXMWJCMLEOYJWXDKSLUMANMXGAKLTUPYOHYJWNVUBNVOICFMRUQZSJ");
    msg.timeout = 0.6326874674993838;

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
    msg.setTimeStamp(0.008219253795353376);
    msg.setSource(55271U);
    msg.setSourceEntity(106U);
    msg.setDestination(10696U);
    msg.setDestinationEntity(155U);
    msg.action = 249U;
    msg.longain = 0.7946888675533066;
    msg.latgain = 0.12217250388973266;
    msg.bondthick = 712196365U;
    msg.leadgain = 0.3532980523451663;
    msg.deconflgain = 0.6357403575695355;

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
    msg.setTimeStamp(0.5109779758689367);
    msg.setSource(59824U);
    msg.setSourceEntity(94U);
    msg.setDestination(13903U);
    msg.setDestinationEntity(137U);
    msg.action = 30U;
    msg.longain = 0.7999156027871056;
    msg.latgain = 0.20034040891291893;
    msg.bondthick = 405590199U;
    msg.leadgain = 0.779631488059351;
    msg.deconflgain = 0.48528253241442565;

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
    msg.setTimeStamp(0.724964237122911);
    msg.setSource(52395U);
    msg.setSourceEntity(153U);
    msg.setDestination(56236U);
    msg.setDestinationEntity(30U);
    msg.action = 97U;
    msg.longain = 0.14138112389280044;
    msg.latgain = 0.21139207410292693;
    msg.bondthick = 1762240254U;
    msg.leadgain = 0.07537048223656795;
    msg.deconflgain = 0.7451008178516894;

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
    msg.setTimeStamp(0.7101148651894809);
    msg.setSource(42496U);
    msg.setSourceEntity(242U);
    msg.setDestination(8778U);
    msg.setDestinationEntity(54U);
    msg.err_mean = 0.5782646428924764;
    msg.dist_min_abs = 0.7013680017278726;
    msg.dist_min_mean = 0.10536033317306659;

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
    msg.setTimeStamp(0.8168185903677718);
    msg.setSource(33232U);
    msg.setSourceEntity(112U);
    msg.setDestination(61727U);
    msg.setDestinationEntity(131U);
    msg.err_mean = 0.39820783022350803;
    msg.dist_min_abs = 0.6513717807122891;
    msg.dist_min_mean = 0.4082577721788637;

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
    msg.setTimeStamp(0.11107330398891568);
    msg.setSource(33890U);
    msg.setSourceEntity(39U);
    msg.setDestination(12518U);
    msg.setDestinationEntity(117U);
    msg.err_mean = 0.6470705846460206;
    msg.dist_min_abs = 0.20091430806365562;
    msg.dist_min_mean = 0.6842104268413642;

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
    msg.setTimeStamp(0.4559829086701267);
    msg.setSource(39049U);
    msg.setSourceEntity(105U);
    msg.setDestination(65214U);
    msg.setDestinationEntity(87U);
    msg.action = 123U;
    msg.lon_gain = 0.6061473413046398;
    msg.lat_gain = 0.2793305753765981;
    msg.bond_thick = 0.7259002007449028;
    msg.lead_gain = 0.5731045435611984;
    msg.deconfl_gain = 0.6964916379218158;
    msg.accel_switch_gain = 0.9750006413938633;
    msg.safe_dist = 0.658079882801101;
    msg.deconflict_offset = 0.3817533151976952;
    msg.accel_safe_margin = 0.26400891392514636;
    msg.accel_lim_x = 0.9714325246173093;

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
    msg.setTimeStamp(0.9617176808501674);
    msg.setSource(54785U);
    msg.setSourceEntity(162U);
    msg.setDestination(59837U);
    msg.setDestinationEntity(237U);
    msg.action = 56U;
    msg.lon_gain = 0.7347993486892059;
    msg.lat_gain = 0.7543215544082476;
    msg.bond_thick = 0.7315559584032744;
    msg.lead_gain = 0.7092272087077734;
    msg.deconfl_gain = 0.8376236089246901;
    msg.accel_switch_gain = 0.5121233329159468;
    msg.safe_dist = 0.45081942610894865;
    msg.deconflict_offset = 0.972846464593094;
    msg.accel_safe_margin = 0.715592009343397;
    msg.accel_lim_x = 0.32197680238187687;

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
    msg.setTimeStamp(0.8589381904677691);
    msg.setSource(56515U);
    msg.setSourceEntity(36U);
    msg.setDestination(22792U);
    msg.setDestinationEntity(132U);
    msg.action = 189U;
    msg.lon_gain = 0.025537563632664795;
    msg.lat_gain = 0.006023732685513705;
    msg.bond_thick = 0.12675495967496375;
    msg.lead_gain = 0.7367578026486287;
    msg.deconfl_gain = 0.6654488239299257;
    msg.accel_switch_gain = 0.11442074837892124;
    msg.safe_dist = 0.32838720675390387;
    msg.deconflict_offset = 0.9537217607274412;
    msg.accel_safe_margin = 0.3154436943897181;
    msg.accel_lim_x = 0.7634963738497683;

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
    msg.setTimeStamp(0.4726472400829107);
    msg.setSource(22532U);
    msg.setSourceEntity(97U);
    msg.setDestination(576U);
    msg.setDestinationEntity(35U);
    msg.type = 38U;
    msg.op = 104U;
    msg.err_mean = 0.1090318108737881;
    msg.dist_min_abs = 0.2891557020178681;
    msg.dist_min_mean = 0.6847478114454217;
    msg.roll_rate_mean = 0.4551751088418241;
    msg.time = 0.24532734819495128;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 126U;
    tmp_msg_0.lon_gain = 0.9409620543530833;
    tmp_msg_0.lat_gain = 0.8422983871295843;
    tmp_msg_0.bond_thick = 0.7590264677469292;
    tmp_msg_0.lead_gain = 0.7372513839642122;
    tmp_msg_0.deconfl_gain = 0.7909130535795432;
    tmp_msg_0.accel_switch_gain = 0.8638711744989817;
    tmp_msg_0.safe_dist = 0.7399403008935537;
    tmp_msg_0.deconflict_offset = 0.005485703564182209;
    tmp_msg_0.accel_safe_margin = 0.3248633968926926;
    tmp_msg_0.accel_lim_x = 0.9785349977555564;
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
    msg.setTimeStamp(0.9214697214958414);
    msg.setSource(8239U);
    msg.setSourceEntity(5U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(247U);
    msg.type = 253U;
    msg.op = 116U;
    msg.err_mean = 0.7645581668898133;
    msg.dist_min_abs = 0.7176058777780948;
    msg.dist_min_mean = 0.9381197955584941;
    msg.roll_rate_mean = 0.07229667423640518;
    msg.time = 0.5816352974233896;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 44U;
    tmp_msg_0.lon_gain = 0.07759507062970272;
    tmp_msg_0.lat_gain = 0.8521496710605451;
    tmp_msg_0.bond_thick = 0.34526130362662477;
    tmp_msg_0.lead_gain = 0.6815840164696029;
    tmp_msg_0.deconfl_gain = 0.385582254351883;
    tmp_msg_0.accel_switch_gain = 0.6233924595674724;
    tmp_msg_0.safe_dist = 0.3408883587845637;
    tmp_msg_0.deconflict_offset = 0.8705228519207666;
    tmp_msg_0.accel_safe_margin = 0.6390839047557313;
    tmp_msg_0.accel_lim_x = 0.26453877837334816;
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
    msg.setTimeStamp(0.6275245398752483);
    msg.setSource(34222U);
    msg.setSourceEntity(59U);
    msg.setDestination(6089U);
    msg.setDestinationEntity(208U);
    msg.type = 197U;
    msg.op = 26U;
    msg.err_mean = 0.6164586574080031;
    msg.dist_min_abs = 0.49572151742067094;
    msg.dist_min_mean = 0.056772329976758074;
    msg.roll_rate_mean = 0.9869602849084452;
    msg.time = 0.7493424267684109;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 151U;
    tmp_msg_0.lon_gain = 0.9343927668383762;
    tmp_msg_0.lat_gain = 0.11220601520882867;
    tmp_msg_0.bond_thick = 0.08722831651226959;
    tmp_msg_0.lead_gain = 0.4325902211275259;
    tmp_msg_0.deconfl_gain = 0.5209493017541574;
    tmp_msg_0.accel_switch_gain = 0.1357889813870815;
    tmp_msg_0.safe_dist = 0.36021887981865963;
    tmp_msg_0.deconflict_offset = 0.5060969225290782;
    tmp_msg_0.accel_safe_margin = 0.5938717428099094;
    tmp_msg_0.accel_lim_x = 0.9863853994813475;
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
    msg.setTimeStamp(0.16772172357348414);
    msg.setSource(60756U);
    msg.setSourceEntity(32U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.37195180939628525;
    msg.lon = 0.19560023169145568;
    msg.eta = 3741056794U;
    msg.duration = 34762U;

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
    msg.setTimeStamp(0.9925381225171355);
    msg.setSource(22434U);
    msg.setSourceEntity(156U);
    msg.setDestination(279U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.25861984068792954;
    msg.lon = 0.5016680030190779;
    msg.eta = 3312570252U;
    msg.duration = 35899U;

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
    msg.setTimeStamp(0.9554520481275229);
    msg.setSource(13102U);
    msg.setSourceEntity(233U);
    msg.setDestination(14321U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.802404852643091;
    msg.lon = 0.18043503890988155;
    msg.eta = 1383613853U;
    msg.duration = 29042U;

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
    msg.setTimeStamp(0.290720245399018);
    msg.setSource(8348U);
    msg.setSourceEntity(123U);
    msg.setDestination(59360U);
    msg.setDestinationEntity(49U);
    msg.plan_id = 3064U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9936988680183646;
    tmp_msg_0.lon = 0.6909745862449156;
    tmp_msg_0.eta = 3707931916U;
    tmp_msg_0.duration = 54266U;
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
    msg.setTimeStamp(0.7463538660273464);
    msg.setSource(20440U);
    msg.setSourceEntity(94U);
    msg.setDestination(2127U);
    msg.setDestinationEntity(1U);
    msg.plan_id = 41286U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.1511685102615865;
    tmp_msg_0.lon = 0.9594099426470073;
    tmp_msg_0.eta = 4041306170U;
    tmp_msg_0.duration = 16143U;
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
    msg.setTimeStamp(0.6665349412233968);
    msg.setSource(33958U);
    msg.setSourceEntity(50U);
    msg.setDestination(20045U);
    msg.setDestinationEntity(151U);
    msg.plan_id = 56816U;

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
    msg.setTimeStamp(0.9212544588596201);
    msg.setSource(19392U);
    msg.setSourceEntity(6U);
    msg.setDestination(51390U);
    msg.setDestinationEntity(188U);
    msg.type = 57U;
    msg.command = 6U;
    msg.settings.assign("MGILTPJSJLGTHCVWZBHQIKYNBGUIKYCDZVSWTSLADNQJZAXPXYDOEJSBLRYBJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19965U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8054907410498263;
    tmp_tmp_msg_0_0.lon = 0.3923212191808626;
    tmp_tmp_msg_0_0.eta = 4368831U;
    tmp_tmp_msg_0_0.duration = 8984U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CVIVMTWMDQJMAEROAOKRCNEMWLOTXFYYHCDOJOWELTXHFPUFNSJRXSCQDRHHUQQYEUKHCZIYNMNZJRXFZKPEUPLNVYFVBXZVNHFUIBFLEPGWTSIKDOBQCFPEQFSGSEBTXKOZJIWAIAFDIDCMSZBPVUOVKWTXARUA");

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
    msg.setTimeStamp(0.057137440573243437);
    msg.setSource(48681U);
    msg.setSourceEntity(123U);
    msg.setDestination(21368U);
    msg.setDestinationEntity(126U);
    msg.type = 45U;
    msg.command = 64U;
    msg.settings.assign("VBUEDTZRIOWHLBGZFQSDYQOACS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 51537U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IKECBXBPAHVDYVCHQVWLDKSRISPSWWYHMTCWFGCQSQZUAWXLHEROEZABDYBHPXOOFIUFLQMIUUCMSMIJTUJPDWGZRYDFOUEPNHYZIESJIZMUPJQAKZRKVWSNJKRLBBYRFFXFTFZGFCGRPVKYMUBTIGNHJKALUXDIFDZOEAONALEKAXGRXYVCJUNDVKCPTAOWEHJQNGNXZJMYWTTBYVPCGHSMGQKJXWQVLOAPDZHLTGC");

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
    msg.setTimeStamp(0.046428604991502365);
    msg.setSource(39085U);
    msg.setSourceEntity(227U);
    msg.setDestination(15608U);
    msg.setDestinationEntity(64U);
    msg.type = 77U;
    msg.command = 17U;
    msg.settings.assign("PFRWQQGFMCTRFEUMDBQELTIOHAPOFHCQPAXZOUZCWJUROXVCDAHJQQLLQJKZHAVZEQAHCYTMJXDYPKVUBGWSNTYLTRSUBIRCVOZMLZWSKGKPUFMAISRGETDDJNCKTOXWBQPCJBWJSINWPKXZVITBXDYKXUYVIADWMLICZGEWYRGOOVUYDNMXZKCAMSDENRJHRSDTZPGAOHPHVBXIGKPSMNIHBVFYJIVNAGEBULWXFGNEKSQJOSLUEFHFLYT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41787U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.295870467224325;
    tmp_tmp_msg_0_0.lon = 0.2787645343485753;
    tmp_tmp_msg_0_0.eta = 908553048U;
    tmp_tmp_msg_0_0.duration = 32643U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZJITBLICCNWLMSYBGJFXVWGMHIIWAACKSOKXGFJDSLPTR");

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
    msg.setTimeStamp(0.6817555037452416);
    msg.setSource(15819U);
    msg.setSourceEntity(110U);
    msg.setDestination(8451U);
    msg.setDestinationEntity(81U);
    msg.state = 129U;
    msg.plan_id = 28528U;
    msg.wpt_id = 187U;
    msg.settings_chk = 32073U;

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
    msg.setTimeStamp(0.4669738274208488);
    msg.setSource(44470U);
    msg.setSourceEntity(119U);
    msg.setDestination(28281U);
    msg.setDestinationEntity(70U);
    msg.state = 33U;
    msg.plan_id = 63919U;
    msg.wpt_id = 10U;
    msg.settings_chk = 10138U;

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
    msg.setTimeStamp(0.5041942997271777);
    msg.setSource(5918U);
    msg.setSourceEntity(188U);
    msg.setDestination(57590U);
    msg.setDestinationEntity(154U);
    msg.state = 197U;
    msg.plan_id = 9516U;
    msg.wpt_id = 252U;
    msg.settings_chk = 11893U;

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
    msg.setTimeStamp(0.35656990888805795);
    msg.setSource(39287U);
    msg.setSourceEntity(202U);
    msg.setDestination(31826U);
    msg.setDestinationEntity(234U);
    msg.uid = 19U;
    msg.frag_number = 194U;
    msg.num_frags = 150U;
    const char tmp_msg_0[] = {-119, -105, -24, -94, -15, -26, 7, -72, 100, -51, -67, 64, 5, -67, -45, 89, 33, -100, 104, 67, -49, -78, 21, -74, 39, -96, 126, 84, 70, -2, -119, 67, -12, 104, 11, -122, 53, 13, -89, -22, 35, 76, 99, 125, 125, 99, -62, -55, 117, 72, 79, 50, 57, -49, 3, 117, -28, -33, -120, -36, -128, -50, 46, -65, 39, 80, 87, 121, 115, 47, 6, 6, -106, 88, 95, 48, -63, -82, 57, 47, -41, 35, -78, -55, -24, 71, -99, -60, -108, 49, 114, 61, 9, -112, 93, 68, -77, -109, 9, -64, 67, -59, -106, -39, 31};
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
    msg.setTimeStamp(0.18709590920107133);
    msg.setSource(18282U);
    msg.setSourceEntity(207U);
    msg.setDestination(62104U);
    msg.setDestinationEntity(141U);
    msg.uid = 70U;
    msg.frag_number = 203U;
    msg.num_frags = 84U;
    const char tmp_msg_0[] = {-28, -50, -29, 119, 57, 126, -88, -80, -50, 47, -126, 51, 58, 29, -6, -68, 47, -44, -102, -111, -99, -64, 57, -52, -116, 64, -87, -12, 30, 79, 50, 16, -48, 57, -39, 12, -44, 91, -80, -59, 4, 112, 93, -121, -115, 58, -127, 112, -42, -72, 25, 97, -55, 113, -51, 55, -76, -30, 65, 97, 74, 82, 83, -22, 115, 96, -5, -30, 30, 69, -38, 43, -96, 6, 15, -95, 121, -34, 107, -50, 48, -66, -98, -102, -67, 90, -107, 61, -24, 58, 32, -20, 32, -73, -92, 68, 44, 40, -78, 115, 87, -100, 40, -36, 77, -75, -62, -38, 91, -96, 45, -26, -53, 46, 107, 86, -69, 14, -33, -124, -31, 49, -79, 52, -76, -59, 42, -37, -36, -35, 49, 52, -9, 122, -99, -96, -28, 103, -2, -80, 31, 32, -48, -63, 102, 94, -20, -43, -122, 104, 125, 26, 94, -21, -47, 35, -54, -21, -117, -96, 0, 68, -14, 86, 31, -27, 16, -33, 123, -120, -91, 101, 32, -46, 26, 58, -54, -27, 85, 31, -46, 118, 55, 55, 4, -106, 40};
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
    msg.setTimeStamp(0.9888822392545841);
    msg.setSource(36311U);
    msg.setSourceEntity(130U);
    msg.setDestination(5427U);
    msg.setDestinationEntity(56U);
    msg.uid = 149U;
    msg.frag_number = 13U;
    msg.num_frags = 161U;
    const char tmp_msg_0[] = {-85, -22, 66, 40, 119, -113, 87, -88, -63, 109, -61, 20, -55, 99, -64, 63, 94, 72, -24, 84, -107, 44, 48, -46, 43, -32, 41, -77, -113, 10, 27, 90, -122, 80, -105, 103, -85, -97, -69, -126, -44, -115, 81, -49, 9, -48, -52, 79, 5, 65, 77, 45, 29, -77, -58, -83, 47, 74, -46, -58, -62, -14, -24, -92, 54, -95, -75, 87, 25, -102, -113, -74, 62, -114, 125, 109, 25, -61, -94, 22, 36, 42, -93, 85, 0, 55, 32, 83, -12, -30, 113, -57, 97, -16, -109, 107, 91};
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
    msg.setTimeStamp(0.13321389541545892);
    msg.setSource(5456U);
    msg.setSourceEntity(108U);
    msg.setDestination(10562U);
    msg.setDestinationEntity(110U);
    msg.content_type.assign("BFHVGROBZNDDWSPAFJOHHDAVOAXEGRTAEDFPBQQWPIJHQLFZUEMLKVBLVXLICYAANUVUXIUULANRGRKEAFVNAYVDSSQCOKEMIMKWXGSTSPYCKQEIJQCKKYLSIDKUQDHWRFFBMMQTMGNTOZWZKNWIOHRJIJPZKOTZYBRYXELPUGYDUZXIQXFUYXPEOOBAMLHGGXJWSEBRCNZGTSZBNCHPCWLHFS");
    const char tmp_msg_0[] = {-52, -12, 63, -17, -6, 3, -33, -34, 66, -103, -42, -56, 0, 65, -56, 33, 21, -60, -126, 107, 88, -81, -52, 13, -80, -40, 51, -68, 103, 58, 55, 10, 95, 80, 104, -107, -104, -62, 67, 60, -119, 123, -106, -42, 1, 121, -3, 49, -75, -5, 105, -68, -80, 90, -38, 114, -2, 81, -48, -12, -75, 10, -63, -117, 3, -80, -54, -23, 79, -31, 67, -76, 77, -40, -80, 122, -20, -110, -104, -47, -126, 38, -83, 97, 9, 123, 77, 87, -109, -57, 2, -89, 83, -77, 40, 39, 114, -54, -89, -84, 102, -49, -56, -8, 39, 117, -26, 57, -7, 125, 14, -16, 59, 41, -86, 74, 67, -128, 110, -82, -69, 37, -78, 110, 97, -66, 23, 44, 54, 103};
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
    msg.setTimeStamp(0.8661182422696437);
    msg.setSource(14636U);
    msg.setSourceEntity(186U);
    msg.setDestination(21126U);
    msg.setDestinationEntity(55U);
    msg.content_type.assign("KQKDMOMZFSNCRDPPBSNUKPYZNHUJAECWORGOMPSMPLSRKGIQKZLVPOXMJUDTERYFCVJFTORGKWRWXKVRXYVEKIYCJDWILENYHDCZQRPXTQTSPCDWTZBSJWNUFIPUMAGQEAHYAABNHMBVIDJLZVWLOLSGZCTQEMIBWFGJUQOUGXZTLJVGHSFAFAYGZUELSDAHWIOXQLHCHNAKVVYHIR");
    const char tmp_msg_0[] = {-78, 122, -95, -108, 95, -90, 50, -77, -30, 65, -16, 83, -101, -38, -41, -39, -37, 36, -36, 58, 58, 22, -49, -124, 123, 116, -57, -7, 47, 81, -83, -82, 125, -101, -19, 104, -44, 0, 54, 74, -39, 35, -10, -14, -66, -34, 22, -121, -8, 86, -120, -127, 45, -126, -115, -52, 66, -66, -24, 29, -59, 18, 32, 102, -43, 115, 91, -17, -125, -88, -34, 47, -18, 69, 125, -104, 14, -75, -114, -105, -96, 77, -114, 94, 124, 120, 73, 45, 91, -41, -10, -38, -50, -66, -122, 33, 46, 29, 79, -121, 7, -63, 74, -101, 41, -112, -75, 107, 28, -57, -51, 57, -11, -24, -105, 119, -86, 119, 13, -70, 103, -115, 102, -26, 46, 77, 57, -103, 25, 28, 36, -122, 8, -92, 104, 14, -20, 89, 121, 24, 93, 124, 23, -68, -84, -92, -40, 5, 2, 91, 106, -96, -47, 14, 115, 94, -113, -50, -74, 28, -24, -74};
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
    msg.setTimeStamp(0.3240715645415462);
    msg.setSource(49731U);
    msg.setSourceEntity(92U);
    msg.setDestination(37677U);
    msg.setDestinationEntity(202U);
    msg.content_type.assign("FBGQAVQAJVODOZWFGEGUECVMDHPTEOXBCBNSCPZZATSUAVXXQFQLLMWNNERXZTOPTCXKRQCINEWYVQCLUXFDKHWUIHHDLLMEQMBIKCCLFYVPNEGUUGLVHYKUXMZOODQILNFYIJDSKGQYNFKSTVSRIWXAPRLPXJBYZBZMYOCPPBBGKKFADWTJTKJZRSMWNDHAJIJZRUYVFQMZMILCENAISDTOGPBSYSIUJAGWOUWSTBTJEOHMGHY");
    const char tmp_msg_0[] = {88, 3, 68, -18, -82, -112, 18, -122, -123, 77, -127, -12, -108, -62, 41, -126, 30, 61, 24, -3, -38, 56, 104, -20, -103, 84, -109, -104, 119, -17, -117, 73, 31, 99, 123, 8, 12, 20, -128, 18, 2, -47, 108, 87, 25, -118, -19, -102, -17, 52, -38, 13, -77, -123, 19, 114, 30, 64, -11, -120, -6, 47, 97, 67, 34, 65, -51, 77, 4, -128, -13, -84, 28, -65, 118, 102, -46, -58, -20, -126, 109, -4, 100, 60, 98, -9, -79, -65, 119, -7, 110, 17, 19, -16, 78, -12, -125, -116, 77, -22, -88, -127, 56, -12, -122, 46, -40, -76, -85, 55, -31, 90, 105, -28, -2, 59, 9, 116, -87, 121, -38, 41, -9, -68, 110, 118, -86, -85, -66, 55, -70, -73, -35, -42, -107, -12, -40, 31, 54, 40, -103, -124, -127, 95, 104, 62, 0, -15, 106, 124, 65, -127, 4, 68, 70, -58, 105, -107, 5, 94, -38, 75, 5, -16, 29, -36, -62, 12, 85, -10, 116, -122, 42, 51, -42, -117, -91, -27, -21, -74, 13, -13, -27, -5, 80, 81, -82, 75, -29, -4, 58, -3, 50, -22, 111, -79, -40, 67, 21, -121, -116, 14, -84, -32, -20, 17, -13, 34, 41, 99, -75, -9, 19, 104, -42, -103, -72, 23, -25, -36, -10, 78, 75, -13, 17, -114, -75, 25, -105, -56, -21, 96, 106, -87, 107, 62, -34, 100, 37, -30, 40, -95, 1, -57, 28, 82, 51, -127, 93, -71, -23, 49, 14};
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
    msg.setTimeStamp(0.5955155224120747);
    msg.setSource(34273U);
    msg.setSourceEntity(159U);
    msg.setDestination(23643U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.5565951835063917);
    msg.setSource(48704U);
    msg.setSourceEntity(117U);
    msg.setDestination(17042U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.4648266231302779);
    msg.setSource(61129U);
    msg.setSourceEntity(136U);
    msg.setDestination(59520U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.4850128594331313);
    msg.setSource(58826U);
    msg.setSourceEntity(42U);
    msg.setDestination(15833U);
    msg.setDestinationEntity(241U);
    msg.target = 3542U;
    msg.bearing = 0.7887368556855756;
    msg.elevation = 0.01362637598116423;

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
    msg.setTimeStamp(0.5421158086792544);
    msg.setSource(60443U);
    msg.setSourceEntity(229U);
    msg.setDestination(26266U);
    msg.setDestinationEntity(54U);
    msg.target = 8967U;
    msg.bearing = 0.4324026255468666;
    msg.elevation = 0.8375685323096808;

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
    msg.setTimeStamp(0.32856814238020793);
    msg.setSource(45642U);
    msg.setSourceEntity(189U);
    msg.setDestination(8583U);
    msg.setDestinationEntity(127U);
    msg.target = 9112U;
    msg.bearing = 0.05017802382709813;
    msg.elevation = 0.21490896623355704;

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
    msg.setTimeStamp(0.754358836845601);
    msg.setSource(1840U);
    msg.setSourceEntity(161U);
    msg.setDestination(29366U);
    msg.setDestinationEntity(80U);
    msg.target = 48929U;
    msg.x = 0.7203949232654445;
    msg.y = 0.6946098733667079;
    msg.z = 0.8046600946565265;

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
    msg.setTimeStamp(0.22702189379694793);
    msg.setSource(16824U);
    msg.setSourceEntity(187U);
    msg.setDestination(32687U);
    msg.setDestinationEntity(250U);
    msg.target = 40671U;
    msg.x = 0.9763520871695682;
    msg.y = 0.6697702592113404;
    msg.z = 0.7204293166270983;

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
    msg.setTimeStamp(0.6633239165527762);
    msg.setSource(11014U);
    msg.setSourceEntity(103U);
    msg.setDestination(9825U);
    msg.setDestinationEntity(80U);
    msg.target = 27577U;
    msg.x = 0.790239176466448;
    msg.y = 0.750048754190447;
    msg.z = 0.9711694885402059;

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
    msg.setTimeStamp(0.8525761221091146);
    msg.setSource(40278U);
    msg.setSourceEntity(40U);
    msg.setDestination(65435U);
    msg.setDestinationEntity(16U);
    msg.target = 54704U;
    msg.lat = 0.4077629811568598;
    msg.lon = 0.9012402666151474;
    msg.z_units = 55U;
    msg.z = 0.6349171504885536;

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
    msg.setTimeStamp(0.5623384362446429);
    msg.setSource(648U);
    msg.setSourceEntity(207U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(23U);
    msg.target = 49493U;
    msg.lat = 0.6808291977060648;
    msg.lon = 0.20234905008727044;
    msg.z_units = 243U;
    msg.z = 0.9224950865564739;

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
    msg.setTimeStamp(0.9662233817772826);
    msg.setSource(35165U);
    msg.setSourceEntity(118U);
    msg.setDestination(57297U);
    msg.setDestinationEntity(14U);
    msg.target = 4948U;
    msg.lat = 0.8913349771074146;
    msg.lon = 0.7343285441239785;
    msg.z_units = 86U;
    msg.z = 0.89357671512241;

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
    msg.setTimeStamp(0.21696066609821552);
    msg.setSource(33220U);
    msg.setSourceEntity(243U);
    msg.setDestination(33874U);
    msg.setDestinationEntity(92U);
    msg.locale.assign("QZRRZXKZSEAUOHPUIYZLTXNVFYSDUWHZSNZBDVYPWJEQIUDMKTYCKCZGWDFLXANFCYWTUDFIIISVDTKXPAEYGZPTMCRSUGNPYJWQEJHKDGELRTLIVKOHHNJDRFATC");
    const char tmp_msg_0[] = {-103, -115, 27, 114, 73, -3, 77, 78, -58, 14, 28, -19, 89, -7, -106, -59, -119, 90, 92, -105, 122, -107, -95, -85, -106, 96, 44, -8, -3, -10, 3, -95, 27, 120, 112, -62, 34, 77, -20, -115, -51, -23, -68, 105, -93, 20, 27, 43, 111, -96, -86, -52, 75, 105, 27, 35, 22, 115, -99, -109, 104, 108, -84};
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
    msg.setTimeStamp(0.7360068529476783);
    msg.setSource(2125U);
    msg.setSourceEntity(34U);
    msg.setDestination(4554U);
    msg.setDestinationEntity(72U);
    msg.locale.assign("EPHIQCCPXATQXKYZUOQJIZXYRRDSFBKZSNZNAPDITUIUCAAUHNMCTTRDTUXZIVQMZQWWSITTNVWMZZBBIRNXJIPKPLSMSHQJWKEUARYLYJDOVLHJWWWWENEKOQXSUGKYXVAEOCJEKWQHUYPAMDYPLOCKRGHGCXCMPEEKHBLANLLKBFUTSDOR");
    const char tmp_msg_0[] = {-20, -51, -27, -70, -118, 46, -37, -75, 40, -50, 120, -118, 49, 86, -93, -72, -49, 18, 110, -86, -61, -43, 110, 101, 19, 36, -42, -104, 71, -16, 87, -22, -33, -71, 3, 96, -14, 37, -53, 65, -109, -87, -83, 54, 72, -92, 1, 104, 71, -64, -42, -79, 79, 64, -123, 109, 45, -15, -73, 121, -80, 18, -107, -10, -83, -124, -128, 88, 107, 59, 81, 33, 71, 83, 83, 80, -105, 8, -125, -36, 10, 75, -56, 99, 79, -46, 58, -27, 71, -85, -121, -104, 40, 2, -67, -116, 83, -46, -22, 7, -96, -62, -24, 105, -100, -119, -90, 101, -99, -64, 57, -101, 117, -74, 66, 37, -8, -104, -25, -44, 19, 36, 73, -78, 120, 16, 91, 126, 119, -114, 106, 118, -30, 59, 122, 23, -35, 104, -14, 28, 102, -41, 62, -122, -91, -40, 92, -116, -96, -57, -41, -27, 73, -5, 86, -115, -56};
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
    msg.setTimeStamp(0.2755768170823646);
    msg.setSource(55893U);
    msg.setSourceEntity(69U);
    msg.setDestination(44187U);
    msg.setDestinationEntity(20U);
    msg.locale.assign("FCZWCMFLRCTPOAIWKQMEWJIBZLXGKSMLIYXEZWAUXUKGOSHJKKTERGYVMTHJRJXPDARDBOCAHZQDUCYPAFFWCOGFPNWBYJAVGAHHITLDJLWRUWBPSBZISVMGIMVVNEGTFONLYNFFZPIKDYULZJHZNTOMIJVHVPXAOYRBOEWFSBF");
    const char tmp_msg_0[] = {54, -37, 114, 8, -15, -60, -73, 57, 74, 57, 28, -89, -92, 68, 14, -45, -27, 12, 24, 42, -19, -20, 43, -16, -99, -40, 78, 125, -112, 92, -19, 15, -57, 97, -13, 28, 35, -71, 55, 111, 3, -91, 4, 82, -76, 94, 79, -56, 49, 46, 93, -109, 9, 83, 27, 81, 2, -97, 115, -126, -72, 81, 57, 57, -9, -26, 126, 90, -103, 68, 39, 56, 111, 47, 58, -8};
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
    msg.setTimeStamp(0.0058941403336537634);
    msg.setSource(58708U);
    msg.setSourceEntity(78U);
    msg.setDestination(4148U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.220105861375957);
    msg.setSource(22638U);
    msg.setSourceEntity(167U);
    msg.setDestination(63038U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.1356542373144931);
    msg.setSource(40016U);
    msg.setSourceEntity(169U);
    msg.setDestination(14559U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.3331900589295784);
    msg.setSource(11156U);
    msg.setSourceEntity(204U);
    msg.setDestination(30176U);
    msg.setDestinationEntity(232U);
    msg.camid = 124U;
    msg.x = 45705U;
    msg.y = 38360U;

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
    msg.setTimeStamp(0.7822788484680979);
    msg.setSource(54926U);
    msg.setSourceEntity(175U);
    msg.setDestination(41344U);
    msg.setDestinationEntity(214U);
    msg.camid = 45U;
    msg.x = 16209U;
    msg.y = 388U;

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
    msg.setTimeStamp(0.013232051678846446);
    msg.setSource(11977U);
    msg.setSourceEntity(140U);
    msg.setDestination(5824U);
    msg.setDestinationEntity(58U);
    msg.camid = 109U;
    msg.x = 10843U;
    msg.y = 29475U;

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
    msg.setTimeStamp(0.6225515361545374);
    msg.setSource(2361U);
    msg.setSourceEntity(23U);
    msg.setDestination(47858U);
    msg.setDestinationEntity(114U);
    msg.camid = 7U;
    msg.x = 64538U;
    msg.y = 10467U;

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
    msg.setTimeStamp(0.00989654511165361);
    msg.setSource(53358U);
    msg.setSourceEntity(92U);
    msg.setDestination(50074U);
    msg.setDestinationEntity(203U);
    msg.camid = 71U;
    msg.x = 55668U;
    msg.y = 18741U;

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
    msg.setTimeStamp(0.2869369303103919);
    msg.setSource(53438U);
    msg.setSourceEntity(188U);
    msg.setDestination(23233U);
    msg.setDestinationEntity(102U);
    msg.camid = 143U;
    msg.x = 59036U;
    msg.y = 16186U;

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
    msg.setTimeStamp(0.9127732888667976);
    msg.setSource(44U);
    msg.setSourceEntity(52U);
    msg.setDestination(28383U);
    msg.setDestinationEntity(208U);
    msg.tracking = 227U;
    msg.lat = 0.6271331171289786;
    msg.lon = 0.9072159721414111;
    msg.x = 0.6875985551025628;
    msg.y = 0.07251973471600648;
    msg.z = 0.3817325689042116;

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
    msg.setTimeStamp(0.30035495108949384);
    msg.setSource(47350U);
    msg.setSourceEntity(220U);
    msg.setDestination(17771U);
    msg.setDestinationEntity(5U);
    msg.tracking = 203U;
    msg.lat = 0.20698356928963024;
    msg.lon = 0.8135971066298306;
    msg.x = 0.6521370217252583;
    msg.y = 0.3395058416814625;
    msg.z = 0.5335894474424961;

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
    msg.setTimeStamp(0.433438279220004);
    msg.setSource(14362U);
    msg.setSourceEntity(184U);
    msg.setDestination(44206U);
    msg.setDestinationEntity(23U);
    msg.tracking = 43U;
    msg.lat = 0.21579178128241605;
    msg.lon = 0.7771231736795124;
    msg.x = 0.4283369104829474;
    msg.y = 0.9715110008094594;
    msg.z = 0.8283837720035534;

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
    msg.setTimeStamp(0.0763100751026381);
    msg.setSource(40015U);
    msg.setSourceEntity(187U);
    msg.setDestination(48473U);
    msg.setDestinationEntity(165U);
    msg.target.assign("MABVLIBDOX");
    msg.lbearing = 0.7039812190286193;
    msg.lelevation = 0.15764840471146746;
    msg.bearing = 0.942259392747869;
    msg.elevation = 0.6802356491604784;
    msg.phi = 0.7963731540377555;
    msg.theta = 0.5383114940415299;
    msg.psi = 0.9044113413832826;
    msg.accuracy = 0.4904636280222858;

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
    msg.setTimeStamp(0.17453942889219354);
    msg.setSource(38737U);
    msg.setSourceEntity(4U);
    msg.setDestination(27736U);
    msg.setDestinationEntity(107U);
    msg.target.assign("OVBGMWRZXSHFZRMHOKUDUSTOCQLWVFBFPVRQIEKTIULRCFNORDJJNSWGUKPIWIMLBQRDVYVTHTQRAXYVAGXGWSKKETXHGMRQYXCNEBNUBWDJXCCZQS");
    msg.lbearing = 0.11608989553826565;
    msg.lelevation = 0.7185279111153949;
    msg.bearing = 0.24889066339138444;
    msg.elevation = 0.5657367610749222;
    msg.phi = 0.6045011181447513;
    msg.theta = 0.1161727664042449;
    msg.psi = 0.5259143886528788;
    msg.accuracy = 0.9964053122790418;

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
    msg.setTimeStamp(0.18960937293078362);
    msg.setSource(11473U);
    msg.setSourceEntity(102U);
    msg.setDestination(10849U);
    msg.setDestinationEntity(45U);
    msg.target.assign("CHMJORGZSPOHAALUXHTGZABKAOTYTRJWNXZLMJJMNYSGVOZSJETBWYREQMRJHIIWNVGJHWPRXFXHKYYNWUTQPEKFDZGDUKGMAISQBUQSPULDEWVYDFOVMQFLQWMASEPVDOZRTGRTFFOINBHVFZWLKZKKCESNQODDFIEYBBCTWLCVLHIXIBBASKCRNCMKYG");
    msg.lbearing = 0.6901476114579476;
    msg.lelevation = 0.1986478574932059;
    msg.bearing = 0.7210485079534814;
    msg.elevation = 0.307749066266896;
    msg.phi = 0.1959077936656889;
    msg.theta = 0.9779026517942933;
    msg.psi = 0.5217504459559781;
    msg.accuracy = 0.05003915432971662;

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
    msg.setTimeStamp(0.2614679805276997);
    msg.setSource(33203U);
    msg.setSourceEntity(45U);
    msg.setDestination(48546U);
    msg.setDestinationEntity(226U);
    msg.target.assign("SARPMLMRTYYDKLBCTAFDHPJGTKZAZAFOXNLESMXGPKPAORBEVFZXREIHJJIHGSOOJWNKVYLSTLZREKAMOGPHAFREYVPLMWWZGCIFCTNFLVCBYQKZDCCAVRDWDRMEWIWWQHBVRGPTRKWQFDUAQGLOIOZYVJPJHJYHFZBAXXGKCXMGQXJBOZJDIOSCXUVUSXPKGQFUEIQVEQSUMFNOSUVNUUWLNCTJENYBTQ");
    msg.x = 0.6495044852305986;
    msg.y = 0.6829372052100857;
    msg.z = 0.5055971077173642;
    msg.n = 0.5852958968226756;
    msg.e = 0.3305400764449028;
    msg.d = 0.7265993726450132;
    msg.phi = 0.21935242256731502;
    msg.theta = 0.39058976661172873;
    msg.psi = 0.8072833788389119;
    msg.accuracy = 0.5105933322558313;

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
    msg.setTimeStamp(0.3255464545311131);
    msg.setSource(32473U);
    msg.setSourceEntity(7U);
    msg.setDestination(20567U);
    msg.setDestinationEntity(203U);
    msg.target.assign("VNWPGPIJPGRUDRRKUICIQV");
    msg.x = 0.5484040654499835;
    msg.y = 0.7838383994451348;
    msg.z = 0.5648873316203592;
    msg.n = 0.7755741468415293;
    msg.e = 0.09253560849320741;
    msg.d = 0.33982656387333654;
    msg.phi = 0.9474217594633646;
    msg.theta = 0.22454636661119265;
    msg.psi = 0.16759760959054026;
    msg.accuracy = 0.9677087187214891;

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
    msg.setTimeStamp(0.18168015513560087);
    msg.setSource(33238U);
    msg.setSourceEntity(122U);
    msg.setDestination(33151U);
    msg.setDestinationEntity(94U);
    msg.target.assign("TRHQZAQBDDIVOWRVCTSZFXHDICUFTYIFWUAOBHXEYDKNDGZJGYDZAKSLEVAFSAHSDPUICHBVYWQBFYOCKJLXVXCKXPEOQARZMKWICLBXCIAZPSRJWQTPMQZUFTGOTERSTVMXOBMLWLGAUFYBADGOTNJQGKUZEZHLYYEUCJHWGQGJSEPHEXVFYODXMCWXVDNARJHLRPFITT");
    msg.x = 0.7890838261085487;
    msg.y = 0.5609713552669198;
    msg.z = 0.029789388170992637;
    msg.n = 0.21072637355476453;
    msg.e = 0.5661712384766856;
    msg.d = 0.9557720756799797;
    msg.phi = 0.993517005097612;
    msg.theta = 0.18326300593820455;
    msg.psi = 0.042311609160150865;
    msg.accuracy = 0.43624140321802296;

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
    msg.setTimeStamp(0.9580488833361628);
    msg.setSource(36618U);
    msg.setSourceEntity(69U);
    msg.setDestination(22459U);
    msg.setDestinationEntity(39U);
    msg.target.assign("RTWQIRLGSZRWXCZCALIARIXXPKRTCOQQBSUUKMLRJPWEGGABLPMDRBPZONLNCOFHBVIOKCJFPVAZGWDCVRYYHNEA");
    msg.lat = 0.0889991355141706;
    msg.lon = 0.6787035181051085;
    msg.z_units = 164U;
    msg.z = 0.8900780457909592;
    msg.accuracy = 0.5893288079049734;

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
    msg.setTimeStamp(0.49712652486819386);
    msg.setSource(47023U);
    msg.setSourceEntity(143U);
    msg.setDestination(57553U);
    msg.setDestinationEntity(54U);
    msg.target.assign("MSWIUQGNMDQTDYOMAVDTURNYGMHQQSFFZJROGEBFLFJGRRYCONAIOQHVKICOTRPLNPIXAAXTLBZNPWJDSHOJHBIYAWUEWBMVDKCMXSXGMSCUNHULWVYULRKKGSWAYSZSBEHRZZDKMWAPUFSUVHNFHDFDXTUEPCTPRTKZAFOGVVXTFORZQLZLZQSIEBKJMHXEJZUACKIXYVCGIAIKCYBNPCYCHNLPMIBTEQJPWBVEWNJOGPLJEK");
    msg.lat = 0.3118065042126884;
    msg.lon = 0.3882377944937264;
    msg.z_units = 44U;
    msg.z = 0.1443855968711112;
    msg.accuracy = 0.5484486062179382;

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
    msg.setTimeStamp(0.31390109518169207);
    msg.setSource(32038U);
    msg.setSourceEntity(155U);
    msg.setDestination(62847U);
    msg.setDestinationEntity(164U);
    msg.target.assign("JJJIBKHWTFJKZFZGSFXXDVNUZBQOHNSCCPLVEPZNSGDFBTRQVNFLXGMCPSDMMBITNAWMXHOTOMWIRUEGYWPEFRHMJUQYRPGJYCVCLFUZOCXFZRRYJPUKAZROEJMBHBAUHDFAGNSSVYOKQTKNYBPESMLTLFPWIAIZQKZOXIBQTIYKVTUDOAZPKEQRLVVDTLECJAVHASSNWEIMWHKHWELXMGANIYIUGLWRDOQTJAGLUXHYSRWDNKXV");
    msg.lat = 0.8222551830223888;
    msg.lon = 0.8025116685820948;
    msg.z_units = 231U;
    msg.z = 0.23022799695368001;
    msg.accuracy = 0.08572541462859051;

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
    msg.setTimeStamp(0.8011400160192282);
    msg.setSource(47932U);
    msg.setSourceEntity(182U);
    msg.setDestination(33627U);
    msg.setDestinationEntity(230U);
    msg.name.assign("ZNGXNVMFYSRQUXURZDTYKZAMNWTVGDFJFJWMKMR");
    msg.lat = 0.7671483446955157;
    msg.lon = 0.6690378341078581;
    msg.z = 0.5000855175546397;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.005102479259154191);
    msg.setSource(12324U);
    msg.setSourceEntity(88U);
    msg.setDestination(39811U);
    msg.setDestinationEntity(74U);
    msg.name.assign("KLOCNLIPVXYXQXTGNLAAUBXPFPMUMSSALPIUIOATLWEBCIQEGGCIDYBCFCTTOAGEUWUXKLUSQEYQVJTSBNGCDMZGRDKZETNPTZOGIQV");
    msg.lat = 0.5056029017326614;
    msg.lon = 0.1773438843096079;
    msg.z = 0.42558253955597714;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.5472080244619321);
    msg.setSource(47129U);
    msg.setSourceEntity(18U);
    msg.setDestination(5475U);
    msg.setDestinationEntity(185U);
    msg.name.assign("GULLYBNABSUYVHLIEBTJZCCXXWHMKTMMEEZAYBORZVHLKKSOWHJQGSPXSEZBPHXPFJXHJNGNJLPQFLUNDWUIAZASBOPRWSLCVMHQYICR");
    msg.lat = 0.5583248483738495;
    msg.lon = 0.5018939881115041;
    msg.z = 0.5621515047238683;
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
    msg.setTimeStamp(0.4294912606443647);
    msg.setSource(56847U);
    msg.setSourceEntity(10U);
    msg.setDestination(17031U);
    msg.setDestinationEntity(88U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.056567705470948915);
    msg.setSource(36942U);
    msg.setSourceEntity(17U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(132U);
    msg.op = 5U;

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
    msg.setTimeStamp(0.9672985527610276);
    msg.setSource(10767U);
    msg.setSourceEntity(163U);
    msg.setDestination(39011U);
    msg.setDestinationEntity(200U);
    msg.op = 236U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SVHNPAOPLHZZJIMKTAYJWBKLYQZYXSOOEXQACQTDJUOAGOHVWXZ");
    tmp_msg_0.lat = 0.4279089968957066;
    tmp_msg_0.lon = 0.23687163317182924;
    tmp_msg_0.z = 0.5790141985026264;
    tmp_msg_0.z_units = 227U;
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
    msg.setTimeStamp(0.42147748266476237);
    msg.setSource(34055U);
    msg.setSourceEntity(120U);
    msg.setDestination(8061U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7960461977975288;
    msg.type = 27U;

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
    msg.setTimeStamp(0.7188141337130958);
    msg.setSource(30823U);
    msg.setSourceEntity(236U);
    msg.setDestination(7251U);
    msg.setDestinationEntity(3U);
    msg.value = 0.56139210744232;
    msg.type = 241U;

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
    msg.setTimeStamp(0.239804350262815);
    msg.setSource(43087U);
    msg.setSourceEntity(47U);
    msg.setDestination(50076U);
    msg.setDestinationEntity(61U);
    msg.value = 0.03675390183495064;
    msg.type = 207U;

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
    msg.setTimeStamp(0.9811949571941992);
    msg.setSource(33914U);
    msg.setSourceEntity(171U);
    msg.setDestination(23840U);
    msg.setDestinationEntity(53U);
    msg.value = 0.093397210587564;

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
    msg.setTimeStamp(0.4458550081229695);
    msg.setSource(57533U);
    msg.setSourceEntity(36U);
    msg.setDestination(60733U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8997618536788564;

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
    msg.setTimeStamp(0.28787327993356515);
    msg.setSource(44665U);
    msg.setSourceEntity(219U);
    msg.setDestination(5468U);
    msg.setDestinationEntity(178U);
    msg.value = 0.9792993025761686;

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
    msg.setTimeStamp(0.801194208669841);
    msg.setSource(1920U);
    msg.setSourceEntity(66U);
    msg.setDestination(43519U);
    msg.setDestinationEntity(189U);
    msg.timestamp_last_service = 0.7079808979505843;
    msg.time_next_service = 0.39729779819384436;
    msg.time_motor_next_service = 0.6777543353674187;
    msg.time_idle_ground = 0.5908752146336118;
    msg.time_idle_air = 0.5348990477449447;
    msg.time_idle_water = 0.16644795788883737;
    msg.time_idle_underwater = 0.7359387847921165;
    msg.time_idle_unknown = 0.334999958118275;
    msg.time_motor_ground = 0.8463517204095209;
    msg.time_motor_air = 0.10429381543576532;
    msg.time_motor_water = 0.09850892441557257;
    msg.time_motor_underwater = 0.8568436262204707;
    msg.time_motor_unknown = 0.4209954555919726;
    msg.rpm_min = 5814;
    msg.rpm_max = 20146;
    msg.depth_max = 0.0019172508412536038;

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
    msg.setTimeStamp(0.9387572912980199);
    msg.setSource(60360U);
    msg.setSourceEntity(5U);
    msg.setDestination(61195U);
    msg.setDestinationEntity(4U);
    msg.timestamp_last_service = 0.04311021600081888;
    msg.time_next_service = 0.6190729087160652;
    msg.time_motor_next_service = 0.042030763757721856;
    msg.time_idle_ground = 0.38745256783168003;
    msg.time_idle_air = 0.9656930782967906;
    msg.time_idle_water = 0.24061158652651848;
    msg.time_idle_underwater = 0.7074968253347975;
    msg.time_idle_unknown = 0.727121697095223;
    msg.time_motor_ground = 0.5358719883172385;
    msg.time_motor_air = 0.23878876192492182;
    msg.time_motor_water = 0.2826972968428664;
    msg.time_motor_underwater = 0.07012079928407589;
    msg.time_motor_unknown = 0.8092479050861534;
    msg.rpm_min = 17161;
    msg.rpm_max = 29310;
    msg.depth_max = 0.23767138910108743;

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
    msg.setTimeStamp(0.7919208677627367);
    msg.setSource(37829U);
    msg.setSourceEntity(11U);
    msg.setDestination(17666U);
    msg.setDestinationEntity(223U);
    msg.timestamp_last_service = 0.43678622253344057;
    msg.time_next_service = 0.04965841828455131;
    msg.time_motor_next_service = 0.7185883666888303;
    msg.time_idle_ground = 0.13383959480273033;
    msg.time_idle_air = 0.032158359818996396;
    msg.time_idle_water = 0.22211914785623665;
    msg.time_idle_underwater = 0.44687437059562696;
    msg.time_idle_unknown = 0.13083638104624595;
    msg.time_motor_ground = 0.4959712375477404;
    msg.time_motor_air = 0.229327601763601;
    msg.time_motor_water = 0.3465060694592702;
    msg.time_motor_underwater = 0.895127263331512;
    msg.time_motor_unknown = 0.5089173667539689;
    msg.rpm_min = 1510;
    msg.rpm_max = -4820;
    msg.depth_max = 0.22305296135258745;

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
    msg.setTimeStamp(0.26178241634047195);
    msg.setSource(6824U);
    msg.setSourceEntity(83U);
    msg.setDestination(16449U);
    msg.setDestinationEntity(4U);
    msg.severity = 21U;
    msg.text.assign("CHTLSBWSTXLMDKKIECVYNCWXZHKJPHXQFANPYGRMZAEFVWMZSZAAWVRHJCXOHZYOAQJQWHOANDMQVPKAMWTDAYYKOEUOZIIWVIBOUNTFXZMEOHBOM");

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
    msg.setTimeStamp(0.3838342088562755);
    msg.setSource(40226U);
    msg.setSourceEntity(137U);
    msg.setDestination(20841U);
    msg.setDestinationEntity(208U);
    msg.severity = 213U;
    msg.text.assign("XQFSDSNXTRHKULGHAREVXWFKLGVULGJLKHCEDFIDW");

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
    msg.setTimeStamp(0.5070233659073035);
    msg.setSource(57538U);
    msg.setSourceEntity(145U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(78U);
    msg.severity = 172U;
    msg.text.assign("AWPZOWQIBMTXQDSBHRKDZFVGIRJCHXMRPSGRANABPIKWBBBYFZWEZNENOMLOZPFQSHVDVYOGXUXYUAUMSFYYHUBGJSO");

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
    msg.setTimeStamp(0.21663816674989855);
    msg.setSource(49384U);
    msg.setSourceEntity(144U);
    msg.setDestination(2657U);
    msg.setDestinationEntity(86U);
    msg.channel = -25;
    msg.value = -1728854641;
    msg.gain = 119U;

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
    msg.setTimeStamp(0.4198743553729317);
    msg.setSource(18503U);
    msg.setSourceEntity(178U);
    msg.setDestination(52027U);
    msg.setDestinationEntity(254U);
    msg.channel = 101;
    msg.value = -1994841230;
    msg.gain = 208U;

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
    msg.setTimeStamp(0.3389766231470389);
    msg.setSource(63648U);
    msg.setSourceEntity(223U);
    msg.setDestination(37292U);
    msg.setDestinationEntity(22U);
    msg.channel = -110;
    msg.value = 2104170701;
    msg.gain = 83U;

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
    msg.setTimeStamp(0.3890634583043565);
    msg.setSource(31611U);
    msg.setSourceEntity(238U);
    msg.setDestination(20586U);
    msg.setDestinationEntity(220U);
    msg.ch01 = 0.30135954513874785;
    msg.ch02 = 0.43879500499706126;
    msg.ch03 = 0.736551627471749;
    msg.ch04 = 0.7340571265865519;
    msg.ch05 = 0.927669484110142;
    msg.ch06 = 0.522428236328908;
    msg.ch07 = 0.5514561399415983;
    msg.ch08 = 0.6058503805051515;
    msg.ch09 = 0.8141459655182594;
    msg.ch10 = 0.7694307672487586;
    msg.ch11 = 0.1167684115473433;
    msg.ch12 = 0.20765168099134768;
    msg.ch13 = 0.18476456908012795;
    msg.ch14 = 0.033797774134071146;
    msg.ch15 = 0.34518815477596343;
    msg.ch16 = 0.0532123525715168;

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
    msg.setTimeStamp(0.3226665557659548);
    msg.setSource(3719U);
    msg.setSourceEntity(106U);
    msg.setDestination(8388U);
    msg.setDestinationEntity(85U);
    msg.ch01 = 0.5249050028431972;
    msg.ch02 = 0.16433830469029997;
    msg.ch03 = 0.47251972401694986;
    msg.ch04 = 0.15917841880937378;
    msg.ch05 = 0.33810198705104844;
    msg.ch06 = 0.8874992525867375;
    msg.ch07 = 0.46702023150251426;
    msg.ch08 = 0.2713295831860617;
    msg.ch09 = 0.017880844971247867;
    msg.ch10 = 0.12445122393692254;
    msg.ch11 = 0.7647084295790477;
    msg.ch12 = 0.14140219484373495;
    msg.ch13 = 0.7527143043890485;
    msg.ch14 = 0.9728064017900818;
    msg.ch15 = 0.9262404226189659;
    msg.ch16 = 0.8018180377927134;

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
    msg.setTimeStamp(0.2932530742705761);
    msg.setSource(34677U);
    msg.setSourceEntity(149U);
    msg.setDestination(64025U);
    msg.setDestinationEntity(183U);
    msg.ch01 = 0.46017718229747984;
    msg.ch02 = 0.4480739351200459;
    msg.ch03 = 0.3402519656894868;
    msg.ch04 = 0.6210296412916612;
    msg.ch05 = 0.6723363160785166;
    msg.ch06 = 0.8904287348917801;
    msg.ch07 = 0.5367801962708381;
    msg.ch08 = 0.4347528087586461;
    msg.ch09 = 0.21638226453399;
    msg.ch10 = 0.3488549003079815;
    msg.ch11 = 0.4871610647157273;
    msg.ch12 = 0.9531762160296355;
    msg.ch13 = 0.017359858896527802;
    msg.ch14 = 0.28187807833874745;
    msg.ch15 = 0.803633200459482;
    msg.ch16 = 0.9150985544212679;

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
    msg.setTimeStamp(0.9203273553143456);
    msg.setSource(59316U);
    msg.setSourceEntity(251U);
    msg.setDestination(36100U);
    msg.setDestinationEntity(218U);
    msg.op = 127U;
    msg.lat = 0.7593443084585231;
    msg.lon = 0.39643934874345677;
    msg.height = 0.7185700908559708;
    msg.depth = 0.11066990714040381;
    msg.alt = 0.7471314465794175;

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
    msg.setTimeStamp(0.43036599436539824);
    msg.setSource(27327U);
    msg.setSourceEntity(38U);
    msg.setDestination(50412U);
    msg.setDestinationEntity(173U);
    msg.op = 178U;
    msg.lat = 0.43678781148150725;
    msg.lon = 0.15221131285890277;
    msg.height = 0.2806612131906566;
    msg.depth = 0.08680598757232139;
    msg.alt = 0.1741816735991406;

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
    msg.setTimeStamp(0.5079680728366271);
    msg.setSource(18460U);
    msg.setSourceEntity(247U);
    msg.setDestination(32115U);
    msg.setDestinationEntity(220U);
    msg.op = 91U;
    msg.lat = 0.8374643790921618;
    msg.lon = 0.37902900001093986;
    msg.height = 0.6806769299937349;
    msg.depth = 0.6515541689041953;
    msg.alt = 0.2987314679664489;

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
    msg.setTimeStamp(0.09855299369067994);
    msg.setSource(61392U);
    msg.setSourceEntity(254U);
    msg.setDestination(35131U);
    msg.setDestinationEntity(0U);
    msg.nbeams = 13U;
    msg.ncells = 25U;
    msg.coord_sys = 251U;

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
    msg.setTimeStamp(0.8783130247164681);
    msg.setSource(36036U);
    msg.setSourceEntity(176U);
    msg.setDestination(48173U);
    msg.setDestinationEntity(238U);
    msg.nbeams = 59U;
    msg.ncells = 179U;
    msg.coord_sys = 236U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.513041082693438;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.0026235790331269326;
    tmp_tmp_msg_0_0.amp = 0.44653086789160557;
    tmp_tmp_msg_0_0.cor = 206U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6488304991456221);
    msg.setSource(17092U);
    msg.setSourceEntity(209U);
    msg.setDestination(51463U);
    msg.setDestinationEntity(197U);
    msg.nbeams = 9U;
    msg.ncells = 32U;
    msg.coord_sys = 189U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.08558832588641363;
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
    msg.setTimeStamp(0.508019559635522);
    msg.setSource(39522U);
    msg.setSourceEntity(50U);
    msg.setDestination(24688U);
    msg.setDestinationEntity(26U);
    msg.cell_position = 0.3623555608295663;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.9407393691884278;
    tmp_msg_0.amp = 0.029792435156176356;
    tmp_msg_0.cor = 58U;
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
    msg.setTimeStamp(0.2588006312987383);
    msg.setSource(63909U);
    msg.setSourceEntity(43U);
    msg.setDestination(11052U);
    msg.setDestinationEntity(156U);
    msg.cell_position = 0.7524723500166178;

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
    msg.setTimeStamp(0.08401590874804343);
    msg.setSource(16679U);
    msg.setSourceEntity(185U);
    msg.setDestination(28921U);
    msg.setDestinationEntity(76U);
    msg.cell_position = 0.6643981874728833;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.06734293182701934;
    tmp_msg_0.amp = 0.6966541970153303;
    tmp_msg_0.cor = 194U;
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
    msg.setTimeStamp(0.5531213691618522);
    msg.setSource(8959U);
    msg.setSourceEntity(152U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(208U);
    msg.vel = 0.10218189828105395;
    msg.amp = 0.21671052380388256;
    msg.cor = 85U;

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
    msg.setTimeStamp(0.2379521267737067);
    msg.setSource(55824U);
    msg.setSourceEntity(220U);
    msg.setDestination(33695U);
    msg.setDestinationEntity(239U);
    msg.vel = 0.3214864854482;
    msg.amp = 0.6024535627598588;
    msg.cor = 91U;

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
    msg.setTimeStamp(0.9377793013067608);
    msg.setSource(41199U);
    msg.setSourceEntity(154U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(89U);
    msg.vel = 0.5330761281687308;
    msg.amp = 0.6572941286854622;
    msg.cor = 127U;

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
    msg.setTimeStamp(0.17248076527408673);
    msg.setSource(64787U);
    msg.setSourceEntity(72U);
    msg.setDestination(64036U);
    msg.setDestinationEntity(230U);
    msg.name.assign("NOFDOSSXLRKAYZMZVPYAFUDVFFLKAHYYTVGIDDUPJXAQKJZYMYAOPHEATFRKDVGUCTOMZMKLERIFHULBQSXXBLNWUKBLOCPVOHJCMFNQEPGUQUBFLPSGDKEHREJKGWMWXSPPBCXIUODEVRZWQSNSNDJZJMTTYTOQCMTGSGKKJCRHIBIRQISXD");
    msg.value = 196U;

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
    msg.setTimeStamp(0.01438739706283143);
    msg.setSource(1206U);
    msg.setSourceEntity(166U);
    msg.setDestination(23028U);
    msg.setDestinationEntity(87U);
    msg.name.assign("VNDNPJRBHHZCWZBWHYAIQQGQTSWIHEXUCFCYMLNDBAKKRCCDPKMWWTJZEESEDMLKJVHEKTIGFJAVSQLQDYISDIFZSPYNNWNGPX");
    msg.value = 71U;

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
    msg.setTimeStamp(0.16723336138123734);
    msg.setSource(9956U);
    msg.setSourceEntity(249U);
    msg.setDestination(572U);
    msg.setDestinationEntity(172U);
    msg.name.assign("NJNEASTMCWMQXFJLNMBYEVRIUZUABNUECIHXWMUMAJPQJYFCZJPBGXEWKARXHHKCRTDMHDIYZSCSSWFNHLIWQQASRVLXLGPTYKVBWNZIZFZPTDSWXUTHYPJQTEINDHVGMPAGKOYBFLLLBUPCJIZEDUEMUOXEAOLYPQTVYFONRGQCXGADINALOVDEOFBIQDTFZGRCVSBMQFKIXGATOLNOHRJWKPZQHTDZMGWYKC");
    msg.value = 200U;

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
    msg.setTimeStamp(0.3768601436853195);
    msg.setSource(56078U);
    msg.setSourceEntity(24U);
    msg.setDestination(21036U);
    msg.setDestinationEntity(162U);
    msg.name.assign("TWKTCUGYGERVOTYNBBUXTWCPAJYWRXQOCAZNIECIGOZCPGRQELCSVRDRVAXXIKONKNELNVLKEIFLVMLBEVRDUEUKRFGBNPCXBIJJHBSSTZJVQMYOFNMUWVQPDKTOSRSJWWBHFODZSYUAFXGETDDBENQSTVPCYZJIY");

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
    msg.setTimeStamp(0.907512033502344);
    msg.setSource(32024U);
    msg.setSourceEntity(66U);
    msg.setDestination(39914U);
    msg.setDestinationEntity(58U);
    msg.name.assign("YJZOZVFDILYIOAEMRQUQNCG");

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
    msg.setTimeStamp(0.9102310399810702);
    msg.setSource(33405U);
    msg.setSourceEntity(223U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(211U);
    msg.name.assign("JZCIBWYPVNGMWLVNFVNXXAUSZWJYPDQSSNOZ");

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
    msg.setTimeStamp(0.24452812709743998);
    msg.setSource(39092U);
    msg.setSourceEntity(229U);
    msg.setDestination(26151U);
    msg.setDestinationEntity(43U);
    msg.name.assign("QEXUAHZMMSGLKIZHVEMYDYPWRGZWCRKGVKVRHVJSWLQJPBPRFJPHUEDYSAVJHQSGUYKNFSXXRLZIZJFIQXKBHFNNBTDULODROFCUUKMSYQXEVULONPOWSMRMYKILFORYGRXGOPHBUCCJZUDNZTITWIECZEYVAOTGCBEPLDDBNKNLSPFTDWHJDTJCLTSCQENWVIJHAQJVEAAXIQMGDMBPFXFXAEZPLWYAZAIQWKXCTOAGB");
    msg.value = 173U;

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
    msg.setTimeStamp(0.13403306590767128);
    msg.setSource(13611U);
    msg.setSourceEntity(185U);
    msg.setDestination(1715U);
    msg.setDestinationEntity(66U);
    msg.name.assign("GLVTSIMHQVNC");
    msg.value = 40U;

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
    msg.setTimeStamp(0.10753943602286709);
    msg.setSource(47674U);
    msg.setSourceEntity(153U);
    msg.setDestination(27371U);
    msg.setDestinationEntity(188U);
    msg.name.assign("SAPMMLBSSWMHDZEGJKHOBEZYQAEQGTDBPVGQIPBTCIRXELQXIXMHMDNLUXCENLYKTQTCRDDTZFYOFWUWQDQQPLZVKNQHGLOTAIYZJJJSOWCSJNURBMOMTUFYGMCCPZLLIJAVIBPAXIDKNZKRCIFIZBCFFNHOTGEGUJXXWHAGVRPSGKYCVWEHHNFPUVUXKKAHIVFUJVTJQANDPOMVDYBYNDWF");
    msg.value = 98U;

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
    msg.setTimeStamp(0.6935354082466487);
    msg.setSource(38910U);
    msg.setSourceEntity(189U);
    msg.setDestination(43130U);
    msg.setDestinationEntity(67U);
    msg.value = 0.07423626029612607;

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
    msg.setTimeStamp(0.623828784518242);
    msg.setSource(22881U);
    msg.setSourceEntity(64U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(56U);
    msg.value = 0.2797416009927467;

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
    msg.setTimeStamp(0.4053720866138141);
    msg.setSource(1993U);
    msg.setSourceEntity(130U);
    msg.setDestination(28192U);
    msg.setDestinationEntity(183U);
    msg.value = 0.2721297698002051;

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
    msg.setTimeStamp(0.4793074021675733);
    msg.setSource(29252U);
    msg.setSourceEntity(85U);
    msg.setDestination(41341U);
    msg.setDestinationEntity(93U);
    msg.value = 0.9136834267497871;

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
    msg.setTimeStamp(0.5521728105350846);
    msg.setSource(26040U);
    msg.setSourceEntity(101U);
    msg.setDestination(40512U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9218441419336586;

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
    msg.setTimeStamp(0.43574444973171844);
    msg.setSource(17895U);
    msg.setSourceEntity(161U);
    msg.setDestination(14239U);
    msg.setDestinationEntity(226U);
    msg.value = 0.17304462772079865;

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
    msg.setTimeStamp(0.28350301259800026);
    msg.setSource(37729U);
    msg.setSourceEntity(20U);
    msg.setDestination(36584U);
    msg.setDestinationEntity(233U);
    msg.value = 0.713307894018541;

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
    msg.setTimeStamp(0.9234866531467214);
    msg.setSource(6677U);
    msg.setSourceEntity(97U);
    msg.setDestination(41261U);
    msg.setDestinationEntity(27U);
    msg.value = 0.615580032455605;

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
    msg.setTimeStamp(0.5923349114924307);
    msg.setSource(54594U);
    msg.setSourceEntity(169U);
    msg.setDestination(34788U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5838817064893045;

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
    msg.setTimeStamp(0.32458172040213273);
    msg.setSource(64866U);
    msg.setSourceEntity(72U);
    msg.setDestination(50058U);
    msg.setDestinationEntity(61U);
    msg.restriction = 228U;
    msg.reason.assign("TPYKKUSLEANFDVUGIFJZRJYKBMVISFGULUPHEXIUFYYETZHXESHEULYSEQUEJZPOQV");

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
    msg.setTimeStamp(0.03450333727720212);
    msg.setSource(10859U);
    msg.setSourceEntity(61U);
    msg.setDestination(60641U);
    msg.setDestinationEntity(183U);
    msg.restriction = 116U;
    msg.reason.assign("EXFARMEYMWODFANOYLJWUJYPJEVHGYXMBSFXLLCSJOFACCMKHRGKLYPYWKZTRNGCUDOREWSAFCINAEOIVAWEJUWKPTLUNZNULNAXHKJOXKTHDUGBZPUETDRXFMWH");

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
    msg.setTimeStamp(0.25749795702909817);
    msg.setSource(800U);
    msg.setSourceEntity(110U);
    msg.setDestination(55551U);
    msg.setDestinationEntity(172U);
    msg.restriction = 37U;
    msg.reason.assign("BOPGXKBWTKSROWYNVQKUQSBJSLWRNKGJNTLYFS");

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
    msg.setTimeStamp(0.09227937349174997);
    msg.setSource(21107U);
    msg.setSourceEntity(234U);
    msg.setDestination(53477U);
    msg.setDestinationEntity(206U);
    msg.path_param = 0.23868945683182374;
    msg.lat = 0.49750539289053;
    msg.lon = 0.8263280163696731;
    msg.z = 0.18775757512203883;
    msg.r_f = 0.32397737881053745;
    msg.p = 0.6560039225596669;

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
    msg.setTimeStamp(0.21732058899957873);
    msg.setSource(1397U);
    msg.setSourceEntity(31U);
    msg.setDestination(3206U);
    msg.setDestinationEntity(166U);
    msg.path_param = 0.4608109494050847;
    msg.lat = 0.9022418941175782;
    msg.lon = 0.9549484835480619;
    msg.z = 0.012812433920980193;
    msg.r_f = 0.5025986438825533;
    msg.p = 0.3985941872625193;

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
    msg.setTimeStamp(0.5054266431914761);
    msg.setSource(9015U);
    msg.setSourceEntity(68U);
    msg.setDestination(25674U);
    msg.setDestinationEntity(143U);
    msg.path_param = 0.8855853462565318;
    msg.lat = 0.5123285918402529;
    msg.lon = 0.4669714722957157;
    msg.z = 0.44886687316643537;
    msg.r_f = 0.2509265495728341;
    msg.p = 0.8311796882454854;

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
    msg.setTimeStamp(0.4991637866016807);
    msg.setSource(23544U);
    msg.setSourceEntity(9U);
    msg.setDestination(21324U);
    msg.setDestinationEntity(28U);
    msg.path_param = 0.4279282442152579;
    msg.x = 0.37808968883075433;
    msg.y = 0.48489422542042904;
    msg.z = 0.19122275700968328;
    msg.r_f = 0.8385377615512463;
    msg.p = 0.7943624735605219;

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
    msg.setTimeStamp(0.7998381651345147);
    msg.setSource(42162U);
    msg.setSourceEntity(71U);
    msg.setDestination(51524U);
    msg.setDestinationEntity(125U);
    msg.path_param = 0.07487910092738193;
    msg.x = 0.4649113992546401;
    msg.y = 0.9355498565212568;
    msg.z = 0.48966779393729865;
    msg.r_f = 0.5615592401590889;
    msg.p = 0.14357762422857434;

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
    msg.setTimeStamp(0.06427459722753825);
    msg.setSource(45412U);
    msg.setSourceEntity(19U);
    msg.setDestination(17123U);
    msg.setDestinationEntity(248U);
    msg.path_param = 0.602152613460728;
    msg.x = 0.23800709494935557;
    msg.y = 0.16318315418640894;
    msg.z = 0.1561312167281501;
    msg.r_f = 0.4547756873112129;
    msg.p = 0.6130557589565158;

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
    msg.setTimeStamp(0.5547665828261394);
    msg.setSource(1587U);
    msg.setSourceEntity(60U);
    msg.setDestination(6847U);
    msg.setDestinationEntity(210U);
    msg.op = 102U;
    msg.experiment = 105U;
    msg.obstacle = 74U;
    msg.delay = 0.18794813228477314;

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
    msg.setTimeStamp(0.04873948652500315);
    msg.setSource(64315U);
    msg.setSourceEntity(248U);
    msg.setDestination(63227U);
    msg.setDestinationEntity(178U);
    msg.op = 218U;
    msg.experiment = 45U;
    msg.obstacle = 223U;
    msg.delay = 0.7910838920752545;

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
    msg.setTimeStamp(0.7291524986324833);
    msg.setSource(63485U);
    msg.setSourceEntity(123U);
    msg.setDestination(32524U);
    msg.setDestinationEntity(226U);
    msg.op = 202U;
    msg.experiment = 98U;
    msg.obstacle = 98U;
    msg.delay = 0.797327913687358;

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
    msg.setTimeStamp(0.35386238421107163);
    msg.setSource(21586U);
    msg.setSourceEntity(232U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(39U);
    msg.path_lat = 0.899813264420704;
    msg.path_lon = 0.26411833177430344;
    msg.path_z = 0.44802766739680566;
    msg.path_a = 0.23004973805272222;
    msg.path_b = 0.27069971052048936;
    msg.path_c = 0.06432971255457753;
    msg.path_clockwise = 176U;
    msg.path_psi = 0.2949560515052533;
    msg.path_z_freq = 0.3897469283822872;
    msg.path_phi0 = 0.6169464355587759;
    msg.path_z_phi0 = 0.17260190178538648;
    msg.los_lookahead = 0.8656871133595887;
    msg.los_speed = 0.26508620106947367;
    msg.los_gain = 0.8472606507873748;
    msg.los_adaptive = 13U;
    msg.form_x = 0.16365097133038853;
    msg.form_y = 0.31281500033488185;
    msg.form_z = 0.7829216089866066;
    msg.form_max_speed = 0.023675487021296404;
    msg.form_gain = 0.9287276907035878;
    msg.oa_radius = 0.28028791621089233;
    msg.oa_cone = 0.893939362474911;
    msg.oa_hysteresis = 0.9930610543777881;
    msg.obs_lat = 0.0015924446343207332;
    msg.obs_lon = 0.3703755712616348;
    msg.obs_vx = 0.3126726819814384;
    msg.obs_vy = 0.8872310989846282;

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
    msg.setTimeStamp(0.8067696636742906);
    msg.setSource(29492U);
    msg.setSourceEntity(173U);
    msg.setDestination(48349U);
    msg.setDestinationEntity(62U);
    msg.path_lat = 0.7321184969639598;
    msg.path_lon = 0.5025469694661197;
    msg.path_z = 0.09776569115071232;
    msg.path_a = 0.7850618520344291;
    msg.path_b = 0.6592715543353225;
    msg.path_c = 0.9257219035142913;
    msg.path_clockwise = 84U;
    msg.path_psi = 0.7331141731356938;
    msg.path_z_freq = 0.2829247042513561;
    msg.path_phi0 = 0.21552400682274053;
    msg.path_z_phi0 = 0.2675722079535914;
    msg.los_lookahead = 0.4098434169815821;
    msg.los_speed = 0.7834706918097865;
    msg.los_gain = 0.6341924488407699;
    msg.los_adaptive = 162U;
    msg.form_x = 0.4867865096708942;
    msg.form_y = 0.6613671558075497;
    msg.form_z = 0.028286024430896006;
    msg.form_max_speed = 0.8015565774157825;
    msg.form_gain = 0.5640955312742945;
    msg.oa_radius = 0.9059272863416135;
    msg.oa_cone = 0.9232771164414147;
    msg.oa_hysteresis = 0.36021266297845844;
    msg.obs_lat = 0.7066721761219824;
    msg.obs_lon = 0.9274798063678827;
    msg.obs_vx = 0.5861504027292714;
    msg.obs_vy = 0.2834508898571999;

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
    msg.setTimeStamp(0.6380412185445313);
    msg.setSource(26781U);
    msg.setSourceEntity(253U);
    msg.setDestination(7217U);
    msg.setDestinationEntity(101U);
    msg.path_lat = 0.8539930199860749;
    msg.path_lon = 0.15920169129143213;
    msg.path_z = 0.7863052703078973;
    msg.path_a = 0.5739403542712513;
    msg.path_b = 0.06943671044608091;
    msg.path_c = 0.34606190988494334;
    msg.path_clockwise = 32U;
    msg.path_psi = 0.8179471604666563;
    msg.path_z_freq = 0.5604776892865003;
    msg.path_phi0 = 0.6271816878629848;
    msg.path_z_phi0 = 0.4741161011841226;
    msg.los_lookahead = 0.7906624319078226;
    msg.los_speed = 0.15261712770802138;
    msg.los_gain = 0.4625683882892514;
    msg.los_adaptive = 106U;
    msg.form_x = 0.37303533792291;
    msg.form_y = 0.6077373045429493;
    msg.form_z = 0.4501906806568471;
    msg.form_max_speed = 0.8548022472132571;
    msg.form_gain = 0.29618335750828695;
    msg.oa_radius = 0.19735578697112977;
    msg.oa_cone = 0.7055697193040064;
    msg.oa_hysteresis = 0.39898118770046387;
    msg.obs_lat = 0.7556491418784289;
    msg.obs_lon = 0.17614783216729002;
    msg.obs_vx = 0.8643421655934305;
    msg.obs_vy = 0.6119202993886405;

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
    msg.setTimeStamp(0.8825609131999849);
    msg.setSource(41502U);
    msg.setSourceEntity(121U);
    msg.setDestination(10916U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.3143071313546948);
    msg.setSource(18102U);
    msg.setSourceEntity(87U);
    msg.setDestination(21180U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.011237268801729372);
    msg.setSource(33596U);
    msg.setSourceEntity(60U);
    msg.setDestination(30236U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.9814520579571137);
    msg.setSource(57354U);
    msg.setSourceEntity(186U);
    msg.setDestination(59449U);
    msg.setDestinationEntity(99U);
    msg.system = 51794U;
    msg.offset = 0.15567720945352148;

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
    msg.setTimeStamp(0.1584874367586393);
    msg.setSource(7189U);
    msg.setSourceEntity(119U);
    msg.setDestination(36561U);
    msg.setDestinationEntity(3U);
    msg.system = 61453U;
    msg.offset = 0.386737395740852;

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
    msg.setTimeStamp(0.19066219258561978);
    msg.setSource(43643U);
    msg.setSourceEntity(211U);
    msg.setDestination(12126U);
    msg.setDestinationEntity(136U);
    msg.system = 27666U;
    msg.offset = 0.6642519589692412;

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
    msg.setTimeStamp(0.43813220635355643);
    msg.setSource(42082U);
    msg.setSourceEntity(53U);
    msg.setDestination(31307U);
    msg.setDestinationEntity(107U);
    msg.op = 77U;
    msg.id = 18115U;

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
    msg.setTimeStamp(0.8661382147490537);
    msg.setSource(28824U);
    msg.setSourceEntity(145U);
    msg.setDestination(25837U);
    msg.setDestinationEntity(134U);
    msg.op = 254U;
    msg.id = 51158U;

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
    msg.setTimeStamp(0.767637538517328);
    msg.setSource(1877U);
    msg.setSourceEntity(129U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(184U);
    msg.op = 26U;
    msg.id = 37019U;

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
